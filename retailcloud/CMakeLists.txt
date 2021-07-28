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

set(retailcloud_public_header 
	include/alibabacloud/retailcloud/RetailcloudClient.h
	include/alibabacloud/retailcloud/RetailcloudExport.h )

set(retailcloud_public_header_model 
	include/alibabacloud/retailcloud/model/AddClusterNodeRequest.h
	include/alibabacloud/retailcloud/model/AddClusterNodeResult.h
	include/alibabacloud/retailcloud/model/AllocatePodConfigRequest.h
	include/alibabacloud/retailcloud/model/AllocatePodConfigResult.h
	include/alibabacloud/retailcloud/model/BatchAddServersRequest.h
	include/alibabacloud/retailcloud/model/BatchAddServersResult.h
	include/alibabacloud/retailcloud/model/BindGroupRequest.h
	include/alibabacloud/retailcloud/model/BindGroupResult.h
	include/alibabacloud/retailcloud/model/BindNodeLabelRequest.h
	include/alibabacloud/retailcloud/model/BindNodeLabelResult.h
	include/alibabacloud/retailcloud/model/CloseDeployOrderRequest.h
	include/alibabacloud/retailcloud/model/CloseDeployOrderResult.h
	include/alibabacloud/retailcloud/model/CreateAccountRequest.h
	include/alibabacloud/retailcloud/model/CreateAccountResult.h
	include/alibabacloud/retailcloud/model/CreateAppRequest.h
	include/alibabacloud/retailcloud/model/CreateAppResult.h
	include/alibabacloud/retailcloud/model/CreateAppGroupRequest.h
	include/alibabacloud/retailcloud/model/CreateAppGroupResult.h
	include/alibabacloud/retailcloud/model/CreateAppMonitorsRequest.h
	include/alibabacloud/retailcloud/model/CreateAppMonitorsResult.h
	include/alibabacloud/retailcloud/model/CreateAppResourceAllocRequest.h
	include/alibabacloud/retailcloud/model/CreateAppResourceAllocResult.h
	include/alibabacloud/retailcloud/model/CreateClusterRequest.h
	include/alibabacloud/retailcloud/model/CreateClusterResult.h
	include/alibabacloud/retailcloud/model/CreateDbRequest.h
	include/alibabacloud/retailcloud/model/CreateDbResult.h
	include/alibabacloud/retailcloud/model/CreateDeployConfigRequest.h
	include/alibabacloud/retailcloud/model/CreateDeployConfigResult.h
	include/alibabacloud/retailcloud/model/CreateEnvironmentRequest.h
	include/alibabacloud/retailcloud/model/CreateEnvironmentResult.h
	include/alibabacloud/retailcloud/model/CreateNodeLabelRequest.h
	include/alibabacloud/retailcloud/model/CreateNodeLabelResult.h
	include/alibabacloud/retailcloud/model/CreatePersistentVolumeRequest.h
	include/alibabacloud/retailcloud/model/CreatePersistentVolumeResult.h
	include/alibabacloud/retailcloud/model/CreatePersistentVolumeClaimRequest.h
	include/alibabacloud/retailcloud/model/CreatePersistentVolumeClaimResult.h
	include/alibabacloud/retailcloud/model/CreateServiceRequest.h
	include/alibabacloud/retailcloud/model/CreateServiceResult.h
	include/alibabacloud/retailcloud/model/CreateSlbAPRequest.h
	include/alibabacloud/retailcloud/model/CreateSlbAPResult.h
	include/alibabacloud/retailcloud/model/DeleteAppDetailRequest.h
	include/alibabacloud/retailcloud/model/DeleteAppDetailResult.h
	include/alibabacloud/retailcloud/model/DeleteAppEnvironmentRequest.h
	include/alibabacloud/retailcloud/model/DeleteAppEnvironmentResult.h
	include/alibabacloud/retailcloud/model/DeleteAppGroupRequest.h
	include/alibabacloud/retailcloud/model/DeleteAppGroupResult.h
	include/alibabacloud/retailcloud/model/DeleteAppResourceAllocRequest.h
	include/alibabacloud/retailcloud/model/DeleteAppResourceAllocResult.h
	include/alibabacloud/retailcloud/model/DeleteClusterRequest.h
	include/alibabacloud/retailcloud/model/DeleteClusterResult.h
	include/alibabacloud/retailcloud/model/DeleteDatabaseRequest.h
	include/alibabacloud/retailcloud/model/DeleteDatabaseResult.h
	include/alibabacloud/retailcloud/model/DeleteDeployConfigRequest.h
	include/alibabacloud/retailcloud/model/DeleteDeployConfigResult.h
	include/alibabacloud/retailcloud/model/DeleteNodeLabelRequest.h
	include/alibabacloud/retailcloud/model/DeleteNodeLabelResult.h
	include/alibabacloud/retailcloud/model/DeletePersistentVolumeRequest.h
	include/alibabacloud/retailcloud/model/DeletePersistentVolumeResult.h
	include/alibabacloud/retailcloud/model/DeletePersistentVolumeClaimRequest.h
	include/alibabacloud/retailcloud/model/DeletePersistentVolumeClaimResult.h
	include/alibabacloud/retailcloud/model/DeleteRdsAccountRequest.h
	include/alibabacloud/retailcloud/model/DeleteRdsAccountResult.h
	include/alibabacloud/retailcloud/model/DeleteServiceRequest.h
	include/alibabacloud/retailcloud/model/DeleteServiceResult.h
	include/alibabacloud/retailcloud/model/DeleteSlbAPRequest.h
	include/alibabacloud/retailcloud/model/DeleteSlbAPResult.h
	include/alibabacloud/retailcloud/model/DeployAppRequest.h
	include/alibabacloud/retailcloud/model/DeployAppResult.h
	include/alibabacloud/retailcloud/model/DescribeAppDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeAppDetailResult.h
	include/alibabacloud/retailcloud/model/DescribeAppEnvironmentDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeAppEnvironmentDetailResult.h
	include/alibabacloud/retailcloud/model/DescribeAppMonitorMetricRequest.h
	include/alibabacloud/retailcloud/model/DescribeAppMonitorMetricResult.h
	include/alibabacloud/retailcloud/model/DescribeAppResourceAllocRequest.h
	include/alibabacloud/retailcloud/model/DescribeAppResourceAllocResult.h
	include/alibabacloud/retailcloud/model/DescribeClusterDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeClusterDetailResult.h
	include/alibabacloud/retailcloud/model/DescribeDatabasesRequest.h
	include/alibabacloud/retailcloud/model/DescribeDatabasesResult.h
	include/alibabacloud/retailcloud/model/DescribeDeployOrderDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeDeployOrderDetailResult.h
	include/alibabacloud/retailcloud/model/DescribeEventMonitorListRequest.h
	include/alibabacloud/retailcloud/model/DescribeEventMonitorListResult.h
	include/alibabacloud/retailcloud/model/DescribeJobLogRequest.h
	include/alibabacloud/retailcloud/model/DescribeJobLogResult.h
	include/alibabacloud/retailcloud/model/DescribePodContainerLogListRequest.h
	include/alibabacloud/retailcloud/model/DescribePodContainerLogListResult.h
	include/alibabacloud/retailcloud/model/DescribePodEventsRequest.h
	include/alibabacloud/retailcloud/model/DescribePodEventsResult.h
	include/alibabacloud/retailcloud/model/DescribePodLogRequest.h
	include/alibabacloud/retailcloud/model/DescribePodLogResult.h
	include/alibabacloud/retailcloud/model/DescribeRdsAccountsRequest.h
	include/alibabacloud/retailcloud/model/DescribeRdsAccountsResult.h
	include/alibabacloud/retailcloud/model/DescribeServiceDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeServiceDetailResult.h
	include/alibabacloud/retailcloud/model/DescribeSlbAPDetailRequest.h
	include/alibabacloud/retailcloud/model/DescribeSlbAPDetailResult.h
	include/alibabacloud/retailcloud/model/GetInstTransInfoRequest.h
	include/alibabacloud/retailcloud/model/GetInstTransInfoResult.h
	include/alibabacloud/retailcloud/model/GetRdsBackUpRequest.h
	include/alibabacloud/retailcloud/model/GetRdsBackUpResult.h
	include/alibabacloud/retailcloud/model/GrantDbToAccountRequest.h
	include/alibabacloud/retailcloud/model/GrantDbToAccountResult.h
	include/alibabacloud/retailcloud/model/ListAppRequest.h
	include/alibabacloud/retailcloud/model/ListAppResult.h
	include/alibabacloud/retailcloud/model/ListAppCmsGroupsRequest.h
	include/alibabacloud/retailcloud/model/ListAppCmsGroupsResult.h
	include/alibabacloud/retailcloud/model/ListAppEnvironmentRequest.h
	include/alibabacloud/retailcloud/model/ListAppEnvironmentResult.h
	include/alibabacloud/retailcloud/model/ListAppGroupRequest.h
	include/alibabacloud/retailcloud/model/ListAppGroupResult.h
	include/alibabacloud/retailcloud/model/ListAppGroupMappingRequest.h
	include/alibabacloud/retailcloud/model/ListAppGroupMappingResult.h
	include/alibabacloud/retailcloud/model/ListAppInstanceRequest.h
	include/alibabacloud/retailcloud/model/ListAppInstanceResult.h
	include/alibabacloud/retailcloud/model/ListAppResourceAllocsRequest.h
	include/alibabacloud/retailcloud/model/ListAppResourceAllocsResult.h
	include/alibabacloud/retailcloud/model/ListAvailableClusterNodeRequest.h
	include/alibabacloud/retailcloud/model/ListAvailableClusterNodeResult.h
	include/alibabacloud/retailcloud/model/ListClusterRequest.h
	include/alibabacloud/retailcloud/model/ListClusterResult.h
	include/alibabacloud/retailcloud/model/ListClusterNodeRequest.h
	include/alibabacloud/retailcloud/model/ListClusterNodeResult.h
	include/alibabacloud/retailcloud/model/ListDeployConfigRequest.h
	include/alibabacloud/retailcloud/model/ListDeployConfigResult.h
	include/alibabacloud/retailcloud/model/ListDeployOrdersRequest.h
	include/alibabacloud/retailcloud/model/ListDeployOrdersResult.h
	include/alibabacloud/retailcloud/model/ListJobHistoriesRequest.h
	include/alibabacloud/retailcloud/model/ListJobHistoriesResult.h
	include/alibabacloud/retailcloud/model/ListNodeLabelBindingsRequest.h
	include/alibabacloud/retailcloud/model/ListNodeLabelBindingsResult.h
	include/alibabacloud/retailcloud/model/ListNodeLabelsRequest.h
	include/alibabacloud/retailcloud/model/ListNodeLabelsResult.h
	include/alibabacloud/retailcloud/model/ListPersistentVolumeRequest.h
	include/alibabacloud/retailcloud/model/ListPersistentVolumeResult.h
	include/alibabacloud/retailcloud/model/ListPersistentVolumeClaimRequest.h
	include/alibabacloud/retailcloud/model/ListPersistentVolumeClaimResult.h
	include/alibabacloud/retailcloud/model/ListPodsRequest.h
	include/alibabacloud/retailcloud/model/ListPodsResult.h
	include/alibabacloud/retailcloud/model/ListServicesRequest.h
	include/alibabacloud/retailcloud/model/ListServicesResult.h
	include/alibabacloud/retailcloud/model/ListSlbAPsRequest.h
	include/alibabacloud/retailcloud/model/ListSlbAPsResult.h
	include/alibabacloud/retailcloud/model/ListUsersRequest.h
	include/alibabacloud/retailcloud/model/ListUsersResult.h
	include/alibabacloud/retailcloud/model/ModifyServiceRequest.h
	include/alibabacloud/retailcloud/model/ModifyServiceResult.h
	include/alibabacloud/retailcloud/model/ModifySlbAPRequest.h
	include/alibabacloud/retailcloud/model/ModifySlbAPResult.h
	include/alibabacloud/retailcloud/model/QueryClusterDetailRequest.h
	include/alibabacloud/retailcloud/model/QueryClusterDetailResult.h
	include/alibabacloud/retailcloud/model/RebuildAppInstanceRequest.h
	include/alibabacloud/retailcloud/model/RebuildAppInstanceResult.h
	include/alibabacloud/retailcloud/model/RemoveClusterNodeRequest.h
	include/alibabacloud/retailcloud/model/RemoveClusterNodeResult.h
	include/alibabacloud/retailcloud/model/ResetAccountPasswordRequest.h
	include/alibabacloud/retailcloud/model/ResetAccountPasswordResult.h
	include/alibabacloud/retailcloud/model/ResourceStatusNotifyRequest.h
	include/alibabacloud/retailcloud/model/ResourceStatusNotifyResult.h
	include/alibabacloud/retailcloud/model/ResumeDeployRequest.h
	include/alibabacloud/retailcloud/model/ResumeDeployResult.h
	include/alibabacloud/retailcloud/model/ScaleAppRequest.h
	include/alibabacloud/retailcloud/model/ScaleAppResult.h
	include/alibabacloud/retailcloud/model/SetDeployPauseTypeRequest.h
	include/alibabacloud/retailcloud/model/SetDeployPauseTypeResult.h
	include/alibabacloud/retailcloud/model/SubmitInfoRequest.h
	include/alibabacloud/retailcloud/model/SubmitInfoResult.h
	include/alibabacloud/retailcloud/model/SyncPodInfoRequest.h
	include/alibabacloud/retailcloud/model/SyncPodInfoResult.h
	include/alibabacloud/retailcloud/model/UnbindGroupRequest.h
	include/alibabacloud/retailcloud/model/UnbindGroupResult.h
	include/alibabacloud/retailcloud/model/UnbindNodeLabelRequest.h
	include/alibabacloud/retailcloud/model/UnbindNodeLabelResult.h
	include/alibabacloud/retailcloud/model/UpdateAppRequest.h
	include/alibabacloud/retailcloud/model/UpdateAppResult.h
	include/alibabacloud/retailcloud/model/UpdateAppMonitorsRequest.h
	include/alibabacloud/retailcloud/model/UpdateAppMonitorsResult.h
	include/alibabacloud/retailcloud/model/UpdateDeployConfigRequest.h
	include/alibabacloud/retailcloud/model/UpdateDeployConfigResult.h
	include/alibabacloud/retailcloud/model/UpdateEnvironmentRequest.h
	include/alibabacloud/retailcloud/model/UpdateEnvironmentResult.h )

