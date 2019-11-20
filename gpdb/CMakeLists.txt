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

set(gpdb_public_header 
	include/alibabacloud/gpdb/GpdbClient.h
	include/alibabacloud/gpdb/GpdbExport.h )

set(gpdb_public_header_model 
	include/alibabacloud/gpdb/model/AddBuDBInstanceRelationRequest.h
	include/alibabacloud/gpdb/model/AddBuDBInstanceRelationResult.h
	include/alibabacloud/gpdb/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/gpdb/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/gpdb/model/CreateAccountRequest.h
	include/alibabacloud/gpdb/model/CreateAccountResult.h
	include/alibabacloud/gpdb/model/CreateDBInstanceRequest.h
	include/alibabacloud/gpdb/model/CreateDBInstanceResult.h
	include/alibabacloud/gpdb/model/DeleteDBInstanceRequest.h
	include/alibabacloud/gpdb/model/DeleteDBInstanceResult.h
	include/alibabacloud/gpdb/model/DeleteDatabaseRequest.h
	include/alibabacloud/gpdb/model/DeleteDatabaseResult.h
	include/alibabacloud/gpdb/model/DescribeAccountsRequest.h
	include/alibabacloud/gpdb/model/DescribeAccountsResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceAttributeRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceAttributeResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIPArrayListRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIPArrayListResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceNetInfoRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceNetInfoResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePerformanceRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePerformanceResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceSSLRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceSSLResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstancesRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstancesResult.h
	include/alibabacloud/gpdb/model/DescribeRdsVSwitchsRequest.h
	include/alibabacloud/gpdb/model/DescribeRdsVSwitchsResult.h
	include/alibabacloud/gpdb/model/DescribeRdsVpcsRequest.h
	include/alibabacloud/gpdb/model/DescribeRdsVpcsResult.h
	include/alibabacloud/gpdb/model/DescribeRegionsRequest.h
	include/alibabacloud/gpdb/model/DescribeRegionsResult.h
	include/alibabacloud/gpdb/model/DescribeResourceUsageRequest.h
	include/alibabacloud/gpdb/model/DescribeResourceUsageResult.h
	include/alibabacloud/gpdb/model/DescribeSQLCollectorPolicyRequest.h
	include/alibabacloud/gpdb/model/DescribeSQLCollectorPolicyResult.h
	include/alibabacloud/gpdb/model/DescribeSQLLogFilesRequest.h
	include/alibabacloud/gpdb/model/DescribeSQLLogFilesResult.h
	include/alibabacloud/gpdb/model/DescribeSQLLogRecordsRequest.h
	include/alibabacloud/gpdb/model/DescribeSQLLogRecordsResult.h
	include/alibabacloud/gpdb/model/DescribeSlowLogRecordsRequest.h
	include/alibabacloud/gpdb/model/DescribeSlowLogRecordsResult.h
	include/alibabacloud/gpdb/model/DescribeSpecificationRequest.h
	include/alibabacloud/gpdb/model/DescribeSpecificationResult.h
	include/alibabacloud/gpdb/model/DescribeTagsRequest.h
	include/alibabacloud/gpdb/model/DescribeTagsResult.h
	include/alibabacloud/gpdb/model/ListTagResourcesRequest.h
	include/alibabacloud/gpdb/model/ListTagResourcesResult.h
	include/alibabacloud/gpdb/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/gpdb/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionModeRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionModeResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionStringRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionStringResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceDescriptionRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceDescriptionResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceMaintainTimeRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceMaintainTimeResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceNetworkTypeRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceNetworkTypeResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceSSLRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceSSLResult.h
	include/alibabacloud/gpdb/model/ModifySQLCollectorPolicyRequest.h
	include/alibabacloud/gpdb/model/ModifySQLCollectorPolicyResult.h
	include/alibabacloud/gpdb/model/ModifySecurityIpsRequest.h
	include/alibabacloud/gpdb/model/ModifySecurityIpsResult.h
	include/alibabacloud/gpdb/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/gpdb/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/gpdb/model/ResetAccountPasswordRequest.h
	include/alibabacloud/gpdb/model/ResetAccountPasswordResult.h
	include/alibabacloud/gpdb/model/RestartDBInstanceRequest.h
	include/alibabacloud/gpdb/model/RestartDBInstanceResult.h
	include/alibabacloud/gpdb/model/SwitchDBInstanceNetTypeRequest.h
	include/alibabacloud/gpdb/model/SwitchDBInstanceNetTypeResult.h
	include/alibabacloud/gpdb/model/TagResourcesRequest.h
	include/alibabacloud/gpdb/model/TagResourcesResult.h
	include/alibabacloud/gpdb/model/UntagResourcesRequest.h
	include/alibabacloud/gpdb/model/UntagResourcesResult.h
	include/alibabacloud/gpdb/model/UpgradeDBInstanceRequest.h
	include/alibabacloud/gpdb/model/UpgradeDBInstanceResult.h
	include/alibabacloud/gpdb/model/UpgradeDBVersionRequest.h
	include/alibabacloud/gpdb/model/UpgradeDBVersionResult.h )

