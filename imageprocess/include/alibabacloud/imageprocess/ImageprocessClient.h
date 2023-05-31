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
#include "model/AnalyzeChestVesselRequest.h"
#include "model/AnalyzeChestVesselResult.h"
#include "model/CalcBMDRequest.h"
#include "model/CalcBMDResult.h"
#include "model/CalcCACSRequest.h"
#include "model/CalcCACSResult.h"
#include "model/ClassifyFNFRequest.h"
#include "model/ClassifyFNFResult.h"
#include "model/DetectCovid19CadRequest.h"
#include "model/DetectCovid19CadResult.h"
#include "model/DetectHipKeypointXRayRequest.h"
#include "model/DetectHipKeypointXRayResult.h"
#include "model/DetectKneeKeypointXRayRequest.h"
#include "model/DetectKneeKeypointXRayResult.h"
#include "model/DetectKneeXRayRequest.h"
#include "model/DetectKneeXRayResult.h"
#include "model/DetectLiverSteatosisRequest.h"
#include "model/DetectLiverSteatosisResult.h"
#include "model/DetectLungNoduleRequest.h"
#include "model/DetectLungNoduleResult.h"
#include "model/DetectLymphRequest.h"
#include "model/DetectLymphResult.h"
#include "model/DetectPancRequest.h"
#include "model/DetectPancResult.h"
#include "model/DetectRibFractureRequest.h"
#include "model/DetectRibFractureResult.h"
#include "model/DetectSkinDiseaseRequest.h"
#include "model/DetectSkinDiseaseResult.h"
#include "model/DetectSpineMRIRequest.h"
#include "model/DetectSpineMRIResult.h"
#include "model/FeedbackSessionRequest.h"
#include "model/FeedbackSessionResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/PredictCVDRequest.h"
#include "model/PredictCVDResult.h"
#include "model/RunCTRegistrationRequest.h"
#include "model/RunCTRegistrationResult.h"
#include "model/RunMedQARequest.h"
#include "model/RunMedQAResult.h"
#include "model/ScreenCRCRequest.h"
#include "model/ScreenCRCResult.h"
#include "model/ScreenChestCTRequest.h"
#include "model/ScreenChestCTResult.h"
#include "model/ScreenECRequest.h"
#include "model/ScreenECResult.h"
#include "model/ScreenGCRequest.h"
#include "model/ScreenGCResult.h"
#include "model/ScreenLCRequest.h"
#include "model/ScreenLCResult.h"
#include "model/SegmentLymphNodeRequest.h"
#include "model/SegmentLymphNodeResult.h"
#include "model/SegmentOARRequest.h"
#include "model/SegmentOARResult.h"
#include "model/TargetVolumeSegmentRequest.h"
#include "model/TargetVolumeSegmentResult.h"
#include "model/TranslateMedRequest.h"
#include "model/TranslateMedResult.h"


