# Parameters Common to Most Modules

|name|description|type|
|-|-|-|
|[](#_cache_mode)|input object caching (CacheNone, CacheDeleteEarly, CacheDeleteLate, CacheByName)|Int|
|[](#_prioritize_visible)|prioritize currently visible timestep|Int|
|[](#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[](#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|
|[](#_use_result_cache)|whether to try to cache results for re-use in subseqeuent timesteps|Int|
|[](#_benchmark)|show timing information|Int|
|[](#_validate_objects)|validate data objects before sending to port (Disable, Quick, Thorough)|Int|
|[](#_print_object_info)|print information on generated data objects for debug purposes|Int|



### `_cache_mode`
This parameter controls how input data objects are referenced in memory.
This is relevant if a module is executed multiple times, e.g. with modified parameters.
Only if the input data objects are cached, it is possible to execute the workflow starting at a later module, without re-executing all prior modules.
The available options are:
- `CacheNone`: do not keep references to input data objects between executions.
- `CacheByName`: store the name of the input data and use it, if it is still available.
- `CacheDeleteEarly`: hold a reference to the input data objects, release it before new data is received.
- `CacheDeleteLate`: hold a reference to the input data objects, release it after new data is received.

The last option is useful, if subsequent executions refer to common sub-objects and if they would otherwise be discarded locally, because they have been received from another cluster.

### `_prioritize_visible`
If set to 1, the module will try to compute processing the timestep that is currently visible, if possible.

### `_openmp_threads`
Override the number of OpenMP threads used by the module.
Set to 0 to use the system default.

### `_concurrency`
Most modules can process individual blocks/partitions individually and in parallel on each MPI rank.
This parameter sets an upper limit on how many blocks should be processed at one time.
The default value of -1 means to process half as many blocks as there are CPU cores on a node.

### `_use_result_cache`
Parts of the computation performed by a module may be re-usable across timesteps and blocks,
e.g., when only the mapped data changes but geometry is unchanged.
If this parameter is set to 1, the module will try to cache such results for re-use.
This can speed up processing and reduce memory consumption.

### `_benchmark`
If set to 1, the module will show timing information about its execution.
Execution of a module is divided into several phases: it starts with `prepare`, when it is notified by an upstream module, continues with `compute` for every block of input data, and finishes with `reduce` after all blocks and timesteps have been processed.
The time spent from the beginning of `prepare` to the end of `reduce` is reported, and this includes the time spent waiting for input data from upstream modules.

### `_validate_objects`
This parameter controls whether data objects created by the module are validated before being sent to the output port.
The available options are:
- `Disable`: do not validate data objects.
- `Quick`: perform only quick checks for plausibility that do not require accessing the full data.
- `Thorough`: perform thorough validation of the data objects, which may be time-consuming.

### `_print_object_info`
Show information about generated data objects on stderr.
This is only supported by the modules that are implemented using the [`VtkmModule`](../develop/module/implementation-gpu.md) base class.
