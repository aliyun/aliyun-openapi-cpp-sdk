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
#include "model/AddTagsToResourceRequest.h"
#include "model/AddTagsToResourceResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/AllocateReadWriteSplittingConnectionRequest.h"
#include "model/AllocateReadWriteSplittingConnectionResult.h"
#include "model/CalculateDBInstanceWeightRequest.h"
#include "model/CalculateDBInstanceWeightResult.h"
#include "model/CancelImportRequest.h"
#include "model/CancelImportResult.h"
#include "model/CheckAccountNameAvailableRequest.h"
#include "model/CheckAccountNameAvailableResult.h"
#include "model/CheckCloudResourceAuthorizedRequest.h"
#include "model/CheckCloudResourceAuthorizedResult.h"
#include "model/CheckCreateDdrDBInstanceRequest.h"
#include "model/CheckCreateDdrDBInstanceResult.h"
#include "model/CheckDBNameAvailableRequest.h"
#include "model/CheckDBNameAvailableResult.h"
#include "model/CheckInstanceExistRequest.h"
#include "model/CheckInstanceExistResult.h"
#include "model/CloneDBInstanceRequest.h"
#include "model/CloneDBInstanceResult.h"
#include "model/CloneParameterGroupRequest.h"
#include "model/CloneParameterGroupResult.h"
#include "model/CopyDatabaseRequest.h"
#include "model/CopyDatabaseResult.h"
#include "model/CopyDatabaseBetweenInstancesRequest.h"
#include "model/CopyDatabaseBetweenInstancesResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateDBProxyEndpointAddressRequest.h"
#include "model/CreateDBProxyEndpointAddressResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateDdrInstanceRequest.h"
#include "model/CreateDdrInstanceResult.h"
#include "model/CreateDiagnosticReportRequest.h"
#include "model/CreateDiagnosticReportResult.h"
#include "model/CreateMigrateTaskRequest.h"
#include "model/CreateMigrateTaskResult.h"
#include "model/CreateMigrateTaskForSQLServerRequest.h"
#include "model/CreateMigrateTaskForSQLServerResult.h"
#include "model/CreateOnlineDatabaseTaskRequest.h"
#include "model/CreateOnlineDatabaseTaskResult.h"
#include "model/CreateParameterGroupRequest.h"
#include "model/CreateParameterGroupResult.h"
#include "model/CreateReadOnlyDBInstanceRequest.h"
#include "model/CreateReadOnlyDBInstanceResult.h"
#include "model/CreateTempDBInstanceRequest.h"
#include "model/CreateTempDBInstanceResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteBackupRequest.h"
#include "model/DeleteBackupResult.h"
#include "model/DeleteBackupFileRequest.h"
#include "model/DeleteBackupFileResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteDBProxyEndpointAddressRequest.h"
#include "model/DeleteDBProxyEndpointAddressResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteHostAccountRequest.h"
#include "model/DeleteHostAccountResult.h"
#include "model/DeleteParameterGroupRequest.h"
#include "model/DeleteParameterGroupResult.h"
#include "model/DescibeImportsFromDatabaseRequest.h"
#include "model/DescibeImportsFromDatabaseResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeActionEventPolicyRequest.h"
#include "model/DescribeActionEventPolicyResult.h"
#include "model/DescribeAvailableClassesRequest.h"
#include "model/DescribeAvailableClassesResult.h"
#include "model/DescribeAvailableCrossRegionRequest.h"
#include "model/DescribeAvailableCrossRegionResult.h"
#include "model/DescribeAvailableDedicatedHostClassesRequest.h"
#include "model/DescribeAvailableDedicatedHostClassesResult.h"
#include "model/DescribeAvailableRecoveryTimeRequest.h"
#include "model/DescribeAvailableRecoveryTimeResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeAvailableZonesRequest.h"
#include "model/DescribeAvailableZonesResult.h"
#include "model/DescribeBackupDatabaseRequest.h"
#include "model/DescribeBackupDatabaseResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupTasksRequest.h"
#include "model/DescribeBackupTasksResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeBinlogFilesRequest.h"
#include "model/DescribeBinlogFilesResult.h"
#include "model/DescribeCharacterSetNameRequest.h"
#include "model/DescribeCharacterSetNameResult.h"
#include "model/DescribeCollationTimeZonesRequest.h"
#include "model/DescribeCollationTimeZonesResult.h"
#include "model/DescribeCrossBackupMetaListRequest.h"
#include "model/DescribeCrossBackupMetaListResult.h"
#include "model/DescribeCrossRegionBackupDBInstanceRequest.h"
#include "model/DescribeCrossRegionBackupDBInstanceResult.h"
#include "model/DescribeCrossRegionBackupsRequest.h"
#include "model/DescribeCrossRegionBackupsResult.h"
#include "model/DescribeCrossRegionLogBackupFilesRequest.h"
#include "model/DescribeCrossRegionLogBackupFilesResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceDetailRequest.h"
#include "model/DescribeDBInstanceDetailResult.h"
#include "model/DescribeDBInstanceHAConfigRequest.h"
#include "model/DescribeDBInstanceHAConfigResult.h"
#include "model/DescribeDBInstanceIPArrayListRequest.h"
#include "model/DescribeDBInstanceIPArrayListResult.h"
#include "model/DescribeDBInstanceIpHostnameRequest.h"
#include "model/DescribeDBInstanceIpHostnameResult.h"
#include "model/DescribeDBInstanceMonitorRequest.h"
#include "model/DescribeDBInstanceMonitorResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBInstanceProxyConfigurationRequest.h"
#include "model/DescribeDBInstanceProxyConfigurationResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/DescribeDBInstanceTDERequest.h"
#include "model/DescribeDBInstanceTDEResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeDBInstancesAsCsvRequest.h"
#include "model/DescribeDBInstancesAsCsvResult.h"
#include "model/DescribeDBInstancesByExpireTimeRequest.h"
#include "model/DescribeDBInstancesByExpireTimeResult.h"
#include "model/DescribeDBInstancesByPerformanceRequest.h"
#include "model/DescribeDBInstancesByPerformanceResult.h"
#include "model/DescribeDBInstancesForCloneRequest.h"
#include "model/DescribeDBInstancesForCloneResult.h"
#include "model/DescribeDBProxyRequest.h"
#include "model/DescribeDBProxyResult.h"
#include "model/DescribeDBProxyEndpointRequest.h"
#include "model/DescribeDBProxyEndpointResult.h"
#include "model/DescribeDBProxyPerformanceRequest.h"
#include "model/DescribeDBProxyPerformanceResult.h"
#include "model/DescribeDTCSecurityIpHostsForSQLServerRequest.h"
#include "model/DescribeDTCSecurityIpHostsForSQLServerResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeDedicatedHostGroupsRequest.h"
#include "model/DescribeDedicatedHostGroupsResult.h"
#include "model/DescribeDedicatedHostsRequest.h"
#include "model/DescribeDedicatedHostsResult.h"
#include "model/DescribeDetachedBackupsRequest.h"
#include "model/DescribeDetachedBackupsResult.h"
#include "model/DescribeDiagnosticReportListRequest.h"
#include "model/DescribeDiagnosticReportListResult.h"
#include "model/DescribeErrorLogsRequest.h"
#include "model/DescribeErrorLogsResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeHASwitchConfigRequest.h"
#include "model/DescribeHASwitchConfigResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeInstanceCrossBackupPolicyRequest.h"
#include "model/DescribeInstanceCrossBackupPolicyResult.h"
#include "model/DescribeInstanceKeywordsRequest.h"
#include "model/DescribeInstanceKeywordsResult.h"
#include "model/DescribeLocalAvailableRecoveryTimeRequest.h"
#include "model/DescribeLocalAvailableRecoveryTimeResult.h"
#include "model/DescribeLogBackupFilesRequest.h"
#include "model/DescribeLogBackupFilesResult.h"
#include "model/DescribeMigrateTaskByIdRequest.h"
#include "model/DescribeMigrateTaskByIdResult.h"
#include "model/DescribeMigrateTasksRequest.h"
#include "model/DescribeMigrateTasksResult.h"
#include "model/DescribeMigrateTasksForSQLServerRequest.h"
#include "model/DescribeMigrateTasksForSQLServerResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeOssDownloadsRequest.h"
#include "model/DescribeOssDownloadsResult.h"
#include "model/DescribeOssDownloadsForSQLServerRequest.h"
#include "model/DescribeOssDownloadsForSQLServerResult.h"
#include "model/DescribeParameterGroupRequest.h"
#include "model/DescribeParameterGroupResult.h"
#include "model/DescribeParameterGroupsRequest.h"
#include "model/DescribeParameterGroupsResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeRdsResourceSettingsRequest.h"
#include "model/DescribeRdsResourceSettingsResult.h"
#include "model/DescribeReadDBInstanceDelayRequest.h"
#include "model/DescribeReadDBInstanceDelayResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRenewalPriceRequest.h"
#include "model/DescribeRenewalPriceResult.h"
#include "model/DescribeResourceUsageRequest.h"
#include "model/DescribeResourceUsageResult.h"
#include "model/DescribeSQLCollectorPolicyRequest.h"
#include "model/DescribeSQLCollectorPolicyResult.h"
#include "model/DescribeSQLCollectorRetentionRequest.h"
#include "model/DescribeSQLCollectorRetentionResult.h"
#include "model/DescribeSQLLogFilesRequest.h"
#include "model/DescribeSQLLogFilesResult.h"
#include "model/DescribeSQLLogRecordsRequest.h"
#include "model/DescribeSQLLogRecordsResult.h"
#include "model/DescribeSQLLogReportListRequest.h"
#include "model/DescribeSQLLogReportListResult.h"
#include "model/DescribeSQLLogReportsRequest.h"
#include "model/DescribeSQLLogReportsResult.h"
#include "model/DescribeSQLReportsRequest.h"
#include "model/DescribeSQLReportsResult.h"
#include "model/DescribeSecurityGroupConfigurationRequest.h"
#include "model/DescribeSecurityGroupConfigurationResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSlowLogsRequest.h"
#include "model/DescribeSlowLogsResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DestroyDBInstanceRequest.h"
#include "model/DestroyDBInstanceResult.h"
#include "model/GetDbProxyInstanceSslRequest.h"
#include "model/GetDbProxyInstanceSslResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/GrantOperatorPermissionRequest.h"
#include "model/GrantOperatorPermissionResult.h"
#include "model/ImportDatabaseBetweenInstancesRequest.h"
#include "model/ImportDatabaseBetweenInstancesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/LockAccountRequest.h"
#include "model/LockAccountResult.h"
#include "model/MigrateConnectionToOtherZoneRequest.h"
#include "model/MigrateConnectionToOtherZoneResult.h"
#include "model/MigrateDBInstanceRequest.h"
#include "model/MigrateDBInstanceResult.h"
#include "model/MigrateSecurityIPModeRequest.h"
#include "model/MigrateSecurityIPModeResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyActionEventPolicyRequest.h"
#include "model/ModifyActionEventPolicyResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyCollationTimeZoneRequest.h"
#include "model/ModifyCollationTimeZoneResult.h"
#include "model/ModifyDBDescriptionRequest.h"
#include "model/ModifyDBDescriptionResult.h"
#include "model/ModifyDBInstanceAutoUpgradeMinorVersionRequest.h"
#include "model/ModifyDBInstanceAutoUpgradeMinorVersionResult.h"
#include "model/ModifyDBInstanceConnectionModeRequest.h"
#include "model/ModifyDBInstanceConnectionModeResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceHAConfigRequest.h"
#include "model/ModifyDBInstanceHAConfigResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceMonitorRequest.h"
#include "model/ModifyDBInstanceMonitorResult.h"
#include "model/ModifyDBInstanceNetworkExpireTimeRequest.h"
#include "model/ModifyDBInstanceNetworkExpireTimeResult.h"
#include "model/ModifyDBInstanceNetworkTypeRequest.h"
#include "model/ModifyDBInstanceNetworkTypeResult.h"
#include "model/ModifyDBInstancePayTypeRequest.h"
#include "model/ModifyDBInstancePayTypeResult.h"
#include "model/ModifyDBInstanceProxyConfigurationRequest.h"
#include "model/ModifyDBInstanceProxyConfigurationResult.h"
#include "model/ModifyDBInstanceSSLRequest.h"
#include "model/ModifyDBInstanceSSLResult.h"
#include "model/ModifyDBInstanceSpecRequest.h"
#include "model/ModifyDBInstanceSpecResult.h"
#include "model/ModifyDBInstanceTDERequest.h"
#include "model/ModifyDBInstanceTDEResult.h"
#include "model/ModifyDBProxyRequest.h"
#include "model/ModifyDBProxyResult.h"
#include "model/ModifyDBProxyEndpointRequest.h"
#include "model/ModifyDBProxyEndpointResult.h"
#include "model/ModifyDBProxyEndpointAddressRequest.h"
#include "model/ModifyDBProxyEndpointAddressResult.h"
#include "model/ModifyDBProxyInstanceRequest.h"
#include "model/ModifyDBProxyInstanceResult.h"
#include "model/ModifyDTCSecurityIpHostsForSQLServerRequest.h"
#include "model/ModifyDTCSecurityIpHostsForSQLServerResult.h"
#include "model/ModifyDasInstanceConfigRequest.h"
#include "model/ModifyDasInstanceConfigResult.h"
#include "model/ModifyDbProxyInstanceSslRequest.h"
#include "model/ModifyDbProxyInstanceSslResult.h"
#include "model/ModifyHASwitchConfigRequest.h"
#include "model/ModifyHASwitchConfigResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/ModifyInstanceCrossBackupPolicyRequest.h"
#include "model/ModifyInstanceCrossBackupPolicyResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ModifyParameterGroupRequest.h"
#include "model/ModifyParameterGroupResult.h"
#include "model/ModifyReadWriteSplittingConnectionRequest.h"
#include "model/ModifyReadWriteSplittingConnectionResult.h"
#include "model/ModifyReadonlyInstanceDelayReplicationTimeRequest.h"
#include "model/ModifyReadonlyInstanceDelayReplicationTimeResult.h"
#include "model/ModifyResourceGroupRequest.h"
#include "model/ModifyResourceGroupResult.h"
#include "model/ModifySQLCollectorPolicyRequest.h"
#include "model/ModifySQLCollectorPolicyResult.h"
#include "model/ModifySQLCollectorRetentionRequest.h"
#include "model/ModifySQLCollectorRetentionResult.h"
#include "model/ModifySecurityGroupConfigurationRequest.h"
#include "model/ModifySecurityGroupConfigurationResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/PurgeDBInstanceLogRequest.h"
#include "model/PurgeDBInstanceLogResult.h"
#include "model/RebuildDBInstanceRequest.h"
#include "model/RebuildDBInstanceResult.h"
#include "model/RecoveryDBInstanceRequest.h"
#include "model/RecoveryDBInstanceResult.h"
#include "model/ReleaseInstanceConnectionRequest.h"
#include "model/ReleaseInstanceConnectionResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ReleaseReadWriteSplittingConnectionRequest.h"
#include "model/ReleaseReadWriteSplittingConnectionResult.h"
#include "model/RemoveTagsFromResourceRequest.h"
#include "model/RemoveTagsFromResourceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/RestoreDdrTableRequest.h"
#include "model/RestoreDdrTableResult.h"
#include "model/RestoreTableRequest.h"
#include "model/RestoreTableResult.h"
#include "model/RevokeAccountPrivilegeRequest.h"
#include "model/RevokeAccountPrivilegeResult.h"
#include "model/RevokeOperatorPermissionRequest.h"
#include "model/RevokeOperatorPermissionResult.h"
#include "model/StartDBInstanceRequest.h"
#include "model/StartDBInstanceResult.h"
#include "model/StopDBInstanceRequest.h"
#include "model/StopDBInstanceResult.h"
#include "model/SwitchDBInstanceHARequest.h"
#include "model/SwitchDBInstanceHAResult.h"
#include "model/SwitchDBInstanceNetTypeRequest.h"
#include "model/SwitchDBInstanceNetTypeResult.h"
#include "model/SwitchDBInstanceVpcRequest.h"
#include "model/SwitchDBInstanceVpcResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TerminateMigrateTaskRequest.h"
#include "model/TerminateMigrateTaskResult.h"
#include "model/TransformDBInstancePayTypeRequest.h"
#include "model/TransformDBInstancePayTypeResult.h"
#include "model/UnlockAccountRequest.h"
#include "model/UnlockAccountResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpgradeDBInstanceEngineVersionRequest.h"
#include "model/UpgradeDBInstanceEngineVersionResult.h"
#include "model/UpgradeDBInstanceKernelVersionRequest.h"
#include "model/UpgradeDBInstanceKernelVersionResult.h"
#include "model/UpgradeDBProxyInstanceKernelVersionRequest.h"
#include "model/UpgradeDBProxyInstanceKernelVersionResult.h"


