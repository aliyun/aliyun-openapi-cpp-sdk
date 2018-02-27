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
	include/alibabacloud/cs/model/CallbackClusterTokenRequest.h
	include/alibabacloud/cs/model/CallbackClusterTokenResult.h
	include/alibabacloud/cs/model/DescribeTemplatesRequest.h
	include/alibabacloud/cs/model/DescribeTemplatesResult.h
	include/alibabacloud/cs/model/GetProjectEventsRequest.h
	include/alibabacloud/cs/model/GetProjectEventsResult.h
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleRequest.h
	include/alibabacloud/cs/model/CheckAliyunCSServiceRoleResult.h
	include/alibabacloud/cs/model/DescribeTemplateAttributeRequest.h
	include/alibabacloud/cs/model/DescribeTemplateAttributeResult.h
	include/alibabacloud/cs/model/CreateTemplateRequest.h
	include/alibabacloud/cs/model/CreateTemplateResult.h
	include/alibabacloud/cs/model/DescribeClusterCertsRequest.h
	include/alibabacloud/cs/model/DescribeClusterCertsResult.h
	include/alibabacloud/cs/model/DeleteClusterRequest.h
	include/alibabacloud/cs/model/DeleteClusterResult.h
	include/alibabacloud/cs/model/DescribeClusterNodesRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodesResult.h
	include/alibabacloud/cs/model/CallBackAgilityClusterRequest.h
	include/alibabacloud/cs/model/CallBackAgilityClusterResult.h
	include/alibabacloud/cs/model/DescribeClusterScaledNodeRequest.h
	include/alibabacloud/cs/model/DescribeClusterScaledNodeResult.h
	include/alibabacloud/cs/model/DescribeClusterLogsRequest.h
	include/alibabacloud/cs/model/DescribeClusterLogsResult.h
	include/alibabacloud/cs/model/DescribeClusterDetailRequest.h
	include/alibabacloud/cs/model/DescribeClusterDetailResult.h
	include/alibabacloud/cs/model/ResetClusterNodeRequest.h
	include/alibabacloud/cs/model/ResetClusterNodeResult.h
	include/alibabacloud/cs/model/DescribeServiceContainersRequest.h
	include/alibabacloud/cs/model/DescribeServiceContainersResult.h
	include/alibabacloud/cs/model/DescribeTaskInfoRequest.h
	include/alibabacloud/cs/model/DescribeTaskInfoResult.h
	include/alibabacloud/cs/model/GetClusterProjectsRequest.h
	include/alibabacloud/cs/model/GetClusterProjectsResult.h
	include/alibabacloud/cs/model/DescribeClusterServicesRequest.h
	include/alibabacloud/cs/model/DescribeClusterServicesResult.h
	include/alibabacloud/cs/model/ScaleInClusterRequest.h
	include/alibabacloud/cs/model/ScaleInClusterResult.h
	include/alibabacloud/cs/model/DeleteClusterNodeRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodeResult.h
	include/alibabacloud/cs/model/RevokeClusterTokenRequest.h
	include/alibabacloud/cs/model/RevokeClusterTokenResult.h
	include/alibabacloud/cs/model/DescribeClustersRequest.h
	include/alibabacloud/cs/model/DescribeClustersResult.h
	include/alibabacloud/cs/model/AddAgilityClusterRequest.h
	include/alibabacloud/cs/model/AddAgilityClusterResult.h
	include/alibabacloud/cs/model/DescribeImagesRequest.h
	include/alibabacloud/cs/model/DescribeImagesResult.h
	include/alibabacloud/cs/model/GetTriggerHookRequest.h
	include/alibabacloud/cs/model/GetTriggerHookResult.h
	include/alibabacloud/cs/model/DescribeClusterTokensRequest.h
	include/alibabacloud/cs/model/DescribeClusterTokensResult.h
	include/alibabacloud/cs/model/UpdateSubUserResoucesRequest.h
	include/alibabacloud/cs/model/UpdateSubUserResoucesResult.h
	include/alibabacloud/cs/model/ModifyClusterNameRequest.h
	include/alibabacloud/cs/model/ModifyClusterNameResult.h
	include/alibabacloud/cs/model/DescribeClusterHostsRequest.h
	include/alibabacloud/cs/model/DescribeClusterHostsResult.h
	include/alibabacloud/cs/model/DescribeApiVersionRequest.h
	include/alibabacloud/cs/model/DescribeApiVersionResult.h
	include/alibabacloud/cs/model/GatherLogsTokenRequest.h
	include/alibabacloud/cs/model/GatherLogsTokenResult.h
	include/alibabacloud/cs/model/CreateClusterTokenRequest.h
	include/alibabacloud/cs/model/CreateClusterTokenResult.h
	include/alibabacloud/cs/model/DescribeUserContainersRequest.h
	include/alibabacloud/cs/model/DescribeUserContainersResult.h
	include/alibabacloud/cs/model/DescribeAgilityTunnelAgentInfoRequest.h
	include/alibabacloud/cs/model/DescribeAgilityTunnelAgentInfoResult.h
	include/alibabacloud/cs/model/DescribeClusterNodeInfoRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodeInfoResult.h
	include/alibabacloud/cs/model/ScaleClusterRequest.h
	include/alibabacloud/cs/model/ScaleClusterResult.h
	include/alibabacloud/cs/model/DescribeAgilityTunnelCertsRequest.h
	include/alibabacloud/cs/model/DescribeAgilityTunnelCertsResult.h
	include/alibabacloud/cs/model/DescribeClusterNodeInfoWithInstanceRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodeInfoWithInstanceResult.h
	include/alibabacloud/cs/model/UpgradeClusterComponentsRequest.h
	include/alibabacloud/cs/model/UpgradeClusterComponentsResult.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsRequest.h
	include/alibabacloud/cs/model/DownloadClusterNodeCertsResult.h
	include/alibabacloud/cs/model/CreateClusterRequest.h
	include/alibabacloud/cs/model/CreateClusterResult.h )

