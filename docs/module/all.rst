.. _category-All:

.. _cat-All:

All Modules
===============

**all modules (and their category), sorted alphabetically**

.. include:: All.md
   :parser: myst



**A**
   :doc:`AddAttribute <general/AddAttribute/AddAttribute>` (:doc:`General <general/index>`) *add attributes*

   :doc:`ApplyTransform <geometry/ApplyTransform/ApplyTransform>` (:doc:`Geometry <geometry/index>`) *compute transformed coordinates*

   :doc:`Assemble <general/Assemble/Assemble>` (:doc:`General <general/index>`) *assemble blocks of indexed geometry to larger blocks*

   :doc:`AttachGrid <general/AttachGrid/AttachGrid>` (:doc:`General <general/index>`) *attach underlying grid to mappable data*

   :doc:`AttachNormals <general/AttachNormals/AttachNormals>` (:doc:`General <general/index>`) *attach normals to grid*

   :doc:`AttachShader <general/AttachShader/AttachShader>` (:doc:`General <general/index>`) *attach GLSL shader for use in COVER*


**B**
   :doc:`BlenderRenderer <render/BlenderRenderer/BlenderRenderer>` (:doc:`Render <render/index>`) *Blender remote renderer*

   :doc:`BoundingBox <map/BoundingBox/BoundingBox>` (:doc:`Map <map/index>`) *compute bounding boxes*


**C**
   :doc:`COVER <render/COVER/COVER>` (:doc:`Render <render/index>`) *VR renderer for immersive environments*

   :doc:`Cache <general/Cache/Cache>` (:doc:`General <general/index>`) *cache input objects*

   :doc:`Calc <general/Calc/Calc>` (:doc:`General <general/index>`) *compute with coordinates and data*

   :doc:`CellToVert <filter/CellToVert/CellToVert>` (:doc:`Filter <filter/index>`) *convert cell mapped data to vertice mapped*

   :doc:`CellToVertVtkm <filter/CellToVertVtkm/CellToVertVtkm>` (:doc:`Filter <filter/index>`) *convert cell mapped data to vertice mapped*

   :doc:`Chainmail <geometry/Chainmail/Chainmail>` (:doc:`Geometry <geometry/index>`) *transform 2D data(triangle and quads) to rings*

   :doc:`ClipVtkm <general/ClipVtkm/ClipVtkm>` (:doc:`General <general/index>`) *clip geometry at surface (CutGeometry)*

   :doc:`Color <map/Color/Color>` (:doc:`Map <map/index>`) *map scalar and vector data to colors*

   :doc:`ColorAttribute <general/ColorAttribute/ColorAttribute>` (:doc:`General <general/index>`) *specify solid object color as an attribute*

   :doc:`ColorMetapostPart <map/ColorMetapostPart/ColorMetapostPart>` (:doc:`Map <map/index>`) *add color attribute from METApost description*

   :doc:`ColorRandom <map/ColorRandom/ColorRandom>` (:doc:`Map <map/index>`) *map index data to random colors*

   :doc:`CreateCelltree <develop/CreateCelltree/CreateCelltree>` (:doc:`Develop <develop/index>`) *create a cell tree*

   :doc:`CreateCuboids <geometry/CreateCuboids/CreateCuboids>` (:doc:`Geometry <geometry/index>`) *creates cuboids out of a grid with (3D vector) mapped data where the grid's coordinates are the cuboid centers and its mapped data the edge lengths in x, y, z*

   :doc:`CreateVertexOwnerList <develop/CreateVertexOwnerList/CreateVertexOwnerList>` (:doc:`Develop <develop/index>`) *create vertex owner list*

   :doc:`CutGeometry <geometry/CutGeometry/CutGeometry>` (:doc:`Geometry <geometry/index>`) *clip geometry at basic geometry like plane, cylinder or sphere*

   :doc:`CuttingSurface <map/CuttingSurface/CuttingSurface>` (:doc:`Map <map/index>`) *cut through grids with basic geometry like plane, cylinder or sphere*

   :doc:`CuttingSurfaceVtkm <map/CuttingSurfaceVtkm/CuttingSurfaceVtkm>` (:doc:`Map <map/index>`) *cut through grids with basic geometry like plane, cylinder or sphere*