namespace AlibabaCloud
{
	namespace Rds
	{
		class ALIBABACLOUD_RDS_EXPORT RdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddTagsToResourceResult> AddTagsToResourceOutcome;
			typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AddTagsToResourceRequest&, const AddTagsToResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsToResourceAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::AllocateReadWriteSplittingConnectionResult> AllocateReadWriteSplittingConnectionOutcome;
			typedef std::future<AllocateReadWriteSplittingConnectionOutcome> AllocateReadWriteSplittingConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AllocateReadWriteSplittingConnectionRequest&, const AllocateReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::CalculateDBInstanceWeightResult> CalculateDBInstanceWeightOutcome;
			typedef std::future<CalculateDBInstanceWeightOutcome> CalculateDBInstanceWeightOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CalculateDBInstanceWeightRequest&, const CalculateDBInstanceWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalculateDBInstanceWeightAsyncHandler;
			typedef Outcome<Error, Model::CancelImportResult> CancelImportOutcome;
			typedef std::future<CancelImportOutcome> CancelImportOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CancelImportRequest&, const CancelImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelImportAsyncHandler;
			typedef Outcome<Error, Model::CheckAccountNameAvailableResult> CheckAccountNameAvailableOutcome;
			typedef std::future<CheckAccountNameAvailableOutcome> CheckAccountNameAvailableOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckAccountNameAvailableRequest&, const CheckAccountNameAvailableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountNameAvailableAsyncHandler;
			typedef Outcome<Error, Model::CheckCloudResourceAuthorizedResult> CheckCloudResourceAuthorizedOutcome;
			typedef std::future<CheckCloudResourceAuthorizedOutcome> CheckCloudResourceAuthorizedOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckCloudResourceAuthorizedRequest&, const CheckCloudResourceAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCloudResourceAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::CheckCreateDdrDBInstanceResult> CheckCreateDdrDBInstanceOutcome;
			typedef std::future<CheckCreateDdrDBInstanceOutcome> CheckCreateDdrDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckCreateDdrDBInstanceRequest&, const CheckCreateDdrDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCreateDdrDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CheckDBNameAvailableResult> CheckDBNameAvailableOutcome;
			typedef std::future<CheckDBNameAvailableOutcome> CheckDBNameAvailableOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckDBNameAvailableRequest&, const CheckDBNameAvailableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDBNameAvailableAsyncHandler;
			typedef Outcome<Error, Model::CheckInstanceExistResult> CheckInstanceExistOutcome;
			typedef std::future<CheckInstanceExistOutcome> CheckInstanceExistOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckInstanceExistRequest&, const CheckInstanceExistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceExistAsyncHandler;
			typedef Outcome<Error, Model::CloneDBInstanceResult> CloneDBInstanceOutcome;
			typedef std::future<CloneDBInstanceOutcome> CloneDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CloneDBInstanceRequest&, const CloneDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CloneParameterGroupResult> CloneParameterGroupOutcome;
			typedef std::future<CloneParameterGroupOutcome> CloneParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CloneParameterGroupRequest&, const CloneParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::CopyDatabaseResult> CopyDatabaseOutcome;
			typedef std::future<CopyDatabaseOutcome> CopyDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CopyDatabaseRequest&, const CopyDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CopyDatabaseBetweenInstancesResult> CopyDatabaseBetweenInstancesOutcome;
			typedef std::future<CopyDatabaseBetweenInstancesOutcome> CopyDatabaseBetweenInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CopyDatabaseBetweenInstancesRequest&, const CopyDatabaseBetweenInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyDatabaseBetweenInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDBProxyEndpointAddressResult> CreateDBProxyEndpointAddressOutcome;
			typedef std::future<CreateDBProxyEndpointAddressOutcome> CreateDBProxyEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBProxyEndpointAddressRequest&, const CreateDBProxyEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBProxyEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateDdrInstanceResult> CreateDdrInstanceOutcome;
			typedef std::future<CreateDdrInstanceOutcome> CreateDdrInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDdrInstanceRequest&, const CreateDdrInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDdrInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDiagnosticReportResult> CreateDiagnosticReportOutcome;
			typedef std::future<CreateDiagnosticReportOutcome> CreateDiagnosticReportOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDiagnosticReportRequest&, const CreateDiagnosticReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiagnosticReportAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrateTaskResult> CreateMigrateTaskOutcome;
			typedef std::future<CreateMigrateTaskOutcome> CreateMigrateTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateMigrateTaskRequest&, const CreateMigrateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrateTaskForSQLServerResult> CreateMigrateTaskForSQLServerOutcome;
			typedef std::future<CreateMigrateTaskForSQLServerOutcome> CreateMigrateTaskForSQLServerOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateMigrateTaskForSQLServerRequest&, const CreateMigrateTaskForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateTaskForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::CreateOnlineDatabaseTaskResult> CreateOnlineDatabaseTaskOutcome;
			typedef std::future<CreateOnlineDatabaseTaskOutcome> CreateOnlineDatabaseTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateOnlineDatabaseTaskRequest&, const CreateOnlineDatabaseTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnlineDatabaseTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateParameterGroupResult> CreateParameterGroupOutcome;
			typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateParameterGroupRequest&, const CreateParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateReadOnlyDBInstanceResult> CreateReadOnlyDBInstanceOutcome;
			typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateReadOnlyDBInstanceRequest&, const CreateReadOnlyDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateTempDBInstanceResult> CreateTempDBInstanceOutcome;
			typedef std::future<CreateTempDBInstanceOutcome> CreateTempDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateTempDBInstanceRequest&, const CreateTempDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTempDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupResult> DeleteBackupOutcome;
			typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteBackupRequest&, const DeleteBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupFileResult> DeleteBackupFileOutcome;
			typedef std::future<DeleteBackupFileOutcome> DeleteBackupFileOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteBackupFileRequest&, const DeleteBackupFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBProxyEndpointAddressResult> DeleteDBProxyEndpointAddressOutcome;
			typedef std::future<DeleteDBProxyEndpointAddressOutcome> DeleteDBProxyEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBProxyEndpointAddressRequest&, const DeleteDBProxyEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBProxyEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteHostAccountResult> DeleteHostAccountOutcome;
			typedef std::future<DeleteHostAccountOutcome> DeleteHostAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteHostAccountRequest&, const DeleteHostAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteParameterGroupResult> DeleteParameterGroupOutcome;
			typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteParameterGroupRequest&, const DeleteParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::DescibeImportsFromDatabaseResult> DescibeImportsFromDatabaseOutcome;
			typedef std::future<DescibeImportsFromDatabaseOutcome> DescibeImportsFromDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescibeImportsFromDatabaseRequest&, const DescibeImportsFromDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescibeImportsFromDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActionEventPolicyResult> DescribeActionEventPolicyOutcome;
			typedef std::future<DescribeActionEventPolicyOutcome> DescribeActionEventPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeActionEventPolicyRequest&, const DescribeActionEventPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionEventPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableClassesResult> DescribeAvailableClassesOutcome;
			typedef std::future<DescribeAvailableClassesOutcome> DescribeAvailableClassesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableClassesRequest&, const DescribeAvailableClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClassesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableCrossRegionResult> DescribeAvailableCrossRegionOutcome;
			typedef std::future<DescribeAvailableCrossRegionOutcome> DescribeAvailableCrossRegionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableCrossRegionRequest&, const DescribeAvailableCrossRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCrossRegionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableDedicatedHostClassesResult> DescribeAvailableDedicatedHostClassesOutcome;
			typedef std::future<DescribeAvailableDedicatedHostClassesOutcome> DescribeAvailableDedicatedHostClassesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableDedicatedHostClassesRequest&, const DescribeAvailableDedicatedHostClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableDedicatedHostClassesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableRecoveryTimeResult> DescribeAvailableRecoveryTimeOutcome;
			typedef std::future<DescribeAvailableRecoveryTimeOutcome> DescribeAvailableRecoveryTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableRecoveryTimeRequest&, const DescribeAvailableRecoveryTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableRecoveryTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableZonesResult> DescribeAvailableZonesOutcome;
			typedef std::future<DescribeAvailableZonesOutcome> DescribeAvailableZonesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableZonesRequest&, const DescribeAvailableZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupDatabaseResult> DescribeBackupDatabaseOutcome;
			typedef std::future<DescribeBackupDatabaseOutcome> DescribeBackupDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupDatabaseRequest&, const DescribeBackupDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTasksResult> DescribeBackupTasksOutcome;
			typedef std::future<DescribeBackupTasksOutcome> DescribeBackupTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupTasksRequest&, const DescribeBackupTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBinlogFilesResult> DescribeBinlogFilesOutcome;
			typedef std::future<DescribeBinlogFilesOutcome> DescribeBinlogFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeBinlogFilesRequest&, const DescribeBinlogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharacterSetNameResult> DescribeCharacterSetNameOutcome;
			typedef std::future<DescribeCharacterSetNameOutcome> DescribeCharacterSetNameOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCharacterSetNameRequest&, const DescribeCharacterSetNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharacterSetNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeCollationTimeZonesResult> DescribeCollationTimeZonesOutcome;
			typedef std::future<DescribeCollationTimeZonesOutcome> DescribeCollationTimeZonesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCollationTimeZonesRequest&, const DescribeCollationTimeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCollationTimeZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossBackupMetaListResult> DescribeCrossBackupMetaListOutcome;
			typedef std::future<DescribeCrossBackupMetaListOutcome> DescribeCrossBackupMetaListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCrossBackupMetaListRequest&, const DescribeCrossBackupMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBackupMetaListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossRegionBackupDBInstanceResult> DescribeCrossRegionBackupDBInstanceOutcome;
			typedef std::future<DescribeCrossRegionBackupDBInstanceOutcome> DescribeCrossRegionBackupDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCrossRegionBackupDBInstanceRequest&, const DescribeCrossRegionBackupDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionBackupDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossRegionBackupsResult> DescribeCrossRegionBackupsOutcome;
			typedef std::future<DescribeCrossRegionBackupsOutcome> DescribeCrossRegionBackupsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCrossRegionBackupsRequest&, const DescribeCrossRegionBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossRegionLogBackupFilesResult> DescribeCrossRegionLogBackupFilesOutcome;
			typedef std::future<DescribeCrossRegionLogBackupFilesOutcome> DescribeCrossRegionLogBackupFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCrossRegionLogBackupFilesRequest&, const DescribeCrossRegionLogBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionLogBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceDetailResult> DescribeDBInstanceDetailOutcome;
			typedef std::future<DescribeDBInstanceDetailOutcome> DescribeDBInstanceDetailOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceDetailRequest&, const DescribeDBInstanceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceHAConfigResult> DescribeDBInstanceHAConfigOutcome;
			typedef std::future<DescribeDBInstanceHAConfigOutcome> DescribeDBInstanceHAConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceHAConfigRequest&, const DescribeDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIPArrayListResult> DescribeDBInstanceIPArrayListOutcome;
			typedef std::future<DescribeDBInstanceIPArrayListOutcome> DescribeDBInstanceIPArrayListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceIPArrayListRequest&, const DescribeDBInstanceIPArrayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIPArrayListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIpHostnameResult> DescribeDBInstanceIpHostnameOutcome;
			typedef std::future<DescribeDBInstanceIpHostnameOutcome> DescribeDBInstanceIpHostnameOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceIpHostnameRequest&, const DescribeDBInstanceIpHostnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIpHostnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMonitorResult> DescribeDBInstanceMonitorOutcome;
			typedef std::future<DescribeDBInstanceMonitorOutcome> DescribeDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceMonitorRequest&, const DescribeDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceProxyConfigurationResult> DescribeDBInstanceProxyConfigurationOutcome;
			typedef std::future<DescribeDBInstanceProxyConfigurationOutcome> DescribeDBInstanceProxyConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceProxyConfigurationRequest&, const DescribeDBInstanceProxyConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceProxyConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceTDEResult> DescribeDBInstanceTDEOutcome;
			typedef std::future<DescribeDBInstanceTDEOutcome> DescribeDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceTDERequest&, const DescribeDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesAsCsvResult> DescribeDBInstancesAsCsvOutcome;
			typedef std::future<DescribeDBInstancesAsCsvOutcome> DescribeDBInstancesAsCsvOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesAsCsvRequest&, const DescribeDBInstancesAsCsvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsCsvAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesByExpireTimeResult> DescribeDBInstancesByExpireTimeOutcome;
			typedef std::future<DescribeDBInstancesByExpireTimeOutcome> DescribeDBInstancesByExpireTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesByExpireTimeRequest&, const DescribeDBInstancesByExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesByExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesByPerformanceResult> DescribeDBInstancesByPerformanceOutcome;
			typedef std::future<DescribeDBInstancesByPerformanceOutcome> DescribeDBInstancesByPerformanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesByPerformanceRequest&, const DescribeDBInstancesByPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesByPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesForCloneResult> DescribeDBInstancesForCloneOutcome;
			typedef std::future<DescribeDBInstancesForCloneOutcome> DescribeDBInstancesForCloneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancesForCloneRequest&, const DescribeDBInstancesForCloneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesForCloneAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBProxyResult> DescribeDBProxyOutcome;
			typedef std::future<DescribeDBProxyOutcome> DescribeDBProxyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBProxyRequest&, const DescribeDBProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBProxyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBProxyEndpointResult> DescribeDBProxyEndpointOutcome;
			typedef std::future<DescribeDBProxyEndpointOutcome> DescribeDBProxyEndpointOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBProxyEndpointRequest&, const DescribeDBProxyEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBProxyEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBProxyPerformanceResult> DescribeDBProxyPerformanceOutcome;
			typedef std::future<DescribeDBProxyPerformanceOutcome> DescribeDBProxyPerformanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBProxyPerformanceRequest&, const DescribeDBProxyPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBProxyPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDTCSecurityIpHostsForSQLServerResult> DescribeDTCSecurityIpHostsForSQLServerOutcome;
			typedef std::future<DescribeDTCSecurityIpHostsForSQLServerOutcome> DescribeDTCSecurityIpHostsForSQLServerOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDTCSecurityIpHostsForSQLServerRequest&, const DescribeDTCSecurityIpHostsForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDTCSecurityIpHostsForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedHostGroupsResult> DescribeDedicatedHostGroupsOutcome;
			typedef std::future<DescribeDedicatedHostGroupsOutcome> DescribeDedicatedHostGroupsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDedicatedHostGroupsRequest&, const DescribeDedicatedHostGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedHostGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedHostsResult> DescribeDedicatedHostsOutcome;
			typedef std::future<DescribeDedicatedHostsOutcome> DescribeDedicatedHostsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDedicatedHostsRequest&, const DescribeDedicatedHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedHostsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDetachedBackupsResult> DescribeDetachedBackupsOutcome;
			typedef std::future<DescribeDetachedBackupsOutcome> DescribeDetachedBackupsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDetachedBackupsRequest&, const DescribeDetachedBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetachedBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosticReportListResult> DescribeDiagnosticReportListOutcome;
			typedef std::future<DescribeDiagnosticReportListOutcome> DescribeDiagnosticReportListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDiagnosticReportListRequest&, const DescribeDiagnosticReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosticReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeErrorLogsResult> DescribeErrorLogsOutcome;
			typedef std::future<DescribeErrorLogsOutcome> DescribeErrorLogsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeErrorLogsRequest&, const DescribeErrorLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHASwitchConfigResult> DescribeHASwitchConfigOutcome;
			typedef std::future<DescribeHASwitchConfigOutcome> DescribeHASwitchConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHASwitchConfigRequest&, const DescribeHASwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHASwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceCrossBackupPolicyResult> DescribeInstanceCrossBackupPolicyOutcome;
			typedef std::future<DescribeInstanceCrossBackupPolicyOutcome> DescribeInstanceCrossBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceCrossBackupPolicyRequest&, const DescribeInstanceCrossBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCrossBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceKeywordsResult> DescribeInstanceKeywordsOutcome;
			typedef std::future<DescribeInstanceKeywordsOutcome> DescribeInstanceKeywordsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceKeywordsRequest&, const DescribeInstanceKeywordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceKeywordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLocalAvailableRecoveryTimeResult> DescribeLocalAvailableRecoveryTimeOutcome;
			typedef std::future<DescribeLocalAvailableRecoveryTimeOutcome> DescribeLocalAvailableRecoveryTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeLocalAvailableRecoveryTimeRequest&, const DescribeLocalAvailableRecoveryTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalAvailableRecoveryTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogBackupFilesResult> DescribeLogBackupFilesOutcome;
			typedef std::future<DescribeLogBackupFilesOutcome> DescribeLogBackupFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeLogBackupFilesRequest&, const DescribeLogBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTaskByIdResult> DescribeMigrateTaskByIdOutcome;
			typedef std::future<DescribeMigrateTaskByIdOutcome> DescribeMigrateTaskByIdOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTaskByIdRequest&, const DescribeMigrateTaskByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTaskByIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTasksResult> DescribeMigrateTasksOutcome;
			typedef std::future<DescribeMigrateTasksOutcome> DescribeMigrateTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTasksRequest&, const DescribeMigrateTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTasksForSQLServerResult> DescribeMigrateTasksForSQLServerOutcome;
			typedef std::future<DescribeMigrateTasksForSQLServerOutcome> DescribeMigrateTasksForSQLServerOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTasksForSQLServerRequest&, const DescribeMigrateTasksForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTasksForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssDownloadsResult> DescribeOssDownloadsOutcome;
			typedef std::future<DescribeOssDownloadsOutcome> DescribeOssDownloadsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeOssDownloadsRequest&, const DescribeOssDownloadsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssDownloadsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssDownloadsForSQLServerResult> DescribeOssDownloadsForSQLServerOutcome;
			typedef std::future<DescribeOssDownloadsForSQLServerOutcome> DescribeOssDownloadsForSQLServerOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeOssDownloadsForSQLServerRequest&, const DescribeOssDownloadsForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssDownloadsForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterGroupResult> DescribeParameterGroupOutcome;
			typedef std::future<DescribeParameterGroupOutcome> DescribeParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeParameterGroupRequest&, const DescribeParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterGroupsResult> DescribeParameterGroupsOutcome;
			typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeParameterGroupsRequest&, const DescribeParameterGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsResourceSettingsResult> DescribeRdsResourceSettingsOutcome;
			typedef std::future<DescribeRdsResourceSettingsOutcome> DescribeRdsResourceSettingsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRdsResourceSettingsRequest&, const DescribeRdsResourceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsResourceSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeReadDBInstanceDelayResult> DescribeReadDBInstanceDelayOutcome;
			typedef std::future<DescribeReadDBInstanceDelayOutcome> DescribeReadDBInstanceDelayOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeReadDBInstanceDelayRequest&, const DescribeReadDBInstanceDelayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadDBInstanceDelayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewalPriceResult> DescribeRenewalPriceOutcome;
			typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRenewalPriceRequest&, const DescribeRenewalPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceUsageResult> DescribeResourceUsageOutcome;
			typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeResourceUsageRequest&, const DescribeResourceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLCollectorPolicyResult> DescribeSQLCollectorPolicyOutcome;
			typedef std::future<DescribeSQLCollectorPolicyOutcome> DescribeSQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLCollectorPolicyRequest&, const DescribeSQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLCollectorRetentionResult> DescribeSQLCollectorRetentionOutcome;
			typedef std::future<DescribeSQLCollectorRetentionOutcome> DescribeSQLCollectorRetentionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLCollectorRetentionRequest&, const DescribeSQLCollectorRetentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLCollectorRetentionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogFilesResult> DescribeSQLLogFilesOutcome;
			typedef std::future<DescribeSQLLogFilesOutcome> DescribeSQLLogFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogFilesRequest&, const DescribeSQLLogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogRecordsResult> DescribeSQLLogRecordsOutcome;
			typedef std::future<DescribeSQLLogRecordsOutcome> DescribeSQLLogRecordsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogRecordsRequest&, const DescribeSQLLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogReportListResult> DescribeSQLLogReportListOutcome;
			typedef std::future<DescribeSQLLogReportListOutcome> DescribeSQLLogReportListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogReportListRequest&, const DescribeSQLLogReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogReportsResult> DescribeSQLLogReportsOutcome;
			typedef std::future<DescribeSQLLogReportsOutcome> DescribeSQLLogReportsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLLogReportsRequest&, const DescribeSQLLogReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogReportsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLReportsResult> DescribeSQLReportsOutcome;
			typedef std::future<DescribeSQLReportsOutcome> DescribeSQLReportsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSQLReportsRequest&, const DescribeSQLReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLReportsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupConfigurationResult> DescribeSecurityGroupConfigurationOutcome;
			typedef std::future<DescribeSecurityGroupConfigurationOutcome> DescribeSecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSecurityGroupConfigurationRequest&, const DescribeSecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogsResult> DescribeSlowLogsOutcome;
			typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogsRequest&, const DescribeSlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DestroyDBInstanceResult> DestroyDBInstanceOutcome;
			typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DestroyDBInstanceRequest&, const DestroyDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetDbProxyInstanceSslResult> GetDbProxyInstanceSslOutcome;
			typedef std::future<GetDbProxyInstanceSslOutcome> GetDbProxyInstanceSslOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GetDbProxyInstanceSslRequest&, const GetDbProxyInstanceSslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDbProxyInstanceSslAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::GrantOperatorPermissionResult> GrantOperatorPermissionOutcome;
			typedef std::future<GrantOperatorPermissionOutcome> GrantOperatorPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GrantOperatorPermissionRequest&, const GrantOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::ImportDatabaseBetweenInstancesResult> ImportDatabaseBetweenInstancesOutcome;
			typedef std::future<ImportDatabaseBetweenInstancesOutcome> ImportDatabaseBetweenInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ImportDatabaseBetweenInstancesRequest&, const ImportDatabaseBetweenInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDatabaseBetweenInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::LockAccountResult> LockAccountOutcome;
			typedef std::future<LockAccountOutcome> LockAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::LockAccountRequest&, const LockAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockAccountAsyncHandler;
			typedef Outcome<Error, Model::MigrateConnectionToOtherZoneResult> MigrateConnectionToOtherZoneOutcome;
			typedef std::future<MigrateConnectionToOtherZoneOutcome> MigrateConnectionToOtherZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateConnectionToOtherZoneRequest&, const MigrateConnectionToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateConnectionToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::MigrateDBInstanceResult> MigrateDBInstanceOutcome;
			typedef std::future<MigrateDBInstanceOutcome> MigrateDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateDBInstanceRequest&, const MigrateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::MigrateSecurityIPModeResult> MigrateSecurityIPModeOutcome;
			typedef std::future<MigrateSecurityIPModeOutcome> MigrateSecurityIPModeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateSecurityIPModeRequest&, const MigrateSecurityIPModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateSecurityIPModeAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyActionEventPolicyResult> ModifyActionEventPolicyOutcome;
			typedef std::future<ModifyActionEventPolicyOutcome> ModifyActionEventPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyActionEventPolicyRequest&, const ModifyActionEventPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActionEventPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyCollationTimeZoneResult> ModifyCollationTimeZoneOutcome;
			typedef std::future<ModifyCollationTimeZoneOutcome> ModifyCollationTimeZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyCollationTimeZoneRequest&, const ModifyCollationTimeZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCollationTimeZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionResult> ModifyDBDescriptionOutcome;
			typedef std::future<ModifyDBDescriptionOutcome> ModifyDBDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBDescriptionRequest&, const ModifyDBDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceAutoUpgradeMinorVersionResult> ModifyDBInstanceAutoUpgradeMinorVersionOutcome;
			typedef std::future<ModifyDBInstanceAutoUpgradeMinorVersionOutcome> ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest&, const ModifyDBInstanceAutoUpgradeMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionModeResult> ModifyDBInstanceConnectionModeOutcome;
			typedef std::future<ModifyDBInstanceConnectionModeOutcome> ModifyDBInstanceConnectionModeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConnectionModeRequest&, const ModifyDBInstanceConnectionModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceHAConfigResult> ModifyDBInstanceHAConfigOutcome;
			typedef std::future<ModifyDBInstanceHAConfigOutcome> ModifyDBInstanceHAConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceHAConfigRequest&, const ModifyDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMonitorResult> ModifyDBInstanceMonitorOutcome;
			typedef std::future<ModifyDBInstanceMonitorOutcome> ModifyDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMonitorRequest&, const ModifyDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkExpireTimeResult> ModifyDBInstanceNetworkExpireTimeOutcome;
			typedef std::future<ModifyDBInstanceNetworkExpireTimeOutcome> ModifyDBInstanceNetworkExpireTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceNetworkExpireTimeRequest&, const ModifyDBInstanceNetworkExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkTypeResult> ModifyDBInstanceNetworkTypeOutcome;
			typedef std::future<ModifyDBInstanceNetworkTypeOutcome> ModifyDBInstanceNetworkTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceNetworkTypeRequest&, const ModifyDBInstanceNetworkTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstancePayTypeResult> ModifyDBInstancePayTypeOutcome;
			typedef std::future<ModifyDBInstancePayTypeOutcome> ModifyDBInstancePayTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstancePayTypeRequest&, const ModifyDBInstancePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancePayTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceProxyConfigurationResult> ModifyDBInstanceProxyConfigurationOutcome;
			typedef std::future<ModifyDBInstanceProxyConfigurationOutcome> ModifyDBInstanceProxyConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceProxyConfigurationRequest&, const ModifyDBInstanceProxyConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProxyConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSSLResult> ModifyDBInstanceSSLOutcome;
			typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSSLRequest&, const ModifyDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSpecResult> ModifyDBInstanceSpecOutcome;
			typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSpecRequest&, const ModifyDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceTDEResult> ModifyDBInstanceTDEOutcome;
			typedef std::future<ModifyDBInstanceTDEOutcome> ModifyDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceTDERequest&, const ModifyDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBProxyResult> ModifyDBProxyOutcome;
			typedef std::future<ModifyDBProxyOutcome> ModifyDBProxyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBProxyRequest&, const ModifyDBProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBProxyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBProxyEndpointResult> ModifyDBProxyEndpointOutcome;
			typedef std::future<ModifyDBProxyEndpointOutcome> ModifyDBProxyEndpointOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBProxyEndpointRequest&, const ModifyDBProxyEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBProxyEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBProxyEndpointAddressResult> ModifyDBProxyEndpointAddressOutcome;
			typedef std::future<ModifyDBProxyEndpointAddressOutcome> ModifyDBProxyEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBProxyEndpointAddressRequest&, const ModifyDBProxyEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBProxyEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBProxyInstanceResult> ModifyDBProxyInstanceOutcome;
			typedef std::future<ModifyDBProxyInstanceOutcome> ModifyDBProxyInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBProxyInstanceRequest&, const ModifyDBProxyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBProxyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDTCSecurityIpHostsForSQLServerResult> ModifyDTCSecurityIpHostsForSQLServerOutcome;
			typedef std::future<ModifyDTCSecurityIpHostsForSQLServerOutcome> ModifyDTCSecurityIpHostsForSQLServerOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDTCSecurityIpHostsForSQLServerRequest&, const ModifyDTCSecurityIpHostsForSQLServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDTCSecurityIpHostsForSQLServerAsyncHandler;
			typedef Outcome<Error, Model::ModifyDasInstanceConfigResult> ModifyDasInstanceConfigOutcome;
			typedef std::future<ModifyDasInstanceConfigOutcome> ModifyDasInstanceConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDasInstanceConfigRequest&, const ModifyDasInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDasInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDbProxyInstanceSslResult> ModifyDbProxyInstanceSslOutcome;
			typedef std::future<ModifyDbProxyInstanceSslOutcome> ModifyDbProxyInstanceSslOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDbProxyInstanceSslRequest&, const ModifyDbProxyInstanceSslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDbProxyInstanceSslAsyncHandler;
			typedef Outcome<Error, Model::ModifyHASwitchConfigResult> ModifyHASwitchConfigOutcome;
			typedef std::future<ModifyHASwitchConfigOutcome> ModifyHASwitchConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyHASwitchConfigRequest&, const ModifyHASwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHASwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceCrossBackupPolicyResult> ModifyInstanceCrossBackupPolicyOutcome;
			typedef std::future<ModifyInstanceCrossBackupPolicyOutcome> ModifyInstanceCrossBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyInstanceCrossBackupPolicyRequest&, const ModifyInstanceCrossBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceCrossBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterGroupResult> ModifyParameterGroupOutcome;
			typedef std::future<ModifyParameterGroupOutcome> ModifyParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyParameterGroupRequest&, const ModifyParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyReadWriteSplittingConnectionResult> ModifyReadWriteSplittingConnectionOutcome;
			typedef std::future<ModifyReadWriteSplittingConnectionOutcome> ModifyReadWriteSplittingConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyReadWriteSplittingConnectionRequest&, const ModifyReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyReadonlyInstanceDelayReplicationTimeResult> ModifyReadonlyInstanceDelayReplicationTimeOutcome;
			typedef std::future<ModifyReadonlyInstanceDelayReplicationTimeOutcome> ModifyReadonlyInstanceDelayReplicationTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyReadonlyInstanceDelayReplicationTimeRequest&, const ModifyReadonlyInstanceDelayReplicationTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadonlyInstanceDelayReplicationTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceGroupResult> ModifyResourceGroupOutcome;
			typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyResourceGroupRequest&, const ModifyResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLCollectorPolicyResult> ModifySQLCollectorPolicyOutcome;
			typedef std::future<ModifySQLCollectorPolicyOutcome> ModifySQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifySQLCollectorPolicyRequest&, const ModifySQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLCollectorRetentionResult> ModifySQLCollectorRetentionOutcome;
			typedef std::future<ModifySQLCollectorRetentionOutcome> ModifySQLCollectorRetentionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifySQLCollectorRetentionRequest&, const ModifySQLCollectorRetentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLCollectorRetentionAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupConfigurationResult> ModifySecurityGroupConfigurationOutcome;
			typedef std::future<ModifySecurityGroupConfigurationOutcome> ModifySecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifySecurityGroupConfigurationRequest&, const ModifySecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::PurgeDBInstanceLogResult> PurgeDBInstanceLogOutcome;
			typedef std::future<PurgeDBInstanceLogOutcome> PurgeDBInstanceLogOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::PurgeDBInstanceLogRequest&, const PurgeDBInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurgeDBInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::RebuildDBInstanceResult> RebuildDBInstanceOutcome;
			typedef std::future<RebuildDBInstanceOutcome> RebuildDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RebuildDBInstanceRequest&, const RebuildDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RecoveryDBInstanceResult> RecoveryDBInstanceOutcome;
			typedef std::future<RecoveryDBInstanceOutcome> RecoveryDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RecoveryDBInstanceRequest&, const RecoveryDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoveryDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceConnectionResult> ReleaseInstanceConnectionOutcome;
			typedef std::future<ReleaseInstanceConnectionOutcome> ReleaseInstanceConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ReleaseInstanceConnectionRequest&, const ReleaseInstanceConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceConnectionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseReadWriteSplittingConnectionResult> ReleaseReadWriteSplittingConnectionOutcome;
			typedef std::future<ReleaseReadWriteSplittingConnectionOutcome> ReleaseReadWriteSplittingConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ReleaseReadWriteSplittingConnectionRequest&, const ReleaseReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsFromResourceResult> RemoveTagsFromResourceOutcome;
			typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RemoveTagsFromResourceRequest&, const RemoveTagsFromResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsFromResourceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestoreDdrTableResult> RestoreDdrTableOutcome;
			typedef std::future<RestoreDdrTableOutcome> RestoreDdrTableOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RestoreDdrTableRequest&, const RestoreDdrTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreDdrTableAsyncHandler;
			typedef Outcome<Error, Model::RestoreTableResult> RestoreTableOutcome;
			typedef std::future<RestoreTableOutcome> RestoreTableOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RestoreTableRequest&, const RestoreTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreTableAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeResult> RevokeAccountPrivilegeOutcome;
			typedef std::future<RevokeAccountPrivilegeOutcome> RevokeAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RevokeAccountPrivilegeRequest&, const RevokeAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::RevokeOperatorPermissionResult> RevokeOperatorPermissionOutcome;
			typedef std::future<RevokeOperatorPermissionOutcome> RevokeOperatorPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RevokeOperatorPermissionRequest&, const RevokeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::StartDBInstanceResult> StartDBInstanceOutcome;
			typedef std::future<StartDBInstanceOutcome> StartDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StartDBInstanceRequest&, const StartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopDBInstanceResult> StopDBInstanceOutcome;
			typedef std::future<StopDBInstanceOutcome> StopDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StopDBInstanceRequest&, const StopDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceHAResult> SwitchDBInstanceHAOutcome;
			typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceHARequest&, const SwitchDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceNetTypeResult> SwitchDBInstanceNetTypeOutcome;
			typedef std::future<SwitchDBInstanceNetTypeOutcome> SwitchDBInstanceNetTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceNetTypeRequest&, const SwitchDBInstanceNetTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceNetTypeAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceVpcResult> SwitchDBInstanceVpcOutcome;
			typedef std::future<SwitchDBInstanceVpcOutcome> SwitchDBInstanceVpcOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceVpcRequest&, const SwitchDBInstanceVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceVpcAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TerminateMigrateTaskResult> TerminateMigrateTaskOutcome;
			typedef std::future<TerminateMigrateTaskOutcome> TerminateMigrateTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TerminateMigrateTaskRequest&, const TerminateMigrateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateMigrateTaskAsyncHandler;
			typedef Outcome<Error, Model::TransformDBInstancePayTypeResult> TransformDBInstancePayTypeOutcome;
			typedef std::future<TransformDBInstancePayTypeOutcome> TransformDBInstancePayTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TransformDBInstancePayTypeRequest&, const TransformDBInstancePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformDBInstancePayTypeAsyncHandler;
			typedef Outcome<Error, Model::UnlockAccountResult> UnlockAccountOutcome;
			typedef std::future<UnlockAccountOutcome> UnlockAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UnlockAccountRequest&, const UnlockAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockAccountAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResult> UpgradeDBInstanceEngineVersionOutcome;
			typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, const UpgradeDBInstanceEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceKernelVersionResult> UpgradeDBInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, const UpgradeDBInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBProxyInstanceKernelVersionResult> UpgradeDBProxyInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBProxyInstanceKernelVersionOutcome> UpgradeDBProxyInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBProxyInstanceKernelVersionRequest&, const UpgradeDBProxyInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBProxyInstanceKernelVersionAsyncHandler;

			RdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RdsClient();
			AddTagsToResourceOutcome addTagsToResource(const Model::AddTagsToResourceRequest &request)const;
			void addTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsToResourceOutcomeCallable addTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			AllocateReadWriteSplittingConnectionOutcome allocateReadWriteSplittingConnection(const Model::AllocateReadWriteSplittingConnectionRequest &request)const;
			void allocateReadWriteSplittingConnectionAsync(const Model::AllocateReadWriteSplittingConnectionRequest& request, const AllocateReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateReadWriteSplittingConnectionOutcomeCallable allocateReadWriteSplittingConnectionCallable(const Model::AllocateReadWriteSplittingConnectionRequest& request) const;
			CalculateDBInstanceWeightOutcome calculateDBInstanceWeight(const Model::CalculateDBInstanceWeightRequest &request)const;
			void calculateDBInstanceWeightAsync(const Model::CalculateDBInstanceWeightRequest& request, const CalculateDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CalculateDBInstanceWeightOutcomeCallable calculateDBInstanceWeightCallable(const Model::CalculateDBInstanceWeightRequest& request) const;
			CancelImportOutcome cancelImport(const Model::CancelImportRequest &request)const;
			void cancelImportAsync(const Model::CancelImportRequest& request, const CancelImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelImportOutcomeCallable cancelImportCallable(const Model::CancelImportRequest& request) const;
			CheckAccountNameAvailableOutcome checkAccountNameAvailable(const Model::CheckAccountNameAvailableRequest &request)const;
			void checkAccountNameAvailableAsync(const Model::CheckAccountNameAvailableRequest& request, const CheckAccountNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAccountNameAvailableOutcomeCallable checkAccountNameAvailableCallable(const Model::CheckAccountNameAvailableRequest& request) const;
			CheckCloudResourceAuthorizedOutcome checkCloudResourceAuthorized(const Model::CheckCloudResourceAuthorizedRequest &request)const;
			void checkCloudResourceAuthorizedAsync(const Model::CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCloudResourceAuthorizedOutcomeCallable checkCloudResourceAuthorizedCallable(const Model::CheckCloudResourceAuthorizedRequest& request) const;
			CheckCreateDdrDBInstanceOutcome checkCreateDdrDBInstance(const Model::CheckCreateDdrDBInstanceRequest &request)const;
			void checkCreateDdrDBInstanceAsync(const Model::CheckCreateDdrDBInstanceRequest& request, const CheckCreateDdrDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCreateDdrDBInstanceOutcomeCallable checkCreateDdrDBInstanceCallable(const Model::CheckCreateDdrDBInstanceRequest& request) const;
			CheckDBNameAvailableOutcome checkDBNameAvailable(const Model::CheckDBNameAvailableRequest &request)const;
			void checkDBNameAvailableAsync(const Model::CheckDBNameAvailableRequest& request, const CheckDBNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDBNameAvailableOutcomeCallable checkDBNameAvailableCallable(const Model::CheckDBNameAvailableRequest& request) const;
			CheckInstanceExistOutcome checkInstanceExist(const Model::CheckInstanceExistRequest &request)const;
			void checkInstanceExistAsync(const Model::CheckInstanceExistRequest& request, const CheckInstanceExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckInstanceExistOutcomeCallable checkInstanceExistCallable(const Model::CheckInstanceExistRequest& request) const;
			CloneDBInstanceOutcome cloneDBInstance(const Model::CloneDBInstanceRequest &request)const;
			void cloneDBInstanceAsync(const Model::CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneDBInstanceOutcomeCallable cloneDBInstanceCallable(const Model::CloneDBInstanceRequest& request) const;
			CloneParameterGroupOutcome cloneParameterGroup(const Model::CloneParameterGroupRequest &request)const;
			void cloneParameterGroupAsync(const Model::CloneParameterGroupRequest& request, const CloneParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneParameterGroupOutcomeCallable cloneParameterGroupCallable(const Model::CloneParameterGroupRequest& request) const;
			CopyDatabaseOutcome copyDatabase(const Model::CopyDatabaseRequest &request)const;
			void copyDatabaseAsync(const Model::CopyDatabaseRequest& request, const CopyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyDatabaseOutcomeCallable copyDatabaseCallable(const Model::CopyDatabaseRequest& request) const;
			CopyDatabaseBetweenInstancesOutcome copyDatabaseBetweenInstances(const Model::CopyDatabaseBetweenInstancesRequest &request)const;
			void copyDatabaseBetweenInstancesAsync(const Model::CopyDatabaseBetweenInstancesRequest& request, const CopyDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyDatabaseBetweenInstancesOutcomeCallable copyDatabaseBetweenInstancesCallable(const Model::CopyDatabaseBetweenInstancesRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateDBProxyEndpointAddressOutcome createDBProxyEndpointAddress(const Model::CreateDBProxyEndpointAddressRequest &request)const;
			void createDBProxyEndpointAddressAsync(const Model::CreateDBProxyEndpointAddressRequest& request, const CreateDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBProxyEndpointAddressOutcomeCallable createDBProxyEndpointAddressCallable(const Model::CreateDBProxyEndpointAddressRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateDdrInstanceOutcome createDdrInstance(const Model::CreateDdrInstanceRequest &request)const;
			void createDdrInstanceAsync(const Model::CreateDdrInstanceRequest& request, const CreateDdrInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDdrInstanceOutcomeCallable createDdrInstanceCallable(const Model::CreateDdrInstanceRequest& request) const;
			CreateDiagnosticReportOutcome createDiagnosticReport(const Model::CreateDiagnosticReportRequest &request)const;
			void createDiagnosticReportAsync(const Model::CreateDiagnosticReportRequest& request, const CreateDiagnosticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiagnosticReportOutcomeCallable createDiagnosticReportCallable(const Model::CreateDiagnosticReportRequest& request) const;
			CreateMigrateTaskOutcome createMigrateTask(const Model::CreateMigrateTaskRequest &request)const;
			void createMigrateTaskAsync(const Model::CreateMigrateTaskRequest& request, const CreateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrateTaskOutcomeCallable createMigrateTaskCallable(const Model::CreateMigrateTaskRequest& request) const;
			CreateMigrateTaskForSQLServerOutcome createMigrateTaskForSQLServer(const Model::CreateMigrateTaskForSQLServerRequest &request)const;
			void createMigrateTaskForSQLServerAsync(const Model::CreateMigrateTaskForSQLServerRequest& request, const CreateMigrateTaskForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrateTaskForSQLServerOutcomeCallable createMigrateTaskForSQLServerCallable(const Model::CreateMigrateTaskForSQLServerRequest& request) const;
			CreateOnlineDatabaseTaskOutcome createOnlineDatabaseTask(const Model::CreateOnlineDatabaseTaskRequest &request)const;
			void createOnlineDatabaseTaskAsync(const Model::CreateOnlineDatabaseTaskRequest& request, const CreateOnlineDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOnlineDatabaseTaskOutcomeCallable createOnlineDatabaseTaskCallable(const Model::CreateOnlineDatabaseTaskRequest& request) const;
			CreateParameterGroupOutcome createParameterGroup(const Model::CreateParameterGroupRequest &request)const;
			void createParameterGroupAsync(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParameterGroupOutcomeCallable createParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;
			CreateReadOnlyDBInstanceOutcome createReadOnlyDBInstance(const Model::CreateReadOnlyDBInstanceRequest &request)const;
			void createReadOnlyDBInstanceAsync(const Model::CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReadOnlyDBInstanceOutcomeCallable createReadOnlyDBInstanceCallable(const Model::CreateReadOnlyDBInstanceRequest& request) const;
			CreateTempDBInstanceOutcome createTempDBInstance(const Model::CreateTempDBInstanceRequest &request)const;
			void createTempDBInstanceAsync(const Model::CreateTempDBInstanceRequest& request, const CreateTempDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTempDBInstanceOutcomeCallable createTempDBInstanceCallable(const Model::CreateTempDBInstanceRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteBackupOutcome deleteBackup(const Model::DeleteBackupRequest &request)const;
			void deleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupOutcomeCallable deleteBackupCallable(const Model::DeleteBackupRequest& request) const;
			DeleteBackupFileOutcome deleteBackupFile(const Model::DeleteBackupFileRequest &request)const;
			void deleteBackupFileAsync(const Model::DeleteBackupFileRequest& request, const DeleteBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupFileOutcomeCallable deleteBackupFileCallable(const Model::DeleteBackupFileRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DeleteDBProxyEndpointAddressOutcome deleteDBProxyEndpointAddress(const Model::DeleteDBProxyEndpointAddressRequest &request)const;
			void deleteDBProxyEndpointAddressAsync(const Model::DeleteDBProxyEndpointAddressRequest& request, const DeleteDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBProxyEndpointAddressOutcomeCallable deleteDBProxyEndpointAddressCallable(const Model::DeleteDBProxyEndpointAddressRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteHostAccountOutcome deleteHostAccount(const Model::DeleteHostAccountRequest &request)const;
			void deleteHostAccountAsync(const Model::DeleteHostAccountRequest& request, const DeleteHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHostAccountOutcomeCallable deleteHostAccountCallable(const Model::DeleteHostAccountRequest& request) const;
			DeleteParameterGroupOutcome deleteParameterGroup(const Model::DeleteParameterGroupRequest &request)const;
			void deleteParameterGroupAsync(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParameterGroupOutcomeCallable deleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;
			DescibeImportsFromDatabaseOutcome descibeImportsFromDatabase(const Model::DescibeImportsFromDatabaseRequest &request)const;
			void descibeImportsFromDatabaseAsync(const Model::DescibeImportsFromDatabaseRequest& request, const DescibeImportsFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescibeImportsFromDatabaseOutcomeCallable descibeImportsFromDatabaseCallable(const Model::DescibeImportsFromDatabaseRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeActionEventPolicyOutcome describeActionEventPolicy(const Model::DescribeActionEventPolicyRequest &request)const;
			void describeActionEventPolicyAsync(const Model::DescribeActionEventPolicyRequest& request, const DescribeActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActionEventPolicyOutcomeCallable describeActionEventPolicyCallable(const Model::DescribeActionEventPolicyRequest& request) const;
			DescribeAvailableClassesOutcome describeAvailableClasses(const Model::DescribeAvailableClassesRequest &request)const;
			void describeAvailableClassesAsync(const Model::DescribeAvailableClassesRequest& request, const DescribeAvailableClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableClassesOutcomeCallable describeAvailableClassesCallable(const Model::DescribeAvailableClassesRequest& request) const;
			DescribeAvailableCrossRegionOutcome describeAvailableCrossRegion(const Model::DescribeAvailableCrossRegionRequest &request)const;
			void describeAvailableCrossRegionAsync(const Model::DescribeAvailableCrossRegionRequest& request, const DescribeAvailableCrossRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableCrossRegionOutcomeCallable describeAvailableCrossRegionCallable(const Model::DescribeAvailableCrossRegionRequest& request) const;
			DescribeAvailableDedicatedHostClassesOutcome describeAvailableDedicatedHostClasses(const Model::DescribeAvailableDedicatedHostClassesRequest &request)const;
			void describeAvailableDedicatedHostClassesAsync(const Model::DescribeAvailableDedicatedHostClassesRequest& request, const DescribeAvailableDedicatedHostClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableDedicatedHostClassesOutcomeCallable describeAvailableDedicatedHostClassesCallable(const Model::DescribeAvailableDedicatedHostClassesRequest& request) const;
			DescribeAvailableRecoveryTimeOutcome describeAvailableRecoveryTime(const Model::DescribeAvailableRecoveryTimeRequest &request)const;
			void describeAvailableRecoveryTimeAsync(const Model::DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableRecoveryTimeOutcomeCallable describeAvailableRecoveryTimeCallable(const Model::DescribeAvailableRecoveryTimeRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeAvailableZonesOutcome describeAvailableZones(const Model::DescribeAvailableZonesRequest &request)const;
			void describeAvailableZonesAsync(const Model::DescribeAvailableZonesRequest& request, const DescribeAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableZonesOutcomeCallable describeAvailableZonesCallable(const Model::DescribeAvailableZonesRequest& request) const;
			DescribeBackupDatabaseOutcome describeBackupDatabase(const Model::DescribeBackupDatabaseRequest &request)const;
			void describeBackupDatabaseAsync(const Model::DescribeBackupDatabaseRequest& request, const DescribeBackupDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupDatabaseOutcomeCallable describeBackupDatabaseCallable(const Model::DescribeBackupDatabaseRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupTasksOutcome describeBackupTasks(const Model::DescribeBackupTasksRequest &request)const;
			void describeBackupTasksAsync(const Model::DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTasksOutcomeCallable describeBackupTasksCallable(const Model::DescribeBackupTasksRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeBinlogFilesOutcome describeBinlogFiles(const Model::DescribeBinlogFilesRequest &request)const;
			void describeBinlogFilesAsync(const Model::DescribeBinlogFilesRequest& request, const DescribeBinlogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBinlogFilesOutcomeCallable describeBinlogFilesCallable(const Model::DescribeBinlogFilesRequest& request) const;
			DescribeCharacterSetNameOutcome describeCharacterSetName(const Model::DescribeCharacterSetNameRequest &request)const;
			void describeCharacterSetNameAsync(const Model::DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCharacterSetNameOutcomeCallable describeCharacterSetNameCallable(const Model::DescribeCharacterSetNameRequest& request) const;
			DescribeCollationTimeZonesOutcome describeCollationTimeZones(const Model::DescribeCollationTimeZonesRequest &request)const;
			void describeCollationTimeZonesAsync(const Model::DescribeCollationTimeZonesRequest& request, const DescribeCollationTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCollationTimeZonesOutcomeCallable describeCollationTimeZonesCallable(const Model::DescribeCollationTimeZonesRequest& request) const;
			DescribeCrossBackupMetaListOutcome describeCrossBackupMetaList(const Model::DescribeCrossBackupMetaListRequest &request)const;
			void describeCrossBackupMetaListAsync(const Model::DescribeCrossBackupMetaListRequest& request, const DescribeCrossBackupMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossBackupMetaListOutcomeCallable describeCrossBackupMetaListCallable(const Model::DescribeCrossBackupMetaListRequest& request) const;
			DescribeCrossRegionBackupDBInstanceOutcome describeCrossRegionBackupDBInstance(const Model::DescribeCrossRegionBackupDBInstanceRequest &request)const;
			void describeCrossRegionBackupDBInstanceAsync(const Model::DescribeCrossRegionBackupDBInstanceRequest& request, const DescribeCrossRegionBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossRegionBackupDBInstanceOutcomeCallable describeCrossRegionBackupDBInstanceCallable(const Model::DescribeCrossRegionBackupDBInstanceRequest& request) const;
			DescribeCrossRegionBackupsOutcome describeCrossRegionBackups(const Model::DescribeCrossRegionBackupsRequest &request)const;
			void describeCrossRegionBackupsAsync(const Model::DescribeCrossRegionBackupsRequest& request, const DescribeCrossRegionBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossRegionBackupsOutcomeCallable describeCrossRegionBackupsCallable(const Model::DescribeCrossRegionBackupsRequest& request) const;
			DescribeCrossRegionLogBackupFilesOutcome describeCrossRegionLogBackupFiles(const Model::DescribeCrossRegionLogBackupFilesRequest &request)const;
			void describeCrossRegionLogBackupFilesAsync(const Model::DescribeCrossRegionLogBackupFilesRequest& request, const DescribeCrossRegionLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossRegionLogBackupFilesOutcomeCallable describeCrossRegionLogBackupFilesCallable(const Model::DescribeCrossRegionLogBackupFilesRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceDetailOutcome describeDBInstanceDetail(const Model::DescribeDBInstanceDetailRequest &request)const;
			void describeDBInstanceDetailAsync(const Model::DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceDetailOutcomeCallable describeDBInstanceDetailCallable(const Model::DescribeDBInstanceDetailRequest& request) const;
			DescribeDBInstanceHAConfigOutcome describeDBInstanceHAConfig(const Model::DescribeDBInstanceHAConfigRequest &request)const;
			void describeDBInstanceHAConfigAsync(const Model::DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceHAConfigOutcomeCallable describeDBInstanceHAConfigCallable(const Model::DescribeDBInstanceHAConfigRequest& request) const;
			DescribeDBInstanceIPArrayListOutcome describeDBInstanceIPArrayList(const Model::DescribeDBInstanceIPArrayListRequest &request)const;
			void describeDBInstanceIPArrayListAsync(const Model::DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIPArrayListOutcomeCallable describeDBInstanceIPArrayListCallable(const Model::DescribeDBInstanceIPArrayListRequest& request) const;
			DescribeDBInstanceIpHostnameOutcome describeDBInstanceIpHostname(const Model::DescribeDBInstanceIpHostnameRequest &request)const;
			void describeDBInstanceIpHostnameAsync(const Model::DescribeDBInstanceIpHostnameRequest& request, const DescribeDBInstanceIpHostnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIpHostnameOutcomeCallable describeDBInstanceIpHostnameCallable(const Model::DescribeDBInstanceIpHostnameRequest& request) const;
			DescribeDBInstanceMonitorOutcome describeDBInstanceMonitor(const Model::DescribeDBInstanceMonitorRequest &request)const;
			void describeDBInstanceMonitorAsync(const Model::DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceMonitorOutcomeCallable describeDBInstanceMonitorCallable(const Model::DescribeDBInstanceMonitorRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBInstanceProxyConfigurationOutcome describeDBInstanceProxyConfiguration(const Model::DescribeDBInstanceProxyConfigurationRequest &request)const;
			void describeDBInstanceProxyConfigurationAsync(const Model::DescribeDBInstanceProxyConfigurationRequest& request, const DescribeDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceProxyConfigurationOutcomeCallable describeDBInstanceProxyConfigurationCallable(const Model::DescribeDBInstanceProxyConfigurationRequest& request) const;
			DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
			void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
			DescribeDBInstanceTDEOutcome describeDBInstanceTDE(const Model::DescribeDBInstanceTDERequest &request)const;
			void describeDBInstanceTDEAsync(const Model::DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceTDEOutcomeCallable describeDBInstanceTDECallable(const Model::DescribeDBInstanceTDERequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeDBInstancesAsCsvOutcome describeDBInstancesAsCsv(const Model::DescribeDBInstancesAsCsvRequest &request)const;
			void describeDBInstancesAsCsvAsync(const Model::DescribeDBInstancesAsCsvRequest& request, const DescribeDBInstancesAsCsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesAsCsvOutcomeCallable describeDBInstancesAsCsvCallable(const Model::DescribeDBInstancesAsCsvRequest& request) const;
			DescribeDBInstancesByExpireTimeOutcome describeDBInstancesByExpireTime(const Model::DescribeDBInstancesByExpireTimeRequest &request)const;
			void describeDBInstancesByExpireTimeAsync(const Model::DescribeDBInstancesByExpireTimeRequest& request, const DescribeDBInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesByExpireTimeOutcomeCallable describeDBInstancesByExpireTimeCallable(const Model::DescribeDBInstancesByExpireTimeRequest& request) const;
			DescribeDBInstancesByPerformanceOutcome describeDBInstancesByPerformance(const Model::DescribeDBInstancesByPerformanceRequest &request)const;
			void describeDBInstancesByPerformanceAsync(const Model::DescribeDBInstancesByPerformanceRequest& request, const DescribeDBInstancesByPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesByPerformanceOutcomeCallable describeDBInstancesByPerformanceCallable(const Model::DescribeDBInstancesByPerformanceRequest& request) const;
			DescribeDBInstancesForCloneOutcome describeDBInstancesForClone(const Model::DescribeDBInstancesForCloneRequest &request)const;
			void describeDBInstancesForCloneAsync(const Model::DescribeDBInstancesForCloneRequest& request, const DescribeDBInstancesForCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesForCloneOutcomeCallable describeDBInstancesForCloneCallable(const Model::DescribeDBInstancesForCloneRequest& request) const;
			DescribeDBProxyOutcome describeDBProxy(const Model::DescribeDBProxyRequest &request)const;
			void describeDBProxyAsync(const Model::DescribeDBProxyRequest& request, const DescribeDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBProxyOutcomeCallable describeDBProxyCallable(const Model::DescribeDBProxyRequest& request) const;
			DescribeDBProxyEndpointOutcome describeDBProxyEndpoint(const Model::DescribeDBProxyEndpointRequest &request)const;
			void describeDBProxyEndpointAsync(const Model::DescribeDBProxyEndpointRequest& request, const DescribeDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBProxyEndpointOutcomeCallable describeDBProxyEndpointCallable(const Model::DescribeDBProxyEndpointRequest& request) const;
			DescribeDBProxyPerformanceOutcome describeDBProxyPerformance(const Model::DescribeDBProxyPerformanceRequest &request)const;
			void describeDBProxyPerformanceAsync(const Model::DescribeDBProxyPerformanceRequest& request, const DescribeDBProxyPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBProxyPerformanceOutcomeCallable describeDBProxyPerformanceCallable(const Model::DescribeDBProxyPerformanceRequest& request) const;
			DescribeDTCSecurityIpHostsForSQLServerOutcome describeDTCSecurityIpHostsForSQLServer(const Model::DescribeDTCSecurityIpHostsForSQLServerRequest &request)const;
			void describeDTCSecurityIpHostsForSQLServerAsync(const Model::DescribeDTCSecurityIpHostsForSQLServerRequest& request, const DescribeDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDTCSecurityIpHostsForSQLServerOutcomeCallable describeDTCSecurityIpHostsForSQLServerCallable(const Model::DescribeDTCSecurityIpHostsForSQLServerRequest& request) const;
			DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
			void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
			DescribeDedicatedHostGroupsOutcome describeDedicatedHostGroups(const Model::DescribeDedicatedHostGroupsRequest &request)const;
			void describeDedicatedHostGroupsAsync(const Model::DescribeDedicatedHostGroupsRequest& request, const DescribeDedicatedHostGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedHostGroupsOutcomeCallable describeDedicatedHostGroupsCallable(const Model::DescribeDedicatedHostGroupsRequest& request) const;
			DescribeDedicatedHostsOutcome describeDedicatedHosts(const Model::DescribeDedicatedHostsRequest &request)const;
			void describeDedicatedHostsAsync(const Model::DescribeDedicatedHostsRequest& request, const DescribeDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedHostsOutcomeCallable describeDedicatedHostsCallable(const Model::DescribeDedicatedHostsRequest& request) const;
			DescribeDetachedBackupsOutcome describeDetachedBackups(const Model::DescribeDetachedBackupsRequest &request)const;
			void describeDetachedBackupsAsync(const Model::DescribeDetachedBackupsRequest& request, const DescribeDetachedBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDetachedBackupsOutcomeCallable describeDetachedBackupsCallable(const Model::DescribeDetachedBackupsRequest& request) const;
			DescribeDiagnosticReportListOutcome describeDiagnosticReportList(const Model::DescribeDiagnosticReportListRequest &request)const;
			void describeDiagnosticReportListAsync(const Model::DescribeDiagnosticReportListRequest& request, const DescribeDiagnosticReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosticReportListOutcomeCallable describeDiagnosticReportListCallable(const Model::DescribeDiagnosticReportListRequest& request) const;
			DescribeErrorLogsOutcome describeErrorLogs(const Model::DescribeErrorLogsRequest &request)const;
			void describeErrorLogsAsync(const Model::DescribeErrorLogsRequest& request, const DescribeErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeErrorLogsOutcomeCallable describeErrorLogsCallable(const Model::DescribeErrorLogsRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeHASwitchConfigOutcome describeHASwitchConfig(const Model::DescribeHASwitchConfigRequest &request)const;
			void describeHASwitchConfigAsync(const Model::DescribeHASwitchConfigRequest& request, const DescribeHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHASwitchConfigOutcomeCallable describeHASwitchConfigCallable(const Model::DescribeHASwitchConfigRequest& request) const;
			DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
			void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
			DescribeInstanceCrossBackupPolicyOutcome describeInstanceCrossBackupPolicy(const Model::DescribeInstanceCrossBackupPolicyRequest &request)const;
			void describeInstanceCrossBackupPolicyAsync(const Model::DescribeInstanceCrossBackupPolicyRequest& request, const DescribeInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceCrossBackupPolicyOutcomeCallable describeInstanceCrossBackupPolicyCallable(const Model::DescribeInstanceCrossBackupPolicyRequest& request) const;
			DescribeInstanceKeywordsOutcome describeInstanceKeywords(const Model::DescribeInstanceKeywordsRequest &request)const;
			void describeInstanceKeywordsAsync(const Model::DescribeInstanceKeywordsRequest& request, const DescribeInstanceKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceKeywordsOutcomeCallable describeInstanceKeywordsCallable(const Model::DescribeInstanceKeywordsRequest& request) const;
			DescribeLocalAvailableRecoveryTimeOutcome describeLocalAvailableRecoveryTime(const Model::DescribeLocalAvailableRecoveryTimeRequest &request)const;
			void describeLocalAvailableRecoveryTimeAsync(const Model::DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocalAvailableRecoveryTimeOutcomeCallable describeLocalAvailableRecoveryTimeCallable(const Model::DescribeLocalAvailableRecoveryTimeRequest& request) const;
			DescribeLogBackupFilesOutcome describeLogBackupFiles(const Model::DescribeLogBackupFilesRequest &request)const;
			void describeLogBackupFilesAsync(const Model::DescribeLogBackupFilesRequest& request, const DescribeLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogBackupFilesOutcomeCallable describeLogBackupFilesCallable(const Model::DescribeLogBackupFilesRequest& request) const;
			DescribeMigrateTaskByIdOutcome describeMigrateTaskById(const Model::DescribeMigrateTaskByIdRequest &request)const;
			void describeMigrateTaskByIdAsync(const Model::DescribeMigrateTaskByIdRequest& request, const DescribeMigrateTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrateTaskByIdOutcomeCallable describeMigrateTaskByIdCallable(const Model::DescribeMigrateTaskByIdRequest& request) const;
			DescribeMigrateTasksOutcome describeMigrateTasks(const Model::DescribeMigrateTasksRequest &request)const;
			void describeMigrateTasksAsync(const Model::DescribeMigrateTasksRequest& request, const DescribeMigrateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrateTasksOutcomeCallable describeMigrateTasksCallable(const Model::DescribeMigrateTasksRequest& request) const;
			DescribeMigrateTasksForSQLServerOutcome describeMigrateTasksForSQLServer(const Model::DescribeMigrateTasksForSQLServerRequest &request)const;
			void describeMigrateTasksForSQLServerAsync(const Model::DescribeMigrateTasksForSQLServerRequest& request, const DescribeMigrateTasksForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrateTasksForSQLServerOutcomeCallable describeMigrateTasksForSQLServerCallable(const Model::DescribeMigrateTasksForSQLServerRequest& request) const;
			DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
			void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
			DescribeOssDownloadsOutcome describeOssDownloads(const Model::DescribeOssDownloadsRequest &request)const;
			void describeOssDownloadsAsync(const Model::DescribeOssDownloadsRequest& request, const DescribeOssDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssDownloadsOutcomeCallable describeOssDownloadsCallable(const Model::DescribeOssDownloadsRequest& request) const;
			DescribeOssDownloadsForSQLServerOutcome describeOssDownloadsForSQLServer(const Model::DescribeOssDownloadsForSQLServerRequest &request)const;
			void describeOssDownloadsForSQLServerAsync(const Model::DescribeOssDownloadsForSQLServerRequest& request, const DescribeOssDownloadsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssDownloadsForSQLServerOutcomeCallable describeOssDownloadsForSQLServerCallable(const Model::DescribeOssDownloadsForSQLServerRequest& request) const;
			DescribeParameterGroupOutcome describeParameterGroup(const Model::DescribeParameterGroupRequest &request)const;
			void describeParameterGroupAsync(const Model::DescribeParameterGroupRequest& request, const DescribeParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterGroupOutcomeCallable describeParameterGroupCallable(const Model::DescribeParameterGroupRequest& request) const;
			DescribeParameterGroupsOutcome describeParameterGroups(const Model::DescribeParameterGroupsRequest &request)const;
			void describeParameterGroupsAsync(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterGroupsOutcomeCallable describeParameterGroupsCallable(const Model::DescribeParameterGroupsRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeRdsResourceSettingsOutcome describeRdsResourceSettings(const Model::DescribeRdsResourceSettingsRequest &request)const;
			void describeRdsResourceSettingsAsync(const Model::DescribeRdsResourceSettingsRequest& request, const DescribeRdsResourceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsResourceSettingsOutcomeCallable describeRdsResourceSettingsCallable(const Model::DescribeRdsResourceSettingsRequest& request) const;
			DescribeReadDBInstanceDelayOutcome describeReadDBInstanceDelay(const Model::DescribeReadDBInstanceDelayRequest &request)const;
			void describeReadDBInstanceDelayAsync(const Model::DescribeReadDBInstanceDelayRequest& request, const DescribeReadDBInstanceDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReadDBInstanceDelayOutcomeCallable describeReadDBInstanceDelayCallable(const Model::DescribeReadDBInstanceDelayRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRenewalPriceOutcome describeRenewalPrice(const Model::DescribeRenewalPriceRequest &request)const;
			void describeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenewalPriceOutcomeCallable describeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request) const;
			DescribeResourceUsageOutcome describeResourceUsage(const Model::DescribeResourceUsageRequest &request)const;
			void describeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceUsageOutcomeCallable describeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request) const;
			DescribeSQLCollectorPolicyOutcome describeSQLCollectorPolicy(const Model::DescribeSQLCollectorPolicyRequest &request)const;
			void describeSQLCollectorPolicyAsync(const Model::DescribeSQLCollectorPolicyRequest& request, const DescribeSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLCollectorPolicyOutcomeCallable describeSQLCollectorPolicyCallable(const Model::DescribeSQLCollectorPolicyRequest& request) const;
			DescribeSQLCollectorRetentionOutcome describeSQLCollectorRetention(const Model::DescribeSQLCollectorRetentionRequest &request)const;
			void describeSQLCollectorRetentionAsync(const Model::DescribeSQLCollectorRetentionRequest& request, const DescribeSQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLCollectorRetentionOutcomeCallable describeSQLCollectorRetentionCallable(const Model::DescribeSQLCollectorRetentionRequest& request) const;
			DescribeSQLLogFilesOutcome describeSQLLogFiles(const Model::DescribeSQLLogFilesRequest &request)const;
			void describeSQLLogFilesAsync(const Model::DescribeSQLLogFilesRequest& request, const DescribeSQLLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogFilesOutcomeCallable describeSQLLogFilesCallable(const Model::DescribeSQLLogFilesRequest& request) const;
			DescribeSQLLogRecordsOutcome describeSQLLogRecords(const Model::DescribeSQLLogRecordsRequest &request)const;
			void describeSQLLogRecordsAsync(const Model::DescribeSQLLogRecordsRequest& request, const DescribeSQLLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogRecordsOutcomeCallable describeSQLLogRecordsCallable(const Model::DescribeSQLLogRecordsRequest& request) const;
			DescribeSQLLogReportListOutcome describeSQLLogReportList(const Model::DescribeSQLLogReportListRequest &request)const;
			void describeSQLLogReportListAsync(const Model::DescribeSQLLogReportListRequest& request, const DescribeSQLLogReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogReportListOutcomeCallable describeSQLLogReportListCallable(const Model::DescribeSQLLogReportListRequest& request) const;
			DescribeSQLLogReportsOutcome describeSQLLogReports(const Model::DescribeSQLLogReportsRequest &request)const;
			void describeSQLLogReportsAsync(const Model::DescribeSQLLogReportsRequest& request, const DescribeSQLLogReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogReportsOutcomeCallable describeSQLLogReportsCallable(const Model::DescribeSQLLogReportsRequest& request) const;
			DescribeSQLReportsOutcome describeSQLReports(const Model::DescribeSQLReportsRequest &request)const;
			void describeSQLReportsAsync(const Model::DescribeSQLReportsRequest& request, const DescribeSQLReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLReportsOutcomeCallable describeSQLReportsCallable(const Model::DescribeSQLReportsRequest& request) const;
			DescribeSecurityGroupConfigurationOutcome describeSecurityGroupConfiguration(const Model::DescribeSecurityGroupConfigurationRequest &request)const;
			void describeSecurityGroupConfigurationAsync(const Model::DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupConfigurationOutcomeCallable describeSecurityGroupConfigurationCallable(const Model::DescribeSecurityGroupConfigurationRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSlowLogsOutcome describeSlowLogs(const Model::DescribeSlowLogsRequest &request)const;
			void describeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogsOutcomeCallable describeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DestroyDBInstanceOutcome destroyDBInstance(const Model::DestroyDBInstanceRequest &request)const;
			void destroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyDBInstanceOutcomeCallable destroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request) const;
			GetDbProxyInstanceSslOutcome getDbProxyInstanceSsl(const Model::GetDbProxyInstanceSslRequest &request)const;
			void getDbProxyInstanceSslAsync(const Model::GetDbProxyInstanceSslRequest& request, const GetDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDbProxyInstanceSslOutcomeCallable getDbProxyInstanceSslCallable(const Model::GetDbProxyInstanceSslRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			GrantOperatorPermissionOutcome grantOperatorPermission(const Model::GrantOperatorPermissionRequest &request)const;
			void grantOperatorPermissionAsync(const Model::GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantOperatorPermissionOutcomeCallable grantOperatorPermissionCallable(const Model::GrantOperatorPermissionRequest& request) const;
			ImportDatabaseBetweenInstancesOutcome importDatabaseBetweenInstances(const Model::ImportDatabaseBetweenInstancesRequest &request)const;
			void importDatabaseBetweenInstancesAsync(const Model::ImportDatabaseBetweenInstancesRequest& request, const ImportDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportDatabaseBetweenInstancesOutcomeCallable importDatabaseBetweenInstancesCallable(const Model::ImportDatabaseBetweenInstancesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			LockAccountOutcome lockAccount(const Model::LockAccountRequest &request)const;
			void lockAccountAsync(const Model::LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockAccountOutcomeCallable lockAccountCallable(const Model::LockAccountRequest& request) const;
			MigrateConnectionToOtherZoneOutcome migrateConnectionToOtherZone(const Model::MigrateConnectionToOtherZoneRequest &request)const;
			void migrateConnectionToOtherZoneAsync(const Model::MigrateConnectionToOtherZoneRequest& request, const MigrateConnectionToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateConnectionToOtherZoneOutcomeCallable migrateConnectionToOtherZoneCallable(const Model::MigrateConnectionToOtherZoneRequest& request) const;
			MigrateDBInstanceOutcome migrateDBInstance(const Model::MigrateDBInstanceRequest &request)const;
			void migrateDBInstanceAsync(const Model::MigrateDBInstanceRequest& request, const MigrateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateDBInstanceOutcomeCallable migrateDBInstanceCallable(const Model::MigrateDBInstanceRequest& request) const;
			MigrateSecurityIPModeOutcome migrateSecurityIPMode(const Model::MigrateSecurityIPModeRequest &request)const;
			void migrateSecurityIPModeAsync(const Model::MigrateSecurityIPModeRequest& request, const MigrateSecurityIPModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateSecurityIPModeOutcomeCallable migrateSecurityIPModeCallable(const Model::MigrateSecurityIPModeRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyActionEventPolicyOutcome modifyActionEventPolicy(const Model::ModifyActionEventPolicyRequest &request)const;
			void modifyActionEventPolicyAsync(const Model::ModifyActionEventPolicyRequest& request, const ModifyActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActionEventPolicyOutcomeCallable modifyActionEventPolicyCallable(const Model::ModifyActionEventPolicyRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyCollationTimeZoneOutcome modifyCollationTimeZone(const Model::ModifyCollationTimeZoneRequest &request)const;
			void modifyCollationTimeZoneAsync(const Model::ModifyCollationTimeZoneRequest& request, const ModifyCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCollationTimeZoneOutcomeCallable modifyCollationTimeZoneCallable(const Model::ModifyCollationTimeZoneRequest& request) const;
			ModifyDBDescriptionOutcome modifyDBDescription(const Model::ModifyDBDescriptionRequest &request)const;
			void modifyDBDescriptionAsync(const Model::ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBDescriptionOutcomeCallable modifyDBDescriptionCallable(const Model::ModifyDBDescriptionRequest& request) const;
			ModifyDBInstanceAutoUpgradeMinorVersionOutcome modifyDBInstanceAutoUpgradeMinorVersion(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request)const;
			void modifyDBInstanceAutoUpgradeMinorVersionAsync(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest& request, const ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable modifyDBInstanceAutoUpgradeMinorVersionCallable(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest& request) const;
			ModifyDBInstanceConnectionModeOutcome modifyDBInstanceConnectionMode(const Model::ModifyDBInstanceConnectionModeRequest &request)const;
			void modifyDBInstanceConnectionModeAsync(const Model::ModifyDBInstanceConnectionModeRequest& request, const ModifyDBInstanceConnectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionModeOutcomeCallable modifyDBInstanceConnectionModeCallable(const Model::ModifyDBInstanceConnectionModeRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceHAConfigOutcome modifyDBInstanceHAConfig(const Model::ModifyDBInstanceHAConfigRequest &request)const;
			void modifyDBInstanceHAConfigAsync(const Model::ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceHAConfigOutcomeCallable modifyDBInstanceHAConfigCallable(const Model::ModifyDBInstanceHAConfigRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDBInstanceMonitorOutcome modifyDBInstanceMonitor(const Model::ModifyDBInstanceMonitorRequest &request)const;
			void modifyDBInstanceMonitorAsync(const Model::ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMonitorOutcomeCallable modifyDBInstanceMonitorCallable(const Model::ModifyDBInstanceMonitorRequest& request) const;
			ModifyDBInstanceNetworkExpireTimeOutcome modifyDBInstanceNetworkExpireTime(const Model::ModifyDBInstanceNetworkExpireTimeRequest &request)const;
			void modifyDBInstanceNetworkExpireTimeAsync(const Model::ModifyDBInstanceNetworkExpireTimeRequest& request, const ModifyDBInstanceNetworkExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceNetworkExpireTimeOutcomeCallable modifyDBInstanceNetworkExpireTimeCallable(const Model::ModifyDBInstanceNetworkExpireTimeRequest& request) const;
			ModifyDBInstanceNetworkTypeOutcome modifyDBInstanceNetworkType(const Model::ModifyDBInstanceNetworkTypeRequest &request)const;
			void modifyDBInstanceNetworkTypeAsync(const Model::ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceNetworkTypeOutcomeCallable modifyDBInstanceNetworkTypeCallable(const Model::ModifyDBInstanceNetworkTypeRequest& request) const;
			ModifyDBInstancePayTypeOutcome modifyDBInstancePayType(const Model::ModifyDBInstancePayTypeRequest &request)const;
			void modifyDBInstancePayTypeAsync(const Model::ModifyDBInstancePayTypeRequest& request, const ModifyDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstancePayTypeOutcomeCallable modifyDBInstancePayTypeCallable(const Model::ModifyDBInstancePayTypeRequest& request) const;
			ModifyDBInstanceProxyConfigurationOutcome modifyDBInstanceProxyConfiguration(const Model::ModifyDBInstanceProxyConfigurationRequest &request)const;
			void modifyDBInstanceProxyConfigurationAsync(const Model::ModifyDBInstanceProxyConfigurationRequest& request, const ModifyDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceProxyConfigurationOutcomeCallable modifyDBInstanceProxyConfigurationCallable(const Model::ModifyDBInstanceProxyConfigurationRequest& request) const;
			ModifyDBInstanceSSLOutcome modifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request)const;
			void modifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSSLOutcomeCallable modifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request) const;
			ModifyDBInstanceSpecOutcome modifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request)const;
			void modifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSpecOutcomeCallable modifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request) const;
			ModifyDBInstanceTDEOutcome modifyDBInstanceTDE(const Model::ModifyDBInstanceTDERequest &request)const;
			void modifyDBInstanceTDEAsync(const Model::ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceTDEOutcomeCallable modifyDBInstanceTDECallable(const Model::ModifyDBInstanceTDERequest& request) const;
			ModifyDBProxyOutcome modifyDBProxy(const Model::ModifyDBProxyRequest &request)const;
			void modifyDBProxyAsync(const Model::ModifyDBProxyRequest& request, const ModifyDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBProxyOutcomeCallable modifyDBProxyCallable(const Model::ModifyDBProxyRequest& request) const;
			ModifyDBProxyEndpointOutcome modifyDBProxyEndpoint(const Model::ModifyDBProxyEndpointRequest &request)const;
			void modifyDBProxyEndpointAsync(const Model::ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBProxyEndpointOutcomeCallable modifyDBProxyEndpointCallable(const Model::ModifyDBProxyEndpointRequest& request) const;
			ModifyDBProxyEndpointAddressOutcome modifyDBProxyEndpointAddress(const Model::ModifyDBProxyEndpointAddressRequest &request)const;
			void modifyDBProxyEndpointAddressAsync(const Model::ModifyDBProxyEndpointAddressRequest& request, const ModifyDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBProxyEndpointAddressOutcomeCallable modifyDBProxyEndpointAddressCallable(const Model::ModifyDBProxyEndpointAddressRequest& request) const;
			ModifyDBProxyInstanceOutcome modifyDBProxyInstance(const Model::ModifyDBProxyInstanceRequest &request)const;
			void modifyDBProxyInstanceAsync(const Model::ModifyDBProxyInstanceRequest& request, const ModifyDBProxyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBProxyInstanceOutcomeCallable modifyDBProxyInstanceCallable(const Model::ModifyDBProxyInstanceRequest& request) const;
			ModifyDTCSecurityIpHostsForSQLServerOutcome modifyDTCSecurityIpHostsForSQLServer(const Model::ModifyDTCSecurityIpHostsForSQLServerRequest &request)const;
			void modifyDTCSecurityIpHostsForSQLServerAsync(const Model::ModifyDTCSecurityIpHostsForSQLServerRequest& request, const ModifyDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDTCSecurityIpHostsForSQLServerOutcomeCallable modifyDTCSecurityIpHostsForSQLServerCallable(const Model::ModifyDTCSecurityIpHostsForSQLServerRequest& request) const;
			ModifyDasInstanceConfigOutcome modifyDasInstanceConfig(const Model::ModifyDasInstanceConfigRequest &request)const;
			void modifyDasInstanceConfigAsync(const Model::ModifyDasInstanceConfigRequest& request, const ModifyDasInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDasInstanceConfigOutcomeCallable modifyDasInstanceConfigCallable(const Model::ModifyDasInstanceConfigRequest& request) const;
			ModifyDbProxyInstanceSslOutcome modifyDbProxyInstanceSsl(const Model::ModifyDbProxyInstanceSslRequest &request)const;
			void modifyDbProxyInstanceSslAsync(const Model::ModifyDbProxyInstanceSslRequest& request, const ModifyDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDbProxyInstanceSslOutcomeCallable modifyDbProxyInstanceSslCallable(const Model::ModifyDbProxyInstanceSslRequest& request) const;
			ModifyHASwitchConfigOutcome modifyHASwitchConfig(const Model::ModifyHASwitchConfigRequest &request)const;
			void modifyHASwitchConfigAsync(const Model::ModifyHASwitchConfigRequest& request, const ModifyHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHASwitchConfigOutcomeCallable modifyHASwitchConfigCallable(const Model::ModifyHASwitchConfigRequest& request) const;
			ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
			void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
			ModifyInstanceCrossBackupPolicyOutcome modifyInstanceCrossBackupPolicy(const Model::ModifyInstanceCrossBackupPolicyRequest &request)const;
			void modifyInstanceCrossBackupPolicyAsync(const Model::ModifyInstanceCrossBackupPolicyRequest& request, const ModifyInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceCrossBackupPolicyOutcomeCallable modifyInstanceCrossBackupPolicyCallable(const Model::ModifyInstanceCrossBackupPolicyRequest& request) const;
			ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
			void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
			ModifyParameterGroupOutcome modifyParameterGroup(const Model::ModifyParameterGroupRequest &request)const;
			void modifyParameterGroupAsync(const Model::ModifyParameterGroupRequest& request, const ModifyParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterGroupOutcomeCallable modifyParameterGroupCallable(const Model::ModifyParameterGroupRequest& request) const;
			ModifyReadWriteSplittingConnectionOutcome modifyReadWriteSplittingConnection(const Model::ModifyReadWriteSplittingConnectionRequest &request)const;
			void modifyReadWriteSplittingConnectionAsync(const Model::ModifyReadWriteSplittingConnectionRequest& request, const ModifyReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReadWriteSplittingConnectionOutcomeCallable modifyReadWriteSplittingConnectionCallable(const Model::ModifyReadWriteSplittingConnectionRequest& request) const;
			ModifyReadonlyInstanceDelayReplicationTimeOutcome modifyReadonlyInstanceDelayReplicationTime(const Model::ModifyReadonlyInstanceDelayReplicationTimeRequest &request)const;
			void modifyReadonlyInstanceDelayReplicationTimeAsync(const Model::ModifyReadonlyInstanceDelayReplicationTimeRequest& request, const ModifyReadonlyInstanceDelayReplicationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReadonlyInstanceDelayReplicationTimeOutcomeCallable modifyReadonlyInstanceDelayReplicationTimeCallable(const Model::ModifyReadonlyInstanceDelayReplicationTimeRequest& request) const;
			ModifyResourceGroupOutcome modifyResourceGroup(const Model::ModifyResourceGroupRequest &request)const;
			void modifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceGroupOutcomeCallable modifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request) const;
			ModifySQLCollectorPolicyOutcome modifySQLCollectorPolicy(const Model::ModifySQLCollectorPolicyRequest &request)const;
			void modifySQLCollectorPolicyAsync(const Model::ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySQLCollectorPolicyOutcomeCallable modifySQLCollectorPolicyCallable(const Model::ModifySQLCollectorPolicyRequest& request) const;
			ModifySQLCollectorRetentionOutcome modifySQLCollectorRetention(const Model::ModifySQLCollectorRetentionRequest &request)const;
			void modifySQLCollectorRetentionAsync(const Model::ModifySQLCollectorRetentionRequest& request, const ModifySQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySQLCollectorRetentionOutcomeCallable modifySQLCollectorRetentionCallable(const Model::ModifySQLCollectorRetentionRequest& request) const;
			ModifySecurityGroupConfigurationOutcome modifySecurityGroupConfiguration(const Model::ModifySecurityGroupConfigurationRequest &request)const;
			void modifySecurityGroupConfigurationAsync(const Model::ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupConfigurationOutcomeCallable modifySecurityGroupConfigurationCallable(const Model::ModifySecurityGroupConfigurationRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			PurgeDBInstanceLogOutcome purgeDBInstanceLog(const Model::PurgeDBInstanceLogRequest &request)const;
			void purgeDBInstanceLogAsync(const Model::PurgeDBInstanceLogRequest& request, const PurgeDBInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurgeDBInstanceLogOutcomeCallable purgeDBInstanceLogCallable(const Model::PurgeDBInstanceLogRequest& request) const;
			RebuildDBInstanceOutcome rebuildDBInstance(const Model::RebuildDBInstanceRequest &request)const;
			void rebuildDBInstanceAsync(const Model::RebuildDBInstanceRequest& request, const RebuildDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildDBInstanceOutcomeCallable rebuildDBInstanceCallable(const Model::RebuildDBInstanceRequest& request) const;
			RecoveryDBInstanceOutcome recoveryDBInstance(const Model::RecoveryDBInstanceRequest &request)const;
			void recoveryDBInstanceAsync(const Model::RecoveryDBInstanceRequest& request, const RecoveryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoveryDBInstanceOutcomeCallable recoveryDBInstanceCallable(const Model::RecoveryDBInstanceRequest& request) const;
			ReleaseInstanceConnectionOutcome releaseInstanceConnection(const Model::ReleaseInstanceConnectionRequest &request)const;
			void releaseInstanceConnectionAsync(const Model::ReleaseInstanceConnectionRequest& request, const ReleaseInstanceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceConnectionOutcomeCallable releaseInstanceConnectionCallable(const Model::ReleaseInstanceConnectionRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ReleaseReadWriteSplittingConnectionOutcome releaseReadWriteSplittingConnection(const Model::ReleaseReadWriteSplittingConnectionRequest &request)const;
			void releaseReadWriteSplittingConnectionAsync(const Model::ReleaseReadWriteSplittingConnectionRequest& request, const ReleaseReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseReadWriteSplittingConnectionOutcomeCallable releaseReadWriteSplittingConnectionCallable(const Model::ReleaseReadWriteSplittingConnectionRequest& request) const;
			RemoveTagsFromResourceOutcome removeTagsFromResource(const Model::RemoveTagsFromResourceRequest &request)const;
			void removeTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsFromResourceOutcomeCallable removeTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
			void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			RestoreDdrTableOutcome restoreDdrTable(const Model::RestoreDdrTableRequest &request)const;
			void restoreDdrTableAsync(const Model::RestoreDdrTableRequest& request, const RestoreDdrTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreDdrTableOutcomeCallable restoreDdrTableCallable(const Model::RestoreDdrTableRequest& request) const;
			RestoreTableOutcome restoreTable(const Model::RestoreTableRequest &request)const;
			void restoreTableAsync(const Model::RestoreTableRequest& request, const RestoreTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreTableOutcomeCallable restoreTableCallable(const Model::RestoreTableRequest& request) const;
			RevokeAccountPrivilegeOutcome revokeAccountPrivilege(const Model::RevokeAccountPrivilegeRequest &request)const;
			void revokeAccountPrivilegeAsync(const Model::RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeAccountPrivilegeOutcomeCallable revokeAccountPrivilegeCallable(const Model::RevokeAccountPrivilegeRequest& request) const;
			RevokeOperatorPermissionOutcome revokeOperatorPermission(const Model::RevokeOperatorPermissionRequest &request)const;
			void revokeOperatorPermissionAsync(const Model::RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeOperatorPermissionOutcomeCallable revokeOperatorPermissionCallable(const Model::RevokeOperatorPermissionRequest& request) const;
			StartDBInstanceOutcome startDBInstance(const Model::StartDBInstanceRequest &request)const;
			void startDBInstanceAsync(const Model::StartDBInstanceRequest& request, const StartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDBInstanceOutcomeCallable startDBInstanceCallable(const Model::StartDBInstanceRequest& request) const;
			StopDBInstanceOutcome stopDBInstance(const Model::StopDBInstanceRequest &request)const;
			void stopDBInstanceAsync(const Model::StopDBInstanceRequest& request, const StopDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDBInstanceOutcomeCallable stopDBInstanceCallable(const Model::StopDBInstanceRequest& request) const;
			SwitchDBInstanceHAOutcome switchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request)const;
			void switchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceHAOutcomeCallable switchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request) const;
			SwitchDBInstanceNetTypeOutcome switchDBInstanceNetType(const Model::SwitchDBInstanceNetTypeRequest &request)const;
			void switchDBInstanceNetTypeAsync(const Model::SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceNetTypeOutcomeCallable switchDBInstanceNetTypeCallable(const Model::SwitchDBInstanceNetTypeRequest& request) const;
			SwitchDBInstanceVpcOutcome switchDBInstanceVpc(const Model::SwitchDBInstanceVpcRequest &request)const;
			void switchDBInstanceVpcAsync(const Model::SwitchDBInstanceVpcRequest& request, const SwitchDBInstanceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceVpcOutcomeCallable switchDBInstanceVpcCallable(const Model::SwitchDBInstanceVpcRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TerminateMigrateTaskOutcome terminateMigrateTask(const Model::TerminateMigrateTaskRequest &request)const;
			void terminateMigrateTaskAsync(const Model::TerminateMigrateTaskRequest& request, const TerminateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateMigrateTaskOutcomeCallable terminateMigrateTaskCallable(const Model::TerminateMigrateTaskRequest& request) const;
			TransformDBInstancePayTypeOutcome transformDBInstancePayType(const Model::TransformDBInstancePayTypeRequest &request)const;
			void transformDBInstancePayTypeAsync(const Model::TransformDBInstancePayTypeRequest& request, const TransformDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformDBInstancePayTypeOutcomeCallable transformDBInstancePayTypeCallable(const Model::TransformDBInstancePayTypeRequest& request) const;
			UnlockAccountOutcome unlockAccount(const Model::UnlockAccountRequest &request)const;
			void unlockAccountAsync(const Model::UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockAccountOutcomeCallable unlockAccountCallable(const Model::UnlockAccountRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpgradeDBInstanceEngineVersionOutcome upgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request)const;
			void upgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceEngineVersionOutcomeCallable upgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request) const;
			UpgradeDBInstanceKernelVersionOutcome upgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request)const;
			void upgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceKernelVersionOutcomeCallable upgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request) const;
			UpgradeDBProxyInstanceKernelVersionOutcome upgradeDBProxyInstanceKernelVersion(const Model::UpgradeDBProxyInstanceKernelVersionRequest &request)const;
			void upgradeDBProxyInstanceKernelVersionAsync(const Model::UpgradeDBProxyInstanceKernelVersionRequest& request, const UpgradeDBProxyInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBProxyInstanceKernelVersionOutcomeCallable upgradeDBProxyInstanceKernelVersionCallable(const Model::UpgradeDBProxyInstanceKernelVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RDS_RDSCLIENT_H_
