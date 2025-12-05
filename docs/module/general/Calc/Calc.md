(mod-Calc)=

# Calc
compute with coordinates and data

## Ports


<svg width="50.0em" height="8.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="3.8em" width="5.0em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in0</title></rect>
<rect x="0.7em" y="0.7999999999999998em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.8999999999999998em" class="text" >input data<tspan> (data_in0)</tspan></text>
<rect x="1.4em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in1</title></rect>
<rect x="1.9em" y="1.7999999999999998em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="1.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="1.9em" class="text" >input data<tspan> (data_in1)</tspan></text>
<rect x="2.5999999999999996em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in2</title></rect>
<rect x="3.0999999999999996em" y="2.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="2.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="2.9em" class="text" >input data<tspan> (data_in2)</tspan></text>
<text x="0.2em" y="5.65em" class="moduleName" >Calc</text><rect x="0.2em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out</title></rect>
<rect x="0.7em" y="6.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="7.8999999999999995em" class="text" >output data<tspan> (data_out)</tspan></text>
</svg>

The Calc module performs calculations on input data and input coordinates according to user-defined formulas.
The output grid reuses the topology of the input geometry.
If no `grid_formula` or `normal_formula` is provided, also the output coordinates or output normals are reused from the input geometry, respectively.
The result of the calculation described by `formula` is mapped onto the output grid.


## Parameters


|name|description|type|
|-|-|-|
|formula|formula for computing data with exprtk (use result := {x,y,z} for vector output)|String|
|grid_formula|formula for computing grid coordinates|String|
|normal_formula|formula for computing grid normals|String|
|output_type|type of output (AsInput, AsInputGrid, Vec1, Vec3)|Int|
|species|species of output data|String|


:::{admonition} Supported System Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[_openmp_threads](../../system-parameters.md#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[_benchmark](../../system-parameters.md#_benchmark)|show timing information|Int|
|[_concurrency](../../system-parameters.md#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|
|[_cache_mode](../../system-parameters.md#_cache_mode)|input object caching (CacheNone, CacheDeleteEarly, CacheDeleteLate, CacheByName)|Int|
|[_prioritize_visible](../../system-parameters.md#_prioritize_visible)|prioritize currently visible timestep|Int|
|[_validate_objects](../../system-parameters.md#_validate_objects)|validate data objects before sending to port (Disable, Quick, Thorough)|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::


The expressions in the parameters `formula`, `grid_formula`, and `normal_formula` are
parsed with [ExprTK](https://www.partow.net/programming/exprtk/index.html), and so the operations and functions described in `SECTION 08 - BUILT-IN OPERATIONS & FUNCTIONS` of [this document](https://github.com/ArashPartow/exprtk) can be used.

The variables listed in this table are available to be used in the expressions.
Individual components of vector variables can be accessed using `.x`, `.y`, `.z` suffixes as shown,
for 1-dimensional variables `var` and `var.x` are equivalent.

:::{list-table} Available symbols and variables, and their meaning
:header-rows: 1

*  - Symbol / Variable
   - Description

*  - `result`
   - assign the computed value to this variable (done implicitly if no assignment is made)
*  - `outdim`
   - result dimension (typically 1 or 3)
*  - `p`
   - position vector of current point
*  - `x`, `p.x`
   - x coordinate of current point
*  - `y`, `p.y`
   - y coordinate of current point
*  - `z`, `p.z`
   - z coordinate of current point
*  - `d0`, `d`
   - data value at current item (point or cell) received at `data_in0`
*  - `d1`
   - data value at current item (point or cell) received at `data_in1`
*  - `d2`
   - data value at current item (point or cell) received at `data_in2`
*  - `timestep`, `step`
   - timestep number for current block
*  - `time`, `t`
   - real time for current block
*  - `rank`
   - MPI rank number
*  - `block`
   - block ID number of current block
*  - `i`, `idx`, `index`
   - index of current item (point or cell) in current block
:::
