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

#ifndef ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_
#define ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PolardbExport.h"
#include "model/AbortDBClusterMigrationRequest.h"
#include "model/AbortDBClusterMigrationResult.h"
#include "model/AddEncryptionDBRolePrivilegeRequest.h"
#include "model/AddEncryptionDBRolePrivilegeResult.h"
#include "model/AddFirewallRulesRequest.h"
#include "model/AddFirewallRulesResult.h"
#include "model/AddSQLRateLimitingRulesRequest.h"
#include "model/AddSQLRateLimitingRulesResult.h"
#include "model/AttachApplicationPolarFSRequest.h"
#include "model/AttachApplicationPolarFSResult.h"
#include "model/CancelActiveOperationTasksRequest.h"
#include "model/CancelActiveOperationTasksResult.h"
#include "model/CancelCronJobPolicyServerlessRequest.h"
#include "model/CancelCronJobPolicyServerlessResult.h"
#include "model/CancelScheduleTasksRequest.h"
#include "model/CancelScheduleTasksResult.h"
#include "model/CheckAccountNameRequest.h"
#include "model/CheckAccountNameResult.h"
#include "model/CheckAccountNameZonalRequest.h"
#include "model/CheckAccountNameZonalResult.h"
#include "model/CheckConnectionStringRequest.h"
#include "model/CheckConnectionStringResult.h"
#include "model/CheckDBNameRequest.h"
#include "model/CheckDBNameResult.h"
#include "model/CheckDBNameZonalRequest.h"
#include "model/CheckDBNameZonalResult.h"
#include "model/CheckKMSAuthorizedRequest.h"
#include "model/CheckKMSAuthorizedResult.h"
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CloseAITaskRequest.h"
#include "model/CloseAITaskResult.h"
#include "model/CloseDBClusterMigrationRequest.h"
#include "model/CloseDBClusterMigrationResult.h"
#include "model/ContinueDBClusterMigrationRequest.h"
#include "model/ContinueDBClusterMigrationResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateAccountZonalRequest.h"
#include "model/CreateAccountZonalResult.h"
#include "model/CreateActivationCodeRequest.h"
#include "model/CreateActivationCodeResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateApplicationEndpointAddressRequest.h"
#include "model/CreateApplicationEndpointAddressResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateColdStorageInstanceRequest.h"
#include "model/CreateColdStorageInstanceResult.h"
#include "model/CreateCronJobPolicyServerlessRequest.h"
#include "model/CreateCronJobPolicyServerlessResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/CreateDBClusterEndpointRequest.h"
#include "model/CreateDBClusterEndpointResult.h"
#include "model/CreateDBClusterEndpointZonalRequest.h"
#include "model/CreateDBClusterEndpointZonalResult.h"
#include "model/CreateDBEndpointAddressRequest.h"
#include "model/CreateDBEndpointAddressResult.h"
#include "model/CreateDBLinkRequest.h"
#include "model/CreateDBLinkResult.h"
#include "model/CreateDBNodesRequest.h"
#include "model/CreateDBNodesResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateDatabaseZonalRequest.h"
#include "model/CreateDatabaseZonalResult.h"
#include "model/CreateExtensionsRequest.h"
#include "model/CreateExtensionsResult.h"
#include "model/CreateGlobalDataNetworkRequest.h"
#include "model/CreateGlobalDataNetworkResult.h"
#include "model/CreateGlobalDatabaseNetworkRequest.h"
#include "model/CreateGlobalDatabaseNetworkResult.h"
#include "model/CreateGlobalSecurityIPGroupRequest.h"
#include "model/CreateGlobalSecurityIPGroupResult.h"
#include "model/CreateNetworkChannelRequest.h"
#include "model/CreateNetworkChannelResult.h"
#include "model/CreateOrGetVirtualLicenseOrderRequest.h"
#include "model/CreateOrGetVirtualLicenseOrderResult.h"
#include "model/CreateParameterGroupRequest.h"
#include "model/CreateParameterGroupResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateStoragePlanRequest.h"
#include "model/CreateStoragePlanResult.h"
#include "model/DeleteAIDBClusterRequest.h"
#include "model/DeleteAIDBClusterResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteAccountZonalRequest.h"
#include "model/DeleteAccountZonalResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteApplicationEndpointAddressRequest.h"
#include "model/DeleteApplicationEndpointAddressResult.h"
#include "model/DeleteBackupRequest.h"
#include "model/DeleteBackupResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteDBClusterEndpointRequest.h"
#include "model/DeleteDBClusterEndpointResult.h"
#include "model/DeleteDBClusterEndpointZonalRequest.h"
#include "model/DeleteDBClusterEndpointZonalResult.h"
#include "model/DeleteDBEndpointAddressRequest.h"
#include "model/DeleteDBEndpointAddressResult.h"
#include "model/DeleteDBLinkRequest.h"
#include "model/DeleteDBLinkResult.h"
#include "model/DeleteDBNodesRequest.h"
#include "model/DeleteDBNodesResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteDatabaseZonalRequest.h"
#include "model/DeleteDatabaseZonalResult.h"
#include "model/DeleteEncryptionDBRolePrivilegeRequest.h"
#include "model/DeleteEncryptionDBRolePrivilegeResult.h"
#include "model/DeleteExtensionsRequest.h"
#include "model/DeleteExtensionsResult.h"
#include "model/DeleteFirewallRulesRequest.h"
#include "model/DeleteFirewallRulesResult.h"
#include "model/DeleteGlobalDataNetworkRequest.h"
#include "model/DeleteGlobalDataNetworkResult.h"
#include "model/DeleteGlobalDatabaseNetworkRequest.h"
#include "model/DeleteGlobalDatabaseNetworkResult.h"
#include "model/DeleteGlobalSecurityIPGroupRequest.h"
#include "model/DeleteGlobalSecurityIPGroupResult.h"
#include "model/DeleteMaskingRulesRequest.h"
#include "model/DeleteMaskingRulesResult.h"
#include "model/DeleteNetworkChannelRequest.h"
#include "model/DeleteNetworkChannelResult.h"
#include "model/DeleteParameterGroupRequest.h"
#include "model/DeleteParameterGroupResult.h"
#include "model/DeleteSQLRateLimitingRulesRequest.h"
#include "model/DeleteSQLRateLimitingRulesResult.h"
#include "model/DescribeAIDBClusterAttributeRequest.h"
#include "model/DescribeAIDBClusterAttributeResult.h"
#include "model/DescribeAIDBClusterPerformanceRequest.h"
#include "model/DescribeAIDBClusterPerformanceResult.h"
#include "model/DescribeAIDBClustersRequest.h"
#include "model/DescribeAIDBClustersResult.h"
#include "model/DescribeAITaskStatusRequest.h"
#include "model/DescribeAITaskStatusResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAccountsZonalRequest.h"
#include "model/DescribeAccountsZonalResult.h"
#include "model/DescribeActivationCodeDetailsRequest.h"
#include "model/DescribeActivationCodeDetailsResult.h"
#include "model/DescribeActivationCodesRequest.h"
#include "model/DescribeActivationCodesResult.h"
#include "model/DescribeActiveOperationMaintainConfRequest.h"
#include "model/DescribeActiveOperationMaintainConfResult.h"
#include "model/DescribeActiveOperationTasksRequest.h"
#include "model/DescribeActiveOperationTasksResult.h"
#include "model/DescribeApplicationAttributeRequest.h"
#include "model/DescribeApplicationAttributeResult.h"
#include "model/DescribeApplicationParametersRequest.h"
#include "model/DescribeApplicationParametersResult.h"
#include "model/DescribeApplicationServerlessConfRequest.h"
#include "model/DescribeApplicationServerlessConfResult.h"
#include "model/DescribeApplicationsRequest.h"
#include "model/DescribeApplicationsResult.h"
#include "model/DescribeAutoRenewAttributeRequest.h"
#include "model/DescribeAutoRenewAttributeResult.h"
#include "model/DescribeAvailableCrossRegionsRequest.h"
#include "model/DescribeAvailableCrossRegionsResult.h"
#include "model/DescribeBackupLogsRequest.h"
#include "model/DescribeBackupLogsResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupRegionsRequest.h"
#include "model/DescribeBackupRegionsResult.h"
#include "model/DescribeBackupTasksRequest.h"
#include "model/DescribeBackupTasksResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeCharacterSetNameRequest.h"
#include "model/DescribeCharacterSetNameResult.h"
#include "model/DescribeClassListRequest.h"
#include "model/DescribeClassListResult.h"
#include "model/DescribeColdStorageInstanceRequest.h"
#include "model/DescribeColdStorageInstanceResult.h"
#include "model/DescribeCronJobPolicyServerlessRequest.h"
#include "model/DescribeCronJobPolicyServerlessResult.h"
#include "model/DescribeCrossCloudLevelsRequest.h"
#include "model/DescribeCrossCloudLevelsResult.h"
#include "model/DescribeCrossCloudRegionRequest.h"
#include "model/DescribeCrossCloudRegionResult.h"
#include "model/DescribeCrossCloudRegionMappingToAliyunRequest.h"
#include "model/DescribeCrossCloudRegionMappingToAliyunResult.h"
#include "model/DescribeDBClusterAccessWhitelistRequest.h"
#include "model/DescribeDBClusterAccessWhitelistResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterAuditLogCollectorRequest.h"
#include "model/DescribeDBClusterAuditLogCollectorResult.h"
#include "model/DescribeDBClusterAvailableResourcesRequest.h"
#include "model/DescribeDBClusterAvailableResourcesResult.h"
#include "model/DescribeDBClusterConnectivityRequest.h"
#include "model/DescribeDBClusterConnectivityResult.h"
#include "model/DescribeDBClusterEncryptionKeyRequest.h"
#include "model/DescribeDBClusterEncryptionKeyResult.h"
#include "model/DescribeDBClusterEndpointsRequest.h"
#include "model/DescribeDBClusterEndpointsResult.h"
#include "model/DescribeDBClusterEndpointsZonalRequest.h"
#include "model/DescribeDBClusterEndpointsZonalResult.h"
#include "model/DescribeDBClusterMigrationRequest.h"
#include "model/DescribeDBClusterMigrationResult.h"
#include "model/DescribeDBClusterMonitorRequest.h"
#include "model/DescribeDBClusterMonitorResult.h"
#include "model/DescribeDBClusterNetInfoRequest.h"
#include "model/DescribeDBClusterNetInfoResult.h"
#include "model/DescribeDBClusterParametersRequest.h"
#include "model/DescribeDBClusterParametersResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBClusterProxyRequest.h"
#include "model/DescribeDBClusterProxyResult.h"
#include "model/DescribeDBClusterSSLRequest.h"
#include "model/DescribeDBClusterSSLResult.h"
#include "model/DescribeDBClusterServerlessConfRequest.h"
#include "model/DescribeDBClusterServerlessConfResult.h"
#include "model/DescribeDBClusterTDERequest.h"
#include "model/DescribeDBClusterTDEResult.h"
#include "model/DescribeDBClusterVersionRequest.h"
#include "model/DescribeDBClusterVersionResult.h"
#include "model/DescribeDBClusterVersionZonalRequest.h"
#include "model/DescribeDBClusterVersionZonalResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeDBClustersWithBackupsRequest.h"
#include "model/DescribeDBClustersWithBackupsResult.h"
#include "model/DescribeDBClustersZonalRequest.h"
#include "model/DescribeDBClustersZonalResult.h"
#include "model/DescribeDBInitializeVariableRequest.h"
#include "model/DescribeDBInitializeVariableResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBLinksRequest.h"
#include "model/DescribeDBLinksResult.h"
#include "model/DescribeDBLogFilesRequest.h"
#include "model/DescribeDBLogFilesResult.h"
#include "model/DescribeDBMiniEngineVersionsRequest.h"
#include "model/DescribeDBMiniEngineVersionsResult.h"
#include "model/DescribeDBNodePerformanceRequest.h"
#include "model/DescribeDBNodePerformanceResult.h"
#include "model/DescribeDBNodesParametersRequest.h"
#include "model/DescribeDBNodesParametersResult.h"
#include "model/DescribeDBProxyPerformanceRequest.h"
#include "model/DescribeDBProxyPerformanceResult.h"
#include "model/DescribeDasConfigRequest.h"
#include "model/DescribeDasConfigResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeDatabasesZonalRequest.h"
#include "model/DescribeDatabasesZonalResult.h"
#include "model/DescribeDbClusterAttributeZonalRequest.h"
#include "model/DescribeDbClusterAttributeZonalResult.h"
#include "model/DescribeDetachedBackupsRequest.h"
#include "model/DescribeDetachedBackupsResult.h"
#include "model/DescribeEncryptionDBRolePrivilegeRequest.h"
#include "model/DescribeEncryptionDBRolePrivilegeResult.h"
#include "model/DescribeEncryptionDBSecretRequest.h"
#include "model/DescribeEncryptionDBSecretResult.h"
#include "model/DescribeExtensionsRequest.h"
#include "model/DescribeExtensionsResult.h"
#include "model/DescribeFirewallRulesRequest.h"
#include "model/DescribeFirewallRulesResult.h"
#include "model/DescribeGlobalDataNetworkListRequest.h"
#include "model/DescribeGlobalDataNetworkListResult.h"
#include "model/DescribeGlobalDatabaseNetworkRequest.h"
#include "model/DescribeGlobalDatabaseNetworkResult.h"
#include "model/DescribeGlobalDatabaseNetworksRequest.h"
#include "model/DescribeGlobalDatabaseNetworksResult.h"
#include "model/DescribeGlobalSecurityIPGroupRequest.h"
#include "model/DescribeGlobalSecurityIPGroupResult.h"
#include "model/DescribeGlobalSecurityIPGroupRelationRequest.h"
#include "model/DescribeGlobalSecurityIPGroupRelationResult.h"
#include "model/DescribeHALogsRequest.h"
#include "model/DescribeHALogsResult.h"
#include "model/DescribeHistoryTasksRequest.h"
#include "model/DescribeHistoryTasksResult.h"
#include "model/DescribeHistoryTasksStatRequest.h"
#include "model/DescribeHistoryTasksStatResult.h"
#include "model/DescribeLicenseOrderDetailsRequest.h"
#include "model/DescribeLicenseOrderDetailsResult.h"
#include "model/DescribeLicenseOrdersRequest.h"
#include "model/DescribeLicenseOrdersResult.h"
#include "model/DescribeLocalAvailableRecoveryTimeRequest.h"
#include "model/DescribeLocalAvailableRecoveryTimeResult.h"
#include "model/DescribeLogBackupPolicyRequest.h"
#include "model/DescribeLogBackupPolicyResult.h"
#include "model/DescribeMaskingRulesRequest.h"
#include "model/DescribeMaskingRulesResult.h"
#include "model/DescribeMetaListRequest.h"
#include "model/DescribeMetaListResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeNetworkChannelRequest.h"
#include "model/DescribeNetworkChannelResult.h"
#include "model/DescribeParameterGroupRequest.h"
#include "model/DescribeParameterGroupResult.h"
#include "model/DescribeParameterGroupsRequest.h"
#include "model/DescribeParameterGroupsResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribePendingMaintenanceActionRequest.h"
#include "model/DescribePendingMaintenanceActionResult.h"
#include "model/DescribePendingMaintenanceActionsRequest.h"
#include "model/DescribePendingMaintenanceActionsResult.h"
#include "model/DescribePolarSQLCollectorPolicyRequest.h"
#include "model/DescribePolarSQLCollectorPolicyResult.h"
#include "model/DescribeRdsVSwitchsRequest.h"
#include "model/DescribeRdsVSwitchsResult.h"
#include "model/DescribeRdsVpcsRequest.h"
#include "model/DescribeRdsVpcsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeResourcePackagesRequest.h"
#include "model/DescribeResourcePackagesResult.h"
#include "model/DescribeSQLRateLimitingRulesRequest.h"
#include "model/DescribeSQLRateLimitingRulesResult.h"
#include "model/DescribeScheduleTasksRequest.h"
#include "model/DescribeScheduleTasksResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSlowLogsRequest.h"
#include "model/DescribeSlowLogsResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeUpgradeReportRequest.h"
#include "model/DescribeUpgradeReportResult.h"
#include "model/DescribeUserEncryptionKeyListRequest.h"
#include "model/DescribeUserEncryptionKeyListResult.h"
#include "model/DescribeVSwitchListRequest.h"
#include "model/DescribeVSwitchListResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DescribeVpcsRequest.h"
#include "model/DescribeVpcsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DisableDBClusterOrcaRequest.h"
#include "model/DisableDBClusterOrcaResult.h"
#include "model/DisableDBClusterServerlessRequest.h"
#include "model/DisableDBClusterServerlessResult.h"
#include "model/EnableDBClusterOrcaRequest.h"
#include "model/EnableDBClusterOrcaResult.h"
#include "model/EnableDBClusterServerlessRequest.h"
#include "model/EnableDBClusterServerlessResult.h"
#include "model/EnableFirewallRulesRequest.h"
#include "model/EnableFirewallRulesResult.h"
#include "model/EnableSQLRateLimitingRulesRequest.h"
#include "model/EnableSQLRateLimitingRulesResult.h"
#include "model/EvaluateRegionResourceRequest.h"
#include "model/EvaluateRegionResourceResult.h"
#include "model/ExecuteCrossCloudOpenAPIRequest.h"
#include "model/ExecuteCrossCloudOpenAPIResult.h"
#include "model/FailoverDBClusterRequest.h"
#include "model/FailoverDBClusterResult.h"
#include "model/FailoverDBClusterZonalRequest.h"
#include "model/FailoverDBClusterZonalResult.h"
#include "model/GenerateUpgradeReportForSyncCloneRequest.h"
#include "model/GenerateUpgradeReportForSyncCloneResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/GrantAccountPrivilegeZonalRequest.h"
#include "model/GrantAccountPrivilegeZonalResult.h"
#include "model/ListOrdersRequest.h"
#include "model/ListOrdersResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagResourcesForRegionRequest.h"
#include "model/ListTagResourcesForRegionResult.h"
#include "model/ManuallyStartDBClusterRequest.h"
#include "model/ManuallyStartDBClusterResult.h"
#include "model/ModifyAIDBClusterDescriptionRequest.h"
#include "model/ModifyAIDBClusterDescriptionResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountDescriptionZonalRequest.h"
#include "model/ModifyAccountDescriptionZonalResult.h"
#include "model/ModifyAccountLockStateRequest.h"
#include "model/ModifyAccountLockStateResult.h"
#include "model/ModifyAccountPasswordRequest.h"
#include "model/ModifyAccountPasswordResult.h"
#include "model/ModifyAccountPasswordZonalRequest.h"
#include "model/ModifyAccountPasswordZonalResult.h"
#include "model/ModifyActiveOperationMaintainConfRequest.h"
#include "model/ModifyActiveOperationMaintainConfResult.h"
#include "model/ModifyActiveOperationTasksRequest.h"
#include "model/ModifyActiveOperationTasksResult.h"
#include "model/ModifyApplicationDescriptionRequest.h"
#include "model/ModifyApplicationDescriptionResult.h"
#include "model/ModifyApplicationParameterRequest.h"
#include "model/ModifyApplicationParameterResult.h"
#include "model/ModifyApplicationServerlessConfRequest.h"
#include "model/ModifyApplicationServerlessConfResult.h"
#include "model/ModifyApplicationWhitelistRequest.h"
#include "model/ModifyApplicationWhitelistResult.h"
#include "model/ModifyAutoRenewAttributeRequest.h"
#include "model/ModifyAutoRenewAttributeResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyCronJobPolicyServerlessRequest.h"
#include "model/ModifyCronJobPolicyServerlessResult.h"
#include "model/ModifyDBClusterRequest.h"
#include "model/ModifyDBClusterResult.h"
#include "model/ModifyDBClusterAccessWhitelistRequest.h"
#include "model/ModifyDBClusterAccessWhitelistResult.h"
#include "model/ModifyDBClusterAndNodesParametersRequest.h"
#include "model/ModifyDBClusterAndNodesParametersResult.h"
#include "model/ModifyDBClusterArchRequest.h"
#include "model/ModifyDBClusterArchResult.h"
#include "model/ModifyDBClusterAuditLogCollectorRequest.h"
#include "model/ModifyDBClusterAuditLogCollectorResult.h"
#include "model/ModifyDBClusterDeletionRequest.h"
#include "model/ModifyDBClusterDeletionResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterDescriptionZonalRequest.h"
#include "model/ModifyDBClusterDescriptionZonalResult.h"
#include "model/ModifyDBClusterEndpointRequest.h"
#include "model/ModifyDBClusterEndpointResult.h"
#include "model/ModifyDBClusterEndpointZonalRequest.h"
#include "model/ModifyDBClusterEndpointZonalResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ModifyDBClusterMigrationRequest.h"
#include "model/ModifyDBClusterMigrationResult.h"
#include "model/ModifyDBClusterMigrationEndpointRequest.h"
#include "model/ModifyDBClusterMigrationEndpointResult.h"
#include "model/ModifyDBClusterMonitorRequest.h"
#include "model/ModifyDBClusterMonitorResult.h"
#include "model/ModifyDBClusterParametersRequest.h"
#include "model/ModifyDBClusterParametersResult.h"
#include "model/ModifyDBClusterPrimaryZoneRequest.h"
#include "model/ModifyDBClusterPrimaryZoneResult.h"
#include "model/ModifyDBClusterResourceGroupRequest.h"
#include "model/ModifyDBClusterResourceGroupResult.h"
#include "model/ModifyDBClusterSSLRequest.h"
#include "model/ModifyDBClusterSSLResult.h"
#include "model/ModifyDBClusterServerlessConfRequest.h"
#include "model/ModifyDBClusterServerlessConfResult.h"
#include "model/ModifyDBClusterStoragePerformanceRequest.h"
#include "model/ModifyDBClusterStoragePerformanceResult.h"
#include "model/ModifyDBClusterStorageSpaceRequest.h"
#include "model/ModifyDBClusterStorageSpaceResult.h"
#include "model/ModifyDBClusterTDERequest.h"
#include "model/ModifyDBClusterTDEResult.h"
#include "model/ModifyDBClusterVpcRequest.h"
#include "model/ModifyDBClusterVpcResult.h"
#include "model/ModifyDBDescriptionRequest.h"
#include "model/ModifyDBDescriptionResult.h"
#include "model/ModifyDBDescriptionZonalRequest.h"
#include "model/ModifyDBDescriptionZonalResult.h"
#include "model/ModifyDBEndpointAddressRequest.h"
#include "model/ModifyDBEndpointAddressResult.h"
#include "model/ModifyDBNodeClassRequest.h"
#include "model/ModifyDBNodeClassResult.h"
#include "model/ModifyDBNodeConfigRequest.h"
#include "model/ModifyDBNodeConfigResult.h"
#include "model/ModifyDBNodeDescriptionRequest.h"
#include "model/ModifyDBNodeDescriptionResult.h"
#include "model/ModifyDBNodeHotReplicaModeRequest.h"
#include "model/ModifyDBNodeHotReplicaModeResult.h"
#include "model/ModifyDBNodeSccModeRequest.h"
#include "model/ModifyDBNodeSccModeResult.h"
#include "model/ModifyDBNodesClassRequest.h"
#include "model/ModifyDBNodesClassResult.h"
#include "model/ModifyDBNodesParametersRequest.h"
#include "model/ModifyDBNodesParametersResult.h"
#include "model/ModifyEncryptionDBRolePrivilegeRequest.h"
#include "model/ModifyEncryptionDBRolePrivilegeResult.h"
#include "model/ModifyEncryptionDBSecretRequest.h"
#include "model/ModifyEncryptionDBSecretResult.h"
#include "model/ModifyFirewallRulesRequest.h"
#include "model/ModifyFirewallRulesResult.h"
#include "model/ModifyGlobalDatabaseNetworkRequest.h"
#include "model/ModifyGlobalDatabaseNetworkResult.h"
#include "model/ModifyGlobalSecurityIPGroupRequest.h"
#include "model/ModifyGlobalSecurityIPGroupResult.h"
#include "model/ModifyGlobalSecurityIPGroupNameRequest.h"
#include "model/ModifyGlobalSecurityIPGroupNameResult.h"
#include "model/ModifyGlobalSecurityIPGroupRelationRequest.h"
#include "model/ModifyGlobalSecurityIPGroupRelationResult.h"
#include "model/ModifyLogBackupPolicyRequest.h"
#include "model/ModifyLogBackupPolicyResult.h"
#include "model/ModifyMaskingRulesRequest.h"
#include "model/ModifyMaskingRulesResult.h"
#include "model/ModifyPendingMaintenanceActionRequest.h"
#include "model/ModifyPendingMaintenanceActionResult.h"
#include "model/ModifyResourcePackageRequest.h"
#include "model/ModifyResourcePackageResult.h"
#include "model/ModifySQLRateLimitingRulesRequest.h"
#include "model/ModifySQLRateLimitingRulesResult.h"
#include "model/ModifyScheduleTaskRequest.h"
#include "model/ModifyScheduleTaskResult.h"
#include "model/OpenAITaskRequest.h"
#include "model/OpenAITaskResult.h"
#include "model/ReactivateDBClusterBackupRequest.h"
#include "model/ReactivateDBClusterBackupResult.h"
#include "model/RefreshDBClusterStorageUsageRequest.h"
#include "model/RefreshDBClusterStorageUsageResult.h"
#include "model/RemoveDBClusterFromGDNRequest.h"
#include "model/RemoveDBClusterFromGDNResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/ResetAccountZonalRequest.h"
#include "model/ResetAccountZonalResult.h"
#include "model/ResetGlobalDatabaseNetworkRequest.h"
#include "model/ResetGlobalDatabaseNetworkResult.h"
#include "model/RestartDBLinkRequest.h"
#include "model/RestartDBLinkResult.h"
#include "model/RestartDBNodeRequest.h"
#include "model/RestartDBNodeResult.h"
#include "model/RestartDBNodeZonalRequest.h"
#include "model/RestartDBNodeZonalResult.h"
#include "model/RestoreTableRequest.h"
#include "model/RestoreTableResult.h"
#include "model/RevokeAccountPrivilegeRequest.h"
#include "model/RevokeAccountPrivilegeResult.h"
#include "model/RevokeAccountPrivilegeZonalRequest.h"
#include "model/RevokeAccountPrivilegeZonalResult.h"
#include "model/SwitchOverGlobalDatabaseNetworkRequest.h"
#include "model/SwitchOverGlobalDatabaseNetworkResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TempModifyDBNodeRequest.h"
#include "model/TempModifyDBNodeResult.h"
#include "model/TransformDBClusterPayTypeRequest.h"
#include "model/TransformDBClusterPayTypeResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateExtensionsRequest.h"
#include "model/UpdateExtensionsResult.h"
#include "model/UpgradeDBClusterVersionRequest.h"
#include "model/UpgradeDBClusterVersionResult.h"
#include "model/UpgradeDBClusterVersionZonalRequest.h"
#include "model/UpgradeDBClusterVersionZonalResult.h"


