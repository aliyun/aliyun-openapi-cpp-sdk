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

#ifndef ALIBABACLOUD_NAS_NASCLIENT_H_
#define ALIBABACLOUD_NAS_NASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "NASExport.h"
#include "model/AddClientToBlackListRequest.h"
#include "model/AddClientToBlackListResult.h"
#include "model/AddTagsRequest.h"
#include "model/AddTagsResult.h"
#include "model/ApplyAutoSnapshotPolicyRequest.h"
#include "model/ApplyAutoSnapshotPolicyResult.h"
#include "model/ApplyDataFlowAutoRefreshRequest.h"
#include "model/ApplyDataFlowAutoRefreshResult.h"
#include "model/CancelAutoSnapshotPolicyRequest.h"
#include "model/CancelAutoSnapshotPolicyResult.h"
#include "model/CancelDataFlowAutoRefreshRequest.h"
#include "model/CancelDataFlowAutoRefreshResult.h"
#include "model/CancelDataFlowSubTaskRequest.h"
#include "model/CancelDataFlowSubTaskResult.h"
#include "model/CancelDataFlowTaskRequest.h"
#include "model/CancelDataFlowTaskResult.h"
#include "model/CancelDirQuotaRequest.h"
#include "model/CancelDirQuotaResult.h"
#include "model/CancelFilesetQuotaRequest.h"
#include "model/CancelFilesetQuotaResult.h"
#include "model/CancelLifecycleRetrieveJobRequest.h"
#include "model/CancelLifecycleRetrieveJobResult.h"
#include "model/CancelRecycleBinJobRequest.h"
#include "model/CancelRecycleBinJobResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CreateAccessGroupRequest.h"
#include "model/CreateAccessGroupResult.h"
#include "model/CreateAccessPointRequest.h"
#include "model/CreateAccessPointResult.h"
#include "model/CreateAccessRuleRequest.h"
#include "model/CreateAccessRuleResult.h"
#include "model/CreateAutoSnapshotPolicyRequest.h"
#include "model/CreateAutoSnapshotPolicyResult.h"
#include "model/CreateDataFlowRequest.h"
#include "model/CreateDataFlowResult.h"
#include "model/CreateDataFlowSubTaskRequest.h"
#include "model/CreateDataFlowSubTaskResult.h"
#include "model/CreateDataFlowTaskRequest.h"
#include "model/CreateDataFlowTaskResult.h"
#include "model/CreateDirRequest.h"
#include "model/CreateDirResult.h"
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateFileSystemRequest.h"
#include "model/CreateFileSystemResult.h"
#include "model/CreateFilesetRequest.h"
#include "model/CreateFilesetResult.h"
#include "model/CreateLDAPConfigRequest.h"
#include "model/CreateLDAPConfigResult.h"
#include "model/CreateLifecyclePolicyRequest.h"
#include "model/CreateLifecyclePolicyResult.h"
#include "model/CreateLifecycleRetrieveJobRequest.h"
#include "model/CreateLifecycleRetrieveJobResult.h"
#include "model/CreateLogAnalysisRequest.h"
#include "model/CreateLogAnalysisResult.h"
#include "model/CreateMountTargetRequest.h"
#include "model/CreateMountTargetResult.h"
#include "model/CreateProtocolMountTargetRequest.h"
#include "model/CreateProtocolMountTargetResult.h"
#include "model/CreateProtocolServiceRequest.h"
#include "model/CreateProtocolServiceResult.h"
#include "model/CreateRecycleBinDeleteJobRequest.h"
#include "model/CreateRecycleBinDeleteJobResult.h"
#include "model/CreateRecycleBinRestoreJobRequest.h"
#include "model/CreateRecycleBinRestoreJobResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DeleteAccessGroupRequest.h"
#include "model/DeleteAccessGroupResult.h"
#include "model/DeleteAccessPointRequest.h"
#include "model/DeleteAccessPointResult.h"
#include "model/DeleteAccessRuleRequest.h"
#include "model/DeleteAccessRuleResult.h"
#include "model/DeleteAutoSnapshotPolicyRequest.h"
#include "model/DeleteAutoSnapshotPolicyResult.h"
#include "model/DeleteDataFlowRequest.h"
#include "model/DeleteDataFlowResult.h"
#include "model/DeleteFileSystemRequest.h"
#include "model/DeleteFileSystemResult.h"
#include "model/DeleteFilesetRequest.h"
#include "model/DeleteFilesetResult.h"
#include "model/DeleteLDAPConfigRequest.h"
#include "model/DeleteLDAPConfigResult.h"
#include "model/DeleteLifecyclePolicyRequest.h"
#include "model/DeleteLifecyclePolicyResult.h"
#include "model/DeleteLogAnalysisRequest.h"
#include "model/DeleteLogAnalysisResult.h"
#include "model/DeleteMountTargetRequest.h"
#include "model/DeleteMountTargetResult.h"
#include "model/DeleteProtocolMountTargetRequest.h"
#include "model/DeleteProtocolMountTargetResult.h"
#include "model/DeleteProtocolServiceRequest.h"
#include "model/DeleteProtocolServiceResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DescribeAccessGroupsRequest.h"
#include "model/DescribeAccessGroupsResult.h"
#include "model/DescribeAccessPointRequest.h"
#include "model/DescribeAccessPointResult.h"
#include "model/DescribeAccessPointsRequest.h"
#include "model/DescribeAccessPointsResult.h"
#include "model/DescribeAccessRulesRequest.h"
#include "model/DescribeAccessRulesResult.h"
#include "model/DescribeAutoSnapshotPoliciesRequest.h"
#include "model/DescribeAutoSnapshotPoliciesResult.h"
#include "model/DescribeAutoSnapshotTasksRequest.h"
#include "model/DescribeAutoSnapshotTasksResult.h"
#include "model/DescribeBlackListClientsRequest.h"
#include "model/DescribeBlackListClientsResult.h"
#include "model/DescribeDataFlowSubTasksRequest.h"
#include "model/DescribeDataFlowSubTasksResult.h"
#include "model/DescribeDataFlowTasksRequest.h"
#include "model/DescribeDataFlowTasksResult.h"
#include "model/DescribeDataFlowsRequest.h"
#include "model/DescribeDataFlowsResult.h"
#include "model/DescribeDirQuotasRequest.h"
#include "model/DescribeDirQuotasResult.h"
#include "model/DescribeFileSystemStatisticsRequest.h"
#include "model/DescribeFileSystemStatisticsResult.h"
#include "model/DescribeFileSystemsRequest.h"
#include "model/DescribeFileSystemsResult.h"
#include "model/DescribeFilesetsRequest.h"
#include "model/DescribeFilesetsResult.h"
#include "model/DescribeLifecyclePoliciesRequest.h"
#include "model/DescribeLifecyclePoliciesResult.h"
#include "model/DescribeLogAnalysisRequest.h"
#include "model/DescribeLogAnalysisResult.h"
#include "model/DescribeMountTargetsRequest.h"
#include "model/DescribeMountTargetsResult.h"
#include "model/DescribeMountedClientsRequest.h"
#include "model/DescribeMountedClientsResult.h"
#include "model/DescribeNfsAclRequest.h"
#include "model/DescribeNfsAclResult.h"
#include "model/DescribeProtocolMountTargetRequest.h"
#include "model/DescribeProtocolMountTargetResult.h"
#include "model/DescribeProtocolServiceRequest.h"
#include "model/DescribeProtocolServiceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSmbAclRequest.h"
#include "model/DescribeSmbAclResult.h"
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
#include "model/DescribeStoragePackagesRequest.h"
#include "model/DescribeStoragePackagesResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DisableAndCleanRecycleBinRequest.h"
#include "model/DisableAndCleanRecycleBinResult.h"
#include "model/DisableNfsAclRequest.h"
#include "model/DisableNfsAclResult.h"
#include "model/DisableSmbAclRequest.h"
#include "model/DisableSmbAclResult.h"
#include "model/EnableNfsAclRequest.h"
#include "model/EnableNfsAclResult.h"
#include "model/EnableRecycleBinRequest.h"
#include "model/EnableRecycleBinResult.h"
#include "model/EnableSmbAclRequest.h"
#include "model/EnableSmbAclResult.h"
#include "model/GetDirectoryOrFilePropertiesRequest.h"
#include "model/GetDirectoryOrFilePropertiesResult.h"
#include "model/GetRecycleBinAttributeRequest.h"
#include "model/GetRecycleBinAttributeResult.h"
#include "model/ListDirectoriesAndFilesRequest.h"
#include "model/ListDirectoriesAndFilesResult.h"
#include "model/ListLifecycleRetrieveJobsRequest.h"
#include "model/ListLifecycleRetrieveJobsResult.h"
#include "model/ListRecentlyRecycledDirectoriesRequest.h"
#include "model/ListRecentlyRecycledDirectoriesResult.h"
#include "model/ListRecycleBinJobsRequest.h"
#include "model/ListRecycleBinJobsResult.h"
#include "model/ListRecycledDirectoriesAndFilesRequest.h"
#include "model/ListRecycledDirectoriesAndFilesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyAccessGroupRequest.h"
#include "model/ModifyAccessGroupResult.h"
#include "model/ModifyAccessPointRequest.h"
#include "model/ModifyAccessPointResult.h"
#include "model/ModifyAccessRuleRequest.h"
#include "model/ModifyAccessRuleResult.h"
#include "model/ModifyAutoSnapshotPolicyRequest.h"
#include "model/ModifyAutoSnapshotPolicyResult.h"
#include "model/ModifyDataFlowRequest.h"
#include "model/ModifyDataFlowResult.h"
#include "model/ModifyDataFlowAutoRefreshRequest.h"
#include "model/ModifyDataFlowAutoRefreshResult.h"
#include "model/ModifyFileSystemRequest.h"
#include "model/ModifyFileSystemResult.h"
#include "model/ModifyFilesetRequest.h"
#include "model/ModifyFilesetResult.h"
#include "model/ModifyLDAPConfigRequest.h"
#include "model/ModifyLDAPConfigResult.h"
#include "model/ModifyLifecyclePolicyRequest.h"
#include "model/ModifyLifecyclePolicyResult.h"
#include "model/ModifyMountTargetRequest.h"
#include "model/ModifyMountTargetResult.h"
#include "model/ModifyProtocolMountTargetRequest.h"
#include "model/ModifyProtocolMountTargetResult.h"
#include "model/ModifyProtocolServiceRequest.h"
#include "model/ModifyProtocolServiceResult.h"
#include "model/ModifySmbAclRequest.h"
#include "model/ModifySmbAclResult.h"
#include "model/OpenNASServiceRequest.h"
#include "model/OpenNASServiceResult.h"
#include "model/RemoveClientFromBlackListRequest.h"
#include "model/RemoveClientFromBlackListResult.h"
#include "model/RemoveTagsRequest.h"
#include "model/RemoveTagsResult.h"
#include "model/ResetFileSystemRequest.h"
#include "model/ResetFileSystemResult.h"
#include "model/RetryLifecycleRetrieveJobRequest.h"
#include "model/RetryLifecycleRetrieveJobResult.h"
#include "model/SetDirQuotaRequest.h"
#include "model/SetDirQuotaResult.h"
#include "model/SetFilesetQuotaRequest.h"
#include "model/SetFilesetQuotaResult.h"
#include "model/StartDataFlowRequest.h"
#include "model/StartDataFlowResult.h"
#include "model/StopDataFlowRequest.h"
#include "model/StopDataFlowResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateRecycleBinAttributeRequest.h"
#include "model/UpdateRecycleBinAttributeResult.h"
#include "model/UpgradeFileSystemRequest.h"
#include "model/UpgradeFileSystemResult.h"


