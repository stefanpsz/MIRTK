# ============================================================================
# Medical Image Registration ToolKit (MIRTK)
#
# Copyright 2013-2016 Imperial College London
# Copyright 2013-2016 Andreas Schuh
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ============================================================================

##############################################################################
# @file  CMakeLists.txt
# @brief Build configuration of MIRTK PointSet library.
##############################################################################

set(HEADERS
  ${BINARY_INCLUDE_DIR}/mirtk/PointSetExport.h
  BoundarySegment.h
  ClosestCell.h
  ClosestPoint.h
  ClosestPointLabel.h
  EdgeConnectivity.h
  EdgeTable.h
  FiducialMatch.h
  FuzzyCorrespondence.h
  ImageSurfaceStatistics.h
  ImplicitSurfaceUtils.h
  Stripper.h
  MedianMeshFilter.h
  MeshFilter.h
  MeshSmoothing.h
  PointCorrespondence.h
  PointLocator.h
  PointSetUtils.h
  Polyhedron.h
  RegisteredPointSet.h
  RegisteredSurface.h
  RobustClosestPoint.h
  RobustPointMatch.h
  SpectralDecomposition.h
  SpectralMatch.h
  SurfaceBoundary.h
  SurfaceFilter.h
  SurfaceCollisions.h
  SurfaceCurvature.h
  SurfacePatches.h
  SurfaceRemeshing.h
  Triangle.h
)

set(SOURCES
  BoundarySegment.cc
  ClosestCell.cc
  ClosestPoint.cc
  ClosestPointLabel.cc
  EdgeConnectivity.cc
  EdgeTable.cc
  FiducialMatch.cc
  FuzzyCorrespondence.cc
  FuzzyCorrespondenceUtils.cc
  FuzzyCorrespondenceUtils.h
  ImageSurfaceStatistics.cc
  ImplicitSurfaceUtils.cc
  Stripper.cc
  MedianMeshFilter.cc
  MeshFilter.cc
  MeshSmoothing.cc
  PointCorrespondence.cc
  PointLocator.cc
  PointSetUtils.cc
  Polyhedron.cc
  RegisteredPointSet.cc
  RegisteredSurface.cc
  RobustClosestPoint.cc
  RobustPointMatch.cc
  SpectralDecomposition.cc
  SpectralMatch.cc
  SurfaceBoundary.cc
  SurfaceFilter.cc
  SurfaceCollisions.cc
  SurfaceCurvature.cc
  SurfacePatches.cc
  SurfaceRemeshing.cc
  Triangle.cc
  triangle_triangle_intersection.h
)

set(DEPENDS
  LibCommon
  LibNumerics
  LibImage
  LibTransformation
  LibIO
  ${VTK_LIBRARIES}
)

if (TARGET TBB::tbb)
  list(APPEND DEPENDS TBB::tbb)
endif ()

if (FLANN_FOUND)
  list(APPEND DEPENDS ${FLANN_CPP_LIBRARY})
endif ()

mirtk_add_library()
