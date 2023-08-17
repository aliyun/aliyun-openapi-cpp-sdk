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

#ifndef ALIBABACLOUD_DDS_DDSCLIENT_H_
#define ALIBABACLOUD_DDS_DDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DdsExport.h"
#include "model/AllocateNodePrivateNetworkAddressRequest.h"
#include "model/AllocateNodePrivateNetworkAddressResult.h"
#include "model/AllocatePublicNetworkAddressRequest.h"
#include "model/AllocatePublicNetworkAddressResult.h"
#include "model/CheckCloudResourceAuthorizedRequest.h"
#include "model/CheckCloudResourceAuthorizedResult.h"
#include "model/CheckRecoveryConditionRequest.h"
#include "model/CheckRecoveryConditionResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateGlobalSecurityIPGroupRequest.h"
#include "model/CreateGlobalSecurityIPGroupResult.h"
#include "model/CreateNodeRequest.h"
#include "model/CreateNodeResult.h"
#include "model/CreateNodeBatchRequest.h"
#include "model/CreateNodeBatchResult.h"
#include "model/CreateShardingDBInstanceRequest.h"
#include "model/CreateShardingDBInstanceResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteGlobalSecurityIPGroupRequest.h"
#include "model/DeleteGlobalSecurityIPGroupResult.h"
#include "model/DeleteNodeRequest.h"
#include "model/DeleteNodeResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeActiveOperationTaskCountRequest.h"
#include "model/DescribeActiveOperationTaskCountResult.h"
#include "model/DescribeActiveOperationTaskTypeRequest.h"
#include "model/DescribeActiveOperationTaskTypeResult.h"
#include "model/DescribeAuditLogFilterRequest.h"
#include "model/DescribeAuditLogFilterResult.h"
#include "model/DescribeAuditPolicyRequest.h"
#include "model/DescribeAuditPolicyResult.h"
#include "model/DescribeAuditRecordsRequest.h"
#include "model/DescribeAuditRecordsResult.h"
#include "model/DescribeAvailabilityZonesRequest.h"
#include "model/DescribeAvailabilityZonesResult.h"
#include "model/DescribeAvailableEngineVersionRequest.h"
#include "model/DescribeAvailableEngineVersionResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeBackupDBsRequest.h"
#include "model/DescribeBackupDBsResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceEncryptionKeyRequest.h"
#include "model/DescribeDBInstanceEncryptionKeyResult.h"
#include "model/DescribeDBInstanceMonitorRequest.h"
#include "model/DescribeDBInstanceMonitorResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/DescribeDBInstanceTDEInfoRequest.h"
#include "model/DescribeDBInstanceTDEInfoResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeDBInstancesOverviewRequest.h"
#include "model/DescribeDBInstancesOverviewResult.h"
#include "model/DescribeErrorLogRecordsRequest.h"
#include "model/DescribeErrorLogRecordsResult.h"
#include "model/DescribeGlobalSecurityIPGroupRequest.h"
#include "model/DescribeGlobalSecurityIPGroupResult.h"
#include "model/DescribeGlobalSecurityIPGroupRelationRequest.h"
#include "model/DescribeGlobalSecurityIPGroupRelationResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeKernelReleaseNotesRequest.h"
#include "model/DescribeKernelReleaseNotesResult.h"
#include "model/DescribeMongoDBLogConfigRequest.h"
#include "model/DescribeMongoDBLogConfigResult.h"
#include "model/DescribeParameterModificationHistoryRequest.h"
#include "model/DescribeParameterModificationHistoryResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRenewalPriceRequest.h"
#include "model/DescribeRenewalPriceResult.h"
#include "model/DescribeReplicaSetRoleRequest.h"
#include "model/DescribeReplicaSetRoleResult.h"
#include "model/DescribeRoleZoneInfoRequest.h"
#include "model/DescribeRoleZoneInfoResult.h"
#include "model/DescribeRunningLogRecordsRequest.h"
#include "model/DescribeRunningLogRecordsResult.h"
#include "model/DescribeSecurityGroupConfigurationRequest.h"
#include "model/DescribeSecurityGroupConfigurationResult.h"
#include "model/DescribeSecurityIpsRequest.h"
#include "model/DescribeSecurityIpsResult.h"
#include "model/DescribeShardingNetworkAddressRequest.h"
#include "model/DescribeShardingNetworkAddressResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeUserEncryptionKeyListRequest.h"
#include "model/DescribeUserEncryptionKeyListResult.h"
#include "model/DestroyInstanceRequest.h"
#include "model/DestroyInstanceResult.h"
#include "model/EvaluateResourceRequest.h"
#include "model/EvaluateResourceResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MigrateAvailableZoneRequest.h"
#include "model/MigrateAvailableZoneResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAuditLogFilterRequest.h"
#include "model/ModifyAuditLogFilterResult.h"
#include "model/ModifyAuditPolicyRequest.h"
#include "model/ModifyAuditPolicyResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceMonitorRequest.h"
#include "model/ModifyDBInstanceMonitorResult.h"
#include "model/ModifyDBInstanceNetExpireTimeRequest.h"
#include "model/ModifyDBInstanceNetExpireTimeResult.h"
#include "model/ModifyDBInstanceNetworkTypeRequest.h"
#include "model/ModifyDBInstanceNetworkTypeResult.h"
#include "model/ModifyDBInstanceSSLRequest.h"
#include "model/ModifyDBInstanceSSLResult.h"
#include "model/ModifyDBInstanceSpecRequest.h"
#include "model/ModifyDBInstanceSpecResult.h"
#include "model/ModifyDBInstanceTDERequest.h"
#include "model/ModifyDBInstanceTDEResult.h"
#include "model/ModifyGlobalSecurityIPGroupRequest.h"
#include "model/ModifyGlobalSecurityIPGroupResult.h"
#include "model/ModifyGlobalSecurityIPGroupNameRequest.h"
#include "model/ModifyGlobalSecurityIPGroupNameResult.h"
#include "model/ModifyGlobalSecurityIPGroupRelationRequest.h"
#include "model/ModifyGlobalSecurityIPGroupRelationResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/ModifyInstanceVpcAuthModeRequest.h"
#include "model/ModifyInstanceVpcAuthModeResult.h"
#include "model/ModifyNodeSpecRequest.h"
#include "model/ModifyNodeSpecResult.h"
#include "model/ModifyNodeSpecBatchRequest.h"
#include "model/ModifyNodeSpecBatchResult.h"
#include "model/ModifyParametersRequest.h"
#include "model/ModifyParametersResult.h"
#include "model/ModifyResourceGroupRequest.h"
#include "model/ModifyResourceGroupResult.h"
#include "model/ModifySecurityGroupConfigurationRequest.h"
#include "model/ModifySecurityGroupConfigurationResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ReleaseNodePrivateNetworkAddressRequest.h"
#include "model/ReleaseNodePrivateNetworkAddressResult.h"
#include "model/ReleasePublicNetworkAddressRequest.h"
#include "model/ReleasePublicNetworkAddressResult.h"
#include "model/RenewDBInstanceRequest.h"
#include "model/RenewDBInstanceResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/RestoreDBInstanceRequest.h"
#include "model/RestoreDBInstanceResult.h"
#include "model/SwitchDBInstanceHARequest.h"
#include "model/SwitchDBInstanceHAResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TransformInstanceChargeTypeRequest.h"
#include "model/TransformInstanceChargeTypeResult.h"
#include "model/TransformToPrePaidRequest.h"
#include "model/TransformToPrePaidResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpgradeDBInstanceEngineVersionRequest.h"
#include "model/UpgradeDBInstanceEngineVersionResult.h"
#include "model/UpgradeDBInstanceKernelVersionRequest.h"
#include "model/UpgradeDBInstanceKernelVersionResult.h"


