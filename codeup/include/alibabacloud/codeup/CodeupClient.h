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
#include "model/CreateRepositoryRequest.h"
#include "model/CreateRepositoryResult.h"
#include "model/CreateRepositoryGroupRequest.h"
#include "model/CreateRepositoryGroupResult.h"
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
#include "model/DeleteRepositoryTagRequest.h"
#include "model/DeleteRepositoryTagResult.h"
#include "model/GetBranchInfoRequest.h"
#include "model/GetBranchInfoResult.h"
#include "model/GetCodeupOrganizationRequest.h"
#include "model/GetCodeupOrganizationResult.h"
#include "model/GetFileBlobsRequest.h"
#include "model/GetFileBlobsResult.h"
#include "model/GetGroupDetailRequest.h"
#include "model/GetGroupDetailResult.h"
#include "model/GetProjectMemberRequest.h"
#include "model/GetProjectMemberResult.h"
#include "model/GetRepositoryInfoRequest.h"
#include "model/GetRepositoryInfoResult.h"
#include "model/GetRepositoryTagRequest.h"
#include "model/GetRepositoryTagResult.h"
#include "model/ListGroupMemberRequest.h"
#include "model/ListGroupMemberResult.h"
#include "model/ListGroupRepositoriesRequest.h"
#include "model/ListGroupRepositoriesResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListRepositoryBranchesRequest.h"
#include "model/ListRepositoryBranchesResult.h"
#include "model/ListRepositoryMemberRequest.h"
#include "model/ListRepositoryMemberResult.h"
#include "model/ListRepositoryTagsRequest.h"
#include "model/ListRepositoryTagsResult.h"
#include "model/ListRepositoryTreeRequest.h"
#include "model/ListRepositoryTreeResult.h"
#include "model/MergeMergeRequestRequest.h"
#include "model/MergeMergeRequestResult.h"
#include "model/UpdateFileRequest.h"
#include "model/UpdateFileResult.h"
#include "model/UpdateGroupMemberRequest.h"
#include "model/UpdateGroupMemberResult.h"
#include "model/UpdateRepositoryMemberRequest.h"
#include "model/UpdateRepositoryMemberResult.h"


