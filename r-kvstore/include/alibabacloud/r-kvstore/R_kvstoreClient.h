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
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/DescribeDBInstanceMonitorRequest.h"
#include "model/DescribeDBInstanceMonitorResult.h"
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/SwitchNetworkRequest.h"
#include "model/SwitchNetworkResult.h"
#include "model/DescribeCertificationRequest.h"
#include "model/DescribeCertificationResult.h"
#include "model/ReleaseReplicaRequest.h"
#include "model/ReleaseReplicaResult.h"
#include "model/DescribeActiveOperationTaskRequest.h"
#include "model/DescribeActiveOperationTaskResult.h"
#include "model/ModifyReplicaRecoveryModeRequest.h"
#include "model/ModifyReplicaRecoveryModeResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/DescribeReplicasRequest.h"
#include "model/DescribeReplicasResult.h"
#include "model/DescribeReplicaConflictInfoRequest.h"
#include "model/DescribeReplicaConflictInfoResult.h"
#include "model/DescribeActiveOperationTaskCountRequest.h"
#include "model/DescribeActiveOperationTaskCountResult.h"
#include "model/ModifyCertificationRequest.h"
#include "model/ModifyCertificationResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/DescribeHistoryMonitorValuesRequest.h"
#include "model/DescribeHistoryMonitorValuesResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ModifyInstanceMinorVersionRequest.h"
#include "model/ModifyInstanceMinorVersionResult.h"
#include "model/ModifyDBInstanceMonitorRequest.h"
#include "model/ModifyDBInstanceMonitorResult.h"
#include "model/DescribeMonthlyServiceStatusRequest.h"
#include "model/DescribeMonthlyServiceStatusResult.h"
#include "model/ModifyReplicaDescriptionRequest.h"
#include "model/ModifyReplicaDescriptionResult.h"
#include "model/DescribeReplicaInitializeProgressRequest.h"
#include "model/DescribeReplicaInitializeProgressResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/ModifyInstanceVpcAuthModeRequest.h"
#include "model/ModifyInstanceVpcAuthModeResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribeMonthlyServiceStatusDetailRequest.h"
#include "model/DescribeMonthlyServiceStatusDetailResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DescribeInstanceConfigRequest.h"
#include "model/DescribeInstanceConfigResult.h"
#include "model/ModifyInstanceNetExpireTimeRequest.h"
#include "model/ModifyInstanceNetExpireTimeResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/ModifyInstanceSpecRequest.h"
#include "model/ModifyInstanceSpecResult.h"
#include "model/CreateStaticVerificationRequest.h"
#include "model/CreateStaticVerificationResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/VerifyPasswordRequest.h"
#include "model/VerifyPasswordResult.h"
#include "model/DeleteTempInstanceRequest.h"
#include "model/DeleteTempInstanceResult.h"
#include "model/DescribeActiveOperationTaskTypeRequest.h"
#include "model/DescribeActiveOperationTaskTypeResult.h"
#include "model/ModifyInstanceAutoRenewalAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeAuditRecordsRequest.h"
#include "model/DescribeAuditRecordsResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeRdsVpcsRequest.h"
#include "model/DescribeRdsVpcsResult.h"
#include "model/ModifyInstanceMajorVersionRequest.h"
#include "model/ModifyInstanceMajorVersionResult.h"
#include "model/DescribeInstanceAttributeRequest.h"
#include "model/DescribeInstanceAttributeResult.h"
#include "model/DescribeInstanceAutoRenewalAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewalAttributeResult.h"
#include "model/DescribeRdsVSwitchsRequest.h"
#include "model/DescribeRdsVSwitchsResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/ModifyAuditLogConfigRequest.h"
#include "model/ModifyAuditLogConfigResult.h"
#include "model/DescribeErrorLogRecordsRequest.h"
#include "model/DescribeErrorLogRecordsResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/DescribeVerificationListRequest.h"
#include "model/DescribeVerificationListResult.h"
#include "model/ModifyReplicaModeRequest.h"
#include "model/ModifyReplicaModeResult.h"
#include "model/DescribeStrategyRequest.h"
#include "model/DescribeStrategyResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/TransformToPrePaidRequest.h"
#include "model/TransformToPrePaidResult.h"
#include "model/DescribeCacheAnalysisReportListRequest.h"
#include "model/DescribeCacheAnalysisReportListResult.h"
#include "model/DescribeActiveOperationTaskRegionRequest.h"
#include "model/DescribeActiveOperationTaskRegionResult.h"
#include "model/ModifyInstanceConfigRequest.h"
#include "model/ModifyInstanceConfigResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/RestoreSnapshotRequest.h"
#include "model/RestoreSnapshotResult.h"
#include "model/DescribeIntranetAttributeRequest.h"
#include "model/DescribeIntranetAttributeResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateCacheAnalysisTaskRequest.h"
#include "model/CreateCacheAnalysisTaskResult.h"
#include "model/RevokeAccountPrivilegeRequest.h"
#include "model/RevokeAccountPrivilegeResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DestroyInstanceRequest.h"
#include "model/DestroyInstanceResult.h"
#include "model/DescribeRunningLogRecordsRequest.h"
#include "model/DescribeRunningLogRecordsResult.h"
#include "model/DescribeStaticVerificationListRequest.h"
#include "model/DescribeStaticVerificationListResult.h"
#include "model/CreateTempInstanceRequest.h"
#include "model/CreateTempInstanceResult.h"
#include "model/UnlinkReplicaInstanceRequest.h"
#include "model/UnlinkReplicaInstanceResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/FlushInstanceRequest.h"
#include "model/FlushInstanceResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeSecurityIpsRequest.h"
#include "model/DescribeSecurityIpsResult.h"
#include "model/DeleteSnapshotSettingsRequest.h"
#include "model/DeleteSnapshotSettingsResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ModifyInstanceSSLRequest.h"
#include "model/ModifyInstanceSSLResult.h"
#include "model/DescribeTempInstanceRequest.h"
#include "model/DescribeTempInstanceResult.h"
#include "model/ModifyReplicaRelationRequest.h"
#include "model/ModifyReplicaRelationResult.h"
#include "model/DescribeInstancesByExpireTimeRequest.h"
#include "model/DescribeInstancesByExpireTimeResult.h"
#include "model/DescribeReplicaUsageRequest.h"
#include "model/DescribeReplicaUsageResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/ModifyIntranetAttributeRequest.h"
#include "model/ModifyIntranetAttributeResult.h"
#include "model/ModifyInstanceSpecPreCheckRequest.h"
#include "model/ModifyInstanceSpecPreCheckResult.h"
#include "model/DescribeReplicaPerformanceRequest.h"
#include "model/DescribeReplicaPerformanceResult.h"
#include "model/DescribeMonitorItemsRequest.h"
#include "model/DescribeMonitorItemsResult.h"
#include "model/DescribeLogicInstanceTopologyRequest.h"
#include "model/DescribeLogicInstanceTopologyResult.h"
#include "model/DescribeCacheAnalysisReportRequest.h"
#include "model/DescribeCacheAnalysisReportResult.h"
#include "model/SetSnapshotSettingsRequest.h"
#include "model/SetSnapshotSettingsResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/SwitchTempInstanceRequest.h"
#include "model/SwitchTempInstanceResult.h"
#include "model/RestoreInstanceRequest.h"
#include "model/RestoreInstanceResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeParameterModificationHistoryRequest.h"
#include "model/DescribeParameterModificationHistoryResult.h"
#include "model/DescribeInstanceSSLRequest.h"
#include "model/DescribeInstanceSSLResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/QueryTaskRequest.h"
#include "model/QueryTaskResult.h"
#include "model/RenewMultiInstanceRequest.h"
#include "model/RenewMultiInstanceResult.h"
#include "model/EvaluateFailOverSwitchRequest.h"
#include "model/EvaluateFailOverSwitchResult.h"
#include "model/ModifyGuardDomainModeRequest.h"
#include "model/ModifyGuardDomainModeResult.h"
#include "model/ModifyReplicaVerificationModeRequest.h"
#include "model/ModifyReplicaVerificationModeResult.h"
#include "model/GetSnapshotSettingsRequest.h"
#include "model/GetSnapshotSettingsResult.h"
#include "model/ModifyActiveOperationTaskRequest.h"
#include "model/ModifyActiveOperationTaskResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"