namespace AlibabaCloud
{
	namespace Polardb
	{
		class ALIBABACLOUD_POLARDB_EXPORT PolardbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortDBClusterMigrationResult> AbortDBClusterMigrationOutcome;
			typedef std::future<AbortDBClusterMigrationOutcome> AbortDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AbortDBClusterMigrationRequest&, const AbortDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::AddEncryptionDBRolePrivilegeResult> AddEncryptionDBRolePrivilegeOutcome;
			typedef std::future<AddEncryptionDBRolePrivilegeOutcome> AddEncryptionDBRolePrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AddEncryptionDBRolePrivilegeRequest&, const AddEncryptionDBRolePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEncryptionDBRolePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::AddFirewallRulesResult> AddFirewallRulesOutcome;
			typedef std::future<AddFirewallRulesOutcome> AddFirewallRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AddFirewallRulesRequest&, const AddFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::AddSQLRateLimitingRulesResult> AddSQLRateLimitingRulesOutcome;
			typedef std::future<AddSQLRateLimitingRulesOutcome> AddSQLRateLimitingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AddSQLRateLimitingRulesRequest&, const AddSQLRateLimitingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSQLRateLimitingRulesAsyncHandler;
			typedef Outcome<Error, Model::AttachApplicationPolarFSResult> AttachApplicationPolarFSOutcome;
			typedef std::future<AttachApplicationPolarFSOutcome> AttachApplicationPolarFSOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AttachApplicationPolarFSRequest&, const AttachApplicationPolarFSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachApplicationPolarFSAsyncHandler;
			typedef Outcome<Error, Model::CancelActiveOperationTasksResult> CancelActiveOperationTasksOutcome;
			typedef std::future<CancelActiveOperationTasksOutcome> CancelActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CancelActiveOperationTasksRequest&, const CancelActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::CancelCronJobPolicyServerlessResult> CancelCronJobPolicyServerlessOutcome;
			typedef std::future<CancelCronJobPolicyServerlessOutcome> CancelCronJobPolicyServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CancelCronJobPolicyServerlessRequest&, const CancelCronJobPolicyServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCronJobPolicyServerlessAsyncHandler;
			typedef Outcome<Error, Model::CancelScheduleTasksResult> CancelScheduleTasksOutcome;
			typedef std::future<CancelScheduleTasksOutcome> CancelScheduleTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CancelScheduleTasksRequest&, const CancelScheduleTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelScheduleTasksAsyncHandler;
			typedef Outcome<Error, Model::CheckAccountNameResult> CheckAccountNameOutcome;
			typedef std::future<CheckAccountNameOutcome> CheckAccountNameOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckAccountNameRequest&, const CheckAccountNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountNameAsyncHandler;
			typedef Outcome<Error, Model::CheckAccountNameZonalResult> CheckAccountNameZonalOutcome;
			typedef std::future<CheckAccountNameZonalOutcome> CheckAccountNameZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckAccountNameZonalRequest&, const CheckAccountNameZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountNameZonalAsyncHandler;
			typedef Outcome<Error, Model::CheckConnectionStringResult> CheckConnectionStringOutcome;
			typedef std::future<CheckConnectionStringOutcome> CheckConnectionStringOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckConnectionStringRequest&, const CheckConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::CheckDBNameResult> CheckDBNameOutcome;
			typedef std::future<CheckDBNameOutcome> CheckDBNameOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckDBNameRequest&, const CheckDBNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDBNameAsyncHandler;
			typedef Outcome<Error, Model::CheckDBNameZonalResult> CheckDBNameZonalOutcome;
			typedef std::future<CheckDBNameZonalOutcome> CheckDBNameZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckDBNameZonalRequest&, const CheckDBNameZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDBNameZonalAsyncHandler;
			typedef Outcome<Error, Model::CheckKMSAuthorizedResult> CheckKMSAuthorizedOutcome;
			typedef std::future<CheckKMSAuthorizedOutcome> CheckKMSAuthorizedOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckKMSAuthorizedRequest&, const CheckKMSAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckKMSAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CloseAITaskResult> CloseAITaskOutcome;
			typedef std::future<CloseAITaskOutcome> CloseAITaskOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CloseAITaskRequest&, const CloseAITaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseAITaskAsyncHandler;
			typedef Outcome<Error, Model::CloseDBClusterMigrationResult> CloseDBClusterMigrationOutcome;
			typedef std::future<CloseDBClusterMigrationOutcome> CloseDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CloseDBClusterMigrationRequest&, const CloseDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::ContinueDBClusterMigrationResult> ContinueDBClusterMigrationOutcome;
			typedef std::future<ContinueDBClusterMigrationOutcome> ContinueDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ContinueDBClusterMigrationRequest&, const ContinueDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountZonalResult> CreateAccountZonalOutcome;
			typedef std::future<CreateAccountZonalOutcome> CreateAccountZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateAccountZonalRequest&, const CreateAccountZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountZonalAsyncHandler;
			typedef Outcome<Error, Model::CreateActivationCodeResult> CreateActivationCodeOutcome;
			typedef std::future<CreateActivationCodeOutcome> CreateActivationCodeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateActivationCodeRequest&, const CreateActivationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateActivationCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationEndpointAddressResult> CreateApplicationEndpointAddressOutcome;
			typedef std::future<CreateApplicationEndpointAddressOutcome> CreateApplicationEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateApplicationEndpointAddressRequest&, const CreateApplicationEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateColdStorageInstanceResult> CreateColdStorageInstanceOutcome;
			typedef std::future<CreateColdStorageInstanceOutcome> CreateColdStorageInstanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateColdStorageInstanceRequest&, const CreateColdStorageInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateColdStorageInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateCronJobPolicyServerlessResult> CreateCronJobPolicyServerlessOutcome;
			typedef std::future<CreateCronJobPolicyServerlessOutcome> CreateCronJobPolicyServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateCronJobPolicyServerlessRequest&, const CreateCronJobPolicyServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCronJobPolicyServerlessAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterEndpointResult> CreateDBClusterEndpointOutcome;
			typedef std::future<CreateDBClusterEndpointOutcome> CreateDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBClusterEndpointRequest&, const CreateDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterEndpointZonalResult> CreateDBClusterEndpointZonalOutcome;
			typedef std::future<CreateDBClusterEndpointZonalOutcome> CreateDBClusterEndpointZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBClusterEndpointZonalRequest&, const CreateDBClusterEndpointZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterEndpointZonalAsyncHandler;
			typedef Outcome<Error, Model::CreateDBEndpointAddressResult> CreateDBEndpointAddressOutcome;
			typedef std::future<CreateDBEndpointAddressOutcome> CreateDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBEndpointAddressRequest&, const CreateDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateDBLinkResult> CreateDBLinkOutcome;
			typedef std::future<CreateDBLinkOutcome> CreateDBLinkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBLinkRequest&, const CreateDBLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBLinkAsyncHandler;
			typedef Outcome<Error, Model::CreateDBNodesResult> CreateDBNodesOutcome;
			typedef std::future<CreateDBNodesOutcome> CreateDBNodesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBNodesRequest&, const CreateDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBNodesAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseZonalResult> CreateDatabaseZonalOutcome;
			typedef std::future<CreateDatabaseZonalOutcome> CreateDatabaseZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDatabaseZonalRequest&, const CreateDatabaseZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseZonalAsyncHandler;
			typedef Outcome<Error, Model::CreateExtensionsResult> CreateExtensionsOutcome;
			typedef std::future<CreateExtensionsOutcome> CreateExtensionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateExtensionsRequest&, const CreateExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExtensionsAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalDataNetworkResult> CreateGlobalDataNetworkOutcome;
			typedef std::future<CreateGlobalDataNetworkOutcome> CreateGlobalDataNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateGlobalDataNetworkRequest&, const CreateGlobalDataNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDataNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalDatabaseNetworkResult> CreateGlobalDatabaseNetworkOutcome;
			typedef std::future<CreateGlobalDatabaseNetworkOutcome> CreateGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateGlobalDatabaseNetworkRequest&, const CreateGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalSecurityIPGroupResult> CreateGlobalSecurityIPGroupOutcome;
			typedef std::future<CreateGlobalSecurityIPGroupOutcome> CreateGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateGlobalSecurityIPGroupRequest&, const CreateGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkChannelResult> CreateNetworkChannelOutcome;
			typedef std::future<CreateNetworkChannelOutcome> CreateNetworkChannelOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateNetworkChannelRequest&, const CreateNetworkChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkChannelAsyncHandler;
			typedef Outcome<Error, Model::CreateOrGetVirtualLicenseOrderResult> CreateOrGetVirtualLicenseOrderOutcome;
			typedef std::future<CreateOrGetVirtualLicenseOrderOutcome> CreateOrGetVirtualLicenseOrderOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateOrGetVirtualLicenseOrderRequest&, const CreateOrGetVirtualLicenseOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrGetVirtualLicenseOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateParameterGroupResult> CreateParameterGroupOutcome;
			typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateParameterGroupRequest&, const CreateParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateStoragePlanResult> CreateStoragePlanOutcome;
			typedef std::future<CreateStoragePlanOutcome> CreateStoragePlanOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateStoragePlanRequest&, const CreateStoragePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoragePlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteAIDBClusterResult> DeleteAIDBClusterOutcome;
			typedef std::future<DeleteAIDBClusterOutcome> DeleteAIDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteAIDBClusterRequest&, const DeleteAIDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountZonalResult> DeleteAccountZonalOutcome;
			typedef std::future<DeleteAccountZonalOutcome> DeleteAccountZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteAccountZonalRequest&, const DeleteAccountZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountZonalAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationEndpointAddressResult> DeleteApplicationEndpointAddressOutcome;
			typedef std::future<DeleteApplicationEndpointAddressOutcome> DeleteApplicationEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteApplicationEndpointAddressRequest&, const DeleteApplicationEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupResult> DeleteBackupOutcome;
			typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteBackupRequest&, const DeleteBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterEndpointResult> DeleteDBClusterEndpointOutcome;
			typedef std::future<DeleteDBClusterEndpointOutcome> DeleteDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBClusterEndpointRequest&, const DeleteDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterEndpointZonalResult> DeleteDBClusterEndpointZonalOutcome;
			typedef std::future<DeleteDBClusterEndpointZonalOutcome> DeleteDBClusterEndpointZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBClusterEndpointZonalRequest&, const DeleteDBClusterEndpointZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterEndpointZonalAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBEndpointAddressResult> DeleteDBEndpointAddressOutcome;
			typedef std::future<DeleteDBEndpointAddressOutcome> DeleteDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBEndpointAddressRequest&, const DeleteDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBLinkResult> DeleteDBLinkOutcome;
			typedef std::future<DeleteDBLinkOutcome> DeleteDBLinkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBLinkRequest&, const DeleteDBLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBLinkAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBNodesResult> DeleteDBNodesOutcome;
			typedef std::future<DeleteDBNodesOutcome> DeleteDBNodesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBNodesRequest&, const DeleteDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseZonalResult> DeleteDatabaseZonalOutcome;
			typedef std::future<DeleteDatabaseZonalOutcome> DeleteDatabaseZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDatabaseZonalRequest&, const DeleteDatabaseZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseZonalAsyncHandler;
			typedef Outcome<Error, Model::DeleteEncryptionDBRolePrivilegeResult> DeleteEncryptionDBRolePrivilegeOutcome;
			typedef std::future<DeleteEncryptionDBRolePrivilegeOutcome> DeleteEncryptionDBRolePrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteEncryptionDBRolePrivilegeRequest&, const DeleteEncryptionDBRolePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEncryptionDBRolePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::DeleteExtensionsResult> DeleteExtensionsOutcome;
			typedef std::future<DeleteExtensionsOutcome> DeleteExtensionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteExtensionsRequest&, const DeleteExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtensionsAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallRulesResult> DeleteFirewallRulesOutcome;
			typedef std::future<DeleteFirewallRulesOutcome> DeleteFirewallRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteFirewallRulesRequest&, const DeleteFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalDataNetworkResult> DeleteGlobalDataNetworkOutcome;
			typedef std::future<DeleteGlobalDataNetworkOutcome> DeleteGlobalDataNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteGlobalDataNetworkRequest&, const DeleteGlobalDataNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDataNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalDatabaseNetworkResult> DeleteGlobalDatabaseNetworkOutcome;
			typedef std::future<DeleteGlobalDatabaseNetworkOutcome> DeleteGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteGlobalDatabaseNetworkRequest&, const DeleteGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalSecurityIPGroupResult> DeleteGlobalSecurityIPGroupOutcome;
			typedef std::future<DeleteGlobalSecurityIPGroupOutcome> DeleteGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteGlobalSecurityIPGroupRequest&, const DeleteGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteMaskingRulesResult> DeleteMaskingRulesOutcome;
			typedef std::future<DeleteMaskingRulesOutcome> DeleteMaskingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteMaskingRulesRequest&, const DeleteMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkChannelResult> DeleteNetworkChannelOutcome;
			typedef std::future<DeleteNetworkChannelOutcome> DeleteNetworkChannelOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteNetworkChannelRequest&, const DeleteNetworkChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkChannelAsyncHandler;
			typedef Outcome<Error, Model::DeleteParameterGroupResult> DeleteParameterGroupOutcome;
			typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteParameterGroupRequest&, const DeleteParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteSQLRateLimitingRulesResult> DeleteSQLRateLimitingRulesOutcome;
			typedef std::future<DeleteSQLRateLimitingRulesOutcome> DeleteSQLRateLimitingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteSQLRateLimitingRulesRequest&, const DeleteSQLRateLimitingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSQLRateLimitingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAIDBClusterAttributeResult> DescribeAIDBClusterAttributeOutcome;
			typedef std::future<DescribeAIDBClusterAttributeOutcome> DescribeAIDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAIDBClusterAttributeRequest&, const DescribeAIDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAIDBClusterPerformanceResult> DescribeAIDBClusterPerformanceOutcome;
			typedef std::future<DescribeAIDBClusterPerformanceOutcome> DescribeAIDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAIDBClusterPerformanceRequest&, const DescribeAIDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAIDBClustersResult> DescribeAIDBClustersOutcome;
			typedef std::future<DescribeAIDBClustersOutcome> DescribeAIDBClustersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAIDBClustersRequest&, const DescribeAIDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeAITaskStatusResult> DescribeAITaskStatusOutcome;
			typedef std::future<DescribeAITaskStatusOutcome> DescribeAITaskStatusOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAITaskStatusRequest&, const DescribeAITaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITaskStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsZonalResult> DescribeAccountsZonalOutcome;
			typedef std::future<DescribeAccountsZonalOutcome> DescribeAccountsZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAccountsZonalRequest&, const DescribeAccountsZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeActivationCodeDetailsResult> DescribeActivationCodeDetailsOutcome;
			typedef std::future<DescribeActivationCodeDetailsOutcome> DescribeActivationCodeDetailsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeActivationCodeDetailsRequest&, const DescribeActivationCodeDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivationCodeDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActivationCodesResult> DescribeActivationCodesOutcome;
			typedef std::future<DescribeActivationCodesOutcome> DescribeActivationCodesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeActivationCodesRequest&, const DescribeActivationCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivationCodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationMaintainConfResult> DescribeActiveOperationMaintainConfOutcome;
			typedef std::future<DescribeActiveOperationMaintainConfOutcome> DescribeActiveOperationMaintainConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeActiveOperationMaintainConfRequest&, const DescribeActiveOperationMaintainConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationMaintainConfAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTasksResult> DescribeActiveOperationTasksOutcome;
			typedef std::future<DescribeActiveOperationTasksOutcome> DescribeActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeActiveOperationTasksRequest&, const DescribeActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationAttributeResult> DescribeApplicationAttributeOutcome;
			typedef std::future<DescribeApplicationAttributeOutcome> DescribeApplicationAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeApplicationAttributeRequest&, const DescribeApplicationAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationParametersResult> DescribeApplicationParametersOutcome;
			typedef std::future<DescribeApplicationParametersOutcome> DescribeApplicationParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeApplicationParametersRequest&, const DescribeApplicationParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationServerlessConfResult> DescribeApplicationServerlessConfOutcome;
			typedef std::future<DescribeApplicationServerlessConfOutcome> DescribeApplicationServerlessConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeApplicationServerlessConfRequest&, const DescribeApplicationServerlessConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationServerlessConfAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationsResult> DescribeApplicationsOutcome;
			typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeApplicationsRequest&, const DescribeApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoRenewAttributeResult> DescribeAutoRenewAttributeOutcome;
			typedef std::future<DescribeAutoRenewAttributeOutcome> DescribeAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAutoRenewAttributeRequest&, const DescribeAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableCrossRegionsResult> DescribeAvailableCrossRegionsOutcome;
			typedef std::future<DescribeAvailableCrossRegionsOutcome> DescribeAvailableCrossRegionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAvailableCrossRegionsRequest&, const DescribeAvailableCrossRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCrossRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupLogsResult> DescribeBackupLogsOutcome;
			typedef std::future<DescribeBackupLogsOutcome> DescribeBackupLogsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupLogsRequest&, const DescribeBackupLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupRegionsResult> DescribeBackupRegionsOutcome;
			typedef std::future<DescribeBackupRegionsOutcome> DescribeBackupRegionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupRegionsRequest&, const DescribeBackupRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTasksResult> DescribeBackupTasksOutcome;
			typedef std::future<DescribeBackupTasksOutcome> DescribeBackupTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupTasksRequest&, const DescribeBackupTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharacterSetNameResult> DescribeCharacterSetNameOutcome;
			typedef std::future<DescribeCharacterSetNameOutcome> DescribeCharacterSetNameOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeCharacterSetNameRequest&, const DescribeCharacterSetNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharacterSetNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeClassListResult> DescribeClassListOutcome;
			typedef std::future<DescribeClassListOutcome> DescribeClassListOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeClassListRequest&, const DescribeClassListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassListAsyncHandler;
			typedef Outcome<Error, Model::DescribeColdStorageInstanceResult> DescribeColdStorageInstanceOutcome;
			typedef std::future<DescribeColdStorageInstanceOutcome> DescribeColdStorageInstanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeColdStorageInstanceRequest&, const DescribeColdStorageInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColdStorageInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCronJobPolicyServerlessResult> DescribeCronJobPolicyServerlessOutcome;
			typedef std::future<DescribeCronJobPolicyServerlessOutcome> DescribeCronJobPolicyServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeCronJobPolicyServerlessRequest&, const DescribeCronJobPolicyServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCronJobPolicyServerlessAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossCloudLevelsResult> DescribeCrossCloudLevelsOutcome;
			typedef std::future<DescribeCrossCloudLevelsOutcome> DescribeCrossCloudLevelsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeCrossCloudLevelsRequest&, const DescribeCrossCloudLevelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossCloudLevelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossCloudRegionResult> DescribeCrossCloudRegionOutcome;
			typedef std::future<DescribeCrossCloudRegionOutcome> DescribeCrossCloudRegionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeCrossCloudRegionRequest&, const DescribeCrossCloudRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossCloudRegionAsyncHandler;
			typedef Outcome<Error, Model::DescribeCrossCloudRegionMappingToAliyunResult> DescribeCrossCloudRegionMappingToAliyunOutcome;
			typedef std::future<DescribeCrossCloudRegionMappingToAliyunOutcome> DescribeCrossCloudRegionMappingToAliyunOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeCrossCloudRegionMappingToAliyunRequest&, const DescribeCrossCloudRegionMappingToAliyunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossCloudRegionMappingToAliyunAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAccessWhitelistResult> DescribeDBClusterAccessWhitelistOutcome;
			typedef std::future<DescribeDBClusterAccessWhitelistOutcome> DescribeDBClusterAccessWhitelistOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAccessWhitelistRequest&, const DescribeDBClusterAccessWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAccessWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAuditLogCollectorResult> DescribeDBClusterAuditLogCollectorOutcome;
			typedef std::future<DescribeDBClusterAuditLogCollectorOutcome> DescribeDBClusterAuditLogCollectorOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAuditLogCollectorRequest&, const DescribeDBClusterAuditLogCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAuditLogCollectorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAvailableResourcesResult> DescribeDBClusterAvailableResourcesOutcome;
			typedef std::future<DescribeDBClusterAvailableResourcesOutcome> DescribeDBClusterAvailableResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAvailableResourcesRequest&, const DescribeDBClusterAvailableResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAvailableResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterConnectivityResult> DescribeDBClusterConnectivityOutcome;
			typedef std::future<DescribeDBClusterConnectivityOutcome> DescribeDBClusterConnectivityOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterConnectivityRequest&, const DescribeDBClusterConnectivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterConnectivityAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterEncryptionKeyResult> DescribeDBClusterEncryptionKeyOutcome;
			typedef std::future<DescribeDBClusterEncryptionKeyOutcome> DescribeDBClusterEncryptionKeyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterEncryptionKeyRequest&, const DescribeDBClusterEncryptionKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterEncryptionKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterEndpointsResult> DescribeDBClusterEndpointsOutcome;
			typedef std::future<DescribeDBClusterEndpointsOutcome> DescribeDBClusterEndpointsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterEndpointsRequest&, const DescribeDBClusterEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterEndpointsZonalResult> DescribeDBClusterEndpointsZonalOutcome;
			typedef std::future<DescribeDBClusterEndpointsZonalOutcome> DescribeDBClusterEndpointsZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterEndpointsZonalRequest&, const DescribeDBClusterEndpointsZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterEndpointsZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterMigrationResult> DescribeDBClusterMigrationOutcome;
			typedef std::future<DescribeDBClusterMigrationOutcome> DescribeDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterMigrationRequest&, const DescribeDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterMonitorResult> DescribeDBClusterMonitorOutcome;
			typedef std::future<DescribeDBClusterMonitorOutcome> DescribeDBClusterMonitorOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterMonitorRequest&, const DescribeDBClusterMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterNetInfoResult> DescribeDBClusterNetInfoOutcome;
			typedef std::future<DescribeDBClusterNetInfoOutcome> DescribeDBClusterNetInfoOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterNetInfoRequest&, const DescribeDBClusterNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterParametersResult> DescribeDBClusterParametersOutcome;
			typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterParametersRequest&, const DescribeDBClusterParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterProxyResult> DescribeDBClusterProxyOutcome;
			typedef std::future<DescribeDBClusterProxyOutcome> DescribeDBClusterProxyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterProxyRequest&, const DescribeDBClusterProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterProxyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterSSLResult> DescribeDBClusterSSLOutcome;
			typedef std::future<DescribeDBClusterSSLOutcome> DescribeDBClusterSSLOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterSSLRequest&, const DescribeDBClusterSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterServerlessConfResult> DescribeDBClusterServerlessConfOutcome;
			typedef std::future<DescribeDBClusterServerlessConfOutcome> DescribeDBClusterServerlessConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterServerlessConfRequest&, const DescribeDBClusterServerlessConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterServerlessConfAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterTDEResult> DescribeDBClusterTDEOutcome;
			typedef std::future<DescribeDBClusterTDEOutcome> DescribeDBClusterTDEOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterTDERequest&, const DescribeDBClusterTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterTDEAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterVersionResult> DescribeDBClusterVersionOutcome;
			typedef std::future<DescribeDBClusterVersionOutcome> DescribeDBClusterVersionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterVersionRequest&, const DescribeDBClusterVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterVersionZonalResult> DescribeDBClusterVersionZonalOutcome;
			typedef std::future<DescribeDBClusterVersionZonalOutcome> DescribeDBClusterVersionZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterVersionZonalRequest&, const DescribeDBClusterVersionZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterVersionZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersWithBackupsResult> DescribeDBClustersWithBackupsOutcome;
			typedef std::future<DescribeDBClustersWithBackupsOutcome> DescribeDBClustersWithBackupsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClustersWithBackupsRequest&, const DescribeDBClustersWithBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersWithBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersZonalResult> DescribeDBClustersZonalOutcome;
			typedef std::future<DescribeDBClustersZonalOutcome> DescribeDBClustersZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClustersZonalRequest&, const DescribeDBClustersZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInitializeVariableResult> DescribeDBInitializeVariableOutcome;
			typedef std::future<DescribeDBInitializeVariableOutcome> DescribeDBInitializeVariableOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBInitializeVariableRequest&, const DescribeDBInitializeVariableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInitializeVariableAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBLinksResult> DescribeDBLinksOutcome;
			typedef std::future<DescribeDBLinksOutcome> DescribeDBLinksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBLinksRequest&, const DescribeDBLinksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLinksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBLogFilesResult> DescribeDBLogFilesOutcome;
			typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBLogFilesRequest&, const DescribeDBLogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBMiniEngineVersionsResult> DescribeDBMiniEngineVersionsOutcome;
			typedef std::future<DescribeDBMiniEngineVersionsOutcome> DescribeDBMiniEngineVersionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBMiniEngineVersionsRequest&, const DescribeDBMiniEngineVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBMiniEngineVersionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBNodePerformanceResult> DescribeDBNodePerformanceOutcome;
			typedef std::future<DescribeDBNodePerformanceOutcome> DescribeDBNodePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBNodePerformanceRequest&, const DescribeDBNodePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBNodePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBNodesParametersResult> DescribeDBNodesParametersOutcome;
			typedef std::future<DescribeDBNodesParametersOutcome> DescribeDBNodesParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBNodesParametersRequest&, const DescribeDBNodesParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBNodesParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBProxyPerformanceResult> DescribeDBProxyPerformanceOutcome;
			typedef std::future<DescribeDBProxyPerformanceOutcome> DescribeDBProxyPerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBProxyPerformanceRequest&, const DescribeDBProxyPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBProxyPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDasConfigResult> DescribeDasConfigOutcome;
			typedef std::future<DescribeDasConfigOutcome> DescribeDasConfigOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDasConfigRequest&, const DescribeDasConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDasConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesZonalResult> DescribeDatabasesZonalOutcome;
			typedef std::future<DescribeDatabasesZonalOutcome> DescribeDatabasesZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDatabasesZonalRequest&, const DescribeDatabasesZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbClusterAttributeZonalResult> DescribeDbClusterAttributeZonalOutcome;
			typedef std::future<DescribeDbClusterAttributeZonalOutcome> DescribeDbClusterAttributeZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDbClusterAttributeZonalRequest&, const DescribeDbClusterAttributeZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbClusterAttributeZonalAsyncHandler;
			typedef Outcome<Error, Model::DescribeDetachedBackupsResult> DescribeDetachedBackupsOutcome;
			typedef std::future<DescribeDetachedBackupsOutcome> DescribeDetachedBackupsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDetachedBackupsRequest&, const DescribeDetachedBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetachedBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEncryptionDBRolePrivilegeResult> DescribeEncryptionDBRolePrivilegeOutcome;
			typedef std::future<DescribeEncryptionDBRolePrivilegeOutcome> DescribeEncryptionDBRolePrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeEncryptionDBRolePrivilegeRequest&, const DescribeEncryptionDBRolePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionDBRolePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEncryptionDBSecretResult> DescribeEncryptionDBSecretOutcome;
			typedef std::future<DescribeEncryptionDBSecretOutcome> DescribeEncryptionDBSecretOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeEncryptionDBSecretRequest&, const DescribeEncryptionDBSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionDBSecretAsyncHandler;
			typedef Outcome<Error, Model::DescribeExtensionsResult> DescribeExtensionsOutcome;
			typedef std::future<DescribeExtensionsOutcome> DescribeExtensionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeExtensionsRequest&, const DescribeExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFirewallRulesResult> DescribeFirewallRulesOutcome;
			typedef std::future<DescribeFirewallRulesOutcome> DescribeFirewallRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeFirewallRulesRequest&, const DescribeFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalDataNetworkListResult> DescribeGlobalDataNetworkListOutcome;
			typedef std::future<DescribeGlobalDataNetworkListOutcome> DescribeGlobalDataNetworkListOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeGlobalDataNetworkListRequest&, const DescribeGlobalDataNetworkListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDataNetworkListAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalDatabaseNetworkResult> DescribeGlobalDatabaseNetworkOutcome;
			typedef std::future<DescribeGlobalDatabaseNetworkOutcome> DescribeGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeGlobalDatabaseNetworkRequest&, const DescribeGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalDatabaseNetworksResult> DescribeGlobalDatabaseNetworksOutcome;
			typedef std::future<DescribeGlobalDatabaseNetworksOutcome> DescribeGlobalDatabaseNetworksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeGlobalDatabaseNetworksRequest&, const DescribeGlobalDatabaseNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDatabaseNetworksAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalSecurityIPGroupResult> DescribeGlobalSecurityIPGroupOutcome;
			typedef std::future<DescribeGlobalSecurityIPGroupOutcome> DescribeGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeGlobalSecurityIPGroupRequest&, const DescribeGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalSecurityIPGroupRelationResult> DescribeGlobalSecurityIPGroupRelationOutcome;
			typedef std::future<DescribeGlobalSecurityIPGroupRelationOutcome> DescribeGlobalSecurityIPGroupRelationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeGlobalSecurityIPGroupRelationRequest&, const DescribeGlobalSecurityIPGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalSecurityIPGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::DescribeHALogsResult> DescribeHALogsOutcome;
			typedef std::future<DescribeHALogsOutcome> DescribeHALogsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeHALogsRequest&, const DescribeHALogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHALogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryTasksResult> DescribeHistoryTasksOutcome;
			typedef std::future<DescribeHistoryTasksOutcome> DescribeHistoryTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeHistoryTasksRequest&, const DescribeHistoryTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryTasksStatResult> DescribeHistoryTasksStatOutcome;
			typedef std::future<DescribeHistoryTasksStatOutcome> DescribeHistoryTasksStatOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeHistoryTasksStatRequest&, const DescribeHistoryTasksStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryTasksStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeLicenseOrderDetailsResult> DescribeLicenseOrderDetailsOutcome;
			typedef std::future<DescribeLicenseOrderDetailsOutcome> DescribeLicenseOrderDetailsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeLicenseOrderDetailsRequest&, const DescribeLicenseOrderDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseOrderDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLicenseOrdersResult> DescribeLicenseOrdersOutcome;
			typedef std::future<DescribeLicenseOrdersOutcome> DescribeLicenseOrdersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeLicenseOrdersRequest&, const DescribeLicenseOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseOrdersAsyncHandler;
			typedef Outcome<Error, Model::DescribeLocalAvailableRecoveryTimeResult> DescribeLocalAvailableRecoveryTimeOutcome;
			typedef std::future<DescribeLocalAvailableRecoveryTimeOutcome> DescribeLocalAvailableRecoveryTimeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeLocalAvailableRecoveryTimeRequest&, const DescribeLocalAvailableRecoveryTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalAvailableRecoveryTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogBackupPolicyResult> DescribeLogBackupPolicyOutcome;
			typedef std::future<DescribeLogBackupPolicyOutcome> DescribeLogBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeLogBackupPolicyRequest&, const DescribeLogBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeMaskingRulesResult> DescribeMaskingRulesOutcome;
			typedef std::future<DescribeMaskingRulesOutcome> DescribeMaskingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeMaskingRulesRequest&, const DescribeMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetaListResult> DescribeMetaListOutcome;
			typedef std::future<DescribeMetaListOutcome> DescribeMetaListOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeMetaListRequest&, const DescribeMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetaListAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkChannelResult> DescribeNetworkChannelOutcome;
			typedef std::future<DescribeNetworkChannelOutcome> DescribeNetworkChannelOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeNetworkChannelRequest&, const DescribeNetworkChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkChannelAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterGroupResult> DescribeParameterGroupOutcome;
			typedef std::future<DescribeParameterGroupOutcome> DescribeParameterGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeParameterGroupRequest&, const DescribeParameterGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterGroupsResult> DescribeParameterGroupsOutcome;
			typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeParameterGroupsRequest&, const DescribeParameterGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribePendingMaintenanceActionResult> DescribePendingMaintenanceActionOutcome;
			typedef std::future<DescribePendingMaintenanceActionOutcome> DescribePendingMaintenanceActionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribePendingMaintenanceActionRequest&, const DescribePendingMaintenanceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePendingMaintenanceActionAsyncHandler;
			typedef Outcome<Error, Model::DescribePendingMaintenanceActionsResult> DescribePendingMaintenanceActionsOutcome;
			typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribePendingMaintenanceActionsRequest&, const DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePendingMaintenanceActionsAsyncHandler;
			typedef Outcome<Error, Model::DescribePolarSQLCollectorPolicyResult> DescribePolarSQLCollectorPolicyOutcome;
			typedef std::future<DescribePolarSQLCollectorPolicyOutcome> DescribePolarSQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribePolarSQLCollectorPolicyRequest&, const DescribePolarSQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolarSQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVSwitchsResult> DescribeRdsVSwitchsOutcome;
			typedef std::future<DescribeRdsVSwitchsOutcome> DescribeRdsVSwitchsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeRdsVSwitchsRequest&, const DescribeRdsVSwitchsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVSwitchsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVpcsResult> DescribeRdsVpcsOutcome;
			typedef std::future<DescribeRdsVpcsOutcome> DescribeRdsVpcsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeRdsVpcsRequest&, const DescribeRdsVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourcePackagesResult> DescribeResourcePackagesOutcome;
			typedef std::future<DescribeResourcePackagesOutcome> DescribeResourcePackagesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeResourcePackagesRequest&, const DescribeResourcePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLRateLimitingRulesResult> DescribeSQLRateLimitingRulesOutcome;
			typedef std::future<DescribeSQLRateLimitingRulesOutcome> DescribeSQLRateLimitingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeSQLRateLimitingRulesRequest&, const DescribeSQLRateLimitingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLRateLimitingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScheduleTasksResult> DescribeScheduleTasksOutcome;
			typedef std::future<DescribeScheduleTasksOutcome> DescribeScheduleTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeScheduleTasksRequest&, const DescribeScheduleTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduleTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogsResult> DescribeSlowLogsOutcome;
			typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeSlowLogsRequest&, const DescribeSlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpgradeReportResult> DescribeUpgradeReportOutcome;
			typedef std::future<DescribeUpgradeReportOutcome> DescribeUpgradeReportOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeUpgradeReportRequest&, const DescribeUpgradeReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserEncryptionKeyListResult> DescribeUserEncryptionKeyListOutcome;
			typedef std::future<DescribeUserEncryptionKeyListOutcome> DescribeUserEncryptionKeyListOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeUserEncryptionKeyListRequest&, const DescribeUserEncryptionKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEncryptionKeyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchListResult> DescribeVSwitchListOutcome;
			typedef std::future<DescribeVSwitchListOutcome> DescribeVSwitchListOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeVSwitchListRequest&, const DescribeVSwitchListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcsResult> DescribeVpcsOutcome;
			typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeVpcsRequest&, const DescribeVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DisableDBClusterOrcaResult> DisableDBClusterOrcaOutcome;
			typedef std::future<DisableDBClusterOrcaOutcome> DisableDBClusterOrcaOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DisableDBClusterOrcaRequest&, const DisableDBClusterOrcaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDBClusterOrcaAsyncHandler;
			typedef Outcome<Error, Model::DisableDBClusterServerlessResult> DisableDBClusterServerlessOutcome;
			typedef std::future<DisableDBClusterServerlessOutcome> DisableDBClusterServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DisableDBClusterServerlessRequest&, const DisableDBClusterServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDBClusterServerlessAsyncHandler;
			typedef Outcome<Error, Model::EnableDBClusterOrcaResult> EnableDBClusterOrcaOutcome;
			typedef std::future<EnableDBClusterOrcaOutcome> EnableDBClusterOrcaOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::EnableDBClusterOrcaRequest&, const EnableDBClusterOrcaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDBClusterOrcaAsyncHandler;
			typedef Outcome<Error, Model::EnableDBClusterServerlessResult> EnableDBClusterServerlessOutcome;
			typedef std::future<EnableDBClusterServerlessOutcome> EnableDBClusterServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::EnableDBClusterServerlessRequest&, const EnableDBClusterServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDBClusterServerlessAsyncHandler;
			typedef Outcome<Error, Model::EnableFirewallRulesResult> EnableFirewallRulesOutcome;
			typedef std::future<EnableFirewallRulesOutcome> EnableFirewallRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::EnableFirewallRulesRequest&, const EnableFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::EnableSQLRateLimitingRulesResult> EnableSQLRateLimitingRulesOutcome;
			typedef std::future<EnableSQLRateLimitingRulesOutcome> EnableSQLRateLimitingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::EnableSQLRateLimitingRulesRequest&, const EnableSQLRateLimitingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSQLRateLimitingRulesAsyncHandler;
			typedef Outcome<Error, Model::EvaluateRegionResourceResult> EvaluateRegionResourceOutcome;
			typedef std::future<EvaluateRegionResourceOutcome> EvaluateRegionResourceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::EvaluateRegionResourceRequest&, const EvaluateRegionResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateRegionResourceAsyncHandler;
			typedef Outcome<Error, Model::ExecuteCrossCloudOpenAPIResult> ExecuteCrossCloudOpenAPIOutcome;
			typedef std::future<ExecuteCrossCloudOpenAPIOutcome> ExecuteCrossCloudOpenAPIOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ExecuteCrossCloudOpenAPIRequest&, const ExecuteCrossCloudOpenAPIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteCrossCloudOpenAPIAsyncHandler;
			typedef Outcome<Error, Model::FailoverDBClusterResult> FailoverDBClusterOutcome;
			typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::FailoverDBClusterRequest&, const FailoverDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FailoverDBClusterAsyncHandler;
			typedef Outcome<Error, Model::FailoverDBClusterZonalResult> FailoverDBClusterZonalOutcome;
			typedef std::future<FailoverDBClusterZonalOutcome> FailoverDBClusterZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::FailoverDBClusterZonalRequest&, const FailoverDBClusterZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FailoverDBClusterZonalAsyncHandler;
			typedef Outcome<Error, Model::GenerateUpgradeReportForSyncCloneResult> GenerateUpgradeReportForSyncCloneOutcome;
			typedef std::future<GenerateUpgradeReportForSyncCloneOutcome> GenerateUpgradeReportForSyncCloneOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::GenerateUpgradeReportForSyncCloneRequest&, const GenerateUpgradeReportForSyncCloneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUpgradeReportForSyncCloneAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeZonalResult> GrantAccountPrivilegeZonalOutcome;
			typedef std::future<GrantAccountPrivilegeZonalOutcome> GrantAccountPrivilegeZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::GrantAccountPrivilegeZonalRequest&, const GrantAccountPrivilegeZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeZonalAsyncHandler;
			typedef Outcome<Error, Model::ListOrdersResult> ListOrdersOutcome;
			typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ListOrdersRequest&, const ListOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesForRegionResult> ListTagResourcesForRegionOutcome;
			typedef std::future<ListTagResourcesForRegionOutcome> ListTagResourcesForRegionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ListTagResourcesForRegionRequest&, const ListTagResourcesForRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesForRegionAsyncHandler;
			typedef Outcome<Error, Model::ManuallyStartDBClusterResult> ManuallyStartDBClusterOutcome;
			typedef std::future<ManuallyStartDBClusterOutcome> ManuallyStartDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ManuallyStartDBClusterRequest&, const ManuallyStartDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManuallyStartDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyAIDBClusterDescriptionResult> ModifyAIDBClusterDescriptionOutcome;
			typedef std::future<ModifyAIDBClusterDescriptionOutcome> ModifyAIDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAIDBClusterDescriptionRequest&, const ModifyAIDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionZonalResult> ModifyAccountDescriptionZonalOutcome;
			typedef std::future<ModifyAccountDescriptionZonalOutcome> ModifyAccountDescriptionZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountDescriptionZonalRequest&, const ModifyAccountDescriptionZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionZonalAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountLockStateResult> ModifyAccountLockStateOutcome;
			typedef std::future<ModifyAccountLockStateOutcome> ModifyAccountLockStateOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountLockStateRequest&, const ModifyAccountLockStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountLockStateAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPasswordResult> ModifyAccountPasswordOutcome;
			typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountPasswordRequest&, const ModifyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPasswordZonalResult> ModifyAccountPasswordZonalOutcome;
			typedef std::future<ModifyAccountPasswordZonalOutcome> ModifyAccountPasswordZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountPasswordZonalRequest&, const ModifyAccountPasswordZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordZonalAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationMaintainConfResult> ModifyActiveOperationMaintainConfOutcome;
			typedef std::future<ModifyActiveOperationMaintainConfOutcome> ModifyActiveOperationMaintainConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyActiveOperationMaintainConfRequest&, const ModifyActiveOperationMaintainConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationMaintainConfAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationTasksResult> ModifyActiveOperationTasksOutcome;
			typedef std::future<ModifyActiveOperationTasksOutcome> ModifyActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyActiveOperationTasksRequest&, const ModifyActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::ModifyApplicationDescriptionResult> ModifyApplicationDescriptionOutcome;
			typedef std::future<ModifyApplicationDescriptionOutcome> ModifyApplicationDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyApplicationDescriptionRequest&, const ModifyApplicationDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyApplicationParameterResult> ModifyApplicationParameterOutcome;
			typedef std::future<ModifyApplicationParameterOutcome> ModifyApplicationParameterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyApplicationParameterRequest&, const ModifyApplicationParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifyApplicationServerlessConfResult> ModifyApplicationServerlessConfOutcome;
			typedef std::future<ModifyApplicationServerlessConfOutcome> ModifyApplicationServerlessConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyApplicationServerlessConfRequest&, const ModifyApplicationServerlessConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationServerlessConfAsyncHandler;
			typedef Outcome<Error, Model::ModifyApplicationWhitelistResult> ModifyApplicationWhitelistOutcome;
			typedef std::future<ModifyApplicationWhitelistOutcome> ModifyApplicationWhitelistOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyApplicationWhitelistRequest&, const ModifyApplicationWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoRenewAttributeResult> ModifyAutoRenewAttributeOutcome;
			typedef std::future<ModifyAutoRenewAttributeOutcome> ModifyAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAutoRenewAttributeRequest&, const ModifyAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyCronJobPolicyServerlessResult> ModifyCronJobPolicyServerlessOutcome;
			typedef std::future<ModifyCronJobPolicyServerlessOutcome> ModifyCronJobPolicyServerlessOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyCronJobPolicyServerlessRequest&, const ModifyCronJobPolicyServerlessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCronJobPolicyServerlessAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResult> ModifyDBClusterOutcome;
			typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterRequest&, const ModifyDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAccessWhitelistResult> ModifyDBClusterAccessWhitelistOutcome;
			typedef std::future<ModifyDBClusterAccessWhitelistOutcome> ModifyDBClusterAccessWhitelistOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterAccessWhitelistRequest&, const ModifyDBClusterAccessWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAccessWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAndNodesParametersResult> ModifyDBClusterAndNodesParametersOutcome;
			typedef std::future<ModifyDBClusterAndNodesParametersOutcome> ModifyDBClusterAndNodesParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterAndNodesParametersRequest&, const ModifyDBClusterAndNodesParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAndNodesParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterArchResult> ModifyDBClusterArchOutcome;
			typedef std::future<ModifyDBClusterArchOutcome> ModifyDBClusterArchOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterArchRequest&, const ModifyDBClusterArchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterArchAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAuditLogCollectorResult> ModifyDBClusterAuditLogCollectorOutcome;
			typedef std::future<ModifyDBClusterAuditLogCollectorOutcome> ModifyDBClusterAuditLogCollectorOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterAuditLogCollectorRequest&, const ModifyDBClusterAuditLogCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAuditLogCollectorAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDeletionResult> ModifyDBClusterDeletionOutcome;
			typedef std::future<ModifyDBClusterDeletionOutcome> ModifyDBClusterDeletionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterDeletionRequest&, const ModifyDBClusterDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDeletionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionZonalResult> ModifyDBClusterDescriptionZonalOutcome;
			typedef std::future<ModifyDBClusterDescriptionZonalOutcome> ModifyDBClusterDescriptionZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterDescriptionZonalRequest&, const ModifyDBClusterDescriptionZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionZonalAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterEndpointResult> ModifyDBClusterEndpointOutcome;
			typedef std::future<ModifyDBClusterEndpointOutcome> ModifyDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterEndpointRequest&, const ModifyDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterEndpointZonalResult> ModifyDBClusterEndpointZonalOutcome;
			typedef std::future<ModifyDBClusterEndpointZonalOutcome> ModifyDBClusterEndpointZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterEndpointZonalRequest&, const ModifyDBClusterEndpointZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterEndpointZonalAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMigrationResult> ModifyDBClusterMigrationOutcome;
			typedef std::future<ModifyDBClusterMigrationOutcome> ModifyDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMigrationRequest&, const ModifyDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMigrationEndpointResult> ModifyDBClusterMigrationEndpointOutcome;
			typedef std::future<ModifyDBClusterMigrationEndpointOutcome> ModifyDBClusterMigrationEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMigrationEndpointRequest&, const ModifyDBClusterMigrationEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMigrationEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMonitorResult> ModifyDBClusterMonitorOutcome;
			typedef std::future<ModifyDBClusterMonitorOutcome> ModifyDBClusterMonitorOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMonitorRequest&, const ModifyDBClusterMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMonitorAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterParametersResult> ModifyDBClusterParametersOutcome;
			typedef std::future<ModifyDBClusterParametersOutcome> ModifyDBClusterParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterParametersRequest&, const ModifyDBClusterParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterPrimaryZoneResult> ModifyDBClusterPrimaryZoneOutcome;
			typedef std::future<ModifyDBClusterPrimaryZoneOutcome> ModifyDBClusterPrimaryZoneOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterPrimaryZoneRequest&, const ModifyDBClusterPrimaryZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterPrimaryZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResourceGroupResult> ModifyDBClusterResourceGroupOutcome;
			typedef std::future<ModifyDBClusterResourceGroupOutcome> ModifyDBClusterResourceGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterResourceGroupRequest&, const ModifyDBClusterResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterSSLResult> ModifyDBClusterSSLOutcome;
			typedef std::future<ModifyDBClusterSSLOutcome> ModifyDBClusterSSLOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterSSLRequest&, const ModifyDBClusterSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterServerlessConfResult> ModifyDBClusterServerlessConfOutcome;
			typedef std::future<ModifyDBClusterServerlessConfOutcome> ModifyDBClusterServerlessConfOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterServerlessConfRequest&, const ModifyDBClusterServerlessConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterServerlessConfAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterStoragePerformanceResult> ModifyDBClusterStoragePerformanceOutcome;
			typedef std::future<ModifyDBClusterStoragePerformanceOutcome> ModifyDBClusterStoragePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterStoragePerformanceRequest&, const ModifyDBClusterStoragePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterStoragePerformanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterStorageSpaceResult> ModifyDBClusterStorageSpaceOutcome;
			typedef std::future<ModifyDBClusterStorageSpaceOutcome> ModifyDBClusterStorageSpaceOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterStorageSpaceRequest&, const ModifyDBClusterStorageSpaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterStorageSpaceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterTDEResult> ModifyDBClusterTDEOutcome;
			typedef std::future<ModifyDBClusterTDEOutcome> ModifyDBClusterTDEOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterTDERequest&, const ModifyDBClusterTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterTDEAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterVpcResult> ModifyDBClusterVpcOutcome;
			typedef std::future<ModifyDBClusterVpcOutcome> ModifyDBClusterVpcOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterVpcRequest&, const ModifyDBClusterVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterVpcAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionResult> ModifyDBDescriptionOutcome;
			typedef std::future<ModifyDBDescriptionOutcome> ModifyDBDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBDescriptionRequest&, const ModifyDBDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionZonalResult> ModifyDBDescriptionZonalOutcome;
			typedef std::future<ModifyDBDescriptionZonalOutcome> ModifyDBDescriptionZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBDescriptionZonalRequest&, const ModifyDBDescriptionZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionZonalAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBEndpointAddressResult> ModifyDBEndpointAddressOutcome;
			typedef std::future<ModifyDBEndpointAddressOutcome> ModifyDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBEndpointAddressRequest&, const ModifyDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeClassResult> ModifyDBNodeClassOutcome;
			typedef std::future<ModifyDBNodeClassOutcome> ModifyDBNodeClassOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeClassRequest&, const ModifyDBNodeClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeConfigResult> ModifyDBNodeConfigOutcome;
			typedef std::future<ModifyDBNodeConfigOutcome> ModifyDBNodeConfigOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeConfigRequest&, const ModifyDBNodeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeDescriptionResult> ModifyDBNodeDescriptionOutcome;
			typedef std::future<ModifyDBNodeDescriptionOutcome> ModifyDBNodeDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeDescriptionRequest&, const ModifyDBNodeDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeHotReplicaModeResult> ModifyDBNodeHotReplicaModeOutcome;
			typedef std::future<ModifyDBNodeHotReplicaModeOutcome> ModifyDBNodeHotReplicaModeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeHotReplicaModeRequest&, const ModifyDBNodeHotReplicaModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeHotReplicaModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeSccModeResult> ModifyDBNodeSccModeOutcome;
			typedef std::future<ModifyDBNodeSccModeOutcome> ModifyDBNodeSccModeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeSccModeRequest&, const ModifyDBNodeSccModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeSccModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodesClassResult> ModifyDBNodesClassOutcome;
			typedef std::future<ModifyDBNodesClassOutcome> ModifyDBNodesClassOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodesClassRequest&, const ModifyDBNodesClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodesClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodesParametersResult> ModifyDBNodesParametersOutcome;
			typedef std::future<ModifyDBNodesParametersOutcome> ModifyDBNodesParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodesParametersRequest&, const ModifyDBNodesParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodesParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyEncryptionDBRolePrivilegeResult> ModifyEncryptionDBRolePrivilegeOutcome;
			typedef std::future<ModifyEncryptionDBRolePrivilegeOutcome> ModifyEncryptionDBRolePrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyEncryptionDBRolePrivilegeRequest&, const ModifyEncryptionDBRolePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEncryptionDBRolePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyEncryptionDBSecretResult> ModifyEncryptionDBSecretOutcome;
			typedef std::future<ModifyEncryptionDBSecretOutcome> ModifyEncryptionDBSecretOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyEncryptionDBSecretRequest&, const ModifyEncryptionDBSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEncryptionDBSecretAsyncHandler;
			typedef Outcome<Error, Model::ModifyFirewallRulesResult> ModifyFirewallRulesOutcome;
			typedef std::future<ModifyFirewallRulesOutcome> ModifyFirewallRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyFirewallRulesRequest&, const ModifyFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalDatabaseNetworkResult> ModifyGlobalDatabaseNetworkOutcome;
			typedef std::future<ModifyGlobalDatabaseNetworkOutcome> ModifyGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyGlobalDatabaseNetworkRequest&, const ModifyGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupResult> ModifyGlobalSecurityIPGroupOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupOutcome> ModifyGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyGlobalSecurityIPGroupRequest&, const ModifyGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupNameResult> ModifyGlobalSecurityIPGroupNameOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupNameOutcome> ModifyGlobalSecurityIPGroupNameOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyGlobalSecurityIPGroupNameRequest&, const ModifyGlobalSecurityIPGroupNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupRelationResult> ModifyGlobalSecurityIPGroupRelationOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupRelationOutcome> ModifyGlobalSecurityIPGroupRelationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyGlobalSecurityIPGroupRelationRequest&, const ModifyGlobalSecurityIPGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogBackupPolicyResult> ModifyLogBackupPolicyOutcome;
			typedef std::future<ModifyLogBackupPolicyOutcome> ModifyLogBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyLogBackupPolicyRequest&, const ModifyLogBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyMaskingRulesResult> ModifyMaskingRulesOutcome;
			typedef std::future<ModifyMaskingRulesOutcome> ModifyMaskingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyMaskingRulesRequest&, const ModifyMaskingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaskingRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyPendingMaintenanceActionResult> ModifyPendingMaintenanceActionOutcome;
			typedef std::future<ModifyPendingMaintenanceActionOutcome> ModifyPendingMaintenanceActionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyPendingMaintenanceActionRequest&, const ModifyPendingMaintenanceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPendingMaintenanceActionAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePackageResult> ModifyResourcePackageOutcome;
			typedef std::future<ModifyResourcePackageOutcome> ModifyResourcePackageOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyResourcePackageRequest&, const ModifyResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLRateLimitingRulesResult> ModifySQLRateLimitingRulesOutcome;
			typedef std::future<ModifySQLRateLimitingRulesOutcome> ModifySQLRateLimitingRulesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifySQLRateLimitingRulesRequest&, const ModifySQLRateLimitingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLRateLimitingRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyScheduleTaskResult> ModifyScheduleTaskOutcome;
			typedef std::future<ModifyScheduleTaskOutcome> ModifyScheduleTaskOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyScheduleTaskRequest&, const ModifyScheduleTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduleTaskAsyncHandler;
			typedef Outcome<Error, Model::OpenAITaskResult> OpenAITaskOutcome;
			typedef std::future<OpenAITaskOutcome> OpenAITaskOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::OpenAITaskRequest&, const OpenAITaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenAITaskAsyncHandler;
			typedef Outcome<Error, Model::ReactivateDBClusterBackupResult> ReactivateDBClusterBackupOutcome;
			typedef std::future<ReactivateDBClusterBackupOutcome> ReactivateDBClusterBackupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ReactivateDBClusterBackupRequest&, const ReactivateDBClusterBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReactivateDBClusterBackupAsyncHandler;
			typedef Outcome<Error, Model::RefreshDBClusterStorageUsageResult> RefreshDBClusterStorageUsageOutcome;
			typedef std::future<RefreshDBClusterStorageUsageOutcome> RefreshDBClusterStorageUsageOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RefreshDBClusterStorageUsageRequest&, const RefreshDBClusterStorageUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDBClusterStorageUsageAsyncHandler;
			typedef Outcome<Error, Model::RemoveDBClusterFromGDNResult> RemoveDBClusterFromGDNOutcome;
			typedef std::future<RemoveDBClusterFromGDNOutcome> RemoveDBClusterFromGDNOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RemoveDBClusterFromGDNRequest&, const RemoveDBClusterFromGDNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDBClusterFromGDNAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountZonalResult> ResetAccountZonalOutcome;
			typedef std::future<ResetAccountZonalOutcome> ResetAccountZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ResetAccountZonalRequest&, const ResetAccountZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountZonalAsyncHandler;
			typedef Outcome<Error, Model::ResetGlobalDatabaseNetworkResult> ResetGlobalDatabaseNetworkOutcome;
			typedef std::future<ResetGlobalDatabaseNetworkOutcome> ResetGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ResetGlobalDatabaseNetworkRequest&, const ResetGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::RestartDBLinkResult> RestartDBLinkOutcome;
			typedef std::future<RestartDBLinkOutcome> RestartDBLinkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RestartDBLinkRequest&, const RestartDBLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBLinkAsyncHandler;
			typedef Outcome<Error, Model::RestartDBNodeResult> RestartDBNodeOutcome;
			typedef std::future<RestartDBNodeOutcome> RestartDBNodeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RestartDBNodeRequest&, const RestartDBNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBNodeAsyncHandler;
			typedef Outcome<Error, Model::RestartDBNodeZonalResult> RestartDBNodeZonalOutcome;
			typedef std::future<RestartDBNodeZonalOutcome> RestartDBNodeZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RestartDBNodeZonalRequest&, const RestartDBNodeZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBNodeZonalAsyncHandler;
			typedef Outcome<Error, Model::RestoreTableResult> RestoreTableOutcome;
			typedef std::future<RestoreTableOutcome> RestoreTableOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RestoreTableRequest&, const RestoreTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreTableAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeResult> RevokeAccountPrivilegeOutcome;
			typedef std::future<RevokeAccountPrivilegeOutcome> RevokeAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RevokeAccountPrivilegeRequest&, const RevokeAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeZonalResult> RevokeAccountPrivilegeZonalOutcome;
			typedef std::future<RevokeAccountPrivilegeZonalOutcome> RevokeAccountPrivilegeZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RevokeAccountPrivilegeZonalRequest&, const RevokeAccountPrivilegeZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeZonalAsyncHandler;
			typedef Outcome<Error, Model::SwitchOverGlobalDatabaseNetworkResult> SwitchOverGlobalDatabaseNetworkOutcome;
			typedef std::future<SwitchOverGlobalDatabaseNetworkOutcome> SwitchOverGlobalDatabaseNetworkOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::SwitchOverGlobalDatabaseNetworkRequest&, const SwitchOverGlobalDatabaseNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchOverGlobalDatabaseNetworkAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TempModifyDBNodeResult> TempModifyDBNodeOutcome;
			typedef std::future<TempModifyDBNodeOutcome> TempModifyDBNodeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::TempModifyDBNodeRequest&, const TempModifyDBNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TempModifyDBNodeAsyncHandler;
			typedef Outcome<Error, Model::TransformDBClusterPayTypeResult> TransformDBClusterPayTypeOutcome;
			typedef std::future<TransformDBClusterPayTypeOutcome> TransformDBClusterPayTypeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::TransformDBClusterPayTypeRequest&, const TransformDBClusterPayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformDBClusterPayTypeAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateExtensionsResult> UpdateExtensionsOutcome;
			typedef std::future<UpdateExtensionsOutcome> UpdateExtensionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UpdateExtensionsRequest&, const UpdateExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExtensionsAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBClusterVersionResult> UpgradeDBClusterVersionOutcome;
			typedef std::future<UpgradeDBClusterVersionOutcome> UpgradeDBClusterVersionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UpgradeDBClusterVersionRequest&, const UpgradeDBClusterVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBClusterVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBClusterVersionZonalResult> UpgradeDBClusterVersionZonalOutcome;
			typedef std::future<UpgradeDBClusterVersionZonalOutcome> UpgradeDBClusterVersionZonalOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UpgradeDBClusterVersionZonalRequest&, const UpgradeDBClusterVersionZonalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBClusterVersionZonalAsyncHandler;

			PolardbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PolardbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PolardbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PolardbClient();
			AbortDBClusterMigrationOutcome abortDBClusterMigration(const Model::AbortDBClusterMigrationRequest &request)const;
			void abortDBClusterMigrationAsync(const Model::AbortDBClusterMigrationRequest& request, const AbortDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortDBClusterMigrationOutcomeCallable abortDBClusterMigrationCallable(const Model::AbortDBClusterMigrationRequest& request) const;
			AddEncryptionDBRolePrivilegeOutcome addEncryptionDBRolePrivilege(const Model::AddEncryptionDBRolePrivilegeRequest &request)const;
			void addEncryptionDBRolePrivilegeAsync(const Model::AddEncryptionDBRolePrivilegeRequest& request, const AddEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEncryptionDBRolePrivilegeOutcomeCallable addEncryptionDBRolePrivilegeCallable(const Model::AddEncryptionDBRolePrivilegeRequest& request) const;
			AddFirewallRulesOutcome addFirewallRules(const Model::AddFirewallRulesRequest &request)const;
			void addFirewallRulesAsync(const Model::AddFirewallRulesRequest& request, const AddFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFirewallRulesOutcomeCallable addFirewallRulesCallable(const Model::AddFirewallRulesRequest& request) const;
			AddSQLRateLimitingRulesOutcome addSQLRateLimitingRules(const Model::AddSQLRateLimitingRulesRequest &request)const;
			void addSQLRateLimitingRulesAsync(const Model::AddSQLRateLimitingRulesRequest& request, const AddSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSQLRateLimitingRulesOutcomeCallable addSQLRateLimitingRulesCallable(const Model::AddSQLRateLimitingRulesRequest& request) const;
			AttachApplicationPolarFSOutcome attachApplicationPolarFS(const Model::AttachApplicationPolarFSRequest &request)const;
			void attachApplicationPolarFSAsync(const Model::AttachApplicationPolarFSRequest& request, const AttachApplicationPolarFSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachApplicationPolarFSOutcomeCallable attachApplicationPolarFSCallable(const Model::AttachApplicationPolarFSRequest& request) const;
			CancelActiveOperationTasksOutcome cancelActiveOperationTasks(const Model::CancelActiveOperationTasksRequest &request)const;
			void cancelActiveOperationTasksAsync(const Model::CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelActiveOperationTasksOutcomeCallable cancelActiveOperationTasksCallable(const Model::CancelActiveOperationTasksRequest& request) const;
			CancelCronJobPolicyServerlessOutcome cancelCronJobPolicyServerless(const Model::CancelCronJobPolicyServerlessRequest &request)const;
			void cancelCronJobPolicyServerlessAsync(const Model::CancelCronJobPolicyServerlessRequest& request, const CancelCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCronJobPolicyServerlessOutcomeCallable cancelCronJobPolicyServerlessCallable(const Model::CancelCronJobPolicyServerlessRequest& request) const;
			CancelScheduleTasksOutcome cancelScheduleTasks(const Model::CancelScheduleTasksRequest &request)const;
			void cancelScheduleTasksAsync(const Model::CancelScheduleTasksRequest& request, const CancelScheduleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelScheduleTasksOutcomeCallable cancelScheduleTasksCallable(const Model::CancelScheduleTasksRequest& request) const;
			CheckAccountNameOutcome checkAccountName(const Model::CheckAccountNameRequest &request)const;
			void checkAccountNameAsync(const Model::CheckAccountNameRequest& request, const CheckAccountNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAccountNameOutcomeCallable checkAccountNameCallable(const Model::CheckAccountNameRequest& request) const;
			CheckAccountNameZonalOutcome checkAccountNameZonal(const Model::CheckAccountNameZonalRequest &request)const;
			void checkAccountNameZonalAsync(const Model::CheckAccountNameZonalRequest& request, const CheckAccountNameZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAccountNameZonalOutcomeCallable checkAccountNameZonalCallable(const Model::CheckAccountNameZonalRequest& request) const;
			CheckConnectionStringOutcome checkConnectionString(const Model::CheckConnectionStringRequest &request)const;
			void checkConnectionStringAsync(const Model::CheckConnectionStringRequest& request, const CheckConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckConnectionStringOutcomeCallable checkConnectionStringCallable(const Model::CheckConnectionStringRequest& request) const;
			CheckDBNameOutcome checkDBName(const Model::CheckDBNameRequest &request)const;
			void checkDBNameAsync(const Model::CheckDBNameRequest& request, const CheckDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDBNameOutcomeCallable checkDBNameCallable(const Model::CheckDBNameRequest& request) const;
			CheckDBNameZonalOutcome checkDBNameZonal(const Model::CheckDBNameZonalRequest &request)const;
			void checkDBNameZonalAsync(const Model::CheckDBNameZonalRequest& request, const CheckDBNameZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDBNameZonalOutcomeCallable checkDBNameZonalCallable(const Model::CheckDBNameZonalRequest& request) const;
			CheckKMSAuthorizedOutcome checkKMSAuthorized(const Model::CheckKMSAuthorizedRequest &request)const;
			void checkKMSAuthorizedAsync(const Model::CheckKMSAuthorizedRequest& request, const CheckKMSAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckKMSAuthorizedOutcomeCallable checkKMSAuthorizedCallable(const Model::CheckKMSAuthorizedRequest& request) const;
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CloseAITaskOutcome closeAITask(const Model::CloseAITaskRequest &request)const;
			void closeAITaskAsync(const Model::CloseAITaskRequest& request, const CloseAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseAITaskOutcomeCallable closeAITaskCallable(const Model::CloseAITaskRequest& request) const;
			CloseDBClusterMigrationOutcome closeDBClusterMigration(const Model::CloseDBClusterMigrationRequest &request)const;
			void closeDBClusterMigrationAsync(const Model::CloseDBClusterMigrationRequest& request, const CloseDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDBClusterMigrationOutcomeCallable closeDBClusterMigrationCallable(const Model::CloseDBClusterMigrationRequest& request) const;
			ContinueDBClusterMigrationOutcome continueDBClusterMigration(const Model::ContinueDBClusterMigrationRequest &request)const;
			void continueDBClusterMigrationAsync(const Model::ContinueDBClusterMigrationRequest& request, const ContinueDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueDBClusterMigrationOutcomeCallable continueDBClusterMigrationCallable(const Model::ContinueDBClusterMigrationRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateAccountZonalOutcome createAccountZonal(const Model::CreateAccountZonalRequest &request)const;
			void createAccountZonalAsync(const Model::CreateAccountZonalRequest& request, const CreateAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountZonalOutcomeCallable createAccountZonalCallable(const Model::CreateAccountZonalRequest& request) const;
			CreateActivationCodeOutcome createActivationCode(const Model::CreateActivationCodeRequest &request)const;
			void createActivationCodeAsync(const Model::CreateActivationCodeRequest& request, const CreateActivationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateActivationCodeOutcomeCallable createActivationCodeCallable(const Model::CreateActivationCodeRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateApplicationEndpointAddressOutcome createApplicationEndpointAddress(const Model::CreateApplicationEndpointAddressRequest &request)const;
			void createApplicationEndpointAddressAsync(const Model::CreateApplicationEndpointAddressRequest& request, const CreateApplicationEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationEndpointAddressOutcomeCallable createApplicationEndpointAddressCallable(const Model::CreateApplicationEndpointAddressRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateColdStorageInstanceOutcome createColdStorageInstance(const Model::CreateColdStorageInstanceRequest &request)const;
			void createColdStorageInstanceAsync(const Model::CreateColdStorageInstanceRequest& request, const CreateColdStorageInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateColdStorageInstanceOutcomeCallable createColdStorageInstanceCallable(const Model::CreateColdStorageInstanceRequest& request) const;
			CreateCronJobPolicyServerlessOutcome createCronJobPolicyServerless(const Model::CreateCronJobPolicyServerlessRequest &request)const;
			void createCronJobPolicyServerlessAsync(const Model::CreateCronJobPolicyServerlessRequest& request, const CreateCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCronJobPolicyServerlessOutcomeCallable createCronJobPolicyServerlessCallable(const Model::CreateCronJobPolicyServerlessRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			CreateDBClusterEndpointOutcome createDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest &request)const;
			void createDBClusterEndpointAsync(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterEndpointOutcomeCallable createDBClusterEndpointCallable(const Model::CreateDBClusterEndpointRequest& request) const;
			CreateDBClusterEndpointZonalOutcome createDBClusterEndpointZonal(const Model::CreateDBClusterEndpointZonalRequest &request)const;
			void createDBClusterEndpointZonalAsync(const Model::CreateDBClusterEndpointZonalRequest& request, const CreateDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterEndpointZonalOutcomeCallable createDBClusterEndpointZonalCallable(const Model::CreateDBClusterEndpointZonalRequest& request) const;
			CreateDBEndpointAddressOutcome createDBEndpointAddress(const Model::CreateDBEndpointAddressRequest &request)const;
			void createDBEndpointAddressAsync(const Model::CreateDBEndpointAddressRequest& request, const CreateDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBEndpointAddressOutcomeCallable createDBEndpointAddressCallable(const Model::CreateDBEndpointAddressRequest& request) const;
			CreateDBLinkOutcome createDBLink(const Model::CreateDBLinkRequest &request)const;
			void createDBLinkAsync(const Model::CreateDBLinkRequest& request, const CreateDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBLinkOutcomeCallable createDBLinkCallable(const Model::CreateDBLinkRequest& request) const;
			CreateDBNodesOutcome createDBNodes(const Model::CreateDBNodesRequest &request)const;
			void createDBNodesAsync(const Model::CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBNodesOutcomeCallable createDBNodesCallable(const Model::CreateDBNodesRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateDatabaseZonalOutcome createDatabaseZonal(const Model::CreateDatabaseZonalRequest &request)const;
			void createDatabaseZonalAsync(const Model::CreateDatabaseZonalRequest& request, const CreateDatabaseZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseZonalOutcomeCallable createDatabaseZonalCallable(const Model::CreateDatabaseZonalRequest& request) const;
			CreateExtensionsOutcome createExtensions(const Model::CreateExtensionsRequest &request)const;
			void createExtensionsAsync(const Model::CreateExtensionsRequest& request, const CreateExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExtensionsOutcomeCallable createExtensionsCallable(const Model::CreateExtensionsRequest& request) const;
			CreateGlobalDataNetworkOutcome createGlobalDataNetwork(const Model::CreateGlobalDataNetworkRequest &request)const;
			void createGlobalDataNetworkAsync(const Model::CreateGlobalDataNetworkRequest& request, const CreateGlobalDataNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalDataNetworkOutcomeCallable createGlobalDataNetworkCallable(const Model::CreateGlobalDataNetworkRequest& request) const;
			CreateGlobalDatabaseNetworkOutcome createGlobalDatabaseNetwork(const Model::CreateGlobalDatabaseNetworkRequest &request)const;
			void createGlobalDatabaseNetworkAsync(const Model::CreateGlobalDatabaseNetworkRequest& request, const CreateGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalDatabaseNetworkOutcomeCallable createGlobalDatabaseNetworkCallable(const Model::CreateGlobalDatabaseNetworkRequest& request) const;
			CreateGlobalSecurityIPGroupOutcome createGlobalSecurityIPGroup(const Model::CreateGlobalSecurityIPGroupRequest &request)const;
			void createGlobalSecurityIPGroupAsync(const Model::CreateGlobalSecurityIPGroupRequest& request, const CreateGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalSecurityIPGroupOutcomeCallable createGlobalSecurityIPGroupCallable(const Model::CreateGlobalSecurityIPGroupRequest& request) const;
			CreateNetworkChannelOutcome createNetworkChannel(const Model::CreateNetworkChannelRequest &request)const;
			void createNetworkChannelAsync(const Model::CreateNetworkChannelRequest& request, const CreateNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkChannelOutcomeCallable createNetworkChannelCallable(const Model::CreateNetworkChannelRequest& request) const;
			CreateOrGetVirtualLicenseOrderOutcome createOrGetVirtualLicenseOrder(const Model::CreateOrGetVirtualLicenseOrderRequest &request)const;
			void createOrGetVirtualLicenseOrderAsync(const Model::CreateOrGetVirtualLicenseOrderRequest& request, const CreateOrGetVirtualLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrGetVirtualLicenseOrderOutcomeCallable createOrGetVirtualLicenseOrderCallable(const Model::CreateOrGetVirtualLicenseOrderRequest& request) const;
			CreateParameterGroupOutcome createParameterGroup(const Model::CreateParameterGroupRequest &request)const;
			void createParameterGroupAsync(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParameterGroupOutcomeCallable createParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateStoragePlanOutcome createStoragePlan(const Model::CreateStoragePlanRequest &request)const;
			void createStoragePlanAsync(const Model::CreateStoragePlanRequest& request, const CreateStoragePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStoragePlanOutcomeCallable createStoragePlanCallable(const Model::CreateStoragePlanRequest& request) const;
			DeleteAIDBClusterOutcome deleteAIDBCluster(const Model::DeleteAIDBClusterRequest &request)const;
			void deleteAIDBClusterAsync(const Model::DeleteAIDBClusterRequest& request, const DeleteAIDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAIDBClusterOutcomeCallable deleteAIDBClusterCallable(const Model::DeleteAIDBClusterRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteAccountZonalOutcome deleteAccountZonal(const Model::DeleteAccountZonalRequest &request)const;
			void deleteAccountZonalAsync(const Model::DeleteAccountZonalRequest& request, const DeleteAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountZonalOutcomeCallable deleteAccountZonalCallable(const Model::DeleteAccountZonalRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteApplicationEndpointAddressOutcome deleteApplicationEndpointAddress(const Model::DeleteApplicationEndpointAddressRequest &request)const;
			void deleteApplicationEndpointAddressAsync(const Model::DeleteApplicationEndpointAddressRequest& request, const DeleteApplicationEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationEndpointAddressOutcomeCallable deleteApplicationEndpointAddressCallable(const Model::DeleteApplicationEndpointAddressRequest& request) const;
			DeleteBackupOutcome deleteBackup(const Model::DeleteBackupRequest &request)const;
			void deleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupOutcomeCallable deleteBackupCallable(const Model::DeleteBackupRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteDBClusterEndpointOutcome deleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest &request)const;
			void deleteDBClusterEndpointAsync(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterEndpointOutcomeCallable deleteDBClusterEndpointCallable(const Model::DeleteDBClusterEndpointRequest& request) const;
			DeleteDBClusterEndpointZonalOutcome deleteDBClusterEndpointZonal(const Model::DeleteDBClusterEndpointZonalRequest &request)const;
			void deleteDBClusterEndpointZonalAsync(const Model::DeleteDBClusterEndpointZonalRequest& request, const DeleteDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterEndpointZonalOutcomeCallable deleteDBClusterEndpointZonalCallable(const Model::DeleteDBClusterEndpointZonalRequest& request) const;
			DeleteDBEndpointAddressOutcome deleteDBEndpointAddress(const Model::DeleteDBEndpointAddressRequest &request)const;
			void deleteDBEndpointAddressAsync(const Model::DeleteDBEndpointAddressRequest& request, const DeleteDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBEndpointAddressOutcomeCallable deleteDBEndpointAddressCallable(const Model::DeleteDBEndpointAddressRequest& request) const;
			DeleteDBLinkOutcome deleteDBLink(const Model::DeleteDBLinkRequest &request)const;
			void deleteDBLinkAsync(const Model::DeleteDBLinkRequest& request, const DeleteDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBLinkOutcomeCallable deleteDBLinkCallable(const Model::DeleteDBLinkRequest& request) const;
			DeleteDBNodesOutcome deleteDBNodes(const Model::DeleteDBNodesRequest &request)const;
			void deleteDBNodesAsync(const Model::DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBNodesOutcomeCallable deleteDBNodesCallable(const Model::DeleteDBNodesRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteDatabaseZonalOutcome deleteDatabaseZonal(const Model::DeleteDatabaseZonalRequest &request)const;
			void deleteDatabaseZonalAsync(const Model::DeleteDatabaseZonalRequest& request, const DeleteDatabaseZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseZonalOutcomeCallable deleteDatabaseZonalCallable(const Model::DeleteDatabaseZonalRequest& request) const;
			DeleteEncryptionDBRolePrivilegeOutcome deleteEncryptionDBRolePrivilege(const Model::DeleteEncryptionDBRolePrivilegeRequest &request)const;
			void deleteEncryptionDBRolePrivilegeAsync(const Model::DeleteEncryptionDBRolePrivilegeRequest& request, const DeleteEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEncryptionDBRolePrivilegeOutcomeCallable deleteEncryptionDBRolePrivilegeCallable(const Model::DeleteEncryptionDBRolePrivilegeRequest& request) const;
			DeleteExtensionsOutcome deleteExtensions(const Model::DeleteExtensionsRequest &request)const;
			void deleteExtensionsAsync(const Model::DeleteExtensionsRequest& request, const DeleteExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExtensionsOutcomeCallable deleteExtensionsCallable(const Model::DeleteExtensionsRequest& request) const;
			DeleteFirewallRulesOutcome deleteFirewallRules(const Model::DeleteFirewallRulesRequest &request)const;
			void deleteFirewallRulesAsync(const Model::DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallRulesOutcomeCallable deleteFirewallRulesCallable(const Model::DeleteFirewallRulesRequest& request) const;
			DeleteGlobalDataNetworkOutcome deleteGlobalDataNetwork(const Model::DeleteGlobalDataNetworkRequest &request)const;
			void deleteGlobalDataNetworkAsync(const Model::DeleteGlobalDataNetworkRequest& request, const DeleteGlobalDataNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalDataNetworkOutcomeCallable deleteGlobalDataNetworkCallable(const Model::DeleteGlobalDataNetworkRequest& request) const;
			DeleteGlobalDatabaseNetworkOutcome deleteGlobalDatabaseNetwork(const Model::DeleteGlobalDatabaseNetworkRequest &request)const;
			void deleteGlobalDatabaseNetworkAsync(const Model::DeleteGlobalDatabaseNetworkRequest& request, const DeleteGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalDatabaseNetworkOutcomeCallable deleteGlobalDatabaseNetworkCallable(const Model::DeleteGlobalDatabaseNetworkRequest& request) const;
			DeleteGlobalSecurityIPGroupOutcome deleteGlobalSecurityIPGroup(const Model::DeleteGlobalSecurityIPGroupRequest &request)const;
			void deleteGlobalSecurityIPGroupAsync(const Model::DeleteGlobalSecurityIPGroupRequest& request, const DeleteGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalSecurityIPGroupOutcomeCallable deleteGlobalSecurityIPGroupCallable(const Model::DeleteGlobalSecurityIPGroupRequest& request) const;
			DeleteMaskingRulesOutcome deleteMaskingRules(const Model::DeleteMaskingRulesRequest &request)const;
			void deleteMaskingRulesAsync(const Model::DeleteMaskingRulesRequest& request, const DeleteMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMaskingRulesOutcomeCallable deleteMaskingRulesCallable(const Model::DeleteMaskingRulesRequest& request) const;
			DeleteNetworkChannelOutcome deleteNetworkChannel(const Model::DeleteNetworkChannelRequest &request)const;
			void deleteNetworkChannelAsync(const Model::DeleteNetworkChannelRequest& request, const DeleteNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkChannelOutcomeCallable deleteNetworkChannelCallable(const Model::DeleteNetworkChannelRequest& request) const;
			DeleteParameterGroupOutcome deleteParameterGroup(const Model::DeleteParameterGroupRequest &request)const;
			void deleteParameterGroupAsync(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParameterGroupOutcomeCallable deleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;
			DeleteSQLRateLimitingRulesOutcome deleteSQLRateLimitingRules(const Model::DeleteSQLRateLimitingRulesRequest &request)const;
			void deleteSQLRateLimitingRulesAsync(const Model::DeleteSQLRateLimitingRulesRequest& request, const DeleteSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSQLRateLimitingRulesOutcomeCallable deleteSQLRateLimitingRulesCallable(const Model::DeleteSQLRateLimitingRulesRequest& request) const;
			DescribeAIDBClusterAttributeOutcome describeAIDBClusterAttribute(const Model::DescribeAIDBClusterAttributeRequest &request)const;
			void describeAIDBClusterAttributeAsync(const Model::DescribeAIDBClusterAttributeRequest& request, const DescribeAIDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAIDBClusterAttributeOutcomeCallable describeAIDBClusterAttributeCallable(const Model::DescribeAIDBClusterAttributeRequest& request) const;
			DescribeAIDBClusterPerformanceOutcome describeAIDBClusterPerformance(const Model::DescribeAIDBClusterPerformanceRequest &request)const;
			void describeAIDBClusterPerformanceAsync(const Model::DescribeAIDBClusterPerformanceRequest& request, const DescribeAIDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAIDBClusterPerformanceOutcomeCallable describeAIDBClusterPerformanceCallable(const Model::DescribeAIDBClusterPerformanceRequest& request) const;
			DescribeAIDBClustersOutcome describeAIDBClusters(const Model::DescribeAIDBClustersRequest &request)const;
			void describeAIDBClustersAsync(const Model::DescribeAIDBClustersRequest& request, const DescribeAIDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAIDBClustersOutcomeCallable describeAIDBClustersCallable(const Model::DescribeAIDBClustersRequest& request) const;
			DescribeAITaskStatusOutcome describeAITaskStatus(const Model::DescribeAITaskStatusRequest &request)const;
			void describeAITaskStatusAsync(const Model::DescribeAITaskStatusRequest& request, const DescribeAITaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAITaskStatusOutcomeCallable describeAITaskStatusCallable(const Model::DescribeAITaskStatusRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAccountsZonalOutcome describeAccountsZonal(const Model::DescribeAccountsZonalRequest &request)const;
			void describeAccountsZonalAsync(const Model::DescribeAccountsZonalRequest& request, const DescribeAccountsZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsZonalOutcomeCallable describeAccountsZonalCallable(const Model::DescribeAccountsZonalRequest& request) const;
			DescribeActivationCodeDetailsOutcome describeActivationCodeDetails(const Model::DescribeActivationCodeDetailsRequest &request)const;
			void describeActivationCodeDetailsAsync(const Model::DescribeActivationCodeDetailsRequest& request, const DescribeActivationCodeDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActivationCodeDetailsOutcomeCallable describeActivationCodeDetailsCallable(const Model::DescribeActivationCodeDetailsRequest& request) const;
			DescribeActivationCodesOutcome describeActivationCodes(const Model::DescribeActivationCodesRequest &request)const;
			void describeActivationCodesAsync(const Model::DescribeActivationCodesRequest& request, const DescribeActivationCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActivationCodesOutcomeCallable describeActivationCodesCallable(const Model::DescribeActivationCodesRequest& request) const;
			DescribeActiveOperationMaintainConfOutcome describeActiveOperationMaintainConf(const Model::DescribeActiveOperationMaintainConfRequest &request)const;
			void describeActiveOperationMaintainConfAsync(const Model::DescribeActiveOperationMaintainConfRequest& request, const DescribeActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationMaintainConfOutcomeCallable describeActiveOperationMaintainConfCallable(const Model::DescribeActiveOperationMaintainConfRequest& request) const;
			DescribeActiveOperationTasksOutcome describeActiveOperationTasks(const Model::DescribeActiveOperationTasksRequest &request)const;
			void describeActiveOperationTasksAsync(const Model::DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTasksOutcomeCallable describeActiveOperationTasksCallable(const Model::DescribeActiveOperationTasksRequest& request) const;
			DescribeApplicationAttributeOutcome describeApplicationAttribute(const Model::DescribeApplicationAttributeRequest &request)const;
			void describeApplicationAttributeAsync(const Model::DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationAttributeOutcomeCallable describeApplicationAttributeCallable(const Model::DescribeApplicationAttributeRequest& request) const;
			DescribeApplicationParametersOutcome describeApplicationParameters(const Model::DescribeApplicationParametersRequest &request)const;
			void describeApplicationParametersAsync(const Model::DescribeApplicationParametersRequest& request, const DescribeApplicationParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationParametersOutcomeCallable describeApplicationParametersCallable(const Model::DescribeApplicationParametersRequest& request) const;
			DescribeApplicationServerlessConfOutcome describeApplicationServerlessConf(const Model::DescribeApplicationServerlessConfRequest &request)const;
			void describeApplicationServerlessConfAsync(const Model::DescribeApplicationServerlessConfRequest& request, const DescribeApplicationServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationServerlessConfOutcomeCallable describeApplicationServerlessConfCallable(const Model::DescribeApplicationServerlessConfRequest& request) const;
			DescribeApplicationsOutcome describeApplications(const Model::DescribeApplicationsRequest &request)const;
			void describeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationsOutcomeCallable describeApplicationsCallable(const Model::DescribeApplicationsRequest& request) const;
			DescribeAutoRenewAttributeOutcome describeAutoRenewAttribute(const Model::DescribeAutoRenewAttributeRequest &request)const;
			void describeAutoRenewAttributeAsync(const Model::DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoRenewAttributeOutcomeCallable describeAutoRenewAttributeCallable(const Model::DescribeAutoRenewAttributeRequest& request) const;
			DescribeAvailableCrossRegionsOutcome describeAvailableCrossRegions(const Model::DescribeAvailableCrossRegionsRequest &request)const;
			void describeAvailableCrossRegionsAsync(const Model::DescribeAvailableCrossRegionsRequest& request, const DescribeAvailableCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableCrossRegionsOutcomeCallable describeAvailableCrossRegionsCallable(const Model::DescribeAvailableCrossRegionsRequest& request) const;
			DescribeBackupLogsOutcome describeBackupLogs(const Model::DescribeBackupLogsRequest &request)const;
			void describeBackupLogsAsync(const Model::DescribeBackupLogsRequest& request, const DescribeBackupLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupLogsOutcomeCallable describeBackupLogsCallable(const Model::DescribeBackupLogsRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupRegionsOutcome describeBackupRegions(const Model::DescribeBackupRegionsRequest &request)const;
			void describeBackupRegionsAsync(const Model::DescribeBackupRegionsRequest& request, const DescribeBackupRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupRegionsOutcomeCallable describeBackupRegionsCallable(const Model::DescribeBackupRegionsRequest& request) const;
			DescribeBackupTasksOutcome describeBackupTasks(const Model::DescribeBackupTasksRequest &request)const;
			void describeBackupTasksAsync(const Model::DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTasksOutcomeCallable describeBackupTasksCallable(const Model::DescribeBackupTasksRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeCharacterSetNameOutcome describeCharacterSetName(const Model::DescribeCharacterSetNameRequest &request)const;
			void describeCharacterSetNameAsync(const Model::DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCharacterSetNameOutcomeCallable describeCharacterSetNameCallable(const Model::DescribeCharacterSetNameRequest& request) const;
			DescribeClassListOutcome describeClassList(const Model::DescribeClassListRequest &request)const;
			void describeClassListAsync(const Model::DescribeClassListRequest& request, const DescribeClassListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClassListOutcomeCallable describeClassListCallable(const Model::DescribeClassListRequest& request) const;
			DescribeColdStorageInstanceOutcome describeColdStorageInstance(const Model::DescribeColdStorageInstanceRequest &request)const;
			void describeColdStorageInstanceAsync(const Model::DescribeColdStorageInstanceRequest& request, const DescribeColdStorageInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColdStorageInstanceOutcomeCallable describeColdStorageInstanceCallable(const Model::DescribeColdStorageInstanceRequest& request) const;
			DescribeCronJobPolicyServerlessOutcome describeCronJobPolicyServerless(const Model::DescribeCronJobPolicyServerlessRequest &request)const;
			void describeCronJobPolicyServerlessAsync(const Model::DescribeCronJobPolicyServerlessRequest& request, const DescribeCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCronJobPolicyServerlessOutcomeCallable describeCronJobPolicyServerlessCallable(const Model::DescribeCronJobPolicyServerlessRequest& request) const;
			DescribeCrossCloudLevelsOutcome describeCrossCloudLevels(const Model::DescribeCrossCloudLevelsRequest &request)const;
			void describeCrossCloudLevelsAsync(const Model::DescribeCrossCloudLevelsRequest& request, const DescribeCrossCloudLevelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossCloudLevelsOutcomeCallable describeCrossCloudLevelsCallable(const Model::DescribeCrossCloudLevelsRequest& request) const;
			DescribeCrossCloudRegionOutcome describeCrossCloudRegion(const Model::DescribeCrossCloudRegionRequest &request)const;
			void describeCrossCloudRegionAsync(const Model::DescribeCrossCloudRegionRequest& request, const DescribeCrossCloudRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossCloudRegionOutcomeCallable describeCrossCloudRegionCallable(const Model::DescribeCrossCloudRegionRequest& request) const;
			DescribeCrossCloudRegionMappingToAliyunOutcome describeCrossCloudRegionMappingToAliyun(const Model::DescribeCrossCloudRegionMappingToAliyunRequest &request)const;
			void describeCrossCloudRegionMappingToAliyunAsync(const Model::DescribeCrossCloudRegionMappingToAliyunRequest& request, const DescribeCrossCloudRegionMappingToAliyunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCrossCloudRegionMappingToAliyunOutcomeCallable describeCrossCloudRegionMappingToAliyunCallable(const Model::DescribeCrossCloudRegionMappingToAliyunRequest& request) const;
			DescribeDBClusterAccessWhitelistOutcome describeDBClusterAccessWhitelist(const Model::DescribeDBClusterAccessWhitelistRequest &request)const;
			void describeDBClusterAccessWhitelistAsync(const Model::DescribeDBClusterAccessWhitelistRequest& request, const DescribeDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAccessWhitelistOutcomeCallable describeDBClusterAccessWhitelistCallable(const Model::DescribeDBClusterAccessWhitelistRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterAuditLogCollectorOutcome describeDBClusterAuditLogCollector(const Model::DescribeDBClusterAuditLogCollectorRequest &request)const;
			void describeDBClusterAuditLogCollectorAsync(const Model::DescribeDBClusterAuditLogCollectorRequest& request, const DescribeDBClusterAuditLogCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAuditLogCollectorOutcomeCallable describeDBClusterAuditLogCollectorCallable(const Model::DescribeDBClusterAuditLogCollectorRequest& request) const;
			DescribeDBClusterAvailableResourcesOutcome describeDBClusterAvailableResources(const Model::DescribeDBClusterAvailableResourcesRequest &request)const;
			void describeDBClusterAvailableResourcesAsync(const Model::DescribeDBClusterAvailableResourcesRequest& request, const DescribeDBClusterAvailableResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAvailableResourcesOutcomeCallable describeDBClusterAvailableResourcesCallable(const Model::DescribeDBClusterAvailableResourcesRequest& request) const;
			DescribeDBClusterConnectivityOutcome describeDBClusterConnectivity(const Model::DescribeDBClusterConnectivityRequest &request)const;
			void describeDBClusterConnectivityAsync(const Model::DescribeDBClusterConnectivityRequest& request, const DescribeDBClusterConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterConnectivityOutcomeCallable describeDBClusterConnectivityCallable(const Model::DescribeDBClusterConnectivityRequest& request) const;
			DescribeDBClusterEncryptionKeyOutcome describeDBClusterEncryptionKey(const Model::DescribeDBClusterEncryptionKeyRequest &request)const;
			void describeDBClusterEncryptionKeyAsync(const Model::DescribeDBClusterEncryptionKeyRequest& request, const DescribeDBClusterEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterEncryptionKeyOutcomeCallable describeDBClusterEncryptionKeyCallable(const Model::DescribeDBClusterEncryptionKeyRequest& request) const;
			DescribeDBClusterEndpointsOutcome describeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest &request)const;
			void describeDBClusterEndpointsAsync(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterEndpointsOutcomeCallable describeDBClusterEndpointsCallable(const Model::DescribeDBClusterEndpointsRequest& request) const;
			DescribeDBClusterEndpointsZonalOutcome describeDBClusterEndpointsZonal(const Model::DescribeDBClusterEndpointsZonalRequest &request)const;
			void describeDBClusterEndpointsZonalAsync(const Model::DescribeDBClusterEndpointsZonalRequest& request, const DescribeDBClusterEndpointsZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterEndpointsZonalOutcomeCallable describeDBClusterEndpointsZonalCallable(const Model::DescribeDBClusterEndpointsZonalRequest& request) const;
			DescribeDBClusterMigrationOutcome describeDBClusterMigration(const Model::DescribeDBClusterMigrationRequest &request)const;
			void describeDBClusterMigrationAsync(const Model::DescribeDBClusterMigrationRequest& request, const DescribeDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterMigrationOutcomeCallable describeDBClusterMigrationCallable(const Model::DescribeDBClusterMigrationRequest& request) const;
			DescribeDBClusterMonitorOutcome describeDBClusterMonitor(const Model::DescribeDBClusterMonitorRequest &request)const;
			void describeDBClusterMonitorAsync(const Model::DescribeDBClusterMonitorRequest& request, const DescribeDBClusterMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterMonitorOutcomeCallable describeDBClusterMonitorCallable(const Model::DescribeDBClusterMonitorRequest& request) const;
			DescribeDBClusterNetInfoOutcome describeDBClusterNetInfo(const Model::DescribeDBClusterNetInfoRequest &request)const;
			void describeDBClusterNetInfoAsync(const Model::DescribeDBClusterNetInfoRequest& request, const DescribeDBClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterNetInfoOutcomeCallable describeDBClusterNetInfoCallable(const Model::DescribeDBClusterNetInfoRequest& request) const;
			DescribeDBClusterParametersOutcome describeDBClusterParameters(const Model::DescribeDBClusterParametersRequest &request)const;
			void describeDBClusterParametersAsync(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterParametersOutcomeCallable describeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBClusterProxyOutcome describeDBClusterProxy(const Model::DescribeDBClusterProxyRequest &request)const;
			void describeDBClusterProxyAsync(const Model::DescribeDBClusterProxyRequest& request, const DescribeDBClusterProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterProxyOutcomeCallable describeDBClusterProxyCallable(const Model::DescribeDBClusterProxyRequest& request) const;
			DescribeDBClusterSSLOutcome describeDBClusterSSL(const Model::DescribeDBClusterSSLRequest &request)const;
			void describeDBClusterSSLAsync(const Model::DescribeDBClusterSSLRequest& request, const DescribeDBClusterSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterSSLOutcomeCallable describeDBClusterSSLCallable(const Model::DescribeDBClusterSSLRequest& request) const;
			DescribeDBClusterServerlessConfOutcome describeDBClusterServerlessConf(const Model::DescribeDBClusterServerlessConfRequest &request)const;
			void describeDBClusterServerlessConfAsync(const Model::DescribeDBClusterServerlessConfRequest& request, const DescribeDBClusterServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterServerlessConfOutcomeCallable describeDBClusterServerlessConfCallable(const Model::DescribeDBClusterServerlessConfRequest& request) const;
			DescribeDBClusterTDEOutcome describeDBClusterTDE(const Model::DescribeDBClusterTDERequest &request)const;
			void describeDBClusterTDEAsync(const Model::DescribeDBClusterTDERequest& request, const DescribeDBClusterTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterTDEOutcomeCallable describeDBClusterTDECallable(const Model::DescribeDBClusterTDERequest& request) const;
			DescribeDBClusterVersionOutcome describeDBClusterVersion(const Model::DescribeDBClusterVersionRequest &request)const;
			void describeDBClusterVersionAsync(const Model::DescribeDBClusterVersionRequest& request, const DescribeDBClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterVersionOutcomeCallable describeDBClusterVersionCallable(const Model::DescribeDBClusterVersionRequest& request) const;
			DescribeDBClusterVersionZonalOutcome describeDBClusterVersionZonal(const Model::DescribeDBClusterVersionZonalRequest &request)const;
			void describeDBClusterVersionZonalAsync(const Model::DescribeDBClusterVersionZonalRequest& request, const DescribeDBClusterVersionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterVersionZonalOutcomeCallable describeDBClusterVersionZonalCallable(const Model::DescribeDBClusterVersionZonalRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeDBClustersWithBackupsOutcome describeDBClustersWithBackups(const Model::DescribeDBClustersWithBackupsRequest &request)const;
			void describeDBClustersWithBackupsAsync(const Model::DescribeDBClustersWithBackupsRequest& request, const DescribeDBClustersWithBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersWithBackupsOutcomeCallable describeDBClustersWithBackupsCallable(const Model::DescribeDBClustersWithBackupsRequest& request) const;
			DescribeDBClustersZonalOutcome describeDBClustersZonal(const Model::DescribeDBClustersZonalRequest &request)const;
			void describeDBClustersZonalAsync(const Model::DescribeDBClustersZonalRequest& request, const DescribeDBClustersZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersZonalOutcomeCallable describeDBClustersZonalCallable(const Model::DescribeDBClustersZonalRequest& request) const;
			DescribeDBInitializeVariableOutcome describeDBInitializeVariable(const Model::DescribeDBInitializeVariableRequest &request)const;
			void describeDBInitializeVariableAsync(const Model::DescribeDBInitializeVariableRequest& request, const DescribeDBInitializeVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInitializeVariableOutcomeCallable describeDBInitializeVariableCallable(const Model::DescribeDBInitializeVariableRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBLinksOutcome describeDBLinks(const Model::DescribeDBLinksRequest &request)const;
			void describeDBLinksAsync(const Model::DescribeDBLinksRequest& request, const DescribeDBLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBLinksOutcomeCallable describeDBLinksCallable(const Model::DescribeDBLinksRequest& request) const;
			DescribeDBLogFilesOutcome describeDBLogFiles(const Model::DescribeDBLogFilesRequest &request)const;
			void describeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBLogFilesOutcomeCallable describeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request) const;
			DescribeDBMiniEngineVersionsOutcome describeDBMiniEngineVersions(const Model::DescribeDBMiniEngineVersionsRequest &request)const;
			void describeDBMiniEngineVersionsAsync(const Model::DescribeDBMiniEngineVersionsRequest& request, const DescribeDBMiniEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBMiniEngineVersionsOutcomeCallable describeDBMiniEngineVersionsCallable(const Model::DescribeDBMiniEngineVersionsRequest& request) const;
			DescribeDBNodePerformanceOutcome describeDBNodePerformance(const Model::DescribeDBNodePerformanceRequest &request)const;
			void describeDBNodePerformanceAsync(const Model::DescribeDBNodePerformanceRequest& request, const DescribeDBNodePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBNodePerformanceOutcomeCallable describeDBNodePerformanceCallable(const Model::DescribeDBNodePerformanceRequest& request) const;
			DescribeDBNodesParametersOutcome describeDBNodesParameters(const Model::DescribeDBNodesParametersRequest &request)const;
			void describeDBNodesParametersAsync(const Model::DescribeDBNodesParametersRequest& request, const DescribeDBNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBNodesParametersOutcomeCallable describeDBNodesParametersCallable(const Model::DescribeDBNodesParametersRequest& request) const;
			DescribeDBProxyPerformanceOutcome describeDBProxyPerformance(const Model::DescribeDBProxyPerformanceRequest &request)const;
			void describeDBProxyPerformanceAsync(const Model::DescribeDBProxyPerformanceRequest& request, const DescribeDBProxyPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBProxyPerformanceOutcomeCallable describeDBProxyPerformanceCallable(const Model::DescribeDBProxyPerformanceRequest& request) const;
			DescribeDasConfigOutcome describeDasConfig(const Model::DescribeDasConfigRequest &request)const;
			void describeDasConfigAsync(const Model::DescribeDasConfigRequest& request, const DescribeDasConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDasConfigOutcomeCallable describeDasConfigCallable(const Model::DescribeDasConfigRequest& request) const;
			DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
			void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
			DescribeDatabasesZonalOutcome describeDatabasesZonal(const Model::DescribeDatabasesZonalRequest &request)const;
			void describeDatabasesZonalAsync(const Model::DescribeDatabasesZonalRequest& request, const DescribeDatabasesZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesZonalOutcomeCallable describeDatabasesZonalCallable(const Model::DescribeDatabasesZonalRequest& request) const;
			DescribeDbClusterAttributeZonalOutcome describeDbClusterAttributeZonal(const Model::DescribeDbClusterAttributeZonalRequest &request)const;
			void describeDbClusterAttributeZonalAsync(const Model::DescribeDbClusterAttributeZonalRequest& request, const DescribeDbClusterAttributeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbClusterAttributeZonalOutcomeCallable describeDbClusterAttributeZonalCallable(const Model::DescribeDbClusterAttributeZonalRequest& request) const;
			DescribeDetachedBackupsOutcome describeDetachedBackups(const Model::DescribeDetachedBackupsRequest &request)const;
			void describeDetachedBackupsAsync(const Model::DescribeDetachedBackupsRequest& request, const DescribeDetachedBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDetachedBackupsOutcomeCallable describeDetachedBackupsCallable(const Model::DescribeDetachedBackupsRequest& request) const;
			DescribeEncryptionDBRolePrivilegeOutcome describeEncryptionDBRolePrivilege(const Model::DescribeEncryptionDBRolePrivilegeRequest &request)const;
			void describeEncryptionDBRolePrivilegeAsync(const Model::DescribeEncryptionDBRolePrivilegeRequest& request, const DescribeEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEncryptionDBRolePrivilegeOutcomeCallable describeEncryptionDBRolePrivilegeCallable(const Model::DescribeEncryptionDBRolePrivilegeRequest& request) const;
			DescribeEncryptionDBSecretOutcome describeEncryptionDBSecret(const Model::DescribeEncryptionDBSecretRequest &request)const;
			void describeEncryptionDBSecretAsync(const Model::DescribeEncryptionDBSecretRequest& request, const DescribeEncryptionDBSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEncryptionDBSecretOutcomeCallable describeEncryptionDBSecretCallable(const Model::DescribeEncryptionDBSecretRequest& request) const;
			DescribeExtensionsOutcome describeExtensions(const Model::DescribeExtensionsRequest &request)const;
			void describeExtensionsAsync(const Model::DescribeExtensionsRequest& request, const DescribeExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExtensionsOutcomeCallable describeExtensionsCallable(const Model::DescribeExtensionsRequest& request) const;
			DescribeFirewallRulesOutcome describeFirewallRules(const Model::DescribeFirewallRulesRequest &request)const;
			void describeFirewallRulesAsync(const Model::DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirewallRulesOutcomeCallable describeFirewallRulesCallable(const Model::DescribeFirewallRulesRequest& request) const;
			DescribeGlobalDataNetworkListOutcome describeGlobalDataNetworkList(const Model::DescribeGlobalDataNetworkListRequest &request)const;
			void describeGlobalDataNetworkListAsync(const Model::DescribeGlobalDataNetworkListRequest& request, const DescribeGlobalDataNetworkListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalDataNetworkListOutcomeCallable describeGlobalDataNetworkListCallable(const Model::DescribeGlobalDataNetworkListRequest& request) const;
			DescribeGlobalDatabaseNetworkOutcome describeGlobalDatabaseNetwork(const Model::DescribeGlobalDatabaseNetworkRequest &request)const;
			void describeGlobalDatabaseNetworkAsync(const Model::DescribeGlobalDatabaseNetworkRequest& request, const DescribeGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalDatabaseNetworkOutcomeCallable describeGlobalDatabaseNetworkCallable(const Model::DescribeGlobalDatabaseNetworkRequest& request) const;
			DescribeGlobalDatabaseNetworksOutcome describeGlobalDatabaseNetworks(const Model::DescribeGlobalDatabaseNetworksRequest &request)const;
			void describeGlobalDatabaseNetworksAsync(const Model::DescribeGlobalDatabaseNetworksRequest& request, const DescribeGlobalDatabaseNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalDatabaseNetworksOutcomeCallable describeGlobalDatabaseNetworksCallable(const Model::DescribeGlobalDatabaseNetworksRequest& request) const;
			DescribeGlobalSecurityIPGroupOutcome describeGlobalSecurityIPGroup(const Model::DescribeGlobalSecurityIPGroupRequest &request)const;
			void describeGlobalSecurityIPGroupAsync(const Model::DescribeGlobalSecurityIPGroupRequest& request, const DescribeGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalSecurityIPGroupOutcomeCallable describeGlobalSecurityIPGroupCallable(const Model::DescribeGlobalSecurityIPGroupRequest& request) const;
			DescribeGlobalSecurityIPGroupRelationOutcome describeGlobalSecurityIPGroupRelation(const Model::DescribeGlobalSecurityIPGroupRelationRequest &request)const;
			void describeGlobalSecurityIPGroupRelationAsync(const Model::DescribeGlobalSecurityIPGroupRelationRequest& request, const DescribeGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalSecurityIPGroupRelationOutcomeCallable describeGlobalSecurityIPGroupRelationCallable(const Model::DescribeGlobalSecurityIPGroupRelationRequest& request) const;
			DescribeHALogsOutcome describeHALogs(const Model::DescribeHALogsRequest &request)const;
			void describeHALogsAsync(const Model::DescribeHALogsRequest& request, const DescribeHALogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHALogsOutcomeCallable describeHALogsCallable(const Model::DescribeHALogsRequest& request) const;
			DescribeHistoryTasksOutcome describeHistoryTasks(const Model::DescribeHistoryTasksRequest &request)const;
			void describeHistoryTasksAsync(const Model::DescribeHistoryTasksRequest& request, const DescribeHistoryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryTasksOutcomeCallable describeHistoryTasksCallable(const Model::DescribeHistoryTasksRequest& request) const;
			DescribeHistoryTasksStatOutcome describeHistoryTasksStat(const Model::DescribeHistoryTasksStatRequest &request)const;
			void describeHistoryTasksStatAsync(const Model::DescribeHistoryTasksStatRequest& request, const DescribeHistoryTasksStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryTasksStatOutcomeCallable describeHistoryTasksStatCallable(const Model::DescribeHistoryTasksStatRequest& request) const;
			DescribeLicenseOrderDetailsOutcome describeLicenseOrderDetails(const Model::DescribeLicenseOrderDetailsRequest &request)const;
			void describeLicenseOrderDetailsAsync(const Model::DescribeLicenseOrderDetailsRequest& request, const DescribeLicenseOrderDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLicenseOrderDetailsOutcomeCallable describeLicenseOrderDetailsCallable(const Model::DescribeLicenseOrderDetailsRequest& request) const;
			DescribeLicenseOrdersOutcome describeLicenseOrders(const Model::DescribeLicenseOrdersRequest &request)const;
			void describeLicenseOrdersAsync(const Model::DescribeLicenseOrdersRequest& request, const DescribeLicenseOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLicenseOrdersOutcomeCallable describeLicenseOrdersCallable(const Model::DescribeLicenseOrdersRequest& request) const;
			DescribeLocalAvailableRecoveryTimeOutcome describeLocalAvailableRecoveryTime(const Model::DescribeLocalAvailableRecoveryTimeRequest &request)const;
			void describeLocalAvailableRecoveryTimeAsync(const Model::DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocalAvailableRecoveryTimeOutcomeCallable describeLocalAvailableRecoveryTimeCallable(const Model::DescribeLocalAvailableRecoveryTimeRequest& request) const;
			DescribeLogBackupPolicyOutcome describeLogBackupPolicy(const Model::DescribeLogBackupPolicyRequest &request)const;
			void describeLogBackupPolicyAsync(const Model::DescribeLogBackupPolicyRequest& request, const DescribeLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogBackupPolicyOutcomeCallable describeLogBackupPolicyCallable(const Model::DescribeLogBackupPolicyRequest& request) const;
			DescribeMaskingRulesOutcome describeMaskingRules(const Model::DescribeMaskingRulesRequest &request)const;
			void describeMaskingRulesAsync(const Model::DescribeMaskingRulesRequest& request, const DescribeMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMaskingRulesOutcomeCallable describeMaskingRulesCallable(const Model::DescribeMaskingRulesRequest& request) const;
			DescribeMetaListOutcome describeMetaList(const Model::DescribeMetaListRequest &request)const;
			void describeMetaListAsync(const Model::DescribeMetaListRequest& request, const DescribeMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetaListOutcomeCallable describeMetaListCallable(const Model::DescribeMetaListRequest& request) const;
			DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
			void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
			DescribeNetworkChannelOutcome describeNetworkChannel(const Model::DescribeNetworkChannelRequest &request)const;
			void describeNetworkChannelAsync(const Model::DescribeNetworkChannelRequest& request, const DescribeNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkChannelOutcomeCallable describeNetworkChannelCallable(const Model::DescribeNetworkChannelRequest& request) const;
			DescribeParameterGroupOutcome describeParameterGroup(const Model::DescribeParameterGroupRequest &request)const;
			void describeParameterGroupAsync(const Model::DescribeParameterGroupRequest& request, const DescribeParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterGroupOutcomeCallable describeParameterGroupCallable(const Model::DescribeParameterGroupRequest& request) const;
			DescribeParameterGroupsOutcome describeParameterGroups(const Model::DescribeParameterGroupsRequest &request)const;
			void describeParameterGroupsAsync(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterGroupsOutcomeCallable describeParameterGroupsCallable(const Model::DescribeParameterGroupsRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DescribePendingMaintenanceActionOutcome describePendingMaintenanceAction(const Model::DescribePendingMaintenanceActionRequest &request)const;
			void describePendingMaintenanceActionAsync(const Model::DescribePendingMaintenanceActionRequest& request, const DescribePendingMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePendingMaintenanceActionOutcomeCallable describePendingMaintenanceActionCallable(const Model::DescribePendingMaintenanceActionRequest& request) const;
			DescribePendingMaintenanceActionsOutcome describePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest &request)const;
			void describePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePendingMaintenanceActionsOutcomeCallable describePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;
			DescribePolarSQLCollectorPolicyOutcome describePolarSQLCollectorPolicy(const Model::DescribePolarSQLCollectorPolicyRequest &request)const;
			void describePolarSQLCollectorPolicyAsync(const Model::DescribePolarSQLCollectorPolicyRequest& request, const DescribePolarSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolarSQLCollectorPolicyOutcomeCallable describePolarSQLCollectorPolicyCallable(const Model::DescribePolarSQLCollectorPolicyRequest& request) const;
			DescribeRdsVSwitchsOutcome describeRdsVSwitchs(const Model::DescribeRdsVSwitchsRequest &request)const;
			void describeRdsVSwitchsAsync(const Model::DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVSwitchsOutcomeCallable describeRdsVSwitchsCallable(const Model::DescribeRdsVSwitchsRequest& request) const;
			DescribeRdsVpcsOutcome describeRdsVpcs(const Model::DescribeRdsVpcsRequest &request)const;
			void describeRdsVpcsAsync(const Model::DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVpcsOutcomeCallable describeRdsVpcsCallable(const Model::DescribeRdsVpcsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeResourcePackagesOutcome describeResourcePackages(const Model::DescribeResourcePackagesRequest &request)const;
			void describeResourcePackagesAsync(const Model::DescribeResourcePackagesRequest& request, const DescribeResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourcePackagesOutcomeCallable describeResourcePackagesCallable(const Model::DescribeResourcePackagesRequest& request) const;
			DescribeSQLRateLimitingRulesOutcome describeSQLRateLimitingRules(const Model::DescribeSQLRateLimitingRulesRequest &request)const;
			void describeSQLRateLimitingRulesAsync(const Model::DescribeSQLRateLimitingRulesRequest& request, const DescribeSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLRateLimitingRulesOutcomeCallable describeSQLRateLimitingRulesCallable(const Model::DescribeSQLRateLimitingRulesRequest& request) const;
			DescribeScheduleTasksOutcome describeScheduleTasks(const Model::DescribeScheduleTasksRequest &request)const;
			void describeScheduleTasksAsync(const Model::DescribeScheduleTasksRequest& request, const DescribeScheduleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScheduleTasksOutcomeCallable describeScheduleTasksCallable(const Model::DescribeScheduleTasksRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSlowLogsOutcome describeSlowLogs(const Model::DescribeSlowLogsRequest &request)const;
			void describeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogsOutcomeCallable describeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeUpgradeReportOutcome describeUpgradeReport(const Model::DescribeUpgradeReportRequest &request)const;
			void describeUpgradeReportAsync(const Model::DescribeUpgradeReportRequest& request, const DescribeUpgradeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpgradeReportOutcomeCallable describeUpgradeReportCallable(const Model::DescribeUpgradeReportRequest& request) const;
			DescribeUserEncryptionKeyListOutcome describeUserEncryptionKeyList(const Model::DescribeUserEncryptionKeyListRequest &request)const;
			void describeUserEncryptionKeyListAsync(const Model::DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserEncryptionKeyListOutcomeCallable describeUserEncryptionKeyListCallable(const Model::DescribeUserEncryptionKeyListRequest& request) const;
			DescribeVSwitchListOutcome describeVSwitchList(const Model::DescribeVSwitchListRequest &request)const;
			void describeVSwitchListAsync(const Model::DescribeVSwitchListRequest& request, const DescribeVSwitchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchListOutcomeCallable describeVSwitchListCallable(const Model::DescribeVSwitchListRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DescribeVpcsOutcome describeVpcs(const Model::DescribeVpcsRequest &request)const;
			void describeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcsOutcomeCallable describeVpcsCallable(const Model::DescribeVpcsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DisableDBClusterOrcaOutcome disableDBClusterOrca(const Model::DisableDBClusterOrcaRequest &request)const;
			void disableDBClusterOrcaAsync(const Model::DisableDBClusterOrcaRequest& request, const DisableDBClusterOrcaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDBClusterOrcaOutcomeCallable disableDBClusterOrcaCallable(const Model::DisableDBClusterOrcaRequest& request) const;
			DisableDBClusterServerlessOutcome disableDBClusterServerless(const Model::DisableDBClusterServerlessRequest &request)const;
			void disableDBClusterServerlessAsync(const Model::DisableDBClusterServerlessRequest& request, const DisableDBClusterServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDBClusterServerlessOutcomeCallable disableDBClusterServerlessCallable(const Model::DisableDBClusterServerlessRequest& request) const;
			EnableDBClusterOrcaOutcome enableDBClusterOrca(const Model::EnableDBClusterOrcaRequest &request)const;
			void enableDBClusterOrcaAsync(const Model::EnableDBClusterOrcaRequest& request, const EnableDBClusterOrcaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDBClusterOrcaOutcomeCallable enableDBClusterOrcaCallable(const Model::EnableDBClusterOrcaRequest& request) const;
			EnableDBClusterServerlessOutcome enableDBClusterServerless(const Model::EnableDBClusterServerlessRequest &request)const;
			void enableDBClusterServerlessAsync(const Model::EnableDBClusterServerlessRequest& request, const EnableDBClusterServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDBClusterServerlessOutcomeCallable enableDBClusterServerlessCallable(const Model::EnableDBClusterServerlessRequest& request) const;
			EnableFirewallRulesOutcome enableFirewallRules(const Model::EnableFirewallRulesRequest &request)const;
			void enableFirewallRulesAsync(const Model::EnableFirewallRulesRequest& request, const EnableFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableFirewallRulesOutcomeCallable enableFirewallRulesCallable(const Model::EnableFirewallRulesRequest& request) const;
			EnableSQLRateLimitingRulesOutcome enableSQLRateLimitingRules(const Model::EnableSQLRateLimitingRulesRequest &request)const;
			void enableSQLRateLimitingRulesAsync(const Model::EnableSQLRateLimitingRulesRequest& request, const EnableSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSQLRateLimitingRulesOutcomeCallable enableSQLRateLimitingRulesCallable(const Model::EnableSQLRateLimitingRulesRequest& request) const;
			EvaluateRegionResourceOutcome evaluateRegionResource(const Model::EvaluateRegionResourceRequest &request)const;
			void evaluateRegionResourceAsync(const Model::EvaluateRegionResourceRequest& request, const EvaluateRegionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateRegionResourceOutcomeCallable evaluateRegionResourceCallable(const Model::EvaluateRegionResourceRequest& request) const;
			ExecuteCrossCloudOpenAPIOutcome executeCrossCloudOpenAPI(const Model::ExecuteCrossCloudOpenAPIRequest &request)const;
			void executeCrossCloudOpenAPIAsync(const Model::ExecuteCrossCloudOpenAPIRequest& request, const ExecuteCrossCloudOpenAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteCrossCloudOpenAPIOutcomeCallable executeCrossCloudOpenAPICallable(const Model::ExecuteCrossCloudOpenAPIRequest& request) const;
			FailoverDBClusterOutcome failoverDBCluster(const Model::FailoverDBClusterRequest &request)const;
			void failoverDBClusterAsync(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FailoverDBClusterOutcomeCallable failoverDBClusterCallable(const Model::FailoverDBClusterRequest& request) const;
			FailoverDBClusterZonalOutcome failoverDBClusterZonal(const Model::FailoverDBClusterZonalRequest &request)const;
			void failoverDBClusterZonalAsync(const Model::FailoverDBClusterZonalRequest& request, const FailoverDBClusterZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FailoverDBClusterZonalOutcomeCallable failoverDBClusterZonalCallable(const Model::FailoverDBClusterZonalRequest& request) const;
			GenerateUpgradeReportForSyncCloneOutcome generateUpgradeReportForSyncClone(const Model::GenerateUpgradeReportForSyncCloneRequest &request)const;
			void generateUpgradeReportForSyncCloneAsync(const Model::GenerateUpgradeReportForSyncCloneRequest& request, const GenerateUpgradeReportForSyncCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUpgradeReportForSyncCloneOutcomeCallable generateUpgradeReportForSyncCloneCallable(const Model::GenerateUpgradeReportForSyncCloneRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			GrantAccountPrivilegeZonalOutcome grantAccountPrivilegeZonal(const Model::GrantAccountPrivilegeZonalRequest &request)const;
			void grantAccountPrivilegeZonalAsync(const Model::GrantAccountPrivilegeZonalRequest& request, const GrantAccountPrivilegeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeZonalOutcomeCallable grantAccountPrivilegeZonalCallable(const Model::GrantAccountPrivilegeZonalRequest& request) const;
			ListOrdersOutcome listOrders(const Model::ListOrdersRequest &request)const;
			void listOrdersAsync(const Model::ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrdersOutcomeCallable listOrdersCallable(const Model::ListOrdersRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagResourcesForRegionOutcome listTagResourcesForRegion(const Model::ListTagResourcesForRegionRequest &request)const;
			void listTagResourcesForRegionAsync(const Model::ListTagResourcesForRegionRequest& request, const ListTagResourcesForRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesForRegionOutcomeCallable listTagResourcesForRegionCallable(const Model::ListTagResourcesForRegionRequest& request) const;
			ManuallyStartDBClusterOutcome manuallyStartDBCluster(const Model::ManuallyStartDBClusterRequest &request)const;
			void manuallyStartDBClusterAsync(const Model::ManuallyStartDBClusterRequest& request, const ManuallyStartDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManuallyStartDBClusterOutcomeCallable manuallyStartDBClusterCallable(const Model::ManuallyStartDBClusterRequest& request) const;
			ModifyAIDBClusterDescriptionOutcome modifyAIDBClusterDescription(const Model::ModifyAIDBClusterDescriptionRequest &request)const;
			void modifyAIDBClusterDescriptionAsync(const Model::ModifyAIDBClusterDescriptionRequest& request, const ModifyAIDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAIDBClusterDescriptionOutcomeCallable modifyAIDBClusterDescriptionCallable(const Model::ModifyAIDBClusterDescriptionRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountDescriptionZonalOutcome modifyAccountDescriptionZonal(const Model::ModifyAccountDescriptionZonalRequest &request)const;
			void modifyAccountDescriptionZonalAsync(const Model::ModifyAccountDescriptionZonalRequest& request, const ModifyAccountDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionZonalOutcomeCallable modifyAccountDescriptionZonalCallable(const Model::ModifyAccountDescriptionZonalRequest& request) const;
			ModifyAccountLockStateOutcome modifyAccountLockState(const Model::ModifyAccountLockStateRequest &request)const;
			void modifyAccountLockStateAsync(const Model::ModifyAccountLockStateRequest& request, const ModifyAccountLockStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountLockStateOutcomeCallable modifyAccountLockStateCallable(const Model::ModifyAccountLockStateRequest& request) const;
			ModifyAccountPasswordOutcome modifyAccountPassword(const Model::ModifyAccountPasswordRequest &request)const;
			void modifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPasswordOutcomeCallable modifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request) const;
			ModifyAccountPasswordZonalOutcome modifyAccountPasswordZonal(const Model::ModifyAccountPasswordZonalRequest &request)const;
			void modifyAccountPasswordZonalAsync(const Model::ModifyAccountPasswordZonalRequest& request, const ModifyAccountPasswordZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPasswordZonalOutcomeCallable modifyAccountPasswordZonalCallable(const Model::ModifyAccountPasswordZonalRequest& request) const;
			ModifyActiveOperationMaintainConfOutcome modifyActiveOperationMaintainConf(const Model::ModifyActiveOperationMaintainConfRequest &request)const;
			void modifyActiveOperationMaintainConfAsync(const Model::ModifyActiveOperationMaintainConfRequest& request, const ModifyActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationMaintainConfOutcomeCallable modifyActiveOperationMaintainConfCallable(const Model::ModifyActiveOperationMaintainConfRequest& request) const;
			ModifyActiveOperationTasksOutcome modifyActiveOperationTasks(const Model::ModifyActiveOperationTasksRequest &request)const;
			void modifyActiveOperationTasksAsync(const Model::ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationTasksOutcomeCallable modifyActiveOperationTasksCallable(const Model::ModifyActiveOperationTasksRequest& request) const;
			ModifyApplicationDescriptionOutcome modifyApplicationDescription(const Model::ModifyApplicationDescriptionRequest &request)const;
			void modifyApplicationDescriptionAsync(const Model::ModifyApplicationDescriptionRequest& request, const ModifyApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApplicationDescriptionOutcomeCallable modifyApplicationDescriptionCallable(const Model::ModifyApplicationDescriptionRequest& request) const;
			ModifyApplicationParameterOutcome modifyApplicationParameter(const Model::ModifyApplicationParameterRequest &request)const;
			void modifyApplicationParameterAsync(const Model::ModifyApplicationParameterRequest& request, const ModifyApplicationParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApplicationParameterOutcomeCallable modifyApplicationParameterCallable(const Model::ModifyApplicationParameterRequest& request) const;
			ModifyApplicationServerlessConfOutcome modifyApplicationServerlessConf(const Model::ModifyApplicationServerlessConfRequest &request)const;
			void modifyApplicationServerlessConfAsync(const Model::ModifyApplicationServerlessConfRequest& request, const ModifyApplicationServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApplicationServerlessConfOutcomeCallable modifyApplicationServerlessConfCallable(const Model::ModifyApplicationServerlessConfRequest& request) const;
			ModifyApplicationWhitelistOutcome modifyApplicationWhitelist(const Model::ModifyApplicationWhitelistRequest &request)const;
			void modifyApplicationWhitelistAsync(const Model::ModifyApplicationWhitelistRequest& request, const ModifyApplicationWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApplicationWhitelistOutcomeCallable modifyApplicationWhitelistCallable(const Model::ModifyApplicationWhitelistRequest& request) const;
			ModifyAutoRenewAttributeOutcome modifyAutoRenewAttribute(const Model::ModifyAutoRenewAttributeRequest &request)const;
			void modifyAutoRenewAttributeAsync(const Model::ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoRenewAttributeOutcomeCallable modifyAutoRenewAttributeCallable(const Model::ModifyAutoRenewAttributeRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyCronJobPolicyServerlessOutcome modifyCronJobPolicyServerless(const Model::ModifyCronJobPolicyServerlessRequest &request)const;
			void modifyCronJobPolicyServerlessAsync(const Model::ModifyCronJobPolicyServerlessRequest& request, const ModifyCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCronJobPolicyServerlessOutcomeCallable modifyCronJobPolicyServerlessCallable(const Model::ModifyCronJobPolicyServerlessRequest& request) const;
			ModifyDBClusterOutcome modifyDBCluster(const Model::ModifyDBClusterRequest &request)const;
			void modifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterOutcomeCallable modifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;
			ModifyDBClusterAccessWhitelistOutcome modifyDBClusterAccessWhitelist(const Model::ModifyDBClusterAccessWhitelistRequest &request)const;
			void modifyDBClusterAccessWhitelistAsync(const Model::ModifyDBClusterAccessWhitelistRequest& request, const ModifyDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAccessWhitelistOutcomeCallable modifyDBClusterAccessWhitelistCallable(const Model::ModifyDBClusterAccessWhitelistRequest& request) const;
			ModifyDBClusterAndNodesParametersOutcome modifyDBClusterAndNodesParameters(const Model::ModifyDBClusterAndNodesParametersRequest &request)const;
			void modifyDBClusterAndNodesParametersAsync(const Model::ModifyDBClusterAndNodesParametersRequest& request, const ModifyDBClusterAndNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAndNodesParametersOutcomeCallable modifyDBClusterAndNodesParametersCallable(const Model::ModifyDBClusterAndNodesParametersRequest& request) const;
			ModifyDBClusterArchOutcome modifyDBClusterArch(const Model::ModifyDBClusterArchRequest &request)const;
			void modifyDBClusterArchAsync(const Model::ModifyDBClusterArchRequest& request, const ModifyDBClusterArchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterArchOutcomeCallable modifyDBClusterArchCallable(const Model::ModifyDBClusterArchRequest& request) const;
			ModifyDBClusterAuditLogCollectorOutcome modifyDBClusterAuditLogCollector(const Model::ModifyDBClusterAuditLogCollectorRequest &request)const;
			void modifyDBClusterAuditLogCollectorAsync(const Model::ModifyDBClusterAuditLogCollectorRequest& request, const ModifyDBClusterAuditLogCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAuditLogCollectorOutcomeCallable modifyDBClusterAuditLogCollectorCallable(const Model::ModifyDBClusterAuditLogCollectorRequest& request) const;
			ModifyDBClusterDeletionOutcome modifyDBClusterDeletion(const Model::ModifyDBClusterDeletionRequest &request)const;
			void modifyDBClusterDeletionAsync(const Model::ModifyDBClusterDeletionRequest& request, const ModifyDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDeletionOutcomeCallable modifyDBClusterDeletionCallable(const Model::ModifyDBClusterDeletionRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterDescriptionZonalOutcome modifyDBClusterDescriptionZonal(const Model::ModifyDBClusterDescriptionZonalRequest &request)const;
			void modifyDBClusterDescriptionZonalAsync(const Model::ModifyDBClusterDescriptionZonalRequest& request, const ModifyDBClusterDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionZonalOutcomeCallable modifyDBClusterDescriptionZonalCallable(const Model::ModifyDBClusterDescriptionZonalRequest& request) const;
			ModifyDBClusterEndpointOutcome modifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest &request)const;
			void modifyDBClusterEndpointAsync(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterEndpointOutcomeCallable modifyDBClusterEndpointCallable(const Model::ModifyDBClusterEndpointRequest& request) const;
			ModifyDBClusterEndpointZonalOutcome modifyDBClusterEndpointZonal(const Model::ModifyDBClusterEndpointZonalRequest &request)const;
			void modifyDBClusterEndpointZonalAsync(const Model::ModifyDBClusterEndpointZonalRequest& request, const ModifyDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterEndpointZonalOutcomeCallable modifyDBClusterEndpointZonalCallable(const Model::ModifyDBClusterEndpointZonalRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ModifyDBClusterMigrationOutcome modifyDBClusterMigration(const Model::ModifyDBClusterMigrationRequest &request)const;
			void modifyDBClusterMigrationAsync(const Model::ModifyDBClusterMigrationRequest& request, const ModifyDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMigrationOutcomeCallable modifyDBClusterMigrationCallable(const Model::ModifyDBClusterMigrationRequest& request) const;
			ModifyDBClusterMigrationEndpointOutcome modifyDBClusterMigrationEndpoint(const Model::ModifyDBClusterMigrationEndpointRequest &request)const;
			void modifyDBClusterMigrationEndpointAsync(const Model::ModifyDBClusterMigrationEndpointRequest& request, const ModifyDBClusterMigrationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMigrationEndpointOutcomeCallable modifyDBClusterMigrationEndpointCallable(const Model::ModifyDBClusterMigrationEndpointRequest& request) const;
			ModifyDBClusterMonitorOutcome modifyDBClusterMonitor(const Model::ModifyDBClusterMonitorRequest &request)const;
			void modifyDBClusterMonitorAsync(const Model::ModifyDBClusterMonitorRequest& request, const ModifyDBClusterMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMonitorOutcomeCallable modifyDBClusterMonitorCallable(const Model::ModifyDBClusterMonitorRequest& request) const;
			ModifyDBClusterParametersOutcome modifyDBClusterParameters(const Model::ModifyDBClusterParametersRequest &request)const;
			void modifyDBClusterParametersAsync(const Model::ModifyDBClusterParametersRequest& request, const ModifyDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterParametersOutcomeCallable modifyDBClusterParametersCallable(const Model::ModifyDBClusterParametersRequest& request) const;
			ModifyDBClusterPrimaryZoneOutcome modifyDBClusterPrimaryZone(const Model::ModifyDBClusterPrimaryZoneRequest &request)const;
			void modifyDBClusterPrimaryZoneAsync(const Model::ModifyDBClusterPrimaryZoneRequest& request, const ModifyDBClusterPrimaryZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterPrimaryZoneOutcomeCallable modifyDBClusterPrimaryZoneCallable(const Model::ModifyDBClusterPrimaryZoneRequest& request) const;
			ModifyDBClusterResourceGroupOutcome modifyDBClusterResourceGroup(const Model::ModifyDBClusterResourceGroupRequest &request)const;
			void modifyDBClusterResourceGroupAsync(const Model::ModifyDBClusterResourceGroupRequest& request, const ModifyDBClusterResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterResourceGroupOutcomeCallable modifyDBClusterResourceGroupCallable(const Model::ModifyDBClusterResourceGroupRequest& request) const;
			ModifyDBClusterSSLOutcome modifyDBClusterSSL(const Model::ModifyDBClusterSSLRequest &request)const;
			void modifyDBClusterSSLAsync(const Model::ModifyDBClusterSSLRequest& request, const ModifyDBClusterSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterSSLOutcomeCallable modifyDBClusterSSLCallable(const Model::ModifyDBClusterSSLRequest& request) const;
			ModifyDBClusterServerlessConfOutcome modifyDBClusterServerlessConf(const Model::ModifyDBClusterServerlessConfRequest &request)const;
			void modifyDBClusterServerlessConfAsync(const Model::ModifyDBClusterServerlessConfRequest& request, const ModifyDBClusterServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterServerlessConfOutcomeCallable modifyDBClusterServerlessConfCallable(const Model::ModifyDBClusterServerlessConfRequest& request) const;
			ModifyDBClusterStoragePerformanceOutcome modifyDBClusterStoragePerformance(const Model::ModifyDBClusterStoragePerformanceRequest &request)const;
			void modifyDBClusterStoragePerformanceAsync(const Model::ModifyDBClusterStoragePerformanceRequest& request, const ModifyDBClusterStoragePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterStoragePerformanceOutcomeCallable modifyDBClusterStoragePerformanceCallable(const Model::ModifyDBClusterStoragePerformanceRequest& request) const;
			ModifyDBClusterStorageSpaceOutcome modifyDBClusterStorageSpace(const Model::ModifyDBClusterStorageSpaceRequest &request)const;
			void modifyDBClusterStorageSpaceAsync(const Model::ModifyDBClusterStorageSpaceRequest& request, const ModifyDBClusterStorageSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterStorageSpaceOutcomeCallable modifyDBClusterStorageSpaceCallable(const Model::ModifyDBClusterStorageSpaceRequest& request) const;
			ModifyDBClusterTDEOutcome modifyDBClusterTDE(const Model::ModifyDBClusterTDERequest &request)const;
			void modifyDBClusterTDEAsync(const Model::ModifyDBClusterTDERequest& request, const ModifyDBClusterTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterTDEOutcomeCallable modifyDBClusterTDECallable(const Model::ModifyDBClusterTDERequest& request) const;
			ModifyDBClusterVpcOutcome modifyDBClusterVpc(const Model::ModifyDBClusterVpcRequest &request)const;
			void modifyDBClusterVpcAsync(const Model::ModifyDBClusterVpcRequest& request, const ModifyDBClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterVpcOutcomeCallable modifyDBClusterVpcCallable(const Model::ModifyDBClusterVpcRequest& request) const;
			ModifyDBDescriptionOutcome modifyDBDescription(const Model::ModifyDBDescriptionRequest &request)const;
			void modifyDBDescriptionAsync(const Model::ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBDescriptionOutcomeCallable modifyDBDescriptionCallable(const Model::ModifyDBDescriptionRequest& request) const;
			ModifyDBDescriptionZonalOutcome modifyDBDescriptionZonal(const Model::ModifyDBDescriptionZonalRequest &request)const;
			void modifyDBDescriptionZonalAsync(const Model::ModifyDBDescriptionZonalRequest& request, const ModifyDBDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBDescriptionZonalOutcomeCallable modifyDBDescriptionZonalCallable(const Model::ModifyDBDescriptionZonalRequest& request) const;
			ModifyDBEndpointAddressOutcome modifyDBEndpointAddress(const Model::ModifyDBEndpointAddressRequest &request)const;
			void modifyDBEndpointAddressAsync(const Model::ModifyDBEndpointAddressRequest& request, const ModifyDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBEndpointAddressOutcomeCallable modifyDBEndpointAddressCallable(const Model::ModifyDBEndpointAddressRequest& request) const;
			ModifyDBNodeClassOutcome modifyDBNodeClass(const Model::ModifyDBNodeClassRequest &request)const;
			void modifyDBNodeClassAsync(const Model::ModifyDBNodeClassRequest& request, const ModifyDBNodeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeClassOutcomeCallable modifyDBNodeClassCallable(const Model::ModifyDBNodeClassRequest& request) const;
			ModifyDBNodeConfigOutcome modifyDBNodeConfig(const Model::ModifyDBNodeConfigRequest &request)const;
			void modifyDBNodeConfigAsync(const Model::ModifyDBNodeConfigRequest& request, const ModifyDBNodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeConfigOutcomeCallable modifyDBNodeConfigCallable(const Model::ModifyDBNodeConfigRequest& request) const;
			ModifyDBNodeDescriptionOutcome modifyDBNodeDescription(const Model::ModifyDBNodeDescriptionRequest &request)const;
			void modifyDBNodeDescriptionAsync(const Model::ModifyDBNodeDescriptionRequest& request, const ModifyDBNodeDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeDescriptionOutcomeCallable modifyDBNodeDescriptionCallable(const Model::ModifyDBNodeDescriptionRequest& request) const;
			ModifyDBNodeHotReplicaModeOutcome modifyDBNodeHotReplicaMode(const Model::ModifyDBNodeHotReplicaModeRequest &request)const;
			void modifyDBNodeHotReplicaModeAsync(const Model::ModifyDBNodeHotReplicaModeRequest& request, const ModifyDBNodeHotReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeHotReplicaModeOutcomeCallable modifyDBNodeHotReplicaModeCallable(const Model::ModifyDBNodeHotReplicaModeRequest& request) const;
			ModifyDBNodeSccModeOutcome modifyDBNodeSccMode(const Model::ModifyDBNodeSccModeRequest &request)const;
			void modifyDBNodeSccModeAsync(const Model::ModifyDBNodeSccModeRequest& request, const ModifyDBNodeSccModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeSccModeOutcomeCallable modifyDBNodeSccModeCallable(const Model::ModifyDBNodeSccModeRequest& request) const;
			ModifyDBNodesClassOutcome modifyDBNodesClass(const Model::ModifyDBNodesClassRequest &request)const;
			void modifyDBNodesClassAsync(const Model::ModifyDBNodesClassRequest& request, const ModifyDBNodesClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodesClassOutcomeCallable modifyDBNodesClassCallable(const Model::ModifyDBNodesClassRequest& request) const;
			ModifyDBNodesParametersOutcome modifyDBNodesParameters(const Model::ModifyDBNodesParametersRequest &request)const;
			void modifyDBNodesParametersAsync(const Model::ModifyDBNodesParametersRequest& request, const ModifyDBNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodesParametersOutcomeCallable modifyDBNodesParametersCallable(const Model::ModifyDBNodesParametersRequest& request) const;
			ModifyEncryptionDBRolePrivilegeOutcome modifyEncryptionDBRolePrivilege(const Model::ModifyEncryptionDBRolePrivilegeRequest &request)const;
			void modifyEncryptionDBRolePrivilegeAsync(const Model::ModifyEncryptionDBRolePrivilegeRequest& request, const ModifyEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEncryptionDBRolePrivilegeOutcomeCallable modifyEncryptionDBRolePrivilegeCallable(const Model::ModifyEncryptionDBRolePrivilegeRequest& request) const;
			ModifyEncryptionDBSecretOutcome modifyEncryptionDBSecret(const Model::ModifyEncryptionDBSecretRequest &request)const;
			void modifyEncryptionDBSecretAsync(const Model::ModifyEncryptionDBSecretRequest& request, const ModifyEncryptionDBSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEncryptionDBSecretOutcomeCallable modifyEncryptionDBSecretCallable(const Model::ModifyEncryptionDBSecretRequest& request) const;
			ModifyFirewallRulesOutcome modifyFirewallRules(const Model::ModifyFirewallRulesRequest &request)const;
			void modifyFirewallRulesAsync(const Model::ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFirewallRulesOutcomeCallable modifyFirewallRulesCallable(const Model::ModifyFirewallRulesRequest& request) const;
			ModifyGlobalDatabaseNetworkOutcome modifyGlobalDatabaseNetwork(const Model::ModifyGlobalDatabaseNetworkRequest &request)const;
			void modifyGlobalDatabaseNetworkAsync(const Model::ModifyGlobalDatabaseNetworkRequest& request, const ModifyGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalDatabaseNetworkOutcomeCallable modifyGlobalDatabaseNetworkCallable(const Model::ModifyGlobalDatabaseNetworkRequest& request) const;
			ModifyGlobalSecurityIPGroupOutcome modifyGlobalSecurityIPGroup(const Model::ModifyGlobalSecurityIPGroupRequest &request)const;
			void modifyGlobalSecurityIPGroupAsync(const Model::ModifyGlobalSecurityIPGroupRequest& request, const ModifyGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupOutcomeCallable modifyGlobalSecurityIPGroupCallable(const Model::ModifyGlobalSecurityIPGroupRequest& request) const;
			ModifyGlobalSecurityIPGroupNameOutcome modifyGlobalSecurityIPGroupName(const Model::ModifyGlobalSecurityIPGroupNameRequest &request)const;
			void modifyGlobalSecurityIPGroupNameAsync(const Model::ModifyGlobalSecurityIPGroupNameRequest& request, const ModifyGlobalSecurityIPGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupNameOutcomeCallable modifyGlobalSecurityIPGroupNameCallable(const Model::ModifyGlobalSecurityIPGroupNameRequest& request) const;
			ModifyGlobalSecurityIPGroupRelationOutcome modifyGlobalSecurityIPGroupRelation(const Model::ModifyGlobalSecurityIPGroupRelationRequest &request)const;
			void modifyGlobalSecurityIPGroupRelationAsync(const Model::ModifyGlobalSecurityIPGroupRelationRequest& request, const ModifyGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupRelationOutcomeCallable modifyGlobalSecurityIPGroupRelationCallable(const Model::ModifyGlobalSecurityIPGroupRelationRequest& request) const;
			ModifyLogBackupPolicyOutcome modifyLogBackupPolicy(const Model::ModifyLogBackupPolicyRequest &request)const;
			void modifyLogBackupPolicyAsync(const Model::ModifyLogBackupPolicyRequest& request, const ModifyLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogBackupPolicyOutcomeCallable modifyLogBackupPolicyCallable(const Model::ModifyLogBackupPolicyRequest& request) const;
			ModifyMaskingRulesOutcome modifyMaskingRules(const Model::ModifyMaskingRulesRequest &request)const;
			void modifyMaskingRulesAsync(const Model::ModifyMaskingRulesRequest& request, const ModifyMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMaskingRulesOutcomeCallable modifyMaskingRulesCallable(const Model::ModifyMaskingRulesRequest& request) const;
			ModifyPendingMaintenanceActionOutcome modifyPendingMaintenanceAction(const Model::ModifyPendingMaintenanceActionRequest &request)const;
			void modifyPendingMaintenanceActionAsync(const Model::ModifyPendingMaintenanceActionRequest& request, const ModifyPendingMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPendingMaintenanceActionOutcomeCallable modifyPendingMaintenanceActionCallable(const Model::ModifyPendingMaintenanceActionRequest& request) const;
			ModifyResourcePackageOutcome modifyResourcePackage(const Model::ModifyResourcePackageRequest &request)const;
			void modifyResourcePackageAsync(const Model::ModifyResourcePackageRequest& request, const ModifyResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePackageOutcomeCallable modifyResourcePackageCallable(const Model::ModifyResourcePackageRequest& request) const;
			ModifySQLRateLimitingRulesOutcome modifySQLRateLimitingRules(const Model::ModifySQLRateLimitingRulesRequest &request)const;
			void modifySQLRateLimitingRulesAsync(const Model::ModifySQLRateLimitingRulesRequest& request, const ModifySQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySQLRateLimitingRulesOutcomeCallable modifySQLRateLimitingRulesCallable(const Model::ModifySQLRateLimitingRulesRequest& request) const;
			ModifyScheduleTaskOutcome modifyScheduleTask(const Model::ModifyScheduleTaskRequest &request)const;
			void modifyScheduleTaskAsync(const Model::ModifyScheduleTaskRequest& request, const ModifyScheduleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScheduleTaskOutcomeCallable modifyScheduleTaskCallable(const Model::ModifyScheduleTaskRequest& request) const;
			OpenAITaskOutcome openAITask(const Model::OpenAITaskRequest &request)const;
			void openAITaskAsync(const Model::OpenAITaskRequest& request, const OpenAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenAITaskOutcomeCallable openAITaskCallable(const Model::OpenAITaskRequest& request) const;
			ReactivateDBClusterBackupOutcome reactivateDBClusterBackup(const Model::ReactivateDBClusterBackupRequest &request)const;
			void reactivateDBClusterBackupAsync(const Model::ReactivateDBClusterBackupRequest& request, const ReactivateDBClusterBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReactivateDBClusterBackupOutcomeCallable reactivateDBClusterBackupCallable(const Model::ReactivateDBClusterBackupRequest& request) const;
			RefreshDBClusterStorageUsageOutcome refreshDBClusterStorageUsage(const Model::RefreshDBClusterStorageUsageRequest &request)const;
			void refreshDBClusterStorageUsageAsync(const Model::RefreshDBClusterStorageUsageRequest& request, const RefreshDBClusterStorageUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDBClusterStorageUsageOutcomeCallable refreshDBClusterStorageUsageCallable(const Model::RefreshDBClusterStorageUsageRequest& request) const;
			RemoveDBClusterFromGDNOutcome removeDBClusterFromGDN(const Model::RemoveDBClusterFromGDNRequest &request)const;
			void removeDBClusterFromGDNAsync(const Model::RemoveDBClusterFromGDNRequest& request, const RemoveDBClusterFromGDNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDBClusterFromGDNOutcomeCallable removeDBClusterFromGDNCallable(const Model::RemoveDBClusterFromGDNRequest& request) const;
			ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
			void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			ResetAccountZonalOutcome resetAccountZonal(const Model::ResetAccountZonalRequest &request)const;
			void resetAccountZonalAsync(const Model::ResetAccountZonalRequest& request, const ResetAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountZonalOutcomeCallable resetAccountZonalCallable(const Model::ResetAccountZonalRequest& request) const;
			ResetGlobalDatabaseNetworkOutcome resetGlobalDatabaseNetwork(const Model::ResetGlobalDatabaseNetworkRequest &request)const;
			void resetGlobalDatabaseNetworkAsync(const Model::ResetGlobalDatabaseNetworkRequest& request, const ResetGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetGlobalDatabaseNetworkOutcomeCallable resetGlobalDatabaseNetworkCallable(const Model::ResetGlobalDatabaseNetworkRequest& request) const;
			RestartDBLinkOutcome restartDBLink(const Model::RestartDBLinkRequest &request)const;
			void restartDBLinkAsync(const Model::RestartDBLinkRequest& request, const RestartDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBLinkOutcomeCallable restartDBLinkCallable(const Model::RestartDBLinkRequest& request) const;
			RestartDBNodeOutcome restartDBNode(const Model::RestartDBNodeRequest &request)const;
			void restartDBNodeAsync(const Model::RestartDBNodeRequest& request, const RestartDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBNodeOutcomeCallable restartDBNodeCallable(const Model::RestartDBNodeRequest& request) const;
			RestartDBNodeZonalOutcome restartDBNodeZonal(const Model::RestartDBNodeZonalRequest &request)const;
			void restartDBNodeZonalAsync(const Model::RestartDBNodeZonalRequest& request, const RestartDBNodeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBNodeZonalOutcomeCallable restartDBNodeZonalCallable(const Model::RestartDBNodeZonalRequest& request) const;
			RestoreTableOutcome restoreTable(const Model::RestoreTableRequest &request)const;
			void restoreTableAsync(const Model::RestoreTableRequest& request, const RestoreTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreTableOutcomeCallable restoreTableCallable(const Model::RestoreTableRequest& request) const;
			RevokeAccountPrivilegeOutcome revokeAccountPrivilege(const Model::RevokeAccountPrivilegeRequest &request)const;
			void revokeAccountPrivilegeAsync(const Model::RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeAccountPrivilegeOutcomeCallable revokeAccountPrivilegeCallable(const Model::RevokeAccountPrivilegeRequest& request) const;
			RevokeAccountPrivilegeZonalOutcome revokeAccountPrivilegeZonal(const Model::RevokeAccountPrivilegeZonalRequest &request)const;
			void revokeAccountPrivilegeZonalAsync(const Model::RevokeAccountPrivilegeZonalRequest& request, const RevokeAccountPrivilegeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeAccountPrivilegeZonalOutcomeCallable revokeAccountPrivilegeZonalCallable(const Model::RevokeAccountPrivilegeZonalRequest& request) const;
			SwitchOverGlobalDatabaseNetworkOutcome switchOverGlobalDatabaseNetwork(const Model::SwitchOverGlobalDatabaseNetworkRequest &request)const;
			void switchOverGlobalDatabaseNetworkAsync(const Model::SwitchOverGlobalDatabaseNetworkRequest& request, const SwitchOverGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchOverGlobalDatabaseNetworkOutcomeCallable switchOverGlobalDatabaseNetworkCallable(const Model::SwitchOverGlobalDatabaseNetworkRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TempModifyDBNodeOutcome tempModifyDBNode(const Model::TempModifyDBNodeRequest &request)const;
			void tempModifyDBNodeAsync(const Model::TempModifyDBNodeRequest& request, const TempModifyDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TempModifyDBNodeOutcomeCallable tempModifyDBNodeCallable(const Model::TempModifyDBNodeRequest& request) const;
			TransformDBClusterPayTypeOutcome transformDBClusterPayType(const Model::TransformDBClusterPayTypeRequest &request)const;
			void transformDBClusterPayTypeAsync(const Model::TransformDBClusterPayTypeRequest& request, const TransformDBClusterPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformDBClusterPayTypeOutcomeCallable transformDBClusterPayTypeCallable(const Model::TransformDBClusterPayTypeRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateExtensionsOutcome updateExtensions(const Model::UpdateExtensionsRequest &request)const;
			void updateExtensionsAsync(const Model::UpdateExtensionsRequest& request, const UpdateExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExtensionsOutcomeCallable updateExtensionsCallable(const Model::UpdateExtensionsRequest& request) const;
			UpgradeDBClusterVersionOutcome upgradeDBClusterVersion(const Model::UpgradeDBClusterVersionRequest &request)const;
			void upgradeDBClusterVersionAsync(const Model::UpgradeDBClusterVersionRequest& request, const UpgradeDBClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBClusterVersionOutcomeCallable upgradeDBClusterVersionCallable(const Model::UpgradeDBClusterVersionRequest& request) const;
			UpgradeDBClusterVersionZonalOutcome upgradeDBClusterVersionZonal(const Model::UpgradeDBClusterVersionZonalRequest &request)const;
			void upgradeDBClusterVersionZonalAsync(const Model::UpgradeDBClusterVersionZonalRequest& request, const UpgradeDBClusterVersionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBClusterVersionZonalOutcomeCallable upgradeDBClusterVersionZonalCallable(const Model::UpgradeDBClusterVersionZonalRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_
