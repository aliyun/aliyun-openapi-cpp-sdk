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

#ifndef ALIBABACLOUD_HIKNOENGINE_HIKNOENGINECLIENT_H_
#define ALIBABACLOUD_HIKNOENGINE_HIKNOENGINECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HiknoengineExport.h"
#include "model/TranslateTextRequest.h"
#include "model/TranslateTextResult.h"


namespace AlibabaCloud
{
	namespace Hiknoengine
	{
		class ALIBABACLOUD_HIKNOENGINE_EXPORT HiknoengineClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::TranslateTextResult> TranslateTextOutcome;
			typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
			typedef std::function<void(const HiknoengineClient*, const Model::TranslateTextRequest&, const TranslateTextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TranslateTextAsyncHandler;

			HiknoengineClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HiknoengineClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HiknoengineClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HiknoengineClient();
			TranslateTextOutcome translateText(const Model::TranslateTextRequest &request)const;
			void translateTextAsync(const Model::TranslateTextRequest& request, const TranslateTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TranslateTextOutcomeCallable translateTextCallable(const Model::TranslateTextRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HIKNOENGINE_HIKNOENGINECLIENT_H_