namespace AlibabaCloud
{
	namespace NAS
	{
		class ALIBABACLOUD_NAS_EXPORT NASClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddClientToBlackListResult> AddClientToBlackListOutcome;
			typedef std::future<AddClientToBlackListOutcome> AddClientToBlackListOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::AddClientToBlackListRequest&, const AddClientToBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClientToBlackListAsyncHandler;
			typedef Outcome<Error, Model::AddTagsResult> AddTagsOutcome;
			typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::AddTagsRequest&, const AddTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsAsyncHandler;
			typedef Outcome<Error, Model::ApplyAutoSnapshotPolicyResult> ApplyAutoSnapshotPolicyOutcome;
			typedef std::future<ApplyAutoSnapshotPolicyOutcome> ApplyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ApplyAutoSnapshotPolicyRequest&, const ApplyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ApplyDataFlowAutoRefreshResult> ApplyDataFlowAutoRefreshOutcome;
			typedef std::future<ApplyDataFlowAutoRefreshOutcome> ApplyDataFlowAutoRefreshOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ApplyDataFlowAutoRefreshRequest&, const ApplyDataFlowAutoRefreshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyDataFlowAutoRefreshAsyncHandler;
			typedef Outcome<Error, Model::CancelAutoSnapshotPolicyResult> CancelAutoSnapshotPolicyOutcome;
			typedef std::future<CancelAutoSnapshotPolicyOutcome> CancelAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelAutoSnapshotPolicyRequest&, const CancelAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::CancelDataFlowAutoRefreshResult> CancelDataFlowAutoRefreshOutcome;
			typedef std::future<CancelDataFlowAutoRefreshOutcome> CancelDataFlowAutoRefreshOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelDataFlowAutoRefreshRequest&, const CancelDataFlowAutoRefreshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDataFlowAutoRefreshAsyncHandler;
			typedef Outcome<Error, Model::CancelDataFlowSubTaskResult> CancelDataFlowSubTaskOutcome;
			typedef std::future<CancelDataFlowSubTaskOutcome> CancelDataFlowSubTaskOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelDataFlowSubTaskRequest&, const CancelDataFlowSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDataFlowSubTaskAsyncHandler;
			typedef Outcome<Error, Model::CancelDataFlowTaskResult> CancelDataFlowTaskOutcome;
			typedef std::future<CancelDataFlowTaskOutcome> CancelDataFlowTaskOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelDataFlowTaskRequest&, const CancelDataFlowTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDataFlowTaskAsyncHandler;
			typedef Outcome<Error, Model::CancelDirQuotaResult> CancelDirQuotaOutcome;
			typedef std::future<CancelDirQuotaOutcome> CancelDirQuotaOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelDirQuotaRequest&, const CancelDirQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDirQuotaAsyncHandler;
			typedef Outcome<Error, Model::CancelFilesetQuotaResult> CancelFilesetQuotaOutcome;
			typedef std::future<CancelFilesetQuotaOutcome> CancelFilesetQuotaOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelFilesetQuotaRequest&, const CancelFilesetQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelFilesetQuotaAsyncHandler;
			typedef Outcome<Error, Model::CancelLifecycleRetrieveJobResult> CancelLifecycleRetrieveJobOutcome;
			typedef std::future<CancelLifecycleRetrieveJobOutcome> CancelLifecycleRetrieveJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelLifecycleRetrieveJobRequest&, const CancelLifecycleRetrieveJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelLifecycleRetrieveJobAsyncHandler;
			typedef Outcome<Error, Model::CancelRecycleBinJobResult> CancelRecycleBinJobOutcome;
			typedef std::future<CancelRecycleBinJobOutcome> CancelRecycleBinJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CancelRecycleBinJobRequest&, const CancelRecycleBinJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelRecycleBinJobAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessGroupResult> CreateAccessGroupOutcome;
			typedef std::future<CreateAccessGroupOutcome> CreateAccessGroupOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateAccessGroupRequest&, const CreateAccessGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessPointResult> CreateAccessPointOutcome;
			typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateAccessPointRequest&, const CreateAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessPointAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessRuleResult> CreateAccessRuleOutcome;
			typedef std::future<CreateAccessRuleOutcome> CreateAccessRuleOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateAccessRuleRequest&, const CreateAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoSnapshotPolicyResult> CreateAutoSnapshotPolicyOutcome;
			typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateAutoSnapshotPolicyRequest&, const CreateAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateDataFlowResult> CreateDataFlowOutcome;
			typedef std::future<CreateDataFlowOutcome> CreateDataFlowOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateDataFlowRequest&, const CreateDataFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateDataFlowSubTaskResult> CreateDataFlowSubTaskOutcome;
			typedef std::future<CreateDataFlowSubTaskOutcome> CreateDataFlowSubTaskOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateDataFlowSubTaskRequest&, const CreateDataFlowSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataFlowSubTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDataFlowTaskResult> CreateDataFlowTaskOutcome;
			typedef std::future<CreateDataFlowTaskOutcome> CreateDataFlowTaskOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateDataFlowTaskRequest&, const CreateDataFlowTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataFlowTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDirResult> CreateDirOutcome;
			typedef std::future<CreateDirOutcome> CreateDirOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateDirRequest&, const CreateDirOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirAsyncHandler;
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateFileSystemResult> CreateFileSystemOutcome;
			typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateFileSystemRequest&, const CreateFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
			typedef Outcome<Error, Model::CreateFilesetResult> CreateFilesetOutcome;
			typedef std::future<CreateFilesetOutcome> CreateFilesetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateFilesetRequest&, const CreateFilesetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFilesetAsyncHandler;
			typedef Outcome<Error, Model::CreateLDAPConfigResult> CreateLDAPConfigOutcome;
			typedef std::future<CreateLDAPConfigOutcome> CreateLDAPConfigOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateLDAPConfigRequest&, const CreateLDAPConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLDAPConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateLifecyclePolicyResult> CreateLifecyclePolicyOutcome;
			typedef std::future<CreateLifecyclePolicyOutcome> CreateLifecyclePolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateLifecyclePolicyRequest&, const CreateLifecyclePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecyclePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateLifecycleRetrieveJobResult> CreateLifecycleRetrieveJobOutcome;
			typedef std::future<CreateLifecycleRetrieveJobOutcome> CreateLifecycleRetrieveJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateLifecycleRetrieveJobRequest&, const CreateLifecycleRetrieveJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleRetrieveJobAsyncHandler;
			typedef Outcome<Error, Model::CreateLogAnalysisResult> CreateLogAnalysisOutcome;
			typedef std::future<CreateLogAnalysisOutcome> CreateLogAnalysisOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateLogAnalysisRequest&, const CreateLogAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogAnalysisAsyncHandler;
			typedef Outcome<Error, Model::CreateMountTargetResult> CreateMountTargetOutcome;
			typedef std::future<CreateMountTargetOutcome> CreateMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateMountTargetRequest&, const CreateMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountTargetAsyncHandler;
			typedef Outcome<Error, Model::CreateProtocolMountTargetResult> CreateProtocolMountTargetOutcome;
			typedef std::future<CreateProtocolMountTargetOutcome> CreateProtocolMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateProtocolMountTargetRequest&, const CreateProtocolMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtocolMountTargetAsyncHandler;
			typedef Outcome<Error, Model::CreateProtocolServiceResult> CreateProtocolServiceOutcome;
			typedef std::future<CreateProtocolServiceOutcome> CreateProtocolServiceOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateProtocolServiceRequest&, const CreateProtocolServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtocolServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateRecycleBinDeleteJobResult> CreateRecycleBinDeleteJobOutcome;
			typedef std::future<CreateRecycleBinDeleteJobOutcome> CreateRecycleBinDeleteJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateRecycleBinDeleteJobRequest&, const CreateRecycleBinDeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecycleBinDeleteJobAsyncHandler;
			typedef Outcome<Error, Model::CreateRecycleBinRestoreJobResult> CreateRecycleBinRestoreJobOutcome;
			typedef std::future<CreateRecycleBinRestoreJobOutcome> CreateRecycleBinRestoreJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateRecycleBinRestoreJobRequest&, const CreateRecycleBinRestoreJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecycleBinRestoreJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessGroupResult> DeleteAccessGroupOutcome;
			typedef std::future<DeleteAccessGroupOutcome> DeleteAccessGroupOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteAccessGroupRequest&, const DeleteAccessGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessPointResult> DeleteAccessPointOutcome;
			typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteAccessPointRequest&, const DeleteAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessPointAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessRuleResult> DeleteAccessRuleOutcome;
			typedef std::future<DeleteAccessRuleOutcome> DeleteAccessRuleOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteAccessRuleRequest&, const DeleteAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoSnapshotPolicyResult> DeleteAutoSnapshotPolicyOutcome;
			typedef std::future<DeleteAutoSnapshotPolicyOutcome> DeleteAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteAutoSnapshotPolicyRequest&, const DeleteAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataFlowResult> DeleteDataFlowOutcome;
			typedef std::future<DeleteDataFlowOutcome> DeleteDataFlowOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteDataFlowRequest&, const DeleteDataFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileSystemResult> DeleteFileSystemOutcome;
			typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteFileSystemRequest&, const DeleteFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSystemAsyncHandler;
			typedef Outcome<Error, Model::DeleteFilesetResult> DeleteFilesetOutcome;
			typedef std::future<DeleteFilesetOutcome> DeleteFilesetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteFilesetRequest&, const DeleteFilesetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilesetAsyncHandler;
			typedef Outcome<Error, Model::DeleteLDAPConfigResult> DeleteLDAPConfigOutcome;
			typedef std::future<DeleteLDAPConfigOutcome> DeleteLDAPConfigOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteLDAPConfigRequest&, const DeleteLDAPConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLDAPConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLifecyclePolicyResult> DeleteLifecyclePolicyOutcome;
			typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteLifecyclePolicyRequest&, const DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecyclePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogAnalysisResult> DeleteLogAnalysisOutcome;
			typedef std::future<DeleteLogAnalysisOutcome> DeleteLogAnalysisOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteLogAnalysisRequest&, const DeleteLogAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogAnalysisAsyncHandler;
			typedef Outcome<Error, Model::DeleteMountTargetResult> DeleteMountTargetOutcome;
			typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteMountTargetRequest&, const DeleteMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountTargetAsyncHandler;
			typedef Outcome<Error, Model::DeleteProtocolMountTargetResult> DeleteProtocolMountTargetOutcome;
			typedef std::future<DeleteProtocolMountTargetOutcome> DeleteProtocolMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteProtocolMountTargetRequest&, const DeleteProtocolMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtocolMountTargetAsyncHandler;
			typedef Outcome<Error, Model::DeleteProtocolServiceResult> DeleteProtocolServiceOutcome;
			typedef std::future<DeleteProtocolServiceOutcome> DeleteProtocolServiceOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteProtocolServiceRequest&, const DeleteProtocolServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtocolServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessGroupsResult> DescribeAccessGroupsOutcome;
			typedef std::future<DescribeAccessGroupsOutcome> DescribeAccessGroupsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAccessGroupsRequest&, const DescribeAccessGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessPointResult> DescribeAccessPointOutcome;
			typedef std::future<DescribeAccessPointOutcome> DescribeAccessPointOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAccessPointRequest&, const DescribeAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessPointsResult> DescribeAccessPointsOutcome;
			typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAccessPointsRequest&, const DescribeAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessRulesResult> DescribeAccessRulesOutcome;
			typedef std::future<DescribeAccessRulesOutcome> DescribeAccessRulesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAccessRulesRequest&, const DescribeAccessRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoSnapshotPoliciesResult> DescribeAutoSnapshotPoliciesOutcome;
			typedef std::future<DescribeAutoSnapshotPoliciesOutcome> DescribeAutoSnapshotPoliciesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAutoSnapshotPoliciesRequest&, const DescribeAutoSnapshotPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoSnapshotTasksResult> DescribeAutoSnapshotTasksOutcome;
			typedef std::future<DescribeAutoSnapshotTasksOutcome> DescribeAutoSnapshotTasksOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeAutoSnapshotTasksRequest&, const DescribeAutoSnapshotTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBlackListClientsResult> DescribeBlackListClientsOutcome;
			typedef std::future<DescribeBlackListClientsOutcome> DescribeBlackListClientsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeBlackListClientsRequest&, const DescribeBlackListClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlackListClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataFlowSubTasksResult> DescribeDataFlowSubTasksOutcome;
			typedef std::future<DescribeDataFlowSubTasksOutcome> DescribeDataFlowSubTasksOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeDataFlowSubTasksRequest&, const DescribeDataFlowSubTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFlowSubTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataFlowTasksResult> DescribeDataFlowTasksOutcome;
			typedef std::future<DescribeDataFlowTasksOutcome> DescribeDataFlowTasksOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeDataFlowTasksRequest&, const DescribeDataFlowTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFlowTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataFlowsResult> DescribeDataFlowsOutcome;
			typedef std::future<DescribeDataFlowsOutcome> DescribeDataFlowsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeDataFlowsRequest&, const DescribeDataFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFlowsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDirQuotasResult> DescribeDirQuotasOutcome;
			typedef std::future<DescribeDirQuotasOutcome> DescribeDirQuotasOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeDirQuotasRequest&, const DescribeDirQuotasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirQuotasAsyncHandler;
			typedef Outcome<Error, Model::DescribeFileSystemStatisticsResult> DescribeFileSystemStatisticsOutcome;
			typedef std::future<DescribeFileSystemStatisticsOutcome> DescribeFileSystemStatisticsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeFileSystemStatisticsRequest&, const DescribeFileSystemStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFileSystemsResult> DescribeFileSystemsOutcome;
			typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeFileSystemsRequest&, const DescribeFileSystemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFilesetsResult> DescribeFilesetsOutcome;
			typedef std::future<DescribeFilesetsOutcome> DescribeFilesetsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeFilesetsRequest&, const DescribeFilesetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilesetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLifecyclePoliciesResult> DescribeLifecyclePoliciesOutcome;
			typedef std::future<DescribeLifecyclePoliciesOutcome> DescribeLifecyclePoliciesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeLifecyclePoliciesRequest&, const DescribeLifecyclePoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecyclePoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogAnalysisResult> DescribeLogAnalysisOutcome;
			typedef std::future<DescribeLogAnalysisOutcome> DescribeLogAnalysisOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeLogAnalysisRequest&, const DescribeLogAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogAnalysisAsyncHandler;
			typedef Outcome<Error, Model::DescribeMountTargetsResult> DescribeMountTargetsOutcome;
			typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeMountTargetsRequest&, const DescribeMountTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountTargetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMountedClientsResult> DescribeMountedClientsOutcome;
			typedef std::future<DescribeMountedClientsOutcome> DescribeMountedClientsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeMountedClientsRequest&, const DescribeMountedClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountedClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNfsAclResult> DescribeNfsAclOutcome;
			typedef std::future<DescribeNfsAclOutcome> DescribeNfsAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeNfsAclRequest&, const DescribeNfsAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNfsAclAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtocolMountTargetResult> DescribeProtocolMountTargetOutcome;
			typedef std::future<DescribeProtocolMountTargetOutcome> DescribeProtocolMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeProtocolMountTargetRequest&, const DescribeProtocolMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtocolMountTargetAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtocolServiceResult> DescribeProtocolServiceOutcome;
			typedef std::future<DescribeProtocolServiceOutcome> DescribeProtocolServiceOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeProtocolServiceRequest&, const DescribeProtocolServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtocolServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmbAclResult> DescribeSmbAclOutcome;
			typedef std::future<DescribeSmbAclOutcome> DescribeSmbAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeSmbAclRequest&, const DescribeSmbAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmbAclAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoragePackagesResult> DescribeStoragePackagesOutcome;
			typedef std::future<DescribeStoragePackagesOutcome> DescribeStoragePackagesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeStoragePackagesRequest&, const DescribeStoragePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoragePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DisableAndCleanRecycleBinResult> DisableAndCleanRecycleBinOutcome;
			typedef std::future<DisableAndCleanRecycleBinOutcome> DisableAndCleanRecycleBinOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DisableAndCleanRecycleBinRequest&, const DisableAndCleanRecycleBinOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAndCleanRecycleBinAsyncHandler;
			typedef Outcome<Error, Model::DisableNfsAclResult> DisableNfsAclOutcome;
			typedef std::future<DisableNfsAclOutcome> DisableNfsAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DisableNfsAclRequest&, const DisableNfsAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableNfsAclAsyncHandler;
			typedef Outcome<Error, Model::DisableSmbAclResult> DisableSmbAclOutcome;
			typedef std::future<DisableSmbAclOutcome> DisableSmbAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::DisableSmbAclRequest&, const DisableSmbAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSmbAclAsyncHandler;
			typedef Outcome<Error, Model::EnableNfsAclResult> EnableNfsAclOutcome;
			typedef std::future<EnableNfsAclOutcome> EnableNfsAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::EnableNfsAclRequest&, const EnableNfsAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableNfsAclAsyncHandler;
			typedef Outcome<Error, Model::EnableRecycleBinResult> EnableRecycleBinOutcome;
			typedef std::future<EnableRecycleBinOutcome> EnableRecycleBinOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::EnableRecycleBinRequest&, const EnableRecycleBinOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRecycleBinAsyncHandler;
			typedef Outcome<Error, Model::EnableSmbAclResult> EnableSmbAclOutcome;
			typedef std::future<EnableSmbAclOutcome> EnableSmbAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::EnableSmbAclRequest&, const EnableSmbAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSmbAclAsyncHandler;
			typedef Outcome<Error, Model::GetDirectoryOrFilePropertiesResult> GetDirectoryOrFilePropertiesOutcome;
			typedef std::future<GetDirectoryOrFilePropertiesOutcome> GetDirectoryOrFilePropertiesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::GetDirectoryOrFilePropertiesRequest&, const GetDirectoryOrFilePropertiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDirectoryOrFilePropertiesAsyncHandler;
			typedef Outcome<Error, Model::GetRecycleBinAttributeResult> GetRecycleBinAttributeOutcome;
			typedef std::future<GetRecycleBinAttributeOutcome> GetRecycleBinAttributeOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::GetRecycleBinAttributeRequest&, const GetRecycleBinAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRecycleBinAttributeAsyncHandler;
			typedef Outcome<Error, Model::ListDirectoriesAndFilesResult> ListDirectoriesAndFilesOutcome;
			typedef std::future<ListDirectoriesAndFilesOutcome> ListDirectoriesAndFilesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListDirectoriesAndFilesRequest&, const ListDirectoriesAndFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDirectoriesAndFilesAsyncHandler;
			typedef Outcome<Error, Model::ListLifecycleRetrieveJobsResult> ListLifecycleRetrieveJobsOutcome;
			typedef std::future<ListLifecycleRetrieveJobsOutcome> ListLifecycleRetrieveJobsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListLifecycleRetrieveJobsRequest&, const ListLifecycleRetrieveJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLifecycleRetrieveJobsAsyncHandler;
			typedef Outcome<Error, Model::ListRecentlyRecycledDirectoriesResult> ListRecentlyRecycledDirectoriesOutcome;
			typedef std::future<ListRecentlyRecycledDirectoriesOutcome> ListRecentlyRecycledDirectoriesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListRecentlyRecycledDirectoriesRequest&, const ListRecentlyRecycledDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentlyRecycledDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::ListRecycleBinJobsResult> ListRecycleBinJobsOutcome;
			typedef std::future<ListRecycleBinJobsOutcome> ListRecycleBinJobsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListRecycleBinJobsRequest&, const ListRecycleBinJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecycleBinJobsAsyncHandler;
			typedef Outcome<Error, Model::ListRecycledDirectoriesAndFilesResult> ListRecycledDirectoriesAndFilesOutcome;
			typedef std::future<ListRecycledDirectoriesAndFilesOutcome> ListRecycledDirectoriesAndFilesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListRecycledDirectoriesAndFilesRequest&, const ListRecycledDirectoriesAndFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecycledDirectoriesAndFilesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessGroupResult> ModifyAccessGroupOutcome;
			typedef std::future<ModifyAccessGroupOutcome> ModifyAccessGroupOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyAccessGroupRequest&, const ModifyAccessGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessPointResult> ModifyAccessPointOutcome;
			typedef std::future<ModifyAccessPointOutcome> ModifyAccessPointOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyAccessPointRequest&, const ModifyAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessPointAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessRuleResult> ModifyAccessRuleOutcome;
			typedef std::future<ModifyAccessRuleOutcome> ModifyAccessRuleOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyAccessRuleRequest&, const ModifyAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoSnapshotPolicyResult> ModifyAutoSnapshotPolicyOutcome;
			typedef std::future<ModifyAutoSnapshotPolicyOutcome> ModifyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyAutoSnapshotPolicyRequest&, const ModifyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataFlowResult> ModifyDataFlowOutcome;
			typedef std::future<ModifyDataFlowOutcome> ModifyDataFlowOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyDataFlowRequest&, const ModifyDataFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataFlowAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataFlowAutoRefreshResult> ModifyDataFlowAutoRefreshOutcome;
			typedef std::future<ModifyDataFlowAutoRefreshOutcome> ModifyDataFlowAutoRefreshOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyDataFlowAutoRefreshRequest&, const ModifyDataFlowAutoRefreshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataFlowAutoRefreshAsyncHandler;
			typedef Outcome<Error, Model::ModifyFileSystemResult> ModifyFileSystemOutcome;
			typedef std::future<ModifyFileSystemOutcome> ModifyFileSystemOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyFileSystemRequest&, const ModifyFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAsyncHandler;
			typedef Outcome<Error, Model::ModifyFilesetResult> ModifyFilesetOutcome;
			typedef std::future<ModifyFilesetOutcome> ModifyFilesetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyFilesetRequest&, const ModifyFilesetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFilesetAsyncHandler;
			typedef Outcome<Error, Model::ModifyLDAPConfigResult> ModifyLDAPConfigOutcome;
			typedef std::future<ModifyLDAPConfigOutcome> ModifyLDAPConfigOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyLDAPConfigRequest&, const ModifyLDAPConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLDAPConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyLifecyclePolicyResult> ModifyLifecyclePolicyOutcome;
			typedef std::future<ModifyLifecyclePolicyOutcome> ModifyLifecyclePolicyOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyLifecyclePolicyRequest&, const ModifyLifecyclePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLifecyclePolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyMountTargetResult> ModifyMountTargetOutcome;
			typedef std::future<ModifyMountTargetOutcome> ModifyMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyMountTargetRequest&, const ModifyMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMountTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtocolMountTargetResult> ModifyProtocolMountTargetOutcome;
			typedef std::future<ModifyProtocolMountTargetOutcome> ModifyProtocolMountTargetOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyProtocolMountTargetRequest&, const ModifyProtocolMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtocolMountTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtocolServiceResult> ModifyProtocolServiceOutcome;
			typedef std::future<ModifyProtocolServiceOutcome> ModifyProtocolServiceOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifyProtocolServiceRequest&, const ModifyProtocolServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtocolServiceAsyncHandler;
			typedef Outcome<Error, Model::ModifySmbAclResult> ModifySmbAclOutcome;
			typedef std::future<ModifySmbAclOutcome> ModifySmbAclOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ModifySmbAclRequest&, const ModifySmbAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmbAclAsyncHandler;
			typedef Outcome<Error, Model::OpenNASServiceResult> OpenNASServiceOutcome;
			typedef std::future<OpenNASServiceOutcome> OpenNASServiceOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::OpenNASServiceRequest&, const OpenNASServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenNASServiceAsyncHandler;
			typedef Outcome<Error, Model::RemoveClientFromBlackListResult> RemoveClientFromBlackListOutcome;
			typedef std::future<RemoveClientFromBlackListOutcome> RemoveClientFromBlackListOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::RemoveClientFromBlackListRequest&, const RemoveClientFromBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClientFromBlackListAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsResult> RemoveTagsOutcome;
			typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::RemoveTagsRequest&, const RemoveTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsAsyncHandler;
			typedef Outcome<Error, Model::ResetFileSystemResult> ResetFileSystemOutcome;
			typedef std::future<ResetFileSystemOutcome> ResetFileSystemOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::ResetFileSystemRequest&, const ResetFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetFileSystemAsyncHandler;
			typedef Outcome<Error, Model::RetryLifecycleRetrieveJobResult> RetryLifecycleRetrieveJobOutcome;
			typedef std::future<RetryLifecycleRetrieveJobOutcome> RetryLifecycleRetrieveJobOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::RetryLifecycleRetrieveJobRequest&, const RetryLifecycleRetrieveJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryLifecycleRetrieveJobAsyncHandler;
			typedef Outcome<Error, Model::SetDirQuotaResult> SetDirQuotaOutcome;
			typedef std::future<SetDirQuotaOutcome> SetDirQuotaOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::SetDirQuotaRequest&, const SetDirQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDirQuotaAsyncHandler;
			typedef Outcome<Error, Model::SetFilesetQuotaResult> SetFilesetQuotaOutcome;
			typedef std::future<SetFilesetQuotaOutcome> SetFilesetQuotaOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::SetFilesetQuotaRequest&, const SetFilesetQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetFilesetQuotaAsyncHandler;
			typedef Outcome<Error, Model::StartDataFlowResult> StartDataFlowOutcome;
			typedef std::future<StartDataFlowOutcome> StartDataFlowOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::StartDataFlowRequest&, const StartDataFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDataFlowAsyncHandler;
			typedef Outcome<Error, Model::StopDataFlowResult> StopDataFlowOutcome;
			typedef std::future<StopDataFlowOutcome> StopDataFlowOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::StopDataFlowRequest&, const StopDataFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDataFlowAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateRecycleBinAttributeResult> UpdateRecycleBinAttributeOutcome;
			typedef std::future<UpdateRecycleBinAttributeOutcome> UpdateRecycleBinAttributeOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::UpdateRecycleBinAttributeRequest&, const UpdateRecycleBinAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecycleBinAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeFileSystemResult> UpgradeFileSystemOutcome;
			typedef std::future<UpgradeFileSystemOutcome> UpgradeFileSystemOutcomeCallable;
			typedef std::function<void(const NASClient*, const Model::UpgradeFileSystemRequest&, const UpgradeFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeFileSystemAsyncHandler;

			NASClient(const Credentials &credentials, const ClientConfiguration &configuration);
			NASClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			NASClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~NASClient();
			AddClientToBlackListOutcome addClientToBlackList(const Model::AddClientToBlackListRequest &request)const;
			void addClientToBlackListAsync(const Model::AddClientToBlackListRequest& request, const AddClientToBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClientToBlackListOutcomeCallable addClientToBlackListCallable(const Model::AddClientToBlackListRequest& request) const;
			AddTagsOutcome addTags(const Model::AddTagsRequest &request)const;
			void addTagsAsync(const Model::AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsOutcomeCallable addTagsCallable(const Model::AddTagsRequest& request) const;
			ApplyAutoSnapshotPolicyOutcome applyAutoSnapshotPolicy(const Model::ApplyAutoSnapshotPolicyRequest &request)const;
			void applyAutoSnapshotPolicyAsync(const Model::ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyAutoSnapshotPolicyOutcomeCallable applyAutoSnapshotPolicyCallable(const Model::ApplyAutoSnapshotPolicyRequest& request) const;
			ApplyDataFlowAutoRefreshOutcome applyDataFlowAutoRefresh(const Model::ApplyDataFlowAutoRefreshRequest &request)const;
			void applyDataFlowAutoRefreshAsync(const Model::ApplyDataFlowAutoRefreshRequest& request, const ApplyDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyDataFlowAutoRefreshOutcomeCallable applyDataFlowAutoRefreshCallable(const Model::ApplyDataFlowAutoRefreshRequest& request) const;
			CancelAutoSnapshotPolicyOutcome cancelAutoSnapshotPolicy(const Model::CancelAutoSnapshotPolicyRequest &request)const;
			void cancelAutoSnapshotPolicyAsync(const Model::CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAutoSnapshotPolicyOutcomeCallable cancelAutoSnapshotPolicyCallable(const Model::CancelAutoSnapshotPolicyRequest& request) const;
			CancelDataFlowAutoRefreshOutcome cancelDataFlowAutoRefresh(const Model::CancelDataFlowAutoRefreshRequest &request)const;
			void cancelDataFlowAutoRefreshAsync(const Model::CancelDataFlowAutoRefreshRequest& request, const CancelDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDataFlowAutoRefreshOutcomeCallable cancelDataFlowAutoRefreshCallable(const Model::CancelDataFlowAutoRefreshRequest& request) const;
			CancelDataFlowSubTaskOutcome cancelDataFlowSubTask(const Model::CancelDataFlowSubTaskRequest &request)const;
			void cancelDataFlowSubTaskAsync(const Model::CancelDataFlowSubTaskRequest& request, const CancelDataFlowSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDataFlowSubTaskOutcomeCallable cancelDataFlowSubTaskCallable(const Model::CancelDataFlowSubTaskRequest& request) const;
			CancelDataFlowTaskOutcome cancelDataFlowTask(const Model::CancelDataFlowTaskRequest &request)const;
			void cancelDataFlowTaskAsync(const Model::CancelDataFlowTaskRequest& request, const CancelDataFlowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDataFlowTaskOutcomeCallable cancelDataFlowTaskCallable(const Model::CancelDataFlowTaskRequest& request) const;
			CancelDirQuotaOutcome cancelDirQuota(const Model::CancelDirQuotaRequest &request)const;
			void cancelDirQuotaAsync(const Model::CancelDirQuotaRequest& request, const CancelDirQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDirQuotaOutcomeCallable cancelDirQuotaCallable(const Model::CancelDirQuotaRequest& request) const;
			CancelFilesetQuotaOutcome cancelFilesetQuota(const Model::CancelFilesetQuotaRequest &request)const;
			void cancelFilesetQuotaAsync(const Model::CancelFilesetQuotaRequest& request, const CancelFilesetQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelFilesetQuotaOutcomeCallable cancelFilesetQuotaCallable(const Model::CancelFilesetQuotaRequest& request) const;
			CancelLifecycleRetrieveJobOutcome cancelLifecycleRetrieveJob(const Model::CancelLifecycleRetrieveJobRequest &request)const;
			void cancelLifecycleRetrieveJobAsync(const Model::CancelLifecycleRetrieveJobRequest& request, const CancelLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelLifecycleRetrieveJobOutcomeCallable cancelLifecycleRetrieveJobCallable(const Model::CancelLifecycleRetrieveJobRequest& request) const;
			CancelRecycleBinJobOutcome cancelRecycleBinJob(const Model::CancelRecycleBinJobRequest &request)const;
			void cancelRecycleBinJobAsync(const Model::CancelRecycleBinJobRequest& request, const CancelRecycleBinJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelRecycleBinJobOutcomeCallable cancelRecycleBinJobCallable(const Model::CancelRecycleBinJobRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CreateAccessGroupOutcome createAccessGroup(const Model::CreateAccessGroupRequest &request)const;
			void createAccessGroupAsync(const Model::CreateAccessGroupRequest& request, const CreateAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessGroupOutcomeCallable createAccessGroupCallable(const Model::CreateAccessGroupRequest& request) const;
			CreateAccessPointOutcome createAccessPoint(const Model::CreateAccessPointRequest &request)const;
			void createAccessPointAsync(const Model::CreateAccessPointRequest& request, const CreateAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessPointOutcomeCallable createAccessPointCallable(const Model::CreateAccessPointRequest& request) const;
			CreateAccessRuleOutcome createAccessRule(const Model::CreateAccessRuleRequest &request)const;
			void createAccessRuleAsync(const Model::CreateAccessRuleRequest& request, const CreateAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessRuleOutcomeCallable createAccessRuleCallable(const Model::CreateAccessRuleRequest& request) const;
			CreateAutoSnapshotPolicyOutcome createAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request)const;
			void createAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoSnapshotPolicyOutcomeCallable createAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request) const;
			CreateDataFlowOutcome createDataFlow(const Model::CreateDataFlowRequest &request)const;
			void createDataFlowAsync(const Model::CreateDataFlowRequest& request, const CreateDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataFlowOutcomeCallable createDataFlowCallable(const Model::CreateDataFlowRequest& request) const;
			CreateDataFlowSubTaskOutcome createDataFlowSubTask(const Model::CreateDataFlowSubTaskRequest &request)const;
			void createDataFlowSubTaskAsync(const Model::CreateDataFlowSubTaskRequest& request, const CreateDataFlowSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataFlowSubTaskOutcomeCallable createDataFlowSubTaskCallable(const Model::CreateDataFlowSubTaskRequest& request) const;
			CreateDataFlowTaskOutcome createDataFlowTask(const Model::CreateDataFlowTaskRequest &request)const;
			void createDataFlowTaskAsync(const Model::CreateDataFlowTaskRequest& request, const CreateDataFlowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataFlowTaskOutcomeCallable createDataFlowTaskCallable(const Model::CreateDataFlowTaskRequest& request) const;
			CreateDirOutcome createDir(const Model::CreateDirRequest &request)const;
			void createDirAsync(const Model::CreateDirRequest& request, const CreateDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDirOutcomeCallable createDirCallable(const Model::CreateDirRequest& request) const;
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateFileSystemOutcome createFileSystem(const Model::CreateFileSystemRequest &request)const;
			void createFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileSystemOutcomeCallable createFileSystemCallable(const Model::CreateFileSystemRequest& request) const;
			CreateFilesetOutcome createFileset(const Model::CreateFilesetRequest &request)const;
			void createFilesetAsync(const Model::CreateFilesetRequest& request, const CreateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFilesetOutcomeCallable createFilesetCallable(const Model::CreateFilesetRequest& request) const;
			CreateLDAPConfigOutcome createLDAPConfig(const Model::CreateLDAPConfigRequest &request)const;
			void createLDAPConfigAsync(const Model::CreateLDAPConfigRequest& request, const CreateLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLDAPConfigOutcomeCallable createLDAPConfigCallable(const Model::CreateLDAPConfigRequest& request) const;
			CreateLifecyclePolicyOutcome createLifecyclePolicy(const Model::CreateLifecyclePolicyRequest &request)const;
			void createLifecyclePolicyAsync(const Model::CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLifecyclePolicyOutcomeCallable createLifecyclePolicyCallable(const Model::CreateLifecyclePolicyRequest& request) const;
			CreateLifecycleRetrieveJobOutcome createLifecycleRetrieveJob(const Model::CreateLifecycleRetrieveJobRequest &request)const;
			void createLifecycleRetrieveJobAsync(const Model::CreateLifecycleRetrieveJobRequest& request, const CreateLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLifecycleRetrieveJobOutcomeCallable createLifecycleRetrieveJobCallable(const Model::CreateLifecycleRetrieveJobRequest& request) const;
			CreateLogAnalysisOutcome createLogAnalysis(const Model::CreateLogAnalysisRequest &request)const;
			void createLogAnalysisAsync(const Model::CreateLogAnalysisRequest& request, const CreateLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogAnalysisOutcomeCallable createLogAnalysisCallable(const Model::CreateLogAnalysisRequest& request) const;
			CreateMountTargetOutcome createMountTarget(const Model::CreateMountTargetRequest &request)const;
			void createMountTargetAsync(const Model::CreateMountTargetRequest& request, const CreateMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMountTargetOutcomeCallable createMountTargetCallable(const Model::CreateMountTargetRequest& request) const;
			CreateProtocolMountTargetOutcome createProtocolMountTarget(const Model::CreateProtocolMountTargetRequest &request)const;
			void createProtocolMountTargetAsync(const Model::CreateProtocolMountTargetRequest& request, const CreateProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProtocolMountTargetOutcomeCallable createProtocolMountTargetCallable(const Model::CreateProtocolMountTargetRequest& request) const;
			CreateProtocolServiceOutcome createProtocolService(const Model::CreateProtocolServiceRequest &request)const;
			void createProtocolServiceAsync(const Model::CreateProtocolServiceRequest& request, const CreateProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProtocolServiceOutcomeCallable createProtocolServiceCallable(const Model::CreateProtocolServiceRequest& request) const;
			CreateRecycleBinDeleteJobOutcome createRecycleBinDeleteJob(const Model::CreateRecycleBinDeleteJobRequest &request)const;
			void createRecycleBinDeleteJobAsync(const Model::CreateRecycleBinDeleteJobRequest& request, const CreateRecycleBinDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRecycleBinDeleteJobOutcomeCallable createRecycleBinDeleteJobCallable(const Model::CreateRecycleBinDeleteJobRequest& request) const;
			CreateRecycleBinRestoreJobOutcome createRecycleBinRestoreJob(const Model::CreateRecycleBinRestoreJobRequest &request)const;
			void createRecycleBinRestoreJobAsync(const Model::CreateRecycleBinRestoreJobRequest& request, const CreateRecycleBinRestoreJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRecycleBinRestoreJobOutcomeCallable createRecycleBinRestoreJobCallable(const Model::CreateRecycleBinRestoreJobRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DeleteAccessGroupOutcome deleteAccessGroup(const Model::DeleteAccessGroupRequest &request)const;
			void deleteAccessGroupAsync(const Model::DeleteAccessGroupRequest& request, const DeleteAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessGroupOutcomeCallable deleteAccessGroupCallable(const Model::DeleteAccessGroupRequest& request) const;
			DeleteAccessPointOutcome deleteAccessPoint(const Model::DeleteAccessPointRequest &request)const;
			void deleteAccessPointAsync(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessPointOutcomeCallable deleteAccessPointCallable(const Model::DeleteAccessPointRequest& request) const;
			DeleteAccessRuleOutcome deleteAccessRule(const Model::DeleteAccessRuleRequest &request)const;
			void deleteAccessRuleAsync(const Model::DeleteAccessRuleRequest& request, const DeleteAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessRuleOutcomeCallable deleteAccessRuleCallable(const Model::DeleteAccessRuleRequest& request) const;
			DeleteAutoSnapshotPolicyOutcome deleteAutoSnapshotPolicy(const Model::DeleteAutoSnapshotPolicyRequest &request)const;
			void deleteAutoSnapshotPolicyAsync(const Model::DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoSnapshotPolicyOutcomeCallable deleteAutoSnapshotPolicyCallable(const Model::DeleteAutoSnapshotPolicyRequest& request) const;
			DeleteDataFlowOutcome deleteDataFlow(const Model::DeleteDataFlowRequest &request)const;
			void deleteDataFlowAsync(const Model::DeleteDataFlowRequest& request, const DeleteDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataFlowOutcomeCallable deleteDataFlowCallable(const Model::DeleteDataFlowRequest& request) const;
			DeleteFileSystemOutcome deleteFileSystem(const Model::DeleteFileSystemRequest &request)const;
			void deleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileSystemOutcomeCallable deleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;
			DeleteFilesetOutcome deleteFileset(const Model::DeleteFilesetRequest &request)const;
			void deleteFilesetAsync(const Model::DeleteFilesetRequest& request, const DeleteFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFilesetOutcomeCallable deleteFilesetCallable(const Model::DeleteFilesetRequest& request) const;
			DeleteLDAPConfigOutcome deleteLDAPConfig(const Model::DeleteLDAPConfigRequest &request)const;
			void deleteLDAPConfigAsync(const Model::DeleteLDAPConfigRequest& request, const DeleteLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLDAPConfigOutcomeCallable deleteLDAPConfigCallable(const Model::DeleteLDAPConfigRequest& request) const;
			DeleteLifecyclePolicyOutcome deleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest &request)const;
			void deleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLifecyclePolicyOutcomeCallable deleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;
			DeleteLogAnalysisOutcome deleteLogAnalysis(const Model::DeleteLogAnalysisRequest &request)const;
			void deleteLogAnalysisAsync(const Model::DeleteLogAnalysisRequest& request, const DeleteLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogAnalysisOutcomeCallable deleteLogAnalysisCallable(const Model::DeleteLogAnalysisRequest& request) const;
			DeleteMountTargetOutcome deleteMountTarget(const Model::DeleteMountTargetRequest &request)const;
			void deleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMountTargetOutcomeCallable deleteMountTargetCallable(const Model::DeleteMountTargetRequest& request) const;
			DeleteProtocolMountTargetOutcome deleteProtocolMountTarget(const Model::DeleteProtocolMountTargetRequest &request)const;
			void deleteProtocolMountTargetAsync(const Model::DeleteProtocolMountTargetRequest& request, const DeleteProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProtocolMountTargetOutcomeCallable deleteProtocolMountTargetCallable(const Model::DeleteProtocolMountTargetRequest& request) const;
			DeleteProtocolServiceOutcome deleteProtocolService(const Model::DeleteProtocolServiceRequest &request)const;
			void deleteProtocolServiceAsync(const Model::DeleteProtocolServiceRequest& request, const DeleteProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProtocolServiceOutcomeCallable deleteProtocolServiceCallable(const Model::DeleteProtocolServiceRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DescribeAccessGroupsOutcome describeAccessGroups(const Model::DescribeAccessGroupsRequest &request)const;
			void describeAccessGroupsAsync(const Model::DescribeAccessGroupsRequest& request, const DescribeAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessGroupsOutcomeCallable describeAccessGroupsCallable(const Model::DescribeAccessGroupsRequest& request) const;
			DescribeAccessPointOutcome describeAccessPoint(const Model::DescribeAccessPointRequest &request)const;
			void describeAccessPointAsync(const Model::DescribeAccessPointRequest& request, const DescribeAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessPointOutcomeCallable describeAccessPointCallable(const Model::DescribeAccessPointRequest& request) const;
			DescribeAccessPointsOutcome describeAccessPoints(const Model::DescribeAccessPointsRequest &request)const;
			void describeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessPointsOutcomeCallable describeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request) const;
			DescribeAccessRulesOutcome describeAccessRules(const Model::DescribeAccessRulesRequest &request)const;
			void describeAccessRulesAsync(const Model::DescribeAccessRulesRequest& request, const DescribeAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessRulesOutcomeCallable describeAccessRulesCallable(const Model::DescribeAccessRulesRequest& request) const;
			DescribeAutoSnapshotPoliciesOutcome describeAutoSnapshotPolicies(const Model::DescribeAutoSnapshotPoliciesRequest &request)const;
			void describeAutoSnapshotPoliciesAsync(const Model::DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoSnapshotPoliciesOutcomeCallable describeAutoSnapshotPoliciesCallable(const Model::DescribeAutoSnapshotPoliciesRequest& request) const;
			DescribeAutoSnapshotTasksOutcome describeAutoSnapshotTasks(const Model::DescribeAutoSnapshotTasksRequest &request)const;
			void describeAutoSnapshotTasksAsync(const Model::DescribeAutoSnapshotTasksRequest& request, const DescribeAutoSnapshotTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoSnapshotTasksOutcomeCallable describeAutoSnapshotTasksCallable(const Model::DescribeAutoSnapshotTasksRequest& request) const;
			DescribeBlackListClientsOutcome describeBlackListClients(const Model::DescribeBlackListClientsRequest &request)const;
			void describeBlackListClientsAsync(const Model::DescribeBlackListClientsRequest& request, const DescribeBlackListClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBlackListClientsOutcomeCallable describeBlackListClientsCallable(const Model::DescribeBlackListClientsRequest& request) const;
			DescribeDataFlowSubTasksOutcome describeDataFlowSubTasks(const Model::DescribeDataFlowSubTasksRequest &request)const;
			void describeDataFlowSubTasksAsync(const Model::DescribeDataFlowSubTasksRequest& request, const DescribeDataFlowSubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataFlowSubTasksOutcomeCallable describeDataFlowSubTasksCallable(const Model::DescribeDataFlowSubTasksRequest& request) const;
			DescribeDataFlowTasksOutcome describeDataFlowTasks(const Model::DescribeDataFlowTasksRequest &request)const;
			void describeDataFlowTasksAsync(const Model::DescribeDataFlowTasksRequest& request, const DescribeDataFlowTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataFlowTasksOutcomeCallable describeDataFlowTasksCallable(const Model::DescribeDataFlowTasksRequest& request) const;
			DescribeDataFlowsOutcome describeDataFlows(const Model::DescribeDataFlowsRequest &request)const;
			void describeDataFlowsAsync(const Model::DescribeDataFlowsRequest& request, const DescribeDataFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataFlowsOutcomeCallable describeDataFlowsCallable(const Model::DescribeDataFlowsRequest& request) const;
			DescribeDirQuotasOutcome describeDirQuotas(const Model::DescribeDirQuotasRequest &request)const;
			void describeDirQuotasAsync(const Model::DescribeDirQuotasRequest& request, const DescribeDirQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDirQuotasOutcomeCallable describeDirQuotasCallable(const Model::DescribeDirQuotasRequest& request) const;
			DescribeFileSystemStatisticsOutcome describeFileSystemStatistics(const Model::DescribeFileSystemStatisticsRequest &request)const;
			void describeFileSystemStatisticsAsync(const Model::DescribeFileSystemStatisticsRequest& request, const DescribeFileSystemStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFileSystemStatisticsOutcomeCallable describeFileSystemStatisticsCallable(const Model::DescribeFileSystemStatisticsRequest& request) const;
			DescribeFileSystemsOutcome describeFileSystems(const Model::DescribeFileSystemsRequest &request)const;
			void describeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFileSystemsOutcomeCallable describeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;
			DescribeFilesetsOutcome describeFilesets(const Model::DescribeFilesetsRequest &request)const;
			void describeFilesetsAsync(const Model::DescribeFilesetsRequest& request, const DescribeFilesetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFilesetsOutcomeCallable describeFilesetsCallable(const Model::DescribeFilesetsRequest& request) const;
			DescribeLifecyclePoliciesOutcome describeLifecyclePolicies(const Model::DescribeLifecyclePoliciesRequest &request)const;
			void describeLifecyclePoliciesAsync(const Model::DescribeLifecyclePoliciesRequest& request, const DescribeLifecyclePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLifecyclePoliciesOutcomeCallable describeLifecyclePoliciesCallable(const Model::DescribeLifecyclePoliciesRequest& request) const;
			DescribeLogAnalysisOutcome describeLogAnalysis(const Model::DescribeLogAnalysisRequest &request)const;
			void describeLogAnalysisAsync(const Model::DescribeLogAnalysisRequest& request, const DescribeLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogAnalysisOutcomeCallable describeLogAnalysisCallable(const Model::DescribeLogAnalysisRequest& request) const;
			DescribeMountTargetsOutcome describeMountTargets(const Model::DescribeMountTargetsRequest &request)const;
			void describeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMountTargetsOutcomeCallable describeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request) const;
			DescribeMountedClientsOutcome describeMountedClients(const Model::DescribeMountedClientsRequest &request)const;
			void describeMountedClientsAsync(const Model::DescribeMountedClientsRequest& request, const DescribeMountedClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMountedClientsOutcomeCallable describeMountedClientsCallable(const Model::DescribeMountedClientsRequest& request) const;
			DescribeNfsAclOutcome describeNfsAcl(const Model::DescribeNfsAclRequest &request)const;
			void describeNfsAclAsync(const Model::DescribeNfsAclRequest& request, const DescribeNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNfsAclOutcomeCallable describeNfsAclCallable(const Model::DescribeNfsAclRequest& request) const;
			DescribeProtocolMountTargetOutcome describeProtocolMountTarget(const Model::DescribeProtocolMountTargetRequest &request)const;
			void describeProtocolMountTargetAsync(const Model::DescribeProtocolMountTargetRequest& request, const DescribeProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtocolMountTargetOutcomeCallable describeProtocolMountTargetCallable(const Model::DescribeProtocolMountTargetRequest& request) const;
			DescribeProtocolServiceOutcome describeProtocolService(const Model::DescribeProtocolServiceRequest &request)const;
			void describeProtocolServiceAsync(const Model::DescribeProtocolServiceRequest& request, const DescribeProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtocolServiceOutcomeCallable describeProtocolServiceCallable(const Model::DescribeProtocolServiceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSmbAclOutcome describeSmbAcl(const Model::DescribeSmbAclRequest &request)const;
			void describeSmbAclAsync(const Model::DescribeSmbAclRequest& request, const DescribeSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmbAclOutcomeCallable describeSmbAclCallable(const Model::DescribeSmbAclRequest& request) const;
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
			DescribeStoragePackagesOutcome describeStoragePackages(const Model::DescribeStoragePackagesRequest &request)const;
			void describeStoragePackagesAsync(const Model::DescribeStoragePackagesRequest& request, const DescribeStoragePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoragePackagesOutcomeCallable describeStoragePackagesCallable(const Model::DescribeStoragePackagesRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DisableAndCleanRecycleBinOutcome disableAndCleanRecycleBin(const Model::DisableAndCleanRecycleBinRequest &request)const;
			void disableAndCleanRecycleBinAsync(const Model::DisableAndCleanRecycleBinRequest& request, const DisableAndCleanRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAndCleanRecycleBinOutcomeCallable disableAndCleanRecycleBinCallable(const Model::DisableAndCleanRecycleBinRequest& request) const;
			DisableNfsAclOutcome disableNfsAcl(const Model::DisableNfsAclRequest &request)const;
			void disableNfsAclAsync(const Model::DisableNfsAclRequest& request, const DisableNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableNfsAclOutcomeCallable disableNfsAclCallable(const Model::DisableNfsAclRequest& request) const;
			DisableSmbAclOutcome disableSmbAcl(const Model::DisableSmbAclRequest &request)const;
			void disableSmbAclAsync(const Model::DisableSmbAclRequest& request, const DisableSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSmbAclOutcomeCallable disableSmbAclCallable(const Model::DisableSmbAclRequest& request) const;
			EnableNfsAclOutcome enableNfsAcl(const Model::EnableNfsAclRequest &request)const;
			void enableNfsAclAsync(const Model::EnableNfsAclRequest& request, const EnableNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableNfsAclOutcomeCallable enableNfsAclCallable(const Model::EnableNfsAclRequest& request) const;
			EnableRecycleBinOutcome enableRecycleBin(const Model::EnableRecycleBinRequest &request)const;
			void enableRecycleBinAsync(const Model::EnableRecycleBinRequest& request, const EnableRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRecycleBinOutcomeCallable enableRecycleBinCallable(const Model::EnableRecycleBinRequest& request) const;
			EnableSmbAclOutcome enableSmbAcl(const Model::EnableSmbAclRequest &request)const;
			void enableSmbAclAsync(const Model::EnableSmbAclRequest& request, const EnableSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSmbAclOutcomeCallable enableSmbAclCallable(const Model::EnableSmbAclRequest& request) const;
			GetDirectoryOrFilePropertiesOutcome getDirectoryOrFileProperties(const Model::GetDirectoryOrFilePropertiesRequest &request)const;
			void getDirectoryOrFilePropertiesAsync(const Model::GetDirectoryOrFilePropertiesRequest& request, const GetDirectoryOrFilePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDirectoryOrFilePropertiesOutcomeCallable getDirectoryOrFilePropertiesCallable(const Model::GetDirectoryOrFilePropertiesRequest& request) const;
			GetRecycleBinAttributeOutcome getRecycleBinAttribute(const Model::GetRecycleBinAttributeRequest &request)const;
			void getRecycleBinAttributeAsync(const Model::GetRecycleBinAttributeRequest& request, const GetRecycleBinAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRecycleBinAttributeOutcomeCallable getRecycleBinAttributeCallable(const Model::GetRecycleBinAttributeRequest& request) const;
			ListDirectoriesAndFilesOutcome listDirectoriesAndFiles(const Model::ListDirectoriesAndFilesRequest &request)const;
			void listDirectoriesAndFilesAsync(const Model::ListDirectoriesAndFilesRequest& request, const ListDirectoriesAndFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDirectoriesAndFilesOutcomeCallable listDirectoriesAndFilesCallable(const Model::ListDirectoriesAndFilesRequest& request) const;
			ListLifecycleRetrieveJobsOutcome listLifecycleRetrieveJobs(const Model::ListLifecycleRetrieveJobsRequest &request)const;
			void listLifecycleRetrieveJobsAsync(const Model::ListLifecycleRetrieveJobsRequest& request, const ListLifecycleRetrieveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLifecycleRetrieveJobsOutcomeCallable listLifecycleRetrieveJobsCallable(const Model::ListLifecycleRetrieveJobsRequest& request) const;
			ListRecentlyRecycledDirectoriesOutcome listRecentlyRecycledDirectories(const Model::ListRecentlyRecycledDirectoriesRequest &request)const;
			void listRecentlyRecycledDirectoriesAsync(const Model::ListRecentlyRecycledDirectoriesRequest& request, const ListRecentlyRecycledDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentlyRecycledDirectoriesOutcomeCallable listRecentlyRecycledDirectoriesCallable(const Model::ListRecentlyRecycledDirectoriesRequest& request) const;
			ListRecycleBinJobsOutcome listRecycleBinJobs(const Model::ListRecycleBinJobsRequest &request)const;
			void listRecycleBinJobsAsync(const Model::ListRecycleBinJobsRequest& request, const ListRecycleBinJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecycleBinJobsOutcomeCallable listRecycleBinJobsCallable(const Model::ListRecycleBinJobsRequest& request) const;
			ListRecycledDirectoriesAndFilesOutcome listRecycledDirectoriesAndFiles(const Model::ListRecycledDirectoriesAndFilesRequest &request)const;
			void listRecycledDirectoriesAndFilesAsync(const Model::ListRecycledDirectoriesAndFilesRequest& request, const ListRecycledDirectoriesAndFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecycledDirectoriesAndFilesOutcomeCallable listRecycledDirectoriesAndFilesCallable(const Model::ListRecycledDirectoriesAndFilesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyAccessGroupOutcome modifyAccessGroup(const Model::ModifyAccessGroupRequest &request)const;
			void modifyAccessGroupAsync(const Model::ModifyAccessGroupRequest& request, const ModifyAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessGroupOutcomeCallable modifyAccessGroupCallable(const Model::ModifyAccessGroupRequest& request) const;
			ModifyAccessPointOutcome modifyAccessPoint(const Model::ModifyAccessPointRequest &request)const;
			void modifyAccessPointAsync(const Model::ModifyAccessPointRequest& request, const ModifyAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessPointOutcomeCallable modifyAccessPointCallable(const Model::ModifyAccessPointRequest& request) const;
			ModifyAccessRuleOutcome modifyAccessRule(const Model::ModifyAccessRuleRequest &request)const;
			void modifyAccessRuleAsync(const Model::ModifyAccessRuleRequest& request, const ModifyAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessRuleOutcomeCallable modifyAccessRuleCallable(const Model::ModifyAccessRuleRequest& request) const;
			ModifyAutoSnapshotPolicyOutcome modifyAutoSnapshotPolicy(const Model::ModifyAutoSnapshotPolicyRequest &request)const;
			void modifyAutoSnapshotPolicyAsync(const Model::ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoSnapshotPolicyOutcomeCallable modifyAutoSnapshotPolicyCallable(const Model::ModifyAutoSnapshotPolicyRequest& request) const;
			ModifyDataFlowOutcome modifyDataFlow(const Model::ModifyDataFlowRequest &request)const;
			void modifyDataFlowAsync(const Model::ModifyDataFlowRequest& request, const ModifyDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataFlowOutcomeCallable modifyDataFlowCallable(const Model::ModifyDataFlowRequest& request) const;
			ModifyDataFlowAutoRefreshOutcome modifyDataFlowAutoRefresh(const Model::ModifyDataFlowAutoRefreshRequest &request)const;
			void modifyDataFlowAutoRefreshAsync(const Model::ModifyDataFlowAutoRefreshRequest& request, const ModifyDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataFlowAutoRefreshOutcomeCallable modifyDataFlowAutoRefreshCallable(const Model::ModifyDataFlowAutoRefreshRequest& request) const;
			ModifyFileSystemOutcome modifyFileSystem(const Model::ModifyFileSystemRequest &request)const;
			void modifyFileSystemAsync(const Model::ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFileSystemOutcomeCallable modifyFileSystemCallable(const Model::ModifyFileSystemRequest& request) const;
			ModifyFilesetOutcome modifyFileset(const Model::ModifyFilesetRequest &request)const;
			void modifyFilesetAsync(const Model::ModifyFilesetRequest& request, const ModifyFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFilesetOutcomeCallable modifyFilesetCallable(const Model::ModifyFilesetRequest& request) const;
			ModifyLDAPConfigOutcome modifyLDAPConfig(const Model::ModifyLDAPConfigRequest &request)const;
			void modifyLDAPConfigAsync(const Model::ModifyLDAPConfigRequest& request, const ModifyLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLDAPConfigOutcomeCallable modifyLDAPConfigCallable(const Model::ModifyLDAPConfigRequest& request) const;
			ModifyLifecyclePolicyOutcome modifyLifecyclePolicy(const Model::ModifyLifecyclePolicyRequest &request)const;
			void modifyLifecyclePolicyAsync(const Model::ModifyLifecyclePolicyRequest& request, const ModifyLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLifecyclePolicyOutcomeCallable modifyLifecyclePolicyCallable(const Model::ModifyLifecyclePolicyRequest& request) const;
			ModifyMountTargetOutcome modifyMountTarget(const Model::ModifyMountTargetRequest &request)const;
			void modifyMountTargetAsync(const Model::ModifyMountTargetRequest& request, const ModifyMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMountTargetOutcomeCallable modifyMountTargetCallable(const Model::ModifyMountTargetRequest& request) const;
			ModifyProtocolMountTargetOutcome modifyProtocolMountTarget(const Model::ModifyProtocolMountTargetRequest &request)const;
			void modifyProtocolMountTargetAsync(const Model::ModifyProtocolMountTargetRequest& request, const ModifyProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtocolMountTargetOutcomeCallable modifyProtocolMountTargetCallable(const Model::ModifyProtocolMountTargetRequest& request) const;
			ModifyProtocolServiceOutcome modifyProtocolService(const Model::ModifyProtocolServiceRequest &request)const;
			void modifyProtocolServiceAsync(const Model::ModifyProtocolServiceRequest& request, const ModifyProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtocolServiceOutcomeCallable modifyProtocolServiceCallable(const Model::ModifyProtocolServiceRequest& request) const;
			ModifySmbAclOutcome modifySmbAcl(const Model::ModifySmbAclRequest &request)const;
			void modifySmbAclAsync(const Model::ModifySmbAclRequest& request, const ModifySmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmbAclOutcomeCallable modifySmbAclCallable(const Model::ModifySmbAclRequest& request) const;
			OpenNASServiceOutcome openNASService(const Model::OpenNASServiceRequest &request)const;
			void openNASServiceAsync(const Model::OpenNASServiceRequest& request, const OpenNASServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenNASServiceOutcomeCallable openNASServiceCallable(const Model::OpenNASServiceRequest& request) const;
			RemoveClientFromBlackListOutcome removeClientFromBlackList(const Model::RemoveClientFromBlackListRequest &request)const;
			void removeClientFromBlackListAsync(const Model::RemoveClientFromBlackListRequest& request, const RemoveClientFromBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveClientFromBlackListOutcomeCallable removeClientFromBlackListCallable(const Model::RemoveClientFromBlackListRequest& request) const;
			RemoveTagsOutcome removeTags(const Model::RemoveTagsRequest &request)const;
			void removeTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsOutcomeCallable removeTagsCallable(const Model::RemoveTagsRequest& request) const;
			ResetFileSystemOutcome resetFileSystem(const Model::ResetFileSystemRequest &request)const;
			void resetFileSystemAsync(const Model::ResetFileSystemRequest& request, const ResetFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetFileSystemOutcomeCallable resetFileSystemCallable(const Model::ResetFileSystemRequest& request) const;
			RetryLifecycleRetrieveJobOutcome retryLifecycleRetrieveJob(const Model::RetryLifecycleRetrieveJobRequest &request)const;
			void retryLifecycleRetrieveJobAsync(const Model::RetryLifecycleRetrieveJobRequest& request, const RetryLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryLifecycleRetrieveJobOutcomeCallable retryLifecycleRetrieveJobCallable(const Model::RetryLifecycleRetrieveJobRequest& request) const;
			SetDirQuotaOutcome setDirQuota(const Model::SetDirQuotaRequest &request)const;
			void setDirQuotaAsync(const Model::SetDirQuotaRequest& request, const SetDirQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDirQuotaOutcomeCallable setDirQuotaCallable(const Model::SetDirQuotaRequest& request) const;
			SetFilesetQuotaOutcome setFilesetQuota(const Model::SetFilesetQuotaRequest &request)const;
			void setFilesetQuotaAsync(const Model::SetFilesetQuotaRequest& request, const SetFilesetQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetFilesetQuotaOutcomeCallable setFilesetQuotaCallable(const Model::SetFilesetQuotaRequest& request) const;
			StartDataFlowOutcome startDataFlow(const Model::StartDataFlowRequest &request)const;
			void startDataFlowAsync(const Model::StartDataFlowRequest& request, const StartDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDataFlowOutcomeCallable startDataFlowCallable(const Model::StartDataFlowRequest& request) const;
			StopDataFlowOutcome stopDataFlow(const Model::StopDataFlowRequest &request)const;
			void stopDataFlowAsync(const Model::StopDataFlowRequest& request, const StopDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDataFlowOutcomeCallable stopDataFlowCallable(const Model::StopDataFlowRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateRecycleBinAttributeOutcome updateRecycleBinAttribute(const Model::UpdateRecycleBinAttributeRequest &request)const;
			void updateRecycleBinAttributeAsync(const Model::UpdateRecycleBinAttributeRequest& request, const UpdateRecycleBinAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRecycleBinAttributeOutcomeCallable updateRecycleBinAttributeCallable(const Model::UpdateRecycleBinAttributeRequest& request) const;
			UpgradeFileSystemOutcome upgradeFileSystem(const Model::UpgradeFileSystemRequest &request)const;
			void upgradeFileSystemAsync(const Model::UpgradeFileSystemRequest& request, const UpgradeFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeFileSystemOutcomeCallable upgradeFileSystemCallable(const Model::UpgradeFileSystemRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_NAS_NASCLIENT_H_
