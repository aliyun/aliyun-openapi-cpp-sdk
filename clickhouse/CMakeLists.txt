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

set(clickhouse_public_header 
	include/alibabacloud/clickhouse/ClickhouseClient.h
	include/alibabacloud/clickhouse/ClickhouseExport.h )

set(clickhouse_public_header_model 
	include/alibabacloud/clickhouse/model/AllocateClusterPublicConnectionRequest.h
	include/alibabacloud/clickhouse/model/AllocateClusterPublicConnectionResult.h
	include/alibabacloud/clickhouse/model/CheckClickhouseToRDSRequest.h
	include/alibabacloud/clickhouse/model/CheckClickhouseToRDSResult.h
	include/alibabacloud/clickhouse/model/CheckModifyConfigNeedRestartRequest.h
	include/alibabacloud/clickhouse/model/CheckModifyConfigNeedRestartResult.h
	include/alibabacloud/clickhouse/model/CheckMonitorAlertRequest.h
	include/alibabacloud/clickhouse/model/CheckMonitorAlertResult.h
	include/alibabacloud/clickhouse/model/CheckScaleOutBalancedRequest.h
	include/alibabacloud/clickhouse/model/CheckScaleOutBalancedResult.h
	include/alibabacloud/clickhouse/model/CheckServiceLinkedRoleRequest.h
	include/alibabacloud/clickhouse/model/CheckServiceLinkedRoleResult.h
	include/alibabacloud/clickhouse/model/CreateAccountRequest.h
	include/alibabacloud/clickhouse/model/CreateAccountResult.h
	include/alibabacloud/clickhouse/model/CreateAccountAndAuthorityRequest.h
	include/alibabacloud/clickhouse/model/CreateAccountAndAuthorityResult.h
	include/alibabacloud/clickhouse/model/CreateBackupPolicyRequest.h
	include/alibabacloud/clickhouse/model/CreateBackupPolicyResult.h
	include/alibabacloud/clickhouse/model/CreateDBInstanceRequest.h
	include/alibabacloud/clickhouse/model/CreateDBInstanceResult.h
	include/alibabacloud/clickhouse/model/CreateMonitorDataReportRequest.h
	include/alibabacloud/clickhouse/model/CreateMonitorDataReportResult.h
	include/alibabacloud/clickhouse/model/CreateOSSStorageRequest.h
	include/alibabacloud/clickhouse/model/CreateOSSStorageResult.h
	include/alibabacloud/clickhouse/model/CreatePortsForClickHouseRequest.h
	include/alibabacloud/clickhouse/model/CreatePortsForClickHouseResult.h
	include/alibabacloud/clickhouse/model/CreateRDSToClickhouseDbRequest.h
	include/alibabacloud/clickhouse/model/CreateRDSToClickhouseDbResult.h
	include/alibabacloud/clickhouse/model/CreateSQLAccountRequest.h
	include/alibabacloud/clickhouse/model/CreateSQLAccountResult.h
	include/alibabacloud/clickhouse/model/CreateServiceLinkedRoleRequest.h
	include/alibabacloud/clickhouse/model/CreateServiceLinkedRoleResult.h
	include/alibabacloud/clickhouse/model/DeleteAccountRequest.h
	include/alibabacloud/clickhouse/model/DeleteAccountResult.h
	include/alibabacloud/clickhouse/model/DeleteDBClusterRequest.h
	include/alibabacloud/clickhouse/model/DeleteDBClusterResult.h
	include/alibabacloud/clickhouse/model/DeleteSyndbRequest.h
	include/alibabacloud/clickhouse/model/DeleteSyndbResult.h
	include/alibabacloud/clickhouse/model/DescribeAccountAuthorityRequest.h
	include/alibabacloud/clickhouse/model/DescribeAccountAuthorityResult.h
	include/alibabacloud/clickhouse/model/DescribeAccountsRequest.h
	include/alibabacloud/clickhouse/model/DescribeAccountsResult.h
	include/alibabacloud/clickhouse/model/DescribeAllDataSourceRequest.h
	include/alibabacloud/clickhouse/model/DescribeAllDataSourceResult.h
	include/alibabacloud/clickhouse/model/DescribeAllDataSourcesRequest.h
	include/alibabacloud/clickhouse/model/DescribeAllDataSourcesResult.h
	include/alibabacloud/clickhouse/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/clickhouse/model/DescribeBackupPolicyResult.h
	include/alibabacloud/clickhouse/model/DescribeBackupsRequest.h
	include/alibabacloud/clickhouse/model/DescribeBackupsResult.h
	include/alibabacloud/clickhouse/model/DescribeColumnsRequest.h
	include/alibabacloud/clickhouse/model/DescribeColumnsResult.h
	include/alibabacloud/clickhouse/model/DescribeConfigHistoryRequest.h
	include/alibabacloud/clickhouse/model/DescribeConfigHistoryResult.h
	include/alibabacloud/clickhouse/model/DescribeConfigVersionDifferenceRequest.h
	include/alibabacloud/clickhouse/model/DescribeConfigVersionDifferenceResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterAccessWhiteListRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterAccessWhiteListResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterAttributeRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterAttributeResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterConfigRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterConfigResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterConfigInXMLRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterConfigInXMLResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterNetInfoItemsRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterNetInfoItemsResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterPerformanceRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClusterPerformanceResult.h
	include/alibabacloud/clickhouse/model/DescribeDBClustersRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBClustersResult.h
	include/alibabacloud/clickhouse/model/DescribeDBConfigRequest.h
	include/alibabacloud/clickhouse/model/DescribeDBConfigResult.h
	include/alibabacloud/clickhouse/model/DescribeOSSStorageRequest.h
	include/alibabacloud/clickhouse/model/DescribeOSSStorageResult.h
	include/alibabacloud/clickhouse/model/DescribeProcessListRequest.h
	include/alibabacloud/clickhouse/model/DescribeProcessListResult.h
	include/alibabacloud/clickhouse/model/DescribeRegionsRequest.h
	include/alibabacloud/clickhouse/model/DescribeRegionsResult.h
	include/alibabacloud/clickhouse/model/DescribeSchemasRequest.h
	include/alibabacloud/clickhouse/model/DescribeSchemasResult.h
	include/alibabacloud/clickhouse/model/DescribeSlowLogRecordsRequest.h
	include/alibabacloud/clickhouse/model/DescribeSlowLogRecordsResult.h
	include/alibabacloud/clickhouse/model/DescribeSynDbTablesRequest.h
	include/alibabacloud/clickhouse/model/DescribeSynDbTablesResult.h
	include/alibabacloud/clickhouse/model/DescribeSynDbsRequest.h
	include/alibabacloud/clickhouse/model/DescribeSynDbsResult.h
	include/alibabacloud/clickhouse/model/DescribeTablesRequest.h
	include/alibabacloud/clickhouse/model/DescribeTablesResult.h
	include/alibabacloud/clickhouse/model/DescribeTransferHistoryRequest.h
	include/alibabacloud/clickhouse/model/DescribeTransferHistoryResult.h
	include/alibabacloud/clickhouse/model/KillProcessRequest.h
	include/alibabacloud/clickhouse/model/KillProcessResult.h
	include/alibabacloud/clickhouse/model/ModifyAccountAuthorityRequest.h
	include/alibabacloud/clickhouse/model/ModifyAccountAuthorityResult.h
	include/alibabacloud/clickhouse/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/clickhouse/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/clickhouse/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/clickhouse/model/ModifyBackupPolicyResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterAccessWhiteListRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterAccessWhiteListResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterConfigRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterConfigResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterConfigInXMLRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterConfigInXMLResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterDescriptionRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterDescriptionResult.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterMaintainTimeRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBClusterMaintainTimeResult.h
	include/alibabacloud/clickhouse/model/ModifyDBConfigRequest.h
	include/alibabacloud/clickhouse/model/ModifyDBConfigResult.h
	include/alibabacloud/clickhouse/model/ModifyMinorVersionGreadeTypeRequest.h
	include/alibabacloud/clickhouse/model/ModifyMinorVersionGreadeTypeResult.h
	include/alibabacloud/clickhouse/model/ModifyRDSToClickhouseDbRequest.h
	include/alibabacloud/clickhouse/model/ModifyRDSToClickhouseDbResult.h
	include/alibabacloud/clickhouse/model/ReleaseClusterPublicConnectionRequest.h
	include/alibabacloud/clickhouse/model/ReleaseClusterPublicConnectionResult.h
	include/alibabacloud/clickhouse/model/ResetAccountPasswordRequest.h
	include/alibabacloud/clickhouse/model/ResetAccountPasswordResult.h
	include/alibabacloud/clickhouse/model/RestartInstanceRequest.h
	include/alibabacloud/clickhouse/model/RestartInstanceResult.h
	include/alibabacloud/clickhouse/model/TransferVersionRequest.h
	include/alibabacloud/clickhouse/model/TransferVersionResult.h
	include/alibabacloud/clickhouse/model/UpgradeMinorVersionRequest.h
	include/alibabacloud/clickhouse/model/UpgradeMinorVersionResult.h )

