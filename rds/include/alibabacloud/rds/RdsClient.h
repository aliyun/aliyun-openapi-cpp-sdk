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
#include "model/AcceptRCInquiredSystemEventRequest.h"
#include "model/AcceptRCInquiredSystemEventResult.h"
#include "model/ActivateMigrationTargetInstanceRequest.h"
#include "model/ActivateMigrationTargetInstanceResult.h"
#include "model/AddTagsToResourceRequest.h"
#include "model/AddTagsToResourceResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/AllocateReadWriteSplittingConnectionRequest.h"
#include "model/AllocateReadWriteSplittingConnectionResult.h"
#include "model/AssociateEipAddressWithRCInstanceRequest.h"
#include "model/AssociateEipAddressWithRCInstanceResult.h"
#include "model/AttachRCDiskRequest.h"
#include "model/AttachRCDiskResult.h"
#include "model/AttachRCInstancesRequest.h"
#include "model/AttachRCInstancesResult.h"
#include "model/AttachWhitelistTemplateToInstanceRequest.h"
#include "model/AttachWhitelistTemplateToInstanceResult.h"
#include "model/AuthorizeRCSecurityGroupPermissionRequest.h"
#include "model/AuthorizeRCSecurityGroupPermissionResult.h"
#include "model/CalculateDBInstanceWeightRequest.h"
#include "model/CalculateDBInstanceWeightResult.h"
#include "model/CancelActiveOperationTasksRequest.h"
#include "model/CancelActiveOperationTasksResult.h"
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
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CloneDBInstanceRequest.h"
#include "model/CloneDBInstanceResult.h"
#include "model/CloneParameterGroupRequest.h"
#include "model/CloneParameterGroupResult.h"
#include "model/ConfirmNotifyRequest.h"
#include "model/ConfirmNotifyResult.h"
#include "model/CopyDatabaseRequest.h"
#include "model/CopyDatabaseResult.h"
#include "model/CopyDatabaseBetweenInstancesRequest.h"
#include "model/CopyDatabaseBetweenInstancesResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateCloudMigrationPrecheckTaskRequest.h"
#include "model/CreateCloudMigrationPrecheckTaskResult.h"
#include "model/CreateCloudMigrationTaskRequest.h"
#include "model/CreateCloudMigrationTaskResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateDBInstanceEndpointRequest.h"
#include "model/CreateDBInstanceEndpointResult.h"
#include "model/CreateDBInstanceEndpointAddressRequest.h"
#include "model/CreateDBInstanceEndpointAddressResult.h"
#include "model/CreateDBInstanceForRebuildRequest.h"
#include "model/CreateDBInstanceForRebuildResult.h"
#include "model/CreateDBInstanceSecurityGroupRuleRequest.h"
#include "model/CreateDBInstanceSecurityGroupRuleResult.h"
#include "model/CreateDBNodesRequest.h"
#include "model/CreateDBNodesResult.h"
#include "model/CreateDBProxyEndpointAddressRequest.h"
#include "model/CreateDBProxyEndpointAddressResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateDdrInstanceRequest.h"
#include "model/CreateDdrInstanceResult.h"
#include "model/CreateDiagnosticReportRequest.h"
#include "model/CreateDiagnosticReportResult.h"
#include "model/CreateGADInstanceRequest.h"
#include "model/CreateGADInstanceResult.h"
#include "model/CreateGadInstanceMemberRequest.h"
#include "model/CreateGadInstanceMemberResult.h"
#include "model/CreateMaskingRulesRequest.h"
#include "model/CreateMaskingRulesResult.h"
#include "model/CreateMigrateTaskRequest.h"
#include "model/CreateMigrateTaskResult.h"
#include "model/CreateOnlineDatabaseTaskRequest.h"
#include "model/CreateOnlineDatabaseTaskResult.h"
#include "model/CreateOrderForDeleteDBNodesRequest.h"
#include "model/CreateOrderForDeleteDBNodesResult.h"
#include "model/CreateParameterGroupRequest.h"
#include "model/CreateParameterGroupResult.h"
#include "model/CreatePostgresExtensionsRequest.h"
#include "model/CreatePostgresExtensionsResult.h"
#include "model/CreateRCDeploymentSetRequest.h"
#include "model/CreateRCDeploymentSetResult.h"
#include "model/CreateRCDiskRequest.h"
#include "model/CreateRCDiskResult.h"
#include "model/CreateRCNodePoolRequest.h"
#include "model/CreateRCNodePoolResult.h"
#include "model/CreateRCSnapshotRequest.h"
#include "model/CreateRCSnapshotResult.h"
#include "model/CreateReadOnlyDBInstanceRequest.h"
#include "model/CreateReadOnlyDBInstanceResult.h"
#include "model/CreateReplicationLinkRequest.h"
#include "model/CreateReplicationLinkResult.h"
#include "model/CreateSecretRequest.h"
#include "model/CreateSecretResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateTempDBInstanceRequest.h"
#include "model/CreateTempDBInstanceResult.h"
#include "model/CreateYouhuiForOrderRequest.h"
#include "model/CreateYouhuiForOrderResult.h"
#include "model/DeleteADSettingRequest.h"
#include "model/DeleteADSettingResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteBackupRequest.h"
#include "model/DeleteBackupResult.h"
#include "model/DeleteBackupFileRequest.h"
#include "model/DeleteBackupFileResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteDBInstanceEndpointRequest.h"
#include "model/DeleteDBInstanceEndpointResult.h"
#include "model/DeleteDBInstanceEndpointAddressRequest.h"
#include "model/DeleteDBInstanceEndpointAddressResult.h"
#include "model/DeleteDBInstanceSecurityGroupRuleRequest.h"
#include "model/DeleteDBInstanceSecurityGroupRuleResult.h"
#include "model/DeleteDBNodesRequest.h"
#include "model/DeleteDBNodesResult.h"
#include "model/DeleteDBProxyEndpointAddressRequest.h"
#include "model/DeleteDBProxyEndpointAddressResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteGadInstanceRequest.h"
#include "model/DeleteGadInstanceResult.h"
#include "model/DeleteMaskingRulesRequest.h"
#include "model/DeleteMaskingRulesResult.h"
#include "model/DeleteParameterGroupRequest.h"
#include "model/DeleteParameterGroupResult.h"
#include "model/DeletePostgresExtensionsRequest.h"
#include "model/DeletePostgresExtensionsResult.h"
#include "model/DeleteRCClusterNodesRequest.h"
#include "model/DeleteRCClusterNodesResult.h"
#include "model/DeleteRCDeploymentSetRequest.h"
#include "model/DeleteRCDeploymentSetResult.h"
#include "model/DeleteRCDiskRequest.h"
#include "model/DeleteRCDiskResult.h"
#include "model/DeleteRCInstanceRequest.h"
#include "model/DeleteRCInstanceResult.h"
#include "model/DeleteRCInstancesRequest.h"
#include "model/DeleteRCInstancesResult.h"
#include "model/DeleteRCNodePoolRequest.h"
#include "model/DeleteRCNodePoolResult.h"
#include "model/DeleteRCSnapshotRequest.h"
#include "model/DeleteRCSnapshotResult.h"
#include "model/DeleteReplicationLinkRequest.h"
#include "model/DeleteReplicationLinkResult.h"
#include "model/DeleteSecretRequest.h"
#include "model/DeleteSecretResult.h"
#include "model/DeleteSlotRequest.h"
#include "model/DeleteSlotResult.h"
#include "model/DeleteUserBackupFileRequest.h"
#include "model/DeleteUserBackupFileResult.h"
#include "model/DescibeImportsFromDatabaseRequest.h"
#include "model/DescibeImportsFromDatabaseResult.h"
#include "model/DescribeADInfoRequest.h"
#include "model/DescribeADInfoResult.h"
#include "model/DescribeAccountMaskingPrivilegeRequest.h"
#include "model/DescribeAccountMaskingPrivilegeResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeActionEventPolicyRequest.h"
#include "model/DescribeActionEventPolicyResult.h"
#include "model/DescribeActiveOperationTasksRequest.h"
#include "model/DescribeActiveOperationTasksResult.h"
#include "model/DescribeAllWhitelistTemplateRequest.h"
#include "model/DescribeAllWhitelistTemplateResult.h"
#include "model/DescribeAnalyticdbByPrimaryDBInstanceRequest.h"
#include "model/DescribeAnalyticdbByPrimaryDBInstanceResult.h"
#include "model/DescribeAvailableClassesRequest.h"
#include "model/DescribeAvailableClassesResult.h"
#include "model/DescribeAvailableCrossRegionRequest.h"
#include "model/DescribeAvailableCrossRegionResult.h"
#include "model/DescribeAvailableMetricsRequest.h"
#include "model/DescribeAvailableMetricsResult.h"
#include "model/DescribeAvailableRecoveryTimeRequest.h"
#include "model/DescribeAvailableRecoveryTimeResult.h"
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
#include "model/DescribeClassDetailsRequest.h"
#include "model/DescribeClassDetailsResult.h"
#include "model/DescribeCloudMigrationPrecheckResultRequest.h"
#include "model/DescribeCloudMigrationPrecheckResultResult.h"
#include "model/DescribeCloudMigrationResultRequest.h"
#include "model/DescribeCloudMigrationResultResult.h"
#include "model/DescribeCollationTimeZonesRequest.h"
#include "model/DescribeCollationTimeZonesResult.h"
#include "model/DescribeComputeBurstConfigRequest.h"
#include "model/DescribeComputeBurstConfigResult.h"
#include "model/DescribeCrossBackupMetaListRequest.h"
#include "model/DescribeCrossBackupMetaListResult.h"
#include "model/DescribeCrossRegionBackupDBInstanceRequest.h"
#include "model/DescribeCrossRegionBackupDBInstanceResult.h"
#include "model/DescribeCrossRegionBackupsRequest.h"
#include "model/DescribeCrossRegionBackupsResult.h"
#include "model/DescribeCrossRegionLogBackupFilesRequest.h"
#include "model/DescribeCrossRegionLogBackupFilesResult.h"
#include "model/DescribeCurrentModifyOrderRequest.h"
#include "model/DescribeCurrentModifyOrderResult.h"
#include "model/DescribeCustinsResourceInfoRequest.h"
#include "model/DescribeCustinsResourceInfoResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceByTagsRequest.h"
#include "model/DescribeDBInstanceByTagsResult.h"
#include "model/DescribeDBInstanceConnectivityRequest.h"
#include "model/DescribeDBInstanceConnectivityResult.h"
#include "model/DescribeDBInstanceDetailRequest.h"
#include "model/DescribeDBInstanceDetailResult.h"
#include "model/DescribeDBInstanceEncryptionKeyRequest.h"
#include "model/DescribeDBInstanceEncryptionKeyResult.h"
#include "model/DescribeDBInstanceEndpointsRequest.h"
#include "model/DescribeDBInstanceEndpointsResult.h"
#include "model/DescribeDBInstanceHAConfigRequest.h"
#include "model/DescribeDBInstanceHAConfigResult.h"
#include "model/DescribeDBInstanceIPArrayListRequest.h"
#include "model/DescribeDBInstanceIPArrayListResult.h"
#include "model/DescribeDBInstanceIpHostnameRequest.h"
#include "model/DescribeDBInstanceIpHostnameResult.h"
#include "model/DescribeDBInstanceMetricsRequest.h"
#include "model/DescribeDBInstanceMetricsResult.h"
#include "model/DescribeDBInstanceMonitorRequest.h"
#include "model/DescribeDBInstanceMonitorResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDBInstanceNetInfoForChannelRequest.h"
#include "model/DescribeDBInstanceNetInfoForChannelResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBInstancePromoteActivityRequest.h"
#include "model/DescribeDBInstancePromoteActivityResult.h"
#include "model/DescribeDBInstanceProxyConfigurationRequest.h"
#include "model/DescribeDBInstanceProxyConfigurationResult.h"
#include "model/DescribeDBInstanceReplicationRequest.h"
#include "model/DescribeDBInstanceReplicationResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/DescribeDBInstanceSecurityGroupRuleRequest.h"
#include "model/DescribeDBInstanceSecurityGroupRuleResult.h"
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
#include "model/DescribeDBMiniEngineVersionsRequest.h"
#include "model/DescribeDBMiniEngineVersionsResult.h"
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
#include "model/DescribeGadInstancesRequest.h"
#include "model/DescribeGadInstancesResult.h"
#include "model/DescribeHADiagnoseConfigRequest.h"
#include "model/DescribeHADiagnoseConfigResult.h"
#include "model/DescribeHASwitchConfigRequest.h"
#include "model/DescribeHASwitchConfigResult.h"
#include "model/DescribeHistoryEventsRequest.h"
#include "model/DescribeHistoryEventsResult.h"
#include "model/DescribeHistoryEventsStatRequest.h"
#include "model/DescribeHistoryEventsStatResult.h"
#include "model/DescribeHistoryTasksRequest.h"
#include "model/DescribeHistoryTasksResult.h"
#include "model/DescribeHistoryTasksStatRequest.h"
#include "model/DescribeHistoryTasksStatResult.h"
#include "model/DescribeHostGroupElasticStrategyParametersRequest.h"
#include "model/DescribeHostGroupElasticStrategyParametersResult.h"
#include "model/DescribeHostWebShellRequest.h"
#include "model/DescribeHostWebShellResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeInstanceCrossBackupPolicyRequest.h"
#include "model/DescribeInstanceCrossBackupPolicyResult.h"
#include "model/DescribeInstanceKeywordsRequest.h"
#include "model/DescribeInstanceKeywordsResult.h"
#include "model/DescribeInstanceLinkedWhitelistTemplateRequest.h"
#include "model/DescribeInstanceLinkedWhitelistTemplateResult.h"
#include "model/DescribeKmsAssociateResourcesRequest.h"
#include "model/DescribeKmsAssociateResourcesResult.h"
#include "model/DescribeLocalAvailableRecoveryTimeRequest.h"
#include "model/DescribeLocalAvailableRecoveryTimeResult.h"
#include "model/DescribeLogBackupFilesRequest.h"
#include "model/DescribeLogBackupFilesResult.h"
#include "model/DescribeMarketingActivityRequest.h"
#include "model/DescribeMarketingActivityResult.h"
#include "model/DescribeMaskingRulesRequest.h"
#include "model/DescribeMaskingRulesResult.h"
#include "model/DescribeMetaListRequest.h"
#include "model/DescribeMetaListResult.h"
#include "model/DescribeMigrateTaskByIdRequest.h"
#include "model/DescribeMigrateTaskByIdResult.h"
#include "model/DescribeMigrateTasksRequest.h"
#include "model/DescribeMigrateTasksResult.h"
#include "model/DescribeModifyPGHbaConfigLogRequest.h"
#include "model/DescribeModifyPGHbaConfigLogResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeOssDownloadsRequest.h"
#include "model/DescribeOssDownloadsResult.h"
#include "model/DescribePGHbaConfigRequest.h"
#include "model/DescribePGHbaConfigResult.h"
#include "model/DescribeParameterGroupRequest.h"
#include "model/DescribeParameterGroupResult.h"
#include "model/DescribeParameterGroupsRequest.h"
#include "model/DescribeParameterGroupsResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribePostgresExtensionsRequest.h"
#include "model/DescribePostgresExtensionsResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeQuickSaleConfigRequest.h"
#include "model/DescribeQuickSaleConfigResult.h"
#include "model/DescribeRCCloudAssistantStatusRequest.h"
#include "model/DescribeRCCloudAssistantStatusResult.h"
#include "model/DescribeRCClusterConfigRequest.h"
#include "model/DescribeRCClusterConfigResult.h"
#include "model/DescribeRCClusterNodesRequest.h"
#include "model/DescribeRCClusterNodesResult.h"
#include "model/DescribeRCClustersRequest.h"
#include "model/DescribeRCClustersResult.h"
#include "model/DescribeRCDeploymentSetsRequest.h"
#include "model/DescribeRCDeploymentSetsResult.h"
#include "model/DescribeRCDisksRequest.h"
#include "model/DescribeRCDisksResult.h"
#include "model/DescribeRCImageListRequest.h"
#include "model/DescribeRCImageListResult.h"
#include "model/DescribeRCInstanceAttributeRequest.h"
#include "model/DescribeRCInstanceAttributeResult.h"
#include "model/DescribeRCInstanceDdosCountRequest.h"
#include "model/DescribeRCInstanceDdosCountResult.h"
#include "model/DescribeRCInstanceHistoryEventsRequest.h"
#include "model/DescribeRCInstanceHistoryEventsResult.h"
#include "model/DescribeRCInstanceIpAddressRequest.h"
#include "model/DescribeRCInstanceIpAddressResult.h"
#include "model/DescribeRCInstanceTypeFamiliesRequest.h"
#include "model/DescribeRCInstanceTypeFamiliesResult.h"
#include "model/DescribeRCInstanceTypesRequest.h"
#include "model/DescribeRCInstanceTypesResult.h"
#include "model/DescribeRCInstanceVncUrlRequest.h"
#include "model/DescribeRCInstanceVncUrlResult.h"
#include "model/DescribeRCInstancesRequest.h"
#include "model/DescribeRCInstancesResult.h"
#include "model/DescribeRCInvocationResultsRequest.h"
#include "model/DescribeRCInvocationResultsResult.h"
#include "model/DescribeRCMetricListRequest.h"
#include "model/DescribeRCMetricListResult.h"
#include "model/DescribeRCNodePoolRequest.h"
#include "model/DescribeRCNodePoolResult.h"
#include "model/DescribeRCSecurityGroupListRequest.h"
#include "model/DescribeRCSecurityGroupListResult.h"
#include "model/DescribeRCSecurityGroupPermissionRequest.h"
#include "model/DescribeRCSecurityGroupPermissionResult.h"
#include "model/DescribeRCSnapshotsRequest.h"
#include "model/DescribeRCSnapshotsResult.h"
#include "model/DescribeRCVClusterRequest.h"
#include "model/DescribeRCVClusterResult.h"
#include "model/DescribeRdsResourceSettingsRequest.h"
#include "model/DescribeRdsResourceSettingsResult.h"
#include "model/DescribeReadDBInstanceDelayRequest.h"
#include "model/DescribeReadDBInstanceDelayResult.h"
#include "model/DescribeRegionInfosRequest.h"
#include "model/DescribeRegionInfosResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRenewalPriceRequest.h"
#include "model/DescribeRenewalPriceResult.h"
#include "model/DescribeReplicationLinkLogsRequest.h"
#include "model/DescribeReplicationLinkLogsResult.h"
#include "model/DescribeResourceDetailsRequest.h"
#include "model/DescribeResourceDetailsResult.h"
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
#include "model/DescribeSecretsRequest.h"
#include "model/DescribeSecretsResult.h"
#include "model/DescribeSecurityGroupConfigurationRequest.h"
#include "model/DescribeSecurityGroupConfigurationResult.h"
#include "model/DescribeSlotsRequest.h"
#include "model/DescribeSlotsResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSlowLogsRequest.h"
#include "model/DescribeSlowLogsResult.h"
#include "model/DescribeSupportOnlineResizeDiskRequest.h"
#include "model/DescribeSupportOnlineResizeDiskResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeUpgradeMajorVersionPrecheckTaskRequest.h"
#include "model/DescribeUpgradeMajorVersionPrecheckTaskResult.h"
#include "model/DescribeUpgradeMajorVersionTasksRequest.h"
#include "model/DescribeUpgradeMajorVersionTasksResult.h"
#include "model/DescribeVSwitchListRequest.h"
#include "model/DescribeVSwitchListResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DescribeWhitelistTemplateRequest.h"
#include "model/DescribeWhitelistTemplateResult.h"
#include "model/DescribeWhitelistTemplateLinkedInstanceRequest.h"
#include "model/DescribeWhitelistTemplateLinkedInstanceResult.h"
#include "model/DestroyDBInstanceRequest.h"
#include "model/DestroyDBInstanceResult.h"
#include "model/DetachGadInstanceMemberRequest.h"
#include "model/DetachGadInstanceMemberResult.h"
#include "model/DetachRCDiskRequest.h"
#include "model/DetachRCDiskResult.h"
#include "model/DetachWhitelistTemplateToInstanceRequest.h"
#include "model/DetachWhitelistTemplateToInstanceResult.h"
#include "model/EvaluateLocalExtendDiskRequest.h"
#include "model/EvaluateLocalExtendDiskResult.h"
#include "model/GetDBInstanceTopologyRequest.h"
#include "model/GetDBInstanceTopologyResult.h"
#include "model/GetDbProxyInstanceSslRequest.h"
#include "model/GetDbProxyInstanceSslResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/GrantOperatorPermissionRequest.h"
#include "model/GrantOperatorPermissionResult.h"
#include "model/ImportUserBackupFileRequest.h"
#include "model/ImportUserBackupFileResult.h"
#include "model/InstallRCCloudAssistantRequest.h"
#include "model/InstallRCCloudAssistantResult.h"
#include "model/ListClassesRequest.h"
#include "model/ListClassesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListUserBackupFilesRequest.h"
#include "model/ListUserBackupFilesResult.h"
#include "model/LockAccountRequest.h"
#include "model/LockAccountResult.h"
#include "model/MigrateConnectionToOtherZoneRequest.h"
#include "model/MigrateConnectionToOtherZoneResult.h"
#include "model/MigrateDBInstanceRequest.h"
#include "model/MigrateDBInstanceResult.h"
#include "model/MigrateDBNodesRequest.h"
#include "model/MigrateDBNodesResult.h"
#include "model/MigrateSecurityIPModeRequest.h"
#include "model/MigrateSecurityIPModeResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/ModifyADInfoRequest.h"
#include "model/ModifyADInfoResult.h"
#include "model/ModifyAccountCheckPolicyRequest.h"
#include "model/ModifyAccountCheckPolicyResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountMaskingPrivilegeRequest.h"
#include "model/ModifyAccountMaskingPrivilegeResult.h"
#include "model/ModifyAccountSecurityPolicyRequest.h"
#include "model/ModifyAccountSecurityPolicyResult.h"
#include "model/ModifyActionEventPolicyRequest.h"
#include "model/ModifyActionEventPolicyResult.h"
#include "model/ModifyActiveOperationTasksRequest.h"
#include "model/ModifyActiveOperationTasksResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyBackupSetExpireTimeRequest.h"
#include "model/ModifyBackupSetExpireTimeResult.h"
#include "model/ModifyCollationTimeZoneRequest.h"
#include "model/ModifyCollationTimeZoneResult.h"
#include "model/ModifyComputeBurstConfigRequest.h"
#include "model/ModifyComputeBurstConfigResult.h"
#include "model/ModifyCustinsResourceRequest.h"
#include "model/ModifyCustinsResourceResult.h"
#include "model/ModifyDBDescriptionRequest.h"
#include "model/ModifyDBDescriptionResult.h"
#include "model/ModifyDBInstanceAutoUpgradeMinorVersionRequest.h"
#include "model/ModifyDBInstanceAutoUpgradeMinorVersionResult.h"
#include "model/ModifyDBInstanceConfigRequest.h"
#include "model/ModifyDBInstanceConfigResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDelayedReplicationTimeRequest.h"
#include "model/ModifyDBInstanceDelayedReplicationTimeResult.h"
#include "model/ModifyDBInstanceDeletionProtectionRequest.h"
#include "model/ModifyDBInstanceDeletionProtectionResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceEndpointRequest.h"
#include "model/ModifyDBInstanceEndpointResult.h"
#include "model/ModifyDBInstanceEndpointAddressRequest.h"
#include "model/ModifyDBInstanceEndpointAddressResult.h"
#include "model/ModifyDBInstanceHAConfigRequest.h"
#include "model/ModifyDBInstanceHAConfigResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceMetricsRequest.h"
#include "model/ModifyDBInstanceMetricsResult.h"
#include "model/ModifyDBInstanceMonitorRequest.h"
#include "model/ModifyDBInstanceMonitorResult.h"
#include "model/ModifyDBInstanceNetworkExpireTimeRequest.h"
#include "model/ModifyDBInstanceNetworkExpireTimeResult.h"
#include "model/ModifyDBInstanceNetworkTypeRequest.h"
#include "model/ModifyDBInstanceNetworkTypeResult.h"
#include "model/ModifyDBInstancePayTypeRequest.h"
#include "model/ModifyDBInstancePayTypeResult.h"
#include "model/ModifyDBInstanceReplicationSwitchRequest.h"
#include "model/ModifyDBInstanceReplicationSwitchResult.h"
#include "model/ModifyDBInstanceSSLRequest.h"
#include "model/ModifyDBInstanceSSLResult.h"
#include "model/ModifyDBInstanceSecurityGroupRuleRequest.h"
#include "model/ModifyDBInstanceSecurityGroupRuleResult.h"
#include "model/ModifyDBInstanceSpecRequest.h"
#include "model/ModifyDBInstanceSpecResult.h"
#include "model/ModifyDBInstanceTDERequest.h"
#include "model/ModifyDBInstanceTDEResult.h"
#include "model/ModifyDBNodeRequest.h"
#include "model/ModifyDBNodeResult.h"
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
#include "model/ModifyDatabaseConfigRequest.h"
#include "model/ModifyDatabaseConfigResult.h"
#include "model/ModifyDbProxyInstanceSslRequest.h"
#include "model/ModifyDbProxyInstanceSslResult.h"
#include "model/ModifyEventInfoRequest.h"
#include "model/ModifyEventInfoResult.h"
#include "model/ModifyHADiagnoseConfigRequest.h"
#include "model/ModifyHADiagnoseConfigResult.h"
#include "model/ModifyHASwitchConfigRequest.h"
#include "model/ModifyHASwitchConfigResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/ModifyInstanceCrossBackupPolicyRequest.h"
#include "model/ModifyInstanceCrossBackupPolicyResult.h"
#include "model/ModifyMaskingRulesRequest.h"
#include "model/ModifyMaskingRulesResult.h"
#include "model/ModifyPGHbaConfigRequest.h"
#include "model/ModifyPGHbaConfigResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ModifyParameterGroupRequest.h"
#include "model/ModifyParameterGroupResult.h"
#include "model/ModifyRCDiskSpecRequest.h"
#include "model/ModifyRCDiskSpecResult.h"
#include "model/ModifyRCInstanceRequest.h"
#include "model/ModifyRCInstanceResult.h"
#include "model/ModifyRCInstanceAttributeRequest.h"
#include "model/ModifyRCInstanceAttributeResult.h"
#include "model/ModifyRCInstanceChargeTypeRequest.h"
#include "model/ModifyRCInstanceChargeTypeResult.h"
#include "model/ModifyRCInstanceDescriptionRequest.h"
#include "model/ModifyRCInstanceDescriptionResult.h"
#include "model/ModifyRCInstanceKeyPairRequest.h"
#include "model/ModifyRCInstanceKeyPairResult.h"
#include "model/ModifyRCInstanceNetworkSpecRequest.h"
#include "model/ModifyRCInstanceNetworkSpecResult.h"
#include "model/ModifyRCSecurityGroupPermissionRequest.h"
#include "model/ModifyRCSecurityGroupPermissionResult.h"
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
#include "model/ModifyTaskInfoRequest.h"
#include "model/ModifyTaskInfoResult.h"
#include "model/ModifyWhitelistTemplateRequest.h"
#include "model/ModifyWhitelistTemplateResult.h"
#include "model/PreCheckCreateOrderForDeleteDBNodesRequest.h"
#include "model/PreCheckCreateOrderForDeleteDBNodesResult.h"
#include "model/PurgeDBInstanceLogRequest.h"
#include "model/PurgeDBInstanceLogResult.h"
#include "model/QueryNotifyRequest.h"
#include "model/QueryNotifyResult.h"
#include "model/QueryRecommendByCodeRequest.h"
#include "model/QueryRecommendByCodeResult.h"
#include "model/RebootRCInstanceRequest.h"
#include "model/RebootRCInstanceResult.h"
#include "model/RebootRCInstancesRequest.h"
#include "model/RebootRCInstancesResult.h"
#include "model/RebuildDBInstanceRequest.h"
#include "model/RebuildDBInstanceResult.h"
#include "model/RebuildReplicationLinkRequest.h"
#include "model/RebuildReplicationLinkResult.h"
#include "model/ReceiveDBInstanceRequest.h"
#include "model/ReceiveDBInstanceResult.h"
#include "model/RecoveryDBInstanceRequest.h"
#include "model/RecoveryDBInstanceResult.h"
#include "model/RedeployRCInstanceRequest.h"
#include "model/RedeployRCInstanceResult.h"
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
#include "model/RenewRCInstanceRequest.h"
#include "model/RenewRCInstanceResult.h"
#include "model/ReplaceRCInstanceSystemDiskRequest.h"
#include "model/ReplaceRCInstanceSystemDiskResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/ResizeRCInstanceDiskRequest.h"
#include "model/ResizeRCInstanceDiskResult.h"
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
#include "model/RevokeRCSecurityGroupPermissionRequest.h"
#include "model/RevokeRCSecurityGroupPermissionResult.h"
#include "model/RunRCCommandRequest.h"
#include "model/RunRCCommandResult.h"
#include "model/RunRCInstancesRequest.h"
#include "model/RunRCInstancesResult.h"
#include "model/StartDBInstanceRequest.h"
#include "model/StartDBInstanceResult.h"
#include "model/StartRCInstanceRequest.h"
#include "model/StartRCInstanceResult.h"
#include "model/StartRCInstancesRequest.h"
#include "model/StartRCInstancesResult.h"
#include "model/StopDBInstanceRequest.h"
#include "model/StopDBInstanceResult.h"
#include "model/StopRCInstanceRequest.h"
#include "model/StopRCInstanceResult.h"
#include "model/StopRCInstancesRequest.h"
#include "model/StopRCInstancesResult.h"
#include "model/SwitchDBInstanceHARequest.h"
#include "model/SwitchDBInstanceHAResult.h"
#include "model/SwitchDBInstanceNetTypeRequest.h"
#include "model/SwitchDBInstanceNetTypeResult.h"
#include "model/SwitchDBInstanceVpcRequest.h"
#include "model/SwitchDBInstanceVpcResult.h"
#include "model/SwitchOverMajorVersionUpgradeRequest.h"
#include "model/SwitchOverMajorVersionUpgradeResult.h"
#include "model/SwitchReplicationLinkRequest.h"
#include "model/SwitchReplicationLinkResult.h"
#include "model/SyncRCKeyPairRequest.h"
#include "model/SyncRCKeyPairResult.h"
#include "model/SyncRCSecurityGroupRequest.h"
#include "model/SyncRCSecurityGroupResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TerminateMigrateTaskRequest.h"
#include "model/TerminateMigrateTaskResult.h"
#include "model/TransformDBInstancePayTypeRequest.h"
#include "model/TransformDBInstancePayTypeResult.h"
#include "model/UnassociateEipAddressWithRCInstanceRequest.h"
#include "model/UnassociateEipAddressWithRCInstanceResult.h"
#include "model/UnlockAccountRequest.h"
#include "model/UnlockAccountResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdatePostgresExtensionsRequest.h"
#include "model/UpdatePostgresExtensionsResult.h"
#include "model/UpdateUserBackupFileRequest.h"
#include "model/UpdateUserBackupFileResult.h"
#include "model/UpgradeDBInstanceEngineVersionRequest.h"
#include "model/UpgradeDBInstanceEngineVersionResult.h"
#include "model/UpgradeDBInstanceKernelVersionRequest.h"
#include "model/UpgradeDBInstanceKernelVersionResult.h"
#include "model/UpgradeDBInstanceMajorVersionRequest.h"
#include "model/UpgradeDBInstanceMajorVersionResult.h"
#include "model/UpgradeDBInstanceMajorVersionPrecheckRequest.h"
#include "model/UpgradeDBInstanceMajorVersionPrecheckResult.h"
#include "model/UpgradeDBProxyInstanceKernelVersionRequest.h"
#include "model/UpgradeDBProxyInstanceKernelVersionResult.h"


