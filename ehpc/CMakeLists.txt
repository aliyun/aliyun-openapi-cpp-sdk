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

set(ehpc_public_header 
	include/alibabacloud/ehpc/EHPCClient.h
	include/alibabacloud/ehpc/EHPCExport.h )

set(ehpc_public_header_model 
	include/alibabacloud/ehpc/model/DeleteImageRequest.h
	include/alibabacloud/ehpc/model/DeleteImageResult.h
	include/alibabacloud/ehpc/model/DeleteUsersRequest.h
	include/alibabacloud/ehpc/model/DeleteUsersResult.h
	include/alibabacloud/ehpc/model/DescribeClusterRequest.h
	include/alibabacloud/ehpc/model/DescribeClusterResult.h
	include/alibabacloud/ehpc/model/ListUsersRequest.h
	include/alibabacloud/ehpc/model/ListUsersResult.h
	include/alibabacloud/ehpc/model/StopNodesRequest.h
	include/alibabacloud/ehpc/model/StopNodesResult.h
	include/alibabacloud/ehpc/model/PullImageRequest.h
	include/alibabacloud/ehpc/model/PullImageResult.h
	include/alibabacloud/ehpc/model/DescribeContainerAppRequest.h
	include/alibabacloud/ehpc/model/DescribeContainerAppResult.h
	include/alibabacloud/ehpc/model/ListCurrentClientVersionRequest.h
	include/alibabacloud/ehpc/model/ListCurrentClientVersionResult.h
	include/alibabacloud/ehpc/model/ModifyContainerAppAttributesRequest.h
	include/alibabacloud/ehpc/model/ModifyContainerAppAttributesResult.h
	include/alibabacloud/ehpc/model/SetAutoScaleConfigRequest.h
	include/alibabacloud/ehpc/model/SetAutoScaleConfigResult.h
	include/alibabacloud/ehpc/model/ListInvocationResultsRequest.h
	include/alibabacloud/ehpc/model/ListInvocationResultsResult.h
	include/alibabacloud/ehpc/model/AddNodesRequest.h
	include/alibabacloud/ehpc/model/AddNodesResult.h
	include/alibabacloud/ehpc/model/ListSoftwaresRequest.h
	include/alibabacloud/ehpc/model/ListSoftwaresResult.h
	include/alibabacloud/ehpc/model/StopJobsRequest.h
	include/alibabacloud/ehpc/model/StopJobsResult.h
	include/alibabacloud/ehpc/model/StartNodesRequest.h
	include/alibabacloud/ehpc/model/StartNodesResult.h
	include/alibabacloud/ehpc/model/GetCloudMetricProfilingRequest.h
	include/alibabacloud/ehpc/model/GetCloudMetricProfilingResult.h
	include/alibabacloud/ehpc/model/DescribeImagePriceRequest.h
	include/alibabacloud/ehpc/model/DescribeImagePriceResult.h
	include/alibabacloud/ehpc/model/GetAutoScaleConfigRequest.h
	include/alibabacloud/ehpc/model/GetAutoScaleConfigResult.h
	include/alibabacloud/ehpc/model/ListNodesRequest.h
	include/alibabacloud/ehpc/model/ListNodesResult.h
	include/alibabacloud/ehpc/model/ModifyUserGroupsRequest.h
	include/alibabacloud/ehpc/model/ModifyUserGroupsResult.h
	include/alibabacloud/ehpc/model/StartClusterRequest.h
	include/alibabacloud/ehpc/model/StartClusterResult.h
	include/alibabacloud/ehpc/model/ListCommandsRequest.h
	include/alibabacloud/ehpc/model/ListCommandsResult.h
	include/alibabacloud/ehpc/model/ListCustomImagesRequest.h
	include/alibabacloud/ehpc/model/ListCustomImagesResult.h
	include/alibabacloud/ehpc/model/InvokeShellCommandRequest.h
	include/alibabacloud/ehpc/model/InvokeShellCommandResult.h
	include/alibabacloud/ehpc/model/ListFileSystemWithMountTargetsRequest.h
	include/alibabacloud/ehpc/model/ListFileSystemWithMountTargetsResult.h
	include/alibabacloud/ehpc/model/AddUsersRequest.h
	include/alibabacloud/ehpc/model/AddUsersResult.h
	include/alibabacloud/ehpc/model/ListJobTemplatesRequest.h
	include/alibabacloud/ehpc/model/ListJobTemplatesResult.h
	include/alibabacloud/ehpc/model/ModifyClusterAttributesRequest.h
	include/alibabacloud/ehpc/model/ModifyClusterAttributesResult.h
	include/alibabacloud/ehpc/model/DescribeImageGatewayConfigRequest.h
	include/alibabacloud/ehpc/model/DescribeImageGatewayConfigResult.h
	include/alibabacloud/ehpc/model/DeleteJobTemplatesRequest.h
	include/alibabacloud/ehpc/model/DeleteJobTemplatesResult.h
	include/alibabacloud/ehpc/model/StopClusterRequest.h
	include/alibabacloud/ehpc/model/StopClusterResult.h
	include/alibabacloud/ehpc/model/ListNodesNoPagingRequest.h
	include/alibabacloud/ehpc/model/ListNodesNoPagingResult.h
	include/alibabacloud/ehpc/model/GetCloudMetricLogsRequest.h
	include/alibabacloud/ehpc/model/GetCloudMetricLogsResult.h
	include/alibabacloud/ehpc/model/GetHybridClusterConfigRequest.h
	include/alibabacloud/ehpc/model/GetHybridClusterConfigResult.h
	include/alibabacloud/ehpc/model/CreateJobTemplateRequest.h
	include/alibabacloud/ehpc/model/CreateJobTemplateResult.h
	include/alibabacloud/ehpc/model/ResetNodesRequest.h
	include/alibabacloud/ehpc/model/ResetNodesResult.h
	include/alibabacloud/ehpc/model/CreateHybridClusterRequest.h
	include/alibabacloud/ehpc/model/CreateHybridClusterResult.h
	include/alibabacloud/ehpc/model/ListContainerImagesRequest.h
	include/alibabacloud/ehpc/model/ListContainerImagesResult.h
	include/alibabacloud/ehpc/model/DeleteJobsRequest.h
	include/alibabacloud/ehpc/model/DeleteJobsResult.h
	include/alibabacloud/ehpc/model/DeleteNodesRequest.h
	include/alibabacloud/ehpc/model/DeleteNodesResult.h
	include/alibabacloud/ehpc/model/ListJobsRequest.h
	include/alibabacloud/ehpc/model/ListJobsResult.h
	include/alibabacloud/ehpc/model/CreateClusterRequest.h
	include/alibabacloud/ehpc/model/CreateClusterResult.h
	include/alibabacloud/ehpc/model/DescribeImageRequest.h
	include/alibabacloud/ehpc/model/DescribeImageResult.h
	include/alibabacloud/ehpc/model/ModifyUserPasswordsRequest.h
	include/alibabacloud/ehpc/model/ModifyUserPasswordsResult.h
	include/alibabacloud/ehpc/model/UpgradeClientRequest.h
	include/alibabacloud/ehpc/model/UpgradeClientResult.h
	include/alibabacloud/ehpc/model/DeleteClusterRequest.h
	include/alibabacloud/ehpc/model/DeleteClusterResult.h
	include/alibabacloud/ehpc/model/ListImagesRequest.h
	include/alibabacloud/ehpc/model/ListImagesResult.h
	include/alibabacloud/ehpc/model/ListVolumesRequest.h
	include/alibabacloud/ehpc/model/ListVolumesResult.h
	include/alibabacloud/ehpc/model/DeleteContainerAppsRequest.h
	include/alibabacloud/ehpc/model/DeleteContainerAppsResult.h
	include/alibabacloud/ehpc/model/ListInvocationStatusRequest.h
	include/alibabacloud/ehpc/model/ListInvocationStatusResult.h
	include/alibabacloud/ehpc/model/ModifyImageGatewayConfigRequest.h
	include/alibabacloud/ehpc/model/ModifyImageGatewayConfigResult.h
	include/alibabacloud/ehpc/model/ListContainerAppsRequest.h
	include/alibabacloud/ehpc/model/ListContainerAppsResult.h
	include/alibabacloud/ehpc/model/ListQueuesRequest.h
	include/alibabacloud/ehpc/model/ListQueuesResult.h
	include/alibabacloud/ehpc/model/ListCloudMetricProfilingsRequest.h
	include/alibabacloud/ehpc/model/ListCloudMetricProfilingsResult.h
	include/alibabacloud/ehpc/model/SetJobUserRequest.h
	include/alibabacloud/ehpc/model/SetJobUserResult.h
	include/alibabacloud/ehpc/model/ListClustersRequest.h
	include/alibabacloud/ehpc/model/ListClustersResult.h
	include/alibabacloud/ehpc/model/SubmitJobRequest.h
	include/alibabacloud/ehpc/model/SubmitJobResult.h
	include/alibabacloud/ehpc/model/ListRegionsRequest.h
	include/alibabacloud/ehpc/model/ListRegionsResult.h
	include/alibabacloud/ehpc/model/DescribeAutoScaleConfigRequest.h
	include/alibabacloud/ehpc/model/DescribeAutoScaleConfigResult.h
	include/alibabacloud/ehpc/model/RunCloudMetricProfilingRequest.h
	include/alibabacloud/ehpc/model/RunCloudMetricProfilingResult.h
	include/alibabacloud/ehpc/model/DescribePriceRequest.h
	include/alibabacloud/ehpc/model/DescribePriceResult.h
	include/alibabacloud/ehpc/model/RerunJobsRequest.h
	include/alibabacloud/ehpc/model/RerunJobsResult.h
	include/alibabacloud/ehpc/model/EditJobTemplateRequest.h
	include/alibabacloud/ehpc/model/EditJobTemplateResult.h
	include/alibabacloud/ehpc/model/AddLocalNodesRequest.h
	include/alibabacloud/ehpc/model/AddLocalNodesResult.h
	include/alibabacloud/ehpc/model/ListPreferredEcsTypesRequest.h
	include/alibabacloud/ehpc/model/ListPreferredEcsTypesResult.h
	include/alibabacloud/ehpc/model/AddContainerAppRequest.h
	include/alibabacloud/ehpc/model/AddContainerAppResult.h
	include/alibabacloud/ehpc/model/ListClusterLogsRequest.h
	include/alibabacloud/ehpc/model/ListClusterLogsResult.h
	include/alibabacloud/ehpc/model/RecoverClusterRequest.h
	include/alibabacloud/ehpc/model/RecoverClusterResult.h
	include/alibabacloud/ehpc/model/ListAvailableEcsTypesRequest.h
	include/alibabacloud/ehpc/model/ListAvailableEcsTypesResult.h )

