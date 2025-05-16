# Overview

[Vistle](https://vistle.io) is a software environment for scientific visualization of large-scale data sets. It implements a data-parallel visualization pipeline and can distribute the pipeline steps onto several interconnected clusters. Workflows are configured in an explicit graphical user interface. Vistle has a special focus on working in immersive virtual environments such as CAVEs and head-mounted displays. In order to enable visualization of large-scale data sets in such environments, object and image based remote rendering can be configured within the visualization workflows.

If you are already familiar with [COVISE](https://www.hlrs.de/covise/), this will give you a head-start because of a lot of similarities between the two systems: You can think of Vistle as a parallel version of COVISE. Refer to [](compare/covise.md) for notable differences.


# Anatomy of a Vistle Session

When you start Vistle by invoking `vistle`, you start a Vistle hub. This is a central process that controls the Vistle session. It opens a TCP port, usually 31093, but if this port is already in use, it will choose a different one. It will report the chosen port on the screen. It continues to spawn an MPI-parallel manager process so that it runs on every MPI rank. This is done by the script `spawn_vistle.sh` (on UNIX, or `spawn_vistle.bat` on Windows). The manager process then connects to the hub's TCP port. The hub also spawns a user interface process, which also connects to its TCP port. Every module has to be executed so that an MPI rank of the module runs on the same node as the same rank of the manager. This is required for shared memory communication between the manager and the modules.
