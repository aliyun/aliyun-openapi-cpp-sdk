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

set(hbase_public_header 
	include/alibabacloud/hbase/HBaseClient.h
	include/alibabacloud/hbase/HBaseExport.h )

set(hbase_public_header_model 
	include/alibabacloud/hbase/model/AddUserHdfsInfoRequest.h
	include/alibabacloud/hbase/model/AddUserHdfsInfoResult.h
	include/alibabacloud/hbase/model/ConvertInstanceRequest.h
	include/alibabacloud/hbase/model/ConvertInstanceResult.h
	include/alibabacloud/hbase/model/CreateBackupPlanRequest.h
	include/alibabacloud/hbase/model/CreateBackupPlanResult.h
	include/alibabacloud/hbase/model/CreateClusterRequest.h
	include/alibabacloud/hbase/model/CreateClusterResult.h
	include/alibabacloud/hbase/model/CreateHbaseHaSlbRequest.h
	include/alibabacloud/hbase/model/CreateHbaseHaSlbResult.h
	include/alibabacloud/hbase/model/CreateMultiZoneClusterRequest.h
	include/alibabacloud/hbase/model/CreateMultiZoneClusterResult.h
	include/alibabacloud/hbase/model/CreateRestorePlanRequest.h
	include/alibabacloud/hbase/model/CreateRestorePlanResult.h
	include/alibabacloud/hbase/model/DeleteHbaseHaSlbRequest.h
	include/alibabacloud/hbase/model/DeleteHbaseHaSlbResult.h
	include/alibabacloud/hbase/model/DeleteInstanceRequest.h
	include/alibabacloud/hbase/model/DeleteInstanceResult.h
	include/alibabacloud/hbase/model/DeleteMultiZoneClusterRequest.h
	include/alibabacloud/hbase/model/DeleteMultiZoneClusterResult.h
	include/alibabacloud/hbase/model/DeleteUserHdfsInfoRequest.h
	include/alibabacloud/hbase/model/DeleteUserHdfsInfoResult.h
	include/alibabacloud/hbase/model/DescribeAvailableResourceRequest.h
	include/alibabacloud/hbase/model/DescribeAvailableResourceResult.h
	include/alibabacloud/hbase/model/DescribeBackupPlanConfigRequest.h
	include/alibabacloud/hbase/model/DescribeBackupPlanConfigResult.h
	include/alibabacloud/hbase/model/DescribeBackupStatusRequest.h
	include/alibabacloud/hbase/model/DescribeBackupStatusResult.h
	include/alibabacloud/hbase/model/DescribeBackupSummaryRequest.h
	include/alibabacloud/hbase/model/DescribeBackupSummaryResult.h
	include/alibabacloud/hbase/model/DescribeBackupTablesRequest.h
	include/alibabacloud/hbase/model/DescribeBackupTablesResult.h
	include/alibabacloud/hbase/model/DescribeDBInstanceUsageRequest.h
	include/alibabacloud/hbase/model/DescribeDBInstanceUsageResult.h
	include/alibabacloud/hbase/model/DescribeDeletedInstancesRequest.h
	include/alibabacloud/hbase/model/DescribeDeletedInstancesResult.h
	include/alibabacloud/hbase/model/DescribeEndpointsRequest.h
	include/alibabacloud/hbase/model/DescribeEndpointsResult.h
	include/alibabacloud/hbase/model/DescribeInstanceRequest.h
	include/alibabacloud/hbase/model/DescribeInstanceResult.h
	include/alibabacloud/hbase/model/DescribeInstanceTypeRequest.h
	include/alibabacloud/hbase/model/DescribeInstanceTypeResult.h
	include/alibabacloud/hbase/model/DescribeInstancesRequest.h
	include/alibabacloud/hbase/model/DescribeInstancesResult.h
	include/alibabacloud/hbase/model/DescribeIpWhitelistRequest.h
	include/alibabacloud/hbase/model/DescribeIpWhitelistResult.h
	include/alibabacloud/hbase/model/DescribeRecoverableTimeRangeRequest.h
	include/alibabacloud/hbase/model/DescribeRecoverableTimeRangeResult.h
	include/alibabacloud/hbase/model/DescribeRegionsRequest.h
	include/alibabacloud/hbase/model/DescribeRegionsResult.h
	include/alibabacloud/hbase/model/DescribeRestoreFullDetailsRequest.h
	include/alibabacloud/hbase/model/DescribeRestoreFullDetailsResult.h
	include/alibabacloud/hbase/model/DescribeRestoreIncrDetailRequest.h
	include/alibabacloud/hbase/model/DescribeRestoreIncrDetailResult.h
	include/alibabacloud/hbase/model/DescribeRestoreSchemaDetailsRequest.h
	include/alibabacloud/hbase/model/DescribeRestoreSchemaDetailsResult.h
	include/alibabacloud/hbase/model/DescribeRestoreSummaryRequest.h
	include/alibabacloud/hbase/model/DescribeRestoreSummaryResult.h
	include/alibabacloud/hbase/model/DescribeRestoreTablesRequest.h
	include/alibabacloud/hbase/model/DescribeRestoreTablesResult.h
	include/alibabacloud/hbase/model/DescribeSecurityGroupsRequest.h
	include/alibabacloud/hbase/model/DescribeSecurityGroupsResult.h
	include/alibabacloud/hbase/model/EnableHBaseueBackupRequest.h
	include/alibabacloud/hbase/model/EnableHBaseueBackupResult.h
	include/alibabacloud/hbase/model/EnableHBaseueModuleRequest.h
	include/alibabacloud/hbase/model/EnableHBaseueModuleResult.h
	include/alibabacloud/hbase/model/ListTagResourcesRequest.h
	include/alibabacloud/hbase/model/ListTagResourcesResult.h
	include/alibabacloud/hbase/model/ListTagsRequest.h
	include/alibabacloud/hbase/model/ListTagsResult.h
	include/alibabacloud/hbase/model/ModifyBackupPlanConfigRequest.h
	include/alibabacloud/hbase/model/ModifyBackupPlanConfigResult.h
	include/alibabacloud/hbase/model/ModifyClusterDeletionProtectionRequest.h
	include/alibabacloud/hbase/model/ModifyClusterDeletionProtectionResult.h
	include/alibabacloud/hbase/model/ModifyInstanceMaintainTimeRequest.h
	include/alibabacloud/hbase/model/ModifyInstanceMaintainTimeResult.h
	include/alibabacloud/hbase/model/ModifyInstanceNameRequest.h
	include/alibabacloud/hbase/model/ModifyInstanceNameResult.h
	include/alibabacloud/hbase/model/ModifyIpWhitelistRequest.h
	include/alibabacloud/hbase/model/ModifyIpWhitelistResult.h
	include/alibabacloud/hbase/model/ModifySecurityGroupsRequest.h
	include/alibabacloud/hbase/model/ModifySecurityGroupsResult.h
	include/alibabacloud/hbase/model/ModifyUIAccountPasswordRequest.h
	include/alibabacloud/hbase/model/ModifyUIAccountPasswordResult.h
	include/alibabacloud/hbase/model/PurgeInstanceRequest.h
	include/alibabacloud/hbase/model/PurgeInstanceResult.h
	include/alibabacloud/hbase/model/QueryHBaseHaDBRequest.h
	include/alibabacloud/hbase/model/QueryHBaseHaDBResult.h
	include/alibabacloud/hbase/model/QueryXpackRelateDBRequest.h
	include/alibabacloud/hbase/model/QueryXpackRelateDBResult.h
	include/alibabacloud/hbase/model/RenewInstanceRequest.h
	include/alibabacloud/hbase/model/RenewInstanceResult.h
	include/alibabacloud/hbase/model/ResizeDiskSizeRequest.h
	include/alibabacloud/hbase/model/ResizeDiskSizeResult.h
	include/alibabacloud/hbase/model/ResizeNodeCountRequest.h
	include/alibabacloud/hbase/model/ResizeNodeCountResult.h
	include/alibabacloud/hbase/model/RestartInstanceRequest.h
	include/alibabacloud/hbase/model/RestartInstanceResult.h
	include/alibabacloud/hbase/model/SwitchHbaseHaSlbRequest.h
	include/alibabacloud/hbase/model/SwitchHbaseHaSlbResult.h
	include/alibabacloud/hbase/model/TagResourcesRequest.h
	include/alibabacloud/hbase/model/TagResourcesResult.h
	include/alibabacloud/hbase/model/UnTagResourcesRequest.h
	include/alibabacloud/hbase/model/UnTagResourcesResult.h
	include/alibabacloud/hbase/model/XpackRelateDBRequest.h
	include/alibabacloud/hbase/model/XpackRelateDBResult.h )

