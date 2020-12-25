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

#ifndef ALIBABACLOUD_EMR_EMRCLIENT_H_
#define ALIBABACLOUD_EMR_EMRCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EmrExport.h"
#include "model/AddClusterServiceRequest.h"
#include "model/AddClusterServiceResult.h"
#include "model/AddScalingConfigItemV2Request.h"
#include "model/AddScalingConfigItemV2Result.h"
#include "model/AuthorizeSecurityGroupRequest.h"
#include "model/AuthorizeSecurityGroupResult.h"
#include "model/CancelOrderRequest.h"
#include "model/CancelOrderResult.h"
#include "model/CleanupFlowEntitySnapshotRequest.h"
#include "model/CleanupFlowEntitySnapshotResult.h"
#include "model/CloneFlowRequest.h"
#include "model/CloneFlowResult.h"
#include "model/CloneFlowJobRequest.h"
#include "model/CloneFlowJobResult.h"
#include "model/CommitFlowEntitySnapshotRequest.h"
#include "model/CommitFlowEntitySnapshotResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateBackupPlanRequest.h"
#include "model/CreateBackupPlanResult.h"
#include "model/CreateClusterBootstrapActionRequest.h"
#include "model/CreateClusterBootstrapActionResult.h"
#include "model/CreateClusterTemplateRequest.h"
#include "model/CreateClusterTemplateResult.h"
#include "model/CreateClusterV2Request.h"
#include "model/CreateClusterV2Result.h"
#include "model/CreateClusterWithTemplateRequest.h"
#include "model/CreateClusterWithTemplateResult.h"
#include "model/CreateDataSourceRequest.h"
#include "model/CreateDataSourceResult.h"
#include "model/CreateExecutionPlanRequest.h"
#include "model/CreateExecutionPlanResult.h"
#include "model/CreateFlowRequest.h"
#include "model/CreateFlowResult.h"
#include "model/CreateFlowCategoryRequest.h"
#include "model/CreateFlowCategoryResult.h"
#include "model/CreateFlowEditLockRequest.h"
#include "model/CreateFlowEditLockResult.h"
#include "model/CreateFlowForWebRequest.h"
#include "model/CreateFlowForWebResult.h"
#include "model/CreateFlowJobRequest.h"
#include "model/CreateFlowJobResult.h"
#include "model/CreateFlowProjectRequest.h"
#include "model/CreateFlowProjectResult.h"
#include "model/CreateFlowProjectClusterSettingRequest.h"
#include "model/CreateFlowProjectClusterSettingResult.h"
#include "model/CreateFlowProjectUserRequest.h"
#include "model/CreateFlowProjectUserResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreateLibraryRequest.h"
#include "model/CreateLibraryResult.h"
#include "model/CreateMetaTablePreviewTaskRequest.h"
#include "model/CreateMetaTablePreviewTaskResult.h"
#include "model/CreateNoteRequest.h"
#include "model/CreateNoteResult.h"
#include "model/CreateParagraphRequest.h"
#include "model/CreateParagraphResult.h"
#include "model/CreateResourcePoolRequest.h"
#include "model/CreateResourcePoolResult.h"
#include "model/CreateResourceQueueRequest.h"
#include "model/CreateResourceQueueResult.h"
#include "model/CreateScalingGroupV2Request.h"
#include "model/CreateScalingGroupV2Result.h"
#include "model/CreateScalingRuleRequest.h"
#include "model/CreateScalingRuleResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateUsersRequest.h"
#include "model/CreateUsersResult.h"
#include "model/DecommissionHostComponentRequest.h"
#include "model/DecommissionHostComponentResult.h"
#include "model/DeleteClusterTemplateRequest.h"
#include "model/DeleteClusterTemplateResult.h"
#include "model/DeleteExecutionPlanRequest.h"
#include "model/DeleteExecutionPlanResult.h"
#include "model/DeleteFlowRequest.h"
#include "model/DeleteFlowResult.h"
#include "model/DeleteFlowCategoryRequest.h"
#include "model/DeleteFlowCategoryResult.h"
#include "model/DeleteFlowEditLockRequest.h"
#include "model/DeleteFlowEditLockResult.h"
#include "model/DeleteFlowJobRequest.h"
#include "model/DeleteFlowJobResult.h"
#include "model/DeleteFlowProjectRequest.h"
#include "model/DeleteFlowProjectResult.h"
#include "model/DeleteFlowProjectClusterSettingRequest.h"
#include "model/DeleteFlowProjectClusterSettingResult.h"
#include "model/DeleteFlowProjectUserRequest.h"
#include "model/DeleteFlowProjectUserResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeleteLibrariesRequest.h"
#include "model/DeleteLibrariesResult.h"
#include "model/DeleteNoteRequest.h"
#include "model/DeleteNoteResult.h"
#include "model/DeleteResourcePoolRequest.h"
#include "model/DeleteResourcePoolResult.h"
#include "model/DeleteResourceQueueRequest.h"
#include "model/DeleteResourceQueueResult.h"
#include "model/DeleteScalingRuleRequest.h"
#include "model/DeleteScalingRuleResult.h"
#include "model/DeleteTagRequest.h"
#include "model/DeleteTagResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DescribeClusterBasicInfoRequest.h"
#include "model/DescribeClusterBasicInfoResult.h"
#include "model/DescribeClusterMetaCollectRequest.h"
#include "model/DescribeClusterMetaCollectResult.h"
#include "model/DescribeClusterOperationHostTaskLogRequest.h"
#include "model/DescribeClusterOperationHostTaskLogResult.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeRequest.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeResult.h"
#include "model/DescribeClusterServiceRequest.h"
#include "model/DescribeClusterServiceResult.h"
#include "model/DescribeClusterServiceConfigRequest.h"
#include "model/DescribeClusterServiceConfigResult.h"
#include "model/DescribeClusterServiceConfigHistoryRequest.h"
#include "model/DescribeClusterServiceConfigHistoryResult.h"
#include "model/DescribeClusterServiceConfigTagRequest.h"
#include "model/DescribeClusterServiceConfigTagResult.h"
#include "model/DescribeClusterTemplateRequest.h"
#include "model/DescribeClusterTemplateResult.h"
#include "model/DescribeClusterV2Request.h"
#include "model/DescribeClusterV2Result.h"
#include "model/DescribeDataSourceRequest.h"
#include "model/DescribeDataSourceResult.h"
#include "model/DescribeExecutionPlanRequest.h"
#include "model/DescribeExecutionPlanResult.h"
#include "model/DescribeFlowRequest.h"
#include "model/DescribeFlowResult.h"
#include "model/DescribeFlowAgentTokenRequest.h"
#include "model/DescribeFlowAgentTokenResult.h"
#include "model/DescribeFlowAgentUserRequest.h"
#include "model/DescribeFlowAgentUserResult.h"
#include "model/DescribeFlowCategoryRequest.h"
#include "model/DescribeFlowCategoryResult.h"
#include "model/DescribeFlowCategoryTreeRequest.h"
#include "model/DescribeFlowCategoryTreeResult.h"
#include "model/DescribeFlowEntitySnapshotRequest.h"
#include "model/DescribeFlowEntitySnapshotResult.h"
#include "model/DescribeFlowInstanceRequest.h"
#include "model/DescribeFlowInstanceResult.h"
#include "model/DescribeFlowJobRequest.h"
#include "model/DescribeFlowJobResult.h"
#include "model/DescribeFlowNodeInstanceRequest.h"
#include "model/DescribeFlowNodeInstanceResult.h"
#include "model/DescribeFlowNodeInstanceContainerLogRequest.h"
#include "model/DescribeFlowNodeInstanceContainerLogResult.h"
#include "model/DescribeFlowNodeInstanceLauncherLogRequest.h"
#include "model/DescribeFlowNodeInstanceLauncherLogResult.h"
#include "model/DescribeFlowProjectRequest.h"
#include "model/DescribeFlowProjectResult.h"
#include "model/DescribeFlowProjectClusterSettingRequest.h"
#include "model/DescribeFlowProjectClusterSettingResult.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/DescribeLibraryDetailRequest.h"
#include "model/DescribeLibraryDetailResult.h"
#include "model/DescribeLibraryInstallTaskDetailRequest.h"
#include "model/DescribeLibraryInstallTaskDetailResult.h"
#include "model/DescribeMetaTablePreviewTaskRequest.h"
#include "model/DescribeMetaTablePreviewTaskResult.h"
#include "model/DescribeScalingActivityRequest.h"
#include "model/DescribeScalingActivityResult.h"
#include "model/DescribeScalingCommonConfigRequest.h"
#include "model/DescribeScalingCommonConfigResult.h"
#include "model/DescribeScalingConfigItemV2Request.h"
#include "model/DescribeScalingConfigItemV2Result.h"
#include "model/DescribeScalingGroupInstanceV2Request.h"
#include "model/DescribeScalingGroupInstanceV2Result.h"
#include "model/DescribeScalingGroupV2Request.h"
#include "model/DescribeScalingGroupV2Result.h"
#include "model/DescribeScalingRuleRequest.h"
#include "model/DescribeScalingRuleResult.h"
#include "model/DescribeSecurityGroupAttributeRequest.h"
#include "model/DescribeSecurityGroupAttributeResult.h"
#include "model/DetachAndReleaseClusterEniRequest.h"
#include "model/DetachAndReleaseClusterEniResult.h"
#include "model/DiffFlowEntitySnapshotRequest.h"
#include "model/DiffFlowEntitySnapshotResult.h"
#include "model/DumpMetaDataSourceForOuterRequest.h"
#include "model/DumpMetaDataSourceForOuterResult.h"
#include "model/GetFlowEntityRelationGraphRequest.h"
#include "model/GetFlowEntityRelationGraphResult.h"
#include "model/GetHdfsCapacityStatisticInfoRequest.h"
#include "model/GetHdfsCapacityStatisticInfoResult.h"
#include "model/GetJobInputStatisticInfoRequest.h"
#include "model/GetJobInputStatisticInfoResult.h"
#include "model/GetJobOutputStatisticInfoRequest.h"
#include "model/GetJobOutputStatisticInfoResult.h"
#include "model/GetJobRunningTimeStatisticInfoRequest.h"
#include "model/GetJobRunningTimeStatisticInfoResult.h"
#include "model/GetQueueInputStatisticInfoRequest.h"
#include "model/GetQueueInputStatisticInfoResult.h"
#include "model/GetQueueOutputStatisticInfoRequest.h"
#include "model/GetQueueOutputStatisticInfoResult.h"
#include "model/GetQueueSubmissionStatisticInfoRequest.h"
#include "model/GetQueueSubmissionStatisticInfoResult.h"
#include "model/GetUserInputStatisticInfoRequest.h"
#include "model/GetUserInputStatisticInfoResult.h"
#include "model/GetUserOutputStatisticInfoRequest.h"
#include "model/GetUserOutputStatisticInfoResult.h"
#include "model/GetUserSubmissionStatisticInfoRequest.h"
#include "model/GetUserSubmissionStatisticInfoResult.h"
#include "model/InstallLibrariesRequest.h"
#include "model/InstallLibrariesResult.h"
#include "model/JoinResourceGroupRequest.h"
#include "model/JoinResourceGroupResult.h"
#include "model/KillExecutionJobInstanceRequest.h"
#include "model/KillExecutionJobInstanceResult.h"
#include "model/KillFlowJobRequest.h"
#include "model/KillFlowJobResult.h"
#include "model/ListAdviceActionRequest.h"
#include "model/ListAdviceActionResult.h"
#include "model/ListApmApplicationRequest.h"
#include "model/ListApmApplicationResult.h"
#include "model/ListBackupsRequest.h"
#include "model/ListBackupsResult.h"
#include "model/ListClusterHostRequest.h"
#include "model/ListClusterHostResult.h"
#include "model/ListClusterHostComponentRequest.h"
#include "model/ListClusterHostComponentResult.h"
#include "model/ListClusterHostGroupRequest.h"
#include "model/ListClusterHostGroupResult.h"
#include "model/ListClusterInstalledServiceRequest.h"
#include "model/ListClusterInstalledServiceResult.h"
#include "model/ListClusterOperationRequest.h"
#include "model/ListClusterOperationResult.h"
#include "model/ListClusterOperationHostRequest.h"
#include "model/ListClusterOperationHostResult.h"
#include "model/ListClusterOperationHostTaskRequest.h"
#include "model/ListClusterOperationHostTaskResult.h"
#include "model/ListClusterOperationTaskRequest.h"
#include "model/ListClusterOperationTaskResult.h"
#include "model/ListClusterServiceRequest.h"
#include "model/ListClusterServiceResult.h"
#include "model/ListClusterServiceComponentRequest.h"
#include "model/ListClusterServiceComponentResult.h"
#include "model/ListClusterServiceComponentHealthInfoRequest.h"
#include "model/ListClusterServiceComponentHealthInfoResult.h"
#include "model/ListClusterServiceConfigHistoryRequest.h"
#include "model/ListClusterServiceConfigHistoryResult.h"
#include "model/ListClusterServiceQuickLinkRequest.h"
#include "model/ListClusterServiceQuickLinkResult.h"
#include "model/ListClusterTemplatesRequest.h"
#include "model/ListClusterTemplatesResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ListEmrAvailableConfigRequest.h"
#include "model/ListEmrAvailableConfigResult.h"
#include "model/ListEmrAvailableResourceRequest.h"
#include "model/ListEmrAvailableResourceResult.h"
#include "model/ListEmrMainVersionRequest.h"
#include "model/ListEmrMainVersionResult.h"
#include "model/ListExecutionPlanInstancesRequest.h"
#include "model/ListExecutionPlanInstancesResult.h"
#include "model/ListExecutionPlansRequest.h"
#include "model/ListExecutionPlansResult.h"
#include "model/ListFlowRequest.h"
#include "model/ListFlowResult.h"
#include "model/ListFlowCategoryRequest.h"
#include "model/ListFlowCategoryResult.h"
#include "model/ListFlowClusterRequest.h"
#include "model/ListFlowClusterResult.h"
#include "model/ListFlowClusterAllRequest.h"
#include "model/ListFlowClusterAllResult.h"
#include "model/ListFlowClusterAllHostsRequest.h"
#include "model/ListFlowClusterAllHostsResult.h"
#include "model/ListFlowClusterHostRequest.h"
#include "model/ListFlowClusterHostResult.h"
#include "model/ListFlowEntitySnapshotRequest.h"
#include "model/ListFlowEntitySnapshotResult.h"
#include "model/ListFlowInstanceRequest.h"
#include "model/ListFlowInstanceResult.h"
#include "model/ListFlowJobRequest.h"
#include "model/ListFlowJobResult.h"
#include "model/ListFlowJobHistoryRequest.h"
#include "model/ListFlowJobHistoryResult.h"
#include "model/ListFlowNodeInstanceRequest.h"
#include "model/ListFlowNodeInstanceResult.h"
#include "model/ListFlowNodeInstanceContainerStatusRequest.h"
#include "model/ListFlowNodeInstanceContainerStatusResult.h"
#include "model/ListFlowNodeSqlResultRequest.h"
#include "model/ListFlowNodeSqlResultResult.h"
#include "model/ListFlowProjectRequest.h"
#include "model/ListFlowProjectResult.h"
#include "model/ListFlowProjectClusterSettingRequest.h"
#include "model/ListFlowProjectClusterSettingResult.h"
#include "model/ListFlowProjectUserRequest.h"
#include "model/ListFlowProjectUserResult.h"
#include "model/ListJobExecutionInstancesRequest.h"
#include "model/ListJobExecutionInstancesResult.h"
#include "model/ListJobInstanceWorkersRequest.h"
#include "model/ListJobInstanceWorkersResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListLibrariesRequest.h"
#include "model/ListLibrariesResult.h"
#include "model/ListLibraryInstallTasksRequest.h"
#include "model/ListLibraryInstallTasksResult.h"
#include "model/ListLibraryStatusRequest.h"
#include "model/ListLibraryStatusResult.h"
#include "model/ListMetaClusterRequest.h"
#include "model/ListMetaClusterResult.h"
#include "model/ListMetaDataSourceClusterForOuterRequest.h"
#include "model/ListMetaDataSourceClusterForOuterResult.h"
#include "model/ListNotesRequest.h"
#include "model/ListNotesResult.h"
#include "model/ListResourcePoolRequest.h"
#include "model/ListResourcePoolResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListScalingActivityV2Request.h"
#include "model/ListScalingActivityV2Result.h"
#include "model/ListScalingConfigItemV2Request.h"
#include "model/ListScalingConfigItemV2Result.h"
#include "model/ListScalingGroupV2Request.h"
#include "model/ListScalingGroupV2Result.h"
#include "model/ListSecurityGroupRequest.h"
#include "model/ListSecurityGroupResult.h"
#include "model/ListStackRequest.h"
#include "model/ListStackResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListVswitchRequest.h"
#include "model/ListVswitchResult.h"
#include "model/ModifyClusterBootstrapActionRequest.h"
#include "model/ModifyClusterBootstrapActionResult.h"
#include "model/ModifyClusterHostGroupRequest.h"
#include "model/ModifyClusterHostGroupResult.h"
#include "model/ModifyClusterMetaCollectRequest.h"
#include "model/ModifyClusterMetaCollectResult.h"
#include "model/ModifyClusterNameRequest.h"
#include "model/ModifyClusterNameResult.h"
#include "model/ModifyClusterSecurityGroupRuleRequest.h"
#include "model/ModifyClusterSecurityGroupRuleResult.h"
#include "model/ModifyClusterServiceConfigRequest.h"
#include "model/ModifyClusterServiceConfigResult.h"
#include "model/ModifyClusterTemplateRequest.h"
#include "model/ModifyClusterTemplateResult.h"
#include "model/ModifyExecutionPlanRequest.h"
#include "model/ModifyExecutionPlanResult.h"
#include "model/ModifyFlowRequest.h"
#include "model/ModifyFlowResult.h"
#include "model/ModifyFlowCategoryRequest.h"
#include "model/ModifyFlowCategoryResult.h"
#include "model/ModifyFlowForWebRequest.h"
#include "model/ModifyFlowForWebResult.h"
#include "model/ModifyFlowJobRequest.h"
#include "model/ModifyFlowJobResult.h"
#include "model/ModifyFlowProjectRequest.h"
#include "model/ModifyFlowProjectResult.h"
#include "model/ModifyFlowProjectClusterSettingRequest.h"
#include "model/ModifyFlowProjectClusterSettingResult.h"
#include "model/ModifyJobRequest.h"
#include "model/ModifyJobResult.h"
#include "model/ModifyResourcePoolRequest.h"
#include "model/ModifyResourcePoolResult.h"
#include "model/ModifyResourcePoolSchedulerTypeRequest.h"
#include "model/ModifyResourcePoolSchedulerTypeResult.h"
#include "model/ModifyResourceQueueRequest.h"
#include "model/ModifyResourceQueueResult.h"
#include "model/ModifyScalingConfigItemV2Request.h"
#include "model/ModifyScalingConfigItemV2Result.h"
#include "model/ModifyScalingGroupV2Request.h"
#include "model/ModifyScalingGroupV2Result.h"
#include "model/ModifyScalingRuleRequest.h"
#include "model/ModifyScalingRuleResult.h"
#include "model/ModifyScalingTaskGroupRequest.h"
#include "model/ModifyScalingTaskGroupResult.h"
#include "model/QueryAlarmHistoryRequest.h"
#include "model/QueryAlarmHistoryResult.h"
#include "model/QueryEntityRequest.h"
#include "model/QueryEntityResult.h"
#include "model/QueryTableDataRequest.h"
#include "model/QueryTableDataResult.h"
#include "model/QueryTagRequest.h"
#include "model/QueryTagResult.h"
#include "model/QueryTrendDataRequest.h"
#include "model/QueryTrendDataResult.h"
#include "model/RefreshClusterResourcePoolRequest.h"
#include "model/RefreshClusterResourcePoolResult.h"
#include "model/ReleaseClusterRequest.h"
#include "model/ReleaseClusterResult.h"
#include "model/ReleaseClusterByTemplateTagForInternalRequest.h"
#include "model/ReleaseClusterByTemplateTagForInternalResult.h"
#include "model/ReleaseClusterHostGroupRequest.h"
#include "model/ReleaseClusterHostGroupResult.h"
#include "model/RemoveScalingConfigItemV2Request.h"
#include "model/RemoveScalingConfigItemV2Result.h"
#include "model/RerunFlowRequest.h"
#include "model/RerunFlowResult.h"
#include "model/ResizeClusterV2Request.h"
#include "model/ResizeClusterV2Result.h"
#include "model/RestoreBackupRequest.h"
#include "model/RestoreBackupResult.h"
#include "model/RestoreFlowEntitySnapshotRequest.h"
#include "model/RestoreFlowEntitySnapshotResult.h"
#include "model/ResumeExecutionPlanSchedulerRequest.h"
#include "model/ResumeExecutionPlanSchedulerResult.h"
#include "model/ResumeFlowRequest.h"
#include "model/ResumeFlowResult.h"
#include "model/RetryOperationRequest.h"
#include "model/RetryOperationResult.h"
#include "model/RunClusterServiceActionRequest.h"
#include "model/RunClusterServiceActionResult.h"
#include "model/RunExecutionPlanRequest.h"
#include "model/RunExecutionPlanResult.h"
#include "model/RunScalingActionV2Request.h"
#include "model/RunScalingActionV2Result.h"
#include "model/SearchLogRequest.h"
#include "model/SearchLogResult.h"
#include "model/StartFlowRequest.h"
#include "model/StartFlowResult.h"
#include "model/SubmitFlowRequest.h"
#include "model/SubmitFlowResult.h"
#include "model/SubmitFlowJobRequest.h"
#include "model/SubmitFlowJobResult.h"
#include "model/SuspendExecutionPlanSchedulerRequest.h"
#include "model/SuspendExecutionPlanSchedulerResult.h"
#include "model/SuspendFlowRequest.h"
#include "model/SuspendFlowResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TagResourcesSystemTagsRequest.h"
#include "model/TagResourcesSystemTagsResult.h"
#include "model/UninstallLibrariesRequest.h"
#include "model/UninstallLibrariesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UntagResourcesSystemTagsRequest.h"
#include "model/UntagResourcesSystemTagsResult.h"
#include "model/UpdateDataSourceRequest.h"
#include "model/UpdateDataSourceResult.h"
#include "model/UpdateLibraryInstallTaskStatusRequest.h"
#include "model/UpdateLibraryInstallTaskStatusResult.h"
#include "model/UpdateTagRequest.h"
#include "model/UpdateTagResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"


