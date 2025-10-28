# Parameters Common to Most Read Modules

Many read modules follow a common pattern for specifying which timesteps to read and how to distribute the reading across MPI ranks.
Timestep numbering is 0-based, i.e., the first timestep is designated by 0, the second timestep is timestep 1, and so on.
This is controlled by the following parameters:

|name|description|type|
|-|-|-|
|[](#first_step)|first timestep to read|Int|
|[](#last_step)|last timestep to read (-1: last available)|Int|
|[](#step_increment)|number of steps to increment|Int|
|[](#first_rank)|rank for first partition of first timestep|Int|
|[](#distribute_time)|distribute timesteps across MPI ranks|Int|

### `first_step`

Set this to the index of the first timestep to read. The default is 0, which designates the first timestep available.

### `last_step`

Set this to the index of the last timestep to read. The default is -1, which designates the last timestep available.

### `step_increment`

This parameter specifies the increment between timesteps to read. For example, setting this to 2 will read every second timestep between `first_step` and `last_step`.
Setting this to 1 (default) will read every timestep in the specified range.
Providing a negative value reverses the order of timesteps read.

### `first_rank`

This parameter specifies the MPI rank that will read the first partition of the first timestep.
Use this to offset the rank assignment when multiple reader modules are used in the same pipeline, to avoid all modules trying to read the same partitions on the same ranks.

### `distribute_time`

When set to 1, the available timesteps are distributed across the available MPI ranks, so that each rank reads a subset of the timesteps.
This allows parallel reading of multiple timesteps, which can significantly speed up the reading process when many timesteps are available.
The default is 0, which means that each rank reads all timesteps of the partitions assigned to it.
This is useful when the timesteps share common data, e.g. geometry, that can be reused across timesteps.


:::{note}
  :class: tip

  These parameters control the `Reader` base class functionality, which is used by most read modules.
  See [](../develop/module/implementation-reader.md) for using it in your own modules.
:::
