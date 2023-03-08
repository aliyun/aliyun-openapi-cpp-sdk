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

set(adb_public_header 
	include/alibabacloud/adb/AdbClient.h
	include/alibabacloud/adb/AdbExport.h )

set(adb_public_header_model 
	include/alibabacloud/adb/model/AllocateClusterPublicConnectionRequest.h
	include/alibabacloud/adb/model/AllocateClusterPublicConnectionResult.h
	include/alibabacloud/adb/model/BindAccountRequest.h
	include/alibabacloud/adb/model/BindAccountResult.h
	include/alibabacloud/adb/model/CheckBindRamUserRequest.h
	include/alibabacloud/adb/model/CheckBindRamUserResult.h
	include/alibabacloud/adb/model/CreateAccountRequest.h
	include/alibabacloud/adb/model/CreateAccountResult.h
	include/alibabacloud/adb/model/CreateDBClusterRequest.h
	include/alibabacloud/adb/model/CreateDBClusterResult.h
	include/alibabacloud/adb/model/CreateDBResourceGroupRequest.h
	include/alibabacloud/adb/model/CreateDBResourceGroupResult.h
	include/alibabacloud/adb/model/CreateOssSubDirectoryRequest.h
	include/alibabacloud/adb/model/CreateOssSubDirectoryResult.h
	include/alibabacloud/adb/model/CreateSparkTemplateRequest.h
	include/alibabacloud/adb/model/CreateSparkTemplateResult.h
	include/alibabacloud/adb/model/DeleteAccountRequest.h
	include/alibabacloud/adb/model/DeleteAccountResult.h
	include/alibabacloud/adb/model/DeleteDBClusterRequest.h
	include/alibabacloud/adb/model/DeleteDBClusterResult.h
	include/alibabacloud/adb/model/DeleteDBResourceGroupRequest.h
	include/alibabacloud/adb/model/DeleteDBResourceGroupResult.h
	include/alibabacloud/adb/model/DeleteProcessInstanceRequest.h
	include/alibabacloud/adb/model/DeleteProcessInstanceResult.h
	include/alibabacloud/adb/model/DeleteSparkTemplateRequest.h
	include/alibabacloud/adb/model/DeleteSparkTemplateResult.h
	include/alibabacloud/adb/model/DeleteSparkTemplateFileRequest.h
	include/alibabacloud/adb/model/DeleteSparkTemplateFileResult.h
	include/alibabacloud/adb/model/DescribeAccountsRequest.h
	include/alibabacloud/adb/model/DescribeAccountsResult.h
	include/alibabacloud/adb/model/DescribeAdbMySqlColumnsRequest.h
	include/alibabacloud/adb/model/DescribeAdbMySqlColumnsResult.h
	include/alibabacloud/adb/model/DescribeAdbMySqlSchemasRequest.h
	include/alibabacloud/adb/model/DescribeAdbMySqlSchemasResult.h
	include/alibabacloud/adb/model/DescribeAdbMySqlTablesRequest.h
	include/alibabacloud/adb/model/DescribeAdbMySqlTablesResult.h
	include/alibabacloud/adb/model/DescribeApsActionLogsRequest.h
	include/alibabacloud/adb/model/DescribeApsActionLogsResult.h
	include/alibabacloud/adb/model/DescribeApsResourceGroupsRequest.h
	include/alibabacloud/adb/model/DescribeApsResourceGroupsResult.h
	include/alibabacloud/adb/model/DescribeAuditLogConfigRequest.h
	include/alibabacloud/adb/model/DescribeAuditLogConfigResult.h
	include/alibabacloud/adb/model/DescribeAuditLogRecordsRequest.h
	include/alibabacloud/adb/model/DescribeAuditLogRecordsResult.h
	include/alibabacloud/adb/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/adb/model/DescribeBackupPolicyResult.h
	include/alibabacloud/adb/model/DescribeBackupsRequest.h
	include/alibabacloud/adb/model/DescribeBackupsResult.h
	include/alibabacloud/adb/model/DescribeClusterAccessWhiteListRequest.h
	include/alibabacloud/adb/model/DescribeClusterAccessWhiteListResult.h
	include/alibabacloud/adb/model/DescribeClusterNetInfoRequest.h
	include/alibabacloud/adb/model/DescribeClusterNetInfoResult.h
	include/alibabacloud/adb/model/DescribeDBClusterAttributeRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterAttributeResult.h
	include/alibabacloud/adb/model/DescribeDBClusterForecastRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterForecastResult.h
	include/alibabacloud/adb/model/DescribeDBClusterHealthStatusRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterHealthStatusResult.h
	include/alibabacloud/adb/model/DescribeDBClusterPerformanceRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterPerformanceResult.h
	include/alibabacloud/adb/model/DescribeDBClustersRequest.h
	include/alibabacloud/adb/model/DescribeDBClustersResult.h
	include/alibabacloud/adb/model/DescribeDBResourceGroupRequest.h
	include/alibabacloud/adb/model/DescribeDBResourceGroupResult.h
	include/alibabacloud/adb/model/DescribeDiagnosisDimensionsRequest.h
	include/alibabacloud/adb/model/DescribeDiagnosisDimensionsResult.h
	include/alibabacloud/adb/model/DescribeDiagnosisRecordsRequest.h
	include/alibabacloud/adb/model/DescribeDiagnosisRecordsResult.h
	include/alibabacloud/adb/model/DescribeDiagnosisSQLInfoRequest.h
	include/alibabacloud/adb/model/DescribeDiagnosisSQLInfoResult.h
	include/alibabacloud/adb/model/DescribeDownloadRecordsRequest.h
	include/alibabacloud/adb/model/DescribeDownloadRecordsResult.h
	include/alibabacloud/adb/model/DescribePatternPerformanceRequest.h
	include/alibabacloud/adb/model/DescribePatternPerformanceResult.h
	include/alibabacloud/adb/model/DescribeRegionsRequest.h
	include/alibabacloud/adb/model/DescribeRegionsResult.h
	include/alibabacloud/adb/model/DescribeSQLPatternAttributeRequest.h
	include/alibabacloud/adb/model/DescribeSQLPatternAttributeResult.h
	include/alibabacloud/adb/model/DescribeSQLPatternsRequest.h
	include/alibabacloud/adb/model/DescribeSQLPatternsResult.h
	include/alibabacloud/adb/model/DescribeSparkCodeLogRequest.h
	include/alibabacloud/adb/model/DescribeSparkCodeLogResult.h
	include/alibabacloud/adb/model/DescribeSparkCodeOutputRequest.h
	include/alibabacloud/adb/model/DescribeSparkCodeOutputResult.h
	include/alibabacloud/adb/model/DescribeSparkCodeWebUiRequest.h
	include/alibabacloud/adb/model/DescribeSparkCodeWebUiResult.h
	include/alibabacloud/adb/model/DescribeSqlPatternRequest.h
	include/alibabacloud/adb/model/DescribeSqlPatternResult.h
	include/alibabacloud/adb/model/DescribeTableAccessCountRequest.h
	include/alibabacloud/adb/model/DescribeTableAccessCountResult.h
	include/alibabacloud/adb/model/DownloadDiagnosisRecordsRequest.h
	include/alibabacloud/adb/model/DownloadDiagnosisRecordsResult.h
	include/alibabacloud/adb/model/GetDatabaseObjectsRequest.h
	include/alibabacloud/adb/model/GetDatabaseObjectsResult.h
	include/alibabacloud/adb/model/GetLakehouseValidResourceGroupsRequest.h
	include/alibabacloud/adb/model/GetLakehouseValidResourceGroupsResult.h
	include/alibabacloud/adb/model/GetSparkAppAttemptLogRequest.h
	include/alibabacloud/adb/model/GetSparkAppAttemptLogResult.h
	include/alibabacloud/adb/model/GetSparkAppInfoRequest.h
	include/alibabacloud/adb/model/GetSparkAppInfoResult.h
	include/alibabacloud/adb/model/GetSparkAppLogRequest.h
	include/alibabacloud/adb/model/GetSparkAppLogResult.h
	include/alibabacloud/adb/model/GetSparkAppMetricsRequest.h
	include/alibabacloud/adb/model/GetSparkAppMetricsResult.h
	include/alibabacloud/adb/model/GetSparkAppStateRequest.h
	include/alibabacloud/adb/model/GetSparkAppStateResult.h
	include/alibabacloud/adb/model/GetSparkAppWebUiAddressRequest.h
	include/alibabacloud/adb/model/GetSparkAppWebUiAddressResult.h
	include/alibabacloud/adb/model/GetSparkConfigLogPathRequest.h
	include/alibabacloud/adb/model/GetSparkConfigLogPathResult.h
	include/alibabacloud/adb/model/GetSparkLogAnalyzeTaskRequest.h
	include/alibabacloud/adb/model/GetSparkLogAnalyzeTaskResult.h
	include/alibabacloud/adb/model/GetSparkSQLEngineStateRequest.h
	include/alibabacloud/adb/model/GetSparkSQLEngineStateResult.h
	include/alibabacloud/adb/model/GetSparkTemplateFileContentRequest.h
	include/alibabacloud/adb/model/GetSparkTemplateFileContentResult.h
	include/alibabacloud/adb/model/GetSparkTemplateFolderTreeRequest.h
	include/alibabacloud/adb/model/GetSparkTemplateFolderTreeResult.h
	include/alibabacloud/adb/model/GetSparkTemplateFullTreeRequest.h
	include/alibabacloud/adb/model/GetSparkTemplateFullTreeResult.h
	include/alibabacloud/adb/model/GetTableRequest.h
	include/alibabacloud/adb/model/GetTableResult.h
	include/alibabacloud/adb/model/GetTableColumnsRequest.h
	include/alibabacloud/adb/model/GetTableColumnsResult.h
	include/alibabacloud/adb/model/GetTableDDLRequest.h
	include/alibabacloud/adb/model/GetTableDDLResult.h
	include/alibabacloud/adb/model/GetTableObjectsRequest.h
	include/alibabacloud/adb/model/GetTableObjectsResult.h
	include/alibabacloud/adb/model/GetViewDDLRequest.h
	include/alibabacloud/adb/model/GetViewDDLResult.h
	include/alibabacloud/adb/model/GetViewObjectsRequest.h
	include/alibabacloud/adb/model/GetViewObjectsResult.h
	include/alibabacloud/adb/model/KillSparkAppRequest.h
	include/alibabacloud/adb/model/KillSparkAppResult.h
	include/alibabacloud/adb/model/KillSparkLogAnalyzeTaskRequest.h
	include/alibabacloud/adb/model/KillSparkLogAnalyzeTaskResult.h
	include/alibabacloud/adb/model/KillSparkSQLEngineRequest.h
	include/alibabacloud/adb/model/KillSparkSQLEngineResult.h
	include/alibabacloud/adb/model/ListSparkAppAttemptsRequest.h
	include/alibabacloud/adb/model/ListSparkAppAttemptsResult.h
	include/alibabacloud/adb/model/ListSparkAppsRequest.h
	include/alibabacloud/adb/model/ListSparkAppsResult.h
	include/alibabacloud/adb/model/ListSparkLogAnalyzeTasksRequest.h
	include/alibabacloud/adb/model/ListSparkLogAnalyzeTasksResult.h
	include/alibabacloud/adb/model/ListSparkTemplateFileIdsRequest.h
	include/alibabacloud/adb/model/ListSparkTemplateFileIdsResult.h
	include/alibabacloud/adb/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/adb/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/adb/model/ModifyAuditLogConfigRequest.h
	include/alibabacloud/adb/model/ModifyAuditLogConfigResult.h
	include/alibabacloud/adb/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/adb/model/ModifyBackupPolicyResult.h
	include/alibabacloud/adb/model/ModifyClusterAccessWhiteListRequest.h
	include/alibabacloud/adb/model/ModifyClusterAccessWhiteListResult.h
	include/alibabacloud/adb/model/ModifyClusterConnectionStringRequest.h
	include/alibabacloud/adb/model/ModifyClusterConnectionStringResult.h
	include/alibabacloud/adb/model/ModifyDBClusterRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterResult.h
	include/alibabacloud/adb/model/ModifyDBClusterDescriptionRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterDescriptionResult.h
	include/alibabacloud/adb/model/ModifyDBClusterMaintainTimeRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterMaintainTimeResult.h
	include/alibabacloud/adb/model/ModifyDBResourceGroupRequest.h
	include/alibabacloud/adb/model/ModifyDBResourceGroupResult.h
	include/alibabacloud/adb/model/PreloadSparkAppMetricsRequest.h
	include/alibabacloud/adb/model/PreloadSparkAppMetricsResult.h
	include/alibabacloud/adb/model/ReleaseClusterPublicConnectionRequest.h
	include/alibabacloud/adb/model/ReleaseClusterPublicConnectionResult.h
	include/alibabacloud/adb/model/ResetAccountPasswordRequest.h
	include/alibabacloud/adb/model/ResetAccountPasswordResult.h
	include/alibabacloud/adb/model/SetSparkAppLogRootPathRequest.h
	include/alibabacloud/adb/model/SetSparkAppLogRootPathResult.h
	include/alibabacloud/adb/model/StartSparkSQLEngineRequest.h
	include/alibabacloud/adb/model/StartSparkSQLEngineResult.h
	include/alibabacloud/adb/model/SubmitSparkAppRequest.h
	include/alibabacloud/adb/model/SubmitSparkAppResult.h
	include/alibabacloud/adb/model/SubmitSparkLogAnalyzeTaskRequest.h
	include/alibabacloud/adb/model/SubmitSparkLogAnalyzeTaskResult.h
	include/alibabacloud/adb/model/UnbindAccountRequest.h
	include/alibabacloud/adb/model/UnbindAccountResult.h
	include/alibabacloud/adb/model/UpdateSparkTemplateFileRequest.h
	include/alibabacloud/adb/model/UpdateSparkTemplateFileResult.h )

