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

#ifndef ALIBABACLOUD_R_KVSTORE_R_KVSTORECLIENT_H_
#define ALIBABACLOUD_R_KVSTORE_R_KVSTORECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "R_kvstoreExport.h"
#include "model/AddShardingNodeRequest.h"
#include "model/AddShardingNodeResult.h"
#include "model/AllocateDirectConnectionRequest.h"
#include "model/AllocateDirectConnectionResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateCacheAnalysisTaskRequest.h"
#include "model/CreateCacheAnalysisTaskResult.h"
#include "model/CreateGlobalDistributeCacheRequest.h"
#include "model/CreateGlobalDistributeCacheResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateInstancesRequest.h"
#include "model/CreateInstancesResult.h"
#include "model/CreateTairInstanceRequest.h"
#include "model/CreateTairInstanceResult.h"
#include "model/CreateUserClusterHostRequest.h"
#include "model/CreateUserClusterHostResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteShardingNodeRequest.h"
#include "model/DeleteShardingNodeResult.h"
#include "model/DeleteUserClusterHostRequest.h"
#include "model/DeleteUserClusterHostResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeActiveOperationTaskRequest.h"
#include "model/DescribeActiveOperationTaskResult.h"
#include "model/DescribeAuditRecordsRequest.h"
#include "model/DescribeAuditRecordsResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupTasksRequest.h"
#include "model/DescribeBackupTasksResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeCacheAnalysisReportRequest.h"
#include "model/DescribeCacheAnalysisReportResult.h"
#include "model/DescribeCacheAnalysisReportListRequest.h"
#include "model/DescribeCacheAnalysisReportListResult.h"
#include "model/DescribeClusterMemberInfoRequest.h"
#include "model/DescribeClusterMemberInfoResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDedicatedClusterInstanceListRequest.h"
#include "model/DescribeDedicatedClusterInstanceListResult.h"
#include "model/DescribeEngineVersionRequest.h"
#include "model/DescribeEngineVersionResult.h"
#include "model/DescribeGlobalDistributeCacheRequest.h"
#include "model/DescribeGlobalDistributeCacheResult.h"
#include "model/DescribeHistoryMonitorValuesRequest.h"
#include "model/DescribeHistoryMonitorValuesResult.h"
#include "model/DescribeInstanceAttributeRequest.h"
#include "model/DescribeInstanceAttributeResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeInstanceConfigRequest.h"
#include "model/DescribeInstanceConfigResult.h"
#include "model/DescribeInstanceSSLRequest.h"
#include "model/DescribeInstanceSSLResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIntranetAttributeRequest.h"
#include "model/DescribeIntranetAttributeResult.h"
#include "model/DescribeLogicInstanceTopologyRequest.h"
#include "model/DescribeLogicInstanceTopologyResult.h"
#include "model/DescribeMonitorItemsRequest.h"
#include "model/DescribeMonitorItemsResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRoleZoneInfoRequest.h"
#include "model/DescribeRoleZoneInfoResult.h"
#include "model/DescribeRunningLogRecordsRequest.h"
#include "model/DescribeRunningLogRecordsResult.h"
#include "model/DescribeSecurityGroupConfigurationRequest.h"
#include "model/DescribeSecurityGroupConfigurationResult.h"
#include "model/DescribeSecurityIpsRequest.h"
#include "model/DescribeSecurityIpsResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeUserClusterHostRequest.h"
#include "model/DescribeUserClusterHostResult.h"
#include "model/DescribeUserClusterHostInstanceRequest.h"
#include "model/DescribeUserClusterHostInstanceResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/EnableAdditionalBandwidthRequest.h"
#include "model/EnableAdditionalBandwidthResult.h"
#include "model/FlushExpireKeysRequest.h"
#include "model/FlushExpireKeysResult.h"
#include "model/FlushInstanceRequest.h"
#include "model/FlushInstanceResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/InitializeKvstorePermissionRequest.h"
#include "model/InitializeKvstorePermissionResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPasswordRequest.h"
#include "model/ModifyAccountPasswordResult.h"
#include "model/ModifyActiveOperationTaskRequest.h"
#include "model/ModifyActiveOperationTaskResult.h"
#include "model/ModifyAuditLogConfigRequest.h"
#include "model/ModifyAuditLogConfigResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/ModifyInstanceConfigRequest.h"
#include "model/ModifyInstanceConfigResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/ModifyInstanceMajorVersionRequest.h"
#include "model/ModifyInstanceMajorVersionResult.h"
#include "model/ModifyInstanceMinorVersionRequest.h"
#include "model/ModifyInstanceMinorVersionResult.h"
#include "model/ModifyInstanceNetExpireTimeRequest.h"
#include "model/ModifyInstanceNetExpireTimeResult.h"
#include "model/ModifyInstanceSSLRequest.h"
#include "model/ModifyInstanceSSLResult.h"
#include "model/ModifyInstanceSpecRequest.h"
#include "model/ModifyInstanceSpecResult.h"
#include "model/ModifyInstanceVpcAuthModeRequest.h"
#include "model/ModifyInstanceVpcAuthModeResult.h"
#include "model/ModifyIntranetAttributeRequest.h"
#include "model/ModifyIntranetAttributeResult.h"
#include "model/ModifyNodeSpecRequest.h"
#include "model/ModifyNodeSpecResult.h"
#include "model/ModifyResourceGroupRequest.h"
#include "model/ModifyResourceGroupResult.h"
#include "model/ModifySecurityGroupConfigurationRequest.h"
#include "model/ModifySecurityGroupConfigurationResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ModifyUserClusterHostRequest.h"
#include "model/ModifyUserClusterHostResult.h"
#include "model/ReleaseDirectConnectionRequest.h"
#include "model/ReleaseDirectConnectionResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/RenewAdditionalBandwidthRequest.h"
#include "model/RenewAdditionalBandwidthResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ReplaceUserClusterHostRequest.h"
#include "model/ReplaceUserClusterHostResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/RestoreInstanceRequest.h"
#include "model/RestoreInstanceResult.h"
#include "model/SwitchInstanceHARequest.h"
#include "model/SwitchInstanceHAResult.h"
#include "model/SwitchNetworkRequest.h"
#include "model/SwitchNetworkResult.h"
#include "model/SyncDtsStatusRequest.h"
#include "model/SyncDtsStatusResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TransformInstanceChargeTypeRequest.h"
#include "model/TransformInstanceChargeTypeResult.h"
#include "model/TransformToPrePaidRequest.h"
#include "model/TransformToPrePaidResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace R_kvstore
	{
		class ALIBABACLOUD_R_KVSTORE_EXPORT R_kvstoreClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddShardingNodeResult> AddShardingNodeOutcome;
			typedef std::future<AddShardingNodeOutcome> AddShardingNodeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::AddShardingNodeRequest&, const AddShardingNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddShardingNodeAsyncHandler;
			typedef Outcome<Error, Model::AllocateDirectConnectionResult> AllocateDirectConnectionOutcome;
			typedef std::future<AllocateDirectConnectionOutcome> AllocateDirectConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::AllocateDirectConnectionRequest&, const AllocateDirectConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateDirectConnectionAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateCacheAnalysisTaskResult> CreateCacheAnalysisTaskOutcome;
			typedef std::future<CreateCacheAnalysisTaskOutcome> CreateCacheAnalysisTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateCacheAnalysisTaskRequest&, const CreateCacheAnalysisTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCacheAnalysisTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalDistributeCacheResult> CreateGlobalDistributeCacheOutcome;
			typedef std::future<CreateGlobalDistributeCacheOutcome> CreateGlobalDistributeCacheOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateGlobalDistributeCacheRequest&, const CreateGlobalDistributeCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDistributeCacheAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateInstancesResult> CreateInstancesOutcome;
			typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateInstancesRequest&, const CreateInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateTairInstanceResult> CreateTairInstanceOutcome;
			typedef std::future<CreateTairInstanceOutcome> CreateTairInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateTairInstanceRequest&, const CreateTairInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTairInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateUserClusterHostResult> CreateUserClusterHostOutcome;
			typedef std::future<CreateUserClusterHostOutcome> CreateUserClusterHostOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateUserClusterHostRequest&, const CreateUserClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserClusterHostAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteShardingNodeResult> DeleteShardingNodeOutcome;
			typedef std::future<DeleteShardingNodeOutcome> DeleteShardingNodeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteShardingNodeRequest&, const DeleteShardingNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShardingNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserClusterHostResult> DeleteUserClusterHostOutcome;
			typedef std::future<DeleteUserClusterHostOutcome> DeleteUserClusterHostOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteUserClusterHostRequest&, const DeleteUserClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserClusterHostAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskResult> DescribeActiveOperationTaskOutcome;
			typedef std::future<DescribeActiveOperationTaskOutcome> DescribeActiveOperationTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeActiveOperationTaskRequest&, const DescribeActiveOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditRecordsResult> DescribeAuditRecordsOutcome;
			typedef std::future<DescribeAuditRecordsOutcome> DescribeAuditRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeAuditRecordsRequest&, const DescribeAuditRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTasksResult> DescribeBackupTasksOutcome;
			typedef std::future<DescribeBackupTasksOutcome> DescribeBackupTasksOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeBackupTasksRequest&, const DescribeBackupTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCacheAnalysisReportResult> DescribeCacheAnalysisReportOutcome;
			typedef std::future<DescribeCacheAnalysisReportOutcome> DescribeCacheAnalysisReportOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeCacheAnalysisReportRequest&, const DescribeCacheAnalysisReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCacheAnalysisReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeCacheAnalysisReportListResult> DescribeCacheAnalysisReportListOutcome;
			typedef std::future<DescribeCacheAnalysisReportListOutcome> DescribeCacheAnalysisReportListOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeCacheAnalysisReportListRequest&, const DescribeCacheAnalysisReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCacheAnalysisReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterMemberInfoResult> DescribeClusterMemberInfoOutcome;
			typedef std::future<DescribeClusterMemberInfoOutcome> DescribeClusterMemberInfoOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeClusterMemberInfoRequest&, const DescribeClusterMemberInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterMemberInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedClusterInstanceListResult> DescribeDedicatedClusterInstanceListOutcome;
			typedef std::future<DescribeDedicatedClusterInstanceListOutcome> DescribeDedicatedClusterInstanceListOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeDedicatedClusterInstanceListRequest&, const DescribeDedicatedClusterInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterInstanceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEngineVersionResult> DescribeEngineVersionOutcome;
			typedef std::future<DescribeEngineVersionOutcome> DescribeEngineVersionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeEngineVersionRequest&, const DescribeEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalDistributeCacheResult> DescribeGlobalDistributeCacheOutcome;
			typedef std::future<DescribeGlobalDistributeCacheOutcome> DescribeGlobalDistributeCacheOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeGlobalDistributeCacheRequest&, const DescribeGlobalDistributeCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDistributeCacheAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryMonitorValuesResult> DescribeHistoryMonitorValuesOutcome;
			typedef std::future<DescribeHistoryMonitorValuesOutcome> DescribeHistoryMonitorValuesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeHistoryMonitorValuesRequest&, const DescribeHistoryMonitorValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryMonitorValuesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAttributeResult> DescribeInstanceAttributeOutcome;
			typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceAttributeRequest&, const DescribeInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceConfigResult> DescribeInstanceConfigOutcome;
			typedef std::future<DescribeInstanceConfigOutcome> DescribeInstanceConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceConfigRequest&, const DescribeInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSSLResult> DescribeInstanceSSLOutcome;
			typedef std::future<DescribeInstanceSSLOutcome> DescribeInstanceSSLOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceSSLRequest&, const DescribeInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntranetAttributeResult> DescribeIntranetAttributeOutcome;
			typedef std::future<DescribeIntranetAttributeOutcome> DescribeIntranetAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeIntranetAttributeRequest&, const DescribeIntranetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntranetAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogicInstanceTopologyResult> DescribeLogicInstanceTopologyOutcome;
			typedef std::future<DescribeLogicInstanceTopologyOutcome> DescribeLogicInstanceTopologyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeLogicInstanceTopologyRequest&, const DescribeLogicInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogicInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorItemsResult> DescribeMonitorItemsOutcome;
			typedef std::future<DescribeMonitorItemsOutcome> DescribeMonitorItemsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeMonitorItemsRequest&, const DescribeMonitorItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoleZoneInfoResult> DescribeRoleZoneInfoOutcome;
			typedef std::future<DescribeRoleZoneInfoOutcome> DescribeRoleZoneInfoOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRoleZoneInfoRequest&, const DescribeRoleZoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleZoneInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRunningLogRecordsResult> DescribeRunningLogRecordsOutcome;
			typedef std::future<DescribeRunningLogRecordsOutcome> DescribeRunningLogRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRunningLogRecordsRequest&, const DescribeRunningLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunningLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupConfigurationResult> DescribeSecurityGroupConfigurationOutcome;
			typedef std::future<DescribeSecurityGroupConfigurationOutcome> DescribeSecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSecurityGroupConfigurationRequest&, const DescribeSecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpsResult> DescribeSecurityIpsOutcome;
			typedef std::future<DescribeSecurityIpsOutcome> DescribeSecurityIpsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSecurityIpsRequest&, const DescribeSecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserClusterHostResult> DescribeUserClusterHostOutcome;
			typedef std::future<DescribeUserClusterHostOutcome> DescribeUserClusterHostOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeUserClusterHostRequest&, const DescribeUserClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClusterHostAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserClusterHostInstanceResult> DescribeUserClusterHostInstanceOutcome;
			typedef std::future<DescribeUserClusterHostInstanceOutcome> DescribeUserClusterHostInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeUserClusterHostInstanceRequest&, const DescribeUserClusterHostInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClusterHostInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::EnableAdditionalBandwidthResult> EnableAdditionalBandwidthOutcome;
			typedef std::future<EnableAdditionalBandwidthOutcome> EnableAdditionalBandwidthOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::EnableAdditionalBandwidthRequest&, const EnableAdditionalBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAdditionalBandwidthAsyncHandler;
			typedef Outcome<Error, Model::FlushExpireKeysResult> FlushExpireKeysOutcome;
			typedef std::future<FlushExpireKeysOutcome> FlushExpireKeysOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::FlushExpireKeysRequest&, const FlushExpireKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlushExpireKeysAsyncHandler;
			typedef Outcome<Error, Model::FlushInstanceResult> FlushInstanceOutcome;
			typedef std::future<FlushInstanceOutcome> FlushInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::FlushInstanceRequest&, const FlushInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlushInstanceAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::InitializeKvstorePermissionResult> InitializeKvstorePermissionOutcome;
			typedef std::future<InitializeKvstorePermissionOutcome> InitializeKvstorePermissionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::InitializeKvstorePermissionRequest&, const InitializeKvstorePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeKvstorePermissionAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPasswordResult> ModifyAccountPasswordOutcome;
			typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyAccountPasswordRequest&, const ModifyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationTaskResult> ModifyActiveOperationTaskOutcome;
			typedef std::future<ModifyActiveOperationTaskOutcome> ModifyActiveOperationTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyActiveOperationTaskRequest&, const ModifyActiveOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditLogConfigResult> ModifyAuditLogConfigOutcome;
			typedef std::future<ModifyAuditLogConfigOutcome> ModifyAuditLogConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyAuditLogConfigRequest&, const ModifyAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAttributeResult> ModifyInstanceAttributeOutcome;
			typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceAttributeRequest&, const ModifyInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceConfigResult> ModifyInstanceConfigOutcome;
			typedef std::future<ModifyInstanceConfigOutcome> ModifyInstanceConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceConfigRequest&, const ModifyInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMajorVersionResult> ModifyInstanceMajorVersionOutcome;
			typedef std::future<ModifyInstanceMajorVersionOutcome> ModifyInstanceMajorVersionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMajorVersionRequest&, const ModifyInstanceMajorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMajorVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMinorVersionResult> ModifyInstanceMinorVersionOutcome;
			typedef std::future<ModifyInstanceMinorVersionOutcome> ModifyInstanceMinorVersionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMinorVersionRequest&, const ModifyInstanceMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMinorVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNetExpireTimeResult> ModifyInstanceNetExpireTimeOutcome;
			typedef std::future<ModifyInstanceNetExpireTimeOutcome> ModifyInstanceNetExpireTimeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceNetExpireTimeRequest&, const ModifyInstanceNetExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSSLResult> ModifyInstanceSSLOutcome;
			typedef std::future<ModifyInstanceSSLOutcome> ModifyInstanceSSLOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceSSLRequest&, const ModifyInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecResult> ModifyInstanceSpecOutcome;
			typedef std::future<ModifyInstanceSpecOutcome> ModifyInstanceSpecOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceSpecRequest&, const ModifyInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVpcAuthModeResult> ModifyInstanceVpcAuthModeOutcome;
			typedef std::future<ModifyInstanceVpcAuthModeOutcome> ModifyInstanceVpcAuthModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceVpcAuthModeRequest&, const ModifyInstanceVpcAuthModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVpcAuthModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIntranetAttributeResult> ModifyIntranetAttributeOutcome;
			typedef std::future<ModifyIntranetAttributeOutcome> ModifyIntranetAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyIntranetAttributeRequest&, const ModifyIntranetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntranetAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNodeSpecResult> ModifyNodeSpecOutcome;
			typedef std::future<ModifyNodeSpecOutcome> ModifyNodeSpecOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyNodeSpecRequest&, const ModifyNodeSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceGroupResult> ModifyResourceGroupOutcome;
			typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyResourceGroupRequest&, const ModifyResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupConfigurationResult> ModifySecurityGroupConfigurationOutcome;
			typedef std::future<ModifySecurityGroupConfigurationOutcome> ModifySecurityGroupConfigurationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifySecurityGroupConfigurationRequest&, const ModifySecurityGroupConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserClusterHostResult> ModifyUserClusterHostOutcome;
			typedef std::future<ModifyUserClusterHostOutcome> ModifyUserClusterHostOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyUserClusterHostRequest&, const ModifyUserClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ReleaseDirectConnectionResult> ReleaseDirectConnectionOutcome;
			typedef std::future<ReleaseDirectConnectionOutcome> ReleaseDirectConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ReleaseDirectConnectionRequest&, const ReleaseDirectConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseDirectConnectionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::RenewAdditionalBandwidthResult> RenewAdditionalBandwidthOutcome;
			typedef std::future<RenewAdditionalBandwidthOutcome> RenewAdditionalBandwidthOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RenewAdditionalBandwidthRequest&, const RenewAdditionalBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewAdditionalBandwidthAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReplaceUserClusterHostResult> ReplaceUserClusterHostOutcome;
			typedef std::future<ReplaceUserClusterHostOutcome> ReplaceUserClusterHostOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ReplaceUserClusterHostRequest&, const ReplaceUserClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceUserClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestoreInstanceResult> RestoreInstanceOutcome;
			typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RestoreInstanceRequest&, const RestoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchInstanceHAResult> SwitchInstanceHAOutcome;
			typedef std::future<SwitchInstanceHAOutcome> SwitchInstanceHAOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SwitchInstanceHARequest&, const SwitchInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::SwitchNetworkResult> SwitchNetworkOutcome;
			typedef std::future<SwitchNetworkOutcome> SwitchNetworkOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SwitchNetworkRequest&, const SwitchNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchNetworkAsyncHandler;
			typedef Outcome<Error, Model::SyncDtsStatusResult> SyncDtsStatusOutcome;
			typedef std::future<SyncDtsStatusOutcome> SyncDtsStatusOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SyncDtsStatusRequest&, const SyncDtsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDtsStatusAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TransformInstanceChargeTypeResult> TransformInstanceChargeTypeOutcome;
			typedef std::future<TransformInstanceChargeTypeOutcome> TransformInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::TransformInstanceChargeTypeRequest&, const TransformInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::TransformToPrePaidResult> TransformToPrePaidOutcome;
			typedef std::future<TransformToPrePaidOutcome> TransformToPrePaidOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::TransformToPrePaidRequest&, const TransformToPrePaidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformToPrePaidAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			R_kvstoreClient(const Credentials &credentials, const ClientConfiguration &configuration);
			R_kvstoreClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			R_kvstoreClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~R_kvstoreClient();
			AddShardingNodeOutcome addShardingNode(const Model::AddShardingNodeRequest &request)const;
			void addShardingNodeAsync(const Model::AddShardingNodeRequest& request, const AddShardingNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddShardingNodeOutcomeCallable addShardingNodeCallable(const Model::AddShardingNodeRequest& request) const;
			AllocateDirectConnectionOutcome allocateDirectConnection(const Model::AllocateDirectConnectionRequest &request)const;
			void allocateDirectConnectionAsync(const Model::AllocateDirectConnectionRequest& request, const AllocateDirectConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateDirectConnectionOutcomeCallable allocateDirectConnectionCallable(const Model::AllocateDirectConnectionRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateCacheAnalysisTaskOutcome createCacheAnalysisTask(const Model::CreateCacheAnalysisTaskRequest &request)const;
			void createCacheAnalysisTaskAsync(const Model::CreateCacheAnalysisTaskRequest& request, const CreateCacheAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCacheAnalysisTaskOutcomeCallable createCacheAnalysisTaskCallable(const Model::CreateCacheAnalysisTaskRequest& request) const;
			CreateGlobalDistributeCacheOutcome createGlobalDistributeCache(const Model::CreateGlobalDistributeCacheRequest &request)const;
			void createGlobalDistributeCacheAsync(const Model::CreateGlobalDistributeCacheRequest& request, const CreateGlobalDistributeCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalDistributeCacheOutcomeCallable createGlobalDistributeCacheCallable(const Model::CreateGlobalDistributeCacheRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateInstancesOutcome createInstances(const Model::CreateInstancesRequest &request)const;
			void createInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstancesOutcomeCallable createInstancesCallable(const Model::CreateInstancesRequest& request) const;
			CreateTairInstanceOutcome createTairInstance(const Model::CreateTairInstanceRequest &request)const;
			void createTairInstanceAsync(const Model::CreateTairInstanceRequest& request, const CreateTairInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTairInstanceOutcomeCallable createTairInstanceCallable(const Model::CreateTairInstanceRequest& request) const;
			CreateUserClusterHostOutcome createUserClusterHost(const Model::CreateUserClusterHostRequest &request)const;
			void createUserClusterHostAsync(const Model::CreateUserClusterHostRequest& request, const CreateUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserClusterHostOutcomeCallable createUserClusterHostCallable(const Model::CreateUserClusterHostRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteShardingNodeOutcome deleteShardingNode(const Model::DeleteShardingNodeRequest &request)const;
			void deleteShardingNodeAsync(const Model::DeleteShardingNodeRequest& request, const DeleteShardingNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteShardingNodeOutcomeCallable deleteShardingNodeCallable(const Model::DeleteShardingNodeRequest& request) const;
			DeleteUserClusterHostOutcome deleteUserClusterHost(const Model::DeleteUserClusterHostRequest &request)const;
			void deleteUserClusterHostAsync(const Model::DeleteUserClusterHostRequest& request, const DeleteUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserClusterHostOutcomeCallable deleteUserClusterHostCallable(const Model::DeleteUserClusterHostRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeActiveOperationTaskOutcome describeActiveOperationTask(const Model::DescribeActiveOperationTaskRequest &request)const;
			void describeActiveOperationTaskAsync(const Model::DescribeActiveOperationTaskRequest& request, const DescribeActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskOutcomeCallable describeActiveOperationTaskCallable(const Model::DescribeActiveOperationTaskRequest& request) const;
			DescribeAuditRecordsOutcome describeAuditRecords(const Model::DescribeAuditRecordsRequest &request)const;
			void describeAuditRecordsAsync(const Model::DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditRecordsOutcomeCallable describeAuditRecordsCallable(const Model::DescribeAuditRecordsRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupTasksOutcome describeBackupTasks(const Model::DescribeBackupTasksRequest &request)const;
			void describeBackupTasksAsync(const Model::DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTasksOutcomeCallable describeBackupTasksCallable(const Model::DescribeBackupTasksRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeCacheAnalysisReportOutcome describeCacheAnalysisReport(const Model::DescribeCacheAnalysisReportRequest &request)const;
			void describeCacheAnalysisReportAsync(const Model::DescribeCacheAnalysisReportRequest& request, const DescribeCacheAnalysisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCacheAnalysisReportOutcomeCallable describeCacheAnalysisReportCallable(const Model::DescribeCacheAnalysisReportRequest& request) const;
			DescribeCacheAnalysisReportListOutcome describeCacheAnalysisReportList(const Model::DescribeCacheAnalysisReportListRequest &request)const;
			void describeCacheAnalysisReportListAsync(const Model::DescribeCacheAnalysisReportListRequest& request, const DescribeCacheAnalysisReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCacheAnalysisReportListOutcomeCallable describeCacheAnalysisReportListCallable(const Model::DescribeCacheAnalysisReportListRequest& request) const;
			DescribeClusterMemberInfoOutcome describeClusterMemberInfo(const Model::DescribeClusterMemberInfoRequest &request)const;
			void describeClusterMemberInfoAsync(const Model::DescribeClusterMemberInfoRequest& request, const DescribeClusterMemberInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterMemberInfoOutcomeCallable describeClusterMemberInfoCallable(const Model::DescribeClusterMemberInfoRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDedicatedClusterInstanceListOutcome describeDedicatedClusterInstanceList(const Model::DescribeDedicatedClusterInstanceListRequest &request)const;
			void describeDedicatedClusterInstanceListAsync(const Model::DescribeDedicatedClusterInstanceListRequest& request, const DescribeDedicatedClusterInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedClusterInstanceListOutcomeCallable describeDedicatedClusterInstanceListCallable(const Model::DescribeDedicatedClusterInstanceListRequest& request) const;
			DescribeEngineVersionOutcome describeEngineVersion(const Model::DescribeEngineVersionRequest &request)const;
			void describeEngineVersionAsync(const Model::DescribeEngineVersionRequest& request, const DescribeEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEngineVersionOutcomeCallable describeEngineVersionCallable(const Model::DescribeEngineVersionRequest& request) const;
			DescribeGlobalDistributeCacheOutcome describeGlobalDistributeCache(const Model::DescribeGlobalDistributeCacheRequest &request)const;
			void describeGlobalDistributeCacheAsync(const Model::DescribeGlobalDistributeCacheRequest& request, const DescribeGlobalDistributeCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalDistributeCacheOutcomeCallable describeGlobalDistributeCacheCallable(const Model::DescribeGlobalDistributeCacheRequest& request) const;
			DescribeHistoryMonitorValuesOutcome describeHistoryMonitorValues(const Model::DescribeHistoryMonitorValuesRequest &request)const;
			void describeHistoryMonitorValuesAsync(const Model::DescribeHistoryMonitorValuesRequest& request, const DescribeHistoryMonitorValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryMonitorValuesOutcomeCallable describeHistoryMonitorValuesCallable(const Model::DescribeHistoryMonitorValuesRequest& request) const;
			DescribeInstanceAttributeOutcome describeInstanceAttribute(const Model::DescribeInstanceAttributeRequest &request)const;
			void describeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAttributeOutcomeCallable describeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;
			DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
			void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
			DescribeInstanceConfigOutcome describeInstanceConfig(const Model::DescribeInstanceConfigRequest &request)const;
			void describeInstanceConfigAsync(const Model::DescribeInstanceConfigRequest& request, const DescribeInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceConfigOutcomeCallable describeInstanceConfigCallable(const Model::DescribeInstanceConfigRequest& request) const;
			DescribeInstanceSSLOutcome describeInstanceSSL(const Model::DescribeInstanceSSLRequest &request)const;
			void describeInstanceSSLAsync(const Model::DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSSLOutcomeCallable describeInstanceSSLCallable(const Model::DescribeInstanceSSLRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeIntranetAttributeOutcome describeIntranetAttribute(const Model::DescribeIntranetAttributeRequest &request)const;
			void describeIntranetAttributeAsync(const Model::DescribeIntranetAttributeRequest& request, const DescribeIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntranetAttributeOutcomeCallable describeIntranetAttributeCallable(const Model::DescribeIntranetAttributeRequest& request) const;
			DescribeLogicInstanceTopologyOutcome describeLogicInstanceTopology(const Model::DescribeLogicInstanceTopologyRequest &request)const;
			void describeLogicInstanceTopologyAsync(const Model::DescribeLogicInstanceTopologyRequest& request, const DescribeLogicInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogicInstanceTopologyOutcomeCallable describeLogicInstanceTopologyCallable(const Model::DescribeLogicInstanceTopologyRequest& request) const;
			DescribeMonitorItemsOutcome describeMonitorItems(const Model::DescribeMonitorItemsRequest &request)const;
			void describeMonitorItemsAsync(const Model::DescribeMonitorItemsRequest& request, const DescribeMonitorItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorItemsOutcomeCallable describeMonitorItemsCallable(const Model::DescribeMonitorItemsRequest& request) const;
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
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeUserClusterHostOutcome describeUserClusterHost(const Model::DescribeUserClusterHostRequest &request)const;
			void describeUserClusterHostAsync(const Model::DescribeUserClusterHostRequest& request, const DescribeUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserClusterHostOutcomeCallable describeUserClusterHostCallable(const Model::DescribeUserClusterHostRequest& request) const;
			DescribeUserClusterHostInstanceOutcome describeUserClusterHostInstance(const Model::DescribeUserClusterHostInstanceRequest &request)const;
			void describeUserClusterHostInstanceAsync(const Model::DescribeUserClusterHostInstanceRequest& request, const DescribeUserClusterHostInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserClusterHostInstanceOutcomeCallable describeUserClusterHostInstanceCallable(const Model::DescribeUserClusterHostInstanceRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			EnableAdditionalBandwidthOutcome enableAdditionalBandwidth(const Model::EnableAdditionalBandwidthRequest &request)const;
			void enableAdditionalBandwidthAsync(const Model::EnableAdditionalBandwidthRequest& request, const EnableAdditionalBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAdditionalBandwidthOutcomeCallable enableAdditionalBandwidthCallable(const Model::EnableAdditionalBandwidthRequest& request) const;
			FlushExpireKeysOutcome flushExpireKeys(const Model::FlushExpireKeysRequest &request)const;
			void flushExpireKeysAsync(const Model::FlushExpireKeysRequest& request, const FlushExpireKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlushExpireKeysOutcomeCallable flushExpireKeysCallable(const Model::FlushExpireKeysRequest& request) const;
			FlushInstanceOutcome flushInstance(const Model::FlushInstanceRequest &request)const;
			void flushInstanceAsync(const Model::FlushInstanceRequest& request, const FlushInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlushInstanceOutcomeCallable flushInstanceCallable(const Model::FlushInstanceRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			InitializeKvstorePermissionOutcome initializeKvstorePermission(const Model::InitializeKvstorePermissionRequest &request)const;
			void initializeKvstorePermissionAsync(const Model::InitializeKvstorePermissionRequest& request, const InitializeKvstorePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeKvstorePermissionOutcomeCallable initializeKvstorePermissionCallable(const Model::InitializeKvstorePermissionRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPasswordOutcome modifyAccountPassword(const Model::ModifyAccountPasswordRequest &request)const;
			void modifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPasswordOutcomeCallable modifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request) const;
			ModifyActiveOperationTaskOutcome modifyActiveOperationTask(const Model::ModifyActiveOperationTaskRequest &request)const;
			void modifyActiveOperationTaskAsync(const Model::ModifyActiveOperationTaskRequest& request, const ModifyActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationTaskOutcomeCallable modifyActiveOperationTaskCallable(const Model::ModifyActiveOperationTaskRequest& request) const;
			ModifyAuditLogConfigOutcome modifyAuditLogConfig(const Model::ModifyAuditLogConfigRequest &request)const;
			void modifyAuditLogConfigAsync(const Model::ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditLogConfigOutcomeCallable modifyAuditLogConfigCallable(const Model::ModifyAuditLogConfigRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyInstanceAttributeOutcome modifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request)const;
			void modifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAttributeOutcomeCallable modifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;
			ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
			void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
			ModifyInstanceConfigOutcome modifyInstanceConfig(const Model::ModifyInstanceConfigRequest &request)const;
			void modifyInstanceConfigAsync(const Model::ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceConfigOutcomeCallable modifyInstanceConfigCallable(const Model::ModifyInstanceConfigRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			ModifyInstanceMajorVersionOutcome modifyInstanceMajorVersion(const Model::ModifyInstanceMajorVersionRequest &request)const;
			void modifyInstanceMajorVersionAsync(const Model::ModifyInstanceMajorVersionRequest& request, const ModifyInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMajorVersionOutcomeCallable modifyInstanceMajorVersionCallable(const Model::ModifyInstanceMajorVersionRequest& request) const;
			ModifyInstanceMinorVersionOutcome modifyInstanceMinorVersion(const Model::ModifyInstanceMinorVersionRequest &request)const;
			void modifyInstanceMinorVersionAsync(const Model::ModifyInstanceMinorVersionRequest& request, const ModifyInstanceMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMinorVersionOutcomeCallable modifyInstanceMinorVersionCallable(const Model::ModifyInstanceMinorVersionRequest& request) const;
			ModifyInstanceNetExpireTimeOutcome modifyInstanceNetExpireTime(const Model::ModifyInstanceNetExpireTimeRequest &request)const;
			void modifyInstanceNetExpireTimeAsync(const Model::ModifyInstanceNetExpireTimeRequest& request, const ModifyInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNetExpireTimeOutcomeCallable modifyInstanceNetExpireTimeCallable(const Model::ModifyInstanceNetExpireTimeRequest& request) const;
			ModifyInstanceSSLOutcome modifyInstanceSSL(const Model::ModifyInstanceSSLRequest &request)const;
			void modifyInstanceSSLAsync(const Model::ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSSLOutcomeCallable modifyInstanceSSLCallable(const Model::ModifyInstanceSSLRequest& request) const;
			ModifyInstanceSpecOutcome modifyInstanceSpec(const Model::ModifyInstanceSpecRequest &request)const;
			void modifyInstanceSpecAsync(const Model::ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecOutcomeCallable modifyInstanceSpecCallable(const Model::ModifyInstanceSpecRequest& request) const;
			ModifyInstanceVpcAuthModeOutcome modifyInstanceVpcAuthMode(const Model::ModifyInstanceVpcAuthModeRequest &request)const;
			void modifyInstanceVpcAuthModeAsync(const Model::ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVpcAuthModeOutcomeCallable modifyInstanceVpcAuthModeCallable(const Model::ModifyInstanceVpcAuthModeRequest& request) const;
			ModifyIntranetAttributeOutcome modifyIntranetAttribute(const Model::ModifyIntranetAttributeRequest &request)const;
			void modifyIntranetAttributeAsync(const Model::ModifyIntranetAttributeRequest& request, const ModifyIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIntranetAttributeOutcomeCallable modifyIntranetAttributeCallable(const Model::ModifyIntranetAttributeRequest& request) const;
			ModifyNodeSpecOutcome modifyNodeSpec(const Model::ModifyNodeSpecRequest &request)const;
			void modifyNodeSpecAsync(const Model::ModifyNodeSpecRequest& request, const ModifyNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNodeSpecOutcomeCallable modifyNodeSpecCallable(const Model::ModifyNodeSpecRequest& request) const;
			ModifyResourceGroupOutcome modifyResourceGroup(const Model::ModifyResourceGroupRequest &request)const;
			void modifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceGroupOutcomeCallable modifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request) const;
			ModifySecurityGroupConfigurationOutcome modifySecurityGroupConfiguration(const Model::ModifySecurityGroupConfigurationRequest &request)const;
			void modifySecurityGroupConfigurationAsync(const Model::ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupConfigurationOutcomeCallable modifySecurityGroupConfigurationCallable(const Model::ModifySecurityGroupConfigurationRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ModifyUserClusterHostOutcome modifyUserClusterHost(const Model::ModifyUserClusterHostRequest &request)const;
			void modifyUserClusterHostAsync(const Model::ModifyUserClusterHostRequest& request, const ModifyUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserClusterHostOutcomeCallable modifyUserClusterHostCallable(const Model::ModifyUserClusterHostRequest& request) const;
			ReleaseDirectConnectionOutcome releaseDirectConnection(const Model::ReleaseDirectConnectionRequest &request)const;
			void releaseDirectConnectionAsync(const Model::ReleaseDirectConnectionRequest& request, const ReleaseDirectConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseDirectConnectionOutcomeCallable releaseDirectConnectionCallable(const Model::ReleaseDirectConnectionRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			RenewAdditionalBandwidthOutcome renewAdditionalBandwidth(const Model::RenewAdditionalBandwidthRequest &request)const;
			void renewAdditionalBandwidthAsync(const Model::RenewAdditionalBandwidthRequest& request, const RenewAdditionalBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewAdditionalBandwidthOutcomeCallable renewAdditionalBandwidthCallable(const Model::RenewAdditionalBandwidthRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ReplaceUserClusterHostOutcome replaceUserClusterHost(const Model::ReplaceUserClusterHostRequest &request)const;
			void replaceUserClusterHostAsync(const Model::ReplaceUserClusterHostRequest& request, const ReplaceUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceUserClusterHostOutcomeCallable replaceUserClusterHostCallable(const Model::ReplaceUserClusterHostRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			RestoreInstanceOutcome restoreInstance(const Model::RestoreInstanceRequest &request)const;
			void restoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreInstanceOutcomeCallable restoreInstanceCallable(const Model::RestoreInstanceRequest& request) const;
			SwitchInstanceHAOutcome switchInstanceHA(const Model::SwitchInstanceHARequest &request)const;
			void switchInstanceHAAsync(const Model::SwitchInstanceHARequest& request, const SwitchInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchInstanceHAOutcomeCallable switchInstanceHACallable(const Model::SwitchInstanceHARequest& request) const;
			SwitchNetworkOutcome switchNetwork(const Model::SwitchNetworkRequest &request)const;
			void switchNetworkAsync(const Model::SwitchNetworkRequest& request, const SwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchNetworkOutcomeCallable switchNetworkCallable(const Model::SwitchNetworkRequest& request) const;
			SyncDtsStatusOutcome syncDtsStatus(const Model::SyncDtsStatusRequest &request)const;
			void syncDtsStatusAsync(const Model::SyncDtsStatusRequest& request, const SyncDtsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDtsStatusOutcomeCallable syncDtsStatusCallable(const Model::SyncDtsStatusRequest& request) const;
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
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_R_KVSTORE_R_KVSTORECLIENT_H_
