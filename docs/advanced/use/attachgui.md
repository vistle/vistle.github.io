## Attaching a User Interface to a Running Vistle Session ##

A graphical user interface for controlling a Vistle session can be launched via `vistle_gui`. Without any additional parameters it tries to connect to the default port (31093) on `localhost`. Another host and port can be specified as additional parameters. So, in order to connect to `visent.hlrs.de` on port 31095, one would enter the following command:

	vistle_gui visent.hlrs.de 31095
