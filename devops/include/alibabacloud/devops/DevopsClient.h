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

#ifndef ALIBABACLOUD_DEVOPS_DEVOPSCLIENT_H_
#define ALIBABACLOUD_DEVOPS_DEVOPSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "DevopsExport.h"
#include "model/AddGroupMemberRequest.h"
#include "model/AddGroupMemberResult.h"
#include "model/AddPipelineRelationsRequest.h"
#include "model/AddPipelineRelationsResult.h"
#include "model/AddRepositoryMemberRequest.h"
#include "model/AddRepositoryMemberResult.h"
#include "model/AddWebhookRequest.h"
#include "model/AddWebhookResult.h"
#include "model/CloseMergeRequestRequest.h"
#include "model/CloseMergeRequestResult.h"
#include "model/CreateAppMembersRequest.h"
#include "model/CreateAppMembersResult.h"
#include "model/CreateBranchRequest.h"
#include "model/CreateBranchResult.h"
#include "model/CreateCheckRunRequest.h"
#include "model/CreateCheckRunResult.h"
#include "model/CreateCommentRequest.h"
#include "model/CreateCommentResult.h"
#include "model/CreateCommitStatusRequest.h"
#include "model/CreateCommitStatusResult.h"
#include "model/CreateCommitWithMultipleFilesRequest.h"
#include "model/CreateCommitWithMultipleFilesResult.h"
#include "model/CreateDeployKeyRequest.h"
#include "model/CreateDeployKeyResult.h"
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateFlowTagRequest.h"
#include "model/CreateFlowTagResult.h"
#include "model/CreateFlowTagGroupRequest.h"
#include "model/CreateFlowTagGroupResult.h"
#include "model/CreateHostGroupRequest.h"
#include "model/CreateHostGroupResult.h"
#include "model/CreateMergeRequestRequest.h"
#include "model/CreateMergeRequestResult.h"
#include "model/CreateOAuthTokenRequest.h"
#include "model/CreateOAuthTokenResult.h"
#include "model/CreatePipelineRequest.h"
#include "model/CreatePipelineResult.h"
#include "model/CreatePipelineGroupRequest.h"
#include "model/CreatePipelineGroupResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateProjectLabelRequest.h"
#include "model/CreateProjectLabelResult.h"
#include "model/CreateProtectdBranchRequest.h"
#include "model/CreateProtectdBranchResult.h"
#include "model/CreatePushRuleRequest.h"
#include "model/CreatePushRuleResult.h"
#include "model/CreateRepositoryRequest.h"
#include "model/CreateRepositoryResult.h"
#include "model/CreateRepositoryGroupRequest.h"
#include "model/CreateRepositoryGroupResult.h"
#include "model/CreateResourceMemberRequest.h"
#include "model/CreateResourceMemberResult.h"
#include "model/CreateServiceAuthRequest.h"
#include "model/CreateServiceAuthResult.h"
#include "model/CreateServiceConnectionRequest.h"
#include "model/CreateServiceConnectionResult.h"
#include "model/CreateServiceCredentialRequest.h"
#include "model/CreateServiceCredentialResult.h"
#include "model/CreateSprintRequest.h"
#include "model/CreateSprintResult.h"
#include "model/CreateSshKeyRequest.h"
#include "model/CreateSshKeyResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/CreateTestCaseRequest.h"
#include "model/CreateTestCaseResult.h"
#include "model/CreateUserKeyRequest.h"
#include "model/CreateUserKeyResult.h"
#include "model/CreateVariableGroupRequest.h"
#include "model/CreateVariableGroupResult.h"
#include "model/CreateWorkitemRequest.h"
#include "model/CreateWorkitemResult.h"
#include "model/CreateWorkitemCommentRequest.h"
#include "model/CreateWorkitemCommentResult.h"
#include "model/CreateWorkitemEstimateRequest.h"
#include "model/CreateWorkitemEstimateResult.h"
#include "model/CreateWorkitemRecordRequest.h"
#include "model/CreateWorkitemRecordResult.h"
#include "model/CreateWorkitemV2Request.h"
#include "model/CreateWorkitemV2Result.h"
#include "model/CreateWorkspaceRequest.h"
#include "model/CreateWorkspaceResult.h"
#include "model/DeleteAppMemberRequest.h"
#include "model/DeleteAppMemberResult.h"
#include "model/DeleteBranchRequest.h"
#include "model/DeleteBranchResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DeleteFlowTagRequest.h"
#include "model/DeleteFlowTagResult.h"
#include "model/DeleteFlowTagGroupRequest.h"
#include "model/DeleteFlowTagGroupResult.h"
#include "model/DeleteGroupMemberRequest.h"
#include "model/DeleteGroupMemberResult.h"
#include "model/DeleteHostGroupRequest.h"
#include "model/DeleteHostGroupResult.h"
#include "model/DeletePipelineRequest.h"
#include "model/DeletePipelineResult.h"
#include "model/DeletePipelineGroupRequest.h"
#include "model/DeletePipelineGroupResult.h"
#include "model/DeletePipelineRelationsRequest.h"
#include "model/DeletePipelineRelationsResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteProjectLabelRequest.h"
#include "model/DeleteProjectLabelResult.h"
#include "model/DeleteProtectedBranchRequest.h"
#include "model/DeleteProtectedBranchResult.h"
#include "model/DeletePushRuleRequest.h"
#include "model/DeletePushRuleResult.h"
#include "model/DeleteRepositoryRequest.h"
#include "model/DeleteRepositoryResult.h"
#include "model/DeleteRepositoryGroupRequest.h"
#include "model/DeleteRepositoryGroupResult.h"
#include "model/DeleteRepositoryMemberRequest.h"
#include "model/DeleteRepositoryMemberResult.h"
#include "model/DeleteRepositoryWebhookRequest.h"
#include "model/DeleteRepositoryWebhookResult.h"
#include "model/DeleteResourceMemberRequest.h"
#include "model/DeleteResourceMemberResult.h"
#include "model/DeleteTagRequest.h"
#include "model/DeleteTagResult.h"
#include "model/DeleteUserKeyRequest.h"
#include "model/DeleteUserKeyResult.h"
#include "model/DeleteVariableGroupRequest.h"
#include "model/DeleteVariableGroupResult.h"
#include "model/DeleteWorkitemRequest.h"
#include "model/DeleteWorkitemResult.h"
#include "model/DeleteWorkitemAllCommentRequest.h"
#include "model/DeleteWorkitemAllCommentResult.h"
#include "model/DeleteWorkitemCommentRequest.h"
#include "model/DeleteWorkitemCommentResult.h"
#include "model/EnableDeployKeyRequest.h"
#include "model/EnableDeployKeyResult.h"
#include "model/FrozenWorkspaceRequest.h"
#include "model/FrozenWorkspaceResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetBranchInfoRequest.h"
#include "model/GetBranchInfoResult.h"
#include "model/GetCheckRunRequest.h"
#include "model/GetCheckRunResult.h"
#include "model/GetCodeupOrganizationRequest.h"
#include "model/GetCodeupOrganizationResult.h"
#include "model/GetCompareDetailRequest.h"
#include "model/GetCompareDetailResult.h"
#include "model/GetCustomFieldOptionRequest.h"
#include "model/GetCustomFieldOptionResult.h"
#include "model/GetFileBlobsRequest.h"
#include "model/GetFileBlobsResult.h"
#include "model/GetFileLastCommitRequest.h"
#include "model/GetFileLastCommitResult.h"
#include "model/GetFlowTagGroupRequest.h"
#include "model/GetFlowTagGroupResult.h"
#include "model/GetGroupByPathRequest.h"
#include "model/GetGroupByPathResult.h"
#include "model/GetGroupDetailRequest.h"
#include "model/GetGroupDetailResult.h"
#include "model/GetHostGroupRequest.h"
#include "model/GetHostGroupResult.h"
#include "model/GetMergeRequestRequest.h"
#include "model/GetMergeRequestResult.h"
#include "model/GetMergeRequestChangeTreeRequest.h"
#include "model/GetMergeRequestChangeTreeResult.h"
#include "model/GetOrganizationMemberRequest.h"
#include "model/GetOrganizationMemberResult.h"
#include "model/GetPipelineRequest.h"
#include "model/GetPipelineResult.h"
#include "model/GetPipelineArtifactUrlRequest.h"
#include "model/GetPipelineArtifactUrlResult.h"
#include "model/GetPipelineEmasArtifactUrlRequest.h"
#include "model/GetPipelineEmasArtifactUrlResult.h"
#include "model/GetPipelineGroupRequest.h"
#include "model/GetPipelineGroupResult.h"
#include "model/GetPipelineRunRequest.h"
#include "model/GetPipelineRunResult.h"
#include "model/GetPipelineScanReportUrlRequest.h"
#include "model/GetPipelineScanReportUrlResult.h"
#include "model/GetProjectInfoRequest.h"
#include "model/GetProjectInfoResult.h"
#include "model/GetProjectMemberRequest.h"
#include "model/GetProjectMemberResult.h"
#include "model/GetPushRuleRequest.h"
#include "model/GetPushRuleResult.h"
#include "model/GetRepositoryRequest.h"
#include "model/GetRepositoryResult.h"
#include "model/GetRepositoryCommitRequest.h"
#include "model/GetRepositoryCommitResult.h"
#include "model/GetRepositoryTagRequest.h"
#include "model/GetRepositoryTagResult.h"
#include "model/GetSearchCodePreviewRequest.h"
#include "model/GetSearchCodePreviewResult.h"
#include "model/GetSprintInfoRequest.h"
#include "model/GetSprintInfoResult.h"
#include "model/GetTestResultListRequest.h"
#include "model/GetTestResultListResult.h"
#include "model/GetTestcaseListRequest.h"
#include "model/GetTestcaseListResult.h"
#include "model/GetUserInfoRequest.h"
#include "model/GetUserInfoResult.h"
#include "model/GetVMDeployOrderRequest.h"
#include "model/GetVMDeployOrderResult.h"
#include "model/GetVariableGroupRequest.h"
#include "model/GetVariableGroupResult.h"
#include "model/GetWorkItemActivityRequest.h"
#include "model/GetWorkItemActivityResult.h"
#include "model/GetWorkItemInfoRequest.h"
#include "model/GetWorkItemInfoResult.h"
#include "model/GetWorkItemWorkFlowInfoRequest.h"
#include "model/GetWorkItemWorkFlowInfoResult.h"
#include "model/GetWorkitemAttachmentCreatemetaRequest.h"
#include "model/GetWorkitemAttachmentCreatemetaResult.h"
#include "model/GetWorkitemCommentListRequest.h"
#include "model/GetWorkitemCommentListResult.h"
#include "model/GetWorkitemFileRequest.h"
#include "model/GetWorkitemFileResult.h"
#include "model/GetWorkitemRelationsRequest.h"
#include "model/GetWorkitemRelationsResult.h"
#include "model/GetWorkitemTimeTypeListRequest.h"
#include "model/GetWorkitemTimeTypeListResult.h"
#include "model/GetWorkspaceRequest.h"
#include "model/GetWorkspaceResult.h"
#include "model/JoinPipelineGroupRequest.h"
#include "model/JoinPipelineGroupResult.h"
#include "model/LinkMergeRequestLabelRequest.h"
#include "model/LinkMergeRequestLabelResult.h"
#include "model/ListApplicationMembersRequest.h"
#include "model/ListApplicationMembersResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListCheckRunsRequest.h"
#include "model/ListCheckRunsResult.h"
#include "model/ListCommitStatusesRequest.h"
#include "model/ListCommitStatusesResult.h"
#include "model/ListFlowTagGroupsRequest.h"
#include "model/ListFlowTagGroupsResult.h"
#include "model/ListGroupMemberRequest.h"
#include "model/ListGroupMemberResult.h"
#include "model/ListGroupRepositoriesRequest.h"
#include "model/ListGroupRepositoriesResult.h"
#include "model/ListHostGroupsRequest.h"
#include "model/ListHostGroupsResult.h"
#include "model/ListJoinedOrganizationsRequest.h"
#include "model/ListJoinedOrganizationsResult.h"
#include "model/ListMergeRequestCommentsRequest.h"
#include "model/ListMergeRequestCommentsResult.h"
#include "model/ListMergeRequestFilesReadsRequest.h"
#include "model/ListMergeRequestFilesReadsResult.h"
#include "model/ListMergeRequestLabelsRequest.h"
#include "model/ListMergeRequestLabelsResult.h"
#include "model/ListMergeRequestPatchSetsRequest.h"
#include "model/ListMergeRequestPatchSetsResult.h"
#include "model/ListMergeRequestsRequest.h"
#include "model/ListMergeRequestsResult.h"
#include "model/ListOrganizationMembersRequest.h"
#include "model/ListOrganizationMembersResult.h"
#include "model/ListOrganizationsRequest.h"
#include "model/ListOrganizationsResult.h"
#include "model/ListPipelineGroupPipelinesRequest.h"
#include "model/ListPipelineGroupPipelinesResult.h"
#include "model/ListPipelineGroupsRequest.h"
#include "model/ListPipelineGroupsResult.h"
#include "model/ListPipelineJobHistorysRequest.h"
#include "model/ListPipelineJobHistorysResult.h"
#include "model/ListPipelineJobsRequest.h"
#include "model/ListPipelineJobsResult.h"
#include "model/ListPipelineRelationsRequest.h"
#include "model/ListPipelineRelationsResult.h"
#include "model/ListPipelineRunsRequest.h"
#include "model/ListPipelineRunsResult.h"
#include "model/ListPipelinesRequest.h"
#include "model/ListPipelinesResult.h"
#include "model/ListProjectLabelsRequest.h"
#include "model/ListProjectLabelsResult.h"
#include "model/ListProjectMembersRequest.h"
#include "model/ListProjectMembersResult.h"
#include "model/ListProjectTemplatesRequest.h"
#include "model/ListProjectTemplatesResult.h"
#include "model/ListProjectWorkitemTypesRequest.h"
#include "model/ListProjectWorkitemTypesResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListProtectedBranchesRequest.h"
#include "model/ListProtectedBranchesResult.h"
#include "model/ListPushRulesRequest.h"
#include "model/ListPushRulesResult.h"
#include "model/ListRepositoriesRequest.h"
#include "model/ListRepositoriesResult.h"
#include "model/ListRepositoryBranchesRequest.h"
#include "model/ListRepositoryBranchesResult.h"
#include "model/ListRepositoryCommitDiffRequest.h"
#include "model/ListRepositoryCommitDiffResult.h"
#include "model/ListRepositoryCommitsRequest.h"
#include "model/ListRepositoryCommitsResult.h"
#include "model/ListRepositoryGroupsRequest.h"
#include "model/ListRepositoryGroupsResult.h"
#include "model/ListRepositoryMemberWithInheritedRequest.h"
#include "model/ListRepositoryMemberWithInheritedResult.h"
#include "model/ListRepositoryTagsRequest.h"
#include "model/ListRepositoryTagsResult.h"
#include "model/ListRepositoryTreeRequest.h"
#include "model/ListRepositoryTreeResult.h"
#include "model/ListRepositoryWebhookRequest.h"
#include "model/ListRepositoryWebhookResult.h"
#include "model/ListResourceMembersRequest.h"
#include "model/ListResourceMembersResult.h"
#include "model/ListSearchCommitRequest.h"
#include "model/ListSearchCommitResult.h"
#include "model/ListSearchRepositoryRequest.h"
#include "model/ListSearchRepositoryResult.h"
#include "model/ListSearchSourceCodeRequest.h"
#include "model/ListSearchSourceCodeResult.h"
#include "model/ListServiceAuthsRequest.h"
#include "model/ListServiceAuthsResult.h"
#include "model/ListServiceConnectionsRequest.h"
#include "model/ListServiceConnectionsResult.h"
#include "model/ListServiceCredentialsRequest.h"
#include "model/ListServiceCredentialsResult.h"
#include "model/ListSprintsRequest.h"
#include "model/ListSprintsResult.h"
#include "model/ListTestCaseFieldsRequest.h"
#include "model/ListTestCaseFieldsResult.h"
#include "model/ListUserDrawRecordByPkRequest.h"
#include "model/ListUserDrawRecordByPkResult.h"
#include "model/ListUserKeysRequest.h"
#include "model/ListUserKeysResult.h"
#include "model/ListUserResourcesRequest.h"
#include "model/ListUserResourcesResult.h"
#include "model/ListVariableGroupsRequest.h"
#include "model/ListVariableGroupsResult.h"
#include "model/ListWorkItemAllFieldsRequest.h"
#include "model/ListWorkItemAllFieldsResult.h"
#include "model/ListWorkItemWorkFlowStatusRequest.h"
#include "model/ListWorkItemWorkFlowStatusResult.h"
#include "model/ListWorkitemAttachmentsRequest.h"
#include "model/ListWorkitemAttachmentsResult.h"
#include "model/ListWorkitemEstimateRequest.h"
#include "model/ListWorkitemEstimateResult.h"
#include "model/ListWorkitemTimeRequest.h"
#include "model/ListWorkitemTimeResult.h"
#include "model/ListWorkitemsRequest.h"
#include "model/ListWorkitemsResult.h"
#include "model/ListWorkspacesRequest.h"
#include "model/ListWorkspacesResult.h"
#include "model/LogPipelineJobRunRequest.h"
#include "model/LogPipelineJobRunResult.h"
#include "model/LogVMDeployMachineRequest.h"
#include "model/LogVMDeployMachineResult.h"
#include "model/MergeMergeRequestRequest.h"
#include "model/MergeMergeRequestResult.h"
#include "model/PassPipelineValidateRequest.h"
#include "model/PassPipelineValidateResult.h"
#include "model/RefusePipelineValidateRequest.h"
#include "model/RefusePipelineValidateResult.h"
#include "model/ReleaseWorkspaceRequest.h"
#include "model/ReleaseWorkspaceResult.h"
#include "model/ReopenMergeRequestRequest.h"
#include "model/ReopenMergeRequestResult.h"
#include "model/ResetSshKeyRequest.h"
#include "model/ResetSshKeyResult.h"
#include "model/ResumeVMDeployOrderRequest.h"
#include "model/ResumeVMDeployOrderResult.h"
#include "model/RetryPipelineJobRunRequest.h"
#include "model/RetryPipelineJobRunResult.h"
#include "model/RetryVMDeployMachineRequest.h"
#include "model/RetryVMDeployMachineResult.h"
#include "model/ReviewMergeRequestRequest.h"
#include "model/ReviewMergeRequestResult.h"
#include "model/SkipPipelineJobRunRequest.h"
#include "model/SkipPipelineJobRunResult.h"
#include "model/SkipVMDeployMachineRequest.h"
#include "model/SkipVMDeployMachineResult.h"
#include "model/StartPipelineRunRequest.h"
#include "model/StartPipelineRunResult.h"
#include "model/StopPipelineJobRunRequest.h"
#include "model/StopPipelineJobRunResult.h"
#include "model/StopPipelineRunRequest.h"
#include "model/StopPipelineRunResult.h"
#include "model/StopVMDeployOrderRequest.h"
#include "model/StopVMDeployOrderResult.h"
#include "model/TransferRepositoryRequest.h"
#include "model/TransferRepositoryResult.h"
#include "model/TriggerRepositoryMirrorSyncRequest.h"
#include "model/TriggerRepositoryMirrorSyncResult.h"
#include "model/UpdateAppMemberRequest.h"
#include "model/UpdateAppMemberResult.h"
#include "model/UpdateApplicationRequest.h"
#include "model/UpdateApplicationResult.h"
#include "model/UpdateCheckRunRequest.h"
#include "model/UpdateCheckRunResult.h"
#include "model/UpdateFileRequest.h"
#include "model/UpdateFileResult.h"
#include "model/UpdateFlowTagRequest.h"
#include "model/UpdateFlowTagResult.h"
#include "model/UpdateFlowTagGroupRequest.h"
#include "model/UpdateFlowTagGroupResult.h"
#include "model/UpdateGroupRequest.h"
#include "model/UpdateGroupResult.h"
#include "model/UpdateGroupMemberRequest.h"
#include "model/UpdateGroupMemberResult.h"
#include "model/UpdateHostGroupRequest.h"
#include "model/UpdateHostGroupResult.h"
#include "model/UpdateMergeRequestRequest.h"
#include "model/UpdateMergeRequestResult.h"
#include "model/UpdateMergeRequestPersonnelRequest.h"
#include "model/UpdateMergeRequestPersonnelResult.h"
#include "model/UpdatePipelineRequest.h"
#include "model/UpdatePipelineResult.h"
#include "model/UpdatePipelineBaseInfoRequest.h"
#include "model/UpdatePipelineBaseInfoResult.h"
#include "model/UpdatePipelineGroupRequest.h"
#include "model/UpdatePipelineGroupResult.h"
#include "model/UpdateProjectFieldRequest.h"
#include "model/UpdateProjectFieldResult.h"
#include "model/UpdateProjectLabelRequest.h"
#include "model/UpdateProjectLabelResult.h"
#include "model/UpdateProjectMemberRequest.h"
#include "model/UpdateProjectMemberResult.h"
#include "model/UpdateProtectedBranchesRequest.h"
#include "model/UpdateProtectedBranchesResult.h"
#include "model/UpdatePushReviewOnOffRequest.h"
#include "model/UpdatePushReviewOnOffResult.h"
#include "model/UpdatePushRuleRequest.h"
#include "model/UpdatePushRuleResult.h"
#include "model/UpdateRepositoryRequest.h"
#include "model/UpdateRepositoryResult.h"
#include "model/UpdateRepositoryMemberRequest.h"
#include "model/UpdateRepositoryMemberResult.h"
#include "model/UpdateResourceMemberRequest.h"
#include "model/UpdateResourceMemberResult.h"
#include "model/UpdateTestCaseRequest.h"
#include "model/UpdateTestCaseResult.h"
#include "model/UpdateTestResultRequest.h"
#include "model/UpdateTestResultResult.h"
#include "model/UpdateVariableGroupRequest.h"
#include "model/UpdateVariableGroupResult.h"
#include "model/UpdateWorkItemRequest.h"
#include "model/UpdateWorkItemResult.h"
#include "model/UpdateWorkitemCommentRequest.h"
#include "model/UpdateWorkitemCommentResult.h"
#include "model/UpdateWorkitemFieldRequest.h"
#include "model/UpdateWorkitemFieldResult.h"
#include "model/WorkitemAttachmentCreateRequest.h"
#include "model/WorkitemAttachmentCreateResult.h"