namespace AlibabaCloud
{
	namespace R_kvstore
	{
		class ALIBABACLOUD_R_KVSTORE_EXPORT R_kvstoreClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceMonitorResult> DescribeDBInstanceMonitorOutcome;
			typedef std::future<DescribeDBInstanceMonitorOutcome> DescribeDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeDBInstanceMonitorRequest&, const DescribeDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::SwitchNetworkResult> SwitchNetworkOutcome;
			typedef std::future<SwitchNetworkOutcome> SwitchNetworkOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SwitchNetworkRequest&, const SwitchNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificationResult> DescribeCertificationOutcome;
			typedef std::future<DescribeCertificationOutcome> DescribeCertificationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeCertificationRequest&, const DescribeCertificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificationAsyncHandler;
			typedef Outcome<Error, Model::ReleaseReplicaResult> ReleaseReplicaOutcome;
			typedef std::future<ReleaseReplicaOutcome> ReleaseReplicaOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ReleaseReplicaRequest&, const ReleaseReplicaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseReplicaAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskResult> DescribeActiveOperationTaskOutcome;
			typedef std::future<DescribeActiveOperationTaskOutcome> DescribeActiveOperationTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeActiveOperationTaskRequest&, const DescribeActiveOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaRecoveryModeResult> ModifyReplicaRecoveryModeOutcome;
			typedef std::future<ModifyReplicaRecoveryModeOutcome> ModifyReplicaRecoveryModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyReplicaRecoveryModeRequest&, const ModifyReplicaRecoveryModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaRecoveryModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicasResult> DescribeReplicasOutcome;
			typedef std::future<DescribeReplicasOutcome> DescribeReplicasOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeReplicasRequest&, const DescribeReplicasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicasAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaConflictInfoResult> DescribeReplicaConflictInfoOutcome;
			typedef std::future<DescribeReplicaConflictInfoOutcome> DescribeReplicaConflictInfoOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeReplicaConflictInfoRequest&, const DescribeReplicaConflictInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaConflictInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskCountResult> DescribeActiveOperationTaskCountOutcome;
			typedef std::future<DescribeActiveOperationTaskCountOutcome> DescribeActiveOperationTaskCountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeActiveOperationTaskCountRequest&, const DescribeActiveOperationTaskCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskCountAsyncHandler;
			typedef Outcome<Error, Model::ModifyCertificationResult> ModifyCertificationOutcome;
			typedef std::future<ModifyCertificationOutcome> ModifyCertificationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyCertificationRequest&, const ModifyCertificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificationAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryMonitorValuesResult> DescribeHistoryMonitorValuesOutcome;
			typedef std::future<DescribeHistoryMonitorValuesOutcome> DescribeHistoryMonitorValuesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeHistoryMonitorValuesRequest&, const DescribeHistoryMonitorValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryMonitorValuesAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMinorVersionResult> ModifyInstanceMinorVersionOutcome;
			typedef std::future<ModifyInstanceMinorVersionOutcome> ModifyInstanceMinorVersionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMinorVersionRequest&, const ModifyInstanceMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMinorVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMonitorResult> ModifyDBInstanceMonitorOutcome;
			typedef std::future<ModifyDBInstanceMonitorOutcome> ModifyDBInstanceMonitorOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyDBInstanceMonitorRequest&, const ModifyDBInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonthlyServiceStatusResult> DescribeMonthlyServiceStatusOutcome;
			typedef std::future<DescribeMonthlyServiceStatusOutcome> DescribeMonthlyServiceStatusOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeMonthlyServiceStatusRequest&, const DescribeMonthlyServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthlyServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaDescriptionResult> ModifyReplicaDescriptionOutcome;
			typedef std::future<ModifyReplicaDescriptionOutcome> ModifyReplicaDescriptionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyReplicaDescriptionRequest&, const ModifyReplicaDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaDescriptionAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaInitializeProgressResult> DescribeReplicaInitializeProgressOutcome;
			typedef std::future<DescribeReplicaInitializeProgressOutcome> DescribeReplicaInitializeProgressOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeReplicaInitializeProgressRequest&, const DescribeReplicaInitializeProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaInitializeProgressAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVpcAuthModeResult> ModifyInstanceVpcAuthModeOutcome;
			typedef std::future<ModifyInstanceVpcAuthModeOutcome> ModifyInstanceVpcAuthModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceVpcAuthModeRequest&, const ModifyInstanceVpcAuthModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVpcAuthModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonthlyServiceStatusDetailResult> DescribeMonthlyServiceStatusDetailOutcome;
			typedef std::future<DescribeMonthlyServiceStatusDetailOutcome> DescribeMonthlyServiceStatusDetailOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeMonthlyServiceStatusDetailRequest&, const DescribeMonthlyServiceStatusDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthlyServiceStatusDetailAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceConfigResult> DescribeInstanceConfigOutcome;
			typedef std::future<DescribeInstanceConfigOutcome> DescribeInstanceConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceConfigRequest&, const DescribeInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNetExpireTimeResult> ModifyInstanceNetExpireTimeOutcome;
			typedef std::future<ModifyInstanceNetExpireTimeOutcome> ModifyInstanceNetExpireTimeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceNetExpireTimeRequest&, const ModifyInstanceNetExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecResult> ModifyInstanceSpecOutcome;
			typedef std::future<ModifyInstanceSpecOutcome> ModifyInstanceSpecOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceSpecRequest&, const ModifyInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::CreateStaticVerificationResult> CreateStaticVerificationOutcome;
			typedef std::future<CreateStaticVerificationOutcome> CreateStaticVerificationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateStaticVerificationRequest&, const CreateStaticVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaticVerificationAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::VerifyPasswordResult> VerifyPasswordOutcome;
			typedef std::future<VerifyPasswordOutcome> VerifyPasswordOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::VerifyPasswordRequest&, const VerifyPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPasswordAsyncHandler;
			typedef Outcome<Error, Model::DeleteTempInstanceResult> DeleteTempInstanceOutcome;
			typedef std::future<DeleteTempInstanceOutcome> DeleteTempInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteTempInstanceRequest&, const DeleteTempInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTempInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskTypeResult> DescribeActiveOperationTaskTypeOutcome;
			typedef std::future<DescribeActiveOperationTaskTypeOutcome> DescribeActiveOperationTaskTypeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeActiveOperationTaskTypeRequest&, const DescribeActiveOperationTaskTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewalAttributeResult> ModifyInstanceAutoRenewalAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewalAttributeOutcome> ModifyInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceAutoRenewalAttributeRequest&, const ModifyInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditRecordsResult> DescribeAuditRecordsOutcome;
			typedef std::future<DescribeAuditRecordsOutcome> DescribeAuditRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeAuditRecordsRequest&, const DescribeAuditRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVpcsResult> DescribeRdsVpcsOutcome;
			typedef std::future<DescribeRdsVpcsOutcome> DescribeRdsVpcsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRdsVpcsRequest&, const DescribeRdsVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVpcsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMajorVersionResult> ModifyInstanceMajorVersionOutcome;
			typedef std::future<ModifyInstanceMajorVersionOutcome> ModifyInstanceMajorVersionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMajorVersionRequest&, const ModifyInstanceMajorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMajorVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAttributeResult> DescribeInstanceAttributeOutcome;
			typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceAttributeRequest&, const DescribeInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewalAttributeResult> DescribeInstanceAutoRenewalAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewalAttributeOutcome> DescribeInstanceAutoRenewalAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceAutoRenewalAttributeRequest&, const DescribeInstanceAutoRenewalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewalAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVSwitchsResult> DescribeRdsVSwitchsOutcome;
			typedef std::future<DescribeRdsVSwitchsOutcome> DescribeRdsVSwitchsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRdsVSwitchsRequest&, const DescribeRdsVSwitchsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVSwitchsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAttributeResult> ModifyInstanceAttributeOutcome;
			typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceAttributeRequest&, const ModifyInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditLogConfigResult> ModifyAuditLogConfigOutcome;
			typedef std::future<ModifyAuditLogConfigOutcome> ModifyAuditLogConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyAuditLogConfigRequest&, const ModifyAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeErrorLogRecordsResult> DescribeErrorLogRecordsOutcome;
			typedef std::future<DescribeErrorLogRecordsOutcome> DescribeErrorLogRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeErrorLogRecordsRequest&, const DescribeErrorLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerificationListResult> DescribeVerificationListOutcome;
			typedef std::future<DescribeVerificationListOutcome> DescribeVerificationListOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeVerificationListRequest&, const DescribeVerificationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerificationListAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaModeResult> ModifyReplicaModeOutcome;
			typedef std::future<ModifyReplicaModeOutcome> ModifyReplicaModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyReplicaModeRequest&, const ModifyReplicaModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyResult> DescribeStrategyOutcome;
			typedef std::future<DescribeStrategyOutcome> DescribeStrategyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeStrategyRequest&, const DescribeStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::TransformToPrePaidResult> TransformToPrePaidOutcome;
			typedef std::future<TransformToPrePaidOutcome> TransformToPrePaidOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::TransformToPrePaidRequest&, const TransformToPrePaidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformToPrePaidAsyncHandler;
			typedef Outcome<Error, Model::DescribeCacheAnalysisReportListResult> DescribeCacheAnalysisReportListOutcome;
			typedef std::future<DescribeCacheAnalysisReportListOutcome> DescribeCacheAnalysisReportListOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeCacheAnalysisReportListRequest&, const DescribeCacheAnalysisReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCacheAnalysisReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskRegionResult> DescribeActiveOperationTaskRegionOutcome;
			typedef std::future<DescribeActiveOperationTaskRegionOutcome> DescribeActiveOperationTaskRegionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeActiveOperationTaskRegionRequest&, const DescribeActiveOperationTaskRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskRegionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceConfigResult> ModifyInstanceConfigOutcome;
			typedef std::future<ModifyInstanceConfigOutcome> ModifyInstanceConfigOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceConfigRequest&, const ModifyInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::RestoreSnapshotResult> RestoreSnapshotOutcome;
			typedef std::future<RestoreSnapshotOutcome> RestoreSnapshotOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RestoreSnapshotRequest&, const RestoreSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntranetAttributeResult> DescribeIntranetAttributeOutcome;
			typedef std::future<DescribeIntranetAttributeOutcome> DescribeIntranetAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeIntranetAttributeRequest&, const DescribeIntranetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntranetAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateCacheAnalysisTaskResult> CreateCacheAnalysisTaskOutcome;
			typedef std::future<CreateCacheAnalysisTaskOutcome> CreateCacheAnalysisTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateCacheAnalysisTaskRequest&, const CreateCacheAnalysisTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCacheAnalysisTaskAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeResult> RevokeAccountPrivilegeOutcome;
			typedef std::future<RevokeAccountPrivilegeOutcome> RevokeAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RevokeAccountPrivilegeRequest&, const RevokeAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DestroyInstanceResult> DestroyInstanceOutcome;
			typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DestroyInstanceRequest&, const DestroyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRunningLogRecordsResult> DescribeRunningLogRecordsOutcome;
			typedef std::future<DescribeRunningLogRecordsOutcome> DescribeRunningLogRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRunningLogRecordsRequest&, const DescribeRunningLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunningLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStaticVerificationListResult> DescribeStaticVerificationListOutcome;
			typedef std::future<DescribeStaticVerificationListOutcome> DescribeStaticVerificationListOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeStaticVerificationListRequest&, const DescribeStaticVerificationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaticVerificationListAsyncHandler;
			typedef Outcome<Error, Model::CreateTempInstanceResult> CreateTempInstanceOutcome;
			typedef std::future<CreateTempInstanceOutcome> CreateTempInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateTempInstanceRequest&, const CreateTempInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTempInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnlinkReplicaInstanceResult> UnlinkReplicaInstanceOutcome;
			typedef std::future<UnlinkReplicaInstanceOutcome> UnlinkReplicaInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::UnlinkReplicaInstanceRequest&, const UnlinkReplicaInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlinkReplicaInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::FlushInstanceResult> FlushInstanceOutcome;
			typedef std::future<FlushInstanceOutcome> FlushInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::FlushInstanceRequest&, const FlushInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlushInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpsResult> DescribeSecurityIpsOutcome;
			typedef std::future<DescribeSecurityIpsOutcome> DescribeSecurityIpsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSecurityIpsRequest&, const DescribeSecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotSettingsResult> DeleteSnapshotSettingsOutcome;
			typedef std::future<DeleteSnapshotSettingsOutcome> DeleteSnapshotSettingsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteSnapshotSettingsRequest&, const DeleteSnapshotSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotSettingsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSSLResult> ModifyInstanceSSLOutcome;
			typedef std::future<ModifyInstanceSSLOutcome> ModifyInstanceSSLOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceSSLRequest&, const ModifyInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeTempInstanceResult> DescribeTempInstanceOutcome;
			typedef std::future<DescribeTempInstanceOutcome> DescribeTempInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeTempInstanceRequest&, const DescribeTempInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTempInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaRelationResult> ModifyReplicaRelationOutcome;
			typedef std::future<ModifyReplicaRelationOutcome> ModifyReplicaRelationOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyReplicaRelationRequest&, const ModifyReplicaRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaRelationAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesByExpireTimeResult> DescribeInstancesByExpireTimeOutcome;
			typedef std::future<DescribeInstancesByExpireTimeOutcome> DescribeInstancesByExpireTimeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstancesByExpireTimeRequest&, const DescribeInstancesByExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesByExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaUsageResult> DescribeReplicaUsageOutcome;
			typedef std::future<DescribeReplicaUsageOutcome> DescribeReplicaUsageOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeReplicaUsageRequest&, const DescribeReplicaUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaUsageAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::ModifyIntranetAttributeResult> ModifyIntranetAttributeOutcome;
			typedef std::future<ModifyIntranetAttributeOutcome> ModifyIntranetAttributeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyIntranetAttributeRequest&, const ModifyIntranetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntranetAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecPreCheckResult> ModifyInstanceSpecPreCheckOutcome;
			typedef std::future<ModifyInstanceSpecPreCheckOutcome> ModifyInstanceSpecPreCheckOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceSpecPreCheckRequest&, const ModifyInstanceSpecPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecPreCheckAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicaPerformanceResult> DescribeReplicaPerformanceOutcome;
			typedef std::future<DescribeReplicaPerformanceOutcome> DescribeReplicaPerformanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeReplicaPerformanceRequest&, const DescribeReplicaPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorItemsResult> DescribeMonitorItemsOutcome;
			typedef std::future<DescribeMonitorItemsOutcome> DescribeMonitorItemsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeMonitorItemsRequest&, const DescribeMonitorItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogicInstanceTopologyResult> DescribeLogicInstanceTopologyOutcome;
			typedef std::future<DescribeLogicInstanceTopologyOutcome> DescribeLogicInstanceTopologyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeLogicInstanceTopologyRequest&, const DescribeLogicInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogicInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::DescribeCacheAnalysisReportResult> DescribeCacheAnalysisReportOutcome;
			typedef std::future<DescribeCacheAnalysisReportOutcome> DescribeCacheAnalysisReportOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeCacheAnalysisReportRequest&, const DescribeCacheAnalysisReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCacheAnalysisReportAsyncHandler;
			typedef Outcome<Error, Model::SetSnapshotSettingsResult> SetSnapshotSettingsOutcome;
			typedef std::future<SetSnapshotSettingsOutcome> SetSnapshotSettingsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SetSnapshotSettingsRequest&, const SetSnapshotSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSnapshotSettingsAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::SwitchTempInstanceResult> SwitchTempInstanceOutcome;
			typedef std::future<SwitchTempInstanceOutcome> SwitchTempInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::SwitchTempInstanceRequest&, const SwitchTempInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchTempInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestoreInstanceResult> RestoreInstanceOutcome;
			typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RestoreInstanceRequest&, const RestoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterModificationHistoryResult> DescribeParameterModificationHistoryOutcome;
			typedef std::future<DescribeParameterModificationHistoryOutcome> DescribeParameterModificationHistoryOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeParameterModificationHistoryRequest&, const DescribeParameterModificationHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterModificationHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSSLResult> DescribeInstanceSSLOutcome;
			typedef std::future<DescribeInstanceSSLOutcome> DescribeInstanceSSLOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeInstanceSSLRequest&, const DescribeInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskResult> QueryTaskOutcome;
			typedef std::future<QueryTaskOutcome> QueryTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::QueryTaskRequest&, const QueryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskAsyncHandler;
			typedef Outcome<Error, Model::RenewMultiInstanceResult> RenewMultiInstanceOutcome;
			typedef std::future<RenewMultiInstanceOutcome> RenewMultiInstanceOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::RenewMultiInstanceRequest&, const RenewMultiInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewMultiInstanceAsyncHandler;
			typedef Outcome<Error, Model::EvaluateFailOverSwitchResult> EvaluateFailOverSwitchOutcome;
			typedef std::future<EvaluateFailOverSwitchOutcome> EvaluateFailOverSwitchOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::EvaluateFailOverSwitchRequest&, const EvaluateFailOverSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateFailOverSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyGuardDomainModeResult> ModifyGuardDomainModeOutcome;
			typedef std::future<ModifyGuardDomainModeOutcome> ModifyGuardDomainModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyGuardDomainModeRequest&, const ModifyGuardDomainModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGuardDomainModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicaVerificationModeResult> ModifyReplicaVerificationModeOutcome;
			typedef std::future<ModifyReplicaVerificationModeOutcome> ModifyReplicaVerificationModeOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyReplicaVerificationModeRequest&, const ModifyReplicaVerificationModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicaVerificationModeAsyncHandler;
			typedef Outcome<Error, Model::GetSnapshotSettingsResult> GetSnapshotSettingsOutcome;
			typedef std::future<GetSnapshotSettingsOutcome> GetSnapshotSettingsOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::GetSnapshotSettingsRequest&, const GetSnapshotSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSnapshotSettingsAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationTaskResult> ModifyActiveOperationTaskOutcome;
			typedef std::future<ModifyActiveOperationTaskOutcome> ModifyActiveOperationTaskOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::ModifyActiveOperationTaskRequest&, const ModifyActiveOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const R_kvstoreClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;

