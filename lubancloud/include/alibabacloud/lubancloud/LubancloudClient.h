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

#ifndef ALIBABACLOUD_LUBANCLOUD_LUBANCLOUDCLIENT_H_
#define ALIBABACLOUD_LUBANCLOUD_LUBANCLOUDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LubancloudExport.h"
#include "model/BuyOriginPicturesRequest.h"
#include "model/BuyOriginPicturesResult.h"
#include "model/GetStylesRequest.h"
#include "model/GetStylesResult.h"
#include "model/QueryCutoutTaskResultRequest.h"
#include "model/QueryCutoutTaskResultResult.h"
#include "model/QueryGenerateTaskResultRequest.h"
#include "model/QueryGenerateTaskResultResult.h"
#include "model/SubmitCutoutTaskRequest.h"
#include "model/SubmitCutoutTaskResult.h"
#include "model/SubmitGenerateTaskRequest.h"
#include "model/SubmitGenerateTaskResult.h"


namespace AlibabaCloud
{
	namespace Lubancloud
	{
		class ALIBABACLOUD_LUBANCLOUD_EXPORT LubancloudClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BuyOriginPicturesResult> BuyOriginPicturesOutcome;
			typedef std::future<BuyOriginPicturesOutcome> BuyOriginPicturesOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::BuyOriginPicturesRequest&, const BuyOriginPicturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BuyOriginPicturesAsyncHandler;
			typedef Outcome<Error, Model::GetStylesResult> GetStylesOutcome;
			typedef std::future<GetStylesOutcome> GetStylesOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::GetStylesRequest&, const GetStylesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStylesAsyncHandler;
			typedef Outcome<Error, Model::QueryCutoutTaskResultResult> QueryCutoutTaskResultOutcome;
			typedef std::future<QueryCutoutTaskResultOutcome> QueryCutoutTaskResultOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::QueryCutoutTaskResultRequest&, const QueryCutoutTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCutoutTaskResultAsyncHandler;
			typedef Outcome<Error, Model::QueryGenerateTaskResultResult> QueryGenerateTaskResultOutcome;
			typedef std::future<QueryGenerateTaskResultOutcome> QueryGenerateTaskResultOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::QueryGenerateTaskResultRequest&, const QueryGenerateTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGenerateTaskResultAsyncHandler;
			typedef Outcome<Error, Model::SubmitCutoutTaskResult> SubmitCutoutTaskOutcome;
			typedef std::future<SubmitCutoutTaskOutcome> SubmitCutoutTaskOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::SubmitCutoutTaskRequest&, const SubmitCutoutTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCutoutTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitGenerateTaskResult> SubmitGenerateTaskOutcome;
			typedef std::future<SubmitGenerateTaskOutcome> SubmitGenerateTaskOutcomeCallable;
			typedef std::function<void(const LubancloudClient*, const Model::SubmitGenerateTaskRequest&, const SubmitGenerateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitGenerateTaskAsyncHandler;

			LubancloudClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LubancloudClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LubancloudClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LubancloudClient();
			BuyOriginPicturesOutcome buyOriginPictures(const Model::BuyOriginPicturesRequest &request)const;
			void buyOriginPicturesAsync(const Model::BuyOriginPicturesRequest& request, const BuyOriginPicturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BuyOriginPicturesOutcomeCallable buyOriginPicturesCallable(const Model::BuyOriginPicturesRequest& request) const;
			GetStylesOutcome getStyles(const Model::GetStylesRequest &request)const;
			void getStylesAsync(const Model::GetStylesRequest& request, const GetStylesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStylesOutcomeCallable getStylesCallable(const Model::GetStylesRequest& request) const;
			QueryCutoutTaskResultOutcome queryCutoutTaskResult(const Model::QueryCutoutTaskResultRequest &request)const;
			void queryCutoutTaskResultAsync(const Model::QueryCutoutTaskResultRequest& request, const QueryCutoutTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCutoutTaskResultOutcomeCallable queryCutoutTaskResultCallable(const Model::QueryCutoutTaskResultRequest& request) const;
			QueryGenerateTaskResultOutcome queryGenerateTaskResult(const Model::QueryGenerateTaskResultRequest &request)const;
			void queryGenerateTaskResultAsync(const Model::QueryGenerateTaskResultRequest& request, const QueryGenerateTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGenerateTaskResultOutcomeCallable queryGenerateTaskResultCallable(const Model::QueryGenerateTaskResultRequest& request) const;
			SubmitCutoutTaskOutcome submitCutoutTask(const Model::SubmitCutoutTaskRequest &request)const;
			void submitCutoutTaskAsync(const Model::SubmitCutoutTaskRequest& request, const SubmitCutoutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCutoutTaskOutcomeCallable submitCutoutTaskCallable(const Model::SubmitCutoutTaskRequest& request) const;
			SubmitGenerateTaskOutcome submitGenerateTask(const Model::SubmitGenerateTaskRequest &request)const;
			void submitGenerateTaskAsync(const Model::SubmitGenerateTaskRequest& request, const SubmitGenerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitGenerateTaskOutcomeCallable submitGenerateTaskCallable(const Model::SubmitGenerateTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LUBANCLOUD_LUBANCLOUDCLIENT_H_
