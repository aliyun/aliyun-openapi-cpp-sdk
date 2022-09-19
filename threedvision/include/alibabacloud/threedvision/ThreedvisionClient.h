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

#ifndef ALIBABACLOUD_THREEDVISION_THREEDVISIONCLIENT_H_
#define ALIBABACLOUD_THREEDVISION_THREEDVISIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ThreedvisionExport.h"
#include "model/EstimateMonocularImageDepthRequest.h"
#include "model/EstimateMonocularImageDepthResult.h"
#include "model/EstimateMonocularVideoDepthRequest.h"
#include "model/EstimateMonocularVideoDepthResult.h"
#include "model/EstimateStereoImageDepthRequest.h"
#include "model/EstimateStereoImageDepthResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/ReconstructBodyBySingleImageRequest.h"
#include "model/ReconstructBodyBySingleImageResult.h"
#include "model/ReconstructThreeDMultiViewRequest.h"
#include "model/ReconstructThreeDMultiViewResult.h"


namespace AlibabaCloud
{
	namespace Threedvision
	{
		class ALIBABACLOUD_THREEDVISION_EXPORT ThreedvisionClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::EstimateMonocularImageDepthResult> EstimateMonocularImageDepthOutcome;
			typedef std::future<EstimateMonocularImageDepthOutcome> EstimateMonocularImageDepthOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::EstimateMonocularImageDepthRequest&, const EstimateMonocularImageDepthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstimateMonocularImageDepthAsyncHandler;
			typedef Outcome<Error, Model::EstimateMonocularVideoDepthResult> EstimateMonocularVideoDepthOutcome;
			typedef std::future<EstimateMonocularVideoDepthOutcome> EstimateMonocularVideoDepthOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::EstimateMonocularVideoDepthRequest&, const EstimateMonocularVideoDepthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstimateMonocularVideoDepthAsyncHandler;
			typedef Outcome<Error, Model::EstimateStereoImageDepthResult> EstimateStereoImageDepthOutcome;
			typedef std::future<EstimateStereoImageDepthOutcome> EstimateStereoImageDepthOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::EstimateStereoImageDepthRequest&, const EstimateStereoImageDepthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstimateStereoImageDepthAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReconstructBodyBySingleImageResult> ReconstructBodyBySingleImageOutcome;
			typedef std::future<ReconstructBodyBySingleImageOutcome> ReconstructBodyBySingleImageOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::ReconstructBodyBySingleImageRequest&, const ReconstructBodyBySingleImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReconstructBodyBySingleImageAsyncHandler;
			typedef Outcome<Error, Model::ReconstructThreeDMultiViewResult> ReconstructThreeDMultiViewOutcome;
			typedef std::future<ReconstructThreeDMultiViewOutcome> ReconstructThreeDMultiViewOutcomeCallable;
			typedef std::function<void(const ThreedvisionClient*, const Model::ReconstructThreeDMultiViewRequest&, const ReconstructThreeDMultiViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReconstructThreeDMultiViewAsyncHandler;

			ThreedvisionClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ThreedvisionClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ThreedvisionClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ThreedvisionClient();
			EstimateMonocularImageDepthOutcome estimateMonocularImageDepth(const Model::EstimateMonocularImageDepthRequest &request)const;
			void estimateMonocularImageDepthAsync(const Model::EstimateMonocularImageDepthRequest& request, const EstimateMonocularImageDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstimateMonocularImageDepthOutcomeCallable estimateMonocularImageDepthCallable(const Model::EstimateMonocularImageDepthRequest& request) const;
			EstimateMonocularVideoDepthOutcome estimateMonocularVideoDepth(const Model::EstimateMonocularVideoDepthRequest &request)const;
			void estimateMonocularVideoDepthAsync(const Model::EstimateMonocularVideoDepthRequest& request, const EstimateMonocularVideoDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstimateMonocularVideoDepthOutcomeCallable estimateMonocularVideoDepthCallable(const Model::EstimateMonocularVideoDepthRequest& request) const;
			EstimateStereoImageDepthOutcome estimateStereoImageDepth(const Model::EstimateStereoImageDepthRequest &request)const;
			void estimateStereoImageDepthAsync(const Model::EstimateStereoImageDepthRequest& request, const EstimateStereoImageDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstimateStereoImageDepthOutcomeCallable estimateStereoImageDepthCallable(const Model::EstimateStereoImageDepthRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			ReconstructBodyBySingleImageOutcome reconstructBodyBySingleImage(const Model::ReconstructBodyBySingleImageRequest &request)const;
			void reconstructBodyBySingleImageAsync(const Model::ReconstructBodyBySingleImageRequest& request, const ReconstructBodyBySingleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReconstructBodyBySingleImageOutcomeCallable reconstructBodyBySingleImageCallable(const Model::ReconstructBodyBySingleImageRequest& request) const;
			ReconstructThreeDMultiViewOutcome reconstructThreeDMultiView(const Model::ReconstructThreeDMultiViewRequest &request)const;
			void reconstructThreeDMultiViewAsync(const Model::ReconstructThreeDMultiViewRequest& request, const ReconstructThreeDMultiViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReconstructThreeDMultiViewOutcomeCallable reconstructThreeDMultiViewCallable(const Model::ReconstructThreeDMultiViewRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_THREEDVISION_THREEDVISIONCLIENT_H_
