# Parameters Common to Most Render Modules
These parameters control the `Renderer` base class functionality, which is used by Vistle's render modules.

|name|description|type|
|-|-|-|
|[[](#render_mode)]|Render on which nodes? (LocalOnly, MasterOnly, AllRanks, LocalShmLeader, AllShmLeaders)|Int|
|[[](#objects_per_frame)]|Max. no. of objects to load between calls to render|Int|
|[[](#_use_geometry_cache)]|whether to try to cache geometry for re-use in subsequent timesteps|Int|

### `render_mode`
This parameter controls on which MPI ranks the rendering is performed.
If a compositing step follows the rendering, it is not necessary to render on all ranks.
And if shared memory is used between ranks on the same node, only one rank per node needs to perform the rendering.
This node is called the "shared memory leader".

- `LocalOnly`: only render on the rank where the data was received (without distributing the data).
- `MasterOnly`: only render on rank 0 (data needs to be transferred to rank 0).
- `AllRanks`: render on all ranks (data needs to be broadcast to all ranks).
- `LocalShmLeader`: only render on the shared memory leader of the receiving node (no data distribution).
- `AllShmLeader`: render on all shared memory leaders (data needs to be broadcast to every node/leader).


### `objects_per_frame`
As new data objects arrive from the visualization pipeline, they need to be distributed to the other MPI ranks.
In order to avoid long stalls in the rendering loop, only a limited number of objects are processed per frame.
This parameter controls how many objects are exchanged per rank and per frame, before returning control to the rendering loop.


### `_use_geometry_cache`
When only the mapped data changes, but the geometry is unchanged, the geometry cache enables re-use of previously computed geometry.
This can save GPU memory, but also a bit of processing time when converting objects for rendering.