**D**
   :doc:`DelaunayTriangulator <geometry/DelaunayTriangulator/DelaunayTriangulator>` (:doc:`Geometry <geometry/index>`) *combine points to structured grid based on 3D Delaunay Triangulation*

   :doc:`DisCOVERay <render/DisCOVERay/DisCOVERay>` (:doc:`Render <render/index>`) *Embree CPU ray casting remote renderer*

   :doc:`Displace <filter/Displace/Displace>` (:doc:`Filter <filter/index>`) *move vertices according to mapped data of first input*

   :doc:`Distribute <general/Distribute/Distribute>` (:doc:`General <general/index>`) *broadcast input objects to all ranks*

   :doc:`DomainSurface <map/DomainSurface/DomainSurface>` (:doc:`Map <map/index>`) *show surface of grid*

   :doc:`Dropbear <develop/Dropbear/Dropbear>` (:doc:`Develop <develop/index>`) *start Dropbear SSH server on compute nodes*


**E**
   :doc:`EnableTransparency <general/EnableTransparency/EnableTransparency>` (:doc:`General <general/index>`) *advise COVER to enable depth sorting*

   :doc:`ExtractGrid <general/ExtractGrid/ExtractGrid>` (:doc:`General <general/index>`) *extract the grid a data object is mapped to*

   :doc:`Extrema <information/Extrema/Extrema>` (:doc:`Information <information/index>`) *compute extremal values*


**F**
   :doc:`FieldToLines <univiz/FieldToLines/FieldToLines>` (:doc:`UniViz <univiz/index>`) *field to lines*

   :doc:`FilterCells <filter/FilterCells/FilterCells>` (:doc:`Filter <filter/index>`) *filter out some cells*

   :doc:`FilterNode <develop/FilterNode/FilterNode>` (:doc:`Develop <develop/index>`) *filter data objects*

   :doc:`FlattenTriangles <geometry/FlattenTriangles/FlattenTriangles>` (:doc:`Geometry <geometry/index>`) *flatten indexed triangle and quad geometry*

   :doc:`FlowTopo <univiz/FlowTopo/FlowTopo>` (:doc:`UniViz <univiz/index>`) *flow topology*


**G**
   :doc:`GenIsoDat <develop/GenIsoDat/GenIsoDat>` (:doc:`Develop <develop/index>`) *generate test data for IsoSurface module*

   :doc:`Gendat <develop/Gendat/Gendat>` (:doc:`Develop <develop/index>`) *generate scalar and vector test data on structured and unstructured grids*

   :doc:`GhostCellGenerator <general/GhostCellGenerator/GhostCellGenerator>` (:doc:`General <general/index>`) *Generate Ghost Cells for UnstructuredGrids*

   :doc:`GridElementStatistics <develop/GridElementStatistics/GridElementStatistics>` (:doc:`Develop <develop/index>`) *show characteristics of selected unstructured grid element*


**I**
   :doc:`InSituModule <simulation/InSituModule/InSituModule>` (:doc:`Simulation <simulation/index>`) *acquire data from SENSEI or Catalyst II instrumented simulations*

   :doc:`IndexManifolds <map/IndexManifolds/IndexManifolds>` (:doc:`Map <map/index>`) *extract lower dimensional surfaces, lines or points from structured grids*

   :doc:`IsoHeightSurface <map/IsoHeightSurface/IsoHeightSurface>` (:doc:`Map <map/index>`) *extract surface at constant height*

   :doc:`IsoSurface <map/IsoSurface/IsoSurface>` (:doc:`Map <map/index>`) *extract surfaces with constant data level*

   :doc:`IsoSurfaceVtkm <map/IsoSurfaceVtkm/IsoSurfaceVtkm>` (:doc:`Map <map/index>`) *extract surfaces with constant data level*


**L**
   :doc:`LibSimController <simulation/LibSimController/LibSimController>` (:doc:`Simulation <simulation/index>`) *acquire data from LibSim instrumented simulations*

   :doc:`LoadCover <read/LoadCover/LoadCover>` (:doc:`Read <read/index>`) *instruct COVER to load a file*


**M**
   :doc:`ManipulateGhosts <develop/ManipulateGhosts/ManipulateGhosts>` (:doc:`Develop <develop/index>`) *modify ghost cell information*

   :doc:`MapDrape <filter/MapDrape/MapDrape>` (:doc:`Filter <filter/index>`) *map coordinates and drape to height field*

   :doc:`MetaData <general/MetaData/MetaData>` (:doc:`General <general/index>`) *transform meta data to mappable data*

   :doc:`MiniSim <develop/MiniSim/MiniSim>` (:doc:`Develop <develop/index>`) *small simulation to compare performance with other in situ interfaces*

   :doc:`MpiInfo <develop/MpiInfo/MpiInfo>` (:doc:`Develop <develop/index>`) *print MPI, CPU binding and shared memory info*


**O**
   :doc:`ObjectStatistics <develop/ObjectStatistics/ObjectStatistics>` (:doc:`Develop <develop/index>`) *print object statistics*

   :doc:`OsgRenderer <render/OsgRenderer/OsgRenderer>` (:doc:`Render <render/index>`) *OpenSceneGraph remote renderer*