set(retailcloud_src 
	src/RetailcloudClient.cc
	src/model/AddClusterNodeRequest.cc
	src/model/AddClusterNodeResult.cc
	src/model/AllocatePodConfigRequest.cc
	src/model/AllocatePodConfigResult.cc
	src/model/BatchAddServersRequest.cc
	src/model/BatchAddServersResult.cc
	src/model/BindGroupRequest.cc
	src/model/BindGroupResult.cc
	src/model/BindNodeLabelRequest.cc
	src/model/BindNodeLabelResult.cc
	src/model/CloseDeployOrderRequest.cc
	src/model/CloseDeployOrderResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateAppRequest.cc
	src/model/CreateAppResult.cc
	src/model/CreateAppGroupRequest.cc
	src/model/CreateAppGroupResult.cc
	src/model/CreateAppMonitorsRequest.cc
	src/model/CreateAppMonitorsResult.cc
	src/model/CreateAppResourceAllocRequest.cc
	src/model/CreateAppResourceAllocResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateDbRequest.cc
	src/model/CreateDbResult.cc
	src/model/CreateDeployConfigRequest.cc
	src/model/CreateDeployConfigResult.cc
	src/model/CreateEnvironmentRequest.cc
	src/model/CreateEnvironmentResult.cc
	src/model/CreateNodeLabelRequest.cc
	src/model/CreateNodeLabelResult.cc
	src/model/CreatePersistentVolumeRequest.cc
	src/model/CreatePersistentVolumeResult.cc
	src/model/CreatePersistentVolumeClaimRequest.cc
	src/model/CreatePersistentVolumeClaimResult.cc
	src/model/CreateServiceRequest.cc
	src/model/CreateServiceResult.cc
	src/model/CreateSlbAPRequest.cc
	src/model/CreateSlbAPResult.cc
	src/model/DeleteAppDetailRequest.cc
	src/model/DeleteAppDetailResult.cc
	src/model/DeleteAppEnvironmentRequest.cc
	src/model/DeleteAppEnvironmentResult.cc
	src/model/DeleteAppGroupRequest.cc
	src/model/DeleteAppGroupResult.cc
	src/model/DeleteAppResourceAllocRequest.cc
	src/model/DeleteAppResourceAllocResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
	src/model/DeleteDeployConfigRequest.cc
	src/model/DeleteDeployConfigResult.cc
	src/model/DeleteNodeLabelRequest.cc
	src/model/DeleteNodeLabelResult.cc
	src/model/DeletePersistentVolumeRequest.cc
	src/model/DeletePersistentVolumeResult.cc
	src/model/DeletePersistentVolumeClaimRequest.cc
	src/model/DeletePersistentVolumeClaimResult.cc
	src/model/DeleteRdsAccountRequest.cc
	src/model/DeleteRdsAccountResult.cc
	src/model/DeleteServiceRequest.cc
	src/model/DeleteServiceResult.cc
	src/model/DeleteSlbAPRequest.cc
	src/model/DeleteSlbAPResult.cc
	src/model/DeployAppRequest.cc
	src/model/DeployAppResult.cc
	src/model/DescribeAppDetailRequest.cc
	src/model/DescribeAppDetailResult.cc
	src/model/DescribeAppEnvironmentDetailRequest.cc
	src/model/DescribeAppEnvironmentDetailResult.cc
	src/model/DescribeAppMonitorMetricRequest.cc
	src/model/DescribeAppMonitorMetricResult.cc
	src/model/DescribeAppResourceAllocRequest.cc
	src/model/DescribeAppResourceAllocResult.cc
	src/model/DescribeClusterDetailRequest.cc
	src/model/DescribeClusterDetailResult.cc
	src/model/DescribeDatabasesRequest.cc
	src/model/DescribeDatabasesResult.cc
	src/model/DescribeDeployOrderDetailRequest.cc
	src/model/DescribeDeployOrderDetailResult.cc
	src/model/DescribeEventMonitorListRequest.cc
	src/model/DescribeEventMonitorListResult.cc
	src/model/DescribeJobLogRequest.cc
	src/model/DescribeJobLogResult.cc
	src/model/DescribePodContainerLogListRequest.cc
	src/model/DescribePodContainerLogListResult.cc
	src/model/DescribePodEventsRequest.cc
	src/model/DescribePodEventsResult.cc
	src/model/DescribePodLogRequest.cc
	src/model/DescribePodLogResult.cc
	src/model/DescribeRdsAccountsRequest.cc
	src/model/DescribeRdsAccountsResult.cc
	src/model/DescribeServiceDetailRequest.cc
	src/model/DescribeServiceDetailResult.cc
	src/model/DescribeSlbAPDetailRequest.cc
	src/model/DescribeSlbAPDetailResult.cc
	src/model/GetInstTransInfoRequest.cc
	src/model/GetInstTransInfoResult.cc
	src/model/GetRdsBackUpRequest.cc
	src/model/GetRdsBackUpResult.cc
	src/model/GrantDbToAccountRequest.cc
	src/model/GrantDbToAccountResult.cc
	src/model/ListAppRequest.cc
	src/model/ListAppResult.cc
	src/model/ListAppCmsGroupsRequest.cc
	src/model/ListAppCmsGroupsResult.cc
	src/model/ListAppEnvironmentRequest.cc
	src/model/ListAppEnvironmentResult.cc
	src/model/ListAppGroupRequest.cc
	src/model/ListAppGroupResult.cc
	src/model/ListAppGroupMappingRequest.cc
	src/model/ListAppGroupMappingResult.cc
	src/model/ListAppInstanceRequest.cc
	src/model/ListAppInstanceResult.cc
	src/model/ListAppResourceAllocsRequest.cc
	src/model/ListAppResourceAllocsResult.cc
	src/model/ListAvailableClusterNodeRequest.cc
	src/model/ListAvailableClusterNodeResult.cc
	src/model/ListClusterRequest.cc
	src/model/ListClusterResult.cc
	src/model/ListClusterNodeRequest.cc
	src/model/ListClusterNodeResult.cc
	src/model/ListDeployConfigRequest.cc
	src/model/ListDeployConfigResult.cc
	src/model/ListDeployOrdersRequest.cc
	src/model/ListDeployOrdersResult.cc
	src/model/ListJobHistoriesRequest.cc
	src/model/ListJobHistoriesResult.cc
	src/model/ListNodeLabelBindingsRequest.cc
	src/model/ListNodeLabelBindingsResult.cc
	src/model/ListNodeLabelsRequest.cc
	src/model/ListNodeLabelsResult.cc
	src/model/ListPersistentVolumeRequest.cc
	src/model/ListPersistentVolumeResult.cc
	src/model/ListPersistentVolumeClaimRequest.cc
	src/model/ListPersistentVolumeClaimResult.cc
	src/model/ListPodsRequest.cc
	src/model/ListPodsResult.cc
	src/model/ListServicesRequest.cc
	src/model/ListServicesResult.cc
	src/model/ListSlbAPsRequest.cc
	src/model/ListSlbAPsResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ModifyServiceRequest.cc
	src/model/ModifyServiceResult.cc
	src/model/ModifySlbAPRequest.cc
	src/model/ModifySlbAPResult.cc
	src/model/QueryClusterDetailRequest.cc
	src/model/QueryClusterDetailResult.cc
	src/model/RebuildAppInstanceRequest.cc
	src/model/RebuildAppInstanceResult.cc
	src/model/RemoveClusterNodeRequest.cc
	src/model/RemoveClusterNodeResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/ResourceStatusNotifyRequest.cc
	src/model/ResourceStatusNotifyResult.cc
	src/model/ResumeDeployRequest.cc
	src/model/ResumeDeployResult.cc
	src/model/ScaleAppRequest.cc
	src/model/ScaleAppResult.cc
	src/model/SetDeployPauseTypeRequest.cc
	src/model/SetDeployPauseTypeResult.cc
	src/model/SubmitInfoRequest.cc
	src/model/SubmitInfoResult.cc
	src/model/SyncPodInfoRequest.cc
	src/model/SyncPodInfoResult.cc
	src/model/UnbindGroupRequest.cc
	src/model/UnbindGroupResult.cc
	src/model/UnbindNodeLabelRequest.cc
	src/model/UnbindNodeLabelResult.cc
	src/model/UpdateAppRequest.cc
	src/model/UpdateAppResult.cc
	src/model/UpdateAppMonitorsRequest.cc
	src/model/UpdateAppMonitorsResult.cc
	src/model/UpdateDeployConfigRequest.cc
	src/model/UpdateDeployConfigResult.cc
	src/model/UpdateEnvironmentRequest.cc
	src/model/UpdateEnvironmentResult.cc )

add_library(retailcloud ${LIB_TYPE}
	${retailcloud_public_header}
	${retailcloud_public_header_model}
	${retailcloud_src})

set_target_properties(retailcloud
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}retailcloud
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(retailcloud
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RETAILCLOUD_LIBRARY)
endif()

target_include_directories(retailcloud
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(retailcloud
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(retailcloud
		jsoncpp)
	target_include_directories(retailcloud
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(retailcloud
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(retailcloud
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(retailcloud
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(retailcloud
		jsoncpp)
endif()

install(FILES ${retailcloud_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/retailcloud)
install(FILES ${retailcloud_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/retailcloud/model)
install(TARGETS retailcloud
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)