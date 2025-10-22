(mod-ReadCsv)=

# ReadCsv
read .CSV tables

## Purpose

This module is designed to read all CSV files in a directory and convert them to one point objects per file. Optional all files can be converted into a single points object or just a single file can be selected.





---

## Ports

<svg width="70.0em" height="9.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="7.0em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >ReadCsv</text><rect x="0.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>points_out</title></rect>
<rect x="0.7em" y="3.8em" width="0.03333333333333333em" height="5.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="8.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="8.9em" class="text" >unordered points<tspan> (points_out)</tspan></text>
<rect x="1.4em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out0</title></rect>
<rect x="1.9em" y="3.8em" width="0.03333333333333333em" height="4.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="7.8999999999999995em" class="text" >data on points from column dataName0<tspan> (data_out0)</tspan></text>
<rect x="2.5999999999999996em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out1</title></rect>
<rect x="3.0999999999999996em" y="3.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="6.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="6.8999999999999995em" class="text" >data on points from column dataName1<tspan> (data_out1)</tspan></text>
<rect x="3.8em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out2</title></rect>
<rect x="4.3em" y="3.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="4.3em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="5.5em" y="5.8999999999999995em" class="text" >data on points from column dataName2<tspan> (data_out2)</tspan></text>
<rect x="5.0em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>data_out3</title></rect>
<rect x="5.5em" y="3.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="5.5em" y="4.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="6.7em" y="4.8999999999999995em" class="text" >data on points from column dataName3<tspan> (data_out3)</tspan></text>
</svg>


## Parameters


|name|description|type|
|-|-|-|
|directory|directory with CSV files|String|
|filename|select all files or a specif one)|Int|
|layer_mode|offset the configured axis by layer offset (NONE, X, Y, Z)|Int|
|layer_offset|offset the axis configured in layer mode|Float|
|single_object|combine all files to a single points object with optional data|Int|
|x_name|Name of x column)|Int|
|y_name|Name of y column)|Int|
|z_name|Name of z column)|Int|
|data_name_0|Name of data column outputted at data_out_0)|Int|
|data_name_1|Name of data column outputted at data_out_1)|Int|
|data_name_2|Name of data column outputted at data_out_2)|Int|
|data_name_3|Name of data column outputted at data_out_3)|Int|


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


`x_name` and `y_name` are mandatory to create at least 2D points, `z_name` and `data_name_?` are optional.

### Important to note
Supported delimiters are comma, semicolon and tab. Decimal separators can be points or comma, if comma is not used as delimiter.


## Example Usage

## Related Modules

### Often Used With

[](project:#mod-Color), [](project:#mod-MapDrape), [](project:#mod-IndexManifolds), [](project:#mod-Variant)
