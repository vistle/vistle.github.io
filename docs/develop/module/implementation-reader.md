# How to Write a Reader Module
:::{note}
As `Reader`s are special `Module`s, this article assumes you are familiar with the [basics on how to write a Vistle module](implementation-basics.md).
:::

`Reader` modules read in data from one or more data files, convert the given data into Vistle data structures and make it available to other Vistle modules through their output port(s).
Most of the modules found in the category [](project:#cat-Read) are based on this class.
`Reader` modules typically do not have input ports, as they read data from files (or other sources) instead of receiving data from other modules.
The filenames are provided by a string parameter.

Implementing `Reader` modules is very similar to implementing compute modules: their ports and parameters are defined in the same manner. However,
`Reader` modules do not directly inherit from the `vistle::Module` class, but rather inherit from the `vistle::Reader`, which in turn inherits from `vistle::Module`.
Moreover, the main work happens in the `read` instead of the `compute` method.

Using the `vistle::Reader` base class as foundation for a read module ensures that all readers follow the same pattern and simplifies their implementation, as it provides common functionality for handling multiple timesteps and partitions, as well as parallel execution.
The parameters described in the [](../../module/reader-parameters.md) documentation control this functionality and are automatically supported by the `vistle::Reader` base class.

## Overview
- [The `Reader` Class](#the-reader-class)
- [Sample Reader Module Code](#sample-reader-module-code)

## The `Reader` Class
Most modules for importing data into Vistle will want to inherit from the `vistle::Reader` class.
It provides common structure and functionality for reading data, such as handling multiple timesteps and partitions, and parallel execution.

Most of the implementation of a `Reader` module is done by overriding virtual methods of the `vistle::Reader` class.
The typical life cycle of a `Reader` module is as follows:
- The module is created and its constructor is executed. Here, the output ports and parameters are defined.
- After the parameters are set to their initial values or after they are modified, the `examine` method is called to check if the data can be read, and to retrieve metadata.
- When the user executes the module, the `prepareRead` method is called to allow for preparation before reading the data.
- The `read` method is called for every timestep and partition (if so requested).
- The `finishRead` method is called, providing a customization point for cleaning up after all read operations have completed.
- The module can be executed multiple times. The previous three steps are repeated every time the user executes the module.
- When the module is deleted, its destructor is called.

### The `Reader` Constructor
The constructor of a `Reader` class is executed as soon as the module is dragged into a Vistle workflow. Like in every [Vistle module](implementation-basics.md), it defines the outputs using `createOutputPort("portname", "description of the port")`.
Instead of defining input ports and transforming the received data, file names can be specified by the user by setting a parameter that is added by defining a class variable of type `vistle::StringParameter`.
This is done with `addStringParameter("filename", "description of the parameter", "default filename")`.
In order to let the user interface show a file browser instead of just a text entry field, a fourth parameter should be added. If the read module should requires an input file, this should be `Parameter::ExistingFilename`, if instead a whole directory is required, `vistle::Parameter::ExistingDirectory` should be used.

There is the possibility to observe when a parameter value is modified by the user by registering it using `observeParameter(parameter)`: every time the specified parameter is changed, the `examine` method is called.

For computing everything in parallel, the method `setParallelizationMode` can be set to `ParallelizeTimeAndBlocks` or to `Serial`, if serial processing is required. This can be done in the constructor or later in `examine` or `prepareRead`, if depending on the data.
If opting in to parallel processing, the `read` method can be called from multiple threads on each MPI rank, and different MPI ranks can be assigned different timesteps and partitions.
This requires that your code as well as all the libraries that it calls are thread-safe.

### The `examine` Method
The `examine` method is called whenever an observed parameter is changed (see [](#the-reader-constructor)).
As this occurs frequently, calls to `examine` should be as quick as possible.
This also happens immediately after module construction, after all parameter values have been set, but then its argument is a `nullptr`.

This method is useful in order to check if the file exists and the data can be loaded. Here it is ensured that the data has the right format.
Also some metadata can be read and shown to the user, for example with `sendInfo`. This might be useful if the user needs additional information to set further parameters of the module.
This is also the place to update choice lists for choosing among the available mapped fields.

The return value of the `examine` method should be `true`, if the data can be read and if the module is now ready for execution.
It should return `false` otherwise, i.e. if an error occurs, the file does not exist or the data cannot be read. If `false` is returned, the module cannot be executed and the user should be informed about the error.

### The `prepareRead` and `finishRead` Methods
The `prepareRead` method is called once before any `read` call is invoked. Initial preparation before working on the dataset block by block can be done here.
Similar to the `examine` method, it ensures that the data is ready for the `read` method. If this is the case, it should return `true`.
If an error occurs, it should return `false`, and the module will not proceed to call `read`.

The `finishRead` method is called after all `read` operations have finished. The method can be used to erase objects that are no longer needed.

### The `read` Method
This is where the main work of a `Reader` module is done: building the Vistle data structures from the data read from the file(s).
While all the other methods are called from the module's main thread on every MPI rank, the `read` method can be called from multiple threads in parallel, depending on the parallelization mode (see [](#the-reader-constructor)).
It will be called once for every timestep and block, as specified by `setTimesteps` and `setPartitions` in the `examine` method (see [](#the-examine-method)).
In the read method, the data is translated to Vistle objects and these objects are added to the output ports that are constructed in the constructor of the reader. The read method has three arguments: the `token`, `timestep`, and the `block`. 

The `token` is the object that transfers the Vistle objects to their output ports. This is done by calling `token.addObject(outputport, object)`. Metadata corresponding to this module instance is added by `token.applyMeta(object)`. It is only possible to add one object to every output port in one call of the `read` method. 
This is why it is important that the module is set up appropriately in the constructor or the `examine` method regarding the number of timesteps and partitions.

The `timestep` is used if a non-stationary process with multiple timesteps should be visualized. The timestep number corresponding to constant data is -1, i.e., objects that are added with timestep -1 are shown also in every other timestep. In the default case, only the -1 timestep is executed. If further timesteps should be shown, the number of timesteps has to be set with `setTimesteps` in the `examine` method. This results in executing the read method as often as the number of timesteps. The timesteps can be animated in [](project:#cat-Render) modules such as [](project:#mod-COVER).

If `setPartitions` has been called with a parameter larger than 1, the `read` method will be executed more than once for the same timestep. The `block` parameter will vary accordingly and in each call should arrange for creating the data corresponding to this sub-domain of the dataset.
These calls might be scheduled on different MPI ranks and simultaneously in multiple threads on the same rank, depending on the parallelization mode (see [](#the-reader-constructor)).
Working on these partitions in parallel can improve performance, especially for large datasets.

The return value of the `read` method should be `true`, if the data has been read successfully and `false` otherwise, e.g., if an error occurs.
No other calls to `read` will be made after a `false` return value.

## Sample Reader Module Code
The following code shows the basic structure of an example read module with the name **MyReader**.

```cpp
#ifndef MYREADER_H
#define MYREADER_H

#include <vistle/module/reader.h>

class MyReader: public vistle::Reader {
public:
    MyReader(const std::string &name, int moduleID, mpi::communicator comm);

    bool examine(const vistle::Parameter *param) override;
    bool read(vistle::Reader::Token &token, int timestep = -1, int block = -1) override;

private:
    vistle::StringParameter *m_filename = nullptr;
};

#endif //MYREADER_H
```

... and its corresponding source file:

```cpp
#include "MyReader.h"

MODULE_MAIN(MyReader)

using vistle::Reader;
using vistle::Parameter;

MyReader::MyReader(const std::string &name, int moduleID, mpi::communicator comm): Reader(name, moduleID, comm)
{
    createOutputPort("grid_out", "output grid");

    m_filename = addStringParameter("filename",
                                    "the file containing the data that is to be read in",
                                    "", Parameter::ExistingFilename);
    observeParameter(m_filename);
}

bool MyReader::examine(const vistle::Parameter *param)
{
    if (!param || param == m_filename) {
        // if param is nullptr, the method is called right after all parameters have received their initial values

        // check if the file exists and can be read...
        // read metadata, if available...

        // set number of timesteps and partitions, if necessary
        // setTimesteps(<number of timesteps>);
        // setPartitions(<number of partitions>);
    }

    return true; // return false in case of an error
}

bool MyReader::read(vistle::Reader::Token &token, int timestep, int block)
{
    // read in the data from the file...
    Vistle::Object::ptr object = ...; // create a Vistle object containing the data

    token.applyMeta(object); // add metadata to the object, if available
    token.addObject("grid_out", object); // add the object to the output port
    
    return true;
}
```