set(ehpc_src 
	src/EHPCClient.cc
	src/model/DeleteImageRequest.cc
	src/model/DeleteImageResult.cc
	src/model/DeleteUsersRequest.cc
	src/model/DeleteUsersResult.cc
	src/model/DescribeClusterRequest.cc
	src/model/DescribeClusterResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/StopNodesRequest.cc
	src/model/StopNodesResult.cc
	src/model/PullImageRequest.cc
	src/model/PullImageResult.cc
	src/model/DescribeContainerAppRequest.cc
	src/model/DescribeContainerAppResult.cc
	src/model/ListCurrentClientVersionRequest.cc
	src/model/ListCurrentClientVersionResult.cc
	src/model/ModifyContainerAppAttributesRequest.cc
	src/model/ModifyContainerAppAttributesResult.cc
	src/model/SetAutoScaleConfigRequest.cc
	src/model/SetAutoScaleConfigResult.cc
	src/model/ListInvocationResultsRequest.cc
	src/model/ListInvocationResultsResult.cc
	src/model/AddNodesRequest.cc
	src/model/AddNodesResult.cc
	src/model/ListSoftwaresRequest.cc
	src/model/ListSoftwaresResult.cc
	src/model/StopJobsRequest.cc
	src/model/StopJobsResult.cc
	src/model/StartNodesRequest.cc
	src/model/StartNodesResult.cc
	src/model/GetCloudMetricProfilingRequest.cc
	src/model/GetCloudMetricProfilingResult.cc
	src/model/DescribeImagePriceRequest.cc
	src/model/DescribeImagePriceResult.cc
	src/model/GetAutoScaleConfigRequest.cc
	src/model/GetAutoScaleConfigResult.cc
	src/model/ListNodesRequest.cc
	src/model/ListNodesResult.cc
	src/model/ModifyUserGroupsRequest.cc
	src/model/ModifyUserGroupsResult.cc
	src/model/StartClusterRequest.cc
	src/model/StartClusterResult.cc
	src/model/ListCommandsRequest.cc
	src/model/ListCommandsResult.cc
	src/model/ListCustomImagesRequest.cc
	src/model/ListCustomImagesResult.cc
	src/model/InvokeShellCommandRequest.cc
	src/model/InvokeShellCommandResult.cc
	src/model/ListFileSystemWithMountTargetsRequest.cc
	src/model/ListFileSystemWithMountTargetsResult.cc
	src/model/AddUsersRequest.cc
	src/model/AddUsersResult.cc
	src/model/ListJobTemplatesRequest.cc
	src/model/ListJobTemplatesResult.cc
	src/model/ModifyClusterAttributesRequest.cc
	src/model/ModifyClusterAttributesResult.cc
	src/model/DescribeImageGatewayConfigRequest.cc
	src/model/DescribeImageGatewayConfigResult.cc
	src/model/DeleteJobTemplatesRequest.cc
	src/model/DeleteJobTemplatesResult.cc
	src/model/StopClusterRequest.cc
	src/model/StopClusterResult.cc
	src/model/ListNodesNoPagingRequest.cc
	src/model/ListNodesNoPagingResult.cc
	src/model/GetCloudMetricLogsRequest.cc
	src/model/GetCloudMetricLogsResult.cc
	src/model/GetHybridClusterConfigRequest.cc
	src/model/GetHybridClusterConfigResult.cc
	src/model/CreateJobTemplateRequest.cc
	src/model/CreateJobTemplateResult.cc
	src/model/ResetNodesRequest.cc
	src/model/ResetNodesResult.cc
	src/model/CreateHybridClusterRequest.cc
	src/model/CreateHybridClusterResult.cc
	src/model/ListContainerImagesRequest.cc
	src/model/ListContainerImagesResult.cc
	src/model/DeleteJobsRequest.cc
	src/model/DeleteJobsResult.cc
	src/model/DeleteNodesRequest.cc
	src/model/DeleteNodesResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/DescribeImageRequest.cc
	src/model/DescribeImageResult.cc
	src/model/ModifyUserPasswordsRequest.cc
	src/model/ModifyUserPasswordsResult.cc
	src/model/UpgradeClientRequest.cc
	src/model/UpgradeClientResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/ListImagesRequest.cc
	src/model/ListImagesResult.cc
	src/model/ListVolumesRequest.cc
	src/model/ListVolumesResult.cc
	src/model/DeleteContainerAppsRequest.cc
	src/model/DeleteContainerAppsResult.cc
	src/model/ListInvocationStatusRequest.cc
	src/model/ListInvocationStatusResult.cc
	src/model/ModifyImageGatewayConfigRequest.cc
	src/model/ModifyImageGatewayConfigResult.cc
	src/model/ListContainerAppsRequest.cc
	src/model/ListContainerAppsResult.cc
	src/model/ListQueuesRequest.cc
	src/model/ListQueuesResult.cc
	src/model/ListCloudMetricProfilingsRequest.cc
	src/model/ListCloudMetricProfilingsResult.cc
	src/model/SetJobUserRequest.cc
	src/model/SetJobUserResult.cc
	src/model/ListClustersRequest.cc
	src/model/ListClustersResult.cc
	src/model/SubmitJobRequest.cc
	src/model/SubmitJobResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/DescribeAutoScaleConfigRequest.cc
	src/model/DescribeAutoScaleConfigResult.cc
	src/model/RunCloudMetricProfilingRequest.cc
	src/model/RunCloudMetricProfilingResult.cc
	src/model/DescribePriceRequest.cc
	src/model/DescribePriceResult.cc
	src/model/RerunJobsRequest.cc
	src/model/RerunJobsResult.cc
	src/model/EditJobTemplateRequest.cc
	src/model/EditJobTemplateResult.cc
	src/model/AddLocalNodesRequest.cc
	src/model/AddLocalNodesResult.cc
	src/model/ListPreferredEcsTypesRequest.cc
	src/model/ListPreferredEcsTypesResult.cc
	src/model/AddContainerAppRequest.cc
	src/model/AddContainerAppResult.cc
	src/model/ListClusterLogsRequest.cc
	src/model/ListClusterLogsResult.cc
	src/model/RecoverClusterRequest.cc
	src/model/RecoverClusterResult.cc
	src/model/ListAvailableEcsTypesRequest.cc
	src/model/ListAvailableEcsTypesResult.cc )

add_library(ehpc ${LIB_TYPE}
	${ehpc_public_header}
	${ehpc_public_header_model}
	${ehpc_src})

set_target_properties(ehpc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ehpc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ehpc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EHPC_LIBRARY)
endif()

target_include_directories(ehpc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ehpc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ehpc
		jsoncpp)
	target_include_directories(ehpc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ehpc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ehpc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ehpc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ehpc
		jsoncpp)
endif()

install(FILES ${ehpc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpc)
install(FILES ${ehpc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpc/model)
install(TARGETS ehpc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)