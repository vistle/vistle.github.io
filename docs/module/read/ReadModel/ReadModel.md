(mod-ReadModel)=

# ReadModel
read polygonal geometry models with Assimp (STL, OBJ, 3DS, Collada, DXF, PLY, X3D, ...)

<svg width="62.199999999999996em" height="5.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="6.22em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >ReadModel</text><rect x="0.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_out</title></rect>
<rect x="0.7em" y="3.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="4.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="4.8999999999999995em" class="text" >grid or geometry<tspan> (grid_out)</tspan></text>
</svg>

## Parameters


|name|description|type|
|-|-|-|
|filename|name of file (%1%: block, %2%: timestep)|String|
|indexed_geometry|create indexed geometry?|Int|
|triangulate|only create triangles|Int|
|first_block|number of first block|Int|
|last_block|number of last block|Int|
|ignore_errors|ignore files that are not found|Int|


:::{admonition} Supported Reader Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[first_step](../../reader-parameters.md#first_step)|first timestep to read|Int|
|[last_step](../../reader-parameters.md#last_step)|last timestep to read (-1: last available)|Int|
|[step_increment](../../reader-parameters.md#step_increment)|number of steps to increment|Int|
|[first_rank](../../reader-parameters.md#first_rank)|rank for first partition of first timestep|Int|

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