set(gpdb_src 
	src/GpdbClient.cc
	src/model/AddBuDBInstanceRelationRequest.cc
	src/model/AddBuDBInstanceRelationResult.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/DeleteDBInstanceRequest.cc
	src/model/DeleteDBInstanceResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeDBInstanceAttributeRequest.cc
	src/model/DescribeDBInstanceAttributeResult.cc
	src/model/DescribeDBInstanceIPArrayListRequest.cc
	src/model/DescribeDBInstanceIPArrayListResult.cc
	src/model/DescribeDBInstanceNetInfoRequest.cc
	src/model/DescribeDBInstanceNetInfoResult.cc
	src/model/DescribeDBInstancePerformanceRequest.cc
	src/model/DescribeDBInstancePerformanceResult.cc
	src/model/DescribeDBInstanceSSLRequest.cc
	src/model/DescribeDBInstanceSSLResult.cc
	src/model/DescribeDBInstancesRequest.cc
	src/model/DescribeDBInstancesResult.cc
	src/model/DescribeRdsVSwitchsRequest.cc
	src/model/DescribeRdsVSwitchsResult.cc
	src/model/DescribeRdsVpcsRequest.cc
	src/model/DescribeRdsVpcsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeResourceUsageRequest.cc
	src/model/DescribeResourceUsageResult.cc
	src/model/DescribeSQLCollectorPolicyRequest.cc
	src/model/DescribeSQLCollectorPolicyResult.cc
	src/model/DescribeSQLLogFilesRequest.cc
	src/model/DescribeSQLLogFilesResult.cc
	src/model/DescribeSQLLogRecordsRequest.cc
	src/model/DescribeSQLLogRecordsResult.cc
	src/model/DescribeSlowLogRecordsRequest.cc
	src/model/DescribeSlowLogRecordsResult.cc
	src/model/DescribeSpecificationRequest.cc
	src/model/DescribeSpecificationResult.cc
	src/model/DescribeTagsRequest.cc
	src/model/DescribeTagsResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyDBInstanceConnectionModeRequest.cc
	src/model/ModifyDBInstanceConnectionModeResult.cc
	src/model/ModifyDBInstanceConnectionStringRequest.cc
	src/model/ModifyDBInstanceConnectionStringResult.cc
	src/model/ModifyDBInstanceDescriptionRequest.cc
	src/model/ModifyDBInstanceDescriptionResult.cc
	src/model/ModifyDBInstanceMaintainTimeRequest.cc
	src/model/ModifyDBInstanceMaintainTimeResult.cc
	src/model/ModifyDBInstanceNetworkTypeRequest.cc
	src/model/ModifyDBInstanceNetworkTypeResult.cc
	src/model/ModifyDBInstanceSSLRequest.cc
	src/model/ModifyDBInstanceSSLResult.cc
	src/model/ModifySQLCollectorPolicyRequest.cc
	src/model/ModifySQLCollectorPolicyResult.cc
	src/model/ModifySecurityIpsRequest.cc
	src/model/ModifySecurityIpsResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartDBInstanceRequest.cc
	src/model/RestartDBInstanceResult.cc
	src/model/SwitchDBInstanceNetTypeRequest.cc
	src/model/SwitchDBInstanceNetTypeResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpgradeDBInstanceRequest.cc
	src/model/UpgradeDBInstanceResult.cc
	src/model/UpgradeDBVersionRequest.cc
	src/model/UpgradeDBVersionResult.cc )

add_library(gpdb ${LIB_TYPE}
	${gpdb_public_header}
	${gpdb_public_header_model}
	${gpdb_src})

set_target_properties(gpdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gpdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(gpdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GPDB_LIBRARY)
endif()

target_include_directories(gpdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(gpdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(gpdb
		jsoncpp)
	target_include_directories(gpdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(gpdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(gpdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(gpdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(gpdb
		jsoncpp)
endif()

install(FILES ${gpdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gpdb)
install(FILES ${gpdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gpdb/model)
install(TARGETS gpdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)