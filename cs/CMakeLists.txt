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

set(cs_public_header 
	include/alibabacloud/cs/CSClient.h
	include/alibabacloud/cs/CSExport.h )

set(cs_public_header_model 
	include/alibabacloud/cs/model/AttachInstancesRequest.h
	include/alibabacloud/cs/model/AttachInstancesResult.h
	include/alibabacloud/cs/model/CancelWorkflowRequest.h
	include/alibabacloud/cs/model/CancelWorkflowResult.h
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleRequest.h
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleResult.h
	include/alibabacloud/cs/model/CreateClusterRequest.h
	include/alibabacloud/cs/model/CreateClusterResult.h
	include/alibabacloud/cs/model/CreateClusterByResourcesGroupRequest.h
	include/alibabacloud/cs/model/CreateClusterByResourcesGroupResult.h
	include/alibabacloud/cs/model/CreateServiceMeshRequest.h
	include/alibabacloud/cs/model/CreateServiceMeshResult.h
	include/alibabacloud/cs/model/DeleteClusterRequest.h
	include/alibabacloud/cs/model/DeleteClusterResult.h
	include/alibabacloud/cs/model/DeleteClusterNodeRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodeResult.h
	include/alibabacloud/cs/model/DeleteClusterNodesRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodesResult.h
	include/alibabacloud/cs/model/DescirbeWorkflowRequest.h
	include/alibabacloud/cs/model/DescirbeWorkflowResult.h
	include/alibabacloud/cs/model/DescribeAddonsRequest.h
	include/alibabacloud/cs/model/DescribeAddonsResult.h
	include/alibabacloud/cs/model/DescribeApiVersionRequest.h
	include/alibabacloud/cs/model/DescribeApiVersionResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonUpgradeStatusRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonUpgradeStatusResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionResult.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsRequest.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsResult.h
	include/alibabacloud/cs/model/DescribeClusterCertsRequest.h
	include/alibabacloud/cs/model/DescribeClusterCertsResult.h
	include/alibabacloud/cs/model/DescribeClusterDetailRequest.h
	include/alibabacloud/cs/model/DescribeClusterDetailResult.h
	include/alibabacloud/cs/model/DescribeClusterEndpointsRequest.h
	include/alibabacloud/cs/model/DescribeClusterEndpointsResult.h
	include/alibabacloud/cs/model/DescribeClusterLogsRequest.h
	include/alibabacloud/cs/model/DescribeClusterLogsResult.h
	include/alibabacloud/cs/model/DescribeClusterNodesRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodesResult.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigRequest.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigResult.h
	include/alibabacloud/cs/model/DescribeClusterV2UserKubeconfigRequest.h
	include/alibabacloud/cs/model/DescribeClusterV2UserKubeconfigResult.h
	include/alibabacloud/cs/model/DescribeClustersRequest.h
	include/alibabacloud/cs/model/DescribeClustersResult.h
	include/alibabacloud/cs/model/DescribeEdgeClusterAttachScriptsRequest.h
	include/alibabacloud/cs/model/DescribeEdgeClusterAttachScriptsResult.h
	include/alibabacloud/cs/model/DescribeWorkflowsRequest.h
	include/alibabacloud/cs/model/DescribeWorkflowsResult.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsRequest.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsResult.h
	include/alibabacloud/cs/model/ModifyClusterRequest.h
	include/alibabacloud/cs/model/ModifyClusterResult.h
	include/alibabacloud/cs/model/ModifyClusterTagsRequest.h
	include/alibabacloud/cs/model/ModifyClusterTagsResult.h
	include/alibabacloud/cs/model/RemoveWorkflowRequest.h
	include/alibabacloud/cs/model/RemoveWorkflowResult.h
	include/alibabacloud/cs/model/ResetClusterNodeRequest.h
	include/alibabacloud/cs/model/ResetClusterNodeResult.h
	include/alibabacloud/cs/model/RevokeClusterTokenRequest.h
	include/alibabacloud/cs/model/RevokeClusterTokenResult.h
	include/alibabacloud/cs/model/ScaleClusterRequest.h
	include/alibabacloud/cs/model/ScaleClusterResult.h
	include/alibabacloud/cs/model/ScaleOutClusterRequest.h
	include/alibabacloud/cs/model/ScaleOutClusterResult.h
	include/alibabacloud/cs/model/ServiceMeshAddClusterRequest.h
	include/alibabacloud/cs/model/ServiceMeshAddClusterResult.h
	include/alibabacloud/cs/model/ServiceMeshApiServerRequest.h
	include/alibabacloud/cs/model/ServiceMeshApiServerResult.h
	include/alibabacloud/cs/model/ServiceMeshRemoveClusterRequest.h
	include/alibabacloud/cs/model/ServiceMeshRemoveClusterResult.h
	include/alibabacloud/cs/model/StartWorkflowRequest.h
	include/alibabacloud/cs/model/StartWorkflowResult.h
	include/alibabacloud/cs/model/UnInstallClusterAddonsRequest.h
	include/alibabacloud/cs/model/UnInstallClusterAddonsResult.h
	include/alibabacloud/cs/model/UpdateK8sClusterUserConfigExpireRequest.h
	include/alibabacloud/cs/model/UpdateK8sClusterUserConfigExpireResult.h
	include/alibabacloud/cs/model/UpdateServiceMeshRequest.h
	include/alibabacloud/cs/model/UpdateServiceMeshResult.h )

