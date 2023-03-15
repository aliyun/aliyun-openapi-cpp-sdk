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

#ifndef ALIBABACLOUD_IMAGERECOG_IMAGERECOGCLIENT_H_
#define ALIBABACLOUD_IMAGERECOG_IMAGERECOGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImagerecogExport.h"
#include "model/ClassifyingRubbishRequest.h"
#include "model/ClassifyingRubbishResult.h"
#include "model/DetectFruitsRequest.h"
#include "model/DetectFruitsResult.h"
#include "model/DetectImageElementsRequest.h"
#include "model/DetectImageElementsResult.h"
#include "model/EvaluateCertificateQualityRequest.h"
#include "model/EvaluateCertificateQualityResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/RecognizeFoodRequest.h"
#include "model/RecognizeFoodResult.h"
#include "model/RecognizeImageColorRequest.h"
#include "model/RecognizeImageColorResult.h"
#include "model/RecognizeImageStyleRequest.h"
#include "model/RecognizeImageStyleResult.h"
#include "model/RecognizeSceneRequest.h"
#include "model/RecognizeSceneResult.h"
#include "model/RecognizeVehicleTypeRequest.h"
#include "model/RecognizeVehicleTypeResult.h"
#include "model/TaggingAdImageRequest.h"
#include "model/TaggingAdImageResult.h"
#include "model/TaggingImageRequest.h"
#include "model/TaggingImageResult.h"


