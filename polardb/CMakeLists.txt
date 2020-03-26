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

set(polardb_public_header 
	include/alibabacloud/polardb/PolardbClient.h
	include/alibabacloud/polardb/PolardbExport.h )

set(polardb_public_header_model 
	include/alibabacloud/polardb/model/CloseDBClusterMigrationRequest.h
	include/alibabacloud/polardb/model/CloseDBClusterMigrationResult.h
	include/alibabacloud/polardb/model/CreateAccountRequest.h
	include/alibabacloud/polardb/model/CreateAccountResult.h
	include/alibabacloud/polardb/model/CreateBackupRequest.h
	include/alibabacloud/polardb/model/CreateBackupResult.h
	include/alibabacloud/polardb/model/CreateDBClusterRequest.h
	include/alibabacloud/polardb/model/CreateDBClusterResult.h
	include/alibabacloud/polardb/model/CreateDBClusterEndpointRequest.h
	include/alibabacloud/polardb/model/CreateDBClusterEndpointResult.h
	include/alibabacloud/polardb/model/CreateDBEndpointAddressRequest.h
	include/alibabacloud/polardb/model/CreateDBEndpointAddressResult.h
	include/alibabacloud/polardb/model/CreateDBNodesRequest.h
	include/alibabacloud/polardb/model/CreateDBNodesResult.h
	include/alibabacloud/polardb/model/CreateDatabaseRequest.h
	include/alibabacloud/polardb/model/CreateDatabaseResult.h
	include/alibabacloud/polardb/model/DeleteAccountRequest.h
	include/alibabacloud/polardb/model/DeleteAccountResult.h
	include/alibabacloud/polardb/model/DeleteBackupRequest.h
	include/alibabacloud/polardb/model/DeleteBackupResult.h
	include/alibabacloud/polardb/model/DeleteDBClusterRequest.h
	include/alibabacloud/polardb/model/DeleteDBClusterResult.h
	include/alibabacloud/polardb/model/DeleteDBClusterEndpointRequest.h
	include/alibabacloud/polardb/model/DeleteDBClusterEndpointResult.h
	include/alibabacloud/polardb/model/DeleteDBEndpointAddressRequest.h
	include/alibabacloud/polardb/model/DeleteDBEndpointAddressResult.h
	include/alibabacloud/polardb/model/DeleteDBNodesRequest.h
	include/alibabacloud/polardb/model/DeleteDBNodesResult.h
	include/alibabacloud/polardb/model/DeleteDatabaseRequest.h
	include/alibabacloud/polardb/model/DeleteDatabaseResult.h
	include/alibabacloud/polardb/model/DescribeAccountsRequest.h
	include/alibabacloud/polardb/model/DescribeAccountsResult.h
	include/alibabacloud/polardb/model/DescribeAutoRenewAttributeRequest.h
	include/alibabacloud/polardb/model/DescribeAutoRenewAttributeResult.h
	include/alibabacloud/polardb/model/DescribeBackupLogsRequest.h
	include/alibabacloud/polardb/model/DescribeBackupLogsResult.h
	include/alibabacloud/polardb/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/polardb/model/DescribeBackupPolicyResult.h
	include/alibabacloud/polardb/model/DescribeBackupsRequest.h
	include/alibabacloud/polardb/model/DescribeBackupsResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterAccessWhitelistRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterAccessWhitelistResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterAttributeRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterAttributeResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterAvailableResourcesRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterAvailableResourcesResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterEndpointsRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterEndpointsResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterMigrationRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterMigrationResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterMonitorRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterMonitorResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterParametersRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterParametersResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterPerformanceRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterPerformanceResult.h
	include/alibabacloud/polardb/model/DescribeDBClusterSSLRequest.h
	include/alibabacloud/polardb/model/DescribeDBClusterSSLResult.h
	include/alibabacloud/polardb/model/DescribeDBClustersRequest.h
	include/alibabacloud/polardb/model/DescribeDBClustersResult.h
	include/alibabacloud/polardb/model/DescribeDBNodePerformanceRequest.h
	include/alibabacloud/polardb/model/DescribeDBNodePerformanceResult.h
	include/alibabacloud/polardb/model/DescribeDatabasesRequest.h
	include/alibabacloud/polardb/model/DescribeDatabasesResult.h
	include/alibabacloud/polardb/model/DescribeRegionsRequest.h
	include/alibabacloud/polardb/model/DescribeRegionsResult.h
	include/alibabacloud/polardb/model/DescribeSlowLogRecordsRequest.h
	include/alibabacloud/polardb/model/DescribeSlowLogRecordsResult.h
	include/alibabacloud/polardb/model/DescribeSlowLogsRequest.h
	include/alibabacloud/polardb/model/DescribeSlowLogsResult.h
	include/alibabacloud/polardb/model/FailoverDBClusterRequest.h
	include/alibabacloud/polardb/model/FailoverDBClusterResult.h
	include/alibabacloud/polardb/model/GrantAccountPrivilegeRequest.h
	include/alibabacloud/polardb/model/GrantAccountPrivilegeResult.h
	include/alibabacloud/polardb/model/ListTagResourcesRequest.h
	include/alibabacloud/polardb/model/ListTagResourcesResult.h
	include/alibabacloud/polardb/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/polardb/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/polardb/model/ModifyAccountPasswordRequest.h
	include/alibabacloud/polardb/model/ModifyAccountPasswordResult.h
	include/alibabacloud/polardb/model/ModifyAutoRenewAttributeRequest.h
	include/alibabacloud/polardb/model/ModifyAutoRenewAttributeResult.h
	include/alibabacloud/polardb/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/polardb/model/ModifyBackupPolicyResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterAccessWhitelistRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterAccessWhitelistResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterDescriptionRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterDescriptionResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterEndpointRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterEndpointResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterMaintainTimeRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterMaintainTimeResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterMigrationRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterMigrationResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterMonitorRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterMonitorResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterParametersRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterParametersResult.h
	include/alibabacloud/polardb/model/ModifyDBClusterSSLRequest.h
	include/alibabacloud/polardb/model/ModifyDBClusterSSLResult.h
	include/alibabacloud/polardb/model/ModifyDBDescriptionRequest.h
	include/alibabacloud/polardb/model/ModifyDBDescriptionResult.h
	include/alibabacloud/polardb/model/ModifyDBEndpointAddressRequest.h
	include/alibabacloud/polardb/model/ModifyDBEndpointAddressResult.h
	include/alibabacloud/polardb/model/ModifyDBNodeClassRequest.h
	include/alibabacloud/polardb/model/ModifyDBNodeClassResult.h
	include/alibabacloud/polardb/model/ResetAccountRequest.h
	include/alibabacloud/polardb/model/ResetAccountResult.h
	include/alibabacloud/polardb/model/RestartDBNodeRequest.h
	include/alibabacloud/polardb/model/RestartDBNodeResult.h
	include/alibabacloud/polardb/model/RevokeAccountPrivilegeRequest.h
	include/alibabacloud/polardb/model/RevokeAccountPrivilegeResult.h
	include/alibabacloud/polardb/model/TagResourcesRequest.h
	include/alibabacloud/polardb/model/TagResourcesResult.h
	include/alibabacloud/polardb/model/UntagResourcesRequest.h
	include/alibabacloud/polardb/model/UntagResourcesResult.h )

