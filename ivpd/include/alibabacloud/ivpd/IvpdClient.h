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

#ifndef ALIBABACLOUD_IVPD_IVPDCLIENT_H_
#define ALIBABACLOUD_IVPD_IVPDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IvpdExport.h"
#include "model/ExtendImageStyleRequest.h"
#include "model/ExtendImageStyleResult.h"
#include "model/DetectImageElementsRequest.h"
#include "model/DetectImageElementsResult.h"
#include "model/RecognizeImageStyleRequest.h"
#include "model/RecognizeImageStyleResult.h"
#include "model/ChangeImageSizeRequest.h"
#include "model/ChangeImageSizeResult.h"
#include "model/SegmentImageRequest.h"
#include "model/SegmentImageResult.h"
#include "model/MakeSuperResolutionImageRequest.h"
#include "model/MakeSuperResolutionImageResult.h"
#include "model/RecognizeImageColorRequest.h"
#include "model/RecognizeImageColorResult.h"
#include "model/RecolorImageRequest.h"
#include "model/RecolorImageResult.h"


namespace AlibabaCloud
{
	namespace Ivpd
	{
		class ALIBABACLOUD_IVPD_EXPORT IvpdClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ExtendImageStyleResult> ExtendImageStyleOutcome;
			typedef std::future<ExtendImageStyleOutcome> ExtendImageStyleOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::ExtendImageStyleRequest&, const ExtendImageStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtendImageStyleAsyncHandler;
			typedef Outcome<Error, Model::DetectImageElementsResult> DetectImageElementsOutcome;
			typedef std::future<DetectImageElementsOutcome> DetectImageElementsOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::DetectImageElementsRequest&, const DetectImageElementsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageElementsAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageStyleResult> RecognizeImageStyleOutcome;
			typedef std::future<RecognizeImageStyleOutcome> RecognizeImageStyleOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecognizeImageStyleRequest&, const RecognizeImageStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageStyleAsyncHandler;
			typedef Outcome<Error, Model::ChangeImageSizeResult> ChangeImageSizeOutcome;
			typedef std::future<ChangeImageSizeOutcome> ChangeImageSizeOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::ChangeImageSizeRequest&, const ChangeImageSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeImageSizeAsyncHandler;
			typedef Outcome<Error, Model::SegmentImageResult> SegmentImageOutcome;
			typedef std::future<SegmentImageOutcome> SegmentImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::SegmentImageRequest&, const SegmentImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SegmentImageAsyncHandler;
			typedef Outcome<Error, Model::MakeSuperResolutionImageResult> MakeSuperResolutionImageOutcome;
			typedef std::future<MakeSuperResolutionImageOutcome> MakeSuperResolutionImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::MakeSuperResolutionImageRequest&, const MakeSuperResolutionImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MakeSuperResolutionImageAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageColorResult> RecognizeImageColorOutcome;
			typedef std::future<RecognizeImageColorOutcome> RecognizeImageColorOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecognizeImageColorRequest&, const RecognizeImageColorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageColorAsyncHandler;
			typedef Outcome<Error, Model::RecolorImageResult> RecolorImageOutcome;
			typedef std::future<RecolorImageOutcome> RecolorImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecolorImageRequest&, const RecolorImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecolorImageAsyncHandler;

			IvpdClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IvpdClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IvpdClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IvpdClient();
			ExtendImageStyleOutcome extendImageStyle(const Model::ExtendImageStyleRequest &request)const;
			void extendImageStyleAsync(const Model::ExtendImageStyleRequest& request, const ExtendImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtendImageStyleOutcomeCallable extendImageStyleCallable(const Model::ExtendImageStyleRequest& request) const;
			DetectImageElementsOutcome detectImageElements(const Model::DetectImageElementsRequest &request)const;
			void detectImageElementsAsync(const Model::DetectImageElementsRequest& request, const DetectImageElementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageElementsOutcomeCallable detectImageElementsCallable(const Model::DetectImageElementsRequest& request) const;
			RecognizeImageStyleOutcome recognizeImageStyle(const Model::RecognizeImageStyleRequest &request)const;
			void recognizeImageStyleAsync(const Model::RecognizeImageStyleRequest& request, const RecognizeImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageStyleOutcomeCallable recognizeImageStyleCallable(const Model::RecognizeImageStyleRequest& request) const;
			ChangeImageSizeOutcome changeImageSize(const Model::ChangeImageSizeRequest &request)const;
			void changeImageSizeAsync(const Model::ChangeImageSizeRequest& request, const ChangeImageSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeImageSizeOutcomeCallable changeImageSizeCallable(const Model::ChangeImageSizeRequest& request) const;
			SegmentImageOutcome segmentImage(const Model::SegmentImageRequest &request)const;
			void segmentImageAsync(const Model::SegmentImageRequest& request, const SegmentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SegmentImageOutcomeCallable segmentImageCallable(const Model::SegmentImageRequest& request) const;
			MakeSuperResolutionImageOutcome makeSuperResolutionImage(const Model::MakeSuperResolutionImageRequest &request)const;
			void makeSuperResolutionImageAsync(const Model::MakeSuperResolutionImageRequest& request, const MakeSuperResolutionImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MakeSuperResolutionImageOutcomeCallable makeSuperResolutionImageCallable(const Model::MakeSuperResolutionImageRequest& request) const;
			RecognizeImageColorOutcome recognizeImageColor(const Model::RecognizeImageColorRequest &request)const;
			void recognizeImageColorAsync(const Model::RecognizeImageColorRequest& request, const RecognizeImageColorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageColorOutcomeCallable recognizeImageColorCallable(const Model::RecognizeImageColorRequest& request) const;
			RecolorImageOutcome recolorImage(const Model::RecolorImageRequest &request)const;
			void recolorImageAsync(const Model::RecolorImageRequest& request, const RecolorImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecolorImageOutcomeCallable recolorImageCallable(const Model::RecolorImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IVPD_IVPDCLIENT_H_