namespace AlibabaCloud
{
	namespace Imageprocess
	{
		class ALIBABACLOUD_IMAGEPROCESS_EXPORT ImageprocessClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AnalyzeChestVesselResult> AnalyzeChestVesselOutcome;
			typedef std::future<AnalyzeChestVesselOutcome> AnalyzeChestVesselOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::AnalyzeChestVesselRequest&, const AnalyzeChestVesselOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeChestVesselAsyncHandler;
			typedef Outcome<Error, Model::CalcBMDResult> CalcBMDOutcome;
			typedef std::future<CalcBMDOutcome> CalcBMDOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::CalcBMDRequest&, const CalcBMDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalcBMDAsyncHandler;
			typedef Outcome<Error, Model::CalcCACSResult> CalcCACSOutcome;
			typedef std::future<CalcCACSOutcome> CalcCACSOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::CalcCACSRequest&, const CalcCACSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalcCACSAsyncHandler;
			typedef Outcome<Error, Model::ClassifyFNFResult> ClassifyFNFOutcome;
			typedef std::future<ClassifyFNFOutcome> ClassifyFNFOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ClassifyFNFRequest&, const ClassifyFNFOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyFNFAsyncHandler;
			typedef Outcome<Error, Model::DetectCovid19CadResult> DetectCovid19CadOutcome;
			typedef std::future<DetectCovid19CadOutcome> DetectCovid19CadOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectCovid19CadRequest&, const DetectCovid19CadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectCovid19CadAsyncHandler;
			typedef Outcome<Error, Model::DetectHipKeypointXRayResult> DetectHipKeypointXRayOutcome;
			typedef std::future<DetectHipKeypointXRayOutcome> DetectHipKeypointXRayOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectHipKeypointXRayRequest&, const DetectHipKeypointXRayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectHipKeypointXRayAsyncHandler;
			typedef Outcome<Error, Model::DetectKneeKeypointXRayResult> DetectKneeKeypointXRayOutcome;
			typedef std::future<DetectKneeKeypointXRayOutcome> DetectKneeKeypointXRayOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectKneeKeypointXRayRequest&, const DetectKneeKeypointXRayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectKneeKeypointXRayAsyncHandler;
			typedef Outcome<Error, Model::DetectKneeXRayResult> DetectKneeXRayOutcome;
			typedef std::future<DetectKneeXRayOutcome> DetectKneeXRayOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectKneeXRayRequest&, const DetectKneeXRayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectKneeXRayAsyncHandler;
			typedef Outcome<Error, Model::DetectLiverSteatosisResult> DetectLiverSteatosisOutcome;
			typedef std::future<DetectLiverSteatosisOutcome> DetectLiverSteatosisOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectLiverSteatosisRequest&, const DetectLiverSteatosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLiverSteatosisAsyncHandler;
			typedef Outcome<Error, Model::DetectLungNoduleResult> DetectLungNoduleOutcome;
			typedef std::future<DetectLungNoduleOutcome> DetectLungNoduleOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectLungNoduleRequest&, const DetectLungNoduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLungNoduleAsyncHandler;
			typedef Outcome<Error, Model::DetectLymphResult> DetectLymphOutcome;
			typedef std::future<DetectLymphOutcome> DetectLymphOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectLymphRequest&, const DetectLymphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLymphAsyncHandler;
			typedef Outcome<Error, Model::DetectPancResult> DetectPancOutcome;
			typedef std::future<DetectPancOutcome> DetectPancOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectPancRequest&, const DetectPancOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectPancAsyncHandler;
			typedef Outcome<Error, Model::DetectRibFractureResult> DetectRibFractureOutcome;
			typedef std::future<DetectRibFractureOutcome> DetectRibFractureOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectRibFractureRequest&, const DetectRibFractureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectRibFractureAsyncHandler;
			typedef Outcome<Error, Model::DetectSkinDiseaseResult> DetectSkinDiseaseOutcome;
			typedef std::future<DetectSkinDiseaseOutcome> DetectSkinDiseaseOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectSkinDiseaseRequest&, const DetectSkinDiseaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectSkinDiseaseAsyncHandler;
			typedef Outcome<Error, Model::DetectSpineMRIResult> DetectSpineMRIOutcome;
			typedef std::future<DetectSpineMRIOutcome> DetectSpineMRIOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::DetectSpineMRIRequest&, const DetectSpineMRIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectSpineMRIAsyncHandler;
			typedef Outcome<Error, Model::FeedbackSessionResult> FeedbackSessionOutcome;
			typedef std::future<FeedbackSessionOutcome> FeedbackSessionOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::FeedbackSessionRequest&, const FeedbackSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FeedbackSessionAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::PredictCVDResult> PredictCVDOutcome;
			typedef std::future<PredictCVDOutcome> PredictCVDOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::PredictCVDRequest&, const PredictCVDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictCVDAsyncHandler;
			typedef Outcome<Error, Model::RunCTRegistrationResult> RunCTRegistrationOutcome;
			typedef std::future<RunCTRegistrationOutcome> RunCTRegistrationOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::RunCTRegistrationRequest&, const RunCTRegistrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunCTRegistrationAsyncHandler;
			typedef Outcome<Error, Model::RunMedQAResult> RunMedQAOutcome;
			typedef std::future<RunMedQAOutcome> RunMedQAOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::RunMedQARequest&, const RunMedQAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunMedQAAsyncHandler;
			typedef Outcome<Error, Model::ScreenCRCResult> ScreenCRCOutcome;
			typedef std::future<ScreenCRCOutcome> ScreenCRCOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ScreenCRCRequest&, const ScreenCRCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScreenCRCAsyncHandler;
			typedef Outcome<Error, Model::ScreenChestCTResult> ScreenChestCTOutcome;
			typedef std::future<ScreenChestCTOutcome> ScreenChestCTOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ScreenChestCTRequest&, const ScreenChestCTOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScreenChestCTAsyncHandler;
			typedef Outcome<Error, Model::ScreenECResult> ScreenECOutcome;
			typedef std::future<ScreenECOutcome> ScreenECOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ScreenECRequest&, const ScreenECOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScreenECAsyncHandler;
			typedef Outcome<Error, Model::ScreenGCResult> ScreenGCOutcome;
			typedef std::future<ScreenGCOutcome> ScreenGCOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ScreenGCRequest&, const ScreenGCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScreenGCAsyncHandler;
			typedef Outcome<Error, Model::ScreenLCResult> ScreenLCOutcome;
			typedef std::future<ScreenLCOutcome> ScreenLCOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::ScreenLCRequest&, const ScreenLCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScreenLCAsyncHandler;
			typedef Outcome<Error, Model::SegmentLymphNodeResult> SegmentLymphNodeOutcome;
			typedef std::future<SegmentLymphNodeOutcome> SegmentLymphNodeOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::SegmentLymphNodeRequest&, const SegmentLymphNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SegmentLymphNodeAsyncHandler;
			typedef Outcome<Error, Model::SegmentOARResult> SegmentOAROutcome;
			typedef std::future<SegmentOAROutcome> SegmentOAROutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::SegmentOARRequest&, const SegmentOAROutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SegmentOARAsyncHandler;
			typedef Outcome<Error, Model::TargetVolumeSegmentResult> TargetVolumeSegmentOutcome;
			typedef std::future<TargetVolumeSegmentOutcome> TargetVolumeSegmentOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::TargetVolumeSegmentRequest&, const TargetVolumeSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TargetVolumeSegmentAsyncHandler;
			typedef Outcome<Error, Model::TranslateMedResult> TranslateMedOutcome;
			typedef std::future<TranslateMedOutcome> TranslateMedOutcomeCallable;
			typedef std::function<void(const ImageprocessClient*, const Model::TranslateMedRequest&, const TranslateMedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TranslateMedAsyncHandler;

			ImageprocessClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImageprocessClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImageprocessClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImageprocessClient();
			AnalyzeChestVesselOutcome analyzeChestVessel(const Model::AnalyzeChestVesselRequest &request)const;
			void analyzeChestVesselAsync(const Model::AnalyzeChestVesselRequest& request, const AnalyzeChestVesselAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnalyzeChestVesselOutcomeCallable analyzeChestVesselCallable(const Model::AnalyzeChestVesselRequest& request) const;
			CalcBMDOutcome calcBMD(const Model::CalcBMDRequest &request)const;
			void calcBMDAsync(const Model::CalcBMDRequest& request, const CalcBMDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CalcBMDOutcomeCallable calcBMDCallable(const Model::CalcBMDRequest& request) const;
			CalcCACSOutcome calcCACS(const Model::CalcCACSRequest &request)const;
			void calcCACSAsync(const Model::CalcCACSRequest& request, const CalcCACSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CalcCACSOutcomeCallable calcCACSCallable(const Model::CalcCACSRequest& request) const;
			ClassifyFNFOutcome classifyFNF(const Model::ClassifyFNFRequest &request)const;
			void classifyFNFAsync(const Model::ClassifyFNFRequest& request, const ClassifyFNFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClassifyFNFOutcomeCallable classifyFNFCallable(const Model::ClassifyFNFRequest& request) const;
			DetectCovid19CadOutcome detectCovid19Cad(const Model::DetectCovid19CadRequest &request)const;
			void detectCovid19CadAsync(const Model::DetectCovid19CadRequest& request, const DetectCovid19CadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectCovid19CadOutcomeCallable detectCovid19CadCallable(const Model::DetectCovid19CadRequest& request) const;
			DetectHipKeypointXRayOutcome detectHipKeypointXRay(const Model::DetectHipKeypointXRayRequest &request)const;
			void detectHipKeypointXRayAsync(const Model::DetectHipKeypointXRayRequest& request, const DetectHipKeypointXRayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectHipKeypointXRayOutcomeCallable detectHipKeypointXRayCallable(const Model::DetectHipKeypointXRayRequest& request) const;
			DetectKneeKeypointXRayOutcome detectKneeKeypointXRay(const Model::DetectKneeKeypointXRayRequest &request)const;
			void detectKneeKeypointXRayAsync(const Model::DetectKneeKeypointXRayRequest& request, const DetectKneeKeypointXRayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectKneeKeypointXRayOutcomeCallable detectKneeKeypointXRayCallable(const Model::DetectKneeKeypointXRayRequest& request) const;
			DetectKneeXRayOutcome detectKneeXRay(const Model::DetectKneeXRayRequest &request)const;
			void detectKneeXRayAsync(const Model::DetectKneeXRayRequest& request, const DetectKneeXRayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectKneeXRayOutcomeCallable detectKneeXRayCallable(const Model::DetectKneeXRayRequest& request) const;
			DetectLiverSteatosisOutcome detectLiverSteatosis(const Model::DetectLiverSteatosisRequest &request)const;
			void detectLiverSteatosisAsync(const Model::DetectLiverSteatosisRequest& request, const DetectLiverSteatosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLiverSteatosisOutcomeCallable detectLiverSteatosisCallable(const Model::DetectLiverSteatosisRequest& request) const;
			DetectLungNoduleOutcome detectLungNodule(const Model::DetectLungNoduleRequest &request)const;
			void detectLungNoduleAsync(const Model::DetectLungNoduleRequest& request, const DetectLungNoduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLungNoduleOutcomeCallable detectLungNoduleCallable(const Model::DetectLungNoduleRequest& request) const;
			DetectLymphOutcome detectLymph(const Model::DetectLymphRequest &request)const;
			void detectLymphAsync(const Model::DetectLymphRequest& request, const DetectLymphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLymphOutcomeCallable detectLymphCallable(const Model::DetectLymphRequest& request) const;
			DetectPancOutcome detectPanc(const Model::DetectPancRequest &request)const;
			void detectPancAsync(const Model::DetectPancRequest& request, const DetectPancAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectPancOutcomeCallable detectPancCallable(const Model::DetectPancRequest& request) const;
			DetectRibFractureOutcome detectRibFracture(const Model::DetectRibFractureRequest &request)const;
			void detectRibFractureAsync(const Model::DetectRibFractureRequest& request, const DetectRibFractureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectRibFractureOutcomeCallable detectRibFractureCallable(const Model::DetectRibFractureRequest& request) const;
			DetectSkinDiseaseOutcome detectSkinDisease(const Model::DetectSkinDiseaseRequest &request)const;
			void detectSkinDiseaseAsync(const Model::DetectSkinDiseaseRequest& request, const DetectSkinDiseaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectSkinDiseaseOutcomeCallable detectSkinDiseaseCallable(const Model::DetectSkinDiseaseRequest& request) const;
			DetectSpineMRIOutcome detectSpineMRI(const Model::DetectSpineMRIRequest &request)const;
			void detectSpineMRIAsync(const Model::DetectSpineMRIRequest& request, const DetectSpineMRIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectSpineMRIOutcomeCallable detectSpineMRICallable(const Model::DetectSpineMRIRequest& request) const;
			FeedbackSessionOutcome feedbackSession(const Model::FeedbackSessionRequest &request)const;
			void feedbackSessionAsync(const Model::FeedbackSessionRequest& request, const FeedbackSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FeedbackSessionOutcomeCallable feedbackSessionCallable(const Model::FeedbackSessionRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			PredictCVDOutcome predictCVD(const Model::PredictCVDRequest &request)const;
			void predictCVDAsync(const Model::PredictCVDRequest& request, const PredictCVDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictCVDOutcomeCallable predictCVDCallable(const Model::PredictCVDRequest& request) const;
			RunCTRegistrationOutcome runCTRegistration(const Model::RunCTRegistrationRequest &request)const;
			void runCTRegistrationAsync(const Model::RunCTRegistrationRequest& request, const RunCTRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunCTRegistrationOutcomeCallable runCTRegistrationCallable(const Model::RunCTRegistrationRequest& request) const;
			RunMedQAOutcome runMedQA(const Model::RunMedQARequest &request)const;
			void runMedQAAsync(const Model::RunMedQARequest& request, const RunMedQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunMedQAOutcomeCallable runMedQACallable(const Model::RunMedQARequest& request) const;
			ScreenCRCOutcome screenCRC(const Model::ScreenCRCRequest &request)const;
			void screenCRCAsync(const Model::ScreenCRCRequest& request, const ScreenCRCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScreenCRCOutcomeCallable screenCRCCallable(const Model::ScreenCRCRequest& request) const;
			ScreenChestCTOutcome screenChestCT(const Model::ScreenChestCTRequest &request)const;
			void screenChestCTAsync(const Model::ScreenChestCTRequest& request, const ScreenChestCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScreenChestCTOutcomeCallable screenChestCTCallable(const Model::ScreenChestCTRequest& request) const;
			ScreenECOutcome screenEC(const Model::ScreenECRequest &request)const;
			void screenECAsync(const Model::ScreenECRequest& request, const ScreenECAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScreenECOutcomeCallable screenECCallable(const Model::ScreenECRequest& request) const;
			ScreenGCOutcome screenGC(const Model::ScreenGCRequest &request)const;
			void screenGCAsync(const Model::ScreenGCRequest& request, const ScreenGCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScreenGCOutcomeCallable screenGCCallable(const Model::ScreenGCRequest& request) const;
			ScreenLCOutcome screenLC(const Model::ScreenLCRequest &request)const;
			void screenLCAsync(const Model::ScreenLCRequest& request, const ScreenLCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScreenLCOutcomeCallable screenLCCallable(const Model::ScreenLCRequest& request) const;
			SegmentLymphNodeOutcome segmentLymphNode(const Model::SegmentLymphNodeRequest &request)const;
			void segmentLymphNodeAsync(const Model::SegmentLymphNodeRequest& request, const SegmentLymphNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SegmentLymphNodeOutcomeCallable segmentLymphNodeCallable(const Model::SegmentLymphNodeRequest& request) const;
			SegmentOAROutcome segmentOAR(const Model::SegmentOARRequest &request)const;
			void segmentOARAsync(const Model::SegmentOARRequest& request, const SegmentOARAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SegmentOAROutcomeCallable segmentOARCallable(const Model::SegmentOARRequest& request) const;
			TargetVolumeSegmentOutcome targetVolumeSegment(const Model::TargetVolumeSegmentRequest &request)const;
			void targetVolumeSegmentAsync(const Model::TargetVolumeSegmentRequest& request, const TargetVolumeSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TargetVolumeSegmentOutcomeCallable targetVolumeSegmentCallable(const Model::TargetVolumeSegmentRequest& request) const;
			TranslateMedOutcome translateMed(const Model::TranslateMedRequest &request)const;
			void translateMedAsync(const Model::TranslateMedRequest& request, const TranslateMedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TranslateMedOutcomeCallable translateMedCallable(const Model::TranslateMedRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMAGEPROCESS_IMAGEPROCESSCLIENT_H_
