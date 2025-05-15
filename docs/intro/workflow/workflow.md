# Workflows
A workflow is a graph of Vistle modules which represent processing steps and implements a visualization pipeline. The necessary stages when creating a workflow strongly depend on the individual application. However, the following pipeline can be used as a reference:

![](workflow_pipeline.png)

## Visualization Pipeline Stages

### Acquisition
First, data needs to be imported, which is typically retrieved by reading from files (although dynamic connection to in-situ simulations is supported as well). Reader modules are provided for data import from files, for a number of different file formats (e.g. [OpenFOAM](project:#mod-ReadFoam), [VTK](project:#mod-ReadVtk),
[WRF](project:#mod-ReadWrfChem), [Nek5000](project:#mod-ReadNek5000), [EnSight Gold](project:#mod-ReadEnsight)). Moreover, they often allow to refine data to be read by setting limits in timesteps or selecting certain variables only.

### Filter
Features of interest can be extracted from the dataset through filter modules. These include, among others, cropping geometries, selecting specific grid layers or the surface of a geometry.

### Map
Mapping modules allow to visualize data values. This is achieved by mapping data values to colors or computing isosurfaces.

### Render & Display
Often, the two steps of rendering pixel images and presenting them on screen are mashed together in a single program.
Only for workflows involving remote rendering, these steps are split up into two modules, e.g. [](project:#mod-DisCOVERay) and [](project:#mod-COVER).
