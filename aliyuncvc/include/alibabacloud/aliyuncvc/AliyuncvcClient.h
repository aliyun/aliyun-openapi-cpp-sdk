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

#ifndef ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_
#define ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AliyuncvcExport.h"
#include "model/ActiveMeetingRequest.h"
#include "model/ActiveMeetingResult.h"
#include "model/CreateEvaluationRequest.h"
#include "model/CreateEvaluationResult.h"
#include "model/CreateMeetingRequest.h"
#include "model/CreateMeetingResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/DeleteMeetingRequest.h"
#include "model/DeleteMeetingResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/GetMeetingRequest.h"
#include "model/GetMeetingResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/JoinMeetingRequest.h"
#include "model/JoinMeetingResult.h"
#include "model/ListEvaluationsRequest.h"
#include "model/ListEvaluationsResult.h"
#include "model/ListIsvStatisticsRequest.h"
#include "model/ListIsvStatisticsResult.h"
#include "model/ListMembersRequest.h"
#include "model/ListMembersResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"


namespace AlibabaCloud
{
	namespace Aliyuncvc
	{
		class ALIBABACLOUD_ALIYUNCVC_EXPORT AliyuncvcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActiveMeetingResult> ActiveMeetingOutcome;
			typedef std::future<ActiveMeetingOutcome> ActiveMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ActiveMeetingRequest&, const ActiveMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveMeetingAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluationResult> CreateEvaluationOutcome;
			typedef std::future<CreateEvaluationOutcome> CreateEvaluationOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateEvaluationRequest&, const CreateEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluationAsyncHandler;
			typedef Outcome<Error, Model::CreateMeetingResult> CreateMeetingOutcome;
			typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateMeetingRequest&, const CreateMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeetingAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteMeetingResult> DeleteMeetingOutcome;
			typedef std::future<DeleteMeetingOutcome> DeleteMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteMeetingRequest&, const DeleteMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMeetingAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::GetMeetingResult> GetMeetingOutcome;
			typedef std::future<GetMeetingOutcome> GetMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetMeetingRequest&, const GetMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMeetingAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::JoinMeetingResult> JoinMeetingOutcome;
			typedef std::future<JoinMeetingOutcome> JoinMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::JoinMeetingRequest&, const JoinMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinMeetingAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationsResult> ListEvaluationsOutcome;
			typedef std::future<ListEvaluationsOutcome> ListEvaluationsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListEvaluationsRequest&, const ListEvaluationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationsAsyncHandler;
			typedef Outcome<Error, Model::ListIsvStatisticsResult> ListIsvStatisticsOutcome;
			typedef std::future<ListIsvStatisticsOutcome> ListIsvStatisticsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListIsvStatisticsRequest&, const ListIsvStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIsvStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListMembersResult> ListMembersOutcome;
			typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListMembersRequest&, const ListMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMembersAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;

			AliyuncvcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AliyuncvcClient();
			ActiveMeetingOutcome activeMeeting(const Model::ActiveMeetingRequest &request)const;
			void activeMeetingAsync(const Model::ActiveMeetingRequest& request, const ActiveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveMeetingOutcomeCallable activeMeetingCallable(const Model::ActiveMeetingRequest& request) const;
			CreateEvaluationOutcome createEvaluation(const Model::CreateEvaluationRequest &request)const;
			void createEvaluationAsync(const Model::CreateEvaluationRequest& request, const CreateEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluationOutcomeCallable createEvaluationCallable(const Model::CreateEvaluationRequest& request) const;
			CreateMeetingOutcome createMeeting(const Model::CreateMeetingRequest &request)const;
			void createMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMeetingOutcomeCallable createMeetingCallable(const Model::CreateMeetingRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			DeleteMeetingOutcome deleteMeeting(const Model::DeleteMeetingRequest &request)const;
			void deleteMeetingAsync(const Model::DeleteMeetingRequest& request, const DeleteMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMeetingOutcomeCallable deleteMeetingCallable(const Model::DeleteMeetingRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			GetMeetingOutcome getMeeting(const Model::GetMeetingRequest &request)const;
			void getMeetingAsync(const Model::GetMeetingRequest& request, const GetMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMeetingOutcomeCallable getMeetingCallable(const Model::GetMeetingRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			JoinMeetingOutcome joinMeeting(const Model::JoinMeetingRequest &request)const;
			void joinMeetingAsync(const Model::JoinMeetingRequest& request, const JoinMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinMeetingOutcomeCallable joinMeetingCallable(const Model::JoinMeetingRequest& request) const;
			ListEvaluationsOutcome listEvaluations(const Model::ListEvaluationsRequest &request)const;
			void listEvaluationsAsync(const Model::ListEvaluationsRequest& request, const ListEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationsOutcomeCallable listEvaluationsCallable(const Model::ListEvaluationsRequest& request) const;
			ListIsvStatisticsOutcome listIsvStatistics(const Model::ListIsvStatisticsRequest &request)const;
			void listIsvStatisticsAsync(const Model::ListIsvStatisticsRequest& request, const ListIsvStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIsvStatisticsOutcomeCallable listIsvStatisticsCallable(const Model::ListIsvStatisticsRequest& request) const;
			ListMembersOutcome listMembers(const Model::ListMembersRequest &request)const;
			void listMembersAsync(const Model::ListMembersRequest& request, const ListMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMembersOutcomeCallable listMembersCallable(const Model::ListMembersRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_
