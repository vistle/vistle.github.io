## Parallel Execution ##

In order to make use of the main memory and compute power of a cluster, Vistle can operate in parallel on a distributed memory machine. MPI is used for communicating between the instances of a module that are spawned on the different ranks of the machine. In this case, every process taking part in a Vistle session is replicated onto every node of the cluster, except for the user interface and the session hub/controller.

As far as possible, a module on a node will process only the data that is local to this node, and the local output of the module will be processed by the local downstream module instances. This avoids communication as far as possible (e.g. CuttingSurface and IsoSurface). Only if required, a module will communicate with its sibling instances running on other nodes (e.g. Tracer).