set(polardb_src 
	src/PolardbClient.cc
	src/model/CloseDBClusterMigrationRequest.cc
	src/model/CloseDBClusterMigrationResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateBackupRequest.cc
	src/model/CreateBackupResult.cc
	src/model/CreateDBClusterRequest.cc
	src/model/CreateDBClusterResult.cc
	src/model/CreateDBClusterEndpointRequest.cc
	src/model/CreateDBClusterEndpointResult.cc
	src/model/CreateDBEndpointAddressRequest.cc
	src/model/CreateDBEndpointAddressResult.cc
	src/model/CreateDBNodesRequest.cc
	src/model/CreateDBNodesResult.cc
	src/model/CreateDatabaseRequest.cc
	src/model/CreateDatabaseResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteBackupRequest.cc
	src/model/DeleteBackupResult.cc
	src/model/DeleteDBClusterRequest.cc
	src/model/DeleteDBClusterResult.cc
	src/model/DeleteDBClusterEndpointRequest.cc
	src/model/DeleteDBClusterEndpointResult.cc
	src/model/DeleteDBEndpointAddressRequest.cc
	src/model/DeleteDBEndpointAddressResult.cc
	src/model/DeleteDBNodesRequest.cc
	src/model/DeleteDBNodesResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAutoRenewAttributeRequest.cc
	src/model/DescribeAutoRenewAttributeResult.cc
	src/model/DescribeBackupLogsRequest.cc
	src/model/DescribeBackupLogsResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeDBClusterAccessWhitelistRequest.cc
	src/model/DescribeDBClusterAccessWhitelistResult.cc
	src/model/DescribeDBClusterAttributeRequest.cc
	src/model/DescribeDBClusterAttributeResult.cc
	src/model/DescribeDBClusterAvailableResourcesRequest.cc
	src/model/DescribeDBClusterAvailableResourcesResult.cc
	src/model/DescribeDBClusterEndpointsRequest.cc
	src/model/DescribeDBClusterEndpointsResult.cc
	src/model/DescribeDBClusterMigrationRequest.cc
	src/model/DescribeDBClusterMigrationResult.cc
	src/model/DescribeDBClusterMonitorRequest.cc
	src/model/DescribeDBClusterMonitorResult.cc
	src/model/DescribeDBClusterParametersRequest.cc
	src/model/DescribeDBClusterParametersResult.cc
	src/model/DescribeDBClusterPerformanceRequest.cc
	src/model/DescribeDBClusterPerformanceResult.cc
	src/model/DescribeDBClusterSSLRequest.cc
	src/model/DescribeDBClusterSSLResult.cc
	src/model/DescribeDBClustersRequest.cc
	src/model/DescribeDBClustersResult.cc
	src/model/DescribeDBNodePerformanceRequest.cc
	src/model/DescribeDBNodePerformanceResult.cc
	src/model/DescribeDatabasesRequest.cc
	src/model/DescribeDatabasesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSlowLogRecordsRequest.cc
	src/model/DescribeSlowLogRecordsResult.cc
	src/model/DescribeSlowLogsRequest.cc
	src/model/DescribeSlowLogsResult.cc
	src/model/FailoverDBClusterRequest.cc
	src/model/FailoverDBClusterResult.cc
	src/model/GrantAccountPrivilegeRequest.cc
	src/model/GrantAccountPrivilegeResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAccountPasswordRequest.cc
	src/model/ModifyAccountPasswordResult.cc
	src/model/ModifyAutoRenewAttributeRequest.cc
	src/model/ModifyAutoRenewAttributeResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyDBClusterAccessWhitelistRequest.cc
	src/model/ModifyDBClusterAccessWhitelistResult.cc
	src/model/ModifyDBClusterDescriptionRequest.cc
	src/model/ModifyDBClusterDescriptionResult.cc
	src/model/ModifyDBClusterEndpointRequest.cc
	src/model/ModifyDBClusterEndpointResult.cc
	src/model/ModifyDBClusterMaintainTimeRequest.cc
	src/model/ModifyDBClusterMaintainTimeResult.cc
	src/model/ModifyDBClusterMigrationRequest.cc
	src/model/ModifyDBClusterMigrationResult.cc
	src/model/ModifyDBClusterMonitorRequest.cc
	src/model/ModifyDBClusterMonitorResult.cc
	src/model/ModifyDBClusterParametersRequest.cc
	src/model/ModifyDBClusterParametersResult.cc
	src/model/ModifyDBClusterSSLRequest.cc
	src/model/ModifyDBClusterSSLResult.cc
	src/model/ModifyDBDescriptionRequest.cc
	src/model/ModifyDBDescriptionResult.cc
	src/model/ModifyDBEndpointAddressRequest.cc
	src/model/ModifyDBEndpointAddressResult.cc
	src/model/ModifyDBNodeClassRequest.cc
	src/model/ModifyDBNodeClassResult.cc
	src/model/ResetAccountRequest.cc
	src/model/ResetAccountResult.cc
	src/model/RestartDBNodeRequest.cc
	src/model/RestartDBNodeResult.cc
	src/model/RevokeAccountPrivilegeRequest.cc
	src/model/RevokeAccountPrivilegeResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(polardb ${LIB_TYPE}
	${polardb_public_header}
	${polardb_public_header_model}
	${polardb_src})

set_target_properties(polardb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}polardb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(polardb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_POLARDB_LIBRARY)
endif()

target_include_directories(polardb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(polardb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(polardb
		jsoncpp)
	target_include_directories(polardb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(polardb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(polardb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(polardb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(polardb
		jsoncpp)
endif()

install(FILES ${polardb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/polardb)
install(FILES ${polardb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/polardb/model)
install(TARGETS polardb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)