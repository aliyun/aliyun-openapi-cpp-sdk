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

set(cassandra_public_header 
	include/alibabacloud/cassandra/CassandraClient.h
	include/alibabacloud/cassandra/CassandraExport.h )

set(cassandra_public_header_model 
	include/alibabacloud/cassandra/model/AllocatePublicContactPointsRequest.h
	include/alibabacloud/cassandra/model/AllocatePublicContactPointsResult.h
	include/alibabacloud/cassandra/model/CreateBackupPlanRequest.h
	include/alibabacloud/cassandra/model/CreateBackupPlanResult.h
	include/alibabacloud/cassandra/model/CreateClusterRequest.h
	include/alibabacloud/cassandra/model/CreateClusterResult.h
	include/alibabacloud/cassandra/model/CreateDataCenterRequest.h
	include/alibabacloud/cassandra/model/CreateDataCenterResult.h
	include/alibabacloud/cassandra/model/DeleteBackupPlanRequest.h
	include/alibabacloud/cassandra/model/DeleteBackupPlanResult.h
	include/alibabacloud/cassandra/model/DeleteClusterRequest.h
	include/alibabacloud/cassandra/model/DeleteClusterResult.h
	include/alibabacloud/cassandra/model/DeleteDataCenterRequest.h
	include/alibabacloud/cassandra/model/DeleteDataCenterResult.h
	include/alibabacloud/cassandra/model/DeleteNodeToolExecutionHistoryRequest.h
	include/alibabacloud/cassandra/model/DeleteNodeToolExecutionHistoryResult.h
	include/alibabacloud/cassandra/model/DescribeAccountsRequest.h
	include/alibabacloud/cassandra/model/DescribeAccountsResult.h
	include/alibabacloud/cassandra/model/DescribeBackupRequest.h
	include/alibabacloud/cassandra/model/DescribeBackupResult.h
	include/alibabacloud/cassandra/model/DescribeBackupPlanRequest.h
	include/alibabacloud/cassandra/model/DescribeBackupPlanResult.h
	include/alibabacloud/cassandra/model/DescribeBackupPlansRequest.h
	include/alibabacloud/cassandra/model/DescribeBackupPlansResult.h
	include/alibabacloud/cassandra/model/DescribeBackupsRequest.h
	include/alibabacloud/cassandra/model/DescribeBackupsResult.h
	include/alibabacloud/cassandra/model/DescribeClusterRequest.h
	include/alibabacloud/cassandra/model/DescribeClusterResult.h
	include/alibabacloud/cassandra/model/DescribeClusterDashboardRequest.h
	include/alibabacloud/cassandra/model/DescribeClusterDashboardResult.h
	include/alibabacloud/cassandra/model/DescribeClusterStatusRequest.h
	include/alibabacloud/cassandra/model/DescribeClusterStatusResult.h
	include/alibabacloud/cassandra/model/DescribeClustersRequest.h
	include/alibabacloud/cassandra/model/DescribeClustersResult.h
	include/alibabacloud/cassandra/model/DescribeContactPointsRequest.h
	include/alibabacloud/cassandra/model/DescribeContactPointsResult.h
	include/alibabacloud/cassandra/model/DescribeDataCenterRequest.h
	include/alibabacloud/cassandra/model/DescribeDataCenterResult.h
	include/alibabacloud/cassandra/model/DescribeDataCentersRequest.h
	include/alibabacloud/cassandra/model/DescribeDataCentersResult.h
	include/alibabacloud/cassandra/model/DescribeDeletedClustersRequest.h
	include/alibabacloud/cassandra/model/DescribeDeletedClustersResult.h
	include/alibabacloud/cassandra/model/DescribeInstanceTypeRequest.h
	include/alibabacloud/cassandra/model/DescribeInstanceTypeResult.h
	include/alibabacloud/cassandra/model/DescribeIpWhitelistRequest.h
	include/alibabacloud/cassandra/model/DescribeIpWhitelistResult.h
	include/alibabacloud/cassandra/model/DescribeIpWhitelistGroupsRequest.h
	include/alibabacloud/cassandra/model/DescribeIpWhitelistGroupsResult.h
	include/alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoriesRequest.h
	include/alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoriesResult.h
	include/alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoryRequest.h
	include/alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoryResult.h
	include/alibabacloud/cassandra/model/DescribeParameterModificationHistoriesRequest.h
	include/alibabacloud/cassandra/model/DescribeParameterModificationHistoriesResult.h
	include/alibabacloud/cassandra/model/DescribeParametersRequest.h
	include/alibabacloud/cassandra/model/DescribeParametersResult.h
	include/alibabacloud/cassandra/model/DescribeRegionsRequest.h
	include/alibabacloud/cassandra/model/DescribeRegionsResult.h
	include/alibabacloud/cassandra/model/DescribeSecurityGroupsRequest.h
	include/alibabacloud/cassandra/model/DescribeSecurityGroupsResult.h
	include/alibabacloud/cassandra/model/ExecuteNodeToolRequest.h
	include/alibabacloud/cassandra/model/ExecuteNodeToolResult.h
	include/alibabacloud/cassandra/model/GetCmsUrlRequest.h
	include/alibabacloud/cassandra/model/GetCmsUrlResult.h
	include/alibabacloud/cassandra/model/ListTagResourcesRequest.h
	include/alibabacloud/cassandra/model/ListTagResourcesResult.h
	include/alibabacloud/cassandra/model/ListTagsRequest.h
	include/alibabacloud/cassandra/model/ListTagsResult.h
	include/alibabacloud/cassandra/model/ModifyAccountPasswordRequest.h
	include/alibabacloud/cassandra/model/ModifyAccountPasswordResult.h
	include/alibabacloud/cassandra/model/ModifyBackupPlanRequest.h
	include/alibabacloud/cassandra/model/ModifyBackupPlanResult.h
	include/alibabacloud/cassandra/model/ModifyClusterRequest.h
	include/alibabacloud/cassandra/model/ModifyClusterResult.h
	include/alibabacloud/cassandra/model/ModifyDataCenterRequest.h
	include/alibabacloud/cassandra/model/ModifyDataCenterResult.h
	include/alibabacloud/cassandra/model/ModifyInstanceMaintainTimeRequest.h
	include/alibabacloud/cassandra/model/ModifyInstanceMaintainTimeResult.h
	include/alibabacloud/cassandra/model/ModifyInstanceTypeRequest.h
	include/alibabacloud/cassandra/model/ModifyInstanceTypeResult.h
	include/alibabacloud/cassandra/model/ModifyIpWhitelistRequest.h
	include/alibabacloud/cassandra/model/ModifyIpWhitelistResult.h
	include/alibabacloud/cassandra/model/ModifyIpWhitelistGroupRequest.h
	include/alibabacloud/cassandra/model/ModifyIpWhitelistGroupResult.h
	include/alibabacloud/cassandra/model/ModifyParameterRequest.h
	include/alibabacloud/cassandra/model/ModifyParameterResult.h
	include/alibabacloud/cassandra/model/ModifySecurityGroupsRequest.h
	include/alibabacloud/cassandra/model/ModifySecurityGroupsResult.h
	include/alibabacloud/cassandra/model/MoveResourceGroupRequest.h
	include/alibabacloud/cassandra/model/MoveResourceGroupResult.h
	include/alibabacloud/cassandra/model/PurgeClusterRequest.h
	include/alibabacloud/cassandra/model/PurgeClusterResult.h
	include/alibabacloud/cassandra/model/RebootClusterRequest.h
	include/alibabacloud/cassandra/model/RebootClusterResult.h
	include/alibabacloud/cassandra/model/ReleasePublicContactPointsRequest.h
	include/alibabacloud/cassandra/model/ReleasePublicContactPointsResult.h
	include/alibabacloud/cassandra/model/ResizeDiskSizeRequest.h
	include/alibabacloud/cassandra/model/ResizeDiskSizeResult.h
	include/alibabacloud/cassandra/model/ResizeNodeCountRequest.h
	include/alibabacloud/cassandra/model/ResizeNodeCountResult.h
	include/alibabacloud/cassandra/model/TagResourcesRequest.h
	include/alibabacloud/cassandra/model/TagResourcesResult.h
	include/alibabacloud/cassandra/model/UnTagResourcesRequest.h
	include/alibabacloud/cassandra/model/UnTagResourcesResult.h
	include/alibabacloud/cassandra/model/UpgradeClusterVersionRequest.h
	include/alibabacloud/cassandra/model/UpgradeClusterVersionResult.h )

