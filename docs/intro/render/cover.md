## The COVER Renderer

[COVER](project:#mod-COVER) is the module responsible for displaying the 3D scene. You can use it on a desktop, but it works as well an immersive multi-screen projection system and with VR glasses. Here, we learn how to use it when configured for the desktop. Although it can be used independent from a visualization system (i.e. COVISE or Vistle), we will only look at how to use it with Vistle.

### Using COVER on the Desktop

:::{figure-md}
![COVER renderer with desktop and VR user interface.](cover-annotated.png)

COVER renderer with desktop and VR user interface and the [Airbag Example](vistle:///open#example/airbag) loaded.
:::

When COVER is configured for the desktop, it shows a
menu bar at the top, a Toolbar below and the render area, where
the scene is shown. You can interact with the scene using your mouse.
From there, as well as from the menu and
Toolbar, you can configure several often used settings. In the figure above, which shows the COVER window,
the Toolbar buttons functions are indicated by labels. From left to right you can find interaction elements for
controlling animations, views, navigation, and workflow execution.

The 3D render area shows the visualization scene. Clicking into it allows navigation within the scene.
With the left mouse button you can rotate the view, with the middle mouse button you can pan the view, and with the right mouse button you can zoom in and out.
Moreover, there is a 3D floating menu, the VR Menu, usually at the right-hand side of the render area.
This is mainly used for interaction from immersive virtual environments.
But this is also visible in desktop mode, as not all functionality is exposed from the desktop menu.
When an entry in the VR Menu is selected, a frame for its content opens up. Click the Menu entry
once more to hide the frame again.

### COVER and Vistle

If COVER is started from within Vistle, a Vistle menu item is available in the menu bar. From there it is
possible to manipulate selected [Module Parameters](../gui/build.md#module-parameters) and enable interactors.
These interactors allow you to manipulate the parameters of workflow modules using the mouse from within the 3D scene.
For working with the mouse, you will want to enable the *Pick interactor*s.
There are interactors for manipulating positions, and locations of planes, spheres, and cylinders.
For instance, you can modify the plane position of a [CuttingSurface](project:#mod-CuttingSurface) module slicing through the data by dragging the spherical position manipulator.
Dragging the arrow tip, allows to modify the plane normal.

# Tablet User Interface

Further, COVER comes along with a tablet user interface (*TabletUI*), which allows the user to adjust
many other parameters and in many cases offers more detailed settings. The *TabletUI* attaches to a
running COVER and can be started using the command:

    tabletUI

# Plug-Ins

COVER can be extended with plug-ins. Many of these add additional entries to the menu bar.
Some plug-ins can only be controlled from the 3D menus, others even require the use of the *TabletUI*.

### More Information

You can also start COVER without Vistle, by typing:

    opencover

Much of the information in the [COVER section](https://fs.hlrs.de/projects/covise/doc/html/usersguide/cover/cover.html) of the [COVISE User's Guide](https://fs.hlrs.de/projects/covise/doc/pdf/usersguide.pdf) is still valid.
