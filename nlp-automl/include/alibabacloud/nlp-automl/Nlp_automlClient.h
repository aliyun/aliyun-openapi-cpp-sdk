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

#ifndef ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_
#define ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Nlp_automlExport.h"
#include "model/CreateAsyncPredictRequest.h"
#include "model/CreateAsyncPredictResult.h"
#include "model/FindUserReport4AlinlpRequest.h"
#include "model/FindUserReport4AlinlpResult.h"
#include "model/GetAsyncPredictRequest.h"
#include "model/GetAsyncPredictResult.h"
#include "model/GetPredictResultRequest.h"
#include "model/GetPredictResultResult.h"
#include "model/GetPredictResultHighRequest.h"
#include "model/GetPredictResultHighResult.h"
#include "model/RunPreTrainServiceRequest.h"
#include "model/RunPreTrainServiceResult.h"
#include "model/RunPreTrainServiceNewRequest.h"
#include "model/RunPreTrainServiceNewResult.h"


namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		class ALIBABACLOUD_NLP_AUTOML_EXPORT Nlp_automlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAsyncPredictResult> CreateAsyncPredictOutcome;
			typedef std::future<CreateAsyncPredictOutcome> CreateAsyncPredictOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateAsyncPredictRequest&, const CreateAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::FindUserReport4AlinlpResult> FindUserReport4AlinlpOutcome;
			typedef std::future<FindUserReport4AlinlpOutcome> FindUserReport4AlinlpOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::FindUserReport4AlinlpRequest&, const FindUserReport4AlinlpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindUserReport4AlinlpAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncPredictResult> GetAsyncPredictOutcome;
			typedef std::future<GetAsyncPredictOutcome> GetAsyncPredictOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetAsyncPredictRequest&, const GetAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::GetPredictResultResult> GetPredictResultOutcome;
			typedef std::future<GetPredictResultOutcome> GetPredictResultOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetPredictResultRequest&, const GetPredictResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictResultAsyncHandler;
			typedef Outcome<Error, Model::GetPredictResultHighResult> GetPredictResultHighOutcome;
			typedef std::future<GetPredictResultHighOutcome> GetPredictResultHighOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetPredictResultHighRequest&, const GetPredictResultHighOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictResultHighAsyncHandler;
			typedef Outcome<Error, Model::RunPreTrainServiceResult> RunPreTrainServiceOutcome;
			typedef std::future<RunPreTrainServiceOutcome> RunPreTrainServiceOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::RunPreTrainServiceRequest&, const RunPreTrainServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunPreTrainServiceAsyncHandler;
			typedef Outcome<Error, Model::RunPreTrainServiceNewResult> RunPreTrainServiceNewOutcome;
			typedef std::future<RunPreTrainServiceNewOutcome> RunPreTrainServiceNewOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::RunPreTrainServiceNewRequest&, const RunPreTrainServiceNewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunPreTrainServiceNewAsyncHandler;

			Nlp_automlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Nlp_automlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Nlp_automlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Nlp_automlClient();
			CreateAsyncPredictOutcome createAsyncPredict(const Model::CreateAsyncPredictRequest &request)const;
			void createAsyncPredictAsync(const Model::CreateAsyncPredictRequest& request, const CreateAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAsyncPredictOutcomeCallable createAsyncPredictCallable(const Model::CreateAsyncPredictRequest& request) const;
			FindUserReport4AlinlpOutcome findUserReport4Alinlp(const Model::FindUserReport4AlinlpRequest &request)const;
			void findUserReport4AlinlpAsync(const Model::FindUserReport4AlinlpRequest& request, const FindUserReport4AlinlpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindUserReport4AlinlpOutcomeCallable findUserReport4AlinlpCallable(const Model::FindUserReport4AlinlpRequest& request) const;
			GetAsyncPredictOutcome getAsyncPredict(const Model::GetAsyncPredictRequest &request)const;
			void getAsyncPredictAsync(const Model::GetAsyncPredictRequest& request, const GetAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncPredictOutcomeCallable getAsyncPredictCallable(const Model::GetAsyncPredictRequest& request) const;
			GetPredictResultOutcome getPredictResult(const Model::GetPredictResultRequest &request)const;
			void getPredictResultAsync(const Model::GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictResultOutcomeCallable getPredictResultCallable(const Model::GetPredictResultRequest& request) const;
			GetPredictResultHighOutcome getPredictResultHigh(const Model::GetPredictResultHighRequest &request)const;
			void getPredictResultHighAsync(const Model::GetPredictResultHighRequest& request, const GetPredictResultHighAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictResultHighOutcomeCallable getPredictResultHighCallable(const Model::GetPredictResultHighRequest& request) const;
			RunPreTrainServiceOutcome runPreTrainService(const Model::RunPreTrainServiceRequest &request)const;
			void runPreTrainServiceAsync(const Model::RunPreTrainServiceRequest& request, const RunPreTrainServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunPreTrainServiceOutcomeCallable runPreTrainServiceCallable(const Model::RunPreTrainServiceRequest& request) const;
			RunPreTrainServiceNewOutcome runPreTrainServiceNew(const Model::RunPreTrainServiceNewRequest &request)const;
			void runPreTrainServiceNewAsync(const Model::RunPreTrainServiceNewRequest& request, const RunPreTrainServiceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunPreTrainServiceNewOutcomeCallable runPreTrainServiceNewCallable(const Model::RunPreTrainServiceNewRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_
