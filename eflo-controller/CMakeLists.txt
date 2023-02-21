#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(eflo-controller_public_header 
	include/alibabacloud/eflo-controller/Eflo_controllerClient.h
	include/alibabacloud/eflo-controller/Eflo_controllerExport.h )

set(eflo-controller_public_header_model 
	include/alibabacloud/eflo-controller/model/ChangeResourceGroupRequest.h
	include/alibabacloud/eflo-controller/model/ChangeResourceGroupResult.h
	include/alibabacloud/eflo-controller/model/CreateClusterRequest.h
	include/alibabacloud/eflo-controller/model/CreateClusterResult.h
	include/alibabacloud/eflo-controller/model/DeleteClusterRequest.h
	include/alibabacloud/eflo-controller/model/DeleteClusterResult.h
	include/alibabacloud/eflo-controller/model/DescribeClusterRequest.h
	include/alibabacloud/eflo-controller/model/DescribeClusterResult.h
	include/alibabacloud/eflo-controller/model/DescribeNodeRequest.h
	include/alibabacloud/eflo-controller/model/DescribeNodeResult.h
	include/alibabacloud/eflo-controller/model/DescribeRegionsRequest.h
	include/alibabacloud/eflo-controller/model/DescribeRegionsResult.h
	include/alibabacloud/eflo-controller/model/DescribeTaskRequest.h
	include/alibabacloud/eflo-controller/model/DescribeTaskResult.h
	include/alibabacloud/eflo-controller/model/DescribeZonesRequest.h
	include/alibabacloud/eflo-controller/model/DescribeZonesResult.h
	include/alibabacloud/eflo-controller/model/ExtendClusterRequest.h
	include/alibabacloud/eflo-controller/model/ExtendClusterResult.h
	include/alibabacloud/eflo-controller/model/ListClusterNodesRequest.h
	include/alibabacloud/eflo-controller/model/ListClusterNodesResult.h
	include/alibabacloud/eflo-controller/model/ListClustersRequest.h
	include/alibabacloud/eflo-controller/model/ListClustersResult.h
	include/alibabacloud/eflo-controller/model/ListFreeNodesRequest.h
	include/alibabacloud/eflo-controller/model/ListFreeNodesResult.h
	include/alibabacloud/eflo-controller/model/ListTagResourcesRequest.h
	include/alibabacloud/eflo-controller/model/ListTagResourcesResult.h
	include/alibabacloud/eflo-controller/model/RebootNodesRequest.h
	include/alibabacloud/eflo-controller/model/RebootNodesResult.h
	include/alibabacloud/eflo-controller/model/ReimageNodesRequest.h
	include/alibabacloud/eflo-controller/model/ReimageNodesResult.h
	include/alibabacloud/eflo-controller/model/ShrinkClusterRequest.h
	include/alibabacloud/eflo-controller/model/ShrinkClusterResult.h
	include/alibabacloud/eflo-controller/model/TagResourcesRequest.h
	include/alibabacloud/eflo-controller/model/TagResourcesResult.h
	include/alibabacloud/eflo-controller/model/UntagResourcesRequest.h
	include/alibabacloud/eflo-controller/model/UntagResourcesResult.h )

set(eflo-controller_src 
	src/Eflo-controllerClient.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DescribeClusterRequest.cc
	src/model/DescribeClusterResult.cc
	src/model/DescribeNodeRequest.cc
	src/model/DescribeNodeResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeTaskRequest.cc
	src/model/DescribeTaskResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/ExtendClusterRequest.cc
	src/model/ExtendClusterResult.cc
	src/model/ListClusterNodesRequest.cc
	src/model/ListClusterNodesResult.cc
	src/model/ListClustersRequest.cc
	src/model/ListClustersResult.cc
	src/model/ListFreeNodesRequest.cc
	src/model/ListFreeNodesResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/RebootNodesRequest.cc
	src/model/RebootNodesResult.cc
	src/model/ReimageNodesRequest.cc
	src/model/ReimageNodesResult.cc
	src/model/ShrinkClusterRequest.cc
	src/model/ShrinkClusterResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(eflo-controller ${LIB_TYPE}
	${eflo-controller_public_header}
	${eflo-controller_public_header_model}
	${eflo-controller_src})

set_target_properties(eflo-controller
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eflo-controller
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eflo-controller
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EFLO_CONTROLLER_LIBRARY)
endif()

target_include_directories(eflo-controller
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eflo-controller
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eflo-controller
		jsoncpp)
	target_include_directories(eflo-controller
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eflo-controller
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eflo-controller
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eflo-controller
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eflo-controller
		jsoncpp)
endif()

install(FILES ${eflo-controller_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo-controller)
install(FILES ${eflo-controller_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo-controller/model)
install(TARGETS eflo-controller
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)