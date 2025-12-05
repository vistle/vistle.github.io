(mod-FilterCells)=

# FilterCells
filter out some cells

## Ports


<svg width="73.8em" height="6.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="1.8em" width="7.38em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="1.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_in</title></rect>
<rect x="0.7em" y="0.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.9em" class="text" >unstructured grid with or without data<tspan> (grid_in)</tspan></text>
<text x="0.2em" y="3.6500000000000004em" class="moduleName" >FilterCells</text><rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_out</title></rect>
<rect x="0.7em" y="4.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="5.8999999999999995em" class="text" >filtered grid with or without data<tspan> (grid_out)</tspan></text>
</svg>


## Parameters


|name|description|type|
|-|-|-|
|filter_expression|elements for which this expression is true are filtered out, for supported symbols see selection lists|String|
|filter_type|on what to filter (Ghost, Elements, Vertices)|Int|
|supported_variables|variables available for use in filter expression (cellDiameter, datavalue, dimensionality, edgeLength, elem, numFaces, numVertices, surface, type, volume, x_center, x_max, x_min, y_center, y_max, y_min, z_center, z_max, z_min)|Int|
|supported_constants|constants available for use in filter expression (BAR, HEXA, HEXAHEDRON, LINE, NONE, PLG, PLH, POINT, POLYGON, POLYHEDRON, POLYLINE, PRISM, PT, PYR, PYRAMID, QUAD, TETRA, TETRAHEDRON, TRI, TRIANGLE)|Int|


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


The `filter_expression` is parsed with [ExprTK](https://www.partow.net/programming/exprtk/index.html), and so the operations and functions described in `SECTION 08 - BUILT-IN OPERATIONS & FUNCTIONS` of [this document](https://github.com/ArashPartow/exprtk) can be used.
The available variables and constants are listed in the parameters `supported_variables` and `supported_constants` respectively.

## Related Modules

### Similar Modules

[](project:#mod-Threshold), [](project:#mod-ClipVtkm)
