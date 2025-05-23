(mod-ReadWrfChem)=

# ReadWrfChem
read WRF-Chem (Weather Research and Forecasting model coupled to Chemistry) data files

<svg width="90.0em" height="11.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="9.0em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >ReadWrfChem</text><rect x="0.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_out</title></rect>
<rect x="0.7em" y="3.8em" width="0.03333333333333333em" height="7.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="10.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="10.9em" class="text" >grid<tspan> (grid_out)</tspan></text>
<rect x="1.4em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out0</title></rect>
<rect x="1.9em" y="3.8em" width="0.03333333333333333em" height="6.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="9.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="9.9em" class="text" >scalar data<tspan> (data_out0)</tspan></text>
<rect x="2.5999999999999996em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out1</title></rect>
<rect x="3.0999999999999996em" y="3.8em" width="0.03333333333333333em" height="5.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="8.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="8.9em" class="text" >scalar data<tspan> (data_out1)</tspan></text>
<rect x="3.8em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out2</title></rect>
<rect x="4.3em" y="3.8em" width="0.03333333333333333em" height="4.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="4.3em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="5.5em" y="7.8999999999999995em" class="text" >scalar data<tspan> (data_out2)</tspan></text>
<rect x="5.0em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out_U</title></rect>
<rect x="5.5em" y="3.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="5.5em" y="6.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="6.7em" y="6.8999999999999995em" class="text" >scalar data<tspan> (data_out_U)</tspan></text>
<rect x="6.2em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out_V</title></rect>
<rect x="6.7em" y="3.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="6.7em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="7.9em" y="5.8999999999999995em" class="text" >scalar data<tspan> (data_out_V)</tspan></text>
<rect x="7.4em" y="2.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out_W</title></rect>
<rect x="7.9em" y="3.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="7.9em" y="4.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="9.1em" y="4.8999999999999995em" class="text" >scalar data<tspan> (data_out_W)</tspan></text>
</svg>

## Parameters
|name|description|type|
|-|-|-|
|first_step|first timestep to read|Int|
|last_step|last timestep to read (-1: last)|Int|
|step_increment|number of steps to increment|Int|
|first_rank|rank for first partition of first timestep|Int|
|file_dir|NC files directory|String|
|num_partitions_lat|number of partitions in lateral|Int|
|num_partitions_ver|number of partitions in vertical|Int|
|var_dim|Dimension of variables (2D, 3D, other)|String|
|true_height|Use real ground topology ((NONE))|String|
|GridX|grid Sout-North axis ((NONE))|String|
|GridY|grid East_West axis ((NONE))|String|
|pert_gp|perturbation geopotential ((NONE))|String|
|base_gp|base-state geopotential ((NONE))|String|
|GridZ|grid Bottom-Top axis ((NONE))|String|
|Variable0|Variable0 ((NONE))|String|
|Variable1|Variable1 ((NONE))|String|
|Variable2|Variable2 ((NONE))|String|
|U|U ((NONE))|String|
|V|V ((NONE))|String|
|W|W ((NONE))|String|
|distribute_time|distribute timesteps across MPI ranks|Int|
