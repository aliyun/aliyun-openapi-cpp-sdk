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
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleRequest.h
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleResult.h
	include/alibabacloud/cs/model/DescribeClusterCertsRequest.h
	include/alibabacloud/cs/model/DescribeClusterCertsResult.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsRequest.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsResult.h
	include/alibabacloud/cs/model/DeleteClusterRequest.h
	include/alibabacloud/cs/model/DeleteClusterResult.h
	include/alibabacloud/cs/model/DescribeClusterNodesRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodesResult.h
	include/alibabacloud/cs/model/ModifyClusterRequest.h
	include/alibabacloud/cs/model/ModifyClusterResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionResult.h
	include/alibabacloud/cs/model/DescribeKubernetesVersionMetadataRequest.h
	include/alibabacloud/cs/model/DescribeKubernetesVersionMetadataResult.h
	include/alibabacloud/cs/model/DeleteTriggerHookRequest.h
	include/alibabacloud/cs/model/DeleteTriggerHookResult.h
	include/alibabacloud/cs/model/DescribeEdgeClusterAttachScriptsRequest.h
	include/alibabacloud/cs/model/DescribeEdgeClusterAttachScriptsResult.h
	include/alibabacloud/cs/model/GetClusterCertInfoRequest.h
	include/alibabacloud/cs/model/GetClusterCertInfoResult.h
	include/alibabacloud/cs/model/DescribeClusterLogsRequest.h
	include/alibabacloud/cs/model/DescribeClusterLogsResult.h
	include/alibabacloud/cs/model/DescribeClusterDetailRequest.h
	include/alibabacloud/cs/model/DescribeClusterDetailResult.h
	include/alibabacloud/cs/model/ResetClusterNodeRequest.h
	include/alibabacloud/cs/model/ResetClusterNodeResult.h
	include/alibabacloud/cs/model/DescribeClusterEndpointsRequest.h
	include/alibabacloud/cs/model/DescribeClusterEndpointsResult.h
	include/alibabacloud/cs/model/RevokeTriggerHookRequest.h
	include/alibabacloud/cs/model/RevokeTriggerHookResult.h
	include/alibabacloud/cs/model/DeleteClusterNodeRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodeResult.h
	include/alibabacloud/cs/model/DescribeClustersRequest.h
	include/alibabacloud/cs/model/DescribeClustersResult.h
	include/alibabacloud/cs/model/RevokeClusterTokenRequest.h
	include/alibabacloud/cs/model/RevokeClusterTokenResult.h
	include/alibabacloud/cs/model/CreateClusterByResourcesGroupRequest.h
	include/alibabacloud/cs/model/CreateClusterByResourcesGroupResult.h
	include/alibabacloud/cs/model/UpgradeClusterAddonsRequest.h
	include/alibabacloud/cs/model/UpgradeClusterAddonsResult.h
	include/alibabacloud/cs/model/DescribeApiVersionRequest.h
	include/alibabacloud/cs/model/DescribeApiVersionResult.h
	include/alibabacloud/cs/model/InstallClusterAddonsRequest.h
	include/alibabacloud/cs/model/InstallClusterAddonsResult.h
	include/alibabacloud/cs/model/ScaleOutClusterRequest.h
	include/alibabacloud/cs/model/ScaleOutClusterResult.h
	include/alibabacloud/cs/model/PreCheckForCreateClusterRequest.h
	include/alibabacloud/cs/model/PreCheckForCreateClusterResult.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigRequest.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigResult.h
	include/alibabacloud/cs/model/ScaleClusterRequest.h
	include/alibabacloud/cs/model/ScaleClusterResult.h
	include/alibabacloud/cs/model/ModifyClusterTagsRequest.h
	include/alibabacloud/cs/model/ModifyClusterTagsResult.h
	include/alibabacloud/cs/model/CreateTriggerHookRequest.h
	include/alibabacloud/cs/model/CreateTriggerHookResult.h
	include/alibabacloud/cs/model/UpgradeClusterComponentsRequest.h
	include/alibabacloud/cs/model/UpgradeClusterComponentsResult.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsRequest.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsResult.h
	include/alibabacloud/cs/model/CreateClusterRequest.h
	include/alibabacloud/cs/model/CreateClusterResult.h
	include/alibabacloud/cs/model/DeleteClusterNodesRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodesResult.h )

