/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ADB_ADBCLIENT_H_
#define ALIBABACLOUD_ADB_ADBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AdbExport.h"
#include "model/AllocateClusterPublicConnectionRequest.h"
#include "model/AllocateClusterPublicConnectionResult.h"
#include "model/BindAccountRequest.h"
#include "model/BindAccountResult.h"
#include "model/CheckBindRamUserRequest.h"
#include "model/CheckBindRamUserResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/CreateDBResourceGroupRequest.h"
#include "model/CreateDBResourceGroupResult.h"
#include "model/CreateOssSubDirectoryRequest.h"
#include "model/CreateOssSubDirectoryResult.h"
#include "model/CreateSparkTemplateRequest.h"
#include "model/CreateSparkTemplateResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteDBResourceGroupRequest.h"
#include "model/DeleteDBResourceGroupResult.h"
#include "model/DeleteProcessInstanceRequest.h"
#include "model/DeleteProcessInstanceResult.h"
#include "model/DeleteSparkTemplateRequest.h"
#include "model/DeleteSparkTemplateResult.h"
#include "model/DeleteSparkTemplateFileRequest.h"
#include "model/DeleteSparkTemplateFileResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAdbMySqlColumnsRequest.h"
#include "model/DescribeAdbMySqlColumnsResult.h"
#include "model/DescribeAdbMySqlSchemasRequest.h"
#include "model/DescribeAdbMySqlSchemasResult.h"
#include "model/DescribeAdbMySqlTablesRequest.h"
#include "model/DescribeAdbMySqlTablesResult.h"
#include "model/DescribeApsActionLogsRequest.h"
#include "model/DescribeApsActionLogsResult.h"
#include "model/DescribeApsResourceGroupsRequest.h"
#include "model/DescribeApsResourceGroupsResult.h"
#include "model/DescribeAuditLogConfigRequest.h"
#include "model/DescribeAuditLogConfigResult.h"
#include "model/DescribeAuditLogRecordsRequest.h"
#include "model/DescribeAuditLogRecordsResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeClusterAccessWhiteListRequest.h"
#include "model/DescribeClusterAccessWhiteListResult.h"
#include "model/DescribeClusterNetInfoRequest.h"
#include "model/DescribeClusterNetInfoResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterForecastRequest.h"
#include "model/DescribeDBClusterForecastResult.h"
#include "model/DescribeDBClusterHealthStatusRequest.h"
#include "model/DescribeDBClusterHealthStatusResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeDBResourceGroupRequest.h"
#include "model/DescribeDBResourceGroupResult.h"
#include "model/DescribeDiagnosisDimensionsRequest.h"
#include "model/DescribeDiagnosisDimensionsResult.h"
#include "model/DescribeDiagnosisRecordsRequest.h"
#include "model/DescribeDiagnosisRecordsResult.h"
#include "model/DescribeDiagnosisSQLInfoRequest.h"
#include "model/DescribeDiagnosisSQLInfoResult.h"
#include "model/DescribeDownloadRecordsRequest.h"
#include "model/DescribeDownloadRecordsResult.h"
#include "model/DescribePatternPerformanceRequest.h"
#include "model/DescribePatternPerformanceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSQLPatternAttributeRequest.h"
#include "model/DescribeSQLPatternAttributeResult.h"
#include "model/DescribeSQLPatternsRequest.h"
#include "model/DescribeSQLPatternsResult.h"
#include "model/DescribeSparkCodeLogRequest.h"
#include "model/DescribeSparkCodeLogResult.h"
#include "model/DescribeSparkCodeOutputRequest.h"
#include "model/DescribeSparkCodeOutputResult.h"
#include "model/DescribeSparkCodeWebUiRequest.h"
#include "model/DescribeSparkCodeWebUiResult.h"
#include "model/DescribeSqlPatternRequest.h"
#include "model/DescribeSqlPatternResult.h"
#include "model/DescribeTableAccessCountRequest.h"
#include "model/DescribeTableAccessCountResult.h"
#include "model/DownloadDiagnosisRecordsRequest.h"
#include "model/DownloadDiagnosisRecordsResult.h"
#include "model/GetDatabaseObjectsRequest.h"
#include "model/GetDatabaseObjectsResult.h"
#include "model/GetLakehouseValidResourceGroupsRequest.h"
#include "model/GetLakehouseValidResourceGroupsResult.h"
#include "model/GetSparkAppAttemptLogRequest.h"
#include "model/GetSparkAppAttemptLogResult.h"
#include "model/GetSparkAppInfoRequest.h"
#include "model/GetSparkAppInfoResult.h"
#include "model/GetSparkAppLogRequest.h"
#include "model/GetSparkAppLogResult.h"
#include "model/GetSparkAppMetricsRequest.h"
#include "model/GetSparkAppMetricsResult.h"
#include "model/GetSparkAppStateRequest.h"
#include "model/GetSparkAppStateResult.h"
#include "model/GetSparkAppWebUiAddressRequest.h"
#include "model/GetSparkAppWebUiAddressResult.h"
#include "model/GetSparkConfigLogPathRequest.h"
#include "model/GetSparkConfigLogPathResult.h"
#include "model/GetSparkLogAnalyzeTaskRequest.h"
#include "model/GetSparkLogAnalyzeTaskResult.h"
#include "model/GetSparkSQLEngineStateRequest.h"
#include "model/GetSparkSQLEngineStateResult.h"
#include "model/GetSparkTemplateFileContentRequest.h"
#include "model/GetSparkTemplateFileContentResult.h"
#include "model/GetSparkTemplateFolderTreeRequest.h"
#include "model/GetSparkTemplateFolderTreeResult.h"
#include "model/GetSparkTemplateFullTreeRequest.h"
#include "model/GetSparkTemplateFullTreeResult.h"
#include "model/GetTableRequest.h"
#include "model/GetTableResult.h"
#include "model/GetTableColumnsRequest.h"
#include "model/GetTableColumnsResult.h"
#include "model/GetTableDDLRequest.h"
#include "model/GetTableDDLResult.h"
#include "model/GetTableObjectsRequest.h"
#include "model/GetTableObjectsResult.h"
#include "model/GetViewDDLRequest.h"
#include "model/GetViewDDLResult.h"
#include "model/GetViewObjectsRequest.h"
#include "model/GetViewObjectsResult.h"
#include "model/KillSparkAppRequest.h"
#include "model/KillSparkAppResult.h"
#include "model/KillSparkLogAnalyzeTaskRequest.h"
#include "model/KillSparkLogAnalyzeTaskResult.h"
#include "model/KillSparkSQLEngineRequest.h"
#include "model/KillSparkSQLEngineResult.h"
#include "model/ListSparkAppAttemptsRequest.h"
#include "model/ListSparkAppAttemptsResult.h"
#include "model/ListSparkAppsRequest.h"
#include "model/ListSparkAppsResult.h"
#include "model/ListSparkLogAnalyzeTasksRequest.h"
#include "model/ListSparkLogAnalyzeTasksResult.h"
#include "model/ListSparkTemplateFileIdsRequest.h"
#include "model/ListSparkTemplateFileIdsResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAuditLogConfigRequest.h"
#include "model/ModifyAuditLogConfigResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyClusterAccessWhiteListRequest.h"
#include "model/ModifyClusterAccessWhiteListResult.h"
#include "model/ModifyClusterConnectionStringRequest.h"
#include "model/ModifyClusterConnectionStringResult.h"
#include "model/ModifyDBClusterRequest.h"
#include "model/ModifyDBClusterResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ModifyDBResourceGroupRequest.h"
#include "model/ModifyDBResourceGroupResult.h"
#include "model/PreloadSparkAppMetricsRequest.h"
#include "model/PreloadSparkAppMetricsResult.h"
#include "model/ReleaseClusterPublicConnectionRequest.h"
#include "model/ReleaseClusterPublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/SetSparkAppLogRootPathRequest.h"
#include "model/SetSparkAppLogRootPathResult.h"
#include "model/StartSparkSQLEngineRequest.h"
#include "model/StartSparkSQLEngineResult.h"
#include "model/SubmitSparkAppRequest.h"
#include "model/SubmitSparkAppResult.h"
#include "model/SubmitSparkLogAnalyzeTaskRequest.h"
#include "model/SubmitSparkLogAnalyzeTaskResult.h"
#include "model/UnbindAccountRequest.h"
#include "model/UnbindAccountResult.h"
#include "model/UpdateSparkTemplateFileRequest.h"
#include "model/UpdateSparkTemplateFileResult.h"


