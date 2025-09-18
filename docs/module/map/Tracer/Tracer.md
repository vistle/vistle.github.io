(mod-Tracer)=

# Tracer
compute particle traces and streamlines

<svg width="70.0em" height="12.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="3.8em" width="7.0em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in0</title></rect>
<rect x="0.7em" y="0.7999999999999998em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.8999999999999998em" class="text" >vector field<tspan> (data_in0)</tspan></text>
<rect x="1.4em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in1</title></rect>
<rect x="1.9em" y="1.7999999999999998em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="1.7999999999999998em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="1.9em" class="text" >additional field on same geometry<tspan> (data_in1)</tspan></text>
<rect x="2.5999999999999996em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in2</title></rect>
<rect x="3.0999999999999996em" y="2.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="2.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="2.9em" class="text" >additional field on same geometry<tspan> (data_in2)</tspan></text>
<text x="0.2em" y="5.65em" class="moduleName" >Tracer</text><rect x="0.2em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out0</title></rect>
<rect x="0.7em" y="6.8em" width="0.03333333333333333em" height="5.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="11.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="11.9em" class="text" >stream lines or points with mapped vector<tspan> (data_out0)</tspan></text>
<rect x="1.4em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out1</title></rect>
<rect x="1.9em" y="6.8em" width="0.03333333333333333em" height="4.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="1.9em" y="10.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="3.0999999999999996em" y="10.9em" class="text" >stream lines or points with mapped field<tspan> (data_out1)</tspan></text>
<rect x="2.5999999999999996em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out2</title></rect>
<rect x="3.0999999999999996em" y="6.8em" width="0.03333333333333333em" height="3.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="3.0999999999999996em" y="9.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="4.3em" y="9.9em" class="text" >stream lines or points with mapped field<tspan> (data_out2)</tspan></text>
<rect x="3.8em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>add_data_out0</title></rect>
<rect x="4.3em" y="6.8em" width="0.03333333333333333em" height="2.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="4.3em" y="8.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="5.5em" y="8.9em" class="text" >computed field on same geometry<tspan> (add_data_out0)</tspan></text>
<rect x="5.0em" y="5.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>add_data_out1</title></rect>
<rect x="5.5em" y="6.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="5.5em" y="7.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="6.7em" y="7.8999999999999995em" class="text" >computed field on same geometry<tspan> (add_data_out1)</tspan></text>
</svg>

## Parameters
|name|description|type|
|-|-|-|
|taskType|task type (Streamlines, MovingPoints, Pathlines, Streaklines)|Int|
|tdirection|direction in which to trace (Both, Forward, Backward)|Int|
|dt_step|duration of a timestep (for moving points or when data does not specify realtime)|Float|
|add_data_kind0|field to compute (None, ParticleId, Step, Time, StepWidth, Distance, TerminationReason, CellIndex, BlockIndex)|Int|
|add_data_kind1|field to compute (None, ParticleId, Step, Time, StepWidth, Distance, TerminationReason, CellIndex, BlockIndex)|Int|
|verbose|verbose output|Int|
|no_startp|number of startpoints|Int|
|startStyle|initial particle position configuration (Line, Plane)|Int|
|startpoint1|1st initial point|Vector|
|startpoint2|2nd initial point|Vector|
|direction|direction for plane|Vector|
|max_no_startp|maximum number of startpoints (for parameter/slider limits)|Int|
|trace_time|maximum trace time|Float|
|trace_len|maximum trace distance|Float|
|steps_max|maximum number of integrations per particle|Int|
|min_speed|minimum particle speed|Float|
|integration|integration method (Euler, RK32, ConstantVelocity)|Int|
|h_init|fixed step size for euler integration|Float|
|h_min|minimum step size for rk32 integration|Float|
|h_max|maximum step size for rk32 integration|Float|
|err_tol_abs|absolute error tolerance for rk32 integration|Float|
|err_tol_rel|relative error tolerance for rk32 integration|Float|
|cell_relative|whether step length control should take into account cell size|Int|
|velocity_relative|whether step length control should take into account velocity|Int|
|use_celltree|use celltree for accelerated cell location|Int|
|num_active|number of particles to trace simultaneously on each node (0: no. of cores)|Int|
|particle_placement|where a particle's data shall be collected (InitialRank, RankById, RankByTimestep, Rank0)|Int|
|cell_index_modulus|modulus for cell number output|Int|
|simplification_error|tolerable relative error for result simplification|Float|
