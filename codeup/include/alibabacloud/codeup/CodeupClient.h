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

#ifndef ALIBABACLOUD_CODEUP_CODEUPCLIENT_H_
#define ALIBABACLOUD_CODEUP_CODEUPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "CodeupExport.h"
#include "model/AcceptMergeRequestRequest.h"
#include "model/AcceptMergeRequestResult.h"
#include "model/AddGroupMemberRequest.h"
#include "model/AddGroupMemberResult.h"
#include "model/AddRepositoryMemberRequest.h"
#include "model/AddRepositoryMemberResult.h"
#include "model/AddWebhookRequest.h"
#include "model/AddWebhookResult.h"
#include "model/CreateBranchRequest.h"
#include "model/CreateBranchResult.h"
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateMergeRequestRequest.h"
#include "model/CreateMergeRequestResult.h"
#include "model/CreateMergeRequestCommentRequest.h"
#include "model/CreateMergeRequestCommentResult.h"
#include "model/CreateRepositoryRequest.h"
#include "model/CreateRepositoryResult.h"
#include "model/CreateRepositoryDeployKeyRequest.h"
#include "model/CreateRepositoryDeployKeyResult.h"
#include "model/CreateRepositoryGroupRequest.h"
#include "model/CreateRepositoryGroupResult.h"
#include "model/CreateRepositoryProtectedBranchRequest.h"
#include "model/CreateRepositoryProtectedBranchResult.h"
#include "model/CreateSshKeyRequest.h"
#include "model/CreateSshKeyResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/DeleteBranchRequest.h"
#include "model/DeleteBranchResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DeleteGroupMemberRequest.h"
#include "model/DeleteGroupMemberResult.h"
#include "model/DeleteRepositoryRequest.h"
#include "model/DeleteRepositoryResult.h"
#include "model/DeleteRepositoryGroupRequest.h"
#include "model/DeleteRepositoryGroupResult.h"
#include "model/DeleteRepositoryMemberRequest.h"
#include "model/DeleteRepositoryMemberResult.h"
#include "model/DeleteRepositoryProtectedBranchRequest.h"
#include "model/DeleteRepositoryProtectedBranchResult.h"
#include "model/DeleteRepositoryTagRequest.h"
#include "model/DeleteRepositoryTagResult.h"
#include "model/DeleteRepositoryTagV2Request.h"
#include "model/DeleteRepositoryTagV2Result.h"
#include "model/DeleteRepositoryWebhookRequest.h"
#include "model/DeleteRepositoryWebhookResult.h"
#include "model/EnableRepositoryDeployKeyRequest.h"
#include "model/EnableRepositoryDeployKeyResult.h"
#include "model/GetBranchInfoRequest.h"
#include "model/GetBranchInfoResult.h"
#include "model/GetCodeCompletionRequest.h"
#include "model/GetCodeCompletionResult.h"
#include "model/GetCodeupOrganizationRequest.h"
#include "model/GetCodeupOrganizationResult.h"
#include "model/GetFileBlobsRequest.h"
#include "model/GetFileBlobsResult.h"
#include "model/GetGroupDetailRequest.h"
#include "model/GetGroupDetailResult.h"
#include "model/GetMergeRequestApproveStatusRequest.h"
#include "model/GetMergeRequestApproveStatusResult.h"
#include "model/GetMergeRequestDetailRequest.h"
#include "model/GetMergeRequestDetailResult.h"
#include "model/GetMergeRequestSettingRequest.h"
#include "model/GetMergeRequestSettingResult.h"
#include "model/GetOrganizationSecurityCenterStatusRequest.h"
#include "model/GetOrganizationSecurityCenterStatusResult.h"
#include "model/GetProjectMemberRequest.h"
#include "model/GetProjectMemberResult.h"
#include "model/GetRepositoryCommitRequest.h"
#include "model/GetRepositoryCommitResult.h"
#include "model/GetRepositoryInfoRequest.h"
#include "model/GetRepositoryInfoResult.h"
#include "model/GetRepositoryTagRequest.h"
#include "model/GetRepositoryTagResult.h"
#include "model/GetRepositoryTagV2Request.h"
#include "model/GetRepositoryTagV2Result.h"
#include "model/GetUserInfoRequest.h"
#include "model/GetUserInfoResult.h"
#include "model/ListGroupMemberRequest.h"
#include "model/ListGroupMemberResult.h"
#include "model/ListGroupRepositoriesRequest.h"
#include "model/ListGroupRepositoriesResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListMergeRequestCommentsRequest.h"
#include "model/ListMergeRequestCommentsResult.h"
#include "model/ListMergeRequestsRequest.h"
#include "model/ListMergeRequestsResult.h"
#include "model/ListOrganizationSecurityScoresRequest.h"
#include "model/ListOrganizationSecurityScoresResult.h"
#include "model/ListOrganizationsRequest.h"
#include "model/ListOrganizationsResult.h"
#include "model/ListRepositoriesRequest.h"
#include "model/ListRepositoriesResult.h"
#include "model/ListRepositoryBranchesRequest.h"
#include "model/ListRepositoryBranchesResult.h"
#include "model/ListRepositoryCommitDiffRequest.h"
#include "model/ListRepositoryCommitDiffResult.h"
#include "model/ListRepositoryCommitsRequest.h"
#include "model/ListRepositoryCommitsResult.h"
#include "model/ListRepositoryMemberRequest.h"
#include "model/ListRepositoryMemberResult.h"
#include "model/ListRepositoryMemberWithInheritedRequest.h"
#include "model/ListRepositoryMemberWithInheritedResult.h"
#include "model/ListRepositoryTagsRequest.h"
#include "model/ListRepositoryTagsResult.h"
#include "model/ListRepositoryTreeRequest.h"
#include "model/ListRepositoryTreeResult.h"
#include "model/ListRepositoryWebhookRequest.h"
#include "model/ListRepositoryWebhookResult.h"
#include "model/MergeMergeRequestRequest.h"
#include "model/MergeMergeRequestResult.h"
#include "model/UpdateFileRequest.h"
#include "model/UpdateFileResult.h"
#include "model/UpdateGroupMemberRequest.h"
#include "model/UpdateGroupMemberResult.h"
#include "model/UpdateMergeRequestRequest.h"
#include "model/UpdateMergeRequestResult.h"
#include "model/UpdateMergeRequestCommentRequest.h"
#include "model/UpdateMergeRequestCommentResult.h"
#include "model/UpdateMergeRequestSettingRequest.h"
#include "model/UpdateMergeRequestSettingResult.h"
#include "model/UpdateRepositoryRequest.h"
#include "model/UpdateRepositoryResult.h"
#include "model/UpdateRepositoryMemberRequest.h"
#include "model/UpdateRepositoryMemberResult.h"