set(adb_src 
	src/AdbClient.cc
	src/model/AllocateClusterPublicConnectionRequest.cc
	src/model/AllocateClusterPublicConnectionResult.cc
	src/model/BindAccountRequest.cc
	src/model/BindAccountResult.cc
	src/model/CheckBindRamUserRequest.cc
	src/model/CheckBindRamUserResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateDBClusterRequest.cc
	src/model/CreateDBClusterResult.cc
	src/model/CreateDBResourceGroupRequest.cc
	src/model/CreateDBResourceGroupResult.cc
	src/model/CreateOssSubDirectoryRequest.cc
	src/model/CreateOssSubDirectoryResult.cc
	src/model/CreateSparkTemplateRequest.cc
	src/model/CreateSparkTemplateResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteDBClusterRequest.cc
	src/model/DeleteDBClusterResult.cc
	src/model/DeleteDBResourceGroupRequest.cc
	src/model/DeleteDBResourceGroupResult.cc
	src/model/DeleteProcessInstanceRequest.cc
	src/model/DeleteProcessInstanceResult.cc
	src/model/DeleteSparkTemplateRequest.cc
	src/model/DeleteSparkTemplateResult.cc
	src/model/DeleteSparkTemplateFileRequest.cc
	src/model/DeleteSparkTemplateFileResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAdbMySqlColumnsRequest.cc
	src/model/DescribeAdbMySqlColumnsResult.cc
	src/model/DescribeAdbMySqlSchemasRequest.cc
	src/model/DescribeAdbMySqlSchemasResult.cc
	src/model/DescribeAdbMySqlTablesRequest.cc
	src/model/DescribeAdbMySqlTablesResult.cc
	src/model/DescribeApsActionLogsRequest.cc
	src/model/DescribeApsActionLogsResult.cc
	src/model/DescribeApsResourceGroupsRequest.cc
	src/model/DescribeApsResourceGroupsResult.cc
	src/model/DescribeAuditLogConfigRequest.cc
	src/model/DescribeAuditLogConfigResult.cc
	src/model/DescribeAuditLogRecordsRequest.cc
	src/model/DescribeAuditLogRecordsResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeClusterAccessWhiteListRequest.cc
	src/model/DescribeClusterAccessWhiteListResult.cc
	src/model/DescribeClusterNetInfoRequest.cc
	src/model/DescribeClusterNetInfoResult.cc
	src/model/DescribeDBClusterAttributeRequest.cc
	src/model/DescribeDBClusterAttributeResult.cc
	src/model/DescribeDBClusterForecastRequest.cc
	src/model/DescribeDBClusterForecastResult.cc
	src/model/DescribeDBClusterHealthStatusRequest.cc
	src/model/DescribeDBClusterHealthStatusResult.cc
	src/model/DescribeDBClusterPerformanceRequest.cc
	src/model/DescribeDBClusterPerformanceResult.cc
	src/model/DescribeDBClustersRequest.cc
	src/model/DescribeDBClustersResult.cc
	src/model/DescribeDBResourceGroupRequest.cc
	src/model/DescribeDBResourceGroupResult.cc
	src/model/DescribeDiagnosisDimensionsRequest.cc
	src/model/DescribeDiagnosisDimensionsResult.cc
	src/model/DescribeDiagnosisRecordsRequest.cc
	src/model/DescribeDiagnosisRecordsResult.cc
	src/model/DescribeDiagnosisSQLInfoRequest.cc
	src/model/DescribeDiagnosisSQLInfoResult.cc
	src/model/DescribeDownloadRecordsRequest.cc
	src/model/DescribeDownloadRecordsResult.cc
	src/model/DescribePatternPerformanceRequest.cc
	src/model/DescribePatternPerformanceResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSQLPatternAttributeRequest.cc
	src/model/DescribeSQLPatternAttributeResult.cc
	src/model/DescribeSQLPatternsRequest.cc
	src/model/DescribeSQLPatternsResult.cc
	src/model/DescribeSparkCodeLogRequest.cc
	src/model/DescribeSparkCodeLogResult.cc
	src/model/DescribeSparkCodeOutputRequest.cc
	src/model/DescribeSparkCodeOutputResult.cc
	src/model/DescribeSparkCodeWebUiRequest.cc
	src/model/DescribeSparkCodeWebUiResult.cc
	src/model/DescribeSqlPatternRequest.cc
	src/model/DescribeSqlPatternResult.cc
	src/model/DescribeTableAccessCountRequest.cc
	src/model/DescribeTableAccessCountResult.cc
	src/model/DownloadDiagnosisRecordsRequest.cc
	src/model/DownloadDiagnosisRecordsResult.cc
	src/model/GetDatabaseObjectsRequest.cc
	src/model/GetDatabaseObjectsResult.cc
	src/model/GetLakehouseValidResourceGroupsRequest.cc
	src/model/GetLakehouseValidResourceGroupsResult.cc
	src/model/GetSparkAppAttemptLogRequest.cc
	src/model/GetSparkAppAttemptLogResult.cc
	src/model/GetSparkAppInfoRequest.cc
	src/model/GetSparkAppInfoResult.cc
	src/model/GetSparkAppLogRequest.cc
	src/model/GetSparkAppLogResult.cc
	src/model/GetSparkAppMetricsRequest.cc
	src/model/GetSparkAppMetricsResult.cc
	src/model/GetSparkAppStateRequest.cc
	src/model/GetSparkAppStateResult.cc
	src/model/GetSparkAppWebUiAddressRequest.cc
	src/model/GetSparkAppWebUiAddressResult.cc
	src/model/GetSparkConfigLogPathRequest.cc
	src/model/GetSparkConfigLogPathResult.cc
	src/model/GetSparkLogAnalyzeTaskRequest.cc
	src/model/GetSparkLogAnalyzeTaskResult.cc
	src/model/GetSparkSQLEngineStateRequest.cc
	src/model/GetSparkSQLEngineStateResult.cc
	src/model/GetSparkTemplateFileContentRequest.cc
	src/model/GetSparkTemplateFileContentResult.cc
	src/model/GetSparkTemplateFolderTreeRequest.cc
	src/model/GetSparkTemplateFolderTreeResult.cc
	src/model/GetSparkTemplateFullTreeRequest.cc
	src/model/GetSparkTemplateFullTreeResult.cc
	src/model/GetTableRequest.cc
	src/model/GetTableResult.cc
	src/model/GetTableColumnsRequest.cc
	src/model/GetTableColumnsResult.cc
	src/model/GetTableDDLRequest.cc
	src/model/GetTableDDLResult.cc
	src/model/GetTableObjectsRequest.cc
	src/model/GetTableObjectsResult.cc
	src/model/GetViewDDLRequest.cc
	src/model/GetViewDDLResult.cc
	src/model/GetViewObjectsRequest.cc
	src/model/GetViewObjectsResult.cc
	src/model/KillSparkAppRequest.cc
	src/model/KillSparkAppResult.cc
	src/model/KillSparkLogAnalyzeTaskRequest.cc
	src/model/KillSparkLogAnalyzeTaskResult.cc
	src/model/KillSparkSQLEngineRequest.cc
	src/model/KillSparkSQLEngineResult.cc
	src/model/ListSparkAppAttemptsRequest.cc
	src/model/ListSparkAppAttemptsResult.cc
	src/model/ListSparkAppsRequest.cc
	src/model/ListSparkAppsResult.cc
	src/model/ListSparkLogAnalyzeTasksRequest.cc
	src/model/ListSparkLogAnalyzeTasksResult.cc
	src/model/ListSparkTemplateFileIdsRequest.cc
	src/model/ListSparkTemplateFileIdsResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAuditLogConfigRequest.cc
	src/model/ModifyAuditLogConfigResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyClusterAccessWhiteListRequest.cc
	src/model/ModifyClusterAccessWhiteListResult.cc
	src/model/ModifyClusterConnectionStringRequest.cc
	src/model/ModifyClusterConnectionStringResult.cc
	src/model/ModifyDBClusterRequest.cc
	src/model/ModifyDBClusterResult.cc
	src/model/ModifyDBClusterDescriptionRequest.cc
	src/model/ModifyDBClusterDescriptionResult.cc
	src/model/ModifyDBClusterMaintainTimeRequest.cc
	src/model/ModifyDBClusterMaintainTimeResult.cc
	src/model/ModifyDBResourceGroupRequest.cc
	src/model/ModifyDBResourceGroupResult.cc
	src/model/PreloadSparkAppMetricsRequest.cc
	src/model/PreloadSparkAppMetricsResult.cc
	src/model/ReleaseClusterPublicConnectionRequest.cc
	src/model/ReleaseClusterPublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/SetSparkAppLogRootPathRequest.cc
	src/model/SetSparkAppLogRootPathResult.cc
	src/model/StartSparkSQLEngineRequest.cc
	src/model/StartSparkSQLEngineResult.cc
	src/model/SubmitSparkAppRequest.cc
	src/model/SubmitSparkAppResult.cc
	src/model/SubmitSparkLogAnalyzeTaskRequest.cc
	src/model/SubmitSparkLogAnalyzeTaskResult.cc
	src/model/UnbindAccountRequest.cc
	src/model/UnbindAccountResult.cc
	src/model/UpdateSparkTemplateFileRequest.cc
	src/model/UpdateSparkTemplateFileResult.cc )

add_library(adb ${LIB_TYPE}
	${adb_public_header}
	${adb_public_header_model}
	${adb_src})

set_target_properties(adb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}adb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(adb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ADB_LIBRARY)
endif()

target_include_directories(adb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(adb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(adb
		jsoncpp)
	target_include_directories(adb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(adb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(adb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(adb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(adb
		jsoncpp)
endif()

install(FILES ${adb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adb)
install(FILES ${adb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adb/model)
install(TARGETS adb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)