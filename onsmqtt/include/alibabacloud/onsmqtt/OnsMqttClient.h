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

#ifndef ALIBABACLOUD_ONSMQTT_ONSMQTTCLIENT_H_
#define ALIBABACLOUD_ONSMQTT_ONSMQTTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OnsMqttExport.h"
#include "model/ApplyTokenRequest.h"
#include "model/ApplyTokenResult.h"
#include "model/BatchQuerySessionByClientIdsRequest.h"
#include "model/BatchQuerySessionByClientIdsResult.h"
#include "model/CreateGroupIdRequest.h"
#include "model/CreateGroupIdResult.h"
#include "model/DeleteGroupIdRequest.h"
#include "model/DeleteGroupIdResult.h"
#include "model/ListGroupIdRequest.h"
#include "model/ListGroupIdResult.h"
#include "model/QuerySessionByClientIdRequest.h"
#include "model/QuerySessionByClientIdResult.h"
#include "model/QueryTokenRequest.h"
#include "model/QueryTokenResult.h"
#include "model/RevokeTokenRequest.h"
#include "model/RevokeTokenResult.h"
#include "model/SendMessageRequest.h"
#include "model/SendMessageResult.h"


namespace AlibabaCloud
{
	namespace OnsMqtt
	{
		class ALIBABACLOUD_ONSMQTT_EXPORT OnsMqttClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ApplyTokenResult> ApplyTokenOutcome;
			typedef std::future<ApplyTokenOutcome> ApplyTokenOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::ApplyTokenRequest&, const ApplyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTokenAsyncHandler;
			typedef Outcome<Error, Model::BatchQuerySessionByClientIdsResult> BatchQuerySessionByClientIdsOutcome;
			typedef std::future<BatchQuerySessionByClientIdsOutcome> BatchQuerySessionByClientIdsOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::BatchQuerySessionByClientIdsRequest&, const BatchQuerySessionByClientIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchQuerySessionByClientIdsAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupIdResult> CreateGroupIdOutcome;
			typedef std::future<CreateGroupIdOutcome> CreateGroupIdOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::CreateGroupIdRequest&, const CreateGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupIdAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupIdResult> DeleteGroupIdOutcome;
			typedef std::future<DeleteGroupIdOutcome> DeleteGroupIdOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::DeleteGroupIdRequest&, const DeleteGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupIdAsyncHandler;
			typedef Outcome<Error, Model::ListGroupIdResult> ListGroupIdOutcome;
			typedef std::future<ListGroupIdOutcome> ListGroupIdOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::ListGroupIdRequest&, const ListGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupIdAsyncHandler;
			typedef Outcome<Error, Model::QuerySessionByClientIdResult> QuerySessionByClientIdOutcome;
			typedef std::future<QuerySessionByClientIdOutcome> QuerySessionByClientIdOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::QuerySessionByClientIdRequest&, const QuerySessionByClientIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySessionByClientIdAsyncHandler;
			typedef Outcome<Error, Model::QueryTokenResult> QueryTokenOutcome;
			typedef std::future<QueryTokenOutcome> QueryTokenOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::QueryTokenRequest&, const QueryTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTokenAsyncHandler;
			typedef Outcome<Error, Model::RevokeTokenResult> RevokeTokenOutcome;
			typedef std::future<RevokeTokenOutcome> RevokeTokenOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::RevokeTokenRequest&, const RevokeTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeTokenAsyncHandler;
			typedef Outcome<Error, Model::SendMessageResult> SendMessageOutcome;
			typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
			typedef std::function<void(const OnsMqttClient*, const Model::SendMessageRequest&, const SendMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;

			OnsMqttClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OnsMqttClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OnsMqttClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OnsMqttClient();
			ApplyTokenOutcome applyToken(const Model::ApplyTokenRequest &request)const;
			void applyTokenAsync(const Model::ApplyTokenRequest& request, const ApplyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyTokenOutcomeCallable applyTokenCallable(const Model::ApplyTokenRequest& request) const;
			BatchQuerySessionByClientIdsOutcome batchQuerySessionByClientIds(const Model::BatchQuerySessionByClientIdsRequest &request)const;
			void batchQuerySessionByClientIdsAsync(const Model::BatchQuerySessionByClientIdsRequest& request, const BatchQuerySessionByClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchQuerySessionByClientIdsOutcomeCallable batchQuerySessionByClientIdsCallable(const Model::BatchQuerySessionByClientIdsRequest& request) const;
			CreateGroupIdOutcome createGroupId(const Model::CreateGroupIdRequest &request)const;
			void createGroupIdAsync(const Model::CreateGroupIdRequest& request, const CreateGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupIdOutcomeCallable createGroupIdCallable(const Model::CreateGroupIdRequest& request) const;
			DeleteGroupIdOutcome deleteGroupId(const Model::DeleteGroupIdRequest &request)const;
			void deleteGroupIdAsync(const Model::DeleteGroupIdRequest& request, const DeleteGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupIdOutcomeCallable deleteGroupIdCallable(const Model::DeleteGroupIdRequest& request) const;
			ListGroupIdOutcome listGroupId(const Model::ListGroupIdRequest &request)const;
			void listGroupIdAsync(const Model::ListGroupIdRequest& request, const ListGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupIdOutcomeCallable listGroupIdCallable(const Model::ListGroupIdRequest& request) const;
			QuerySessionByClientIdOutcome querySessionByClientId(const Model::QuerySessionByClientIdRequest &request)const;
			void querySessionByClientIdAsync(const Model::QuerySessionByClientIdRequest& request, const QuerySessionByClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySessionByClientIdOutcomeCallable querySessionByClientIdCallable(const Model::QuerySessionByClientIdRequest& request) const;
			QueryTokenOutcome queryToken(const Model::QueryTokenRequest &request)const;
			void queryTokenAsync(const Model::QueryTokenRequest& request, const QueryTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTokenOutcomeCallable queryTokenCallable(const Model::QueryTokenRequest& request) const;
			RevokeTokenOutcome revokeToken(const Model::RevokeTokenRequest &request)const;
			void revokeTokenAsync(const Model::RevokeTokenRequest& request, const RevokeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeTokenOutcomeCallable revokeTokenCallable(const Model::RevokeTokenRequest& request) const;
			SendMessageOutcome sendMessage(const Model::SendMessageRequest &request)const;
			void sendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageOutcomeCallable sendMessageCallable(const Model::SendMessageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ONSMQTT_ONSMQTTCLIENT_H_
