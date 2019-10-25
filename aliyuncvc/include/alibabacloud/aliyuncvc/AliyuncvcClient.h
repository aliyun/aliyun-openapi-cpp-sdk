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
#include "model/ActiveMeetingCodeRequest.h"
#include "model/ActiveMeetingCodeResult.h"
#include "model/CheckMeetingCodeRequest.h"
#include "model/CheckMeetingCodeResult.h"
#include "model/CreateMeetingRequest.h"
#include "model/CreateMeetingResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateUserEvaluationsRequest.h"
#include "model/CreateUserEvaluationsResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/ListCommoditiesRequest.h"
#include "model/ListCommoditiesResult.h"
#include "model/QueryIsvUserInfoRequest.h"
#include "model/QueryIsvUserInfoResult.h"
#include "model/QueryMeetingInfoRequest.h"
#include "model/QueryMeetingInfoResult.h"
#include "model/QueryMemberRecordRequest.h"
#include "model/QueryMemberRecordResult.h"
#include "model/QueryStatisticsRequest.h"
#include "model/QueryStatisticsResult.h"
#include "model/QueryUserBuyAttributeRequest.h"
#include "model/QueryUserBuyAttributeResult.h"
#include "model/QueryUserEvaluationRequest.h"
#include "model/QueryUserEvaluationResult.h"
#include "model/QueryUserInfoRequest.h"
#include "model/QueryUserInfoResult.h"
#include "model/QueryUserListRequest.h"
#include "model/QueryUserListResult.h"
#include "model/RemoveMeetingRequest.h"
#include "model/RemoveMeetingResult.h"


namespace AlibabaCloud
{
	namespace Aliyuncvc
	{
		class ALIBABACLOUD_ALIYUNCVC_EXPORT AliyuncvcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActiveMeetingCodeResult> ActiveMeetingCodeOutcome;
			typedef std::future<ActiveMeetingCodeOutcome> ActiveMeetingCodeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ActiveMeetingCodeRequest&, const ActiveMeetingCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveMeetingCodeAsyncHandler;
			typedef Outcome<Error, Model::CheckMeetingCodeResult> CheckMeetingCodeOutcome;
			typedef std::future<CheckMeetingCodeOutcome> CheckMeetingCodeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CheckMeetingCodeRequest&, const CheckMeetingCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMeetingCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateMeetingResult> CreateMeetingOutcome;
			typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateMeetingRequest&, const CreateMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeetingAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateUserEvaluationsResult> CreateUserEvaluationsOutcome;
			typedef std::future<CreateUserEvaluationsOutcome> CreateUserEvaluationsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserEvaluationsRequest&, const CreateUserEvaluationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserEvaluationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::ListCommoditiesResult> ListCommoditiesOutcome;
			typedef std::future<ListCommoditiesOutcome> ListCommoditiesOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListCommoditiesRequest&, const ListCommoditiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommoditiesAsyncHandler;
			typedef Outcome<Error, Model::QueryIsvUserInfoResult> QueryIsvUserInfoOutcome;
			typedef std::future<QueryIsvUserInfoOutcome> QueryIsvUserInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryIsvUserInfoRequest&, const QueryIsvUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIsvUserInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMeetingInfoResult> QueryMeetingInfoOutcome;
			typedef std::future<QueryMeetingInfoOutcome> QueryMeetingInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryMeetingInfoRequest&, const QueryMeetingInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMeetingInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMemberRecordResult> QueryMemberRecordOutcome;
			typedef std::future<QueryMemberRecordOutcome> QueryMemberRecordOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryMemberRecordRequest&, const QueryMemberRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryStatisticsResult> QueryStatisticsOutcome;
			typedef std::future<QueryStatisticsOutcome> QueryStatisticsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryStatisticsRequest&, const QueryStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStatisticsAsyncHandler;
			typedef Outcome<Error, Model::QueryUserBuyAttributeResult> QueryUserBuyAttributeOutcome;
			typedef std::future<QueryUserBuyAttributeOutcome> QueryUserBuyAttributeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserBuyAttributeRequest&, const QueryUserBuyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserBuyAttributeAsyncHandler;
			typedef Outcome<Error, Model::QueryUserEvaluationResult> QueryUserEvaluationOutcome;
			typedef std::future<QueryUserEvaluationOutcome> QueryUserEvaluationOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserEvaluationRequest&, const QueryUserEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserEvaluationAsyncHandler;
			typedef Outcome<Error, Model::QueryUserInfoResult> QueryUserInfoOutcome;
			typedef std::future<QueryUserInfoOutcome> QueryUserInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserInfoRequest&, const QueryUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryUserListResult> QueryUserListOutcome;
			typedef std::future<QueryUserListOutcome> QueryUserListOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserListRequest&, const QueryUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserListAsyncHandler;
			typedef Outcome<Error, Model::RemoveMeetingResult> RemoveMeetingOutcome;
			typedef std::future<RemoveMeetingOutcome> RemoveMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::RemoveMeetingRequest&, const RemoveMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMeetingAsyncHandler;

			AliyuncvcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AliyuncvcClient();
			ActiveMeetingCodeOutcome activeMeetingCode(const Model::ActiveMeetingCodeRequest &request)const;
			void activeMeetingCodeAsync(const Model::ActiveMeetingCodeRequest& request, const ActiveMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveMeetingCodeOutcomeCallable activeMeetingCodeCallable(const Model::ActiveMeetingCodeRequest& request) const;
			CheckMeetingCodeOutcome checkMeetingCode(const Model::CheckMeetingCodeRequest &request)const;
			void checkMeetingCodeAsync(const Model::CheckMeetingCodeRequest& request, const CheckMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMeetingCodeOutcomeCallable checkMeetingCodeCallable(const Model::CheckMeetingCodeRequest& request) const;
			CreateMeetingOutcome createMeeting(const Model::CreateMeetingRequest &request)const;
			void createMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMeetingOutcomeCallable createMeetingCallable(const Model::CreateMeetingRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateUserEvaluationsOutcome createUserEvaluations(const Model::CreateUserEvaluationsRequest &request)const;
			void createUserEvaluationsAsync(const Model::CreateUserEvaluationsRequest& request, const CreateUserEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserEvaluationsOutcomeCallable createUserEvaluationsCallable(const Model::CreateUserEvaluationsRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			ListCommoditiesOutcome listCommodities(const Model::ListCommoditiesRequest &request)const;
			void listCommoditiesAsync(const Model::ListCommoditiesRequest& request, const ListCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommoditiesOutcomeCallable listCommoditiesCallable(const Model::ListCommoditiesRequest& request) const;
			QueryIsvUserInfoOutcome queryIsvUserInfo(const Model::QueryIsvUserInfoRequest &request)const;
			void queryIsvUserInfoAsync(const Model::QueryIsvUserInfoRequest& request, const QueryIsvUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIsvUserInfoOutcomeCallable queryIsvUserInfoCallable(const Model::QueryIsvUserInfoRequest& request) const;
			QueryMeetingInfoOutcome queryMeetingInfo(const Model::QueryMeetingInfoRequest &request)const;
			void queryMeetingInfoAsync(const Model::QueryMeetingInfoRequest& request, const QueryMeetingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMeetingInfoOutcomeCallable queryMeetingInfoCallable(const Model::QueryMeetingInfoRequest& request) const;
			QueryMemberRecordOutcome queryMemberRecord(const Model::QueryMemberRecordRequest &request)const;
			void queryMemberRecordAsync(const Model::QueryMemberRecordRequest& request, const QueryMemberRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMemberRecordOutcomeCallable queryMemberRecordCallable(const Model::QueryMemberRecordRequest& request) const;
			QueryStatisticsOutcome queryStatistics(const Model::QueryStatisticsRequest &request)const;
			void queryStatisticsAsync(const Model::QueryStatisticsRequest& request, const QueryStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStatisticsOutcomeCallable queryStatisticsCallable(const Model::QueryStatisticsRequest& request) const;
			QueryUserBuyAttributeOutcome queryUserBuyAttribute(const Model::QueryUserBuyAttributeRequest &request)const;
			void queryUserBuyAttributeAsync(const Model::QueryUserBuyAttributeRequest& request, const QueryUserBuyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserBuyAttributeOutcomeCallable queryUserBuyAttributeCallable(const Model::QueryUserBuyAttributeRequest& request) const;
			QueryUserEvaluationOutcome queryUserEvaluation(const Model::QueryUserEvaluationRequest &request)const;
			void queryUserEvaluationAsync(const Model::QueryUserEvaluationRequest& request, const QueryUserEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserEvaluationOutcomeCallable queryUserEvaluationCallable(const Model::QueryUserEvaluationRequest& request) const;
			QueryUserInfoOutcome queryUserInfo(const Model::QueryUserInfoRequest &request)const;
			void queryUserInfoAsync(const Model::QueryUserInfoRequest& request, const QueryUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserInfoOutcomeCallable queryUserInfoCallable(const Model::QueryUserInfoRequest& request) const;
			QueryUserListOutcome queryUserList(const Model::QueryUserListRequest &request)const;
			void queryUserListAsync(const Model::QueryUserListRequest& request, const QueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserListOutcomeCallable queryUserListCallable(const Model::QueryUserListRequest& request) const;
			RemoveMeetingOutcome removeMeeting(const Model::RemoveMeetingRequest &request)const;
			void removeMeetingAsync(const Model::RemoveMeetingRequest& request, const RemoveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMeetingOutcomeCallable removeMeetingCallable(const Model::RemoveMeetingRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_
