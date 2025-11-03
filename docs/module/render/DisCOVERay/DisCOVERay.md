(mod-DisCOVERay)=

# DisCOVERay
Embree CPU ray casting remote renderer

<svg width="68.0em" height="6.6em" >
<style>.text { font: normal 1.0em sans-serif;}tspan{ font: italic 1.0em sans-serif;}.moduleName{ font: bold 1.0em sans-serif;}</style>
<rect x="0em" y="1.8em" width="6.8em" height="3.0em" rx="0.1em" ry="0.1em" style="fill:#64c8c8ff;" />
<rect x="0.2em" y="1.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>data_in</title></rect>
<rect x="0.7em" y="0.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="0.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="0.9em" class="text" >input data<tspan> (data_in)</tspan></text>
<text x="0.2em" y="3.6500000000000004em" class="moduleName" >DisCOVERay</text><rect x="0.2em" y="3.8em" width="1.0em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#c81e1eff;" >
<title>image_out</title></rect>
<rect x="0.7em" y="4.8em" width="0.03333333333333333em" height="1.0em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<rect x="0.7em" y="5.8em" width="1.0em" height="0.03333333333333333em" rx="0.0em" ry="0.0em" style="fill:#000000;" />
<text x="1.9em" y="5.8999999999999995em" class="text" >connect to COVER<tspan> (image_out)</tspan></text>
</svg>

## Parameters


|name|description|type|
|-|-|-|
|point_size|size of points|Float|


### Connection Parameters

|name|description|type|
|-|-|-|
|rhr_connection_method|how local/remote endpoint should be determined (RendezvousOnHub, AutomaticHostname, UserHostname, ViaHub, AutomaticReverse, UserReverse)|Int|
|rhr_base_port|listen port for RHR server|Int|
|rhr_local_address|address where clients should connect to|String|
|rhr_remote_port|port where renderer should connect to|Int|
|rhr_remote_host|address where renderer should connect to|String|
|_rhr_auto_remote_port|port where renderer should connect to|Int|
|_rhr_auto_remote_host|address where renderer should connect to|String|


### Compression Parameters

|name|description|type|
|-|-|-|
|send_tile_size|edge lengths of tiles used during sending|IntVector|
|color_codec|codec for image data (Raw, PredictRGB, PredictRGBA, Jpeg_YUV411, Jpeg_YUV444)|Int|
|color_compress|compression for RGBA messages (CompressionNone, CompressionLz4, CompressionZstd)|Int|
|depth_codec|Depth codec (DepthRaw, DepthPredict, DepthPredictPlanar, DepthQuant, DepthQuantPlanar, DepthZfp)|Int|
|zfp_mode|Accuracy:, Precision:, Rate:  (ZfpFixedRate, ZfpPrecision, ZfpAccuracy)|Int|
|depth_compress|entropy compression for depth data (CompressionNone, CompressionLz4, CompressionZstd)|Int|
|depth_prec|quantized depth precision (16 bit + 4 bits/pixel, 24 bit + 3 bits/pixel)|Int|


### Advanced Parameters

|name|description|type|
|-|-|-|
|rhr_dump_images|dump image data to disk|Int|
|continuous_rendering|render even though nothing has changed|Int|
|delay|artificial delay (s)|Float|
|color_rank|different colors on each rank|Int|
|shading|shade and light objects|Int|
|uv_visualization|show u/v coordinates|Int|
|render_tile_size|edge length of square tiles used during rendering|Int|


:::{admonition} Supported Renderer Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[render_mode](../../renderer-parameters.md#render_mode)|Render on which nodes? (LocalOnly, MasterOnly, AllRanks, LocalShmLeader, AllShmLeaders)|Int|
|[objects_per_frame](../../renderer-parameters.md#objects_per_frame)|Max. no. of objects to load between calls to render|Int|
|[_use_geometry_cache](../../renderer-parameters.md#_use_geometry_cache)|whether to try to cache geometry for re-use in subsequent timesteps|Int|

The meaning of these parameters is described in more detail in the [Renderer Parameters](../../renderer-parameters.md) documentation.
:::


:::{admonition} Supported System Parameters
    :class: dropdown

|name|description|type|
|-|-|-|
|[_openmp_threads](../../system-parameters.md#_openmp_threads)|number of OpenMP threads (0: system default)|Int|
|[_benchmark](../../system-parameters.md#_benchmark)|show timing information|Int|
|[_concurrency](../../system-parameters.md#_concurrency)|number of tasks to keep in flight per MPI rank (-1: #cores/2)|Int|
|[_cache_mode](../../system-parameters.md#_cache_mode)|input object caching (CacheNone, CacheDeleteEarly, CacheDeleteLate, CacheByName)|Int|
|[_prioritize_visible](../../system-parameters.md#_prioritize_visible)|prioritize currently visible timestep|Int|
|[_validate_objects](../../system-parameters.md#_validate_objects)|validate data objects before sending to port (Disable, Quick, Thorough)|Int|

The meaning of these parameters is described in more detail in the [System Parameters](../../system-parameters.md) documentation.
:::