set(cs_src 
	src/CSClient.cc
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/CheckAliyunCSServiceRoleRequest.cc
	src/model/CheckAliyunCSServiceRoleResult.cc
	src/model/DescribeClusterCertsRequest.cc
	src/model/DescribeClusterCertsResult.cc
	src/model/DescribeClusterAttachScriptsRequest.cc
	src/model/DescribeClusterAttachScriptsResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DescribeClusterNodesRequest.cc
	src/model/DescribeClusterNodesResult.cc
	src/model/ModifyClusterRequest.cc
	src/model/ModifyClusterResult.cc
	src/model/DescribeClusterAddonsVersionRequest.cc
	src/model/DescribeClusterAddonsVersionResult.cc
	src/model/DescribeKubernetesVersionMetadataRequest.cc
	src/model/DescribeKubernetesVersionMetadataResult.cc
	src/model/DeleteTriggerHookRequest.cc
	src/model/DeleteTriggerHookResult.cc
	src/model/DescribeEdgeClusterAttachScriptsRequest.cc
	src/model/DescribeEdgeClusterAttachScriptsResult.cc
	src/model/GetClusterCertInfoRequest.cc
	src/model/GetClusterCertInfoResult.cc
	src/model/DescribeClusterLogsRequest.cc
	src/model/DescribeClusterLogsResult.cc
	src/model/DescribeClusterDetailRequest.cc
	src/model/DescribeClusterDetailResult.cc
	src/model/ResetClusterNodeRequest.cc
	src/model/ResetClusterNodeResult.cc
	src/model/DescribeClusterEndpointsRequest.cc
	src/model/DescribeClusterEndpointsResult.cc
	src/model/RevokeTriggerHookRequest.cc
	src/model/RevokeTriggerHookResult.cc
	src/model/DeleteClusterNodeRequest.cc
	src/model/DeleteClusterNodeResult.cc
	src/model/DescribeClustersRequest.cc
	src/model/DescribeClustersResult.cc
	src/model/RevokeClusterTokenRequest.cc
	src/model/RevokeClusterTokenResult.cc
	src/model/CreateClusterByResourcesGroupRequest.cc
	src/model/CreateClusterByResourcesGroupResult.cc
	src/model/UpgradeClusterAddonsRequest.cc
	src/model/UpgradeClusterAddonsResult.cc
	src/model/DescribeApiVersionRequest.cc
	src/model/DescribeApiVersionResult.cc
	src/model/InstallClusterAddonsRequest.cc
	src/model/InstallClusterAddonsResult.cc
	src/model/ScaleOutClusterRequest.cc
	src/model/ScaleOutClusterResult.cc
	src/model/PreCheckForCreateClusterRequest.cc
	src/model/PreCheckForCreateClusterResult.cc
	src/model/DescribeClusterUserKubeconfigRequest.cc
	src/model/DescribeClusterUserKubeconfigResult.cc
	src/model/ScaleClusterRequest.cc
	src/model/ScaleClusterResult.cc
	src/model/ModifyClusterTagsRequest.cc
	src/model/ModifyClusterTagsResult.cc
	src/model/CreateTriggerHookRequest.cc
	src/model/CreateTriggerHookResult.cc
	src/model/UpgradeClusterComponentsRequest.cc
	src/model/UpgradeClusterComponentsResult.cc
	src/model/DownloadClusterNodeCertsRequest.cc
	src/model/DownloadClusterNodeCertsResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/DeleteClusterNodesRequest.cc
	src/model/DeleteClusterNodesResult.cc )

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