Vistle is an extensible software environment that integrates simulations on supercomputers,
post-processing and parallel interactive visualization in immersive virtual environments.

It is under active development at [HLRS](https://www.hlrs.de "HLRS Web Page") since 2012
within the European project [CRESTA](https://cresta-project.eu) and
[bwVisu](http://bwvisu.de). The objective is to provide a highly scalable successor to
[COVISE](https://www.hlrs.de/covise), exploiting data, task and pipeline parallelism in hybrid shared and distributed memory
environments with acceleration hardware. Domain decompositions used during simulation can be reused for visualization.


A Vistle work flow consists of several processing modules, each of which is a parallel
MPI program that uses OpenMP within nodes.
These can be configured graphically or from Python.
Shared memory is used for transfering data between modules on a single node.
Work flows can be distributed across several clusters.

For rendering in immersive projection systems, Vistle uses [OpenCOVER](https://www.hlrs.de/opencover).
Visualization parameters can be manipulated from within the virtual environment. Large data sets can be displayed with OpenGL sort-last parallel rendering and depth compositing. For scaling with the simulation on remote HPC resources, a CPU based hybrid sort-last/sort first parallel ray casting renderer is available. "Remote hybrid rendering" allows to combine its output with local rendering, while ensuring smooth interactivity by decoupling it from remote rendering.

The Vistle system is modular and can be extended easily with additional visualization algorithms.
Source code is available on [GitHub](https://github.com/vistle/vistle "Vistle Repository at GitHub") and licensed under the LPGL.

![Graphical Workflow Editor](vistle-nodecoration.png)
