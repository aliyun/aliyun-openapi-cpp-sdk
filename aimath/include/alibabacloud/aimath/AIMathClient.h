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

#ifndef ALIBABACLOUD_AIMATH_AIMATHCLIENT_H_
#define ALIBABACLOUD_AIMATH_AIMATHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AIMathExport.h"
#include "model/GenAnalysisRequest.h"
#include "model/GenAnalysisResult.h"
#include "model/GenStepRequest.h"
#include "model/GenStepResult.h"
#include "model/GlobalConfirmRequest.h"
#include "model/GlobalConfirmResult.h"
#include "model/UpdateAnalysisRequest.h"
#include "model/UpdateAnalysisResult.h"
#include "model/UpdateStepRequest.h"
#include "model/UpdateStepResult.h"


namespace AlibabaCloud
{
	namespace AIMath
	{
		class ALIBABACLOUD_AIMATH_EXPORT AIMathClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GenAnalysisResult> GenAnalysisOutcome;
			typedef std::future<GenAnalysisOutcome> GenAnalysisOutcomeCallable;
			typedef std::function<void(const AIMathClient*, const Model::GenAnalysisRequest&, const GenAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenAnalysisAsyncHandler;
			typedef Outcome<Error, Model::GenStepResult> GenStepOutcome;
			typedef std::future<GenStepOutcome> GenStepOutcomeCallable;
			typedef std::function<void(const AIMathClient*, const Model::GenStepRequest&, const GenStepOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenStepAsyncHandler;
			typedef Outcome<Error, Model::GlobalConfirmResult> GlobalConfirmOutcome;
			typedef std::future<GlobalConfirmOutcome> GlobalConfirmOutcomeCallable;
			typedef std::function<void(const AIMathClient*, const Model::GlobalConfirmRequest&, const GlobalConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GlobalConfirmAsyncHandler;
			typedef Outcome<Error, Model::UpdateAnalysisResult> UpdateAnalysisOutcome;
			typedef std::future<UpdateAnalysisOutcome> UpdateAnalysisOutcomeCallable;
			typedef std::function<void(const AIMathClient*, const Model::UpdateAnalysisRequest&, const UpdateAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAnalysisAsyncHandler;
			typedef Outcome<Error, Model::UpdateStepResult> UpdateStepOutcome;
			typedef std::future<UpdateStepOutcome> UpdateStepOutcomeCallable;
			typedef std::function<void(const AIMathClient*, const Model::UpdateStepRequest&, const UpdateStepOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStepAsyncHandler;

			AIMathClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AIMathClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AIMathClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AIMathClient();
			GenAnalysisOutcome genAnalysis(const Model::GenAnalysisRequest &request)const;
			void genAnalysisAsync(const Model::GenAnalysisRequest& request, const GenAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenAnalysisOutcomeCallable genAnalysisCallable(const Model::GenAnalysisRequest& request) const;
			GenStepOutcome genStep(const Model::GenStepRequest &request)const;
			void genStepAsync(const Model::GenStepRequest& request, const GenStepAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenStepOutcomeCallable genStepCallable(const Model::GenStepRequest& request) const;
			GlobalConfirmOutcome globalConfirm(const Model::GlobalConfirmRequest &request)const;
			void globalConfirmAsync(const Model::GlobalConfirmRequest& request, const GlobalConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GlobalConfirmOutcomeCallable globalConfirmCallable(const Model::GlobalConfirmRequest& request) const;
			UpdateAnalysisOutcome updateAnalysis(const Model::UpdateAnalysisRequest &request)const;
			void updateAnalysisAsync(const Model::UpdateAnalysisRequest& request, const UpdateAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAnalysisOutcomeCallable updateAnalysisCallable(const Model::UpdateAnalysisRequest& request) const;
			UpdateStepOutcome updateStep(const Model::UpdateStepRequest &request)const;
			void updateStepAsync(const Model::UpdateStepRequest& request, const UpdateStepAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStepOutcomeCallable updateStepCallable(const Model::UpdateStepRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIMATH_AIMATHCLIENT_H_
