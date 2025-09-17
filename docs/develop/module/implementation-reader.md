# How to Write a Reader Module
<!-- TODO: add a section about the other methods in vistle::Reader (examine, prepareRead, finishRead) -->
This article assumes you are familiar with the [basics on how to write a Vistle module](implementation-basics.md).

Read modules read in data from one or more data files (the filenames are given through a string parameter, not the input port), convert the given data into Vistle data structures and make it available to other Vistle modules through their output port(s).

Implementing read modules is very similar to implementing compute modules: their ports and parameters are defined in the same manner. However, read modules inherit from the `vistle::Reader` instead of the `vistle::Module` class. Moreover, the main work happens in the `read` instead of the `compute` function.

## Overview
- [The read Constructor](#read-constructor)
- [The examine Function](#examine)
- [The prepareRead and finishRead Function](#prepareRead-finishRead)
- [The read Function](#read)
- [Sample Reader Module Code](#sample-module-code)

## The read Constructor
The read Constructor is executed as soon as the module is dragged into a Vistle workflow. Like in every Vistle module, it defines the outputs using createOutputPort("portname", "description of the port"). Instead of defining input ports, files are added by defining a class variable vistle::StringParameter that is set with addStringParameter("filename", "description of the file", "specific file or "" for any file", Parameter::ExistingFilename). A whole directory can be added by using the parameter type vistle::Parameter::ExistingDirectory.

For computing everything in parallel, the function setParallelizationMode can be set to ParallelizeTimeAndBlocks or to Serial if serial processing is required. This is also done in the constructor.

There is the possibility to observe when a parameter is changed by the user using observeParameter(parameter). Every time the specified parameter is changed, the examine method is called.

## The examine Function
The examine function is called whenever an observed parameter is changed (see [The read Constructor](#read-constructor)) or the module is dropped in the workflow. In this method it is useful to check if the file exists and the data can be loaded. Here it is ensured that the data has the right format and some metadata can be read and shown, for example with sendInfo to the user. The output of the examine function should be true if the data can be read and false otherwise, if an error is thrown. 

## The prepareRead and finishRead Function
The prepareRead function is called before every read. Similar to the examine function, it ensures that the data is ready for the read method. If this is the case, it returns true and otherwise false.

The finishRead function is called after every read. The function can be used to erase objects that are no longer needed.

## The read Function
In the read function, the data is translated to Vistle objects and these objects are added to the output ports that are constructed in the constructor of the reader. The read function has three inputs: the token, timestep, and the block. 

The token is the object that transfers the Vistle objects to their output ports. This is done by calling token.addObject(outputport, object). The metadata is added by token.applyMeta(object). It is only possible to add one object to every output port in an instance of read. 

The timestep is used if a process with different timesteps should be visualized. The constant timestep is -1, i.e., objects that are added in timestep -1 are shown also in every other timestep. In the default case, only the -1 timestep is executed. If further timesteps should be shown, the number of timesteps has to be set with setTimesteps in the examine function. This results in executing the read method as often as the number of timesteps. The timesteps can be animated in COVER.

If more than one read method should be executed in the same timestep, the block parameter can be modified. The block parameter is 1 by default and can be set with setPartitions(<number of blocks>) in the examine function. These partitions can also be parallelized and can improve performance.

## Sample Reader Module Code
The following code shows the basic structure of an example read module with the name **MyReader**...

```cpp
#ifndef MYREADER_H
#define MYREADER_H

#include <vistle/module/reader.h>

class MyReader: public vistle::Reader {
public:
    MyReader(const std::string &name, int moduleID, mpi::communicator comm);
    ~MyReader() override;

    bool read(vistle::Reader::Token &token, int timestep = -1, int block = -1) override;

private:
    vistle::StringParameter *m_filename;
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

    m_filename = addStringParameter("filename", "the file containing the data that is to be read in", "",
                                    Parameter::ExistingFilename);
    observeParameter(m_filename);
}

MyReader::~MyReader()
{}

bool MyReader::read(vistle::Reader::Token &token, int timestep, int block)
{
    // read in the data from the file...
    
    return true;
}
```