set(cassandra_src 
	src/CassandraClient.cc
	src/model/AllocatePublicContactPointsRequest.cc
	src/model/AllocatePublicContactPointsResult.cc
	src/model/CreateBackupPlanRequest.cc
	src/model/CreateBackupPlanResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateDataCenterRequest.cc
	src/model/CreateDataCenterResult.cc
	src/model/DeleteBackupPlanRequest.cc
	src/model/DeleteBackupPlanResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteDataCenterRequest.cc
	src/model/DeleteDataCenterResult.cc
	src/model/DeleteNodeToolExecutionHistoryRequest.cc
	src/model/DeleteNodeToolExecutionHistoryResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeBackupRequest.cc
	src/model/DescribeBackupResult.cc
	src/model/DescribeBackupPlanRequest.cc
	src/model/DescribeBackupPlanResult.cc
	src/model/DescribeBackupPlansRequest.cc
	src/model/DescribeBackupPlansResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeClusterRequest.cc
	src/model/DescribeClusterResult.cc
	src/model/DescribeClusterDashboardRequest.cc
	src/model/DescribeClusterDashboardResult.cc
	src/model/DescribeClusterStatusRequest.cc
	src/model/DescribeClusterStatusResult.cc
	src/model/DescribeClustersRequest.cc
	src/model/DescribeClustersResult.cc
	src/model/DescribeContactPointsRequest.cc
	src/model/DescribeContactPointsResult.cc
	src/model/DescribeDataCenterRequest.cc
	src/model/DescribeDataCenterResult.cc
	src/model/DescribeDataCentersRequest.cc
	src/model/DescribeDataCentersResult.cc
	src/model/DescribeDeletedClustersRequest.cc
	src/model/DescribeDeletedClustersResult.cc
	src/model/DescribeInstanceTypeRequest.cc
	src/model/DescribeInstanceTypeResult.cc
	src/model/DescribeIpWhitelistRequest.cc
	src/model/DescribeIpWhitelistResult.cc
	src/model/DescribeIpWhitelistGroupsRequest.cc
	src/model/DescribeIpWhitelistGroupsResult.cc
	src/model/DescribeNodeToolExecutionHistoriesRequest.cc
	src/model/DescribeNodeToolExecutionHistoriesResult.cc
	src/model/DescribeNodeToolExecutionHistoryRequest.cc
	src/model/DescribeNodeToolExecutionHistoryResult.cc
	src/model/DescribeParameterModificationHistoriesRequest.cc
	src/model/DescribeParameterModificationHistoriesResult.cc
	src/model/DescribeParametersRequest.cc
	src/model/DescribeParametersResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSecurityGroupsRequest.cc
	src/model/DescribeSecurityGroupsResult.cc
	src/model/ExecuteNodeToolRequest.cc
	src/model/ExecuteNodeToolResult.cc
	src/model/GetCmsUrlRequest.cc
	src/model/GetCmsUrlResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagsRequest.cc
	src/model/ListTagsResult.cc
	src/model/ModifyAccountPasswordRequest.cc
	src/model/ModifyAccountPasswordResult.cc
	src/model/ModifyBackupPlanRequest.cc
	src/model/ModifyBackupPlanResult.cc
	src/model/ModifyClusterRequest.cc
	src/model/ModifyClusterResult.cc
	src/model/ModifyDataCenterRequest.cc
	src/model/ModifyDataCenterResult.cc
	src/model/ModifyInstanceMaintainTimeRequest.cc
	src/model/ModifyInstanceMaintainTimeResult.cc
	src/model/ModifyInstanceTypeRequest.cc
	src/model/ModifyInstanceTypeResult.cc
	src/model/ModifyIpWhitelistRequest.cc
	src/model/ModifyIpWhitelistResult.cc
	src/model/ModifyIpWhitelistGroupRequest.cc
	src/model/ModifyIpWhitelistGroupResult.cc
	src/model/ModifyParameterRequest.cc
	src/model/ModifyParameterResult.cc
	src/model/ModifySecurityGroupsRequest.cc
	src/model/ModifySecurityGroupsResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/PurgeClusterRequest.cc
	src/model/PurgeClusterResult.cc
	src/model/RebootClusterRequest.cc
	src/model/RebootClusterResult.cc
	src/model/ReleasePublicContactPointsRequest.cc
	src/model/ReleasePublicContactPointsResult.cc
	src/model/ResizeDiskSizeRequest.cc
	src/model/ResizeDiskSizeResult.cc
	src/model/ResizeNodeCountRequest.cc
	src/model/ResizeNodeCountResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnTagResourcesRequest.cc
	src/model/UnTagResourcesResult.cc
	src/model/UpgradeClusterVersionRequest.cc
	src/model/UpgradeClusterVersionResult.cc )

add_library(cassandra ${LIB_TYPE}
	${cassandra_public_header}
	${cassandra_public_header_model}
	${cassandra_src})

set_target_properties(cassandra
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cassandra
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cassandra
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CASSANDRA_LIBRARY)
endif()

target_include_directories(cassandra
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cassandra
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cassandra
		jsoncpp)
	target_include_directories(cassandra
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cassandra
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cassandra
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cassandra
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cassandra
		jsoncpp)
endif()

install(FILES ${cassandra_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cassandra)
install(FILES ${cassandra_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cassandra/model)
install(TARGETS cassandra
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)