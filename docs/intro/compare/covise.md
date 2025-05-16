# Notable Differences to COVISE

This lists the most important differences between [COVISE](https://hlrs.de/covise) and Vistle – in order to get users of COVISE started with Vistle quickly.
While Vistle provides more powerful parallel and distributed processing capabilities, it tries to hide this complexity from the user.
Because of this, the workflow editor and the modules can be used in a similar way as in COVISE.
Even the render module [COVER](../render/cover.md) is the same as in COVISE.

## No *Collect* Module

The *Collect* module in COVISE is used to establish a relation between fields and the geometry they are mapped to – right before sending it to a renderer.
In Vistle, every field passed along in a workflow carries a reference to the grid that it is mapped to. So this relation remains established all along the visualization pipeline.
Because of this, there is no need for a *Collect* module. This makes building workflows easier, as there is no need for processing geometry and field data separately.

## Less Guidance in Workflow Editor

The COVISE map editor tries to prevent you from building connections that would not work. The Vistle [workflow editor](../gui/gui.md) does not do this, though: this guidance is not really needed, as the distinction between geometry and field data is not necessary in Vistle. Thus it is harder to build invalid workflows.

## Color Mapping

In COVISE, color mapping is achieved by transforming scalar field data to RGBA (color and opacity) tuples in the *Colors* module.
Vistle's [](project:#mod-Color) module also can do that.
But the suggested way to map colors is by connecting the second output of the *Color* module to the renderer and supplying the renderer with the actual field data.
The color mapping will occur during rendering, and changes to the transfer function will be visible immediately.
