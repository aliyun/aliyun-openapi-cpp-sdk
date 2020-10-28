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

#ifndef ALIBABACLOUD_DRDS_DRDSCLIENT_H_
#define ALIBABACLOUD_DRDS_DRDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DrdsExport.h"
#include "model/AlterTableRequest.h"
#include "model/AlterTableResult.h"
#include "model/AsyncTaskCancelRequest.h"
#include "model/AsyncTaskCancelResult.h"
#include "model/CancelDDLTaskRequest.h"
#include "model/CancelDDLTaskResult.h"
#include "model/CancleDDLTaskRequest.h"
#include "model/CancleDDLTaskResult.h"
#include "model/ChangeAccountPasswordRequest.h"
#include "model/ChangeAccountPasswordResult.h"
#include "model/CheckConnectivityRequest.h"
#include "model/CheckConnectivityResult.h"
#include "model/CheckDrdsDbNameRequest.h"
#include "model/CheckDrdsDbNameResult.h"
#include "model/CheckExpandStatusRequest.h"
#include "model/CheckExpandStatusResult.h"
#include "model/CheckNewTableNameValidRequest.h"
#include "model/CheckNewTableNameValidResult.h"
#include "model/CheckSqlAuditEnableStatusRequest.h"
#include "model/CheckSqlAuditEnableStatusResult.h"
#include "model/CreateCustomDataExportPreCheckTaskRequest.h"
#include "model/CreateCustomDataExportPreCheckTaskResult.h"
#include "model/CreateCustomDataExportTaskRequest.h"
#include "model/CreateCustomDataExportTaskResult.h"
#include "model/CreateCustomDataImportPreCheckTaskRequest.h"
#include "model/CreateCustomDataImportPreCheckTaskResult.h"
#include "model/CreateCustomDataImportTaskRequest.h"
#include "model/CreateCustomDataImportTaskResult.h"
#include "model/CreateDrdsAccountRequest.h"
#include "model/CreateDrdsAccountResult.h"
#include "model/CreateDrdsDBRequest.h"
#include "model/CreateDrdsDBResult.h"
#include "model/CreateDrdsInstanceRequest.h"
#include "model/CreateDrdsInstanceResult.h"
#include "model/CreateEvaluateDataImportPreCheckTaskRequest.h"
#include "model/CreateEvaluateDataImportPreCheckTaskResult.h"
#include "model/CreateEvaluateDataImportTaskRequest.h"
#include "model/CreateEvaluateDataImportTaskResult.h"
#include "model/CreateEvaluatePreCheckTaskRequest.h"
#include "model/CreateEvaluatePreCheckTaskResult.h"
#include "model/CreateEvaluateTaskRequest.h"
#include "model/CreateEvaluateTaskResult.h"
#include "model/CreateIndexRequest.h"
#include "model/CreateIndexResult.h"
#include "model/CreateInstanceAccountRequest.h"
#include "model/CreateInstanceAccountResult.h"
#include "model/CreateInstanceInternetAddressRequest.h"
#include "model/CreateInstanceInternetAddressResult.h"
#include "model/CreateMyCatCustomImportRequest.h"
#include "model/CreateMyCatCustomImportResult.h"
#include "model/CreateMyCatEvaluateRequest.h"
#include "model/CreateMyCatEvaluateResult.h"
#include "model/CreateOrderForRdsRequest.h"
#include "model/CreateOrderForRdsResult.h"
#include "model/CreateReadOnlyAccountRequest.h"
#include "model/CreateReadOnlyAccountResult.h"
#include "model/CreateShardTaskRequest.h"
#include "model/CreateShardTaskResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/DatalinkReplicationPrecheckRequest.h"
#include "model/DatalinkReplicationPrecheckResult.h"
#include "model/DeleteDrdsDBRequest.h"
#include "model/DeleteDrdsDBResult.h"
#include "model/DeleteFailedDrdsDBRequest.h"
#include "model/DeleteFailedDrdsDBResult.h"
#include "model/DeleteShardTasksRequest.h"
#include "model/DeleteShardTasksResult.h"
#include "model/DescribeBackMenuRequest.h"
#include "model/DescribeBackMenuResult.h"
#include "model/DescribeBackupDbsRequest.h"
#include "model/DescribeBackupDbsResult.h"
#include "model/DescribeBackupLocalRequest.h"
#include "model/DescribeBackupLocalResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupSetsRequest.h"
#include "model/DescribeBackupSetsResult.h"
#include "model/DescribeBackupTimesRequest.h"
#include "model/DescribeBackupTimesResult.h"
#include "model/DescribeBatchEvaluateTaskReportRequest.h"
#include "model/DescribeBatchEvaluateTaskReportResult.h"
#include "model/DescribeBroadcastTablesRequest.h"
#include "model/DescribeBroadcastTablesResult.h"
#include "model/DescribeCreateDrdsInstanceStatusRequest.h"
#include "model/DescribeCreateDrdsInstanceStatusResult.h"
#include "model/DescribeCustomDataExportSrcDstTablesRequest.h"
#include "model/DescribeCustomDataExportSrcDstTablesResult.h"
#include "model/DescribeCustomDataImportSrcDstTablesRequest.h"
#include "model/DescribeCustomDataImportSrcDstTablesResult.h"
#include "model/DescribeDDLTaskRequest.h"
#include "model/DescribeDDLTaskResult.h"
#include "model/DescribeDataExportPreCheckResultRequest.h"
#include "model/DescribeDataExportPreCheckResultResult.h"
#include "model/DescribeDataExportTaskReportRequest.h"
#include "model/DescribeDataExportTaskReportResult.h"
#include "model/DescribeDataExportTasksRequest.h"
#include "model/DescribeDataExportTasksResult.h"
#include "model/DescribeDataImportPreCheckResultRequest.h"
#include "model/DescribeDataImportPreCheckResultResult.h"
#include "model/DescribeDataImportTaskReportRequest.h"
#include "model/DescribeDataImportTaskReportResult.h"
#include "model/DescribeDataImportTasksRequest.h"
#include "model/DescribeDataImportTasksResult.h"
#include "model/DescribeDbInstanceDbsRequest.h"
#include "model/DescribeDbInstanceDbsResult.h"
#include "model/DescribeDbInstancesRequest.h"
#include "model/DescribeDbInstancesResult.h"
#include "model/DescribeDrdsComponentsRequest.h"
#include "model/DescribeDrdsComponentsResult.h"
#include "model/DescribeDrdsDBRequest.h"
#include "model/DescribeDrdsDBResult.h"
#include "model/DescribeDrdsDBClusterRequest.h"
#include "model/DescribeDrdsDBClusterResult.h"
#include "model/DescribeDrdsDBIpWhiteListRequest.h"
#include "model/DescribeDrdsDBIpWhiteListResult.h"
#include "model/DescribeDrdsDBsRequest.h"
#include "model/DescribeDrdsDBsResult.h"
#include "model/DescribeDrdsDbInstanceRequest.h"
#include "model/DescribeDrdsDbInstanceResult.h"
#include "model/DescribeDrdsDbInstancesRequest.h"
#include "model/DescribeDrdsDbInstancesResult.h"
#include "model/DescribeDrdsDbRdsNameListRequest.h"
#include "model/DescribeDrdsDbRdsNameListResult.h"
#include "model/DescribeDrdsDbTasksRequest.h"
#include "model/DescribeDrdsDbTasksResult.h"
#include "model/DescribeDrdsDbTestLinkRequest.h"
#include "model/DescribeDrdsDbTestLinkResult.h"
#include "model/DescribeDrdsInstanceRequest.h"
#include "model/DescribeDrdsInstanceResult.h"
#include "model/DescribeDrdsInstanceDbMonitorRequest.h"
#include "model/DescribeDrdsInstanceDbMonitorResult.h"
#include "model/DescribeDrdsInstanceLevelTasksRequest.h"
#include "model/DescribeDrdsInstanceLevelTasksResult.h"
#include "model/DescribeDrdsInstanceMonitorRequest.h"
#include "model/DescribeDrdsInstanceMonitorResult.h"
#include "model/DescribeDrdsInstanceNetInfoForInnerRequest.h"
#include "model/DescribeDrdsInstanceNetInfoForInnerResult.h"
#include "model/DescribeDrdsInstanceVersionRequest.h"
#include "model/DescribeDrdsInstanceVersionResult.h"
#include "model/DescribeDrdsInstancesRequest.h"
#include "model/DescribeDrdsInstancesResult.h"
#include "model/DescribeDrdsParamsRequest.h"
#include "model/DescribeDrdsParamsResult.h"
#include "model/DescribeDrdsRdsInstancesRequest.h"
#include "model/DescribeDrdsRdsInstancesResult.h"
#include "model/DescribeDrdsShardingDbsRequest.h"
#include "model/DescribeDrdsShardingDbsResult.h"
#include "model/DescribeDrdsSlowSqlsRequest.h"
#include "model/DescribeDrdsSlowSqlsResult.h"
#include "model/DescribeDrdsSqlAuditStatusRequest.h"
#include "model/DescribeDrdsSqlAuditStatusResult.h"
#include "model/DescribeDrdsTasksRequest.h"
#include "model/DescribeDrdsTasksResult.h"
#include "model/DescribeEvaluateDataImportDbTopologysRequest.h"
#include "model/DescribeEvaluateDataImportDbTopologysResult.h"
#include "model/DescribeEvaluatePreCheckResultRequest.h"
#include "model/DescribeEvaluatePreCheckResultResult.h"
#include "model/DescribeEvaluateTaskReportRequest.h"
#include "model/DescribeEvaluateTaskReportResult.h"
#include "model/DescribeEvaluateTasksRequest.h"
#include "model/DescribeEvaluateTasksResult.h"
#include "model/DescribeExpandLogicTableInfoListRequest.h"
#include "model/DescribeExpandLogicTableInfoListResult.h"
#include "model/DescribeFirstDrdsInstanceByOrderIdRequest.h"
#include "model/DescribeFirstDrdsInstanceByOrderIdResult.h"
#include "model/DescribeGlobalBroadcastTypeRequest.h"
#include "model/DescribeGlobalBroadcastTypeResult.h"
#include "model/DescribeHiStoreInstanceInfoRequest.h"
#include "model/DescribeHiStoreInstanceInfoResult.h"
#include "model/DescribeHotDbListRequest.h"
#include "model/DescribeHotDbListResult.h"
#include "model/DescribeInstDbLogInfoRequest.h"
#include "model/DescribeInstDbLogInfoResult.h"
#include "model/DescribeInstDbSlsInfoRequest.h"
#include "model/DescribeInstDbSlsInfoResult.h"
#include "model/DescribeInstanceAccountsRequest.h"
#include "model/DescribeInstanceAccountsResult.h"
#include "model/DescribeInstanceMenuSwitchRequest.h"
#include "model/DescribeInstanceMenuSwitchResult.h"
#include "model/DescribeInstanceSwitchAzoneRequest.h"
#include "model/DescribeInstanceSwitchAzoneResult.h"
#include "model/DescribeInstanceSwitchNetworkRequest.h"
#include "model/DescribeInstanceSwitchNetworkResult.h"
#include "model/DescribeMyCatDbListRequest.h"
#include "model/DescribeMyCatDbListResult.h"
#include "model/DescribeMyCatReportInfoRequest.h"
#include "model/DescribeMyCatReportInfoResult.h"
#include "model/DescribePreCheckResultRequest.h"
#include "model/DescribePreCheckResultResult.h"
#include "model/DescribeRDSPerformanceRequest.h"
#include "model/DescribeRDSPerformanceResult.h"
#include "model/DescribeRdsCommodityRequest.h"
#include "model/DescribeRdsCommodityResult.h"
#include "model/DescribeRdsDbInfosRequest.h"
#include "model/DescribeRdsDbInfosResult.h"
#include "model/DescribeRdsDrdsDBRequest.h"
#include "model/DescribeRdsDrdsDBResult.h"
#include "model/DescribeRdsInstInfosRequest.h"
#include "model/DescribeRdsInstInfosResult.h"
#include "model/DescribeRdsListRequest.h"
#include "model/DescribeRdsListResult.h"
#include "model/DescribeRdsPerformanceSummaryRequest.h"
#include "model/DescribeRdsPerformanceSummaryResult.h"
#include "model/DescribeRdsReadOnlyRequest.h"
#include "model/DescribeRdsReadOnlyResult.h"
#include "model/DescribeRdsSuperAccountInstancesRequest.h"
#include "model/DescribeRdsSuperAccountInstancesResult.h"
#include "model/DescribeReadOnlyAccountRequest.h"
#include "model/DescribeReadOnlyAccountResult.h"
#include "model/DescribeRecycleBinStatusRequest.h"
#include "model/DescribeRecycleBinStatusResult.h"
#include "model/DescribeRecycleBinTablesRequest.h"
#include "model/DescribeRecycleBinTablesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRestoreOrderRequest.h"
#include "model/DescribeRestoreOrderResult.h"
#include "model/DescribeShardDBsRequest.h"
#include "model/DescribeShardDBsResult.h"
#include "model/DescribeShardDbConnectionInfoRequest.h"
#include "model/DescribeShardDbConnectionInfoResult.h"
#include "model/DescribeShardTaskInfoRequest.h"
#include "model/DescribeShardTaskInfoResult.h"
#include "model/DescribeShardTaskListRequest.h"
#include "model/DescribeShardTaskListResult.h"
#include "model/DescribeSqlFlashbakTaskRequest.h"
#include "model/DescribeSqlFlashbakTaskResult.h"
#include "model/DescribeTableRequest.h"
#include "model/DescribeTableResult.h"
#include "model/DescribeTableListByTypeRequest.h"
#include "model/DescribeTableListByTypeResult.h"
#include "model/DescribeTableShardingInfoRequest.h"
#include "model/DescribeTableShardingInfoResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeUnCompatibilitySqlRequest.h"
#include "model/DescribeUnCompatibilitySqlResult.h"
#include "model/DisableSqlAuditRequest.h"
#include "model/DisableSqlAuditResult.h"
#include "model/DrdsApiValidateOrderRequest.h"
#include "model/DrdsApiValidateOrderResult.h"
#include "model/DropIndexesRequest.h"
#include "model/DropIndexesResult.h"
#include "model/DropTablesRequest.h"
#include "model/DropTablesResult.h"
#include "model/EnableInstanceRequest.h"
#include "model/EnableInstanceResult.h"
#include "model/EnableInstanceIpv6AddressRequest.h"
#include "model/EnableInstanceIpv6AddressResult.h"
#include "model/EnableSqlAuditRequest.h"
#include "model/EnableSqlAuditResult.h"
#include "model/EnableSqlFlashbackMatchSwitchRequest.h"
#include "model/EnableSqlFlashbackMatchSwitchResult.h"
#include "model/FlashbackRecycleBinTableRequest.h"
#include "model/FlashbackRecycleBinTableResult.h"
#include "model/GetBatchEvaluateTaskReportRequest.h"
#include "model/GetBatchEvaluateTaskReportResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListUnCompleteTasksRequest.h"
#include "model/ListUnCompleteTasksResult.h"
#include "model/ListUserReportsRequest.h"
#include "model/ListUserReportsResult.h"
#include "model/ListVersionsRequest.h"
#include "model/ListVersionsResult.h"
#include "model/ManagePrivateRdsRequest.h"
#include "model/ManagePrivateRdsResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPrivilegeRequest.h"
#include "model/ModifyAccountPrivilegeResult.h"
#include "model/ModifyDrdsDBPasswdRequest.h"
#include "model/ModifyDrdsDBPasswdResult.h"
#include "model/ModifyDrdsInstanceDescriptionRequest.h"
#include "model/ModifyDrdsInstanceDescriptionResult.h"
#include "model/ModifyDrdsIpWhiteListRequest.h"
#include "model/ModifyDrdsIpWhiteListResult.h"
#include "model/ModifyFullTableScanRequest.h"
#include "model/ModifyFullTableScanResult.h"
#include "model/ModifyPolarDbReadWeightRequest.h"
#include "model/ModifyPolarDbReadWeightResult.h"
#include "model/ModifyRdsReadWeightRequest.h"
#include "model/ModifyRdsReadWeightResult.h"
#include "model/ModifyReadOnlyAccountPasswordRequest.h"
#include "model/ModifyReadOnlyAccountPasswordResult.h"
#include "model/MyCatConnectTestRequest.h"
#include "model/MyCatConnectTestResult.h"
#include "model/MyCatCustomImportPreCheckRequest.h"
#include "model/MyCatCustomImportPreCheckResult.h"
#include "model/OrderRefundRequest.h"
#include "model/OrderRefundResult.h"
#include "model/PreCheckModifyTableShardingKeyParamRequest.h"
#include "model/PreCheckModifyTableShardingKeyParamResult.h"
#include "model/PrecheckMyCatEvaluateRequest.h"
#include "model/PrecheckMyCatEvaluateResult.h"
#include "model/ProductInfoComplementRequest.h"
#include "model/ProductInfoComplementResult.h"
#include "model/PutStartBackupRequest.h"
#include "model/PutStartBackupResult.h"
#include "model/QueryInstanceInfoByConnRequest.h"
#include "model/QueryInstanceInfoByConnResult.h"
#include "model/RefreshDrdsAtomUrlRequest.h"
#include "model/RefreshDrdsAtomUrlResult.h"
#include "model/ReleaseHiStoreInstanceRequest.h"
#include "model/ReleaseHiStoreInstanceResult.h"
#include "model/ReleaseInstanceInternetAddressRequest.h"
#include "model/ReleaseInstanceInternetAddressResult.h"
#include "model/RemoveBackupsSetRequest.h"
#include "model/RemoveBackupsSetResult.h"
#include "model/RemoveDataExportTaskRequest.h"
#include "model/RemoveDataExportTaskResult.h"
#include "model/RemoveDataImportTaskRequest.h"
#include "model/RemoveDataImportTaskResult.h"
#include "model/RemoveDrdsDbRequest.h"
#include "model/RemoveDrdsDbResult.h"
#include "model/RemoveDrdsDbFailedRecordRequest.h"
#include "model/RemoveDrdsDbFailedRecordResult.h"
#include "model/RemoveDrdsInstanceRequest.h"
#include "model/RemoveDrdsInstanceResult.h"
#include "model/RemoveDrdsMysqlRequest.h"
#include "model/RemoveDrdsMysqlResult.h"
#include "model/RemoveEvaluateTaskRequest.h"
#include "model/RemoveEvaluateTaskResult.h"
#include "model/RemoveInstanceAccountRequest.h"
#include "model/RemoveInstanceAccountResult.h"
#include "model/RemoveReadOnlyAccountRequest.h"
#include "model/RemoveReadOnlyAccountResult.h"
#include "model/RemoveRecycleBinTableRequest.h"
#include "model/RemoveRecycleBinTableResult.h"
#include "model/ResetDrdsToRdsConnectionsRequest.h"
#include "model/ResetDrdsToRdsConnectionsResult.h"
#include "model/RestartDrdsInstanceRequest.h"
#include "model/RestartDrdsInstanceResult.h"
#include "model/RollbackHiStoreInstanceRequest.h"
#include "model/RollbackHiStoreInstanceResult.h"
#include "model/RollbackInstanceVersionRequest.h"
#include "model/RollbackInstanceVersionResult.h"
#include "model/SetBackupLocalRequest.h"
#include "model/SetBackupLocalResult.h"
#include "model/SetBackupPolicyRequest.h"
#include "model/SetBackupPolicyResult.h"
#include "model/SetupBroadcastTablesRequest.h"
#include "model/SetupBroadcastTablesResult.h"
#include "model/SetupDrdsParamsRequest.h"
#include "model/SetupDrdsParamsResult.h"
#include "model/SetupRecycleBinStatusRequest.h"
#include "model/SetupRecycleBinStatusResult.h"
#include "model/SetupTableRequest.h"
#include "model/SetupTableResult.h"
#include "model/SqlCompatibilityCancelRequest.h"
#include "model/SqlCompatibilityCancelResult.h"
#include "model/SqlCompatibilityStartRequest.h"
#include "model/SqlCompatibilityStartResult.h"
#include "model/StartDataImportTaskRequest.h"
#include "model/StartDataImportTaskResult.h"
#include "model/StartEvaluateTaskRequest.h"
#include "model/StartEvaluateTaskResult.h"
#include "model/StartRestoreRequest.h"
#include "model/StartRestoreResult.h"
#include "model/StopDataExportTaskRequest.h"
#include "model/StopDataExportTaskResult.h"
#include "model/StopDataImportTaskRequest.h"
#include "model/StopDataImportTaskResult.h"
#include "model/StopEvaluateTaskRequest.h"
#include "model/StopEvaluateTaskResult.h"
#include "model/SubmitCleanTableShardingKeyModifyRequest.h"
#include "model/SubmitCleanTableShardingKeyModifyResult.h"
#include "model/SubmitCleanTaskRequest.h"
#include "model/SubmitCleanTaskResult.h"
#include "model/SubmitHotExpandPreCheckTaskRequest.h"
#include "model/SubmitHotExpandPreCheckTaskResult.h"
#include "model/SubmitHotExpandTaskRequest.h"
#include "model/SubmitHotExpandTaskResult.h"
#include "model/SubmitRollbackShardingKeyModifyRequest.h"
#include "model/SubmitRollbackShardingKeyModifyResult.h"
#include "model/SubmitRollbackTaskRequest.h"
#include "model/SubmitRollbackTaskResult.h"
#include "model/SubmitSmoothExpandPreCheckRequest.h"
#include "model/SubmitSmoothExpandPreCheckResult.h"
#include "model/SubmitSmoothExpandPreCheckTaskRequest.h"
#include "model/SubmitSmoothExpandPreCheckTaskResult.h"
#include "model/SubmitSmoothExpandTaskRequest.h"
#include "model/SubmitSmoothExpandTaskResult.h"
#include "model/SubmitSqlFlashbackTaskRequest.h"
#include "model/SubmitSqlFlashbackTaskResult.h"
#include "model/SubmitSwitchTableShardingKeyModifyRequest.h"
#include "model/SubmitSwitchTableShardingKeyModifyResult.h"
#include "model/SubmitSwitchTaskRequest.h"
#include "model/SubmitSwitchTaskResult.h"
#include "model/SubmitTableShardingKeyModifyRequest.h"
#include "model/SubmitTableShardingKeyModifyResult.h"
#include "model/SwitchGlobalBroadcastTypeRequest.h"
#include "model/SwitchGlobalBroadcastTypeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateInstanceNetworkRequest.h"
#include "model/UpdateInstanceNetworkResult.h"
#include "model/UpdateResourceGroupAttributeRequest.h"
#include "model/UpdateResourceGroupAttributeResult.h"
#include "model/UpgradeHiStoreInstanceRequest.h"
#include "model/UpgradeHiStoreInstanceResult.h"
#include "model/UpgradeInstanceVersionRequest.h"
#include "model/UpgradeInstanceVersionResult.h"
#include "model/ValidateShardTaskRequest.h"
#include "model/ValidateShardTaskResult.h"