**P**
   :doc:`PrintMetaData <information/PrintMetaData/PrintMetaData>` (:doc:`Information <information/index>`) *print meta data*

   :doc:`PrintObjects <develop/PrintObjects/PrintObjects>` (:doc:`Develop <develop/index>`) *print object attributes*


**R**
   :doc:`ReadCovise <read/ReadCovise/ReadCovise>` (:doc:`Read <read/index>`) *read COVISE data*

   :doc:`ReadCoviseDirectory <read/ReadCoviseDirectory/ReadCoviseDirectory>` (:doc:`Read <read/index>`) *read COVISE data in a directory*

   :doc:`ReadCsv <read/ReadCsv/ReadCsv>` (:doc:`Read <read/index>`) *read .CSV tables*

   :doc:`ReadDuisburg <read/ReadDuisburg/ReadDuisburg>` (:doc:`Read <read/index>`) *Read Duisburg files*

   :doc:`ReadDyna3D <read/ReadDyna3D/ReadDyna3D>` (:doc:`Read <read/index>`) *read LS-Dyna3D ptf files*

   :doc:`ReadEnsight <read/ReadEnsight/ReadEnsight>` (:doc:`Read <read/index>`) *read EnSight Gold data*

   :doc:`ReadFoam <read/ReadFoam/ReadFoam>` (:doc:`Read <read/index>`) *read OpenFOAM data*

   :doc:`ReadIagNetcdf <read/ReadIagNetcdf/ReadIagNetcdf>` (:doc:`Read <read/index>`) *Read IAG data in NetCDF format*

   :doc:`ReadIagTecplot <read/ReadIagTecplot/ReadIagTecplot>` (:doc:`Read <read/index>`) *read IAG Tecplot data (hexahedra only)*

   :doc:`ReadIewMatlabCsvExports <read/ReadIewMatlabCsvExports/ReadIewMatlabCsvExports>` (:doc:`Read <read/index>`) *read a line or row from a csv file*

   :doc:`ReadItlrFs3d <read/ReadItlrFs3d/ReadItlrFs3d>` (:doc:`Read <read/index>`) *read ITLR FS3D (Free Surface 3D) binary data*

   :doc:`ReadModel <read/ReadModel/ReadModel>` (:doc:`Read <read/index>`) *read polygonal geometry models with Assimp (STL, OBJ, 3DS, Collada, DXF, PLY, X3D, ...)*

   :doc:`ReadMpas <read/ReadMpas/ReadMpas>` (:doc:`Read <read/index>`) *Read MPAS files*

   :doc:`ReadMpasPnetcdf <read/ReadMpasPnetcdf/ReadMpasPnetcdf>` (:doc:`Read <read/index>`) *Read MPAS files*

   :doc:`ReadNek5000 <read/ReadNek5000/ReadNek5000>` (:doc:`Read <read/index>`) *read .nek5000 files*

   :doc:`ReadSoundPlan <read/ReadSoundPlan/ReadSoundPlan>` (:doc:`Read <read/index>`) *Read SoundPLAN files.*

   :doc:`ReadTsunami <read/ReadTsunami/ReadTsunami>` (:doc:`Read <read/index>`) *read ChEESE Tsunami files*

   :doc:`ReadVtk <read/ReadVtk/ReadVtk>` (:doc:`Read <read/index>`) *read VTK data*

   :doc:`ReadWrfChem <read/ReadWrfChem/ReadWrfChem>` (:doc:`Read <read/index>`) *read WRF-Chem (Weather Research and Forecasting model coupled to Chemistry) data files*

   :doc:`Replicate <develop/Replicate/Replicate>` (:doc:`Develop <develop/index>`) *deprecated*


