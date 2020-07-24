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
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateRepositoryRequest.h"
#include "model/CreateRepositoryResult.h"
#include "model/CreateRepositoryGroupRequest.h"
#include "model/CreateRepositoryGroupResult.h"
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
#include "model/GetCodeupOrganizationRequest.h"
#include "model/GetCodeupOrganizationResult.h"
#include "model/GetFileBlobsRequest.h"
#include "model/GetFileBlobsResult.h"
#include "model/ListGroupMemberRequest.h"
#include "model/ListGroupMemberResult.h"
#include "model/ListRepositoryMemberRequest.h"
#include "model/ListRepositoryMemberResult.h"
#include "model/ListRepositoryTreeRequest.h"
#include "model/ListRepositoryTreeResult.h"
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
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryResult> CreateRepositoryOutcome;
			typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryRequest&, const CreateRepositoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
			typedef Outcome<Error, Model::CreateRepositoryGroupResult> CreateRepositoryGroupOutcome;
			typedef std::future<CreateRepositoryGroupOutcome> CreateRepositoryGroupOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::CreateRepositoryGroupRequest&, const CreateRepositoryGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryGroupAsyncHandler;
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
			typedef Outcome<Error, Model::GetCodeupOrganizationResult> GetCodeupOrganizationOutcome;
			typedef std::future<GetCodeupOrganizationOutcome> GetCodeupOrganizationOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetCodeupOrganizationRequest&, const GetCodeupOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeupOrganizationAsyncHandler;
			typedef Outcome<Error, Model::GetFileBlobsResult> GetFileBlobsOutcome;
			typedef std::future<GetFileBlobsOutcome> GetFileBlobsOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::GetFileBlobsRequest&, const GetFileBlobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileBlobsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupMemberResult> ListGroupMemberOutcome;
			typedef std::future<ListGroupMemberOutcome> ListGroupMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListGroupMemberRequest&, const ListGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryMemberResult> ListRepositoryMemberOutcome;
			typedef std::future<ListRepositoryMemberOutcome> ListRepositoryMemberOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryMemberRequest&, const ListRepositoryMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryMemberAsyncHandler;
			typedef Outcome<Error, Model::ListRepositoryTreeResult> ListRepositoryTreeOutcome;
			typedef std::future<ListRepositoryTreeOutcome> ListRepositoryTreeOutcomeCallable;
			typedef std::function<void(const CodeupClient*, const Model::ListRepositoryTreeRequest&, const ListRepositoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRepositoryTreeAsyncHandler;
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
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateRepositoryOutcome createRepository(const Model::CreateRepositoryRequest &request)const;
			void createRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryOutcomeCallable createRepositoryCallable(const Model::CreateRepositoryRequest& request) const;
			CreateRepositoryGroupOutcome createRepositoryGroup(const Model::CreateRepositoryGroupRequest &request)const;
			void createRepositoryGroupAsync(const Model::CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRepositoryGroupOutcomeCallable createRepositoryGroupCallable(const Model::CreateRepositoryGroupRequest& request) const;
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
			GetCodeupOrganizationOutcome getCodeupOrganization(const Model::GetCodeupOrganizationRequest &request)const;
			void getCodeupOrganizationAsync(const Model::GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCodeupOrganizationOutcomeCallable getCodeupOrganizationCallable(const Model::GetCodeupOrganizationRequest& request) const;
			GetFileBlobsOutcome getFileBlobs(const Model::GetFileBlobsRequest &request)const;
			void getFileBlobsAsync(const Model::GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileBlobsOutcomeCallable getFileBlobsCallable(const Model::GetFileBlobsRequest& request) const;
			ListGroupMemberOutcome listGroupMember(const Model::ListGroupMemberRequest &request)const;
			void listGroupMemberAsync(const Model::ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupMemberOutcomeCallable listGroupMemberCallable(const Model::ListGroupMemberRequest& request) const;
			ListRepositoryMemberOutcome listRepositoryMember(const Model::ListRepositoryMemberRequest &request)const;
			void listRepositoryMemberAsync(const Model::ListRepositoryMemberRequest& request, const ListRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryMemberOutcomeCallable listRepositoryMemberCallable(const Model::ListRepositoryMemberRequest& request) const;
			ListRepositoryTreeOutcome listRepositoryTree(const Model::ListRepositoryTreeRequest &request)const;
			void listRepositoryTreeAsync(const Model::ListRepositoryTreeRequest& request, const ListRepositoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRepositoryTreeOutcomeCallable listRepositoryTreeCallable(const Model::ListRepositoryTreeRequest& request) const;
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
