(mod-ReadSubzoneTecplot)=

# ReadSubzoneTecplot
read SZL (Sub-Zone Load-on-demand) Tecplot data

## Purpose

The **ReadSubzoneTecplot** module reads Tecplot 360 Sub-Zone Load-on-demand (`*.szplt`) data from a directory. Only structured (ordered) zones are supported. All .szplt files found in the input directory are considered according to the selected time-step range and step increment. 

## Ports

<svg width="114.39999999999999em" height="10.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="11.44em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >ReadSubzoneTecplot</text><rect x="0.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_out</title></rect>
<rect x="0.7em" y="3.8em" width="0.03333333333333333em" height="6.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="9.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="9.9em" class="text" >grid or geometry<tspan> (grid_out)</tspan></text>
<rect x="1.4em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>field_out_0</title></rect>
<rect x="1.9em" y="3.8em" width="0.03333333333333333em" height="5.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="8.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="8.9em" class="text" >data field<tspan> (field_out_0)</tspan></text>
<rect x="2.5999999999999996em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>field_out_1</title></rect>
<rect x="3.0999999999999996em" y="3.8em" width="0.03333333333333333em" height="4.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="7.8999999999999995em" class="text" >data field<tspan> (field_out_1)</tspan></text>
<rect x="3.8em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>field_out_2</title></rect>
<rect x="4.3em" y="3.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="4.3em" y="6.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="5.5em" y="6.8999999999999995em" class="text" >data field<tspan> (field_out_2)</tspan></text>
<rect x="5.0em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>field_out_3</title></rect>
<rect x="5.5em" y="3.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="5.5em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="6.7em" y="5.8999999999999995em" class="text" >data field<tspan> (field_out_3)</tspan></text>
<rect x="6.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#969696ff;" >
<title>field_out_4</title></rect>
<rect x="6.7em" y="3.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="6.7em" y="4.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="7.9em" y="4.8999999999999995em" class="text" >data field<tspan> (field_out_4)</tspan></text>
</svg>


- `grid_out` — structured grid (all subzones)
- `field_out_0` .. `field_out_4` — data fields chosen by the user (up to five). 

The first output port (`grid_out`) provides the structured geometry. The remaining ports provide solution fields selected via the module parameters.


## Parameters


|name|description|type|
|-|-|-|
|file_dir|name of szTecplot files directory|String|
|static_geometry|Freeze blade geometry (0 = dynamic, 1 = static from reference timestep)|Int|
|static_ref_timestep|Timestep index to take the static geometry from (0-based)|Int|
|tecplotfield_0|This data field from the tecplot file will be added to output port field_out_0.)|String|
|tecplotfield_1|This data field from the tecplot file will be added to output port field_out_1.)|String|
|tecplotfield_2|This data field from the tecplot file will be added to output port field_out_2.)|String|
|tecplotfield_3|This data field from the tecplot file will be added to output port field_out_3.)|String|
|tecplotfield_4|This data field from the tecplot file will be added to output port field_out_4.)|String|


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


## Behavior

- If `static_geometry` is enabled, the grid is loaded once from the specified reference time step (`static_ref_timestep`) and reused for all output timesteps.
- If `static_geometry` is disabled, the geometry is reloaded for each requested timestep.
- Data fields are attached to the corresponding `field_out_*` ports only if the selected field exists in the file/zone; missing fields are skipped.

## Related Modules

### Similar Modules

[](project:#mod-ReadIagTecplot)
