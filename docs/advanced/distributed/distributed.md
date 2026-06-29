## Distributed Workflows and Remote Rendering ##

A Vistle workflow can be distributed between connected clusters. This can be useful for several reasons:

- The data resides on a different system than where the visualization shall be displayed

- A certain module is only available on one system (e.g. because of licenses or architectural differences)

In such a scenario, modules running on different cluster can be connected just as when running on a single cluster. Additionally, [remote rendering](remoterendering.md) integrates seamlessly with distributed workflows.


### Setting Up a Distributed Session ###

The first instance of Vistle that is started includes the primary hub. All other instances/hubs have to connect to this instance. If establishing TCP connections is hindered by e.g. packet filters/firewalls or network address translation (NAT), then you should start the primary instance on a host that every other participating system can connect to. 

When you start the primary system, it will print a message showing:
- the **hostname** of the system it runs on, 
- the **port** on which it can be reached (the default port is `31093`),
-  as well as the **key** for the session:
```
Share this: vistle://<PRIMARY HOSTNAME>:<PORT>?key=<KEY>

Hub: listening for connections on port <PORT>
```

Note that in this example, all values inside of angle brackets, e.g., `<PRIMARY HOSTNAME>`, are placeholders.

 Secondary instances can then be spawned with this command (replace the placeholders with the values printed by the primary instance):

    export VISTLE_KEY=<KEY>
    vistle -c <PRIMARY HOSTNAME>:<PORT>