set(clickhouse_src 
	src/ClickhouseClient.cc
	src/model/AllocateClusterPublicConnectionRequest.cc
	src/model/AllocateClusterPublicConnectionResult.cc
	src/model/CheckClickhouseToRDSRequest.cc
	src/model/CheckClickhouseToRDSResult.cc
	src/model/CheckModifyConfigNeedRestartRequest.cc
	src/model/CheckModifyConfigNeedRestartResult.cc
	src/model/CheckMonitorAlertRequest.cc
	src/model/CheckMonitorAlertResult.cc
	src/model/CheckScaleOutBalancedRequest.cc
	src/model/CheckScaleOutBalancedResult.cc
	src/model/CheckServiceLinkedRoleRequest.cc
	src/model/CheckServiceLinkedRoleResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateAccountAndAuthorityRequest.cc
	src/model/CreateAccountAndAuthorityResult.cc
	src/model/CreateBackupPolicyRequest.cc
	src/model/CreateBackupPolicyResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/CreateMonitorDataReportRequest.cc
	src/model/CreateMonitorDataReportResult.cc
	src/model/CreateOSSStorageRequest.cc
	src/model/CreateOSSStorageResult.cc
	src/model/CreatePortsForClickHouseRequest.cc
	src/model/CreatePortsForClickHouseResult.cc
	src/model/CreateRDSToClickhouseDbRequest.cc
	src/model/CreateRDSToClickhouseDbResult.cc
	src/model/CreateSQLAccountRequest.cc
	src/model/CreateSQLAccountResult.cc
	src/model/CreateServiceLinkedRoleRequest.cc
	src/model/CreateServiceLinkedRoleResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteDBClusterRequest.cc
	src/model/DeleteDBClusterResult.cc
	src/model/DeleteSyndbRequest.cc
	src/model/DeleteSyndbResult.cc
	src/model/DescribeAccountAuthorityRequest.cc
	src/model/DescribeAccountAuthorityResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAllDataSourceRequest.cc
	src/model/DescribeAllDataSourceResult.cc
	src/model/DescribeAllDataSourcesRequest.cc
	src/model/DescribeAllDataSourcesResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeColumnsRequest.cc
	src/model/DescribeColumnsResult.cc
	src/model/DescribeConfigHistoryRequest.cc
	src/model/DescribeConfigHistoryResult.cc
	src/model/DescribeConfigVersionDifferenceRequest.cc
	src/model/DescribeConfigVersionDifferenceResult.cc
	src/model/DescribeDBClusterAccessWhiteListRequest.cc
	src/model/DescribeDBClusterAccessWhiteListResult.cc
	src/model/DescribeDBClusterAttributeRequest.cc
	src/model/DescribeDBClusterAttributeResult.cc
	src/model/DescribeDBClusterConfigRequest.cc
	src/model/DescribeDBClusterConfigResult.cc
	src/model/DescribeDBClusterConfigInXMLRequest.cc
	src/model/DescribeDBClusterConfigInXMLResult.cc
	src/model/DescribeDBClusterNetInfoItemsRequest.cc
	src/model/DescribeDBClusterNetInfoItemsResult.cc
	src/model/DescribeDBClusterPerformanceRequest.cc
	src/model/DescribeDBClusterPerformanceResult.cc
	src/model/DescribeDBClustersRequest.cc
	src/model/DescribeDBClustersResult.cc
	src/model/DescribeDBConfigRequest.cc
	src/model/DescribeDBConfigResult.cc
	src/model/DescribeOSSStorageRequest.cc
	src/model/DescribeOSSStorageResult.cc
	src/model/DescribeProcessListRequest.cc
	src/model/DescribeProcessListResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSchemasRequest.cc
	src/model/DescribeSchemasResult.cc
	src/model/DescribeSlowLogRecordsRequest.cc
	src/model/DescribeSlowLogRecordsResult.cc
	src/model/DescribeSynDbTablesRequest.cc
	src/model/DescribeSynDbTablesResult.cc
	src/model/DescribeSynDbsRequest.cc
	src/model/DescribeSynDbsResult.cc
	src/model/DescribeTablesRequest.cc
	src/model/DescribeTablesResult.cc
	src/model/DescribeTransferHistoryRequest.cc
	src/model/DescribeTransferHistoryResult.cc
	src/model/KillProcessRequest.cc
	src/model/KillProcessResult.cc
	src/model/ModifyAccountAuthorityRequest.cc
	src/model/ModifyAccountAuthorityResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyDBClusterRequest.cc
	src/model/ModifyDBClusterResult.cc
	src/model/ModifyDBClusterAccessWhiteListRequest.cc
	src/model/ModifyDBClusterAccessWhiteListResult.cc
	src/model/ModifyDBClusterConfigRequest.cc
	src/model/ModifyDBClusterConfigResult.cc
	src/model/ModifyDBClusterConfigInXMLRequest.cc
	src/model/ModifyDBClusterConfigInXMLResult.cc
	src/model/ModifyDBClusterDescriptionRequest.cc
	src/model/ModifyDBClusterDescriptionResult.cc
	src/model/ModifyDBClusterMaintainTimeRequest.cc
	src/model/ModifyDBClusterMaintainTimeResult.cc
	src/model/ModifyDBConfigRequest.cc
	src/model/ModifyDBConfigResult.cc
	src/model/ModifyMinorVersionGreadeTypeRequest.cc
	src/model/ModifyMinorVersionGreadeTypeResult.cc
	src/model/ModifyRDSToClickhouseDbRequest.cc
	src/model/ModifyRDSToClickhouseDbResult.cc
	src/model/ReleaseClusterPublicConnectionRequest.cc
	src/model/ReleaseClusterPublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartInstanceRequest.cc
	src/model/RestartInstanceResult.cc
	src/model/TransferVersionRequest.cc
	src/model/TransferVersionResult.cc
	src/model/UpgradeMinorVersionRequest.cc
	src/model/UpgradeMinorVersionResult.cc )

add_library(clickhouse ${LIB_TYPE}
	${clickhouse_public_header}
	${clickhouse_public_header_model}
	${clickhouse_src})

set_target_properties(clickhouse
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}clickhouse
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(clickhouse
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLICKHOUSE_LIBRARY)
endif()

target_include_directories(clickhouse
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(clickhouse
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(clickhouse
		jsoncpp)
	target_include_directories(clickhouse
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(clickhouse
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(clickhouse
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(clickhouse
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(clickhouse
		jsoncpp)
endif()

install(FILES ${clickhouse_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/clickhouse)
install(FILES ${clickhouse_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/clickhouse/model)
install(TARGETS clickhouse
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)