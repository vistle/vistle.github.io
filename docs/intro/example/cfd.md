# A Simple CFD Example #

In this section, we will learn basic visualization techniques for scalar and vector fields by working with a small CFD data set.

## The Data ##

The data that we will work with is the same as used in the COVISE tutorial. It is distributed in the [COVISE source repository](https://github.com/hlrs-vis/covise/) and comes with every COVISE installation in the subdirectory `.../share/covise/example-data/tutorial`. You can also get it by downloading the raw contents of the files in [this directory](https://github.com/hlrs-vis/covise/tree/master/share/covise/example-data/tutorial) from GitHub. It is stored in COVISE format. It shows the results of a flow simulation in a channel with two inlets and contains scalar data fields for pressure (`tiny_p.covise`), temperature (`tiny_te.covise`) and viscosity (`tiny_vis.covise`) as well as the velocity vector field (`tiny_ve.covise`) on an unstructured grid (`tiny_geo.covise`).

## and ##

Reading of data in COVISE format is accomplished with the *ReadCovise* or *ReadCoviseDirectory* modules. Both can read up to three fields mapped onto the same grid. The first can handle grid and field data at arbitrary locations in the file system, whereas the latter requires that grid and field data reside in the same directory -- with the advantage of a more comfortable user interface for selecting the fields to be read.

To start, drag *ReadCoviseDirectory* from the module library to the empty canvas in the center  of the graphical user interface. This will start the module and show a representation of it as a turquoise box.

## Showing the Geometry ##

### Find the Extents of the Data Domain -- BoundingBox  ###

The *BoundingBox* module takes its geometry input and finds global minimum and maximum values for its coordinates. The result of this process can be seen in its parameter window as the values of the `min` and `max` parameters. And of course, it can compute a tight axis-aligned cuboid around the domain of the data. This is helpful as a rough guide to the interesting areas of the space, the box can provide visual clues that help with orientation in 3D space, and the numerical values can be used to provide input for modules requiring coordinates as parameter input.

### Show the Boundary of the Data Domain -- DomainSurface ###

*DomainSurface*

### Show the Tesselation of the Data Domain -- ShowGrid ###

*ShowGrid*

### Clip Geometry at a Plane -- CutGeometry ###

*CutGeometry*

## Visualizing Scalar Fields ##

CuttingSurface

IsoSurface

Color

## Visualizing Vector Fields ##

Tracer

VectorField


