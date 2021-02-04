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

#ifndef ALIBABACLOUD_SAFCONSOLE_SAFCONSOLECLIENT_H_
#define ALIBABACLOUD_SAFCONSOLE_SAFCONSOLECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SafconsoleExport.h"
#include "model/RevokeFeedbackRequest.h"
#include "model/RevokeFeedbackResult.h"
#include "model/SendFeedbackRequest.h"
#include "model/SendFeedbackResult.h"


namespace AlibabaCloud
{
	namespace Safconsole
	{
		class ALIBABACLOUD_SAFCONSOLE_EXPORT SafconsoleClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::RevokeFeedbackResult> RevokeFeedbackOutcome;
			typedef std::future<RevokeFeedbackOutcome> RevokeFeedbackOutcomeCallable;
			typedef std::function<void(const SafconsoleClient*, const Model::RevokeFeedbackRequest&, const RevokeFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeFeedbackAsyncHandler;
			typedef Outcome<Error, Model::SendFeedbackResult> SendFeedbackOutcome;
			typedef std::future<SendFeedbackOutcome> SendFeedbackOutcomeCallable;
			typedef std::function<void(const SafconsoleClient*, const Model::SendFeedbackRequest&, const SendFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendFeedbackAsyncHandler;

			SafconsoleClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SafconsoleClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SafconsoleClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SafconsoleClient();
			RevokeFeedbackOutcome revokeFeedback(const Model::RevokeFeedbackRequest &request)const;
			void revokeFeedbackAsync(const Model::RevokeFeedbackRequest& request, const RevokeFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeFeedbackOutcomeCallable revokeFeedbackCallable(const Model::RevokeFeedbackRequest& request) const;
			SendFeedbackOutcome sendFeedback(const Model::SendFeedbackRequest &request)const;
			void sendFeedbackAsync(const Model::SendFeedbackRequest& request, const SendFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendFeedbackOutcomeCallable sendFeedbackCallable(const Model::SendFeedbackRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAFCONSOLE_SAFCONSOLECLIENT_H_