namespace AlibabaCloud
{
	namespace Emr
	{
		class ALIBABACLOUD_EMR_EXPORT EmrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddClusterServiceResult> AddClusterServiceOutcome;
			typedef std::future<AddClusterServiceOutcome> AddClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddClusterServiceRequest&, const AddClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::AddScalingConfigItemV2Result> AddScalingConfigItemV2Outcome;
			typedef std::future<AddScalingConfigItemV2Outcome> AddScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddScalingConfigItemV2Request&, const AddScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupResult> AuthorizeSecurityGroupOutcome;
			typedef std::future<AuthorizeSecurityGroupOutcome> AuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AuthorizeSecurityGroupRequest&, const AuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::CancelOrderResult> CancelOrderOutcome;
			typedef std::future<CancelOrderOutcome> CancelOrderOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CancelOrderRequest&, const CancelOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrderAsyncHandler;
			typedef Outcome<Error, Model::CleanupFlowEntitySnapshotResult> CleanupFlowEntitySnapshotOutcome;
			typedef std::future<CleanupFlowEntitySnapshotOutcome> CleanupFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CleanupFlowEntitySnapshotRequest&, const CleanupFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CleanupFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::CloneFlowResult> CloneFlowOutcome;
			typedef std::future<CloneFlowOutcome> CloneFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowRequest&, const CloneFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowAsyncHandler;
			typedef Outcome<Error, Model::CloneFlowJobResult> CloneFlowJobOutcome;
			typedef std::future<CloneFlowJobOutcome> CloneFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowJobRequest&, const CloneFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CommitFlowEntitySnapshotResult> CommitFlowEntitySnapshotOutcome;
			typedef std::future<CommitFlowEntitySnapshotOutcome> CommitFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CommitFlowEntitySnapshotRequest&, const CommitFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPlanResult> CreateBackupPlanOutcome;
			typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateBackupPlanRequest&, const CreateBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterBootstrapActionResult> CreateClusterBootstrapActionOutcome;
			typedef std::future<CreateClusterBootstrapActionOutcome> CreateClusterBootstrapActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterBootstrapActionRequest&, const CreateClusterBootstrapActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterBootstrapActionAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterTemplateResult> CreateClusterTemplateOutcome;
			typedef std::future<CreateClusterTemplateOutcome> CreateClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterTemplateRequest&, const CreateClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterV2Result> CreateClusterV2Outcome;
			typedef std::future<CreateClusterV2Outcome> CreateClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterV2Request&, const CreateClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterV2AsyncHandler;
			typedef Outcome<Error, Model::CreateClusterWithTemplateResult> CreateClusterWithTemplateOutcome;
			typedef std::future<CreateClusterWithTemplateOutcome> CreateClusterWithTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterWithTemplateRequest&, const CreateClusterWithTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterWithTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateDataSourceResult> CreateDataSourceOutcome;
			typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateDataSourceRequest&, const CreateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateExecutionPlanResult> CreateExecutionPlanOutcome;
			typedef std::future<CreateExecutionPlanOutcome> CreateExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateExecutionPlanRequest&, const CreateExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowResult> CreateFlowOutcome;
			typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowRequest&, const CreateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowCategoryResult> CreateFlowCategoryOutcome;
			typedef std::future<CreateFlowCategoryOutcome> CreateFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowCategoryRequest&, const CreateFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowEditLockResult> CreateFlowEditLockOutcome;
			typedef std::future<CreateFlowEditLockOutcome> CreateFlowEditLockOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowEditLockRequest&, const CreateFlowEditLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowEditLockAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowForWebResult> CreateFlowForWebOutcome;
			typedef std::future<CreateFlowForWebOutcome> CreateFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowForWebRequest&, const CreateFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowJobResult> CreateFlowJobOutcome;
			typedef std::future<CreateFlowJobOutcome> CreateFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowJobRequest&, const CreateFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectResult> CreateFlowProjectOutcome;
			typedef std::future<CreateFlowProjectOutcome> CreateFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectRequest&, const CreateFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectClusterSettingResult> CreateFlowProjectClusterSettingOutcome;
			typedef std::future<CreateFlowProjectClusterSettingOutcome> CreateFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectClusterSettingRequest&, const CreateFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectUserResult> CreateFlowProjectUserOutcome;
			typedef std::future<CreateFlowProjectUserOutcome> CreateFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectUserRequest&, const CreateFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreateLibraryResult> CreateLibraryOutcome;
			typedef std::future<CreateLibraryOutcome> CreateLibraryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateLibraryRequest&, const CreateLibraryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLibraryAsyncHandler;
			typedef Outcome<Error, Model::CreateMetaTablePreviewTaskResult> CreateMetaTablePreviewTaskOutcome;
			typedef std::future<CreateMetaTablePreviewTaskOutcome> CreateMetaTablePreviewTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateMetaTablePreviewTaskRequest&, const CreateMetaTablePreviewTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetaTablePreviewTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateNoteResult> CreateNoteOutcome;
			typedef std::future<CreateNoteOutcome> CreateNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateNoteRequest&, const CreateNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoteAsyncHandler;
			typedef Outcome<Error, Model::CreateParagraphResult> CreateParagraphOutcome;
			typedef std::future<CreateParagraphOutcome> CreateParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateParagraphRequest&, const CreateParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParagraphAsyncHandler;
			typedef Outcome<Error, Model::CreateResourcePoolResult> CreateResourcePoolOutcome;
			typedef std::future<CreateResourcePoolOutcome> CreateResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourcePoolRequest&, const CreateResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceQueueResult> CreateResourceQueueOutcome;
			typedef std::future<CreateResourceQueueOutcome> CreateResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourceQueueRequest&, const CreateResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingGroupV2Result> CreateScalingGroupV2Outcome;
			typedef std::future<CreateScalingGroupV2Outcome> CreateScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingGroupV2Request&, const CreateScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::CreateScalingRuleResult> CreateScalingRuleOutcome;
			typedef std::future<CreateScalingRuleOutcome> CreateScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingRuleRequest&, const CreateScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateUsersResult> CreateUsersOutcome;
			typedef std::future<CreateUsersOutcome> CreateUsersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateUsersRequest&, const CreateUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsersAsyncHandler;
			typedef Outcome<Error, Model::DecommissionHostComponentResult> DecommissionHostComponentOutcome;
			typedef std::future<DecommissionHostComponentOutcome> DecommissionHostComponentOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DecommissionHostComponentRequest&, const DecommissionHostComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecommissionHostComponentAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterTemplateResult> DeleteClusterTemplateOutcome;
			typedef std::future<DeleteClusterTemplateOutcome> DeleteClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterTemplateRequest&, const DeleteClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteExecutionPlanResult> DeleteExecutionPlanOutcome;
			typedef std::future<DeleteExecutionPlanOutcome> DeleteExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteExecutionPlanRequest&, const DeleteExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowResult> DeleteFlowOutcome;
			typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowRequest&, const DeleteFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowCategoryResult> DeleteFlowCategoryOutcome;
			typedef std::future<DeleteFlowCategoryOutcome> DeleteFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowCategoryRequest&, const DeleteFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowEditLockResult> DeleteFlowEditLockOutcome;
			typedef std::future<DeleteFlowEditLockOutcome> DeleteFlowEditLockOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowEditLockRequest&, const DeleteFlowEditLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowEditLockAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowJobResult> DeleteFlowJobOutcome;
			typedef std::future<DeleteFlowJobOutcome> DeleteFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowJobRequest&, const DeleteFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectResult> DeleteFlowProjectOutcome;
			typedef std::future<DeleteFlowProjectOutcome> DeleteFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectRequest&, const DeleteFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectClusterSettingResult> DeleteFlowProjectClusterSettingOutcome;
			typedef std::future<DeleteFlowProjectClusterSettingOutcome> DeleteFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectClusterSettingRequest&, const DeleteFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectUserResult> DeleteFlowProjectUserOutcome;
			typedef std::future<DeleteFlowProjectUserOutcome> DeleteFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectUserRequest&, const DeleteFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteLibrariesResult> DeleteLibrariesOutcome;
			typedef std::future<DeleteLibrariesOutcome> DeleteLibrariesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteLibrariesRequest&, const DeleteLibrariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLibrariesAsyncHandler;
			typedef Outcome<Error, Model::DeleteNoteResult> DeleteNoteOutcome;
			typedef std::future<DeleteNoteOutcome> DeleteNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteNoteRequest&, const DeleteNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoteAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourcePoolResult> DeleteResourcePoolOutcome;
			typedef std::future<DeleteResourcePoolOutcome> DeleteResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourcePoolRequest&, const DeleteResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceQueueResult> DeleteResourceQueueOutcome;
			typedef std::future<DeleteResourceQueueOutcome> DeleteResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourceQueueRequest&, const DeleteResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingRuleResult> DeleteScalingRuleOutcome;
			typedef std::future<DeleteScalingRuleOutcome> DeleteScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteScalingRuleRequest&, const DeleteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResult> DeleteTagOutcome;
			typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteTagRequest&, const DeleteTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterBasicInfoResult> DescribeClusterBasicInfoOutcome;
			typedef std::future<DescribeClusterBasicInfoOutcome> DescribeClusterBasicInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterBasicInfoRequest&, const DescribeClusterBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterMetaCollectResult> DescribeClusterMetaCollectOutcome;
			typedef std::future<DescribeClusterMetaCollectOutcome> DescribeClusterMetaCollectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterMetaCollectRequest&, const DescribeClusterMetaCollectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterMetaCollectAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterOperationHostTaskLogResult> DescribeClusterOperationHostTaskLogOutcome;
			typedef std::future<DescribeClusterOperationHostTaskLogOutcome> DescribeClusterOperationHostTaskLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterOperationHostTaskLogRequest&, const DescribeClusterOperationHostTaskLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterOperationHostTaskLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResourcePoolSchedulerTypeResult> DescribeClusterResourcePoolSchedulerTypeOutcome;
			typedef std::future<DescribeClusterResourcePoolSchedulerTypeOutcome> DescribeClusterResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterResourcePoolSchedulerTypeRequest&, const DescribeClusterResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceResult> DescribeClusterServiceOutcome;
			typedef std::future<DescribeClusterServiceOutcome> DescribeClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceRequest&, const DescribeClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigResult> DescribeClusterServiceConfigOutcome;
			typedef std::future<DescribeClusterServiceConfigOutcome> DescribeClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigRequest&, const DescribeClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigHistoryResult> DescribeClusterServiceConfigHistoryOutcome;
			typedef std::future<DescribeClusterServiceConfigHistoryOutcome> DescribeClusterServiceConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigHistoryRequest&, const DescribeClusterServiceConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigTagResult> DescribeClusterServiceConfigTagOutcome;
			typedef std::future<DescribeClusterServiceConfigTagOutcome> DescribeClusterServiceConfigTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigTagRequest&, const DescribeClusterServiceConfigTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigTagAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterTemplateResult> DescribeClusterTemplateOutcome;
			typedef std::future<DescribeClusterTemplateOutcome> DescribeClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterTemplateRequest&, const DescribeClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterV2Result> DescribeClusterV2Outcome;
			typedef std::future<DescribeClusterV2Outcome> DescribeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterV2Request&, const DescribeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceResult> DescribeDataSourceOutcome;
			typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeDataSourceRequest&, const DescribeDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeExecutionPlanResult> DescribeExecutionPlanOutcome;
			typedef std::future<DescribeExecutionPlanOutcome> DescribeExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeExecutionPlanRequest&, const DescribeExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowResult> DescribeFlowOutcome;
			typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowRequest&, const DescribeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowAgentTokenResult> DescribeFlowAgentTokenOutcome;
			typedef std::future<DescribeFlowAgentTokenOutcome> DescribeFlowAgentTokenOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowAgentTokenRequest&, const DescribeFlowAgentTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAgentTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowAgentUserResult> DescribeFlowAgentUserOutcome;
			typedef std::future<DescribeFlowAgentUserOutcome> DescribeFlowAgentUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowAgentUserRequest&, const DescribeFlowAgentUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAgentUserAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryResult> DescribeFlowCategoryOutcome;
			typedef std::future<DescribeFlowCategoryOutcome> DescribeFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryRequest&, const DescribeFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryTreeResult> DescribeFlowCategoryTreeOutcome;
			typedef std::future<DescribeFlowCategoryTreeOutcome> DescribeFlowCategoryTreeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryTreeRequest&, const DescribeFlowCategoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryTreeAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowEntitySnapshotResult> DescribeFlowEntitySnapshotOutcome;
			typedef std::future<DescribeFlowEntitySnapshotOutcome> DescribeFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowEntitySnapshotRequest&, const DescribeFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowInstanceResult> DescribeFlowInstanceOutcome;
			typedef std::future<DescribeFlowInstanceOutcome> DescribeFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowInstanceRequest&, const DescribeFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowJobResult> DescribeFlowJobOutcome;
			typedef std::future<DescribeFlowJobOutcome> DescribeFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowJobRequest&, const DescribeFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceResult> DescribeFlowNodeInstanceOutcome;
			typedef std::future<DescribeFlowNodeInstanceOutcome> DescribeFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceRequest&, const DescribeFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceContainerLogResult> DescribeFlowNodeInstanceContainerLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceContainerLogOutcome> DescribeFlowNodeInstanceContainerLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceContainerLogRequest&, const DescribeFlowNodeInstanceContainerLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceContainerLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceLauncherLogResult> DescribeFlowNodeInstanceLauncherLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceLauncherLogOutcome> DescribeFlowNodeInstanceLauncherLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceLauncherLogRequest&, const DescribeFlowNodeInstanceLauncherLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceLauncherLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectResult> DescribeFlowProjectOutcome;
			typedef std::future<DescribeFlowProjectOutcome> DescribeFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectRequest&, const DescribeFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectClusterSettingResult> DescribeFlowProjectClusterSettingOutcome;
			typedef std::future<DescribeFlowProjectClusterSettingOutcome> DescribeFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectClusterSettingRequest&, const DescribeFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeLibraryDetailResult> DescribeLibraryDetailOutcome;
			typedef std::future<DescribeLibraryDetailOutcome> DescribeLibraryDetailOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeLibraryDetailRequest&, const DescribeLibraryDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibraryDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeLibraryInstallTaskDetailResult> DescribeLibraryInstallTaskDetailOutcome;
			typedef std::future<DescribeLibraryInstallTaskDetailOutcome> DescribeLibraryInstallTaskDetailOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeLibraryInstallTaskDetailRequest&, const DescribeLibraryInstallTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLibraryInstallTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetaTablePreviewTaskResult> DescribeMetaTablePreviewTaskOutcome;
			typedef std::future<DescribeMetaTablePreviewTaskOutcome> DescribeMetaTablePreviewTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeMetaTablePreviewTaskRequest&, const DescribeMetaTablePreviewTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetaTablePreviewTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivityResult> DescribeScalingActivityOutcome;
			typedef std::future<DescribeScalingActivityOutcome> DescribeScalingActivityOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingActivityRequest&, const DescribeScalingActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivityAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingCommonConfigResult> DescribeScalingCommonConfigOutcome;
			typedef std::future<DescribeScalingCommonConfigOutcome> DescribeScalingCommonConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingCommonConfigRequest&, const DescribeScalingCommonConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingCommonConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingConfigItemV2Result> DescribeScalingConfigItemV2Outcome;
			typedef std::future<DescribeScalingConfigItemV2Outcome> DescribeScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingConfigItemV2Request&, const DescribeScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupInstanceV2Result> DescribeScalingGroupInstanceV2Outcome;
			typedef std::future<DescribeScalingGroupInstanceV2Outcome> DescribeScalingGroupInstanceV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingGroupInstanceV2Request&, const DescribeScalingGroupInstanceV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupInstanceV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupV2Result> DescribeScalingGroupV2Outcome;
			typedef std::future<DescribeScalingGroupV2Outcome> DescribeScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingGroupV2Request&, const DescribeScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingRuleResult> DescribeScalingRuleOutcome;
			typedef std::future<DescribeScalingRuleOutcome> DescribeScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingRuleRequest&, const DescribeScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupAttributeResult> DescribeSecurityGroupAttributeOutcome;
			typedef std::future<DescribeSecurityGroupAttributeOutcome> DescribeSecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeSecurityGroupAttributeRequest&, const DescribeSecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DetachAndReleaseClusterEniResult> DetachAndReleaseClusterEniOutcome;
			typedef std::future<DetachAndReleaseClusterEniOutcome> DetachAndReleaseClusterEniOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DetachAndReleaseClusterEniRequest&, const DetachAndReleaseClusterEniOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachAndReleaseClusterEniAsyncHandler;
			typedef Outcome<Error, Model::DiffFlowEntitySnapshotResult> DiffFlowEntitySnapshotOutcome;
			typedef std::future<DiffFlowEntitySnapshotOutcome> DiffFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DiffFlowEntitySnapshotRequest&, const DiffFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiffFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::DumpMetaDataSourceForOuterResult> DumpMetaDataSourceForOuterOutcome;
			typedef std::future<DumpMetaDataSourceForOuterOutcome> DumpMetaDataSourceForOuterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DumpMetaDataSourceForOuterRequest&, const DumpMetaDataSourceForOuterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DumpMetaDataSourceForOuterAsyncHandler;
			typedef Outcome<Error, Model::GetFlowEntityRelationGraphResult> GetFlowEntityRelationGraphOutcome;
			typedef std::future<GetFlowEntityRelationGraphOutcome> GetFlowEntityRelationGraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetFlowEntityRelationGraphRequest&, const GetFlowEntityRelationGraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowEntityRelationGraphAsyncHandler;
			typedef Outcome<Error, Model::GetHdfsCapacityStatisticInfoResult> GetHdfsCapacityStatisticInfoOutcome;
			typedef std::future<GetHdfsCapacityStatisticInfoOutcome> GetHdfsCapacityStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetHdfsCapacityStatisticInfoRequest&, const GetHdfsCapacityStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHdfsCapacityStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobInputStatisticInfoResult> GetJobInputStatisticInfoOutcome;
			typedef std::future<GetJobInputStatisticInfoOutcome> GetJobInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobInputStatisticInfoRequest&, const GetJobInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobOutputStatisticInfoResult> GetJobOutputStatisticInfoOutcome;
			typedef std::future<GetJobOutputStatisticInfoOutcome> GetJobOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobOutputStatisticInfoRequest&, const GetJobOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobRunningTimeStatisticInfoResult> GetJobRunningTimeStatisticInfoOutcome;
			typedef std::future<GetJobRunningTimeStatisticInfoOutcome> GetJobRunningTimeStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobRunningTimeStatisticInfoRequest&, const GetJobRunningTimeStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobRunningTimeStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQueueInputStatisticInfoResult> GetQueueInputStatisticInfoOutcome;
			typedef std::future<GetQueueInputStatisticInfoOutcome> GetQueueInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueInputStatisticInfoRequest&, const GetQueueInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQueueOutputStatisticInfoResult> GetQueueOutputStatisticInfoOutcome;
			typedef std::future<GetQueueOutputStatisticInfoOutcome> GetQueueOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueOutputStatisticInfoRequest&, const GetQueueOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQueueSubmissionStatisticInfoResult> GetQueueSubmissionStatisticInfoOutcome;
			typedef std::future<GetQueueSubmissionStatisticInfoOutcome> GetQueueSubmissionStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueSubmissionStatisticInfoRequest&, const GetQueueSubmissionStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueSubmissionStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetUserInputStatisticInfoResult> GetUserInputStatisticInfoOutcome;
			typedef std::future<GetUserInputStatisticInfoOutcome> GetUserInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserInputStatisticInfoRequest&, const GetUserInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetUserOutputStatisticInfoResult> GetUserOutputStatisticInfoOutcome;
			typedef std::future<GetUserOutputStatisticInfoOutcome> GetUserOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserOutputStatisticInfoRequest&, const GetUserOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::GetUserSubmissionStatisticInfoResult> GetUserSubmissionStatisticInfoOutcome;
			typedef std::future<GetUserSubmissionStatisticInfoOutcome> GetUserSubmissionStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserSubmissionStatisticInfoRequest&, const GetUserSubmissionStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserSubmissionStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::InstallLibrariesResult> InstallLibrariesOutcome;
			typedef std::future<InstallLibrariesOutcome> InstallLibrariesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::InstallLibrariesRequest&, const InstallLibrariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallLibrariesAsyncHandler;
			typedef Outcome<Error, Model::JoinResourceGroupResult> JoinResourceGroupOutcome;
			typedef std::future<JoinResourceGroupOutcome> JoinResourceGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::JoinResourceGroupRequest&, const JoinResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::KillExecutionJobInstanceResult> KillExecutionJobInstanceOutcome;
			typedef std::future<KillExecutionJobInstanceOutcome> KillExecutionJobInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillExecutionJobInstanceRequest&, const KillExecutionJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillExecutionJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::KillFlowJobResult> KillFlowJobOutcome;
			typedef std::future<KillFlowJobOutcome> KillFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillFlowJobRequest&, const KillFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ListAdviceActionResult> ListAdviceActionOutcome;
			typedef std::future<ListAdviceActionOutcome> ListAdviceActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAdviceActionRequest&, const ListAdviceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAdviceActionAsyncHandler;
			typedef Outcome<Error, Model::ListApmApplicationResult> ListApmApplicationOutcome;
			typedef std::future<ListApmApplicationOutcome> ListApmApplicationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListApmApplicationRequest&, const ListApmApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApmApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListBackupsResult> ListBackupsOutcome;
			typedef std::future<ListBackupsOutcome> ListBackupsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListBackupsRequest&, const ListBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBackupsAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostResult> ListClusterHostOutcome;
			typedef std::future<ListClusterHostOutcome> ListClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostRequest&, const ListClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostComponentResult> ListClusterHostComponentOutcome;
			typedef std::future<ListClusterHostComponentOutcome> ListClusterHostComponentOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostComponentRequest&, const ListClusterHostComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostComponentAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostGroupResult> ListClusterHostGroupOutcome;
			typedef std::future<ListClusterHostGroupOutcome> ListClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostGroupRequest&, const ListClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::ListClusterInstalledServiceResult> ListClusterInstalledServiceOutcome;
			typedef std::future<ListClusterInstalledServiceOutcome> ListClusterInstalledServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterInstalledServiceRequest&, const ListClusterInstalledServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterInstalledServiceAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationResult> ListClusterOperationOutcome;
			typedef std::future<ListClusterOperationOutcome> ListClusterOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationRequest&, const ListClusterOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostResult> ListClusterOperationHostOutcome;
			typedef std::future<ListClusterOperationHostOutcome> ListClusterOperationHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostRequest&, const ListClusterOperationHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostTaskResult> ListClusterOperationHostTaskOutcome;
			typedef std::future<ListClusterOperationHostTaskOutcome> ListClusterOperationHostTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostTaskRequest&, const ListClusterOperationHostTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostTaskAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationTaskResult> ListClusterOperationTaskOutcome;
			typedef std::future<ListClusterOperationTaskOutcome> ListClusterOperationTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationTaskRequest&, const ListClusterOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceResult> ListClusterServiceOutcome;
			typedef std::future<ListClusterServiceOutcome> ListClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceRequest&, const ListClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceComponentResult> ListClusterServiceComponentOutcome;
			typedef std::future<ListClusterServiceComponentOutcome> ListClusterServiceComponentOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceComponentRequest&, const ListClusterServiceComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceComponentAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceComponentHealthInfoResult> ListClusterServiceComponentHealthInfoOutcome;
			typedef std::future<ListClusterServiceComponentHealthInfoOutcome> ListClusterServiceComponentHealthInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceComponentHealthInfoRequest&, const ListClusterServiceComponentHealthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceComponentHealthInfoAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceConfigHistoryResult> ListClusterServiceConfigHistoryOutcome;
			typedef std::future<ListClusterServiceConfigHistoryOutcome> ListClusterServiceConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceConfigHistoryRequest&, const ListClusterServiceConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceQuickLinkResult> ListClusterServiceQuickLinkOutcome;
			typedef std::future<ListClusterServiceQuickLinkOutcome> ListClusterServiceQuickLinkOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceQuickLinkRequest&, const ListClusterServiceQuickLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceQuickLinkAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTemplatesResult> ListClusterTemplatesOutcome;
			typedef std::future<ListClusterTemplatesOutcome> ListClusterTemplatesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterTemplatesRequest&, const ListClusterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableConfigResult> ListEmrAvailableConfigOutcome;
			typedef std::future<ListEmrAvailableConfigOutcome> ListEmrAvailableConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableConfigRequest&, const ListEmrAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableResourceResult> ListEmrAvailableResourceOutcome;
			typedef std::future<ListEmrAvailableResourceOutcome> ListEmrAvailableResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableResourceRequest&, const ListEmrAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::ListEmrMainVersionResult> ListEmrMainVersionOutcome;
			typedef std::future<ListEmrMainVersionOutcome> ListEmrMainVersionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrMainVersionRequest&, const ListEmrMainVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrMainVersionAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionPlanInstancesResult> ListExecutionPlanInstancesOutcome;
			typedef std::future<ListExecutionPlanInstancesOutcome> ListExecutionPlanInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutionPlanInstancesRequest&, const ListExecutionPlanInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionPlanInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionPlansResult> ListExecutionPlansOutcome;
			typedef std::future<ListExecutionPlansOutcome> ListExecutionPlansOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutionPlansRequest&, const ListExecutionPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionPlansAsyncHandler;
			typedef Outcome<Error, Model::ListFlowResult> ListFlowOutcome;
			typedef std::future<ListFlowOutcome> ListFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowRequest&, const ListFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowAsyncHandler;
			typedef Outcome<Error, Model::ListFlowCategoryResult> ListFlowCategoryOutcome;
			typedef std::future<ListFlowCategoryOutcome> ListFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowCategoryRequest&, const ListFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterResult> ListFlowClusterOutcome;
			typedef std::future<ListFlowClusterOutcome> ListFlowClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterRequest&, const ListFlowClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllResult> ListFlowClusterAllOutcome;
			typedef std::future<ListFlowClusterAllOutcome> ListFlowClusterAllOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllRequest&, const ListFlowClusterAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllHostsResult> ListFlowClusterAllHostsOutcome;
			typedef std::future<ListFlowClusterAllHostsOutcome> ListFlowClusterAllHostsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllHostsRequest&, const ListFlowClusterAllHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllHostsAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterHostResult> ListFlowClusterHostOutcome;
			typedef std::future<ListFlowClusterHostOutcome> ListFlowClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterHostRequest&, const ListFlowClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ListFlowEntitySnapshotResult> ListFlowEntitySnapshotOutcome;
			typedef std::future<ListFlowEntitySnapshotOutcome> ListFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowEntitySnapshotRequest&, const ListFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::ListFlowInstanceResult> ListFlowInstanceOutcome;
			typedef std::future<ListFlowInstanceOutcome> ListFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowInstanceRequest&, const ListFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobResult> ListFlowJobOutcome;
			typedef std::future<ListFlowJobOutcome> ListFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobRequest&, const ListFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobHistoryResult> ListFlowJobHistoryOutcome;
			typedef std::future<ListFlowJobHistoryOutcome> ListFlowJobHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobHistoryRequest&, const ListFlowJobHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceResult> ListFlowNodeInstanceOutcome;
			typedef std::future<ListFlowNodeInstanceOutcome> ListFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceRequest&, const ListFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceContainerStatusResult> ListFlowNodeInstanceContainerStatusOutcome;
			typedef std::future<ListFlowNodeInstanceContainerStatusOutcome> ListFlowNodeInstanceContainerStatusOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceContainerStatusRequest&, const ListFlowNodeInstanceContainerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceContainerStatusAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeSqlResultResult> ListFlowNodeSqlResultOutcome;
			typedef std::future<ListFlowNodeSqlResultOutcome> ListFlowNodeSqlResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeSqlResultRequest&, const ListFlowNodeSqlResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeSqlResultAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectResult> ListFlowProjectOutcome;
			typedef std::future<ListFlowProjectOutcome> ListFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectRequest&, const ListFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectClusterSettingResult> ListFlowProjectClusterSettingOutcome;
			typedef std::future<ListFlowProjectClusterSettingOutcome> ListFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectClusterSettingRequest&, const ListFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectUserResult> ListFlowProjectUserOutcome;
			typedef std::future<ListFlowProjectUserOutcome> ListFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectUserRequest&, const ListFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionInstancesResult> ListJobExecutionInstancesOutcome;
			typedef std::future<ListJobExecutionInstancesOutcome> ListJobExecutionInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobExecutionInstancesRequest&, const ListJobExecutionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListJobInstanceWorkersResult> ListJobInstanceWorkersOutcome;
			typedef std::future<ListJobInstanceWorkersOutcome> ListJobInstanceWorkersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobInstanceWorkersRequest&, const ListJobInstanceWorkersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobInstanceWorkersAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLibrariesResult> ListLibrariesOutcome;
			typedef std::future<ListLibrariesOutcome> ListLibrariesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListLibrariesRequest&, const ListLibrariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLibrariesAsyncHandler;
			typedef Outcome<Error, Model::ListLibraryInstallTasksResult> ListLibraryInstallTasksOutcome;
			typedef std::future<ListLibraryInstallTasksOutcome> ListLibraryInstallTasksOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListLibraryInstallTasksRequest&, const ListLibraryInstallTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLibraryInstallTasksAsyncHandler;
			typedef Outcome<Error, Model::ListLibraryStatusResult> ListLibraryStatusOutcome;
			typedef std::future<ListLibraryStatusOutcome> ListLibraryStatusOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListLibraryStatusRequest&, const ListLibraryStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLibraryStatusAsyncHandler;
			typedef Outcome<Error, Model::ListMetaClusterResult> ListMetaClusterOutcome;
			typedef std::future<ListMetaClusterOutcome> ListMetaClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListMetaClusterRequest&, const ListMetaClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaClusterAsyncHandler;
			typedef Outcome<Error, Model::ListMetaDataSourceClusterForOuterResult> ListMetaDataSourceClusterForOuterOutcome;
			typedef std::future<ListMetaDataSourceClusterForOuterOutcome> ListMetaDataSourceClusterForOuterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListMetaDataSourceClusterForOuterRequest&, const ListMetaDataSourceClusterForOuterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaDataSourceClusterForOuterAsyncHandler;
			typedef Outcome<Error, Model::ListNotesResult> ListNotesOutcome;
			typedef std::future<ListNotesOutcome> ListNotesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNotesRequest&, const ListNotesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotesAsyncHandler;
			typedef Outcome<Error, Model::ListResourcePoolResult> ListResourcePoolOutcome;
			typedef std::future<ListResourcePoolOutcome> ListResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListResourcePoolRequest&, const ListResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListScalingActivityV2Result> ListScalingActivityV2Outcome;
			typedef std::future<ListScalingActivityV2Outcome> ListScalingActivityV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingActivityV2Request&, const ListScalingActivityV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingActivityV2AsyncHandler;
			typedef Outcome<Error, Model::ListScalingConfigItemV2Result> ListScalingConfigItemV2Outcome;
			typedef std::future<ListScalingConfigItemV2Outcome> ListScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingConfigItemV2Request&, const ListScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::ListScalingGroupV2Result> ListScalingGroupV2Outcome;
			typedef std::future<ListScalingGroupV2Outcome> ListScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingGroupV2Request&, const ListScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::ListSecurityGroupResult> ListSecurityGroupOutcome;
			typedef std::future<ListSecurityGroupOutcome> ListSecurityGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListSecurityGroupRequest&, const ListSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::ListStackResult> ListStackOutcome;
			typedef std::future<ListStackOutcome> ListStackOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListStackRequest&, const ListStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStackAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListVswitchResult> ListVswitchOutcome;
			typedef std::future<ListVswitchOutcome> ListVswitchOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListVswitchRequest&, const ListVswitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVswitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterBootstrapActionResult> ModifyClusterBootstrapActionOutcome;
			typedef std::future<ModifyClusterBootstrapActionOutcome> ModifyClusterBootstrapActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterBootstrapActionRequest&, const ModifyClusterBootstrapActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterBootstrapActionAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterHostGroupResult> ModifyClusterHostGroupOutcome;
			typedef std::future<ModifyClusterHostGroupOutcome> ModifyClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterHostGroupRequest&, const ModifyClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterMetaCollectResult> ModifyClusterMetaCollectOutcome;
			typedef std::future<ModifyClusterMetaCollectOutcome> ModifyClusterMetaCollectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterMetaCollectRequest&, const ModifyClusterMetaCollectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterMetaCollectAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterNameResult> ModifyClusterNameOutcome;
			typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterNameRequest&, const ModifyClusterNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterSecurityGroupRuleResult> ModifyClusterSecurityGroupRuleOutcome;
			typedef std::future<ModifyClusterSecurityGroupRuleOutcome> ModifyClusterSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterSecurityGroupRuleRequest&, const ModifyClusterSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterServiceConfigResult> ModifyClusterServiceConfigOutcome;
			typedef std::future<ModifyClusterServiceConfigOutcome> ModifyClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterServiceConfigRequest&, const ModifyClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterTemplateResult> ModifyClusterTemplateOutcome;
			typedef std::future<ModifyClusterTemplateOutcome> ModifyClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterTemplateRequest&, const ModifyClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanResult> ModifyExecutionPlanOutcome;
			typedef std::future<ModifyExecutionPlanOutcome> ModifyExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanRequest&, const ModifyExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowResult> ModifyFlowOutcome;
			typedef std::future<ModifyFlowOutcome> ModifyFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowRequest&, const ModifyFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowCategoryResult> ModifyFlowCategoryOutcome;
			typedef std::future<ModifyFlowCategoryOutcome> ModifyFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowCategoryRequest&, const ModifyFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowForWebResult> ModifyFlowForWebOutcome;
			typedef std::future<ModifyFlowForWebOutcome> ModifyFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowForWebRequest&, const ModifyFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowJobResult> ModifyFlowJobOutcome;
			typedef std::future<ModifyFlowJobOutcome> ModifyFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowJobRequest&, const ModifyFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectResult> ModifyFlowProjectOutcome;
			typedef std::future<ModifyFlowProjectOutcome> ModifyFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectRequest&, const ModifyFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectClusterSettingResult> ModifyFlowProjectClusterSettingOutcome;
			typedef std::future<ModifyFlowProjectClusterSettingOutcome> ModifyFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectClusterSettingRequest&, const ModifyFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::ModifyJobResult> ModifyJobOutcome;
			typedef std::future<ModifyJobOutcome> ModifyJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyJobRequest&, const ModifyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolResult> ModifyResourcePoolOutcome;
			typedef std::future<ModifyResourcePoolOutcome> ModifyResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolRequest&, const ModifyResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolSchedulerTypeResult> ModifyResourcePoolSchedulerTypeOutcome;
			typedef std::future<ModifyResourcePoolSchedulerTypeOutcome> ModifyResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolSchedulerTypeRequest&, const ModifyResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceQueueResult> ModifyResourceQueueOutcome;
			typedef std::future<ModifyResourceQueueOutcome> ModifyResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourceQueueRequest&, const ModifyResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingConfigItemV2Result> ModifyScalingConfigItemV2Outcome;
			typedef std::future<ModifyScalingConfigItemV2Outcome> ModifyScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingConfigItemV2Request&, const ModifyScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingGroupV2Result> ModifyScalingGroupV2Outcome;
			typedef std::future<ModifyScalingGroupV2Outcome> ModifyScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingGroupV2Request&, const ModifyScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingRuleResult> ModifyScalingRuleOutcome;
			typedef std::future<ModifyScalingRuleOutcome> ModifyScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingRuleRequest&, const ModifyScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingTaskGroupResult> ModifyScalingTaskGroupOutcome;
			typedef std::future<ModifyScalingTaskGroupOutcome> ModifyScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingTaskGroupRequest&, const ModifyScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryAlarmHistoryResult> QueryAlarmHistoryOutcome;
			typedef std::future<QueryAlarmHistoryOutcome> QueryAlarmHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryAlarmHistoryRequest&, const QueryAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::QueryEntityResult> QueryEntityOutcome;
			typedef std::future<QueryEntityOutcome> QueryEntityOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryEntityRequest&, const QueryEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEntityAsyncHandler;
			typedef Outcome<Error, Model::QueryTableDataResult> QueryTableDataOutcome;
			typedef std::future<QueryTableDataOutcome> QueryTableDataOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryTableDataRequest&, const QueryTableDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTableDataAsyncHandler;
			typedef Outcome<Error, Model::QueryTagResult> QueryTagOutcome;
			typedef std::future<QueryTagOutcome> QueryTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryTagRequest&, const QueryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTagAsyncHandler;
			typedef Outcome<Error, Model::QueryTrendDataResult> QueryTrendDataOutcome;
			typedef std::future<QueryTrendDataOutcome> QueryTrendDataOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryTrendDataRequest&, const QueryTrendDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrendDataAsyncHandler;
			typedef Outcome<Error, Model::RefreshClusterResourcePoolResult> RefreshClusterResourcePoolOutcome;
			typedef std::future<RefreshClusterResourcePoolOutcome> RefreshClusterResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RefreshClusterResourcePoolRequest&, const RefreshClusterResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshClusterResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterResult> ReleaseClusterOutcome;
			typedef std::future<ReleaseClusterOutcome> ReleaseClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterRequest&, const ReleaseClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterByTemplateTagForInternalResult> ReleaseClusterByTemplateTagForInternalOutcome;
			typedef std::future<ReleaseClusterByTemplateTagForInternalOutcome> ReleaseClusterByTemplateTagForInternalOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterByTemplateTagForInternalRequest&, const ReleaseClusterByTemplateTagForInternalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterByTemplateTagForInternalAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterHostGroupResult> ReleaseClusterHostGroupOutcome;
			typedef std::future<ReleaseClusterHostGroupOutcome> ReleaseClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterHostGroupRequest&, const ReleaseClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveScalingConfigItemV2Result> RemoveScalingConfigItemV2Outcome;
			typedef std::future<RemoveScalingConfigItemV2Outcome> RemoveScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RemoveScalingConfigItemV2Request&, const RemoveScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::RerunFlowResult> RerunFlowOutcome;
			typedef std::future<RerunFlowOutcome> RerunFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RerunFlowRequest&, const RerunFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunFlowAsyncHandler;
			typedef Outcome<Error, Model::ResizeClusterV2Result> ResizeClusterV2Outcome;
			typedef std::future<ResizeClusterV2Outcome> ResizeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResizeClusterV2Request&, const ResizeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::RestoreBackupResult> RestoreBackupOutcome;
			typedef std::future<RestoreBackupOutcome> RestoreBackupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RestoreBackupRequest&, const RestoreBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreBackupAsyncHandler;
			typedef Outcome<Error, Model::RestoreFlowEntitySnapshotResult> RestoreFlowEntitySnapshotOutcome;
			typedef std::future<RestoreFlowEntitySnapshotOutcome> RestoreFlowEntitySnapshotOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RestoreFlowEntitySnapshotRequest&, const RestoreFlowEntitySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreFlowEntitySnapshotAsyncHandler;
			typedef Outcome<Error, Model::ResumeExecutionPlanSchedulerResult> ResumeExecutionPlanSchedulerOutcome;
			typedef std::future<ResumeExecutionPlanSchedulerOutcome> ResumeExecutionPlanSchedulerOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeExecutionPlanSchedulerRequest&, const ResumeExecutionPlanSchedulerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeExecutionPlanSchedulerAsyncHandler;
			typedef Outcome<Error, Model::ResumeFlowResult> ResumeFlowOutcome;
			typedef std::future<ResumeFlowOutcome> ResumeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeFlowRequest&, const ResumeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeFlowAsyncHandler;
			typedef Outcome<Error, Model::RetryOperationResult> RetryOperationOutcome;
			typedef std::future<RetryOperationOutcome> RetryOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RetryOperationRequest&, const RetryOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryOperationAsyncHandler;
			typedef Outcome<Error, Model::RunClusterServiceActionResult> RunClusterServiceActionOutcome;
			typedef std::future<RunClusterServiceActionOutcome> RunClusterServiceActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunClusterServiceActionRequest&, const RunClusterServiceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunClusterServiceActionAsyncHandler;
			typedef Outcome<Error, Model::RunExecutionPlanResult> RunExecutionPlanOutcome;
			typedef std::future<RunExecutionPlanOutcome> RunExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunExecutionPlanRequest&, const RunExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::RunScalingActionV2Result> RunScalingActionV2Outcome;
			typedef std::future<RunScalingActionV2Outcome> RunScalingActionV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunScalingActionV2Request&, const RunScalingActionV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunScalingActionV2AsyncHandler;
			typedef Outcome<Error, Model::SearchLogResult> SearchLogOutcome;
			typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SearchLogRequest&, const SearchLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
			typedef Outcome<Error, Model::StartFlowResult> StartFlowOutcome;
			typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::StartFlowRequest&, const StartFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowResult> SubmitFlowOutcome;
			typedef std::future<SubmitFlowOutcome> SubmitFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowRequest&, const SubmitFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowJobResult> SubmitFlowJobOutcome;
			typedef std::future<SubmitFlowJobOutcome> SubmitFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowJobRequest&, const SubmitFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendExecutionPlanSchedulerResult> SuspendExecutionPlanSchedulerOutcome;
			typedef std::future<SuspendExecutionPlanSchedulerOutcome> SuspendExecutionPlanSchedulerOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendExecutionPlanSchedulerRequest&, const SuspendExecutionPlanSchedulerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendExecutionPlanSchedulerAsyncHandler;
			typedef Outcome<Error, Model::SuspendFlowResult> SuspendFlowOutcome;
			typedef std::future<SuspendFlowOutcome> SuspendFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendFlowRequest&, const SuspendFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendFlowAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesSystemTagsResult> TagResourcesSystemTagsOutcome;
			typedef std::future<TagResourcesSystemTagsOutcome> TagResourcesSystemTagsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TagResourcesSystemTagsRequest&, const TagResourcesSystemTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesSystemTagsAsyncHandler;
			typedef Outcome<Error, Model::UninstallLibrariesResult> UninstallLibrariesOutcome;
			typedef std::future<UninstallLibrariesOutcome> UninstallLibrariesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UninstallLibrariesRequest&, const UninstallLibrariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallLibrariesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesSystemTagsResult> UntagResourcesSystemTagsOutcome;
			typedef std::future<UntagResourcesSystemTagsOutcome> UntagResourcesSystemTagsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UntagResourcesSystemTagsRequest&, const UntagResourcesSystemTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesSystemTagsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataSourceResult> UpdateDataSourceOutcome;
			typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateDataSourceRequest&, const UpdateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateLibraryInstallTaskStatusResult> UpdateLibraryInstallTaskStatusOutcome;
			typedef std::future<UpdateLibraryInstallTaskStatusOutcome> UpdateLibraryInstallTaskStatusOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateLibraryInstallTaskStatusRequest&, const UpdateLibraryInstallTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLibraryInstallTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateTagResult> UpdateTagOutcome;
			typedef std::future<UpdateTagOutcome> UpdateTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateTagRequest&, const UpdateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTagAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;

			EmrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EmrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EmrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EmrClient();
			AddClusterServiceOutcome addClusterService(const Model::AddClusterServiceRequest &request)const;
			void addClusterServiceAsync(const Model::AddClusterServiceRequest& request, const AddClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClusterServiceOutcomeCallable addClusterServiceCallable(const Model::AddClusterServiceRequest& request) const;
			AddScalingConfigItemV2Outcome addScalingConfigItemV2(const Model::AddScalingConfigItemV2Request &request)const;
			void addScalingConfigItemV2Async(const Model::AddScalingConfigItemV2Request& request, const AddScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddScalingConfigItemV2OutcomeCallable addScalingConfigItemV2Callable(const Model::AddScalingConfigItemV2Request& request) const;
			AuthorizeSecurityGroupOutcome authorizeSecurityGroup(const Model::AuthorizeSecurityGroupRequest &request)const;
			void authorizeSecurityGroupAsync(const Model::AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupOutcomeCallable authorizeSecurityGroupCallable(const Model::AuthorizeSecurityGroupRequest& request) const;
			CancelOrderOutcome cancelOrder(const Model::CancelOrderRequest &request)const;
			void cancelOrderAsync(const Model::CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOrderOutcomeCallable cancelOrderCallable(const Model::CancelOrderRequest& request) const;
			CleanupFlowEntitySnapshotOutcome cleanupFlowEntitySnapshot(const Model::CleanupFlowEntitySnapshotRequest &request)const;
			void cleanupFlowEntitySnapshotAsync(const Model::CleanupFlowEntitySnapshotRequest& request, const CleanupFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CleanupFlowEntitySnapshotOutcomeCallable cleanupFlowEntitySnapshotCallable(const Model::CleanupFlowEntitySnapshotRequest& request) const;
			CloneFlowOutcome cloneFlow(const Model::CloneFlowRequest &request)const;
			void cloneFlowAsync(const Model::CloneFlowRequest& request, const CloneFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowOutcomeCallable cloneFlowCallable(const Model::CloneFlowRequest& request) const;
			CloneFlowJobOutcome cloneFlowJob(const Model::CloneFlowJobRequest &request)const;
			void cloneFlowJobAsync(const Model::CloneFlowJobRequest& request, const CloneFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowJobOutcomeCallable cloneFlowJobCallable(const Model::CloneFlowJobRequest& request) const;
			CommitFlowEntitySnapshotOutcome commitFlowEntitySnapshot(const Model::CommitFlowEntitySnapshotRequest &request)const;
			void commitFlowEntitySnapshotAsync(const Model::CommitFlowEntitySnapshotRequest& request, const CommitFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitFlowEntitySnapshotOutcomeCallable commitFlowEntitySnapshotCallable(const Model::CommitFlowEntitySnapshotRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateBackupPlanOutcome createBackupPlan(const Model::CreateBackupPlanRequest &request)const;
			void createBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPlanOutcomeCallable createBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;
			CreateClusterBootstrapActionOutcome createClusterBootstrapAction(const Model::CreateClusterBootstrapActionRequest &request)const;
			void createClusterBootstrapActionAsync(const Model::CreateClusterBootstrapActionRequest& request, const CreateClusterBootstrapActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterBootstrapActionOutcomeCallable createClusterBootstrapActionCallable(const Model::CreateClusterBootstrapActionRequest& request) const;
			CreateClusterTemplateOutcome createClusterTemplate(const Model::CreateClusterTemplateRequest &request)const;
			void createClusterTemplateAsync(const Model::CreateClusterTemplateRequest& request, const CreateClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterTemplateOutcomeCallable createClusterTemplateCallable(const Model::CreateClusterTemplateRequest& request) const;
			CreateClusterV2Outcome createClusterV2(const Model::CreateClusterV2Request &request)const;
			void createClusterV2Async(const Model::CreateClusterV2Request& request, const CreateClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterV2OutcomeCallable createClusterV2Callable(const Model::CreateClusterV2Request& request) const;
			CreateClusterWithTemplateOutcome createClusterWithTemplate(const Model::CreateClusterWithTemplateRequest &request)const;
			void createClusterWithTemplateAsync(const Model::CreateClusterWithTemplateRequest& request, const CreateClusterWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterWithTemplateOutcomeCallable createClusterWithTemplateCallable(const Model::CreateClusterWithTemplateRequest& request) const;
			CreateDataSourceOutcome createDataSource(const Model::CreateDataSourceRequest &request)const;
			void createDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataSourceOutcomeCallable createDataSourceCallable(const Model::CreateDataSourceRequest& request) const;
			CreateExecutionPlanOutcome createExecutionPlan(const Model::CreateExecutionPlanRequest &request)const;
			void createExecutionPlanAsync(const Model::CreateExecutionPlanRequest& request, const CreateExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExecutionPlanOutcomeCallable createExecutionPlanCallable(const Model::CreateExecutionPlanRequest& request) const;
			CreateFlowOutcome createFlow(const Model::CreateFlowRequest &request)const;
			void createFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowOutcomeCallable createFlowCallable(const Model::CreateFlowRequest& request) const;
			CreateFlowCategoryOutcome createFlowCategory(const Model::CreateFlowCategoryRequest &request)const;
			void createFlowCategoryAsync(const Model::CreateFlowCategoryRequest& request, const CreateFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowCategoryOutcomeCallable createFlowCategoryCallable(const Model::CreateFlowCategoryRequest& request) const;
			CreateFlowEditLockOutcome createFlowEditLock(const Model::CreateFlowEditLockRequest &request)const;
			void createFlowEditLockAsync(const Model::CreateFlowEditLockRequest& request, const CreateFlowEditLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowEditLockOutcomeCallable createFlowEditLockCallable(const Model::CreateFlowEditLockRequest& request) const;
			CreateFlowForWebOutcome createFlowForWeb(const Model::CreateFlowForWebRequest &request)const;
			void createFlowForWebAsync(const Model::CreateFlowForWebRequest& request, const CreateFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowForWebOutcomeCallable createFlowForWebCallable(const Model::CreateFlowForWebRequest& request) const;
			CreateFlowJobOutcome createFlowJob(const Model::CreateFlowJobRequest &request)const;
			void createFlowJobAsync(const Model::CreateFlowJobRequest& request, const CreateFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowJobOutcomeCallable createFlowJobCallable(const Model::CreateFlowJobRequest& request) const;
			CreateFlowProjectOutcome createFlowProject(const Model::CreateFlowProjectRequest &request)const;
			void createFlowProjectAsync(const Model::CreateFlowProjectRequest& request, const CreateFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectOutcomeCallable createFlowProjectCallable(const Model::CreateFlowProjectRequest& request) const;
			CreateFlowProjectClusterSettingOutcome createFlowProjectClusterSetting(const Model::CreateFlowProjectClusterSettingRequest &request)const;
			void createFlowProjectClusterSettingAsync(const Model::CreateFlowProjectClusterSettingRequest& request, const CreateFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectClusterSettingOutcomeCallable createFlowProjectClusterSettingCallable(const Model::CreateFlowProjectClusterSettingRequest& request) const;
			CreateFlowProjectUserOutcome createFlowProjectUser(const Model::CreateFlowProjectUserRequest &request)const;
			void createFlowProjectUserAsync(const Model::CreateFlowProjectUserRequest& request, const CreateFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectUserOutcomeCallable createFlowProjectUserCallable(const Model::CreateFlowProjectUserRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreateLibraryOutcome createLibrary(const Model::CreateLibraryRequest &request)const;
			void createLibraryAsync(const Model::CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLibraryOutcomeCallable createLibraryCallable(const Model::CreateLibraryRequest& request) const;
			CreateMetaTablePreviewTaskOutcome createMetaTablePreviewTask(const Model::CreateMetaTablePreviewTaskRequest &request)const;
			void createMetaTablePreviewTaskAsync(const Model::CreateMetaTablePreviewTaskRequest& request, const CreateMetaTablePreviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetaTablePreviewTaskOutcomeCallable createMetaTablePreviewTaskCallable(const Model::CreateMetaTablePreviewTaskRequest& request) const;
			CreateNoteOutcome createNote(const Model::CreateNoteRequest &request)const;
			void createNoteAsync(const Model::CreateNoteRequest& request, const CreateNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNoteOutcomeCallable createNoteCallable(const Model::CreateNoteRequest& request) const;
			CreateParagraphOutcome createParagraph(const Model::CreateParagraphRequest &request)const;
			void createParagraphAsync(const Model::CreateParagraphRequest& request, const CreateParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParagraphOutcomeCallable createParagraphCallable(const Model::CreateParagraphRequest& request) const;
			CreateResourcePoolOutcome createResourcePool(const Model::CreateResourcePoolRequest &request)const;
			void createResourcePoolAsync(const Model::CreateResourcePoolRequest& request, const CreateResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourcePoolOutcomeCallable createResourcePoolCallable(const Model::CreateResourcePoolRequest& request) const;
			CreateResourceQueueOutcome createResourceQueue(const Model::CreateResourceQueueRequest &request)const;
			void createResourceQueueAsync(const Model::CreateResourceQueueRequest& request, const CreateResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceQueueOutcomeCallable createResourceQueueCallable(const Model::CreateResourceQueueRequest& request) const;
			CreateScalingGroupV2Outcome createScalingGroupV2(const Model::CreateScalingGroupV2Request &request)const;
			void createScalingGroupV2Async(const Model::CreateScalingGroupV2Request& request, const CreateScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingGroupV2OutcomeCallable createScalingGroupV2Callable(const Model::CreateScalingGroupV2Request& request) const;
			CreateScalingRuleOutcome createScalingRule(const Model::CreateScalingRuleRequest &request)const;
			void createScalingRuleAsync(const Model::CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingRuleOutcomeCallable createScalingRuleCallable(const Model::CreateScalingRuleRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateUsersOutcome createUsers(const Model::CreateUsersRequest &request)const;
			void createUsersAsync(const Model::CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUsersOutcomeCallable createUsersCallable(const Model::CreateUsersRequest& request) const;
			DecommissionHostComponentOutcome decommissionHostComponent(const Model::DecommissionHostComponentRequest &request)const;
			void decommissionHostComponentAsync(const Model::DecommissionHostComponentRequest& request, const DecommissionHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecommissionHostComponentOutcomeCallable decommissionHostComponentCallable(const Model::DecommissionHostComponentRequest& request) const;
			DeleteClusterTemplateOutcome deleteClusterTemplate(const Model::DeleteClusterTemplateRequest &request)const;
			void deleteClusterTemplateAsync(const Model::DeleteClusterTemplateRequest& request, const DeleteClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterTemplateOutcomeCallable deleteClusterTemplateCallable(const Model::DeleteClusterTemplateRequest& request) const;
			DeleteExecutionPlanOutcome deleteExecutionPlan(const Model::DeleteExecutionPlanRequest &request)const;
			void deleteExecutionPlanAsync(const Model::DeleteExecutionPlanRequest& request, const DeleteExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExecutionPlanOutcomeCallable deleteExecutionPlanCallable(const Model::DeleteExecutionPlanRequest& request) const;
			DeleteFlowOutcome deleteFlow(const Model::DeleteFlowRequest &request)const;
			void deleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowOutcomeCallable deleteFlowCallable(const Model::DeleteFlowRequest& request) const;
			DeleteFlowCategoryOutcome deleteFlowCategory(const Model::DeleteFlowCategoryRequest &request)const;
			void deleteFlowCategoryAsync(const Model::DeleteFlowCategoryRequest& request, const DeleteFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowCategoryOutcomeCallable deleteFlowCategoryCallable(const Model::DeleteFlowCategoryRequest& request) const;
			DeleteFlowEditLockOutcome deleteFlowEditLock(const Model::DeleteFlowEditLockRequest &request)const;
			void deleteFlowEditLockAsync(const Model::DeleteFlowEditLockRequest& request, const DeleteFlowEditLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowEditLockOutcomeCallable deleteFlowEditLockCallable(const Model::DeleteFlowEditLockRequest& request) const;
			DeleteFlowJobOutcome deleteFlowJob(const Model::DeleteFlowJobRequest &request)const;
			void deleteFlowJobAsync(const Model::DeleteFlowJobRequest& request, const DeleteFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowJobOutcomeCallable deleteFlowJobCallable(const Model::DeleteFlowJobRequest& request) const;
			DeleteFlowProjectOutcome deleteFlowProject(const Model::DeleteFlowProjectRequest &request)const;
			void deleteFlowProjectAsync(const Model::DeleteFlowProjectRequest& request, const DeleteFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectOutcomeCallable deleteFlowProjectCallable(const Model::DeleteFlowProjectRequest& request) const;
			DeleteFlowProjectClusterSettingOutcome deleteFlowProjectClusterSetting(const Model::DeleteFlowProjectClusterSettingRequest &request)const;
			void deleteFlowProjectClusterSettingAsync(const Model::DeleteFlowProjectClusterSettingRequest& request, const DeleteFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectClusterSettingOutcomeCallable deleteFlowProjectClusterSettingCallable(const Model::DeleteFlowProjectClusterSettingRequest& request) const;
			DeleteFlowProjectUserOutcome deleteFlowProjectUser(const Model::DeleteFlowProjectUserRequest &request)const;
			void deleteFlowProjectUserAsync(const Model::DeleteFlowProjectUserRequest& request, const DeleteFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectUserOutcomeCallable deleteFlowProjectUserCallable(const Model::DeleteFlowProjectUserRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeleteLibrariesOutcome deleteLibraries(const Model::DeleteLibrariesRequest &request)const;
			void deleteLibrariesAsync(const Model::DeleteLibrariesRequest& request, const DeleteLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLibrariesOutcomeCallable deleteLibrariesCallable(const Model::DeleteLibrariesRequest& request) const;
			DeleteNoteOutcome deleteNote(const Model::DeleteNoteRequest &request)const;
			void deleteNoteAsync(const Model::DeleteNoteRequest& request, const DeleteNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNoteOutcomeCallable deleteNoteCallable(const Model::DeleteNoteRequest& request) const;
			DeleteResourcePoolOutcome deleteResourcePool(const Model::DeleteResourcePoolRequest &request)const;
			void deleteResourcePoolAsync(const Model::DeleteResourcePoolRequest& request, const DeleteResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourcePoolOutcomeCallable deleteResourcePoolCallable(const Model::DeleteResourcePoolRequest& request) const;
			DeleteResourceQueueOutcome deleteResourceQueue(const Model::DeleteResourceQueueRequest &request)const;
			void deleteResourceQueueAsync(const Model::DeleteResourceQueueRequest& request, const DeleteResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceQueueOutcomeCallable deleteResourceQueueCallable(const Model::DeleteResourceQueueRequest& request) const;
			DeleteScalingRuleOutcome deleteScalingRule(const Model::DeleteScalingRuleRequest &request)const;
			void deleteScalingRuleAsync(const Model::DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingRuleOutcomeCallable deleteScalingRuleCallable(const Model::DeleteScalingRuleRequest& request) const;
			DeleteTagOutcome deleteTag(const Model::DeleteTagRequest &request)const;
			void deleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagOutcomeCallable deleteTagCallable(const Model::DeleteTagRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DescribeClusterBasicInfoOutcome describeClusterBasicInfo(const Model::DescribeClusterBasicInfoRequest &request)const;
			void describeClusterBasicInfoAsync(const Model::DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterBasicInfoOutcomeCallable describeClusterBasicInfoCallable(const Model::DescribeClusterBasicInfoRequest& request) const;
			DescribeClusterMetaCollectOutcome describeClusterMetaCollect(const Model::DescribeClusterMetaCollectRequest &request)const;
			void describeClusterMetaCollectAsync(const Model::DescribeClusterMetaCollectRequest& request, const DescribeClusterMetaCollectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterMetaCollectOutcomeCallable describeClusterMetaCollectCallable(const Model::DescribeClusterMetaCollectRequest& request) const;
			DescribeClusterOperationHostTaskLogOutcome describeClusterOperationHostTaskLog(const Model::DescribeClusterOperationHostTaskLogRequest &request)const;
			void describeClusterOperationHostTaskLogAsync(const Model::DescribeClusterOperationHostTaskLogRequest& request, const DescribeClusterOperationHostTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOperationHostTaskLogOutcomeCallable describeClusterOperationHostTaskLogCallable(const Model::DescribeClusterOperationHostTaskLogRequest& request) const;
			DescribeClusterResourcePoolSchedulerTypeOutcome describeClusterResourcePoolSchedulerType(const Model::DescribeClusterResourcePoolSchedulerTypeRequest &request)const;
			void describeClusterResourcePoolSchedulerTypeAsync(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request, const DescribeClusterResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterResourcePoolSchedulerTypeOutcomeCallable describeClusterResourcePoolSchedulerTypeCallable(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request) const;
			DescribeClusterServiceOutcome describeClusterService(const Model::DescribeClusterServiceRequest &request)const;
			void describeClusterServiceAsync(const Model::DescribeClusterServiceRequest& request, const DescribeClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceOutcomeCallable describeClusterServiceCallable(const Model::DescribeClusterServiceRequest& request) const;
			DescribeClusterServiceConfigOutcome describeClusterServiceConfig(const Model::DescribeClusterServiceConfigRequest &request)const;
			void describeClusterServiceConfigAsync(const Model::DescribeClusterServiceConfigRequest& request, const DescribeClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigOutcomeCallable describeClusterServiceConfigCallable(const Model::DescribeClusterServiceConfigRequest& request) const;
			DescribeClusterServiceConfigHistoryOutcome describeClusterServiceConfigHistory(const Model::DescribeClusterServiceConfigHistoryRequest &request)const;
			void describeClusterServiceConfigHistoryAsync(const Model::DescribeClusterServiceConfigHistoryRequest& request, const DescribeClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigHistoryOutcomeCallable describeClusterServiceConfigHistoryCallable(const Model::DescribeClusterServiceConfigHistoryRequest& request) const;
			DescribeClusterServiceConfigTagOutcome describeClusterServiceConfigTag(const Model::DescribeClusterServiceConfigTagRequest &request)const;
			void describeClusterServiceConfigTagAsync(const Model::DescribeClusterServiceConfigTagRequest& request, const DescribeClusterServiceConfigTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigTagOutcomeCallable describeClusterServiceConfigTagCallable(const Model::DescribeClusterServiceConfigTagRequest& request) const;
			DescribeClusterTemplateOutcome describeClusterTemplate(const Model::DescribeClusterTemplateRequest &request)const;
			void describeClusterTemplateAsync(const Model::DescribeClusterTemplateRequest& request, const DescribeClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterTemplateOutcomeCallable describeClusterTemplateCallable(const Model::DescribeClusterTemplateRequest& request) const;
			DescribeClusterV2Outcome describeClusterV2(const Model::DescribeClusterV2Request &request)const;
			void describeClusterV2Async(const Model::DescribeClusterV2Request& request, const DescribeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterV2OutcomeCallable describeClusterV2Callable(const Model::DescribeClusterV2Request& request) const;
			DescribeDataSourceOutcome describeDataSource(const Model::DescribeDataSourceRequest &request)const;
			void describeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceOutcomeCallable describeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;
			DescribeExecutionPlanOutcome describeExecutionPlan(const Model::DescribeExecutionPlanRequest &request)const;
			void describeExecutionPlanAsync(const Model::DescribeExecutionPlanRequest& request, const DescribeExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExecutionPlanOutcomeCallable describeExecutionPlanCallable(const Model::DescribeExecutionPlanRequest& request) const;
			DescribeFlowOutcome describeFlow(const Model::DescribeFlowRequest &request)const;
			void describeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowOutcomeCallable describeFlowCallable(const Model::DescribeFlowRequest& request) const;
			DescribeFlowAgentTokenOutcome describeFlowAgentToken(const Model::DescribeFlowAgentTokenRequest &request)const;
			void describeFlowAgentTokenAsync(const Model::DescribeFlowAgentTokenRequest& request, const DescribeFlowAgentTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowAgentTokenOutcomeCallable describeFlowAgentTokenCallable(const Model::DescribeFlowAgentTokenRequest& request) const;
			DescribeFlowAgentUserOutcome describeFlowAgentUser(const Model::DescribeFlowAgentUserRequest &request)const;
			void describeFlowAgentUserAsync(const Model::DescribeFlowAgentUserRequest& request, const DescribeFlowAgentUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowAgentUserOutcomeCallable describeFlowAgentUserCallable(const Model::DescribeFlowAgentUserRequest& request) const;
			DescribeFlowCategoryOutcome describeFlowCategory(const Model::DescribeFlowCategoryRequest &request)const;
			void describeFlowCategoryAsync(const Model::DescribeFlowCategoryRequest& request, const DescribeFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryOutcomeCallable describeFlowCategoryCallable(const Model::DescribeFlowCategoryRequest& request) const;
			DescribeFlowCategoryTreeOutcome describeFlowCategoryTree(const Model::DescribeFlowCategoryTreeRequest &request)const;
			void describeFlowCategoryTreeAsync(const Model::DescribeFlowCategoryTreeRequest& request, const DescribeFlowCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryTreeOutcomeCallable describeFlowCategoryTreeCallable(const Model::DescribeFlowCategoryTreeRequest& request) const;
			DescribeFlowEntitySnapshotOutcome describeFlowEntitySnapshot(const Model::DescribeFlowEntitySnapshotRequest &request)const;
			void describeFlowEntitySnapshotAsync(const Model::DescribeFlowEntitySnapshotRequest& request, const DescribeFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowEntitySnapshotOutcomeCallable describeFlowEntitySnapshotCallable(const Model::DescribeFlowEntitySnapshotRequest& request) const;
			DescribeFlowInstanceOutcome describeFlowInstance(const Model::DescribeFlowInstanceRequest &request)const;
			void describeFlowInstanceAsync(const Model::DescribeFlowInstanceRequest& request, const DescribeFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowInstanceOutcomeCallable describeFlowInstanceCallable(const Model::DescribeFlowInstanceRequest& request) const;
			DescribeFlowJobOutcome describeFlowJob(const Model::DescribeFlowJobRequest &request)const;
			void describeFlowJobAsync(const Model::DescribeFlowJobRequest& request, const DescribeFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowJobOutcomeCallable describeFlowJobCallable(const Model::DescribeFlowJobRequest& request) const;
			DescribeFlowNodeInstanceOutcome describeFlowNodeInstance(const Model::DescribeFlowNodeInstanceRequest &request)const;
			void describeFlowNodeInstanceAsync(const Model::DescribeFlowNodeInstanceRequest& request, const DescribeFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceOutcomeCallable describeFlowNodeInstanceCallable(const Model::DescribeFlowNodeInstanceRequest& request) const;
			DescribeFlowNodeInstanceContainerLogOutcome describeFlowNodeInstanceContainerLog(const Model::DescribeFlowNodeInstanceContainerLogRequest &request)const;
			void describeFlowNodeInstanceContainerLogAsync(const Model::DescribeFlowNodeInstanceContainerLogRequest& request, const DescribeFlowNodeInstanceContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceContainerLogOutcomeCallable describeFlowNodeInstanceContainerLogCallable(const Model::DescribeFlowNodeInstanceContainerLogRequest& request) const;
			DescribeFlowNodeInstanceLauncherLogOutcome describeFlowNodeInstanceLauncherLog(const Model::DescribeFlowNodeInstanceLauncherLogRequest &request)const;
			void describeFlowNodeInstanceLauncherLogAsync(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request, const DescribeFlowNodeInstanceLauncherLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceLauncherLogOutcomeCallable describeFlowNodeInstanceLauncherLogCallable(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request) const;
			DescribeFlowProjectOutcome describeFlowProject(const Model::DescribeFlowProjectRequest &request)const;
			void describeFlowProjectAsync(const Model::DescribeFlowProjectRequest& request, const DescribeFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectOutcomeCallable describeFlowProjectCallable(const Model::DescribeFlowProjectRequest& request) const;
			DescribeFlowProjectClusterSettingOutcome describeFlowProjectClusterSetting(const Model::DescribeFlowProjectClusterSettingRequest &request)const;
			void describeFlowProjectClusterSettingAsync(const Model::DescribeFlowProjectClusterSettingRequest& request, const DescribeFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectClusterSettingOutcomeCallable describeFlowProjectClusterSettingCallable(const Model::DescribeFlowProjectClusterSettingRequest& request) const;
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			DescribeLibraryDetailOutcome describeLibraryDetail(const Model::DescribeLibraryDetailRequest &request)const;
			void describeLibraryDetailAsync(const Model::DescribeLibraryDetailRequest& request, const DescribeLibraryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLibraryDetailOutcomeCallable describeLibraryDetailCallable(const Model::DescribeLibraryDetailRequest& request) const;
			DescribeLibraryInstallTaskDetailOutcome describeLibraryInstallTaskDetail(const Model::DescribeLibraryInstallTaskDetailRequest &request)const;
			void describeLibraryInstallTaskDetailAsync(const Model::DescribeLibraryInstallTaskDetailRequest& request, const DescribeLibraryInstallTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLibraryInstallTaskDetailOutcomeCallable describeLibraryInstallTaskDetailCallable(const Model::DescribeLibraryInstallTaskDetailRequest& request) const;
			DescribeMetaTablePreviewTaskOutcome describeMetaTablePreviewTask(const Model::DescribeMetaTablePreviewTaskRequest &request)const;
			void describeMetaTablePreviewTaskAsync(const Model::DescribeMetaTablePreviewTaskRequest& request, const DescribeMetaTablePreviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetaTablePreviewTaskOutcomeCallable describeMetaTablePreviewTaskCallable(const Model::DescribeMetaTablePreviewTaskRequest& request) const;
			DescribeScalingActivityOutcome describeScalingActivity(const Model::DescribeScalingActivityRequest &request)const;
			void describeScalingActivityAsync(const Model::DescribeScalingActivityRequest& request, const DescribeScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingActivityOutcomeCallable describeScalingActivityCallable(const Model::DescribeScalingActivityRequest& request) const;
			DescribeScalingCommonConfigOutcome describeScalingCommonConfig(const Model::DescribeScalingCommonConfigRequest &request)const;
			void describeScalingCommonConfigAsync(const Model::DescribeScalingCommonConfigRequest& request, const DescribeScalingCommonConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingCommonConfigOutcomeCallable describeScalingCommonConfigCallable(const Model::DescribeScalingCommonConfigRequest& request) const;
			DescribeScalingConfigItemV2Outcome describeScalingConfigItemV2(const Model::DescribeScalingConfigItemV2Request &request)const;
			void describeScalingConfigItemV2Async(const Model::DescribeScalingConfigItemV2Request& request, const DescribeScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingConfigItemV2OutcomeCallable describeScalingConfigItemV2Callable(const Model::DescribeScalingConfigItemV2Request& request) const;
			DescribeScalingGroupInstanceV2Outcome describeScalingGroupInstanceV2(const Model::DescribeScalingGroupInstanceV2Request &request)const;
			void describeScalingGroupInstanceV2Async(const Model::DescribeScalingGroupInstanceV2Request& request, const DescribeScalingGroupInstanceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingGroupInstanceV2OutcomeCallable describeScalingGroupInstanceV2Callable(const Model::DescribeScalingGroupInstanceV2Request& request) const;
			DescribeScalingGroupV2Outcome describeScalingGroupV2(const Model::DescribeScalingGroupV2Request &request)const;
			void describeScalingGroupV2Async(const Model::DescribeScalingGroupV2Request& request, const DescribeScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingGroupV2OutcomeCallable describeScalingGroupV2Callable(const Model::DescribeScalingGroupV2Request& request) const;
			DescribeScalingRuleOutcome describeScalingRule(const Model::DescribeScalingRuleRequest &request)const;
			void describeScalingRuleAsync(const Model::DescribeScalingRuleRequest& request, const DescribeScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingRuleOutcomeCallable describeScalingRuleCallable(const Model::DescribeScalingRuleRequest& request) const;
			DescribeSecurityGroupAttributeOutcome describeSecurityGroupAttribute(const Model::DescribeSecurityGroupAttributeRequest &request)const;
			void describeSecurityGroupAttributeAsync(const Model::DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupAttributeOutcomeCallable describeSecurityGroupAttributeCallable(const Model::DescribeSecurityGroupAttributeRequest& request) const;
			DetachAndReleaseClusterEniOutcome detachAndReleaseClusterEni(const Model::DetachAndReleaseClusterEniRequest &request)const;
			void detachAndReleaseClusterEniAsync(const Model::DetachAndReleaseClusterEniRequest& request, const DetachAndReleaseClusterEniAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachAndReleaseClusterEniOutcomeCallable detachAndReleaseClusterEniCallable(const Model::DetachAndReleaseClusterEniRequest& request) const;
			DiffFlowEntitySnapshotOutcome diffFlowEntitySnapshot(const Model::DiffFlowEntitySnapshotRequest &request)const;
			void diffFlowEntitySnapshotAsync(const Model::DiffFlowEntitySnapshotRequest& request, const DiffFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiffFlowEntitySnapshotOutcomeCallable diffFlowEntitySnapshotCallable(const Model::DiffFlowEntitySnapshotRequest& request) const;
			DumpMetaDataSourceForOuterOutcome dumpMetaDataSourceForOuter(const Model::DumpMetaDataSourceForOuterRequest &request)const;
			void dumpMetaDataSourceForOuterAsync(const Model::DumpMetaDataSourceForOuterRequest& request, const DumpMetaDataSourceForOuterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DumpMetaDataSourceForOuterOutcomeCallable dumpMetaDataSourceForOuterCallable(const Model::DumpMetaDataSourceForOuterRequest& request) const;
			GetFlowEntityRelationGraphOutcome getFlowEntityRelationGraph(const Model::GetFlowEntityRelationGraphRequest &request)const;
			void getFlowEntityRelationGraphAsync(const Model::GetFlowEntityRelationGraphRequest& request, const GetFlowEntityRelationGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowEntityRelationGraphOutcomeCallable getFlowEntityRelationGraphCallable(const Model::GetFlowEntityRelationGraphRequest& request) const;
			GetHdfsCapacityStatisticInfoOutcome getHdfsCapacityStatisticInfo(const Model::GetHdfsCapacityStatisticInfoRequest &request)const;
			void getHdfsCapacityStatisticInfoAsync(const Model::GetHdfsCapacityStatisticInfoRequest& request, const GetHdfsCapacityStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHdfsCapacityStatisticInfoOutcomeCallable getHdfsCapacityStatisticInfoCallable(const Model::GetHdfsCapacityStatisticInfoRequest& request) const;
			GetJobInputStatisticInfoOutcome getJobInputStatisticInfo(const Model::GetJobInputStatisticInfoRequest &request)const;
			void getJobInputStatisticInfoAsync(const Model::GetJobInputStatisticInfoRequest& request, const GetJobInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInputStatisticInfoOutcomeCallable getJobInputStatisticInfoCallable(const Model::GetJobInputStatisticInfoRequest& request) const;
			GetJobOutputStatisticInfoOutcome getJobOutputStatisticInfo(const Model::GetJobOutputStatisticInfoRequest &request)const;
			void getJobOutputStatisticInfoAsync(const Model::GetJobOutputStatisticInfoRequest& request, const GetJobOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutputStatisticInfoOutcomeCallable getJobOutputStatisticInfoCallable(const Model::GetJobOutputStatisticInfoRequest& request) const;
			GetJobRunningTimeStatisticInfoOutcome getJobRunningTimeStatisticInfo(const Model::GetJobRunningTimeStatisticInfoRequest &request)const;
			void getJobRunningTimeStatisticInfoAsync(const Model::GetJobRunningTimeStatisticInfoRequest& request, const GetJobRunningTimeStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobRunningTimeStatisticInfoOutcomeCallable getJobRunningTimeStatisticInfoCallable(const Model::GetJobRunningTimeStatisticInfoRequest& request) const;
			GetQueueInputStatisticInfoOutcome getQueueInputStatisticInfo(const Model::GetQueueInputStatisticInfoRequest &request)const;
			void getQueueInputStatisticInfoAsync(const Model::GetQueueInputStatisticInfoRequest& request, const GetQueueInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueInputStatisticInfoOutcomeCallable getQueueInputStatisticInfoCallable(const Model::GetQueueInputStatisticInfoRequest& request) const;
			GetQueueOutputStatisticInfoOutcome getQueueOutputStatisticInfo(const Model::GetQueueOutputStatisticInfoRequest &request)const;
			void getQueueOutputStatisticInfoAsync(const Model::GetQueueOutputStatisticInfoRequest& request, const GetQueueOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueOutputStatisticInfoOutcomeCallable getQueueOutputStatisticInfoCallable(const Model::GetQueueOutputStatisticInfoRequest& request) const;
			GetQueueSubmissionStatisticInfoOutcome getQueueSubmissionStatisticInfo(const Model::GetQueueSubmissionStatisticInfoRequest &request)const;
			void getQueueSubmissionStatisticInfoAsync(const Model::GetQueueSubmissionStatisticInfoRequest& request, const GetQueueSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueSubmissionStatisticInfoOutcomeCallable getQueueSubmissionStatisticInfoCallable(const Model::GetQueueSubmissionStatisticInfoRequest& request) const;
			GetUserInputStatisticInfoOutcome getUserInputStatisticInfo(const Model::GetUserInputStatisticInfoRequest &request)const;
			void getUserInputStatisticInfoAsync(const Model::GetUserInputStatisticInfoRequest& request, const GetUserInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInputStatisticInfoOutcomeCallable getUserInputStatisticInfoCallable(const Model::GetUserInputStatisticInfoRequest& request) const;
			GetUserOutputStatisticInfoOutcome getUserOutputStatisticInfo(const Model::GetUserOutputStatisticInfoRequest &request)const;
			void getUserOutputStatisticInfoAsync(const Model::GetUserOutputStatisticInfoRequest& request, const GetUserOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutputStatisticInfoOutcomeCallable getUserOutputStatisticInfoCallable(const Model::GetUserOutputStatisticInfoRequest& request) const;
			GetUserSubmissionStatisticInfoOutcome getUserSubmissionStatisticInfo(const Model::GetUserSubmissionStatisticInfoRequest &request)const;
			void getUserSubmissionStatisticInfoAsync(const Model::GetUserSubmissionStatisticInfoRequest& request, const GetUserSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserSubmissionStatisticInfoOutcomeCallable getUserSubmissionStatisticInfoCallable(const Model::GetUserSubmissionStatisticInfoRequest& request) const;
			InstallLibrariesOutcome installLibraries(const Model::InstallLibrariesRequest &request)const;
			void installLibrariesAsync(const Model::InstallLibrariesRequest& request, const InstallLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallLibrariesOutcomeCallable installLibrariesCallable(const Model::InstallLibrariesRequest& request) const;
			JoinResourceGroupOutcome joinResourceGroup(const Model::JoinResourceGroupRequest &request)const;
			void joinResourceGroupAsync(const Model::JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinResourceGroupOutcomeCallable joinResourceGroupCallable(const Model::JoinResourceGroupRequest& request) const;
			KillExecutionJobInstanceOutcome killExecutionJobInstance(const Model::KillExecutionJobInstanceRequest &request)const;
			void killExecutionJobInstanceAsync(const Model::KillExecutionJobInstanceRequest& request, const KillExecutionJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillExecutionJobInstanceOutcomeCallable killExecutionJobInstanceCallable(const Model::KillExecutionJobInstanceRequest& request) const;
			KillFlowJobOutcome killFlowJob(const Model::KillFlowJobRequest &request)const;
			void killFlowJobAsync(const Model::KillFlowJobRequest& request, const KillFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillFlowJobOutcomeCallable killFlowJobCallable(const Model::KillFlowJobRequest& request) const;
			ListAdviceActionOutcome listAdviceAction(const Model::ListAdviceActionRequest &request)const;
			void listAdviceActionAsync(const Model::ListAdviceActionRequest& request, const ListAdviceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAdviceActionOutcomeCallable listAdviceActionCallable(const Model::ListAdviceActionRequest& request) const;
			ListApmApplicationOutcome listApmApplication(const Model::ListApmApplicationRequest &request)const;
			void listApmApplicationAsync(const Model::ListApmApplicationRequest& request, const ListApmApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApmApplicationOutcomeCallable listApmApplicationCallable(const Model::ListApmApplicationRequest& request) const;
			ListBackupsOutcome listBackups(const Model::ListBackupsRequest &request)const;
			void listBackupsAsync(const Model::ListBackupsRequest& request, const ListBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBackupsOutcomeCallable listBackupsCallable(const Model::ListBackupsRequest& request) const;
			ListClusterHostOutcome listClusterHost(const Model::ListClusterHostRequest &request)const;
			void listClusterHostAsync(const Model::ListClusterHostRequest& request, const ListClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostOutcomeCallable listClusterHostCallable(const Model::ListClusterHostRequest& request) const;
			ListClusterHostComponentOutcome listClusterHostComponent(const Model::ListClusterHostComponentRequest &request)const;
			void listClusterHostComponentAsync(const Model::ListClusterHostComponentRequest& request, const ListClusterHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostComponentOutcomeCallable listClusterHostComponentCallable(const Model::ListClusterHostComponentRequest& request) const;
			ListClusterHostGroupOutcome listClusterHostGroup(const Model::ListClusterHostGroupRequest &request)const;
			void listClusterHostGroupAsync(const Model::ListClusterHostGroupRequest& request, const ListClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostGroupOutcomeCallable listClusterHostGroupCallable(const Model::ListClusterHostGroupRequest& request) const;
			ListClusterInstalledServiceOutcome listClusterInstalledService(const Model::ListClusterInstalledServiceRequest &request)const;
			void listClusterInstalledServiceAsync(const Model::ListClusterInstalledServiceRequest& request, const ListClusterInstalledServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterInstalledServiceOutcomeCallable listClusterInstalledServiceCallable(const Model::ListClusterInstalledServiceRequest& request) const;
			ListClusterOperationOutcome listClusterOperation(const Model::ListClusterOperationRequest &request)const;
			void listClusterOperationAsync(const Model::ListClusterOperationRequest& request, const ListClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationOutcomeCallable listClusterOperationCallable(const Model::ListClusterOperationRequest& request) const;
			ListClusterOperationHostOutcome listClusterOperationHost(const Model::ListClusterOperationHostRequest &request)const;
			void listClusterOperationHostAsync(const Model::ListClusterOperationHostRequest& request, const ListClusterOperationHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostOutcomeCallable listClusterOperationHostCallable(const Model::ListClusterOperationHostRequest& request) const;
			ListClusterOperationHostTaskOutcome listClusterOperationHostTask(const Model::ListClusterOperationHostTaskRequest &request)const;
			void listClusterOperationHostTaskAsync(const Model::ListClusterOperationHostTaskRequest& request, const ListClusterOperationHostTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostTaskOutcomeCallable listClusterOperationHostTaskCallable(const Model::ListClusterOperationHostTaskRequest& request) const;
			ListClusterOperationTaskOutcome listClusterOperationTask(const Model::ListClusterOperationTaskRequest &request)const;
			void listClusterOperationTaskAsync(const Model::ListClusterOperationTaskRequest& request, const ListClusterOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationTaskOutcomeCallable listClusterOperationTaskCallable(const Model::ListClusterOperationTaskRequest& request) const;
			ListClusterServiceOutcome listClusterService(const Model::ListClusterServiceRequest &request)const;
			void listClusterServiceAsync(const Model::ListClusterServiceRequest& request, const ListClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceOutcomeCallable listClusterServiceCallable(const Model::ListClusterServiceRequest& request) const;
			ListClusterServiceComponentOutcome listClusterServiceComponent(const Model::ListClusterServiceComponentRequest &request)const;
			void listClusterServiceComponentAsync(const Model::ListClusterServiceComponentRequest& request, const ListClusterServiceComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceComponentOutcomeCallable listClusterServiceComponentCallable(const Model::ListClusterServiceComponentRequest& request) const;
			ListClusterServiceComponentHealthInfoOutcome listClusterServiceComponentHealthInfo(const Model::ListClusterServiceComponentHealthInfoRequest &request)const;
			void listClusterServiceComponentHealthInfoAsync(const Model::ListClusterServiceComponentHealthInfoRequest& request, const ListClusterServiceComponentHealthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceComponentHealthInfoOutcomeCallable listClusterServiceComponentHealthInfoCallable(const Model::ListClusterServiceComponentHealthInfoRequest& request) const;
			ListClusterServiceConfigHistoryOutcome listClusterServiceConfigHistory(const Model::ListClusterServiceConfigHistoryRequest &request)const;
			void listClusterServiceConfigHistoryAsync(const Model::ListClusterServiceConfigHistoryRequest& request, const ListClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceConfigHistoryOutcomeCallable listClusterServiceConfigHistoryCallable(const Model::ListClusterServiceConfigHistoryRequest& request) const;
			ListClusterServiceQuickLinkOutcome listClusterServiceQuickLink(const Model::ListClusterServiceQuickLinkRequest &request)const;
			void listClusterServiceQuickLinkAsync(const Model::ListClusterServiceQuickLinkRequest& request, const ListClusterServiceQuickLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceQuickLinkOutcomeCallable listClusterServiceQuickLinkCallable(const Model::ListClusterServiceQuickLinkRequest& request) const;
			ListClusterTemplatesOutcome listClusterTemplates(const Model::ListClusterTemplatesRequest &request)const;
			void listClusterTemplatesAsync(const Model::ListClusterTemplatesRequest& request, const ListClusterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTemplatesOutcomeCallable listClusterTemplatesCallable(const Model::ListClusterTemplatesRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ListEmrAvailableConfigOutcome listEmrAvailableConfig(const Model::ListEmrAvailableConfigRequest &request)const;
			void listEmrAvailableConfigAsync(const Model::ListEmrAvailableConfigRequest& request, const ListEmrAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableConfigOutcomeCallable listEmrAvailableConfigCallable(const Model::ListEmrAvailableConfigRequest& request) const;
			ListEmrAvailableResourceOutcome listEmrAvailableResource(const Model::ListEmrAvailableResourceRequest &request)const;
			void listEmrAvailableResourceAsync(const Model::ListEmrAvailableResourceRequest& request, const ListEmrAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableResourceOutcomeCallable listEmrAvailableResourceCallable(const Model::ListEmrAvailableResourceRequest& request) const;
			ListEmrMainVersionOutcome listEmrMainVersion(const Model::ListEmrMainVersionRequest &request)const;
			void listEmrMainVersionAsync(const Model::ListEmrMainVersionRequest& request, const ListEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrMainVersionOutcomeCallable listEmrMainVersionCallable(const Model::ListEmrMainVersionRequest& request) const;
			ListExecutionPlanInstancesOutcome listExecutionPlanInstances(const Model::ListExecutionPlanInstancesRequest &request)const;
			void listExecutionPlanInstancesAsync(const Model::ListExecutionPlanInstancesRequest& request, const ListExecutionPlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionPlanInstancesOutcomeCallable listExecutionPlanInstancesCallable(const Model::ListExecutionPlanInstancesRequest& request) const;
			ListExecutionPlansOutcome listExecutionPlans(const Model::ListExecutionPlansRequest &request)const;
			void listExecutionPlansAsync(const Model::ListExecutionPlansRequest& request, const ListExecutionPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionPlansOutcomeCallable listExecutionPlansCallable(const Model::ListExecutionPlansRequest& request) const;
			ListFlowOutcome listFlow(const Model::ListFlowRequest &request)const;
			void listFlowAsync(const Model::ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowOutcomeCallable listFlowCallable(const Model::ListFlowRequest& request) const;
			ListFlowCategoryOutcome listFlowCategory(const Model::ListFlowCategoryRequest &request)const;
			void listFlowCategoryAsync(const Model::ListFlowCategoryRequest& request, const ListFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowCategoryOutcomeCallable listFlowCategoryCallable(const Model::ListFlowCategoryRequest& request) const;
			ListFlowClusterOutcome listFlowCluster(const Model::ListFlowClusterRequest &request)const;
			void listFlowClusterAsync(const Model::ListFlowClusterRequest& request, const ListFlowClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterOutcomeCallable listFlowClusterCallable(const Model::ListFlowClusterRequest& request) const;
			ListFlowClusterAllOutcome listFlowClusterAll(const Model::ListFlowClusterAllRequest &request)const;
			void listFlowClusterAllAsync(const Model::ListFlowClusterAllRequest& request, const ListFlowClusterAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllOutcomeCallable listFlowClusterAllCallable(const Model::ListFlowClusterAllRequest& request) const;
			ListFlowClusterAllHostsOutcome listFlowClusterAllHosts(const Model::ListFlowClusterAllHostsRequest &request)const;
			void listFlowClusterAllHostsAsync(const Model::ListFlowClusterAllHostsRequest& request, const ListFlowClusterAllHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllHostsOutcomeCallable listFlowClusterAllHostsCallable(const Model::ListFlowClusterAllHostsRequest& request) const;
			ListFlowClusterHostOutcome listFlowClusterHost(const Model::ListFlowClusterHostRequest &request)const;
			void listFlowClusterHostAsync(const Model::ListFlowClusterHostRequest& request, const ListFlowClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterHostOutcomeCallable listFlowClusterHostCallable(const Model::ListFlowClusterHostRequest& request) const;
			ListFlowEntitySnapshotOutcome listFlowEntitySnapshot(const Model::ListFlowEntitySnapshotRequest &request)const;
			void listFlowEntitySnapshotAsync(const Model::ListFlowEntitySnapshotRequest& request, const ListFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowEntitySnapshotOutcomeCallable listFlowEntitySnapshotCallable(const Model::ListFlowEntitySnapshotRequest& request) const;
			ListFlowInstanceOutcome listFlowInstance(const Model::ListFlowInstanceRequest &request)const;
			void listFlowInstanceAsync(const Model::ListFlowInstanceRequest& request, const ListFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowInstanceOutcomeCallable listFlowInstanceCallable(const Model::ListFlowInstanceRequest& request) const;
			ListFlowJobOutcome listFlowJob(const Model::ListFlowJobRequest &request)const;
			void listFlowJobAsync(const Model::ListFlowJobRequest& request, const ListFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobOutcomeCallable listFlowJobCallable(const Model::ListFlowJobRequest& request) const;
			ListFlowJobHistoryOutcome listFlowJobHistory(const Model::ListFlowJobHistoryRequest &request)const;
			void listFlowJobHistoryAsync(const Model::ListFlowJobHistoryRequest& request, const ListFlowJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobHistoryOutcomeCallable listFlowJobHistoryCallable(const Model::ListFlowJobHistoryRequest& request) const;
			ListFlowNodeInstanceOutcome listFlowNodeInstance(const Model::ListFlowNodeInstanceRequest &request)const;
			void listFlowNodeInstanceAsync(const Model::ListFlowNodeInstanceRequest& request, const ListFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceOutcomeCallable listFlowNodeInstanceCallable(const Model::ListFlowNodeInstanceRequest& request) const;
			ListFlowNodeInstanceContainerStatusOutcome listFlowNodeInstanceContainerStatus(const Model::ListFlowNodeInstanceContainerStatusRequest &request)const;
			void listFlowNodeInstanceContainerStatusAsync(const Model::ListFlowNodeInstanceContainerStatusRequest& request, const ListFlowNodeInstanceContainerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceContainerStatusOutcomeCallable listFlowNodeInstanceContainerStatusCallable(const Model::ListFlowNodeInstanceContainerStatusRequest& request) const;
			ListFlowNodeSqlResultOutcome listFlowNodeSqlResult(const Model::ListFlowNodeSqlResultRequest &request)const;
			void listFlowNodeSqlResultAsync(const Model::ListFlowNodeSqlResultRequest& request, const ListFlowNodeSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeSqlResultOutcomeCallable listFlowNodeSqlResultCallable(const Model::ListFlowNodeSqlResultRequest& request) const;
			ListFlowProjectOutcome listFlowProject(const Model::ListFlowProjectRequest &request)const;
			void listFlowProjectAsync(const Model::ListFlowProjectRequest& request, const ListFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectOutcomeCallable listFlowProjectCallable(const Model::ListFlowProjectRequest& request) const;
			ListFlowProjectClusterSettingOutcome listFlowProjectClusterSetting(const Model::ListFlowProjectClusterSettingRequest &request)const;
			void listFlowProjectClusterSettingAsync(const Model::ListFlowProjectClusterSettingRequest& request, const ListFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectClusterSettingOutcomeCallable listFlowProjectClusterSettingCallable(const Model::ListFlowProjectClusterSettingRequest& request) const;
			ListFlowProjectUserOutcome listFlowProjectUser(const Model::ListFlowProjectUserRequest &request)const;
			void listFlowProjectUserAsync(const Model::ListFlowProjectUserRequest& request, const ListFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectUserOutcomeCallable listFlowProjectUserCallable(const Model::ListFlowProjectUserRequest& request) const;
			ListJobExecutionInstancesOutcome listJobExecutionInstances(const Model::ListJobExecutionInstancesRequest &request)const;
			void listJobExecutionInstancesAsync(const Model::ListJobExecutionInstancesRequest& request, const ListJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionInstancesOutcomeCallable listJobExecutionInstancesCallable(const Model::ListJobExecutionInstancesRequest& request) const;
			ListJobInstanceWorkersOutcome listJobInstanceWorkers(const Model::ListJobInstanceWorkersRequest &request)const;
			void listJobInstanceWorkersAsync(const Model::ListJobInstanceWorkersRequest& request, const ListJobInstanceWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobInstanceWorkersOutcomeCallable listJobInstanceWorkersCallable(const Model::ListJobInstanceWorkersRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListLibrariesOutcome listLibraries(const Model::ListLibrariesRequest &request)const;
			void listLibrariesAsync(const Model::ListLibrariesRequest& request, const ListLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLibrariesOutcomeCallable listLibrariesCallable(const Model::ListLibrariesRequest& request) const;
			ListLibraryInstallTasksOutcome listLibraryInstallTasks(const Model::ListLibraryInstallTasksRequest &request)const;
			void listLibraryInstallTasksAsync(const Model::ListLibraryInstallTasksRequest& request, const ListLibraryInstallTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLibraryInstallTasksOutcomeCallable listLibraryInstallTasksCallable(const Model::ListLibraryInstallTasksRequest& request) const;
			ListLibraryStatusOutcome listLibraryStatus(const Model::ListLibraryStatusRequest &request)const;
			void listLibraryStatusAsync(const Model::ListLibraryStatusRequest& request, const ListLibraryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLibraryStatusOutcomeCallable listLibraryStatusCallable(const Model::ListLibraryStatusRequest& request) const;
			ListMetaClusterOutcome listMetaCluster(const Model::ListMetaClusterRequest &request)const;
			void listMetaClusterAsync(const Model::ListMetaClusterRequest& request, const ListMetaClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaClusterOutcomeCallable listMetaClusterCallable(const Model::ListMetaClusterRequest& request) const;
			ListMetaDataSourceClusterForOuterOutcome listMetaDataSourceClusterForOuter(const Model::ListMetaDataSourceClusterForOuterRequest &request)const;
			void listMetaDataSourceClusterForOuterAsync(const Model::ListMetaDataSourceClusterForOuterRequest& request, const ListMetaDataSourceClusterForOuterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaDataSourceClusterForOuterOutcomeCallable listMetaDataSourceClusterForOuterCallable(const Model::ListMetaDataSourceClusterForOuterRequest& request) const;
			ListNotesOutcome listNotes(const Model::ListNotesRequest &request)const;
			void listNotesAsync(const Model::ListNotesRequest& request, const ListNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotesOutcomeCallable listNotesCallable(const Model::ListNotesRequest& request) const;
			ListResourcePoolOutcome listResourcePool(const Model::ListResourcePoolRequest &request)const;
			void listResourcePoolAsync(const Model::ListResourcePoolRequest& request, const ListResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcePoolOutcomeCallable listResourcePoolCallable(const Model::ListResourcePoolRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListScalingActivityV2Outcome listScalingActivityV2(const Model::ListScalingActivityV2Request &request)const;
			void listScalingActivityV2Async(const Model::ListScalingActivityV2Request& request, const ListScalingActivityV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingActivityV2OutcomeCallable listScalingActivityV2Callable(const Model::ListScalingActivityV2Request& request) const;
			ListScalingConfigItemV2Outcome listScalingConfigItemV2(const Model::ListScalingConfigItemV2Request &request)const;
			void listScalingConfigItemV2Async(const Model::ListScalingConfigItemV2Request& request, const ListScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingConfigItemV2OutcomeCallable listScalingConfigItemV2Callable(const Model::ListScalingConfigItemV2Request& request) const;
			ListScalingGroupV2Outcome listScalingGroupV2(const Model::ListScalingGroupV2Request &request)const;
			void listScalingGroupV2Async(const Model::ListScalingGroupV2Request& request, const ListScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingGroupV2OutcomeCallable listScalingGroupV2Callable(const Model::ListScalingGroupV2Request& request) const;
			ListSecurityGroupOutcome listSecurityGroup(const Model::ListSecurityGroupRequest &request)const;
			void listSecurityGroupAsync(const Model::ListSecurityGroupRequest& request, const ListSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityGroupOutcomeCallable listSecurityGroupCallable(const Model::ListSecurityGroupRequest& request) const;
			ListStackOutcome listStack(const Model::ListStackRequest &request)const;
			void listStackAsync(const Model::ListStackRequest& request, const ListStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStackOutcomeCallable listStackCallable(const Model::ListStackRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListVswitchOutcome listVswitch(const Model::ListVswitchRequest &request)const;
			void listVswitchAsync(const Model::ListVswitchRequest& request, const ListVswitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVswitchOutcomeCallable listVswitchCallable(const Model::ListVswitchRequest& request) const;
			ModifyClusterBootstrapActionOutcome modifyClusterBootstrapAction(const Model::ModifyClusterBootstrapActionRequest &request)const;
			void modifyClusterBootstrapActionAsync(const Model::ModifyClusterBootstrapActionRequest& request, const ModifyClusterBootstrapActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterBootstrapActionOutcomeCallable modifyClusterBootstrapActionCallable(const Model::ModifyClusterBootstrapActionRequest& request) const;
			ModifyClusterHostGroupOutcome modifyClusterHostGroup(const Model::ModifyClusterHostGroupRequest &request)const;
			void modifyClusterHostGroupAsync(const Model::ModifyClusterHostGroupRequest& request, const ModifyClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterHostGroupOutcomeCallable modifyClusterHostGroupCallable(const Model::ModifyClusterHostGroupRequest& request) const;
			ModifyClusterMetaCollectOutcome modifyClusterMetaCollect(const Model::ModifyClusterMetaCollectRequest &request)const;
			void modifyClusterMetaCollectAsync(const Model::ModifyClusterMetaCollectRequest& request, const ModifyClusterMetaCollectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterMetaCollectOutcomeCallable modifyClusterMetaCollectCallable(const Model::ModifyClusterMetaCollectRequest& request) const;
			ModifyClusterNameOutcome modifyClusterName(const Model::ModifyClusterNameRequest &request)const;
			void modifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterNameOutcomeCallable modifyClusterNameCallable(const Model::ModifyClusterNameRequest& request) const;
			ModifyClusterSecurityGroupRuleOutcome modifyClusterSecurityGroupRule(const Model::ModifyClusterSecurityGroupRuleRequest &request)const;
			void modifyClusterSecurityGroupRuleAsync(const Model::ModifyClusterSecurityGroupRuleRequest& request, const ModifyClusterSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterSecurityGroupRuleOutcomeCallable modifyClusterSecurityGroupRuleCallable(const Model::ModifyClusterSecurityGroupRuleRequest& request) const;
			ModifyClusterServiceConfigOutcome modifyClusterServiceConfig(const Model::ModifyClusterServiceConfigRequest &request)const;
			void modifyClusterServiceConfigAsync(const Model::ModifyClusterServiceConfigRequest& request, const ModifyClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterServiceConfigOutcomeCallable modifyClusterServiceConfigCallable(const Model::ModifyClusterServiceConfigRequest& request) const;
			ModifyClusterTemplateOutcome modifyClusterTemplate(const Model::ModifyClusterTemplateRequest &request)const;
			void modifyClusterTemplateAsync(const Model::ModifyClusterTemplateRequest& request, const ModifyClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterTemplateOutcomeCallable modifyClusterTemplateCallable(const Model::ModifyClusterTemplateRequest& request) const;
			ModifyExecutionPlanOutcome modifyExecutionPlan(const Model::ModifyExecutionPlanRequest &request)const;
			void modifyExecutionPlanAsync(const Model::ModifyExecutionPlanRequest& request, const ModifyExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanOutcomeCallable modifyExecutionPlanCallable(const Model::ModifyExecutionPlanRequest& request) const;
			ModifyFlowOutcome modifyFlow(const Model::ModifyFlowRequest &request)const;
			void modifyFlowAsync(const Model::ModifyFlowRequest& request, const ModifyFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowOutcomeCallable modifyFlowCallable(const Model::ModifyFlowRequest& request) const;
			ModifyFlowCategoryOutcome modifyFlowCategory(const Model::ModifyFlowCategoryRequest &request)const;
			void modifyFlowCategoryAsync(const Model::ModifyFlowCategoryRequest& request, const ModifyFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowCategoryOutcomeCallable modifyFlowCategoryCallable(const Model::ModifyFlowCategoryRequest& request) const;
			ModifyFlowForWebOutcome modifyFlowForWeb(const Model::ModifyFlowForWebRequest &request)const;
			void modifyFlowForWebAsync(const Model::ModifyFlowForWebRequest& request, const ModifyFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowForWebOutcomeCallable modifyFlowForWebCallable(const Model::ModifyFlowForWebRequest& request) const;
			ModifyFlowJobOutcome modifyFlowJob(const Model::ModifyFlowJobRequest &request)const;
			void modifyFlowJobAsync(const Model::ModifyFlowJobRequest& request, const ModifyFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowJobOutcomeCallable modifyFlowJobCallable(const Model::ModifyFlowJobRequest& request) const;
			ModifyFlowProjectOutcome modifyFlowProject(const Model::ModifyFlowProjectRequest &request)const;
			void modifyFlowProjectAsync(const Model::ModifyFlowProjectRequest& request, const ModifyFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectOutcomeCallable modifyFlowProjectCallable(const Model::ModifyFlowProjectRequest& request) const;
			ModifyFlowProjectClusterSettingOutcome modifyFlowProjectClusterSetting(const Model::ModifyFlowProjectClusterSettingRequest &request)const;
			void modifyFlowProjectClusterSettingAsync(const Model::ModifyFlowProjectClusterSettingRequest& request, const ModifyFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectClusterSettingOutcomeCallable modifyFlowProjectClusterSettingCallable(const Model::ModifyFlowProjectClusterSettingRequest& request) const;
			ModifyJobOutcome modifyJob(const Model::ModifyJobRequest &request)const;
			void modifyJobAsync(const Model::ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyJobOutcomeCallable modifyJobCallable(const Model::ModifyJobRequest& request) const;
			ModifyResourcePoolOutcome modifyResourcePool(const Model::ModifyResourcePoolRequest &request)const;
			void modifyResourcePoolAsync(const Model::ModifyResourcePoolRequest& request, const ModifyResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolOutcomeCallable modifyResourcePoolCallable(const Model::ModifyResourcePoolRequest& request) const;
			ModifyResourcePoolSchedulerTypeOutcome modifyResourcePoolSchedulerType(const Model::ModifyResourcePoolSchedulerTypeRequest &request)const;
			void modifyResourcePoolSchedulerTypeAsync(const Model::ModifyResourcePoolSchedulerTypeRequest& request, const ModifyResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolSchedulerTypeOutcomeCallable modifyResourcePoolSchedulerTypeCallable(const Model::ModifyResourcePoolSchedulerTypeRequest& request) const;
			ModifyResourceQueueOutcome modifyResourceQueue(const Model::ModifyResourceQueueRequest &request)const;
			void modifyResourceQueueAsync(const Model::ModifyResourceQueueRequest& request, const ModifyResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceQueueOutcomeCallable modifyResourceQueueCallable(const Model::ModifyResourceQueueRequest& request) const;
			ModifyScalingConfigItemV2Outcome modifyScalingConfigItemV2(const Model::ModifyScalingConfigItemV2Request &request)const;
			void modifyScalingConfigItemV2Async(const Model::ModifyScalingConfigItemV2Request& request, const ModifyScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingConfigItemV2OutcomeCallable modifyScalingConfigItemV2Callable(const Model::ModifyScalingConfigItemV2Request& request) const;
			ModifyScalingGroupV2Outcome modifyScalingGroupV2(const Model::ModifyScalingGroupV2Request &request)const;
			void modifyScalingGroupV2Async(const Model::ModifyScalingGroupV2Request& request, const ModifyScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingGroupV2OutcomeCallable modifyScalingGroupV2Callable(const Model::ModifyScalingGroupV2Request& request) const;
			ModifyScalingRuleOutcome modifyScalingRule(const Model::ModifyScalingRuleRequest &request)const;
			void modifyScalingRuleAsync(const Model::ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingRuleOutcomeCallable modifyScalingRuleCallable(const Model::ModifyScalingRuleRequest& request) const;
			ModifyScalingTaskGroupOutcome modifyScalingTaskGroup(const Model::ModifyScalingTaskGroupRequest &request)const;
			void modifyScalingTaskGroupAsync(const Model::ModifyScalingTaskGroupRequest& request, const ModifyScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingTaskGroupOutcomeCallable modifyScalingTaskGroupCallable(const Model::ModifyScalingTaskGroupRequest& request) const;
			QueryAlarmHistoryOutcome queryAlarmHistory(const Model::QueryAlarmHistoryRequest &request)const;
			void queryAlarmHistoryAsync(const Model::QueryAlarmHistoryRequest& request, const QueryAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAlarmHistoryOutcomeCallable queryAlarmHistoryCallable(const Model::QueryAlarmHistoryRequest& request) const;
			QueryEntityOutcome queryEntity(const Model::QueryEntityRequest &request)const;
			void queryEntityAsync(const Model::QueryEntityRequest& request, const QueryEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEntityOutcomeCallable queryEntityCallable(const Model::QueryEntityRequest& request) const;
			QueryTableDataOutcome queryTableData(const Model::QueryTableDataRequest &request)const;
			void queryTableDataAsync(const Model::QueryTableDataRequest& request, const QueryTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTableDataOutcomeCallable queryTableDataCallable(const Model::QueryTableDataRequest& request) const;
			QueryTagOutcome queryTag(const Model::QueryTagRequest &request)const;
			void queryTagAsync(const Model::QueryTagRequest& request, const QueryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTagOutcomeCallable queryTagCallable(const Model::QueryTagRequest& request) const;
			QueryTrendDataOutcome queryTrendData(const Model::QueryTrendDataRequest &request)const;
			void queryTrendDataAsync(const Model::QueryTrendDataRequest& request, const QueryTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTrendDataOutcomeCallable queryTrendDataCallable(const Model::QueryTrendDataRequest& request) const;
			RefreshClusterResourcePoolOutcome refreshClusterResourcePool(const Model::RefreshClusterResourcePoolRequest &request)const;
			void refreshClusterResourcePoolAsync(const Model::RefreshClusterResourcePoolRequest& request, const RefreshClusterResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshClusterResourcePoolOutcomeCallable refreshClusterResourcePoolCallable(const Model::RefreshClusterResourcePoolRequest& request) const;
			ReleaseClusterOutcome releaseCluster(const Model::ReleaseClusterRequest &request)const;
			void releaseClusterAsync(const Model::ReleaseClusterRequest& request, const ReleaseClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterOutcomeCallable releaseClusterCallable(const Model::ReleaseClusterRequest& request) const;
			ReleaseClusterByTemplateTagForInternalOutcome releaseClusterByTemplateTagForInternal(const Model::ReleaseClusterByTemplateTagForInternalRequest &request)const;
			void releaseClusterByTemplateTagForInternalAsync(const Model::ReleaseClusterByTemplateTagForInternalRequest& request, const ReleaseClusterByTemplateTagForInternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterByTemplateTagForInternalOutcomeCallable releaseClusterByTemplateTagForInternalCallable(const Model::ReleaseClusterByTemplateTagForInternalRequest& request) const;
			ReleaseClusterHostGroupOutcome releaseClusterHostGroup(const Model::ReleaseClusterHostGroupRequest &request)const;
			void releaseClusterHostGroupAsync(const Model::ReleaseClusterHostGroupRequest& request, const ReleaseClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterHostGroupOutcomeCallable releaseClusterHostGroupCallable(const Model::ReleaseClusterHostGroupRequest& request) const;
			RemoveScalingConfigItemV2Outcome removeScalingConfigItemV2(const Model::RemoveScalingConfigItemV2Request &request)const;
			void removeScalingConfigItemV2Async(const Model::RemoveScalingConfigItemV2Request& request, const RemoveScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveScalingConfigItemV2OutcomeCallable removeScalingConfigItemV2Callable(const Model::RemoveScalingConfigItemV2Request& request) const;
			RerunFlowOutcome rerunFlow(const Model::RerunFlowRequest &request)const;
			void rerunFlowAsync(const Model::RerunFlowRequest& request, const RerunFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunFlowOutcomeCallable rerunFlowCallable(const Model::RerunFlowRequest& request) const;
			ResizeClusterV2Outcome resizeClusterV2(const Model::ResizeClusterV2Request &request)const;
			void resizeClusterV2Async(const Model::ResizeClusterV2Request& request, const ResizeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeClusterV2OutcomeCallable resizeClusterV2Callable(const Model::ResizeClusterV2Request& request) const;
			RestoreBackupOutcome restoreBackup(const Model::RestoreBackupRequest &request)const;
			void restoreBackupAsync(const Model::RestoreBackupRequest& request, const RestoreBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreBackupOutcomeCallable restoreBackupCallable(const Model::RestoreBackupRequest& request) const;
			RestoreFlowEntitySnapshotOutcome restoreFlowEntitySnapshot(const Model::RestoreFlowEntitySnapshotRequest &request)const;
			void restoreFlowEntitySnapshotAsync(const Model::RestoreFlowEntitySnapshotRequest& request, const RestoreFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreFlowEntitySnapshotOutcomeCallable restoreFlowEntitySnapshotCallable(const Model::RestoreFlowEntitySnapshotRequest& request) const;
			ResumeExecutionPlanSchedulerOutcome resumeExecutionPlanScheduler(const Model::ResumeExecutionPlanSchedulerRequest &request)const;
			void resumeExecutionPlanSchedulerAsync(const Model::ResumeExecutionPlanSchedulerRequest& request, const ResumeExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeExecutionPlanSchedulerOutcomeCallable resumeExecutionPlanSchedulerCallable(const Model::ResumeExecutionPlanSchedulerRequest& request) const;
			ResumeFlowOutcome resumeFlow(const Model::ResumeFlowRequest &request)const;
			void resumeFlowAsync(const Model::ResumeFlowRequest& request, const ResumeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeFlowOutcomeCallable resumeFlowCallable(const Model::ResumeFlowRequest& request) const;
			RetryOperationOutcome retryOperation(const Model::RetryOperationRequest &request)const;
			void retryOperationAsync(const Model::RetryOperationRequest& request, const RetryOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryOperationOutcomeCallable retryOperationCallable(const Model::RetryOperationRequest& request) const;
			RunClusterServiceActionOutcome runClusterServiceAction(const Model::RunClusterServiceActionRequest &request)const;
			void runClusterServiceActionAsync(const Model::RunClusterServiceActionRequest& request, const RunClusterServiceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunClusterServiceActionOutcomeCallable runClusterServiceActionCallable(const Model::RunClusterServiceActionRequest& request) const;
			RunExecutionPlanOutcome runExecutionPlan(const Model::RunExecutionPlanRequest &request)const;
			void runExecutionPlanAsync(const Model::RunExecutionPlanRequest& request, const RunExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunExecutionPlanOutcomeCallable runExecutionPlanCallable(const Model::RunExecutionPlanRequest& request) const;
			RunScalingActionV2Outcome runScalingActionV2(const Model::RunScalingActionV2Request &request)const;
			void runScalingActionV2Async(const Model::RunScalingActionV2Request& request, const RunScalingActionV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunScalingActionV2OutcomeCallable runScalingActionV2Callable(const Model::RunScalingActionV2Request& request) const;
			SearchLogOutcome searchLog(const Model::SearchLogRequest &request)const;
			void searchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchLogOutcomeCallable searchLogCallable(const Model::SearchLogRequest& request) const;
			StartFlowOutcome startFlow(const Model::StartFlowRequest &request)const;
			void startFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartFlowOutcomeCallable startFlowCallable(const Model::StartFlowRequest& request) const;
			SubmitFlowOutcome submitFlow(const Model::SubmitFlowRequest &request)const;
			void submitFlowAsync(const Model::SubmitFlowRequest& request, const SubmitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowOutcomeCallable submitFlowCallable(const Model::SubmitFlowRequest& request) const;
			SubmitFlowJobOutcome submitFlowJob(const Model::SubmitFlowJobRequest &request)const;
			void submitFlowJobAsync(const Model::SubmitFlowJobRequest& request, const SubmitFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowJobOutcomeCallable submitFlowJobCallable(const Model::SubmitFlowJobRequest& request) const;
			SuspendExecutionPlanSchedulerOutcome suspendExecutionPlanScheduler(const Model::SuspendExecutionPlanSchedulerRequest &request)const;
			void suspendExecutionPlanSchedulerAsync(const Model::SuspendExecutionPlanSchedulerRequest& request, const SuspendExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendExecutionPlanSchedulerOutcomeCallable suspendExecutionPlanSchedulerCallable(const Model::SuspendExecutionPlanSchedulerRequest& request) const;
			SuspendFlowOutcome suspendFlow(const Model::SuspendFlowRequest &request)const;
			void suspendFlowAsync(const Model::SuspendFlowRequest& request, const SuspendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendFlowOutcomeCallable suspendFlowCallable(const Model::SuspendFlowRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TagResourcesSystemTagsOutcome tagResourcesSystemTags(const Model::TagResourcesSystemTagsRequest &request)const;
			void tagResourcesSystemTagsAsync(const Model::TagResourcesSystemTagsRequest& request, const TagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesSystemTagsOutcomeCallable tagResourcesSystemTagsCallable(const Model::TagResourcesSystemTagsRequest& request) const;
			UninstallLibrariesOutcome uninstallLibraries(const Model::UninstallLibrariesRequest &request)const;
			void uninstallLibrariesAsync(const Model::UninstallLibrariesRequest& request, const UninstallLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallLibrariesOutcomeCallable uninstallLibrariesCallable(const Model::UninstallLibrariesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UntagResourcesSystemTagsOutcome untagResourcesSystemTags(const Model::UntagResourcesSystemTagsRequest &request)const;
			void untagResourcesSystemTagsAsync(const Model::UntagResourcesSystemTagsRequest& request, const UntagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesSystemTagsOutcomeCallable untagResourcesSystemTagsCallable(const Model::UntagResourcesSystemTagsRequest& request) const;
			UpdateDataSourceOutcome updateDataSource(const Model::UpdateDataSourceRequest &request)const;
			void updateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataSourceOutcomeCallable updateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;
			UpdateLibraryInstallTaskStatusOutcome updateLibraryInstallTaskStatus(const Model::UpdateLibraryInstallTaskStatusRequest &request)const;
			void updateLibraryInstallTaskStatusAsync(const Model::UpdateLibraryInstallTaskStatusRequest& request, const UpdateLibraryInstallTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLibraryInstallTaskStatusOutcomeCallable updateLibraryInstallTaskStatusCallable(const Model::UpdateLibraryInstallTaskStatusRequest& request) const;
			UpdateTagOutcome updateTag(const Model::UpdateTagRequest &request)const;
			void updateTagAsync(const Model::UpdateTagRequest& request, const UpdateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTagOutcomeCallable updateTagCallable(const Model::UpdateTagRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EMR_EMRCLIENT_H_
