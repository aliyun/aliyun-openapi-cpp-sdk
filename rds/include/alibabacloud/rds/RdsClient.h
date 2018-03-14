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

#ifndef ALIBABACLOUD_RDS_RDSCLIENT_H_
#define ALIBABACLOUD_RDS_RDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RdsExport.h"
#include "model/CreateMigrateTaskRequest.h"
#include "model/CreateMigrateTaskResult.h"
#include "model/CheckRecoveryConditionsRequest.h"
#include "model/CheckRecoveryConditionsResult.h"
#include "model/LoginDBInstancefromCloudDBARequest.h"
#include "model/LoginDBInstancefromCloudDBAResult.h"
#include "model/DeleteBackupRequest.h"
#include "model/DeleteBackupResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeDBInstancesByExpireTimeRequest.h"
#include "model/DescribeDBInstancesByExpireTimeResult.h"
#include "model/SwitchDBInstanceNetTypeRequest.h"
#include "model/SwitchDBInstanceNetTypeResult.h"
#include "model/DescribeDBInstanceMonitorRequest.h"
#include "model/DescribeDBInstanceMonitorResult.h"
#include "model/CreateReadOnlyDBInstanceRequest.h"
#include "model/CreateReadOnlyDBInstanceResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/DescribeDBInstanceHAConfigRequest.h"
#include "model/DescribeDBInstanceHAConfigResult.h"
#include "model/DescribeOssDownloadsRequest.h"
#include "model/DescribeOssDownloadsResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ReleaseReplicaRequest.h"
#include "model/ReleaseReplicaResult.h"
#include "model/UpgradeDBInstanceEngineVersionRequest.h"
#include "model/UpgradeDBInstanceEngineVersionResult.h"
#include "model/DescribeReplicasRequest.h"
#include "model/DescribeReplicasResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/StopSyncingRequest.h"
#include "model/StopSyncingResult.h"
#include "model/CheckAccountNameAvailableRequest.h"
#include "model/CheckAccountNameAvailableResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/ImportDataForSQLServerRequest.h"
#include "model/ImportDataForSQLServerResult.h"
#include "model/DescribeLogicDBInstanceTopologyRequest.h"
#include "model/DescribeLogicDBInstanceTopologyResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/CheckResourceRequest.h"
#include "model/CheckResourceResult.h"
#include "model/StartDBInstanceDiagnoseRequest.h"
#include "model/StartDBInstanceDiagnoseResult.h"
#include "model/ModifySecurityGroupConfigurationRequest.h"
#include "model/ModifySecurityGroupConfigurationResult.h"
#include "model/DescribeCharacterSetNameRequest.h"
#include "model/DescribeCharacterSetNameResult.h"
#include "model/ImportDataFromDatabaseRequest.h"
#include "model/ImportDataFromDatabaseResult.h"
#include "model/DescribeMigrateTasksRequest.h"
#include "model/DescribeMigrateTasksResult.h"
#include "model/ModifyDBInstanceNetworkExpireTimeRequest.h"
#include "model/ModifyDBInstanceNetworkExpireTimeResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeOperatorPermissionRequest.h"
#include "model/DescribeOperatorPermissionResult.h"
#include "model/DescribeOptimizeAdviceOnMissIndexRequest.h"
#include "model/DescribeOptimizeAdviceOnMissIndexResult.h"
#include "model/DescribeDampPoliciesByCidRequest.h"
#include "model/DescribeDampPoliciesByCidResult.h"
#include "model/ModifyDBDescriptionRequest.h"
#include "model/ModifyDBDescriptionResult.h"
#include "model/ImportDatabaseBetweenInstancesRequest.h"
#include "model/ImportDatabaseBetweenInstancesResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/CheckDBNameAvailableRequest.h"
#include "model/CheckDBNameAvailableResult.h"
#include "model/ModifyDBInstanceMonitorRequest.h"
#include "model/ModifyDBInstanceMonitorResult.h"
#include "model/DescribeSQLLogFilesRequest.h"
#include "model/DescribeSQLLogFilesResult.h"
#include "model/CancelImportRequest.h"
#include "model/CancelImportResult.h"
#include "model/ModifyReplicaDescriptionRequest.h"
#include "model/ModifyReplicaDescriptionResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/DescribeReplicaInitializeProgressRequest.h"
#include "model/DescribeReplicaInitializeProgressResult.h"
#include "model/DescribeSecurityGroupConfigurationRequest.h"
#include "model/DescribeSecurityGroupConfigurationResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/UpgradeDBInstanceNetWorkInfoRequest.h"
#include "model/UpgradeDBInstanceNetWorkInfoResult.h"
#include "model/AddTagsToResourceRequest.h"
#include "model/AddTagsToResourceResult.h"
#include "model/DescribeBinlogFilesRequest.h"
#include "model/DescribeBinlogFilesResult.h"
#include "model/DescribeBackupsForSecurityRequest.h"
#include "model/DescribeBackupsForSecurityResult.h"
#include "model/CreateDiagnosticReportRequest.h"
#include "model/CreateDiagnosticReportResult.h"
#include "model/DescribeSQLLogReportListRequest.h"
#include "model/DescribeSQLLogReportListResult.h"
#include "model/DescribeResourceDiagnosisRequest.h"
#include "model/DescribeResourceDiagnosisResult.h"
#include "model/CloneDBInstanceRequest.h"
#include "model/CloneDBInstanceResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/CreateUploadPathForSQLServerRequest.h"
#include "model/CreateUploadPathForSQLServerResult.h"
#include "model/DescribeRenewalPriceRequest.h"
#include "model/DescribeRenewalPriceResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/DescribeOptimizeAdviceOnStorageRequest.h"
#include "model/DescribeOptimizeAdviceOnStorageResult.h"
#include "model/DescribeInstanceAutoRenewAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewAttributeResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceUserRequest.h"
#include "model/DescribeDBInstanceUserResult.h"
#include "model/CreateTempDBInstanceRequest.h"
#include "model/CreateTempDBInstanceResult.h"
#include "model/DescribeImportsForSQLServerRequest.h"
#include "model/DescribeImportsForSQLServerResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeSQLCollectorPolicyRequest.h"
#include "model/DescribeSQLCollectorPolicyResult.h"
#include "model/ModifySQLCollectorPolicyRequest.h"
#include "model/ModifySQLCollectorPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DescribeSQLInjectionInfosRequest.h"
#include "model/DescribeSQLInjectionInfosResult.h"
#include "model/DescribeRealtimeDiagnosesRequest.h"
#include "model/DescribeRealtimeDiagnosesResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/RestoreDBInstanceRequest.h"
#include "model/RestoreDBInstanceResult.h"
#include "model/AddBuDBInstanceRelationRequest.h"
#include "model/AddBuDBInstanceRelationResult.h"
#include "model/RevokeOperatorPermissionRequest.h"
#include "model/RevokeOperatorPermissionResult.h"
#include "model/ModifyDBInstanceSpecRequest.h"
#include "model/ModifyDBInstanceSpecResult.h"
#include "model/DescribeDiagnosticReportListRequest.h"
#include "model/DescribeDiagnosticReportListResult.h"
#include "model/RemoveTagsFromResourceRequest.h"
#include "model/RemoveTagsFromResourceResult.h"
#include "model/DescribeSQLLogRecordsRequest.h"
#include "model/DescribeSQLLogRecordsResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/DescribeMigrateTasksForSQLServerRequest.h"
#include "model/DescribeMigrateTasksForSQLServerResult.h"
#include "model/ModifyReplicaModeRequest.h"
#include "model/ModifyReplicaModeResult.h"
#include "model/DeleteDampPolicyRequest.h"
#include "model/DeleteDampPolicyResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/GrantOperatorPermissionRequest.h"
#include "model/GrantOperatorPermissionResult.h"
#include "model/ModifyPostpaidDBInstanceSpecRequest.h"
#include "model/ModifyPostpaidDBInstanceSpecResult.h"
#include "model/CreatePolicyWithSpecifiedPolicyRequest.h"
#include "model/CreatePolicyWithSpecifiedPolicyResult.h"
#include "model/ModifyDBInstanceTDERequest.h"
#include "model/ModifyDBInstanceTDEResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeVpcZoneNosRequest.h"
#include "model/DescribeVpcZoneNosResult.h"
#include "model/DescribeOptimizeAdviceOnBigTableRequest.h"
#include "model/DescribeOptimizeAdviceOnBigTableResult.h"
#include "model/DescribeDBInstanceExtendAttributeRequest.h"
#include "model/DescribeDBInstanceExtendAttributeResult.h"
#include "model/DescribeDampPolicyByCommentRequest.h"
#include "model/DescribeDampPolicyByCommentResult.h"
#include "model/DescribePreCheckResultsRequest.h"
#include "model/DescribePreCheckResultsResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/StartArchiveSQLLogRequest.h"
#include "model/StartArchiveSQLLogResult.h"
#include "model/CreateDBInstanceReplicaRequest.h"
#include "model/CreateDBInstanceReplicaResult.h"
#include "model/ModifyDampPolicyRequest.h"
#include "model/ModifyDampPolicyResult.h"
#include "model/AllocateInstancePrivateConnectionRequest.h"
#include "model/AllocateInstancePrivateConnectionResult.h"
#include "model/RevokeAccountPrivilegeRequest.h"
#include "model/RevokeAccountPrivilegeResult.h"
#include "model/DegradeDBInstanceSpecRequest.h"
#include "model/DegradeDBInstanceSpecResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescibeImportsFromDatabaseRequest.h"
#include "model/DescibeImportsFromDatabaseResult.h"
#include "model/DescribeDatabaseLockDiagnosisRequest.h"
#include "model/DescribeDatabaseLockDiagnosisResult.h"
#include "model/DescribeOptimizeAdviceOnExcessIndexRequest.h"
#include "model/DescribeOptimizeAdviceOnExcessIndexResult.h"
#include "model/CopyDatabaseRequest.h"
#include "model/CopyDatabaseResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/DescribeDBInstanceTDERequest.h"
#include "model/DescribeDBInstanceTDEResult.h"
#include "model/ModifyDBInstanceSSLRequest.h"
#include "model/ModifyDBInstanceSSLResult.h"
#include "model/DescribeSQLLogReportsRequest.h"
#include "model/DescribeSQLLogReportsResult.h"
#include "model/DescribeSQLDiagnosisListRequest.h"
#include "model/DescribeSQLDiagnosisListResult.h"
#include "model/ModifyDBInstanceConnectionModeRequest.h"
#include "model/ModifyDBInstanceConnectionModeResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/AllocateReadWriteSplittingConnectionRequest.h"
#include "model/AllocateReadWriteSplittingConnectionResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/CalculateDBInstanceWeightRequest.h"
#include "model/CalculateDBInstanceWeightResult.h"
#include "model/ModifyReplicaRelationRequest.h"
#include "model/ModifyReplicaRelationResult.h"
#include "model/ModifyDBInstanceNetworkTypeRequest.h"
#include "model/ModifyDBInstanceNetworkTypeResult.h"
#include "model/DescribeDBInstanceNetworkRequest.h"
#include "model/DescribeDBInstanceNetworkResult.h"
#include "model/DescribeAbnormalDBInstancesRequest.h"
#include "model/DescribeAbnormalDBInstancesResult.h"
#include "model/DescribeSlowLogsRequest.h"
#include "model/DescribeSlowLogsResult.h"
#include "model/CreateSQLDiagnosisRequest.h"
#include "model/CreateSQLDiagnosisResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/DescribeReplicaUsageRequest.h"
#include "model/DescribeReplicaUsageResult.h"
#include "model/ModifyReadWriteSplittingConnectionRequest.h"
#include "model/ModifyReadWriteSplittingConnectionResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/DescribeDBInstanceNetworkDetailRequest.h"
#include "model/DescribeDBInstanceNetworkDetailResult.h"
#include "model/DescribeReplicaPerformanceRequest.h"
#include "model/DescribeReplicaPerformanceResult.h"
#include "model/DescribeSQLDiagnosisRequest.h"
#include "model/DescribeSQLDiagnosisResult.h"
#include "model/DescribeDampPolicyByPolicyNameRequest.h"
#include "model/DescribeDampPolicyByPolicyNameResult.h"
#include "model/ModifyResourceGroupRequest.h"
#include "model/ModifyResourceGroupResult.h"
#include "model/DescribeOssDownloadsForSQLServerRequest.h"
#include "model/DescribeOssDownloadsForSQLServerResult.h"
#include "model/RequestServiceOfCloudDBARequest.h"
#include "model/RequestServiceOfCloudDBAResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/PreCheckBeforeImportDataRequest.h"
#include "model/PreCheckBeforeImportDataResult.h"
#include "model/DescribeResourceUsageRequest.h"
#include "model/DescribeResourceUsageResult.h"
#include "model/PurgeDBInstanceLogRequest.h"
#include "model/PurgeDBInstanceLogResult.h"
#include "model/DescribeTaskInfoRequest.h"
#include "model/DescribeTaskInfoResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/DescribeOptimizeAdviceOnMissPKRequest.h"
#include "model/DescribeOptimizeAdviceOnMissPKResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/UpgradeDBInstanceNetworkRequest.h"
#include "model/UpgradeDBInstanceNetworkResult.h"
#include "model/ReleaseReadWriteSplittingConnectionRequest.h"
#include "model/ReleaseReadWriteSplittingConnectionResult.h"
#include "model/DescribeFilesForSQLServerRequest.h"
#include "model/DescribeFilesForSQLServerResult.h"
#include "model/DescribeErrorLogsRequest.h"
#include "model/DescribeErrorLogsResult.h"
#include "model/ModifyDBInstanceHAConfigRequest.h"
#include "model/ModifyDBInstanceHAConfigResult.h"
#include "model/DescribeDBInstancesAsCsvRequest.h"
#include "model/DescribeDBInstancesAsCsvResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeDBInstanceByTagsRequest.h"
#include "model/DescribeDBInstanceByTagsResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/CreateDampPolicyRequest.h"
#include "model/CreateDampPolicyResult.h"
#include "model/DescribeDBInstancesByPerformanceRequest.h"
#include "model/DescribeDBInstancesByPerformanceResult.h"
#include "model/RenewDBInstanceRequest.h"
#include "model/RenewDBInstanceResult.h"
#include "model/QueryPriceForBuyRequest.h"
#include "model/QueryPriceForBuyResult.h"
#include "model/DescribeSQLReportsRequest.h"
#include "model/DescribeSQLReportsResult.h"
#include "model/DescribeBackupTasksRequest.h"
#include "model/DescribeBackupTasksResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/ModifyGuardDomainModeRequest.h"
#include "model/ModifyGuardDomainModeResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/CreateMigrateTaskForSQLServerRequest.h"
#include "model/CreateMigrateTaskForSQLServerResult.h"
#include "model/DescribeDBInstanceIPArrayListRequest.h"
#include "model/DescribeDBInstanceIPArrayListResult.h"
#include "model/SwitchDBInstanceHARequest.h"
#include "model/SwitchDBInstanceHAResult.h"
#include "model/ResetAccountForPGRequest.h"
#include "model/ResetAccountForPGResult.h"
#include "model/DescribeBackupSetsForSecurityRequest.h"
#include "model/DescribeBackupSetsForSecurityResult.h"


