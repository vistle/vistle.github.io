# Workflows
A workflow is a directed acyclic graph (DAG) of Vistle modules which represent processing steps. Processing will follow the visualization pipeline. The necessary stages when creating a workflow strongly depend on the individual application. However, the following pipeline can be used as a reference:

![](workflow_pipeline.png)

## Visualization Pipeline Stages

### Acquisition
First, data needs to be imported, which is typically retrieved by [reading from files](project:#cat-Read) (although dynamic connection to [in-situ simulations](project:#cat-Simulation) is supported as well). Reader modules are provided for data import from files, for a number of different file formats (e.g. [OpenFOAM](project:#mod-ReadFoam), [VTK](project:#mod-ReadVtk),
[WRF](project:#mod-ReadWrfChem), [Nek5000](project:#mod-ReadNek5000), [EnSight Gold](project:#mod-ReadEnsight)). Moreover, they often allow to refine data to be read by setting limits in timesteps or selecting certain variables only.

### Filter
Features of interest can be extracted from the dataset through [filter modules](project:#cat-Filter). These include, among others, [cropping](project:#mod-ClipVtkm) [geometries](project:#mod-CutGeometry), [selecting specific grid layers](project:#mod-IndexManifolds) or the [surface of a geometry](project:#mod-DomainSurface).

### Map
[Mapping modules](project:#cat-Map) allow to visualize data values. This is achieved by transforming abstract data items into something that can be rendered, e.g. [mapping data values to colors](project:#mod-Color) or [computing isosurfaces](project:#mod-IsoSurface).

### Render & Display
Often, the two steps of [rendering pixel images](project:#cat-Render) and presenting them on screen are mashed together in a single program.
Only for workflows involving remote rendering, these steps are split up into two modules, e.g. [](project:#mod-DisCOVERay) and [](project:#mod-COVER).

## Module Categories

In the module library, modules are grouped into categories. Most of these categories have been established based on where in the pipeline the modules can occur. Please consult the [module reference](../../module/categories) for a complete list of the categories.
