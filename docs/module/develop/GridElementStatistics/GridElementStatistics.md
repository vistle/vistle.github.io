(mod-GridElementStatistics)=

# GridElementStatistics
show characteristics of selected unstructured grid element

## Purpose

Prints stats of a single element in an unstructured grid:
type, dimensionality, edge length, surface, volume
Outputs data on the grid where only the selected element is higlighted.





<svg width="131.8em" height="6.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="1.8em" width="13.18em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="1.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>grid_in</title></rect>
<rect x="0.7em" y="0.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.9em" class="text" >unstructured grid with or without data<tspan> (grid_in)</tspan></text>
<text x="0.2em" y="3.6500000000000004em" class="moduleName" >GridElementStatistics</text><rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_out</title></rect>
<rect x="0.7em" y="4.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="5.8999999999999995em" class="text" >unstructured grid with highlighted element<tspan> (data_out)</tspan></text>
</svg>


## Parameters
|name|description|type|
|-|-|-|
|element_index|index of the element to inspect|Int|


## Usage Examples

<figure float="left">
    <a href="vistle:///open#module/develop/GridElementStatistics/GridElementStatistics"><img src="GridElementStatistics_workflow.png" width="200" /></a>
    <img src="GridElementStatistics_result.png" width="300"/>
    <figcaption>Fig.1 <a href="vistle:///open#module/develop/GridElementStatistics/GridElementStatistics">GridElementStatistics</a> workflow (left) and expected result (right).</figcaption>
</figure>