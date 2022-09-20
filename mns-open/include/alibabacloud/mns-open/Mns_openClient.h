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

#ifndef ALIBABACLOUD_MNS_OPEN_MNS_OPENCLIENT_H_
#define ALIBABACLOUD_MNS_OPEN_MNS_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Mns_openExport.h"
#include "model/CreateQueueRequest.h"
#include "model/CreateQueueResult.h"
#include "model/CreateTopicRequest.h"
#include "model/CreateTopicResult.h"
#include "model/DeleteQueueRequest.h"
#include "model/DeleteQueueResult.h"
#include "model/DeleteTopicRequest.h"
#include "model/DeleteTopicResult.h"
#include "model/GetQueueAttributesRequest.h"
#include "model/GetQueueAttributesResult.h"
#include "model/GetSubscriptionAttributesRequest.h"
#include "model/GetSubscriptionAttributesResult.h"
#include "model/GetTopicAttributesRequest.h"
#include "model/GetTopicAttributesResult.h"
#include "model/ListQueueRequest.h"
#include "model/ListQueueResult.h"
#include "model/ListSubscriptionByTopicRequest.h"
#include "model/ListSubscriptionByTopicResult.h"
#include "model/ListTopicRequest.h"
#include "model/ListTopicResult.h"
#include "model/SetQueueAttributesRequest.h"
#include "model/SetQueueAttributesResult.h"
#include "model/SetSubscriptionAttributesRequest.h"
#include "model/SetSubscriptionAttributesResult.h"
#include "model/SetTopicAttributesRequest.h"
#include "model/SetTopicAttributesResult.h"
#include "model/SubscribeRequest.h"
#include "model/SubscribeResult.h"
#include "model/UnsubscribeRequest.h"
#include "model/UnsubscribeResult.h"


