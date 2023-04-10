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

#ifndef ALIBABACLOUD_DOCUMENTAUTOML_DOCUMENTAUTOMLCLIENT_H_
#define ALIBABACLOUD_DOCUMENTAUTOML_DOCUMENTAUTOMLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DocumentAutomlExport.h"
#include "model/CreateModelAsyncPredictRequest.h"
#include "model/CreateModelAsyncPredictResult.h"
#include "model/GetModelAsyncPredictRequest.h"
#include "model/GetModelAsyncPredictResult.h"
#include "model/PredictClassifierModelRequest.h"
#include "model/PredictClassifierModelResult.h"
#include "model/PredictModelRequest.h"
#include "model/PredictModelResult.h"
#include "model/PredictTemplateModelRequest.h"
#include "model/PredictTemplateModelResult.h"


namespace AlibabaCloud
{
	namespace DocumentAutoml
	{
		class ALIBABACLOUD_DOCUMENTAUTOML_EXPORT DocumentAutomlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateModelAsyncPredictResult> CreateModelAsyncPredictOutcome;
			typedef std::future<CreateModelAsyncPredictOutcome> CreateModelAsyncPredictOutcomeCallable;
			typedef std::function<void(const DocumentAutomlClient*, const Model::CreateModelAsyncPredictRequest&, const CreateModelAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::GetModelAsyncPredictResult> GetModelAsyncPredictOutcome;
			typedef std::future<GetModelAsyncPredictOutcome> GetModelAsyncPredictOutcomeCallable;
			typedef std::function<void(const DocumentAutomlClient*, const Model::GetModelAsyncPredictRequest&, const GetModelAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::PredictClassifierModelResult> PredictClassifierModelOutcome;
			typedef std::future<PredictClassifierModelOutcome> PredictClassifierModelOutcomeCallable;
			typedef std::function<void(const DocumentAutomlClient*, const Model::PredictClassifierModelRequest&, const PredictClassifierModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictClassifierModelAsyncHandler;
			typedef Outcome<Error, Model::PredictModelResult> PredictModelOutcome;
			typedef std::future<PredictModelOutcome> PredictModelOutcomeCallable;
			typedef std::function<void(const DocumentAutomlClient*, const Model::PredictModelRequest&, const PredictModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictModelAsyncHandler;
			typedef Outcome<Error, Model::PredictTemplateModelResult> PredictTemplateModelOutcome;
			typedef std::future<PredictTemplateModelOutcome> PredictTemplateModelOutcomeCallable;
			typedef std::function<void(const DocumentAutomlClient*, const Model::PredictTemplateModelRequest&, const PredictTemplateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictTemplateModelAsyncHandler;

			DocumentAutomlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DocumentAutomlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DocumentAutomlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DocumentAutomlClient();
			CreateModelAsyncPredictOutcome createModelAsyncPredict(const Model::CreateModelAsyncPredictRequest &request)const;
			void createModelAsyncPredictAsync(const Model::CreateModelAsyncPredictRequest& request, const CreateModelAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelAsyncPredictOutcomeCallable createModelAsyncPredictCallable(const Model::CreateModelAsyncPredictRequest& request) const;
			GetModelAsyncPredictOutcome getModelAsyncPredict(const Model::GetModelAsyncPredictRequest &request)const;
			void getModelAsyncPredictAsync(const Model::GetModelAsyncPredictRequest& request, const GetModelAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelAsyncPredictOutcomeCallable getModelAsyncPredictCallable(const Model::GetModelAsyncPredictRequest& request) const;
			PredictClassifierModelOutcome predictClassifierModel(const Model::PredictClassifierModelRequest &request)const;
			void predictClassifierModelAsync(const Model::PredictClassifierModelRequest& request, const PredictClassifierModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictClassifierModelOutcomeCallable predictClassifierModelCallable(const Model::PredictClassifierModelRequest& request) const;
			PredictModelOutcome predictModel(const Model::PredictModelRequest &request)const;
			void predictModelAsync(const Model::PredictModelRequest& request, const PredictModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictModelOutcomeCallable predictModelCallable(const Model::PredictModelRequest& request) const;
			PredictTemplateModelOutcome predictTemplateModel(const Model::PredictTemplateModelRequest &request)const;
			void predictTemplateModelAsync(const Model::PredictTemplateModelRequest& request, const PredictTemplateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictTemplateModelOutcomeCallable predictTemplateModelCallable(const Model::PredictTemplateModelRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DOCUMENTAUTOML_DOCUMENTAUTOMLCLIENT_H_
