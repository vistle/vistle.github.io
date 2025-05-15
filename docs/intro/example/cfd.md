# A Simple CFD Example

In this section, we will study basic visualization techniques for scalar and vector fields by working with a small CFD data set.

## The Data

The data that we will work with is the same as used in the [COVISE tutorial](https://fs.hlrs.de/projects/covise/doc/html/tutorial/index.html). It is distributed in the [COVISE source repository](https://github.com/hlrs-vis/covise/) and comes with every COVISE installation in the subdirectory `.../share/covise/example-data/tutorial`. You can also get it by downloading the raw contents of the files in [this directory](https://github.com/hlrs-vis/covise/tree/master/share/covise/example-data/tutorial) from GitHub. It is provided in native COVISE format. It shows the results of a flow simulation in a channel with two inlets and contains scalar data fields for pressure (`tiny_p.covise`), temperature (`tiny_te.covise`) and viscosity (`tiny_vis.covise`) as well as the velocity vector field (`tiny_ve.covise`) on an unstructured grid (`tiny_geo.covise`).

### Reading the Data

Reading of data in COVISE format is accomplished with the [](project:#mod-ReadCovise) or [](project:#mod-ReadCoviseDirectory) modules. Both can read up to three fields mapped onto the same grid. The first can handle grid and field data at arbitrary locations in the filesystem. The latter requires that grid and field data reside in the same directory – with the advantage of a more comfortable user interface for selecting the fields to be read.

To start, drag *ReadCoviseDirectory* from the module library to the empty canvas in the center of the graphical user interface. This will start the module and show a representation of it as a turquoise box.
Then continue with selecting the directory where to find the data. This is a [parameter](../gui/gui.md#Parameters) of the module.
Select the module by clicking on the turquoise box. A pink outline indicates that this module is selected.
The user interface will show the parameters of this module in the [parameter area](../gui/gui.md#module-browser-and-parameters).
Make sure that only this module is selected -- otherwise the GUI will not enable the module parameters view.

In the area labeled *Parameters: ReadCoviseDirectory* find the line for the *directory* parameter and click on the folder icon.
This will bring up a file browser window.
Use it to navigate to the directory where you have the COVISE source code. From there, continue to `share/covise/example-data/tutorial` and click on *Choose*.
The module will search the directory for files with the extension `.covise` and will present them in the parameter combo boxes (drop down lists) for *grid*, *normals*, and the data fields *field0*, *field1*, ...

At this stage, we are only interested in the geometric structure of the computational domain.
So it is sufficient to select `tiny_geo` on the *grid* parameter.

[Workflow read-geo](vistle:///open#workflow/tutorial/read-geo) shows the module with the selected directory and the grid file.

## Examining the Geometry

### Find the Extents of the Geometry Domain

The [](project:#mod-BoundingBox) module takes its geometry input and finds global minimum and maximum values for its coordinates. The result of this process can be seen in its parameter window as the values of the `min` and `max` parameters. And of course, it can compute a tight axis-aligned cuboid around the domain of the data. This surrounding box can guide you to the interesting areas of space, it can provide visual clues that help with orientation in 3D space.
The numerical values can be used to provide input for modules requiring coordinates as parameter input.

This bounding box can also be inspected visually by loading it into the [COVER](project:#mod-COVER) renderer. This will open up another window. Connect the output of *BoundingBox* to the input of *COVER* and rerun the workflow.
You can bring the bounding box into view by clicking on the *View All* icon in the toolbar right of the animation controls in the *COVER* window. This will show the bounding box in a light gray color.
In order to get an idea of the location and size of the bounding box, you can enable a unit sized coordinate system in the renderer by enabling it with the *View Options* -> *Show axis* in the menu of the *COVER* window.
The coordinate system will be shown in red, green, and blue colors for the *x*, *y*, and *z* axes, respectively.

[Workflow geo-bounds](vistle:///open#workflow/tutorial/geo-bounds) shows how to compute and display geometry bounding box.


### Show the Boundary of the Geometry Domain

The shape of the computational domain can be visualized with the [](project:#mod-DomainSurface) module. It is available from its first, i.e. left-most output. After connecting it to *COVER* and executing the workflow, it will show the outer surface of the geometry in a light gray color.
If you are interested what triangles make up this surface, you can show visualize them by switching to *Wireframe* in the *View options* -> *Draw style* menu of *COVER*. This will show the outlines of the triangles.

It also provides a second output port providing lines showing the edges of the domain.
Currently, this is only a rough approximation, as only those edges that do not neighbor with other cells are shown.

[Workflow geo-surface](vistle:///open#workflow/tutorial/geo-surface) shows how to compute the geometric domain.

### Show the Tessellation of the Geometry Domain

[](project:#mod-ShowGrid)

### Clip Geometry at a Plane

[](project:#mod-CutGeometry)
[](project:#mod-ClipVtkm)


## Visualizing Scalar Fields

[](project:#mod-CuttingSurface)

[](project:#mod-IsoSurface)

[](project:#mod-Color)


## Visualizing Vector Fields

[](project:#mod-Tracer)

[](project:#mod-VectorField)


## Bringing it all together
