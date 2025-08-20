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

#ifndef ALIBABACLOUD_LINGMOU_LINGMOUCLIENT_H_
#define ALIBABACLOUD_LINGMOU_LINGMOUCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "LingMouExport.h"
#include "model/CloseChatInstanceSessionsRequest.h"
#include "model/CloseChatInstanceSessionsResult.h"
#include "model/CreateChatSessionRequest.h"
#include "model/CreateChatSessionResult.h"
#include "model/QueryChatInstanceSessionsRequest.h"
#include "model/QueryChatInstanceSessionsResult.h"


namespace AlibabaCloud
{
	namespace LingMou
	{
		class ALIBABACLOUD_LINGMOU_EXPORT LingMouClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CloseChatInstanceSessionsResult> CloseChatInstanceSessionsOutcome;
			typedef std::future<CloseChatInstanceSessionsOutcome> CloseChatInstanceSessionsOutcomeCallable;
			typedef std::function<void(const LingMouClient*, const Model::CloseChatInstanceSessionsRequest&, const CloseChatInstanceSessionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseChatInstanceSessionsAsyncHandler;
			typedef Outcome<Error, Model::CreateChatSessionResult> CreateChatSessionOutcome;
			typedef std::future<CreateChatSessionOutcome> CreateChatSessionOutcomeCallable;
			typedef std::function<void(const LingMouClient*, const Model::CreateChatSessionRequest&, const CreateChatSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChatSessionAsyncHandler;
			typedef Outcome<Error, Model::QueryChatInstanceSessionsResult> QueryChatInstanceSessionsOutcome;
			typedef std::future<QueryChatInstanceSessionsOutcome> QueryChatInstanceSessionsOutcomeCallable;
			typedef std::function<void(const LingMouClient*, const Model::QueryChatInstanceSessionsRequest&, const QueryChatInstanceSessionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryChatInstanceSessionsAsyncHandler;

			LingMouClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LingMouClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LingMouClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LingMouClient();
			CloseChatInstanceSessionsOutcome closeChatInstanceSessions(const Model::CloseChatInstanceSessionsRequest &request)const;
			void closeChatInstanceSessionsAsync(const Model::CloseChatInstanceSessionsRequest& request, const CloseChatInstanceSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseChatInstanceSessionsOutcomeCallable closeChatInstanceSessionsCallable(const Model::CloseChatInstanceSessionsRequest& request) const;
			CreateChatSessionOutcome createChatSession(const Model::CreateChatSessionRequest &request)const;
			void createChatSessionAsync(const Model::CreateChatSessionRequest& request, const CreateChatSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChatSessionOutcomeCallable createChatSessionCallable(const Model::CreateChatSessionRequest& request) const;
			QueryChatInstanceSessionsOutcome queryChatInstanceSessions(const Model::QueryChatInstanceSessionsRequest &request)const;
			void queryChatInstanceSessionsAsync(const Model::QueryChatInstanceSessionsRequest& request, const QueryChatInstanceSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryChatInstanceSessionsOutcomeCallable queryChatInstanceSessionsCallable(const Model::QueryChatInstanceSessionsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LINGMOU_LINGMOUCLIENT_H_