**S**
   :doc:`Sample <filter/Sample/Sample>` (:doc:`Filter <filter/index>`) *sample data on points, unstructured and uniform grids to a uniform grid*

   :doc:`ScalarToVec <filter/ScalarToVec/ScalarToVec>` (:doc:`Filter <filter/index>`) *combine up to three scalar fields to a vector field*

   :doc:`SelectCells <filter/SelectCells/SelectCells>` (:doc:`Filter <filter/index>`) *filter elements according to their index*

   :doc:`SelectVertices <filter/SelectVertices/SelectVertices>` (:doc:`Filter <filter/index>`) *filter vertices according to their index*

   :doc:`ShowCelltree <develop/ShowCelltree/ShowCelltree>` (:doc:`Develop <develop/index>`) *show cell tree*

   :doc:`ShowGrid <map/ShowGrid/ShowGrid>` (:doc:`Map <map/index>`) *show outlines of grid cells*

   :doc:`ShowGridIndex <develop/ShowGridIndex/ShowGridIndex>` (:doc:`Develop <develop/index>`) *show the index of each vertex in the grid*

   :doc:`SortBlocks <general/SortBlocks/SortBlocks>` (:doc:`General <general/index>`) *sort data objects according to meta data*

   :doc:`SpheresOverlap <geometry/SpheresOverlap/SpheresOverlap>` (:doc:`Geometry <geometry/index>`) *create lines between overlapping spheres*

   :doc:`SplitDimensions <filter/SplitDimensions/SplitDimensions>` (:doc:`Filter <filter/index>`) *separate grid into 1D, 2D and 3D components*

   :doc:`SplitPolyhedra <geometry/SplitPolyhedra/SplitPolyhedra>` (:doc:`Geometry <geometry/index>`) *convert polyhedral into simple cells*

   :doc:`Statistics <univiz/Statistics/Statistics>` (:doc:`UniViz <univiz/index>`) *statistics*


**T**
   :doc:`TestCellSearch <develop/TestCellSearch/TestCellSearch>` (:doc:`Develop <develop/index>`) *test celltree*

   :doc:`TestDynamicPorts <develop/TestDynamicPorts/TestDynamicPorts>` (:doc:`Develop <develop/index>`) *test port removal*

   :doc:`TestInterpolation <develop/TestInterpolation/TestInterpolation>` (:doc:`Develop <develop/index>`) *test interpolation*

   :doc:`Thicken <geometry/Thicken/Thicken>` (:doc:`Geometry <geometry/index>`) *transform lines to tubes or points to spheres*

   :doc:`Threshold <filter/Threshold/Threshold>` (:doc:`Filter <filter/index>`) *filter elements according to mapped data*

   :doc:`ThresholdVtkm <filter/ThresholdVtkm/ThresholdVtkm>` (:doc:`Filter <filter/index>`) *remove cells according to a threshold*

   :doc:`ToPoints <geometry/ToPoints/ToPoints>` (:doc:`Geometry <geometry/index>`) *reduce geometry to underlying points*

   :doc:`ToPolyhedra <develop/ToPolyhedra/ToPolyhedra>` (:doc:`Develop <develop/index>`) *transform unstructured cells into polyhedral cells*

   :doc:`ToTriangles <geometry/ToTriangles/ToTriangles>` (:doc:`Geometry <geometry/index>`) *decompose polygons to triangles*

   :doc:`ToUnstructured <filter/ToUnstructured/ToUnstructured>` (:doc:`Filter <filter/index>`) *transform structured grids to equivalent unstructured grid*

   :doc:`Tracer <map/Tracer/Tracer>` (:doc:`Map <map/index>`) *compute particle traces and streamlines*

   :doc:`Transform <general/Transform/Transform>` (:doc:`General <general/index>`) *apply transformation matrix to grid*

   :doc:`TransformGrid <develop/TransformGrid/TransformGrid>` (:doc:`Develop <develop/index>`) *shuffle and mirror axes of rectilinear grids*


**V**
   :doc:`Validate <develop/Validate/Validate>` (:doc:`Develop <develop/index>`) *validate data object integrity*

   :doc:`Variant <general/Variant/Variant>` (:doc:`General <general/index>`) *add variant attribute*

   :doc:`VecToScalar <filter/VecToScalar/VecToScalar>` (:doc:`Filter <filter/index>`) *transform vector fields to scalar fields*

   :doc:`VectorField <map/VectorField/VectorField>` (:doc:`Map <map/index>`) *create lines from mapped vector data*

   :doc:`VertToCellVtkm <filter/VertToCellVtkm/VertToCellVtkm>` (:doc:`Filter <filter/index>`) *convert vertex mapped data to cell mapped*

   :doc:`VertexClusteringVtkm <geometry/VertexClusteringVtkm/VertexClusteringVtkm>` (:doc:`Geometry <geometry/index>`) *simplify polygonal (i.e. triangle) mesh*

   :doc:`VortexCores <univiz/VortexCores/VortexCores>` (:doc:`UniViz <univiz/index>`) *vortex corelines*

   :doc:`VortexCriteria <univiz/VortexCriteria/VortexCriteria>` (:doc:`UniViz <univiz/index>`) *vortex criteria*


**W**
   :doc:`WeldVertices <general/WeldVertices/WeldVertices>` (:doc:`General <general/index>`) *weld vertices and build indexed geometry*

   :doc:`WritePointsCsv <write/WritePointsCsv/WritePointsCsv>` (:doc:`Write <write/index>`) *write coordinates and associated values to CSV files*



.. toctree::
   :maxdepth: 1
   :hidden:


