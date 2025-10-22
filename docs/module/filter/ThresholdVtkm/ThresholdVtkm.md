(mod-ThresholdVtkm)=

# ThresholdVtkm
remove cells according to a threshold

<svg width="85.39999999999999em" height="10.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="3.8em" width="8.54em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in</title></rect>
<rect x="0.7em" y="0.7999999999999998em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.8999999999999998em" class="text" >input grid with mapped data<tspan> (data_in)</tspan></text>
<rect x="1.4em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c8c81eff;" >
<title>data_in1</title></rect>
<rect x="1.9em" y="1.7999999999999998em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="1.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="1.9em" class="text" >input grid with mapped data<tspan> (data_in1)</tspan></text>
<rect x="2.5999999999999996em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c8c81eff;" >
<title>data_in2</title></rect>
<rect x="3.0999999999999996em" y="2.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="2.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="2.9em" class="text" >input grid with mapped data<tspan> (data_in2)</tspan></text>
<text x="0.2em" y="5.65em" class="moduleName" >ThresholdVtkm</text><rect x="0.2em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out</title></rect>
<rect x="0.7em" y="6.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="9.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="9.9em" class="text" >output grid with mapped data<tspan> (data_out)</tspan></text>
<rect x="1.4em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out1</title></rect>
<rect x="1.9em" y="6.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="8.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="8.9em" class="text" >output grid with mapped data<tspan> (data_out1)</tspan></text>
<rect x="2.5999999999999996em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out2</title></rect>
<rect x="3.0999999999999996em" y="6.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="7.8999999999999995em" class="text" >output grid with mapped data<tspan> (data_out2)</tspan></text>
</svg>

## Parameters


|name|description|type|
|-|-|-|
|invert_selection|invert selection|Int|
|operation|selection operation (AnyLess, AllLess, AnyGreater, AllGreater)|Int|
|threshold|selection threshold|Float|


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
|[_print_object_info](../../system-parameters.md#_print_object_info)|print information on generated data objects for debug purposes|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::