namespace AlibabaCloud
{
	namespace Drds
	{
		class ALIBABACLOUD_DRDS_EXPORT DrdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AlterTableResult> AlterTableOutcome;
			typedef std::future<AlterTableOutcome> AlterTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::AlterTableRequest&, const AlterTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlterTableAsyncHandler;
			typedef Outcome<Error, Model::AsyncTaskCancelResult> AsyncTaskCancelOutcome;
			typedef std::future<AsyncTaskCancelOutcome> AsyncTaskCancelOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::AsyncTaskCancelRequest&, const AsyncTaskCancelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsyncTaskCancelAsyncHandler;
			typedef Outcome<Error, Model::CancelDDLTaskResult> CancelDDLTaskOutcome;
			typedef std::future<CancelDDLTaskOutcome> CancelDDLTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CancelDDLTaskRequest&, const CancelDDLTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDDLTaskAsyncHandler;
			typedef Outcome<Error, Model::CancleDDLTaskResult> CancleDDLTaskOutcome;
			typedef std::future<CancleDDLTaskOutcome> CancleDDLTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CancleDDLTaskRequest&, const CancleDDLTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancleDDLTaskAsyncHandler;
			typedef Outcome<Error, Model::ChangeAccountPasswordResult> ChangeAccountPasswordOutcome;
			typedef std::future<ChangeAccountPasswordOutcome> ChangeAccountPasswordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ChangeAccountPasswordRequest&, const ChangeAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::CheckConnectivityResult> CheckConnectivityOutcome;
			typedef std::future<CheckConnectivityOutcome> CheckConnectivityOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckConnectivityRequest&, const CheckConnectivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckConnectivityAsyncHandler;
			typedef Outcome<Error, Model::CheckDrdsDbNameResult> CheckDrdsDbNameOutcome;
			typedef std::future<CheckDrdsDbNameOutcome> CheckDrdsDbNameOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckDrdsDbNameRequest&, const CheckDrdsDbNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDrdsDbNameAsyncHandler;
			typedef Outcome<Error, Model::CheckExpandStatusResult> CheckExpandStatusOutcome;
			typedef std::future<CheckExpandStatusOutcome> CheckExpandStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckExpandStatusRequest&, const CheckExpandStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckExpandStatusAsyncHandler;
			typedef Outcome<Error, Model::CheckNewTableNameValidResult> CheckNewTableNameValidOutcome;
			typedef std::future<CheckNewTableNameValidOutcome> CheckNewTableNameValidOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckNewTableNameValidRequest&, const CheckNewTableNameValidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckNewTableNameValidAsyncHandler;
			typedef Outcome<Error, Model::CheckSqlAuditEnableStatusResult> CheckSqlAuditEnableStatusOutcome;
			typedef std::future<CheckSqlAuditEnableStatusOutcome> CheckSqlAuditEnableStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckSqlAuditEnableStatusRequest&, const CheckSqlAuditEnableStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSqlAuditEnableStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomDataExportPreCheckTaskResult> CreateCustomDataExportPreCheckTaskOutcome;
			typedef std::future<CreateCustomDataExportPreCheckTaskOutcome> CreateCustomDataExportPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateCustomDataExportPreCheckTaskRequest&, const CreateCustomDataExportPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomDataExportPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomDataExportTaskResult> CreateCustomDataExportTaskOutcome;
			typedef std::future<CreateCustomDataExportTaskOutcome> CreateCustomDataExportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateCustomDataExportTaskRequest&, const CreateCustomDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomDataImportPreCheckTaskResult> CreateCustomDataImportPreCheckTaskOutcome;
			typedef std::future<CreateCustomDataImportPreCheckTaskOutcome> CreateCustomDataImportPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateCustomDataImportPreCheckTaskRequest&, const CreateCustomDataImportPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomDataImportPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomDataImportTaskResult> CreateCustomDataImportTaskOutcome;
			typedef std::future<CreateCustomDataImportTaskOutcome> CreateCustomDataImportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateCustomDataImportTaskRequest&, const CreateCustomDataImportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomDataImportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsAccountResult> CreateDrdsAccountOutcome;
			typedef std::future<CreateDrdsAccountOutcome> CreateDrdsAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsAccountRequest&, const CreateDrdsAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsDBResult> CreateDrdsDBOutcome;
			typedef std::future<CreateDrdsDBOutcome> CreateDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsDBRequest&, const CreateDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsInstanceResult> CreateDrdsInstanceOutcome;
			typedef std::future<CreateDrdsInstanceOutcome> CreateDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsInstanceRequest&, const CreateDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluateDataImportPreCheckTaskResult> CreateEvaluateDataImportPreCheckTaskOutcome;
			typedef std::future<CreateEvaluateDataImportPreCheckTaskOutcome> CreateEvaluateDataImportPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateEvaluateDataImportPreCheckTaskRequest&, const CreateEvaluateDataImportPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluateDataImportPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluateDataImportTaskResult> CreateEvaluateDataImportTaskOutcome;
			typedef std::future<CreateEvaluateDataImportTaskOutcome> CreateEvaluateDataImportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateEvaluateDataImportTaskRequest&, const CreateEvaluateDataImportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluateDataImportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluatePreCheckTaskResult> CreateEvaluatePreCheckTaskOutcome;
			typedef std::future<CreateEvaluatePreCheckTaskOutcome> CreateEvaluatePreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateEvaluatePreCheckTaskRequest&, const CreateEvaluatePreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluatePreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluateTaskResult> CreateEvaluateTaskOutcome;
			typedef std::future<CreateEvaluateTaskOutcome> CreateEvaluateTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateEvaluateTaskRequest&, const CreateEvaluateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluateTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateIndexResult> CreateIndexOutcome;
			typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateIndexRequest&, const CreateIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceAccountResult> CreateInstanceAccountOutcome;
			typedef std::future<CreateInstanceAccountOutcome> CreateInstanceAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateInstanceAccountRequest&, const CreateInstanceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceInternetAddressResult> CreateInstanceInternetAddressOutcome;
			typedef std::future<CreateInstanceInternetAddressOutcome> CreateInstanceInternetAddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateInstanceInternetAddressRequest&, const CreateInstanceInternetAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceInternetAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateMyCatCustomImportResult> CreateMyCatCustomImportOutcome;
			typedef std::future<CreateMyCatCustomImportOutcome> CreateMyCatCustomImportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateMyCatCustomImportRequest&, const CreateMyCatCustomImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMyCatCustomImportAsyncHandler;
			typedef Outcome<Error, Model::CreateMyCatEvaluateResult> CreateMyCatEvaluateOutcome;
			typedef std::future<CreateMyCatEvaluateOutcome> CreateMyCatEvaluateOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateMyCatEvaluateRequest&, const CreateMyCatEvaluateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMyCatEvaluateAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderForRdsResult> CreateOrderForRdsOutcome;
			typedef std::future<CreateOrderForRdsOutcome> CreateOrderForRdsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateOrderForRdsRequest&, const CreateOrderForRdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderForRdsAsyncHandler;
			typedef Outcome<Error, Model::CreateReadOnlyAccountResult> CreateReadOnlyAccountOutcome;
			typedef std::future<CreateReadOnlyAccountOutcome> CreateReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateReadOnlyAccountRequest&, const CreateReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateShardTaskResult> CreateShardTaskOutcome;
			typedef std::future<CreateShardTaskOutcome> CreateShardTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateShardTaskRequest&, const CreateShardTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateShardTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::DatalinkReplicationPrecheckResult> DatalinkReplicationPrecheckOutcome;
			typedef std::future<DatalinkReplicationPrecheckOutcome> DatalinkReplicationPrecheckOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DatalinkReplicationPrecheckRequest&, const DatalinkReplicationPrecheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DatalinkReplicationPrecheckAsyncHandler;
			typedef Outcome<Error, Model::DeleteDrdsDBResult> DeleteDrdsDBOutcome;
			typedef std::future<DeleteDrdsDBOutcome> DeleteDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DeleteDrdsDBRequest&, const DeleteDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteFailedDrdsDBResult> DeleteFailedDrdsDBOutcome;
			typedef std::future<DeleteFailedDrdsDBOutcome> DeleteFailedDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DeleteFailedDrdsDBRequest&, const DeleteFailedDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFailedDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteShardTasksResult> DeleteShardTasksOutcome;
			typedef std::future<DeleteShardTasksOutcome> DeleteShardTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DeleteShardTasksRequest&, const DeleteShardTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShardTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackMenuResult> DescribeBackMenuOutcome;
			typedef std::future<DescribeBackMenuOutcome> DescribeBackMenuOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackMenuRequest&, const DescribeBackMenuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackMenuAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupDbsResult> DescribeBackupDbsOutcome;
			typedef std::future<DescribeBackupDbsOutcome> DescribeBackupDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupDbsRequest&, const DescribeBackupDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupLocalResult> DescribeBackupLocalOutcome;
			typedef std::future<DescribeBackupLocalOutcome> DescribeBackupLocalOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupLocalRequest&, const DescribeBackupLocalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupLocalAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetsResult> DescribeBackupSetsOutcome;
			typedef std::future<DescribeBackupSetsOutcome> DescribeBackupSetsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupSetsRequest&, const DescribeBackupSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTimesResult> DescribeBackupTimesOutcome;
			typedef std::future<DescribeBackupTimesOutcome> DescribeBackupTimesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupTimesRequest&, const DescribeBackupTimesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTimesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBatchEvaluateTaskReportResult> DescribeBatchEvaluateTaskReportOutcome;
			typedef std::future<DescribeBatchEvaluateTaskReportOutcome> DescribeBatchEvaluateTaskReportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBatchEvaluateTaskReportRequest&, const DescribeBatchEvaluateTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchEvaluateTaskReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeBroadcastTablesResult> DescribeBroadcastTablesOutcome;
			typedef std::future<DescribeBroadcastTablesOutcome> DescribeBroadcastTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBroadcastTablesRequest&, const DescribeBroadcastTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBroadcastTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCreateDrdsInstanceStatusResult> DescribeCreateDrdsInstanceStatusOutcome;
			typedef std::future<DescribeCreateDrdsInstanceStatusOutcome> DescribeCreateDrdsInstanceStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeCreateDrdsInstanceStatusRequest&, const DescribeCreateDrdsInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreateDrdsInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomDataExportSrcDstTablesResult> DescribeCustomDataExportSrcDstTablesOutcome;
			typedef std::future<DescribeCustomDataExportSrcDstTablesOutcome> DescribeCustomDataExportSrcDstTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeCustomDataExportSrcDstTablesRequest&, const DescribeCustomDataExportSrcDstTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomDataExportSrcDstTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomDataImportSrcDstTablesResult> DescribeCustomDataImportSrcDstTablesOutcome;
			typedef std::future<DescribeCustomDataImportSrcDstTablesOutcome> DescribeCustomDataImportSrcDstTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeCustomDataImportSrcDstTablesRequest&, const DescribeCustomDataImportSrcDstTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomDataImportSrcDstTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDLTaskResult> DescribeDDLTaskOutcome;
			typedef std::future<DescribeDDLTaskOutcome> DescribeDDLTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDDLTaskRequest&, const DescribeDDLTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDLTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataExportPreCheckResultResult> DescribeDataExportPreCheckResultOutcome;
			typedef std::future<DescribeDataExportPreCheckResultOutcome> DescribeDataExportPreCheckResultOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataExportPreCheckResultRequest&, const DescribeDataExportPreCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataExportPreCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataExportTaskReportResult> DescribeDataExportTaskReportOutcome;
			typedef std::future<DescribeDataExportTaskReportOutcome> DescribeDataExportTaskReportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataExportTaskReportRequest&, const DescribeDataExportTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataExportTaskReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataExportTasksResult> DescribeDataExportTasksOutcome;
			typedef std::future<DescribeDataExportTasksOutcome> DescribeDataExportTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataExportTasksRequest&, const DescribeDataExportTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataExportTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataImportPreCheckResultResult> DescribeDataImportPreCheckResultOutcome;
			typedef std::future<DescribeDataImportPreCheckResultOutcome> DescribeDataImportPreCheckResultOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataImportPreCheckResultRequest&, const DescribeDataImportPreCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataImportPreCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataImportTaskReportResult> DescribeDataImportTaskReportOutcome;
			typedef std::future<DescribeDataImportTaskReportOutcome> DescribeDataImportTaskReportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataImportTaskReportRequest&, const DescribeDataImportTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataImportTaskReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataImportTasksResult> DescribeDataImportTasksOutcome;
			typedef std::future<DescribeDataImportTasksOutcome> DescribeDataImportTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDataImportTasksRequest&, const DescribeDataImportTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataImportTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbInstanceDbsResult> DescribeDbInstanceDbsOutcome;
			typedef std::future<DescribeDbInstanceDbsOutcome> DescribeDbInstanceDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDbInstanceDbsRequest&, const DescribeDbInstanceDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbInstanceDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbInstancesResult> DescribeDbInstancesOutcome;
			typedef std::future<DescribeDbInstancesOutcome> DescribeDbInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDbInstancesRequest&, const DescribeDbInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsComponentsResult> DescribeDrdsComponentsOutcome;
			typedef std::future<DescribeDrdsComponentsOutcome> DescribeDrdsComponentsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsComponentsRequest&, const DescribeDrdsComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsComponentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBResult> DescribeDrdsDBOutcome;
			typedef std::future<DescribeDrdsDBOutcome> DescribeDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBRequest&, const DescribeDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBClusterResult> DescribeDrdsDBClusterOutcome;
			typedef std::future<DescribeDrdsDBClusterOutcome> DescribeDrdsDBClusterOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBClusterRequest&, const DescribeDrdsDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBIpWhiteListResult> DescribeDrdsDBIpWhiteListOutcome;
			typedef std::future<DescribeDrdsDBIpWhiteListOutcome> DescribeDrdsDBIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBIpWhiteListRequest&, const DescribeDrdsDBIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBsResult> DescribeDrdsDBsOutcome;
			typedef std::future<DescribeDrdsDBsOutcome> DescribeDrdsDBsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBsRequest&, const DescribeDrdsDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbInstanceResult> DescribeDrdsDbInstanceOutcome;
			typedef std::future<DescribeDrdsDbInstanceOutcome> DescribeDrdsDbInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbInstanceRequest&, const DescribeDrdsDbInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbInstancesResult> DescribeDrdsDbInstancesOutcome;
			typedef std::future<DescribeDrdsDbInstancesOutcome> DescribeDrdsDbInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbInstancesRequest&, const DescribeDrdsDbInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbRdsNameListResult> DescribeDrdsDbRdsNameListOutcome;
			typedef std::future<DescribeDrdsDbRdsNameListOutcome> DescribeDrdsDbRdsNameListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbRdsNameListRequest&, const DescribeDrdsDbRdsNameListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbRdsNameListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbTasksResult> DescribeDrdsDbTasksOutcome;
			typedef std::future<DescribeDrdsDbTasksOutcome> DescribeDrdsDbTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbTasksRequest&, const DescribeDrdsDbTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbTestLinkResult> DescribeDrdsDbTestLinkOutcome;
			typedef std::future<DescribeDrdsDbTestLinkOutcome> DescribeDrdsDbTestLinkOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbTestLinkRequest&, const DescribeDrdsDbTestLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbTestLinkAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceResult> DescribeDrdsInstanceOutcome;
			typedef std::future<DescribeDrdsInstanceOutcome> DescribeDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceRequest&, const DescribeDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceDbMonitorResult> DescribeDrdsInstanceDbMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceDbMonitorOutcome> DescribeDrdsInstanceDbMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceDbMonitorRequest&, const DescribeDrdsInstanceDbMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceDbMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceLevelTasksResult> DescribeDrdsInstanceLevelTasksOutcome;
			typedef std::future<DescribeDrdsInstanceLevelTasksOutcome> DescribeDrdsInstanceLevelTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceLevelTasksRequest&, const DescribeDrdsInstanceLevelTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceLevelTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceMonitorResult> DescribeDrdsInstanceMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceMonitorOutcome> DescribeDrdsInstanceMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceMonitorRequest&, const DescribeDrdsInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceNetInfoForInnerResult> DescribeDrdsInstanceNetInfoForInnerOutcome;
			typedef std::future<DescribeDrdsInstanceNetInfoForInnerOutcome> DescribeDrdsInstanceNetInfoForInnerOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceNetInfoForInnerRequest&, const DescribeDrdsInstanceNetInfoForInnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceNetInfoForInnerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceVersionResult> DescribeDrdsInstanceVersionOutcome;
			typedef std::future<DescribeDrdsInstanceVersionOutcome> DescribeDrdsInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceVersionRequest&, const DescribeDrdsInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstancesResult> DescribeDrdsInstancesOutcome;
			typedef std::future<DescribeDrdsInstancesOutcome> DescribeDrdsInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstancesRequest&, const DescribeDrdsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsParamsResult> DescribeDrdsParamsOutcome;
			typedef std::future<DescribeDrdsParamsOutcome> DescribeDrdsParamsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsParamsRequest&, const DescribeDrdsParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsParamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsRdsInstancesResult> DescribeDrdsRdsInstancesOutcome;
			typedef std::future<DescribeDrdsRdsInstancesOutcome> DescribeDrdsRdsInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsRdsInstancesRequest&, const DescribeDrdsRdsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsRdsInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsShardingDbsResult> DescribeDrdsShardingDbsOutcome;
			typedef std::future<DescribeDrdsShardingDbsOutcome> DescribeDrdsShardingDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsShardingDbsRequest&, const DescribeDrdsShardingDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsShardingDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsSlowSqlsResult> DescribeDrdsSlowSqlsOutcome;
			typedef std::future<DescribeDrdsSlowSqlsOutcome> DescribeDrdsSlowSqlsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsSlowSqlsRequest&, const DescribeDrdsSlowSqlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsSlowSqlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsSqlAuditStatusResult> DescribeDrdsSqlAuditStatusOutcome;
			typedef std::future<DescribeDrdsSqlAuditStatusOutcome> DescribeDrdsSqlAuditStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsSqlAuditStatusRequest&, const DescribeDrdsSqlAuditStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsSqlAuditStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsTasksResult> DescribeDrdsTasksOutcome;
			typedef std::future<DescribeDrdsTasksOutcome> DescribeDrdsTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsTasksRequest&, const DescribeDrdsTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeEvaluateDataImportDbTopologysResult> DescribeEvaluateDataImportDbTopologysOutcome;
			typedef std::future<DescribeEvaluateDataImportDbTopologysOutcome> DescribeEvaluateDataImportDbTopologysOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeEvaluateDataImportDbTopologysRequest&, const DescribeEvaluateDataImportDbTopologysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEvaluateDataImportDbTopologysAsyncHandler;
			typedef Outcome<Error, Model::DescribeEvaluatePreCheckResultResult> DescribeEvaluatePreCheckResultOutcome;
			typedef std::future<DescribeEvaluatePreCheckResultOutcome> DescribeEvaluatePreCheckResultOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeEvaluatePreCheckResultRequest&, const DescribeEvaluatePreCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEvaluatePreCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeEvaluateTaskReportResult> DescribeEvaluateTaskReportOutcome;
			typedef std::future<DescribeEvaluateTaskReportOutcome> DescribeEvaluateTaskReportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeEvaluateTaskReportRequest&, const DescribeEvaluateTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEvaluateTaskReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeEvaluateTasksResult> DescribeEvaluateTasksOutcome;
			typedef std::future<DescribeEvaluateTasksOutcome> DescribeEvaluateTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeEvaluateTasksRequest&, const DescribeEvaluateTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEvaluateTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpandLogicTableInfoListResult> DescribeExpandLogicTableInfoListOutcome;
			typedef std::future<DescribeExpandLogicTableInfoListOutcome> DescribeExpandLogicTableInfoListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeExpandLogicTableInfoListRequest&, const DescribeExpandLogicTableInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpandLogicTableInfoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeFirstDrdsInstanceByOrderIdResult> DescribeFirstDrdsInstanceByOrderIdOutcome;
			typedef std::future<DescribeFirstDrdsInstanceByOrderIdOutcome> DescribeFirstDrdsInstanceByOrderIdOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeFirstDrdsInstanceByOrderIdRequest&, const DescribeFirstDrdsInstanceByOrderIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirstDrdsInstanceByOrderIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalBroadcastTypeResult> DescribeGlobalBroadcastTypeOutcome;
			typedef std::future<DescribeGlobalBroadcastTypeOutcome> DescribeGlobalBroadcastTypeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeGlobalBroadcastTypeRequest&, const DescribeGlobalBroadcastTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalBroadcastTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiStoreInstanceInfoResult> DescribeHiStoreInstanceInfoOutcome;
			typedef std::future<DescribeHiStoreInstanceInfoOutcome> DescribeHiStoreInstanceInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeHiStoreInstanceInfoRequest&, const DescribeHiStoreInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiStoreInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeHotDbListResult> DescribeHotDbListOutcome;
			typedef std::future<DescribeHotDbListOutcome> DescribeHotDbListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeHotDbListRequest&, const DescribeHotDbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHotDbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstDbLogInfoResult> DescribeInstDbLogInfoOutcome;
			typedef std::future<DescribeInstDbLogInfoOutcome> DescribeInstDbLogInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstDbLogInfoRequest&, const DescribeInstDbLogInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstDbLogInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstDbSlsInfoResult> DescribeInstDbSlsInfoOutcome;
			typedef std::future<DescribeInstDbSlsInfoOutcome> DescribeInstDbSlsInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstDbSlsInfoRequest&, const DescribeInstDbSlsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstDbSlsInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAccountsResult> DescribeInstanceAccountsOutcome;
			typedef std::future<DescribeInstanceAccountsOutcome> DescribeInstanceAccountsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceAccountsRequest&, const DescribeInstanceAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceMenuSwitchResult> DescribeInstanceMenuSwitchOutcome;
			typedef std::future<DescribeInstanceMenuSwitchOutcome> DescribeInstanceMenuSwitchOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceMenuSwitchRequest&, const DescribeInstanceMenuSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMenuSwitchAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSwitchAzoneResult> DescribeInstanceSwitchAzoneOutcome;
			typedef std::future<DescribeInstanceSwitchAzoneOutcome> DescribeInstanceSwitchAzoneOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceSwitchAzoneRequest&, const DescribeInstanceSwitchAzoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSwitchAzoneAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSwitchNetworkResult> DescribeInstanceSwitchNetworkOutcome;
			typedef std::future<DescribeInstanceSwitchNetworkOutcome> DescribeInstanceSwitchNetworkOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceSwitchNetworkRequest&, const DescribeInstanceSwitchNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSwitchNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeMyCatDbListResult> DescribeMyCatDbListOutcome;
			typedef std::future<DescribeMyCatDbListOutcome> DescribeMyCatDbListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeMyCatDbListRequest&, const DescribeMyCatDbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMyCatDbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMyCatReportInfoResult> DescribeMyCatReportInfoOutcome;
			typedef std::future<DescribeMyCatReportInfoOutcome> DescribeMyCatReportInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeMyCatReportInfoRequest&, const DescribeMyCatReportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMyCatReportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribePreCheckResultResult> DescribePreCheckResultOutcome;
			typedef std::future<DescribePreCheckResultOutcome> DescribePreCheckResultOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribePreCheckResultRequest&, const DescribePreCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRDSPerformanceResult> DescribeRDSPerformanceOutcome;
			typedef std::future<DescribeRDSPerformanceOutcome> DescribeRDSPerformanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRDSPerformanceRequest&, const DescribeRDSPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRDSPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsCommodityResult> DescribeRdsCommodityOutcome;
			typedef std::future<DescribeRdsCommodityOutcome> DescribeRdsCommodityOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsCommodityRequest&, const DescribeRdsCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsCommodityAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsDbInfosResult> DescribeRdsDbInfosOutcome;
			typedef std::future<DescribeRdsDbInfosOutcome> DescribeRdsDbInfosOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsDbInfosRequest&, const DescribeRdsDbInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsDbInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsDrdsDBResult> DescribeRdsDrdsDBOutcome;
			typedef std::future<DescribeRdsDrdsDBOutcome> DescribeRdsDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsDrdsDBRequest&, const DescribeRdsDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsInstInfosResult> DescribeRdsInstInfosOutcome;
			typedef std::future<DescribeRdsInstInfosOutcome> DescribeRdsInstInfosOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsInstInfosRequest&, const DescribeRdsInstInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsInstInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsListResult> DescribeRdsListOutcome;
			typedef std::future<DescribeRdsListOutcome> DescribeRdsListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsListRequest&, const DescribeRdsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsPerformanceSummaryResult> DescribeRdsPerformanceSummaryOutcome;
			typedef std::future<DescribeRdsPerformanceSummaryOutcome> DescribeRdsPerformanceSummaryOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsPerformanceSummaryRequest&, const DescribeRdsPerformanceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsPerformanceSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsReadOnlyResult> DescribeRdsReadOnlyOutcome;
			typedef std::future<DescribeRdsReadOnlyOutcome> DescribeRdsReadOnlyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsReadOnlyRequest&, const DescribeRdsReadOnlyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsReadOnlyAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsSuperAccountInstancesResult> DescribeRdsSuperAccountInstancesOutcome;
			typedef std::future<DescribeRdsSuperAccountInstancesOutcome> DescribeRdsSuperAccountInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsSuperAccountInstancesRequest&, const DescribeRdsSuperAccountInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsSuperAccountInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeReadOnlyAccountResult> DescribeReadOnlyAccountOutcome;
			typedef std::future<DescribeReadOnlyAccountOutcome> DescribeReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeReadOnlyAccountRequest&, const DescribeReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecycleBinStatusResult> DescribeRecycleBinStatusOutcome;
			typedef std::future<DescribeRecycleBinStatusOutcome> DescribeRecycleBinStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRecycleBinStatusRequest&, const DescribeRecycleBinStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecycleBinStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecycleBinTablesResult> DescribeRecycleBinTablesOutcome;
			typedef std::future<DescribeRecycleBinTablesOutcome> DescribeRecycleBinTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRecycleBinTablesRequest&, const DescribeRecycleBinTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecycleBinTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreOrderResult> DescribeRestoreOrderOutcome;
			typedef std::future<DescribeRestoreOrderOutcome> DescribeRestoreOrderOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRestoreOrderRequest&, const DescribeRestoreOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardDBsResult> DescribeShardDBsOutcome;
			typedef std::future<DescribeShardDBsOutcome> DescribeShardDBsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardDBsRequest&, const DescribeShardDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardDBsAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardDbConnectionInfoResult> DescribeShardDbConnectionInfoOutcome;
			typedef std::future<DescribeShardDbConnectionInfoOutcome> DescribeShardDbConnectionInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardDbConnectionInfoRequest&, const DescribeShardDbConnectionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardDbConnectionInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardTaskInfoResult> DescribeShardTaskInfoOutcome;
			typedef std::future<DescribeShardTaskInfoOutcome> DescribeShardTaskInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardTaskInfoRequest&, const DescribeShardTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardTaskListResult> DescribeShardTaskListOutcome;
			typedef std::future<DescribeShardTaskListOutcome> DescribeShardTaskListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardTaskListRequest&, const DescribeShardTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardTaskListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlFlashbakTaskResult> DescribeSqlFlashbakTaskOutcome;
			typedef std::future<DescribeSqlFlashbakTaskOutcome> DescribeSqlFlashbakTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeSqlFlashbakTaskRequest&, const DescribeSqlFlashbakTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlFlashbakTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableResult> DescribeTableOutcome;
			typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTableRequest&, const DescribeTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableListByTypeResult> DescribeTableListByTypeOutcome;
			typedef std::future<DescribeTableListByTypeOutcome> DescribeTableListByTypeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTableListByTypeRequest&, const DescribeTableListByTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableListByTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableShardingInfoResult> DescribeTableShardingInfoOutcome;
			typedef std::future<DescribeTableShardingInfoOutcome> DescribeTableShardingInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTableShardingInfoRequest&, const DescribeTableShardingInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableShardingInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnCompatibilitySqlResult> DescribeUnCompatibilitySqlOutcome;
			typedef std::future<DescribeUnCompatibilitySqlOutcome> DescribeUnCompatibilitySqlOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeUnCompatibilitySqlRequest&, const DescribeUnCompatibilitySqlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnCompatibilitySqlAsyncHandler;
			typedef Outcome<Error, Model::DisableSqlAuditResult> DisableSqlAuditOutcome;
			typedef std::future<DisableSqlAuditOutcome> DisableSqlAuditOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DisableSqlAuditRequest&, const DisableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::DrdsApiValidateOrderResult> DrdsApiValidateOrderOutcome;
			typedef std::future<DrdsApiValidateOrderOutcome> DrdsApiValidateOrderOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DrdsApiValidateOrderRequest&, const DrdsApiValidateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DrdsApiValidateOrderAsyncHandler;
			typedef Outcome<Error, Model::DropIndexesResult> DropIndexesOutcome;
			typedef std::future<DropIndexesOutcome> DropIndexesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DropIndexesRequest&, const DropIndexesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropIndexesAsyncHandler;
			typedef Outcome<Error, Model::DropTablesResult> DropTablesOutcome;
			typedef std::future<DropTablesOutcome> DropTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DropTablesRequest&, const DropTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropTablesAsyncHandler;
			typedef Outcome<Error, Model::EnableInstanceResult> EnableInstanceOutcome;
			typedef std::future<EnableInstanceOutcome> EnableInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableInstanceRequest&, const EnableInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInstanceAsyncHandler;
			typedef Outcome<Error, Model::EnableInstanceIpv6AddressResult> EnableInstanceIpv6AddressOutcome;
			typedef std::future<EnableInstanceIpv6AddressOutcome> EnableInstanceIpv6AddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableInstanceIpv6AddressRequest&, const EnableInstanceIpv6AddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInstanceIpv6AddressAsyncHandler;
			typedef Outcome<Error, Model::EnableSqlAuditResult> EnableSqlAuditOutcome;
			typedef std::future<EnableSqlAuditOutcome> EnableSqlAuditOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableSqlAuditRequest&, const EnableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::EnableSqlFlashbackMatchSwitchResult> EnableSqlFlashbackMatchSwitchOutcome;
			typedef std::future<EnableSqlFlashbackMatchSwitchOutcome> EnableSqlFlashbackMatchSwitchOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableSqlFlashbackMatchSwitchRequest&, const EnableSqlFlashbackMatchSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSqlFlashbackMatchSwitchAsyncHandler;
			typedef Outcome<Error, Model::FlashbackRecycleBinTableResult> FlashbackRecycleBinTableOutcome;
			typedef std::future<FlashbackRecycleBinTableOutcome> FlashbackRecycleBinTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::FlashbackRecycleBinTableRequest&, const FlashbackRecycleBinTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlashbackRecycleBinTableAsyncHandler;
			typedef Outcome<Error, Model::GetBatchEvaluateTaskReportResult> GetBatchEvaluateTaskReportOutcome;
			typedef std::future<GetBatchEvaluateTaskReportOutcome> GetBatchEvaluateTaskReportOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::GetBatchEvaluateTaskReportRequest&, const GetBatchEvaluateTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchEvaluateTaskReportAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListUnCompleteTasksResult> ListUnCompleteTasksOutcome;
			typedef std::future<ListUnCompleteTasksOutcome> ListUnCompleteTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ListUnCompleteTasksRequest&, const ListUnCompleteTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUnCompleteTasksAsyncHandler;
			typedef Outcome<Error, Model::ListUserReportsResult> ListUserReportsOutcome;
			typedef std::future<ListUserReportsOutcome> ListUserReportsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ListUserReportsRequest&, const ListUserReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserReportsAsyncHandler;
			typedef Outcome<Error, Model::ListVersionsResult> ListVersionsOutcome;
			typedef std::future<ListVersionsOutcome> ListVersionsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ListVersionsRequest&, const ListVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVersionsAsyncHandler;
			typedef Outcome<Error, Model::ManagePrivateRdsResult> ManagePrivateRdsOutcome;
			typedef std::future<ManagePrivateRdsOutcome> ManagePrivateRdsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ManagePrivateRdsRequest&, const ManagePrivateRdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManagePrivateRdsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPrivilegeResult> ModifyAccountPrivilegeOutcome;
			typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyAccountPrivilegeRequest&, const ModifyAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsDBPasswdResult> ModifyDrdsDBPasswdOutcome;
			typedef std::future<ModifyDrdsDBPasswdOutcome> ModifyDrdsDBPasswdOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsDBPasswdRequest&, const ModifyDrdsDBPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsDBPasswdAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsInstanceDescriptionResult> ModifyDrdsInstanceDescriptionOutcome;
			typedef std::future<ModifyDrdsInstanceDescriptionOutcome> ModifyDrdsInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsInstanceDescriptionRequest&, const ModifyDrdsInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsIpWhiteListResult> ModifyDrdsIpWhiteListOutcome;
			typedef std::future<ModifyDrdsIpWhiteListOutcome> ModifyDrdsIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsIpWhiteListRequest&, const ModifyDrdsIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyFullTableScanResult> ModifyFullTableScanOutcome;
			typedef std::future<ModifyFullTableScanOutcome> ModifyFullTableScanOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyFullTableScanRequest&, const ModifyFullTableScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFullTableScanAsyncHandler;
			typedef Outcome<Error, Model::ModifyPolarDbReadWeightResult> ModifyPolarDbReadWeightOutcome;
			typedef std::future<ModifyPolarDbReadWeightOutcome> ModifyPolarDbReadWeightOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyPolarDbReadWeightRequest&, const ModifyPolarDbReadWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolarDbReadWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyRdsReadWeightResult> ModifyRdsReadWeightOutcome;
			typedef std::future<ModifyRdsReadWeightOutcome> ModifyRdsReadWeightOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyRdsReadWeightRequest&, const ModifyRdsReadWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRdsReadWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyReadOnlyAccountPasswordResult> ModifyReadOnlyAccountPasswordOutcome;
			typedef std::future<ModifyReadOnlyAccountPasswordOutcome> ModifyReadOnlyAccountPasswordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyReadOnlyAccountPasswordRequest&, const ModifyReadOnlyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::MyCatConnectTestResult> MyCatConnectTestOutcome;
			typedef std::future<MyCatConnectTestOutcome> MyCatConnectTestOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::MyCatConnectTestRequest&, const MyCatConnectTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MyCatConnectTestAsyncHandler;
			typedef Outcome<Error, Model::MyCatCustomImportPreCheckResult> MyCatCustomImportPreCheckOutcome;
			typedef std::future<MyCatCustomImportPreCheckOutcome> MyCatCustomImportPreCheckOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::MyCatCustomImportPreCheckRequest&, const MyCatCustomImportPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MyCatCustomImportPreCheckAsyncHandler;
			typedef Outcome<Error, Model::OrderRefundResult> OrderRefundOutcome;
			typedef std::future<OrderRefundOutcome> OrderRefundOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::OrderRefundRequest&, const OrderRefundOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OrderRefundAsyncHandler;
			typedef Outcome<Error, Model::PreCheckModifyTableShardingKeyParamResult> PreCheckModifyTableShardingKeyParamOutcome;
			typedef std::future<PreCheckModifyTableShardingKeyParamOutcome> PreCheckModifyTableShardingKeyParamOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::PreCheckModifyTableShardingKeyParamRequest&, const PreCheckModifyTableShardingKeyParamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreCheckModifyTableShardingKeyParamAsyncHandler;
			typedef Outcome<Error, Model::PrecheckMyCatEvaluateResult> PrecheckMyCatEvaluateOutcome;
			typedef std::future<PrecheckMyCatEvaluateOutcome> PrecheckMyCatEvaluateOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::PrecheckMyCatEvaluateRequest&, const PrecheckMyCatEvaluateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrecheckMyCatEvaluateAsyncHandler;
			typedef Outcome<Error, Model::ProductInfoComplementResult> ProductInfoComplementOutcome;
			typedef std::future<ProductInfoComplementOutcome> ProductInfoComplementOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ProductInfoComplementRequest&, const ProductInfoComplementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProductInfoComplementAsyncHandler;
			typedef Outcome<Error, Model::PutStartBackupResult> PutStartBackupOutcome;
			typedef std::future<PutStartBackupOutcome> PutStartBackupOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::PutStartBackupRequest&, const PutStartBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutStartBackupAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceInfoByConnResult> QueryInstanceInfoByConnOutcome;
			typedef std::future<QueryInstanceInfoByConnOutcome> QueryInstanceInfoByConnOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::QueryInstanceInfoByConnRequest&, const QueryInstanceInfoByConnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceInfoByConnAsyncHandler;
			typedef Outcome<Error, Model::RefreshDrdsAtomUrlResult> RefreshDrdsAtomUrlOutcome;
			typedef std::future<RefreshDrdsAtomUrlOutcome> RefreshDrdsAtomUrlOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RefreshDrdsAtomUrlRequest&, const RefreshDrdsAtomUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDrdsAtomUrlAsyncHandler;
			typedef Outcome<Error, Model::ReleaseHiStoreInstanceResult> ReleaseHiStoreInstanceOutcome;
			typedef std::future<ReleaseHiStoreInstanceOutcome> ReleaseHiStoreInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ReleaseHiStoreInstanceRequest&, const ReleaseHiStoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseHiStoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceInternetAddressResult> ReleaseInstanceInternetAddressOutcome;
			typedef std::future<ReleaseInstanceInternetAddressOutcome> ReleaseInstanceInternetAddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ReleaseInstanceInternetAddressRequest&, const ReleaseInstanceInternetAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceInternetAddressAsyncHandler;
			typedef Outcome<Error, Model::RemoveBackupsSetResult> RemoveBackupsSetOutcome;
			typedef std::future<RemoveBackupsSetOutcome> RemoveBackupsSetOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveBackupsSetRequest&, const RemoveBackupsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackupsSetAsyncHandler;
			typedef Outcome<Error, Model::RemoveDataExportTaskResult> RemoveDataExportTaskOutcome;
			typedef std::future<RemoveDataExportTaskOutcome> RemoveDataExportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDataExportTaskRequest&, const RemoveDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveDataImportTaskResult> RemoveDataImportTaskOutcome;
			typedef std::future<RemoveDataImportTaskOutcome> RemoveDataImportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDataImportTaskRequest&, const RemoveDataImportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDataImportTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsDbResult> RemoveDrdsDbOutcome;
			typedef std::future<RemoveDrdsDbOutcome> RemoveDrdsDbOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsDbRequest&, const RemoveDrdsDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsDbAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsDbFailedRecordResult> RemoveDrdsDbFailedRecordOutcome;
			typedef std::future<RemoveDrdsDbFailedRecordOutcome> RemoveDrdsDbFailedRecordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsDbFailedRecordRequest&, const RemoveDrdsDbFailedRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsDbFailedRecordAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsInstanceResult> RemoveDrdsInstanceOutcome;
			typedef std::future<RemoveDrdsInstanceOutcome> RemoveDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsInstanceRequest&, const RemoveDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsMysqlResult> RemoveDrdsMysqlOutcome;
			typedef std::future<RemoveDrdsMysqlOutcome> RemoveDrdsMysqlOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsMysqlRequest&, const RemoveDrdsMysqlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsMysqlAsyncHandler;
			typedef Outcome<Error, Model::RemoveEvaluateTaskResult> RemoveEvaluateTaskOutcome;
			typedef std::future<RemoveEvaluateTaskOutcome> RemoveEvaluateTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveEvaluateTaskRequest&, const RemoveEvaluateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEvaluateTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveInstanceAccountResult> RemoveInstanceAccountOutcome;
			typedef std::future<RemoveInstanceAccountOutcome> RemoveInstanceAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveInstanceAccountRequest&, const RemoveInstanceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstanceAccountAsyncHandler;
			typedef Outcome<Error, Model::RemoveReadOnlyAccountResult> RemoveReadOnlyAccountOutcome;
			typedef std::future<RemoveReadOnlyAccountOutcome> RemoveReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveReadOnlyAccountRequest&, const RemoveReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::RemoveRecycleBinTableResult> RemoveRecycleBinTableOutcome;
			typedef std::future<RemoveRecycleBinTableOutcome> RemoveRecycleBinTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveRecycleBinTableRequest&, const RemoveRecycleBinTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveRecycleBinTableAsyncHandler;
			typedef Outcome<Error, Model::ResetDrdsToRdsConnectionsResult> ResetDrdsToRdsConnectionsOutcome;
			typedef std::future<ResetDrdsToRdsConnectionsOutcome> ResetDrdsToRdsConnectionsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ResetDrdsToRdsConnectionsRequest&, const ResetDrdsToRdsConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDrdsToRdsConnectionsAsyncHandler;
			typedef Outcome<Error, Model::RestartDrdsInstanceResult> RestartDrdsInstanceOutcome;
			typedef std::future<RestartDrdsInstanceOutcome> RestartDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RestartDrdsInstanceRequest&, const RestartDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::RollbackHiStoreInstanceResult> RollbackHiStoreInstanceOutcome;
			typedef std::future<RollbackHiStoreInstanceOutcome> RollbackHiStoreInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RollbackHiStoreInstanceRequest&, const RollbackHiStoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackHiStoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::RollbackInstanceVersionResult> RollbackInstanceVersionOutcome;
			typedef std::future<RollbackInstanceVersionOutcome> RollbackInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RollbackInstanceVersionRequest&, const RollbackInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::SetBackupLocalResult> SetBackupLocalOutcome;
			typedef std::future<SetBackupLocalOutcome> SetBackupLocalOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetBackupLocalRequest&, const SetBackupLocalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackupLocalAsyncHandler;
			typedef Outcome<Error, Model::SetBackupPolicyResult> SetBackupPolicyOutcome;
			typedef std::future<SetBackupPolicyOutcome> SetBackupPolicyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetBackupPolicyRequest&, const SetBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::SetupBroadcastTablesResult> SetupBroadcastTablesOutcome;
			typedef std::future<SetupBroadcastTablesOutcome> SetupBroadcastTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupBroadcastTablesRequest&, const SetupBroadcastTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupBroadcastTablesAsyncHandler;
			typedef Outcome<Error, Model::SetupDrdsParamsResult> SetupDrdsParamsOutcome;
			typedef std::future<SetupDrdsParamsOutcome> SetupDrdsParamsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupDrdsParamsRequest&, const SetupDrdsParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupDrdsParamsAsyncHandler;
			typedef Outcome<Error, Model::SetupRecycleBinStatusResult> SetupRecycleBinStatusOutcome;
			typedef std::future<SetupRecycleBinStatusOutcome> SetupRecycleBinStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupRecycleBinStatusRequest&, const SetupRecycleBinStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupRecycleBinStatusAsyncHandler;
			typedef Outcome<Error, Model::SetupTableResult> SetupTableOutcome;
			typedef std::future<SetupTableOutcome> SetupTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupTableRequest&, const SetupTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupTableAsyncHandler;
			typedef Outcome<Error, Model::SqlCompatibilityCancelResult> SqlCompatibilityCancelOutcome;
			typedef std::future<SqlCompatibilityCancelOutcome> SqlCompatibilityCancelOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SqlCompatibilityCancelRequest&, const SqlCompatibilityCancelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SqlCompatibilityCancelAsyncHandler;
			typedef Outcome<Error, Model::SqlCompatibilityStartResult> SqlCompatibilityStartOutcome;
			typedef std::future<SqlCompatibilityStartOutcome> SqlCompatibilityStartOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SqlCompatibilityStartRequest&, const SqlCompatibilityStartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SqlCompatibilityStartAsyncHandler;
			typedef Outcome<Error, Model::StartDataImportTaskResult> StartDataImportTaskOutcome;
			typedef std::future<StartDataImportTaskOutcome> StartDataImportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StartDataImportTaskRequest&, const StartDataImportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDataImportTaskAsyncHandler;
			typedef Outcome<Error, Model::StartEvaluateTaskResult> StartEvaluateTaskOutcome;
			typedef std::future<StartEvaluateTaskOutcome> StartEvaluateTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StartEvaluateTaskRequest&, const StartEvaluateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEvaluateTaskAsyncHandler;
			typedef Outcome<Error, Model::StartRestoreResult> StartRestoreOutcome;
			typedef std::future<StartRestoreOutcome> StartRestoreOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StartRestoreRequest&, const StartRestoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRestoreAsyncHandler;
			typedef Outcome<Error, Model::StopDataExportTaskResult> StopDataExportTaskOutcome;
			typedef std::future<StopDataExportTaskOutcome> StopDataExportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StopDataExportTaskRequest&, const StopDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::StopDataImportTaskResult> StopDataImportTaskOutcome;
			typedef std::future<StopDataImportTaskOutcome> StopDataImportTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StopDataImportTaskRequest&, const StopDataImportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDataImportTaskAsyncHandler;
			typedef Outcome<Error, Model::StopEvaluateTaskResult> StopEvaluateTaskOutcome;
			typedef std::future<StopEvaluateTaskOutcome> StopEvaluateTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StopEvaluateTaskRequest&, const StopEvaluateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEvaluateTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitCleanTableShardingKeyModifyResult> SubmitCleanTableShardingKeyModifyOutcome;
			typedef std::future<SubmitCleanTableShardingKeyModifyOutcome> SubmitCleanTableShardingKeyModifyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitCleanTableShardingKeyModifyRequest&, const SubmitCleanTableShardingKeyModifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCleanTableShardingKeyModifyAsyncHandler;
			typedef Outcome<Error, Model::SubmitCleanTaskResult> SubmitCleanTaskOutcome;
			typedef std::future<SubmitCleanTaskOutcome> SubmitCleanTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitCleanTaskRequest&, const SubmitCleanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCleanTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHotExpandPreCheckTaskResult> SubmitHotExpandPreCheckTaskOutcome;
			typedef std::future<SubmitHotExpandPreCheckTaskOutcome> SubmitHotExpandPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitHotExpandPreCheckTaskRequest&, const SubmitHotExpandPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHotExpandPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHotExpandTaskResult> SubmitHotExpandTaskOutcome;
			typedef std::future<SubmitHotExpandTaskOutcome> SubmitHotExpandTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitHotExpandTaskRequest&, const SubmitHotExpandTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHotExpandTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitRollbackShardingKeyModifyResult> SubmitRollbackShardingKeyModifyOutcome;
			typedef std::future<SubmitRollbackShardingKeyModifyOutcome> SubmitRollbackShardingKeyModifyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitRollbackShardingKeyModifyRequest&, const SubmitRollbackShardingKeyModifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitRollbackShardingKeyModifyAsyncHandler;
			typedef Outcome<Error, Model::SubmitRollbackTaskResult> SubmitRollbackTaskOutcome;
			typedef std::future<SubmitRollbackTaskOutcome> SubmitRollbackTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitRollbackTaskRequest&, const SubmitRollbackTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitRollbackTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmoothExpandPreCheckResult> SubmitSmoothExpandPreCheckOutcome;
			typedef std::future<SubmitSmoothExpandPreCheckOutcome> SubmitSmoothExpandPreCheckOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSmoothExpandPreCheckRequest&, const SubmitSmoothExpandPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmoothExpandPreCheckAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmoothExpandPreCheckTaskResult> SubmitSmoothExpandPreCheckTaskOutcome;
			typedef std::future<SubmitSmoothExpandPreCheckTaskOutcome> SubmitSmoothExpandPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSmoothExpandPreCheckTaskRequest&, const SubmitSmoothExpandPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmoothExpandPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmoothExpandTaskResult> SubmitSmoothExpandTaskOutcome;
			typedef std::future<SubmitSmoothExpandTaskOutcome> SubmitSmoothExpandTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSmoothExpandTaskRequest&, const SubmitSmoothExpandTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmoothExpandTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSqlFlashbackTaskResult> SubmitSqlFlashbackTaskOutcome;
			typedef std::future<SubmitSqlFlashbackTaskOutcome> SubmitSqlFlashbackTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSqlFlashbackTaskRequest&, const SubmitSqlFlashbackTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSqlFlashbackTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSwitchTableShardingKeyModifyResult> SubmitSwitchTableShardingKeyModifyOutcome;
			typedef std::future<SubmitSwitchTableShardingKeyModifyOutcome> SubmitSwitchTableShardingKeyModifyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSwitchTableShardingKeyModifyRequest&, const SubmitSwitchTableShardingKeyModifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSwitchTableShardingKeyModifyAsyncHandler;
			typedef Outcome<Error, Model::SubmitSwitchTaskResult> SubmitSwitchTaskOutcome;
			typedef std::future<SubmitSwitchTaskOutcome> SubmitSwitchTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSwitchTaskRequest&, const SubmitSwitchTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSwitchTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitTableShardingKeyModifyResult> SubmitTableShardingKeyModifyOutcome;
			typedef std::future<SubmitTableShardingKeyModifyOutcome> SubmitTableShardingKeyModifyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitTableShardingKeyModifyRequest&, const SubmitTableShardingKeyModifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTableShardingKeyModifyAsyncHandler;
			typedef Outcome<Error, Model::SwitchGlobalBroadcastTypeResult> SwitchGlobalBroadcastTypeOutcome;
			typedef std::future<SwitchGlobalBroadcastTypeOutcome> SwitchGlobalBroadcastTypeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SwitchGlobalBroadcastTypeRequest&, const SwitchGlobalBroadcastTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchGlobalBroadcastTypeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceNetworkResult> UpdateInstanceNetworkOutcome;
			typedef std::future<UpdateInstanceNetworkOutcome> UpdateInstanceNetworkOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpdateInstanceNetworkRequest&, const UpdateInstanceNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceNetworkAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceGroupAttributeResult> UpdateResourceGroupAttributeOutcome;
			typedef std::future<UpdateResourceGroupAttributeOutcome> UpdateResourceGroupAttributeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpdateResourceGroupAttributeRequest&, const UpdateResourceGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeHiStoreInstanceResult> UpgradeHiStoreInstanceOutcome;
			typedef std::future<UpgradeHiStoreInstanceOutcome> UpgradeHiStoreInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpgradeHiStoreInstanceRequest&, const UpgradeHiStoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeHiStoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceVersionResult> UpgradeInstanceVersionOutcome;
			typedef std::future<UpgradeInstanceVersionOutcome> UpgradeInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpgradeInstanceVersionRequest&, const UpgradeInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::ValidateShardTaskResult> ValidateShardTaskOutcome;
			typedef std::future<ValidateShardTaskOutcome> ValidateShardTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ValidateShardTaskRequest&, const ValidateShardTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateShardTaskAsyncHandler;

			DrdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DrdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DrdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DrdsClient();
			AlterTableOutcome alterTable(const Model::AlterTableRequest &request)const;
			void alterTableAsync(const Model::AlterTableRequest& request, const AlterTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlterTableOutcomeCallable alterTableCallable(const Model::AlterTableRequest& request) const;
			AsyncTaskCancelOutcome asyncTaskCancel(const Model::AsyncTaskCancelRequest &request)const;
			void asyncTaskCancelAsync(const Model::AsyncTaskCancelRequest& request, const AsyncTaskCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsyncTaskCancelOutcomeCallable asyncTaskCancelCallable(const Model::AsyncTaskCancelRequest& request) const;
			CancelDDLTaskOutcome cancelDDLTask(const Model::CancelDDLTaskRequest &request)const;
			void cancelDDLTaskAsync(const Model::CancelDDLTaskRequest& request, const CancelDDLTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDDLTaskOutcomeCallable cancelDDLTaskCallable(const Model::CancelDDLTaskRequest& request) const;
			CancleDDLTaskOutcome cancleDDLTask(const Model::CancleDDLTaskRequest &request)const;
			void cancleDDLTaskAsync(const Model::CancleDDLTaskRequest& request, const CancleDDLTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancleDDLTaskOutcomeCallable cancleDDLTaskCallable(const Model::CancleDDLTaskRequest& request) const;
			ChangeAccountPasswordOutcome changeAccountPassword(const Model::ChangeAccountPasswordRequest &request)const;
			void changeAccountPasswordAsync(const Model::ChangeAccountPasswordRequest& request, const ChangeAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeAccountPasswordOutcomeCallable changeAccountPasswordCallable(const Model::ChangeAccountPasswordRequest& request) const;
			CheckConnectivityOutcome checkConnectivity(const Model::CheckConnectivityRequest &request)const;
			void checkConnectivityAsync(const Model::CheckConnectivityRequest& request, const CheckConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckConnectivityOutcomeCallable checkConnectivityCallable(const Model::CheckConnectivityRequest& request) const;
			CheckDrdsDbNameOutcome checkDrdsDbName(const Model::CheckDrdsDbNameRequest &request)const;
			void checkDrdsDbNameAsync(const Model::CheckDrdsDbNameRequest& request, const CheckDrdsDbNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDrdsDbNameOutcomeCallable checkDrdsDbNameCallable(const Model::CheckDrdsDbNameRequest& request) const;
			CheckExpandStatusOutcome checkExpandStatus(const Model::CheckExpandStatusRequest &request)const;
			void checkExpandStatusAsync(const Model::CheckExpandStatusRequest& request, const CheckExpandStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckExpandStatusOutcomeCallable checkExpandStatusCallable(const Model::CheckExpandStatusRequest& request) const;
			CheckNewTableNameValidOutcome checkNewTableNameValid(const Model::CheckNewTableNameValidRequest &request)const;
			void checkNewTableNameValidAsync(const Model::CheckNewTableNameValidRequest& request, const CheckNewTableNameValidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckNewTableNameValidOutcomeCallable checkNewTableNameValidCallable(const Model::CheckNewTableNameValidRequest& request) const;
			CheckSqlAuditEnableStatusOutcome checkSqlAuditEnableStatus(const Model::CheckSqlAuditEnableStatusRequest &request)const;
			void checkSqlAuditEnableStatusAsync(const Model::CheckSqlAuditEnableStatusRequest& request, const CheckSqlAuditEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSqlAuditEnableStatusOutcomeCallable checkSqlAuditEnableStatusCallable(const Model::CheckSqlAuditEnableStatusRequest& request) const;
			CreateCustomDataExportPreCheckTaskOutcome createCustomDataExportPreCheckTask(const Model::CreateCustomDataExportPreCheckTaskRequest &request)const;
			void createCustomDataExportPreCheckTaskAsync(const Model::CreateCustomDataExportPreCheckTaskRequest& request, const CreateCustomDataExportPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomDataExportPreCheckTaskOutcomeCallable createCustomDataExportPreCheckTaskCallable(const Model::CreateCustomDataExportPreCheckTaskRequest& request) const;
			CreateCustomDataExportTaskOutcome createCustomDataExportTask(const Model::CreateCustomDataExportTaskRequest &request)const;
			void createCustomDataExportTaskAsync(const Model::CreateCustomDataExportTaskRequest& request, const CreateCustomDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomDataExportTaskOutcomeCallable createCustomDataExportTaskCallable(const Model::CreateCustomDataExportTaskRequest& request) const;
			CreateCustomDataImportPreCheckTaskOutcome createCustomDataImportPreCheckTask(const Model::CreateCustomDataImportPreCheckTaskRequest &request)const;
			void createCustomDataImportPreCheckTaskAsync(const Model::CreateCustomDataImportPreCheckTaskRequest& request, const CreateCustomDataImportPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomDataImportPreCheckTaskOutcomeCallable createCustomDataImportPreCheckTaskCallable(const Model::CreateCustomDataImportPreCheckTaskRequest& request) const;
			CreateCustomDataImportTaskOutcome createCustomDataImportTask(const Model::CreateCustomDataImportTaskRequest &request)const;
			void createCustomDataImportTaskAsync(const Model::CreateCustomDataImportTaskRequest& request, const CreateCustomDataImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomDataImportTaskOutcomeCallable createCustomDataImportTaskCallable(const Model::CreateCustomDataImportTaskRequest& request) const;
			CreateDrdsAccountOutcome createDrdsAccount(const Model::CreateDrdsAccountRequest &request)const;
			void createDrdsAccountAsync(const Model::CreateDrdsAccountRequest& request, const CreateDrdsAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsAccountOutcomeCallable createDrdsAccountCallable(const Model::CreateDrdsAccountRequest& request) const;
			CreateDrdsDBOutcome createDrdsDB(const Model::CreateDrdsDBRequest &request)const;
			void createDrdsDBAsync(const Model::CreateDrdsDBRequest& request, const CreateDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsDBOutcomeCallable createDrdsDBCallable(const Model::CreateDrdsDBRequest& request) const;
			CreateDrdsInstanceOutcome createDrdsInstance(const Model::CreateDrdsInstanceRequest &request)const;
			void createDrdsInstanceAsync(const Model::CreateDrdsInstanceRequest& request, const CreateDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsInstanceOutcomeCallable createDrdsInstanceCallable(const Model::CreateDrdsInstanceRequest& request) const;
			CreateEvaluateDataImportPreCheckTaskOutcome createEvaluateDataImportPreCheckTask(const Model::CreateEvaluateDataImportPreCheckTaskRequest &request)const;
			void createEvaluateDataImportPreCheckTaskAsync(const Model::CreateEvaluateDataImportPreCheckTaskRequest& request, const CreateEvaluateDataImportPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluateDataImportPreCheckTaskOutcomeCallable createEvaluateDataImportPreCheckTaskCallable(const Model::CreateEvaluateDataImportPreCheckTaskRequest& request) const;
			CreateEvaluateDataImportTaskOutcome createEvaluateDataImportTask(const Model::CreateEvaluateDataImportTaskRequest &request)const;
			void createEvaluateDataImportTaskAsync(const Model::CreateEvaluateDataImportTaskRequest& request, const CreateEvaluateDataImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluateDataImportTaskOutcomeCallable createEvaluateDataImportTaskCallable(const Model::CreateEvaluateDataImportTaskRequest& request) const;
			CreateEvaluatePreCheckTaskOutcome createEvaluatePreCheckTask(const Model::CreateEvaluatePreCheckTaskRequest &request)const;
			void createEvaluatePreCheckTaskAsync(const Model::CreateEvaluatePreCheckTaskRequest& request, const CreateEvaluatePreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluatePreCheckTaskOutcomeCallable createEvaluatePreCheckTaskCallable(const Model::CreateEvaluatePreCheckTaskRequest& request) const;
			CreateEvaluateTaskOutcome createEvaluateTask(const Model::CreateEvaluateTaskRequest &request)const;
			void createEvaluateTaskAsync(const Model::CreateEvaluateTaskRequest& request, const CreateEvaluateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluateTaskOutcomeCallable createEvaluateTaskCallable(const Model::CreateEvaluateTaskRequest& request) const;
			CreateIndexOutcome createIndex(const Model::CreateIndexRequest &request)const;
			void createIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIndexOutcomeCallable createIndexCallable(const Model::CreateIndexRequest& request) const;
			CreateInstanceAccountOutcome createInstanceAccount(const Model::CreateInstanceAccountRequest &request)const;
			void createInstanceAccountAsync(const Model::CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceAccountOutcomeCallable createInstanceAccountCallable(const Model::CreateInstanceAccountRequest& request) const;
			CreateInstanceInternetAddressOutcome createInstanceInternetAddress(const Model::CreateInstanceInternetAddressRequest &request)const;
			void createInstanceInternetAddressAsync(const Model::CreateInstanceInternetAddressRequest& request, const CreateInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceInternetAddressOutcomeCallable createInstanceInternetAddressCallable(const Model::CreateInstanceInternetAddressRequest& request) const;
			CreateMyCatCustomImportOutcome createMyCatCustomImport(const Model::CreateMyCatCustomImportRequest &request)const;
			void createMyCatCustomImportAsync(const Model::CreateMyCatCustomImportRequest& request, const CreateMyCatCustomImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMyCatCustomImportOutcomeCallable createMyCatCustomImportCallable(const Model::CreateMyCatCustomImportRequest& request) const;
			CreateMyCatEvaluateOutcome createMyCatEvaluate(const Model::CreateMyCatEvaluateRequest &request)const;
			void createMyCatEvaluateAsync(const Model::CreateMyCatEvaluateRequest& request, const CreateMyCatEvaluateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMyCatEvaluateOutcomeCallable createMyCatEvaluateCallable(const Model::CreateMyCatEvaluateRequest& request) const;
			CreateOrderForRdsOutcome createOrderForRds(const Model::CreateOrderForRdsRequest &request)const;
			void createOrderForRdsAsync(const Model::CreateOrderForRdsRequest& request, const CreateOrderForRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderForRdsOutcomeCallable createOrderForRdsCallable(const Model::CreateOrderForRdsRequest& request) const;
			CreateReadOnlyAccountOutcome createReadOnlyAccount(const Model::CreateReadOnlyAccountRequest &request)const;
			void createReadOnlyAccountAsync(const Model::CreateReadOnlyAccountRequest& request, const CreateReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReadOnlyAccountOutcomeCallable createReadOnlyAccountCallable(const Model::CreateReadOnlyAccountRequest& request) const;
			CreateShardTaskOutcome createShardTask(const Model::CreateShardTaskRequest &request)const;
			void createShardTaskAsync(const Model::CreateShardTaskRequest& request, const CreateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateShardTaskOutcomeCallable createShardTaskCallable(const Model::CreateShardTaskRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			DatalinkReplicationPrecheckOutcome datalinkReplicationPrecheck(const Model::DatalinkReplicationPrecheckRequest &request)const;
			void datalinkReplicationPrecheckAsync(const Model::DatalinkReplicationPrecheckRequest& request, const DatalinkReplicationPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DatalinkReplicationPrecheckOutcomeCallable datalinkReplicationPrecheckCallable(const Model::DatalinkReplicationPrecheckRequest& request) const;
			DeleteDrdsDBOutcome deleteDrdsDB(const Model::DeleteDrdsDBRequest &request)const;
			void deleteDrdsDBAsync(const Model::DeleteDrdsDBRequest& request, const DeleteDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDrdsDBOutcomeCallable deleteDrdsDBCallable(const Model::DeleteDrdsDBRequest& request) const;
			DeleteFailedDrdsDBOutcome deleteFailedDrdsDB(const Model::DeleteFailedDrdsDBRequest &request)const;
			void deleteFailedDrdsDBAsync(const Model::DeleteFailedDrdsDBRequest& request, const DeleteFailedDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFailedDrdsDBOutcomeCallable deleteFailedDrdsDBCallable(const Model::DeleteFailedDrdsDBRequest& request) const;
			DeleteShardTasksOutcome deleteShardTasks(const Model::DeleteShardTasksRequest &request)const;
			void deleteShardTasksAsync(const Model::DeleteShardTasksRequest& request, const DeleteShardTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteShardTasksOutcomeCallable deleteShardTasksCallable(const Model::DeleteShardTasksRequest& request) const;
			DescribeBackMenuOutcome describeBackMenu(const Model::DescribeBackMenuRequest &request)const;
			void describeBackMenuAsync(const Model::DescribeBackMenuRequest& request, const DescribeBackMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackMenuOutcomeCallable describeBackMenuCallable(const Model::DescribeBackMenuRequest& request) const;
			DescribeBackupDbsOutcome describeBackupDbs(const Model::DescribeBackupDbsRequest &request)const;
			void describeBackupDbsAsync(const Model::DescribeBackupDbsRequest& request, const DescribeBackupDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupDbsOutcomeCallable describeBackupDbsCallable(const Model::DescribeBackupDbsRequest& request) const;
			DescribeBackupLocalOutcome describeBackupLocal(const Model::DescribeBackupLocalRequest &request)const;
			void describeBackupLocalAsync(const Model::DescribeBackupLocalRequest& request, const DescribeBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupLocalOutcomeCallable describeBackupLocalCallable(const Model::DescribeBackupLocalRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupSetsOutcome describeBackupSets(const Model::DescribeBackupSetsRequest &request)const;
			void describeBackupSetsAsync(const Model::DescribeBackupSetsRequest& request, const DescribeBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetsOutcomeCallable describeBackupSetsCallable(const Model::DescribeBackupSetsRequest& request) const;
			DescribeBackupTimesOutcome describeBackupTimes(const Model::DescribeBackupTimesRequest &request)const;
			void describeBackupTimesAsync(const Model::DescribeBackupTimesRequest& request, const DescribeBackupTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTimesOutcomeCallable describeBackupTimesCallable(const Model::DescribeBackupTimesRequest& request) const;
			DescribeBatchEvaluateTaskReportOutcome describeBatchEvaluateTaskReport(const Model::DescribeBatchEvaluateTaskReportRequest &request)const;
			void describeBatchEvaluateTaskReportAsync(const Model::DescribeBatchEvaluateTaskReportRequest& request, const DescribeBatchEvaluateTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBatchEvaluateTaskReportOutcomeCallable describeBatchEvaluateTaskReportCallable(const Model::DescribeBatchEvaluateTaskReportRequest& request) const;
			DescribeBroadcastTablesOutcome describeBroadcastTables(const Model::DescribeBroadcastTablesRequest &request)const;
			void describeBroadcastTablesAsync(const Model::DescribeBroadcastTablesRequest& request, const DescribeBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBroadcastTablesOutcomeCallable describeBroadcastTablesCallable(const Model::DescribeBroadcastTablesRequest& request) const;
			DescribeCreateDrdsInstanceStatusOutcome describeCreateDrdsInstanceStatus(const Model::DescribeCreateDrdsInstanceStatusRequest &request)const;
			void describeCreateDrdsInstanceStatusAsync(const Model::DescribeCreateDrdsInstanceStatusRequest& request, const DescribeCreateDrdsInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCreateDrdsInstanceStatusOutcomeCallable describeCreateDrdsInstanceStatusCallable(const Model::DescribeCreateDrdsInstanceStatusRequest& request) const;
			DescribeCustomDataExportSrcDstTablesOutcome describeCustomDataExportSrcDstTables(const Model::DescribeCustomDataExportSrcDstTablesRequest &request)const;
			void describeCustomDataExportSrcDstTablesAsync(const Model::DescribeCustomDataExportSrcDstTablesRequest& request, const DescribeCustomDataExportSrcDstTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomDataExportSrcDstTablesOutcomeCallable describeCustomDataExportSrcDstTablesCallable(const Model::DescribeCustomDataExportSrcDstTablesRequest& request) const;
			DescribeCustomDataImportSrcDstTablesOutcome describeCustomDataImportSrcDstTables(const Model::DescribeCustomDataImportSrcDstTablesRequest &request)const;
			void describeCustomDataImportSrcDstTablesAsync(const Model::DescribeCustomDataImportSrcDstTablesRequest& request, const DescribeCustomDataImportSrcDstTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomDataImportSrcDstTablesOutcomeCallable describeCustomDataImportSrcDstTablesCallable(const Model::DescribeCustomDataImportSrcDstTablesRequest& request) const;
			DescribeDDLTaskOutcome describeDDLTask(const Model::DescribeDDLTaskRequest &request)const;
			void describeDDLTaskAsync(const Model::DescribeDDLTaskRequest& request, const DescribeDDLTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDLTaskOutcomeCallable describeDDLTaskCallable(const Model::DescribeDDLTaskRequest& request) const;
			DescribeDataExportPreCheckResultOutcome describeDataExportPreCheckResult(const Model::DescribeDataExportPreCheckResultRequest &request)const;
			void describeDataExportPreCheckResultAsync(const Model::DescribeDataExportPreCheckResultRequest& request, const DescribeDataExportPreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataExportPreCheckResultOutcomeCallable describeDataExportPreCheckResultCallable(const Model::DescribeDataExportPreCheckResultRequest& request) const;
			DescribeDataExportTaskReportOutcome describeDataExportTaskReport(const Model::DescribeDataExportTaskReportRequest &request)const;
			void describeDataExportTaskReportAsync(const Model::DescribeDataExportTaskReportRequest& request, const DescribeDataExportTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataExportTaskReportOutcomeCallable describeDataExportTaskReportCallable(const Model::DescribeDataExportTaskReportRequest& request) const;
			DescribeDataExportTasksOutcome describeDataExportTasks(const Model::DescribeDataExportTasksRequest &request)const;
			void describeDataExportTasksAsync(const Model::DescribeDataExportTasksRequest& request, const DescribeDataExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataExportTasksOutcomeCallable describeDataExportTasksCallable(const Model::DescribeDataExportTasksRequest& request) const;
			DescribeDataImportPreCheckResultOutcome describeDataImportPreCheckResult(const Model::DescribeDataImportPreCheckResultRequest &request)const;
			void describeDataImportPreCheckResultAsync(const Model::DescribeDataImportPreCheckResultRequest& request, const DescribeDataImportPreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataImportPreCheckResultOutcomeCallable describeDataImportPreCheckResultCallable(const Model::DescribeDataImportPreCheckResultRequest& request) const;
			DescribeDataImportTaskReportOutcome describeDataImportTaskReport(const Model::DescribeDataImportTaskReportRequest &request)const;
			void describeDataImportTaskReportAsync(const Model::DescribeDataImportTaskReportRequest& request, const DescribeDataImportTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataImportTaskReportOutcomeCallable describeDataImportTaskReportCallable(const Model::DescribeDataImportTaskReportRequest& request) const;
			DescribeDataImportTasksOutcome describeDataImportTasks(const Model::DescribeDataImportTasksRequest &request)const;
			void describeDataImportTasksAsync(const Model::DescribeDataImportTasksRequest& request, const DescribeDataImportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataImportTasksOutcomeCallable describeDataImportTasksCallable(const Model::DescribeDataImportTasksRequest& request) const;
			DescribeDbInstanceDbsOutcome describeDbInstanceDbs(const Model::DescribeDbInstanceDbsRequest &request)const;
			void describeDbInstanceDbsAsync(const Model::DescribeDbInstanceDbsRequest& request, const DescribeDbInstanceDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbInstanceDbsOutcomeCallable describeDbInstanceDbsCallable(const Model::DescribeDbInstanceDbsRequest& request) const;
			DescribeDbInstancesOutcome describeDbInstances(const Model::DescribeDbInstancesRequest &request)const;
			void describeDbInstancesAsync(const Model::DescribeDbInstancesRequest& request, const DescribeDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbInstancesOutcomeCallable describeDbInstancesCallable(const Model::DescribeDbInstancesRequest& request) const;
			DescribeDrdsComponentsOutcome describeDrdsComponents(const Model::DescribeDrdsComponentsRequest &request)const;
			void describeDrdsComponentsAsync(const Model::DescribeDrdsComponentsRequest& request, const DescribeDrdsComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsComponentsOutcomeCallable describeDrdsComponentsCallable(const Model::DescribeDrdsComponentsRequest& request) const;
			DescribeDrdsDBOutcome describeDrdsDB(const Model::DescribeDrdsDBRequest &request)const;
			void describeDrdsDBAsync(const Model::DescribeDrdsDBRequest& request, const DescribeDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBOutcomeCallable describeDrdsDBCallable(const Model::DescribeDrdsDBRequest& request) const;
			DescribeDrdsDBClusterOutcome describeDrdsDBCluster(const Model::DescribeDrdsDBClusterRequest &request)const;
			void describeDrdsDBClusterAsync(const Model::DescribeDrdsDBClusterRequest& request, const DescribeDrdsDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBClusterOutcomeCallable describeDrdsDBClusterCallable(const Model::DescribeDrdsDBClusterRequest& request) const;
			DescribeDrdsDBIpWhiteListOutcome describeDrdsDBIpWhiteList(const Model::DescribeDrdsDBIpWhiteListRequest &request)const;
			void describeDrdsDBIpWhiteListAsync(const Model::DescribeDrdsDBIpWhiteListRequest& request, const DescribeDrdsDBIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBIpWhiteListOutcomeCallable describeDrdsDBIpWhiteListCallable(const Model::DescribeDrdsDBIpWhiteListRequest& request) const;
			DescribeDrdsDBsOutcome describeDrdsDBs(const Model::DescribeDrdsDBsRequest &request)const;
			void describeDrdsDBsAsync(const Model::DescribeDrdsDBsRequest& request, const DescribeDrdsDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBsOutcomeCallable describeDrdsDBsCallable(const Model::DescribeDrdsDBsRequest& request) const;
			DescribeDrdsDbInstanceOutcome describeDrdsDbInstance(const Model::DescribeDrdsDbInstanceRequest &request)const;
			void describeDrdsDbInstanceAsync(const Model::DescribeDrdsDbInstanceRequest& request, const DescribeDrdsDbInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbInstanceOutcomeCallable describeDrdsDbInstanceCallable(const Model::DescribeDrdsDbInstanceRequest& request) const;
			DescribeDrdsDbInstancesOutcome describeDrdsDbInstances(const Model::DescribeDrdsDbInstancesRequest &request)const;
			void describeDrdsDbInstancesAsync(const Model::DescribeDrdsDbInstancesRequest& request, const DescribeDrdsDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbInstancesOutcomeCallable describeDrdsDbInstancesCallable(const Model::DescribeDrdsDbInstancesRequest& request) const;
			DescribeDrdsDbRdsNameListOutcome describeDrdsDbRdsNameList(const Model::DescribeDrdsDbRdsNameListRequest &request)const;
			void describeDrdsDbRdsNameListAsync(const Model::DescribeDrdsDbRdsNameListRequest& request, const DescribeDrdsDbRdsNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbRdsNameListOutcomeCallable describeDrdsDbRdsNameListCallable(const Model::DescribeDrdsDbRdsNameListRequest& request) const;
			DescribeDrdsDbTasksOutcome describeDrdsDbTasks(const Model::DescribeDrdsDbTasksRequest &request)const;
			void describeDrdsDbTasksAsync(const Model::DescribeDrdsDbTasksRequest& request, const DescribeDrdsDbTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbTasksOutcomeCallable describeDrdsDbTasksCallable(const Model::DescribeDrdsDbTasksRequest& request) const;
			DescribeDrdsDbTestLinkOutcome describeDrdsDbTestLink(const Model::DescribeDrdsDbTestLinkRequest &request)const;
			void describeDrdsDbTestLinkAsync(const Model::DescribeDrdsDbTestLinkRequest& request, const DescribeDrdsDbTestLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbTestLinkOutcomeCallable describeDrdsDbTestLinkCallable(const Model::DescribeDrdsDbTestLinkRequest& request) const;
			DescribeDrdsInstanceOutcome describeDrdsInstance(const Model::DescribeDrdsInstanceRequest &request)const;
			void describeDrdsInstanceAsync(const Model::DescribeDrdsInstanceRequest& request, const DescribeDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceOutcomeCallable describeDrdsInstanceCallable(const Model::DescribeDrdsInstanceRequest& request) const;
			DescribeDrdsInstanceDbMonitorOutcome describeDrdsInstanceDbMonitor(const Model::DescribeDrdsInstanceDbMonitorRequest &request)const;
			void describeDrdsInstanceDbMonitorAsync(const Model::DescribeDrdsInstanceDbMonitorRequest& request, const DescribeDrdsInstanceDbMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceDbMonitorOutcomeCallable describeDrdsInstanceDbMonitorCallable(const Model::DescribeDrdsInstanceDbMonitorRequest& request) const;
			DescribeDrdsInstanceLevelTasksOutcome describeDrdsInstanceLevelTasks(const Model::DescribeDrdsInstanceLevelTasksRequest &request)const;
			void describeDrdsInstanceLevelTasksAsync(const Model::DescribeDrdsInstanceLevelTasksRequest& request, const DescribeDrdsInstanceLevelTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceLevelTasksOutcomeCallable describeDrdsInstanceLevelTasksCallable(const Model::DescribeDrdsInstanceLevelTasksRequest& request) const;
			DescribeDrdsInstanceMonitorOutcome describeDrdsInstanceMonitor(const Model::DescribeDrdsInstanceMonitorRequest &request)const;
			void describeDrdsInstanceMonitorAsync(const Model::DescribeDrdsInstanceMonitorRequest& request, const DescribeDrdsInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceMonitorOutcomeCallable describeDrdsInstanceMonitorCallable(const Model::DescribeDrdsInstanceMonitorRequest& request) const;
			DescribeDrdsInstanceNetInfoForInnerOutcome describeDrdsInstanceNetInfoForInner(const Model::DescribeDrdsInstanceNetInfoForInnerRequest &request)const;
			void describeDrdsInstanceNetInfoForInnerAsync(const Model::DescribeDrdsInstanceNetInfoForInnerRequest& request, const DescribeDrdsInstanceNetInfoForInnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceNetInfoForInnerOutcomeCallable describeDrdsInstanceNetInfoForInnerCallable(const Model::DescribeDrdsInstanceNetInfoForInnerRequest& request) const;
			DescribeDrdsInstanceVersionOutcome describeDrdsInstanceVersion(const Model::DescribeDrdsInstanceVersionRequest &request)const;
			void describeDrdsInstanceVersionAsync(const Model::DescribeDrdsInstanceVersionRequest& request, const DescribeDrdsInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceVersionOutcomeCallable describeDrdsInstanceVersionCallable(const Model::DescribeDrdsInstanceVersionRequest& request) const;
			DescribeDrdsInstancesOutcome describeDrdsInstances(const Model::DescribeDrdsInstancesRequest &request)const;
			void describeDrdsInstancesAsync(const Model::DescribeDrdsInstancesRequest& request, const DescribeDrdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstancesOutcomeCallable describeDrdsInstancesCallable(const Model::DescribeDrdsInstancesRequest& request) const;
			DescribeDrdsParamsOutcome describeDrdsParams(const Model::DescribeDrdsParamsRequest &request)const;
			void describeDrdsParamsAsync(const Model::DescribeDrdsParamsRequest& request, const DescribeDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsParamsOutcomeCallable describeDrdsParamsCallable(const Model::DescribeDrdsParamsRequest& request) const;
			DescribeDrdsRdsInstancesOutcome describeDrdsRdsInstances(const Model::DescribeDrdsRdsInstancesRequest &request)const;
			void describeDrdsRdsInstancesAsync(const Model::DescribeDrdsRdsInstancesRequest& request, const DescribeDrdsRdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsRdsInstancesOutcomeCallable describeDrdsRdsInstancesCallable(const Model::DescribeDrdsRdsInstancesRequest& request) const;
			DescribeDrdsShardingDbsOutcome describeDrdsShardingDbs(const Model::DescribeDrdsShardingDbsRequest &request)const;
			void describeDrdsShardingDbsAsync(const Model::DescribeDrdsShardingDbsRequest& request, const DescribeDrdsShardingDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsShardingDbsOutcomeCallable describeDrdsShardingDbsCallable(const Model::DescribeDrdsShardingDbsRequest& request) const;
			DescribeDrdsSlowSqlsOutcome describeDrdsSlowSqls(const Model::DescribeDrdsSlowSqlsRequest &request)const;
			void describeDrdsSlowSqlsAsync(const Model::DescribeDrdsSlowSqlsRequest& request, const DescribeDrdsSlowSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsSlowSqlsOutcomeCallable describeDrdsSlowSqlsCallable(const Model::DescribeDrdsSlowSqlsRequest& request) const;
			DescribeDrdsSqlAuditStatusOutcome describeDrdsSqlAuditStatus(const Model::DescribeDrdsSqlAuditStatusRequest &request)const;
			void describeDrdsSqlAuditStatusAsync(const Model::DescribeDrdsSqlAuditStatusRequest& request, const DescribeDrdsSqlAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsSqlAuditStatusOutcomeCallable describeDrdsSqlAuditStatusCallable(const Model::DescribeDrdsSqlAuditStatusRequest& request) const;
			DescribeDrdsTasksOutcome describeDrdsTasks(const Model::DescribeDrdsTasksRequest &request)const;
			void describeDrdsTasksAsync(const Model::DescribeDrdsTasksRequest& request, const DescribeDrdsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsTasksOutcomeCallable describeDrdsTasksCallable(const Model::DescribeDrdsTasksRequest& request) const;
			DescribeEvaluateDataImportDbTopologysOutcome describeEvaluateDataImportDbTopologys(const Model::DescribeEvaluateDataImportDbTopologysRequest &request)const;
			void describeEvaluateDataImportDbTopologysAsync(const Model::DescribeEvaluateDataImportDbTopologysRequest& request, const DescribeEvaluateDataImportDbTopologysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEvaluateDataImportDbTopologysOutcomeCallable describeEvaluateDataImportDbTopologysCallable(const Model::DescribeEvaluateDataImportDbTopologysRequest& request) const;
			DescribeEvaluatePreCheckResultOutcome describeEvaluatePreCheckResult(const Model::DescribeEvaluatePreCheckResultRequest &request)const;
			void describeEvaluatePreCheckResultAsync(const Model::DescribeEvaluatePreCheckResultRequest& request, const DescribeEvaluatePreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEvaluatePreCheckResultOutcomeCallable describeEvaluatePreCheckResultCallable(const Model::DescribeEvaluatePreCheckResultRequest& request) const;
			DescribeEvaluateTaskReportOutcome describeEvaluateTaskReport(const Model::DescribeEvaluateTaskReportRequest &request)const;
			void describeEvaluateTaskReportAsync(const Model::DescribeEvaluateTaskReportRequest& request, const DescribeEvaluateTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEvaluateTaskReportOutcomeCallable describeEvaluateTaskReportCallable(const Model::DescribeEvaluateTaskReportRequest& request) const;
			DescribeEvaluateTasksOutcome describeEvaluateTasks(const Model::DescribeEvaluateTasksRequest &request)const;
			void describeEvaluateTasksAsync(const Model::DescribeEvaluateTasksRequest& request, const DescribeEvaluateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEvaluateTasksOutcomeCallable describeEvaluateTasksCallable(const Model::DescribeEvaluateTasksRequest& request) const;
			DescribeExpandLogicTableInfoListOutcome describeExpandLogicTableInfoList(const Model::DescribeExpandLogicTableInfoListRequest &request)const;
			void describeExpandLogicTableInfoListAsync(const Model::DescribeExpandLogicTableInfoListRequest& request, const DescribeExpandLogicTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpandLogicTableInfoListOutcomeCallable describeExpandLogicTableInfoListCallable(const Model::DescribeExpandLogicTableInfoListRequest& request) const;
			DescribeFirstDrdsInstanceByOrderIdOutcome describeFirstDrdsInstanceByOrderId(const Model::DescribeFirstDrdsInstanceByOrderIdRequest &request)const;
			void describeFirstDrdsInstanceByOrderIdAsync(const Model::DescribeFirstDrdsInstanceByOrderIdRequest& request, const DescribeFirstDrdsInstanceByOrderIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirstDrdsInstanceByOrderIdOutcomeCallable describeFirstDrdsInstanceByOrderIdCallable(const Model::DescribeFirstDrdsInstanceByOrderIdRequest& request) const;
			DescribeGlobalBroadcastTypeOutcome describeGlobalBroadcastType(const Model::DescribeGlobalBroadcastTypeRequest &request)const;
			void describeGlobalBroadcastTypeAsync(const Model::DescribeGlobalBroadcastTypeRequest& request, const DescribeGlobalBroadcastTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalBroadcastTypeOutcomeCallable describeGlobalBroadcastTypeCallable(const Model::DescribeGlobalBroadcastTypeRequest& request) const;
			DescribeHiStoreInstanceInfoOutcome describeHiStoreInstanceInfo(const Model::DescribeHiStoreInstanceInfoRequest &request)const;
			void describeHiStoreInstanceInfoAsync(const Model::DescribeHiStoreInstanceInfoRequest& request, const DescribeHiStoreInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiStoreInstanceInfoOutcomeCallable describeHiStoreInstanceInfoCallable(const Model::DescribeHiStoreInstanceInfoRequest& request) const;
			DescribeHotDbListOutcome describeHotDbList(const Model::DescribeHotDbListRequest &request)const;
			void describeHotDbListAsync(const Model::DescribeHotDbListRequest& request, const DescribeHotDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHotDbListOutcomeCallable describeHotDbListCallable(const Model::DescribeHotDbListRequest& request) const;
			DescribeInstDbLogInfoOutcome describeInstDbLogInfo(const Model::DescribeInstDbLogInfoRequest &request)const;
			void describeInstDbLogInfoAsync(const Model::DescribeInstDbLogInfoRequest& request, const DescribeInstDbLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstDbLogInfoOutcomeCallable describeInstDbLogInfoCallable(const Model::DescribeInstDbLogInfoRequest& request) const;
			DescribeInstDbSlsInfoOutcome describeInstDbSlsInfo(const Model::DescribeInstDbSlsInfoRequest &request)const;
			void describeInstDbSlsInfoAsync(const Model::DescribeInstDbSlsInfoRequest& request, const DescribeInstDbSlsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstDbSlsInfoOutcomeCallable describeInstDbSlsInfoCallable(const Model::DescribeInstDbSlsInfoRequest& request) const;
			DescribeInstanceAccountsOutcome describeInstanceAccounts(const Model::DescribeInstanceAccountsRequest &request)const;
			void describeInstanceAccountsAsync(const Model::DescribeInstanceAccountsRequest& request, const DescribeInstanceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAccountsOutcomeCallable describeInstanceAccountsCallable(const Model::DescribeInstanceAccountsRequest& request) const;
			DescribeInstanceMenuSwitchOutcome describeInstanceMenuSwitch(const Model::DescribeInstanceMenuSwitchRequest &request)const;
			void describeInstanceMenuSwitchAsync(const Model::DescribeInstanceMenuSwitchRequest& request, const DescribeInstanceMenuSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceMenuSwitchOutcomeCallable describeInstanceMenuSwitchCallable(const Model::DescribeInstanceMenuSwitchRequest& request) const;
			DescribeInstanceSwitchAzoneOutcome describeInstanceSwitchAzone(const Model::DescribeInstanceSwitchAzoneRequest &request)const;
			void describeInstanceSwitchAzoneAsync(const Model::DescribeInstanceSwitchAzoneRequest& request, const DescribeInstanceSwitchAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSwitchAzoneOutcomeCallable describeInstanceSwitchAzoneCallable(const Model::DescribeInstanceSwitchAzoneRequest& request) const;
			DescribeInstanceSwitchNetworkOutcome describeInstanceSwitchNetwork(const Model::DescribeInstanceSwitchNetworkRequest &request)const;
			void describeInstanceSwitchNetworkAsync(const Model::DescribeInstanceSwitchNetworkRequest& request, const DescribeInstanceSwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSwitchNetworkOutcomeCallable describeInstanceSwitchNetworkCallable(const Model::DescribeInstanceSwitchNetworkRequest& request) const;
			DescribeMyCatDbListOutcome describeMyCatDbList(const Model::DescribeMyCatDbListRequest &request)const;
			void describeMyCatDbListAsync(const Model::DescribeMyCatDbListRequest& request, const DescribeMyCatDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMyCatDbListOutcomeCallable describeMyCatDbListCallable(const Model::DescribeMyCatDbListRequest& request) const;
			DescribeMyCatReportInfoOutcome describeMyCatReportInfo(const Model::DescribeMyCatReportInfoRequest &request)const;
			void describeMyCatReportInfoAsync(const Model::DescribeMyCatReportInfoRequest& request, const DescribeMyCatReportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMyCatReportInfoOutcomeCallable describeMyCatReportInfoCallable(const Model::DescribeMyCatReportInfoRequest& request) const;
			DescribePreCheckResultOutcome describePreCheckResult(const Model::DescribePreCheckResultRequest &request)const;
			void describePreCheckResultAsync(const Model::DescribePreCheckResultRequest& request, const DescribePreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePreCheckResultOutcomeCallable describePreCheckResultCallable(const Model::DescribePreCheckResultRequest& request) const;
			DescribeRDSPerformanceOutcome describeRDSPerformance(const Model::DescribeRDSPerformanceRequest &request)const;
			void describeRDSPerformanceAsync(const Model::DescribeRDSPerformanceRequest& request, const DescribeRDSPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRDSPerformanceOutcomeCallable describeRDSPerformanceCallable(const Model::DescribeRDSPerformanceRequest& request) const;
			DescribeRdsCommodityOutcome describeRdsCommodity(const Model::DescribeRdsCommodityRequest &request)const;
			void describeRdsCommodityAsync(const Model::DescribeRdsCommodityRequest& request, const DescribeRdsCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsCommodityOutcomeCallable describeRdsCommodityCallable(const Model::DescribeRdsCommodityRequest& request) const;
			DescribeRdsDbInfosOutcome describeRdsDbInfos(const Model::DescribeRdsDbInfosRequest &request)const;
			void describeRdsDbInfosAsync(const Model::DescribeRdsDbInfosRequest& request, const DescribeRdsDbInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsDbInfosOutcomeCallable describeRdsDbInfosCallable(const Model::DescribeRdsDbInfosRequest& request) const;
			DescribeRdsDrdsDBOutcome describeRdsDrdsDB(const Model::DescribeRdsDrdsDBRequest &request)const;
			void describeRdsDrdsDBAsync(const Model::DescribeRdsDrdsDBRequest& request, const DescribeRdsDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsDrdsDBOutcomeCallable describeRdsDrdsDBCallable(const Model::DescribeRdsDrdsDBRequest& request) const;
			DescribeRdsInstInfosOutcome describeRdsInstInfos(const Model::DescribeRdsInstInfosRequest &request)const;
			void describeRdsInstInfosAsync(const Model::DescribeRdsInstInfosRequest& request, const DescribeRdsInstInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsInstInfosOutcomeCallable describeRdsInstInfosCallable(const Model::DescribeRdsInstInfosRequest& request) const;
			DescribeRdsListOutcome describeRdsList(const Model::DescribeRdsListRequest &request)const;
			void describeRdsListAsync(const Model::DescribeRdsListRequest& request, const DescribeRdsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsListOutcomeCallable describeRdsListCallable(const Model::DescribeRdsListRequest& request) const;
			DescribeRdsPerformanceSummaryOutcome describeRdsPerformanceSummary(const Model::DescribeRdsPerformanceSummaryRequest &request)const;
			void describeRdsPerformanceSummaryAsync(const Model::DescribeRdsPerformanceSummaryRequest& request, const DescribeRdsPerformanceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsPerformanceSummaryOutcomeCallable describeRdsPerformanceSummaryCallable(const Model::DescribeRdsPerformanceSummaryRequest& request) const;
			DescribeRdsReadOnlyOutcome describeRdsReadOnly(const Model::DescribeRdsReadOnlyRequest &request)const;
			void describeRdsReadOnlyAsync(const Model::DescribeRdsReadOnlyRequest& request, const DescribeRdsReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsReadOnlyOutcomeCallable describeRdsReadOnlyCallable(const Model::DescribeRdsReadOnlyRequest& request) const;
			DescribeRdsSuperAccountInstancesOutcome describeRdsSuperAccountInstances(const Model::DescribeRdsSuperAccountInstancesRequest &request)const;
			void describeRdsSuperAccountInstancesAsync(const Model::DescribeRdsSuperAccountInstancesRequest& request, const DescribeRdsSuperAccountInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsSuperAccountInstancesOutcomeCallable describeRdsSuperAccountInstancesCallable(const Model::DescribeRdsSuperAccountInstancesRequest& request) const;
			DescribeReadOnlyAccountOutcome describeReadOnlyAccount(const Model::DescribeReadOnlyAccountRequest &request)const;
			void describeReadOnlyAccountAsync(const Model::DescribeReadOnlyAccountRequest& request, const DescribeReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReadOnlyAccountOutcomeCallable describeReadOnlyAccountCallable(const Model::DescribeReadOnlyAccountRequest& request) const;
			DescribeRecycleBinStatusOutcome describeRecycleBinStatus(const Model::DescribeRecycleBinStatusRequest &request)const;
			void describeRecycleBinStatusAsync(const Model::DescribeRecycleBinStatusRequest& request, const DescribeRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecycleBinStatusOutcomeCallable describeRecycleBinStatusCallable(const Model::DescribeRecycleBinStatusRequest& request) const;
			DescribeRecycleBinTablesOutcome describeRecycleBinTables(const Model::DescribeRecycleBinTablesRequest &request)const;
			void describeRecycleBinTablesAsync(const Model::DescribeRecycleBinTablesRequest& request, const DescribeRecycleBinTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecycleBinTablesOutcomeCallable describeRecycleBinTablesCallable(const Model::DescribeRecycleBinTablesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRestoreOrderOutcome describeRestoreOrder(const Model::DescribeRestoreOrderRequest &request)const;
			void describeRestoreOrderAsync(const Model::DescribeRestoreOrderRequest& request, const DescribeRestoreOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreOrderOutcomeCallable describeRestoreOrderCallable(const Model::DescribeRestoreOrderRequest& request) const;
			DescribeShardDBsOutcome describeShardDBs(const Model::DescribeShardDBsRequest &request)const;
			void describeShardDBsAsync(const Model::DescribeShardDBsRequest& request, const DescribeShardDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardDBsOutcomeCallable describeShardDBsCallable(const Model::DescribeShardDBsRequest& request) const;
			DescribeShardDbConnectionInfoOutcome describeShardDbConnectionInfo(const Model::DescribeShardDbConnectionInfoRequest &request)const;
			void describeShardDbConnectionInfoAsync(const Model::DescribeShardDbConnectionInfoRequest& request, const DescribeShardDbConnectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardDbConnectionInfoOutcomeCallable describeShardDbConnectionInfoCallable(const Model::DescribeShardDbConnectionInfoRequest& request) const;
			DescribeShardTaskInfoOutcome describeShardTaskInfo(const Model::DescribeShardTaskInfoRequest &request)const;
			void describeShardTaskInfoAsync(const Model::DescribeShardTaskInfoRequest& request, const DescribeShardTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardTaskInfoOutcomeCallable describeShardTaskInfoCallable(const Model::DescribeShardTaskInfoRequest& request) const;
			DescribeShardTaskListOutcome describeShardTaskList(const Model::DescribeShardTaskListRequest &request)const;
			void describeShardTaskListAsync(const Model::DescribeShardTaskListRequest& request, const DescribeShardTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardTaskListOutcomeCallable describeShardTaskListCallable(const Model::DescribeShardTaskListRequest& request) const;
			DescribeSqlFlashbakTaskOutcome describeSqlFlashbakTask(const Model::DescribeSqlFlashbakTaskRequest &request)const;
			void describeSqlFlashbakTaskAsync(const Model::DescribeSqlFlashbakTaskRequest& request, const DescribeSqlFlashbakTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlFlashbakTaskOutcomeCallable describeSqlFlashbakTaskCallable(const Model::DescribeSqlFlashbakTaskRequest& request) const;
			DescribeTableOutcome describeTable(const Model::DescribeTableRequest &request)const;
			void describeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableOutcomeCallable describeTableCallable(const Model::DescribeTableRequest& request) const;
			DescribeTableListByTypeOutcome describeTableListByType(const Model::DescribeTableListByTypeRequest &request)const;
			void describeTableListByTypeAsync(const Model::DescribeTableListByTypeRequest& request, const DescribeTableListByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableListByTypeOutcomeCallable describeTableListByTypeCallable(const Model::DescribeTableListByTypeRequest& request) const;
			DescribeTableShardingInfoOutcome describeTableShardingInfo(const Model::DescribeTableShardingInfoRequest &request)const;
			void describeTableShardingInfoAsync(const Model::DescribeTableShardingInfoRequest& request, const DescribeTableShardingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableShardingInfoOutcomeCallable describeTableShardingInfoCallable(const Model::DescribeTableShardingInfoRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeUnCompatibilitySqlOutcome describeUnCompatibilitySql(const Model::DescribeUnCompatibilitySqlRequest &request)const;
			void describeUnCompatibilitySqlAsync(const Model::DescribeUnCompatibilitySqlRequest& request, const DescribeUnCompatibilitySqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnCompatibilitySqlOutcomeCallable describeUnCompatibilitySqlCallable(const Model::DescribeUnCompatibilitySqlRequest& request) const;
			DisableSqlAuditOutcome disableSqlAudit(const Model::DisableSqlAuditRequest &request)const;
			void disableSqlAuditAsync(const Model::DisableSqlAuditRequest& request, const DisableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSqlAuditOutcomeCallable disableSqlAuditCallable(const Model::DisableSqlAuditRequest& request) const;
			DrdsApiValidateOrderOutcome drdsApiValidateOrder(const Model::DrdsApiValidateOrderRequest &request)const;
			void drdsApiValidateOrderAsync(const Model::DrdsApiValidateOrderRequest& request, const DrdsApiValidateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DrdsApiValidateOrderOutcomeCallable drdsApiValidateOrderCallable(const Model::DrdsApiValidateOrderRequest& request) const;
			DropIndexesOutcome dropIndexes(const Model::DropIndexesRequest &request)const;
			void dropIndexesAsync(const Model::DropIndexesRequest& request, const DropIndexesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropIndexesOutcomeCallable dropIndexesCallable(const Model::DropIndexesRequest& request) const;
			DropTablesOutcome dropTables(const Model::DropTablesRequest &request)const;
			void dropTablesAsync(const Model::DropTablesRequest& request, const DropTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropTablesOutcomeCallable dropTablesCallable(const Model::DropTablesRequest& request) const;
			EnableInstanceOutcome enableInstance(const Model::EnableInstanceRequest &request)const;
			void enableInstanceAsync(const Model::EnableInstanceRequest& request, const EnableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInstanceOutcomeCallable enableInstanceCallable(const Model::EnableInstanceRequest& request) const;
			EnableInstanceIpv6AddressOutcome enableInstanceIpv6Address(const Model::EnableInstanceIpv6AddressRequest &request)const;
			void enableInstanceIpv6AddressAsync(const Model::EnableInstanceIpv6AddressRequest& request, const EnableInstanceIpv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInstanceIpv6AddressOutcomeCallable enableInstanceIpv6AddressCallable(const Model::EnableInstanceIpv6AddressRequest& request) const;
			EnableSqlAuditOutcome enableSqlAudit(const Model::EnableSqlAuditRequest &request)const;
			void enableSqlAuditAsync(const Model::EnableSqlAuditRequest& request, const EnableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSqlAuditOutcomeCallable enableSqlAuditCallable(const Model::EnableSqlAuditRequest& request) const;
			EnableSqlFlashbackMatchSwitchOutcome enableSqlFlashbackMatchSwitch(const Model::EnableSqlFlashbackMatchSwitchRequest &request)const;
			void enableSqlFlashbackMatchSwitchAsync(const Model::EnableSqlFlashbackMatchSwitchRequest& request, const EnableSqlFlashbackMatchSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSqlFlashbackMatchSwitchOutcomeCallable enableSqlFlashbackMatchSwitchCallable(const Model::EnableSqlFlashbackMatchSwitchRequest& request) const;
			FlashbackRecycleBinTableOutcome flashbackRecycleBinTable(const Model::FlashbackRecycleBinTableRequest &request)const;
			void flashbackRecycleBinTableAsync(const Model::FlashbackRecycleBinTableRequest& request, const FlashbackRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlashbackRecycleBinTableOutcomeCallable flashbackRecycleBinTableCallable(const Model::FlashbackRecycleBinTableRequest& request) const;
			GetBatchEvaluateTaskReportOutcome getBatchEvaluateTaskReport(const Model::GetBatchEvaluateTaskReportRequest &request)const;
			void getBatchEvaluateTaskReportAsync(const Model::GetBatchEvaluateTaskReportRequest& request, const GetBatchEvaluateTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBatchEvaluateTaskReportOutcomeCallable getBatchEvaluateTaskReportCallable(const Model::GetBatchEvaluateTaskReportRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListUnCompleteTasksOutcome listUnCompleteTasks(const Model::ListUnCompleteTasksRequest &request)const;
			void listUnCompleteTasksAsync(const Model::ListUnCompleteTasksRequest& request, const ListUnCompleteTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUnCompleteTasksOutcomeCallable listUnCompleteTasksCallable(const Model::ListUnCompleteTasksRequest& request) const;
			ListUserReportsOutcome listUserReports(const Model::ListUserReportsRequest &request)const;
			void listUserReportsAsync(const Model::ListUserReportsRequest& request, const ListUserReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserReportsOutcomeCallable listUserReportsCallable(const Model::ListUserReportsRequest& request) const;
			ListVersionsOutcome listVersions(const Model::ListVersionsRequest &request)const;
			void listVersionsAsync(const Model::ListVersionsRequest& request, const ListVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVersionsOutcomeCallable listVersionsCallable(const Model::ListVersionsRequest& request) const;
			ManagePrivateRdsOutcome managePrivateRds(const Model::ManagePrivateRdsRequest &request)const;
			void managePrivateRdsAsync(const Model::ManagePrivateRdsRequest& request, const ManagePrivateRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManagePrivateRdsOutcomeCallable managePrivateRdsCallable(const Model::ManagePrivateRdsRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPrivilegeOutcome modifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request)const;
			void modifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPrivilegeOutcomeCallable modifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request) const;
			ModifyDrdsDBPasswdOutcome modifyDrdsDBPasswd(const Model::ModifyDrdsDBPasswdRequest &request)const;
			void modifyDrdsDBPasswdAsync(const Model::ModifyDrdsDBPasswdRequest& request, const ModifyDrdsDBPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsDBPasswdOutcomeCallable modifyDrdsDBPasswdCallable(const Model::ModifyDrdsDBPasswdRequest& request) const;
			ModifyDrdsInstanceDescriptionOutcome modifyDrdsInstanceDescription(const Model::ModifyDrdsInstanceDescriptionRequest &request)const;
			void modifyDrdsInstanceDescriptionAsync(const Model::ModifyDrdsInstanceDescriptionRequest& request, const ModifyDrdsInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsInstanceDescriptionOutcomeCallable modifyDrdsInstanceDescriptionCallable(const Model::ModifyDrdsInstanceDescriptionRequest& request) const;
			ModifyDrdsIpWhiteListOutcome modifyDrdsIpWhiteList(const Model::ModifyDrdsIpWhiteListRequest &request)const;
			void modifyDrdsIpWhiteListAsync(const Model::ModifyDrdsIpWhiteListRequest& request, const ModifyDrdsIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsIpWhiteListOutcomeCallable modifyDrdsIpWhiteListCallable(const Model::ModifyDrdsIpWhiteListRequest& request) const;
			ModifyFullTableScanOutcome modifyFullTableScan(const Model::ModifyFullTableScanRequest &request)const;
			void modifyFullTableScanAsync(const Model::ModifyFullTableScanRequest& request, const ModifyFullTableScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFullTableScanOutcomeCallable modifyFullTableScanCallable(const Model::ModifyFullTableScanRequest& request) const;
			ModifyPolarDbReadWeightOutcome modifyPolarDbReadWeight(const Model::ModifyPolarDbReadWeightRequest &request)const;
			void modifyPolarDbReadWeightAsync(const Model::ModifyPolarDbReadWeightRequest& request, const ModifyPolarDbReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPolarDbReadWeightOutcomeCallable modifyPolarDbReadWeightCallable(const Model::ModifyPolarDbReadWeightRequest& request) const;
			ModifyRdsReadWeightOutcome modifyRdsReadWeight(const Model::ModifyRdsReadWeightRequest &request)const;
			void modifyRdsReadWeightAsync(const Model::ModifyRdsReadWeightRequest& request, const ModifyRdsReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRdsReadWeightOutcomeCallable modifyRdsReadWeightCallable(const Model::ModifyRdsReadWeightRequest& request) const;
			ModifyReadOnlyAccountPasswordOutcome modifyReadOnlyAccountPassword(const Model::ModifyReadOnlyAccountPasswordRequest &request)const;
			void modifyReadOnlyAccountPasswordAsync(const Model::ModifyReadOnlyAccountPasswordRequest& request, const ModifyReadOnlyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReadOnlyAccountPasswordOutcomeCallable modifyReadOnlyAccountPasswordCallable(const Model::ModifyReadOnlyAccountPasswordRequest& request) const;
			MyCatConnectTestOutcome myCatConnectTest(const Model::MyCatConnectTestRequest &request)const;
			void myCatConnectTestAsync(const Model::MyCatConnectTestRequest& request, const MyCatConnectTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MyCatConnectTestOutcomeCallable myCatConnectTestCallable(const Model::MyCatConnectTestRequest& request) const;
			MyCatCustomImportPreCheckOutcome myCatCustomImportPreCheck(const Model::MyCatCustomImportPreCheckRequest &request)const;
			void myCatCustomImportPreCheckAsync(const Model::MyCatCustomImportPreCheckRequest& request, const MyCatCustomImportPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MyCatCustomImportPreCheckOutcomeCallable myCatCustomImportPreCheckCallable(const Model::MyCatCustomImportPreCheckRequest& request) const;
			OrderRefundOutcome orderRefund(const Model::OrderRefundRequest &request)const;
			void orderRefundAsync(const Model::OrderRefundRequest& request, const OrderRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OrderRefundOutcomeCallable orderRefundCallable(const Model::OrderRefundRequest& request) const;
			PreCheckModifyTableShardingKeyParamOutcome preCheckModifyTableShardingKeyParam(const Model::PreCheckModifyTableShardingKeyParamRequest &request)const;
			void preCheckModifyTableShardingKeyParamAsync(const Model::PreCheckModifyTableShardingKeyParamRequest& request, const PreCheckModifyTableShardingKeyParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreCheckModifyTableShardingKeyParamOutcomeCallable preCheckModifyTableShardingKeyParamCallable(const Model::PreCheckModifyTableShardingKeyParamRequest& request) const;
			PrecheckMyCatEvaluateOutcome precheckMyCatEvaluate(const Model::PrecheckMyCatEvaluateRequest &request)const;
			void precheckMyCatEvaluateAsync(const Model::PrecheckMyCatEvaluateRequest& request, const PrecheckMyCatEvaluateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrecheckMyCatEvaluateOutcomeCallable precheckMyCatEvaluateCallable(const Model::PrecheckMyCatEvaluateRequest& request) const;
			ProductInfoComplementOutcome productInfoComplement(const Model::ProductInfoComplementRequest &request)const;
			void productInfoComplementAsync(const Model::ProductInfoComplementRequest& request, const ProductInfoComplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProductInfoComplementOutcomeCallable productInfoComplementCallable(const Model::ProductInfoComplementRequest& request) const;
			PutStartBackupOutcome putStartBackup(const Model::PutStartBackupRequest &request)const;
			void putStartBackupAsync(const Model::PutStartBackupRequest& request, const PutStartBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutStartBackupOutcomeCallable putStartBackupCallable(const Model::PutStartBackupRequest& request) const;
			QueryInstanceInfoByConnOutcome queryInstanceInfoByConn(const Model::QueryInstanceInfoByConnRequest &request)const;
			void queryInstanceInfoByConnAsync(const Model::QueryInstanceInfoByConnRequest& request, const QueryInstanceInfoByConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceInfoByConnOutcomeCallable queryInstanceInfoByConnCallable(const Model::QueryInstanceInfoByConnRequest& request) const;
			RefreshDrdsAtomUrlOutcome refreshDrdsAtomUrl(const Model::RefreshDrdsAtomUrlRequest &request)const;
			void refreshDrdsAtomUrlAsync(const Model::RefreshDrdsAtomUrlRequest& request, const RefreshDrdsAtomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDrdsAtomUrlOutcomeCallable refreshDrdsAtomUrlCallable(const Model::RefreshDrdsAtomUrlRequest& request) const;
			ReleaseHiStoreInstanceOutcome releaseHiStoreInstance(const Model::ReleaseHiStoreInstanceRequest &request)const;
			void releaseHiStoreInstanceAsync(const Model::ReleaseHiStoreInstanceRequest& request, const ReleaseHiStoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseHiStoreInstanceOutcomeCallable releaseHiStoreInstanceCallable(const Model::ReleaseHiStoreInstanceRequest& request) const;
			ReleaseInstanceInternetAddressOutcome releaseInstanceInternetAddress(const Model::ReleaseInstanceInternetAddressRequest &request)const;
			void releaseInstanceInternetAddressAsync(const Model::ReleaseInstanceInternetAddressRequest& request, const ReleaseInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceInternetAddressOutcomeCallable releaseInstanceInternetAddressCallable(const Model::ReleaseInstanceInternetAddressRequest& request) const;
			RemoveBackupsSetOutcome removeBackupsSet(const Model::RemoveBackupsSetRequest &request)const;
			void removeBackupsSetAsync(const Model::RemoveBackupsSetRequest& request, const RemoveBackupsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBackupsSetOutcomeCallable removeBackupsSetCallable(const Model::RemoveBackupsSetRequest& request) const;
			RemoveDataExportTaskOutcome removeDataExportTask(const Model::RemoveDataExportTaskRequest &request)const;
			void removeDataExportTaskAsync(const Model::RemoveDataExportTaskRequest& request, const RemoveDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDataExportTaskOutcomeCallable removeDataExportTaskCallable(const Model::RemoveDataExportTaskRequest& request) const;
			RemoveDataImportTaskOutcome removeDataImportTask(const Model::RemoveDataImportTaskRequest &request)const;
			void removeDataImportTaskAsync(const Model::RemoveDataImportTaskRequest& request, const RemoveDataImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDataImportTaskOutcomeCallable removeDataImportTaskCallable(const Model::RemoveDataImportTaskRequest& request) const;
			RemoveDrdsDbOutcome removeDrdsDb(const Model::RemoveDrdsDbRequest &request)const;
			void removeDrdsDbAsync(const Model::RemoveDrdsDbRequest& request, const RemoveDrdsDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsDbOutcomeCallable removeDrdsDbCallable(const Model::RemoveDrdsDbRequest& request) const;
			RemoveDrdsDbFailedRecordOutcome removeDrdsDbFailedRecord(const Model::RemoveDrdsDbFailedRecordRequest &request)const;
			void removeDrdsDbFailedRecordAsync(const Model::RemoveDrdsDbFailedRecordRequest& request, const RemoveDrdsDbFailedRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsDbFailedRecordOutcomeCallable removeDrdsDbFailedRecordCallable(const Model::RemoveDrdsDbFailedRecordRequest& request) const;
			RemoveDrdsInstanceOutcome removeDrdsInstance(const Model::RemoveDrdsInstanceRequest &request)const;
			void removeDrdsInstanceAsync(const Model::RemoveDrdsInstanceRequest& request, const RemoveDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsInstanceOutcomeCallable removeDrdsInstanceCallable(const Model::RemoveDrdsInstanceRequest& request) const;
			RemoveDrdsMysqlOutcome removeDrdsMysql(const Model::RemoveDrdsMysqlRequest &request)const;
			void removeDrdsMysqlAsync(const Model::RemoveDrdsMysqlRequest& request, const RemoveDrdsMysqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsMysqlOutcomeCallable removeDrdsMysqlCallable(const Model::RemoveDrdsMysqlRequest& request) const;
			RemoveEvaluateTaskOutcome removeEvaluateTask(const Model::RemoveEvaluateTaskRequest &request)const;
			void removeEvaluateTaskAsync(const Model::RemoveEvaluateTaskRequest& request, const RemoveEvaluateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEvaluateTaskOutcomeCallable removeEvaluateTaskCallable(const Model::RemoveEvaluateTaskRequest& request) const;
			RemoveInstanceAccountOutcome removeInstanceAccount(const Model::RemoveInstanceAccountRequest &request)const;
			void removeInstanceAccountAsync(const Model::RemoveInstanceAccountRequest& request, const RemoveInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveInstanceAccountOutcomeCallable removeInstanceAccountCallable(const Model::RemoveInstanceAccountRequest& request) const;
			RemoveReadOnlyAccountOutcome removeReadOnlyAccount(const Model::RemoveReadOnlyAccountRequest &request)const;
			void removeReadOnlyAccountAsync(const Model::RemoveReadOnlyAccountRequest& request, const RemoveReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveReadOnlyAccountOutcomeCallable removeReadOnlyAccountCallable(const Model::RemoveReadOnlyAccountRequest& request) const;
			RemoveRecycleBinTableOutcome removeRecycleBinTable(const Model::RemoveRecycleBinTableRequest &request)const;
			void removeRecycleBinTableAsync(const Model::RemoveRecycleBinTableRequest& request, const RemoveRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveRecycleBinTableOutcomeCallable removeRecycleBinTableCallable(const Model::RemoveRecycleBinTableRequest& request) const;
			ResetDrdsToRdsConnectionsOutcome resetDrdsToRdsConnections(const Model::ResetDrdsToRdsConnectionsRequest &request)const;
			void resetDrdsToRdsConnectionsAsync(const Model::ResetDrdsToRdsConnectionsRequest& request, const ResetDrdsToRdsConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDrdsToRdsConnectionsOutcomeCallable resetDrdsToRdsConnectionsCallable(const Model::ResetDrdsToRdsConnectionsRequest& request) const;
			RestartDrdsInstanceOutcome restartDrdsInstance(const Model::RestartDrdsInstanceRequest &request)const;
			void restartDrdsInstanceAsync(const Model::RestartDrdsInstanceRequest& request, const RestartDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDrdsInstanceOutcomeCallable restartDrdsInstanceCallable(const Model::RestartDrdsInstanceRequest& request) const;
			RollbackHiStoreInstanceOutcome rollbackHiStoreInstance(const Model::RollbackHiStoreInstanceRequest &request)const;
			void rollbackHiStoreInstanceAsync(const Model::RollbackHiStoreInstanceRequest& request, const RollbackHiStoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackHiStoreInstanceOutcomeCallable rollbackHiStoreInstanceCallable(const Model::RollbackHiStoreInstanceRequest& request) const;
			RollbackInstanceVersionOutcome rollbackInstanceVersion(const Model::RollbackInstanceVersionRequest &request)const;
			void rollbackInstanceVersionAsync(const Model::RollbackInstanceVersionRequest& request, const RollbackInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackInstanceVersionOutcomeCallable rollbackInstanceVersionCallable(const Model::RollbackInstanceVersionRequest& request) const;
			SetBackupLocalOutcome setBackupLocal(const Model::SetBackupLocalRequest &request)const;
			void setBackupLocalAsync(const Model::SetBackupLocalRequest& request, const SetBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackupLocalOutcomeCallable setBackupLocalCallable(const Model::SetBackupLocalRequest& request) const;
			SetBackupPolicyOutcome setBackupPolicy(const Model::SetBackupPolicyRequest &request)const;
			void setBackupPolicyAsync(const Model::SetBackupPolicyRequest& request, const SetBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackupPolicyOutcomeCallable setBackupPolicyCallable(const Model::SetBackupPolicyRequest& request) const;
			SetupBroadcastTablesOutcome setupBroadcastTables(const Model::SetupBroadcastTablesRequest &request)const;
			void setupBroadcastTablesAsync(const Model::SetupBroadcastTablesRequest& request, const SetupBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupBroadcastTablesOutcomeCallable setupBroadcastTablesCallable(const Model::SetupBroadcastTablesRequest& request) const;
			SetupDrdsParamsOutcome setupDrdsParams(const Model::SetupDrdsParamsRequest &request)const;
			void setupDrdsParamsAsync(const Model::SetupDrdsParamsRequest& request, const SetupDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupDrdsParamsOutcomeCallable setupDrdsParamsCallable(const Model::SetupDrdsParamsRequest& request) const;
			SetupRecycleBinStatusOutcome setupRecycleBinStatus(const Model::SetupRecycleBinStatusRequest &request)const;
			void setupRecycleBinStatusAsync(const Model::SetupRecycleBinStatusRequest& request, const SetupRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupRecycleBinStatusOutcomeCallable setupRecycleBinStatusCallable(const Model::SetupRecycleBinStatusRequest& request) const;
			SetupTableOutcome setupTable(const Model::SetupTableRequest &request)const;
			void setupTableAsync(const Model::SetupTableRequest& request, const SetupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupTableOutcomeCallable setupTableCallable(const Model::SetupTableRequest& request) const;
			SqlCompatibilityCancelOutcome sqlCompatibilityCancel(const Model::SqlCompatibilityCancelRequest &request)const;
			void sqlCompatibilityCancelAsync(const Model::SqlCompatibilityCancelRequest& request, const SqlCompatibilityCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SqlCompatibilityCancelOutcomeCallable sqlCompatibilityCancelCallable(const Model::SqlCompatibilityCancelRequest& request) const;
			SqlCompatibilityStartOutcome sqlCompatibilityStart(const Model::SqlCompatibilityStartRequest &request)const;
			void sqlCompatibilityStartAsync(const Model::SqlCompatibilityStartRequest& request, const SqlCompatibilityStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SqlCompatibilityStartOutcomeCallable sqlCompatibilityStartCallable(const Model::SqlCompatibilityStartRequest& request) const;
			StartDataImportTaskOutcome startDataImportTask(const Model::StartDataImportTaskRequest &request)const;
			void startDataImportTaskAsync(const Model::StartDataImportTaskRequest& request, const StartDataImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDataImportTaskOutcomeCallable startDataImportTaskCallable(const Model::StartDataImportTaskRequest& request) const;
			StartEvaluateTaskOutcome startEvaluateTask(const Model::StartEvaluateTaskRequest &request)const;
			void startEvaluateTaskAsync(const Model::StartEvaluateTaskRequest& request, const StartEvaluateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEvaluateTaskOutcomeCallable startEvaluateTaskCallable(const Model::StartEvaluateTaskRequest& request) const;
			StartRestoreOutcome startRestore(const Model::StartRestoreRequest &request)const;
			void startRestoreAsync(const Model::StartRestoreRequest& request, const StartRestoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRestoreOutcomeCallable startRestoreCallable(const Model::StartRestoreRequest& request) const;
			StopDataExportTaskOutcome stopDataExportTask(const Model::StopDataExportTaskRequest &request)const;
			void stopDataExportTaskAsync(const Model::StopDataExportTaskRequest& request, const StopDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDataExportTaskOutcomeCallable stopDataExportTaskCallable(const Model::StopDataExportTaskRequest& request) const;
			StopDataImportTaskOutcome stopDataImportTask(const Model::StopDataImportTaskRequest &request)const;
			void stopDataImportTaskAsync(const Model::StopDataImportTaskRequest& request, const StopDataImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDataImportTaskOutcomeCallable stopDataImportTaskCallable(const Model::StopDataImportTaskRequest& request) const;
			StopEvaluateTaskOutcome stopEvaluateTask(const Model::StopEvaluateTaskRequest &request)const;
			void stopEvaluateTaskAsync(const Model::StopEvaluateTaskRequest& request, const StopEvaluateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEvaluateTaskOutcomeCallable stopEvaluateTaskCallable(const Model::StopEvaluateTaskRequest& request) const;
			SubmitCleanTableShardingKeyModifyOutcome submitCleanTableShardingKeyModify(const Model::SubmitCleanTableShardingKeyModifyRequest &request)const;
			void submitCleanTableShardingKeyModifyAsync(const Model::SubmitCleanTableShardingKeyModifyRequest& request, const SubmitCleanTableShardingKeyModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCleanTableShardingKeyModifyOutcomeCallable submitCleanTableShardingKeyModifyCallable(const Model::SubmitCleanTableShardingKeyModifyRequest& request) const;
			SubmitCleanTaskOutcome submitCleanTask(const Model::SubmitCleanTaskRequest &request)const;
			void submitCleanTaskAsync(const Model::SubmitCleanTaskRequest& request, const SubmitCleanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCleanTaskOutcomeCallable submitCleanTaskCallable(const Model::SubmitCleanTaskRequest& request) const;
			SubmitHotExpandPreCheckTaskOutcome submitHotExpandPreCheckTask(const Model::SubmitHotExpandPreCheckTaskRequest &request)const;
			void submitHotExpandPreCheckTaskAsync(const Model::SubmitHotExpandPreCheckTaskRequest& request, const SubmitHotExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHotExpandPreCheckTaskOutcomeCallable submitHotExpandPreCheckTaskCallable(const Model::SubmitHotExpandPreCheckTaskRequest& request) const;
			SubmitHotExpandTaskOutcome submitHotExpandTask(const Model::SubmitHotExpandTaskRequest &request)const;
			void submitHotExpandTaskAsync(const Model::SubmitHotExpandTaskRequest& request, const SubmitHotExpandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHotExpandTaskOutcomeCallable submitHotExpandTaskCallable(const Model::SubmitHotExpandTaskRequest& request) const;
			SubmitRollbackShardingKeyModifyOutcome submitRollbackShardingKeyModify(const Model::SubmitRollbackShardingKeyModifyRequest &request)const;
			void submitRollbackShardingKeyModifyAsync(const Model::SubmitRollbackShardingKeyModifyRequest& request, const SubmitRollbackShardingKeyModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitRollbackShardingKeyModifyOutcomeCallable submitRollbackShardingKeyModifyCallable(const Model::SubmitRollbackShardingKeyModifyRequest& request) const;
			SubmitRollbackTaskOutcome submitRollbackTask(const Model::SubmitRollbackTaskRequest &request)const;
			void submitRollbackTaskAsync(const Model::SubmitRollbackTaskRequest& request, const SubmitRollbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitRollbackTaskOutcomeCallable submitRollbackTaskCallable(const Model::SubmitRollbackTaskRequest& request) const;
			SubmitSmoothExpandPreCheckOutcome submitSmoothExpandPreCheck(const Model::SubmitSmoothExpandPreCheckRequest &request)const;
			void submitSmoothExpandPreCheckAsync(const Model::SubmitSmoothExpandPreCheckRequest& request, const SubmitSmoothExpandPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmoothExpandPreCheckOutcomeCallable submitSmoothExpandPreCheckCallable(const Model::SubmitSmoothExpandPreCheckRequest& request) const;
			SubmitSmoothExpandPreCheckTaskOutcome submitSmoothExpandPreCheckTask(const Model::SubmitSmoothExpandPreCheckTaskRequest &request)const;
			void submitSmoothExpandPreCheckTaskAsync(const Model::SubmitSmoothExpandPreCheckTaskRequest& request, const SubmitSmoothExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmoothExpandPreCheckTaskOutcomeCallable submitSmoothExpandPreCheckTaskCallable(const Model::SubmitSmoothExpandPreCheckTaskRequest& request) const;
			SubmitSmoothExpandTaskOutcome submitSmoothExpandTask(const Model::SubmitSmoothExpandTaskRequest &request)const;
			void submitSmoothExpandTaskAsync(const Model::SubmitSmoothExpandTaskRequest& request, const SubmitSmoothExpandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmoothExpandTaskOutcomeCallable submitSmoothExpandTaskCallable(const Model::SubmitSmoothExpandTaskRequest& request) const;
			SubmitSqlFlashbackTaskOutcome submitSqlFlashbackTask(const Model::SubmitSqlFlashbackTaskRequest &request)const;
			void submitSqlFlashbackTaskAsync(const Model::SubmitSqlFlashbackTaskRequest& request, const SubmitSqlFlashbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSqlFlashbackTaskOutcomeCallable submitSqlFlashbackTaskCallable(const Model::SubmitSqlFlashbackTaskRequest& request) const;
			SubmitSwitchTableShardingKeyModifyOutcome submitSwitchTableShardingKeyModify(const Model::SubmitSwitchTableShardingKeyModifyRequest &request)const;
			void submitSwitchTableShardingKeyModifyAsync(const Model::SubmitSwitchTableShardingKeyModifyRequest& request, const SubmitSwitchTableShardingKeyModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSwitchTableShardingKeyModifyOutcomeCallable submitSwitchTableShardingKeyModifyCallable(const Model::SubmitSwitchTableShardingKeyModifyRequest& request) const;
			SubmitSwitchTaskOutcome submitSwitchTask(const Model::SubmitSwitchTaskRequest &request)const;
			void submitSwitchTaskAsync(const Model::SubmitSwitchTaskRequest& request, const SubmitSwitchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSwitchTaskOutcomeCallable submitSwitchTaskCallable(const Model::SubmitSwitchTaskRequest& request) const;
			SubmitTableShardingKeyModifyOutcome submitTableShardingKeyModify(const Model::SubmitTableShardingKeyModifyRequest &request)const;
			void submitTableShardingKeyModifyAsync(const Model::SubmitTableShardingKeyModifyRequest& request, const SubmitTableShardingKeyModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTableShardingKeyModifyOutcomeCallable submitTableShardingKeyModifyCallable(const Model::SubmitTableShardingKeyModifyRequest& request) const;
			SwitchGlobalBroadcastTypeOutcome switchGlobalBroadcastType(const Model::SwitchGlobalBroadcastTypeRequest &request)const;
			void switchGlobalBroadcastTypeAsync(const Model::SwitchGlobalBroadcastTypeRequest& request, const SwitchGlobalBroadcastTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchGlobalBroadcastTypeOutcomeCallable switchGlobalBroadcastTypeCallable(const Model::SwitchGlobalBroadcastTypeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateInstanceNetworkOutcome updateInstanceNetwork(const Model::UpdateInstanceNetworkRequest &request)const;
			void updateInstanceNetworkAsync(const Model::UpdateInstanceNetworkRequest& request, const UpdateInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceNetworkOutcomeCallable updateInstanceNetworkCallable(const Model::UpdateInstanceNetworkRequest& request) const;
			UpdateResourceGroupAttributeOutcome updateResourceGroupAttribute(const Model::UpdateResourceGroupAttributeRequest &request)const;
			void updateResourceGroupAttributeAsync(const Model::UpdateResourceGroupAttributeRequest& request, const UpdateResourceGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceGroupAttributeOutcomeCallable updateResourceGroupAttributeCallable(const Model::UpdateResourceGroupAttributeRequest& request) const;
			UpgradeHiStoreInstanceOutcome upgradeHiStoreInstance(const Model::UpgradeHiStoreInstanceRequest &request)const;
			void upgradeHiStoreInstanceAsync(const Model::UpgradeHiStoreInstanceRequest& request, const UpgradeHiStoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeHiStoreInstanceOutcomeCallable upgradeHiStoreInstanceCallable(const Model::UpgradeHiStoreInstanceRequest& request) const;
			UpgradeInstanceVersionOutcome upgradeInstanceVersion(const Model::UpgradeInstanceVersionRequest &request)const;
			void upgradeInstanceVersionAsync(const Model::UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceVersionOutcomeCallable upgradeInstanceVersionCallable(const Model::UpgradeInstanceVersionRequest& request) const;
			ValidateShardTaskOutcome validateShardTask(const Model::ValidateShardTaskRequest &request)const;
			void validateShardTaskAsync(const Model::ValidateShardTaskRequest& request, const ValidateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateShardTaskOutcomeCallable validateShardTaskCallable(const Model::ValidateShardTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DRDS_DRDSCLIENT_H_
