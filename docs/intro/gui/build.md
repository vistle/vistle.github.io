## Creating and Modifying Workflows ##

This section will show you how to create your own visualization workflows. When Vistle starts, you are presented with an empty workflow. Whenever you need to start over, you can do so by invoking *New* from the *File* menu.

### Adding Modules to a Workflow ###

Modules can be added to the workflow by dragging a template from the module library to the workflow area. The library becomes visible when no module is selected in the workflow area. Modules can be found quickly by "filtering" the library according to the string entered in the text input field at the top of the library.

### Connecting Modules ###

Modules need to be connected in order to be provided data to work on. You can establish links from output ports to input ports of other modules by "dragging" the mouse from the source port to the destination port. Do so by pressing the mouse button on the source port and while still pressing on it moving to the destination, where you release the mouse button.

A connection is represented as a line. A double click on this line will remove that connection.

Connection only work between compatible ports, i.e. the kind of data produced by the source has to be understood by the destination module at the connected input port. Currently, there is no mechanism to check this when establishing the link. Only when executing the workflow, the receiving module should notify you of incompatible input data.

### Module Parameters ###

The parameters of a module in the workflow can be modified after selecting it in the workflow area: the parameter dialog for this module will be shown instead of the module library.

### Session Parameters ###

### Saving a Workflow ###

The current workflow can be saved by using the *Save* or *Save As...* entries from the *File* menu. This means that all modules in the workflow together with their parameter values and connections will be stored as a [Python](../../advanced/scripting/scripting.md) script with the extension `.vsl`, so that the workflow can be loaded and executed again later.

