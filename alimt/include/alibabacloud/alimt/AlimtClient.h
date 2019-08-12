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

#ifndef ALIBABACLOUD_ALIMT_ALIMTCLIENT_H_
#define ALIBABACLOUD_ALIMT_ALIMTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AlimtExport.h"
#include "model/TranslateECommerceRequest.h"
#include "model/TranslateECommerceResult.h"
#include "model/TranslateGeneralRequest.h"
#include "model/TranslateGeneralResult.h"


namespace AlibabaCloud
{
	namespace Alimt
	{
		class ALIBABACLOUD_ALIMT_EXPORT AlimtClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::TranslateECommerceResult> TranslateECommerceOutcome;
			typedef std::future<TranslateECommerceOutcome> TranslateECommerceOutcomeCallable;
			typedef std::function<void(const AlimtClient*, const Model::TranslateECommerceRequest&, const TranslateECommerceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TranslateECommerceAsyncHandler;
			typedef Outcome<Error, Model::TranslateGeneralResult> TranslateGeneralOutcome;
			typedef std::future<TranslateGeneralOutcome> TranslateGeneralOutcomeCallable;
			typedef std::function<void(const AlimtClient*, const Model::TranslateGeneralRequest&, const TranslateGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TranslateGeneralAsyncHandler;

			AlimtClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlimtClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlimtClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlimtClient();
			TranslateECommerceOutcome translateECommerce(const Model::TranslateECommerceRequest &request)const;
			void translateECommerceAsync(const Model::TranslateECommerceRequest& request, const TranslateECommerceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TranslateECommerceOutcomeCallable translateECommerceCallable(const Model::TranslateECommerceRequest& request) const;
			TranslateGeneralOutcome translateGeneral(const Model::TranslateGeneralRequest &request)const;
			void translateGeneralAsync(const Model::TranslateGeneralRequest& request, const TranslateGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TranslateGeneralOutcomeCallable translateGeneralCallable(const Model::TranslateGeneralRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIMT_ALIMTCLIENT_H_