namespace AlibabaCloud
{
	namespace Codeup
	{
		class ALIBABACLOUD_CODEUP_EXPORT CodeupClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptMergeRequestResult> AcceptMergeRequestOutcome;
			typedef std::future<AcceptMergeRequestOutcome> AcceptMergeRequestOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::AcceptMergeRequestRequest&, const AcceptMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::AddGroupMemberResult> AddGroupMemberOutcome;
			typedef std::future<AddGroupMemberOutcome> AddGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::AddGroupMemberRequest&, const AddGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::AddRepositoryMemberResult> AddRepositoryMemberOutcome;
			typedef std::future<AddRepositoryMemberOutcome> AddRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::AddRepositoryMemberRequest&, const AddRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::AddWebhookResult> AddWebhookOutcome;
			typedef std::future<AddWebhookOutcome> AddWebhookOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::AddWebhookRequest&, const AddWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWebhookAsyncHandler;
			typedef Outcome<Error, Model::CreateBranchResult> CreateBranchOutcome;
			typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateBranchRequest&, const CreateBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBranchAsyncHandler;
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeRequestResult> CreateMergeRequestOutcome;
			typedef std::future<CreateMergeRequestOutcome> CreateMergeRequestOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateMergeRequestRequest&, const CreateMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeRequestCommentResult> CreateMergeRequestCommentOutcome;
			typedef std::future<CreateMergeRequestCommentOutcome> CreateMergeRequestCommentOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateMergeRequestCommentRequest&, const CreateMergeRequestCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeRequestCommentAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryResult> CreateRepositoryOutcome;
			typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryRequest&, const CreateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryDeployKeyResult> CreateRepositoryDeployKeyOutcome;
			typedef std::future<CreateRepositoryDeployKeyOutcome> CreateRepositoryDeployKeyOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryDeployKeyRequest&, const CreateRepositoryDeployKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryDeployKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryGroupResult> CreateRepositoryGroupOutcome;
			typedef std::future<CreateRepositoryGroupOutcome> CreateRepositoryGroupOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryGroupRequest&, const CreateRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryProtectedBranchResult> CreateRepositoryProtectedBranchOutcome;
			typedef std::future<CreateRepositoryProtectedBranchOutcome> CreateRepositoryProtectedBranchOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryProtectedBranchRequest&, const CreateRepositoryProtectedBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryProtectedBranchAsyncHandler;
			typedef Outcome<Error, Model::CreateSshKeyResult> CreateSshKeyOutcome;
			typedef std::future<CreateSshKeyOutcome> CreateSshKeyOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateSshKeyRequest&, const CreateSshKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSshKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteBranchResult> DeleteBranchOutcome;
			typedef std::future<DeleteBranchOutcome> DeleteBranchOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteBranchRequest&, const DeleteBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBranchAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupMemberResult> DeleteGroupMemberOutcome;
			typedef std::future<DeleteGroupMemberOutcome> DeleteGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteGroupMemberRequest&, const DeleteGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryResult> DeleteRepositoryOutcome;
			typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryRequest&, const DeleteRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryGroupResult> DeleteRepositoryGroupOutcome;
			typedef std::future<DeleteRepositoryGroupOutcome> DeleteRepositoryGroupOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryGroupRequest&, const DeleteRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryMemberResult> DeleteRepositoryMemberOutcome;
			typedef std::future<DeleteRepositoryMemberOutcome> DeleteRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryMemberRequest&, const DeleteRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryProtectedBranchResult> DeleteRepositoryProtectedBranchOutcome;
			typedef std::future<DeleteRepositoryProtectedBranchOutcome> DeleteRepositoryProtectedBranchOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryProtectedBranchRequest&, const DeleteRepositoryProtectedBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryProtectedBranchAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryTagResult> DeleteRepositoryTagOutcome;
			typedef std::future<DeleteRepositoryTagOutcome> DeleteRepositoryTagOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryTagRequest&, const DeleteRepositoryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryTagV2Result> DeleteRepositoryTagV2Outcome;
			typedef std::future<DeleteRepositoryTagV2Outcome> DeleteRepositoryTagV2OutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryTagV2Request&, const DeleteRepositoryTagV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryTagV2AsyncHandler;
			typedef Outcome<Error, Model::DeleteRepositoryWebhookResult> DeleteRepositoryWebhookOutcome;
			typedef std::future<DeleteRepositoryWebhookOutcome> DeleteRepositoryWebhookOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryWebhookRequest&, const DeleteRepositoryWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryWebhookAsyncHandler;
			typedef Outcome<Error, Model::EnableRepositoryDeployKeyResult> EnableRepositoryDeployKeyOutcome;
			typedef std::future<EnableRepositoryDeployKeyOutcome> EnableRepositoryDeployKeyOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::EnableRepositoryDeployKeyRequest&, const EnableRepositoryDeployKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRepositoryDeployKeyAsyncHandler;
			typedef Outcome<Error, Model::GetBranchInfoResult> GetBranchInfoOutcome;
			typedef std::future<GetBranchInfoOutcome> GetBranchInfoOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetBranchInfoRequest&, const GetBranchInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBranchInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCodeCompletionResult> GetCodeCompletionOutcome;
			typedef std::future<GetCodeCompletionOutcome> GetCodeCompletionOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetCodeCompletionRequest&, const GetCodeCompletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeCompletionAsyncHandler;
			typedef Outcome<Error, Model::GetCodeupOrganizationResult> GetCodeupOrganizationOutcome;
			typedef std::future<GetCodeupOrganizationOutcome> GetCodeupOrganizationOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetCodeupOrganizationRequest&, const GetCodeupOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeupOrganizationAsyncHandler;
			typedef Outcome<Error, Model::GetFileBlobsResult> GetFileBlobsOutcome;
			typedef std::future<GetFileBlobsOutcome> GetFileBlobsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetFileBlobsRequest&, const GetFileBlobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileBlobsAsyncHandler;
			typedef Outcome<Error, Model::GetGroupDetailResult> GetGroupDetailOutcome;
			typedef std::future<GetGroupDetailOutcome> GetGroupDetailOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetGroupDetailRequest&, const GetGroupDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMergeRequestApproveStatusResult> GetMergeRequestApproveStatusOutcome;
			typedef std::future<GetMergeRequestApproveStatusOutcome> GetMergeRequestApproveStatusOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetMergeRequestApproveStatusRequest&, const GetMergeRequestApproveStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMergeRequestApproveStatusAsyncHandler;
			typedef Outcome<Error, Model::GetMergeRequestDetailResult> GetMergeRequestDetailOutcome;
			typedef std::future<GetMergeRequestDetailOutcome> GetMergeRequestDetailOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetMergeRequestDetailRequest&, const GetMergeRequestDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMergeRequestDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMergeRequestSettingResult> GetMergeRequestSettingOutcome;
			typedef std::future<GetMergeRequestSettingOutcome> GetMergeRequestSettingOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetMergeRequestSettingRequest&, const GetMergeRequestSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMergeRequestSettingAsyncHandler;
			typedef Outcome<Error, Model::GetOrganizationSecurityCenterStatusResult> GetOrganizationSecurityCenterStatusOutcome;
			typedef std::future<GetOrganizationSecurityCenterStatusOutcome> GetOrganizationSecurityCenterStatusOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetOrganizationSecurityCenterStatusRequest&, const GetOrganizationSecurityCenterStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationSecurityCenterStatusAsyncHandler;
			typedef Outcome<Error, Model::GetProjectMemberResult> GetProjectMemberOutcome;
			typedef std::future<GetProjectMemberOutcome> GetProjectMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetProjectMemberRequest&, const GetProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryCommitResult> GetRepositoryCommitOutcome;
			typedef std::future<GetRepositoryCommitOutcome> GetRepositoryCommitOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryCommitRequest&, const GetRepositoryCommitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryCommitAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryInfoResult> GetRepositoryInfoOutcome;
			typedef std::future<GetRepositoryInfoOutcome> GetRepositoryInfoOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryInfoRequest&, const GetRepositoryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryInfoAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryTagResult> GetRepositoryTagOutcome;
			typedef std::future<GetRepositoryTagOutcome> GetRepositoryTagOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryTagRequest&, const GetRepositoryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryTagAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryTagV2Result> GetRepositoryTagV2Outcome;
			typedef std::future<GetRepositoryTagV2Outcome> GetRepositoryTagV2OutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryTagV2Request&, const GetRepositoryTagV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryTagV2AsyncHandler;
			typedef Outcome<Error, Model::GetUserInfoResult> GetUserInfoOutcome;
			typedef std::future<GetUserInfoOutcome> GetUserInfoOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetUserInfoRequest&, const GetUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInfoAsyncHandler;
			typedef Outcome<Error, Model::ListGroupMemberResult> ListGroupMemberOutcome;
			typedef std::future<ListGroupMemberOutcome> ListGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupMemberRequest&, const ListGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::ListGroupRepositoriesResult> ListGroupRepositoriesOutcome;
			typedef std::future<ListGroupRepositoriesOutcome> ListGroupRepositoriesOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupRepositoriesRequest&, const ListGroupRepositoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupRepositoriesAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestCommentsResult> ListMergeRequestCommentsOutcome;
			typedef std::future<ListMergeRequestCommentsOutcome> ListMergeRequestCommentsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListMergeRequestCommentsRequest&, const ListMergeRequestCommentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestCommentsAsyncHandler;
			typedef Outcome<Error, Model::ListMergeRequestsResult> ListMergeRequestsOutcome;
			typedef std::future<ListMergeRequestsOutcome> ListMergeRequestsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListMergeRequestsRequest&, const ListMergeRequestsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMergeRequestsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationSecurityScoresResult> ListOrganizationSecurityScoresOutcome;
			typedef std::future<ListOrganizationSecurityScoresOutcome> ListOrganizationSecurityScoresOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListOrganizationSecurityScoresRequest&, const ListOrganizationSecurityScoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationSecurityScoresAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationsResult> ListOrganizationsOutcome;
			typedef std::future<ListOrganizationsOutcome> ListOrganizationsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListOrganizationsRequest&, const ListOrganizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoriesResult> ListRepositoriesOutcome;
			typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoriesRequest&, const ListRepositoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoriesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryBranchesResult> ListRepositoryBranchesOutcome;
			typedef std::future<ListRepositoryBranchesOutcome> ListRepositoryBranchesOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryBranchesRequest&, const ListRepositoryBranchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryBranchesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryCommitDiffResult> ListRepositoryCommitDiffOutcome;
			typedef std::future<ListRepositoryCommitDiffOutcome> ListRepositoryCommitDiffOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryCommitDiffRequest&, const ListRepositoryCommitDiffOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryCommitDiffAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryCommitsResult> ListRepositoryCommitsOutcome;
			typedef std::future<ListRepositoryCommitsOutcome> ListRepositoryCommitsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryCommitsRequest&, const ListRepositoryCommitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryCommitsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryMemberResult> ListRepositoryMemberOutcome;
			typedef std::future<ListRepositoryMemberOutcome> ListRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryMemberRequest&, const ListRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryMemberWithInheritedResult> ListRepositoryMemberWithInheritedOutcome;
			typedef std::future<ListRepositoryMemberWithInheritedOutcome> ListRepositoryMemberWithInheritedOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryMemberWithInheritedRequest&, const ListRepositoryMemberWithInheritedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryMemberWithInheritedAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTagsResult> ListRepositoryTagsOutcome;
			typedef std::future<ListRepositoryTagsOutcome> ListRepositoryTagsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryTagsRequest&, const ListRepositoryTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTagsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTreeResult> ListRepositoryTreeOutcome;
			typedef std::future<ListRepositoryTreeOutcome> ListRepositoryTreeOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryTreeRequest&, const ListRepositoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTreeAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryWebhookResult> ListRepositoryWebhookOutcome;
			typedef std::future<ListRepositoryWebhookOutcome> ListRepositoryWebhookOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryWebhookRequest&, const ListRepositoryWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryWebhookAsyncHandler;
			typedef Outcome<Error, Model::MergeMergeRequestResult> MergeMergeRequestOutcome;
			typedef std::future<MergeMergeRequestOutcome> MergeMergeRequestOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::MergeMergeRequestRequest&, const MergeMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MergeMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileResult> UpdateFileOutcome;
			typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateFileRequest&, const UpdateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupMemberResult> UpdateGroupMemberOutcome;
			typedef std::future<UpdateGroupMemberOutcome> UpdateGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateGroupMemberRequest&, const UpdateGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateMergeRequestResult> UpdateMergeRequestOutcome;
			typedef std::future<UpdateMergeRequestOutcome> UpdateMergeRequestOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateMergeRequestRequest&, const UpdateMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::UpdateMergeRequestCommentResult> UpdateMergeRequestCommentOutcome;
			typedef std::future<UpdateMergeRequestCommentOutcome> UpdateMergeRequestCommentOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateMergeRequestCommentRequest&, const UpdateMergeRequestCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMergeRequestCommentAsyncHandler;
			typedef Outcome<Error, Model::UpdateMergeRequestSettingResult> UpdateMergeRequestSettingOutcome;
			typedef std::future<UpdateMergeRequestSettingOutcome> UpdateMergeRequestSettingOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateMergeRequestSettingRequest&, const UpdateMergeRequestSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMergeRequestSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateRepositoryResult> UpdateRepositoryOutcome;
			typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateRepositoryRequest&, const UpdateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateRepositoryMemberResult> UpdateRepositoryMemberOutcome;
			typedef std::future<UpdateRepositoryMemberOutcome> UpdateRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateRepositoryMemberRequest&, const UpdateRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryMemberAsyncHandler;

			CodeupClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CodeupClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CodeupClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CodeupClient();
			AcceptMergeRequestOutcome acceptMergeRequest(const Model::AcceptMergeRequestRequest &request)const;
			void acceptMergeRequestAsync(const Model::AcceptMergeRequestRequest& request, const AcceptMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptMergeRequestOutcomeCallable acceptMergeRequestCallable(const Model::AcceptMergeRequestRequest& request) const;
			AddGroupMemberOutcome addGroupMember(const Model::AddGroupMemberRequest &request)const;
			void addGroupMemberAsync(const Model::AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupMemberOutcomeCallable addGroupMemberCallable(const Model::AddGroupMemberRequest& request) const;
			AddRepositoryMemberOutcome addRepositoryMember(const Model::AddRepositoryMemberRequest &request)const;
			void addRepositoryMemberAsync(const Model::AddRepositoryMemberRequest& request, const AddRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRepositoryMemberOutcomeCallable addRepositoryMemberCallable(const Model::AddRepositoryMemberRequest& request) const;
			AddWebhookOutcome addWebhook(const Model::AddWebhookRequest &request)const;
			void addWebhookAsync(const Model::AddWebhookRequest& request, const AddWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWebhookOutcomeCallable addWebhookCallable(const Model::AddWebhookRequest& request) const;
			CreateBranchOutcome createBranch(const Model::CreateBranchRequest &request)const;
			void createBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBranchOutcomeCallable createBranchCallable(const Model::CreateBranchRequest& request) const;
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateMergeRequestOutcome createMergeRequest(const Model::CreateMergeRequestRequest &request)const;
			void createMergeRequestAsync(const Model::CreateMergeRequestRequest& request, const CreateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeRequestOutcomeCallable createMergeRequestCallable(const Model::CreateMergeRequestRequest& request) const;
			CreateMergeRequestCommentOutcome createMergeRequestComment(const Model::CreateMergeRequestCommentRequest &request)const;
			void createMergeRequestCommentAsync(const Model::CreateMergeRequestCommentRequest& request, const CreateMergeRequestCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeRequestCommentOutcomeCallable createMergeRequestCommentCallable(const Model::CreateMergeRequestCommentRequest& request) const;
			CreateRepositoryOutcome createRepository(const Model::CreateRepositoryRequest &request)const;
			void createRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryOutcomeCallable createRepositoryCallable(const Model::CreateRepositoryRequest& request) const;
			CreateRepositoryDeployKeyOutcome createRepositoryDeployKey(const Model::CreateRepositoryDeployKeyRequest &request)const;
			void createRepositoryDeployKeyAsync(const Model::CreateRepositoryDeployKeyRequest& request, const CreateRepositoryDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryDeployKeyOutcomeCallable createRepositoryDeployKeyCallable(const Model::CreateRepositoryDeployKeyRequest& request) const;
			CreateRepositoryGroupOutcome createRepositoryGroup(const Model::CreateRepositoryGroupRequest &request)const;
			void createRepositoryGroupAsync(const Model::CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryGroupOutcomeCallable createRepositoryGroupCallable(const Model::CreateRepositoryGroupRequest& request) const;
			CreateRepositoryProtectedBranchOutcome createRepositoryProtectedBranch(const Model::CreateRepositoryProtectedBranchRequest &request)const;
			void createRepositoryProtectedBranchAsync(const Model::CreateRepositoryProtectedBranchRequest& request, const CreateRepositoryProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryProtectedBranchOutcomeCallable createRepositoryProtectedBranchCallable(const Model::CreateRepositoryProtectedBranchRequest& request) const;
			CreateSshKeyOutcome createSshKey(const Model::CreateSshKeyRequest &request)const;
			void createSshKeyAsync(const Model::CreateSshKeyRequest& request, const CreateSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSshKeyOutcomeCallable createSshKeyCallable(const Model::CreateSshKeyRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			DeleteBranchOutcome deleteBranch(const Model::DeleteBranchRequest &request)const;
			void deleteBranchAsync(const Model::DeleteBranchRequest& request, const DeleteBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBranchOutcomeCallable deleteBranchCallable(const Model::DeleteBranchRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DeleteGroupMemberOutcome deleteGroupMember(const Model::DeleteGroupMemberRequest &request)const;
			void deleteGroupMemberAsync(const Model::DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupMemberOutcomeCallable deleteGroupMemberCallable(const Model::DeleteGroupMemberRequest& request) const;
			DeleteRepositoryOutcome deleteRepository(const Model::DeleteRepositoryRequest &request)const;
			void deleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryOutcomeCallable deleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;
			DeleteRepositoryGroupOutcome deleteRepositoryGroup(const Model::DeleteRepositoryGroupRequest &request)const;
			void deleteRepositoryGroupAsync(const Model::DeleteRepositoryGroupRequest& request, const DeleteRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryGroupOutcomeCallable deleteRepositoryGroupCallable(const Model::DeleteRepositoryGroupRequest& request) const;
			DeleteRepositoryMemberOutcome deleteRepositoryMember(const Model::DeleteRepositoryMemberRequest &request)const;
			void deleteRepositoryMemberAsync(const Model::DeleteRepositoryMemberRequest& request, const DeleteRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryMemberOutcomeCallable deleteRepositoryMemberCallable(const Model::DeleteRepositoryMemberRequest& request) const;
			DeleteRepositoryProtectedBranchOutcome deleteRepositoryProtectedBranch(const Model::DeleteRepositoryProtectedBranchRequest &request)const;
			void deleteRepositoryProtectedBranchAsync(const Model::DeleteRepositoryProtectedBranchRequest& request, const DeleteRepositoryProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryProtectedBranchOutcomeCallable deleteRepositoryProtectedBranchCallable(const Model::DeleteRepositoryProtectedBranchRequest& request) const;
			DeleteRepositoryTagOutcome deleteRepositoryTag(const Model::DeleteRepositoryTagRequest &request)const;
			void deleteRepositoryTagAsync(const Model::DeleteRepositoryTagRequest& request, const DeleteRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryTagOutcomeCallable deleteRepositoryTagCallable(const Model::DeleteRepositoryTagRequest& request) const;
			DeleteRepositoryTagV2Outcome deleteRepositoryTagV2(const Model::DeleteRepositoryTagV2Request &request)const;
			void deleteRepositoryTagV2Async(const Model::DeleteRepositoryTagV2Request& request, const DeleteRepositoryTagV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryTagV2OutcomeCallable deleteRepositoryTagV2Callable(const Model::DeleteRepositoryTagV2Request& request) const;
			DeleteRepositoryWebhookOutcome deleteRepositoryWebhook(const Model::DeleteRepositoryWebhookRequest &request)const;
			void deleteRepositoryWebhookAsync(const Model::DeleteRepositoryWebhookRequest& request, const DeleteRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryWebhookOutcomeCallable deleteRepositoryWebhookCallable(const Model::DeleteRepositoryWebhookRequest& request) const;
			EnableRepositoryDeployKeyOutcome enableRepositoryDeployKey(const Model::EnableRepositoryDeployKeyRequest &request)const;
			void enableRepositoryDeployKeyAsync(const Model::EnableRepositoryDeployKeyRequest& request, const EnableRepositoryDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRepositoryDeployKeyOutcomeCallable enableRepositoryDeployKeyCallable(const Model::EnableRepositoryDeployKeyRequest& request) const;
			GetBranchInfoOutcome getBranchInfo(const Model::GetBranchInfoRequest &request)const;
			void getBranchInfoAsync(const Model::GetBranchInfoRequest& request, const GetBranchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBranchInfoOutcomeCallable getBranchInfoCallable(const Model::GetBranchInfoRequest& request) const;
			GetCodeCompletionOutcome getCodeCompletion(const Model::GetCodeCompletionRequest &request)const;
			void getCodeCompletionAsync(const Model::GetCodeCompletionRequest& request, const GetCodeCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCodeCompletionOutcomeCallable getCodeCompletionCallable(const Model::GetCodeCompletionRequest& request) const;
			GetCodeupOrganizationOutcome getCodeupOrganization(const Model::GetCodeupOrganizationRequest &request)const;
			void getCodeupOrganizationAsync(const Model::GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCodeupOrganizationOutcomeCallable getCodeupOrganizationCallable(const Model::GetCodeupOrganizationRequest& request) const;
			GetFileBlobsOutcome getFileBlobs(const Model::GetFileBlobsRequest &request)const;
			void getFileBlobsAsync(const Model::GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileBlobsOutcomeCallable getFileBlobsCallable(const Model::GetFileBlobsRequest& request) const;
			GetGroupDetailOutcome getGroupDetail(const Model::GetGroupDetailRequest &request)const;
			void getGroupDetailAsync(const Model::GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupDetailOutcomeCallable getGroupDetailCallable(const Model::GetGroupDetailRequest& request) const;
			GetMergeRequestApproveStatusOutcome getMergeRequestApproveStatus(const Model::GetMergeRequestApproveStatusRequest &request)const;
			void getMergeRequestApproveStatusAsync(const Model::GetMergeRequestApproveStatusRequest& request, const GetMergeRequestApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMergeRequestApproveStatusOutcomeCallable getMergeRequestApproveStatusCallable(const Model::GetMergeRequestApproveStatusRequest& request) const;
			GetMergeRequestDetailOutcome getMergeRequestDetail(const Model::GetMergeRequestDetailRequest &request)const;
			void getMergeRequestDetailAsync(const Model::GetMergeRequestDetailRequest& request, const GetMergeRequestDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMergeRequestDetailOutcomeCallable getMergeRequestDetailCallable(const Model::GetMergeRequestDetailRequest& request) const;
			GetMergeRequestSettingOutcome getMergeRequestSetting(const Model::GetMergeRequestSettingRequest &request)const;
			void getMergeRequestSettingAsync(const Model::GetMergeRequestSettingRequest& request, const GetMergeRequestSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMergeRequestSettingOutcomeCallable getMergeRequestSettingCallable(const Model::GetMergeRequestSettingRequest& request) const;
			GetOrganizationSecurityCenterStatusOutcome getOrganizationSecurityCenterStatus(const Model::GetOrganizationSecurityCenterStatusRequest &request)const;
			void getOrganizationSecurityCenterStatusAsync(const Model::GetOrganizationSecurityCenterStatusRequest& request, const GetOrganizationSecurityCenterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrganizationSecurityCenterStatusOutcomeCallable getOrganizationSecurityCenterStatusCallable(const Model::GetOrganizationSecurityCenterStatusRequest& request) const;
			GetProjectMemberOutcome getProjectMember(const Model::GetProjectMemberRequest &request)const;
			void getProjectMemberAsync(const Model::GetProjectMemberRequest& request, const GetProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectMemberOutcomeCallable getProjectMemberCallable(const Model::GetProjectMemberRequest& request) const;
			GetRepositoryCommitOutcome getRepositoryCommit(const Model::GetRepositoryCommitRequest &request)const;
			void getRepositoryCommitAsync(const Model::GetRepositoryCommitRequest& request, const GetRepositoryCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryCommitOutcomeCallable getRepositoryCommitCallable(const Model::GetRepositoryCommitRequest& request) const;
			GetRepositoryInfoOutcome getRepositoryInfo(const Model::GetRepositoryInfoRequest &request)const;
			void getRepositoryInfoAsync(const Model::GetRepositoryInfoRequest& request, const GetRepositoryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryInfoOutcomeCallable getRepositoryInfoCallable(const Model::GetRepositoryInfoRequest& request) const;
			GetRepositoryTagOutcome getRepositoryTag(const Model::GetRepositoryTagRequest &request)const;
			void getRepositoryTagAsync(const Model::GetRepositoryTagRequest& request, const GetRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryTagOutcomeCallable getRepositoryTagCallable(const Model::GetRepositoryTagRequest& request) const;
			GetRepositoryTagV2Outcome getRepositoryTagV2(const Model::GetRepositoryTagV2Request &request)const;
			void getRepositoryTagV2Async(const Model::GetRepositoryTagV2Request& request, const GetRepositoryTagV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryTagV2OutcomeCallable getRepositoryTagV2Callable(const Model::GetRepositoryTagV2Request& request) const;
			GetUserInfoOutcome getUserInfo(const Model::GetUserInfoRequest &request)const;
			void getUserInfoAsync(const Model::GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInfoOutcomeCallable getUserInfoCallable(const Model::GetUserInfoRequest& request) const;
			ListGroupMemberOutcome listGroupMember(const Model::ListGroupMemberRequest &request)const;
			void listGroupMemberAsync(const Model::ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupMemberOutcomeCallable listGroupMemberCallable(const Model::ListGroupMemberRequest& request) const;
			ListGroupRepositoriesOutcome listGroupRepositories(const Model::ListGroupRepositoriesRequest &request)const;
			void listGroupRepositoriesAsync(const Model::ListGroupRepositoriesRequest& request, const ListGroupRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupRepositoriesOutcomeCallable listGroupRepositoriesCallable(const Model::ListGroupRepositoriesRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListMergeRequestCommentsOutcome listMergeRequestComments(const Model::ListMergeRequestCommentsRequest &request)const;
			void listMergeRequestCommentsAsync(const Model::ListMergeRequestCommentsRequest& request, const ListMergeRequestCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestCommentsOutcomeCallable listMergeRequestCommentsCallable(const Model::ListMergeRequestCommentsRequest& request) const;
			ListMergeRequestsOutcome listMergeRequests(const Model::ListMergeRequestsRequest &request)const;
			void listMergeRequestsAsync(const Model::ListMergeRequestsRequest& request, const ListMergeRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMergeRequestsOutcomeCallable listMergeRequestsCallable(const Model::ListMergeRequestsRequest& request) const;
			ListOrganizationSecurityScoresOutcome listOrganizationSecurityScores(const Model::ListOrganizationSecurityScoresRequest &request)const;
			void listOrganizationSecurityScoresAsync(const Model::ListOrganizationSecurityScoresRequest& request, const ListOrganizationSecurityScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationSecurityScoresOutcomeCallable listOrganizationSecurityScoresCallable(const Model::ListOrganizationSecurityScoresRequest& request) const;
			ListOrganizationsOutcome listOrganizations(const Model::ListOrganizationsRequest &request)const;
			void listOrganizationsAsync(const Model::ListOrganizationsRequest& request, const ListOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationsOutcomeCallable listOrganizationsCallable(const Model::ListOrganizationsRequest& request) const;
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
			ListRepositoryMemberOutcome listRepositoryMember(const Model::ListRepositoryMemberRequest &request)const;
			void listRepositoryMemberAsync(const Model::ListRepositoryMemberRequest& request, const ListRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryMemberOutcomeCallable listRepositoryMemberCallable(const Model::ListRepositoryMemberRequest& request) const;
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
			MergeMergeRequestOutcome mergeMergeRequest(const Model::MergeMergeRequestRequest &request)const;
			void mergeMergeRequestAsync(const Model::MergeMergeRequestRequest& request, const MergeMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MergeMergeRequestOutcomeCallable mergeMergeRequestCallable(const Model::MergeMergeRequestRequest& request) const;
			UpdateFileOutcome updateFile(const Model::UpdateFileRequest &request)const;
			void updateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileOutcomeCallable updateFileCallable(const Model::UpdateFileRequest& request) const;
			UpdateGroupMemberOutcome updateGroupMember(const Model::UpdateGroupMemberRequest &request)const;
			void updateGroupMemberAsync(const Model::UpdateGroupMemberRequest& request, const UpdateGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupMemberOutcomeCallable updateGroupMemberCallable(const Model::UpdateGroupMemberRequest& request) const;
			UpdateMergeRequestOutcome updateMergeRequest(const Model::UpdateMergeRequestRequest &request)const;
			void updateMergeRequestAsync(const Model::UpdateMergeRequestRequest& request, const UpdateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMergeRequestOutcomeCallable updateMergeRequestCallable(const Model::UpdateMergeRequestRequest& request) const;
			UpdateMergeRequestCommentOutcome updateMergeRequestComment(const Model::UpdateMergeRequestCommentRequest &request)const;
			void updateMergeRequestCommentAsync(const Model::UpdateMergeRequestCommentRequest& request, const UpdateMergeRequestCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMergeRequestCommentOutcomeCallable updateMergeRequestCommentCallable(const Model::UpdateMergeRequestCommentRequest& request) const;
			UpdateMergeRequestSettingOutcome updateMergeRequestSetting(const Model::UpdateMergeRequestSettingRequest &request)const;
			void updateMergeRequestSettingAsync(const Model::UpdateMergeRequestSettingRequest& request, const UpdateMergeRequestSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMergeRequestSettingOutcomeCallable updateMergeRequestSettingCallable(const Model::UpdateMergeRequestSettingRequest& request) const;
			UpdateRepositoryOutcome updateRepository(const Model::UpdateRepositoryRequest &request)const;
			void updateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRepositoryOutcomeCallable updateRepositoryCallable(const Model::UpdateRepositoryRequest& request) const;
			UpdateRepositoryMemberOutcome updateRepositoryMember(const Model::UpdateRepositoryMemberRequest &request)const;
			void updateRepositoryMemberAsync(const Model::UpdateRepositoryMemberRequest& request, const UpdateRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRepositoryMemberOutcomeCallable updateRepositoryMemberCallable(const Model::UpdateRepositoryMemberRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CODEUP_CODEUPCLIENT_H_