namespace AlibabaCloud
{
	namespace Devops
	{
		class ALIBABACLOUD_DEVOPS_EXPORT DevopsClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddGroupMemberResult> AddGroupMemberOutcome;
			typedef std::future<AddGroupMemberOutcome> AddGroupMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::AddGroupMemberRequest&, const AddGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::AddPipelineRelationsResult> AddPipelineRelationsOutcome;
			typedef std::future<AddPipelineRelationsOutcome> AddPipelineRelationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::AddPipelineRelationsRequest&, const AddPipelineRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPipelineRelationsAsyncHandler;
			typedef Outcome<Error, Model::AddRepositoryMemberResult> AddRepositoryMemberOutcome;
			typedef std::future<AddRepositoryMemberOutcome> AddRepositoryMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::AddRepositoryMemberRequest&, const AddRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::AddWebhookResult> AddWebhookOutcome;
			typedef std::future<AddWebhookOutcome> AddWebhookOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::AddWebhookRequest&, const AddWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWebhookAsyncHandler;
			typedef Outcome<Error, Model::CloseMergeRequestResult> CloseMergeRequestOutcome;
			typedef std::future<CloseMergeRequestOutcome> CloseMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CloseMergeRequestRequest&, const CloseMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateAppMembersResult> CreateAppMembersOutcome;
			typedef std::future<CreateAppMembersOutcome> CreateAppMembersOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateAppMembersRequest&, const CreateAppMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppMembersAsyncHandler;
			typedef Outcome<Error, Model::CreateBranchResult> CreateBranchOutcome;
			typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateBranchRequest&, const CreateBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBranchAsyncHandler;
			typedef Outcome<Error, Model::CreateCheckRunResult> CreateCheckRunOutcome;
			typedef std::future<CreateCheckRunOutcome> CreateCheckRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateCheckRunRequest&, const CreateCheckRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckRunAsyncHandler;
			typedef Outcome<Error, Model::CreateCommentResult> CreateCommentOutcome;
			typedef std::future<CreateCommentOutcome> CreateCommentOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateCommentRequest&, const CreateCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommentAsyncHandler;
			typedef Outcome<Error, Model::CreateCommitStatusResult> CreateCommitStatusOutcome;
			typedef std::future<CreateCommitStatusOutcome> CreateCommitStatusOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateCommitStatusRequest&, const CreateCommitStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommitStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateCommitWithMultipleFilesResult> CreateCommitWithMultipleFilesOutcome;
			typedef std::future<CreateCommitWithMultipleFilesOutcome> CreateCommitWithMultipleFilesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateCommitWithMultipleFilesRequest&, const CreateCommitWithMultipleFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommitWithMultipleFilesAsyncHandler;
			typedef Outcome<Error, Model::CreateDeployKeyResult> CreateDeployKeyOutcome;
			typedef std::future<CreateDeployKeyOutcome> CreateDeployKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateDeployKeyRequest&, const CreateDeployKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeployKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowTagResult> CreateFlowTagOutcome;
			typedef std::future<CreateFlowTagOutcome> CreateFlowTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateFlowTagRequest&, const CreateFlowTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowTagAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowTagGroupResult> CreateFlowTagGroupOutcome;
			typedef std::future<CreateFlowTagGroupOutcome> CreateFlowTagGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateFlowTagGroupRequest&, const CreateFlowTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowTagGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateHostGroupResult> CreateHostGroupOutcome;
			typedef std::future<CreateHostGroupOutcome> CreateHostGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateHostGroupRequest&, const CreateHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeRequestResult> CreateMergeRequestOutcome;
			typedef std::future<CreateMergeRequestOutcome> CreateMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateMergeRequestRequest&, const CreateMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateOAuthTokenResult> CreateOAuthTokenOutcome;
			typedef std::future<CreateOAuthTokenOutcome> CreateOAuthTokenOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateOAuthTokenRequest&, const CreateOAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelineResult> CreatePipelineOutcome;
			typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreatePipelineRequest&, const CreatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelineAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelineGroupResult> CreatePipelineGroupOutcome;
			typedef std::future<CreatePipelineGroupOutcome> CreatePipelineGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreatePipelineGroupRequest&, const CreatePipelineGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelineGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectLabelResult> CreateProjectLabelOutcome;
			typedef std::future<CreateProjectLabelOutcome> CreateProjectLabelOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateProjectLabelRequest&, const CreateProjectLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectLabelAsyncHandler;
			typedef Outcome<Error, Model::CreateProtectdBranchResult> CreateProtectdBranchOutcome;
			typedef std::future<CreateProtectdBranchOutcome> CreateProtectdBranchOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateProtectdBranchRequest&, const CreateProtectdBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtectdBranchAsyncHandler;
			typedef Outcome<Error, Model::CreatePushRuleResult> CreatePushRuleOutcome;
			typedef std::future<CreatePushRuleOutcome> CreatePushRuleOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreatePushRuleRequest&, const CreatePushRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePushRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryResult> CreateRepositoryOutcome;
			typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateRepositoryRequest&, const CreateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryGroupResult> CreateRepositoryGroupOutcome;
			typedef std::future<CreateRepositoryGroupOutcome> CreateRepositoryGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateRepositoryGroupRequest&, const CreateRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceMemberResult> CreateResourceMemberOutcome;
			typedef std::future<CreateResourceMemberOutcome> CreateResourceMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateResourceMemberRequest&, const CreateResourceMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceAuthResult> CreateServiceAuthOutcome;
			typedef std::future<CreateServiceAuthOutcome> CreateServiceAuthOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateServiceAuthRequest&, const CreateServiceAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAuthAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceConnectionResult> CreateServiceConnectionOutcome;
			typedef std::future<CreateServiceConnectionOutcome> CreateServiceConnectionOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateServiceConnectionRequest&, const CreateServiceConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceCredentialResult> CreateServiceCredentialOutcome;
			typedef std::future<CreateServiceCredentialOutcome> CreateServiceCredentialOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateServiceCredentialRequest&, const CreateServiceCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceCredentialAsyncHandler;
			typedef Outcome<Error, Model::CreateSprintResult> CreateSprintOutcome;
			typedef std::future<CreateSprintOutcome> CreateSprintOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateSprintRequest&, const CreateSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSprintAsyncHandler;
			typedef Outcome<Error, Model::CreateSshKeyResult> CreateSshKeyOutcome;
			typedef std::future<CreateSshKeyOutcome> CreateSshKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateSshKeyRequest&, const CreateSshKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSshKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::CreateTestCaseResult> CreateTestCaseOutcome;
			typedef std::future<CreateTestCaseOutcome> CreateTestCaseOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateTestCaseRequest&, const CreateTestCaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTestCaseAsyncHandler;
			typedef Outcome<Error, Model::CreateUserKeyResult> CreateUserKeyOutcome;
			typedef std::future<CreateUserKeyOutcome> CreateUserKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateUserKeyRequest&, const CreateUserKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateVariableGroupResult> CreateVariableGroupOutcome;
			typedef std::future<CreateVariableGroupOutcome> CreateVariableGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateVariableGroupRequest&, const CreateVariableGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVariableGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkitemResult> CreateWorkitemOutcome;
			typedef std::future<CreateWorkitemOutcome> CreateWorkitemOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkitemRequest&, const CreateWorkitemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkitemAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkitemCommentResult> CreateWorkitemCommentOutcome;
			typedef std::future<CreateWorkitemCommentOutcome> CreateWorkitemCommentOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkitemCommentRequest&, const CreateWorkitemCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkitemCommentAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkitemEstimateResult> CreateWorkitemEstimateOutcome;
			typedef std::future<CreateWorkitemEstimateOutcome> CreateWorkitemEstimateOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkitemEstimateRequest&, const CreateWorkitemEstimateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkitemEstimateAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkitemRecordResult> CreateWorkitemRecordOutcome;
			typedef std::future<CreateWorkitemRecordOutcome> CreateWorkitemRecordOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkitemRecordRequest&, const CreateWorkitemRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkitemRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkitemV2Result> CreateWorkitemV2Outcome;
			typedef std::future<CreateWorkitemV2Outcome> CreateWorkitemV2OutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkitemV2Request&, const CreateWorkitemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkitemV2AsyncHandler;
			typedef Outcome<Error, Model::CreateWorkspaceResult> CreateWorkspaceOutcome;
			typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::CreateWorkspaceRequest&, const CreateWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppMemberResult> DeleteAppMemberOutcome;
			typedef std::future<DeleteAppMemberOutcome> DeleteAppMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteAppMemberRequest&, const DeleteAppMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteBranchResult> DeleteBranchOutcome;
			typedef std::future<DeleteBranchOutcome> DeleteBranchOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteBranchRequest&, const DeleteBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBranchAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowTagResult> DeleteFlowTagOutcome;
			typedef std::future<DeleteFlowTagOutcome> DeleteFlowTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteFlowTagRequest&, const DeleteFlowTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowTagGroupResult> DeleteFlowTagGroupOutcome;
			typedef std::future<DeleteFlowTagGroupOutcome> DeleteFlowTagGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteFlowTagGroupRequest&, const DeleteFlowTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowTagGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupMemberResult> DeleteGroupMemberOutcome;
			typedef std::future<DeleteGroupMemberOutcome> DeleteGroupMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteGroupMemberRequest&, const DeleteGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteHostGroupResult> DeleteHostGroupOutcome;
			typedef std::future<DeleteHostGroupOutcome> DeleteHostGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteHostGroupRequest&, const DeleteHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostGroupAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelineResult> DeletePipelineOutcome;
			typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeletePipelineRequest&, const DeletePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelineAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelineGroupResult> DeletePipelineGroupOutcome;
			typedef std::future<DeletePipelineGroupOutcome> DeletePipelineGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeletePipelineGroupRequest&, const DeletePipelineGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelineGroupAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelineRelationsResult> DeletePipelineRelationsOutcome;
			typedef std::future<DeletePipelineRelationsOutcome> DeletePipelineRelationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeletePipelineRelationsRequest&, const DeletePipelineRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelineRelationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectLabelResult> DeleteProjectLabelOutcome;
			typedef std::future<DeleteProjectLabelOutcome> DeleteProjectLabelOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteProjectLabelRequest&, const DeleteProjectLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectLabelAsyncHandler;
			typedef Outcome<Error, Model::DeleteProtectedBranchResult> DeleteProtectedBranchOutcome;
			typedef std::future<DeleteProtectedBranchOutcome> DeleteProtectedBranchOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteProtectedBranchRequest&, const DeleteProtectedBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtectedBranchAsyncHandler;
			typedef Outcome<Error, Model::DeletePushRuleResult> DeletePushRuleOutcome;
			typedef std::future<DeletePushRuleOutcome> DeletePushRuleOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeletePushRuleRequest&, const DeletePushRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePushRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryResult> DeleteRepositoryOutcome;
			typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteRepositoryRequest&, const DeleteRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryGroupResult> DeleteRepositoryGroupOutcome;
			typedef std::future<DeleteRepositoryGroupOutcome> DeleteRepositoryGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteRepositoryGroupRequest&, const DeleteRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryMemberResult> DeleteRepositoryMemberOutcome;
			typedef std::future<DeleteRepositoryMemberOutcome> DeleteRepositoryMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteRepositoryMemberRequest&, const DeleteRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryWebhookResult> DeleteRepositoryWebhookOutcome;
			typedef std::future<DeleteRepositoryWebhookOutcome> DeleteRepositoryWebhookOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteRepositoryWebhookRequest&, const DeleteRepositoryWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryWebhookAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceMemberResult> DeleteResourceMemberOutcome;
			typedef std::future<DeleteResourceMemberOutcome> DeleteResourceMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteResourceMemberRequest&, const DeleteResourceMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResult> DeleteTagOutcome;
			typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteTagRequest&, const DeleteTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserKeyResult> DeleteUserKeyOutcome;
			typedef std::future<DeleteUserKeyOutcome> DeleteUserKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteUserKeyRequest&, const DeleteUserKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserKeyAsyncHandler;
			typedef Outcome<Error, Model::DeleteVariableGroupResult> DeleteVariableGroupOutcome;
			typedef std::future<DeleteVariableGroupOutcome> DeleteVariableGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteVariableGroupRequest&, const DeleteVariableGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVariableGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkitemResult> DeleteWorkitemOutcome;
			typedef std::future<DeleteWorkitemOutcome> DeleteWorkitemOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteWorkitemRequest&, const DeleteWorkitemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkitemAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkitemAllCommentResult> DeleteWorkitemAllCommentOutcome;
			typedef std::future<DeleteWorkitemAllCommentOutcome> DeleteWorkitemAllCommentOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteWorkitemAllCommentRequest&, const DeleteWorkitemAllCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkitemAllCommentAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkitemCommentResult> DeleteWorkitemCommentOutcome;
			typedef std::future<DeleteWorkitemCommentOutcome> DeleteWorkitemCommentOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::DeleteWorkitemCommentRequest&, const DeleteWorkitemCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkitemCommentAsyncHandler;
			typedef Outcome<Error, Model::EnableDeployKeyResult> EnableDeployKeyOutcome;
			typedef std::future<EnableDeployKeyOutcome> EnableDeployKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::EnableDeployKeyRequest&, const EnableDeployKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeployKeyAsyncHandler;
			typedef Outcome<Error, Model::FrozenWorkspaceResult> FrozenWorkspaceOutcome;
			typedef std::future<FrozenWorkspaceOutcome> FrozenWorkspaceOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::FrozenWorkspaceRequest&, const FrozenWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FrozenWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetBranchInfoResult> GetBranchInfoOutcome;
			typedef std::future<GetBranchInfoOutcome> GetBranchInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetBranchInfoRequest&, const GetBranchInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBranchInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCheckRunResult> GetCheckRunOutcome;
			typedef std::future<GetCheckRunOutcome> GetCheckRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetCheckRunRequest&, const GetCheckRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckRunAsyncHandler;
			typedef Outcome<Error, Model::GetCodeupOrganizationResult> GetCodeupOrganizationOutcome;
			typedef std::future<GetCodeupOrganizationOutcome> GetCodeupOrganizationOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetCodeupOrganizationRequest&, const GetCodeupOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeupOrganizationAsyncHandler;
			typedef Outcome<Error, Model::GetCompareDetailResult> GetCompareDetailOutcome;
			typedef std::future<GetCompareDetailOutcome> GetCompareDetailOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetCompareDetailRequest&, const GetCompareDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompareDetailAsyncHandler;
			typedef Outcome<Error, Model::GetCustomFieldOptionResult> GetCustomFieldOptionOutcome;
			typedef std::future<GetCustomFieldOptionOutcome> GetCustomFieldOptionOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetCustomFieldOptionRequest&, const GetCustomFieldOptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomFieldOptionAsyncHandler;
			typedef Outcome<Error, Model::GetFileBlobsResult> GetFileBlobsOutcome;
			typedef std::future<GetFileBlobsOutcome> GetFileBlobsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetFileBlobsRequest&, const GetFileBlobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileBlobsAsyncHandler;
			typedef Outcome<Error, Model::GetFileLastCommitResult> GetFileLastCommitOutcome;
			typedef std::future<GetFileLastCommitOutcome> GetFileLastCommitOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetFileLastCommitRequest&, const GetFileLastCommitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileLastCommitAsyncHandler;
			typedef Outcome<Error, Model::GetFlowTagGroupResult> GetFlowTagGroupOutcome;
			typedef std::future<GetFlowTagGroupOutcome> GetFlowTagGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetFlowTagGroupRequest&, const GetFlowTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowTagGroupAsyncHandler;
			typedef Outcome<Error, Model::GetGroupByPathResult> GetGroupByPathOutcome;
			typedef std::future<GetGroupByPathOutcome> GetGroupByPathOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetGroupByPathRequest&, const GetGroupByPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupByPathAsyncHandler;
			typedef Outcome<Error, Model::GetGroupDetailResult> GetGroupDetailOutcome;
			typedef std::future<GetGroupDetailOutcome> GetGroupDetailOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetGroupDetailRequest&, const GetGroupDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupDetailAsyncHandler;
			typedef Outcome<Error, Model::GetHostGroupResult> GetHostGroupOutcome;
			typedef std::future<GetHostGroupOutcome> GetHostGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetHostGroupRequest&, const GetHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHostGroupAsyncHandler;
			typedef Outcome<Error, Model::GetMergeRequestResult> GetMergeRequestOutcome;
			typedef std::future<GetMergeRequestOutcome> GetMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetMergeRequestRequest&, const GetMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::GetMergeRequestChangeTreeResult> GetMergeRequestChangeTreeOutcome;
			typedef std::future<GetMergeRequestChangeTreeOutcome> GetMergeRequestChangeTreeOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetMergeRequestChangeTreeRequest&, const GetMergeRequestChangeTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMergeRequestChangeTreeAsyncHandler;
			typedef Outcome<Error, Model::GetOrganizationMemberResult> GetOrganizationMemberOutcome;
			typedef std::future<GetOrganizationMemberOutcome> GetOrganizationMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetOrganizationMemberRequest&, const GetOrganizationMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationMemberAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineResult> GetPipelineOutcome;
			typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineRequest&, const GetPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineArtifactUrlResult> GetPipelineArtifactUrlOutcome;
			typedef std::future<GetPipelineArtifactUrlOutcome> GetPipelineArtifactUrlOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineArtifactUrlRequest&, const GetPipelineArtifactUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineArtifactUrlAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineEmasArtifactUrlResult> GetPipelineEmasArtifactUrlOutcome;
			typedef std::future<GetPipelineEmasArtifactUrlOutcome> GetPipelineEmasArtifactUrlOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineEmasArtifactUrlRequest&, const GetPipelineEmasArtifactUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineEmasArtifactUrlAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineGroupResult> GetPipelineGroupOutcome;
			typedef std::future<GetPipelineGroupOutcome> GetPipelineGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineGroupRequest&, const GetPipelineGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineGroupAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineRunResult> GetPipelineRunOutcome;
			typedef std::future<GetPipelineRunOutcome> GetPipelineRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineRunRequest&, const GetPipelineRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineRunAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineScanReportUrlResult> GetPipelineScanReportUrlOutcome;
			typedef std::future<GetPipelineScanReportUrlOutcome> GetPipelineScanReportUrlOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPipelineScanReportUrlRequest&, const GetPipelineScanReportUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineScanReportUrlAsyncHandler;
			typedef Outcome<Error, Model::GetProjectInfoResult> GetProjectInfoOutcome;
			typedef std::future<GetProjectInfoOutcome> GetProjectInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetProjectInfoRequest&, const GetProjectInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProjectMemberResult> GetProjectMemberOutcome;
			typedef std::future<GetProjectMemberOutcome> GetProjectMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetProjectMemberRequest&, const GetProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::GetPushRuleResult> GetPushRuleOutcome;
			typedef std::future<GetPushRuleOutcome> GetPushRuleOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetPushRuleRequest&, const GetPushRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPushRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryResult> GetRepositoryOutcome;
			typedef std::future<GetRepositoryOutcome> GetRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetRepositoryRequest&, const GetRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryCommitResult> GetRepositoryCommitOutcome;
			typedef std::future<GetRepositoryCommitOutcome> GetRepositoryCommitOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetRepositoryCommitRequest&, const GetRepositoryCommitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryCommitAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryTagResult> GetRepositoryTagOutcome;
			typedef std::future<GetRepositoryTagOutcome> GetRepositoryTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetRepositoryTagRequest&, const GetRepositoryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryTagAsyncHandler;
			typedef Outcome<Error, Model::GetSearchCodePreviewResult> GetSearchCodePreviewOutcome;
			typedef std::future<GetSearchCodePreviewOutcome> GetSearchCodePreviewOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetSearchCodePreviewRequest&, const GetSearchCodePreviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSearchCodePreviewAsyncHandler;
			typedef Outcome<Error, Model::GetSprintInfoResult> GetSprintInfoOutcome;
			typedef std::future<GetSprintInfoOutcome> GetSprintInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetSprintInfoRequest&, const GetSprintInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSprintInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTestResultListResult> GetTestResultListOutcome;
			typedef std::future<GetTestResultListOutcome> GetTestResultListOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetTestResultListRequest&, const GetTestResultListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTestResultListAsyncHandler;
			typedef Outcome<Error, Model::GetTestcaseListResult> GetTestcaseListOutcome;
			typedef std::future<GetTestcaseListOutcome> GetTestcaseListOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetTestcaseListRequest&, const GetTestcaseListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTestcaseListAsyncHandler;
			typedef Outcome<Error, Model::GetUserInfoResult> GetUserInfoOutcome;
			typedef std::future<GetUserInfoOutcome> GetUserInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetUserInfoRequest&, const GetUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInfoAsyncHandler;
			typedef Outcome<Error, Model::GetVMDeployOrderResult> GetVMDeployOrderOutcome;
			typedef std::future<GetVMDeployOrderOutcome> GetVMDeployOrderOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetVMDeployOrderRequest&, const GetVMDeployOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVMDeployOrderAsyncHandler;
			typedef Outcome<Error, Model::GetVariableGroupResult> GetVariableGroupOutcome;
			typedef std::future<GetVariableGroupOutcome> GetVariableGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetVariableGroupRequest&, const GetVariableGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVariableGroupAsyncHandler;
			typedef Outcome<Error, Model::GetWorkItemActivityResult> GetWorkItemActivityOutcome;
			typedef std::future<GetWorkItemActivityOutcome> GetWorkItemActivityOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkItemActivityRequest&, const GetWorkItemActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkItemActivityAsyncHandler;
			typedef Outcome<Error, Model::GetWorkItemInfoResult> GetWorkItemInfoOutcome;
			typedef std::future<GetWorkItemInfoOutcome> GetWorkItemInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkItemInfoRequest&, const GetWorkItemInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkItemInfoAsyncHandler;
			typedef Outcome<Error, Model::GetWorkItemWorkFlowInfoResult> GetWorkItemWorkFlowInfoOutcome;
			typedef std::future<GetWorkItemWorkFlowInfoOutcome> GetWorkItemWorkFlowInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkItemWorkFlowInfoRequest&, const GetWorkItemWorkFlowInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkItemWorkFlowInfoAsyncHandler;
			typedef Outcome<Error, Model::GetWorkitemAttachmentCreatemetaResult> GetWorkitemAttachmentCreatemetaOutcome;
			typedef std::future<GetWorkitemAttachmentCreatemetaOutcome> GetWorkitemAttachmentCreatemetaOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkitemAttachmentCreatemetaRequest&, const GetWorkitemAttachmentCreatemetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkitemAttachmentCreatemetaAsyncHandler;
			typedef Outcome<Error, Model::GetWorkitemCommentListResult> GetWorkitemCommentListOutcome;
			typedef std::future<GetWorkitemCommentListOutcome> GetWorkitemCommentListOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkitemCommentListRequest&, const GetWorkitemCommentListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkitemCommentListAsyncHandler;
			typedef Outcome<Error, Model::GetWorkitemFileResult> GetWorkitemFileOutcome;
			typedef std::future<GetWorkitemFileOutcome> GetWorkitemFileOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkitemFileRequest&, const GetWorkitemFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkitemFileAsyncHandler;
			typedef Outcome<Error, Model::GetWorkitemRelationsResult> GetWorkitemRelationsOutcome;
			typedef std::future<GetWorkitemRelationsOutcome> GetWorkitemRelationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkitemRelationsRequest&, const GetWorkitemRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkitemRelationsAsyncHandler;
			typedef Outcome<Error, Model::GetWorkitemTimeTypeListResult> GetWorkitemTimeTypeListOutcome;
			typedef std::future<GetWorkitemTimeTypeListOutcome> GetWorkitemTimeTypeListOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkitemTimeTypeListRequest&, const GetWorkitemTimeTypeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkitemTimeTypeListAsyncHandler;
			typedef Outcome<Error, Model::GetWorkspaceResult> GetWorkspaceOutcome;
			typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::GetWorkspaceRequest&, const GetWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::JoinPipelineGroupResult> JoinPipelineGroupOutcome;
			typedef std::future<JoinPipelineGroupOutcome> JoinPipelineGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::JoinPipelineGroupRequest&, const JoinPipelineGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinPipelineGroupAsyncHandler;
			typedef Outcome<Error, Model::LinkMergeRequestLabelResult> LinkMergeRequestLabelOutcome;
			typedef std::future<LinkMergeRequestLabelOutcome> LinkMergeRequestLabelOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::LinkMergeRequestLabelRequest&, const LinkMergeRequestLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LinkMergeRequestLabelAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationMembersResult> ListApplicationMembersOutcome;
			typedef std::future<ListApplicationMembersOutcome> ListApplicationMembersOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListApplicationMembersRequest&, const ListApplicationMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationMembersAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListCheckRunsResult> ListCheckRunsOutcome;
			typedef std::future<ListCheckRunsOutcome> ListCheckRunsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListCheckRunsRequest&, const ListCheckRunsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckRunsAsyncHandler;
			typedef Outcome<Error, Model::ListCommitStatusesResult> ListCommitStatusesOutcome;
			typedef std::future<ListCommitStatusesOutcome> ListCommitStatusesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListCommitStatusesRequest&, const ListCommitStatusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommitStatusesAsyncHandler;
			typedef Outcome<Error, Model::ListFlowTagGroupsResult> ListFlowTagGroupsOutcome;
			typedef std::future<ListFlowTagGroupsOutcome> ListFlowTagGroupsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListFlowTagGroupsRequest&, const ListFlowTagGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowTagGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupMemberResult> ListGroupMemberOutcome;
			typedef std::future<ListGroupMemberOutcome> ListGroupMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListGroupMemberRequest&, const ListGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::ListGroupRepositoriesResult> ListGroupRepositoriesOutcome;
			typedef std::future<ListGroupRepositoriesOutcome> ListGroupRepositoriesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListGroupRepositoriesRequest&, const ListGroupRepositoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupRepositoriesAsyncHandler;
			typedef Outcome<Error, Model::ListHostGroupsResult> ListHostGroupsOutcome;
			typedef std::future<ListHostGroupsOutcome> ListHostGroupsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListHostGroupsRequest&, const ListHostGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHostGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListJoinedOrganizationsResult> ListJoinedOrganizationsOutcome;
			typedef std::future<ListJoinedOrganizationsOutcome> ListJoinedOrganizationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListJoinedOrganizationsRequest&, const ListJoinedOrganizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJoinedOrganizationsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestCommentsResult> ListMergeRequestCommentsOutcome;
			typedef std::future<ListMergeRequestCommentsOutcome> ListMergeRequestCommentsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListMergeRequestCommentsRequest&, const ListMergeRequestCommentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestCommentsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestFilesReadsResult> ListMergeRequestFilesReadsOutcome;
			typedef std::future<ListMergeRequestFilesReadsOutcome> ListMergeRequestFilesReadsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListMergeRequestFilesReadsRequest&, const ListMergeRequestFilesReadsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestFilesReadsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestLabelsResult> ListMergeRequestLabelsOutcome;
			typedef std::future<ListMergeRequestLabelsOutcome> ListMergeRequestLabelsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListMergeRequestLabelsRequest&, const ListMergeRequestLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestLabelsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestPatchSetsResult> ListMergeRequestPatchSetsOutcome;
			typedef std::future<ListMergeRequestPatchSetsOutcome> ListMergeRequestPatchSetsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListMergeRequestPatchSetsRequest&, const ListMergeRequestPatchSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestPatchSetsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestsResult> ListMergeRequestsOutcome;
			typedef std::future<ListMergeRequestsOutcome> ListMergeRequestsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListMergeRequestsRequest&, const ListMergeRequestsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationMembersResult> ListOrganizationMembersOutcome;
			typedef std::future<ListOrganizationMembersOutcome> ListOrganizationMembersOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListOrganizationMembersRequest&, const ListOrganizationMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationMembersAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationsResult> ListOrganizationsOutcome;
			typedef std::future<ListOrganizationsOutcome> ListOrganizationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListOrganizationsRequest&, const ListOrganizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineGroupPipelinesResult> ListPipelineGroupPipelinesOutcome;
			typedef std::future<ListPipelineGroupPipelinesOutcome> ListPipelineGroupPipelinesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineGroupPipelinesRequest&, const ListPipelineGroupPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineGroupPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineGroupsResult> ListPipelineGroupsOutcome;
			typedef std::future<ListPipelineGroupsOutcome> ListPipelineGroupsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineGroupsRequest&, const ListPipelineGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineJobHistorysResult> ListPipelineJobHistorysOutcome;
			typedef std::future<ListPipelineJobHistorysOutcome> ListPipelineJobHistorysOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineJobHistorysRequest&, const ListPipelineJobHistorysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineJobHistorysAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineJobsResult> ListPipelineJobsOutcome;
			typedef std::future<ListPipelineJobsOutcome> ListPipelineJobsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineJobsRequest&, const ListPipelineJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineJobsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineRelationsResult> ListPipelineRelationsOutcome;
			typedef std::future<ListPipelineRelationsOutcome> ListPipelineRelationsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineRelationsRequest&, const ListPipelineRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineRelationsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineRunsResult> ListPipelineRunsOutcome;
			typedef std::future<ListPipelineRunsOutcome> ListPipelineRunsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelineRunsRequest&, const ListPipelineRunsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineRunsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelinesResult> ListPipelinesOutcome;
			typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPipelinesRequest&, const ListPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectLabelsResult> ListProjectLabelsOutcome;
			typedef std::future<ListProjectLabelsOutcome> ListProjectLabelsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProjectLabelsRequest&, const ListProjectLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectLabelsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectMembersResult> ListProjectMembersOutcome;
			typedef std::future<ListProjectMembersOutcome> ListProjectMembersOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProjectMembersRequest&, const ListProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::ListProjectTemplatesResult> ListProjectTemplatesOutcome;
			typedef std::future<ListProjectTemplatesOutcome> ListProjectTemplatesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProjectTemplatesRequest&, const ListProjectTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectWorkitemTypesResult> ListProjectWorkitemTypesOutcome;
			typedef std::future<ListProjectWorkitemTypesOutcome> ListProjectWorkitemTypesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProjectWorkitemTypesRequest&, const ListProjectWorkitemTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectWorkitemTypesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListProtectedBranchesResult> ListProtectedBranchesOutcome;
			typedef std::future<ListProtectedBranchesOutcome> ListProtectedBranchesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListProtectedBranchesRequest&, const ListProtectedBranchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProtectedBranchesAsyncHandler;
			typedef Outcome<Error, Model::ListPushRulesResult> ListPushRulesOutcome;
			typedef std::future<ListPushRulesOutcome> ListPushRulesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListPushRulesRequest&, const ListPushRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPushRulesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoriesResult> ListRepositoriesOutcome;
			typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoriesRequest&, const ListRepositoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoriesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryBranchesResult> ListRepositoryBranchesOutcome;
			typedef std::future<ListRepositoryBranchesOutcome> ListRepositoryBranchesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryBranchesRequest&, const ListRepositoryBranchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryBranchesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryCommitDiffResult> ListRepositoryCommitDiffOutcome;
			typedef std::future<ListRepositoryCommitDiffOutcome> ListRepositoryCommitDiffOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryCommitDiffRequest&, const ListRepositoryCommitDiffOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryCommitDiffAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryCommitsResult> ListRepositoryCommitsOutcome;
			typedef std::future<ListRepositoryCommitsOutcome> ListRepositoryCommitsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryCommitsRequest&, const ListRepositoryCommitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryCommitsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryGroupsResult> ListRepositoryGroupsOutcome;
			typedef std::future<ListRepositoryGroupsOutcome> ListRepositoryGroupsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryGroupsRequest&, const ListRepositoryGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryMemberWithInheritedResult> ListRepositoryMemberWithInheritedOutcome;
			typedef std::future<ListRepositoryMemberWithInheritedOutcome> ListRepositoryMemberWithInheritedOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryMemberWithInheritedRequest&, const ListRepositoryMemberWithInheritedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryMemberWithInheritedAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTagsResult> ListRepositoryTagsOutcome;
			typedef std::future<ListRepositoryTagsOutcome> ListRepositoryTagsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryTagsRequest&, const ListRepositoryTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTagsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTreeResult> ListRepositoryTreeOutcome;
			typedef std::future<ListRepositoryTreeOutcome> ListRepositoryTreeOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryTreeRequest&, const ListRepositoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTreeAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryWebhookResult> ListRepositoryWebhookOutcome;
			typedef std::future<ListRepositoryWebhookOutcome> ListRepositoryWebhookOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListRepositoryWebhookRequest&, const ListRepositoryWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryWebhookAsyncHandler;
			typedef Outcome<Error, Model::ListResourceMembersResult> ListResourceMembersOutcome;
			typedef std::future<ListResourceMembersOutcome> ListResourceMembersOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListResourceMembersRequest&, const ListResourceMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceMembersAsyncHandler;
			typedef Outcome<Error, Model::ListSearchCommitResult> ListSearchCommitOutcome;
			typedef std::future<ListSearchCommitOutcome> ListSearchCommitOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListSearchCommitRequest&, const ListSearchCommitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSearchCommitAsyncHandler;
			typedef Outcome<Error, Model::ListSearchRepositoryResult> ListSearchRepositoryOutcome;
			typedef std::future<ListSearchRepositoryOutcome> ListSearchRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListSearchRepositoryRequest&, const ListSearchRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSearchRepositoryAsyncHandler;
			typedef Outcome<Error, Model::ListSearchSourceCodeResult> ListSearchSourceCodeOutcome;
			typedef std::future<ListSearchSourceCodeOutcome> ListSearchSourceCodeOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListSearchSourceCodeRequest&, const ListSearchSourceCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSearchSourceCodeAsyncHandler;
			typedef Outcome<Error, Model::ListServiceAuthsResult> ListServiceAuthsOutcome;
			typedef std::future<ListServiceAuthsOutcome> ListServiceAuthsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListServiceAuthsRequest&, const ListServiceAuthsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceAuthsAsyncHandler;
			typedef Outcome<Error, Model::ListServiceConnectionsResult> ListServiceConnectionsOutcome;
			typedef std::future<ListServiceConnectionsOutcome> ListServiceConnectionsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListServiceConnectionsRequest&, const ListServiceConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListServiceCredentialsResult> ListServiceCredentialsOutcome;
			typedef std::future<ListServiceCredentialsOutcome> ListServiceCredentialsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListServiceCredentialsRequest&, const ListServiceCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceCredentialsAsyncHandler;
			typedef Outcome<Error, Model::ListSprintsResult> ListSprintsOutcome;
			typedef std::future<ListSprintsOutcome> ListSprintsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListSprintsRequest&, const ListSprintsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSprintsAsyncHandler;
			typedef Outcome<Error, Model::ListTestCaseFieldsResult> ListTestCaseFieldsOutcome;
			typedef std::future<ListTestCaseFieldsOutcome> ListTestCaseFieldsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListTestCaseFieldsRequest&, const ListTestCaseFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTestCaseFieldsAsyncHandler;
			typedef Outcome<Error, Model::ListUserDrawRecordByPkResult> ListUserDrawRecordByPkOutcome;
			typedef std::future<ListUserDrawRecordByPkOutcome> ListUserDrawRecordByPkOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListUserDrawRecordByPkRequest&, const ListUserDrawRecordByPkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserDrawRecordByPkAsyncHandler;
			typedef Outcome<Error, Model::ListUserKeysResult> ListUserKeysOutcome;
			typedef std::future<ListUserKeysOutcome> ListUserKeysOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListUserKeysRequest&, const ListUserKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserKeysAsyncHandler;
			typedef Outcome<Error, Model::ListUserResourcesResult> ListUserResourcesOutcome;
			typedef std::future<ListUserResourcesOutcome> ListUserResourcesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListUserResourcesRequest&, const ListUserResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListVariableGroupsResult> ListVariableGroupsOutcome;
			typedef std::future<ListVariableGroupsOutcome> ListVariableGroupsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListVariableGroupsRequest&, const ListVariableGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVariableGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListWorkItemAllFieldsResult> ListWorkItemAllFieldsOutcome;
			typedef std::future<ListWorkItemAllFieldsOutcome> ListWorkItemAllFieldsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkItemAllFieldsRequest&, const ListWorkItemAllFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkItemAllFieldsAsyncHandler;
			typedef Outcome<Error, Model::ListWorkItemWorkFlowStatusResult> ListWorkItemWorkFlowStatusOutcome;
			typedef std::future<ListWorkItemWorkFlowStatusOutcome> ListWorkItemWorkFlowStatusOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkItemWorkFlowStatusRequest&, const ListWorkItemWorkFlowStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkItemWorkFlowStatusAsyncHandler;
			typedef Outcome<Error, Model::ListWorkitemAttachmentsResult> ListWorkitemAttachmentsOutcome;
			typedef std::future<ListWorkitemAttachmentsOutcome> ListWorkitemAttachmentsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkitemAttachmentsRequest&, const ListWorkitemAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkitemAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListWorkitemEstimateResult> ListWorkitemEstimateOutcome;
			typedef std::future<ListWorkitemEstimateOutcome> ListWorkitemEstimateOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkitemEstimateRequest&, const ListWorkitemEstimateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkitemEstimateAsyncHandler;
			typedef Outcome<Error, Model::ListWorkitemTimeResult> ListWorkitemTimeOutcome;
			typedef std::future<ListWorkitemTimeOutcome> ListWorkitemTimeOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkitemTimeRequest&, const ListWorkitemTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkitemTimeAsyncHandler;
			typedef Outcome<Error, Model::ListWorkitemsResult> ListWorkitemsOutcome;
			typedef std::future<ListWorkitemsOutcome> ListWorkitemsOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkitemsRequest&, const ListWorkitemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkitemsAsyncHandler;
			typedef Outcome<Error, Model::ListWorkspacesResult> ListWorkspacesOutcome;
			typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ListWorkspacesRequest&, const ListWorkspacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspacesAsyncHandler;
			typedef Outcome<Error, Model::LogPipelineJobRunResult> LogPipelineJobRunOutcome;
			typedef std::future<LogPipelineJobRunOutcome> LogPipelineJobRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::LogPipelineJobRunRequest&, const LogPipelineJobRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LogPipelineJobRunAsyncHandler;
			typedef Outcome<Error, Model::LogVMDeployMachineResult> LogVMDeployMachineOutcome;
			typedef std::future<LogVMDeployMachineOutcome> LogVMDeployMachineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::LogVMDeployMachineRequest&, const LogVMDeployMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LogVMDeployMachineAsyncHandler;
			typedef Outcome<Error, Model::MergeMergeRequestResult> MergeMergeRequestOutcome;
			typedef std::future<MergeMergeRequestOutcome> MergeMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::MergeMergeRequestRequest&, const MergeMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MergeMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::PassPipelineValidateResult> PassPipelineValidateOutcome;
			typedef std::future<PassPipelineValidateOutcome> PassPipelineValidateOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::PassPipelineValidateRequest&, const PassPipelineValidateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PassPipelineValidateAsyncHandler;
			typedef Outcome<Error, Model::RefusePipelineValidateResult> RefusePipelineValidateOutcome;
			typedef std::future<RefusePipelineValidateOutcome> RefusePipelineValidateOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::RefusePipelineValidateRequest&, const RefusePipelineValidateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefusePipelineValidateAsyncHandler;
			typedef Outcome<Error, Model::ReleaseWorkspaceResult> ReleaseWorkspaceOutcome;
			typedef std::future<ReleaseWorkspaceOutcome> ReleaseWorkspaceOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ReleaseWorkspaceRequest&, const ReleaseWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::ReopenMergeRequestResult> ReopenMergeRequestOutcome;
			typedef std::future<ReopenMergeRequestOutcome> ReopenMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ReopenMergeRequestRequest&, const ReopenMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReopenMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::ResetSshKeyResult> ResetSshKeyOutcome;
			typedef std::future<ResetSshKeyOutcome> ResetSshKeyOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ResetSshKeyRequest&, const ResetSshKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSshKeyAsyncHandler;
			typedef Outcome<Error, Model::ResumeVMDeployOrderResult> ResumeVMDeployOrderOutcome;
			typedef std::future<ResumeVMDeployOrderOutcome> ResumeVMDeployOrderOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ResumeVMDeployOrderRequest&, const ResumeVMDeployOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeVMDeployOrderAsyncHandler;
			typedef Outcome<Error, Model::RetryPipelineJobRunResult> RetryPipelineJobRunOutcome;
			typedef std::future<RetryPipelineJobRunOutcome> RetryPipelineJobRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::RetryPipelineJobRunRequest&, const RetryPipelineJobRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryPipelineJobRunAsyncHandler;
			typedef Outcome<Error, Model::RetryVMDeployMachineResult> RetryVMDeployMachineOutcome;
			typedef std::future<RetryVMDeployMachineOutcome> RetryVMDeployMachineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::RetryVMDeployMachineRequest&, const RetryVMDeployMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryVMDeployMachineAsyncHandler;
			typedef Outcome<Error, Model::ReviewMergeRequestResult> ReviewMergeRequestOutcome;
			typedef std::future<ReviewMergeRequestOutcome> ReviewMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::ReviewMergeRequestRequest&, const ReviewMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReviewMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::SkipPipelineJobRunResult> SkipPipelineJobRunOutcome;
			typedef std::future<SkipPipelineJobRunOutcome> SkipPipelineJobRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::SkipPipelineJobRunRequest&, const SkipPipelineJobRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SkipPipelineJobRunAsyncHandler;
			typedef Outcome<Error, Model::SkipVMDeployMachineResult> SkipVMDeployMachineOutcome;
			typedef std::future<SkipVMDeployMachineOutcome> SkipVMDeployMachineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::SkipVMDeployMachineRequest&, const SkipVMDeployMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SkipVMDeployMachineAsyncHandler;
			typedef Outcome<Error, Model::StartPipelineRunResult> StartPipelineRunOutcome;
			typedef std::future<StartPipelineRunOutcome> StartPipelineRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::StartPipelineRunRequest&, const StartPipelineRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPipelineRunAsyncHandler;
			typedef Outcome<Error, Model::StopPipelineJobRunResult> StopPipelineJobRunOutcome;
			typedef std::future<StopPipelineJobRunOutcome> StopPipelineJobRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::StopPipelineJobRunRequest&, const StopPipelineJobRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPipelineJobRunAsyncHandler;
			typedef Outcome<Error, Model::StopPipelineRunResult> StopPipelineRunOutcome;
			typedef std::future<StopPipelineRunOutcome> StopPipelineRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::StopPipelineRunRequest&, const StopPipelineRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPipelineRunAsyncHandler;
			typedef Outcome<Error, Model::StopVMDeployOrderResult> StopVMDeployOrderOutcome;
			typedef std::future<StopVMDeployOrderOutcome> StopVMDeployOrderOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::StopVMDeployOrderRequest&, const StopVMDeployOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopVMDeployOrderAsyncHandler;
			typedef Outcome<Error, Model::TransferRepositoryResult> TransferRepositoryOutcome;
			typedef std::future<TransferRepositoryOutcome> TransferRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::TransferRepositoryRequest&, const TransferRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferRepositoryAsyncHandler;
			typedef Outcome<Error, Model::TriggerRepositoryMirrorSyncResult> TriggerRepositoryMirrorSyncOutcome;
			typedef std::future<TriggerRepositoryMirrorSyncOutcome> TriggerRepositoryMirrorSyncOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::TriggerRepositoryMirrorSyncRequest&, const TriggerRepositoryMirrorSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerRepositoryMirrorSyncAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppMemberResult> UpdateAppMemberOutcome;
			typedef std::future<UpdateAppMemberOutcome> UpdateAppMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateAppMemberRequest&, const UpdateAppMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationResult> UpdateApplicationOutcome;
			typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateApplicationRequest&, const UpdateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationAsyncHandler;
			typedef Outcome<Error, Model::UpdateCheckRunResult> UpdateCheckRunOutcome;
			typedef std::future<UpdateCheckRunOutcome> UpdateCheckRunOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateCheckRunRequest&, const UpdateCheckRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCheckRunAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileResult> UpdateFileOutcome;
			typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateFileRequest&, const UpdateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowTagResult> UpdateFlowTagOutcome;
			typedef std::future<UpdateFlowTagOutcome> UpdateFlowTagOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateFlowTagRequest&, const UpdateFlowTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowTagAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowTagGroupResult> UpdateFlowTagGroupOutcome;
			typedef std::future<UpdateFlowTagGroupOutcome> UpdateFlowTagGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateFlowTagGroupRequest&, const UpdateFlowTagGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowTagGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupResult> UpdateGroupOutcome;
			typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateGroupRequest&, const UpdateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupMemberResult> UpdateGroupMemberOutcome;
			typedef std::future<UpdateGroupMemberOutcome> UpdateGroupMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateGroupMemberRequest&, const UpdateGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateHostGroupResult> UpdateHostGroupOutcome;
			typedef std::future<UpdateHostGroupOutcome> UpdateHostGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateHostGroupRequest&, const UpdateHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHostGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateMergeRequestResult> UpdateMergeRequestOutcome;
			typedef std::future<UpdateMergeRequestOutcome> UpdateMergeRequestOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateMergeRequestRequest&, const UpdateMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::UpdateMergeRequestPersonnelResult> UpdateMergeRequestPersonnelOutcome;
			typedef std::future<UpdateMergeRequestPersonnelOutcome> UpdateMergeRequestPersonnelOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateMergeRequestPersonnelRequest&, const UpdateMergeRequestPersonnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMergeRequestPersonnelAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineResult> UpdatePipelineOutcome;
			typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdatePipelineRequest&, const UpdatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineBaseInfoResult> UpdatePipelineBaseInfoOutcome;
			typedef std::future<UpdatePipelineBaseInfoOutcome> UpdatePipelineBaseInfoOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdatePipelineBaseInfoRequest&, const UpdatePipelineBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineGroupResult> UpdatePipelineGroupOutcome;
			typedef std::future<UpdatePipelineGroupOutcome> UpdatePipelineGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdatePipelineGroupRequest&, const UpdatePipelineGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectFieldResult> UpdateProjectFieldOutcome;
			typedef std::future<UpdateProjectFieldOutcome> UpdateProjectFieldOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateProjectFieldRequest&, const UpdateProjectFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectFieldAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectLabelResult> UpdateProjectLabelOutcome;
			typedef std::future<UpdateProjectLabelOutcome> UpdateProjectLabelOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateProjectLabelRequest&, const UpdateProjectLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectLabelAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectMemberResult> UpdateProjectMemberOutcome;
			typedef std::future<UpdateProjectMemberOutcome> UpdateProjectMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateProjectMemberRequest&, const UpdateProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateProtectedBranchesResult> UpdateProtectedBranchesOutcome;
			typedef std::future<UpdateProtectedBranchesOutcome> UpdateProtectedBranchesOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateProtectedBranchesRequest&, const UpdateProtectedBranchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProtectedBranchesAsyncHandler;
			typedef Outcome<Error, Model::UpdatePushReviewOnOffResult> UpdatePushReviewOnOffOutcome;
			typedef std::future<UpdatePushReviewOnOffOutcome> UpdatePushReviewOnOffOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdatePushReviewOnOffRequest&, const UpdatePushReviewOnOffOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePushReviewOnOffAsyncHandler;
			typedef Outcome<Error, Model::UpdatePushRuleResult> UpdatePushRuleOutcome;
			typedef std::future<UpdatePushRuleOutcome> UpdatePushRuleOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdatePushRuleRequest&, const UpdatePushRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePushRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRepositoryResult> UpdateRepositoryOutcome;
			typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateRepositoryRequest&, const UpdateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateRepositoryMemberResult> UpdateRepositoryMemberOutcome;
			typedef std::future<UpdateRepositoryMemberOutcome> UpdateRepositoryMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateRepositoryMemberRequest&, const UpdateRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceMemberResult> UpdateResourceMemberOutcome;
			typedef std::future<UpdateResourceMemberOutcome> UpdateResourceMemberOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateResourceMemberRequest&, const UpdateResourceMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateTestCaseResult> UpdateTestCaseOutcome;
			typedef std::future<UpdateTestCaseOutcome> UpdateTestCaseOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateTestCaseRequest&, const UpdateTestCaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTestCaseAsyncHandler;
			typedef Outcome<Error, Model::UpdateTestResultResult> UpdateTestResultOutcome;
			typedef std::future<UpdateTestResultOutcome> UpdateTestResultOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateTestResultRequest&, const UpdateTestResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTestResultAsyncHandler;
			typedef Outcome<Error, Model::UpdateVariableGroupResult> UpdateVariableGroupOutcome;
			typedef std::future<UpdateVariableGroupOutcome> UpdateVariableGroupOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateVariableGroupRequest&, const UpdateVariableGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVariableGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkItemResult> UpdateWorkItemOutcome;
			typedef std::future<UpdateWorkItemOutcome> UpdateWorkItemOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateWorkItemRequest&, const UpdateWorkItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkItemAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkitemCommentResult> UpdateWorkitemCommentOutcome;
			typedef std::future<UpdateWorkitemCommentOutcome> UpdateWorkitemCommentOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateWorkitemCommentRequest&, const UpdateWorkitemCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkitemCommentAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkitemFieldResult> UpdateWorkitemFieldOutcome;
			typedef std::future<UpdateWorkitemFieldOutcome> UpdateWorkitemFieldOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::UpdateWorkitemFieldRequest&, const UpdateWorkitemFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkitemFieldAsyncHandler;
			typedef Outcome<Error, Model::WorkitemAttachmentCreateResult> WorkitemAttachmentCreateOutcome;
			typedef std::future<WorkitemAttachmentCreateOutcome> WorkitemAttachmentCreateOutcomeCallable;
			typedef std::function<void(const DevopsClient*, const Model::WorkitemAttachmentCreateRequest&, const WorkitemAttachmentCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WorkitemAttachmentCreateAsyncHandler;

			DevopsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DevopsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DevopsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DevopsClient();
			AddGroupMemberOutcome addGroupMember(const Model::AddGroupMemberRequest &request)const;
			void addGroupMemberAsync(const Model::AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupMemberOutcomeCallable addGroupMemberCallable(const Model::AddGroupMemberRequest& request) const;
			AddPipelineRelationsOutcome addPipelineRelations(const Model::AddPipelineRelationsRequest &request)const;
			void addPipelineRelationsAsync(const Model::AddPipelineRelationsRequest& request, const AddPipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPipelineRelationsOutcomeCallable addPipelineRelationsCallable(const Model::AddPipelineRelationsRequest& request) const;
			AddRepositoryMemberOutcome addRepositoryMember(const Model::AddRepositoryMemberRequest &request)const;
			void addRepositoryMemberAsync(const Model::AddRepositoryMemberRequest& request, const AddRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRepositoryMemberOutcomeCallable addRepositoryMemberCallable(const Model::AddRepositoryMemberRequest& request) const;
			AddWebhookOutcome addWebhook(const Model::AddWebhookRequest &request)const;
			void addWebhookAsync(const Model::AddWebhookRequest& request, const AddWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWebhookOutcomeCallable addWebhookCallable(const Model::AddWebhookRequest& request) const;
			CloseMergeRequestOutcome closeMergeRequest(const Model::CloseMergeRequestRequest &request)const;
			void closeMergeRequestAsync(const Model::CloseMergeRequestRequest& request, const CloseMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseMergeRequestOutcomeCallable closeMergeRequestCallable(const Model::CloseMergeRequestRequest& request) const;
			CreateAppMembersOutcome createAppMembers(const Model::CreateAppMembersRequest &request)const;
			void createAppMembersAsync(const Model::CreateAppMembersRequest& request, const CreateAppMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppMembersOutcomeCallable createAppMembersCallable(const Model::CreateAppMembersRequest& request) const;
			CreateBranchOutcome createBranch(const Model::CreateBranchRequest &request)const;
			void createBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBranchOutcomeCallable createBranchCallable(const Model::CreateBranchRequest& request) const;
			CreateCheckRunOutcome createCheckRun(const Model::CreateCheckRunRequest &request)const;
			void createCheckRunAsync(const Model::CreateCheckRunRequest& request, const CreateCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCheckRunOutcomeCallable createCheckRunCallable(const Model::CreateCheckRunRequest& request) const;
			CreateCommentOutcome createComment(const Model::CreateCommentRequest &request)const;
			void createCommentAsync(const Model::CreateCommentRequest& request, const CreateCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommentOutcomeCallable createCommentCallable(const Model::CreateCommentRequest& request) const;
			CreateCommitStatusOutcome createCommitStatus(const Model::CreateCommitStatusRequest &request)const;
			void createCommitStatusAsync(const Model::CreateCommitStatusRequest& request, const CreateCommitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommitStatusOutcomeCallable createCommitStatusCallable(const Model::CreateCommitStatusRequest& request) const;
			CreateCommitWithMultipleFilesOutcome createCommitWithMultipleFiles(const Model::CreateCommitWithMultipleFilesRequest &request)const;
			void createCommitWithMultipleFilesAsync(const Model::CreateCommitWithMultipleFilesRequest& request, const CreateCommitWithMultipleFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommitWithMultipleFilesOutcomeCallable createCommitWithMultipleFilesCallable(const Model::CreateCommitWithMultipleFilesRequest& request) const;
			CreateDeployKeyOutcome createDeployKey(const Model::CreateDeployKeyRequest &request)const;
			void createDeployKeyAsync(const Model::CreateDeployKeyRequest& request, const CreateDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeployKeyOutcomeCallable createDeployKeyCallable(const Model::CreateDeployKeyRequest& request) const;
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateFlowTagOutcome createFlowTag(const Model::CreateFlowTagRequest &request)const;
			void createFlowTagAsync(const Model::CreateFlowTagRequest& request, const CreateFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowTagOutcomeCallable createFlowTagCallable(const Model::CreateFlowTagRequest& request) const;
			CreateFlowTagGroupOutcome createFlowTagGroup(const Model::CreateFlowTagGroupRequest &request)const;
			void createFlowTagGroupAsync(const Model::CreateFlowTagGroupRequest& request, const CreateFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowTagGroupOutcomeCallable createFlowTagGroupCallable(const Model::CreateFlowTagGroupRequest& request) const;
			CreateHostGroupOutcome createHostGroup(const Model::CreateHostGroupRequest &request)const;
			void createHostGroupAsync(const Model::CreateHostGroupRequest& request, const CreateHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHostGroupOutcomeCallable createHostGroupCallable(const Model::CreateHostGroupRequest& request) const;
			CreateMergeRequestOutcome createMergeRequest(const Model::CreateMergeRequestRequest &request)const;
			void createMergeRequestAsync(const Model::CreateMergeRequestRequest& request, const CreateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeRequestOutcomeCallable createMergeRequestCallable(const Model::CreateMergeRequestRequest& request) const;
			CreateOAuthTokenOutcome createOAuthToken(const Model::CreateOAuthTokenRequest &request)const;
			void createOAuthTokenAsync(const Model::CreateOAuthTokenRequest& request, const CreateOAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOAuthTokenOutcomeCallable createOAuthTokenCallable(const Model::CreateOAuthTokenRequest& request) const;
			CreatePipelineOutcome createPipeline(const Model::CreatePipelineRequest &request)const;
			void createPipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelineOutcomeCallable createPipelineCallable(const Model::CreatePipelineRequest& request) const;
			CreatePipelineGroupOutcome createPipelineGroup(const Model::CreatePipelineGroupRequest &request)const;
			void createPipelineGroupAsync(const Model::CreatePipelineGroupRequest& request, const CreatePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelineGroupOutcomeCallable createPipelineGroupCallable(const Model::CreatePipelineGroupRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateProjectLabelOutcome createProjectLabel(const Model::CreateProjectLabelRequest &request)const;
			void createProjectLabelAsync(const Model::CreateProjectLabelRequest& request, const CreateProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectLabelOutcomeCallable createProjectLabelCallable(const Model::CreateProjectLabelRequest& request) const;
			CreateProtectdBranchOutcome createProtectdBranch(const Model::CreateProtectdBranchRequest &request)const;
			void createProtectdBranchAsync(const Model::CreateProtectdBranchRequest& request, const CreateProtectdBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProtectdBranchOutcomeCallable createProtectdBranchCallable(const Model::CreateProtectdBranchRequest& request) const;
			CreatePushRuleOutcome createPushRule(const Model::CreatePushRuleRequest &request)const;
			void createPushRuleAsync(const Model::CreatePushRuleRequest& request, const CreatePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePushRuleOutcomeCallable createPushRuleCallable(const Model::CreatePushRuleRequest& request) const;
			CreateRepositoryOutcome createRepository(const Model::CreateRepositoryRequest &request)const;
			void createRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryOutcomeCallable createRepositoryCallable(const Model::CreateRepositoryRequest& request) const;
			CreateRepositoryGroupOutcome createRepositoryGroup(const Model::CreateRepositoryGroupRequest &request)const;
			void createRepositoryGroupAsync(const Model::CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryGroupOutcomeCallable createRepositoryGroupCallable(const Model::CreateRepositoryGroupRequest& request) const;
			CreateResourceMemberOutcome createResourceMember(const Model::CreateResourceMemberRequest &request)const;
			void createResourceMemberAsync(const Model::CreateResourceMemberRequest& request, const CreateResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceMemberOutcomeCallable createResourceMemberCallable(const Model::CreateResourceMemberRequest& request) const;
			CreateServiceAuthOutcome createServiceAuth(const Model::CreateServiceAuthRequest &request)const;
			void createServiceAuthAsync(const Model::CreateServiceAuthRequest& request, const CreateServiceAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceAuthOutcomeCallable createServiceAuthCallable(const Model::CreateServiceAuthRequest& request) const;
			CreateServiceConnectionOutcome createServiceConnection(const Model::CreateServiceConnectionRequest &request)const;
			void createServiceConnectionAsync(const Model::CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceConnectionOutcomeCallable createServiceConnectionCallable(const Model::CreateServiceConnectionRequest& request) const;
			CreateServiceCredentialOutcome createServiceCredential(const Model::CreateServiceCredentialRequest &request)const;
			void createServiceCredentialAsync(const Model::CreateServiceCredentialRequest& request, const CreateServiceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceCredentialOutcomeCallable createServiceCredentialCallable(const Model::CreateServiceCredentialRequest& request) const;
			CreateSprintOutcome createSprint(const Model::CreateSprintRequest &request)const;
			void createSprintAsync(const Model::CreateSprintRequest& request, const CreateSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSprintOutcomeCallable createSprintCallable(const Model::CreateSprintRequest& request) const;
			CreateSshKeyOutcome createSshKey(const Model::CreateSshKeyRequest &request)const;
			void createSshKeyAsync(const Model::CreateSshKeyRequest& request, const CreateSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSshKeyOutcomeCallable createSshKeyCallable(const Model::CreateSshKeyRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			CreateTestCaseOutcome createTestCase(const Model::CreateTestCaseRequest &request)const;
			void createTestCaseAsync(const Model::CreateTestCaseRequest& request, const CreateTestCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTestCaseOutcomeCallable createTestCaseCallable(const Model::CreateTestCaseRequest& request) const;
			CreateUserKeyOutcome createUserKey(const Model::CreateUserKeyRequest &request)const;
			void createUserKeyAsync(const Model::CreateUserKeyRequest& request, const CreateUserKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserKeyOutcomeCallable createUserKeyCallable(const Model::CreateUserKeyRequest& request) const;
			CreateVariableGroupOutcome createVariableGroup(const Model::CreateVariableGroupRequest &request)const;
			void createVariableGroupAsync(const Model::CreateVariableGroupRequest& request, const CreateVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVariableGroupOutcomeCallable createVariableGroupCallable(const Model::CreateVariableGroupRequest& request) const;
			CreateWorkitemOutcome createWorkitem(const Model::CreateWorkitemRequest &request)const;
			void createWorkitemAsync(const Model::CreateWorkitemRequest& request, const CreateWorkitemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkitemOutcomeCallable createWorkitemCallable(const Model::CreateWorkitemRequest& request) const;
			CreateWorkitemCommentOutcome createWorkitemComment(const Model::CreateWorkitemCommentRequest &request)const;
			void createWorkitemCommentAsync(const Model::CreateWorkitemCommentRequest& request, const CreateWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkitemCommentOutcomeCallable createWorkitemCommentCallable(const Model::CreateWorkitemCommentRequest& request) const;
			CreateWorkitemEstimateOutcome createWorkitemEstimate(const Model::CreateWorkitemEstimateRequest &request)const;
			void createWorkitemEstimateAsync(const Model::CreateWorkitemEstimateRequest& request, const CreateWorkitemEstimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkitemEstimateOutcomeCallable createWorkitemEstimateCallable(const Model::CreateWorkitemEstimateRequest& request) const;
			CreateWorkitemRecordOutcome createWorkitemRecord(const Model::CreateWorkitemRecordRequest &request)const;
			void createWorkitemRecordAsync(const Model::CreateWorkitemRecordRequest& request, const CreateWorkitemRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkitemRecordOutcomeCallable createWorkitemRecordCallable(const Model::CreateWorkitemRecordRequest& request) const;
			CreateWorkitemV2Outcome createWorkitemV2(const Model::CreateWorkitemV2Request &request)const;
			void createWorkitemV2Async(const Model::CreateWorkitemV2Request& request, const CreateWorkitemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkitemV2OutcomeCallable createWorkitemV2Callable(const Model::CreateWorkitemV2Request& request) const;
			CreateWorkspaceOutcome createWorkspace(const Model::CreateWorkspaceRequest &request)const;
			void createWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkspaceOutcomeCallable createWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;
			DeleteAppMemberOutcome deleteAppMember(const Model::DeleteAppMemberRequest &request)const;
			void deleteAppMemberAsync(const Model::DeleteAppMemberRequest& request, const DeleteAppMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppMemberOutcomeCallable deleteAppMemberCallable(const Model::DeleteAppMemberRequest& request) const;
			DeleteBranchOutcome deleteBranch(const Model::DeleteBranchRequest &request)const;
			void deleteBranchAsync(const Model::DeleteBranchRequest& request, const DeleteBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBranchOutcomeCallable deleteBranchCallable(const Model::DeleteBranchRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DeleteFlowTagOutcome deleteFlowTag(const Model::DeleteFlowTagRequest &request)const;
			void deleteFlowTagAsync(const Model::DeleteFlowTagRequest& request, const DeleteFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowTagOutcomeCallable deleteFlowTagCallable(const Model::DeleteFlowTagRequest& request) const;
			DeleteFlowTagGroupOutcome deleteFlowTagGroup(const Model::DeleteFlowTagGroupRequest &request)const;
			void deleteFlowTagGroupAsync(const Model::DeleteFlowTagGroupRequest& request, const DeleteFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowTagGroupOutcomeCallable deleteFlowTagGroupCallable(const Model::DeleteFlowTagGroupRequest& request) const;
			DeleteGroupMemberOutcome deleteGroupMember(const Model::DeleteGroupMemberRequest &request)const;
			void deleteGroupMemberAsync(const Model::DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupMemberOutcomeCallable deleteGroupMemberCallable(const Model::DeleteGroupMemberRequest& request) const;
			DeleteHostGroupOutcome deleteHostGroup(const Model::DeleteHostGroupRequest &request)const;
			void deleteHostGroupAsync(const Model::DeleteHostGroupRequest& request, const DeleteHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHostGroupOutcomeCallable deleteHostGroupCallable(const Model::DeleteHostGroupRequest& request) const;
			DeletePipelineOutcome deletePipeline(const Model::DeletePipelineRequest &request)const;
			void deletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelineOutcomeCallable deletePipelineCallable(const Model::DeletePipelineRequest& request) const;
			DeletePipelineGroupOutcome deletePipelineGroup(const Model::DeletePipelineGroupRequest &request)const;
			void deletePipelineGroupAsync(const Model::DeletePipelineGroupRequest& request, const DeletePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelineGroupOutcomeCallable deletePipelineGroupCallable(const Model::DeletePipelineGroupRequest& request) const;
			DeletePipelineRelationsOutcome deletePipelineRelations(const Model::DeletePipelineRelationsRequest &request)const;
			void deletePipelineRelationsAsync(const Model::DeletePipelineRelationsRequest& request, const DeletePipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelineRelationsOutcomeCallable deletePipelineRelationsCallable(const Model::DeletePipelineRelationsRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteProjectLabelOutcome deleteProjectLabel(const Model::DeleteProjectLabelRequest &request)const;
			void deleteProjectLabelAsync(const Model::DeleteProjectLabelRequest& request, const DeleteProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectLabelOutcomeCallable deleteProjectLabelCallable(const Model::DeleteProjectLabelRequest& request) const;
			DeleteProtectedBranchOutcome deleteProtectedBranch(const Model::DeleteProtectedBranchRequest &request)const;
			void deleteProtectedBranchAsync(const Model::DeleteProtectedBranchRequest& request, const DeleteProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProtectedBranchOutcomeCallable deleteProtectedBranchCallable(const Model::DeleteProtectedBranchRequest& request) const;
			DeletePushRuleOutcome deletePushRule(const Model::DeletePushRuleRequest &request)const;
			void deletePushRuleAsync(const Model::DeletePushRuleRequest& request, const DeletePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePushRuleOutcomeCallable deletePushRuleCallable(const Model::DeletePushRuleRequest& request) const;
			DeleteRepositoryOutcome deleteRepository(const Model::DeleteRepositoryRequest &request)const;
			void deleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryOutcomeCallable deleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;
			DeleteRepositoryGroupOutcome deleteRepositoryGroup(const Model::DeleteRepositoryGroupRequest &request)const;
			void deleteRepositoryGroupAsync(const Model::DeleteRepositoryGroupRequest& request, const DeleteRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryGroupOutcomeCallable deleteRepositoryGroupCallable(const Model::DeleteRepositoryGroupRequest& request) const;
			DeleteRepositoryMemberOutcome deleteRepositoryMember(const Model::DeleteRepositoryMemberRequest &request)const;
			void deleteRepositoryMemberAsync(const Model::DeleteRepositoryMemberRequest& request, const DeleteRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryMemberOutcomeCallable deleteRepositoryMemberCallable(const Model::DeleteRepositoryMemberRequest& request) const;
			DeleteRepositoryWebhookOutcome deleteRepositoryWebhook(const Model::DeleteRepositoryWebhookRequest &request)const;
			void deleteRepositoryWebhookAsync(const Model::DeleteRepositoryWebhookRequest& request, const DeleteRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryWebhookOutcomeCallable deleteRepositoryWebhookCallable(const Model::DeleteRepositoryWebhookRequest& request) const;
			DeleteResourceMemberOutcome deleteResourceMember(const Model::DeleteResourceMemberRequest &request)const;
			void deleteResourceMemberAsync(const Model::DeleteResourceMemberRequest& request, const DeleteResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceMemberOutcomeCallable deleteResourceMemberCallable(const Model::DeleteResourceMemberRequest& request) const;
			DeleteTagOutcome deleteTag(const Model::DeleteTagRequest &request)const;
			void deleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagOutcomeCallable deleteTagCallable(const Model::DeleteTagRequest& request) const;
			DeleteUserKeyOutcome deleteUserKey(const Model::DeleteUserKeyRequest &request)const;
			void deleteUserKeyAsync(const Model::DeleteUserKeyRequest& request, const DeleteUserKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserKeyOutcomeCallable deleteUserKeyCallable(const Model::DeleteUserKeyRequest& request) const;
			DeleteVariableGroupOutcome deleteVariableGroup(const Model::DeleteVariableGroupRequest &request)const;
			void deleteVariableGroupAsync(const Model::DeleteVariableGroupRequest& request, const DeleteVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVariableGroupOutcomeCallable deleteVariableGroupCallable(const Model::DeleteVariableGroupRequest& request) const;
			DeleteWorkitemOutcome deleteWorkitem(const Model::DeleteWorkitemRequest &request)const;
			void deleteWorkitemAsync(const Model::DeleteWorkitemRequest& request, const DeleteWorkitemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkitemOutcomeCallable deleteWorkitemCallable(const Model::DeleteWorkitemRequest& request) const;
			DeleteWorkitemAllCommentOutcome deleteWorkitemAllComment(const Model::DeleteWorkitemAllCommentRequest &request)const;
			void deleteWorkitemAllCommentAsync(const Model::DeleteWorkitemAllCommentRequest& request, const DeleteWorkitemAllCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkitemAllCommentOutcomeCallable deleteWorkitemAllCommentCallable(const Model::DeleteWorkitemAllCommentRequest& request) const;
			DeleteWorkitemCommentOutcome deleteWorkitemComment(const Model::DeleteWorkitemCommentRequest &request)const;
			void deleteWorkitemCommentAsync(const Model::DeleteWorkitemCommentRequest& request, const DeleteWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkitemCommentOutcomeCallable deleteWorkitemCommentCallable(const Model::DeleteWorkitemCommentRequest& request) const;
			EnableDeployKeyOutcome enableDeployKey(const Model::EnableDeployKeyRequest &request)const;
			void enableDeployKeyAsync(const Model::EnableDeployKeyRequest& request, const EnableDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeployKeyOutcomeCallable enableDeployKeyCallable(const Model::EnableDeployKeyRequest& request) const;
			FrozenWorkspaceOutcome frozenWorkspace(const Model::FrozenWorkspaceRequest &request)const;
			void frozenWorkspaceAsync(const Model::FrozenWorkspaceRequest& request, const FrozenWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FrozenWorkspaceOutcomeCallable frozenWorkspaceCallable(const Model::FrozenWorkspaceRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetBranchInfoOutcome getBranchInfo(const Model::GetBranchInfoRequest &request)const;
			void getBranchInfoAsync(const Model::GetBranchInfoRequest& request, const GetBranchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBranchInfoOutcomeCallable getBranchInfoCallable(const Model::GetBranchInfoRequest& request) const;
			GetCheckRunOutcome getCheckRun(const Model::GetCheckRunRequest &request)const;
			void getCheckRunAsync(const Model::GetCheckRunRequest& request, const GetCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckRunOutcomeCallable getCheckRunCallable(const Model::GetCheckRunRequest& request) const;
			GetCodeupOrganizationOutcome getCodeupOrganization(const Model::GetCodeupOrganizationRequest &request)const;
			void getCodeupOrganizationAsync(const Model::GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCodeupOrganizationOutcomeCallable getCodeupOrganizationCallable(const Model::GetCodeupOrganizationRequest& request) const;
			GetCompareDetailOutcome getCompareDetail(const Model::GetCompareDetailRequest &request)const;
			void getCompareDetailAsync(const Model::GetCompareDetailRequest& request, const GetCompareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompareDetailOutcomeCallable getCompareDetailCallable(const Model::GetCompareDetailRequest& request) const;
			GetCustomFieldOptionOutcome getCustomFieldOption(const Model::GetCustomFieldOptionRequest &request)const;
			void getCustomFieldOptionAsync(const Model::GetCustomFieldOptionRequest& request, const GetCustomFieldOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomFieldOptionOutcomeCallable getCustomFieldOptionCallable(const Model::GetCustomFieldOptionRequest& request) const;
			GetFileBlobsOutcome getFileBlobs(const Model::GetFileBlobsRequest &request)const;
			void getFileBlobsAsync(const Model::GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileBlobsOutcomeCallable getFileBlobsCallable(const Model::GetFileBlobsRequest& request) const;
			GetFileLastCommitOutcome getFileLastCommit(const Model::GetFileLastCommitRequest &request)const;
			void getFileLastCommitAsync(const Model::GetFileLastCommitRequest& request, const GetFileLastCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileLastCommitOutcomeCallable getFileLastCommitCallable(const Model::GetFileLastCommitRequest& request) const;
			GetFlowTagGroupOutcome getFlowTagGroup(const Model::GetFlowTagGroupRequest &request)const;
			void getFlowTagGroupAsync(const Model::GetFlowTagGroupRequest& request, const GetFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowTagGroupOutcomeCallable getFlowTagGroupCallable(const Model::GetFlowTagGroupRequest& request) const;
			GetGroupByPathOutcome getGroupByPath(const Model::GetGroupByPathRequest &request)const;
			void getGroupByPathAsync(const Model::GetGroupByPathRequest& request, const GetGroupByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupByPathOutcomeCallable getGroupByPathCallable(const Model::GetGroupByPathRequest& request) const;
			GetGroupDetailOutcome getGroupDetail(const Model::GetGroupDetailRequest &request)const;
			void getGroupDetailAsync(const Model::GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupDetailOutcomeCallable getGroupDetailCallable(const Model::GetGroupDetailRequest& request) const;
			GetHostGroupOutcome getHostGroup(const Model::GetHostGroupRequest &request)const;
			void getHostGroupAsync(const Model::GetHostGroupRequest& request, const GetHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHostGroupOutcomeCallable getHostGroupCallable(const Model::GetHostGroupRequest& request) const;
			GetMergeRequestOutcome getMergeRequest(const Model::GetMergeRequestRequest &request)const;
			void getMergeRequestAsync(const Model::GetMergeRequestRequest& request, const GetMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMergeRequestOutcomeCallable getMergeRequestCallable(const Model::GetMergeRequestRequest& request) const;
			GetMergeRequestChangeTreeOutcome getMergeRequestChangeTree(const Model::GetMergeRequestChangeTreeRequest &request)const;
			void getMergeRequestChangeTreeAsync(const Model::GetMergeRequestChangeTreeRequest& request, const GetMergeRequestChangeTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMergeRequestChangeTreeOutcomeCallable getMergeRequestChangeTreeCallable(const Model::GetMergeRequestChangeTreeRequest& request) const;
			GetOrganizationMemberOutcome getOrganizationMember(const Model::GetOrganizationMemberRequest &request)const;
			void getOrganizationMemberAsync(const Model::GetOrganizationMemberRequest& request, const GetOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrganizationMemberOutcomeCallable getOrganizationMemberCallable(const Model::GetOrganizationMemberRequest& request) const;
			GetPipelineOutcome getPipeline(const Model::GetPipelineRequest &request)const;
			void getPipelineAsync(const Model::GetPipelineRequest& request, const GetPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineOutcomeCallable getPipelineCallable(const Model::GetPipelineRequest& request) const;
			GetPipelineArtifactUrlOutcome getPipelineArtifactUrl(const Model::GetPipelineArtifactUrlRequest &request)const;
			void getPipelineArtifactUrlAsync(const Model::GetPipelineArtifactUrlRequest& request, const GetPipelineArtifactUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineArtifactUrlOutcomeCallable getPipelineArtifactUrlCallable(const Model::GetPipelineArtifactUrlRequest& request) const;
			GetPipelineEmasArtifactUrlOutcome getPipelineEmasArtifactUrl(const Model::GetPipelineEmasArtifactUrlRequest &request)const;
			void getPipelineEmasArtifactUrlAsync(const Model::GetPipelineEmasArtifactUrlRequest& request, const GetPipelineEmasArtifactUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineEmasArtifactUrlOutcomeCallable getPipelineEmasArtifactUrlCallable(const Model::GetPipelineEmasArtifactUrlRequest& request) const;
			GetPipelineGroupOutcome getPipelineGroup(const Model::GetPipelineGroupRequest &request)const;
			void getPipelineGroupAsync(const Model::GetPipelineGroupRequest& request, const GetPipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineGroupOutcomeCallable getPipelineGroupCallable(const Model::GetPipelineGroupRequest& request) const;
			GetPipelineRunOutcome getPipelineRun(const Model::GetPipelineRunRequest &request)const;
			void getPipelineRunAsync(const Model::GetPipelineRunRequest& request, const GetPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineRunOutcomeCallable getPipelineRunCallable(const Model::GetPipelineRunRequest& request) const;
			GetPipelineScanReportUrlOutcome getPipelineScanReportUrl(const Model::GetPipelineScanReportUrlRequest &request)const;
			void getPipelineScanReportUrlAsync(const Model::GetPipelineScanReportUrlRequest& request, const GetPipelineScanReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineScanReportUrlOutcomeCallable getPipelineScanReportUrlCallable(const Model::GetPipelineScanReportUrlRequest& request) const;
			GetProjectInfoOutcome getProjectInfo(const Model::GetProjectInfoRequest &request)const;
			void getProjectInfoAsync(const Model::GetProjectInfoRequest& request, const GetProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectInfoOutcomeCallable getProjectInfoCallable(const Model::GetProjectInfoRequest& request) const;
			GetProjectMemberOutcome getProjectMember(const Model::GetProjectMemberRequest &request)const;
			void getProjectMemberAsync(const Model::GetProjectMemberRequest& request, const GetProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectMemberOutcomeCallable getProjectMemberCallable(const Model::GetProjectMemberRequest& request) const;
			GetPushRuleOutcome getPushRule(const Model::GetPushRuleRequest &request)const;
			void getPushRuleAsync(const Model::GetPushRuleRequest& request, const GetPushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPushRuleOutcomeCallable getPushRuleCallable(const Model::GetPushRuleRequest& request) const;
			GetRepositoryOutcome getRepository(const Model::GetRepositoryRequest &request)const;
			void getRepositoryAsync(const Model::GetRepositoryRequest& request, const GetRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryOutcomeCallable getRepositoryCallable(const Model::GetRepositoryRequest& request) const;
			GetRepositoryCommitOutcome getRepositoryCommit(const Model::GetRepositoryCommitRequest &request)const;
			void getRepositoryCommitAsync(const Model::GetRepositoryCommitRequest& request, const GetRepositoryCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryCommitOutcomeCallable getRepositoryCommitCallable(const Model::GetRepositoryCommitRequest& request) const;
			GetRepositoryTagOutcome getRepositoryTag(const Model::GetRepositoryTagRequest &request)const;
			void getRepositoryTagAsync(const Model::GetRepositoryTagRequest& request, const GetRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryTagOutcomeCallable getRepositoryTagCallable(const Model::GetRepositoryTagRequest& request) const;
			GetSearchCodePreviewOutcome getSearchCodePreview(const Model::GetSearchCodePreviewRequest &request)const;
			void getSearchCodePreviewAsync(const Model::GetSearchCodePreviewRequest& request, const GetSearchCodePreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSearchCodePreviewOutcomeCallable getSearchCodePreviewCallable(const Model::GetSearchCodePreviewRequest& request) const;
			GetSprintInfoOutcome getSprintInfo(const Model::GetSprintInfoRequest &request)const;
			void getSprintInfoAsync(const Model::GetSprintInfoRequest& request, const GetSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSprintInfoOutcomeCallable getSprintInfoCallable(const Model::GetSprintInfoRequest& request) const;
			GetTestResultListOutcome getTestResultList(const Model::GetTestResultListRequest &request)const;
			void getTestResultListAsync(const Model::GetTestResultListRequest& request, const GetTestResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTestResultListOutcomeCallable getTestResultListCallable(const Model::GetTestResultListRequest& request) const;
			GetTestcaseListOutcome getTestcaseList(const Model::GetTestcaseListRequest &request)const;
			void getTestcaseListAsync(const Model::GetTestcaseListRequest& request, const GetTestcaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTestcaseListOutcomeCallable getTestcaseListCallable(const Model::GetTestcaseListRequest& request) const;
			GetUserInfoOutcome getUserInfo(const Model::GetUserInfoRequest &request)const;
			void getUserInfoAsync(const Model::GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInfoOutcomeCallable getUserInfoCallable(const Model::GetUserInfoRequest& request) const;
			GetVMDeployOrderOutcome getVMDeployOrder(const Model::GetVMDeployOrderRequest &request)const;
			void getVMDeployOrderAsync(const Model::GetVMDeployOrderRequest& request, const GetVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVMDeployOrderOutcomeCallable getVMDeployOrderCallable(const Model::GetVMDeployOrderRequest& request) const;
			GetVariableGroupOutcome getVariableGroup(const Model::GetVariableGroupRequest &request)const;
			void getVariableGroupAsync(const Model::GetVariableGroupRequest& request, const GetVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVariableGroupOutcomeCallable getVariableGroupCallable(const Model::GetVariableGroupRequest& request) const;
			GetWorkItemActivityOutcome getWorkItemActivity(const Model::GetWorkItemActivityRequest &request)const;
			void getWorkItemActivityAsync(const Model::GetWorkItemActivityRequest& request, const GetWorkItemActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkItemActivityOutcomeCallable getWorkItemActivityCallable(const Model::GetWorkItemActivityRequest& request) const;
			GetWorkItemInfoOutcome getWorkItemInfo(const Model::GetWorkItemInfoRequest &request)const;
			void getWorkItemInfoAsync(const Model::GetWorkItemInfoRequest& request, const GetWorkItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkItemInfoOutcomeCallable getWorkItemInfoCallable(const Model::GetWorkItemInfoRequest& request) const;
			GetWorkItemWorkFlowInfoOutcome getWorkItemWorkFlowInfo(const Model::GetWorkItemWorkFlowInfoRequest &request)const;
			void getWorkItemWorkFlowInfoAsync(const Model::GetWorkItemWorkFlowInfoRequest& request, const GetWorkItemWorkFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkItemWorkFlowInfoOutcomeCallable getWorkItemWorkFlowInfoCallable(const Model::GetWorkItemWorkFlowInfoRequest& request) const;
			GetWorkitemAttachmentCreatemetaOutcome getWorkitemAttachmentCreatemeta(const Model::GetWorkitemAttachmentCreatemetaRequest &request)const;
			void getWorkitemAttachmentCreatemetaAsync(const Model::GetWorkitemAttachmentCreatemetaRequest& request, const GetWorkitemAttachmentCreatemetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkitemAttachmentCreatemetaOutcomeCallable getWorkitemAttachmentCreatemetaCallable(const Model::GetWorkitemAttachmentCreatemetaRequest& request) const;
			GetWorkitemCommentListOutcome getWorkitemCommentList(const Model::GetWorkitemCommentListRequest &request)const;
			void getWorkitemCommentListAsync(const Model::GetWorkitemCommentListRequest& request, const GetWorkitemCommentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkitemCommentListOutcomeCallable getWorkitemCommentListCallable(const Model::GetWorkitemCommentListRequest& request) const;
			GetWorkitemFileOutcome getWorkitemFile(const Model::GetWorkitemFileRequest &request)const;
			void getWorkitemFileAsync(const Model::GetWorkitemFileRequest& request, const GetWorkitemFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkitemFileOutcomeCallable getWorkitemFileCallable(const Model::GetWorkitemFileRequest& request) const;
			GetWorkitemRelationsOutcome getWorkitemRelations(const Model::GetWorkitemRelationsRequest &request)const;
			void getWorkitemRelationsAsync(const Model::GetWorkitemRelationsRequest& request, const GetWorkitemRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkitemRelationsOutcomeCallable getWorkitemRelationsCallable(const Model::GetWorkitemRelationsRequest& request) const;
			GetWorkitemTimeTypeListOutcome getWorkitemTimeTypeList(const Model::GetWorkitemTimeTypeListRequest &request)const;
			void getWorkitemTimeTypeListAsync(const Model::GetWorkitemTimeTypeListRequest& request, const GetWorkitemTimeTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkitemTimeTypeListOutcomeCallable getWorkitemTimeTypeListCallable(const Model::GetWorkitemTimeTypeListRequest& request) const;
			GetWorkspaceOutcome getWorkspace(const Model::GetWorkspaceRequest &request)const;
			void getWorkspaceAsync(const Model::GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkspaceOutcomeCallable getWorkspaceCallable(const Model::GetWorkspaceRequest& request) const;
			JoinPipelineGroupOutcome joinPipelineGroup(const Model::JoinPipelineGroupRequest &request)const;
			void joinPipelineGroupAsync(const Model::JoinPipelineGroupRequest& request, const JoinPipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinPipelineGroupOutcomeCallable joinPipelineGroupCallable(const Model::JoinPipelineGroupRequest& request) const;
			LinkMergeRequestLabelOutcome linkMergeRequestLabel(const Model::LinkMergeRequestLabelRequest &request)const;
			void linkMergeRequestLabelAsync(const Model::LinkMergeRequestLabelRequest& request, const LinkMergeRequestLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LinkMergeRequestLabelOutcomeCallable linkMergeRequestLabelCallable(const Model::LinkMergeRequestLabelRequest& request) const;
			ListApplicationMembersOutcome listApplicationMembers(const Model::ListApplicationMembersRequest &request)const;
			void listApplicationMembersAsync(const Model::ListApplicationMembersRequest& request, const ListApplicationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationMembersOutcomeCallable listApplicationMembersCallable(const Model::ListApplicationMembersRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListCheckRunsOutcome listCheckRuns(const Model::ListCheckRunsRequest &request)const;
			void listCheckRunsAsync(const Model::ListCheckRunsRequest& request, const ListCheckRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckRunsOutcomeCallable listCheckRunsCallable(const Model::ListCheckRunsRequest& request) const;
			ListCommitStatusesOutcome listCommitStatuses(const Model::ListCommitStatusesRequest &request)const;
			void listCommitStatusesAsync(const Model::ListCommitStatusesRequest& request, const ListCommitStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommitStatusesOutcomeCallable listCommitStatusesCallable(const Model::ListCommitStatusesRequest& request) const;
			ListFlowTagGroupsOutcome listFlowTagGroups(const Model::ListFlowTagGroupsRequest &request)const;
			void listFlowTagGroupsAsync(const Model::ListFlowTagGroupsRequest& request, const ListFlowTagGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowTagGroupsOutcomeCallable listFlowTagGroupsCallable(const Model::ListFlowTagGroupsRequest& request) const;
			ListGroupMemberOutcome listGroupMember(const Model::ListGroupMemberRequest &request)const;
			void listGroupMemberAsync(const Model::ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupMemberOutcomeCallable listGroupMemberCallable(const Model::ListGroupMemberRequest& request) const;
			ListGroupRepositoriesOutcome listGroupRepositories(const Model::ListGroupRepositoriesRequest &request)const;
			void listGroupRepositoriesAsync(const Model::ListGroupRepositoriesRequest& request, const ListGroupRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupRepositoriesOutcomeCallable listGroupRepositoriesCallable(const Model::ListGroupRepositoriesRequest& request) const;
			ListHostGroupsOutcome listHostGroups(const Model::ListHostGroupsRequest &request)const;
			void listHostGroupsAsync(const Model::ListHostGroupsRequest& request, const ListHostGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHostGroupsOutcomeCallable listHostGroupsCallable(const Model::ListHostGroupsRequest& request) const;
			ListJoinedOrganizationsOutcome listJoinedOrganizations(const Model::ListJoinedOrganizationsRequest &request)const;
			void listJoinedOrganizationsAsync(const Model::ListJoinedOrganizationsRequest& request, const ListJoinedOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJoinedOrganizationsOutcomeCallable listJoinedOrganizationsCallable(const Model::ListJoinedOrganizationsRequest& request) const;
			ListMergeRequestCommentsOutcome listMergeRequestComments(const Model::ListMergeRequestCommentsRequest &request)const;
			void listMergeRequestCommentsAsync(const Model::ListMergeRequestCommentsRequest& request, const ListMergeRequestCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestCommentsOutcomeCallable listMergeRequestCommentsCallable(const Model::ListMergeRequestCommentsRequest& request) const;
			ListMergeRequestFilesReadsOutcome listMergeRequestFilesReads(const Model::ListMergeRequestFilesReadsRequest &request)const;
			void listMergeRequestFilesReadsAsync(const Model::ListMergeRequestFilesReadsRequest& request, const ListMergeRequestFilesReadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestFilesReadsOutcomeCallable listMergeRequestFilesReadsCallable(const Model::ListMergeRequestFilesReadsRequest& request) const;
			ListMergeRequestLabelsOutcome listMergeRequestLabels(const Model::ListMergeRequestLabelsRequest &request)const;
			void listMergeRequestLabelsAsync(const Model::ListMergeRequestLabelsRequest& request, const ListMergeRequestLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestLabelsOutcomeCallable listMergeRequestLabelsCallable(const Model::ListMergeRequestLabelsRequest& request) const;
			ListMergeRequestPatchSetsOutcome listMergeRequestPatchSets(const Model::ListMergeRequestPatchSetsRequest &request)const;
			void listMergeRequestPatchSetsAsync(const Model::ListMergeRequestPatchSetsRequest& request, const ListMergeRequestPatchSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestPatchSetsOutcomeCallable listMergeRequestPatchSetsCallable(const Model::ListMergeRequestPatchSetsRequest& request) const;
			ListMergeRequestsOutcome listMergeRequests(const Model::ListMergeRequestsRequest &request)const;
			void listMergeRequestsAsync(const Model::ListMergeRequestsRequest& request, const ListMergeRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestsOutcomeCallable listMergeRequestsCallable(const Model::ListMergeRequestsRequest& request) const;
			ListOrganizationMembersOutcome listOrganizationMembers(const Model::ListOrganizationMembersRequest &request)const;
			void listOrganizationMembersAsync(const Model::ListOrganizationMembersRequest& request, const ListOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationMembersOutcomeCallable listOrganizationMembersCallable(const Model::ListOrganizationMembersRequest& request) const;
			ListOrganizationsOutcome listOrganizations(const Model::ListOrganizationsRequest &request)const;
			void listOrganizationsAsync(const Model::ListOrganizationsRequest& request, const ListOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationsOutcomeCallable listOrganizationsCallable(const Model::ListOrganizationsRequest& request) const;
			ListPipelineGroupPipelinesOutcome listPipelineGroupPipelines(const Model::ListPipelineGroupPipelinesRequest &request)const;
			void listPipelineGroupPipelinesAsync(const Model::ListPipelineGroupPipelinesRequest& request, const ListPipelineGroupPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineGroupPipelinesOutcomeCallable listPipelineGroupPipelinesCallable(const Model::ListPipelineGroupPipelinesRequest& request) const;
			ListPipelineGroupsOutcome listPipelineGroups(const Model::ListPipelineGroupsRequest &request)const;
			void listPipelineGroupsAsync(const Model::ListPipelineGroupsRequest& request, const ListPipelineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineGroupsOutcomeCallable listPipelineGroupsCallable(const Model::ListPipelineGroupsRequest& request) const;
			ListPipelineJobHistorysOutcome listPipelineJobHistorys(const Model::ListPipelineJobHistorysRequest &request)const;
			void listPipelineJobHistorysAsync(const Model::ListPipelineJobHistorysRequest& request, const ListPipelineJobHistorysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineJobHistorysOutcomeCallable listPipelineJobHistorysCallable(const Model::ListPipelineJobHistorysRequest& request) const;
			ListPipelineJobsOutcome listPipelineJobs(const Model::ListPipelineJobsRequest &request)const;
			void listPipelineJobsAsync(const Model::ListPipelineJobsRequest& request, const ListPipelineJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineJobsOutcomeCallable listPipelineJobsCallable(const Model::ListPipelineJobsRequest& request) const;
			ListPipelineRelationsOutcome listPipelineRelations(const Model::ListPipelineRelationsRequest &request)const;
			void listPipelineRelationsAsync(const Model::ListPipelineRelationsRequest& request, const ListPipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineRelationsOutcomeCallable listPipelineRelationsCallable(const Model::ListPipelineRelationsRequest& request) const;
			ListPipelineRunsOutcome listPipelineRuns(const Model::ListPipelineRunsRequest &request)const;
			void listPipelineRunsAsync(const Model::ListPipelineRunsRequest& request, const ListPipelineRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineRunsOutcomeCallable listPipelineRunsCallable(const Model::ListPipelineRunsRequest& request) const;
			ListPipelinesOutcome listPipelines(const Model::ListPipelinesRequest &request)const;
			void listPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelinesOutcomeCallable listPipelinesCallable(const Model::ListPipelinesRequest& request) const;
			ListProjectLabelsOutcome listProjectLabels(const Model::ListProjectLabelsRequest &request)const;
			void listProjectLabelsAsync(const Model::ListProjectLabelsRequest& request, const ListProjectLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectLabelsOutcomeCallable listProjectLabelsCallable(const Model::ListProjectLabelsRequest& request) const;
			ListProjectMembersOutcome listProjectMembers(const Model::ListProjectMembersRequest &request)const;
			void listProjectMembersAsync(const Model::ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectMembersOutcomeCallable listProjectMembersCallable(const Model::ListProjectMembersRequest& request) const;
			ListProjectTemplatesOutcome listProjectTemplates(const Model::ListProjectTemplatesRequest &request)const;
			void listProjectTemplatesAsync(const Model::ListProjectTemplatesRequest& request, const ListProjectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectTemplatesOutcomeCallable listProjectTemplatesCallable(const Model::ListProjectTemplatesRequest& request) const;
			ListProjectWorkitemTypesOutcome listProjectWorkitemTypes(const Model::ListProjectWorkitemTypesRequest &request)const;
			void listProjectWorkitemTypesAsync(const Model::ListProjectWorkitemTypesRequest& request, const ListProjectWorkitemTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectWorkitemTypesOutcomeCallable listProjectWorkitemTypesCallable(const Model::ListProjectWorkitemTypesRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListProtectedBranchesOutcome listProtectedBranches(const Model::ListProtectedBranchesRequest &request)const;
			void listProtectedBranchesAsync(const Model::ListProtectedBranchesRequest& request, const ListProtectedBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProtectedBranchesOutcomeCallable listProtectedBranchesCallable(const Model::ListProtectedBranchesRequest& request) const;
			ListPushRulesOutcome listPushRules(const Model::ListPushRulesRequest &request)const;
			void listPushRulesAsync(const Model::ListPushRulesRequest& request, const ListPushRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPushRulesOutcomeCallable listPushRulesCallable(const Model::ListPushRulesRequest& request) const;
			ListRepositoriesOutcome listRepositories(const Model::ListRepositoriesRequest &request)const;
			void listRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoriesOutcomeCallable listRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;
			ListRepositoryBranchesOutcome listRepositoryBranches(const Model::ListRepositoryBranchesRequest &request)const;
			void listRepositoryBranchesAsync(const Model::ListRepositoryBranchesRequest& request, const ListRepositoryBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryBranchesOutcomeCallable listRepositoryBranchesCallable(const Model::ListRepositoryBranchesRequest& request) const;
			ListRepositoryCommitDiffOutcome listRepositoryCommitDiff(const Model::ListRepositoryCommitDiffRequest &request)const;
			void listRepositoryCommitDiffAsync(const Model::ListRepositoryCommitDiffRequest& request, const ListRepositoryCommitDiffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryCommitDiffOutcomeCallable listRepositoryCommitDiffCallable(const Model::ListRepositoryCommitDiffRequest& request) const;
			ListRepositoryCommitsOutcome listRepositoryCommits(const Model::ListRepositoryCommitsRequest &request)const;
			void listRepositoryCommitsAsync(const Model::ListRepositoryCommitsRequest& request, const ListRepositoryCommitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryCommitsOutcomeCallable listRepositoryCommitsCallable(const Model::ListRepositoryCommitsRequest& request) const;
			ListRepositoryGroupsOutcome listRepositoryGroups(const Model::ListRepositoryGroupsRequest &request)const;
			void listRepositoryGroupsAsync(const Model::ListRepositoryGroupsRequest& request, const ListRepositoryGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryGroupsOutcomeCallable listRepositoryGroupsCallable(const Model::ListRepositoryGroupsRequest& request) const;
			ListRepositoryMemberWithInheritedOutcome listRepositoryMemberWithInherited(const Model::ListRepositoryMemberWithInheritedRequest &request)const;
			void listRepositoryMemberWithInheritedAsync(const Model::ListRepositoryMemberWithInheritedRequest& request, const ListRepositoryMemberWithInheritedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryMemberWithInheritedOutcomeCallable listRepositoryMemberWithInheritedCallable(const Model::ListRepositoryMemberWithInheritedRequest& request) const;
			ListRepositoryTagsOutcome listRepositoryTags(const Model::ListRepositoryTagsRequest &request)const;
			void listRepositoryTagsAsync(const Model::ListRepositoryTagsRequest& request, const ListRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryTagsOutcomeCallable listRepositoryTagsCallable(const Model::ListRepositoryTagsRequest& request) const;
			ListRepositoryTreeOutcome listRepositoryTree(const Model::ListRepositoryTreeRequest &request)const;
			void listRepositoryTreeAsync(const Model::ListRepositoryTreeRequest& request, const ListRepositoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryTreeOutcomeCallable listRepositoryTreeCallable(const Model::ListRepositoryTreeRequest& request) const;
			ListRepositoryWebhookOutcome listRepositoryWebhook(const Model::ListRepositoryWebhookRequest &request)const;
			void listRepositoryWebhookAsync(const Model::ListRepositoryWebhookRequest& request, const ListRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryWebhookOutcomeCallable listRepositoryWebhookCallable(const Model::ListRepositoryWebhookRequest& request) const;
			ListResourceMembersOutcome listResourceMembers(const Model::ListResourceMembersRequest &request)const;
			void listResourceMembersAsync(const Model::ListResourceMembersRequest& request, const ListResourceMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceMembersOutcomeCallable listResourceMembersCallable(const Model::ListResourceMembersRequest& request) const;
			ListSearchCommitOutcome listSearchCommit(const Model::ListSearchCommitRequest &request)const;
			void listSearchCommitAsync(const Model::ListSearchCommitRequest& request, const ListSearchCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSearchCommitOutcomeCallable listSearchCommitCallable(const Model::ListSearchCommitRequest& request) const;
			ListSearchRepositoryOutcome listSearchRepository(const Model::ListSearchRepositoryRequest &request)const;
			void listSearchRepositoryAsync(const Model::ListSearchRepositoryRequest& request, const ListSearchRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSearchRepositoryOutcomeCallable listSearchRepositoryCallable(const Model::ListSearchRepositoryRequest& request) const;
			ListSearchSourceCodeOutcome listSearchSourceCode(const Model::ListSearchSourceCodeRequest &request)const;
			void listSearchSourceCodeAsync(const Model::ListSearchSourceCodeRequest& request, const ListSearchSourceCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSearchSourceCodeOutcomeCallable listSearchSourceCodeCallable(const Model::ListSearchSourceCodeRequest& request) const;
			ListServiceAuthsOutcome listServiceAuths(const Model::ListServiceAuthsRequest &request)const;
			void listServiceAuthsAsync(const Model::ListServiceAuthsRequest& request, const ListServiceAuthsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceAuthsOutcomeCallable listServiceAuthsCallable(const Model::ListServiceAuthsRequest& request) const;
			ListServiceConnectionsOutcome listServiceConnections(const Model::ListServiceConnectionsRequest &request)const;
			void listServiceConnectionsAsync(const Model::ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceConnectionsOutcomeCallable listServiceConnectionsCallable(const Model::ListServiceConnectionsRequest& request) const;
			ListServiceCredentialsOutcome listServiceCredentials(const Model::ListServiceCredentialsRequest &request)const;
			void listServiceCredentialsAsync(const Model::ListServiceCredentialsRequest& request, const ListServiceCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceCredentialsOutcomeCallable listServiceCredentialsCallable(const Model::ListServiceCredentialsRequest& request) const;
			ListSprintsOutcome listSprints(const Model::ListSprintsRequest &request)const;
			void listSprintsAsync(const Model::ListSprintsRequest& request, const ListSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSprintsOutcomeCallable listSprintsCallable(const Model::ListSprintsRequest& request) const;
			ListTestCaseFieldsOutcome listTestCaseFields(const Model::ListTestCaseFieldsRequest &request)const;
			void listTestCaseFieldsAsync(const Model::ListTestCaseFieldsRequest& request, const ListTestCaseFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTestCaseFieldsOutcomeCallable listTestCaseFieldsCallable(const Model::ListTestCaseFieldsRequest& request) const;
			ListUserDrawRecordByPkOutcome listUserDrawRecordByPk(const Model::ListUserDrawRecordByPkRequest &request)const;
			void listUserDrawRecordByPkAsync(const Model::ListUserDrawRecordByPkRequest& request, const ListUserDrawRecordByPkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserDrawRecordByPkOutcomeCallable listUserDrawRecordByPkCallable(const Model::ListUserDrawRecordByPkRequest& request) const;
			ListUserKeysOutcome listUserKeys(const Model::ListUserKeysRequest &request)const;
			void listUserKeysAsync(const Model::ListUserKeysRequest& request, const ListUserKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserKeysOutcomeCallable listUserKeysCallable(const Model::ListUserKeysRequest& request) const;
			ListUserResourcesOutcome listUserResources(const Model::ListUserResourcesRequest &request)const;
			void listUserResourcesAsync(const Model::ListUserResourcesRequest& request, const ListUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserResourcesOutcomeCallable listUserResourcesCallable(const Model::ListUserResourcesRequest& request) const;
			ListVariableGroupsOutcome listVariableGroups(const Model::ListVariableGroupsRequest &request)const;
			void listVariableGroupsAsync(const Model::ListVariableGroupsRequest& request, const ListVariableGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVariableGroupsOutcomeCallable listVariableGroupsCallable(const Model::ListVariableGroupsRequest& request) const;
			ListWorkItemAllFieldsOutcome listWorkItemAllFields(const Model::ListWorkItemAllFieldsRequest &request)const;
			void listWorkItemAllFieldsAsync(const Model::ListWorkItemAllFieldsRequest& request, const ListWorkItemAllFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkItemAllFieldsOutcomeCallable listWorkItemAllFieldsCallable(const Model::ListWorkItemAllFieldsRequest& request) const;
			ListWorkItemWorkFlowStatusOutcome listWorkItemWorkFlowStatus(const Model::ListWorkItemWorkFlowStatusRequest &request)const;
			void listWorkItemWorkFlowStatusAsync(const Model::ListWorkItemWorkFlowStatusRequest& request, const ListWorkItemWorkFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkItemWorkFlowStatusOutcomeCallable listWorkItemWorkFlowStatusCallable(const Model::ListWorkItemWorkFlowStatusRequest& request) const;
			ListWorkitemAttachmentsOutcome listWorkitemAttachments(const Model::ListWorkitemAttachmentsRequest &request)const;
			void listWorkitemAttachmentsAsync(const Model::ListWorkitemAttachmentsRequest& request, const ListWorkitemAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkitemAttachmentsOutcomeCallable listWorkitemAttachmentsCallable(const Model::ListWorkitemAttachmentsRequest& request) const;
			ListWorkitemEstimateOutcome listWorkitemEstimate(const Model::ListWorkitemEstimateRequest &request)const;
			void listWorkitemEstimateAsync(const Model::ListWorkitemEstimateRequest& request, const ListWorkitemEstimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkitemEstimateOutcomeCallable listWorkitemEstimateCallable(const Model::ListWorkitemEstimateRequest& request) const;
			ListWorkitemTimeOutcome listWorkitemTime(const Model::ListWorkitemTimeRequest &request)const;
			void listWorkitemTimeAsync(const Model::ListWorkitemTimeRequest& request, const ListWorkitemTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkitemTimeOutcomeCallable listWorkitemTimeCallable(const Model::ListWorkitemTimeRequest& request) const;
			ListWorkitemsOutcome listWorkitems(const Model::ListWorkitemsRequest &request)const;
			void listWorkitemsAsync(const Model::ListWorkitemsRequest& request, const ListWorkitemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkitemsOutcomeCallable listWorkitemsCallable(const Model::ListWorkitemsRequest& request) const;
			ListWorkspacesOutcome listWorkspaces(const Model::ListWorkspacesRequest &request)const;
			void listWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkspacesOutcomeCallable listWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;
			LogPipelineJobRunOutcome logPipelineJobRun(const Model::LogPipelineJobRunRequest &request)const;
			void logPipelineJobRunAsync(const Model::LogPipelineJobRunRequest& request, const LogPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LogPipelineJobRunOutcomeCallable logPipelineJobRunCallable(const Model::LogPipelineJobRunRequest& request) const;
			LogVMDeployMachineOutcome logVMDeployMachine(const Model::LogVMDeployMachineRequest &request)const;
			void logVMDeployMachineAsync(const Model::LogVMDeployMachineRequest& request, const LogVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LogVMDeployMachineOutcomeCallable logVMDeployMachineCallable(const Model::LogVMDeployMachineRequest& request) const;
			MergeMergeRequestOutcome mergeMergeRequest(const Model::MergeMergeRequestRequest &request)const;
			void mergeMergeRequestAsync(const Model::MergeMergeRequestRequest& request, const MergeMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MergeMergeRequestOutcomeCallable mergeMergeRequestCallable(const Model::MergeMergeRequestRequest& request) const;
			PassPipelineValidateOutcome passPipelineValidate(const Model::PassPipelineValidateRequest &request)const;
			void passPipelineValidateAsync(const Model::PassPipelineValidateRequest& request, const PassPipelineValidateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PassPipelineValidateOutcomeCallable passPipelineValidateCallable(const Model::PassPipelineValidateRequest& request) const;
			RefusePipelineValidateOutcome refusePipelineValidate(const Model::RefusePipelineValidateRequest &request)const;
			void refusePipelineValidateAsync(const Model::RefusePipelineValidateRequest& request, const RefusePipelineValidateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefusePipelineValidateOutcomeCallable refusePipelineValidateCallable(const Model::RefusePipelineValidateRequest& request) const;
			ReleaseWorkspaceOutcome releaseWorkspace(const Model::ReleaseWorkspaceRequest &request)const;
			void releaseWorkspaceAsync(const Model::ReleaseWorkspaceRequest& request, const ReleaseWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseWorkspaceOutcomeCallable releaseWorkspaceCallable(const Model::ReleaseWorkspaceRequest& request) const;
			ReopenMergeRequestOutcome reopenMergeRequest(const Model::ReopenMergeRequestRequest &request)const;
			void reopenMergeRequestAsync(const Model::ReopenMergeRequestRequest& request, const ReopenMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReopenMergeRequestOutcomeCallable reopenMergeRequestCallable(const Model::ReopenMergeRequestRequest& request) const;
			ResetSshKeyOutcome resetSshKey(const Model::ResetSshKeyRequest &request)const;
			void resetSshKeyAsync(const Model::ResetSshKeyRequest& request, const ResetSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSshKeyOutcomeCallable resetSshKeyCallable(const Model::ResetSshKeyRequest& request) const;
			ResumeVMDeployOrderOutcome resumeVMDeployOrder(const Model::ResumeVMDeployOrderRequest &request)const;
			void resumeVMDeployOrderAsync(const Model::ResumeVMDeployOrderRequest& request, const ResumeVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeVMDeployOrderOutcomeCallable resumeVMDeployOrderCallable(const Model::ResumeVMDeployOrderRequest& request) const;
			RetryPipelineJobRunOutcome retryPipelineJobRun(const Model::RetryPipelineJobRunRequest &request)const;
			void retryPipelineJobRunAsync(const Model::RetryPipelineJobRunRequest& request, const RetryPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryPipelineJobRunOutcomeCallable retryPipelineJobRunCallable(const Model::RetryPipelineJobRunRequest& request) const;
			RetryVMDeployMachineOutcome retryVMDeployMachine(const Model::RetryVMDeployMachineRequest &request)const;
			void retryVMDeployMachineAsync(const Model::RetryVMDeployMachineRequest& request, const RetryVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryVMDeployMachineOutcomeCallable retryVMDeployMachineCallable(const Model::RetryVMDeployMachineRequest& request) const;
			ReviewMergeRequestOutcome reviewMergeRequest(const Model::ReviewMergeRequestRequest &request)const;
			void reviewMergeRequestAsync(const Model::ReviewMergeRequestRequest& request, const ReviewMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReviewMergeRequestOutcomeCallable reviewMergeRequestCallable(const Model::ReviewMergeRequestRequest& request) const;
			SkipPipelineJobRunOutcome skipPipelineJobRun(const Model::SkipPipelineJobRunRequest &request)const;
			void skipPipelineJobRunAsync(const Model::SkipPipelineJobRunRequest& request, const SkipPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SkipPipelineJobRunOutcomeCallable skipPipelineJobRunCallable(const Model::SkipPipelineJobRunRequest& request) const;
			SkipVMDeployMachineOutcome skipVMDeployMachine(const Model::SkipVMDeployMachineRequest &request)const;
			void skipVMDeployMachineAsync(const Model::SkipVMDeployMachineRequest& request, const SkipVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SkipVMDeployMachineOutcomeCallable skipVMDeployMachineCallable(const Model::SkipVMDeployMachineRequest& request) const;
			StartPipelineRunOutcome startPipelineRun(const Model::StartPipelineRunRequest &request)const;
			void startPipelineRunAsync(const Model::StartPipelineRunRequest& request, const StartPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPipelineRunOutcomeCallable startPipelineRunCallable(const Model::StartPipelineRunRequest& request) const;
			StopPipelineJobRunOutcome stopPipelineJobRun(const Model::StopPipelineJobRunRequest &request)const;
			void stopPipelineJobRunAsync(const Model::StopPipelineJobRunRequest& request, const StopPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPipelineJobRunOutcomeCallable stopPipelineJobRunCallable(const Model::StopPipelineJobRunRequest& request) const;
			StopPipelineRunOutcome stopPipelineRun(const Model::StopPipelineRunRequest &request)const;
			void stopPipelineRunAsync(const Model::StopPipelineRunRequest& request, const StopPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPipelineRunOutcomeCallable stopPipelineRunCallable(const Model::StopPipelineRunRequest& request) const;
			StopVMDeployOrderOutcome stopVMDeployOrder(const Model::StopVMDeployOrderRequest &request)const;
			void stopVMDeployOrderAsync(const Model::StopVMDeployOrderRequest& request, const StopVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopVMDeployOrderOutcomeCallable stopVMDeployOrderCallable(const Model::StopVMDeployOrderRequest& request) const;
			TransferRepositoryOutcome transferRepository(const Model::TransferRepositoryRequest &request)const;
			void transferRepositoryAsync(const Model::TransferRepositoryRequest& request, const TransferRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferRepositoryOutcomeCallable transferRepositoryCallable(const Model::TransferRepositoryRequest& request) const;
			TriggerRepositoryMirrorSyncOutcome triggerRepositoryMirrorSync(const Model::TriggerRepositoryMirrorSyncRequest &request)const;
			void triggerRepositoryMirrorSyncAsync(const Model::TriggerRepositoryMirrorSyncRequest& request, const TriggerRepositoryMirrorSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerRepositoryMirrorSyncOutcomeCallable triggerRepositoryMirrorSyncCallable(const Model::TriggerRepositoryMirrorSyncRequest& request) const;
			UpdateAppMemberOutcome updateAppMember(const Model::UpdateAppMemberRequest &request)const;
			void updateAppMemberAsync(const Model::UpdateAppMemberRequest& request, const UpdateAppMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppMemberOutcomeCallable updateAppMemberCallable(const Model::UpdateAppMemberRequest& request) const;
			UpdateApplicationOutcome updateApplication(const Model::UpdateApplicationRequest &request)const;
			void updateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationOutcomeCallable updateApplicationCallable(const Model::UpdateApplicationRequest& request) const;
			UpdateCheckRunOutcome updateCheckRun(const Model::UpdateCheckRunRequest &request)const;
			void updateCheckRunAsync(const Model::UpdateCheckRunRequest& request, const UpdateCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCheckRunOutcomeCallable updateCheckRunCallable(const Model::UpdateCheckRunRequest& request) const;
			UpdateFileOutcome updateFile(const Model::UpdateFileRequest &request)const;
			void updateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileOutcomeCallable updateFileCallable(const Model::UpdateFileRequest& request) const;
			UpdateFlowTagOutcome updateFlowTag(const Model::UpdateFlowTagRequest &request)const;
			void updateFlowTagAsync(const Model::UpdateFlowTagRequest& request, const UpdateFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowTagOutcomeCallable updateFlowTagCallable(const Model::UpdateFlowTagRequest& request) const;
			UpdateFlowTagGroupOutcome updateFlowTagGroup(const Model::UpdateFlowTagGroupRequest &request)const;
			void updateFlowTagGroupAsync(const Model::UpdateFlowTagGroupRequest& request, const UpdateFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowTagGroupOutcomeCallable updateFlowTagGroupCallable(const Model::UpdateFlowTagGroupRequest& request) const;
			UpdateGroupOutcome updateGroup(const Model::UpdateGroupRequest &request)const;
			void updateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupOutcomeCallable updateGroupCallable(const Model::UpdateGroupRequest& request) const;
			UpdateGroupMemberOutcome updateGroupMember(const Model::UpdateGroupMemberRequest &request)const;
			void updateGroupMemberAsync(const Model::UpdateGroupMemberRequest& request, const UpdateGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupMemberOutcomeCallable updateGroupMemberCallable(const Model::UpdateGroupMemberRequest& request) const;
			UpdateHostGroupOutcome updateHostGroup(const Model::UpdateHostGroupRequest &request)const;
			void updateHostGroupAsync(const Model::UpdateHostGroupRequest& request, const UpdateHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHostGroupOutcomeCallable updateHostGroupCallable(const Model::UpdateHostGroupRequest& request) const;
			UpdateMergeRequestOutcome updateMergeRequest(const Model::UpdateMergeRequestRequest &request)const;
			void updateMergeRequestAsync(const Model::UpdateMergeRequestRequest& request, const UpdateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMergeRequestOutcomeCallable updateMergeRequestCallable(const Model::UpdateMergeRequestRequest& request) const;
			UpdateMergeRequestPersonnelOutcome updateMergeRequestPersonnel(const Model::UpdateMergeRequestPersonnelRequest &request)const;
			void updateMergeRequestPersonnelAsync(const Model::UpdateMergeRequestPersonnelRequest& request, const UpdateMergeRequestPersonnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMergeRequestPersonnelOutcomeCallable updateMergeRequestPersonnelCallable(const Model::UpdateMergeRequestPersonnelRequest& request) const;
			UpdatePipelineOutcome updatePipeline(const Model::UpdatePipelineRequest &request)const;
			void updatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineOutcomeCallable updatePipelineCallable(const Model::UpdatePipelineRequest& request) const;
			UpdatePipelineBaseInfoOutcome updatePipelineBaseInfo(const Model::UpdatePipelineBaseInfoRequest &request)const;
			void updatePipelineBaseInfoAsync(const Model::UpdatePipelineBaseInfoRequest& request, const UpdatePipelineBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineBaseInfoOutcomeCallable updatePipelineBaseInfoCallable(const Model::UpdatePipelineBaseInfoRequest& request) const;
			UpdatePipelineGroupOutcome updatePipelineGroup(const Model::UpdatePipelineGroupRequest &request)const;
			void updatePipelineGroupAsync(const Model::UpdatePipelineGroupRequest& request, const UpdatePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineGroupOutcomeCallable updatePipelineGroupCallable(const Model::UpdatePipelineGroupRequest& request) const;
			UpdateProjectFieldOutcome updateProjectField(const Model::UpdateProjectFieldRequest &request)const;
			void updateProjectFieldAsync(const Model::UpdateProjectFieldRequest& request, const UpdateProjectFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectFieldOutcomeCallable updateProjectFieldCallable(const Model::UpdateProjectFieldRequest& request) const;
			UpdateProjectLabelOutcome updateProjectLabel(const Model::UpdateProjectLabelRequest &request)const;
			void updateProjectLabelAsync(const Model::UpdateProjectLabelRequest& request, const UpdateProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectLabelOutcomeCallable updateProjectLabelCallable(const Model::UpdateProjectLabelRequest& request) const;
			UpdateProjectMemberOutcome updateProjectMember(const Model::UpdateProjectMemberRequest &request)const;
			void updateProjectMemberAsync(const Model::UpdateProjectMemberRequest& request, const UpdateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectMemberOutcomeCallable updateProjectMemberCallable(const Model::UpdateProjectMemberRequest& request) const;
			UpdateProtectedBranchesOutcome updateProtectedBranches(const Model::UpdateProtectedBranchesRequest &request)const;
			void updateProtectedBranchesAsync(const Model::UpdateProtectedBranchesRequest& request, const UpdateProtectedBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProtectedBranchesOutcomeCallable updateProtectedBranchesCallable(const Model::UpdateProtectedBranchesRequest& request) const;
			UpdatePushReviewOnOffOutcome updatePushReviewOnOff(const Model::UpdatePushReviewOnOffRequest &request)const;
			void updatePushReviewOnOffAsync(const Model::UpdatePushReviewOnOffRequest& request, const UpdatePushReviewOnOffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePushReviewOnOffOutcomeCallable updatePushReviewOnOffCallable(const Model::UpdatePushReviewOnOffRequest& request) const;
			UpdatePushRuleOutcome updatePushRule(const Model::UpdatePushRuleRequest &request)const;
			void updatePushRuleAsync(const Model::UpdatePushRuleRequest& request, const UpdatePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePushRuleOutcomeCallable updatePushRuleCallable(const Model::UpdatePushRuleRequest& request) const;
			UpdateRepositoryOutcome updateRepository(const Model::UpdateRepositoryRequest &request)const;
			void updateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRepositoryOutcomeCallable updateRepositoryCallable(const Model::UpdateRepositoryRequest& request) const;
			UpdateRepositoryMemberOutcome updateRepositoryMember(const Model::UpdateRepositoryMemberRequest &request)const;
			void updateRepositoryMemberAsync(const Model::UpdateRepositoryMemberRequest& request, const UpdateRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRepositoryMemberOutcomeCallable updateRepositoryMemberCallable(const Model::UpdateRepositoryMemberRequest& request) const;
			UpdateResourceMemberOutcome updateResourceMember(const Model::UpdateResourceMemberRequest &request)const;
			void updateResourceMemberAsync(const Model::UpdateResourceMemberRequest& request, const UpdateResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceMemberOutcomeCallable updateResourceMemberCallable(const Model::UpdateResourceMemberRequest& request) const;
			UpdateTestCaseOutcome updateTestCase(const Model::UpdateTestCaseRequest &request)const;
			void updateTestCaseAsync(const Model::UpdateTestCaseRequest& request, const UpdateTestCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTestCaseOutcomeCallable updateTestCaseCallable(const Model::UpdateTestCaseRequest& request) const;
			UpdateTestResultOutcome updateTestResult(const Model::UpdateTestResultRequest &request)const;
			void updateTestResultAsync(const Model::UpdateTestResultRequest& request, const UpdateTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTestResultOutcomeCallable updateTestResultCallable(const Model::UpdateTestResultRequest& request) const;
			UpdateVariableGroupOutcome updateVariableGroup(const Model::UpdateVariableGroupRequest &request)const;
			void updateVariableGroupAsync(const Model::UpdateVariableGroupRequest& request, const UpdateVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVariableGroupOutcomeCallable updateVariableGroupCallable(const Model::UpdateVariableGroupRequest& request) const;
			UpdateWorkItemOutcome updateWorkItem(const Model::UpdateWorkItemRequest &request)const;
			void updateWorkItemAsync(const Model::UpdateWorkItemRequest& request, const UpdateWorkItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkItemOutcomeCallable updateWorkItemCallable(const Model::UpdateWorkItemRequest& request) const;
			UpdateWorkitemCommentOutcome updateWorkitemComment(const Model::UpdateWorkitemCommentRequest &request)const;
			void updateWorkitemCommentAsync(const Model::UpdateWorkitemCommentRequest& request, const UpdateWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkitemCommentOutcomeCallable updateWorkitemCommentCallable(const Model::UpdateWorkitemCommentRequest& request) const;
			UpdateWorkitemFieldOutcome updateWorkitemField(const Model::UpdateWorkitemFieldRequest &request)const;
			void updateWorkitemFieldAsync(const Model::UpdateWorkitemFieldRequest& request, const UpdateWorkitemFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkitemFieldOutcomeCallable updateWorkitemFieldCallable(const Model::UpdateWorkitemFieldRequest& request) const;
			WorkitemAttachmentCreateOutcome workitemAttachmentCreate(const Model::WorkitemAttachmentCreateRequest &request)const;
			void workitemAttachmentCreateAsync(const Model::WorkitemAttachmentCreateRequest& request, const WorkitemAttachmentCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WorkitemAttachmentCreateOutcomeCallable workitemAttachmentCreateCallable(const Model::WorkitemAttachmentCreateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DEVOPS_DEVOPSCLIENT_H_