namespace AlibabaCloud
{
	namespace Adb
	{
		class ALIBABACLOUD_ADB_EXPORT AdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateClusterPublicConnectionResult> AllocateClusterPublicConnectionOutcome;
			typedef std::future<AllocateClusterPublicConnectionOutcome> AllocateClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::AllocateClusterPublicConnectionRequest&, const AllocateClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::BindAccountResult> BindAccountOutcome;
			typedef std::future<BindAccountOutcome> BindAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::BindAccountRequest&, const BindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAccountAsyncHandler;
			typedef Outcome<Error, Model::CheckBindRamUserResult> CheckBindRamUserOutcome;
			typedef std::future<CheckBindRamUserOutcome> CheckBindRamUserOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CheckBindRamUserRequest&, const CheckBindRamUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckBindRamUserAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDBResourceGroupResult> CreateDBResourceGroupOutcome;
			typedef std::future<CreateDBResourceGroupOutcome> CreateDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBResourceGroupRequest&, const CreateDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOssSubDirectoryResult> CreateOssSubDirectoryOutcome;
			typedef std::future<CreateOssSubDirectoryOutcome> CreateOssSubDirectoryOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateOssSubDirectoryRequest&, const CreateOssSubDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOssSubDirectoryAsyncHandler;
			typedef Outcome<Error, Model::CreateSparkTemplateResult> CreateSparkTemplateOutcome;
			typedef std::future<CreateSparkTemplateOutcome> CreateSparkTemplateOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateSparkTemplateRequest&, const CreateSparkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBResourceGroupResult> DeleteDBResourceGroupOutcome;
			typedef std::future<DeleteDBResourceGroupOutcome> DeleteDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteDBResourceGroupRequest&, const DeleteDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteProcessInstanceResult> DeleteProcessInstanceOutcome;
			typedef std::future<DeleteProcessInstanceOutcome> DeleteProcessInstanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteProcessInstanceRequest&, const DeleteProcessInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcessInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSparkTemplateResult> DeleteSparkTemplateOutcome;
			typedef std::future<DeleteSparkTemplateOutcome> DeleteSparkTemplateOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteSparkTemplateRequest&, const DeleteSparkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteSparkTemplateFileResult> DeleteSparkTemplateFileOutcome;
			typedef std::future<DeleteSparkTemplateFileOutcome> DeleteSparkTemplateFileOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteSparkTemplateFileRequest&, const DeleteSparkTemplateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkTemplateFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAdbMySqlColumnsResult> DescribeAdbMySqlColumnsOutcome;
			typedef std::future<DescribeAdbMySqlColumnsOutcome> DescribeAdbMySqlColumnsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAdbMySqlColumnsRequest&, const DescribeAdbMySqlColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdbMySqlColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAdbMySqlSchemasResult> DescribeAdbMySqlSchemasOutcome;
			typedef std::future<DescribeAdbMySqlSchemasOutcome> DescribeAdbMySqlSchemasOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAdbMySqlSchemasRequest&, const DescribeAdbMySqlSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdbMySqlSchemasAsyncHandler;
			typedef Outcome<Error, Model::DescribeAdbMySqlTablesResult> DescribeAdbMySqlTablesOutcome;
			typedef std::future<DescribeAdbMySqlTablesOutcome> DescribeAdbMySqlTablesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAdbMySqlTablesRequest&, const DescribeAdbMySqlTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdbMySqlTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApsActionLogsResult> DescribeApsActionLogsOutcome;
			typedef std::future<DescribeApsActionLogsOutcome> DescribeApsActionLogsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeApsActionLogsRequest&, const DescribeApsActionLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApsActionLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApsResourceGroupsResult> DescribeApsResourceGroupsOutcome;
			typedef std::future<DescribeApsResourceGroupsOutcome> DescribeApsResourceGroupsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeApsResourceGroupsRequest&, const DescribeApsResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApsResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditLogConfigResult> DescribeAuditLogConfigOutcome;
			typedef std::future<DescribeAuditLogConfigOutcome> DescribeAuditLogConfigOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAuditLogConfigRequest&, const DescribeAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditLogRecordsResult> DescribeAuditLogRecordsOutcome;
			typedef std::future<DescribeAuditLogRecordsOutcome> DescribeAuditLogRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAuditLogRecordsRequest&, const DescribeAuditLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterAccessWhiteListResult> DescribeClusterAccessWhiteListOutcome;
			typedef std::future<DescribeClusterAccessWhiteListOutcome> DescribeClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeClusterAccessWhiteListRequest&, const DescribeClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNetInfoResult> DescribeClusterNetInfoOutcome;
			typedef std::future<DescribeClusterNetInfoOutcome> DescribeClusterNetInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeClusterNetInfoRequest&, const DescribeClusterNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterForecastResult> DescribeDBClusterForecastOutcome;
			typedef std::future<DescribeDBClusterForecastOutcome> DescribeDBClusterForecastOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterForecastRequest&, const DescribeDBClusterForecastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterForecastAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterHealthStatusResult> DescribeDBClusterHealthStatusOutcome;
			typedef std::future<DescribeDBClusterHealthStatusOutcome> DescribeDBClusterHealthStatusOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterHealthStatusRequest&, const DescribeDBClusterHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBResourceGroupResult> DescribeDBResourceGroupOutcome;
			typedef std::future<DescribeDBResourceGroupOutcome> DescribeDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBResourceGroupRequest&, const DescribeDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisDimensionsResult> DescribeDiagnosisDimensionsOutcome;
			typedef std::future<DescribeDiagnosisDimensionsOutcome> DescribeDiagnosisDimensionsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisDimensionsRequest&, const DescribeDiagnosisDimensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisDimensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisRecordsResult> DescribeDiagnosisRecordsOutcome;
			typedef std::future<DescribeDiagnosisRecordsOutcome> DescribeDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisRecordsRequest&, const DescribeDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisSQLInfoResult> DescribeDiagnosisSQLInfoOutcome;
			typedef std::future<DescribeDiagnosisSQLInfoOutcome> DescribeDiagnosisSQLInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisSQLInfoRequest&, const DescribeDiagnosisSQLInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisSQLInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadRecordsResult> DescribeDownloadRecordsOutcome;
			typedef std::future<DescribeDownloadRecordsOutcome> DescribeDownloadRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDownloadRecordsRequest&, const DescribeDownloadRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribePatternPerformanceResult> DescribePatternPerformanceOutcome;
			typedef std::future<DescribePatternPerformanceOutcome> DescribePatternPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribePatternPerformanceRequest&, const DescribePatternPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePatternPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPatternAttributeResult> DescribeSQLPatternAttributeOutcome;
			typedef std::future<DescribeSQLPatternAttributeOutcome> DescribeSQLPatternAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSQLPatternAttributeRequest&, const DescribeSQLPatternAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPatternAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPatternsResult> DescribeSQLPatternsOutcome;
			typedef std::future<DescribeSQLPatternsOutcome> DescribeSQLPatternsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSQLPatternsRequest&, const DescribeSQLPatternsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPatternsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSparkCodeLogResult> DescribeSparkCodeLogOutcome;
			typedef std::future<DescribeSparkCodeLogOutcome> DescribeSparkCodeLogOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSparkCodeLogRequest&, const DescribeSparkCodeLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkCodeLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeSparkCodeOutputResult> DescribeSparkCodeOutputOutcome;
			typedef std::future<DescribeSparkCodeOutputOutcome> DescribeSparkCodeOutputOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSparkCodeOutputRequest&, const DescribeSparkCodeOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkCodeOutputAsyncHandler;
			typedef Outcome<Error, Model::DescribeSparkCodeWebUiResult> DescribeSparkCodeWebUiOutcome;
			typedef std::future<DescribeSparkCodeWebUiOutcome> DescribeSparkCodeWebUiOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSparkCodeWebUiRequest&, const DescribeSparkCodeWebUiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkCodeWebUiAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlPatternResult> DescribeSqlPatternOutcome;
			typedef std::future<DescribeSqlPatternOutcome> DescribeSqlPatternOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSqlPatternRequest&, const DescribeSqlPatternOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlPatternAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableAccessCountResult> DescribeTableAccessCountOutcome;
			typedef std::future<DescribeTableAccessCountOutcome> DescribeTableAccessCountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTableAccessCountRequest&, const DescribeTableAccessCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAccessCountAsyncHandler;
			typedef Outcome<Error, Model::DownloadDiagnosisRecordsResult> DownloadDiagnosisRecordsOutcome;
			typedef std::future<DownloadDiagnosisRecordsOutcome> DownloadDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DownloadDiagnosisRecordsRequest&, const DownloadDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseObjectsResult> GetDatabaseObjectsOutcome;
			typedef std::future<GetDatabaseObjectsOutcome> GetDatabaseObjectsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetDatabaseObjectsRequest&, const GetDatabaseObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseObjectsAsyncHandler;
			typedef Outcome<Error, Model::GetLakehouseValidResourceGroupsResult> GetLakehouseValidResourceGroupsOutcome;
			typedef std::future<GetLakehouseValidResourceGroupsOutcome> GetLakehouseValidResourceGroupsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetLakehouseValidResourceGroupsRequest&, const GetLakehouseValidResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLakehouseValidResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppAttemptLogResult> GetSparkAppAttemptLogOutcome;
			typedef std::future<GetSparkAppAttemptLogOutcome> GetSparkAppAttemptLogOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppAttemptLogRequest&, const GetSparkAppAttemptLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppAttemptLogAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppInfoResult> GetSparkAppInfoOutcome;
			typedef std::future<GetSparkAppInfoOutcome> GetSparkAppInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppInfoRequest&, const GetSparkAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppInfoAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppLogResult> GetSparkAppLogOutcome;
			typedef std::future<GetSparkAppLogOutcome> GetSparkAppLogOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppLogRequest&, const GetSparkAppLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppLogAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppMetricsResult> GetSparkAppMetricsOutcome;
			typedef std::future<GetSparkAppMetricsOutcome> GetSparkAppMetricsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppMetricsRequest&, const GetSparkAppMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppMetricsAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppStateResult> GetSparkAppStateOutcome;
			typedef std::future<GetSparkAppStateOutcome> GetSparkAppStateOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppStateRequest&, const GetSparkAppStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppStateAsyncHandler;
			typedef Outcome<Error, Model::GetSparkAppWebUiAddressResult> GetSparkAppWebUiAddressOutcome;
			typedef std::future<GetSparkAppWebUiAddressOutcome> GetSparkAppWebUiAddressOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkAppWebUiAddressRequest&, const GetSparkAppWebUiAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkAppWebUiAddressAsyncHandler;
			typedef Outcome<Error, Model::GetSparkConfigLogPathResult> GetSparkConfigLogPathOutcome;
			typedef std::future<GetSparkConfigLogPathOutcome> GetSparkConfigLogPathOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkConfigLogPathRequest&, const GetSparkConfigLogPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkConfigLogPathAsyncHandler;
			typedef Outcome<Error, Model::GetSparkLogAnalyzeTaskResult> GetSparkLogAnalyzeTaskOutcome;
			typedef std::future<GetSparkLogAnalyzeTaskOutcome> GetSparkLogAnalyzeTaskOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkLogAnalyzeTaskRequest&, const GetSparkLogAnalyzeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkLogAnalyzeTaskAsyncHandler;
			typedef Outcome<Error, Model::GetSparkSQLEngineStateResult> GetSparkSQLEngineStateOutcome;
			typedef std::future<GetSparkSQLEngineStateOutcome> GetSparkSQLEngineStateOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkSQLEngineStateRequest&, const GetSparkSQLEngineStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkSQLEngineStateAsyncHandler;
			typedef Outcome<Error, Model::GetSparkTemplateFileContentResult> GetSparkTemplateFileContentOutcome;
			typedef std::future<GetSparkTemplateFileContentOutcome> GetSparkTemplateFileContentOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkTemplateFileContentRequest&, const GetSparkTemplateFileContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkTemplateFileContentAsyncHandler;
			typedef Outcome<Error, Model::GetSparkTemplateFolderTreeResult> GetSparkTemplateFolderTreeOutcome;
			typedef std::future<GetSparkTemplateFolderTreeOutcome> GetSparkTemplateFolderTreeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkTemplateFolderTreeRequest&, const GetSparkTemplateFolderTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkTemplateFolderTreeAsyncHandler;
			typedef Outcome<Error, Model::GetSparkTemplateFullTreeResult> GetSparkTemplateFullTreeOutcome;
			typedef std::future<GetSparkTemplateFullTreeOutcome> GetSparkTemplateFullTreeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetSparkTemplateFullTreeRequest&, const GetSparkTemplateFullTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSparkTemplateFullTreeAsyncHandler;
			typedef Outcome<Error, Model::GetTableResult> GetTableOutcome;
			typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetTableRequest&, const GetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
			typedef Outcome<Error, Model::GetTableColumnsResult> GetTableColumnsOutcome;
			typedef std::future<GetTableColumnsOutcome> GetTableColumnsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetTableColumnsRequest&, const GetTableColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableColumnsAsyncHandler;
			typedef Outcome<Error, Model::GetTableDDLResult> GetTableDDLOutcome;
			typedef std::future<GetTableDDLOutcome> GetTableDDLOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetTableDDLRequest&, const GetTableDDLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableDDLAsyncHandler;
			typedef Outcome<Error, Model::GetTableObjectsResult> GetTableObjectsOutcome;
			typedef std::future<GetTableObjectsOutcome> GetTableObjectsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetTableObjectsRequest&, const GetTableObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableObjectsAsyncHandler;
			typedef Outcome<Error, Model::GetViewDDLResult> GetViewDDLOutcome;
			typedef std::future<GetViewDDLOutcome> GetViewDDLOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetViewDDLRequest&, const GetViewDDLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetViewDDLAsyncHandler;
			typedef Outcome<Error, Model::GetViewObjectsResult> GetViewObjectsOutcome;
			typedef std::future<GetViewObjectsOutcome> GetViewObjectsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GetViewObjectsRequest&, const GetViewObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetViewObjectsAsyncHandler;
			typedef Outcome<Error, Model::KillSparkAppResult> KillSparkAppOutcome;
			typedef std::future<KillSparkAppOutcome> KillSparkAppOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::KillSparkAppRequest&, const KillSparkAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillSparkAppAsyncHandler;
			typedef Outcome<Error, Model::KillSparkLogAnalyzeTaskResult> KillSparkLogAnalyzeTaskOutcome;
			typedef std::future<KillSparkLogAnalyzeTaskOutcome> KillSparkLogAnalyzeTaskOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::KillSparkLogAnalyzeTaskRequest&, const KillSparkLogAnalyzeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillSparkLogAnalyzeTaskAsyncHandler;
			typedef Outcome<Error, Model::KillSparkSQLEngineResult> KillSparkSQLEngineOutcome;
			typedef std::future<KillSparkSQLEngineOutcome> KillSparkSQLEngineOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::KillSparkSQLEngineRequest&, const KillSparkSQLEngineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillSparkSQLEngineAsyncHandler;
			typedef Outcome<Error, Model::ListSparkAppAttemptsResult> ListSparkAppAttemptsOutcome;
			typedef std::future<ListSparkAppAttemptsOutcome> ListSparkAppAttemptsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListSparkAppAttemptsRequest&, const ListSparkAppAttemptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkAppAttemptsAsyncHandler;
			typedef Outcome<Error, Model::ListSparkAppsResult> ListSparkAppsOutcome;
			typedef std::future<ListSparkAppsOutcome> ListSparkAppsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListSparkAppsRequest&, const ListSparkAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkAppsAsyncHandler;
			typedef Outcome<Error, Model::ListSparkLogAnalyzeTasksResult> ListSparkLogAnalyzeTasksOutcome;
			typedef std::future<ListSparkLogAnalyzeTasksOutcome> ListSparkLogAnalyzeTasksOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListSparkLogAnalyzeTasksRequest&, const ListSparkLogAnalyzeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkLogAnalyzeTasksAsyncHandler;
			typedef Outcome<Error, Model::ListSparkTemplateFileIdsResult> ListSparkTemplateFileIdsOutcome;
			typedef std::future<ListSparkTemplateFileIdsOutcome> ListSparkTemplateFileIdsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListSparkTemplateFileIdsRequest&, const ListSparkTemplateFileIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkTemplateFileIdsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditLogConfigResult> ModifyAuditLogConfigOutcome;
			typedef std::future<ModifyAuditLogConfigOutcome> ModifyAuditLogConfigOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAuditLogConfigRequest&, const ModifyAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterAccessWhiteListResult> ModifyClusterAccessWhiteListOutcome;
			typedef std::future<ModifyClusterAccessWhiteListOutcome> ModifyClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyClusterAccessWhiteListRequest&, const ModifyClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterConnectionStringResult> ModifyClusterConnectionStringOutcome;
			typedef std::future<ModifyClusterConnectionStringOutcome> ModifyClusterConnectionStringOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyClusterConnectionStringRequest&, const ModifyClusterConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResult> ModifyDBClusterOutcome;
			typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterRequest&, const ModifyDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBResourceGroupResult> ModifyDBResourceGroupOutcome;
			typedef std::future<ModifyDBResourceGroupOutcome> ModifyDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBResourceGroupRequest&, const ModifyDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::PreloadSparkAppMetricsResult> PreloadSparkAppMetricsOutcome;
			typedef std::future<PreloadSparkAppMetricsOutcome> PreloadSparkAppMetricsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::PreloadSparkAppMetricsRequest&, const PreloadSparkAppMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadSparkAppMetricsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterPublicConnectionResult> ReleaseClusterPublicConnectionOutcome;
			typedef std::future<ReleaseClusterPublicConnectionOutcome> ReleaseClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ReleaseClusterPublicConnectionRequest&, const ReleaseClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::SetSparkAppLogRootPathResult> SetSparkAppLogRootPathOutcome;
			typedef std::future<SetSparkAppLogRootPathOutcome> SetSparkAppLogRootPathOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::SetSparkAppLogRootPathRequest&, const SetSparkAppLogRootPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSparkAppLogRootPathAsyncHandler;
			typedef Outcome<Error, Model::StartSparkSQLEngineResult> StartSparkSQLEngineOutcome;
			typedef std::future<StartSparkSQLEngineOutcome> StartSparkSQLEngineOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::StartSparkSQLEngineRequest&, const StartSparkSQLEngineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSparkSQLEngineAsyncHandler;
			typedef Outcome<Error, Model::SubmitSparkAppResult> SubmitSparkAppOutcome;
			typedef std::future<SubmitSparkAppOutcome> SubmitSparkAppOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::SubmitSparkAppRequest&, const SubmitSparkAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSparkAppAsyncHandler;
			typedef Outcome<Error, Model::SubmitSparkLogAnalyzeTaskResult> SubmitSparkLogAnalyzeTaskOutcome;
			typedef std::future<SubmitSparkLogAnalyzeTaskOutcome> SubmitSparkLogAnalyzeTaskOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::SubmitSparkLogAnalyzeTaskRequest&, const SubmitSparkLogAnalyzeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSparkLogAnalyzeTaskAsyncHandler;
			typedef Outcome<Error, Model::UnbindAccountResult> UnbindAccountOutcome;
			typedef std::future<UnbindAccountOutcome> UnbindAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UnbindAccountRequest&, const UnbindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAccountAsyncHandler;
			typedef Outcome<Error, Model::UpdateSparkTemplateFileResult> UpdateSparkTemplateFileOutcome;
			typedef std::future<UpdateSparkTemplateFileOutcome> UpdateSparkTemplateFileOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UpdateSparkTemplateFileRequest&, const UpdateSparkTemplateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSparkTemplateFileAsyncHandler;

			AdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AdbClient();
			AllocateClusterPublicConnectionOutcome allocateClusterPublicConnection(const Model::AllocateClusterPublicConnectionRequest &request)const;
			void allocateClusterPublicConnectionAsync(const Model::AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateClusterPublicConnectionOutcomeCallable allocateClusterPublicConnectionCallable(const Model::AllocateClusterPublicConnectionRequest& request) const;
			BindAccountOutcome bindAccount(const Model::BindAccountRequest &request)const;
			void bindAccountAsync(const Model::BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAccountOutcomeCallable bindAccountCallable(const Model::BindAccountRequest& request) const;
			CheckBindRamUserOutcome checkBindRamUser(const Model::CheckBindRamUserRequest &request)const;
			void checkBindRamUserAsync(const Model::CheckBindRamUserRequest& request, const CheckBindRamUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckBindRamUserOutcomeCallable checkBindRamUserCallable(const Model::CheckBindRamUserRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			CreateDBResourceGroupOutcome createDBResourceGroup(const Model::CreateDBResourceGroupRequest &request)const;
			void createDBResourceGroupAsync(const Model::CreateDBResourceGroupRequest& request, const CreateDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBResourceGroupOutcomeCallable createDBResourceGroupCallable(const Model::CreateDBResourceGroupRequest& request) const;
			CreateOssSubDirectoryOutcome createOssSubDirectory(const Model::CreateOssSubDirectoryRequest &request)const;
			void createOssSubDirectoryAsync(const Model::CreateOssSubDirectoryRequest& request, const CreateOssSubDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOssSubDirectoryOutcomeCallable createOssSubDirectoryCallable(const Model::CreateOssSubDirectoryRequest& request) const;
			CreateSparkTemplateOutcome createSparkTemplate(const Model::CreateSparkTemplateRequest &request)const;
			void createSparkTemplateAsync(const Model::CreateSparkTemplateRequest& request, const CreateSparkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSparkTemplateOutcomeCallable createSparkTemplateCallable(const Model::CreateSparkTemplateRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteDBResourceGroupOutcome deleteDBResourceGroup(const Model::DeleteDBResourceGroupRequest &request)const;
			void deleteDBResourceGroupAsync(const Model::DeleteDBResourceGroupRequest& request, const DeleteDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBResourceGroupOutcomeCallable deleteDBResourceGroupCallable(const Model::DeleteDBResourceGroupRequest& request) const;
			DeleteProcessInstanceOutcome deleteProcessInstance(const Model::DeleteProcessInstanceRequest &request)const;
			void deleteProcessInstanceAsync(const Model::DeleteProcessInstanceRequest& request, const DeleteProcessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProcessInstanceOutcomeCallable deleteProcessInstanceCallable(const Model::DeleteProcessInstanceRequest& request) const;
			DeleteSparkTemplateOutcome deleteSparkTemplate(const Model::DeleteSparkTemplateRequest &request)const;
			void deleteSparkTemplateAsync(const Model::DeleteSparkTemplateRequest& request, const DeleteSparkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSparkTemplateOutcomeCallable deleteSparkTemplateCallable(const Model::DeleteSparkTemplateRequest& request) const;
			DeleteSparkTemplateFileOutcome deleteSparkTemplateFile(const Model::DeleteSparkTemplateFileRequest &request)const;
			void deleteSparkTemplateFileAsync(const Model::DeleteSparkTemplateFileRequest& request, const DeleteSparkTemplateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSparkTemplateFileOutcomeCallable deleteSparkTemplateFileCallable(const Model::DeleteSparkTemplateFileRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAdbMySqlColumnsOutcome describeAdbMySqlColumns(const Model::DescribeAdbMySqlColumnsRequest &request)const;
			void describeAdbMySqlColumnsAsync(const Model::DescribeAdbMySqlColumnsRequest& request, const DescribeAdbMySqlColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAdbMySqlColumnsOutcomeCallable describeAdbMySqlColumnsCallable(const Model::DescribeAdbMySqlColumnsRequest& request) const;
			DescribeAdbMySqlSchemasOutcome describeAdbMySqlSchemas(const Model::DescribeAdbMySqlSchemasRequest &request)const;
			void describeAdbMySqlSchemasAsync(const Model::DescribeAdbMySqlSchemasRequest& request, const DescribeAdbMySqlSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAdbMySqlSchemasOutcomeCallable describeAdbMySqlSchemasCallable(const Model::DescribeAdbMySqlSchemasRequest& request) const;
			DescribeAdbMySqlTablesOutcome describeAdbMySqlTables(const Model::DescribeAdbMySqlTablesRequest &request)const;
			void describeAdbMySqlTablesAsync(const Model::DescribeAdbMySqlTablesRequest& request, const DescribeAdbMySqlTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAdbMySqlTablesOutcomeCallable describeAdbMySqlTablesCallable(const Model::DescribeAdbMySqlTablesRequest& request) const;
			DescribeApsActionLogsOutcome describeApsActionLogs(const Model::DescribeApsActionLogsRequest &request)const;
			void describeApsActionLogsAsync(const Model::DescribeApsActionLogsRequest& request, const DescribeApsActionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApsActionLogsOutcomeCallable describeApsActionLogsCallable(const Model::DescribeApsActionLogsRequest& request) const;
			DescribeApsResourceGroupsOutcome describeApsResourceGroups(const Model::DescribeApsResourceGroupsRequest &request)const;
			void describeApsResourceGroupsAsync(const Model::DescribeApsResourceGroupsRequest& request, const DescribeApsResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApsResourceGroupsOutcomeCallable describeApsResourceGroupsCallable(const Model::DescribeApsResourceGroupsRequest& request) const;
			DescribeAuditLogConfigOutcome describeAuditLogConfig(const Model::DescribeAuditLogConfigRequest &request)const;
			void describeAuditLogConfigAsync(const Model::DescribeAuditLogConfigRequest& request, const DescribeAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditLogConfigOutcomeCallable describeAuditLogConfigCallable(const Model::DescribeAuditLogConfigRequest& request) const;
			DescribeAuditLogRecordsOutcome describeAuditLogRecords(const Model::DescribeAuditLogRecordsRequest &request)const;
			void describeAuditLogRecordsAsync(const Model::DescribeAuditLogRecordsRequest& request, const DescribeAuditLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditLogRecordsOutcomeCallable describeAuditLogRecordsCallable(const Model::DescribeAuditLogRecordsRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeClusterAccessWhiteListOutcome describeClusterAccessWhiteList(const Model::DescribeClusterAccessWhiteListRequest &request)const;
			void describeClusterAccessWhiteListAsync(const Model::DescribeClusterAccessWhiteListRequest& request, const DescribeClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterAccessWhiteListOutcomeCallable describeClusterAccessWhiteListCallable(const Model::DescribeClusterAccessWhiteListRequest& request) const;
			DescribeClusterNetInfoOutcome describeClusterNetInfo(const Model::DescribeClusterNetInfoRequest &request)const;
			void describeClusterNetInfoAsync(const Model::DescribeClusterNetInfoRequest& request, const DescribeClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterNetInfoOutcomeCallable describeClusterNetInfoCallable(const Model::DescribeClusterNetInfoRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterForecastOutcome describeDBClusterForecast(const Model::DescribeDBClusterForecastRequest &request)const;
			void describeDBClusterForecastAsync(const Model::DescribeDBClusterForecastRequest& request, const DescribeDBClusterForecastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterForecastOutcomeCallable describeDBClusterForecastCallable(const Model::DescribeDBClusterForecastRequest& request) const;
			DescribeDBClusterHealthStatusOutcome describeDBClusterHealthStatus(const Model::DescribeDBClusterHealthStatusRequest &request)const;
			void describeDBClusterHealthStatusAsync(const Model::DescribeDBClusterHealthStatusRequest& request, const DescribeDBClusterHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterHealthStatusOutcomeCallable describeDBClusterHealthStatusCallable(const Model::DescribeDBClusterHealthStatusRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeDBResourceGroupOutcome describeDBResourceGroup(const Model::DescribeDBResourceGroupRequest &request)const;
			void describeDBResourceGroupAsync(const Model::DescribeDBResourceGroupRequest& request, const DescribeDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBResourceGroupOutcomeCallable describeDBResourceGroupCallable(const Model::DescribeDBResourceGroupRequest& request) const;
			DescribeDiagnosisDimensionsOutcome describeDiagnosisDimensions(const Model::DescribeDiagnosisDimensionsRequest &request)const;
			void describeDiagnosisDimensionsAsync(const Model::DescribeDiagnosisDimensionsRequest& request, const DescribeDiagnosisDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisDimensionsOutcomeCallable describeDiagnosisDimensionsCallable(const Model::DescribeDiagnosisDimensionsRequest& request) const;
			DescribeDiagnosisRecordsOutcome describeDiagnosisRecords(const Model::DescribeDiagnosisRecordsRequest &request)const;
			void describeDiagnosisRecordsAsync(const Model::DescribeDiagnosisRecordsRequest& request, const DescribeDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisRecordsOutcomeCallable describeDiagnosisRecordsCallable(const Model::DescribeDiagnosisRecordsRequest& request) const;
			DescribeDiagnosisSQLInfoOutcome describeDiagnosisSQLInfo(const Model::DescribeDiagnosisSQLInfoRequest &request)const;
			void describeDiagnosisSQLInfoAsync(const Model::DescribeDiagnosisSQLInfoRequest& request, const DescribeDiagnosisSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisSQLInfoOutcomeCallable describeDiagnosisSQLInfoCallable(const Model::DescribeDiagnosisSQLInfoRequest& request) const;
			DescribeDownloadRecordsOutcome describeDownloadRecords(const Model::DescribeDownloadRecordsRequest &request)const;
			void describeDownloadRecordsAsync(const Model::DescribeDownloadRecordsRequest& request, const DescribeDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadRecordsOutcomeCallable describeDownloadRecordsCallable(const Model::DescribeDownloadRecordsRequest& request) const;
			DescribePatternPerformanceOutcome describePatternPerformance(const Model::DescribePatternPerformanceRequest &request)const;
			void describePatternPerformanceAsync(const Model::DescribePatternPerformanceRequest& request, const DescribePatternPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePatternPerformanceOutcomeCallable describePatternPerformanceCallable(const Model::DescribePatternPerformanceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSQLPatternAttributeOutcome describeSQLPatternAttribute(const Model::DescribeSQLPatternAttributeRequest &request)const;
			void describeSQLPatternAttributeAsync(const Model::DescribeSQLPatternAttributeRequest& request, const DescribeSQLPatternAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPatternAttributeOutcomeCallable describeSQLPatternAttributeCallable(const Model::DescribeSQLPatternAttributeRequest& request) const;
			DescribeSQLPatternsOutcome describeSQLPatterns(const Model::DescribeSQLPatternsRequest &request)const;
			void describeSQLPatternsAsync(const Model::DescribeSQLPatternsRequest& request, const DescribeSQLPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPatternsOutcomeCallable describeSQLPatternsCallable(const Model::DescribeSQLPatternsRequest& request) const;
			DescribeSparkCodeLogOutcome describeSparkCodeLog(const Model::DescribeSparkCodeLogRequest &request)const;
			void describeSparkCodeLogAsync(const Model::DescribeSparkCodeLogRequest& request, const DescribeSparkCodeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSparkCodeLogOutcomeCallable describeSparkCodeLogCallable(const Model::DescribeSparkCodeLogRequest& request) const;
			DescribeSparkCodeOutputOutcome describeSparkCodeOutput(const Model::DescribeSparkCodeOutputRequest &request)const;
			void describeSparkCodeOutputAsync(const Model::DescribeSparkCodeOutputRequest& request, const DescribeSparkCodeOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSparkCodeOutputOutcomeCallable describeSparkCodeOutputCallable(const Model::DescribeSparkCodeOutputRequest& request) const;
			DescribeSparkCodeWebUiOutcome describeSparkCodeWebUi(const Model::DescribeSparkCodeWebUiRequest &request)const;
			void describeSparkCodeWebUiAsync(const Model::DescribeSparkCodeWebUiRequest& request, const DescribeSparkCodeWebUiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSparkCodeWebUiOutcomeCallable describeSparkCodeWebUiCallable(const Model::DescribeSparkCodeWebUiRequest& request) const;
			DescribeSqlPatternOutcome describeSqlPattern(const Model::DescribeSqlPatternRequest &request)const;
			void describeSqlPatternAsync(const Model::DescribeSqlPatternRequest& request, const DescribeSqlPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlPatternOutcomeCallable describeSqlPatternCallable(const Model::DescribeSqlPatternRequest& request) const;
			DescribeTableAccessCountOutcome describeTableAccessCount(const Model::DescribeTableAccessCountRequest &request)const;
			void describeTableAccessCountAsync(const Model::DescribeTableAccessCountRequest& request, const DescribeTableAccessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableAccessCountOutcomeCallable describeTableAccessCountCallable(const Model::DescribeTableAccessCountRequest& request) const;
			DownloadDiagnosisRecordsOutcome downloadDiagnosisRecords(const Model::DownloadDiagnosisRecordsRequest &request)const;
			void downloadDiagnosisRecordsAsync(const Model::DownloadDiagnosisRecordsRequest& request, const DownloadDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadDiagnosisRecordsOutcomeCallable downloadDiagnosisRecordsCallable(const Model::DownloadDiagnosisRecordsRequest& request) const;
			GetDatabaseObjectsOutcome getDatabaseObjects(const Model::GetDatabaseObjectsRequest &request)const;
			void getDatabaseObjectsAsync(const Model::GetDatabaseObjectsRequest& request, const GetDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseObjectsOutcomeCallable getDatabaseObjectsCallable(const Model::GetDatabaseObjectsRequest& request) const;
			GetLakehouseValidResourceGroupsOutcome getLakehouseValidResourceGroups(const Model::GetLakehouseValidResourceGroupsRequest &request)const;
			void getLakehouseValidResourceGroupsAsync(const Model::GetLakehouseValidResourceGroupsRequest& request, const GetLakehouseValidResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLakehouseValidResourceGroupsOutcomeCallable getLakehouseValidResourceGroupsCallable(const Model::GetLakehouseValidResourceGroupsRequest& request) const;
			GetSparkAppAttemptLogOutcome getSparkAppAttemptLog(const Model::GetSparkAppAttemptLogRequest &request)const;
			void getSparkAppAttemptLogAsync(const Model::GetSparkAppAttemptLogRequest& request, const GetSparkAppAttemptLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppAttemptLogOutcomeCallable getSparkAppAttemptLogCallable(const Model::GetSparkAppAttemptLogRequest& request) const;
			GetSparkAppInfoOutcome getSparkAppInfo(const Model::GetSparkAppInfoRequest &request)const;
			void getSparkAppInfoAsync(const Model::GetSparkAppInfoRequest& request, const GetSparkAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppInfoOutcomeCallable getSparkAppInfoCallable(const Model::GetSparkAppInfoRequest& request) const;
			GetSparkAppLogOutcome getSparkAppLog(const Model::GetSparkAppLogRequest &request)const;
			void getSparkAppLogAsync(const Model::GetSparkAppLogRequest& request, const GetSparkAppLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppLogOutcomeCallable getSparkAppLogCallable(const Model::GetSparkAppLogRequest& request) const;
			GetSparkAppMetricsOutcome getSparkAppMetrics(const Model::GetSparkAppMetricsRequest &request)const;
			void getSparkAppMetricsAsync(const Model::GetSparkAppMetricsRequest& request, const GetSparkAppMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppMetricsOutcomeCallable getSparkAppMetricsCallable(const Model::GetSparkAppMetricsRequest& request) const;
			GetSparkAppStateOutcome getSparkAppState(const Model::GetSparkAppStateRequest &request)const;
			void getSparkAppStateAsync(const Model::GetSparkAppStateRequest& request, const GetSparkAppStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppStateOutcomeCallable getSparkAppStateCallable(const Model::GetSparkAppStateRequest& request) const;
			GetSparkAppWebUiAddressOutcome getSparkAppWebUiAddress(const Model::GetSparkAppWebUiAddressRequest &request)const;
			void getSparkAppWebUiAddressAsync(const Model::GetSparkAppWebUiAddressRequest& request, const GetSparkAppWebUiAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkAppWebUiAddressOutcomeCallable getSparkAppWebUiAddressCallable(const Model::GetSparkAppWebUiAddressRequest& request) const;
			GetSparkConfigLogPathOutcome getSparkConfigLogPath(const Model::GetSparkConfigLogPathRequest &request)const;
			void getSparkConfigLogPathAsync(const Model::GetSparkConfigLogPathRequest& request, const GetSparkConfigLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkConfigLogPathOutcomeCallable getSparkConfigLogPathCallable(const Model::GetSparkConfigLogPathRequest& request) const;
			GetSparkLogAnalyzeTaskOutcome getSparkLogAnalyzeTask(const Model::GetSparkLogAnalyzeTaskRequest &request)const;
			void getSparkLogAnalyzeTaskAsync(const Model::GetSparkLogAnalyzeTaskRequest& request, const GetSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkLogAnalyzeTaskOutcomeCallable getSparkLogAnalyzeTaskCallable(const Model::GetSparkLogAnalyzeTaskRequest& request) const;
			GetSparkSQLEngineStateOutcome getSparkSQLEngineState(const Model::GetSparkSQLEngineStateRequest &request)const;
			void getSparkSQLEngineStateAsync(const Model::GetSparkSQLEngineStateRequest& request, const GetSparkSQLEngineStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkSQLEngineStateOutcomeCallable getSparkSQLEngineStateCallable(const Model::GetSparkSQLEngineStateRequest& request) const;
			GetSparkTemplateFileContentOutcome getSparkTemplateFileContent(const Model::GetSparkTemplateFileContentRequest &request)const;
			void getSparkTemplateFileContentAsync(const Model::GetSparkTemplateFileContentRequest& request, const GetSparkTemplateFileContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkTemplateFileContentOutcomeCallable getSparkTemplateFileContentCallable(const Model::GetSparkTemplateFileContentRequest& request) const;
			GetSparkTemplateFolderTreeOutcome getSparkTemplateFolderTree(const Model::GetSparkTemplateFolderTreeRequest &request)const;
			void getSparkTemplateFolderTreeAsync(const Model::GetSparkTemplateFolderTreeRequest& request, const GetSparkTemplateFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkTemplateFolderTreeOutcomeCallable getSparkTemplateFolderTreeCallable(const Model::GetSparkTemplateFolderTreeRequest& request) const;
			GetSparkTemplateFullTreeOutcome getSparkTemplateFullTree(const Model::GetSparkTemplateFullTreeRequest &request)const;
			void getSparkTemplateFullTreeAsync(const Model::GetSparkTemplateFullTreeRequest& request, const GetSparkTemplateFullTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSparkTemplateFullTreeOutcomeCallable getSparkTemplateFullTreeCallable(const Model::GetSparkTemplateFullTreeRequest& request) const;
			GetTableOutcome getTable(const Model::GetTableRequest &request)const;
			void getTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableOutcomeCallable getTableCallable(const Model::GetTableRequest& request) const;
			GetTableColumnsOutcome getTableColumns(const Model::GetTableColumnsRequest &request)const;
			void getTableColumnsAsync(const Model::GetTableColumnsRequest& request, const GetTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableColumnsOutcomeCallable getTableColumnsCallable(const Model::GetTableColumnsRequest& request) const;
			GetTableDDLOutcome getTableDDL(const Model::GetTableDDLRequest &request)const;
			void getTableDDLAsync(const Model::GetTableDDLRequest& request, const GetTableDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableDDLOutcomeCallable getTableDDLCallable(const Model::GetTableDDLRequest& request) const;
			GetTableObjectsOutcome getTableObjects(const Model::GetTableObjectsRequest &request)const;
			void getTableObjectsAsync(const Model::GetTableObjectsRequest& request, const GetTableObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableObjectsOutcomeCallable getTableObjectsCallable(const Model::GetTableObjectsRequest& request) const;
			GetViewDDLOutcome getViewDDL(const Model::GetViewDDLRequest &request)const;
			void getViewDDLAsync(const Model::GetViewDDLRequest& request, const GetViewDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetViewDDLOutcomeCallable getViewDDLCallable(const Model::GetViewDDLRequest& request) const;
			GetViewObjectsOutcome getViewObjects(const Model::GetViewObjectsRequest &request)const;
			void getViewObjectsAsync(const Model::GetViewObjectsRequest& request, const GetViewObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetViewObjectsOutcomeCallable getViewObjectsCallable(const Model::GetViewObjectsRequest& request) const;
			KillSparkAppOutcome killSparkApp(const Model::KillSparkAppRequest &request)const;
			void killSparkAppAsync(const Model::KillSparkAppRequest& request, const KillSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillSparkAppOutcomeCallable killSparkAppCallable(const Model::KillSparkAppRequest& request) const;
			KillSparkLogAnalyzeTaskOutcome killSparkLogAnalyzeTask(const Model::KillSparkLogAnalyzeTaskRequest &request)const;
			void killSparkLogAnalyzeTaskAsync(const Model::KillSparkLogAnalyzeTaskRequest& request, const KillSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillSparkLogAnalyzeTaskOutcomeCallable killSparkLogAnalyzeTaskCallable(const Model::KillSparkLogAnalyzeTaskRequest& request) const;
			KillSparkSQLEngineOutcome killSparkSQLEngine(const Model::KillSparkSQLEngineRequest &request)const;
			void killSparkSQLEngineAsync(const Model::KillSparkSQLEngineRequest& request, const KillSparkSQLEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillSparkSQLEngineOutcomeCallable killSparkSQLEngineCallable(const Model::KillSparkSQLEngineRequest& request) const;
			ListSparkAppAttemptsOutcome listSparkAppAttempts(const Model::ListSparkAppAttemptsRequest &request)const;
			void listSparkAppAttemptsAsync(const Model::ListSparkAppAttemptsRequest& request, const ListSparkAppAttemptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkAppAttemptsOutcomeCallable listSparkAppAttemptsCallable(const Model::ListSparkAppAttemptsRequest& request) const;
			ListSparkAppsOutcome listSparkApps(const Model::ListSparkAppsRequest &request)const;
			void listSparkAppsAsync(const Model::ListSparkAppsRequest& request, const ListSparkAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkAppsOutcomeCallable listSparkAppsCallable(const Model::ListSparkAppsRequest& request) const;
			ListSparkLogAnalyzeTasksOutcome listSparkLogAnalyzeTasks(const Model::ListSparkLogAnalyzeTasksRequest &request)const;
			void listSparkLogAnalyzeTasksAsync(const Model::ListSparkLogAnalyzeTasksRequest& request, const ListSparkLogAnalyzeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkLogAnalyzeTasksOutcomeCallable listSparkLogAnalyzeTasksCallable(const Model::ListSparkLogAnalyzeTasksRequest& request) const;
			ListSparkTemplateFileIdsOutcome listSparkTemplateFileIds(const Model::ListSparkTemplateFileIdsRequest &request)const;
			void listSparkTemplateFileIdsAsync(const Model::ListSparkTemplateFileIdsRequest& request, const ListSparkTemplateFileIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkTemplateFileIdsOutcomeCallable listSparkTemplateFileIdsCallable(const Model::ListSparkTemplateFileIdsRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAuditLogConfigOutcome modifyAuditLogConfig(const Model::ModifyAuditLogConfigRequest &request)const;
			void modifyAuditLogConfigAsync(const Model::ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditLogConfigOutcomeCallable modifyAuditLogConfigCallable(const Model::ModifyAuditLogConfigRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyClusterAccessWhiteListOutcome modifyClusterAccessWhiteList(const Model::ModifyClusterAccessWhiteListRequest &request)const;
			void modifyClusterAccessWhiteListAsync(const Model::ModifyClusterAccessWhiteListRequest& request, const ModifyClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterAccessWhiteListOutcomeCallable modifyClusterAccessWhiteListCallable(const Model::ModifyClusterAccessWhiteListRequest& request) const;
			ModifyClusterConnectionStringOutcome modifyClusterConnectionString(const Model::ModifyClusterConnectionStringRequest &request)const;
			void modifyClusterConnectionStringAsync(const Model::ModifyClusterConnectionStringRequest& request, const ModifyClusterConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterConnectionStringOutcomeCallable modifyClusterConnectionStringCallable(const Model::ModifyClusterConnectionStringRequest& request) const;
			ModifyDBClusterOutcome modifyDBCluster(const Model::ModifyDBClusterRequest &request)const;
			void modifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterOutcomeCallable modifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ModifyDBResourceGroupOutcome modifyDBResourceGroup(const Model::ModifyDBResourceGroupRequest &request)const;
			void modifyDBResourceGroupAsync(const Model::ModifyDBResourceGroupRequest& request, const ModifyDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBResourceGroupOutcomeCallable modifyDBResourceGroupCallable(const Model::ModifyDBResourceGroupRequest& request) const;
			PreloadSparkAppMetricsOutcome preloadSparkAppMetrics(const Model::PreloadSparkAppMetricsRequest &request)const;
			void preloadSparkAppMetricsAsync(const Model::PreloadSparkAppMetricsRequest& request, const PreloadSparkAppMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadSparkAppMetricsOutcomeCallable preloadSparkAppMetricsCallable(const Model::PreloadSparkAppMetricsRequest& request) const;
			ReleaseClusterPublicConnectionOutcome releaseClusterPublicConnection(const Model::ReleaseClusterPublicConnectionRequest &request)const;
			void releaseClusterPublicConnectionAsync(const Model::ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterPublicConnectionOutcomeCallable releaseClusterPublicConnectionCallable(const Model::ReleaseClusterPublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			SetSparkAppLogRootPathOutcome setSparkAppLogRootPath(const Model::SetSparkAppLogRootPathRequest &request)const;
			void setSparkAppLogRootPathAsync(const Model::SetSparkAppLogRootPathRequest& request, const SetSparkAppLogRootPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSparkAppLogRootPathOutcomeCallable setSparkAppLogRootPathCallable(const Model::SetSparkAppLogRootPathRequest& request) const;
			StartSparkSQLEngineOutcome startSparkSQLEngine(const Model::StartSparkSQLEngineRequest &request)const;
			void startSparkSQLEngineAsync(const Model::StartSparkSQLEngineRequest& request, const StartSparkSQLEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSparkSQLEngineOutcomeCallable startSparkSQLEngineCallable(const Model::StartSparkSQLEngineRequest& request) const;
			SubmitSparkAppOutcome submitSparkApp(const Model::SubmitSparkAppRequest &request)const;
			void submitSparkAppAsync(const Model::SubmitSparkAppRequest& request, const SubmitSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSparkAppOutcomeCallable submitSparkAppCallable(const Model::SubmitSparkAppRequest& request) const;
			SubmitSparkLogAnalyzeTaskOutcome submitSparkLogAnalyzeTask(const Model::SubmitSparkLogAnalyzeTaskRequest &request)const;
			void submitSparkLogAnalyzeTaskAsync(const Model::SubmitSparkLogAnalyzeTaskRequest& request, const SubmitSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSparkLogAnalyzeTaskOutcomeCallable submitSparkLogAnalyzeTaskCallable(const Model::SubmitSparkLogAnalyzeTaskRequest& request) const;
			UnbindAccountOutcome unbindAccount(const Model::UnbindAccountRequest &request)const;
			void unbindAccountAsync(const Model::UnbindAccountRequest& request, const UnbindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindAccountOutcomeCallable unbindAccountCallable(const Model::UnbindAccountRequest& request) const;
			UpdateSparkTemplateFileOutcome updateSparkTemplateFile(const Model::UpdateSparkTemplateFileRequest &request)const;
			void updateSparkTemplateFileAsync(const Model::UpdateSparkTemplateFileRequest& request, const UpdateSparkTemplateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSparkTemplateFileOutcomeCallable updateSparkTemplateFileCallable(const Model::UpdateSparkTemplateFileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADB_ADBCLIENT_H_