namespace AlibabaCloud
{
	namespace Mns_open
	{
		class ALIBABACLOUD_MNS_OPEN_EXPORT Mns_openClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateQueueResult> CreateQueueOutcome;
			typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::CreateQueueRequest&, const CreateQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateTopicResult> CreateTopicOutcome;
			typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::CreateTopicRequest&, const CreateTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
			typedef Outcome<Error, Model::DeleteQueueResult> DeleteQueueOutcome;
			typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::DeleteQueueRequest&, const DeleteQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteTopicResult> DeleteTopicOutcome;
			typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::DeleteTopicRequest&, const DeleteTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
			typedef Outcome<Error, Model::GetQueueAttributesResult> GetQueueAttributesOutcome;
			typedef std::future<GetQueueAttributesOutcome> GetQueueAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::GetQueueAttributesRequest&, const GetQueueAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueAttributesAsyncHandler;
			typedef Outcome<Error, Model::GetSubscriptionAttributesResult> GetSubscriptionAttributesOutcome;
			typedef std::future<GetSubscriptionAttributesOutcome> GetSubscriptionAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::GetSubscriptionAttributesRequest&, const GetSubscriptionAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubscriptionAttributesAsyncHandler;
			typedef Outcome<Error, Model::GetTopicAttributesResult> GetTopicAttributesOutcome;
			typedef std::future<GetTopicAttributesOutcome> GetTopicAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::GetTopicAttributesRequest&, const GetTopicAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicAttributesAsyncHandler;
			typedef Outcome<Error, Model::ListQueueResult> ListQueueOutcome;
			typedef std::future<ListQueueOutcome> ListQueueOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::ListQueueRequest&, const ListQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueueAsyncHandler;
			typedef Outcome<Error, Model::ListSubscriptionByTopicResult> ListSubscriptionByTopicOutcome;
			typedef std::future<ListSubscriptionByTopicOutcome> ListSubscriptionByTopicOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::ListSubscriptionByTopicRequest&, const ListSubscriptionByTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubscriptionByTopicAsyncHandler;
			typedef Outcome<Error, Model::ListTopicResult> ListTopicOutcome;
			typedef std::future<ListTopicOutcome> ListTopicOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::ListTopicRequest&, const ListTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTopicAsyncHandler;
			typedef Outcome<Error, Model::SetQueueAttributesResult> SetQueueAttributesOutcome;
			typedef std::future<SetQueueAttributesOutcome> SetQueueAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::SetQueueAttributesRequest&, const SetQueueAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetQueueAttributesAsyncHandler;
			typedef Outcome<Error, Model::SetSubscriptionAttributesResult> SetSubscriptionAttributesOutcome;
			typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::SetSubscriptionAttributesRequest&, const SetSubscriptionAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSubscriptionAttributesAsyncHandler;
			typedef Outcome<Error, Model::SetTopicAttributesResult> SetTopicAttributesOutcome;
			typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::SetTopicAttributesRequest&, const SetTopicAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetTopicAttributesAsyncHandler;
			typedef Outcome<Error, Model::SubscribeResult> SubscribeOutcome;
			typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::SubscribeRequest&, const SubscribeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubscribeAsyncHandler;
			typedef Outcome<Error, Model::UnsubscribeResult> UnsubscribeOutcome;
			typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
			typedef std::function<void(const Mns_openClient*, const Model::UnsubscribeRequest&, const UnsubscribeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnsubscribeAsyncHandler;

			Mns_openClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Mns_openClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Mns_openClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Mns_openClient();
			CreateQueueOutcome createQueue(const Model::CreateQueueRequest &request)const;
			void createQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQueueOutcomeCallable createQueueCallable(const Model::CreateQueueRequest& request) const;
			CreateTopicOutcome createTopic(const Model::CreateTopicRequest &request)const;
			void createTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTopicOutcomeCallable createTopicCallable(const Model::CreateTopicRequest& request) const;
			DeleteQueueOutcome deleteQueue(const Model::DeleteQueueRequest &request)const;
			void deleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQueueOutcomeCallable deleteQueueCallable(const Model::DeleteQueueRequest& request) const;
			DeleteTopicOutcome deleteTopic(const Model::DeleteTopicRequest &request)const;
			void deleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTopicOutcomeCallable deleteTopicCallable(const Model::DeleteTopicRequest& request) const;
			GetQueueAttributesOutcome getQueueAttributes(const Model::GetQueueAttributesRequest &request)const;
			void getQueueAttributesAsync(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueAttributesOutcomeCallable getQueueAttributesCallable(const Model::GetQueueAttributesRequest& request) const;
			GetSubscriptionAttributesOutcome getSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest &request)const;
			void getSubscriptionAttributesAsync(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubscriptionAttributesOutcomeCallable getSubscriptionAttributesCallable(const Model::GetSubscriptionAttributesRequest& request) const;
			GetTopicAttributesOutcome getTopicAttributes(const Model::GetTopicAttributesRequest &request)const;
			void getTopicAttributesAsync(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicAttributesOutcomeCallable getTopicAttributesCallable(const Model::GetTopicAttributesRequest& request) const;
			ListQueueOutcome listQueue(const Model::ListQueueRequest &request)const;
			void listQueueAsync(const Model::ListQueueRequest& request, const ListQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueueOutcomeCallable listQueueCallable(const Model::ListQueueRequest& request) const;
			ListSubscriptionByTopicOutcome listSubscriptionByTopic(const Model::ListSubscriptionByTopicRequest &request)const;
			void listSubscriptionByTopicAsync(const Model::ListSubscriptionByTopicRequest& request, const ListSubscriptionByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubscriptionByTopicOutcomeCallable listSubscriptionByTopicCallable(const Model::ListSubscriptionByTopicRequest& request) const;
			ListTopicOutcome listTopic(const Model::ListTopicRequest &request)const;
			void listTopicAsync(const Model::ListTopicRequest& request, const ListTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTopicOutcomeCallable listTopicCallable(const Model::ListTopicRequest& request) const;
			SetQueueAttributesOutcome setQueueAttributes(const Model::SetQueueAttributesRequest &request)const;
			void setQueueAttributesAsync(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetQueueAttributesOutcomeCallable setQueueAttributesCallable(const Model::SetQueueAttributesRequest& request) const;
			SetSubscriptionAttributesOutcome setSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest &request)const;
			void setSubscriptionAttributesAsync(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSubscriptionAttributesOutcomeCallable setSubscriptionAttributesCallable(const Model::SetSubscriptionAttributesRequest& request) const;
			SetTopicAttributesOutcome setTopicAttributes(const Model::SetTopicAttributesRequest &request)const;
			void setTopicAttributesAsync(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetTopicAttributesOutcomeCallable setTopicAttributesCallable(const Model::SetTopicAttributesRequest& request) const;
			SubscribeOutcome subscribe(const Model::SubscribeRequest &request)const;
			void subscribeAsync(const Model::SubscribeRequest& request, const SubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubscribeOutcomeCallable subscribeCallable(const Model::SubscribeRequest& request) const;
			UnsubscribeOutcome unsubscribe(const Model::UnsubscribeRequest &request)const;
			void unsubscribeAsync(const Model::UnsubscribeRequest& request, const UnsubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnsubscribeOutcomeCallable unsubscribeCallable(const Model::UnsubscribeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MNS_OPEN_MNS_OPENCLIENT_H_
