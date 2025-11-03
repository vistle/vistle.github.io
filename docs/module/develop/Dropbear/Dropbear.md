(mod-Dropbear)=

# Dropbear
start Dropbear SSH server on compute nodes

<svg width="56.4em" height="4.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="0.8em" width="5.64em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<text x="0.2em" y="2.6500000000000004em" class="moduleName" >Dropbear</text></svg>

## Parameters


|name|description|type|
|-|-|-|
|dropbear_path|pathname to dropbear binary|String|
|dropbear_options|additional dropbear arguments|String|
|dropbear_port|port where dropbear should listen (passed as argument to -p)|Int|
|hostkey_rsa|path to rsa host key (~/.ssh/vistle_dropbear_rsa)|String|
|hostkey_dss|path to dss host key (~/.ssh/vistle_dropbear_dss)|String|
|hostkey_ecdsa|path to ecdsa host key (~/.ssh/vistle_dropbear_ecdsa)|String|
|exposed_rank|rank to expose on hub (-1: none)|Int|
|exposed_port|port to which exposed rank's dropbear should be forwarded to on hub (<=0: absolute value used as offset to dropbear port)|Int|


:::{admonition} Supported System Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[_openmp_threads](../../system-parameters.md#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[_benchmark](../../system-parameters.md#_benchmark)|show timing information|Int|
|[_concurrency](../../system-parameters.md#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::