namespace AlibabaCloud
{
	namespace Imagerecog
	{
		class ALIBABACLOUD_IMAGERECOG_EXPORT ImagerecogClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ClassifyingRubbishResult> ClassifyingRubbishOutcome;
			typedef std::future<ClassifyingRubbishOutcome> ClassifyingRubbishOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::ClassifyingRubbishRequest&, const ClassifyingRubbishOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyingRubbishAsyncHandler;
			typedef Outcome<Error, Model::DetectFruitsResult> DetectFruitsOutcome;
			typedef std::future<DetectFruitsOutcome> DetectFruitsOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::DetectFruitsRequest&, const DetectFruitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFruitsAsyncHandler;
			typedef Outcome<Error, Model::DetectImageElementsResult> DetectImageElementsOutcome;
			typedef std::future<DetectImageElementsOutcome> DetectImageElementsOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::DetectImageElementsRequest&, const DetectImageElementsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageElementsAsyncHandler;
			typedef Outcome<Error, Model::EvaluateCertificateQualityResult> EvaluateCertificateQualityOutcome;
			typedef std::future<EvaluateCertificateQualityOutcome> EvaluateCertificateQualityOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::EvaluateCertificateQualityRequest&, const EvaluateCertificateQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateCertificateQualityAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFoodResult> RecognizeFoodOutcome;
			typedef std::future<RecognizeFoodOutcome> RecognizeFoodOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::RecognizeFoodRequest&, const RecognizeFoodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFoodAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageColorResult> RecognizeImageColorOutcome;
			typedef std::future<RecognizeImageColorOutcome> RecognizeImageColorOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::RecognizeImageColorRequest&, const RecognizeImageColorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageColorAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageStyleResult> RecognizeImageStyleOutcome;
			typedef std::future<RecognizeImageStyleOutcome> RecognizeImageStyleOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::RecognizeImageStyleRequest&, const RecognizeImageStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageStyleAsyncHandler;
			typedef Outcome<Error, Model::RecognizeSceneResult> RecognizeSceneOutcome;
			typedef std::future<RecognizeSceneOutcome> RecognizeSceneOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::RecognizeSceneRequest&, const RecognizeSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeSceneAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVehicleTypeResult> RecognizeVehicleTypeOutcome;
			typedef std::future<RecognizeVehicleTypeOutcome> RecognizeVehicleTypeOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::RecognizeVehicleTypeRequest&, const RecognizeVehicleTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVehicleTypeAsyncHandler;
			typedef Outcome<Error, Model::TaggingAdImageResult> TaggingAdImageOutcome;
			typedef std::future<TaggingAdImageOutcome> TaggingAdImageOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::TaggingAdImageRequest&, const TaggingAdImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaggingAdImageAsyncHandler;
			typedef Outcome<Error, Model::TaggingImageResult> TaggingImageOutcome;
			typedef std::future<TaggingImageOutcome> TaggingImageOutcomeCallable;
			typedef std::function<void(const ImagerecogClient*, const Model::TaggingImageRequest&, const TaggingImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaggingImageAsyncHandler;

			ImagerecogClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImagerecogClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImagerecogClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImagerecogClient();
			ClassifyingRubbishOutcome classifyingRubbish(const Model::ClassifyingRubbishRequest &request)const;
			void classifyingRubbishAsync(const Model::ClassifyingRubbishRequest& request, const ClassifyingRubbishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClassifyingRubbishOutcomeCallable classifyingRubbishCallable(const Model::ClassifyingRubbishRequest& request) const;
			DetectFruitsOutcome detectFruits(const Model::DetectFruitsRequest &request)const;
			void detectFruitsAsync(const Model::DetectFruitsRequest& request, const DetectFruitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFruitsOutcomeCallable detectFruitsCallable(const Model::DetectFruitsRequest& request) const;
			DetectImageElementsOutcome detectImageElements(const Model::DetectImageElementsRequest &request)const;
			void detectImageElementsAsync(const Model::DetectImageElementsRequest& request, const DetectImageElementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageElementsOutcomeCallable detectImageElementsCallable(const Model::DetectImageElementsRequest& request) const;
			EvaluateCertificateQualityOutcome evaluateCertificateQuality(const Model::EvaluateCertificateQualityRequest &request)const;
			void evaluateCertificateQualityAsync(const Model::EvaluateCertificateQualityRequest& request, const EvaluateCertificateQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateCertificateQualityOutcomeCallable evaluateCertificateQualityCallable(const Model::EvaluateCertificateQualityRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			RecognizeFoodOutcome recognizeFood(const Model::RecognizeFoodRequest &request)const;
			void recognizeFoodAsync(const Model::RecognizeFoodRequest& request, const RecognizeFoodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFoodOutcomeCallable recognizeFoodCallable(const Model::RecognizeFoodRequest& request) const;
			RecognizeImageColorOutcome recognizeImageColor(const Model::RecognizeImageColorRequest &request)const;
			void recognizeImageColorAsync(const Model::RecognizeImageColorRequest& request, const RecognizeImageColorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageColorOutcomeCallable recognizeImageColorCallable(const Model::RecognizeImageColorRequest& request) const;
			RecognizeImageStyleOutcome recognizeImageStyle(const Model::RecognizeImageStyleRequest &request)const;
			void recognizeImageStyleAsync(const Model::RecognizeImageStyleRequest& request, const RecognizeImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageStyleOutcomeCallable recognizeImageStyleCallable(const Model::RecognizeImageStyleRequest& request) const;
			RecognizeSceneOutcome recognizeScene(const Model::RecognizeSceneRequest &request)const;
			void recognizeSceneAsync(const Model::RecognizeSceneRequest& request, const RecognizeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeSceneOutcomeCallable recognizeSceneCallable(const Model::RecognizeSceneRequest& request) const;
			RecognizeVehicleTypeOutcome recognizeVehicleType(const Model::RecognizeVehicleTypeRequest &request)const;
			void recognizeVehicleTypeAsync(const Model::RecognizeVehicleTypeRequest& request, const RecognizeVehicleTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVehicleTypeOutcomeCallable recognizeVehicleTypeCallable(const Model::RecognizeVehicleTypeRequest& request) const;
			TaggingAdImageOutcome taggingAdImage(const Model::TaggingAdImageRequest &request)const;
			void taggingAdImageAsync(const Model::TaggingAdImageRequest& request, const TaggingAdImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaggingAdImageOutcomeCallable taggingAdImageCallable(const Model::TaggingAdImageRequest& request) const;
			TaggingImageOutcome taggingImage(const Model::TaggingImageRequest &request)const;
			void taggingImageAsync(const Model::TaggingImageRequest& request, const TaggingImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaggingImageOutcomeCallable taggingImageCallable(const Model::TaggingImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMAGERECOG_IMAGERECOGCLIENT_H_