set(cs_src 
	src/CSClient.cc
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/CancelWorkflowRequest.cc
	src/model/CancelWorkflowResult.cc
	src/model/CheckAliyunCSServiceRoleRequest.cc
	src/model/CheckAliyunCSServiceRoleResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateClusterByResourcesGroupRequest.cc
	src/model/CreateClusterByResourcesGroupResult.cc
	src/model/CreateServiceMeshRequest.cc
	src/model/CreateServiceMeshResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteClusterNodeRequest.cc
	src/model/DeleteClusterNodeResult.cc
	src/model/DeleteClusterNodesRequest.cc
	src/model/DeleteClusterNodesResult.cc
	src/model/DescirbeWorkflowRequest.cc
	src/model/DescirbeWorkflowResult.cc
	src/model/DescribeAddonsRequest.cc
	src/model/DescribeAddonsResult.cc
	src/model/DescribeApiVersionRequest.cc
	src/model/DescribeApiVersionResult.cc
	src/model/DescribeClusterAddonUpgradeStatusRequest.cc
	src/model/DescribeClusterAddonUpgradeStatusResult.cc
	src/model/DescribeClusterAddonsVersionRequest.cc
	src/model/DescribeClusterAddonsVersionResult.cc
	src/model/DescribeClusterAttachScriptsRequest.cc
	src/model/DescribeClusterAttachScriptsResult.cc
	src/model/DescribeClusterCertsRequest.cc
	src/model/DescribeClusterCertsResult.cc
	src/model/DescribeClusterDetailRequest.cc
	src/model/DescribeClusterDetailResult.cc
	src/model/DescribeClusterEndpointsRequest.cc
	src/model/DescribeClusterEndpointsResult.cc
	src/model/DescribeClusterLogsRequest.cc
	src/model/DescribeClusterLogsResult.cc
	src/model/DescribeClusterNodesRequest.cc
	src/model/DescribeClusterNodesResult.cc
	src/model/DescribeClusterUserKubeconfigRequest.cc
	src/model/DescribeClusterUserKubeconfigResult.cc
	src/model/DescribeClusterV2UserKubeconfigRequest.cc
	src/model/DescribeClusterV2UserKubeconfigResult.cc
	src/model/DescribeClustersRequest.cc
	src/model/DescribeClustersResult.cc
	src/model/DescribeEdgeClusterAttachScriptsRequest.cc
	src/model/DescribeEdgeClusterAttachScriptsResult.cc
	src/model/DescribeWorkflowsRequest.cc
	src/model/DescribeWorkflowsResult.cc
	src/model/DownloadClusterNodeCertsRequest.cc
	src/model/DownloadClusterNodeCertsResult.cc
	src/model/ModifyClusterRequest.cc
	src/model/ModifyClusterResult.cc
	src/model/ModifyClusterTagsRequest.cc
	src/model/ModifyClusterTagsResult.cc
	src/model/RemoveWorkflowRequest.cc
	src/model/RemoveWorkflowResult.cc
	src/model/ResetClusterNodeRequest.cc
	src/model/ResetClusterNodeResult.cc
	src/model/RevokeClusterTokenRequest.cc
	src/model/RevokeClusterTokenResult.cc
	src/model/ScaleClusterRequest.cc
	src/model/ScaleClusterResult.cc
	src/model/ScaleOutClusterRequest.cc
	src/model/ScaleOutClusterResult.cc
	src/model/ServiceMeshAddClusterRequest.cc
	src/model/ServiceMeshAddClusterResult.cc
	src/model/ServiceMeshApiServerRequest.cc
	src/model/ServiceMeshApiServerResult.cc
	src/model/ServiceMeshRemoveClusterRequest.cc
	src/model/ServiceMeshRemoveClusterResult.cc
	src/model/StartWorkflowRequest.cc
	src/model/StartWorkflowResult.cc
	src/model/UnInstallClusterAddonsRequest.cc
	src/model/UnInstallClusterAddonsResult.cc
	src/model/UpdateK8sClusterUserConfigExpireRequest.cc
	src/model/UpdateK8sClusterUserConfigExpireResult.cc
	src/model/UpdateServiceMeshRequest.cc
	src/model/UpdateServiceMeshResult.cc )

add_library(cs ${LIB_TYPE}
	${cs_public_header}
	${cs_public_header_model}
	${cs_src})

set_target_properties(cs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CS_LIBRARY)
endif()

target_include_directories(cs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cs
		jsoncpp)
	target_include_directories(cs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cs
		jsoncpp)
endif()

install(FILES ${cs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cs)
install(FILES ${cs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cs/model)
install(TARGETS cs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)