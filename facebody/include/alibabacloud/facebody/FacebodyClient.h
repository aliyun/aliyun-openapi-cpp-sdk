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

#ifndef ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_
#define ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FacebodyExport.h"
#include "model/AddFaceRequest.h"
#include "model/AddFaceResult.h"
#include "model/AddFaceEntityRequest.h"
#include "model/AddFaceEntityResult.h"
#include "model/AddFaceImageTemplateRequest.h"
#include "model/AddFaceImageTemplateResult.h"
#include "model/BatchAddFacesRequest.h"
#include "model/BatchAddFacesResult.h"
#include "model/BeautifyBodyRequest.h"
#include "model/BeautifyBodyResult.h"
#include "model/BlurFaceRequest.h"
#include "model/BlurFaceResult.h"
#include "model/BodyPostureRequest.h"
#include "model/BodyPostureResult.h"
#include "model/CompareFaceRequest.h"
#include "model/CompareFaceResult.h"
#include "model/CompareFaceWithMaskRequest.h"
#include "model/CompareFaceWithMaskResult.h"
#include "model/CreateFaceDbRequest.h"
#include "model/CreateFaceDbResult.h"
#include "model/DeepfakeFaceRequest.h"
#include "model/DeepfakeFaceResult.h"
#include "model/DeleteFaceRequest.h"
#include "model/DeleteFaceResult.h"
#include "model/DeleteFaceDbRequest.h"
#include "model/DeleteFaceDbResult.h"
#include "model/DeleteFaceEntityRequest.h"
#include "model/DeleteFaceEntityResult.h"
#include "model/DeleteFaceImageTemplateRequest.h"
#include "model/DeleteFaceImageTemplateResult.h"
#include "model/DetectBodyCountRequest.h"
#include "model/DetectBodyCountResult.h"
#include "model/DetectCelebrityRequest.h"
#include "model/DetectCelebrityResult.h"
#include "model/DetectChefCapRequest.h"
#include "model/DetectChefCapResult.h"
#include "model/DetectFaceRequest.h"
#include "model/DetectFaceResult.h"
#include "model/DetectInfraredLivingFaceRequest.h"
#include "model/DetectInfraredLivingFaceResult.h"
#include "model/DetectLivingFaceRequest.h"
#include "model/DetectLivingFaceResult.h"
#include "model/DetectPedestrianRequest.h"
#include "model/DetectPedestrianResult.h"
#include "model/DetectPedestrianIntrusionRequest.h"
#include "model/DetectPedestrianIntrusionResult.h"
#include "model/DetectVideoLivingFaceRequest.h"
#include "model/DetectVideoLivingFaceResult.h"
#include "model/EnhanceFaceRequest.h"
#include "model/EnhanceFaceResult.h"
#include "model/ExtractFingerPrintRequest.h"
#include "model/ExtractFingerPrintResult.h"
#include "model/ExtractPedestrianFeatureAttrRequest.h"
#include "model/ExtractPedestrianFeatureAttrResult.h"
#include "model/FaceBeautyRequest.h"
#include "model/FaceBeautyResult.h"
#include "model/FaceFilterRequest.h"
#include "model/FaceFilterResult.h"
#include "model/FaceMakeupRequest.h"
#include "model/FaceMakeupResult.h"
#include "model/FaceTidyupRequest.h"
#include "model/FaceTidyupResult.h"
#include "model/GenRealPersonVerificationTokenRequest.h"
#include "model/GenRealPersonVerificationTokenResult.h"
#include "model/GenerateHumanAnimeStyleRequest.h"
#include "model/GenerateHumanAnimeStyleResult.h"
#include "model/GenerateHumanSketchStyleRequest.h"
#include "model/GenerateHumanSketchStyleResult.h"
#include "model/GetFaceEntityRequest.h"
#include "model/GetFaceEntityResult.h"
#include "model/GetRealPersonVerificationResultRequest.h"
#include "model/GetRealPersonVerificationResultResult.h"
#include "model/HandPostureRequest.h"
#include "model/HandPostureResult.h"
#include "model/LiquifyFaceRequest.h"
#include "model/LiquifyFaceResult.h"
#include "model/ListFaceDbsRequest.h"
#include "model/ListFaceDbsResult.h"
#include "model/ListFaceEntitiesRequest.h"
#include "model/ListFaceEntitiesResult.h"
#include "model/MergeImageFaceRequest.h"
#include "model/MergeImageFaceResult.h"
#include "model/MonitorExaminationRequest.h"
#include "model/MonitorExaminationResult.h"
#include "model/PedestrianDetectAttributeRequest.h"
#include "model/PedestrianDetectAttributeResult.h"
#include "model/QueryFaceImageTemplateRequest.h"
#include "model/QueryFaceImageTemplateResult.h"
#include "model/RecognizeActionRequest.h"
#include "model/RecognizeActionResult.h"
#include "model/RecognizeExpressionRequest.h"
#include "model/RecognizeExpressionResult.h"
#include "model/RecognizeFaceRequest.h"
#include "model/RecognizeFaceResult.h"
#include "model/RecognizeHandGestureRequest.h"
#include "model/RecognizeHandGestureResult.h"
#include "model/RecognizePublicFaceRequest.h"
#include "model/RecognizePublicFaceResult.h"
#include "model/RetouchBodyRequest.h"
#include "model/RetouchBodyResult.h"
#include "model/RetouchSkinRequest.h"
#include "model/RetouchSkinResult.h"
#include "model/SearchFaceRequest.h"
#include "model/SearchFaceResult.h"
#include "model/UpdateFaceEntityRequest.h"
#include "model/UpdateFaceEntityResult.h"
#include "model/VerifyFaceMaskRequest.h"
#include "model/VerifyFaceMaskResult.h"


