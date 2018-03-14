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

#ifndef ALIBABACLOUD_CCC_CCCCLIENT_H_
#define ALIBABACLOUD_CCC_CCCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CCCExport.h"
#include "model/ListRecordingsByContactIdRequest.h"
#include "model/ListRecordingsByContactIdResult.h"
#include "model/ListUsersOfSkillGroupRequest.h"
#include "model/ListUsersOfSkillGroupResult.h"
#include "model/DeleteSkillGroupRequest.h"
#include "model/DeleteSkillGroupResult.h"
#include "model/ModifyPhoneNumberRequest.h"
#include "model/ModifyPhoneNumberResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListSkillGroupsRequest.h"
#include "model/ListSkillGroupsResult.h"
#include "model/ListSkillGroupsOfUserRequest.h"
#include "model/ListSkillGroupsOfUserResult.h"
#include "model/RemovePhoneNumberRequest.h"
#include "model/RemovePhoneNumberResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/AddPhoneNumberRequest.h"
#include "model/AddPhoneNumberResult.h"
#include "model/ListRecordingsRequest.h"
#include "model/ListRecordingsResult.h"
#include "model/GetConfigRequest.h"
#include "model/GetConfigResult.h"
#include "model/DownloadRecordingRequest.h"
#include "model/DownloadRecordingResult.h"
#include "model/ListPhoneNumbersRequest.h"
#include "model/ListPhoneNumbersResult.h"
#include "model/RefreshTokenRequest.h"
#include "model/RefreshTokenResult.h"
#include "model/RequestLoginInfoRequest.h"
#include "model/RequestLoginInfoResult.h"
#include "model/GetServiceExtensionsRequest.h"
#include "model/GetServiceExtensionsResult.h"
#include "model/ListContactFlowsRequest.h"
#include "model/ListContactFlowsResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ListRecordingsByContactIdResult> ListRecordingsByContactIdOutcome;			
			typedef std::future<ListRecordingsByContactIdOutcome> ListRecordingsByContactIdOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsByContactIdRequest&, const ListRecordingsByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsByContactIdAsyncHandler;
			typedef Outcome<Error, Model::ListUsersOfSkillGroupResult> ListUsersOfSkillGroupOutcome;			
			typedef std::future<ListUsersOfSkillGroupOutcome> ListUsersOfSkillGroupOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListUsersOfSkillGroupRequest&, const ListUsersOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupResult> DeleteSkillGroupOutcome;			
			typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::DeleteSkillGroupRequest&, const DeleteSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneNumberResult> ModifyPhoneNumberOutcome;			
			typedef std::future<ModifyPhoneNumberOutcome> ModifyPhoneNumberOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ModifyPhoneNumberRequest&, const ModifyPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;			
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsResult> ListSkillGroupsOutcome;			
			typedef std::future<ListSkillGroupsOutcome> ListSkillGroupsOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsRequest&, const ListSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsOfUserResult> ListSkillGroupsOfUserOutcome;			
			typedef std::future<ListSkillGroupsOfUserOutcome> ListSkillGroupsOfUserOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsOfUserRequest&, const ListSkillGroupsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsOfUserAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumberResult> RemovePhoneNumberOutcome;			
			typedef std::future<RemovePhoneNumberOutcome> RemovePhoneNumberOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumberRequest&, const RemovePhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;			
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneNumberResult> AddPhoneNumberOutcome;			
			typedef std::future<AddPhoneNumberOutcome> AddPhoneNumberOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::AddPhoneNumberRequest&, const AddPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingsResult> ListRecordingsOutcome;			
			typedef std::future<ListRecordingsOutcome> ListRecordingsOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsRequest&, const ListRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsAsyncHandler;
			typedef Outcome<Error, Model::GetConfigResult> GetConfigOutcome;			
			typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::GetConfigRequest&, const GetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigAsyncHandler;
			typedef Outcome<Error, Model::DownloadRecordingResult> DownloadRecordingOutcome;			
			typedef std::future<DownloadRecordingOutcome> DownloadRecordingOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::DownloadRecordingRequest&, const DownloadRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadRecordingAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneNumbersResult> ListPhoneNumbersOutcome;			
			typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListPhoneNumbersRequest&, const ListPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::RefreshTokenResult> RefreshTokenOutcome;			
			typedef std::future<RefreshTokenOutcome> RefreshTokenOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::RefreshTokenRequest&, const RefreshTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshTokenAsyncHandler;
			typedef Outcome<Error, Model::RequestLoginInfoResult> RequestLoginInfoOutcome;			
			typedef std::future<RequestLoginInfoOutcome> RequestLoginInfoOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::RequestLoginInfoRequest&, const RequestLoginInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestLoginInfoAsyncHandler;
			typedef Outcome<Error, Model::GetServiceExtensionsResult> GetServiceExtensionsOutcome;			
			typedef std::future<GetServiceExtensionsOutcome> GetServiceExtensionsOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::GetServiceExtensionsRequest&, const GetServiceExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceExtensionsAsyncHandler;
			typedef Outcome<Error, Model::ListContactFlowsResult> ListContactFlowsOutcome;			
			typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListContactFlowsRequest&, const ListContactFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;			
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;			
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;			
			typedef std::function<void(const CCCClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
            ListRecordingsByContactIdOutcome listRecordingsByContactId(const Model::ListRecordingsByContactIdRequest &request)const;
            void listRecordingsByContactIdAsync(const Model::ListRecordingsByContactIdRequest& request, const ListRecordingsByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListRecordingsByContactIdOutcomeCallable listRecordingsByContactIdCallable(const Model::ListRecordingsByContactIdRequest& request) const;
            ListUsersOfSkillGroupOutcome listUsersOfSkillGroup(const Model::ListUsersOfSkillGroupRequest &request)const;
            void listUsersOfSkillGroupAsync(const Model::ListUsersOfSkillGroupRequest& request, const ListUsersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListUsersOfSkillGroupOutcomeCallable listUsersOfSkillGroupCallable(const Model::ListUsersOfSkillGroupRequest& request) const;
            DeleteSkillGroupOutcome deleteSkillGroup(const Model::DeleteSkillGroupRequest &request)const;
            void deleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteSkillGroupOutcomeCallable deleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;
            ModifyPhoneNumberOutcome modifyPhoneNumber(const Model::ModifyPhoneNumberRequest &request)const;
            void modifyPhoneNumberAsync(const Model::ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyPhoneNumberOutcomeCallable modifyPhoneNumberCallable(const Model::ModifyPhoneNumberRequest& request) const;
            ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
            void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
            ListSkillGroupsOutcome listSkillGroups(const Model::ListSkillGroupsRequest &request)const;
            void listSkillGroupsAsync(const Model::ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListSkillGroupsOutcomeCallable listSkillGroupsCallable(const Model::ListSkillGroupsRequest& request) const;
            ListSkillGroupsOfUserOutcome listSkillGroupsOfUser(const Model::ListSkillGroupsOfUserRequest &request)const;
            void listSkillGroupsOfUserAsync(const Model::ListSkillGroupsOfUserRequest& request, const ListSkillGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListSkillGroupsOfUserOutcomeCallable listSkillGroupsOfUserCallable(const Model::ListSkillGroupsOfUserRequest& request) const;
            RemovePhoneNumberOutcome removePhoneNumber(const Model::RemovePhoneNumberRequest &request)const;
            void removePhoneNumberAsync(const Model::RemovePhoneNumberRequest& request, const RemovePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemovePhoneNumberOutcomeCallable removePhoneNumberCallable(const Model::RemovePhoneNumberRequest& request) const;
            ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
            void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
            AddPhoneNumberOutcome addPhoneNumber(const Model::AddPhoneNumberRequest &request)const;
            void addPhoneNumberAsync(const Model::AddPhoneNumberRequest& request, const AddPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddPhoneNumberOutcomeCallable addPhoneNumberCallable(const Model::AddPhoneNumberRequest& request) const;
            ListRecordingsOutcome listRecordings(const Model::ListRecordingsRequest &request)const;
            void listRecordingsAsync(const Model::ListRecordingsRequest& request, const ListRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListRecordingsOutcomeCallable listRecordingsCallable(const Model::ListRecordingsRequest& request) const;
            GetConfigOutcome getConfig(const Model::GetConfigRequest &request)const;
            void getConfigAsync(const Model::GetConfigRequest& request, const GetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetConfigOutcomeCallable getConfigCallable(const Model::GetConfigRequest& request) const;
            DownloadRecordingOutcome downloadRecording(const Model::DownloadRecordingRequest &request)const;
            void downloadRecordingAsync(const Model::DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DownloadRecordingOutcomeCallable downloadRecordingCallable(const Model::DownloadRecordingRequest& request) const;
            ListPhoneNumbersOutcome listPhoneNumbers(const Model::ListPhoneNumbersRequest &request)const;
            void listPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListPhoneNumbersOutcomeCallable listPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;
            RefreshTokenOutcome refreshToken(const Model::RefreshTokenRequest &request)const;
            void refreshTokenAsync(const Model::RefreshTokenRequest& request, const RefreshTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RefreshTokenOutcomeCallable refreshTokenCallable(const Model::RefreshTokenRequest& request) const;
            RequestLoginInfoOutcome requestLoginInfo(const Model::RequestLoginInfoRequest &request)const;
            void requestLoginInfoAsync(const Model::RequestLoginInfoRequest& request, const RequestLoginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RequestLoginInfoOutcomeCallable requestLoginInfoCallable(const Model::RequestLoginInfoRequest& request) const;
            GetServiceExtensionsOutcome getServiceExtensions(const Model::GetServiceExtensionsRequest &request)const;
            void getServiceExtensionsAsync(const Model::GetServiceExtensionsRequest& request, const GetServiceExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetServiceExtensionsOutcomeCallable getServiceExtensionsCallable(const Model::GetServiceExtensionsRequest& request) const;
            ListContactFlowsOutcome listContactFlows(const Model::ListContactFlowsRequest &request)const;
            void listContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListContactFlowsOutcomeCallable listContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;
            ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
            void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
            GetUserOutcome getUser(const Model::GetUserRequest &request)const;
            void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
