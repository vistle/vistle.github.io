## Remote Rendering ##

In a distributed workflow it is also possible to employ remote rendering. It integrates transparently with the pipeline: the modules [](project:#mod-ANARemote) and [](project:#mod-DisCOVERay) can be used to generate images on the remote system, which can be displayed on a local system with the module [](project:#mod-COVER). It is also possible to combine this with data that is rendered locally by *COVER*.

A remote rendering workflow can be configured in the graphical workflow editor, just as any other workflow, by adding a *remote rendering module* such as *ANARemote* or *DisCOVERay* to the workflow on the remote system and connecting the output of this to a local *COVER*. The remote render module will compute images of its input data and send images of the data to *COVER* when required, e.g. because of changed viewpoints or updated data.

For better interactive performance, a direct network connection is the default communication path for user interaction and image data. There are several ways to establish a connection between remote renderer and *COVER*.


