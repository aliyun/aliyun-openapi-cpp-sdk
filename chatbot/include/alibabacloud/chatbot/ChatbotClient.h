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

#ifndef ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_
#define ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ChatbotExport.h"
#include "model/ChatRequest.h"
#include "model/ChatResult.h"


namespace AlibabaCloud
{
	namespace Chatbot
	{
		class ALIBABACLOUD_CHATBOT_EXPORT ChatbotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChatResult> ChatOutcome;
			typedef std::future<ChatOutcome> ChatOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::ChatRequest&, const ChatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatAsyncHandler;

			ChatbotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ChatbotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ChatbotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ChatbotClient();
			ChatOutcome chat(const Model::ChatRequest &request)const;
			void chatAsync(const Model::ChatRequest& request, const ChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatOutcomeCallable chatCallable(const Model::ChatRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_
