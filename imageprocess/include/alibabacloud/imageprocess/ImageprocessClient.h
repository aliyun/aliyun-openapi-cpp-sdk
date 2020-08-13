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

#ifndef ALIBABACLOUD_IMAGEPROCESS_IMAGEPROCESSCLIENT_H_
#define ALIBABACLOUD_IMAGEPROCESS_IMAGEPROCESSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImageprocessExport.h"
#include "model/DetectCovid19CadRequest.h"
#include "model/DetectCovid19CadResult.h"
#include "model/DetectKneeXRayRequest.h"
#include "model/DetectKneeXRayResult.h"
#include "model/DetectLungNoduleRequest.h"
#include "model/DetectLungNoduleResult.h"
#include "model/DetectSpineMRIRequest.h"
#include "model/DetectSpineMRIResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/TranslateMedRequest.h"
#include "model/TranslateMedResult.h"


namespace AlibabaCloud
{
	namespace Imageprocess
	{
		class ALIBABACLOUD_IMAGEPROCESS_EXPORT ImageprocessClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DetectCovid19CadResult> DetectCovid19CadOutcome;
			typedef std::future<DetectCovid19CadOutcome> DetectCovid19CadOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectCovid19CadRequest&, const DetectCovid19CadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectCovid19CadAsyncHandler;
			typedef Outcome<Error, Model::DetectKneeXRayResult> DetectKneeXRayOutcome;
			typedef std::future<DetectKneeXRayOutcome> DetectKneeXRayOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectKneeXRayRequest&, const DetectKneeXRayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectKneeXRayAsyncHandler;
			typedef Outcome<Error, Model::DetectLungNoduleResult> DetectLungNoduleOutcome;
			typedef std::future<DetectLungNoduleOutcome> DetectLungNoduleOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectLungNoduleRequest&, const DetectLungNoduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLungNoduleAsyncHandler;
			typedef Outcome<Error, Model::DetectSpineMRIResult> DetectSpineMRIOutcome;
			typedef std::future<DetectSpineMRIOutcome> DetectSpineMRIOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectSpineMRIRequest&, const DetectSpineMRIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectSpineMRIAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::TranslateMedResult> TranslateMedOutcome;
			typedef std::future<TranslateMedOutcome> TranslateMedOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::TranslateMedRequest&, const TranslateMedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TranslateMedAsyncHandler;

			ImageprocessClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImageprocessClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImageprocessClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImageprocessClient();
			DetectCovid19CadOutcome detectCovid19Cad(const Model::DetectCovid19CadRequest &request)const;
			void detectCovid19CadAsync(const Model::DetectCovid19CadRequest& request, const DetectCovid19CadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectCovid19CadOutcomeCallable detectCovid19CadCallable(const Model::DetectCovid19CadRequest& request) const;
			DetectKneeXRayOutcome detectKneeXRay(const Model::DetectKneeXRayRequest &request)const;
			void detectKneeXRayAsync(const Model::DetectKneeXRayRequest& request, const DetectKneeXRayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectKneeXRayOutcomeCallable detectKneeXRayCallable(const Model::DetectKneeXRayRequest& request) const;
			DetectLungNoduleOutcome detectLungNodule(const Model::DetectLungNoduleRequest &request)const;
			void detectLungNoduleAsync(const Model::DetectLungNoduleRequest& request, const DetectLungNoduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLungNoduleOutcomeCallable detectLungNoduleCallable(const Model::DetectLungNoduleRequest& request) const;
			DetectSpineMRIOutcome detectSpineMRI(const Model::DetectSpineMRIRequest &request)const;
			void detectSpineMRIAsync(const Model::DetectSpineMRIRequest& request, const DetectSpineMRIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectSpineMRIOutcomeCallable detectSpineMRICallable(const Model::DetectSpineMRIRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			TranslateMedOutcome translateMed(const Model::TranslateMedRequest &request)const;
			void translateMedAsync(const Model::TranslateMedRequest& request, const TranslateMedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TranslateMedOutcomeCallable translateMedCallable(const Model::TranslateMedRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMAGEPROCESS_IMAGEPROCESSCLIENT_H_
