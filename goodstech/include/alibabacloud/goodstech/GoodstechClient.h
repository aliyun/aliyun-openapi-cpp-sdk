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

#ifndef ALIBABACLOUD_GOODSTECH_GOODSTECHCLIENT_H_
#define ALIBABACLOUD_GOODSTECH_GOODSTECHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GoodstechExport.h"
#include "model/ClassifyCommodityRequest.h"
#include "model/ClassifyCommodityResult.h"
#include "model/RecognizeFurnitureAttributeRequest.h"
#include "model/RecognizeFurnitureAttributeResult.h"
#include "model/RecognizeFurnitureSpuRequest.h"
#include "model/RecognizeFurnitureSpuResult.h"


namespace AlibabaCloud
{
	namespace Goodstech
	{
		class ALIBABACLOUD_GOODSTECH_EXPORT GoodstechClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ClassifyCommodityResult> ClassifyCommodityOutcome;
			typedef std::future<ClassifyCommodityOutcome> ClassifyCommodityOutcomeCallable;
			typedef std::function<void(const GoodstechClient*, const Model::ClassifyCommodityRequest&, const ClassifyCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyCommodityAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFurnitureAttributeResult> RecognizeFurnitureAttributeOutcome;
			typedef std::future<RecognizeFurnitureAttributeOutcome> RecognizeFurnitureAttributeOutcomeCallable;
			typedef std::function<void(const GoodstechClient*, const Model::RecognizeFurnitureAttributeRequest&, const RecognizeFurnitureAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFurnitureAttributeAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFurnitureSpuResult> RecognizeFurnitureSpuOutcome;
			typedef std::future<RecognizeFurnitureSpuOutcome> RecognizeFurnitureSpuOutcomeCallable;
			typedef std::function<void(const GoodstechClient*, const Model::RecognizeFurnitureSpuRequest&, const RecognizeFurnitureSpuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFurnitureSpuAsyncHandler;

			GoodstechClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GoodstechClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GoodstechClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GoodstechClient();
			ClassifyCommodityOutcome classifyCommodity(const Model::ClassifyCommodityRequest &request)const;
			void classifyCommodityAsync(const Model::ClassifyCommodityRequest& request, const ClassifyCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClassifyCommodityOutcomeCallable classifyCommodityCallable(const Model::ClassifyCommodityRequest& request) const;
			RecognizeFurnitureAttributeOutcome recognizeFurnitureAttribute(const Model::RecognizeFurnitureAttributeRequest &request)const;
			void recognizeFurnitureAttributeAsync(const Model::RecognizeFurnitureAttributeRequest& request, const RecognizeFurnitureAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFurnitureAttributeOutcomeCallable recognizeFurnitureAttributeCallable(const Model::RecognizeFurnitureAttributeRequest& request) const;
			RecognizeFurnitureSpuOutcome recognizeFurnitureSpu(const Model::RecognizeFurnitureSpuRequest &request)const;
			void recognizeFurnitureSpuAsync(const Model::RecognizeFurnitureSpuRequest& request, const RecognizeFurnitureSpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFurnitureSpuOutcomeCallable recognizeFurnitureSpuCallable(const Model::RecognizeFurnitureSpuRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GOODSTECH_GOODSTECHCLIENT_H_