namespace AlibabaCloud
{
	namespace Rds
	{
		class ALIBABACLOUD_RDS_EXPORT RdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateMigrateTaskResult> CreateMigrateTaskOutcome;			
			typedef std::future<CreateMigrateTaskOutcome> CreateMigrateTaskOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateMigrateTaskRequest&, const CreateMigrateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateTaskAsyncHandler;
			typedef Outcome<Error, Model::CheckRecoveryConditionsResult> CheckRecoveryConditionsOutcome;			
			typedef std::future<CheckRecoveryConditionsOutcome> CheckRecoveryConditionsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CheckRecoveryConditionsRequest&, const CheckRecoveryConditionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRecoveryConditionsAsyncHandler;
			typedef Outcome<Error, Model::LoginDBInstancefromCloudDBAResult> LoginDBInstancefromCloudDBAOutcome;			
			typedef std::future<LoginDBInstancefromCloudDBAOutcome> LoginDBInstancefromCloudDBAOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::LoginDBInstancefromCloudDBARequest&, const LoginDBInstancefromCloudDBAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoginDBInstancefromCloudDBAAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupResult> DeleteBackupOutcome;			
			typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DeleteBackupRequest&, const DeleteBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;			
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesByExpireTimeResult> DescribeDBInstancesByExpireTimeOutcome;			
			typedef std::future<DescribeDBInstancesByExpireTimeOutcome> DescribeDBInstancesByExpireTimeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesByExpireTimeRequest&, const DescribeDBInstancesByExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesByExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceNetTypeResult> SwitchDBInstanceNetTypeOutcome;			
			typedef std::future<SwitchDBInstanceNetTypeOutcome> SwitchDBInstanceNetTypeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceNetTypeRequest&, const SwitchDBInstanceNetTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceNetTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMonitorResult> DescribeDBInstanceMonitorOutcome;			
			typedef std::future<DescribeDBInstanceMonitorOutcome> DescribeDBInstanceMonitorOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceMonitorRequest&, const DescribeDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateReadOnlyDBInstanceResult> CreateReadOnlyDBInstanceOutcome;			
			typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateReadOnlyDBInstanceRequest&, const CreateReadOnlyDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;			
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceHAConfigResult> DescribeDBInstanceHAConfigOutcome;			
			typedef std::future<DescribeDBInstanceHAConfigOutcome> DescribeDBInstanceHAConfigOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceHAConfigRequest&, const DescribeDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssDownloadsResult> DescribeOssDownloadsOutcome;			
			typedef std::future<DescribeOssDownloadsOutcome> DescribeOssDownloadsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOssDownloadsRequest&, const DescribeOssDownloadsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssDownloadsAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;			
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ReleaseReplicaResult> ReleaseReplicaOutcome;			
			typedef std::future<ReleaseReplicaOutcome> ReleaseReplicaOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ReleaseReplicaRequest&, const ReleaseReplicaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseReplicaAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResult> UpgradeDBInstanceEngineVersionOutcome;			
			typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, const UpgradeDBInstanceEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicasResult> DescribeReplicasOutcome;			
			typedef std::future<DescribeReplicasOutcome> DescribeReplicasOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeReplicasRequest&, const DescribeReplicasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicasAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;			
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::StopSyncingResult> StopSyncingOutcome;			
			typedef std::future<StopSyncingOutcome> StopSyncingOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::StopSyncingRequest&, const StopSyncingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopSyncingAsyncHandler;
			typedef Outcome<Error, Model::CheckAccountNameAvailableResult> CheckAccountNameAvailableOutcome;			
			typedef std::future<CheckAccountNameAvailableOutcome> CheckAccountNameAvailableOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CheckAccountNameAvailableRequest&, const CheckAccountNameAvailableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountNameAvailableAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;			
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ImportDataForSQLServerResult> ImportDataForSQLServerOutcome;			
			typedef std::future<ImportDataForSQLServerOutcome> ImportDataForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ImportDataForSQLServerRequest&, const ImportDataForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDataForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogicDBInstanceTopologyResult> DescribeLogicDBInstanceTopologyOutcome;			
			typedef std::future<DescribeLogicDBInstanceTopologyOutcome> DescribeLogicDBInstanceTopologyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeLogicDBInstanceTopologyRequest&, const DescribeLogicDBInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogicDBInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;			
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::CheckResourceResult> CheckResourceOutcome;			
			typedef std::future<CheckResourceOutcome> CheckResourceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CheckResourceRequest&, const CheckResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckResourceAsyncHandler;
			typedef Outcome<Error, Model::StartDBInstanceDiagnoseResult> StartDBInstanceDiagnoseOutcome;			
			typedef std::future<StartDBInstanceDiagnoseOutcome> StartDBInstanceDiagnoseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::StartDBInstanceDiagnoseRequest&, const StartDBInstanceDiagnoseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDBInstanceDiagnoseAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupConfigurationResult> ModifySecurityGroupConfigurationOutcome;			
			typedef std::future<ModifySecurityGroupConfigurationOutcome> ModifySecurityGroupConfigurationOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifySecurityGroupConfigurationRequest&, const ModifySecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharacterSetNameResult> DescribeCharacterSetNameOutcome;			
			typedef std::future<DescribeCharacterSetNameOutcome> DescribeCharacterSetNameOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeCharacterSetNameRequest&, const DescribeCharacterSetNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharacterSetNameAsyncHandler;
			typedef Outcome<Error, Model::ImportDataFromDatabaseResult> ImportDataFromDatabaseOutcome;			
			typedef std::future<ImportDataFromDatabaseOutcome> ImportDataFromDatabaseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ImportDataFromDatabaseRequest&, const ImportDataFromDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDataFromDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTasksResult> DescribeMigrateTasksOutcome;			
			typedef std::future<DescribeMigrateTasksOutcome> DescribeMigrateTasksOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTasksRequest&, const DescribeMigrateTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTasksAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkExpireTimeResult> ModifyDBInstanceNetworkExpireTimeOutcome;			
			typedef std::future<ModifyDBInstanceNetworkExpireTimeOutcome> ModifyDBInstanceNetworkExpireTimeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceNetworkExpireTimeRequest&, const ModifyDBInstanceNetworkExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;			
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;			
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperatorPermissionResult> DescribeOperatorPermissionOutcome;			
			typedef std::future<DescribeOperatorPermissionOutcome> DescribeOperatorPermissionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOperatorPermissionRequest&, const DescribeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeOptimizeAdviceOnMissIndexResult> DescribeOptimizeAdviceOnMissIndexOutcome;			
			typedef std::future<DescribeOptimizeAdviceOnMissIndexOutcome> DescribeOptimizeAdviceOnMissIndexOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOptimizeAdviceOnMissIndexRequest&, const DescribeOptimizeAdviceOnMissIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOptimizeAdviceOnMissIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeDampPoliciesByCidResult> DescribeDampPoliciesByCidOutcome;			
			typedef std::future<DescribeDampPoliciesByCidOutcome> DescribeDampPoliciesByCidOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDampPoliciesByCidRequest&, const DescribeDampPoliciesByCidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDampPoliciesByCidAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionResult> ModifyDBDescriptionOutcome;			
			typedef std::future<ModifyDBDescriptionOutcome> ModifyDBDescriptionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBDescriptionRequest&, const ModifyDBDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ImportDatabaseBetweenInstancesResult> ImportDatabaseBetweenInstancesOutcome;			
			typedef std::future<ImportDatabaseBetweenInstancesOutcome> ImportDatabaseBetweenInstancesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ImportDatabaseBetweenInstancesRequest&, const ImportDatabaseBetweenInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDatabaseBetweenInstancesAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;			
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::CheckDBNameAvailableResult> CheckDBNameAvailableOutcome;			
			typedef std::future<CheckDBNameAvailableOutcome> CheckDBNameAvailableOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CheckDBNameAvailableRequest&, const CheckDBNameAvailableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDBNameAvailableAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMonitorResult> ModifyDBInstanceMonitorOutcome;			
			typedef std::future<ModifyDBInstanceMonitorOutcome> ModifyDBInstanceMonitorOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMonitorRequest&, const ModifyDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogFilesResult> DescribeSQLLogFilesOutcome;			
			typedef std::future<DescribeSQLLogFilesOutcome> DescribeSQLLogFilesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogFilesRequest&, const DescribeSQLLogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogFilesAsyncHandler;
			typedef Outcome<Error, Model::CancelImportResult> CancelImportOutcome;			
			typedef std::future<CancelImportOutcome> CancelImportOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CancelImportRequest&, const CancelImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelImportAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaDescriptionResult> ModifyReplicaDescriptionOutcome;			
			typedef std::future<ModifyReplicaDescriptionOutcome> ModifyReplicaDescriptionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyReplicaDescriptionRequest&, const ModifyReplicaDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;			
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaInitializeProgressResult> DescribeReplicaInitializeProgressOutcome;			
			typedef std::future<DescribeReplicaInitializeProgressOutcome> DescribeReplicaInitializeProgressOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeReplicaInitializeProgressRequest&, const DescribeReplicaInitializeProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaInitializeProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupConfigurationResult> DescribeSecurityGroupConfigurationOutcome;			
			typedef std::future<DescribeSecurityGroupConfigurationOutcome> DescribeSecurityGroupConfigurationOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSecurityGroupConfigurationRequest&, const DescribeSecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;			
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceNetWorkInfoResult> UpgradeDBInstanceNetWorkInfoOutcome;			
			typedef std::future<UpgradeDBInstanceNetWorkInfoOutcome> UpgradeDBInstanceNetWorkInfoOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceNetWorkInfoRequest&, const UpgradeDBInstanceNetWorkInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceNetWorkInfoAsyncHandler;
			typedef Outcome<Error, Model::AddTagsToResourceResult> AddTagsToResourceOutcome;			
			typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::AddTagsToResourceRequest&, const AddTagsToResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsToResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBinlogFilesResult> DescribeBinlogFilesOutcome;			
			typedef std::future<DescribeBinlogFilesOutcome> DescribeBinlogFilesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBinlogFilesRequest&, const DescribeBinlogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsForSecurityResult> DescribeBackupsForSecurityOutcome;			
			typedef std::future<DescribeBackupsForSecurityOutcome> DescribeBackupsForSecurityOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupsForSecurityRequest&, const DescribeBackupsForSecurityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsForSecurityAsyncHandler;
			typedef Outcome<Error, Model::CreateDiagnosticReportResult> CreateDiagnosticReportOutcome;			
			typedef std::future<CreateDiagnosticReportOutcome> CreateDiagnosticReportOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateDiagnosticReportRequest&, const CreateDiagnosticReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiagnosticReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogReportListResult> DescribeSQLLogReportListOutcome;			
			typedef std::future<DescribeSQLLogReportListOutcome> DescribeSQLLogReportListOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogReportListRequest&, const DescribeSQLLogReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceDiagnosisResult> DescribeResourceDiagnosisOutcome;			
			typedef std::future<DescribeResourceDiagnosisOutcome> DescribeResourceDiagnosisOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeResourceDiagnosisRequest&, const DescribeResourceDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::CloneDBInstanceResult> CloneDBInstanceOutcome;			
			typedef std::future<CloneDBInstanceOutcome> CloneDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CloneDBInstanceRequest&, const CloneDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;			
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadPathForSQLServerResult> CreateUploadPathForSQLServerOutcome;			
			typedef std::future<CreateUploadPathForSQLServerOutcome> CreateUploadPathForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateUploadPathForSQLServerRequest&, const CreateUploadPathForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadPathForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewalPriceResult> DescribeRenewalPriceOutcome;			
			typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeRenewalPriceRequest&, const DescribeRenewalPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;			
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeOptimizeAdviceOnStorageResult> DescribeOptimizeAdviceOnStorageOutcome;			
			typedef std::future<DescribeOptimizeAdviceOnStorageOutcome> DescribeOptimizeAdviceOnStorageOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOptimizeAdviceOnStorageRequest&, const DescribeOptimizeAdviceOnStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOptimizeAdviceOnStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewAttributeResult> DescribeInstanceAutoRenewAttributeOutcome;			
			typedef std::future<DescribeInstanceAutoRenewAttributeOutcome> DescribeInstanceAutoRenewAttributeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceAutoRenewAttributeRequest&, const DescribeInstanceAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;			
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceUserResult> DescribeDBInstanceUserOutcome;			
			typedef std::future<DescribeDBInstanceUserOutcome> DescribeDBInstanceUserOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceUserRequest&, const DescribeDBInstanceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceUserAsyncHandler;
			typedef Outcome<Error, Model::CreateTempDBInstanceResult> CreateTempDBInstanceOutcome;			
			typedef std::future<CreateTempDBInstanceOutcome> CreateTempDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateTempDBInstanceRequest&, const CreateTempDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTempDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeImportsForSQLServerResult> DescribeImportsForSQLServerOutcome;			
			typedef std::future<DescribeImportsForSQLServerOutcome> DescribeImportsForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeImportsForSQLServerRequest&, const DescribeImportsForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportsForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;			
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLCollectorPolicyResult> DescribeSQLCollectorPolicyOutcome;			
			typedef std::future<DescribeSQLCollectorPolicyOutcome> DescribeSQLCollectorPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLCollectorPolicyRequest&, const DescribeSQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLCollectorPolicyResult> ModifySQLCollectorPolicyOutcome;			
			typedef std::future<ModifySQLCollectorPolicyOutcome> ModifySQLCollectorPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifySQLCollectorPolicyRequest&, const ModifySQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;			
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;			
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;			
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLInjectionInfosResult> DescribeSQLInjectionInfosOutcome;			
			typedef std::future<DescribeSQLInjectionInfosOutcome> DescribeSQLInjectionInfosOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLInjectionInfosRequest&, const DescribeSQLInjectionInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLInjectionInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribeRealtimeDiagnosesResult> DescribeRealtimeDiagnosesOutcome;			
			typedef std::future<DescribeRealtimeDiagnosesOutcome> DescribeRealtimeDiagnosesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeRealtimeDiagnosesRequest&, const DescribeRealtimeDiagnosesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeDiagnosesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;			
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::RestoreDBInstanceResult> RestoreDBInstanceOutcome;			
			typedef std::future<RestoreDBInstanceOutcome> RestoreDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RestoreDBInstanceRequest&, const RestoreDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::AddBuDBInstanceRelationResult> AddBuDBInstanceRelationOutcome;			
			typedef std::future<AddBuDBInstanceRelationOutcome> AddBuDBInstanceRelationOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::AddBuDBInstanceRelationRequest&, const AddBuDBInstanceRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBuDBInstanceRelationAsyncHandler;
			typedef Outcome<Error, Model::RevokeOperatorPermissionResult> RevokeOperatorPermissionOutcome;			
			typedef std::future<RevokeOperatorPermissionOutcome> RevokeOperatorPermissionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RevokeOperatorPermissionRequest&, const RevokeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSpecResult> ModifyDBInstanceSpecOutcome;			
			typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSpecRequest&, const ModifyDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosticReportListResult> DescribeDiagnosticReportListOutcome;			
			typedef std::future<DescribeDiagnosticReportListOutcome> DescribeDiagnosticReportListOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDiagnosticReportListRequest&, const DescribeDiagnosticReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosticReportListAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsFromResourceResult> RemoveTagsFromResourceOutcome;			
			typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RemoveTagsFromResourceRequest&, const RemoveTagsFromResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsFromResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogRecordsResult> DescribeSQLLogRecordsOutcome;			
			typedef std::future<DescribeSQLLogRecordsOutcome> DescribeSQLLogRecordsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogRecordsRequest&, const DescribeSQLLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;			
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTasksForSQLServerResult> DescribeMigrateTasksForSQLServerOutcome;			
			typedef std::future<DescribeMigrateTasksForSQLServerOutcome> DescribeMigrateTasksForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTasksForSQLServerRequest&, const DescribeMigrateTasksForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTasksForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaModeResult> ModifyReplicaModeOutcome;			
			typedef std::future<ModifyReplicaModeOutcome> ModifyReplicaModeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyReplicaModeRequest&, const ModifyReplicaModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaModeAsyncHandler;
			typedef Outcome<Error, Model::DeleteDampPolicyResult> DeleteDampPolicyOutcome;			
			typedef std::future<DeleteDampPolicyOutcome> DeleteDampPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DeleteDampPolicyRequest&, const DeleteDampPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDampPolicyAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;			
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::GrantOperatorPermissionResult> GrantOperatorPermissionOutcome;			
			typedef std::future<GrantOperatorPermissionOutcome> GrantOperatorPermissionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::GrantOperatorPermissionRequest&, const GrantOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::ModifyPostpaidDBInstanceSpecResult> ModifyPostpaidDBInstanceSpecOutcome;			
			typedef std::future<ModifyPostpaidDBInstanceSpecOutcome> ModifyPostpaidDBInstanceSpecOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyPostpaidDBInstanceSpecRequest&, const ModifyPostpaidDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPostpaidDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyWithSpecifiedPolicyResult> CreatePolicyWithSpecifiedPolicyOutcome;			
			typedef std::future<CreatePolicyWithSpecifiedPolicyOutcome> CreatePolicyWithSpecifiedPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreatePolicyWithSpecifiedPolicyRequest&, const CreatePolicyWithSpecifiedPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyWithSpecifiedPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceTDEResult> ModifyDBInstanceTDEOutcome;			
			typedef std::future<ModifyDBInstanceTDEOutcome> ModifyDBInstanceTDEOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceTDERequest&, const ModifyDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;			
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcZoneNosResult> DescribeVpcZoneNosOutcome;			
			typedef std::future<DescribeVpcZoneNosOutcome> DescribeVpcZoneNosOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeVpcZoneNosRequest&, const DescribeVpcZoneNosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcZoneNosAsyncHandler;
			typedef Outcome<Error, Model::DescribeOptimizeAdviceOnBigTableResult> DescribeOptimizeAdviceOnBigTableOutcome;			
			typedef std::future<DescribeOptimizeAdviceOnBigTableOutcome> DescribeOptimizeAdviceOnBigTableOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOptimizeAdviceOnBigTableRequest&, const DescribeOptimizeAdviceOnBigTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOptimizeAdviceOnBigTableAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceExtendAttributeResult> DescribeDBInstanceExtendAttributeOutcome;			
			typedef std::future<DescribeDBInstanceExtendAttributeOutcome> DescribeDBInstanceExtendAttributeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceExtendAttributeRequest&, const DescribeDBInstanceExtendAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceExtendAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDampPolicyByCommentResult> DescribeDampPolicyByCommentOutcome;			
			typedef std::future<DescribeDampPolicyByCommentOutcome> DescribeDampPolicyByCommentOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDampPolicyByCommentRequest&, const DescribeDampPolicyByCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDampPolicyByCommentAsyncHandler;
			typedef Outcome<Error, Model::DescribePreCheckResultsResult> DescribePreCheckResultsOutcome;			
			typedef std::future<DescribePreCheckResultsOutcome> DescribePreCheckResultsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribePreCheckResultsRequest&, const DescribePreCheckResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCheckResultsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;			
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::StartArchiveSQLLogResult> StartArchiveSQLLogOutcome;			
			typedef std::future<StartArchiveSQLLogOutcome> StartArchiveSQLLogOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::StartArchiveSQLLogRequest&, const StartArchiveSQLLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartArchiveSQLLogAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceReplicaResult> CreateDBInstanceReplicaOutcome;			
			typedef std::future<CreateDBInstanceReplicaOutcome> CreateDBInstanceReplicaOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceReplicaRequest&, const CreateDBInstanceReplicaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceReplicaAsyncHandler;
			typedef Outcome<Error, Model::ModifyDampPolicyResult> ModifyDampPolicyOutcome;			
			typedef std::future<ModifyDampPolicyOutcome> ModifyDampPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDampPolicyRequest&, const ModifyDampPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDampPolicyAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePrivateConnectionResult> AllocateInstancePrivateConnectionOutcome;			
			typedef std::future<AllocateInstancePrivateConnectionOutcome> AllocateInstancePrivateConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::AllocateInstancePrivateConnectionRequest&, const AllocateInstancePrivateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePrivateConnectionAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeResult> RevokeAccountPrivilegeOutcome;			
			typedef std::future<RevokeAccountPrivilegeOutcome> RevokeAccountPrivilegeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RevokeAccountPrivilegeRequest&, const RevokeAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::DegradeDBInstanceSpecResult> DegradeDBInstanceSpecOutcome;			
			typedef std::future<DegradeDBInstanceSpecOutcome> DegradeDBInstanceSpecOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DegradeDBInstanceSpecRequest&, const DegradeDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DegradeDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;			
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescibeImportsFromDatabaseResult> DescibeImportsFromDatabaseOutcome;			
			typedef std::future<DescibeImportsFromDatabaseOutcome> DescibeImportsFromDatabaseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescibeImportsFromDatabaseRequest&, const DescibeImportsFromDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescibeImportsFromDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseLockDiagnosisResult> DescribeDatabaseLockDiagnosisOutcome;			
			typedef std::future<DescribeDatabaseLockDiagnosisOutcome> DescribeDatabaseLockDiagnosisOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDatabaseLockDiagnosisRequest&, const DescribeDatabaseLockDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseLockDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::DescribeOptimizeAdviceOnExcessIndexResult> DescribeOptimizeAdviceOnExcessIndexOutcome;			
			typedef std::future<DescribeOptimizeAdviceOnExcessIndexOutcome> DescribeOptimizeAdviceOnExcessIndexOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOptimizeAdviceOnExcessIndexRequest&, const DescribeOptimizeAdviceOnExcessIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOptimizeAdviceOnExcessIndexAsyncHandler;
			typedef Outcome<Error, Model::CopyDatabaseResult> CopyDatabaseOutcome;			
			typedef std::future<CopyDatabaseOutcome> CopyDatabaseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CopyDatabaseRequest&, const CopyDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;			
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceTDEResult> DescribeDBInstanceTDEOutcome;			
			typedef std::future<DescribeDBInstanceTDEOutcome> DescribeDBInstanceTDEOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceTDERequest&, const DescribeDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSSLResult> ModifyDBInstanceSSLOutcome;			
			typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSSLRequest&, const ModifyDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogReportsResult> DescribeSQLLogReportsOutcome;			
			typedef std::future<DescribeSQLLogReportsOutcome> DescribeSQLLogReportsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogReportsRequest&, const DescribeSQLLogReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogReportsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLDiagnosisListResult> DescribeSQLDiagnosisListOutcome;			
			typedef std::future<DescribeSQLDiagnosisListOutcome> DescribeSQLDiagnosisListOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLDiagnosisListRequest&, const DescribeSQLDiagnosisListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLDiagnosisListAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionModeResult> ModifyDBInstanceConnectionModeOutcome;			
			typedef std::future<ModifyDBInstanceConnectionModeOutcome> ModifyDBInstanceConnectionModeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConnectionModeRequest&, const ModifyDBInstanceConnectionModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;			
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::AllocateReadWriteSplittingConnectionResult> AllocateReadWriteSplittingConnectionOutcome;			
			typedef std::future<AllocateReadWriteSplittingConnectionOutcome> AllocateReadWriteSplittingConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::AllocateReadWriteSplittingConnectionRequest&, const AllocateReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;			
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CalculateDBInstanceWeightResult> CalculateDBInstanceWeightOutcome;			
			typedef std::future<CalculateDBInstanceWeightOutcome> CalculateDBInstanceWeightOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CalculateDBInstanceWeightRequest&, const CalculateDBInstanceWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalculateDBInstanceWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaRelationResult> ModifyReplicaRelationOutcome;			
			typedef std::future<ModifyReplicaRelationOutcome> ModifyReplicaRelationOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyReplicaRelationRequest&, const ModifyReplicaRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaRelationAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkTypeResult> ModifyDBInstanceNetworkTypeOutcome;			
			typedef std::future<ModifyDBInstanceNetworkTypeOutcome> ModifyDBInstanceNetworkTypeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceNetworkTypeRequest&, const ModifyDBInstanceNetworkTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetworkResult> DescribeDBInstanceNetworkOutcome;			
			typedef std::future<DescribeDBInstanceNetworkOutcome> DescribeDBInstanceNetworkOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetworkRequest&, const DescribeDBInstanceNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeAbnormalDBInstancesResult> DescribeAbnormalDBInstancesOutcome;			
			typedef std::future<DescribeAbnormalDBInstancesOutcome> DescribeAbnormalDBInstancesOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeAbnormalDBInstancesRequest&, const DescribeAbnormalDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogsResult> DescribeSlowLogsOutcome;			
			typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogsRequest&, const DescribeSlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
			typedef Outcome<Error, Model::CreateSQLDiagnosisResult> CreateSQLDiagnosisOutcome;			
			typedef std::future<CreateSQLDiagnosisOutcome> CreateSQLDiagnosisOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateSQLDiagnosisRequest&, const CreateSQLDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSQLDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;			
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaUsageResult> DescribeReplicaUsageOutcome;			
			typedef std::future<DescribeReplicaUsageOutcome> DescribeReplicaUsageOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeReplicaUsageRequest&, const DescribeReplicaUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaUsageAsyncHandler;
			typedef Outcome<Error, Model::ModifyReadWriteSplittingConnectionResult> ModifyReadWriteSplittingConnectionOutcome;			
			typedef std::future<ModifyReadWriteSplittingConnectionOutcome> ModifyReadWriteSplittingConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyReadWriteSplittingConnectionRequest&, const ModifyReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;			
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;			
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetworkDetailResult> DescribeDBInstanceNetworkDetailOutcome;			
			typedef std::future<DescribeDBInstanceNetworkDetailOutcome> DescribeDBInstanceNetworkDetailOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetworkDetailRequest&, const DescribeDBInstanceNetworkDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetworkDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaPerformanceResult> DescribeReplicaPerformanceOutcome;			
			typedef std::future<DescribeReplicaPerformanceOutcome> DescribeReplicaPerformanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeReplicaPerformanceRequest&, const DescribeReplicaPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLDiagnosisResult> DescribeSQLDiagnosisOutcome;			
			typedef std::future<DescribeSQLDiagnosisOutcome> DescribeSQLDiagnosisOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLDiagnosisRequest&, const DescribeSQLDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::DescribeDampPolicyByPolicyNameResult> DescribeDampPolicyByPolicyNameOutcome;			
			typedef std::future<DescribeDampPolicyByPolicyNameOutcome> DescribeDampPolicyByPolicyNameOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDampPolicyByPolicyNameRequest&, const DescribeDampPolicyByPolicyNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDampPolicyByPolicyNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceGroupResult> ModifyResourceGroupOutcome;			
			typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyResourceGroupRequest&, const ModifyResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssDownloadsForSQLServerResult> DescribeOssDownloadsForSQLServerOutcome;			
			typedef std::future<DescribeOssDownloadsForSQLServerOutcome> DescribeOssDownloadsForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOssDownloadsForSQLServerRequest&, const DescribeOssDownloadsForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssDownloadsForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::RequestServiceOfCloudDBAResult> RequestServiceOfCloudDBAOutcome;			
			typedef std::future<RequestServiceOfCloudDBAOutcome> RequestServiceOfCloudDBAOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RequestServiceOfCloudDBARequest&, const RequestServiceOfCloudDBAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestServiceOfCloudDBAAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;			
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::PreCheckBeforeImportDataResult> PreCheckBeforeImportDataOutcome;			
			typedef std::future<PreCheckBeforeImportDataOutcome> PreCheckBeforeImportDataOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::PreCheckBeforeImportDataRequest&, const PreCheckBeforeImportDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreCheckBeforeImportDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceUsageResult> DescribeResourceUsageOutcome;			
			typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeResourceUsageRequest&, const DescribeResourceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
			typedef Outcome<Error, Model::PurgeDBInstanceLogResult> PurgeDBInstanceLogOutcome;			
			typedef std::future<PurgeDBInstanceLogOutcome> PurgeDBInstanceLogOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::PurgeDBInstanceLogRequest&, const PurgeDBInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurgeDBInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskInfoResult> DescribeTaskInfoOutcome;			
			typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeTaskInfoRequest&, const DescribeTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;			
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;			
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::DescribeOptimizeAdviceOnMissPKResult> DescribeOptimizeAdviceOnMissPKOutcome;			
			typedef std::future<DescribeOptimizeAdviceOnMissPKOutcome> DescribeOptimizeAdviceOnMissPKOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeOptimizeAdviceOnMissPKRequest&, const DescribeOptimizeAdviceOnMissPKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOptimizeAdviceOnMissPKAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;			
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;			
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceNetworkResult> UpgradeDBInstanceNetworkOutcome;			
			typedef std::future<UpgradeDBInstanceNetworkOutcome> UpgradeDBInstanceNetworkOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceNetworkRequest&, const UpgradeDBInstanceNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceNetworkAsyncHandler;
			typedef Outcome<Error, Model::ReleaseReadWriteSplittingConnectionResult> ReleaseReadWriteSplittingConnectionOutcome;			
			typedef std::future<ReleaseReadWriteSplittingConnectionOutcome> ReleaseReadWriteSplittingConnectionOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ReleaseReadWriteSplittingConnectionRequest&, const ReleaseReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeFilesForSQLServerResult> DescribeFilesForSQLServerOutcome;			
			typedef std::future<DescribeFilesForSQLServerOutcome> DescribeFilesForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeFilesForSQLServerRequest&, const DescribeFilesForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilesForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeErrorLogsResult> DescribeErrorLogsOutcome;			
			typedef std::future<DescribeErrorLogsOutcome> DescribeErrorLogsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeErrorLogsRequest&, const DescribeErrorLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceHAConfigResult> ModifyDBInstanceHAConfigOutcome;			
			typedef std::future<ModifyDBInstanceHAConfigOutcome> ModifyDBInstanceHAConfigOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceHAConfigRequest&, const ModifyDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesAsCsvResult> DescribeDBInstancesAsCsvOutcome;			
			typedef std::future<DescribeDBInstancesAsCsvOutcome> DescribeDBInstancesAsCsvOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesAsCsvRequest&, const DescribeDBInstancesAsCsvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsCsvAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;			
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;			
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;			
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceByTagsResult> DescribeDBInstanceByTagsOutcome;			
			typedef std::future<DescribeDBInstanceByTagsOutcome> DescribeDBInstanceByTagsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceByTagsRequest&, const DescribeDBInstanceByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceByTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;			
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::CreateDampPolicyResult> CreateDampPolicyOutcome;			
			typedef std::future<CreateDampPolicyOutcome> CreateDampPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateDampPolicyRequest&, const CreateDampPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDampPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesByPerformanceResult> DescribeDBInstancesByPerformanceOutcome;			
			typedef std::future<DescribeDBInstancesByPerformanceOutcome> DescribeDBInstancesByPerformanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesByPerformanceRequest&, const DescribeDBInstancesByPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesByPerformanceAsyncHandler;
			typedef Outcome<Error, Model::RenewDBInstanceResult> RenewDBInstanceOutcome;			
			typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::RenewDBInstanceRequest&, const RenewDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryPriceForBuyResult> QueryPriceForBuyOutcome;			
			typedef std::future<QueryPriceForBuyOutcome> QueryPriceForBuyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::QueryPriceForBuyRequest&, const QueryPriceForBuyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPriceForBuyAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLReportsResult> DescribeSQLReportsOutcome;			
			typedef std::future<DescribeSQLReportsOutcome> DescribeSQLReportsOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLReportsRequest&, const DescribeSQLReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLReportsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTasksResult> DescribeBackupTasksOutcome;			
			typedef std::future<DescribeBackupTasksOutcome> DescribeBackupTasksOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupTasksRequest&, const DescribeBackupTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTasksAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;			
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ModifyGuardDomainModeResult> ModifyGuardDomainModeOutcome;			
			typedef std::future<ModifyGuardDomainModeOutcome> ModifyGuardDomainModeOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ModifyGuardDomainModeRequest&, const ModifyGuardDomainModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGuardDomainModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;			
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrateTaskForSQLServerResult> CreateMigrateTaskForSQLServerOutcome;			
			typedef std::future<CreateMigrateTaskForSQLServerOutcome> CreateMigrateTaskForSQLServerOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::CreateMigrateTaskForSQLServerRequest&, const CreateMigrateTaskForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateTaskForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIPArrayListResult> DescribeDBInstanceIPArrayListOutcome;			
			typedef std::future<DescribeDBInstanceIPArrayListOutcome> DescribeDBInstanceIPArrayListOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceIPArrayListRequest&, const DescribeDBInstanceIPArrayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIPArrayListAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceHAResult> SwitchDBInstanceHAOutcome;			
			typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceHARequest&, const SwitchDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountForPGResult> ResetAccountForPGOutcome;			
			typedef std::future<ResetAccountForPGOutcome> ResetAccountForPGOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::ResetAccountForPGRequest&, const ResetAccountForPGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountForPGAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetsForSecurityResult> DescribeBackupSetsForSecurityOutcome;			
			typedef std::future<DescribeBackupSetsForSecurityOutcome> DescribeBackupSetsForSecurityOutcomeCallable;			
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupSetsForSecurityRequest&, const DescribeBackupSetsForSecurityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetsForSecurityAsyncHandler;

			RdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RdsClient();
            CreateMigrateTaskOutcome createMigrateTask(const Model::CreateMigrateTaskRequest &request)const;
            void createMigrateTaskAsync(const Model::CreateMigrateTaskRequest& request, const CreateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateMigrateTaskOutcomeCallable createMigrateTaskCallable(const Model::CreateMigrateTaskRequest& request) const;
            CheckRecoveryConditionsOutcome checkRecoveryConditions(const Model::CheckRecoveryConditionsRequest &request)const;
            void checkRecoveryConditionsAsync(const Model::CheckRecoveryConditionsRequest& request, const CheckRecoveryConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CheckRecoveryConditionsOutcomeCallable checkRecoveryConditionsCallable(const Model::CheckRecoveryConditionsRequest& request) const;
            LoginDBInstancefromCloudDBAOutcome loginDBInstancefromCloudDBA(const Model::LoginDBInstancefromCloudDBARequest &request)const;
            void loginDBInstancefromCloudDBAAsync(const Model::LoginDBInstancefromCloudDBARequest& request, const LoginDBInstancefromCloudDBAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            LoginDBInstancefromCloudDBAOutcomeCallable loginDBInstancefromCloudDBACallable(const Model::LoginDBInstancefromCloudDBARequest& request) const;
            DeleteBackupOutcome deleteBackup(const Model::DeleteBackupRequest &request)const;
            void deleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteBackupOutcomeCallable deleteBackupCallable(const Model::DeleteBackupRequest& request) const;
            DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
            void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
            DescribeDBInstancesByExpireTimeOutcome describeDBInstancesByExpireTime(const Model::DescribeDBInstancesByExpireTimeRequest &request)const;
            void describeDBInstancesByExpireTimeAsync(const Model::DescribeDBInstancesByExpireTimeRequest& request, const DescribeDBInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstancesByExpireTimeOutcomeCallable describeDBInstancesByExpireTimeCallable(const Model::DescribeDBInstancesByExpireTimeRequest& request) const;
            SwitchDBInstanceNetTypeOutcome switchDBInstanceNetType(const Model::SwitchDBInstanceNetTypeRequest &request)const;
            void switchDBInstanceNetTypeAsync(const Model::SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SwitchDBInstanceNetTypeOutcomeCallable switchDBInstanceNetTypeCallable(const Model::SwitchDBInstanceNetTypeRequest& request) const;
            DescribeDBInstanceMonitorOutcome describeDBInstanceMonitor(const Model::DescribeDBInstanceMonitorRequest &request)const;
            void describeDBInstanceMonitorAsync(const Model::DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceMonitorOutcomeCallable describeDBInstanceMonitorCallable(const Model::DescribeDBInstanceMonitorRequest& request) const;
            CreateReadOnlyDBInstanceOutcome createReadOnlyDBInstance(const Model::CreateReadOnlyDBInstanceRequest &request)const;
            void createReadOnlyDBInstanceAsync(const Model::CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateReadOnlyDBInstanceOutcomeCallable createReadOnlyDBInstanceCallable(const Model::CreateReadOnlyDBInstanceRequest& request) const;
            ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
            void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
            DescribeDBInstanceHAConfigOutcome describeDBInstanceHAConfig(const Model::DescribeDBInstanceHAConfigRequest &request)const;
            void describeDBInstanceHAConfigAsync(const Model::DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceHAConfigOutcomeCallable describeDBInstanceHAConfigCallable(const Model::DescribeDBInstanceHAConfigRequest& request) const;
            DescribeOssDownloadsOutcome describeOssDownloads(const Model::DescribeOssDownloadsRequest &request)const;
            void describeOssDownloadsAsync(const Model::DescribeOssDownloadsRequest& request, const DescribeOssDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOssDownloadsOutcomeCallable describeOssDownloadsCallable(const Model::DescribeOssDownloadsRequest& request) const;
            ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
            void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
            ReleaseReplicaOutcome releaseReplica(const Model::ReleaseReplicaRequest &request)const;
            void releaseReplicaAsync(const Model::ReleaseReplicaRequest& request, const ReleaseReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ReleaseReplicaOutcomeCallable releaseReplicaCallable(const Model::ReleaseReplicaRequest& request) const;
            UpgradeDBInstanceEngineVersionOutcome upgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request)const;
            void upgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeDBInstanceEngineVersionOutcomeCallable upgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request) const;
            DescribeReplicasOutcome describeReplicas(const Model::DescribeReplicasRequest &request)const;
            void describeReplicasAsync(const Model::DescribeReplicasRequest& request, const DescribeReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeReplicasOutcomeCallable describeReplicasCallable(const Model::DescribeReplicasRequest& request) const;
            ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
            void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
            StopSyncingOutcome stopSyncing(const Model::StopSyncingRequest &request)const;
            void stopSyncingAsync(const Model::StopSyncingRequest& request, const StopSyncingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StopSyncingOutcomeCallable stopSyncingCallable(const Model::StopSyncingRequest& request) const;
            CheckAccountNameAvailableOutcome checkAccountNameAvailable(const Model::CheckAccountNameAvailableRequest &request)const;
            void checkAccountNameAvailableAsync(const Model::CheckAccountNameAvailableRequest& request, const CheckAccountNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CheckAccountNameAvailableOutcomeCallable checkAccountNameAvailableCallable(const Model::CheckAccountNameAvailableRequest& request) const;
            RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
            void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
            ImportDataForSQLServerOutcome importDataForSQLServer(const Model::ImportDataForSQLServerRequest &request)const;
            void importDataForSQLServerAsync(const Model::ImportDataForSQLServerRequest& request, const ImportDataForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ImportDataForSQLServerOutcomeCallable importDataForSQLServerCallable(const Model::ImportDataForSQLServerRequest& request) const;
            DescribeLogicDBInstanceTopologyOutcome describeLogicDBInstanceTopology(const Model::DescribeLogicDBInstanceTopologyRequest &request)const;
            void describeLogicDBInstanceTopologyAsync(const Model::DescribeLogicDBInstanceTopologyRequest& request, const DescribeLogicDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLogicDBInstanceTopologyOutcomeCallable describeLogicDBInstanceTopologyCallable(const Model::DescribeLogicDBInstanceTopologyRequest& request) const;
            DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
            void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
            CheckResourceOutcome checkResource(const Model::CheckResourceRequest &request)const;
            void checkResourceAsync(const Model::CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CheckResourceOutcomeCallable checkResourceCallable(const Model::CheckResourceRequest& request) const;
            StartDBInstanceDiagnoseOutcome startDBInstanceDiagnose(const Model::StartDBInstanceDiagnoseRequest &request)const;
            void startDBInstanceDiagnoseAsync(const Model::StartDBInstanceDiagnoseRequest& request, const StartDBInstanceDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StartDBInstanceDiagnoseOutcomeCallable startDBInstanceDiagnoseCallable(const Model::StartDBInstanceDiagnoseRequest& request) const;
            ModifySecurityGroupConfigurationOutcome modifySecurityGroupConfiguration(const Model::ModifySecurityGroupConfigurationRequest &request)const;
            void modifySecurityGroupConfigurationAsync(const Model::ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySecurityGroupConfigurationOutcomeCallable modifySecurityGroupConfigurationCallable(const Model::ModifySecurityGroupConfigurationRequest& request) const;
            DescribeCharacterSetNameOutcome describeCharacterSetName(const Model::DescribeCharacterSetNameRequest &request)const;
            void describeCharacterSetNameAsync(const Model::DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCharacterSetNameOutcomeCallable describeCharacterSetNameCallable(const Model::DescribeCharacterSetNameRequest& request) const;
            ImportDataFromDatabaseOutcome importDataFromDatabase(const Model::ImportDataFromDatabaseRequest &request)const;
            void importDataFromDatabaseAsync(const Model::ImportDataFromDatabaseRequest& request, const ImportDataFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ImportDataFromDatabaseOutcomeCallable importDataFromDatabaseCallable(const Model::ImportDataFromDatabaseRequest& request) const;
            DescribeMigrateTasksOutcome describeMigrateTasks(const Model::DescribeMigrateTasksRequest &request)const;
            void describeMigrateTasksAsync(const Model::DescribeMigrateTasksRequest& request, const DescribeMigrateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeMigrateTasksOutcomeCallable describeMigrateTasksCallable(const Model::DescribeMigrateTasksRequest& request) const;
            ModifyDBInstanceNetworkExpireTimeOutcome modifyDBInstanceNetworkExpireTime(const Model::ModifyDBInstanceNetworkExpireTimeRequest &request)const;
            void modifyDBInstanceNetworkExpireTimeAsync(const Model::ModifyDBInstanceNetworkExpireTimeRequest& request, const ModifyDBInstanceNetworkExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceNetworkExpireTimeOutcomeCallable modifyDBInstanceNetworkExpireTimeCallable(const Model::ModifyDBInstanceNetworkExpireTimeRequest& request) const;
            CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
            void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
            DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
            void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
            DescribeOperatorPermissionOutcome describeOperatorPermission(const Model::DescribeOperatorPermissionRequest &request)const;
            void describeOperatorPermissionAsync(const Model::DescribeOperatorPermissionRequest& request, const DescribeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOperatorPermissionOutcomeCallable describeOperatorPermissionCallable(const Model::DescribeOperatorPermissionRequest& request) const;
            DescribeOptimizeAdviceOnMissIndexOutcome describeOptimizeAdviceOnMissIndex(const Model::DescribeOptimizeAdviceOnMissIndexRequest &request)const;
            void describeOptimizeAdviceOnMissIndexAsync(const Model::DescribeOptimizeAdviceOnMissIndexRequest& request, const DescribeOptimizeAdviceOnMissIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOptimizeAdviceOnMissIndexOutcomeCallable describeOptimizeAdviceOnMissIndexCallable(const Model::DescribeOptimizeAdviceOnMissIndexRequest& request) const;
            DescribeDampPoliciesByCidOutcome describeDampPoliciesByCid(const Model::DescribeDampPoliciesByCidRequest &request)const;
            void describeDampPoliciesByCidAsync(const Model::DescribeDampPoliciesByCidRequest& request, const DescribeDampPoliciesByCidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDampPoliciesByCidOutcomeCallable describeDampPoliciesByCidCallable(const Model::DescribeDampPoliciesByCidRequest& request) const;
            ModifyDBDescriptionOutcome modifyDBDescription(const Model::ModifyDBDescriptionRequest &request)const;
            void modifyDBDescriptionAsync(const Model::ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBDescriptionOutcomeCallable modifyDBDescriptionCallable(const Model::ModifyDBDescriptionRequest& request) const;
            ImportDatabaseBetweenInstancesOutcome importDatabaseBetweenInstances(const Model::ImportDatabaseBetweenInstancesRequest &request)const;
            void importDatabaseBetweenInstancesAsync(const Model::ImportDatabaseBetweenInstancesRequest& request, const ImportDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ImportDatabaseBetweenInstancesOutcomeCallable importDatabaseBetweenInstancesCallable(const Model::ImportDatabaseBetweenInstancesRequest& request) const;
            RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
            void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
            CheckDBNameAvailableOutcome checkDBNameAvailable(const Model::CheckDBNameAvailableRequest &request)const;
            void checkDBNameAvailableAsync(const Model::CheckDBNameAvailableRequest& request, const CheckDBNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CheckDBNameAvailableOutcomeCallable checkDBNameAvailableCallable(const Model::CheckDBNameAvailableRequest& request) const;
            ModifyDBInstanceMonitorOutcome modifyDBInstanceMonitor(const Model::ModifyDBInstanceMonitorRequest &request)const;
            void modifyDBInstanceMonitorAsync(const Model::ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceMonitorOutcomeCallable modifyDBInstanceMonitorCallable(const Model::ModifyDBInstanceMonitorRequest& request) const;
            DescribeSQLLogFilesOutcome describeSQLLogFiles(const Model::DescribeSQLLogFilesRequest &request)const;
            void describeSQLLogFilesAsync(const Model::DescribeSQLLogFilesRequest& request, const DescribeSQLLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLLogFilesOutcomeCallable describeSQLLogFilesCallable(const Model::DescribeSQLLogFilesRequest& request) const;
            CancelImportOutcome cancelImport(const Model::CancelImportRequest &request)const;
            void cancelImportAsync(const Model::CancelImportRequest& request, const CancelImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CancelImportOutcomeCallable cancelImportCallable(const Model::CancelImportRequest& request) const;
            ModifyReplicaDescriptionOutcome modifyReplicaDescription(const Model::ModifyReplicaDescriptionRequest &request)const;
            void modifyReplicaDescriptionAsync(const Model::ModifyReplicaDescriptionRequest& request, const ModifyReplicaDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyReplicaDescriptionOutcomeCallable modifyReplicaDescriptionCallable(const Model::ModifyReplicaDescriptionRequest& request) const;
            ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
            void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
            DescribeReplicaInitializeProgressOutcome describeReplicaInitializeProgress(const Model::DescribeReplicaInitializeProgressRequest &request)const;
            void describeReplicaInitializeProgressAsync(const Model::DescribeReplicaInitializeProgressRequest& request, const DescribeReplicaInitializeProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeReplicaInitializeProgressOutcomeCallable describeReplicaInitializeProgressCallable(const Model::DescribeReplicaInitializeProgressRequest& request) const;
            DescribeSecurityGroupConfigurationOutcome describeSecurityGroupConfiguration(const Model::DescribeSecurityGroupConfigurationRequest &request)const;
            void describeSecurityGroupConfigurationAsync(const Model::DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSecurityGroupConfigurationOutcomeCallable describeSecurityGroupConfigurationCallable(const Model::DescribeSecurityGroupConfigurationRequest& request) const;
            DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
            void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
            UpgradeDBInstanceNetWorkInfoOutcome upgradeDBInstanceNetWorkInfo(const Model::UpgradeDBInstanceNetWorkInfoRequest &request)const;
            void upgradeDBInstanceNetWorkInfoAsync(const Model::UpgradeDBInstanceNetWorkInfoRequest& request, const UpgradeDBInstanceNetWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeDBInstanceNetWorkInfoOutcomeCallable upgradeDBInstanceNetWorkInfoCallable(const Model::UpgradeDBInstanceNetWorkInfoRequest& request) const;
            AddTagsToResourceOutcome addTagsToResource(const Model::AddTagsToResourceRequest &request)const;
            void addTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddTagsToResourceOutcomeCallable addTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;
            DescribeBinlogFilesOutcome describeBinlogFiles(const Model::DescribeBinlogFilesRequest &request)const;
            void describeBinlogFilesAsync(const Model::DescribeBinlogFilesRequest& request, const DescribeBinlogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBinlogFilesOutcomeCallable describeBinlogFilesCallable(const Model::DescribeBinlogFilesRequest& request) const;
            DescribeBackupsForSecurityOutcome describeBackupsForSecurity(const Model::DescribeBackupsForSecurityRequest &request)const;
            void describeBackupsForSecurityAsync(const Model::DescribeBackupsForSecurityRequest& request, const DescribeBackupsForSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBackupsForSecurityOutcomeCallable describeBackupsForSecurityCallable(const Model::DescribeBackupsForSecurityRequest& request) const;
            CreateDiagnosticReportOutcome createDiagnosticReport(const Model::CreateDiagnosticReportRequest &request)const;
            void createDiagnosticReportAsync(const Model::CreateDiagnosticReportRequest& request, const CreateDiagnosticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateDiagnosticReportOutcomeCallable createDiagnosticReportCallable(const Model::CreateDiagnosticReportRequest& request) const;
            DescribeSQLLogReportListOutcome describeSQLLogReportList(const Model::DescribeSQLLogReportListRequest &request)const;
            void describeSQLLogReportListAsync(const Model::DescribeSQLLogReportListRequest& request, const DescribeSQLLogReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLLogReportListOutcomeCallable describeSQLLogReportListCallable(const Model::DescribeSQLLogReportListRequest& request) const;
            DescribeResourceDiagnosisOutcome describeResourceDiagnosis(const Model::DescribeResourceDiagnosisRequest &request)const;
            void describeResourceDiagnosisAsync(const Model::DescribeResourceDiagnosisRequest& request, const DescribeResourceDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeResourceDiagnosisOutcomeCallable describeResourceDiagnosisCallable(const Model::DescribeResourceDiagnosisRequest& request) const;
            CloneDBInstanceOutcome cloneDBInstance(const Model::CloneDBInstanceRequest &request)const;
            void cloneDBInstanceAsync(const Model::CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CloneDBInstanceOutcomeCallable cloneDBInstanceCallable(const Model::CloneDBInstanceRequest& request) const;
            DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
            void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
            CreateUploadPathForSQLServerOutcome createUploadPathForSQLServer(const Model::CreateUploadPathForSQLServerRequest &request)const;
            void createUploadPathForSQLServerAsync(const Model::CreateUploadPathForSQLServerRequest& request, const CreateUploadPathForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateUploadPathForSQLServerOutcomeCallable createUploadPathForSQLServerCallable(const Model::CreateUploadPathForSQLServerRequest& request) const;
            DescribeRenewalPriceOutcome describeRenewalPrice(const Model::DescribeRenewalPriceRequest &request)const;
            void describeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRenewalPriceOutcomeCallable describeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request) const;
            AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
            void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
            DescribeOptimizeAdviceOnStorageOutcome describeOptimizeAdviceOnStorage(const Model::DescribeOptimizeAdviceOnStorageRequest &request)const;
            void describeOptimizeAdviceOnStorageAsync(const Model::DescribeOptimizeAdviceOnStorageRequest& request, const DescribeOptimizeAdviceOnStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOptimizeAdviceOnStorageOutcomeCallable describeOptimizeAdviceOnStorageCallable(const Model::DescribeOptimizeAdviceOnStorageRequest& request) const;
            DescribeInstanceAutoRenewAttributeOutcome describeInstanceAutoRenewAttribute(const Model::DescribeInstanceAutoRenewAttributeRequest &request)const;
            void describeInstanceAutoRenewAttributeAsync(const Model::DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeInstanceAutoRenewAttributeOutcomeCallable describeInstanceAutoRenewAttributeCallable(const Model::DescribeInstanceAutoRenewAttributeRequest& request) const;
            DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
            void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
            DescribeDBInstanceUserOutcome describeDBInstanceUser(const Model::DescribeDBInstanceUserRequest &request)const;
            void describeDBInstanceUserAsync(const Model::DescribeDBInstanceUserRequest& request, const DescribeDBInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceUserOutcomeCallable describeDBInstanceUserCallable(const Model::DescribeDBInstanceUserRequest& request) const;
            CreateTempDBInstanceOutcome createTempDBInstance(const Model::CreateTempDBInstanceRequest &request)const;
            void createTempDBInstanceAsync(const Model::CreateTempDBInstanceRequest& request, const CreateTempDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateTempDBInstanceOutcomeCallable createTempDBInstanceCallable(const Model::CreateTempDBInstanceRequest& request) const;
            DescribeImportsForSQLServerOutcome describeImportsForSQLServer(const Model::DescribeImportsForSQLServerRequest &request)const;
            void describeImportsForSQLServerAsync(const Model::DescribeImportsForSQLServerRequest& request, const DescribeImportsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeImportsForSQLServerOutcomeCallable describeImportsForSQLServerCallable(const Model::DescribeImportsForSQLServerRequest& request) const;
            ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
            void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
            DescribeSQLCollectorPolicyOutcome describeSQLCollectorPolicy(const Model::DescribeSQLCollectorPolicyRequest &request)const;
            void describeSQLCollectorPolicyAsync(const Model::DescribeSQLCollectorPolicyRequest& request, const DescribeSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLCollectorPolicyOutcomeCallable describeSQLCollectorPolicyCallable(const Model::DescribeSQLCollectorPolicyRequest& request) const;
            ModifySQLCollectorPolicyOutcome modifySQLCollectorPolicy(const Model::ModifySQLCollectorPolicyRequest &request)const;
            void modifySQLCollectorPolicyAsync(const Model::ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySQLCollectorPolicyOutcomeCallable modifySQLCollectorPolicyCallable(const Model::ModifySQLCollectorPolicyRequest& request) const;
            DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
            void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
            CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
            void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
            DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
            void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
            DescribeSQLInjectionInfosOutcome describeSQLInjectionInfos(const Model::DescribeSQLInjectionInfosRequest &request)const;
            void describeSQLInjectionInfosAsync(const Model::DescribeSQLInjectionInfosRequest& request, const DescribeSQLInjectionInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLInjectionInfosOutcomeCallable describeSQLInjectionInfosCallable(const Model::DescribeSQLInjectionInfosRequest& request) const;
            DescribeRealtimeDiagnosesOutcome describeRealtimeDiagnoses(const Model::DescribeRealtimeDiagnosesRequest &request)const;
            void describeRealtimeDiagnosesAsync(const Model::DescribeRealtimeDiagnosesRequest& request, const DescribeRealtimeDiagnosesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRealtimeDiagnosesOutcomeCallable describeRealtimeDiagnosesCallable(const Model::DescribeRealtimeDiagnosesRequest& request) const;
            DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
            void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
            RestoreDBInstanceOutcome restoreDBInstance(const Model::RestoreDBInstanceRequest &request)const;
            void restoreDBInstanceAsync(const Model::RestoreDBInstanceRequest& request, const RestoreDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RestoreDBInstanceOutcomeCallable restoreDBInstanceCallable(const Model::RestoreDBInstanceRequest& request) const;
            AddBuDBInstanceRelationOutcome addBuDBInstanceRelation(const Model::AddBuDBInstanceRelationRequest &request)const;
            void addBuDBInstanceRelationAsync(const Model::AddBuDBInstanceRelationRequest& request, const AddBuDBInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddBuDBInstanceRelationOutcomeCallable addBuDBInstanceRelationCallable(const Model::AddBuDBInstanceRelationRequest& request) const;
            RevokeOperatorPermissionOutcome revokeOperatorPermission(const Model::RevokeOperatorPermissionRequest &request)const;
            void revokeOperatorPermissionAsync(const Model::RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RevokeOperatorPermissionOutcomeCallable revokeOperatorPermissionCallable(const Model::RevokeOperatorPermissionRequest& request) const;
            ModifyDBInstanceSpecOutcome modifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request)const;
            void modifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceSpecOutcomeCallable modifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request) const;
            DescribeDiagnosticReportListOutcome describeDiagnosticReportList(const Model::DescribeDiagnosticReportListRequest &request)const;
            void describeDiagnosticReportListAsync(const Model::DescribeDiagnosticReportListRequest& request, const DescribeDiagnosticReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDiagnosticReportListOutcomeCallable describeDiagnosticReportListCallable(const Model::DescribeDiagnosticReportListRequest& request) const;
            RemoveTagsFromResourceOutcome removeTagsFromResource(const Model::RemoveTagsFromResourceRequest &request)const;
            void removeTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemoveTagsFromResourceOutcomeCallable removeTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;
            DescribeSQLLogRecordsOutcome describeSQLLogRecords(const Model::DescribeSQLLogRecordsRequest &request)const;
            void describeSQLLogRecordsAsync(const Model::DescribeSQLLogRecordsRequest& request, const DescribeSQLLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLLogRecordsOutcomeCallable describeSQLLogRecordsCallable(const Model::DescribeSQLLogRecordsRequest& request) const;
            ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
            void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
            DescribeMigrateTasksForSQLServerOutcome describeMigrateTasksForSQLServer(const Model::DescribeMigrateTasksForSQLServerRequest &request)const;
            void describeMigrateTasksForSQLServerAsync(const Model::DescribeMigrateTasksForSQLServerRequest& request, const DescribeMigrateTasksForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeMigrateTasksForSQLServerOutcomeCallable describeMigrateTasksForSQLServerCallable(const Model::DescribeMigrateTasksForSQLServerRequest& request) const;
            ModifyReplicaModeOutcome modifyReplicaMode(const Model::ModifyReplicaModeRequest &request)const;
            void modifyReplicaModeAsync(const Model::ModifyReplicaModeRequest& request, const ModifyReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyReplicaModeOutcomeCallable modifyReplicaModeCallable(const Model::ModifyReplicaModeRequest& request) const;
            DeleteDampPolicyOutcome deleteDampPolicy(const Model::DeleteDampPolicyRequest &request)const;
            void deleteDampPolicyAsync(const Model::DeleteDampPolicyRequest& request, const DeleteDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteDampPolicyOutcomeCallable deleteDampPolicyCallable(const Model::DeleteDampPolicyRequest& request) const;
            GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
            void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
            GrantOperatorPermissionOutcome grantOperatorPermission(const Model::GrantOperatorPermissionRequest &request)const;
            void grantOperatorPermissionAsync(const Model::GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GrantOperatorPermissionOutcomeCallable grantOperatorPermissionCallable(const Model::GrantOperatorPermissionRequest& request) const;
            ModifyPostpaidDBInstanceSpecOutcome modifyPostpaidDBInstanceSpec(const Model::ModifyPostpaidDBInstanceSpecRequest &request)const;
            void modifyPostpaidDBInstanceSpecAsync(const Model::ModifyPostpaidDBInstanceSpecRequest& request, const ModifyPostpaidDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyPostpaidDBInstanceSpecOutcomeCallable modifyPostpaidDBInstanceSpecCallable(const Model::ModifyPostpaidDBInstanceSpecRequest& request) const;
            CreatePolicyWithSpecifiedPolicyOutcome createPolicyWithSpecifiedPolicy(const Model::CreatePolicyWithSpecifiedPolicyRequest &request)const;
            void createPolicyWithSpecifiedPolicyAsync(const Model::CreatePolicyWithSpecifiedPolicyRequest& request, const CreatePolicyWithSpecifiedPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreatePolicyWithSpecifiedPolicyOutcomeCallable createPolicyWithSpecifiedPolicyCallable(const Model::CreatePolicyWithSpecifiedPolicyRequest& request) const;
            ModifyDBInstanceTDEOutcome modifyDBInstanceTDE(const Model::ModifyDBInstanceTDERequest &request)const;
            void modifyDBInstanceTDEAsync(const Model::ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceTDEOutcomeCallable modifyDBInstanceTDECallable(const Model::ModifyDBInstanceTDERequest& request) const;
            DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
            void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
            DescribeVpcZoneNosOutcome describeVpcZoneNos(const Model::DescribeVpcZoneNosRequest &request)const;
            void describeVpcZoneNosAsync(const Model::DescribeVpcZoneNosRequest& request, const DescribeVpcZoneNosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpcZoneNosOutcomeCallable describeVpcZoneNosCallable(const Model::DescribeVpcZoneNosRequest& request) const;
            DescribeOptimizeAdviceOnBigTableOutcome describeOptimizeAdviceOnBigTable(const Model::DescribeOptimizeAdviceOnBigTableRequest &request)const;
            void describeOptimizeAdviceOnBigTableAsync(const Model::DescribeOptimizeAdviceOnBigTableRequest& request, const DescribeOptimizeAdviceOnBigTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOptimizeAdviceOnBigTableOutcomeCallable describeOptimizeAdviceOnBigTableCallable(const Model::DescribeOptimizeAdviceOnBigTableRequest& request) const;
            DescribeDBInstanceExtendAttributeOutcome describeDBInstanceExtendAttribute(const Model::DescribeDBInstanceExtendAttributeRequest &request)const;
            void describeDBInstanceExtendAttributeAsync(const Model::DescribeDBInstanceExtendAttributeRequest& request, const DescribeDBInstanceExtendAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceExtendAttributeOutcomeCallable describeDBInstanceExtendAttributeCallable(const Model::DescribeDBInstanceExtendAttributeRequest& request) const;
            DescribeDampPolicyByCommentOutcome describeDampPolicyByComment(const Model::DescribeDampPolicyByCommentRequest &request)const;
            void describeDampPolicyByCommentAsync(const Model::DescribeDampPolicyByCommentRequest& request, const DescribeDampPolicyByCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDampPolicyByCommentOutcomeCallable describeDampPolicyByCommentCallable(const Model::DescribeDampPolicyByCommentRequest& request) const;
            DescribePreCheckResultsOutcome describePreCheckResults(const Model::DescribePreCheckResultsRequest &request)const;
            void describePreCheckResultsAsync(const Model::DescribePreCheckResultsRequest& request, const DescribePreCheckResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribePreCheckResultsOutcomeCallable describePreCheckResultsCallable(const Model::DescribePreCheckResultsRequest& request) const;
            DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
            void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
            StartArchiveSQLLogOutcome startArchiveSQLLog(const Model::StartArchiveSQLLogRequest &request)const;
            void startArchiveSQLLogAsync(const Model::StartArchiveSQLLogRequest& request, const StartArchiveSQLLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StartArchiveSQLLogOutcomeCallable startArchiveSQLLogCallable(const Model::StartArchiveSQLLogRequest& request) const;
            CreateDBInstanceReplicaOutcome createDBInstanceReplica(const Model::CreateDBInstanceReplicaRequest &request)const;
            void createDBInstanceReplicaAsync(const Model::CreateDBInstanceReplicaRequest& request, const CreateDBInstanceReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateDBInstanceReplicaOutcomeCallable createDBInstanceReplicaCallable(const Model::CreateDBInstanceReplicaRequest& request) const;
            ModifyDampPolicyOutcome modifyDampPolicy(const Model::ModifyDampPolicyRequest &request)const;
            void modifyDampPolicyAsync(const Model::ModifyDampPolicyRequest& request, const ModifyDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDampPolicyOutcomeCallable modifyDampPolicyCallable(const Model::ModifyDampPolicyRequest& request) const;
            AllocateInstancePrivateConnectionOutcome allocateInstancePrivateConnection(const Model::AllocateInstancePrivateConnectionRequest &request)const;
            void allocateInstancePrivateConnectionAsync(const Model::AllocateInstancePrivateConnectionRequest& request, const AllocateInstancePrivateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AllocateInstancePrivateConnectionOutcomeCallable allocateInstancePrivateConnectionCallable(const Model::AllocateInstancePrivateConnectionRequest& request) const;
            RevokeAccountPrivilegeOutcome revokeAccountPrivilege(const Model::RevokeAccountPrivilegeRequest &request)const;
            void revokeAccountPrivilegeAsync(const Model::RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RevokeAccountPrivilegeOutcomeCallable revokeAccountPrivilegeCallable(const Model::RevokeAccountPrivilegeRequest& request) const;
            DegradeDBInstanceSpecOutcome degradeDBInstanceSpec(const Model::DegradeDBInstanceSpecRequest &request)const;
            void degradeDBInstanceSpecAsync(const Model::DegradeDBInstanceSpecRequest& request, const DegradeDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DegradeDBInstanceSpecOutcomeCallable degradeDBInstanceSpecCallable(const Model::DegradeDBInstanceSpecRequest& request) const;
            DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
            void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
            DescibeImportsFromDatabaseOutcome descibeImportsFromDatabase(const Model::DescibeImportsFromDatabaseRequest &request)const;
            void descibeImportsFromDatabaseAsync(const Model::DescibeImportsFromDatabaseRequest& request, const DescibeImportsFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescibeImportsFromDatabaseOutcomeCallable descibeImportsFromDatabaseCallable(const Model::DescibeImportsFromDatabaseRequest& request) const;
            DescribeDatabaseLockDiagnosisOutcome describeDatabaseLockDiagnosis(const Model::DescribeDatabaseLockDiagnosisRequest &request)const;
            void describeDatabaseLockDiagnosisAsync(const Model::DescribeDatabaseLockDiagnosisRequest& request, const DescribeDatabaseLockDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDatabaseLockDiagnosisOutcomeCallable describeDatabaseLockDiagnosisCallable(const Model::DescribeDatabaseLockDiagnosisRequest& request) const;
            DescribeOptimizeAdviceOnExcessIndexOutcome describeOptimizeAdviceOnExcessIndex(const Model::DescribeOptimizeAdviceOnExcessIndexRequest &request)const;
            void describeOptimizeAdviceOnExcessIndexAsync(const Model::DescribeOptimizeAdviceOnExcessIndexRequest& request, const DescribeOptimizeAdviceOnExcessIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOptimizeAdviceOnExcessIndexOutcomeCallable describeOptimizeAdviceOnExcessIndexCallable(const Model::DescribeOptimizeAdviceOnExcessIndexRequest& request) const;
            CopyDatabaseOutcome copyDatabase(const Model::CopyDatabaseRequest &request)const;
            void copyDatabaseAsync(const Model::CopyDatabaseRequest& request, const CopyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CopyDatabaseOutcomeCallable copyDatabaseCallable(const Model::CopyDatabaseRequest& request) const;
            CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
            void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
            DescribeDBInstanceTDEOutcome describeDBInstanceTDE(const Model::DescribeDBInstanceTDERequest &request)const;
            void describeDBInstanceTDEAsync(const Model::DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceTDEOutcomeCallable describeDBInstanceTDECallable(const Model::DescribeDBInstanceTDERequest& request) const;
            ModifyDBInstanceSSLOutcome modifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request)const;
            void modifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceSSLOutcomeCallable modifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request) const;
            DescribeSQLLogReportsOutcome describeSQLLogReports(const Model::DescribeSQLLogReportsRequest &request)const;
            void describeSQLLogReportsAsync(const Model::DescribeSQLLogReportsRequest& request, const DescribeSQLLogReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLLogReportsOutcomeCallable describeSQLLogReportsCallable(const Model::DescribeSQLLogReportsRequest& request) const;
            DescribeSQLDiagnosisListOutcome describeSQLDiagnosisList(const Model::DescribeSQLDiagnosisListRequest &request)const;
            void describeSQLDiagnosisListAsync(const Model::DescribeSQLDiagnosisListRequest& request, const DescribeSQLDiagnosisListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLDiagnosisListOutcomeCallable describeSQLDiagnosisListCallable(const Model::DescribeSQLDiagnosisListRequest& request) const;
            ModifyDBInstanceConnectionModeOutcome modifyDBInstanceConnectionMode(const Model::ModifyDBInstanceConnectionModeRequest &request)const;
            void modifyDBInstanceConnectionModeAsync(const Model::ModifyDBInstanceConnectionModeRequest& request, const ModifyDBInstanceConnectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceConnectionModeOutcomeCallable modifyDBInstanceConnectionModeCallable(const Model::ModifyDBInstanceConnectionModeRequest& request) const;
            DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
            void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
            AllocateReadWriteSplittingConnectionOutcome allocateReadWriteSplittingConnection(const Model::AllocateReadWriteSplittingConnectionRequest &request)const;
            void allocateReadWriteSplittingConnectionAsync(const Model::AllocateReadWriteSplittingConnectionRequest& request, const AllocateReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AllocateReadWriteSplittingConnectionOutcomeCallable allocateReadWriteSplittingConnectionCallable(const Model::AllocateReadWriteSplittingConnectionRequest& request) const;
            ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
            void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
            CalculateDBInstanceWeightOutcome calculateDBInstanceWeight(const Model::CalculateDBInstanceWeightRequest &request)const;
            void calculateDBInstanceWeightAsync(const Model::CalculateDBInstanceWeightRequest& request, const CalculateDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CalculateDBInstanceWeightOutcomeCallable calculateDBInstanceWeightCallable(const Model::CalculateDBInstanceWeightRequest& request) const;
            ModifyReplicaRelationOutcome modifyReplicaRelation(const Model::ModifyReplicaRelationRequest &request)const;
            void modifyReplicaRelationAsync(const Model::ModifyReplicaRelationRequest& request, const ModifyReplicaRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyReplicaRelationOutcomeCallable modifyReplicaRelationCallable(const Model::ModifyReplicaRelationRequest& request) const;
            ModifyDBInstanceNetworkTypeOutcome modifyDBInstanceNetworkType(const Model::ModifyDBInstanceNetworkTypeRequest &request)const;
            void modifyDBInstanceNetworkTypeAsync(const Model::ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceNetworkTypeOutcomeCallable modifyDBInstanceNetworkTypeCallable(const Model::ModifyDBInstanceNetworkTypeRequest& request) const;
            DescribeDBInstanceNetworkOutcome describeDBInstanceNetwork(const Model::DescribeDBInstanceNetworkRequest &request)const;
            void describeDBInstanceNetworkAsync(const Model::DescribeDBInstanceNetworkRequest& request, const DescribeDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceNetworkOutcomeCallable describeDBInstanceNetworkCallable(const Model::DescribeDBInstanceNetworkRequest& request) const;
            DescribeAbnormalDBInstancesOutcome describeAbnormalDBInstances(const Model::DescribeAbnormalDBInstancesRequest &request)const;
            void describeAbnormalDBInstancesAsync(const Model::DescribeAbnormalDBInstancesRequest& request, const DescribeAbnormalDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAbnormalDBInstancesOutcomeCallable describeAbnormalDBInstancesCallable(const Model::DescribeAbnormalDBInstancesRequest& request) const;
            DescribeSlowLogsOutcome describeSlowLogs(const Model::DescribeSlowLogsRequest &request)const;
            void describeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSlowLogsOutcomeCallable describeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request) const;
            CreateSQLDiagnosisOutcome createSQLDiagnosis(const Model::CreateSQLDiagnosisRequest &request)const;
            void createSQLDiagnosisAsync(const Model::CreateSQLDiagnosisRequest& request, const CreateSQLDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateSQLDiagnosisOutcomeCallable createSQLDiagnosisCallable(const Model::CreateSQLDiagnosisRequest& request) const;
            CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
            void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
            DescribeReplicaUsageOutcome describeReplicaUsage(const Model::DescribeReplicaUsageRequest &request)const;
            void describeReplicaUsageAsync(const Model::DescribeReplicaUsageRequest& request, const DescribeReplicaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeReplicaUsageOutcomeCallable describeReplicaUsageCallable(const Model::DescribeReplicaUsageRequest& request) const;
            ModifyReadWriteSplittingConnectionOutcome modifyReadWriteSplittingConnection(const Model::ModifyReadWriteSplittingConnectionRequest &request)const;
            void modifyReadWriteSplittingConnectionAsync(const Model::ModifyReadWriteSplittingConnectionRequest& request, const ModifyReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyReadWriteSplittingConnectionOutcomeCallable modifyReadWriteSplittingConnectionCallable(const Model::ModifyReadWriteSplittingConnectionRequest& request) const;
            ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
            void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
            ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
            void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
            DescribeDBInstanceNetworkDetailOutcome describeDBInstanceNetworkDetail(const Model::DescribeDBInstanceNetworkDetailRequest &request)const;
            void describeDBInstanceNetworkDetailAsync(const Model::DescribeDBInstanceNetworkDetailRequest& request, const DescribeDBInstanceNetworkDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceNetworkDetailOutcomeCallable describeDBInstanceNetworkDetailCallable(const Model::DescribeDBInstanceNetworkDetailRequest& request) const;
            DescribeReplicaPerformanceOutcome describeReplicaPerformance(const Model::DescribeReplicaPerformanceRequest &request)const;
            void describeReplicaPerformanceAsync(const Model::DescribeReplicaPerformanceRequest& request, const DescribeReplicaPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeReplicaPerformanceOutcomeCallable describeReplicaPerformanceCallable(const Model::DescribeReplicaPerformanceRequest& request) const;
            DescribeSQLDiagnosisOutcome describeSQLDiagnosis(const Model::DescribeSQLDiagnosisRequest &request)const;
            void describeSQLDiagnosisAsync(const Model::DescribeSQLDiagnosisRequest& request, const DescribeSQLDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLDiagnosisOutcomeCallable describeSQLDiagnosisCallable(const Model::DescribeSQLDiagnosisRequest& request) const;
            DescribeDampPolicyByPolicyNameOutcome describeDampPolicyByPolicyName(const Model::DescribeDampPolicyByPolicyNameRequest &request)const;
            void describeDampPolicyByPolicyNameAsync(const Model::DescribeDampPolicyByPolicyNameRequest& request, const DescribeDampPolicyByPolicyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDampPolicyByPolicyNameOutcomeCallable describeDampPolicyByPolicyNameCallable(const Model::DescribeDampPolicyByPolicyNameRequest& request) const;
            ModifyResourceGroupOutcome modifyResourceGroup(const Model::ModifyResourceGroupRequest &request)const;
            void modifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyResourceGroupOutcomeCallable modifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request) const;
            DescribeOssDownloadsForSQLServerOutcome describeOssDownloadsForSQLServer(const Model::DescribeOssDownloadsForSQLServerRequest &request)const;
            void describeOssDownloadsForSQLServerAsync(const Model::DescribeOssDownloadsForSQLServerRequest& request, const DescribeOssDownloadsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOssDownloadsForSQLServerOutcomeCallable describeOssDownloadsForSQLServerCallable(const Model::DescribeOssDownloadsForSQLServerRequest& request) const;
            RequestServiceOfCloudDBAOutcome requestServiceOfCloudDBA(const Model::RequestServiceOfCloudDBARequest &request)const;
            void requestServiceOfCloudDBAAsync(const Model::RequestServiceOfCloudDBARequest& request, const RequestServiceOfCloudDBAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RequestServiceOfCloudDBAOutcomeCallable requestServiceOfCloudDBACallable(const Model::RequestServiceOfCloudDBARequest& request) const;
            ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
            void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
            PreCheckBeforeImportDataOutcome preCheckBeforeImportData(const Model::PreCheckBeforeImportDataRequest &request)const;
            void preCheckBeforeImportDataAsync(const Model::PreCheckBeforeImportDataRequest& request, const PreCheckBeforeImportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PreCheckBeforeImportDataOutcomeCallable preCheckBeforeImportDataCallable(const Model::PreCheckBeforeImportDataRequest& request) const;
            DescribeResourceUsageOutcome describeResourceUsage(const Model::DescribeResourceUsageRequest &request)const;
            void describeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeResourceUsageOutcomeCallable describeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request) const;
            PurgeDBInstanceLogOutcome purgeDBInstanceLog(const Model::PurgeDBInstanceLogRequest &request)const;
            void purgeDBInstanceLogAsync(const Model::PurgeDBInstanceLogRequest& request, const PurgeDBInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PurgeDBInstanceLogOutcomeCallable purgeDBInstanceLogCallable(const Model::PurgeDBInstanceLogRequest& request) const;
            DescribeTaskInfoOutcome describeTaskInfo(const Model::DescribeTaskInfoRequest &request)const;
            void describeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTaskInfoOutcomeCallable describeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request) const;
            DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
            void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
            MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
            void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
            DescribeOptimizeAdviceOnMissPKOutcome describeOptimizeAdviceOnMissPK(const Model::DescribeOptimizeAdviceOnMissPKRequest &request)const;
            void describeOptimizeAdviceOnMissPKAsync(const Model::DescribeOptimizeAdviceOnMissPKRequest& request, const DescribeOptimizeAdviceOnMissPKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOptimizeAdviceOnMissPKOutcomeCallable describeOptimizeAdviceOnMissPKCallable(const Model::DescribeOptimizeAdviceOnMissPKRequest& request) const;
            DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
            void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
            DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
            void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
            UpgradeDBInstanceNetworkOutcome upgradeDBInstanceNetwork(const Model::UpgradeDBInstanceNetworkRequest &request)const;
            void upgradeDBInstanceNetworkAsync(const Model::UpgradeDBInstanceNetworkRequest& request, const UpgradeDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeDBInstanceNetworkOutcomeCallable upgradeDBInstanceNetworkCallable(const Model::UpgradeDBInstanceNetworkRequest& request) const;
            ReleaseReadWriteSplittingConnectionOutcome releaseReadWriteSplittingConnection(const Model::ReleaseReadWriteSplittingConnectionRequest &request)const;
            void releaseReadWriteSplittingConnectionAsync(const Model::ReleaseReadWriteSplittingConnectionRequest& request, const ReleaseReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ReleaseReadWriteSplittingConnectionOutcomeCallable releaseReadWriteSplittingConnectionCallable(const Model::ReleaseReadWriteSplittingConnectionRequest& request) const;
            DescribeFilesForSQLServerOutcome describeFilesForSQLServer(const Model::DescribeFilesForSQLServerRequest &request)const;
            void describeFilesForSQLServerAsync(const Model::DescribeFilesForSQLServerRequest& request, const DescribeFilesForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeFilesForSQLServerOutcomeCallable describeFilesForSQLServerCallable(const Model::DescribeFilesForSQLServerRequest& request) const;
            DescribeErrorLogsOutcome describeErrorLogs(const Model::DescribeErrorLogsRequest &request)const;
            void describeErrorLogsAsync(const Model::DescribeErrorLogsRequest& request, const DescribeErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeErrorLogsOutcomeCallable describeErrorLogsCallable(const Model::DescribeErrorLogsRequest& request) const;
            ModifyDBInstanceHAConfigOutcome modifyDBInstanceHAConfig(const Model::ModifyDBInstanceHAConfigRequest &request)const;
            void modifyDBInstanceHAConfigAsync(const Model::ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyDBInstanceHAConfigOutcomeCallable modifyDBInstanceHAConfigCallable(const Model::ModifyDBInstanceHAConfigRequest& request) const;
            DescribeDBInstancesAsCsvOutcome describeDBInstancesAsCsv(const Model::DescribeDBInstancesAsCsvRequest &request)const;
            void describeDBInstancesAsCsvAsync(const Model::DescribeDBInstancesAsCsvRequest& request, const DescribeDBInstancesAsCsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstancesAsCsvOutcomeCallable describeDBInstancesAsCsvCallable(const Model::DescribeDBInstancesAsCsvRequest& request) const;
            ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
            void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
            DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
            void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
            DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
            void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
            DescribeDBInstanceByTagsOutcome describeDBInstanceByTags(const Model::DescribeDBInstanceByTagsRequest &request)const;
            void describeDBInstanceByTagsAsync(const Model::DescribeDBInstanceByTagsRequest& request, const DescribeDBInstanceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceByTagsOutcomeCallable describeDBInstanceByTagsCallable(const Model::DescribeDBInstanceByTagsRequest& request) const;
            DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
            void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
            CreateDampPolicyOutcome createDampPolicy(const Model::CreateDampPolicyRequest &request)const;
            void createDampPolicyAsync(const Model::CreateDampPolicyRequest& request, const CreateDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateDampPolicyOutcomeCallable createDampPolicyCallable(const Model::CreateDampPolicyRequest& request) const;
            DescribeDBInstancesByPerformanceOutcome describeDBInstancesByPerformance(const Model::DescribeDBInstancesByPerformanceRequest &request)const;
            void describeDBInstancesByPerformanceAsync(const Model::DescribeDBInstancesByPerformanceRequest& request, const DescribeDBInstancesByPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstancesByPerformanceOutcomeCallable describeDBInstancesByPerformanceCallable(const Model::DescribeDBInstancesByPerformanceRequest& request) const;
            RenewDBInstanceOutcome renewDBInstance(const Model::RenewDBInstanceRequest &request)const;
            void renewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RenewDBInstanceOutcomeCallable renewDBInstanceCallable(const Model::RenewDBInstanceRequest& request) const;
            QueryPriceForBuyOutcome queryPriceForBuy(const Model::QueryPriceForBuyRequest &request)const;
            void queryPriceForBuyAsync(const Model::QueryPriceForBuyRequest& request, const QueryPriceForBuyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryPriceForBuyOutcomeCallable queryPriceForBuyCallable(const Model::QueryPriceForBuyRequest& request) const;
            DescribeSQLReportsOutcome describeSQLReports(const Model::DescribeSQLReportsRequest &request)const;
            void describeSQLReportsAsync(const Model::DescribeSQLReportsRequest& request, const DescribeSQLReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSQLReportsOutcomeCallable describeSQLReportsCallable(const Model::DescribeSQLReportsRequest& request) const;
            DescribeBackupTasksOutcome describeBackupTasks(const Model::DescribeBackupTasksRequest &request)const;
            void describeBackupTasksAsync(const Model::DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBackupTasksOutcomeCallable describeBackupTasksCallable(const Model::DescribeBackupTasksRequest& request) const;
            DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
            void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
            ModifyGuardDomainModeOutcome modifyGuardDomainMode(const Model::ModifyGuardDomainModeRequest &request)const;
            void modifyGuardDomainModeAsync(const Model::ModifyGuardDomainModeRequest& request, const ModifyGuardDomainModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyGuardDomainModeOutcomeCallable modifyGuardDomainModeCallable(const Model::ModifyGuardDomainModeRequest& request) const;
            DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
            void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
            CreateMigrateTaskForSQLServerOutcome createMigrateTaskForSQLServer(const Model::CreateMigrateTaskForSQLServerRequest &request)const;
            void createMigrateTaskForSQLServerAsync(const Model::CreateMigrateTaskForSQLServerRequest& request, const CreateMigrateTaskForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateMigrateTaskForSQLServerOutcomeCallable createMigrateTaskForSQLServerCallable(const Model::CreateMigrateTaskForSQLServerRequest& request) const;
            DescribeDBInstanceIPArrayListOutcome describeDBInstanceIPArrayList(const Model::DescribeDBInstanceIPArrayListRequest &request)const;
            void describeDBInstanceIPArrayListAsync(const Model::DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDBInstanceIPArrayListOutcomeCallable describeDBInstanceIPArrayListCallable(const Model::DescribeDBInstanceIPArrayListRequest& request) const;
            SwitchDBInstanceHAOutcome switchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request)const;
            void switchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SwitchDBInstanceHAOutcomeCallable switchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request) const;
            ResetAccountForPGOutcome resetAccountForPG(const Model::ResetAccountForPGRequest &request)const;
            void resetAccountForPGAsync(const Model::ResetAccountForPGRequest& request, const ResetAccountForPGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResetAccountForPGOutcomeCallable resetAccountForPGCallable(const Model::ResetAccountForPGRequest& request) const;
            DescribeBackupSetsForSecurityOutcome describeBackupSetsForSecurity(const Model::DescribeBackupSetsForSecurityRequest &request)const;
            void describeBackupSetsForSecurityAsync(const Model::DescribeBackupSetsForSecurityRequest& request, const DescribeBackupSetsForSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBackupSetsForSecurityOutcomeCallable describeBackupSetsForSecurityCallable(const Model::DescribeBackupSetsForSecurityRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RDS_RDSCLIENT_H_