			R_kvstoreClient(const Credentials &credentials, const ClientConfiguration &configuration);
			R_kvstoreClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			R_kvstoreClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~R_kvstoreClient();
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			DescribeDBInstanceMonitorOutcome describeDBInstanceMonitor(const Model::DescribeDBInstanceMonitorRequest &request)const;
			void describeDBInstanceMonitorAsync(const Model::DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceMonitorOutcomeCallable describeDBInstanceMonitorCallable(const Model::DescribeDBInstanceMonitorRequest& request) const;
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			SwitchNetworkOutcome switchNetwork(const Model::SwitchNetworkRequest &request)const;
			void switchNetworkAsync(const Model::SwitchNetworkRequest& request, const SwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchNetworkOutcomeCallable switchNetworkCallable(const Model::SwitchNetworkRequest& request) const;
			DescribeCertificationOutcome describeCertification(const Model::DescribeCertificationRequest &request)const;
			void describeCertificationAsync(const Model::DescribeCertificationRequest& request, const DescribeCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificationOutcomeCallable describeCertificationCallable(const Model::DescribeCertificationRequest& request) const;
			ReleaseReplicaOutcome releaseReplica(const Model::ReleaseReplicaRequest &request)const;
			void releaseReplicaAsync(const Model::ReleaseReplicaRequest& request, const ReleaseReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseReplicaOutcomeCallable releaseReplicaCallable(const Model::ReleaseReplicaRequest& request) const;
			DescribeActiveOperationTaskOutcome describeActiveOperationTask(const Model::DescribeActiveOperationTaskRequest &request)const;
			void describeActiveOperationTaskAsync(const Model::DescribeActiveOperationTaskRequest& request, const DescribeActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskOutcomeCallable describeActiveOperationTaskCallable(const Model::DescribeActiveOperationTaskRequest& request) const;
			ModifyReplicaRecoveryModeOutcome modifyReplicaRecoveryMode(const Model::ModifyReplicaRecoveryModeRequest &request)const;
			void modifyReplicaRecoveryModeAsync(const Model::ModifyReplicaRecoveryModeRequest& request, const ModifyReplicaRecoveryModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicaRecoveryModeOutcomeCallable modifyReplicaRecoveryModeCallable(const Model::ModifyReplicaRecoveryModeRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			DescribeReplicasOutcome describeReplicas(const Model::DescribeReplicasRequest &request)const;
			void describeReplicasAsync(const Model::DescribeReplicasRequest& request, const DescribeReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicasOutcomeCallable describeReplicasCallable(const Model::DescribeReplicasRequest& request) const;
			DescribeReplicaConflictInfoOutcome describeReplicaConflictInfo(const Model::DescribeReplicaConflictInfoRequest &request)const;
			void describeReplicaConflictInfoAsync(const Model::DescribeReplicaConflictInfoRequest& request, const DescribeReplicaConflictInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicaConflictInfoOutcomeCallable describeReplicaConflictInfoCallable(const Model::DescribeReplicaConflictInfoRequest& request) const;
			DescribeActiveOperationTaskCountOutcome describeActiveOperationTaskCount(const Model::DescribeActiveOperationTaskCountRequest &request)const;
			void describeActiveOperationTaskCountAsync(const Model::DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskCountOutcomeCallable describeActiveOperationTaskCountCallable(const Model::DescribeActiveOperationTaskCountRequest& request) const;
			ModifyCertificationOutcome modifyCertification(const Model::ModifyCertificationRequest &request)const;
			void modifyCertificationAsync(const Model::ModifyCertificationRequest& request, const ModifyCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCertificationOutcomeCallable modifyCertificationCallable(const Model::ModifyCertificationRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			DescribeHistoryMonitorValuesOutcome describeHistoryMonitorValues(const Model::DescribeHistoryMonitorValuesRequest &request)const;
			void describeHistoryMonitorValuesAsync(const Model::DescribeHistoryMonitorValuesRequest& request, const DescribeHistoryMonitorValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryMonitorValuesOutcomeCallable describeHistoryMonitorValuesCallable(const Model::DescribeHistoryMonitorValuesRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ModifyInstanceMinorVersionOutcome modifyInstanceMinorVersion(const Model::ModifyInstanceMinorVersionRequest &request)const;
			void modifyInstanceMinorVersionAsync(const Model::ModifyInstanceMinorVersionRequest& request, const ModifyInstanceMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMinorVersionOutcomeCallable modifyInstanceMinorVersionCallable(const Model::ModifyInstanceMinorVersionRequest& request) const;
			ModifyDBInstanceMonitorOutcome modifyDBInstanceMonitor(const Model::ModifyDBInstanceMonitorRequest &request)const;
			void modifyDBInstanceMonitorAsync(const Model::ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMonitorOutcomeCallable modifyDBInstanceMonitorCallable(const Model::ModifyDBInstanceMonitorRequest& request) const;
			DescribeMonthlyServiceStatusOutcome describeMonthlyServiceStatus(const Model::DescribeMonthlyServiceStatusRequest &request)const;
			void describeMonthlyServiceStatusAsync(const Model::DescribeMonthlyServiceStatusRequest& request, const DescribeMonthlyServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonthlyServiceStatusOutcomeCallable describeMonthlyServiceStatusCallable(const Model::DescribeMonthlyServiceStatusRequest& request) const;
			ModifyReplicaDescriptionOutcome modifyReplicaDescription(const Model::ModifyReplicaDescriptionRequest &request)const;
			void modifyReplicaDescriptionAsync(const Model::ModifyReplicaDescriptionRequest& request, const ModifyReplicaDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicaDescriptionOutcomeCallable modifyReplicaDescriptionCallable(const Model::ModifyReplicaDescriptionRequest& request) const;
			DescribeReplicaInitializeProgressOutcome describeReplicaInitializeProgress(const Model::DescribeReplicaInitializeProgressRequest &request)const;
			void describeReplicaInitializeProgressAsync(const Model::DescribeReplicaInitializeProgressRequest& request, const DescribeReplicaInitializeProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicaInitializeProgressOutcomeCallable describeReplicaInitializeProgressCallable(const Model::DescribeReplicaInitializeProgressRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			ModifyInstanceVpcAuthModeOutcome modifyInstanceVpcAuthMode(const Model::ModifyInstanceVpcAuthModeRequest &request)const;
			void modifyInstanceVpcAuthModeAsync(const Model::ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVpcAuthModeOutcomeCallable modifyInstanceVpcAuthModeCallable(const Model::ModifyInstanceVpcAuthModeRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribeMonthlyServiceStatusDetailOutcome describeMonthlyServiceStatusDetail(const Model::DescribeMonthlyServiceStatusDetailRequest &request)const;
			void describeMonthlyServiceStatusDetailAsync(const Model::DescribeMonthlyServiceStatusDetailRequest& request, const DescribeMonthlyServiceStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonthlyServiceStatusDetailOutcomeCallable describeMonthlyServiceStatusDetailCallable(const Model::DescribeMonthlyServiceStatusDetailRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DescribeInstanceConfigOutcome describeInstanceConfig(const Model::DescribeInstanceConfigRequest &request)const;
			void describeInstanceConfigAsync(const Model::DescribeInstanceConfigRequest& request, const DescribeInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceConfigOutcomeCallable describeInstanceConfigCallable(const Model::DescribeInstanceConfigRequest& request) const;
			ModifyInstanceNetExpireTimeOutcome modifyInstanceNetExpireTime(const Model::ModifyInstanceNetExpireTimeRequest &request)const;
			void modifyInstanceNetExpireTimeAsync(const Model::ModifyInstanceNetExpireTimeRequest& request, const ModifyInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNetExpireTimeOutcomeCallable modifyInstanceNetExpireTimeCallable(const Model::ModifyInstanceNetExpireTimeRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			ModifyInstanceSpecOutcome modifyInstanceSpec(const Model::ModifyInstanceSpecRequest &request)const;
			void modifyInstanceSpecAsync(const Model::ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecOutcomeCallable modifyInstanceSpecCallable(const Model::ModifyInstanceSpecRequest& request) const;
			CreateStaticVerificationOutcome createStaticVerification(const Model::CreateStaticVerificationRequest &request)const;
			void createStaticVerificationAsync(const Model::CreateStaticVerificationRequest& request, const CreateStaticVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStaticVerificationOutcomeCallable createStaticVerificationCallable(const Model::CreateStaticVerificationRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			VerifyPasswordOutcome verifyPassword(const Model::VerifyPasswordRequest &request)const;
			void verifyPasswordAsync(const Model::VerifyPasswordRequest& request, const VerifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPasswordOutcomeCallable verifyPasswordCallable(const Model::VerifyPasswordRequest& request) const;
			DeleteTempInstanceOutcome deleteTempInstance(const Model::DeleteTempInstanceRequest &request)const;
			void deleteTempInstanceAsync(const Model::DeleteTempInstanceRequest& request, const DeleteTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTempInstanceOutcomeCallable deleteTempInstanceCallable(const Model::DeleteTempInstanceRequest& request) const;
			DescribeActiveOperationTaskTypeOutcome describeActiveOperationTaskType(const Model::DescribeActiveOperationTaskTypeRequest &request)const;
			void describeActiveOperationTaskTypeAsync(const Model::DescribeActiveOperationTaskTypeRequest& request, const DescribeActiveOperationTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskTypeOutcomeCallable describeActiveOperationTaskTypeCallable(const Model::DescribeActiveOperationTaskTypeRequest& request) const;
			ModifyInstanceAutoRenewalAttributeOutcome modifyInstanceAutoRenewalAttribute(const Model::ModifyInstanceAutoRenewalAttributeRequest &request)const;
			void modifyInstanceAutoRenewalAttributeAsync(const Model::ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewalAttributeOutcomeCallable modifyInstanceAutoRenewalAttributeCallable(const Model::ModifyInstanceAutoRenewalAttributeRequest& request) const;
			DescribeAuditRecordsOutcome describeAuditRecords(const Model::DescribeAuditRecordsRequest &request)const;
			void describeAuditRecordsAsync(const Model::DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditRecordsOutcomeCallable describeAuditRecordsCallable(const Model::DescribeAuditRecordsRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeRdsVpcsOutcome describeRdsVpcs(const Model::DescribeRdsVpcsRequest &request)const;
			void describeRdsVpcsAsync(const Model::DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVpcsOutcomeCallable describeRdsVpcsCallable(const Model::DescribeRdsVpcsRequest& request) const;
			ModifyInstanceMajorVersionOutcome modifyInstanceMajorVersion(const Model::ModifyInstanceMajorVersionRequest &request)const;
			void modifyInstanceMajorVersionAsync(const Model::ModifyInstanceMajorVersionRequest& request, const ModifyInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMajorVersionOutcomeCallable modifyInstanceMajorVersionCallable(const Model::ModifyInstanceMajorVersionRequest& request) const;
			DescribeInstanceAttributeOutcome describeInstanceAttribute(const Model::DescribeInstanceAttributeRequest &request)const;
			void describeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAttributeOutcomeCallable describeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;
			DescribeInstanceAutoRenewalAttributeOutcome describeInstanceAutoRenewalAttribute(const Model::DescribeInstanceAutoRenewalAttributeRequest &request)const;
			void describeInstanceAutoRenewalAttributeAsync(const Model::DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewalAttributeOutcomeCallable describeInstanceAutoRenewalAttributeCallable(const Model::DescribeInstanceAutoRenewalAttributeRequest& request) const;
			DescribeRdsVSwitchsOutcome describeRdsVSwitchs(const Model::DescribeRdsVSwitchsRequest &request)const;
			void describeRdsVSwitchsAsync(const Model::DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVSwitchsOutcomeCallable describeRdsVSwitchsCallable(const Model::DescribeRdsVSwitchsRequest& request) const;
			ModifyInstanceAttributeOutcome modifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request)const;
			void modifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAttributeOutcomeCallable modifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;
			ModifyAuditLogConfigOutcome modifyAuditLogConfig(const Model::ModifyAuditLogConfigRequest &request)const;
			void modifyAuditLogConfigAsync(const Model::ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditLogConfigOutcomeCallable modifyAuditLogConfigCallable(const Model::ModifyAuditLogConfigRequest& request) const;
			DescribeErrorLogRecordsOutcome describeErrorLogRecords(const Model::DescribeErrorLogRecordsRequest &request)const;
			void describeErrorLogRecordsAsync(const Model::DescribeErrorLogRecordsRequest& request, const DescribeErrorLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeErrorLogRecordsOutcomeCallable describeErrorLogRecordsCallable(const Model::DescribeErrorLogRecordsRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			DescribeVerificationListOutcome describeVerificationList(const Model::DescribeVerificationListRequest &request)const;
			void describeVerificationListAsync(const Model::DescribeVerificationListRequest& request, const DescribeVerificationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerificationListOutcomeCallable describeVerificationListCallable(const Model::DescribeVerificationListRequest& request) const;
			ModifyReplicaModeOutcome modifyReplicaMode(const Model::ModifyReplicaModeRequest &request)const;
			void modifyReplicaModeAsync(const Model::ModifyReplicaModeRequest& request, const ModifyReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicaModeOutcomeCallable modifyReplicaModeCallable(const Model::ModifyReplicaModeRequest& request) const;
			DescribeStrategyOutcome describeStrategy(const Model::DescribeStrategyRequest &request)const;
			void describeStrategyAsync(const Model::DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyOutcomeCallable describeStrategyCallable(const Model::DescribeStrategyRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			TransformToPrePaidOutcome transformToPrePaid(const Model::TransformToPrePaidRequest &request)const;
			void transformToPrePaidAsync(const Model::TransformToPrePaidRequest& request, const TransformToPrePaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformToPrePaidOutcomeCallable transformToPrePaidCallable(const Model::TransformToPrePaidRequest& request) const;
			DescribeCacheAnalysisReportListOutcome describeCacheAnalysisReportList(const Model::DescribeCacheAnalysisReportListRequest &request)const;
			void describeCacheAnalysisReportListAsync(const Model::DescribeCacheAnalysisReportListRequest& request, const DescribeCacheAnalysisReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCacheAnalysisReportListOutcomeCallable describeCacheAnalysisReportListCallable(const Model::DescribeCacheAnalysisReportListRequest& request) const;
			DescribeActiveOperationTaskRegionOutcome describeActiveOperationTaskRegion(const Model::DescribeActiveOperationTaskRegionRequest &request)const;
			void describeActiveOperationTaskRegionAsync(const Model::DescribeActiveOperationTaskRegionRequest& request, const DescribeActiveOperationTaskRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskRegionOutcomeCallable describeActiveOperationTaskRegionCallable(const Model::DescribeActiveOperationTaskRegionRequest& request) const;
			ModifyInstanceConfigOutcome modifyInstanceConfig(const Model::ModifyInstanceConfigRequest &request)const;
			void modifyInstanceConfigAsync(const Model::ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceConfigOutcomeCallable modifyInstanceConfigCallable(const Model::ModifyInstanceConfigRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			RestoreSnapshotOutcome restoreSnapshot(const Model::RestoreSnapshotRequest &request)const;
			void restoreSnapshotAsync(const Model::RestoreSnapshotRequest& request, const RestoreSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreSnapshotOutcomeCallable restoreSnapshotCallable(const Model::RestoreSnapshotRequest& request) const;
			DescribeIntranetAttributeOutcome describeIntranetAttribute(const Model::DescribeIntranetAttributeRequest &request)const;
			void describeIntranetAttributeAsync(const Model::DescribeIntranetAttributeRequest& request, const DescribeIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntranetAttributeOutcomeCallable describeIntranetAttributeCallable(const Model::DescribeIntranetAttributeRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateCacheAnalysisTaskOutcome createCacheAnalysisTask(const Model::CreateCacheAnalysisTaskRequest &request)const;
			void createCacheAnalysisTaskAsync(const Model::CreateCacheAnalysisTaskRequest& request, const CreateCacheAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCacheAnalysisTaskOutcomeCallable createCacheAnalysisTaskCallable(const Model::CreateCacheAnalysisTaskRequest& request) const;
			RevokeAccountPrivilegeOutcome revokeAccountPrivilege(const Model::RevokeAccountPrivilegeRequest &request)const;
			void revokeAccountPrivilegeAsync(const Model::RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeAccountPrivilegeOutcomeCallable revokeAccountPrivilegeCallable(const Model::RevokeAccountPrivilegeRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DestroyInstanceOutcome destroyInstance(const Model::DestroyInstanceRequest &request)const;
			void destroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyInstanceOutcomeCallable destroyInstanceCallable(const Model::DestroyInstanceRequest& request) const;
			DescribeRunningLogRecordsOutcome describeRunningLogRecords(const Model::DescribeRunningLogRecordsRequest &request)const;
			void describeRunningLogRecordsAsync(const Model::DescribeRunningLogRecordsRequest& request, const DescribeRunningLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRunningLogRecordsOutcomeCallable describeRunningLogRecordsCallable(const Model::DescribeRunningLogRecordsRequest& request) const;
			DescribeStaticVerificationListOutcome describeStaticVerificationList(const Model::DescribeStaticVerificationListRequest &request)const;
			void describeStaticVerificationListAsync(const Model::DescribeStaticVerificationListRequest& request, const DescribeStaticVerificationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStaticVerificationListOutcomeCallable describeStaticVerificationListCallable(const Model::DescribeStaticVerificationListRequest& request) const;
			CreateTempInstanceOutcome createTempInstance(const Model::CreateTempInstanceRequest &request)const;
			void createTempInstanceAsync(const Model::CreateTempInstanceRequest& request, const CreateTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTempInstanceOutcomeCallable createTempInstanceCallable(const Model::CreateTempInstanceRequest& request) const;
			UnlinkReplicaInstanceOutcome unlinkReplicaInstance(const Model::UnlinkReplicaInstanceRequest &request)const;
			void unlinkReplicaInstanceAsync(const Model::UnlinkReplicaInstanceRequest& request, const UnlinkReplicaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlinkReplicaInstanceOutcomeCallable unlinkReplicaInstanceCallable(const Model::UnlinkReplicaInstanceRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			FlushInstanceOutcome flushInstance(const Model::FlushInstanceRequest &request)const;
			void flushInstanceAsync(const Model::FlushInstanceRequest& request, const FlushInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlushInstanceOutcomeCallable flushInstanceCallable(const Model::FlushInstanceRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeSecurityIpsOutcome describeSecurityIps(const Model::DescribeSecurityIpsRequest &request)const;
			void describeSecurityIpsAsync(const Model::DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIpsOutcomeCallable describeSecurityIpsCallable(const Model::DescribeSecurityIpsRequest& request) const;
			DeleteSnapshotSettingsOutcome deleteSnapshotSettings(const Model::DeleteSnapshotSettingsRequest &request)const;
			void deleteSnapshotSettingsAsync(const Model::DeleteSnapshotSettingsRequest& request, const DeleteSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotSettingsOutcomeCallable deleteSnapshotSettingsCallable(const Model::DeleteSnapshotSettingsRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ModifyInstanceSSLOutcome modifyInstanceSSL(const Model::ModifyInstanceSSLRequest &request)const;
			void modifyInstanceSSLAsync(const Model::ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSSLOutcomeCallable modifyInstanceSSLCallable(const Model::ModifyInstanceSSLRequest& request) const;
			DescribeTempInstanceOutcome describeTempInstance(const Model::DescribeTempInstanceRequest &request)const;
			void describeTempInstanceAsync(const Model::DescribeTempInstanceRequest& request, const DescribeTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTempInstanceOutcomeCallable describeTempInstanceCallable(const Model::DescribeTempInstanceRequest& request) const;
			ModifyReplicaRelationOutcome modifyReplicaRelation(const Model::ModifyReplicaRelationRequest &request)const;
			void modifyReplicaRelationAsync(const Model::ModifyReplicaRelationRequest& request, const ModifyReplicaRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicaRelationOutcomeCallable modifyReplicaRelationCallable(const Model::ModifyReplicaRelationRequest& request) const;
			DescribeInstancesByExpireTimeOutcome describeInstancesByExpireTime(const Model::DescribeInstancesByExpireTimeRequest &request)const;
			void describeInstancesByExpireTimeAsync(const Model::DescribeInstancesByExpireTimeRequest& request, const DescribeInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesByExpireTimeOutcomeCallable describeInstancesByExpireTimeCallable(const Model::DescribeInstancesByExpireTimeRequest& request) const;
			DescribeReplicaUsageOutcome describeReplicaUsage(const Model::DescribeReplicaUsageRequest &request)const;
			void describeReplicaUsageAsync(const Model::DescribeReplicaUsageRequest& request, const DescribeReplicaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicaUsageOutcomeCallable describeReplicaUsageCallable(const Model::DescribeReplicaUsageRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			ModifyIntranetAttributeOutcome modifyIntranetAttribute(const Model::ModifyIntranetAttributeRequest &request)const;
			void modifyIntranetAttributeAsync(const Model::ModifyIntranetAttributeRequest& request, const ModifyIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIntranetAttributeOutcomeCallable modifyIntranetAttributeCallable(const Model::ModifyIntranetAttributeRequest& request) const;
			ModifyInstanceSpecPreCheckOutcome modifyInstanceSpecPreCheck(const Model::ModifyInstanceSpecPreCheckRequest &request)const;
			void modifyInstanceSpecPreCheckAsync(const Model::ModifyInstanceSpecPreCheckRequest& request, const ModifyInstanceSpecPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecPreCheckOutcomeCallable modifyInstanceSpecPreCheckCallable(const Model::ModifyInstanceSpecPreCheckRequest& request) const;
			DescribeReplicaPerformanceOutcome describeReplicaPerformance(const Model::DescribeReplicaPerformanceRequest &request)const;
			void describeReplicaPerformanceAsync(const Model::DescribeReplicaPerformanceRequest& request, const DescribeReplicaPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicaPerformanceOutcomeCallable describeReplicaPerformanceCallable(const Model::DescribeReplicaPerformanceRequest& request) const;
			DescribeMonitorItemsOutcome describeMonitorItems(const Model::DescribeMonitorItemsRequest &request)const;
			void describeMonitorItemsAsync(const Model::DescribeMonitorItemsRequest& request, const DescribeMonitorItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorItemsOutcomeCallable describeMonitorItemsCallable(const Model::DescribeMonitorItemsRequest& request) const;
			DescribeLogicInstanceTopologyOutcome describeLogicInstanceTopology(const Model::DescribeLogicInstanceTopologyRequest &request)const;
			void describeLogicInstanceTopologyAsync(const Model::DescribeLogicInstanceTopologyRequest& request, const DescribeLogicInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogicInstanceTopologyOutcomeCallable describeLogicInstanceTopologyCallable(const Model::DescribeLogicInstanceTopologyRequest& request) const;
			DescribeCacheAnalysisReportOutcome describeCacheAnalysisReport(const Model::DescribeCacheAnalysisReportRequest &request)const;
			void describeCacheAnalysisReportAsync(const Model::DescribeCacheAnalysisReportRequest& request, const DescribeCacheAnalysisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCacheAnalysisReportOutcomeCallable describeCacheAnalysisReportCallable(const Model::DescribeCacheAnalysisReportRequest& request) const;
			SetSnapshotSettingsOutcome setSnapshotSettings(const Model::SetSnapshotSettingsRequest &request)const;
			void setSnapshotSettingsAsync(const Model::SetSnapshotSettingsRequest& request, const SetSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSnapshotSettingsOutcomeCallable setSnapshotSettingsCallable(const Model::SetSnapshotSettingsRequest& request) const;
			ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
			void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
			SwitchTempInstanceOutcome switchTempInstance(const Model::SwitchTempInstanceRequest &request)const;
			void switchTempInstanceAsync(const Model::SwitchTempInstanceRequest& request, const SwitchTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchTempInstanceOutcomeCallable switchTempInstanceCallable(const Model::SwitchTempInstanceRequest& request) const;
			RestoreInstanceOutcome restoreInstance(const Model::RestoreInstanceRequest &request)const;
			void restoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreInstanceOutcomeCallable restoreInstanceCallable(const Model::RestoreInstanceRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeParameterModificationHistoryOutcome describeParameterModificationHistory(const Model::DescribeParameterModificationHistoryRequest &request)const;
			void describeParameterModificationHistoryAsync(const Model::DescribeParameterModificationHistoryRequest& request, const DescribeParameterModificationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterModificationHistoryOutcomeCallable describeParameterModificationHistoryCallable(const Model::DescribeParameterModificationHistoryRequest& request) const;
			DescribeInstanceSSLOutcome describeInstanceSSL(const Model::DescribeInstanceSSLRequest &request)const;
			void describeInstanceSSLAsync(const Model::DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSSLOutcomeCallable describeInstanceSSLCallable(const Model::DescribeInstanceSSLRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			QueryTaskOutcome queryTask(const Model::QueryTaskRequest &request)const;
			void queryTaskAsync(const Model::QueryTaskRequest& request, const QueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskOutcomeCallable queryTaskCallable(const Model::QueryTaskRequest& request) const;
			RenewMultiInstanceOutcome renewMultiInstance(const Model::RenewMultiInstanceRequest &request)const;
			void renewMultiInstanceAsync(const Model::RenewMultiInstanceRequest& request, const RenewMultiInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewMultiInstanceOutcomeCallable renewMultiInstanceCallable(const Model::RenewMultiInstanceRequest& request) const;
			EvaluateFailOverSwitchOutcome evaluateFailOverSwitch(const Model::EvaluateFailOverSwitchRequest &request)const;
			void evaluateFailOverSwitchAsync(const Model::EvaluateFailOverSwitchRequest& request, const EvaluateFailOverSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateFailOverSwitchOutcomeCallable evaluateFailOverSwitchCallable(const Model::EvaluateFailOverSwitchRequest& request) const;
			ModifyGuardDomainModeOutcome modifyGuardDomainMode(const Model::ModifyGuardDomainModeRequest &request)const;
			void modifyGuardDomainModeAsync(const Model::ModifyGuardDomainModeRequest& request, const ModifyGuardDomainModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGuardDomainModeOutcomeCallable modifyGuardDomainModeCallable(const Model::ModifyGuardDomainModeRequest& request) const;
			ModifyReplicaVerificationModeOutcome modifyReplicaVerificationMode(const Model::ModifyReplicaVerificationModeRequest &request)const;
			void modifyReplicaVerificationModeAsync(const Model::ModifyReplicaVerificationModeRequest& request, const ModifyReplicaVerificationModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicaVerificationModeOutcomeCallable modifyReplicaVerificationModeCallable(const Model::ModifyReplicaVerificationModeRequest& request) const;
			GetSnapshotSettingsOutcome getSnapshotSettings(const Model::GetSnapshotSettingsRequest &request)const;
			void getSnapshotSettingsAsync(const Model::GetSnapshotSettingsRequest& request, const GetSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSnapshotSettingsOutcomeCallable getSnapshotSettingsCallable(const Model::GetSnapshotSettingsRequest& request) const;
			ModifyActiveOperationTaskOutcome modifyActiveOperationTask(const Model::ModifyActiveOperationTaskRequest &request)const;
			void modifyActiveOperationTaskAsync(const Model::ModifyActiveOperationTaskRequest& request, const ModifyActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationTaskOutcomeCallable modifyActiveOperationTaskCallable(const Model::ModifyActiveOperationTaskRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_R_KVSTORE_R_KVSTORECLIENT_H_