namespace AlibabaCloud
{
	namespace Facebody
	{
		class ALIBABACLOUD_FACEBODY_EXPORT FacebodyClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddFaceResult> AddFaceOutcome;
			typedef std::future<AddFaceOutcome> AddFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::AddFaceRequest&, const AddFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceAsyncHandler;
			typedef Outcome<Error, Model::AddFaceEntityResult> AddFaceEntityOutcome;
			typedef std::future<AddFaceEntityOutcome> AddFaceEntityOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::AddFaceEntityRequest&, const AddFaceEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceEntityAsyncHandler;
			typedef Outcome<Error, Model::AddFaceImageTemplateResult> AddFaceImageTemplateOutcome;
			typedef std::future<AddFaceImageTemplateOutcome> AddFaceImageTemplateOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::AddFaceImageTemplateRequest&, const AddFaceImageTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceImageTemplateAsyncHandler;
			typedef Outcome<Error, Model::BatchAddFacesResult> BatchAddFacesOutcome;
			typedef std::future<BatchAddFacesOutcome> BatchAddFacesOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::BatchAddFacesRequest&, const BatchAddFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddFacesAsyncHandler;
			typedef Outcome<Error, Model::BeautifyBodyResult> BeautifyBodyOutcome;
			typedef std::future<BeautifyBodyOutcome> BeautifyBodyOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::BeautifyBodyRequest&, const BeautifyBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BeautifyBodyAsyncHandler;
			typedef Outcome<Error, Model::BlurFaceResult> BlurFaceOutcome;
			typedef std::future<BlurFaceOutcome> BlurFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::BlurFaceRequest&, const BlurFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BlurFaceAsyncHandler;
			typedef Outcome<Error, Model::BodyPostureResult> BodyPostureOutcome;
			typedef std::future<BodyPostureOutcome> BodyPostureOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::BodyPostureRequest&, const BodyPostureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BodyPostureAsyncHandler;
			typedef Outcome<Error, Model::CompareFaceResult> CompareFaceOutcome;
			typedef std::future<CompareFaceOutcome> CompareFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::CompareFaceRequest&, const CompareFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceAsyncHandler;
			typedef Outcome<Error, Model::CompareFaceWithMaskResult> CompareFaceWithMaskOutcome;
			typedef std::future<CompareFaceWithMaskOutcome> CompareFaceWithMaskOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::CompareFaceWithMaskRequest&, const CompareFaceWithMaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceWithMaskAsyncHandler;
			typedef Outcome<Error, Model::CreateFaceDbResult> CreateFaceDbOutcome;
			typedef std::future<CreateFaceDbOutcome> CreateFaceDbOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::CreateFaceDbRequest&, const CreateFaceDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceDbAsyncHandler;
			typedef Outcome<Error, Model::DeepfakeFaceResult> DeepfakeFaceOutcome;
			typedef std::future<DeepfakeFaceOutcome> DeepfakeFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DeepfakeFaceRequest&, const DeepfakeFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeepfakeFaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceResult> DeleteFaceOutcome;
			typedef std::future<DeleteFaceOutcome> DeleteFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DeleteFaceRequest&, const DeleteFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceDbResult> DeleteFaceDbOutcome;
			typedef std::future<DeleteFaceDbOutcome> DeleteFaceDbOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DeleteFaceDbRequest&, const DeleteFaceDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceDbAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceEntityResult> DeleteFaceEntityOutcome;
			typedef std::future<DeleteFaceEntityOutcome> DeleteFaceEntityOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DeleteFaceEntityRequest&, const DeleteFaceEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceImageTemplateResult> DeleteFaceImageTemplateOutcome;
			typedef std::future<DeleteFaceImageTemplateOutcome> DeleteFaceImageTemplateOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DeleteFaceImageTemplateRequest&, const DeleteFaceImageTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceImageTemplateAsyncHandler;
			typedef Outcome<Error, Model::DetectBodyCountResult> DetectBodyCountOutcome;
			typedef std::future<DetectBodyCountOutcome> DetectBodyCountOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectBodyCountRequest&, const DetectBodyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectBodyCountAsyncHandler;
			typedef Outcome<Error, Model::DetectCelebrityResult> DetectCelebrityOutcome;
			typedef std::future<DetectCelebrityOutcome> DetectCelebrityOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectCelebrityRequest&, const DetectCelebrityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectCelebrityAsyncHandler;
			typedef Outcome<Error, Model::DetectChefCapResult> DetectChefCapOutcome;
			typedef std::future<DetectChefCapOutcome> DetectChefCapOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectChefCapRequest&, const DetectChefCapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectChefCapAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceResult> DetectFaceOutcome;
			typedef std::future<DetectFaceOutcome> DetectFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectFaceRequest&, const DetectFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAsyncHandler;
			typedef Outcome<Error, Model::DetectInfraredLivingFaceResult> DetectInfraredLivingFaceOutcome;
			typedef std::future<DetectInfraredLivingFaceOutcome> DetectInfraredLivingFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectInfraredLivingFaceRequest&, const DetectInfraredLivingFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectInfraredLivingFaceAsyncHandler;
			typedef Outcome<Error, Model::DetectLivingFaceResult> DetectLivingFaceOutcome;
			typedef std::future<DetectLivingFaceOutcome> DetectLivingFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectLivingFaceRequest&, const DetectLivingFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectLivingFaceAsyncHandler;
			typedef Outcome<Error, Model::DetectPedestrianResult> DetectPedestrianOutcome;
			typedef std::future<DetectPedestrianOutcome> DetectPedestrianOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectPedestrianRequest&, const DetectPedestrianOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectPedestrianAsyncHandler;
			typedef Outcome<Error, Model::DetectPedestrianIntrusionResult> DetectPedestrianIntrusionOutcome;
			typedef std::future<DetectPedestrianIntrusionOutcome> DetectPedestrianIntrusionOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectPedestrianIntrusionRequest&, const DetectPedestrianIntrusionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectPedestrianIntrusionAsyncHandler;
			typedef Outcome<Error, Model::DetectVideoLivingFaceResult> DetectVideoLivingFaceOutcome;
			typedef std::future<DetectVideoLivingFaceOutcome> DetectVideoLivingFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectVideoLivingFaceRequest&, const DetectVideoLivingFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectVideoLivingFaceAsyncHandler;
			typedef Outcome<Error, Model::EnhanceFaceResult> EnhanceFaceOutcome;
			typedef std::future<EnhanceFaceOutcome> EnhanceFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::EnhanceFaceRequest&, const EnhanceFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceFaceAsyncHandler;
			typedef Outcome<Error, Model::ExtractFingerPrintResult> ExtractFingerPrintOutcome;
			typedef std::future<ExtractFingerPrintOutcome> ExtractFingerPrintOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::ExtractFingerPrintRequest&, const ExtractFingerPrintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtractFingerPrintAsyncHandler;
			typedef Outcome<Error, Model::ExtractPedestrianFeatureAttrResult> ExtractPedestrianFeatureAttrOutcome;
			typedef std::future<ExtractPedestrianFeatureAttrOutcome> ExtractPedestrianFeatureAttrOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::ExtractPedestrianFeatureAttrRequest&, const ExtractPedestrianFeatureAttrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtractPedestrianFeatureAttrAsyncHandler;
			typedef Outcome<Error, Model::FaceBeautyResult> FaceBeautyOutcome;
			typedef std::future<FaceBeautyOutcome> FaceBeautyOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::FaceBeautyRequest&, const FaceBeautyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FaceBeautyAsyncHandler;
			typedef Outcome<Error, Model::FaceFilterResult> FaceFilterOutcome;
			typedef std::future<FaceFilterOutcome> FaceFilterOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::FaceFilterRequest&, const FaceFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FaceFilterAsyncHandler;
			typedef Outcome<Error, Model::FaceMakeupResult> FaceMakeupOutcome;
			typedef std::future<FaceMakeupOutcome> FaceMakeupOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::FaceMakeupRequest&, const FaceMakeupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FaceMakeupAsyncHandler;
			typedef Outcome<Error, Model::FaceTidyupResult> FaceTidyupOutcome;
			typedef std::future<FaceTidyupOutcome> FaceTidyupOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::FaceTidyupRequest&, const FaceTidyupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FaceTidyupAsyncHandler;
			typedef Outcome<Error, Model::GenRealPersonVerificationTokenResult> GenRealPersonVerificationTokenOutcome;
			typedef std::future<GenRealPersonVerificationTokenOutcome> GenRealPersonVerificationTokenOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::GenRealPersonVerificationTokenRequest&, const GenRealPersonVerificationTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenRealPersonVerificationTokenAsyncHandler;
			typedef Outcome<Error, Model::GenerateHumanAnimeStyleResult> GenerateHumanAnimeStyleOutcome;
			typedef std::future<GenerateHumanAnimeStyleOutcome> GenerateHumanAnimeStyleOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::GenerateHumanAnimeStyleRequest&, const GenerateHumanAnimeStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateHumanAnimeStyleAsyncHandler;
			typedef Outcome<Error, Model::GenerateHumanSketchStyleResult> GenerateHumanSketchStyleOutcome;
			typedef std::future<GenerateHumanSketchStyleOutcome> GenerateHumanSketchStyleOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::GenerateHumanSketchStyleRequest&, const GenerateHumanSketchStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateHumanSketchStyleAsyncHandler;
			typedef Outcome<Error, Model::GetFaceEntityResult> GetFaceEntityOutcome;
			typedef std::future<GetFaceEntityOutcome> GetFaceEntityOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::GetFaceEntityRequest&, const GetFaceEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceEntityAsyncHandler;
			typedef Outcome<Error, Model::GetRealPersonVerificationResultResult> GetRealPersonVerificationResultOutcome;
			typedef std::future<GetRealPersonVerificationResultOutcome> GetRealPersonVerificationResultOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::GetRealPersonVerificationResultRequest&, const GetRealPersonVerificationResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRealPersonVerificationResultAsyncHandler;
			typedef Outcome<Error, Model::HandPostureResult> HandPostureOutcome;
			typedef std::future<HandPostureOutcome> HandPostureOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::HandPostureRequest&, const HandPostureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandPostureAsyncHandler;
			typedef Outcome<Error, Model::LiquifyFaceResult> LiquifyFaceOutcome;
			typedef std::future<LiquifyFaceOutcome> LiquifyFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::LiquifyFaceRequest&, const LiquifyFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LiquifyFaceAsyncHandler;
			typedef Outcome<Error, Model::ListFaceDbsResult> ListFaceDbsOutcome;
			typedef std::future<ListFaceDbsOutcome> ListFaceDbsOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::ListFaceDbsRequest&, const ListFaceDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceDbsAsyncHandler;
			typedef Outcome<Error, Model::ListFaceEntitiesResult> ListFaceEntitiesOutcome;
			typedef std::future<ListFaceEntitiesOutcome> ListFaceEntitiesOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::ListFaceEntitiesRequest&, const ListFaceEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceEntitiesAsyncHandler;
			typedef Outcome<Error, Model::MergeImageFaceResult> MergeImageFaceOutcome;
			typedef std::future<MergeImageFaceOutcome> MergeImageFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::MergeImageFaceRequest&, const MergeImageFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MergeImageFaceAsyncHandler;
			typedef Outcome<Error, Model::MonitorExaminationResult> MonitorExaminationOutcome;
			typedef std::future<MonitorExaminationOutcome> MonitorExaminationOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::MonitorExaminationRequest&, const MonitorExaminationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MonitorExaminationAsyncHandler;
			typedef Outcome<Error, Model::PedestrianDetectAttributeResult> PedestrianDetectAttributeOutcome;
			typedef std::future<PedestrianDetectAttributeOutcome> PedestrianDetectAttributeOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::PedestrianDetectAttributeRequest&, const PedestrianDetectAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PedestrianDetectAttributeAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceImageTemplateResult> QueryFaceImageTemplateOutcome;
			typedef std::future<QueryFaceImageTemplateOutcome> QueryFaceImageTemplateOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::QueryFaceImageTemplateRequest&, const QueryFaceImageTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceImageTemplateAsyncHandler;
			typedef Outcome<Error, Model::RecognizeActionResult> RecognizeActionOutcome;
			typedef std::future<RecognizeActionOutcome> RecognizeActionOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RecognizeActionRequest&, const RecognizeActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeActionAsyncHandler;
			typedef Outcome<Error, Model::RecognizeExpressionResult> RecognizeExpressionOutcome;
			typedef std::future<RecognizeExpressionOutcome> RecognizeExpressionOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RecognizeExpressionRequest&, const RecognizeExpressionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeExpressionAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFaceResult> RecognizeFaceOutcome;
			typedef std::future<RecognizeFaceOutcome> RecognizeFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RecognizeFaceRequest&, const RecognizeFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFaceAsyncHandler;
			typedef Outcome<Error, Model::RecognizeHandGestureResult> RecognizeHandGestureOutcome;
			typedef std::future<RecognizeHandGestureOutcome> RecognizeHandGestureOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RecognizeHandGestureRequest&, const RecognizeHandGestureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeHandGestureAsyncHandler;
			typedef Outcome<Error, Model::RecognizePublicFaceResult> RecognizePublicFaceOutcome;
			typedef std::future<RecognizePublicFaceOutcome> RecognizePublicFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RecognizePublicFaceRequest&, const RecognizePublicFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePublicFaceAsyncHandler;
			typedef Outcome<Error, Model::RetouchBodyResult> RetouchBodyOutcome;
			typedef std::future<RetouchBodyOutcome> RetouchBodyOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RetouchBodyRequest&, const RetouchBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetouchBodyAsyncHandler;
			typedef Outcome<Error, Model::RetouchSkinResult> RetouchSkinOutcome;
			typedef std::future<RetouchSkinOutcome> RetouchSkinOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::RetouchSkinRequest&, const RetouchSkinOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetouchSkinAsyncHandler;
			typedef Outcome<Error, Model::SearchFaceResult> SearchFaceOutcome;
			typedef std::future<SearchFaceOutcome> SearchFaceOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::SearchFaceRequest&, const SearchFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchFaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceEntityResult> UpdateFaceEntityOutcome;
			typedef std::future<UpdateFaceEntityOutcome> UpdateFaceEntityOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::UpdateFaceEntityRequest&, const UpdateFaceEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceEntityAsyncHandler;
			typedef Outcome<Error, Model::VerifyFaceMaskResult> VerifyFaceMaskOutcome;
			typedef std::future<VerifyFaceMaskOutcome> VerifyFaceMaskOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::VerifyFaceMaskRequest&, const VerifyFaceMaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyFaceMaskAsyncHandler;

			FacebodyClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FacebodyClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FacebodyClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FacebodyClient();
			AddFaceOutcome addFace(const Model::AddFaceRequest &request)const;
			void addFaceAsync(const Model::AddFaceRequest& request, const AddFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceOutcomeCallable addFaceCallable(const Model::AddFaceRequest& request) const;
			AddFaceEntityOutcome addFaceEntity(const Model::AddFaceEntityRequest &request)const;
			void addFaceEntityAsync(const Model::AddFaceEntityRequest& request, const AddFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceEntityOutcomeCallable addFaceEntityCallable(const Model::AddFaceEntityRequest& request) const;
			AddFaceImageTemplateOutcome addFaceImageTemplate(const Model::AddFaceImageTemplateRequest &request)const;
			void addFaceImageTemplateAsync(const Model::AddFaceImageTemplateRequest& request, const AddFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceImageTemplateOutcomeCallable addFaceImageTemplateCallable(const Model::AddFaceImageTemplateRequest& request) const;
			BatchAddFacesOutcome batchAddFaces(const Model::BatchAddFacesRequest &request)const;
			void batchAddFacesAsync(const Model::BatchAddFacesRequest& request, const BatchAddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddFacesOutcomeCallable batchAddFacesCallable(const Model::BatchAddFacesRequest& request) const;
			BeautifyBodyOutcome beautifyBody(const Model::BeautifyBodyRequest &request)const;
			void beautifyBodyAsync(const Model::BeautifyBodyRequest& request, const BeautifyBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BeautifyBodyOutcomeCallable beautifyBodyCallable(const Model::BeautifyBodyRequest& request) const;
			BlurFaceOutcome blurFace(const Model::BlurFaceRequest &request)const;
			void blurFaceAsync(const Model::BlurFaceRequest& request, const BlurFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BlurFaceOutcomeCallable blurFaceCallable(const Model::BlurFaceRequest& request) const;
			BodyPostureOutcome bodyPosture(const Model::BodyPostureRequest &request)const;
			void bodyPostureAsync(const Model::BodyPostureRequest& request, const BodyPostureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BodyPostureOutcomeCallable bodyPostureCallable(const Model::BodyPostureRequest& request) const;
			CompareFaceOutcome compareFace(const Model::CompareFaceRequest &request)const;
			void compareFaceAsync(const Model::CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFaceOutcomeCallable compareFaceCallable(const Model::CompareFaceRequest& request) const;
			CompareFaceWithMaskOutcome compareFaceWithMask(const Model::CompareFaceWithMaskRequest &request)const;
			void compareFaceWithMaskAsync(const Model::CompareFaceWithMaskRequest& request, const CompareFaceWithMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFaceWithMaskOutcomeCallable compareFaceWithMaskCallable(const Model::CompareFaceWithMaskRequest& request) const;
			CreateFaceDbOutcome createFaceDb(const Model::CreateFaceDbRequest &request)const;
			void createFaceDbAsync(const Model::CreateFaceDbRequest& request, const CreateFaceDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFaceDbOutcomeCallable createFaceDbCallable(const Model::CreateFaceDbRequest& request) const;
			DeepfakeFaceOutcome deepfakeFace(const Model::DeepfakeFaceRequest &request)const;
			void deepfakeFaceAsync(const Model::DeepfakeFaceRequest& request, const DeepfakeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeepfakeFaceOutcomeCallable deepfakeFaceCallable(const Model::DeepfakeFaceRequest& request) const;
			DeleteFaceOutcome deleteFace(const Model::DeleteFaceRequest &request)const;
			void deleteFaceAsync(const Model::DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceOutcomeCallable deleteFaceCallable(const Model::DeleteFaceRequest& request) const;
			DeleteFaceDbOutcome deleteFaceDb(const Model::DeleteFaceDbRequest &request)const;
			void deleteFaceDbAsync(const Model::DeleteFaceDbRequest& request, const DeleteFaceDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceDbOutcomeCallable deleteFaceDbCallable(const Model::DeleteFaceDbRequest& request) const;
			DeleteFaceEntityOutcome deleteFaceEntity(const Model::DeleteFaceEntityRequest &request)const;
			void deleteFaceEntityAsync(const Model::DeleteFaceEntityRequest& request, const DeleteFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceEntityOutcomeCallable deleteFaceEntityCallable(const Model::DeleteFaceEntityRequest& request) const;
			DeleteFaceImageTemplateOutcome deleteFaceImageTemplate(const Model::DeleteFaceImageTemplateRequest &request)const;
			void deleteFaceImageTemplateAsync(const Model::DeleteFaceImageTemplateRequest& request, const DeleteFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceImageTemplateOutcomeCallable deleteFaceImageTemplateCallable(const Model::DeleteFaceImageTemplateRequest& request) const;
			DetectBodyCountOutcome detectBodyCount(const Model::DetectBodyCountRequest &request)const;
			void detectBodyCountAsync(const Model::DetectBodyCountRequest& request, const DetectBodyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectBodyCountOutcomeCallable detectBodyCountCallable(const Model::DetectBodyCountRequest& request) const;
			DetectCelebrityOutcome detectCelebrity(const Model::DetectCelebrityRequest &request)const;
			void detectCelebrityAsync(const Model::DetectCelebrityRequest& request, const DetectCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectCelebrityOutcomeCallable detectCelebrityCallable(const Model::DetectCelebrityRequest& request) const;
			DetectChefCapOutcome detectChefCap(const Model::DetectChefCapRequest &request)const;
			void detectChefCapAsync(const Model::DetectChefCapRequest& request, const DetectChefCapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectChefCapOutcomeCallable detectChefCapCallable(const Model::DetectChefCapRequest& request) const;
			DetectFaceOutcome detectFace(const Model::DetectFaceRequest &request)const;
			void detectFaceAsync(const Model::DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceOutcomeCallable detectFaceCallable(const Model::DetectFaceRequest& request) const;
			DetectInfraredLivingFaceOutcome detectInfraredLivingFace(const Model::DetectInfraredLivingFaceRequest &request)const;
			void detectInfraredLivingFaceAsync(const Model::DetectInfraredLivingFaceRequest& request, const DetectInfraredLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectInfraredLivingFaceOutcomeCallable detectInfraredLivingFaceCallable(const Model::DetectInfraredLivingFaceRequest& request) const;
			DetectLivingFaceOutcome detectLivingFace(const Model::DetectLivingFaceRequest &request)const;
			void detectLivingFaceAsync(const Model::DetectLivingFaceRequest& request, const DetectLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectLivingFaceOutcomeCallable detectLivingFaceCallable(const Model::DetectLivingFaceRequest& request) const;
			DetectPedestrianOutcome detectPedestrian(const Model::DetectPedestrianRequest &request)const;
			void detectPedestrianAsync(const Model::DetectPedestrianRequest& request, const DetectPedestrianAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectPedestrianOutcomeCallable detectPedestrianCallable(const Model::DetectPedestrianRequest& request) const;
			DetectPedestrianIntrusionOutcome detectPedestrianIntrusion(const Model::DetectPedestrianIntrusionRequest &request)const;
			void detectPedestrianIntrusionAsync(const Model::DetectPedestrianIntrusionRequest& request, const DetectPedestrianIntrusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectPedestrianIntrusionOutcomeCallable detectPedestrianIntrusionCallable(const Model::DetectPedestrianIntrusionRequest& request) const;
			DetectVideoLivingFaceOutcome detectVideoLivingFace(const Model::DetectVideoLivingFaceRequest &request)const;
			void detectVideoLivingFaceAsync(const Model::DetectVideoLivingFaceRequest& request, const DetectVideoLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectVideoLivingFaceOutcomeCallable detectVideoLivingFaceCallable(const Model::DetectVideoLivingFaceRequest& request) const;
			EnhanceFaceOutcome enhanceFace(const Model::EnhanceFaceRequest &request)const;
			void enhanceFaceAsync(const Model::EnhanceFaceRequest& request, const EnhanceFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnhanceFaceOutcomeCallable enhanceFaceCallable(const Model::EnhanceFaceRequest& request) const;
			ExtractFingerPrintOutcome extractFingerPrint(const Model::ExtractFingerPrintRequest &request)const;
			void extractFingerPrintAsync(const Model::ExtractFingerPrintRequest& request, const ExtractFingerPrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtractFingerPrintOutcomeCallable extractFingerPrintCallable(const Model::ExtractFingerPrintRequest& request) const;
			ExtractPedestrianFeatureAttrOutcome extractPedestrianFeatureAttr(const Model::ExtractPedestrianFeatureAttrRequest &request)const;
			void extractPedestrianFeatureAttrAsync(const Model::ExtractPedestrianFeatureAttrRequest& request, const ExtractPedestrianFeatureAttrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtractPedestrianFeatureAttrOutcomeCallable extractPedestrianFeatureAttrCallable(const Model::ExtractPedestrianFeatureAttrRequest& request) const;
			FaceBeautyOutcome faceBeauty(const Model::FaceBeautyRequest &request)const;
			void faceBeautyAsync(const Model::FaceBeautyRequest& request, const FaceBeautyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FaceBeautyOutcomeCallable faceBeautyCallable(const Model::FaceBeautyRequest& request) const;
			FaceFilterOutcome faceFilter(const Model::FaceFilterRequest &request)const;
			void faceFilterAsync(const Model::FaceFilterRequest& request, const FaceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FaceFilterOutcomeCallable faceFilterCallable(const Model::FaceFilterRequest& request) const;
			FaceMakeupOutcome faceMakeup(const Model::FaceMakeupRequest &request)const;
			void faceMakeupAsync(const Model::FaceMakeupRequest& request, const FaceMakeupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FaceMakeupOutcomeCallable faceMakeupCallable(const Model::FaceMakeupRequest& request) const;
			FaceTidyupOutcome faceTidyup(const Model::FaceTidyupRequest &request)const;
			void faceTidyupAsync(const Model::FaceTidyupRequest& request, const FaceTidyupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FaceTidyupOutcomeCallable faceTidyupCallable(const Model::FaceTidyupRequest& request) const;
			GenRealPersonVerificationTokenOutcome genRealPersonVerificationToken(const Model::GenRealPersonVerificationTokenRequest &request)const;
			void genRealPersonVerificationTokenAsync(const Model::GenRealPersonVerificationTokenRequest& request, const GenRealPersonVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenRealPersonVerificationTokenOutcomeCallable genRealPersonVerificationTokenCallable(const Model::GenRealPersonVerificationTokenRequest& request) const;
			GenerateHumanAnimeStyleOutcome generateHumanAnimeStyle(const Model::GenerateHumanAnimeStyleRequest &request)const;
			void generateHumanAnimeStyleAsync(const Model::GenerateHumanAnimeStyleRequest& request, const GenerateHumanAnimeStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateHumanAnimeStyleOutcomeCallable generateHumanAnimeStyleCallable(const Model::GenerateHumanAnimeStyleRequest& request) const;
			GenerateHumanSketchStyleOutcome generateHumanSketchStyle(const Model::GenerateHumanSketchStyleRequest &request)const;
			void generateHumanSketchStyleAsync(const Model::GenerateHumanSketchStyleRequest& request, const GenerateHumanSketchStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateHumanSketchStyleOutcomeCallable generateHumanSketchStyleCallable(const Model::GenerateHumanSketchStyleRequest& request) const;
			GetFaceEntityOutcome getFaceEntity(const Model::GetFaceEntityRequest &request)const;
			void getFaceEntityAsync(const Model::GetFaceEntityRequest& request, const GetFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceEntityOutcomeCallable getFaceEntityCallable(const Model::GetFaceEntityRequest& request) const;
			GetRealPersonVerificationResultOutcome getRealPersonVerificationResult(const Model::GetRealPersonVerificationResultRequest &request)const;
			void getRealPersonVerificationResultAsync(const Model::GetRealPersonVerificationResultRequest& request, const GetRealPersonVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRealPersonVerificationResultOutcomeCallable getRealPersonVerificationResultCallable(const Model::GetRealPersonVerificationResultRequest& request) const;
			HandPostureOutcome handPosture(const Model::HandPostureRequest &request)const;
			void handPostureAsync(const Model::HandPostureRequest& request, const HandPostureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandPostureOutcomeCallable handPostureCallable(const Model::HandPostureRequest& request) const;
			LiquifyFaceOutcome liquifyFace(const Model::LiquifyFaceRequest &request)const;
			void liquifyFaceAsync(const Model::LiquifyFaceRequest& request, const LiquifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LiquifyFaceOutcomeCallable liquifyFaceCallable(const Model::LiquifyFaceRequest& request) const;
			ListFaceDbsOutcome listFaceDbs(const Model::ListFaceDbsRequest &request)const;
			void listFaceDbsAsync(const Model::ListFaceDbsRequest& request, const ListFaceDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceDbsOutcomeCallable listFaceDbsCallable(const Model::ListFaceDbsRequest& request) const;
			ListFaceEntitiesOutcome listFaceEntities(const Model::ListFaceEntitiesRequest &request)const;
			void listFaceEntitiesAsync(const Model::ListFaceEntitiesRequest& request, const ListFaceEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceEntitiesOutcomeCallable listFaceEntitiesCallable(const Model::ListFaceEntitiesRequest& request) const;
			MergeImageFaceOutcome mergeImageFace(const Model::MergeImageFaceRequest &request)const;
			void mergeImageFaceAsync(const Model::MergeImageFaceRequest& request, const MergeImageFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MergeImageFaceOutcomeCallable mergeImageFaceCallable(const Model::MergeImageFaceRequest& request) const;
			MonitorExaminationOutcome monitorExamination(const Model::MonitorExaminationRequest &request)const;
			void monitorExaminationAsync(const Model::MonitorExaminationRequest& request, const MonitorExaminationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MonitorExaminationOutcomeCallable monitorExaminationCallable(const Model::MonitorExaminationRequest& request) const;
			PedestrianDetectAttributeOutcome pedestrianDetectAttribute(const Model::PedestrianDetectAttributeRequest &request)const;
			void pedestrianDetectAttributeAsync(const Model::PedestrianDetectAttributeRequest& request, const PedestrianDetectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PedestrianDetectAttributeOutcomeCallable pedestrianDetectAttributeCallable(const Model::PedestrianDetectAttributeRequest& request) const;
			QueryFaceImageTemplateOutcome queryFaceImageTemplate(const Model::QueryFaceImageTemplateRequest &request)const;
			void queryFaceImageTemplateAsync(const Model::QueryFaceImageTemplateRequest& request, const QueryFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceImageTemplateOutcomeCallable queryFaceImageTemplateCallable(const Model::QueryFaceImageTemplateRequest& request) const;
			RecognizeActionOutcome recognizeAction(const Model::RecognizeActionRequest &request)const;
			void recognizeActionAsync(const Model::RecognizeActionRequest& request, const RecognizeActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeActionOutcomeCallable recognizeActionCallable(const Model::RecognizeActionRequest& request) const;
			RecognizeExpressionOutcome recognizeExpression(const Model::RecognizeExpressionRequest &request)const;
			void recognizeExpressionAsync(const Model::RecognizeExpressionRequest& request, const RecognizeExpressionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeExpressionOutcomeCallable recognizeExpressionCallable(const Model::RecognizeExpressionRequest& request) const;
			RecognizeFaceOutcome recognizeFace(const Model::RecognizeFaceRequest &request)const;
			void recognizeFaceAsync(const Model::RecognizeFaceRequest& request, const RecognizeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFaceOutcomeCallable recognizeFaceCallable(const Model::RecognizeFaceRequest& request) const;
			RecognizeHandGestureOutcome recognizeHandGesture(const Model::RecognizeHandGestureRequest &request)const;
			void recognizeHandGestureAsync(const Model::RecognizeHandGestureRequest& request, const RecognizeHandGestureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeHandGestureOutcomeCallable recognizeHandGestureCallable(const Model::RecognizeHandGestureRequest& request) const;
			RecognizePublicFaceOutcome recognizePublicFace(const Model::RecognizePublicFaceRequest &request)const;
			void recognizePublicFaceAsync(const Model::RecognizePublicFaceRequest& request, const RecognizePublicFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizePublicFaceOutcomeCallable recognizePublicFaceCallable(const Model::RecognizePublicFaceRequest& request) const;
			RetouchBodyOutcome retouchBody(const Model::RetouchBodyRequest &request)const;
			void retouchBodyAsync(const Model::RetouchBodyRequest& request, const RetouchBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetouchBodyOutcomeCallable retouchBodyCallable(const Model::RetouchBodyRequest& request) const;
			RetouchSkinOutcome retouchSkin(const Model::RetouchSkinRequest &request)const;
			void retouchSkinAsync(const Model::RetouchSkinRequest& request, const RetouchSkinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetouchSkinOutcomeCallable retouchSkinCallable(const Model::RetouchSkinRequest& request) const;
			SearchFaceOutcome searchFace(const Model::SearchFaceRequest &request)const;
			void searchFaceAsync(const Model::SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchFaceOutcomeCallable searchFaceCallable(const Model::SearchFaceRequest& request) const;
			UpdateFaceEntityOutcome updateFaceEntity(const Model::UpdateFaceEntityRequest &request)const;
			void updateFaceEntityAsync(const Model::UpdateFaceEntityRequest& request, const UpdateFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceEntityOutcomeCallable updateFaceEntityCallable(const Model::UpdateFaceEntityRequest& request) const;
			VerifyFaceMaskOutcome verifyFaceMask(const Model::VerifyFaceMaskRequest &request)const;
			void verifyFaceMaskAsync(const Model::VerifyFaceMaskRequest& request, const VerifyFaceMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyFaceMaskOutcomeCallable verifyFaceMaskCallable(const Model::VerifyFaceMaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_
