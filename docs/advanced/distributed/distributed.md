## Distributed Workflows and Remote Rendering ##

A Vistle workflow can be distributed between connected clusters. This can be useful for several reasons:

- The data resides on a different system than where the visualization shall be displayed

- A certain module is only available on one system (e.g. because of licenses or architectural differences)

In such a scenario, modules running on different cluster can be connected just as when running on a single cluster. Additionally, [remote rendering](remoterendering.md) integrates seamlessly with distributed workflows.


### Setting Up a Distributed Session ###

The first instance of Vistle that is started includes the primary hub. All other instances/hubs have to connect to this instance. If establishing TCP connections is hindered by e.g. packet filters/firewalls or network address translation (NAT), then you should start the primary instance on a host that every other participating system can connect to. The primary system will show on which port it can be reached. The default is `31093`. Secondary instances can be spawned with this command:

    vistle -c primary.host.name:31093
