(mod-Transform)=

# Transform
apply transformation matrix to grid

<svg width="62.199999999999996em" height="6.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="1.8em" width="6.22em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="1.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in</title></rect>
<rect x="0.7em" y="0.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.9em" class="text" >input data<tspan> (data_in)</tspan></text>
<text x="0.2em" y="3.6500000000000004em" class="moduleName" >Transform</text><rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out</title></rect>
<rect x="0.7em" y="4.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="5.8999999999999995em" class="text" >output data<tspan> (data_out)</tspan></text>
</svg>

## Parameters
|name|description|type|
|-|-|-|
|translate|translation vector|Vector|
|scale|scaling factors|Vector|
|rotation_axis_angle|axis and angle of rotation|Vector|
|keep_original|whether to keep input|Int|
|repetitions|how often the transformation should be repeated|Int|
|animation|animate repetitions (Keep, Deanimate, Animate, TimestepAsRepetitionCount, TimestepAsPower)|Int|
|mirror|enable mirror (Original, Mirror_X, Mirror_Y, Mirror_Z)|Int|
