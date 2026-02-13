Catalyst II adapter for Vistle
=====================================

usage:

In the simulation code send conduit node with vistle conection details in catalyst_initialize.
An example node can be found in vistleCatalystConfig.yaml.
With the "catalyst/mpi_comm" node the mpi communicator can be passed to Vistle.
Alternatively environment variables can be used to pass initialization paramertes to Vistle:
VISTLE_INSITU_PAUSED --> to pause the simulation until Vistle is connected
VISTLE_INSITU_OPTIONS --> to pass command line arguments to Vistle in single process mode

For a multi process Vistle:
Export MPISIZE and MPIHOSTS/MPIHOSTFILE in an extra shell according to the simulation,
start Vistle and the [InSituModule]() module. The module should automatically connect and create output ports for the data fields the simulation provides.

How to use with OpenFOAM:
-------------------------
Tested [OpenFOAM](https://develop.openfoam.com/Development/openfoam.git) versions:
    v2406, v2412, v2506

Build [openfoam-catalyst2](https://gitlab.kitware.com/keu-public/openfoam-catalyst2.git) with your OpenFOAM version.

Setup your OpenFOAM case as and add the following function to it's controlDict:
```	
    catalyst
    {
        type        catalyst2;
        libs        ("/path/to/libcatalyst2Foam.so");
        enabled     true;
        // Vistle is not useing the ParaView script
        scripts ( "dummy.py" );

        // optional controls:
        executeControl  timeStep;
        executeInterval 1;
        writeControl    writeTime;
        writeInterval   1;
    }
```

Set some extra environment Variables for Vistle and Catalyst and make sure they are used on all ranks:
```	
export CATALYST_IMPLEMENTATION_NAME="vistle"
export CATALYST_IMPLEMENTATION_PATHS="/path/to/vistle/build/lib64/catalyst
export CATALYST_IMPLEMENTATION_PREFER_ENV=1
#For extra debug output:
export CATALYST_DEBUG=1
export VISTLE_INSITU_PAUSED=1
```	
Run you simulation and connect Vistle as described above.