namespace AlibabaCloud
{
	namespace Codeup
	{
		class ALIBABACLOUD_CODEUP_EXPORT CodeupClient : public RoaServiceClient
		{
		public:
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
			typedef Outcome<Error, Model::CreateRepositoryResult> CreateRepositoryOutcome;
			typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryRequest&, const CreateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryGroupResult> CreateRepositoryGroupOutcome;
			typedef std::future<CreateRepositoryGroupOutcome> CreateRepositoryGroupOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryGroupRequest&, const CreateRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryGroupAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteRepositoryTagResult> DeleteRepositoryTagOutcome;
			typedef std::future<DeleteRepositoryTagOutcome> DeleteRepositoryTagOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::DeleteRepositoryTagRequest&, const DeleteRepositoryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryTagAsyncHandler;
			typedef Outcome<Error, Model::GetBranchInfoResult> GetBranchInfoOutcome;
			typedef std::future<GetBranchInfoOutcome> GetBranchInfoOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetBranchInfoRequest&, const GetBranchInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBranchInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCodeupOrganizationResult> GetCodeupOrganizationOutcome;
			typedef std::future<GetCodeupOrganizationOutcome> GetCodeupOrganizationOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetCodeupOrganizationRequest&, const GetCodeupOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeupOrganizationAsyncHandler;
			typedef Outcome<Error, Model::GetFileBlobsResult> GetFileBlobsOutcome;
			typedef std::future<GetFileBlobsOutcome> GetFileBlobsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetFileBlobsRequest&, const GetFileBlobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileBlobsAsyncHandler;
			typedef Outcome<Error, Model::GetGroupDetailResult> GetGroupDetailOutcome;
			typedef std::future<GetGroupDetailOutcome> GetGroupDetailOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetGroupDetailRequest&, const GetGroupDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupDetailAsyncHandler;
			typedef Outcome<Error, Model::GetProjectMemberResult> GetProjectMemberOutcome;
			typedef std::future<GetProjectMemberOutcome> GetProjectMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetProjectMemberRequest&, const GetProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryInfoResult> GetRepositoryInfoOutcome;
			typedef std::future<GetRepositoryInfoOutcome> GetRepositoryInfoOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryInfoRequest&, const GetRepositoryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryInfoAsyncHandler;
			typedef Outcome<Error, Model::GetRepositoryTagResult> GetRepositoryTagOutcome;
			typedef std::future<GetRepositoryTagOutcome> GetRepositoryTagOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetRepositoryTagRequest&, const GetRepositoryTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepositoryTagAsyncHandler;
			typedef Outcome<Error, Model::ListGroupMemberResult> ListGroupMemberOutcome;
			typedef std::future<ListGroupMemberOutcome> ListGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupMemberRequest&, const ListGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::ListGroupRepositoriesResult> ListGroupRepositoriesOutcome;
			typedef std::future<ListGroupRepositoriesOutcome> ListGroupRepositoriesOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupRepositoriesRequest&, const ListGroupRepositoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupRepositoriesAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryBranchesResult> ListRepositoryBranchesOutcome;
			typedef std::future<ListRepositoryBranchesOutcome> ListRepositoryBranchesOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryBranchesRequest&, const ListRepositoryBranchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryBranchesAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryMemberResult> ListRepositoryMemberOutcome;
			typedef std::future<ListRepositoryMemberOutcome> ListRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryMemberRequest&, const ListRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTagsResult> ListRepositoryTagsOutcome;
			typedef std::future<ListRepositoryTagsOutcome> ListRepositoryTagsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryTagsRequest&, const ListRepositoryTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTagsAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTreeResult> ListRepositoryTreeOutcome;
			typedef std::future<ListRepositoryTreeOutcome> ListRepositoryTreeOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryTreeRequest&, const ListRepositoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTreeAsyncHandler;
			typedef Outcome<Error, Model::MergeMergeRequestResult> MergeMergeRequestOutcome;
			typedef std::future<MergeMergeRequestOutcome> MergeMergeRequestOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::MergeMergeRequestRequest&, const MergeMergeRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MergeMergeRequestAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileResult> UpdateFileOutcome;
			typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateFileRequest&, const UpdateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupMemberResult> UpdateGroupMemberOutcome;
			typedef std::future<UpdateGroupMemberOutcome> UpdateGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateGroupMemberRequest&, const UpdateGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateRepositoryMemberResult> UpdateRepositoryMemberOutcome;
			typedef std::future<UpdateRepositoryMemberOutcome> UpdateRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::UpdateRepositoryMemberRequest&, const UpdateRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryMemberAsyncHandler;

			CodeupClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CodeupClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CodeupClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CodeupClient();
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
			CreateRepositoryOutcome createRepository(const Model::CreateRepositoryRequest &request)const;
			void createRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryOutcomeCallable createRepositoryCallable(const Model::CreateRepositoryRequest& request) const;
			CreateRepositoryGroupOutcome createRepositoryGroup(const Model::CreateRepositoryGroupRequest &request)const;
			void createRepositoryGroupAsync(const Model::CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryGroupOutcomeCallable createRepositoryGroupCallable(const Model::CreateRepositoryGroupRequest& request) const;
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
			DeleteRepositoryTagOutcome deleteRepositoryTag(const Model::DeleteRepositoryTagRequest &request)const;
			void deleteRepositoryTagAsync(const Model::DeleteRepositoryTagRequest& request, const DeleteRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRepositoryTagOutcomeCallable deleteRepositoryTagCallable(const Model::DeleteRepositoryTagRequest& request) const;
			GetBranchInfoOutcome getBranchInfo(const Model::GetBranchInfoRequest &request)const;
			void getBranchInfoAsync(const Model::GetBranchInfoRequest& request, const GetBranchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBranchInfoOutcomeCallable getBranchInfoCallable(const Model::GetBranchInfoRequest& request) const;
			GetCodeupOrganizationOutcome getCodeupOrganization(const Model::GetCodeupOrganizationRequest &request)const;
			void getCodeupOrganizationAsync(const Model::GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCodeupOrganizationOutcomeCallable getCodeupOrganizationCallable(const Model::GetCodeupOrganizationRequest& request) const;
			GetFileBlobsOutcome getFileBlobs(const Model::GetFileBlobsRequest &request)const;
			void getFileBlobsAsync(const Model::GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileBlobsOutcomeCallable getFileBlobsCallable(const Model::GetFileBlobsRequest& request) const;
			GetGroupDetailOutcome getGroupDetail(const Model::GetGroupDetailRequest &request)const;
			void getGroupDetailAsync(const Model::GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupDetailOutcomeCallable getGroupDetailCallable(const Model::GetGroupDetailRequest& request) const;
			GetProjectMemberOutcome getProjectMember(const Model::GetProjectMemberRequest &request)const;
			void getProjectMemberAsync(const Model::GetProjectMemberRequest& request, const GetProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectMemberOutcomeCallable getProjectMemberCallable(const Model::GetProjectMemberRequest& request) const;
			GetRepositoryInfoOutcome getRepositoryInfo(const Model::GetRepositoryInfoRequest &request)const;
			void getRepositoryInfoAsync(const Model::GetRepositoryInfoRequest& request, const GetRepositoryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryInfoOutcomeCallable getRepositoryInfoCallable(const Model::GetRepositoryInfoRequest& request) const;
			GetRepositoryTagOutcome getRepositoryTag(const Model::GetRepositoryTagRequest &request)const;
			void getRepositoryTagAsync(const Model::GetRepositoryTagRequest& request, const GetRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepositoryTagOutcomeCallable getRepositoryTagCallable(const Model::GetRepositoryTagRequest& request) const;
			ListGroupMemberOutcome listGroupMember(const Model::ListGroupMemberRequest &request)const;
			void listGroupMemberAsync(const Model::ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupMemberOutcomeCallable listGroupMemberCallable(const Model::ListGroupMemberRequest& request) const;
			ListGroupRepositoriesOutcome listGroupRepositories(const Model::ListGroupRepositoriesRequest &request)const;
			void listGroupRepositoriesAsync(const Model::ListGroupRepositoriesRequest& request, const ListGroupRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupRepositoriesOutcomeCallable listGroupRepositoriesCallable(const Model::ListGroupRepositoriesRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListRepositoryBranchesOutcome listRepositoryBranches(const Model::ListRepositoryBranchesRequest &request)const;
			void listRepositoryBranchesAsync(const Model::ListRepositoryBranchesRequest& request, const ListRepositoryBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryBranchesOutcomeCallable listRepositoryBranchesCallable(const Model::ListRepositoryBranchesRequest& request) const;
			ListRepositoryMemberOutcome listRepositoryMember(const Model::ListRepositoryMemberRequest &request)const;
			void listRepositoryMemberAsync(const Model::ListRepositoryMemberRequest& request, const ListRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryMemberOutcomeCallable listRepositoryMemberCallable(const Model::ListRepositoryMemberRequest& request) const;
			ListRepositoryTagsOutcome listRepositoryTags(const Model::ListRepositoryTagsRequest &request)const;
			void listRepositoryTagsAsync(const Model::ListRepositoryTagsRequest& request, const ListRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryTagsOutcomeCallable listRepositoryTagsCallable(const Model::ListRepositoryTagsRequest& request) const;
			ListRepositoryTreeOutcome listRepositoryTree(const Model::ListRepositoryTreeRequest &request)const;
			void listRepositoryTreeAsync(const Model::ListRepositoryTreeRequest& request, const ListRepositoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryTreeOutcomeCallable listRepositoryTreeCallable(const Model::ListRepositoryTreeRequest& request) const;
			MergeMergeRequestOutcome mergeMergeRequest(const Model::MergeMergeRequestRequest &request)const;
			void mergeMergeRequestAsync(const Model::MergeMergeRequestRequest& request, const MergeMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MergeMergeRequestOutcomeCallable mergeMergeRequestCallable(const Model::MergeMergeRequestRequest& request) const;
			UpdateFileOutcome updateFile(const Model::UpdateFileRequest &request)const;
			void updateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileOutcomeCallable updateFileCallable(const Model::UpdateFileRequest& request) const;
			UpdateGroupMemberOutcome updateGroupMember(const Model::UpdateGroupMemberRequest &request)const;
			void updateGroupMemberAsync(const Model::UpdateGroupMemberRequest& request, const UpdateGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupMemberOutcomeCallable updateGroupMemberCallable(const Model::UpdateGroupMemberRequest& request) const;
			UpdateRepositoryMemberOutcome updateRepositoryMember(const Model::UpdateRepositoryMemberRequest &request)const;
			void updateRepositoryMemberAsync(const Model::UpdateRepositoryMemberRequest& request, const UpdateRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRepositoryMemberOutcomeCallable updateRepositoryMemberCallable(const Model::UpdateRepositoryMemberRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CODEUP_CODEUPCLIENT_H_