namespace AlibabaCloud
{
	namespace Dds
	{
		class ALIBABACLOUD_DDS_EXPORT DdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateNodePrivateNetworkAddressResult> AllocateNodePrivateNetworkAddressOutcome;
			typedef std::future<AllocateNodePrivateNetworkAddressOutcome> AllocateNodePrivateNetworkAddressOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::AllocateNodePrivateNetworkAddressRequest&, const AllocateNodePrivateNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateNodePrivateNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::AllocatePublicNetworkAddressResult> AllocatePublicNetworkAddressOutcome;
			typedef std::future<AllocatePublicNetworkAddressOutcome> AllocatePublicNetworkAddressOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::AllocatePublicNetworkAddressRequest&, const AllocatePublicNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::CheckCloudResourceAuthorizedResult> CheckCloudResourceAuthorizedOutcome;
			typedef std::future<CheckCloudResourceAuthorizedOutcome> CheckCloudResourceAuthorizedOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CheckCloudResourceAuthorizedRequest&, const CheckCloudResourceAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCloudResourceAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::CheckRecoveryConditionResult> CheckRecoveryConditionOutcome;
			typedef std::future<CheckRecoveryConditionOutcome> CheckRecoveryConditionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CheckRecoveryConditionRequest&, const CheckRecoveryConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRecoveryConditionAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalSecurityIPGroupResult> CreateGlobalSecurityIPGroupOutcome;
			typedef std::future<CreateGlobalSecurityIPGroupOutcome> CreateGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateGlobalSecurityIPGroupRequest&, const CreateGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateNodeResult> CreateNodeOutcome;
			typedef std::future<CreateNodeOutcome> CreateNodeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateNodeRequest&, const CreateNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodeAsyncHandler;
			typedef Outcome<Error, Model::CreateNodeBatchResult> CreateNodeBatchOutcome;
			typedef std::future<CreateNodeBatchOutcome> CreateNodeBatchOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateNodeBatchRequest&, const CreateNodeBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodeBatchAsyncHandler;
			typedef Outcome<Error, Model::CreateShardingDBInstanceResult> CreateShardingDBInstanceOutcome;
			typedef std::future<CreateShardingDBInstanceOutcome> CreateShardingDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::CreateShardingDBInstanceRequest&, const CreateShardingDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateShardingDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalSecurityIPGroupResult> DeleteGlobalSecurityIPGroupOutcome;
			typedef std::future<DeleteGlobalSecurityIPGroupOutcome> DeleteGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DeleteGlobalSecurityIPGroupRequest&, const DeleteGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodeResult> DeleteNodeOutcome;
			typedef std::future<DeleteNodeOutcome> DeleteNodeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DeleteNodeRequest&, const DeleteNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskCountResult> DescribeActiveOperationTaskCountOutcome;
			typedef std::future<DescribeActiveOperationTaskCountOutcome> DescribeActiveOperationTaskCountOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeActiveOperationTaskCountRequest&, const DescribeActiveOperationTaskCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskTypeResult> DescribeActiveOperationTaskTypeOutcome;
			typedef std::future<DescribeActiveOperationTaskTypeOutcome> DescribeActiveOperationTaskTypeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeActiveOperationTaskTypeRequest&, const DescribeActiveOperationTaskTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditLogFilterResult> DescribeAuditLogFilterOutcome;
			typedef std::future<DescribeAuditLogFilterOutcome> DescribeAuditLogFilterOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAuditLogFilterRequest&, const DescribeAuditLogFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogFilterAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditPolicyResult> DescribeAuditPolicyOutcome;
			typedef std::future<DescribeAuditPolicyOutcome> DescribeAuditPolicyOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAuditPolicyRequest&, const DescribeAuditPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditRecordsResult> DescribeAuditRecordsOutcome;
			typedef std::future<DescribeAuditRecordsOutcome> DescribeAuditRecordsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAuditRecordsRequest&, const DescribeAuditRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailabilityZonesResult> DescribeAvailabilityZonesOutcome;
			typedef std::future<DescribeAvailabilityZonesOutcome> DescribeAvailabilityZonesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAvailabilityZonesRequest&, const DescribeAvailabilityZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailabilityZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableEngineVersionResult> DescribeAvailableEngineVersionOutcome;
			typedef std::future<DescribeAvailableEngineVersionOutcome> DescribeAvailableEngineVersionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAvailableEngineVersionRequest&, const DescribeAvailableEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupDBsResult> DescribeBackupDBsOutcome;
			typedef std::future<DescribeBackupDBsOutcome> DescribeBackupDBsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeBackupDBsRequest&, const DescribeBackupDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDBsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceEncryptionKeyResult> DescribeDBInstanceEncryptionKeyOutcome;
			typedef std::future<DescribeDBInstanceEncryptionKeyOutcome> DescribeDBInstanceEncryptionKeyOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstanceEncryptionKeyRequest&, const DescribeDBInstanceEncryptionKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceEncryptionKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMonitorResult> DescribeDBInstanceMonitorOutcome;
			typedef std::future<DescribeDBInstanceMonitorOutcome> DescribeDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstanceMonitorRequest&, const DescribeDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceTDEInfoResult> DescribeDBInstanceTDEInfoOutcome;
			typedef std::future<DescribeDBInstanceTDEInfoOutcome> DescribeDBInstanceTDEInfoOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstanceTDEInfoRequest&, const DescribeDBInstanceTDEInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceTDEInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesOverviewResult> DescribeDBInstancesOverviewOutcome;
			typedef std::future<DescribeDBInstancesOverviewOutcome> DescribeDBInstancesOverviewOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeDBInstancesOverviewRequest&, const DescribeDBInstancesOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesOverviewAsyncHandler;
			typedef Outcome<Error, Model::DescribeErrorLogRecordsResult> DescribeErrorLogRecordsOutcome;
			typedef std::future<DescribeErrorLogRecordsOutcome> DescribeErrorLogRecordsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeErrorLogRecordsRequest&, const DescribeErrorLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalSecurityIPGroupResult> DescribeGlobalSecurityIPGroupOutcome;
			typedef std::future<DescribeGlobalSecurityIPGroupOutcome> DescribeGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeGlobalSecurityIPGroupRequest&, const DescribeGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalSecurityIPGroupRelationResult> DescribeGlobalSecurityIPGroupRelationOutcome;
			typedef std::future<DescribeGlobalSecurityIPGroupRelationOutcome> DescribeGlobalSecurityIPGroupRelationOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeGlobalSecurityIPGroupRelationRequest&, const DescribeGlobalSecurityIPGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalSecurityIPGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeKernelReleaseNotesResult> DescribeKernelReleaseNotesOutcome;
			typedef std::future<DescribeKernelReleaseNotesOutcome> DescribeKernelReleaseNotesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeKernelReleaseNotesRequest&, const DescribeKernelReleaseNotesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKernelReleaseNotesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMongoDBLogConfigResult> DescribeMongoDBLogConfigOutcome;
			typedef std::future<DescribeMongoDBLogConfigOutcome> DescribeMongoDBLogConfigOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeMongoDBLogConfigRequest&, const DescribeMongoDBLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMongoDBLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterModificationHistoryResult> DescribeParameterModificationHistoryOutcome;
			typedef std::future<DescribeParameterModificationHistoryOutcome> DescribeParameterModificationHistoryOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeParameterModificationHistoryRequest&, const DescribeParameterModificationHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterModificationHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewalPriceResult> DescribeRenewalPriceOutcome;
			typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeRenewalPriceRequest&, const DescribeRenewalPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaSetRoleResult> DescribeReplicaSetRoleOutcome;
			typedef std::future<DescribeReplicaSetRoleOutcome> DescribeReplicaSetRoleOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeReplicaSetRoleRequest&, const DescribeReplicaSetRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaSetRoleAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoleZoneInfoResult> DescribeRoleZoneInfoOutcome;
			typedef std::future<DescribeRoleZoneInfoOutcome> DescribeRoleZoneInfoOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeRoleZoneInfoRequest&, const DescribeRoleZoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleZoneInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRunningLogRecordsResult> DescribeRunningLogRecordsOutcome;
			typedef std::future<DescribeRunningLogRecordsOutcome> DescribeRunningLogRecordsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeRunningLogRecordsRequest&, const DescribeRunningLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunningLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupConfigurationResult> DescribeSecurityGroupConfigurationOutcome;
			typedef std::future<DescribeSecurityGroupConfigurationOutcome> DescribeSecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeSecurityGroupConfigurationRequest&, const DescribeSecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpsResult> DescribeSecurityIpsOutcome;
			typedef std::future<DescribeSecurityIpsOutcome> DescribeSecurityIpsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeSecurityIpsRequest&, const DescribeSecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardingNetworkAddressResult> DescribeShardingNetworkAddressOutcome;
			typedef std::future<DescribeShardingNetworkAddressOutcome> DescribeShardingNetworkAddressOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeShardingNetworkAddressRequest&, const DescribeShardingNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardingNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserEncryptionKeyListResult> DescribeUserEncryptionKeyListOutcome;
			typedef std::future<DescribeUserEncryptionKeyListOutcome> DescribeUserEncryptionKeyListOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DescribeUserEncryptionKeyListRequest&, const DescribeUserEncryptionKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEncryptionKeyListAsyncHandler;
			typedef Outcome<Error, Model::DestroyInstanceResult> DestroyInstanceOutcome;
			typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::DestroyInstanceRequest&, const DestroyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
			typedef Outcome<Error, Model::EvaluateResourceResult> EvaluateResourceOutcome;
			typedef std::future<EvaluateResourceOutcome> EvaluateResourceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::EvaluateResourceRequest&, const EvaluateResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateResourceAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MigrateAvailableZoneResult> MigrateAvailableZoneOutcome;
			typedef std::future<MigrateAvailableZoneOutcome> MigrateAvailableZoneOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::MigrateAvailableZoneRequest&, const MigrateAvailableZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateAvailableZoneAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditLogFilterResult> ModifyAuditLogFilterOutcome;
			typedef std::future<ModifyAuditLogFilterOutcome> ModifyAuditLogFilterOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyAuditLogFilterRequest&, const ModifyAuditLogFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditLogFilterAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditPolicyResult> ModifyAuditPolicyOutcome;
			typedef std::future<ModifyAuditPolicyOutcome> ModifyAuditPolicyOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyAuditPolicyRequest&, const ModifyAuditPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMonitorResult> ModifyDBInstanceMonitorOutcome;
			typedef std::future<ModifyDBInstanceMonitorOutcome> ModifyDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceMonitorRequest&, const ModifyDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetExpireTimeResult> ModifyDBInstanceNetExpireTimeOutcome;
			typedef std::future<ModifyDBInstanceNetExpireTimeOutcome> ModifyDBInstanceNetExpireTimeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceNetExpireTimeRequest&, const ModifyDBInstanceNetExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkTypeResult> ModifyDBInstanceNetworkTypeOutcome;
			typedef std::future<ModifyDBInstanceNetworkTypeOutcome> ModifyDBInstanceNetworkTypeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceNetworkTypeRequest&, const ModifyDBInstanceNetworkTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSSLResult> ModifyDBInstanceSSLOutcome;
			typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceSSLRequest&, const ModifyDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSpecResult> ModifyDBInstanceSpecOutcome;
			typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceSpecRequest&, const ModifyDBInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceTDEResult> ModifyDBInstanceTDEOutcome;
			typedef std::future<ModifyDBInstanceTDEOutcome> ModifyDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyDBInstanceTDERequest&, const ModifyDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupResult> ModifyGlobalSecurityIPGroupOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupOutcome> ModifyGlobalSecurityIPGroupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyGlobalSecurityIPGroupRequest&, const ModifyGlobalSecurityIPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupNameResult> ModifyGlobalSecurityIPGroupNameOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupNameOutcome> ModifyGlobalSecurityIPGroupNameOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyGlobalSecurityIPGroupNameRequest&, const ModifyGlobalSecurityIPGroupNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalSecurityIPGroupRelationResult> ModifyGlobalSecurityIPGroupRelationOutcome;
			typedef std::future<ModifyGlobalSecurityIPGroupRelationOutcome> ModifyGlobalSecurityIPGroupRelationOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyGlobalSecurityIPGroupRelationRequest&, const ModifyGlobalSecurityIPGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalSecurityIPGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVpcAuthModeResult> ModifyInstanceVpcAuthModeOutcome;
			typedef std::future<ModifyInstanceVpcAuthModeOutcome> ModifyInstanceVpcAuthModeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyInstanceVpcAuthModeRequest&, const ModifyInstanceVpcAuthModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVpcAuthModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNodeSpecResult> ModifyNodeSpecOutcome;
			typedef std::future<ModifyNodeSpecOutcome> ModifyNodeSpecOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyNodeSpecRequest&, const ModifyNodeSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyNodeSpecBatchResult> ModifyNodeSpecBatchOutcome;
			typedef std::future<ModifyNodeSpecBatchOutcome> ModifyNodeSpecBatchOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyNodeSpecBatchRequest&, const ModifyNodeSpecBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeSpecBatchAsyncHandler;
			typedef Outcome<Error, Model::ModifyParametersResult> ModifyParametersOutcome;
			typedef std::future<ModifyParametersOutcome> ModifyParametersOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyParametersRequest&, const ModifyParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceGroupResult> ModifyResourceGroupOutcome;
			typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifyResourceGroupRequest&, const ModifyResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupConfigurationResult> ModifySecurityGroupConfigurationOutcome;
			typedef std::future<ModifySecurityGroupConfigurationOutcome> ModifySecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifySecurityGroupConfigurationRequest&, const ModifySecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseNodePrivateNetworkAddressResult> ReleaseNodePrivateNetworkAddressOutcome;
			typedef std::future<ReleaseNodePrivateNetworkAddressOutcome> ReleaseNodePrivateNetworkAddressOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ReleaseNodePrivateNetworkAddressRequest&, const ReleaseNodePrivateNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseNodePrivateNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicNetworkAddressResult> ReleasePublicNetworkAddressOutcome;
			typedef std::future<ReleasePublicNetworkAddressOutcome> ReleasePublicNetworkAddressOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ReleasePublicNetworkAddressRequest&, const ReleasePublicNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::RenewDBInstanceResult> RenewDBInstanceOutcome;
			typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::RenewDBInstanceRequest&, const RenewDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestoreDBInstanceResult> RestoreDBInstanceOutcome;
			typedef std::future<RestoreDBInstanceOutcome> RestoreDBInstanceOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::RestoreDBInstanceRequest&, const RestoreDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceHAResult> SwitchDBInstanceHAOutcome;
			typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::SwitchDBInstanceHARequest&, const SwitchDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TransformInstanceChargeTypeResult> TransformInstanceChargeTypeOutcome;
			typedef std::future<TransformInstanceChargeTypeOutcome> TransformInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::TransformInstanceChargeTypeRequest&, const TransformInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::TransformToPrePaidResult> TransformToPrePaidOutcome;
			typedef std::future<TransformToPrePaidOutcome> TransformToPrePaidOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::TransformToPrePaidRequest&, const TransformToPrePaidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformToPrePaidAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResult> UpgradeDBInstanceEngineVersionOutcome;
			typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, const UpgradeDBInstanceEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceKernelVersionResult> UpgradeDBInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const DdsClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, const UpgradeDBInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;

			DdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DdsClient();
			AllocateNodePrivateNetworkAddressOutcome allocateNodePrivateNetworkAddress(const Model::AllocateNodePrivateNetworkAddressRequest &request)const;
			void allocateNodePrivateNetworkAddressAsync(const Model::AllocateNodePrivateNetworkAddressRequest& request, const AllocateNodePrivateNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateNodePrivateNetworkAddressOutcomeCallable allocateNodePrivateNetworkAddressCallable(const Model::AllocateNodePrivateNetworkAddressRequest& request) const;
			AllocatePublicNetworkAddressOutcome allocatePublicNetworkAddress(const Model::AllocatePublicNetworkAddressRequest &request)const;
			void allocatePublicNetworkAddressAsync(const Model::AllocatePublicNetworkAddressRequest& request, const AllocatePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicNetworkAddressOutcomeCallable allocatePublicNetworkAddressCallable(const Model::AllocatePublicNetworkAddressRequest& request) const;
			CheckCloudResourceAuthorizedOutcome checkCloudResourceAuthorized(const Model::CheckCloudResourceAuthorizedRequest &request)const;
			void checkCloudResourceAuthorizedAsync(const Model::CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCloudResourceAuthorizedOutcomeCallable checkCloudResourceAuthorizedCallable(const Model::CheckCloudResourceAuthorizedRequest& request) const;
			CheckRecoveryConditionOutcome checkRecoveryCondition(const Model::CheckRecoveryConditionRequest &request)const;
			void checkRecoveryConditionAsync(const Model::CheckRecoveryConditionRequest& request, const CheckRecoveryConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckRecoveryConditionOutcomeCallable checkRecoveryConditionCallable(const Model::CheckRecoveryConditionRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateGlobalSecurityIPGroupOutcome createGlobalSecurityIPGroup(const Model::CreateGlobalSecurityIPGroupRequest &request)const;
			void createGlobalSecurityIPGroupAsync(const Model::CreateGlobalSecurityIPGroupRequest& request, const CreateGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalSecurityIPGroupOutcomeCallable createGlobalSecurityIPGroupCallable(const Model::CreateGlobalSecurityIPGroupRequest& request) const;
			CreateNodeOutcome createNode(const Model::CreateNodeRequest &request)const;
			void createNodeAsync(const Model::CreateNodeRequest& request, const CreateNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNodeOutcomeCallable createNodeCallable(const Model::CreateNodeRequest& request) const;
			CreateNodeBatchOutcome createNodeBatch(const Model::CreateNodeBatchRequest &request)const;
			void createNodeBatchAsync(const Model::CreateNodeBatchRequest& request, const CreateNodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNodeBatchOutcomeCallable createNodeBatchCallable(const Model::CreateNodeBatchRequest& request) const;
			CreateShardingDBInstanceOutcome createShardingDBInstance(const Model::CreateShardingDBInstanceRequest &request)const;
			void createShardingDBInstanceAsync(const Model::CreateShardingDBInstanceRequest& request, const CreateShardingDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateShardingDBInstanceOutcomeCallable createShardingDBInstanceCallable(const Model::CreateShardingDBInstanceRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DeleteGlobalSecurityIPGroupOutcome deleteGlobalSecurityIPGroup(const Model::DeleteGlobalSecurityIPGroupRequest &request)const;
			void deleteGlobalSecurityIPGroupAsync(const Model::DeleteGlobalSecurityIPGroupRequest& request, const DeleteGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalSecurityIPGroupOutcomeCallable deleteGlobalSecurityIPGroupCallable(const Model::DeleteGlobalSecurityIPGroupRequest& request) const;
			DeleteNodeOutcome deleteNode(const Model::DeleteNodeRequest &request)const;
			void deleteNodeAsync(const Model::DeleteNodeRequest& request, const DeleteNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodeOutcomeCallable deleteNodeCallable(const Model::DeleteNodeRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeActiveOperationTaskCountOutcome describeActiveOperationTaskCount(const Model::DescribeActiveOperationTaskCountRequest &request)const;
			void describeActiveOperationTaskCountAsync(const Model::DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskCountOutcomeCallable describeActiveOperationTaskCountCallable(const Model::DescribeActiveOperationTaskCountRequest& request) const;
			DescribeActiveOperationTaskTypeOutcome describeActiveOperationTaskType(const Model::DescribeActiveOperationTaskTypeRequest &request)const;
			void describeActiveOperationTaskTypeAsync(const Model::DescribeActiveOperationTaskTypeRequest& request, const DescribeActiveOperationTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskTypeOutcomeCallable describeActiveOperationTaskTypeCallable(const Model::DescribeActiveOperationTaskTypeRequest& request) const;
			DescribeAuditLogFilterOutcome describeAuditLogFilter(const Model::DescribeAuditLogFilterRequest &request)const;
			void describeAuditLogFilterAsync(const Model::DescribeAuditLogFilterRequest& request, const DescribeAuditLogFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditLogFilterOutcomeCallable describeAuditLogFilterCallable(const Model::DescribeAuditLogFilterRequest& request) const;
			DescribeAuditPolicyOutcome describeAuditPolicy(const Model::DescribeAuditPolicyRequest &request)const;
			void describeAuditPolicyAsync(const Model::DescribeAuditPolicyRequest& request, const DescribeAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditPolicyOutcomeCallable describeAuditPolicyCallable(const Model::DescribeAuditPolicyRequest& request) const;
			DescribeAuditRecordsOutcome describeAuditRecords(const Model::DescribeAuditRecordsRequest &request)const;
			void describeAuditRecordsAsync(const Model::DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditRecordsOutcomeCallable describeAuditRecordsCallable(const Model::DescribeAuditRecordsRequest& request) const;
			DescribeAvailabilityZonesOutcome describeAvailabilityZones(const Model::DescribeAvailabilityZonesRequest &request)const;
			void describeAvailabilityZonesAsync(const Model::DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailabilityZonesOutcomeCallable describeAvailabilityZonesCallable(const Model::DescribeAvailabilityZonesRequest& request) const;
			DescribeAvailableEngineVersionOutcome describeAvailableEngineVersion(const Model::DescribeAvailableEngineVersionRequest &request)const;
			void describeAvailableEngineVersionAsync(const Model::DescribeAvailableEngineVersionRequest& request, const DescribeAvailableEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableEngineVersionOutcomeCallable describeAvailableEngineVersionCallable(const Model::DescribeAvailableEngineVersionRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeBackupDBsOutcome describeBackupDBs(const Model::DescribeBackupDBsRequest &request)const;
			void describeBackupDBsAsync(const Model::DescribeBackupDBsRequest& request, const DescribeBackupDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupDBsOutcomeCallable describeBackupDBsCallable(const Model::DescribeBackupDBsRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceEncryptionKeyOutcome describeDBInstanceEncryptionKey(const Model::DescribeDBInstanceEncryptionKeyRequest &request)const;
			void describeDBInstanceEncryptionKeyAsync(const Model::DescribeDBInstanceEncryptionKeyRequest& request, const DescribeDBInstanceEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceEncryptionKeyOutcomeCallable describeDBInstanceEncryptionKeyCallable(const Model::DescribeDBInstanceEncryptionKeyRequest& request) const;
			DescribeDBInstanceMonitorOutcome describeDBInstanceMonitor(const Model::DescribeDBInstanceMonitorRequest &request)const;
			void describeDBInstanceMonitorAsync(const Model::DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceMonitorOutcomeCallable describeDBInstanceMonitorCallable(const Model::DescribeDBInstanceMonitorRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
			void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
			DescribeDBInstanceTDEInfoOutcome describeDBInstanceTDEInfo(const Model::DescribeDBInstanceTDEInfoRequest &request)const;
			void describeDBInstanceTDEInfoAsync(const Model::DescribeDBInstanceTDEInfoRequest& request, const DescribeDBInstanceTDEInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceTDEInfoOutcomeCallable describeDBInstanceTDEInfoCallable(const Model::DescribeDBInstanceTDEInfoRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeDBInstancesOverviewOutcome describeDBInstancesOverview(const Model::DescribeDBInstancesOverviewRequest &request)const;
			void describeDBInstancesOverviewAsync(const Model::DescribeDBInstancesOverviewRequest& request, const DescribeDBInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOverviewOutcomeCallable describeDBInstancesOverviewCallable(const Model::DescribeDBInstancesOverviewRequest& request) const;
			DescribeErrorLogRecordsOutcome describeErrorLogRecords(const Model::DescribeErrorLogRecordsRequest &request)const;
			void describeErrorLogRecordsAsync(const Model::DescribeErrorLogRecordsRequest& request, const DescribeErrorLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeErrorLogRecordsOutcomeCallable describeErrorLogRecordsCallable(const Model::DescribeErrorLogRecordsRequest& request) const;
			DescribeGlobalSecurityIPGroupOutcome describeGlobalSecurityIPGroup(const Model::DescribeGlobalSecurityIPGroupRequest &request)const;
			void describeGlobalSecurityIPGroupAsync(const Model::DescribeGlobalSecurityIPGroupRequest& request, const DescribeGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalSecurityIPGroupOutcomeCallable describeGlobalSecurityIPGroupCallable(const Model::DescribeGlobalSecurityIPGroupRequest& request) const;
			DescribeGlobalSecurityIPGroupRelationOutcome describeGlobalSecurityIPGroupRelation(const Model::DescribeGlobalSecurityIPGroupRelationRequest &request)const;
			void describeGlobalSecurityIPGroupRelationAsync(const Model::DescribeGlobalSecurityIPGroupRelationRequest& request, const DescribeGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalSecurityIPGroupRelationOutcomeCallable describeGlobalSecurityIPGroupRelationCallable(const Model::DescribeGlobalSecurityIPGroupRelationRequest& request) const;
			DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
			void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
			DescribeKernelReleaseNotesOutcome describeKernelReleaseNotes(const Model::DescribeKernelReleaseNotesRequest &request)const;
			void describeKernelReleaseNotesAsync(const Model::DescribeKernelReleaseNotesRequest& request, const DescribeKernelReleaseNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKernelReleaseNotesOutcomeCallable describeKernelReleaseNotesCallable(const Model::DescribeKernelReleaseNotesRequest& request) const;
			DescribeMongoDBLogConfigOutcome describeMongoDBLogConfig(const Model::DescribeMongoDBLogConfigRequest &request)const;
			void describeMongoDBLogConfigAsync(const Model::DescribeMongoDBLogConfigRequest& request, const DescribeMongoDBLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMongoDBLogConfigOutcomeCallable describeMongoDBLogConfigCallable(const Model::DescribeMongoDBLogConfigRequest& request) const;
			DescribeParameterModificationHistoryOutcome describeParameterModificationHistory(const Model::DescribeParameterModificationHistoryRequest &request)const;
			void describeParameterModificationHistoryAsync(const Model::DescribeParameterModificationHistoryRequest& request, const DescribeParameterModificationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterModificationHistoryOutcomeCallable describeParameterModificationHistoryCallable(const Model::DescribeParameterModificationHistoryRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRenewalPriceOutcome describeRenewalPrice(const Model::DescribeRenewalPriceRequest &request)const;
			void describeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenewalPriceOutcomeCallable describeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request) const;
			DescribeReplicaSetRoleOutcome describeReplicaSetRole(const Model::DescribeReplicaSetRoleRequest &request)const;
			void describeReplicaSetRoleAsync(const Model::DescribeReplicaSetRoleRequest& request, const DescribeReplicaSetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicaSetRoleOutcomeCallable describeReplicaSetRoleCallable(const Model::DescribeReplicaSetRoleRequest& request) const;
			DescribeRoleZoneInfoOutcome describeRoleZoneInfo(const Model::DescribeRoleZoneInfoRequest &request)const;
			void describeRoleZoneInfoAsync(const Model::DescribeRoleZoneInfoRequest& request, const DescribeRoleZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoleZoneInfoOutcomeCallable describeRoleZoneInfoCallable(const Model::DescribeRoleZoneInfoRequest& request) const;
			DescribeRunningLogRecordsOutcome describeRunningLogRecords(const Model::DescribeRunningLogRecordsRequest &request)const;
			void describeRunningLogRecordsAsync(const Model::DescribeRunningLogRecordsRequest& request, const DescribeRunningLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRunningLogRecordsOutcomeCallable describeRunningLogRecordsCallable(const Model::DescribeRunningLogRecordsRequest& request) const;
			DescribeSecurityGroupConfigurationOutcome describeSecurityGroupConfiguration(const Model::DescribeSecurityGroupConfigurationRequest &request)const;
			void describeSecurityGroupConfigurationAsync(const Model::DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupConfigurationOutcomeCallable describeSecurityGroupConfigurationCallable(const Model::DescribeSecurityGroupConfigurationRequest& request) const;
			DescribeSecurityIpsOutcome describeSecurityIps(const Model::DescribeSecurityIpsRequest &request)const;
			void describeSecurityIpsAsync(const Model::DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIpsOutcomeCallable describeSecurityIpsCallable(const Model::DescribeSecurityIpsRequest& request) const;
			DescribeShardingNetworkAddressOutcome describeShardingNetworkAddress(const Model::DescribeShardingNetworkAddressRequest &request)const;
			void describeShardingNetworkAddressAsync(const Model::DescribeShardingNetworkAddressRequest& request, const DescribeShardingNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardingNetworkAddressOutcomeCallable describeShardingNetworkAddressCallable(const Model::DescribeShardingNetworkAddressRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeUserEncryptionKeyListOutcome describeUserEncryptionKeyList(const Model::DescribeUserEncryptionKeyListRequest &request)const;
			void describeUserEncryptionKeyListAsync(const Model::DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserEncryptionKeyListOutcomeCallable describeUserEncryptionKeyListCallable(const Model::DescribeUserEncryptionKeyListRequest& request) const;
			DestroyInstanceOutcome destroyInstance(const Model::DestroyInstanceRequest &request)const;
			void destroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyInstanceOutcomeCallable destroyInstanceCallable(const Model::DestroyInstanceRequest& request) const;
			EvaluateResourceOutcome evaluateResource(const Model::EvaluateResourceRequest &request)const;
			void evaluateResourceAsync(const Model::EvaluateResourceRequest& request, const EvaluateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateResourceOutcomeCallable evaluateResourceCallable(const Model::EvaluateResourceRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MigrateAvailableZoneOutcome migrateAvailableZone(const Model::MigrateAvailableZoneRequest &request)const;
			void migrateAvailableZoneAsync(const Model::MigrateAvailableZoneRequest& request, const MigrateAvailableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateAvailableZoneOutcomeCallable migrateAvailableZoneCallable(const Model::MigrateAvailableZoneRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAuditLogFilterOutcome modifyAuditLogFilter(const Model::ModifyAuditLogFilterRequest &request)const;
			void modifyAuditLogFilterAsync(const Model::ModifyAuditLogFilterRequest& request, const ModifyAuditLogFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditLogFilterOutcomeCallable modifyAuditLogFilterCallable(const Model::ModifyAuditLogFilterRequest& request) const;
			ModifyAuditPolicyOutcome modifyAuditPolicy(const Model::ModifyAuditPolicyRequest &request)const;
			void modifyAuditPolicyAsync(const Model::ModifyAuditPolicyRequest& request, const ModifyAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditPolicyOutcomeCallable modifyAuditPolicyCallable(const Model::ModifyAuditPolicyRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDBInstanceMonitorOutcome modifyDBInstanceMonitor(const Model::ModifyDBInstanceMonitorRequest &request)const;
			void modifyDBInstanceMonitorAsync(const Model::ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMonitorOutcomeCallable modifyDBInstanceMonitorCallable(const Model::ModifyDBInstanceMonitorRequest& request) const;
			ModifyDBInstanceNetExpireTimeOutcome modifyDBInstanceNetExpireTime(const Model::ModifyDBInstanceNetExpireTimeRequest &request)const;
			void modifyDBInstanceNetExpireTimeAsync(const Model::ModifyDBInstanceNetExpireTimeRequest& request, const ModifyDBInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceNetExpireTimeOutcomeCallable modifyDBInstanceNetExpireTimeCallable(const Model::ModifyDBInstanceNetExpireTimeRequest& request) const;
			ModifyDBInstanceNetworkTypeOutcome modifyDBInstanceNetworkType(const Model::ModifyDBInstanceNetworkTypeRequest &request)const;
			void modifyDBInstanceNetworkTypeAsync(const Model::ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceNetworkTypeOutcomeCallable modifyDBInstanceNetworkTypeCallable(const Model::ModifyDBInstanceNetworkTypeRequest& request) const;
			ModifyDBInstanceSSLOutcome modifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request)const;
			void modifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSSLOutcomeCallable modifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request) const;
			ModifyDBInstanceSpecOutcome modifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request)const;
			void modifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSpecOutcomeCallable modifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request) const;
			ModifyDBInstanceTDEOutcome modifyDBInstanceTDE(const Model::ModifyDBInstanceTDERequest &request)const;
			void modifyDBInstanceTDEAsync(const Model::ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceTDEOutcomeCallable modifyDBInstanceTDECallable(const Model::ModifyDBInstanceTDERequest& request) const;
			ModifyGlobalSecurityIPGroupOutcome modifyGlobalSecurityIPGroup(const Model::ModifyGlobalSecurityIPGroupRequest &request)const;
			void modifyGlobalSecurityIPGroupAsync(const Model::ModifyGlobalSecurityIPGroupRequest& request, const ModifyGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupOutcomeCallable modifyGlobalSecurityIPGroupCallable(const Model::ModifyGlobalSecurityIPGroupRequest& request) const;
			ModifyGlobalSecurityIPGroupNameOutcome modifyGlobalSecurityIPGroupName(const Model::ModifyGlobalSecurityIPGroupNameRequest &request)const;
			void modifyGlobalSecurityIPGroupNameAsync(const Model::ModifyGlobalSecurityIPGroupNameRequest& request, const ModifyGlobalSecurityIPGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupNameOutcomeCallable modifyGlobalSecurityIPGroupNameCallable(const Model::ModifyGlobalSecurityIPGroupNameRequest& request) const;
			ModifyGlobalSecurityIPGroupRelationOutcome modifyGlobalSecurityIPGroupRelation(const Model::ModifyGlobalSecurityIPGroupRelationRequest &request)const;
			void modifyGlobalSecurityIPGroupRelationAsync(const Model::ModifyGlobalSecurityIPGroupRelationRequest& request, const ModifyGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalSecurityIPGroupRelationOutcomeCallable modifyGlobalSecurityIPGroupRelationCallable(const Model::ModifyGlobalSecurityIPGroupRelationRequest& request) const;
			ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
			void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
			ModifyInstanceVpcAuthModeOutcome modifyInstanceVpcAuthMode(const Model::ModifyInstanceVpcAuthModeRequest &request)const;
			void modifyInstanceVpcAuthModeAsync(const Model::ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVpcAuthModeOutcomeCallable modifyInstanceVpcAuthModeCallable(const Model::ModifyInstanceVpcAuthModeRequest& request) const;
			ModifyNodeSpecOutcome modifyNodeSpec(const Model::ModifyNodeSpecRequest &request)const;
			void modifyNodeSpecAsync(const Model::ModifyNodeSpecRequest& request, const ModifyNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNodeSpecOutcomeCallable modifyNodeSpecCallable(const Model::ModifyNodeSpecRequest& request) const;
			ModifyNodeSpecBatchOutcome modifyNodeSpecBatch(const Model::ModifyNodeSpecBatchRequest &request)const;
			void modifyNodeSpecBatchAsync(const Model::ModifyNodeSpecBatchRequest& request, const ModifyNodeSpecBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNodeSpecBatchOutcomeCallable modifyNodeSpecBatchCallable(const Model::ModifyNodeSpecBatchRequest& request) const;
			ModifyParametersOutcome modifyParameters(const Model::ModifyParametersRequest &request)const;
			void modifyParametersAsync(const Model::ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParametersOutcomeCallable modifyParametersCallable(const Model::ModifyParametersRequest& request) const;
			ModifyResourceGroupOutcome modifyResourceGroup(const Model::ModifyResourceGroupRequest &request)const;
			void modifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceGroupOutcomeCallable modifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request) const;
			ModifySecurityGroupConfigurationOutcome modifySecurityGroupConfiguration(const Model::ModifySecurityGroupConfigurationRequest &request)const;
			void modifySecurityGroupConfigurationAsync(const Model::ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupConfigurationOutcomeCallable modifySecurityGroupConfigurationCallable(const Model::ModifySecurityGroupConfigurationRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ReleaseNodePrivateNetworkAddressOutcome releaseNodePrivateNetworkAddress(const Model::ReleaseNodePrivateNetworkAddressRequest &request)const;
			void releaseNodePrivateNetworkAddressAsync(const Model::ReleaseNodePrivateNetworkAddressRequest& request, const ReleaseNodePrivateNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseNodePrivateNetworkAddressOutcomeCallable releaseNodePrivateNetworkAddressCallable(const Model::ReleaseNodePrivateNetworkAddressRequest& request) const;
			ReleasePublicNetworkAddressOutcome releasePublicNetworkAddress(const Model::ReleasePublicNetworkAddressRequest &request)const;
			void releasePublicNetworkAddressAsync(const Model::ReleasePublicNetworkAddressRequest& request, const ReleasePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicNetworkAddressOutcomeCallable releasePublicNetworkAddressCallable(const Model::ReleasePublicNetworkAddressRequest& request) const;
			RenewDBInstanceOutcome renewDBInstance(const Model::RenewDBInstanceRequest &request)const;
			void renewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewDBInstanceOutcomeCallable renewDBInstanceCallable(const Model::RenewDBInstanceRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			RestoreDBInstanceOutcome restoreDBInstance(const Model::RestoreDBInstanceRequest &request)const;
			void restoreDBInstanceAsync(const Model::RestoreDBInstanceRequest& request, const RestoreDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreDBInstanceOutcomeCallable restoreDBInstanceCallable(const Model::RestoreDBInstanceRequest& request) const;
			SwitchDBInstanceHAOutcome switchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request)const;
			void switchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceHAOutcomeCallable switchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TransformInstanceChargeTypeOutcome transformInstanceChargeType(const Model::TransformInstanceChargeTypeRequest &request)const;
			void transformInstanceChargeTypeAsync(const Model::TransformInstanceChargeTypeRequest& request, const TransformInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformInstanceChargeTypeOutcomeCallable transformInstanceChargeTypeCallable(const Model::TransformInstanceChargeTypeRequest& request) const;
			TransformToPrePaidOutcome transformToPrePaid(const Model::TransformToPrePaidRequest &request)const;
			void transformToPrePaidAsync(const Model::TransformToPrePaidRequest& request, const TransformToPrePaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformToPrePaidOutcomeCallable transformToPrePaidCallable(const Model::TransformToPrePaidRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpgradeDBInstanceEngineVersionOutcome upgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request)const;
			void upgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceEngineVersionOutcomeCallable upgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request) const;
			UpgradeDBInstanceKernelVersionOutcome upgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request)const;
			void upgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceKernelVersionOutcomeCallable upgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DDS_DDSCLIENT_H_