namespace AlibabaCloud
{
	namespace Rds
	{
		class ALIBABACLOUD_RDS_EXPORT RdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptRCInquiredSystemEventResult> AcceptRCInquiredSystemEventOutcome;
			typedef std::future<AcceptRCInquiredSystemEventOutcome> AcceptRCInquiredSystemEventOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AcceptRCInquiredSystemEventRequest&, const AcceptRCInquiredSystemEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptRCInquiredSystemEventAsyncHandler;
			typedef Outcome<Error, Model::ActivateMigrationTargetInstanceResult> ActivateMigrationTargetInstanceOutcome;
			typedef std::future<ActivateMigrationTargetInstanceOutcome> ActivateMigrationTargetInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ActivateMigrationTargetInstanceRequest&, const ActivateMigrationTargetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateMigrationTargetInstanceAsyncHandler;
			typedef Outcome<Error, Model::AddTagsToResourceResult> AddTagsToResourceOutcome;
			typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AddTagsToResourceRequest&, const AddTagsToResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsToResourceAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::AllocateReadWriteSplittingConnectionResult> AllocateReadWriteSplittingConnectionOutcome;
			typedef std::future<AllocateReadWriteSplittingConnectionOutcome> AllocateReadWriteSplittingConnectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AllocateReadWriteSplittingConnectionRequest&, const AllocateReadWriteSplittingConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateReadWriteSplittingConnectionAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressWithRCInstanceResult> AssociateEipAddressWithRCInstanceOutcome;
			typedef std::future<AssociateEipAddressWithRCInstanceOutcome> AssociateEipAddressWithRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AssociateEipAddressWithRCInstanceRequest&, const AssociateEipAddressWithRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressWithRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::AttachRCDiskResult> AttachRCDiskOutcome;
			typedef std::future<AttachRCDiskOutcome> AttachRCDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AttachRCDiskRequest&, const AttachRCDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachRCDiskAsyncHandler;
			typedef Outcome<Error, Model::AttachRCInstancesResult> AttachRCInstancesOutcome;
			typedef std::future<AttachRCInstancesOutcome> AttachRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AttachRCInstancesRequest&, const AttachRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::AttachWhitelistTemplateToInstanceResult> AttachWhitelistTemplateToInstanceOutcome;
			typedef std::future<AttachWhitelistTemplateToInstanceOutcome> AttachWhitelistTemplateToInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AttachWhitelistTemplateToInstanceRequest&, const AttachWhitelistTemplateToInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachWhitelistTemplateToInstanceAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeRCSecurityGroupPermissionResult> AuthorizeRCSecurityGroupPermissionOutcome;
			typedef std::future<AuthorizeRCSecurityGroupPermissionOutcome> AuthorizeRCSecurityGroupPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::AuthorizeRCSecurityGroupPermissionRequest&, const AuthorizeRCSecurityGroupPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeRCSecurityGroupPermissionAsyncHandler;
			typedef Outcome<Error, Model::CalculateDBInstanceWeightResult> CalculateDBInstanceWeightOutcome;
			typedef std::future<CalculateDBInstanceWeightOutcome> CalculateDBInstanceWeightOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CalculateDBInstanceWeightRequest&, const CalculateDBInstanceWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalculateDBInstanceWeightAsyncHandler;
			typedef Outcome<Error, Model::CancelActiveOperationTasksResult> CancelActiveOperationTasksOutcome;
			typedef std::future<CancelActiveOperationTasksOutcome> CancelActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CancelActiveOperationTasksRequest&, const CancelActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelActiveOperationTasksAsyncHandler;
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
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CloneDBInstanceResult> CloneDBInstanceOutcome;
			typedef std::future<CloneDBInstanceOutcome> CloneDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CloneDBInstanceRequest&, const CloneDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CloneParameterGroupResult> CloneParameterGroupOutcome;
			typedef std::future<CloneParameterGroupOutcome> CloneParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CloneParameterGroupRequest&, const CloneParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::ConfirmNotifyResult> ConfirmNotifyOutcome;
			typedef std::future<ConfirmNotifyOutcome> ConfirmNotifyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ConfirmNotifyRequest&, const ConfirmNotifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmNotifyAsyncHandler;
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
			typedef Outcome<Error, Model::CreateCloudMigrationPrecheckTaskResult> CreateCloudMigrationPrecheckTaskOutcome;
			typedef std::future<CreateCloudMigrationPrecheckTaskOutcome> CreateCloudMigrationPrecheckTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateCloudMigrationPrecheckTaskRequest&, const CreateCloudMigrationPrecheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudMigrationPrecheckTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudMigrationTaskResult> CreateCloudMigrationTaskOutcome;
			typedef std::future<CreateCloudMigrationTaskOutcome> CreateCloudMigrationTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateCloudMigrationTaskRequest&, const CreateCloudMigrationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudMigrationTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceEndpointResult> CreateDBInstanceEndpointOutcome;
			typedef std::future<CreateDBInstanceEndpointOutcome> CreateDBInstanceEndpointOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceEndpointRequest&, const CreateDBInstanceEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceEndpointAddressResult> CreateDBInstanceEndpointAddressOutcome;
			typedef std::future<CreateDBInstanceEndpointAddressOutcome> CreateDBInstanceEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceEndpointAddressRequest&, const CreateDBInstanceEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceForRebuildResult> CreateDBInstanceForRebuildOutcome;
			typedef std::future<CreateDBInstanceForRebuildOutcome> CreateDBInstanceForRebuildOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceForRebuildRequest&, const CreateDBInstanceForRebuildOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceForRebuildAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceSecurityGroupRuleResult> CreateDBInstanceSecurityGroupRuleOutcome;
			typedef std::future<CreateDBInstanceSecurityGroupRuleOutcome> CreateDBInstanceSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBInstanceSecurityGroupRuleRequest&, const CreateDBInstanceSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateDBNodesResult> CreateDBNodesOutcome;
			typedef std::future<CreateDBNodesOutcome> CreateDBNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateDBNodesRequest&, const CreateDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBNodesAsyncHandler;
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
			typedef Outcome<Error, Model::CreateGADInstanceResult> CreateGADInstanceOutcome;
			typedef std::future<CreateGADInstanceOutcome> CreateGADInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateGADInstanceRequest&, const CreateGADInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGADInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateGadInstanceMemberResult> CreateGadInstanceMemberOutcome;
			typedef std::future<CreateGadInstanceMemberOutcome> CreateGadInstanceMemberOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateGadInstanceMemberRequest&, const CreateGadInstanceMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGadInstanceMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateMaskingRulesResult> CreateMaskingRulesOutcome;
			typedef std::future<CreateMaskingRulesOutcome> CreateMaskingRulesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateMaskingRulesRequest&, const CreateMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrateTaskResult> CreateMigrateTaskOutcome;
			typedef std::future<CreateMigrateTaskOutcome> CreateMigrateTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateMigrateTaskRequest&, const CreateMigrateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateOnlineDatabaseTaskResult> CreateOnlineDatabaseTaskOutcome;
			typedef std::future<CreateOnlineDatabaseTaskOutcome> CreateOnlineDatabaseTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateOnlineDatabaseTaskRequest&, const CreateOnlineDatabaseTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnlineDatabaseTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderForDeleteDBNodesResult> CreateOrderForDeleteDBNodesOutcome;
			typedef std::future<CreateOrderForDeleteDBNodesOutcome> CreateOrderForDeleteDBNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateOrderForDeleteDBNodesRequest&, const CreateOrderForDeleteDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderForDeleteDBNodesAsyncHandler;
			typedef Outcome<Error, Model::CreateParameterGroupResult> CreateParameterGroupOutcome;
			typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateParameterGroupRequest&, const CreateParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatePostgresExtensionsResult> CreatePostgresExtensionsOutcome;
			typedef std::future<CreatePostgresExtensionsOutcome> CreatePostgresExtensionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreatePostgresExtensionsRequest&, const CreatePostgresExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostgresExtensionsAsyncHandler;
			typedef Outcome<Error, Model::CreateRCDeploymentSetResult> CreateRCDeploymentSetOutcome;
			typedef std::future<CreateRCDeploymentSetOutcome> CreateRCDeploymentSetOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateRCDeploymentSetRequest&, const CreateRCDeploymentSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRCDeploymentSetAsyncHandler;
			typedef Outcome<Error, Model::CreateRCDiskResult> CreateRCDiskOutcome;
			typedef std::future<CreateRCDiskOutcome> CreateRCDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateRCDiskRequest&, const CreateRCDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRCDiskAsyncHandler;
			typedef Outcome<Error, Model::CreateRCNodePoolResult> CreateRCNodePoolOutcome;
			typedef std::future<CreateRCNodePoolOutcome> CreateRCNodePoolOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateRCNodePoolRequest&, const CreateRCNodePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRCNodePoolAsyncHandler;
			typedef Outcome<Error, Model::CreateRCSnapshotResult> CreateRCSnapshotOutcome;
			typedef std::future<CreateRCSnapshotOutcome> CreateRCSnapshotOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateRCSnapshotRequest&, const CreateRCSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRCSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateReadOnlyDBInstanceResult> CreateReadOnlyDBInstanceOutcome;
			typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateReadOnlyDBInstanceRequest&, const CreateReadOnlyDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateReplicationLinkResult> CreateReplicationLinkOutcome;
			typedef std::future<CreateReplicationLinkOutcome> CreateReplicationLinkOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateReplicationLinkRequest&, const CreateReplicationLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationLinkAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretResult> CreateSecretOutcome;
			typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateSecretRequest&, const CreateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateTempDBInstanceResult> CreateTempDBInstanceOutcome;
			typedef std::future<CreateTempDBInstanceOutcome> CreateTempDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateTempDBInstanceRequest&, const CreateTempDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTempDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateYouhuiForOrderResult> CreateYouhuiForOrderOutcome;
			typedef std::future<CreateYouhuiForOrderOutcome> CreateYouhuiForOrderOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::CreateYouhuiForOrderRequest&, const CreateYouhuiForOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateYouhuiForOrderAsyncHandler;
			typedef Outcome<Error, Model::DeleteADSettingResult> DeleteADSettingOutcome;
			typedef std::future<DeleteADSettingOutcome> DeleteADSettingOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteADSettingRequest&, const DeleteADSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteADSettingAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteDBInstanceEndpointResult> DeleteDBInstanceEndpointOutcome;
			typedef std::future<DeleteDBInstanceEndpointOutcome> DeleteDBInstanceEndpointOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBInstanceEndpointRequest&, const DeleteDBInstanceEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceEndpointAddressResult> DeleteDBInstanceEndpointAddressOutcome;
			typedef std::future<DeleteDBInstanceEndpointAddressOutcome> DeleteDBInstanceEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBInstanceEndpointAddressRequest&, const DeleteDBInstanceEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceSecurityGroupRuleResult> DeleteDBInstanceSecurityGroupRuleOutcome;
			typedef std::future<DeleteDBInstanceSecurityGroupRuleOutcome> DeleteDBInstanceSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBInstanceSecurityGroupRuleRequest&, const DeleteDBInstanceSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBNodesResult> DeleteDBNodesOutcome;
			typedef std::future<DeleteDBNodesOutcome> DeleteDBNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBNodesRequest&, const DeleteDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBProxyEndpointAddressResult> DeleteDBProxyEndpointAddressOutcome;
			typedef std::future<DeleteDBProxyEndpointAddressOutcome> DeleteDBProxyEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDBProxyEndpointAddressRequest&, const DeleteDBProxyEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBProxyEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteGadInstanceResult> DeleteGadInstanceOutcome;
			typedef std::future<DeleteGadInstanceOutcome> DeleteGadInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteGadInstanceRequest&, const DeleteGadInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGadInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteMaskingRulesResult> DeleteMaskingRulesOutcome;
			typedef std::future<DeleteMaskingRulesOutcome> DeleteMaskingRulesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteMaskingRulesRequest&, const DeleteMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteParameterGroupResult> DeleteParameterGroupOutcome;
			typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteParameterGroupRequest&, const DeleteParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::DeletePostgresExtensionsResult> DeletePostgresExtensionsOutcome;
			typedef std::future<DeletePostgresExtensionsOutcome> DeletePostgresExtensionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeletePostgresExtensionsRequest&, const DeletePostgresExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePostgresExtensionsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCClusterNodesResult> DeleteRCClusterNodesOutcome;
			typedef std::future<DeleteRCClusterNodesOutcome> DeleteRCClusterNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCClusterNodesRequest&, const DeleteRCClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCDeploymentSetResult> DeleteRCDeploymentSetOutcome;
			typedef std::future<DeleteRCDeploymentSetOutcome> DeleteRCDeploymentSetOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCDeploymentSetRequest&, const DeleteRCDeploymentSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCDeploymentSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCDiskResult> DeleteRCDiskOutcome;
			typedef std::future<DeleteRCDiskOutcome> DeleteRCDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCDiskRequest&, const DeleteRCDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCDiskAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCInstanceResult> DeleteRCInstanceOutcome;
			typedef std::future<DeleteRCInstanceOutcome> DeleteRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCInstanceRequest&, const DeleteRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCInstancesResult> DeleteRCInstancesOutcome;
			typedef std::future<DeleteRCInstancesOutcome> DeleteRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCInstancesRequest&, const DeleteRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCNodePoolResult> DeleteRCNodePoolOutcome;
			typedef std::future<DeleteRCNodePoolOutcome> DeleteRCNodePoolOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCNodePoolRequest&, const DeleteRCNodePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCNodePoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteRCSnapshotResult> DeleteRCSnapshotOutcome;
			typedef std::future<DeleteRCSnapshotOutcome> DeleteRCSnapshotOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteRCSnapshotRequest&, const DeleteRCSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRCSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteReplicationLinkResult> DeleteReplicationLinkOutcome;
			typedef std::future<DeleteReplicationLinkOutcome> DeleteReplicationLinkOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteReplicationLinkRequest&, const DeleteReplicationLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReplicationLinkAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretResult> DeleteSecretOutcome;
			typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteSecretRequest&, const DeleteSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
			typedef Outcome<Error, Model::DeleteSlotResult> DeleteSlotOutcome;
			typedef std::future<DeleteSlotOutcome> DeleteSlotOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteSlotRequest&, const DeleteSlotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSlotAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserBackupFileResult> DeleteUserBackupFileOutcome;
			typedef std::future<DeleteUserBackupFileOutcome> DeleteUserBackupFileOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DeleteUserBackupFileRequest&, const DeleteUserBackupFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserBackupFileAsyncHandler;
			typedef Outcome<Error, Model::DescibeImportsFromDatabaseResult> DescibeImportsFromDatabaseOutcome;
			typedef std::future<DescibeImportsFromDatabaseOutcome> DescibeImportsFromDatabaseOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescibeImportsFromDatabaseRequest&, const DescibeImportsFromDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescibeImportsFromDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeADInfoResult> DescribeADInfoOutcome;
			typedef std::future<DescribeADInfoOutcome> DescribeADInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeADInfoRequest&, const DescribeADInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeADInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountMaskingPrivilegeResult> DescribeAccountMaskingPrivilegeOutcome;
			typedef std::future<DescribeAccountMaskingPrivilegeOutcome> DescribeAccountMaskingPrivilegeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAccountMaskingPrivilegeRequest&, const DescribeAccountMaskingPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountMaskingPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActionEventPolicyResult> DescribeActionEventPolicyOutcome;
			typedef std::future<DescribeActionEventPolicyOutcome> DescribeActionEventPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeActionEventPolicyRequest&, const DescribeActionEventPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionEventPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTasksResult> DescribeActiveOperationTasksOutcome;
			typedef std::future<DescribeActiveOperationTasksOutcome> DescribeActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeActiveOperationTasksRequest&, const DescribeActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllWhitelistTemplateResult> DescribeAllWhitelistTemplateOutcome;
			typedef std::future<DescribeAllWhitelistTemplateOutcome> DescribeAllWhitelistTemplateOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAllWhitelistTemplateRequest&, const DescribeAllWhitelistTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllWhitelistTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalyticdbByPrimaryDBInstanceResult> DescribeAnalyticdbByPrimaryDBInstanceOutcome;
			typedef std::future<DescribeAnalyticdbByPrimaryDBInstanceOutcome> DescribeAnalyticdbByPrimaryDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAnalyticdbByPrimaryDBInstanceRequest&, const DescribeAnalyticdbByPrimaryDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalyticdbByPrimaryDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableClassesResult> DescribeAvailableClassesOutcome;
			typedef std::future<DescribeAvailableClassesOutcome> DescribeAvailableClassesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableClassesRequest&, const DescribeAvailableClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClassesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableCrossRegionResult> DescribeAvailableCrossRegionOutcome;
			typedef std::future<DescribeAvailableCrossRegionOutcome> DescribeAvailableCrossRegionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableCrossRegionRequest&, const DescribeAvailableCrossRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCrossRegionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableMetricsResult> DescribeAvailableMetricsOutcome;
			typedef std::future<DescribeAvailableMetricsOutcome> DescribeAvailableMetricsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableMetricsRequest&, const DescribeAvailableMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableRecoveryTimeResult> DescribeAvailableRecoveryTimeOutcome;
			typedef std::future<DescribeAvailableRecoveryTimeOutcome> DescribeAvailableRecoveryTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeAvailableRecoveryTimeRequest&, const DescribeAvailableRecoveryTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableRecoveryTimeAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeClassDetailsResult> DescribeClassDetailsOutcome;
			typedef std::future<DescribeClassDetailsOutcome> DescribeClassDetailsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeClassDetailsRequest&, const DescribeClassDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudMigrationPrecheckResultResult> DescribeCloudMigrationPrecheckResultOutcome;
			typedef std::future<DescribeCloudMigrationPrecheckResultOutcome> DescribeCloudMigrationPrecheckResultOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCloudMigrationPrecheckResultRequest&, const DescribeCloudMigrationPrecheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMigrationPrecheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudMigrationResultResult> DescribeCloudMigrationResultOutcome;
			typedef std::future<DescribeCloudMigrationResultOutcome> DescribeCloudMigrationResultOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCloudMigrationResultRequest&, const DescribeCloudMigrationResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMigrationResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeCollationTimeZonesResult> DescribeCollationTimeZonesOutcome;
			typedef std::future<DescribeCollationTimeZonesOutcome> DescribeCollationTimeZonesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCollationTimeZonesRequest&, const DescribeCollationTimeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCollationTimeZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeComputeBurstConfigResult> DescribeComputeBurstConfigOutcome;
			typedef std::future<DescribeComputeBurstConfigOutcome> DescribeComputeBurstConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeComputeBurstConfigRequest&, const DescribeComputeBurstConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeBurstConfigAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeCurrentModifyOrderResult> DescribeCurrentModifyOrderOutcome;
			typedef std::future<DescribeCurrentModifyOrderOutcome> DescribeCurrentModifyOrderOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCurrentModifyOrderRequest&, const DescribeCurrentModifyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentModifyOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustinsResourceInfoResult> DescribeCustinsResourceInfoOutcome;
			typedef std::future<DescribeCustinsResourceInfoOutcome> DescribeCustinsResourceInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeCustinsResourceInfoRequest&, const DescribeCustinsResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustinsResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceByTagsResult> DescribeDBInstanceByTagsOutcome;
			typedef std::future<DescribeDBInstanceByTagsOutcome> DescribeDBInstanceByTagsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceByTagsRequest&, const DescribeDBInstanceByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceByTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceConnectivityResult> DescribeDBInstanceConnectivityOutcome;
			typedef std::future<DescribeDBInstanceConnectivityOutcome> DescribeDBInstanceConnectivityOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceConnectivityRequest&, const DescribeDBInstanceConnectivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConnectivityAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceDetailResult> DescribeDBInstanceDetailOutcome;
			typedef std::future<DescribeDBInstanceDetailOutcome> DescribeDBInstanceDetailOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceDetailRequest&, const DescribeDBInstanceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceEncryptionKeyResult> DescribeDBInstanceEncryptionKeyOutcome;
			typedef std::future<DescribeDBInstanceEncryptionKeyOutcome> DescribeDBInstanceEncryptionKeyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceEncryptionKeyRequest&, const DescribeDBInstanceEncryptionKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceEncryptionKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceEndpointsResult> DescribeDBInstanceEndpointsOutcome;
			typedef std::future<DescribeDBInstanceEndpointsOutcome> DescribeDBInstanceEndpointsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceEndpointsRequest&, const DescribeDBInstanceEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceHAConfigResult> DescribeDBInstanceHAConfigOutcome;
			typedef std::future<DescribeDBInstanceHAConfigOutcome> DescribeDBInstanceHAConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceHAConfigRequest&, const DescribeDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIPArrayListResult> DescribeDBInstanceIPArrayListOutcome;
			typedef std::future<DescribeDBInstanceIPArrayListOutcome> DescribeDBInstanceIPArrayListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceIPArrayListRequest&, const DescribeDBInstanceIPArrayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIPArrayListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIpHostnameResult> DescribeDBInstanceIpHostnameOutcome;
			typedef std::future<DescribeDBInstanceIpHostnameOutcome> DescribeDBInstanceIpHostnameOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceIpHostnameRequest&, const DescribeDBInstanceIpHostnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIpHostnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMetricsResult> DescribeDBInstanceMetricsOutcome;
			typedef std::future<DescribeDBInstanceMetricsOutcome> DescribeDBInstanceMetricsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceMetricsRequest&, const DescribeDBInstanceMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMonitorResult> DescribeDBInstanceMonitorOutcome;
			typedef std::future<DescribeDBInstanceMonitorOutcome> DescribeDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceMonitorRequest&, const DescribeDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoForChannelResult> DescribeDBInstanceNetInfoForChannelOutcome;
			typedef std::future<DescribeDBInstanceNetInfoForChannelOutcome> DescribeDBInstanceNetInfoForChannelOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceNetInfoForChannelRequest&, const DescribeDBInstanceNetInfoForChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoForChannelAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePromoteActivityResult> DescribeDBInstancePromoteActivityOutcome;
			typedef std::future<DescribeDBInstancePromoteActivityOutcome> DescribeDBInstancePromoteActivityOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstancePromoteActivityRequest&, const DescribeDBInstancePromoteActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePromoteActivityAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceProxyConfigurationResult> DescribeDBInstanceProxyConfigurationOutcome;
			typedef std::future<DescribeDBInstanceProxyConfigurationOutcome> DescribeDBInstanceProxyConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceProxyConfigurationRequest&, const DescribeDBInstanceProxyConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceProxyConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceReplicationResult> DescribeDBInstanceReplicationOutcome;
			typedef std::future<DescribeDBInstanceReplicationOutcome> DescribeDBInstanceReplicationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceReplicationRequest&, const DescribeDBInstanceReplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceReplicationAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSecurityGroupRuleResult> DescribeDBInstanceSecurityGroupRuleOutcome;
			typedef std::future<DescribeDBInstanceSecurityGroupRuleOutcome> DescribeDBInstanceSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBInstanceSecurityGroupRuleRequest&, const DescribeDBInstanceSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSecurityGroupRuleAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDBMiniEngineVersionsResult> DescribeDBMiniEngineVersionsOutcome;
			typedef std::future<DescribeDBMiniEngineVersionsOutcome> DescribeDBMiniEngineVersionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeDBMiniEngineVersionsRequest&, const DescribeDBMiniEngineVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBMiniEngineVersionsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeGadInstancesResult> DescribeGadInstancesOutcome;
			typedef std::future<DescribeGadInstancesOutcome> DescribeGadInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeGadInstancesRequest&, const DescribeGadInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGadInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeHADiagnoseConfigResult> DescribeHADiagnoseConfigOutcome;
			typedef std::future<DescribeHADiagnoseConfigOutcome> DescribeHADiagnoseConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHADiagnoseConfigRequest&, const DescribeHADiagnoseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHADiagnoseConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeHASwitchConfigResult> DescribeHASwitchConfigOutcome;
			typedef std::future<DescribeHASwitchConfigOutcome> DescribeHASwitchConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHASwitchConfigRequest&, const DescribeHASwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHASwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryEventsResult> DescribeHistoryEventsOutcome;
			typedef std::future<DescribeHistoryEventsOutcome> DescribeHistoryEventsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHistoryEventsRequest&, const DescribeHistoryEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryEventsStatResult> DescribeHistoryEventsStatOutcome;
			typedef std::future<DescribeHistoryEventsStatOutcome> DescribeHistoryEventsStatOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHistoryEventsStatRequest&, const DescribeHistoryEventsStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryEventsStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryTasksResult> DescribeHistoryTasksOutcome;
			typedef std::future<DescribeHistoryTasksOutcome> DescribeHistoryTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHistoryTasksRequest&, const DescribeHistoryTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryTasksStatResult> DescribeHistoryTasksStatOutcome;
			typedef std::future<DescribeHistoryTasksStatOutcome> DescribeHistoryTasksStatOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHistoryTasksStatRequest&, const DescribeHistoryTasksStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryTasksStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeHostGroupElasticStrategyParametersResult> DescribeHostGroupElasticStrategyParametersOutcome;
			typedef std::future<DescribeHostGroupElasticStrategyParametersOutcome> DescribeHostGroupElasticStrategyParametersOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHostGroupElasticStrategyParametersRequest&, const DescribeHostGroupElasticStrategyParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostGroupElasticStrategyParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeHostWebShellResult> DescribeHostWebShellOutcome;
			typedef std::future<DescribeHostWebShellOutcome> DescribeHostWebShellOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeHostWebShellRequest&, const DescribeHostWebShellOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostWebShellAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceCrossBackupPolicyResult> DescribeInstanceCrossBackupPolicyOutcome;
			typedef std::future<DescribeInstanceCrossBackupPolicyOutcome> DescribeInstanceCrossBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceCrossBackupPolicyRequest&, const DescribeInstanceCrossBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCrossBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceKeywordsResult> DescribeInstanceKeywordsOutcome;
			typedef std::future<DescribeInstanceKeywordsOutcome> DescribeInstanceKeywordsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceKeywordsRequest&, const DescribeInstanceKeywordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceKeywordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceLinkedWhitelistTemplateResult> DescribeInstanceLinkedWhitelistTemplateOutcome;
			typedef std::future<DescribeInstanceLinkedWhitelistTemplateOutcome> DescribeInstanceLinkedWhitelistTemplateOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeInstanceLinkedWhitelistTemplateRequest&, const DescribeInstanceLinkedWhitelistTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLinkedWhitelistTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeKmsAssociateResourcesResult> DescribeKmsAssociateResourcesOutcome;
			typedef std::future<DescribeKmsAssociateResourcesOutcome> DescribeKmsAssociateResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeKmsAssociateResourcesRequest&, const DescribeKmsAssociateResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKmsAssociateResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLocalAvailableRecoveryTimeResult> DescribeLocalAvailableRecoveryTimeOutcome;
			typedef std::future<DescribeLocalAvailableRecoveryTimeOutcome> DescribeLocalAvailableRecoveryTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeLocalAvailableRecoveryTimeRequest&, const DescribeLocalAvailableRecoveryTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalAvailableRecoveryTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogBackupFilesResult> DescribeLogBackupFilesOutcome;
			typedef std::future<DescribeLogBackupFilesOutcome> DescribeLogBackupFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeLogBackupFilesRequest&, const DescribeLogBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMarketingActivityResult> DescribeMarketingActivityOutcome;
			typedef std::future<DescribeMarketingActivityOutcome> DescribeMarketingActivityOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMarketingActivityRequest&, const DescribeMarketingActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMarketingActivityAsyncHandler;
			typedef Outcome<Error, Model::DescribeMaskingRulesResult> DescribeMaskingRulesOutcome;
			typedef std::future<DescribeMaskingRulesOutcome> DescribeMaskingRulesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMaskingRulesRequest&, const DescribeMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetaListResult> DescribeMetaListOutcome;
			typedef std::future<DescribeMetaListOutcome> DescribeMetaListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMetaListRequest&, const DescribeMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetaListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTaskByIdResult> DescribeMigrateTaskByIdOutcome;
			typedef std::future<DescribeMigrateTaskByIdOutcome> DescribeMigrateTaskByIdOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTaskByIdRequest&, const DescribeMigrateTaskByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTaskByIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrateTasksResult> DescribeMigrateTasksOutcome;
			typedef std::future<DescribeMigrateTasksOutcome> DescribeMigrateTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeMigrateTasksRequest&, const DescribeMigrateTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyPGHbaConfigLogResult> DescribeModifyPGHbaConfigLogOutcome;
			typedef std::future<DescribeModifyPGHbaConfigLogOutcome> DescribeModifyPGHbaConfigLogOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeModifyPGHbaConfigLogRequest&, const DescribeModifyPGHbaConfigLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyPGHbaConfigLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssDownloadsResult> DescribeOssDownloadsOutcome;
			typedef std::future<DescribeOssDownloadsOutcome> DescribeOssDownloadsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeOssDownloadsRequest&, const DescribeOssDownloadsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssDownloadsAsyncHandler;
			typedef Outcome<Error, Model::DescribePGHbaConfigResult> DescribePGHbaConfigOutcome;
			typedef std::future<DescribePGHbaConfigOutcome> DescribePGHbaConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribePGHbaConfigRequest&, const DescribePGHbaConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePGHbaConfigAsyncHandler;
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
			typedef Outcome<Error, Model::DescribePostgresExtensionsResult> DescribePostgresExtensionsOutcome;
			typedef std::future<DescribePostgresExtensionsOutcome> DescribePostgresExtensionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribePostgresExtensionsRequest&, const DescribePostgresExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostgresExtensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeQuickSaleConfigResult> DescribeQuickSaleConfigOutcome;
			typedef std::future<DescribeQuickSaleConfigOutcome> DescribeQuickSaleConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeQuickSaleConfigRequest&, const DescribeQuickSaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuickSaleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCCloudAssistantStatusResult> DescribeRCCloudAssistantStatusOutcome;
			typedef std::future<DescribeRCCloudAssistantStatusOutcome> DescribeRCCloudAssistantStatusOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCCloudAssistantStatusRequest&, const DescribeRCCloudAssistantStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCCloudAssistantStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCClusterConfigResult> DescribeRCClusterConfigOutcome;
			typedef std::future<DescribeRCClusterConfigOutcome> DescribeRCClusterConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCClusterConfigRequest&, const DescribeRCClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCClusterNodesResult> DescribeRCClusterNodesOutcome;
			typedef std::future<DescribeRCClusterNodesOutcome> DescribeRCClusterNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCClusterNodesRequest&, const DescribeRCClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCClustersResult> DescribeRCClustersOutcome;
			typedef std::future<DescribeRCClustersOutcome> DescribeRCClustersOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCClustersRequest&, const DescribeRCClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCDeploymentSetsResult> DescribeRCDeploymentSetsOutcome;
			typedef std::future<DescribeRCDeploymentSetsOutcome> DescribeRCDeploymentSetsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCDeploymentSetsRequest&, const DescribeRCDeploymentSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCDeploymentSetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCDisksResult> DescribeRCDisksOutcome;
			typedef std::future<DescribeRCDisksOutcome> DescribeRCDisksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCDisksRequest&, const DescribeRCDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCDisksAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCImageListResult> DescribeRCImageListOutcome;
			typedef std::future<DescribeRCImageListOutcome> DescribeRCImageListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCImageListRequest&, const DescribeRCImageListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCImageListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceAttributeResult> DescribeRCInstanceAttributeOutcome;
			typedef std::future<DescribeRCInstanceAttributeOutcome> DescribeRCInstanceAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceAttributeRequest&, const DescribeRCInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceDdosCountResult> DescribeRCInstanceDdosCountOutcome;
			typedef std::future<DescribeRCInstanceDdosCountOutcome> DescribeRCInstanceDdosCountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceDdosCountRequest&, const DescribeRCInstanceDdosCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceDdosCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceHistoryEventsResult> DescribeRCInstanceHistoryEventsOutcome;
			typedef std::future<DescribeRCInstanceHistoryEventsOutcome> DescribeRCInstanceHistoryEventsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceHistoryEventsRequest&, const DescribeRCInstanceHistoryEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceHistoryEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceIpAddressResult> DescribeRCInstanceIpAddressOutcome;
			typedef std::future<DescribeRCInstanceIpAddressOutcome> DescribeRCInstanceIpAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceIpAddressRequest&, const DescribeRCInstanceIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceIpAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceTypeFamiliesResult> DescribeRCInstanceTypeFamiliesOutcome;
			typedef std::future<DescribeRCInstanceTypeFamiliesOutcome> DescribeRCInstanceTypeFamiliesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceTypeFamiliesRequest&, const DescribeRCInstanceTypeFamiliesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceTypeFamiliesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceTypesResult> DescribeRCInstanceTypesOutcome;
			typedef std::future<DescribeRCInstanceTypesOutcome> DescribeRCInstanceTypesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceTypesRequest&, const DescribeRCInstanceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstanceVncUrlResult> DescribeRCInstanceVncUrlOutcome;
			typedef std::future<DescribeRCInstanceVncUrlOutcome> DescribeRCInstanceVncUrlOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstanceVncUrlRequest&, const DescribeRCInstanceVncUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstanceVncUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInstancesResult> DescribeRCInstancesOutcome;
			typedef std::future<DescribeRCInstancesOutcome> DescribeRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInstancesRequest&, const DescribeRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCInvocationResultsResult> DescribeRCInvocationResultsOutcome;
			typedef std::future<DescribeRCInvocationResultsOutcome> DescribeRCInvocationResultsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCInvocationResultsRequest&, const DescribeRCInvocationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCInvocationResultsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCMetricListResult> DescribeRCMetricListOutcome;
			typedef std::future<DescribeRCMetricListOutcome> DescribeRCMetricListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCMetricListRequest&, const DescribeRCMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCMetricListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCNodePoolResult> DescribeRCNodePoolOutcome;
			typedef std::future<DescribeRCNodePoolOutcome> DescribeRCNodePoolOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCNodePoolRequest&, const DescribeRCNodePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCNodePoolAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCSecurityGroupListResult> DescribeRCSecurityGroupListOutcome;
			typedef std::future<DescribeRCSecurityGroupListOutcome> DescribeRCSecurityGroupListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCSecurityGroupListRequest&, const DescribeRCSecurityGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCSecurityGroupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCSecurityGroupPermissionResult> DescribeRCSecurityGroupPermissionOutcome;
			typedef std::future<DescribeRCSecurityGroupPermissionOutcome> DescribeRCSecurityGroupPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCSecurityGroupPermissionRequest&, const DescribeRCSecurityGroupPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCSecurityGroupPermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCSnapshotsResult> DescribeRCSnapshotsOutcome;
			typedef std::future<DescribeRCSnapshotsOutcome> DescribeRCSnapshotsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCSnapshotsRequest&, const DescribeRCSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRCVClusterResult> DescribeRCVClusterOutcome;
			typedef std::future<DescribeRCVClusterOutcome> DescribeRCVClusterOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRCVClusterRequest&, const DescribeRCVClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRCVClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsResourceSettingsResult> DescribeRdsResourceSettingsOutcome;
			typedef std::future<DescribeRdsResourceSettingsOutcome> DescribeRdsResourceSettingsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRdsResourceSettingsRequest&, const DescribeRdsResourceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsResourceSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeReadDBInstanceDelayResult> DescribeReadDBInstanceDelayOutcome;
			typedef std::future<DescribeReadDBInstanceDelayOutcome> DescribeReadDBInstanceDelayOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeReadDBInstanceDelayRequest&, const DescribeReadDBInstanceDelayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadDBInstanceDelayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionInfosResult> DescribeRegionInfosOutcome;
			typedef std::future<DescribeRegionInfosOutcome> DescribeRegionInfosOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRegionInfosRequest&, const DescribeRegionInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewalPriceResult> DescribeRenewalPriceOutcome;
			typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeRenewalPriceRequest&, const DescribeRenewalPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicationLinkLogsResult> DescribeReplicationLinkLogsOutcome;
			typedef std::future<DescribeReplicationLinkLogsOutcome> DescribeReplicationLinkLogsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeReplicationLinkLogsRequest&, const DescribeReplicationLinkLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationLinkLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceDetailsResult> DescribeResourceDetailsOutcome;
			typedef std::future<DescribeResourceDetailsOutcome> DescribeResourceDetailsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeResourceDetailsRequest&, const DescribeResourceDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceDetailsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeSecretsResult> DescribeSecretsOutcome;
			typedef std::future<DescribeSecretsOutcome> DescribeSecretsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSecretsRequest&, const DescribeSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupConfigurationResult> DescribeSecurityGroupConfigurationOutcome;
			typedef std::future<DescribeSecurityGroupConfigurationOutcome> DescribeSecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSecurityGroupConfigurationRequest&, const DescribeSecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlotsResult> DescribeSlotsOutcome;
			typedef std::future<DescribeSlotsOutcome> DescribeSlotsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSlotsRequest&, const DescribeSlotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogsResult> DescribeSlowLogsOutcome;
			typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSlowLogsRequest&, const DescribeSlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSupportOnlineResizeDiskResult> DescribeSupportOnlineResizeDiskOutcome;
			typedef std::future<DescribeSupportOnlineResizeDiskOutcome> DescribeSupportOnlineResizeDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeSupportOnlineResizeDiskRequest&, const DescribeSupportOnlineResizeDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportOnlineResizeDiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpgradeMajorVersionPrecheckTaskResult> DescribeUpgradeMajorVersionPrecheckTaskOutcome;
			typedef std::future<DescribeUpgradeMajorVersionPrecheckTaskOutcome> DescribeUpgradeMajorVersionPrecheckTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeUpgradeMajorVersionPrecheckTaskRequest&, const DescribeUpgradeMajorVersionPrecheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeMajorVersionPrecheckTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpgradeMajorVersionTasksResult> DescribeUpgradeMajorVersionTasksOutcome;
			typedef std::future<DescribeUpgradeMajorVersionTasksOutcome> DescribeUpgradeMajorVersionTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeUpgradeMajorVersionTasksRequest&, const DescribeUpgradeMajorVersionTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeMajorVersionTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchListResult> DescribeVSwitchListOutcome;
			typedef std::future<DescribeVSwitchListOutcome> DescribeVSwitchListOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeVSwitchListRequest&, const DescribeVSwitchListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhitelistTemplateResult> DescribeWhitelistTemplateOutcome;
			typedef std::future<DescribeWhitelistTemplateOutcome> DescribeWhitelistTemplateOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeWhitelistTemplateRequest&, const DescribeWhitelistTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhitelistTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhitelistTemplateLinkedInstanceResult> DescribeWhitelistTemplateLinkedInstanceOutcome;
			typedef std::future<DescribeWhitelistTemplateLinkedInstanceOutcome> DescribeWhitelistTemplateLinkedInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DescribeWhitelistTemplateLinkedInstanceRequest&, const DescribeWhitelistTemplateLinkedInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhitelistTemplateLinkedInstanceAsyncHandler;
			typedef Outcome<Error, Model::DestroyDBInstanceResult> DestroyDBInstanceOutcome;
			typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DestroyDBInstanceRequest&, const DestroyDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DetachGadInstanceMemberResult> DetachGadInstanceMemberOutcome;
			typedef std::future<DetachGadInstanceMemberOutcome> DetachGadInstanceMemberOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DetachGadInstanceMemberRequest&, const DetachGadInstanceMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachGadInstanceMemberAsyncHandler;
			typedef Outcome<Error, Model::DetachRCDiskResult> DetachRCDiskOutcome;
			typedef std::future<DetachRCDiskOutcome> DetachRCDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DetachRCDiskRequest&, const DetachRCDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachRCDiskAsyncHandler;
			typedef Outcome<Error, Model::DetachWhitelistTemplateToInstanceResult> DetachWhitelistTemplateToInstanceOutcome;
			typedef std::future<DetachWhitelistTemplateToInstanceOutcome> DetachWhitelistTemplateToInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::DetachWhitelistTemplateToInstanceRequest&, const DetachWhitelistTemplateToInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachWhitelistTemplateToInstanceAsyncHandler;
			typedef Outcome<Error, Model::EvaluateLocalExtendDiskResult> EvaluateLocalExtendDiskOutcome;
			typedef std::future<EvaluateLocalExtendDiskOutcome> EvaluateLocalExtendDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::EvaluateLocalExtendDiskRequest&, const EvaluateLocalExtendDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateLocalExtendDiskAsyncHandler;
			typedef Outcome<Error, Model::GetDBInstanceTopologyResult> GetDBInstanceTopologyOutcome;
			typedef std::future<GetDBInstanceTopologyOutcome> GetDBInstanceTopologyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GetDBInstanceTopologyRequest&, const GetDBInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDBInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetDbProxyInstanceSslResult> GetDbProxyInstanceSslOutcome;
			typedef std::future<GetDbProxyInstanceSslOutcome> GetDbProxyInstanceSslOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GetDbProxyInstanceSslRequest&, const GetDbProxyInstanceSslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDbProxyInstanceSslAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::GrantOperatorPermissionResult> GrantOperatorPermissionOutcome;
			typedef std::future<GrantOperatorPermissionOutcome> GrantOperatorPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::GrantOperatorPermissionRequest&, const GrantOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::ImportUserBackupFileResult> ImportUserBackupFileOutcome;
			typedef std::future<ImportUserBackupFileOutcome> ImportUserBackupFileOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ImportUserBackupFileRequest&, const ImportUserBackupFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportUserBackupFileAsyncHandler;
			typedef Outcome<Error, Model::InstallRCCloudAssistantResult> InstallRCCloudAssistantOutcome;
			typedef std::future<InstallRCCloudAssistantOutcome> InstallRCCloudAssistantOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::InstallRCCloudAssistantRequest&, const InstallRCCloudAssistantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallRCCloudAssistantAsyncHandler;
			typedef Outcome<Error, Model::ListClassesResult> ListClassesOutcome;
			typedef std::future<ListClassesOutcome> ListClassesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ListClassesRequest&, const ListClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClassesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListUserBackupFilesResult> ListUserBackupFilesOutcome;
			typedef std::future<ListUserBackupFilesOutcome> ListUserBackupFilesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ListUserBackupFilesRequest&, const ListUserBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::LockAccountResult> LockAccountOutcome;
			typedef std::future<LockAccountOutcome> LockAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::LockAccountRequest&, const LockAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockAccountAsyncHandler;
			typedef Outcome<Error, Model::MigrateConnectionToOtherZoneResult> MigrateConnectionToOtherZoneOutcome;
			typedef std::future<MigrateConnectionToOtherZoneOutcome> MigrateConnectionToOtherZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateConnectionToOtherZoneRequest&, const MigrateConnectionToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateConnectionToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::MigrateDBInstanceResult> MigrateDBInstanceOutcome;
			typedef std::future<MigrateDBInstanceOutcome> MigrateDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateDBInstanceRequest&, const MigrateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::MigrateDBNodesResult> MigrateDBNodesOutcome;
			typedef std::future<MigrateDBNodesOutcome> MigrateDBNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateDBNodesRequest&, const MigrateDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDBNodesAsyncHandler;
			typedef Outcome<Error, Model::MigrateSecurityIPModeResult> MigrateSecurityIPModeOutcome;
			typedef std::future<MigrateSecurityIPModeOutcome> MigrateSecurityIPModeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateSecurityIPModeRequest&, const MigrateSecurityIPModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateSecurityIPModeAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyADInfoResult> ModifyADInfoOutcome;
			typedef std::future<ModifyADInfoOutcome> ModifyADInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyADInfoRequest&, const ModifyADInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyADInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountCheckPolicyResult> ModifyAccountCheckPolicyOutcome;
			typedef std::future<ModifyAccountCheckPolicyOutcome> ModifyAccountCheckPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountCheckPolicyRequest&, const ModifyAccountCheckPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountCheckPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountMaskingPrivilegeResult> ModifyAccountMaskingPrivilegeOutcome;
			typedef std::future<ModifyAccountMaskingPrivilegeOutcome> ModifyAccountMaskingPrivilegeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountMaskingPrivilegeRequest&, const ModifyAccountMaskingPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountMaskingPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountSecurityPolicyResult> ModifyAccountSecurityPolicyOutcome;
			typedef std::future<ModifyAccountSecurityPolicyOutcome> ModifyAccountSecurityPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyAccountSecurityPolicyRequest&, const ModifyAccountSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyActionEventPolicyResult> ModifyActionEventPolicyOutcome;
			typedef std::future<ModifyActionEventPolicyOutcome> ModifyActionEventPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyActionEventPolicyRequest&, const ModifyActionEventPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActionEventPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationTasksResult> ModifyActiveOperationTasksOutcome;
			typedef std::future<ModifyActiveOperationTasksOutcome> ModifyActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyActiveOperationTasksRequest&, const ModifyActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupSetExpireTimeResult> ModifyBackupSetExpireTimeOutcome;
			typedef std::future<ModifyBackupSetExpireTimeOutcome> ModifyBackupSetExpireTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyBackupSetExpireTimeRequest&, const ModifyBackupSetExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupSetExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCollationTimeZoneResult> ModifyCollationTimeZoneOutcome;
			typedef std::future<ModifyCollationTimeZoneOutcome> ModifyCollationTimeZoneOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyCollationTimeZoneRequest&, const ModifyCollationTimeZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCollationTimeZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyComputeBurstConfigResult> ModifyComputeBurstConfigOutcome;
			typedef std::future<ModifyComputeBurstConfigOutcome> ModifyComputeBurstConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyComputeBurstConfigRequest&, const ModifyComputeBurstConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyComputeBurstConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustinsResourceResult> ModifyCustinsResourceOutcome;
			typedef std::future<ModifyCustinsResourceOutcome> ModifyCustinsResourceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyCustinsResourceRequest&, const ModifyCustinsResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustinsResourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionResult> ModifyDBDescriptionOutcome;
			typedef std::future<ModifyDBDescriptionOutcome> ModifyDBDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBDescriptionRequest&, const ModifyDBDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceAutoUpgradeMinorVersionResult> ModifyDBInstanceAutoUpgradeMinorVersionOutcome;
			typedef std::future<ModifyDBInstanceAutoUpgradeMinorVersionOutcome> ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest&, const ModifyDBInstanceAutoUpgradeMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConfigResult> ModifyDBInstanceConfigOutcome;
			typedef std::future<ModifyDBInstanceConfigOutcome> ModifyDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConfigRequest&, const ModifyDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDelayedReplicationTimeResult> ModifyDBInstanceDelayedReplicationTimeOutcome;
			typedef std::future<ModifyDBInstanceDelayedReplicationTimeOutcome> ModifyDBInstanceDelayedReplicationTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceDelayedReplicationTimeRequest&, const ModifyDBInstanceDelayedReplicationTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDelayedReplicationTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDeletionProtectionResult> ModifyDBInstanceDeletionProtectionOutcome;
			typedef std::future<ModifyDBInstanceDeletionProtectionOutcome> ModifyDBInstanceDeletionProtectionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceDeletionProtectionRequest&, const ModifyDBInstanceDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceEndpointResult> ModifyDBInstanceEndpointOutcome;
			typedef std::future<ModifyDBInstanceEndpointOutcome> ModifyDBInstanceEndpointOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceEndpointRequest&, const ModifyDBInstanceEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceEndpointAddressResult> ModifyDBInstanceEndpointAddressOutcome;
			typedef std::future<ModifyDBInstanceEndpointAddressOutcome> ModifyDBInstanceEndpointAddressOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceEndpointAddressRequest&, const ModifyDBInstanceEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceHAConfigResult> ModifyDBInstanceHAConfigOutcome;
			typedef std::future<ModifyDBInstanceHAConfigOutcome> ModifyDBInstanceHAConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceHAConfigRequest&, const ModifyDBInstanceHAConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceHAConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMetricsResult> ModifyDBInstanceMetricsOutcome;
			typedef std::future<ModifyDBInstanceMetricsOutcome> ModifyDBInstanceMetricsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceMetricsRequest&, const ModifyDBInstanceMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMetricsAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyDBInstanceReplicationSwitchResult> ModifyDBInstanceReplicationSwitchOutcome;
			typedef std::future<ModifyDBInstanceReplicationSwitchOutcome> ModifyDBInstanceReplicationSwitchOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceReplicationSwitchRequest&, const ModifyDBInstanceReplicationSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceReplicationSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSSLResult> ModifyDBInstanceSSLOutcome;
			typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSSLRequest&, const ModifyDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSecurityGroupRuleResult> ModifyDBInstanceSecurityGroupRuleOutcome;
			typedef std::future<ModifyDBInstanceSecurityGroupRuleOutcome> ModifyDBInstanceSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSecurityGroupRuleRequest&, const ModifyDBInstanceSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSpecResult> ModifyDBInstanceSpecOutcome;
			typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceSpecRequest&, const ModifyDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceTDEResult> ModifyDBInstanceTDEOutcome;
			typedef std::future<ModifyDBInstanceTDEOutcome> ModifyDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBInstanceTDERequest&, const ModifyDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeResult> ModifyDBNodeOutcome;
			typedef std::future<ModifyDBNodeOutcome> ModifyDBNodeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDBNodeRequest&, const ModifyDBNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyDatabaseConfigResult> ModifyDatabaseConfigOutcome;
			typedef std::future<ModifyDatabaseConfigOutcome> ModifyDatabaseConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDatabaseConfigRequest&, const ModifyDatabaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDbProxyInstanceSslResult> ModifyDbProxyInstanceSslOutcome;
			typedef std::future<ModifyDbProxyInstanceSslOutcome> ModifyDbProxyInstanceSslOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyDbProxyInstanceSslRequest&, const ModifyDbProxyInstanceSslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDbProxyInstanceSslAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventInfoResult> ModifyEventInfoOutcome;
			typedef std::future<ModifyEventInfoOutcome> ModifyEventInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyEventInfoRequest&, const ModifyEventInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyHADiagnoseConfigResult> ModifyHADiagnoseConfigOutcome;
			typedef std::future<ModifyHADiagnoseConfigOutcome> ModifyHADiagnoseConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyHADiagnoseConfigRequest&, const ModifyHADiagnoseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHADiagnoseConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyHASwitchConfigResult> ModifyHASwitchConfigOutcome;
			typedef std::future<ModifyHASwitchConfigOutcome> ModifyHASwitchConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyHASwitchConfigRequest&, const ModifyHASwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHASwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceCrossBackupPolicyResult> ModifyInstanceCrossBackupPolicyOutcome;
			typedef std::future<ModifyInstanceCrossBackupPolicyOutcome> ModifyInstanceCrossBackupPolicyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyInstanceCrossBackupPolicyRequest&, const ModifyInstanceCrossBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceCrossBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyMaskingRulesResult> ModifyMaskingRulesOutcome;
			typedef std::future<ModifyMaskingRulesOutcome> ModifyMaskingRulesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyMaskingRulesRequest&, const ModifyMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyPGHbaConfigResult> ModifyPGHbaConfigOutcome;
			typedef std::future<ModifyPGHbaConfigOutcome> ModifyPGHbaConfigOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyPGHbaConfigRequest&, const ModifyPGHbaConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPGHbaConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterGroupResult> ModifyParameterGroupOutcome;
			typedef std::future<ModifyParameterGroupOutcome> ModifyParameterGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyParameterGroupRequest&, const ModifyParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCDiskSpecResult> ModifyRCDiskSpecOutcome;
			typedef std::future<ModifyRCDiskSpecOutcome> ModifyRCDiskSpecOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCDiskSpecRequest&, const ModifyRCDiskSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCDiskSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceResult> ModifyRCInstanceOutcome;
			typedef std::future<ModifyRCInstanceOutcome> ModifyRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceRequest&, const ModifyRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceAttributeResult> ModifyRCInstanceAttributeOutcome;
			typedef std::future<ModifyRCInstanceAttributeOutcome> ModifyRCInstanceAttributeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceAttributeRequest&, const ModifyRCInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceChargeTypeResult> ModifyRCInstanceChargeTypeOutcome;
			typedef std::future<ModifyRCInstanceChargeTypeOutcome> ModifyRCInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceChargeTypeRequest&, const ModifyRCInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceDescriptionResult> ModifyRCInstanceDescriptionOutcome;
			typedef std::future<ModifyRCInstanceDescriptionOutcome> ModifyRCInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceDescriptionRequest&, const ModifyRCInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceKeyPairResult> ModifyRCInstanceKeyPairOutcome;
			typedef std::future<ModifyRCInstanceKeyPairOutcome> ModifyRCInstanceKeyPairOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceKeyPairRequest&, const ModifyRCInstanceKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceKeyPairAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCInstanceNetworkSpecResult> ModifyRCInstanceNetworkSpecOutcome;
			typedef std::future<ModifyRCInstanceNetworkSpecOutcome> ModifyRCInstanceNetworkSpecOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCInstanceNetworkSpecRequest&, const ModifyRCInstanceNetworkSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCInstanceNetworkSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyRCSecurityGroupPermissionResult> ModifyRCSecurityGroupPermissionOutcome;
			typedef std::future<ModifyRCSecurityGroupPermissionOutcome> ModifyRCSecurityGroupPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyRCSecurityGroupPermissionRequest&, const ModifyRCSecurityGroupPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRCSecurityGroupPermissionAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyTaskInfoResult> ModifyTaskInfoOutcome;
			typedef std::future<ModifyTaskInfoOutcome> ModifyTaskInfoOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyTaskInfoRequest&, const ModifyTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyWhitelistTemplateResult> ModifyWhitelistTemplateOutcome;
			typedef std::future<ModifyWhitelistTemplateOutcome> ModifyWhitelistTemplateOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ModifyWhitelistTemplateRequest&, const ModifyWhitelistTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhitelistTemplateAsyncHandler;
			typedef Outcome<Error, Model::PreCheckCreateOrderForDeleteDBNodesResult> PreCheckCreateOrderForDeleteDBNodesOutcome;
			typedef std::future<PreCheckCreateOrderForDeleteDBNodesOutcome> PreCheckCreateOrderForDeleteDBNodesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::PreCheckCreateOrderForDeleteDBNodesRequest&, const PreCheckCreateOrderForDeleteDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreCheckCreateOrderForDeleteDBNodesAsyncHandler;
			typedef Outcome<Error, Model::PurgeDBInstanceLogResult> PurgeDBInstanceLogOutcome;
			typedef std::future<PurgeDBInstanceLogOutcome> PurgeDBInstanceLogOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::PurgeDBInstanceLogRequest&, const PurgeDBInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurgeDBInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::QueryNotifyResult> QueryNotifyOutcome;
			typedef std::future<QueryNotifyOutcome> QueryNotifyOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::QueryNotifyRequest&, const QueryNotifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryNotifyAsyncHandler;
			typedef Outcome<Error, Model::QueryRecommendByCodeResult> QueryRecommendByCodeOutcome;
			typedef std::future<QueryRecommendByCodeOutcome> QueryRecommendByCodeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::QueryRecommendByCodeRequest&, const QueryRecommendByCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecommendByCodeAsyncHandler;
			typedef Outcome<Error, Model::RebootRCInstanceResult> RebootRCInstanceOutcome;
			typedef std::future<RebootRCInstanceOutcome> RebootRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RebootRCInstanceRequest&, const RebootRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebootRCInstancesResult> RebootRCInstancesOutcome;
			typedef std::future<RebootRCInstancesOutcome> RebootRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RebootRCInstancesRequest&, const RebootRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::RebuildDBInstanceResult> RebuildDBInstanceOutcome;
			typedef std::future<RebuildDBInstanceOutcome> RebuildDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RebuildDBInstanceRequest&, const RebuildDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebuildReplicationLinkResult> RebuildReplicationLinkOutcome;
			typedef std::future<RebuildReplicationLinkOutcome> RebuildReplicationLinkOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RebuildReplicationLinkRequest&, const RebuildReplicationLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildReplicationLinkAsyncHandler;
			typedef Outcome<Error, Model::ReceiveDBInstanceResult> ReceiveDBInstanceOutcome;
			typedef std::future<ReceiveDBInstanceOutcome> ReceiveDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ReceiveDBInstanceRequest&, const ReceiveDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReceiveDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RecoveryDBInstanceResult> RecoveryDBInstanceOutcome;
			typedef std::future<RecoveryDBInstanceOutcome> RecoveryDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RecoveryDBInstanceRequest&, const RecoveryDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoveryDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RedeployRCInstanceResult> RedeployRCInstanceOutcome;
			typedef std::future<RedeployRCInstanceOutcome> RedeployRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RedeployRCInstanceRequest&, const RedeployRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RedeployRCInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::RenewRCInstanceResult> RenewRCInstanceOutcome;
			typedef std::future<RenewRCInstanceOutcome> RenewRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RenewRCInstanceRequest&, const RenewRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReplaceRCInstanceSystemDiskResult> ReplaceRCInstanceSystemDiskOutcome;
			typedef std::future<ReplaceRCInstanceSystemDiskOutcome> ReplaceRCInstanceSystemDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ReplaceRCInstanceSystemDiskRequest&, const ReplaceRCInstanceSystemDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRCInstanceSystemDiskAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ResizeRCInstanceDiskResult> ResizeRCInstanceDiskOutcome;
			typedef std::future<ResizeRCInstanceDiskOutcome> ResizeRCInstanceDiskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::ResizeRCInstanceDiskRequest&, const ResizeRCInstanceDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeRCInstanceDiskAsyncHandler;
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
			typedef Outcome<Error, Model::RevokeRCSecurityGroupPermissionResult> RevokeRCSecurityGroupPermissionOutcome;
			typedef std::future<RevokeRCSecurityGroupPermissionOutcome> RevokeRCSecurityGroupPermissionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RevokeRCSecurityGroupPermissionRequest&, const RevokeRCSecurityGroupPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeRCSecurityGroupPermissionAsyncHandler;
			typedef Outcome<Error, Model::RunRCCommandResult> RunRCCommandOutcome;
			typedef std::future<RunRCCommandOutcome> RunRCCommandOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RunRCCommandRequest&, const RunRCCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunRCCommandAsyncHandler;
			typedef Outcome<Error, Model::RunRCInstancesResult> RunRCInstancesOutcome;
			typedef std::future<RunRCInstancesOutcome> RunRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::RunRCInstancesRequest&, const RunRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::StartDBInstanceResult> StartDBInstanceOutcome;
			typedef std::future<StartDBInstanceOutcome> StartDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StartDBInstanceRequest&, const StartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartRCInstanceResult> StartRCInstanceOutcome;
			typedef std::future<StartRCInstanceOutcome> StartRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StartRCInstanceRequest&, const StartRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartRCInstancesResult> StartRCInstancesOutcome;
			typedef std::future<StartRCInstancesOutcome> StartRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StartRCInstancesRequest&, const StartRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::StopDBInstanceResult> StopDBInstanceOutcome;
			typedef std::future<StopDBInstanceOutcome> StopDBInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StopDBInstanceRequest&, const StopDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopRCInstanceResult> StopRCInstanceOutcome;
			typedef std::future<StopRCInstanceOutcome> StopRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StopRCInstanceRequest&, const StopRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopRCInstancesResult> StopRCInstancesOutcome;
			typedef std::future<StopRCInstancesOutcome> StopRCInstancesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::StopRCInstancesRequest&, const StopRCInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRCInstancesAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceHAResult> SwitchDBInstanceHAOutcome;
			typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceHARequest&, const SwitchDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceNetTypeResult> SwitchDBInstanceNetTypeOutcome;
			typedef std::future<SwitchDBInstanceNetTypeOutcome> SwitchDBInstanceNetTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceNetTypeRequest&, const SwitchDBInstanceNetTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceNetTypeAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceVpcResult> SwitchDBInstanceVpcOutcome;
			typedef std::future<SwitchDBInstanceVpcOutcome> SwitchDBInstanceVpcOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchDBInstanceVpcRequest&, const SwitchDBInstanceVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceVpcAsyncHandler;
			typedef Outcome<Error, Model::SwitchOverMajorVersionUpgradeResult> SwitchOverMajorVersionUpgradeOutcome;
			typedef std::future<SwitchOverMajorVersionUpgradeOutcome> SwitchOverMajorVersionUpgradeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchOverMajorVersionUpgradeRequest&, const SwitchOverMajorVersionUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchOverMajorVersionUpgradeAsyncHandler;
			typedef Outcome<Error, Model::SwitchReplicationLinkResult> SwitchReplicationLinkOutcome;
			typedef std::future<SwitchReplicationLinkOutcome> SwitchReplicationLinkOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SwitchReplicationLinkRequest&, const SwitchReplicationLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchReplicationLinkAsyncHandler;
			typedef Outcome<Error, Model::SyncRCKeyPairResult> SyncRCKeyPairOutcome;
			typedef std::future<SyncRCKeyPairOutcome> SyncRCKeyPairOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SyncRCKeyPairRequest&, const SyncRCKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncRCKeyPairAsyncHandler;
			typedef Outcome<Error, Model::SyncRCSecurityGroupResult> SyncRCSecurityGroupOutcome;
			typedef std::future<SyncRCSecurityGroupOutcome> SyncRCSecurityGroupOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::SyncRCSecurityGroupRequest&, const SyncRCSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncRCSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TerminateMigrateTaskResult> TerminateMigrateTaskOutcome;
			typedef std::future<TerminateMigrateTaskOutcome> TerminateMigrateTaskOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TerminateMigrateTaskRequest&, const TerminateMigrateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateMigrateTaskAsyncHandler;
			typedef Outcome<Error, Model::TransformDBInstancePayTypeResult> TransformDBInstancePayTypeOutcome;
			typedef std::future<TransformDBInstancePayTypeOutcome> TransformDBInstancePayTypeOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::TransformDBInstancePayTypeRequest&, const TransformDBInstancePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformDBInstancePayTypeAsyncHandler;
			typedef Outcome<Error, Model::UnassociateEipAddressWithRCInstanceResult> UnassociateEipAddressWithRCInstanceOutcome;
			typedef std::future<UnassociateEipAddressWithRCInstanceOutcome> UnassociateEipAddressWithRCInstanceOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UnassociateEipAddressWithRCInstanceRequest&, const UnassociateEipAddressWithRCInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateEipAddressWithRCInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnlockAccountResult> UnlockAccountOutcome;
			typedef std::future<UnlockAccountOutcome> UnlockAccountOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UnlockAccountRequest&, const UnlockAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockAccountAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdatePostgresExtensionsResult> UpdatePostgresExtensionsOutcome;
			typedef std::future<UpdatePostgresExtensionsOutcome> UpdatePostgresExtensionsOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpdatePostgresExtensionsRequest&, const UpdatePostgresExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePostgresExtensionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserBackupFileResult> UpdateUserBackupFileOutcome;
			typedef std::future<UpdateUserBackupFileOutcome> UpdateUserBackupFileOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpdateUserBackupFileRequest&, const UpdateUserBackupFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserBackupFileAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResult> UpgradeDBInstanceEngineVersionOutcome;
			typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, const UpgradeDBInstanceEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceKernelVersionResult> UpgradeDBInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, const UpgradeDBInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceMajorVersionResult> UpgradeDBInstanceMajorVersionOutcome;
			typedef std::future<UpgradeDBInstanceMajorVersionOutcome> UpgradeDBInstanceMajorVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceMajorVersionRequest&, const UpgradeDBInstanceMajorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceMajorVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceMajorVersionPrecheckResult> UpgradeDBInstanceMajorVersionPrecheckOutcome;
			typedef std::future<UpgradeDBInstanceMajorVersionPrecheckOutcome> UpgradeDBInstanceMajorVersionPrecheckOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBInstanceMajorVersionPrecheckRequest&, const UpgradeDBInstanceMajorVersionPrecheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceMajorVersionPrecheckAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBProxyInstanceKernelVersionResult> UpgradeDBProxyInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBProxyInstanceKernelVersionOutcome> UpgradeDBProxyInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const RdsClient*, const Model::UpgradeDBProxyInstanceKernelVersionRequest&, const UpgradeDBProxyInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBProxyInstanceKernelVersionAsyncHandler;

			RdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RdsClient();
			AcceptRCInquiredSystemEventOutcome acceptRCInquiredSystemEvent(const Model::AcceptRCInquiredSystemEventRequest &request)const;
			void acceptRCInquiredSystemEventAsync(const Model::AcceptRCInquiredSystemEventRequest& request, const AcceptRCInquiredSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptRCInquiredSystemEventOutcomeCallable acceptRCInquiredSystemEventCallable(const Model::AcceptRCInquiredSystemEventRequest& request) const;
			ActivateMigrationTargetInstanceOutcome activateMigrationTargetInstance(const Model::ActivateMigrationTargetInstanceRequest &request)const;
			void activateMigrationTargetInstanceAsync(const Model::ActivateMigrationTargetInstanceRequest& request, const ActivateMigrationTargetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateMigrationTargetInstanceOutcomeCallable activateMigrationTargetInstanceCallable(const Model::ActivateMigrationTargetInstanceRequest& request) const;
			AddTagsToResourceOutcome addTagsToResource(const Model::AddTagsToResourceRequest &request)const;
			void addTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsToResourceOutcomeCallable addTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			AllocateReadWriteSplittingConnectionOutcome allocateReadWriteSplittingConnection(const Model::AllocateReadWriteSplittingConnectionRequest &request)const;
			void allocateReadWriteSplittingConnectionAsync(const Model::AllocateReadWriteSplittingConnectionRequest& request, const AllocateReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateReadWriteSplittingConnectionOutcomeCallable allocateReadWriteSplittingConnectionCallable(const Model::AllocateReadWriteSplittingConnectionRequest& request) const;
			AssociateEipAddressWithRCInstanceOutcome associateEipAddressWithRCInstance(const Model::AssociateEipAddressWithRCInstanceRequest &request)const;
			void associateEipAddressWithRCInstanceAsync(const Model::AssociateEipAddressWithRCInstanceRequest& request, const AssociateEipAddressWithRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEipAddressWithRCInstanceOutcomeCallable associateEipAddressWithRCInstanceCallable(const Model::AssociateEipAddressWithRCInstanceRequest& request) const;
			AttachRCDiskOutcome attachRCDisk(const Model::AttachRCDiskRequest &request)const;
			void attachRCDiskAsync(const Model::AttachRCDiskRequest& request, const AttachRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachRCDiskOutcomeCallable attachRCDiskCallable(const Model::AttachRCDiskRequest& request) const;
			AttachRCInstancesOutcome attachRCInstances(const Model::AttachRCInstancesRequest &request)const;
			void attachRCInstancesAsync(const Model::AttachRCInstancesRequest& request, const AttachRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachRCInstancesOutcomeCallable attachRCInstancesCallable(const Model::AttachRCInstancesRequest& request) const;
			AttachWhitelistTemplateToInstanceOutcome attachWhitelistTemplateToInstance(const Model::AttachWhitelistTemplateToInstanceRequest &request)const;
			void attachWhitelistTemplateToInstanceAsync(const Model::AttachWhitelistTemplateToInstanceRequest& request, const AttachWhitelistTemplateToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachWhitelistTemplateToInstanceOutcomeCallable attachWhitelistTemplateToInstanceCallable(const Model::AttachWhitelistTemplateToInstanceRequest& request) const;
			AuthorizeRCSecurityGroupPermissionOutcome authorizeRCSecurityGroupPermission(const Model::AuthorizeRCSecurityGroupPermissionRequest &request)const;
			void authorizeRCSecurityGroupPermissionAsync(const Model::AuthorizeRCSecurityGroupPermissionRequest& request, const AuthorizeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeRCSecurityGroupPermissionOutcomeCallable authorizeRCSecurityGroupPermissionCallable(const Model::AuthorizeRCSecurityGroupPermissionRequest& request) const;
			CalculateDBInstanceWeightOutcome calculateDBInstanceWeight(const Model::CalculateDBInstanceWeightRequest &request)const;
			void calculateDBInstanceWeightAsync(const Model::CalculateDBInstanceWeightRequest& request, const CalculateDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CalculateDBInstanceWeightOutcomeCallable calculateDBInstanceWeightCallable(const Model::CalculateDBInstanceWeightRequest& request) const;
			CancelActiveOperationTasksOutcome cancelActiveOperationTasks(const Model::CancelActiveOperationTasksRequest &request)const;
			void cancelActiveOperationTasksAsync(const Model::CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelActiveOperationTasksOutcomeCallable cancelActiveOperationTasksCallable(const Model::CancelActiveOperationTasksRequest& request) const;
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
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CloneDBInstanceOutcome cloneDBInstance(const Model::CloneDBInstanceRequest &request)const;
			void cloneDBInstanceAsync(const Model::CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneDBInstanceOutcomeCallable cloneDBInstanceCallable(const Model::CloneDBInstanceRequest& request) const;
			CloneParameterGroupOutcome cloneParameterGroup(const Model::CloneParameterGroupRequest &request)const;
			void cloneParameterGroupAsync(const Model::CloneParameterGroupRequest& request, const CloneParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneParameterGroupOutcomeCallable cloneParameterGroupCallable(const Model::CloneParameterGroupRequest& request) const;
			ConfirmNotifyOutcome confirmNotify(const Model::ConfirmNotifyRequest &request)const;
			void confirmNotifyAsync(const Model::ConfirmNotifyRequest& request, const ConfirmNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmNotifyOutcomeCallable confirmNotifyCallable(const Model::ConfirmNotifyRequest& request) const;
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
			CreateCloudMigrationPrecheckTaskOutcome createCloudMigrationPrecheckTask(const Model::CreateCloudMigrationPrecheckTaskRequest &request)const;
			void createCloudMigrationPrecheckTaskAsync(const Model::CreateCloudMigrationPrecheckTaskRequest& request, const CreateCloudMigrationPrecheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudMigrationPrecheckTaskOutcomeCallable createCloudMigrationPrecheckTaskCallable(const Model::CreateCloudMigrationPrecheckTaskRequest& request) const;
			CreateCloudMigrationTaskOutcome createCloudMigrationTask(const Model::CreateCloudMigrationTaskRequest &request)const;
			void createCloudMigrationTaskAsync(const Model::CreateCloudMigrationTaskRequest& request, const CreateCloudMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudMigrationTaskOutcomeCallable createCloudMigrationTaskCallable(const Model::CreateCloudMigrationTaskRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateDBInstanceEndpointOutcome createDBInstanceEndpoint(const Model::CreateDBInstanceEndpointRequest &request)const;
			void createDBInstanceEndpointAsync(const Model::CreateDBInstanceEndpointRequest& request, const CreateDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceEndpointOutcomeCallable createDBInstanceEndpointCallable(const Model::CreateDBInstanceEndpointRequest& request) const;
			CreateDBInstanceEndpointAddressOutcome createDBInstanceEndpointAddress(const Model::CreateDBInstanceEndpointAddressRequest &request)const;
			void createDBInstanceEndpointAddressAsync(const Model::CreateDBInstanceEndpointAddressRequest& request, const CreateDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceEndpointAddressOutcomeCallable createDBInstanceEndpointAddressCallable(const Model::CreateDBInstanceEndpointAddressRequest& request) const;
			CreateDBInstanceForRebuildOutcome createDBInstanceForRebuild(const Model::CreateDBInstanceForRebuildRequest &request)const;
			void createDBInstanceForRebuildAsync(const Model::CreateDBInstanceForRebuildRequest& request, const CreateDBInstanceForRebuildAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceForRebuildOutcomeCallable createDBInstanceForRebuildCallable(const Model::CreateDBInstanceForRebuildRequest& request) const;
			CreateDBInstanceSecurityGroupRuleOutcome createDBInstanceSecurityGroupRule(const Model::CreateDBInstanceSecurityGroupRuleRequest &request)const;
			void createDBInstanceSecurityGroupRuleAsync(const Model::CreateDBInstanceSecurityGroupRuleRequest& request, const CreateDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceSecurityGroupRuleOutcomeCallable createDBInstanceSecurityGroupRuleCallable(const Model::CreateDBInstanceSecurityGroupRuleRequest& request) const;
			CreateDBNodesOutcome createDBNodes(const Model::CreateDBNodesRequest &request)const;
			void createDBNodesAsync(const Model::CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBNodesOutcomeCallable createDBNodesCallable(const Model::CreateDBNodesRequest& request) const;
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
			CreateGADInstanceOutcome createGADInstance(const Model::CreateGADInstanceRequest &request)const;
			void createGADInstanceAsync(const Model::CreateGADInstanceRequest& request, const CreateGADInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGADInstanceOutcomeCallable createGADInstanceCallable(const Model::CreateGADInstanceRequest& request) const;
			CreateGadInstanceMemberOutcome createGadInstanceMember(const Model::CreateGadInstanceMemberRequest &request)const;
			void createGadInstanceMemberAsync(const Model::CreateGadInstanceMemberRequest& request, const CreateGadInstanceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGadInstanceMemberOutcomeCallable createGadInstanceMemberCallable(const Model::CreateGadInstanceMemberRequest& request) const;
			CreateMaskingRulesOutcome createMaskingRules(const Model::CreateMaskingRulesRequest &request)const;
			void createMaskingRulesAsync(const Model::CreateMaskingRulesRequest& request, const CreateMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMaskingRulesOutcomeCallable createMaskingRulesCallable(const Model::CreateMaskingRulesRequest& request) const;
			CreateMigrateTaskOutcome createMigrateTask(const Model::CreateMigrateTaskRequest &request)const;
			void createMigrateTaskAsync(const Model::CreateMigrateTaskRequest& request, const CreateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrateTaskOutcomeCallable createMigrateTaskCallable(const Model::CreateMigrateTaskRequest& request) const;
			CreateOnlineDatabaseTaskOutcome createOnlineDatabaseTask(const Model::CreateOnlineDatabaseTaskRequest &request)const;
			void createOnlineDatabaseTaskAsync(const Model::CreateOnlineDatabaseTaskRequest& request, const CreateOnlineDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOnlineDatabaseTaskOutcomeCallable createOnlineDatabaseTaskCallable(const Model::CreateOnlineDatabaseTaskRequest& request) const;
			CreateOrderForDeleteDBNodesOutcome createOrderForDeleteDBNodes(const Model::CreateOrderForDeleteDBNodesRequest &request)const;
			void createOrderForDeleteDBNodesAsync(const Model::CreateOrderForDeleteDBNodesRequest& request, const CreateOrderForDeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderForDeleteDBNodesOutcomeCallable createOrderForDeleteDBNodesCallable(const Model::CreateOrderForDeleteDBNodesRequest& request) const;
			CreateParameterGroupOutcome createParameterGroup(const Model::CreateParameterGroupRequest &request)const;
			void createParameterGroupAsync(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParameterGroupOutcomeCallable createParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;
			CreatePostgresExtensionsOutcome createPostgresExtensions(const Model::CreatePostgresExtensionsRequest &request)const;
			void createPostgresExtensionsAsync(const Model::CreatePostgresExtensionsRequest& request, const CreatePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePostgresExtensionsOutcomeCallable createPostgresExtensionsCallable(const Model::CreatePostgresExtensionsRequest& request) const;
			CreateRCDeploymentSetOutcome createRCDeploymentSet(const Model::CreateRCDeploymentSetRequest &request)const;
			void createRCDeploymentSetAsync(const Model::CreateRCDeploymentSetRequest& request, const CreateRCDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRCDeploymentSetOutcomeCallable createRCDeploymentSetCallable(const Model::CreateRCDeploymentSetRequest& request) const;
			CreateRCDiskOutcome createRCDisk(const Model::CreateRCDiskRequest &request)const;
			void createRCDiskAsync(const Model::CreateRCDiskRequest& request, const CreateRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRCDiskOutcomeCallable createRCDiskCallable(const Model::CreateRCDiskRequest& request) const;
			CreateRCNodePoolOutcome createRCNodePool(const Model::CreateRCNodePoolRequest &request)const;
			void createRCNodePoolAsync(const Model::CreateRCNodePoolRequest& request, const CreateRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRCNodePoolOutcomeCallable createRCNodePoolCallable(const Model::CreateRCNodePoolRequest& request) const;
			CreateRCSnapshotOutcome createRCSnapshot(const Model::CreateRCSnapshotRequest &request)const;
			void createRCSnapshotAsync(const Model::CreateRCSnapshotRequest& request, const CreateRCSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRCSnapshotOutcomeCallable createRCSnapshotCallable(const Model::CreateRCSnapshotRequest& request) const;
			CreateReadOnlyDBInstanceOutcome createReadOnlyDBInstance(const Model::CreateReadOnlyDBInstanceRequest &request)const;
			void createReadOnlyDBInstanceAsync(const Model::CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReadOnlyDBInstanceOutcomeCallable createReadOnlyDBInstanceCallable(const Model::CreateReadOnlyDBInstanceRequest& request) const;
			CreateReplicationLinkOutcome createReplicationLink(const Model::CreateReplicationLinkRequest &request)const;
			void createReplicationLinkAsync(const Model::CreateReplicationLinkRequest& request, const CreateReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReplicationLinkOutcomeCallable createReplicationLinkCallable(const Model::CreateReplicationLinkRequest& request) const;
			CreateSecretOutcome createSecret(const Model::CreateSecretRequest &request)const;
			void createSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretOutcomeCallable createSecretCallable(const Model::CreateSecretRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateTempDBInstanceOutcome createTempDBInstance(const Model::CreateTempDBInstanceRequest &request)const;
			void createTempDBInstanceAsync(const Model::CreateTempDBInstanceRequest& request, const CreateTempDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTempDBInstanceOutcomeCallable createTempDBInstanceCallable(const Model::CreateTempDBInstanceRequest& request) const;
			CreateYouhuiForOrderOutcome createYouhuiForOrder(const Model::CreateYouhuiForOrderRequest &request)const;
			void createYouhuiForOrderAsync(const Model::CreateYouhuiForOrderRequest& request, const CreateYouhuiForOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateYouhuiForOrderOutcomeCallable createYouhuiForOrderCallable(const Model::CreateYouhuiForOrderRequest& request) const;
			DeleteADSettingOutcome deleteADSetting(const Model::DeleteADSettingRequest &request)const;
			void deleteADSettingAsync(const Model::DeleteADSettingRequest& request, const DeleteADSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteADSettingOutcomeCallable deleteADSettingCallable(const Model::DeleteADSettingRequest& request) const;
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
			DeleteDBInstanceEndpointOutcome deleteDBInstanceEndpoint(const Model::DeleteDBInstanceEndpointRequest &request)const;
			void deleteDBInstanceEndpointAsync(const Model::DeleteDBInstanceEndpointRequest& request, const DeleteDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceEndpointOutcomeCallable deleteDBInstanceEndpointCallable(const Model::DeleteDBInstanceEndpointRequest& request) const;
			DeleteDBInstanceEndpointAddressOutcome deleteDBInstanceEndpointAddress(const Model::DeleteDBInstanceEndpointAddressRequest &request)const;
			void deleteDBInstanceEndpointAddressAsync(const Model::DeleteDBInstanceEndpointAddressRequest& request, const DeleteDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceEndpointAddressOutcomeCallable deleteDBInstanceEndpointAddressCallable(const Model::DeleteDBInstanceEndpointAddressRequest& request) const;
			DeleteDBInstanceSecurityGroupRuleOutcome deleteDBInstanceSecurityGroupRule(const Model::DeleteDBInstanceSecurityGroupRuleRequest &request)const;
			void deleteDBInstanceSecurityGroupRuleAsync(const Model::DeleteDBInstanceSecurityGroupRuleRequest& request, const DeleteDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceSecurityGroupRuleOutcomeCallable deleteDBInstanceSecurityGroupRuleCallable(const Model::DeleteDBInstanceSecurityGroupRuleRequest& request) const;
			DeleteDBNodesOutcome deleteDBNodes(const Model::DeleteDBNodesRequest &request)const;
			void deleteDBNodesAsync(const Model::DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBNodesOutcomeCallable deleteDBNodesCallable(const Model::DeleteDBNodesRequest& request) const;
			DeleteDBProxyEndpointAddressOutcome deleteDBProxyEndpointAddress(const Model::DeleteDBProxyEndpointAddressRequest &request)const;
			void deleteDBProxyEndpointAddressAsync(const Model::DeleteDBProxyEndpointAddressRequest& request, const DeleteDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBProxyEndpointAddressOutcomeCallable deleteDBProxyEndpointAddressCallable(const Model::DeleteDBProxyEndpointAddressRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteGadInstanceOutcome deleteGadInstance(const Model::DeleteGadInstanceRequest &request)const;
			void deleteGadInstanceAsync(const Model::DeleteGadInstanceRequest& request, const DeleteGadInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGadInstanceOutcomeCallable deleteGadInstanceCallable(const Model::DeleteGadInstanceRequest& request) const;
			DeleteMaskingRulesOutcome deleteMaskingRules(const Model::DeleteMaskingRulesRequest &request)const;
			void deleteMaskingRulesAsync(const Model::DeleteMaskingRulesRequest& request, const DeleteMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMaskingRulesOutcomeCallable deleteMaskingRulesCallable(const Model::DeleteMaskingRulesRequest& request) const;
			DeleteParameterGroupOutcome deleteParameterGroup(const Model::DeleteParameterGroupRequest &request)const;
			void deleteParameterGroupAsync(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParameterGroupOutcomeCallable deleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;
			DeletePostgresExtensionsOutcome deletePostgresExtensions(const Model::DeletePostgresExtensionsRequest &request)const;
			void deletePostgresExtensionsAsync(const Model::DeletePostgresExtensionsRequest& request, const DeletePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePostgresExtensionsOutcomeCallable deletePostgresExtensionsCallable(const Model::DeletePostgresExtensionsRequest& request) const;
			DeleteRCClusterNodesOutcome deleteRCClusterNodes(const Model::DeleteRCClusterNodesRequest &request)const;
			void deleteRCClusterNodesAsync(const Model::DeleteRCClusterNodesRequest& request, const DeleteRCClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCClusterNodesOutcomeCallable deleteRCClusterNodesCallable(const Model::DeleteRCClusterNodesRequest& request) const;
			DeleteRCDeploymentSetOutcome deleteRCDeploymentSet(const Model::DeleteRCDeploymentSetRequest &request)const;
			void deleteRCDeploymentSetAsync(const Model::DeleteRCDeploymentSetRequest& request, const DeleteRCDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCDeploymentSetOutcomeCallable deleteRCDeploymentSetCallable(const Model::DeleteRCDeploymentSetRequest& request) const;
			DeleteRCDiskOutcome deleteRCDisk(const Model::DeleteRCDiskRequest &request)const;
			void deleteRCDiskAsync(const Model::DeleteRCDiskRequest& request, const DeleteRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCDiskOutcomeCallable deleteRCDiskCallable(const Model::DeleteRCDiskRequest& request) const;
			DeleteRCInstanceOutcome deleteRCInstance(const Model::DeleteRCInstanceRequest &request)const;
			void deleteRCInstanceAsync(const Model::DeleteRCInstanceRequest& request, const DeleteRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCInstanceOutcomeCallable deleteRCInstanceCallable(const Model::DeleteRCInstanceRequest& request) const;
			DeleteRCInstancesOutcome deleteRCInstances(const Model::DeleteRCInstancesRequest &request)const;
			void deleteRCInstancesAsync(const Model::DeleteRCInstancesRequest& request, const DeleteRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCInstancesOutcomeCallable deleteRCInstancesCallable(const Model::DeleteRCInstancesRequest& request) const;
			DeleteRCNodePoolOutcome deleteRCNodePool(const Model::DeleteRCNodePoolRequest &request)const;
			void deleteRCNodePoolAsync(const Model::DeleteRCNodePoolRequest& request, const DeleteRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCNodePoolOutcomeCallable deleteRCNodePoolCallable(const Model::DeleteRCNodePoolRequest& request) const;
			DeleteRCSnapshotOutcome deleteRCSnapshot(const Model::DeleteRCSnapshotRequest &request)const;
			void deleteRCSnapshotAsync(const Model::DeleteRCSnapshotRequest& request, const DeleteRCSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRCSnapshotOutcomeCallable deleteRCSnapshotCallable(const Model::DeleteRCSnapshotRequest& request) const;
			DeleteReplicationLinkOutcome deleteReplicationLink(const Model::DeleteReplicationLinkRequest &request)const;
			void deleteReplicationLinkAsync(const Model::DeleteReplicationLinkRequest& request, const DeleteReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteReplicationLinkOutcomeCallable deleteReplicationLinkCallable(const Model::DeleteReplicationLinkRequest& request) const;
			DeleteSecretOutcome deleteSecret(const Model::DeleteSecretRequest &request)const;
			void deleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretOutcomeCallable deleteSecretCallable(const Model::DeleteSecretRequest& request) const;
			DeleteSlotOutcome deleteSlot(const Model::DeleteSlotRequest &request)const;
			void deleteSlotAsync(const Model::DeleteSlotRequest& request, const DeleteSlotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSlotOutcomeCallable deleteSlotCallable(const Model::DeleteSlotRequest& request) const;
			DeleteUserBackupFileOutcome deleteUserBackupFile(const Model::DeleteUserBackupFileRequest &request)const;
			void deleteUserBackupFileAsync(const Model::DeleteUserBackupFileRequest& request, const DeleteUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserBackupFileOutcomeCallable deleteUserBackupFileCallable(const Model::DeleteUserBackupFileRequest& request) const;
			DescibeImportsFromDatabaseOutcome descibeImportsFromDatabase(const Model::DescibeImportsFromDatabaseRequest &request)const;
			void descibeImportsFromDatabaseAsync(const Model::DescibeImportsFromDatabaseRequest& request, const DescibeImportsFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescibeImportsFromDatabaseOutcomeCallable descibeImportsFromDatabaseCallable(const Model::DescibeImportsFromDatabaseRequest& request) const;
			DescribeADInfoOutcome describeADInfo(const Model::DescribeADInfoRequest &request)const;
			void describeADInfoAsync(const Model::DescribeADInfoRequest& request, const DescribeADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeADInfoOutcomeCallable describeADInfoCallable(const Model::DescribeADInfoRequest& request) const;
			DescribeAccountMaskingPrivilegeOutcome describeAccountMaskingPrivilege(const Model::DescribeAccountMaskingPrivilegeRequest &request)const;
			void describeAccountMaskingPrivilegeAsync(const Model::DescribeAccountMaskingPrivilegeRequest& request, const DescribeAccountMaskingPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountMaskingPrivilegeOutcomeCallable describeAccountMaskingPrivilegeCallable(const Model::DescribeAccountMaskingPrivilegeRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeActionEventPolicyOutcome describeActionEventPolicy(const Model::DescribeActionEventPolicyRequest &request)const;
			void describeActionEventPolicyAsync(const Model::DescribeActionEventPolicyRequest& request, const DescribeActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActionEventPolicyOutcomeCallable describeActionEventPolicyCallable(const Model::DescribeActionEventPolicyRequest& request) const;
			DescribeActiveOperationTasksOutcome describeActiveOperationTasks(const Model::DescribeActiveOperationTasksRequest &request)const;
			void describeActiveOperationTasksAsync(const Model::DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTasksOutcomeCallable describeActiveOperationTasksCallable(const Model::DescribeActiveOperationTasksRequest& request) const;
			DescribeAllWhitelistTemplateOutcome describeAllWhitelistTemplate(const Model::DescribeAllWhitelistTemplateRequest &request)const;
			void describeAllWhitelistTemplateAsync(const Model::DescribeAllWhitelistTemplateRequest& request, const DescribeAllWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllWhitelistTemplateOutcomeCallable describeAllWhitelistTemplateCallable(const Model::DescribeAllWhitelistTemplateRequest& request) const;
			DescribeAnalyticdbByPrimaryDBInstanceOutcome describeAnalyticdbByPrimaryDBInstance(const Model::DescribeAnalyticdbByPrimaryDBInstanceRequest &request)const;
			void describeAnalyticdbByPrimaryDBInstanceAsync(const Model::DescribeAnalyticdbByPrimaryDBInstanceRequest& request, const DescribeAnalyticdbByPrimaryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalyticdbByPrimaryDBInstanceOutcomeCallable describeAnalyticdbByPrimaryDBInstanceCallable(const Model::DescribeAnalyticdbByPrimaryDBInstanceRequest& request) const;
			DescribeAvailableClassesOutcome describeAvailableClasses(const Model::DescribeAvailableClassesRequest &request)const;
			void describeAvailableClassesAsync(const Model::DescribeAvailableClassesRequest& request, const DescribeAvailableClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableClassesOutcomeCallable describeAvailableClassesCallable(const Model::DescribeAvailableClassesRequest& request) const;
			DescribeAvailableCrossRegionOutcome describeAvailableCrossRegion(const Model::DescribeAvailableCrossRegionRequest &request)const;
			void describeAvailableCrossRegionAsync(const Model::DescribeAvailableCrossRegionRequest& request, const DescribeAvailableCrossRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableCrossRegionOutcomeCallable describeAvailableCrossRegionCallable(const Model::DescribeAvailableCrossRegionRequest& request) const;
			DescribeAvailableMetricsOutcome describeAvailableMetrics(const Model::DescribeAvailableMetricsRequest &request)const;
			void describeAvailableMetricsAsync(const Model::DescribeAvailableMetricsRequest& request, const DescribeAvailableMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableMetricsOutcomeCallable describeAvailableMetricsCallable(const Model::DescribeAvailableMetricsRequest& request) const;
			DescribeAvailableRecoveryTimeOutcome describeAvailableRecoveryTime(const Model::DescribeAvailableRecoveryTimeRequest &request)const;
			void describeAvailableRecoveryTimeAsync(const Model::DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableRecoveryTimeOutcomeCallable describeAvailableRecoveryTimeCallable(const Model::DescribeAvailableRecoveryTimeRequest& request) const;
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
			DescribeClassDetailsOutcome describeClassDetails(const Model::DescribeClassDetailsRequest &request)const;
			void describeClassDetailsAsync(const Model::DescribeClassDetailsRequest& request, const DescribeClassDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClassDetailsOutcomeCallable describeClassDetailsCallable(const Model::DescribeClassDetailsRequest& request) const;
			DescribeCloudMigrationPrecheckResultOutcome describeCloudMigrationPrecheckResult(const Model::DescribeCloudMigrationPrecheckResultRequest &request)const;
			void describeCloudMigrationPrecheckResultAsync(const Model::DescribeCloudMigrationPrecheckResultRequest& request, const DescribeCloudMigrationPrecheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudMigrationPrecheckResultOutcomeCallable describeCloudMigrationPrecheckResultCallable(const Model::DescribeCloudMigrationPrecheckResultRequest& request) const;
			DescribeCloudMigrationResultOutcome describeCloudMigrationResult(const Model::DescribeCloudMigrationResultRequest &request)const;
			void describeCloudMigrationResultAsync(const Model::DescribeCloudMigrationResultRequest& request, const DescribeCloudMigrationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudMigrationResultOutcomeCallable describeCloudMigrationResultCallable(const Model::DescribeCloudMigrationResultRequest& request) const;
			DescribeCollationTimeZonesOutcome describeCollationTimeZones(const Model::DescribeCollationTimeZonesRequest &request)const;
			void describeCollationTimeZonesAsync(const Model::DescribeCollationTimeZonesRequest& request, const DescribeCollationTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCollationTimeZonesOutcomeCallable describeCollationTimeZonesCallable(const Model::DescribeCollationTimeZonesRequest& request) const;
			DescribeComputeBurstConfigOutcome describeComputeBurstConfig(const Model::DescribeComputeBurstConfigRequest &request)const;
			void describeComputeBurstConfigAsync(const Model::DescribeComputeBurstConfigRequest& request, const DescribeComputeBurstConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComputeBurstConfigOutcomeCallable describeComputeBurstConfigCallable(const Model::DescribeComputeBurstConfigRequest& request) const;
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
			DescribeCurrentModifyOrderOutcome describeCurrentModifyOrder(const Model::DescribeCurrentModifyOrderRequest &request)const;
			void describeCurrentModifyOrderAsync(const Model::DescribeCurrentModifyOrderRequest& request, const DescribeCurrentModifyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCurrentModifyOrderOutcomeCallable describeCurrentModifyOrderCallable(const Model::DescribeCurrentModifyOrderRequest& request) const;
			DescribeCustinsResourceInfoOutcome describeCustinsResourceInfo(const Model::DescribeCustinsResourceInfoRequest &request)const;
			void describeCustinsResourceInfoAsync(const Model::DescribeCustinsResourceInfoRequest& request, const DescribeCustinsResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustinsResourceInfoOutcomeCallable describeCustinsResourceInfoCallable(const Model::DescribeCustinsResourceInfoRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceByTagsOutcome describeDBInstanceByTags(const Model::DescribeDBInstanceByTagsRequest &request)const;
			void describeDBInstanceByTagsAsync(const Model::DescribeDBInstanceByTagsRequest& request, const DescribeDBInstanceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceByTagsOutcomeCallable describeDBInstanceByTagsCallable(const Model::DescribeDBInstanceByTagsRequest& request) const;
			DescribeDBInstanceConnectivityOutcome describeDBInstanceConnectivity(const Model::DescribeDBInstanceConnectivityRequest &request)const;
			void describeDBInstanceConnectivityAsync(const Model::DescribeDBInstanceConnectivityRequest& request, const DescribeDBInstanceConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceConnectivityOutcomeCallable describeDBInstanceConnectivityCallable(const Model::DescribeDBInstanceConnectivityRequest& request) const;
			DescribeDBInstanceDetailOutcome describeDBInstanceDetail(const Model::DescribeDBInstanceDetailRequest &request)const;
			void describeDBInstanceDetailAsync(const Model::DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceDetailOutcomeCallable describeDBInstanceDetailCallable(const Model::DescribeDBInstanceDetailRequest& request) const;
			DescribeDBInstanceEncryptionKeyOutcome describeDBInstanceEncryptionKey(const Model::DescribeDBInstanceEncryptionKeyRequest &request)const;
			void describeDBInstanceEncryptionKeyAsync(const Model::DescribeDBInstanceEncryptionKeyRequest& request, const DescribeDBInstanceEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceEncryptionKeyOutcomeCallable describeDBInstanceEncryptionKeyCallable(const Model::DescribeDBInstanceEncryptionKeyRequest& request) const;
			DescribeDBInstanceEndpointsOutcome describeDBInstanceEndpoints(const Model::DescribeDBInstanceEndpointsRequest &request)const;
			void describeDBInstanceEndpointsAsync(const Model::DescribeDBInstanceEndpointsRequest& request, const DescribeDBInstanceEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceEndpointsOutcomeCallable describeDBInstanceEndpointsCallable(const Model::DescribeDBInstanceEndpointsRequest& request) const;
			DescribeDBInstanceHAConfigOutcome describeDBInstanceHAConfig(const Model::DescribeDBInstanceHAConfigRequest &request)const;
			void describeDBInstanceHAConfigAsync(const Model::DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceHAConfigOutcomeCallable describeDBInstanceHAConfigCallable(const Model::DescribeDBInstanceHAConfigRequest& request) const;
			DescribeDBInstanceIPArrayListOutcome describeDBInstanceIPArrayList(const Model::DescribeDBInstanceIPArrayListRequest &request)const;
			void describeDBInstanceIPArrayListAsync(const Model::DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIPArrayListOutcomeCallable describeDBInstanceIPArrayListCallable(const Model::DescribeDBInstanceIPArrayListRequest& request) const;
			DescribeDBInstanceIpHostnameOutcome describeDBInstanceIpHostname(const Model::DescribeDBInstanceIpHostnameRequest &request)const;
			void describeDBInstanceIpHostnameAsync(const Model::DescribeDBInstanceIpHostnameRequest& request, const DescribeDBInstanceIpHostnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIpHostnameOutcomeCallable describeDBInstanceIpHostnameCallable(const Model::DescribeDBInstanceIpHostnameRequest& request) const;
			DescribeDBInstanceMetricsOutcome describeDBInstanceMetrics(const Model::DescribeDBInstanceMetricsRequest &request)const;
			void describeDBInstanceMetricsAsync(const Model::DescribeDBInstanceMetricsRequest& request, const DescribeDBInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceMetricsOutcomeCallable describeDBInstanceMetricsCallable(const Model::DescribeDBInstanceMetricsRequest& request) const;
			DescribeDBInstanceMonitorOutcome describeDBInstanceMonitor(const Model::DescribeDBInstanceMonitorRequest &request)const;
			void describeDBInstanceMonitorAsync(const Model::DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceMonitorOutcomeCallable describeDBInstanceMonitorCallable(const Model::DescribeDBInstanceMonitorRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDBInstanceNetInfoForChannelOutcome describeDBInstanceNetInfoForChannel(const Model::DescribeDBInstanceNetInfoForChannelRequest &request)const;
			void describeDBInstanceNetInfoForChannelAsync(const Model::DescribeDBInstanceNetInfoForChannelRequest& request, const DescribeDBInstanceNetInfoForChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoForChannelOutcomeCallable describeDBInstanceNetInfoForChannelCallable(const Model::DescribeDBInstanceNetInfoForChannelRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBInstancePromoteActivityOutcome describeDBInstancePromoteActivity(const Model::DescribeDBInstancePromoteActivityRequest &request)const;
			void describeDBInstancePromoteActivityAsync(const Model::DescribeDBInstancePromoteActivityRequest& request, const DescribeDBInstancePromoteActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePromoteActivityOutcomeCallable describeDBInstancePromoteActivityCallable(const Model::DescribeDBInstancePromoteActivityRequest& request) const;
			DescribeDBInstanceProxyConfigurationOutcome describeDBInstanceProxyConfiguration(const Model::DescribeDBInstanceProxyConfigurationRequest &request)const;
			void describeDBInstanceProxyConfigurationAsync(const Model::DescribeDBInstanceProxyConfigurationRequest& request, const DescribeDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceProxyConfigurationOutcomeCallable describeDBInstanceProxyConfigurationCallable(const Model::DescribeDBInstanceProxyConfigurationRequest& request) const;
			DescribeDBInstanceReplicationOutcome describeDBInstanceReplication(const Model::DescribeDBInstanceReplicationRequest &request)const;
			void describeDBInstanceReplicationAsync(const Model::DescribeDBInstanceReplicationRequest& request, const DescribeDBInstanceReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceReplicationOutcomeCallable describeDBInstanceReplicationCallable(const Model::DescribeDBInstanceReplicationRequest& request) const;
			DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
			void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
			DescribeDBInstanceSecurityGroupRuleOutcome describeDBInstanceSecurityGroupRule(const Model::DescribeDBInstanceSecurityGroupRuleRequest &request)const;
			void describeDBInstanceSecurityGroupRuleAsync(const Model::DescribeDBInstanceSecurityGroupRuleRequest& request, const DescribeDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSecurityGroupRuleOutcomeCallable describeDBInstanceSecurityGroupRuleCallable(const Model::DescribeDBInstanceSecurityGroupRuleRequest& request) const;
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
			DescribeDBMiniEngineVersionsOutcome describeDBMiniEngineVersions(const Model::DescribeDBMiniEngineVersionsRequest &request)const;
			void describeDBMiniEngineVersionsAsync(const Model::DescribeDBMiniEngineVersionsRequest& request, const DescribeDBMiniEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBMiniEngineVersionsOutcomeCallable describeDBMiniEngineVersionsCallable(const Model::DescribeDBMiniEngineVersionsRequest& request) const;
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
			DescribeGadInstancesOutcome describeGadInstances(const Model::DescribeGadInstancesRequest &request)const;
			void describeGadInstancesAsync(const Model::DescribeGadInstancesRequest& request, const DescribeGadInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGadInstancesOutcomeCallable describeGadInstancesCallable(const Model::DescribeGadInstancesRequest& request) const;
			DescribeHADiagnoseConfigOutcome describeHADiagnoseConfig(const Model::DescribeHADiagnoseConfigRequest &request)const;
			void describeHADiagnoseConfigAsync(const Model::DescribeHADiagnoseConfigRequest& request, const DescribeHADiagnoseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHADiagnoseConfigOutcomeCallable describeHADiagnoseConfigCallable(const Model::DescribeHADiagnoseConfigRequest& request) const;
			DescribeHASwitchConfigOutcome describeHASwitchConfig(const Model::DescribeHASwitchConfigRequest &request)const;
			void describeHASwitchConfigAsync(const Model::DescribeHASwitchConfigRequest& request, const DescribeHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHASwitchConfigOutcomeCallable describeHASwitchConfigCallable(const Model::DescribeHASwitchConfigRequest& request) const;
			DescribeHistoryEventsOutcome describeHistoryEvents(const Model::DescribeHistoryEventsRequest &request)const;
			void describeHistoryEventsAsync(const Model::DescribeHistoryEventsRequest& request, const DescribeHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryEventsOutcomeCallable describeHistoryEventsCallable(const Model::DescribeHistoryEventsRequest& request) const;
			DescribeHistoryEventsStatOutcome describeHistoryEventsStat(const Model::DescribeHistoryEventsStatRequest &request)const;
			void describeHistoryEventsStatAsync(const Model::DescribeHistoryEventsStatRequest& request, const DescribeHistoryEventsStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryEventsStatOutcomeCallable describeHistoryEventsStatCallable(const Model::DescribeHistoryEventsStatRequest& request) const;
			DescribeHistoryTasksOutcome describeHistoryTasks(const Model::DescribeHistoryTasksRequest &request)const;
			void describeHistoryTasksAsync(const Model::DescribeHistoryTasksRequest& request, const DescribeHistoryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryTasksOutcomeCallable describeHistoryTasksCallable(const Model::DescribeHistoryTasksRequest& request) const;
			DescribeHistoryTasksStatOutcome describeHistoryTasksStat(const Model::DescribeHistoryTasksStatRequest &request)const;
			void describeHistoryTasksStatAsync(const Model::DescribeHistoryTasksStatRequest& request, const DescribeHistoryTasksStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryTasksStatOutcomeCallable describeHistoryTasksStatCallable(const Model::DescribeHistoryTasksStatRequest& request) const;
			DescribeHostGroupElasticStrategyParametersOutcome describeHostGroupElasticStrategyParameters(const Model::DescribeHostGroupElasticStrategyParametersRequest &request)const;
			void describeHostGroupElasticStrategyParametersAsync(const Model::DescribeHostGroupElasticStrategyParametersRequest& request, const DescribeHostGroupElasticStrategyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHostGroupElasticStrategyParametersOutcomeCallable describeHostGroupElasticStrategyParametersCallable(const Model::DescribeHostGroupElasticStrategyParametersRequest& request) const;
			DescribeHostWebShellOutcome describeHostWebShell(const Model::DescribeHostWebShellRequest &request)const;
			void describeHostWebShellAsync(const Model::DescribeHostWebShellRequest& request, const DescribeHostWebShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHostWebShellOutcomeCallable describeHostWebShellCallable(const Model::DescribeHostWebShellRequest& request) const;
			DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
			void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
			DescribeInstanceCrossBackupPolicyOutcome describeInstanceCrossBackupPolicy(const Model::DescribeInstanceCrossBackupPolicyRequest &request)const;
			void describeInstanceCrossBackupPolicyAsync(const Model::DescribeInstanceCrossBackupPolicyRequest& request, const DescribeInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceCrossBackupPolicyOutcomeCallable describeInstanceCrossBackupPolicyCallable(const Model::DescribeInstanceCrossBackupPolicyRequest& request) const;
			DescribeInstanceKeywordsOutcome describeInstanceKeywords(const Model::DescribeInstanceKeywordsRequest &request)const;
			void describeInstanceKeywordsAsync(const Model::DescribeInstanceKeywordsRequest& request, const DescribeInstanceKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceKeywordsOutcomeCallable describeInstanceKeywordsCallable(const Model::DescribeInstanceKeywordsRequest& request) const;
			DescribeInstanceLinkedWhitelistTemplateOutcome describeInstanceLinkedWhitelistTemplate(const Model::DescribeInstanceLinkedWhitelistTemplateRequest &request)const;
			void describeInstanceLinkedWhitelistTemplateAsync(const Model::DescribeInstanceLinkedWhitelistTemplateRequest& request, const DescribeInstanceLinkedWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceLinkedWhitelistTemplateOutcomeCallable describeInstanceLinkedWhitelistTemplateCallable(const Model::DescribeInstanceLinkedWhitelistTemplateRequest& request) const;
			DescribeKmsAssociateResourcesOutcome describeKmsAssociateResources(const Model::DescribeKmsAssociateResourcesRequest &request)const;
			void describeKmsAssociateResourcesAsync(const Model::DescribeKmsAssociateResourcesRequest& request, const DescribeKmsAssociateResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKmsAssociateResourcesOutcomeCallable describeKmsAssociateResourcesCallable(const Model::DescribeKmsAssociateResourcesRequest& request) const;
			DescribeLocalAvailableRecoveryTimeOutcome describeLocalAvailableRecoveryTime(const Model::DescribeLocalAvailableRecoveryTimeRequest &request)const;
			void describeLocalAvailableRecoveryTimeAsync(const Model::DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocalAvailableRecoveryTimeOutcomeCallable describeLocalAvailableRecoveryTimeCallable(const Model::DescribeLocalAvailableRecoveryTimeRequest& request) const;
			DescribeLogBackupFilesOutcome describeLogBackupFiles(const Model::DescribeLogBackupFilesRequest &request)const;
			void describeLogBackupFilesAsync(const Model::DescribeLogBackupFilesRequest& request, const DescribeLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogBackupFilesOutcomeCallable describeLogBackupFilesCallable(const Model::DescribeLogBackupFilesRequest& request) const;
			DescribeMarketingActivityOutcome describeMarketingActivity(const Model::DescribeMarketingActivityRequest &request)const;
			void describeMarketingActivityAsync(const Model::DescribeMarketingActivityRequest& request, const DescribeMarketingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMarketingActivityOutcomeCallable describeMarketingActivityCallable(const Model::DescribeMarketingActivityRequest& request) const;
			DescribeMaskingRulesOutcome describeMaskingRules(const Model::DescribeMaskingRulesRequest &request)const;
			void describeMaskingRulesAsync(const Model::DescribeMaskingRulesRequest& request, const DescribeMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMaskingRulesOutcomeCallable describeMaskingRulesCallable(const Model::DescribeMaskingRulesRequest& request) const;
			DescribeMetaListOutcome describeMetaList(const Model::DescribeMetaListRequest &request)const;
			void describeMetaListAsync(const Model::DescribeMetaListRequest& request, const DescribeMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetaListOutcomeCallable describeMetaListCallable(const Model::DescribeMetaListRequest& request) const;
			DescribeMigrateTaskByIdOutcome describeMigrateTaskById(const Model::DescribeMigrateTaskByIdRequest &request)const;
			void describeMigrateTaskByIdAsync(const Model::DescribeMigrateTaskByIdRequest& request, const DescribeMigrateTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrateTaskByIdOutcomeCallable describeMigrateTaskByIdCallable(const Model::DescribeMigrateTaskByIdRequest& request) const;
			DescribeMigrateTasksOutcome describeMigrateTasks(const Model::DescribeMigrateTasksRequest &request)const;
			void describeMigrateTasksAsync(const Model::DescribeMigrateTasksRequest& request, const DescribeMigrateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrateTasksOutcomeCallable describeMigrateTasksCallable(const Model::DescribeMigrateTasksRequest& request) const;
			DescribeModifyPGHbaConfigLogOutcome describeModifyPGHbaConfigLog(const Model::DescribeModifyPGHbaConfigLogRequest &request)const;
			void describeModifyPGHbaConfigLogAsync(const Model::DescribeModifyPGHbaConfigLogRequest& request, const DescribeModifyPGHbaConfigLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyPGHbaConfigLogOutcomeCallable describeModifyPGHbaConfigLogCallable(const Model::DescribeModifyPGHbaConfigLogRequest& request) const;
			DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
			void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
			DescribeOssDownloadsOutcome describeOssDownloads(const Model::DescribeOssDownloadsRequest &request)const;
			void describeOssDownloadsAsync(const Model::DescribeOssDownloadsRequest& request, const DescribeOssDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssDownloadsOutcomeCallable describeOssDownloadsCallable(const Model::DescribeOssDownloadsRequest& request) const;
			DescribePGHbaConfigOutcome describePGHbaConfig(const Model::DescribePGHbaConfigRequest &request)const;
			void describePGHbaConfigAsync(const Model::DescribePGHbaConfigRequest& request, const DescribePGHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePGHbaConfigOutcomeCallable describePGHbaConfigCallable(const Model::DescribePGHbaConfigRequest& request) const;
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
			DescribePostgresExtensionsOutcome describePostgresExtensions(const Model::DescribePostgresExtensionsRequest &request)const;
			void describePostgresExtensionsAsync(const Model::DescribePostgresExtensionsRequest& request, const DescribePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePostgresExtensionsOutcomeCallable describePostgresExtensionsCallable(const Model::DescribePostgresExtensionsRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeQuickSaleConfigOutcome describeQuickSaleConfig(const Model::DescribeQuickSaleConfigRequest &request)const;
			void describeQuickSaleConfigAsync(const Model::DescribeQuickSaleConfigRequest& request, const DescribeQuickSaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQuickSaleConfigOutcomeCallable describeQuickSaleConfigCallable(const Model::DescribeQuickSaleConfigRequest& request) const;
			DescribeRCCloudAssistantStatusOutcome describeRCCloudAssistantStatus(const Model::DescribeRCCloudAssistantStatusRequest &request)const;
			void describeRCCloudAssistantStatusAsync(const Model::DescribeRCCloudAssistantStatusRequest& request, const DescribeRCCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCCloudAssistantStatusOutcomeCallable describeRCCloudAssistantStatusCallable(const Model::DescribeRCCloudAssistantStatusRequest& request) const;
			DescribeRCClusterConfigOutcome describeRCClusterConfig(const Model::DescribeRCClusterConfigRequest &request)const;
			void describeRCClusterConfigAsync(const Model::DescribeRCClusterConfigRequest& request, const DescribeRCClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCClusterConfigOutcomeCallable describeRCClusterConfigCallable(const Model::DescribeRCClusterConfigRequest& request) const;
			DescribeRCClusterNodesOutcome describeRCClusterNodes(const Model::DescribeRCClusterNodesRequest &request)const;
			void describeRCClusterNodesAsync(const Model::DescribeRCClusterNodesRequest& request, const DescribeRCClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCClusterNodesOutcomeCallable describeRCClusterNodesCallable(const Model::DescribeRCClusterNodesRequest& request) const;
			DescribeRCClustersOutcome describeRCClusters(const Model::DescribeRCClustersRequest &request)const;
			void describeRCClustersAsync(const Model::DescribeRCClustersRequest& request, const DescribeRCClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCClustersOutcomeCallable describeRCClustersCallable(const Model::DescribeRCClustersRequest& request) const;
			DescribeRCDeploymentSetsOutcome describeRCDeploymentSets(const Model::DescribeRCDeploymentSetsRequest &request)const;
			void describeRCDeploymentSetsAsync(const Model::DescribeRCDeploymentSetsRequest& request, const DescribeRCDeploymentSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCDeploymentSetsOutcomeCallable describeRCDeploymentSetsCallable(const Model::DescribeRCDeploymentSetsRequest& request) const;
			DescribeRCDisksOutcome describeRCDisks(const Model::DescribeRCDisksRequest &request)const;
			void describeRCDisksAsync(const Model::DescribeRCDisksRequest& request, const DescribeRCDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCDisksOutcomeCallable describeRCDisksCallable(const Model::DescribeRCDisksRequest& request) const;
			DescribeRCImageListOutcome describeRCImageList(const Model::DescribeRCImageListRequest &request)const;
			void describeRCImageListAsync(const Model::DescribeRCImageListRequest& request, const DescribeRCImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCImageListOutcomeCallable describeRCImageListCallable(const Model::DescribeRCImageListRequest& request) const;
			DescribeRCInstanceAttributeOutcome describeRCInstanceAttribute(const Model::DescribeRCInstanceAttributeRequest &request)const;
			void describeRCInstanceAttributeAsync(const Model::DescribeRCInstanceAttributeRequest& request, const DescribeRCInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceAttributeOutcomeCallable describeRCInstanceAttributeCallable(const Model::DescribeRCInstanceAttributeRequest& request) const;
			DescribeRCInstanceDdosCountOutcome describeRCInstanceDdosCount(const Model::DescribeRCInstanceDdosCountRequest &request)const;
			void describeRCInstanceDdosCountAsync(const Model::DescribeRCInstanceDdosCountRequest& request, const DescribeRCInstanceDdosCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceDdosCountOutcomeCallable describeRCInstanceDdosCountCallable(const Model::DescribeRCInstanceDdosCountRequest& request) const;
			DescribeRCInstanceHistoryEventsOutcome describeRCInstanceHistoryEvents(const Model::DescribeRCInstanceHistoryEventsRequest &request)const;
			void describeRCInstanceHistoryEventsAsync(const Model::DescribeRCInstanceHistoryEventsRequest& request, const DescribeRCInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceHistoryEventsOutcomeCallable describeRCInstanceHistoryEventsCallable(const Model::DescribeRCInstanceHistoryEventsRequest& request) const;
			DescribeRCInstanceIpAddressOutcome describeRCInstanceIpAddress(const Model::DescribeRCInstanceIpAddressRequest &request)const;
			void describeRCInstanceIpAddressAsync(const Model::DescribeRCInstanceIpAddressRequest& request, const DescribeRCInstanceIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceIpAddressOutcomeCallable describeRCInstanceIpAddressCallable(const Model::DescribeRCInstanceIpAddressRequest& request) const;
			DescribeRCInstanceTypeFamiliesOutcome describeRCInstanceTypeFamilies(const Model::DescribeRCInstanceTypeFamiliesRequest &request)const;
			void describeRCInstanceTypeFamiliesAsync(const Model::DescribeRCInstanceTypeFamiliesRequest& request, const DescribeRCInstanceTypeFamiliesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceTypeFamiliesOutcomeCallable describeRCInstanceTypeFamiliesCallable(const Model::DescribeRCInstanceTypeFamiliesRequest& request) const;
			DescribeRCInstanceTypesOutcome describeRCInstanceTypes(const Model::DescribeRCInstanceTypesRequest &request)const;
			void describeRCInstanceTypesAsync(const Model::DescribeRCInstanceTypesRequest& request, const DescribeRCInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceTypesOutcomeCallable describeRCInstanceTypesCallable(const Model::DescribeRCInstanceTypesRequest& request) const;
			DescribeRCInstanceVncUrlOutcome describeRCInstanceVncUrl(const Model::DescribeRCInstanceVncUrlRequest &request)const;
			void describeRCInstanceVncUrlAsync(const Model::DescribeRCInstanceVncUrlRequest& request, const DescribeRCInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstanceVncUrlOutcomeCallable describeRCInstanceVncUrlCallable(const Model::DescribeRCInstanceVncUrlRequest& request) const;
			DescribeRCInstancesOutcome describeRCInstances(const Model::DescribeRCInstancesRequest &request)const;
			void describeRCInstancesAsync(const Model::DescribeRCInstancesRequest& request, const DescribeRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInstancesOutcomeCallable describeRCInstancesCallable(const Model::DescribeRCInstancesRequest& request) const;
			DescribeRCInvocationResultsOutcome describeRCInvocationResults(const Model::DescribeRCInvocationResultsRequest &request)const;
			void describeRCInvocationResultsAsync(const Model::DescribeRCInvocationResultsRequest& request, const DescribeRCInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCInvocationResultsOutcomeCallable describeRCInvocationResultsCallable(const Model::DescribeRCInvocationResultsRequest& request) const;
			DescribeRCMetricListOutcome describeRCMetricList(const Model::DescribeRCMetricListRequest &request)const;
			void describeRCMetricListAsync(const Model::DescribeRCMetricListRequest& request, const DescribeRCMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCMetricListOutcomeCallable describeRCMetricListCallable(const Model::DescribeRCMetricListRequest& request) const;
			DescribeRCNodePoolOutcome describeRCNodePool(const Model::DescribeRCNodePoolRequest &request)const;
			void describeRCNodePoolAsync(const Model::DescribeRCNodePoolRequest& request, const DescribeRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCNodePoolOutcomeCallable describeRCNodePoolCallable(const Model::DescribeRCNodePoolRequest& request) const;
			DescribeRCSecurityGroupListOutcome describeRCSecurityGroupList(const Model::DescribeRCSecurityGroupListRequest &request)const;
			void describeRCSecurityGroupListAsync(const Model::DescribeRCSecurityGroupListRequest& request, const DescribeRCSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCSecurityGroupListOutcomeCallable describeRCSecurityGroupListCallable(const Model::DescribeRCSecurityGroupListRequest& request) const;
			DescribeRCSecurityGroupPermissionOutcome describeRCSecurityGroupPermission(const Model::DescribeRCSecurityGroupPermissionRequest &request)const;
			void describeRCSecurityGroupPermissionAsync(const Model::DescribeRCSecurityGroupPermissionRequest& request, const DescribeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCSecurityGroupPermissionOutcomeCallable describeRCSecurityGroupPermissionCallable(const Model::DescribeRCSecurityGroupPermissionRequest& request) const;
			DescribeRCSnapshotsOutcome describeRCSnapshots(const Model::DescribeRCSnapshotsRequest &request)const;
			void describeRCSnapshotsAsync(const Model::DescribeRCSnapshotsRequest& request, const DescribeRCSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCSnapshotsOutcomeCallable describeRCSnapshotsCallable(const Model::DescribeRCSnapshotsRequest& request) const;
			DescribeRCVClusterOutcome describeRCVCluster(const Model::DescribeRCVClusterRequest &request)const;
			void describeRCVClusterAsync(const Model::DescribeRCVClusterRequest& request, const DescribeRCVClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRCVClusterOutcomeCallable describeRCVClusterCallable(const Model::DescribeRCVClusterRequest& request) const;
			DescribeRdsResourceSettingsOutcome describeRdsResourceSettings(const Model::DescribeRdsResourceSettingsRequest &request)const;
			void describeRdsResourceSettingsAsync(const Model::DescribeRdsResourceSettingsRequest& request, const DescribeRdsResourceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsResourceSettingsOutcomeCallable describeRdsResourceSettingsCallable(const Model::DescribeRdsResourceSettingsRequest& request) const;
			DescribeReadDBInstanceDelayOutcome describeReadDBInstanceDelay(const Model::DescribeReadDBInstanceDelayRequest &request)const;
			void describeReadDBInstanceDelayAsync(const Model::DescribeReadDBInstanceDelayRequest& request, const DescribeReadDBInstanceDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReadDBInstanceDelayOutcomeCallable describeReadDBInstanceDelayCallable(const Model::DescribeReadDBInstanceDelayRequest& request) const;
			DescribeRegionInfosOutcome describeRegionInfos(const Model::DescribeRegionInfosRequest &request)const;
			void describeRegionInfosAsync(const Model::DescribeRegionInfosRequest& request, const DescribeRegionInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionInfosOutcomeCallable describeRegionInfosCallable(const Model::DescribeRegionInfosRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRenewalPriceOutcome describeRenewalPrice(const Model::DescribeRenewalPriceRequest &request)const;
			void describeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenewalPriceOutcomeCallable describeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request) const;
			DescribeReplicationLinkLogsOutcome describeReplicationLinkLogs(const Model::DescribeReplicationLinkLogsRequest &request)const;
			void describeReplicationLinkLogsAsync(const Model::DescribeReplicationLinkLogsRequest& request, const DescribeReplicationLinkLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicationLinkLogsOutcomeCallable describeReplicationLinkLogsCallable(const Model::DescribeReplicationLinkLogsRequest& request) const;
			DescribeResourceDetailsOutcome describeResourceDetails(const Model::DescribeResourceDetailsRequest &request)const;
			void describeResourceDetailsAsync(const Model::DescribeResourceDetailsRequest& request, const DescribeResourceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceDetailsOutcomeCallable describeResourceDetailsCallable(const Model::DescribeResourceDetailsRequest& request) const;
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
			DescribeSecretsOutcome describeSecrets(const Model::DescribeSecretsRequest &request)const;
			void describeSecretsAsync(const Model::DescribeSecretsRequest& request, const DescribeSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecretsOutcomeCallable describeSecretsCallable(const Model::DescribeSecretsRequest& request) const;
			DescribeSecurityGroupConfigurationOutcome describeSecurityGroupConfiguration(const Model::DescribeSecurityGroupConfigurationRequest &request)const;
			void describeSecurityGroupConfigurationAsync(const Model::DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupConfigurationOutcomeCallable describeSecurityGroupConfigurationCallable(const Model::DescribeSecurityGroupConfigurationRequest& request) const;
			DescribeSlotsOutcome describeSlots(const Model::DescribeSlotsRequest &request)const;
			void describeSlotsAsync(const Model::DescribeSlotsRequest& request, const DescribeSlotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlotsOutcomeCallable describeSlotsCallable(const Model::DescribeSlotsRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSlowLogsOutcome describeSlowLogs(const Model::DescribeSlowLogsRequest &request)const;
			void describeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogsOutcomeCallable describeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request) const;
			DescribeSupportOnlineResizeDiskOutcome describeSupportOnlineResizeDisk(const Model::DescribeSupportOnlineResizeDiskRequest &request)const;
			void describeSupportOnlineResizeDiskAsync(const Model::DescribeSupportOnlineResizeDiskRequest& request, const DescribeSupportOnlineResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSupportOnlineResizeDiskOutcomeCallable describeSupportOnlineResizeDiskCallable(const Model::DescribeSupportOnlineResizeDiskRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeUpgradeMajorVersionPrecheckTaskOutcome describeUpgradeMajorVersionPrecheckTask(const Model::DescribeUpgradeMajorVersionPrecheckTaskRequest &request)const;
			void describeUpgradeMajorVersionPrecheckTaskAsync(const Model::DescribeUpgradeMajorVersionPrecheckTaskRequest& request, const DescribeUpgradeMajorVersionPrecheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpgradeMajorVersionPrecheckTaskOutcomeCallable describeUpgradeMajorVersionPrecheckTaskCallable(const Model::DescribeUpgradeMajorVersionPrecheckTaskRequest& request) const;
			DescribeUpgradeMajorVersionTasksOutcome describeUpgradeMajorVersionTasks(const Model::DescribeUpgradeMajorVersionTasksRequest &request)const;
			void describeUpgradeMajorVersionTasksAsync(const Model::DescribeUpgradeMajorVersionTasksRequest& request, const DescribeUpgradeMajorVersionTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpgradeMajorVersionTasksOutcomeCallable describeUpgradeMajorVersionTasksCallable(const Model::DescribeUpgradeMajorVersionTasksRequest& request) const;
			DescribeVSwitchListOutcome describeVSwitchList(const Model::DescribeVSwitchListRequest &request)const;
			void describeVSwitchListAsync(const Model::DescribeVSwitchListRequest& request, const DescribeVSwitchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchListOutcomeCallable describeVSwitchListCallable(const Model::DescribeVSwitchListRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DescribeWhitelistTemplateOutcome describeWhitelistTemplate(const Model::DescribeWhitelistTemplateRequest &request)const;
			void describeWhitelistTemplateAsync(const Model::DescribeWhitelistTemplateRequest& request, const DescribeWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhitelistTemplateOutcomeCallable describeWhitelistTemplateCallable(const Model::DescribeWhitelistTemplateRequest& request) const;
			DescribeWhitelistTemplateLinkedInstanceOutcome describeWhitelistTemplateLinkedInstance(const Model::DescribeWhitelistTemplateLinkedInstanceRequest &request)const;
			void describeWhitelistTemplateLinkedInstanceAsync(const Model::DescribeWhitelistTemplateLinkedInstanceRequest& request, const DescribeWhitelistTemplateLinkedInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhitelistTemplateLinkedInstanceOutcomeCallable describeWhitelistTemplateLinkedInstanceCallable(const Model::DescribeWhitelistTemplateLinkedInstanceRequest& request) const;
			DestroyDBInstanceOutcome destroyDBInstance(const Model::DestroyDBInstanceRequest &request)const;
			void destroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyDBInstanceOutcomeCallable destroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request) const;
			DetachGadInstanceMemberOutcome detachGadInstanceMember(const Model::DetachGadInstanceMemberRequest &request)const;
			void detachGadInstanceMemberAsync(const Model::DetachGadInstanceMemberRequest& request, const DetachGadInstanceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachGadInstanceMemberOutcomeCallable detachGadInstanceMemberCallable(const Model::DetachGadInstanceMemberRequest& request) const;
			DetachRCDiskOutcome detachRCDisk(const Model::DetachRCDiskRequest &request)const;
			void detachRCDiskAsync(const Model::DetachRCDiskRequest& request, const DetachRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachRCDiskOutcomeCallable detachRCDiskCallable(const Model::DetachRCDiskRequest& request) const;
			DetachWhitelistTemplateToInstanceOutcome detachWhitelistTemplateToInstance(const Model::DetachWhitelistTemplateToInstanceRequest &request)const;
			void detachWhitelistTemplateToInstanceAsync(const Model::DetachWhitelistTemplateToInstanceRequest& request, const DetachWhitelistTemplateToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachWhitelistTemplateToInstanceOutcomeCallable detachWhitelistTemplateToInstanceCallable(const Model::DetachWhitelistTemplateToInstanceRequest& request) const;
			EvaluateLocalExtendDiskOutcome evaluateLocalExtendDisk(const Model::EvaluateLocalExtendDiskRequest &request)const;
			void evaluateLocalExtendDiskAsync(const Model::EvaluateLocalExtendDiskRequest& request, const EvaluateLocalExtendDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateLocalExtendDiskOutcomeCallable evaluateLocalExtendDiskCallable(const Model::EvaluateLocalExtendDiskRequest& request) const;
			GetDBInstanceTopologyOutcome getDBInstanceTopology(const Model::GetDBInstanceTopologyRequest &request)const;
			void getDBInstanceTopologyAsync(const Model::GetDBInstanceTopologyRequest& request, const GetDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDBInstanceTopologyOutcomeCallable getDBInstanceTopologyCallable(const Model::GetDBInstanceTopologyRequest& request) const;
			GetDbProxyInstanceSslOutcome getDbProxyInstanceSsl(const Model::GetDbProxyInstanceSslRequest &request)const;
			void getDbProxyInstanceSslAsync(const Model::GetDbProxyInstanceSslRequest& request, const GetDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDbProxyInstanceSslOutcomeCallable getDbProxyInstanceSslCallable(const Model::GetDbProxyInstanceSslRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			GrantOperatorPermissionOutcome grantOperatorPermission(const Model::GrantOperatorPermissionRequest &request)const;
			void grantOperatorPermissionAsync(const Model::GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantOperatorPermissionOutcomeCallable grantOperatorPermissionCallable(const Model::GrantOperatorPermissionRequest& request) const;
			ImportUserBackupFileOutcome importUserBackupFile(const Model::ImportUserBackupFileRequest &request)const;
			void importUserBackupFileAsync(const Model::ImportUserBackupFileRequest& request, const ImportUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportUserBackupFileOutcomeCallable importUserBackupFileCallable(const Model::ImportUserBackupFileRequest& request) const;
			InstallRCCloudAssistantOutcome installRCCloudAssistant(const Model::InstallRCCloudAssistantRequest &request)const;
			void installRCCloudAssistantAsync(const Model::InstallRCCloudAssistantRequest& request, const InstallRCCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallRCCloudAssistantOutcomeCallable installRCCloudAssistantCallable(const Model::InstallRCCloudAssistantRequest& request) const;
			ListClassesOutcome listClasses(const Model::ListClassesRequest &request)const;
			void listClassesAsync(const Model::ListClassesRequest& request, const ListClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClassesOutcomeCallable listClassesCallable(const Model::ListClassesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListUserBackupFilesOutcome listUserBackupFiles(const Model::ListUserBackupFilesRequest &request)const;
			void listUserBackupFilesAsync(const Model::ListUserBackupFilesRequest& request, const ListUserBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserBackupFilesOutcomeCallable listUserBackupFilesCallable(const Model::ListUserBackupFilesRequest& request) const;
			LockAccountOutcome lockAccount(const Model::LockAccountRequest &request)const;
			void lockAccountAsync(const Model::LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockAccountOutcomeCallable lockAccountCallable(const Model::LockAccountRequest& request) const;
			MigrateConnectionToOtherZoneOutcome migrateConnectionToOtherZone(const Model::MigrateConnectionToOtherZoneRequest &request)const;
			void migrateConnectionToOtherZoneAsync(const Model::MigrateConnectionToOtherZoneRequest& request, const MigrateConnectionToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateConnectionToOtherZoneOutcomeCallable migrateConnectionToOtherZoneCallable(const Model::MigrateConnectionToOtherZoneRequest& request) const;
			MigrateDBInstanceOutcome migrateDBInstance(const Model::MigrateDBInstanceRequest &request)const;
			void migrateDBInstanceAsync(const Model::MigrateDBInstanceRequest& request, const MigrateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateDBInstanceOutcomeCallable migrateDBInstanceCallable(const Model::MigrateDBInstanceRequest& request) const;
			MigrateDBNodesOutcome migrateDBNodes(const Model::MigrateDBNodesRequest &request)const;
			void migrateDBNodesAsync(const Model::MigrateDBNodesRequest& request, const MigrateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateDBNodesOutcomeCallable migrateDBNodesCallable(const Model::MigrateDBNodesRequest& request) const;
			MigrateSecurityIPModeOutcome migrateSecurityIPMode(const Model::MigrateSecurityIPModeRequest &request)const;
			void migrateSecurityIPModeAsync(const Model::MigrateSecurityIPModeRequest& request, const MigrateSecurityIPModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateSecurityIPModeOutcomeCallable migrateSecurityIPModeCallable(const Model::MigrateSecurityIPModeRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			ModifyADInfoOutcome modifyADInfo(const Model::ModifyADInfoRequest &request)const;
			void modifyADInfoAsync(const Model::ModifyADInfoRequest& request, const ModifyADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyADInfoOutcomeCallable modifyADInfoCallable(const Model::ModifyADInfoRequest& request) const;
			ModifyAccountCheckPolicyOutcome modifyAccountCheckPolicy(const Model::ModifyAccountCheckPolicyRequest &request)const;
			void modifyAccountCheckPolicyAsync(const Model::ModifyAccountCheckPolicyRequest& request, const ModifyAccountCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountCheckPolicyOutcomeCallable modifyAccountCheckPolicyCallable(const Model::ModifyAccountCheckPolicyRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountMaskingPrivilegeOutcome modifyAccountMaskingPrivilege(const Model::ModifyAccountMaskingPrivilegeRequest &request)const;
			void modifyAccountMaskingPrivilegeAsync(const Model::ModifyAccountMaskingPrivilegeRequest& request, const ModifyAccountMaskingPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountMaskingPrivilegeOutcomeCallable modifyAccountMaskingPrivilegeCallable(const Model::ModifyAccountMaskingPrivilegeRequest& request) const;
			ModifyAccountSecurityPolicyOutcome modifyAccountSecurityPolicy(const Model::ModifyAccountSecurityPolicyRequest &request)const;
			void modifyAccountSecurityPolicyAsync(const Model::ModifyAccountSecurityPolicyRequest& request, const ModifyAccountSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountSecurityPolicyOutcomeCallable modifyAccountSecurityPolicyCallable(const Model::ModifyAccountSecurityPolicyRequest& request) const;
			ModifyActionEventPolicyOutcome modifyActionEventPolicy(const Model::ModifyActionEventPolicyRequest &request)const;
			void modifyActionEventPolicyAsync(const Model::ModifyActionEventPolicyRequest& request, const ModifyActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActionEventPolicyOutcomeCallable modifyActionEventPolicyCallable(const Model::ModifyActionEventPolicyRequest& request) const;
			ModifyActiveOperationTasksOutcome modifyActiveOperationTasks(const Model::ModifyActiveOperationTasksRequest &request)const;
			void modifyActiveOperationTasksAsync(const Model::ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationTasksOutcomeCallable modifyActiveOperationTasksCallable(const Model::ModifyActiveOperationTasksRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyBackupSetExpireTimeOutcome modifyBackupSetExpireTime(const Model::ModifyBackupSetExpireTimeRequest &request)const;
			void modifyBackupSetExpireTimeAsync(const Model::ModifyBackupSetExpireTimeRequest& request, const ModifyBackupSetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupSetExpireTimeOutcomeCallable modifyBackupSetExpireTimeCallable(const Model::ModifyBackupSetExpireTimeRequest& request) const;
			ModifyCollationTimeZoneOutcome modifyCollationTimeZone(const Model::ModifyCollationTimeZoneRequest &request)const;
			void modifyCollationTimeZoneAsync(const Model::ModifyCollationTimeZoneRequest& request, const ModifyCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCollationTimeZoneOutcomeCallable modifyCollationTimeZoneCallable(const Model::ModifyCollationTimeZoneRequest& request) const;
			ModifyComputeBurstConfigOutcome modifyComputeBurstConfig(const Model::ModifyComputeBurstConfigRequest &request)const;
			void modifyComputeBurstConfigAsync(const Model::ModifyComputeBurstConfigRequest& request, const ModifyComputeBurstConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyComputeBurstConfigOutcomeCallable modifyComputeBurstConfigCallable(const Model::ModifyComputeBurstConfigRequest& request) const;
			ModifyCustinsResourceOutcome modifyCustinsResource(const Model::ModifyCustinsResourceRequest &request)const;
			void modifyCustinsResourceAsync(const Model::ModifyCustinsResourceRequest& request, const ModifyCustinsResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCustinsResourceOutcomeCallable modifyCustinsResourceCallable(const Model::ModifyCustinsResourceRequest& request) const;
			ModifyDBDescriptionOutcome modifyDBDescription(const Model::ModifyDBDescriptionRequest &request)const;
			void modifyDBDescriptionAsync(const Model::ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBDescriptionOutcomeCallable modifyDBDescriptionCallable(const Model::ModifyDBDescriptionRequest& request) const;
			ModifyDBInstanceAutoUpgradeMinorVersionOutcome modifyDBInstanceAutoUpgradeMinorVersion(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request)const;
			void modifyDBInstanceAutoUpgradeMinorVersionAsync(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest& request, const ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable modifyDBInstanceAutoUpgradeMinorVersionCallable(const Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest& request) const;
			ModifyDBInstanceConfigOutcome modifyDBInstanceConfig(const Model::ModifyDBInstanceConfigRequest &request)const;
			void modifyDBInstanceConfigAsync(const Model::ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConfigOutcomeCallable modifyDBInstanceConfigCallable(const Model::ModifyDBInstanceConfigRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDelayedReplicationTimeOutcome modifyDBInstanceDelayedReplicationTime(const Model::ModifyDBInstanceDelayedReplicationTimeRequest &request)const;
			void modifyDBInstanceDelayedReplicationTimeAsync(const Model::ModifyDBInstanceDelayedReplicationTimeRequest& request, const ModifyDBInstanceDelayedReplicationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDelayedReplicationTimeOutcomeCallable modifyDBInstanceDelayedReplicationTimeCallable(const Model::ModifyDBInstanceDelayedReplicationTimeRequest& request) const;
			ModifyDBInstanceDeletionProtectionOutcome modifyDBInstanceDeletionProtection(const Model::ModifyDBInstanceDeletionProtectionRequest &request)const;
			void modifyDBInstanceDeletionProtectionAsync(const Model::ModifyDBInstanceDeletionProtectionRequest& request, const ModifyDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDeletionProtectionOutcomeCallable modifyDBInstanceDeletionProtectionCallable(const Model::ModifyDBInstanceDeletionProtectionRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceEndpointOutcome modifyDBInstanceEndpoint(const Model::ModifyDBInstanceEndpointRequest &request)const;
			void modifyDBInstanceEndpointAsync(const Model::ModifyDBInstanceEndpointRequest& request, const ModifyDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceEndpointOutcomeCallable modifyDBInstanceEndpointCallable(const Model::ModifyDBInstanceEndpointRequest& request) const;
			ModifyDBInstanceEndpointAddressOutcome modifyDBInstanceEndpointAddress(const Model::ModifyDBInstanceEndpointAddressRequest &request)const;
			void modifyDBInstanceEndpointAddressAsync(const Model::ModifyDBInstanceEndpointAddressRequest& request, const ModifyDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceEndpointAddressOutcomeCallable modifyDBInstanceEndpointAddressCallable(const Model::ModifyDBInstanceEndpointAddressRequest& request) const;
			ModifyDBInstanceHAConfigOutcome modifyDBInstanceHAConfig(const Model::ModifyDBInstanceHAConfigRequest &request)const;
			void modifyDBInstanceHAConfigAsync(const Model::ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceHAConfigOutcomeCallable modifyDBInstanceHAConfigCallable(const Model::ModifyDBInstanceHAConfigRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDBInstanceMetricsOutcome modifyDBInstanceMetrics(const Model::ModifyDBInstanceMetricsRequest &request)const;
			void modifyDBInstanceMetricsAsync(const Model::ModifyDBInstanceMetricsRequest& request, const ModifyDBInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMetricsOutcomeCallable modifyDBInstanceMetricsCallable(const Model::ModifyDBInstanceMetricsRequest& request) const;
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
			ModifyDBInstanceReplicationSwitchOutcome modifyDBInstanceReplicationSwitch(const Model::ModifyDBInstanceReplicationSwitchRequest &request)const;
			void modifyDBInstanceReplicationSwitchAsync(const Model::ModifyDBInstanceReplicationSwitchRequest& request, const ModifyDBInstanceReplicationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceReplicationSwitchOutcomeCallable modifyDBInstanceReplicationSwitchCallable(const Model::ModifyDBInstanceReplicationSwitchRequest& request) const;
			ModifyDBInstanceSSLOutcome modifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request)const;
			void modifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSSLOutcomeCallable modifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request) const;
			ModifyDBInstanceSecurityGroupRuleOutcome modifyDBInstanceSecurityGroupRule(const Model::ModifyDBInstanceSecurityGroupRuleRequest &request)const;
			void modifyDBInstanceSecurityGroupRuleAsync(const Model::ModifyDBInstanceSecurityGroupRuleRequest& request, const ModifyDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSecurityGroupRuleOutcomeCallable modifyDBInstanceSecurityGroupRuleCallable(const Model::ModifyDBInstanceSecurityGroupRuleRequest& request) const;
			ModifyDBInstanceSpecOutcome modifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request)const;
			void modifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSpecOutcomeCallable modifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request) const;
			ModifyDBInstanceTDEOutcome modifyDBInstanceTDE(const Model::ModifyDBInstanceTDERequest &request)const;
			void modifyDBInstanceTDEAsync(const Model::ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceTDEOutcomeCallable modifyDBInstanceTDECallable(const Model::ModifyDBInstanceTDERequest& request) const;
			ModifyDBNodeOutcome modifyDBNode(const Model::ModifyDBNodeRequest &request)const;
			void modifyDBNodeAsync(const Model::ModifyDBNodeRequest& request, const ModifyDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeOutcomeCallable modifyDBNodeCallable(const Model::ModifyDBNodeRequest& request) const;
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
			ModifyDatabaseConfigOutcome modifyDatabaseConfig(const Model::ModifyDatabaseConfigRequest &request)const;
			void modifyDatabaseConfigAsync(const Model::ModifyDatabaseConfigRequest& request, const ModifyDatabaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseConfigOutcomeCallable modifyDatabaseConfigCallable(const Model::ModifyDatabaseConfigRequest& request) const;
			ModifyDbProxyInstanceSslOutcome modifyDbProxyInstanceSsl(const Model::ModifyDbProxyInstanceSslRequest &request)const;
			void modifyDbProxyInstanceSslAsync(const Model::ModifyDbProxyInstanceSslRequest& request, const ModifyDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDbProxyInstanceSslOutcomeCallable modifyDbProxyInstanceSslCallable(const Model::ModifyDbProxyInstanceSslRequest& request) const;
			ModifyEventInfoOutcome modifyEventInfo(const Model::ModifyEventInfoRequest &request)const;
			void modifyEventInfoAsync(const Model::ModifyEventInfoRequest& request, const ModifyEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEventInfoOutcomeCallable modifyEventInfoCallable(const Model::ModifyEventInfoRequest& request) const;
			ModifyHADiagnoseConfigOutcome modifyHADiagnoseConfig(const Model::ModifyHADiagnoseConfigRequest &request)const;
			void modifyHADiagnoseConfigAsync(const Model::ModifyHADiagnoseConfigRequest& request, const ModifyHADiagnoseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHADiagnoseConfigOutcomeCallable modifyHADiagnoseConfigCallable(const Model::ModifyHADiagnoseConfigRequest& request) const;
			ModifyHASwitchConfigOutcome modifyHASwitchConfig(const Model::ModifyHASwitchConfigRequest &request)const;
			void modifyHASwitchConfigAsync(const Model::ModifyHASwitchConfigRequest& request, const ModifyHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHASwitchConfigOutcomeCallable modifyHASwitchConfigCallable(const Model::ModifyHASwitchConfigRequest& request) const;
			ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
			void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
			ModifyInstanceCrossBackupPolicyOutcome modifyInstanceCrossBackupPolicy(const Model::ModifyInstanceCrossBackupPolicyRequest &request)const;
			void modifyInstanceCrossBackupPolicyAsync(const Model::ModifyInstanceCrossBackupPolicyRequest& request, const ModifyInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceCrossBackupPolicyOutcomeCallable modifyInstanceCrossBackupPolicyCallable(const Model::ModifyInstanceCrossBackupPolicyRequest& request) const;
			ModifyMaskingRulesOutcome modifyMaskingRules(const Model::ModifyMaskingRulesRequest &request)const;
			void modifyMaskingRulesAsync(const Model::ModifyMaskingRulesRequest& request, const ModifyMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMaskingRulesOutcomeCallable modifyMaskingRulesCallable(const Model::ModifyMaskingRulesRequest& request) const;
			ModifyPGHbaConfigOutcome modifyPGHbaConfig(const Model::ModifyPGHbaConfigRequest &request)const;
			void modifyPGHbaConfigAsync(const Model::ModifyPGHbaConfigRequest& request, const ModifyPGHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPGHbaConfigOutcomeCallable modifyPGHbaConfigCallable(const Model::ModifyPGHbaConfigRequest& request) const;
			ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
			void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
			ModifyParameterGroupOutcome modifyParameterGroup(const Model::ModifyParameterGroupRequest &request)const;
			void modifyParameterGroupAsync(const Model::ModifyParameterGroupRequest& request, const ModifyParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterGroupOutcomeCallable modifyParameterGroupCallable(const Model::ModifyParameterGroupRequest& request) const;
			ModifyRCDiskSpecOutcome modifyRCDiskSpec(const Model::ModifyRCDiskSpecRequest &request)const;
			void modifyRCDiskSpecAsync(const Model::ModifyRCDiskSpecRequest& request, const ModifyRCDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCDiskSpecOutcomeCallable modifyRCDiskSpecCallable(const Model::ModifyRCDiskSpecRequest& request) const;
			ModifyRCInstanceOutcome modifyRCInstance(const Model::ModifyRCInstanceRequest &request)const;
			void modifyRCInstanceAsync(const Model::ModifyRCInstanceRequest& request, const ModifyRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceOutcomeCallable modifyRCInstanceCallable(const Model::ModifyRCInstanceRequest& request) const;
			ModifyRCInstanceAttributeOutcome modifyRCInstanceAttribute(const Model::ModifyRCInstanceAttributeRequest &request)const;
			void modifyRCInstanceAttributeAsync(const Model::ModifyRCInstanceAttributeRequest& request, const ModifyRCInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceAttributeOutcomeCallable modifyRCInstanceAttributeCallable(const Model::ModifyRCInstanceAttributeRequest& request) const;
			ModifyRCInstanceChargeTypeOutcome modifyRCInstanceChargeType(const Model::ModifyRCInstanceChargeTypeRequest &request)const;
			void modifyRCInstanceChargeTypeAsync(const Model::ModifyRCInstanceChargeTypeRequest& request, const ModifyRCInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceChargeTypeOutcomeCallable modifyRCInstanceChargeTypeCallable(const Model::ModifyRCInstanceChargeTypeRequest& request) const;
			ModifyRCInstanceDescriptionOutcome modifyRCInstanceDescription(const Model::ModifyRCInstanceDescriptionRequest &request)const;
			void modifyRCInstanceDescriptionAsync(const Model::ModifyRCInstanceDescriptionRequest& request, const ModifyRCInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceDescriptionOutcomeCallable modifyRCInstanceDescriptionCallable(const Model::ModifyRCInstanceDescriptionRequest& request) const;
			ModifyRCInstanceKeyPairOutcome modifyRCInstanceKeyPair(const Model::ModifyRCInstanceKeyPairRequest &request)const;
			void modifyRCInstanceKeyPairAsync(const Model::ModifyRCInstanceKeyPairRequest& request, const ModifyRCInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceKeyPairOutcomeCallable modifyRCInstanceKeyPairCallable(const Model::ModifyRCInstanceKeyPairRequest& request) const;
			ModifyRCInstanceNetworkSpecOutcome modifyRCInstanceNetworkSpec(const Model::ModifyRCInstanceNetworkSpecRequest &request)const;
			void modifyRCInstanceNetworkSpecAsync(const Model::ModifyRCInstanceNetworkSpecRequest& request, const ModifyRCInstanceNetworkSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCInstanceNetworkSpecOutcomeCallable modifyRCInstanceNetworkSpecCallable(const Model::ModifyRCInstanceNetworkSpecRequest& request) const;
			ModifyRCSecurityGroupPermissionOutcome modifyRCSecurityGroupPermission(const Model::ModifyRCSecurityGroupPermissionRequest &request)const;
			void modifyRCSecurityGroupPermissionAsync(const Model::ModifyRCSecurityGroupPermissionRequest& request, const ModifyRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRCSecurityGroupPermissionOutcomeCallable modifyRCSecurityGroupPermissionCallable(const Model::ModifyRCSecurityGroupPermissionRequest& request) const;
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
			ModifyTaskInfoOutcome modifyTaskInfo(const Model::ModifyTaskInfoRequest &request)const;
			void modifyTaskInfoAsync(const Model::ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTaskInfoOutcomeCallable modifyTaskInfoCallable(const Model::ModifyTaskInfoRequest& request) const;
			ModifyWhitelistTemplateOutcome modifyWhitelistTemplate(const Model::ModifyWhitelistTemplateRequest &request)const;
			void modifyWhitelistTemplateAsync(const Model::ModifyWhitelistTemplateRequest& request, const ModifyWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWhitelistTemplateOutcomeCallable modifyWhitelistTemplateCallable(const Model::ModifyWhitelistTemplateRequest& request) const;
			PreCheckCreateOrderForDeleteDBNodesOutcome preCheckCreateOrderForDeleteDBNodes(const Model::PreCheckCreateOrderForDeleteDBNodesRequest &request)const;
			void preCheckCreateOrderForDeleteDBNodesAsync(const Model::PreCheckCreateOrderForDeleteDBNodesRequest& request, const PreCheckCreateOrderForDeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreCheckCreateOrderForDeleteDBNodesOutcomeCallable preCheckCreateOrderForDeleteDBNodesCallable(const Model::PreCheckCreateOrderForDeleteDBNodesRequest& request) const;
			PurgeDBInstanceLogOutcome purgeDBInstanceLog(const Model::PurgeDBInstanceLogRequest &request)const;
			void purgeDBInstanceLogAsync(const Model::PurgeDBInstanceLogRequest& request, const PurgeDBInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurgeDBInstanceLogOutcomeCallable purgeDBInstanceLogCallable(const Model::PurgeDBInstanceLogRequest& request) const;
			QueryNotifyOutcome queryNotify(const Model::QueryNotifyRequest &request)const;
			void queryNotifyAsync(const Model::QueryNotifyRequest& request, const QueryNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryNotifyOutcomeCallable queryNotifyCallable(const Model::QueryNotifyRequest& request) const;
			QueryRecommendByCodeOutcome queryRecommendByCode(const Model::QueryRecommendByCodeRequest &request)const;
			void queryRecommendByCodeAsync(const Model::QueryRecommendByCodeRequest& request, const QueryRecommendByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecommendByCodeOutcomeCallable queryRecommendByCodeCallable(const Model::QueryRecommendByCodeRequest& request) const;
			RebootRCInstanceOutcome rebootRCInstance(const Model::RebootRCInstanceRequest &request)const;
			void rebootRCInstanceAsync(const Model::RebootRCInstanceRequest& request, const RebootRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootRCInstanceOutcomeCallable rebootRCInstanceCallable(const Model::RebootRCInstanceRequest& request) const;
			RebootRCInstancesOutcome rebootRCInstances(const Model::RebootRCInstancesRequest &request)const;
			void rebootRCInstancesAsync(const Model::RebootRCInstancesRequest& request, const RebootRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootRCInstancesOutcomeCallable rebootRCInstancesCallable(const Model::RebootRCInstancesRequest& request) const;
			RebuildDBInstanceOutcome rebuildDBInstance(const Model::RebuildDBInstanceRequest &request)const;
			void rebuildDBInstanceAsync(const Model::RebuildDBInstanceRequest& request, const RebuildDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildDBInstanceOutcomeCallable rebuildDBInstanceCallable(const Model::RebuildDBInstanceRequest& request) const;
			RebuildReplicationLinkOutcome rebuildReplicationLink(const Model::RebuildReplicationLinkRequest &request)const;
			void rebuildReplicationLinkAsync(const Model::RebuildReplicationLinkRequest& request, const RebuildReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildReplicationLinkOutcomeCallable rebuildReplicationLinkCallable(const Model::RebuildReplicationLinkRequest& request) const;
			ReceiveDBInstanceOutcome receiveDBInstance(const Model::ReceiveDBInstanceRequest &request)const;
			void receiveDBInstanceAsync(const Model::ReceiveDBInstanceRequest& request, const ReceiveDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReceiveDBInstanceOutcomeCallable receiveDBInstanceCallable(const Model::ReceiveDBInstanceRequest& request) const;
			RecoveryDBInstanceOutcome recoveryDBInstance(const Model::RecoveryDBInstanceRequest &request)const;
			void recoveryDBInstanceAsync(const Model::RecoveryDBInstanceRequest& request, const RecoveryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoveryDBInstanceOutcomeCallable recoveryDBInstanceCallable(const Model::RecoveryDBInstanceRequest& request) const;
			RedeployRCInstanceOutcome redeployRCInstance(const Model::RedeployRCInstanceRequest &request)const;
			void redeployRCInstanceAsync(const Model::RedeployRCInstanceRequest& request, const RedeployRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RedeployRCInstanceOutcomeCallable redeployRCInstanceCallable(const Model::RedeployRCInstanceRequest& request) const;
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
			RenewRCInstanceOutcome renewRCInstance(const Model::RenewRCInstanceRequest &request)const;
			void renewRCInstanceAsync(const Model::RenewRCInstanceRequest& request, const RenewRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewRCInstanceOutcomeCallable renewRCInstanceCallable(const Model::RenewRCInstanceRequest& request) const;
			ReplaceRCInstanceSystemDiskOutcome replaceRCInstanceSystemDisk(const Model::ReplaceRCInstanceSystemDiskRequest &request)const;
			void replaceRCInstanceSystemDiskAsync(const Model::ReplaceRCInstanceSystemDiskRequest& request, const ReplaceRCInstanceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceRCInstanceSystemDiskOutcomeCallable replaceRCInstanceSystemDiskCallable(const Model::ReplaceRCInstanceSystemDiskRequest& request) const;
			ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
			void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			ResizeRCInstanceDiskOutcome resizeRCInstanceDisk(const Model::ResizeRCInstanceDiskRequest &request)const;
			void resizeRCInstanceDiskAsync(const Model::ResizeRCInstanceDiskRequest& request, const ResizeRCInstanceDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeRCInstanceDiskOutcomeCallable resizeRCInstanceDiskCallable(const Model::ResizeRCInstanceDiskRequest& request) const;
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
			RevokeRCSecurityGroupPermissionOutcome revokeRCSecurityGroupPermission(const Model::RevokeRCSecurityGroupPermissionRequest &request)const;
			void revokeRCSecurityGroupPermissionAsync(const Model::RevokeRCSecurityGroupPermissionRequest& request, const RevokeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeRCSecurityGroupPermissionOutcomeCallable revokeRCSecurityGroupPermissionCallable(const Model::RevokeRCSecurityGroupPermissionRequest& request) const;
			RunRCCommandOutcome runRCCommand(const Model::RunRCCommandRequest &request)const;
			void runRCCommandAsync(const Model::RunRCCommandRequest& request, const RunRCCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunRCCommandOutcomeCallable runRCCommandCallable(const Model::RunRCCommandRequest& request) const;
			RunRCInstancesOutcome runRCInstances(const Model::RunRCInstancesRequest &request)const;
			void runRCInstancesAsync(const Model::RunRCInstancesRequest& request, const RunRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunRCInstancesOutcomeCallable runRCInstancesCallable(const Model::RunRCInstancesRequest& request) const;
			StartDBInstanceOutcome startDBInstance(const Model::StartDBInstanceRequest &request)const;
			void startDBInstanceAsync(const Model::StartDBInstanceRequest& request, const StartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDBInstanceOutcomeCallable startDBInstanceCallable(const Model::StartDBInstanceRequest& request) const;
			StartRCInstanceOutcome startRCInstance(const Model::StartRCInstanceRequest &request)const;
			void startRCInstanceAsync(const Model::StartRCInstanceRequest& request, const StartRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRCInstanceOutcomeCallable startRCInstanceCallable(const Model::StartRCInstanceRequest& request) const;
			StartRCInstancesOutcome startRCInstances(const Model::StartRCInstancesRequest &request)const;
			void startRCInstancesAsync(const Model::StartRCInstancesRequest& request, const StartRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRCInstancesOutcomeCallable startRCInstancesCallable(const Model::StartRCInstancesRequest& request) const;
			StopDBInstanceOutcome stopDBInstance(const Model::StopDBInstanceRequest &request)const;
			void stopDBInstanceAsync(const Model::StopDBInstanceRequest& request, const StopDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDBInstanceOutcomeCallable stopDBInstanceCallable(const Model::StopDBInstanceRequest& request) const;
			StopRCInstanceOutcome stopRCInstance(const Model::StopRCInstanceRequest &request)const;
			void stopRCInstanceAsync(const Model::StopRCInstanceRequest& request, const StopRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRCInstanceOutcomeCallable stopRCInstanceCallable(const Model::StopRCInstanceRequest& request) const;
			StopRCInstancesOutcome stopRCInstances(const Model::StopRCInstancesRequest &request)const;
			void stopRCInstancesAsync(const Model::StopRCInstancesRequest& request, const StopRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRCInstancesOutcomeCallable stopRCInstancesCallable(const Model::StopRCInstancesRequest& request) const;
			SwitchDBInstanceHAOutcome switchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request)const;
			void switchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceHAOutcomeCallable switchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request) const;
			SwitchDBInstanceNetTypeOutcome switchDBInstanceNetType(const Model::SwitchDBInstanceNetTypeRequest &request)const;
			void switchDBInstanceNetTypeAsync(const Model::SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceNetTypeOutcomeCallable switchDBInstanceNetTypeCallable(const Model::SwitchDBInstanceNetTypeRequest& request) const;
			SwitchDBInstanceVpcOutcome switchDBInstanceVpc(const Model::SwitchDBInstanceVpcRequest &request)const;
			void switchDBInstanceVpcAsync(const Model::SwitchDBInstanceVpcRequest& request, const SwitchDBInstanceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceVpcOutcomeCallable switchDBInstanceVpcCallable(const Model::SwitchDBInstanceVpcRequest& request) const;
			SwitchOverMajorVersionUpgradeOutcome switchOverMajorVersionUpgrade(const Model::SwitchOverMajorVersionUpgradeRequest &request)const;
			void switchOverMajorVersionUpgradeAsync(const Model::SwitchOverMajorVersionUpgradeRequest& request, const SwitchOverMajorVersionUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchOverMajorVersionUpgradeOutcomeCallable switchOverMajorVersionUpgradeCallable(const Model::SwitchOverMajorVersionUpgradeRequest& request) const;
			SwitchReplicationLinkOutcome switchReplicationLink(const Model::SwitchReplicationLinkRequest &request)const;
			void switchReplicationLinkAsync(const Model::SwitchReplicationLinkRequest& request, const SwitchReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchReplicationLinkOutcomeCallable switchReplicationLinkCallable(const Model::SwitchReplicationLinkRequest& request) const;
			SyncRCKeyPairOutcome syncRCKeyPair(const Model::SyncRCKeyPairRequest &request)const;
			void syncRCKeyPairAsync(const Model::SyncRCKeyPairRequest& request, const SyncRCKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncRCKeyPairOutcomeCallable syncRCKeyPairCallable(const Model::SyncRCKeyPairRequest& request) const;
			SyncRCSecurityGroupOutcome syncRCSecurityGroup(const Model::SyncRCSecurityGroupRequest &request)const;
			void syncRCSecurityGroupAsync(const Model::SyncRCSecurityGroupRequest& request, const SyncRCSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncRCSecurityGroupOutcomeCallable syncRCSecurityGroupCallable(const Model::SyncRCSecurityGroupRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TerminateMigrateTaskOutcome terminateMigrateTask(const Model::TerminateMigrateTaskRequest &request)const;
			void terminateMigrateTaskAsync(const Model::TerminateMigrateTaskRequest& request, const TerminateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateMigrateTaskOutcomeCallable terminateMigrateTaskCallable(const Model::TerminateMigrateTaskRequest& request) const;
			TransformDBInstancePayTypeOutcome transformDBInstancePayType(const Model::TransformDBInstancePayTypeRequest &request)const;
			void transformDBInstancePayTypeAsync(const Model::TransformDBInstancePayTypeRequest& request, const TransformDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformDBInstancePayTypeOutcomeCallable transformDBInstancePayTypeCallable(const Model::TransformDBInstancePayTypeRequest& request) const;
			UnassociateEipAddressWithRCInstanceOutcome unassociateEipAddressWithRCInstance(const Model::UnassociateEipAddressWithRCInstanceRequest &request)const;
			void unassociateEipAddressWithRCInstanceAsync(const Model::UnassociateEipAddressWithRCInstanceRequest& request, const UnassociateEipAddressWithRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateEipAddressWithRCInstanceOutcomeCallable unassociateEipAddressWithRCInstanceCallable(const Model::UnassociateEipAddressWithRCInstanceRequest& request) const;
			UnlockAccountOutcome unlockAccount(const Model::UnlockAccountRequest &request)const;
			void unlockAccountAsync(const Model::UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockAccountOutcomeCallable unlockAccountCallable(const Model::UnlockAccountRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdatePostgresExtensionsOutcome updatePostgresExtensions(const Model::UpdatePostgresExtensionsRequest &request)const;
			void updatePostgresExtensionsAsync(const Model::UpdatePostgresExtensionsRequest& request, const UpdatePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePostgresExtensionsOutcomeCallable updatePostgresExtensionsCallable(const Model::UpdatePostgresExtensionsRequest& request) const;
			UpdateUserBackupFileOutcome updateUserBackupFile(const Model::UpdateUserBackupFileRequest &request)const;
			void updateUserBackupFileAsync(const Model::UpdateUserBackupFileRequest& request, const UpdateUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserBackupFileOutcomeCallable updateUserBackupFileCallable(const Model::UpdateUserBackupFileRequest& request) const;
			UpgradeDBInstanceEngineVersionOutcome upgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request)const;
			void upgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceEngineVersionOutcomeCallable upgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request) const;
			UpgradeDBInstanceKernelVersionOutcome upgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request)const;
			void upgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceKernelVersionOutcomeCallable upgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request) const;
			UpgradeDBInstanceMajorVersionOutcome upgradeDBInstanceMajorVersion(const Model::UpgradeDBInstanceMajorVersionRequest &request)const;
			void upgradeDBInstanceMajorVersionAsync(const Model::UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceMajorVersionOutcomeCallable upgradeDBInstanceMajorVersionCallable(const Model::UpgradeDBInstanceMajorVersionRequest& request) const;
			UpgradeDBInstanceMajorVersionPrecheckOutcome upgradeDBInstanceMajorVersionPrecheck(const Model::UpgradeDBInstanceMajorVersionPrecheckRequest &request)const;
			void upgradeDBInstanceMajorVersionPrecheckAsync(const Model::UpgradeDBInstanceMajorVersionPrecheckRequest& request, const UpgradeDBInstanceMajorVersionPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceMajorVersionPrecheckOutcomeCallable upgradeDBInstanceMajorVersionPrecheckCallable(const Model::UpgradeDBInstanceMajorVersionPrecheckRequest& request) const;
			UpgradeDBProxyInstanceKernelVersionOutcome upgradeDBProxyInstanceKernelVersion(const Model::UpgradeDBProxyInstanceKernelVersionRequest &request)const;
			void upgradeDBProxyInstanceKernelVersionAsync(const Model::UpgradeDBProxyInstanceKernelVersionRequest& request, const UpgradeDBProxyInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBProxyInstanceKernelVersionOutcomeCallable upgradeDBProxyInstanceKernelVersionCallable(const Model::UpgradeDBProxyInstanceKernelVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RDS_RDSCLIENT_H_