set(cs_src 
	src/CSClient.cc
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/CallbackClusterTokenRequest.cc
	src/model/CallbackClusterTokenResult.cc
	src/model/DescribeTemplatesRequest.cc
	src/model/DescribeTemplatesResult.cc
	src/model/GetProjectEventsRequest.cc
	src/model/GetProjectEventsResult.cc
	src/model/CheckAliyunCSServiceRoleRequest.cc
	src/model/CheckAliyunCSServiceRoleResult.cc
	src/model/DescribeTemplateAttributeRequest.cc
	src/model/DescribeTemplateAttributeResult.cc
	src/model/CreateTemplateRequest.cc
	src/model/CreateTemplateResult.cc
	src/model/DescribeClusterCertsRequest.cc
	src/model/DescribeClusterCertsResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DescribeClusterNodesRequest.cc
	src/model/DescribeClusterNodesResult.cc
	src/model/CallBackAgilityClusterRequest.cc
	src/model/CallBackAgilityClusterResult.cc
	src/model/DescribeClusterScaledNodeRequest.cc
	src/model/DescribeClusterScaledNodeResult.cc
	src/model/DescribeClusterLogsRequest.cc
	src/model/DescribeClusterLogsResult.cc
	src/model/DescribeClusterDetailRequest.cc
	src/model/DescribeClusterDetailResult.cc
	src/model/ResetClusterNodeRequest.cc
	src/model/ResetClusterNodeResult.cc
	src/model/DescribeServiceContainersRequest.cc
	src/model/DescribeServiceContainersResult.cc
	src/model/DescribeTaskInfoRequest.cc
	src/model/DescribeTaskInfoResult.cc
	src/model/GetClusterProjectsRequest.cc
	src/model/GetClusterProjectsResult.cc
	src/model/DescribeClusterServicesRequest.cc
	src/model/DescribeClusterServicesResult.cc
	src/model/ScaleInClusterRequest.cc
	src/model/ScaleInClusterResult.cc
	src/model/DeleteClusterNodeRequest.cc
	src/model/DeleteClusterNodeResult.cc
	src/model/RevokeClusterTokenRequest.cc
	src/model/RevokeClusterTokenResult.cc
	src/model/DescribeClustersRequest.cc
	src/model/DescribeClustersResult.cc
	src/model/AddAgilityClusterRequest.cc
	src/model/AddAgilityClusterResult.cc
	src/model/DescribeImagesRequest.cc
	src/model/DescribeImagesResult.cc
	src/model/GetTriggerHookRequest.cc
	src/model/GetTriggerHookResult.cc
	src/model/DescribeClusterTokensRequest.cc
	src/model/DescribeClusterTokensResult.cc
	src/model/UpdateSubUserResoucesRequest.cc
	src/model/UpdateSubUserResoucesResult.cc
	src/model/ModifyClusterNameRequest.cc
	src/model/ModifyClusterNameResult.cc
	src/model/DescribeClusterHostsRequest.cc
	src/model/DescribeClusterHostsResult.cc
	src/model/DescribeApiVersionRequest.cc
	src/model/DescribeApiVersionResult.cc
	src/model/GatherLogsTokenRequest.cc
	src/model/GatherLogsTokenResult.cc
	src/model/CreateClusterTokenRequest.cc
	src/model/CreateClusterTokenResult.cc
	src/model/DescribeUserContainersRequest.cc
	src/model/DescribeUserContainersResult.cc
	src/model/DescribeAgilityTunnelAgentInfoRequest.cc
	src/model/DescribeAgilityTunnelAgentInfoResult.cc
	src/model/DescribeClusterNodeInfoRequest.cc
	src/model/DescribeClusterNodeInfoResult.cc
	src/model/ScaleClusterRequest.cc
	src/model/ScaleClusterResult.cc
	src/model/DescribeAgilityTunnelCertsRequest.cc
	src/model/DescribeAgilityTunnelCertsResult.cc
	src/model/DescribeClusterNodeInfoWithInstanceRequest.cc
	src/model/DescribeClusterNodeInfoWithInstanceResult.cc
	src/model/UpgradeClusterComponentsRequest.cc
	src/model/UpgradeClusterComponentsResult.cc
	src/model/DownloadClusterNodeCertsRequest.cc
	src/model/DownloadClusterNodeCertsResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc )

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