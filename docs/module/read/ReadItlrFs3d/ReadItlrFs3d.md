(mod-ReadItlrFs3d)=

# ReadItlrFs3d
read ITLR FS3D (Free Surface 3D) binary data

<svg width="79.6em" height="7.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="7.959999999999999em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >ReadItlrFs3d</text><rect x="0.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data0</title></rect>
<rect x="0.7em" y="3.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="6.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="6.8999999999999995em" class="text" >data output<tspan> (data0)</tspan></text>
<rect x="1.4em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data1</title></rect>
<rect x="1.9em" y="3.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="5.8999999999999995em" class="text" >data output<tspan> (data1)</tspan></text>
<rect x="2.5999999999999996em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data2</title></rect>
<rect x="3.0999999999999996em" y="3.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="4.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="4.8999999999999995em" class="text" >data output<tspan> (data2)</tspan></text>
</svg>

## Parameters


|name|description|type|
|-|-|-|
|increment_filename|replace digits in filename with timestep|Int|
|grid_filename|.bin file for grid|String|
|filename0|.lst or .bin file for data|String|
|filename1|.lst or .bin file for data|String|
|filename2|.lst or .bin file for data|String|
|num_partitions|number of partitions (-1: MPI ranks)|Int|


:::{admonition} Supported Reader Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[first_step](../../reader-parameters.md#first_step)|first timestep to read|Int|
|[last_step](../../reader-parameters.md#last_step)|last timestep to read (-1: last available)|Int|
|[step_increment](../../reader-parameters.md#step_increment)|number of steps to increment|Int|
|[first_rank](../../reader-parameters.md#first_rank)|rank for first partition of first timestep|Int|
|[distribute_time](../../reader-parameters.md#distribute_time)|distribute timesteps across MPI ranks|Int|

The meaning of these parameters is described in more detail in the [Reader Parameters](../../reader-parameters.md) documentation.
:::


:::{admonition} Supported System Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[_openmp_threads](../../system-parameters.md#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[_benchmark](../../system-parameters.md#_benchmark)|show timing information|Int|
|[_concurrency](../../system-parameters.md#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|
|[_prioritize_visible](../../system-parameters.md#_prioritize_visible)|prioritize currently visible timestep|Int|
|[_validate_objects](../../system-parameters.md#_validate_objects)|validate data objects before sending to port (Disable, Quick, Thorough)|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::

