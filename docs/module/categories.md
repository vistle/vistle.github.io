# Module Categories

The modules in Vistle are categorized according to the role they can take in a visualization workflow.
The linear succession proposed by the visualization pipeline is an idealized view, so that more categories have been created than just the pipeline stages.


## Read

[](project:#cat-Read) modules read in data from files.
They are the most common modules to start a pipeline strand in a workflow.
Most often, they provide data that has not yet undergone the mapping stage.
Together with the [](project:#cat-Simulation) modules, these are the sources of the data flow network describing the workflow.



## Simulation

[](project:#cat-Simulation) modules provide a direct link to a simulation that is still on-going. They enable acquiring data from running simulations for in situ processing, bypassing file I/O.
Together with [](project:#cat-Read) modules they provide the sources of the workflow.
Interfaces to several in situ visualization frameworks are provided. Currently, this comprises [Catalyst 2](https://catalyst-in-situ.readthedocs.io/en/latest/index.html) and [VisIt](https://visit-dav.github.io/visit-website/)'s [libsim](https://visitusers.org/index.php?title=Simulation_Control_Interface).



## Filter

[](project:#cat-Filter) modules transform abstract data into abstract data, so that another filter step can be applied.
Data processed by filters does not have a geometric representation.



## Map

[](project:#cat-Map) modules ingest abstract data and generate geometric shapes from it.
This geometry output can serve as input for a [](project:#cat-Render) module.



## Geometry

[](project:#cat-Geometry) modules perform transformations on geometry data and yield geometry output.



## Render

[](project:#cat-Render) modules take geometry data and generate pixel images.
They either display these immediately to the user or forward them to another render module for compositing.
These are the most common sinks in the data flow graph.



## General

[](project:#cat-General) modules are able to process data at any stage in the pipeline.
Generally, they provide output for the same pipeline stage.



## Information

[](project:#cat-Information) modules are sink modules that provide textual information about visualization objects.



## UniViz

The [](project:#cat-UniViz) flow visualization modules build on a common framework
enabling them to be used within several visualization systems.
They are categorized together solely based on their provenance.
They have been implemented by Filip Sadlo for [AVS](https://www.avs.com/avs-express/), [COVISE](https://www.hlrs.de/covise) and [ParaView](https://www.paraview.org),
and have been ported to Vistle later.



## Develop

[](project:#cat-Develop) modules support testing and development of Vistle and modules.
A workflow for processing an actual data set should not benefit from any of these modules.
This category also comprises modules that are still being worked on.