set(hbase_src 
	src/HBaseClient.cc
	src/model/AddUserHdfsInfoRequest.cc
	src/model/AddUserHdfsInfoResult.cc
	src/model/ConvertInstanceRequest.cc
	src/model/ConvertInstanceResult.cc
	src/model/CreateBackupPlanRequest.cc
	src/model/CreateBackupPlanResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateHbaseHaSlbRequest.cc
	src/model/CreateHbaseHaSlbResult.cc
	src/model/CreateMultiZoneClusterRequest.cc
	src/model/CreateMultiZoneClusterResult.cc
	src/model/CreateRestorePlanRequest.cc
	src/model/CreateRestorePlanResult.cc
	src/model/DeleteHbaseHaSlbRequest.cc
	src/model/DeleteHbaseHaSlbResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteMultiZoneClusterRequest.cc
	src/model/DeleteMultiZoneClusterResult.cc
	src/model/DeleteUserHdfsInfoRequest.cc
	src/model/DeleteUserHdfsInfoResult.cc
	src/model/DescribeAvailableResourceRequest.cc
	src/model/DescribeAvailableResourceResult.cc
	src/model/DescribeBackupPlanConfigRequest.cc
	src/model/DescribeBackupPlanConfigResult.cc
	src/model/DescribeBackupStatusRequest.cc
	src/model/DescribeBackupStatusResult.cc
	src/model/DescribeBackupSummaryRequest.cc
	src/model/DescribeBackupSummaryResult.cc
	src/model/DescribeBackupTablesRequest.cc
	src/model/DescribeBackupTablesResult.cc
	src/model/DescribeDBInstanceUsageRequest.cc
	src/model/DescribeDBInstanceUsageResult.cc
	src/model/DescribeDeletedInstancesRequest.cc
	src/model/DescribeDeletedInstancesResult.cc
	src/model/DescribeEndpointsRequest.cc
	src/model/DescribeEndpointsResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeInstanceTypeRequest.cc
	src/model/DescribeInstanceTypeResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeIpWhitelistRequest.cc
	src/model/DescribeIpWhitelistResult.cc
	src/model/DescribeRecoverableTimeRangeRequest.cc
	src/model/DescribeRecoverableTimeRangeResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRestoreFullDetailsRequest.cc
	src/model/DescribeRestoreFullDetailsResult.cc
	src/model/DescribeRestoreIncrDetailRequest.cc
	src/model/DescribeRestoreIncrDetailResult.cc
	src/model/DescribeRestoreSchemaDetailsRequest.cc
	src/model/DescribeRestoreSchemaDetailsResult.cc
	src/model/DescribeRestoreSummaryRequest.cc
	src/model/DescribeRestoreSummaryResult.cc
	src/model/DescribeRestoreTablesRequest.cc
	src/model/DescribeRestoreTablesResult.cc
	src/model/DescribeSecurityGroupsRequest.cc
	src/model/DescribeSecurityGroupsResult.cc
	src/model/EnableHBaseueBackupRequest.cc
	src/model/EnableHBaseueBackupResult.cc
	src/model/EnableHBaseueModuleRequest.cc
	src/model/EnableHBaseueModuleResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagsRequest.cc
	src/model/ListTagsResult.cc
	src/model/ModifyBackupPlanConfigRequest.cc
	src/model/ModifyBackupPlanConfigResult.cc
	src/model/ModifyClusterDeletionProtectionRequest.cc
	src/model/ModifyClusterDeletionProtectionResult.cc
	src/model/ModifyInstanceMaintainTimeRequest.cc
	src/model/ModifyInstanceMaintainTimeResult.cc
	src/model/ModifyInstanceNameRequest.cc
	src/model/ModifyInstanceNameResult.cc
	src/model/ModifyIpWhitelistRequest.cc
	src/model/ModifyIpWhitelistResult.cc
	src/model/ModifySecurityGroupsRequest.cc
	src/model/ModifySecurityGroupsResult.cc
	src/model/ModifyUIAccountPasswordRequest.cc
	src/model/ModifyUIAccountPasswordResult.cc
	src/model/PurgeInstanceRequest.cc
	src/model/PurgeInstanceResult.cc
	src/model/QueryHBaseHaDBRequest.cc
	src/model/QueryHBaseHaDBResult.cc
	src/model/QueryXpackRelateDBRequest.cc
	src/model/QueryXpackRelateDBResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/ResizeDiskSizeRequest.cc
	src/model/ResizeDiskSizeResult.cc
	src/model/ResizeNodeCountRequest.cc
	src/model/ResizeNodeCountResult.cc
	src/model/RestartInstanceRequest.cc
	src/model/RestartInstanceResult.cc
	src/model/SwitchHbaseHaSlbRequest.cc
	src/model/SwitchHbaseHaSlbResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnTagResourcesRequest.cc
	src/model/UnTagResourcesResult.cc
	src/model/XpackRelateDBRequest.cc
	src/model/XpackRelateDBResult.cc )

add_library(hbase ${LIB_TYPE}
	${hbase_public_header}
	${hbase_public_header_model}
	${hbase_src})

set_target_properties(hbase
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hbase
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(hbase
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HBASE_LIBRARY)
endif()

target_include_directories(hbase
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(hbase
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(hbase
		jsoncpp)
	target_include_directories(hbase
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(hbase
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(hbase
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(hbase
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(hbase
		jsoncpp)
endif()

install(FILES ${hbase_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hbase)
install(FILES ${hbase_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hbase/model)
install(TARGETS hbase
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)