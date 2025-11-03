(mod-Color)=

# Color
map scalar and vector data to colors

<svg width="39.0em" height="5.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="1.8em" width="3.9em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="1.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in</title></rect>
<rect x="0.7em" y="0.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.9em" class="text" >field to create colormap for<tspan> (data_in)</tspan></text>
<text x="0.2em" y="3.6500000000000004em" class="moduleName" >Color</text></svg>

## Parameters


|name|description|type|
|-|-|-|
|species|species attribute of input data|String|
|min|minimum value of range to map|Float|
|max|maximum value of range to map|Float|
|auto_range|compute range automatically|Int|
|constrain_range|constrain range for min/max to data|Int|
|steps|number of color map steps|Int|
|map|transfer function name (COVISE, Plasma, Inferno, Magma, CoolWarmBrewer, CoolWarm, Frosty, Dolomiti, Parula, Viridis, Cividis, Turbo, Blue_Light, Grays, Gray20, ANSYS, Star, ITSM, Rainbow, Earth, Topography, RainbowPale, FromFile)|Int|
|rgb_file| file containing pin rgb values|String|
|center|center of colormap range|Float|
|center_absolute|absolute value for center|Int|
|range_compression|compression of range towards center|Float|
|opacity_factor|multiplier for opacity|Float|
|blend_with_material|use alpha for blending with diffuse material|Int|
|preview|use preliminary colormap for showing preview when determining bounds|Int|


### Nested Color Map Parameters

|name|description|type|
|-|-|-|
|nest|inset another color map|Int|
|auto_center|compute center of nested color map|Int|
|inset_relative|width and center of inset are relative to range|Int|
|inset_center|where to inset other color map (auto range: 0.5=middle)|Float|
|inset_width|range covered by inset color map (auto range: relative)|Float|
|inset_map|transfer function to inset (COVISE, Plasma, Inferno, Magma, CoolWarmBrewer, CoolWarm, Frosty, Dolomiti, Parula, Viridis, Cividis, Turbo, Blue_Light, Grays, Gray20, ANSYS, Star, ITSM, Rainbow, Earth, Topography, RainbowPale, FromFile)|Int|
|inset_steps|number of color map steps for inset (0: as outer map)|Int|
|resolution|number of steps to compute|Int|
|inset_opacity_factor|multiplier for opacity of inset color|Float|


:::{admonition} Supported System Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[_openmp_threads](../../system-parameters.md#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[_benchmark](../../system-parameters.md#_benchmark)|show timing information|Int|
|[_concurrency](../../system-parameters.md#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|
|[_cache_mode](../../system-parameters.md#_cache_mode)|input object caching (CacheNone, CacheDeleteEarly, CacheDeleteLate, CacheByName)|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::

