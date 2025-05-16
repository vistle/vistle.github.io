# Using Acceleration Hardware and Many Core Processors

For accelerated parallel processing, Vistle uses the [Viskores](https://github.com/Viskores/viskores) framework.
Development of this framework started under the name [VTK-m](https://m.vtk.org).
Its data structures are tightly integrated with the Vistle data structures.
Viskores is a library for parallel processing of large datasets on many-core processors.
It is also able to manage memory architectures where the main processor and the accelerator do not share memory.
 It enables implementation of parallel algorithms in a platform independent way and already provides implementations of many visualization algorithms.

While Viskores is designed to be used with many backends, such as [Threading Building Blocks](https://github.com/uxlfoundation/oneTBB), [OpenMP](https://openmp.org), [CUDA](https://developer.nvidia.com/cuda-zone), and more via [Kokkos](https://kokkos.org), our work was focused on CUDA.

Vistle wraps many of the algorithms provided by Viskores in modules.
It also provides some modules based on this framework performing functions that are not available within Viskores.
All of these modules are suffixed with `Vtkm` in the module library.

Vistle strives to be as versatile as possible. Its own algorithms try to support a variety of grid and cell types. In particular, also polyhedral cells with an arbitrary number of vertices are supported within unstructured grids.
Viskores, on the other hand, does not (yet) support this.
In order to prepare polyhedral data for Viskores based modules, you will need to tessellate into tetrahedra using the [](project:#mod-SplitPolyhedra) module.

Some visualization techniques are implemented both based on Viskores and for CPUs only.
Vistle enables to switch between these implementations by replacing the module in the workflow:
right-click on the module in the graphical workflow and select *Replace With...* from the context menu.

This is an area of active development.
