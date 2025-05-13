# Example: Visualizing OpenFOAM Simulation Results

<!-- TODO: add Visualizing Grids -->

In this follow-along tutorial you will learn how to visualize a sample CFD dataset which was simulated using OpenFOAM.

## Overview
- [Getting the Sample Dataset](#getting-the-sample-dataset)
- [Reading in the Simulation Results](#reading-in-the-simulation-results)
- [Visualizing Scalar Data Fields](#visualizing-scalar-data-fields)
- [Visualizing Vector Data Fields](#visualizing-vector-data-fields)
- [Adding 3D Models to the Visualization](#adding-3d-models-to-the-visualization)

## Getting the Sample Dataset

The data for this tutorial will be the motorbike tutorial which comes with OpenFOAM. First, follow the instructions on [OpenFOAM's official website](https://www.openfoam.com/news/main-news/openfoam-v2412) to install the software on your system.

Next, open a terminal and set up the OpenFOAM environment:
```bash
source <OpenFOAM directory>/etc/bashrc
```
Replace `<OpenFOAM directory>` with the folder you installed OpenFOAM to, e.g., `/opt/OpenFOAM/OpenFOAM-v2412`. This sets up all necessary environment variables in your terminal, including `FOAM_TUTORIALS` which hosts the official tutorial simulation cases.

Create a working directory, navigate into it and copy the motorbike data into the new folder:
```bash
mkdir run && cd run
cp -r $FOAM_TUTORIALS/incompressible/simpleFoam/motorBike .
```

Navigate into the `motorBike` folder and run the simulation:

```bash
cd motorBike
./Allrun
```

This generated the simulation results we will start to visualize in Vistle in the next section.
Later on, we will also add the 3D model of the motorcyclist to the visualization, so as a final step, we need to extract `motorBike.obj`:

```bash
cd constant/triSurface
gunzip motorBike.obj.gz 
```
## Reading in the Simulation Results

Now, that we have generated the simulation results using OpenFOAM, we can open Vistle to read them in and create a visualization workflow.

To open Vistle, navigate to Vistle's root directory, i.e., the directory containing the Vistle repository, and execute the following in a terminal:
```bash
vistle
```

You can save the workflow anytime with the `File` &rarr; `Save`  buttons or  by using `CTRL` + `S`.

Locate the `ReadFoam` module in the module browser and drag and drop it into the workflow area on the left:
![](openfoam/openfoam_select_readfoam.png)

Note that you can also search for modules by name with `Filter`.

Left-click on the `ReadFoam` module to open the Module Browser on the right:

![](openfoam/openfoam_readfoam_moduleparameters.png)

First, select the case directory containing the simulation data, i.e., the path to the `motorBike` folder we have created in the first section of this guide (see 1 in figure above), by either copying the full path into the text field or by browsing for it with the folder button.
Double-click on the `ReadFoam` module to execute it.

After executing the module once, you will be able to select up to three data fields of interest with the help of the drop-down lists `Data0`, `Data1` and `Data2`. For the sake of this tutorial, we chose the vector field `U`, i.e., the air flow's velocity, as well as the scalar data field `p`, i.e., the pressure (see 2 in figure above). 
The first port of `ReadFoam` now contains the data grid used in the simulation, the second one contains the three-dimensional velocity vector field and the third port the scalar pressure data field.

**Tip:** For large datasets consisting of multiple timesteps, you can select which timesteps should be read in (see 3 in figure above). By default, all timesteps are read in. You can specify the range of timesteps with the `first step` and `last step` parameters and you can also change the `step increment`. To, e.g., read in every 5th time step in the dataset, you would set `step increment` to 5, `first step` to 0 (this is the first time step) and `last step` to -1 (which is the last time step). Reducing the number of time steps is useful to reduce the execution time and RAM requirements for very large datasets, which makes it easier to play around with different visualization modules and module parameters while creating a visualization workflow. Once you are happy with the workflow, you can read in the entire dataset.

## Visualizing Grids
![](openfoam/openfoam_visualizing_grid.png)

## Visualizing Scalar Data Fields
<!-- remove grid visualization, otherwise in the way -->

<!--  p-Cuttingsurface: show how to change parameters of Cuttingsurface (in Module Browser and in Cover wiht pick interactor, this is easier with a BoundingBox) <-- also show how to add/adjust colormap! -->
![](openfoam/openfoam_scalar_color.png)

![](openfoam/openfoam_scalar_colormap.png)

![](openfoam/openfoam_scalar_cuttingSurface.png)

![](openfoam/openfoam_scalar_pickInteractor.png)

## Visualizing Vector Data Fields

## Adding 3D Models to the Visualization
<!-- Tracer + Thicken + ToTriangles and all the parameters to make it look nice ':D   -->

