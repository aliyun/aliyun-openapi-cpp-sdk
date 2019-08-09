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

#ifndef ALIBABACLOUD_IVISION_IVISIONCLIENT_H_
#define ALIBABACLOUD_IVISION_IVISIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IvisionExport.h"
#include "model/TrainProjectRequest.h"
#include "model/TrainProjectResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/StartStreamPredictRequest.h"
#include "model/StartStreamPredictResult.h"
#include "model/DescribeTrainResultRequest.h"
#include "model/DescribeTrainResultResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/DescribeIterationsRequest.h"
#include "model/DescribeIterationsResult.h"
#include "model/DescribeTrainDatasByIdsRequest.h"
#include "model/DescribeTrainDatasByIdsResult.h"
#include "model/CreateTrainDatasFromPredictionRequest.h"
#include "model/CreateTrainDatasFromPredictionResult.h"
#include "model/ModifyTagAttributeRequest.h"
#include "model/ModifyTagAttributeResult.h"
#include "model/CreateTrainDataRegionTagRequest.h"
#include "model/CreateTrainDataRegionTagResult.h"
#include "model/DeleteFaceGroupRequest.h"
#include "model/DeleteFaceGroupResult.h"
#include "model/StopStreamPredictRequest.h"
#include "model/StopStreamPredictResult.h"
#include "model/CreateTrainDataTagRequest.h"
#include "model/CreateTrainDataTagResult.h"
#include "model/DeleteTagRequest.h"
#include "model/DeleteTagResult.h"
#include "model/ModifyTrainDataTagAttributeRequest.h"
#include "model/ModifyTrainDataTagAttributeResult.h"
#include "model/ModifyTrainDataRegionTagAttributeRequest.h"
#include "model/ModifyTrainDataRegionTagAttributeResult.h"
#include "model/DescribeStreamPredictsRequest.h"
#include "model/DescribeStreamPredictsResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeStreamPredictResultRequest.h"
#include "model/DescribeStreamPredictResultResult.h"
#include "model/DeleteIterationRequest.h"
#include "model/DeleteIterationResult.h"
#include "model/CreateTrainDatasTagRequest.h"
#include "model/CreateTrainDatasTagResult.h"
#include "model/DeleteTrainDatasTagRequest.h"
#include "model/DeleteTrainDatasTagResult.h"
#include "model/ImagePredictRequest.h"
#include "model/ImagePredictResult.h"
#include "model/CreateStreamPredictRequest.h"
#include "model/CreateStreamPredictResult.h"
#include "model/DeleteStreamPredictRequest.h"
#include "model/DeleteStreamPredictResult.h"
#include "model/DescribeFaceGroupsRequest.h"
#include "model/DescribeFaceGroupsResult.h"
#include "model/ModifyProjectAttributeRequest.h"
#include "model/ModifyProjectAttributeResult.h"
#include "model/DescribeProjectsRequest.h"
#include "model/DescribeProjectsResult.h"
#include "model/CreateFaceGroupRequest.h"
#include "model/CreateFaceGroupResult.h"
#include "model/DeleteTrainDatasRequest.h"
#include "model/DeleteTrainDatasResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DescribePredictDatasRequest.h"
#include "model/DescribePredictDatasResult.h"
#include "model/SearchFaceRequest.h"
#include "model/SearchFaceResult.h"
#include "model/CreateTrainDatasFromUrlsRequest.h"
#include "model/CreateTrainDatasFromUrlsResult.h"
#include "model/UnregisterFaceRequest.h"
#include "model/UnregisterFaceResult.h"
#include "model/DeletePredictDatasRequest.h"
#include "model/DeletePredictDatasResult.h"
#include "model/DescribeTrainDatasRequest.h"
#include "model/DescribeTrainDatasResult.h"
#include "model/RegisterFaceRequest.h"
#include "model/RegisterFaceResult.h"
#include "model/CreateUploadTokenRequest.h"
#include "model/CreateUploadTokenResult.h"
#include "model/PredictImageRequest.h"
#include "model/PredictImageResult.h"


namespace AlibabaCloud
{
	namespace Ivision
	{
		class ALIBABACLOUD_IVISION_EXPORT IvisionClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::TrainProjectResult> TrainProjectOutcome;
			typedef std::future<TrainProjectOutcome> TrainProjectOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::TrainProjectRequest&, const TrainProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TrainProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::StartStreamPredictResult> StartStreamPredictOutcome;
			typedef std::future<StartStreamPredictOutcome> StartStreamPredictOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::StartStreamPredictRequest&, const StartStreamPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamPredictAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrainResultResult> DescribeTrainResultOutcome;
			typedef std::future<DescribeTrainResultOutcome> DescribeTrainResultOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeTrainResultRequest&, const DescribeTrainResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainResultAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribeIterationsResult> DescribeIterationsOutcome;
			typedef std::future<DescribeIterationsOutcome> DescribeIterationsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeIterationsRequest&, const DescribeIterationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIterationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrainDatasByIdsResult> DescribeTrainDatasByIdsOutcome;
			typedef std::future<DescribeTrainDatasByIdsOutcome> DescribeTrainDatasByIdsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeTrainDatasByIdsRequest&, const DescribeTrainDatasByIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainDatasByIdsAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainDatasFromPredictionResult> CreateTrainDatasFromPredictionOutcome;
			typedef std::future<CreateTrainDatasFromPredictionOutcome> CreateTrainDatasFromPredictionOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTrainDatasFromPredictionRequest&, const CreateTrainDatasFromPredictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainDatasFromPredictionAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagAttributeResult> ModifyTagAttributeOutcome;
			typedef std::future<ModifyTagAttributeOutcome> ModifyTagAttributeOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::ModifyTagAttributeRequest&, const ModifyTagAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainDataRegionTagResult> CreateTrainDataRegionTagOutcome;
			typedef std::future<CreateTrainDataRegionTagOutcome> CreateTrainDataRegionTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTrainDataRegionTagRequest&, const CreateTrainDataRegionTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainDataRegionTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceGroupResult> DeleteFaceGroupOutcome;
			typedef std::future<DeleteFaceGroupOutcome> DeleteFaceGroupOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteFaceGroupRequest&, const DeleteFaceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceGroupAsyncHandler;
			typedef Outcome<Error, Model::StopStreamPredictResult> StopStreamPredictOutcome;
			typedef std::future<StopStreamPredictOutcome> StopStreamPredictOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::StopStreamPredictRequest&, const StopStreamPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamPredictAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainDataTagResult> CreateTrainDataTagOutcome;
			typedef std::future<CreateTrainDataTagOutcome> CreateTrainDataTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTrainDataTagRequest&, const CreateTrainDataTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainDataTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResult> DeleteTagOutcome;
			typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteTagRequest&, const DeleteTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
			typedef Outcome<Error, Model::ModifyTrainDataTagAttributeResult> ModifyTrainDataTagAttributeOutcome;
			typedef std::future<ModifyTrainDataTagAttributeOutcome> ModifyTrainDataTagAttributeOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::ModifyTrainDataTagAttributeRequest&, const ModifyTrainDataTagAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTrainDataTagAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyTrainDataRegionTagAttributeResult> ModifyTrainDataRegionTagAttributeOutcome;
			typedef std::future<ModifyTrainDataRegionTagAttributeOutcome> ModifyTrainDataRegionTagAttributeOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::ModifyTrainDataRegionTagAttributeRequest&, const ModifyTrainDataRegionTagAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTrainDataRegionTagAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamPredictsResult> DescribeStreamPredictsOutcome;
			typedef std::future<DescribeStreamPredictsOutcome> DescribeStreamPredictsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeStreamPredictsRequest&, const DescribeStreamPredictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPredictsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamPredictResultResult> DescribeStreamPredictResultOutcome;
			typedef std::future<DescribeStreamPredictResultOutcome> DescribeStreamPredictResultOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeStreamPredictResultRequest&, const DescribeStreamPredictResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPredictResultAsyncHandler;
			typedef Outcome<Error, Model::DeleteIterationResult> DeleteIterationOutcome;
			typedef std::future<DeleteIterationOutcome> DeleteIterationOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteIterationRequest&, const DeleteIterationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIterationAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainDatasTagResult> CreateTrainDatasTagOutcome;
			typedef std::future<CreateTrainDatasTagOutcome> CreateTrainDatasTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTrainDatasTagRequest&, const CreateTrainDatasTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainDatasTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrainDatasTagResult> DeleteTrainDatasTagOutcome;
			typedef std::future<DeleteTrainDatasTagOutcome> DeleteTrainDatasTagOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteTrainDatasTagRequest&, const DeleteTrainDatasTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainDatasTagAsyncHandler;
			typedef Outcome<Error, Model::ImagePredictResult> ImagePredictOutcome;
			typedef std::future<ImagePredictOutcome> ImagePredictOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::ImagePredictRequest&, const ImagePredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImagePredictAsyncHandler;
			typedef Outcome<Error, Model::CreateStreamPredictResult> CreateStreamPredictOutcome;
			typedef std::future<CreateStreamPredictOutcome> CreateStreamPredictOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateStreamPredictRequest&, const CreateStreamPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPredictAsyncHandler;
			typedef Outcome<Error, Model::DeleteStreamPredictResult> DeleteStreamPredictOutcome;
			typedef std::future<DeleteStreamPredictOutcome> DeleteStreamPredictOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteStreamPredictRequest&, const DeleteStreamPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPredictAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceGroupsResult> DescribeFaceGroupsOutcome;
			typedef std::future<DescribeFaceGroupsOutcome> DescribeFaceGroupsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeFaceGroupsRequest&, const DescribeFaceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ModifyProjectAttributeResult> ModifyProjectAttributeOutcome;
			typedef std::future<ModifyProjectAttributeOutcome> ModifyProjectAttributeOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::ModifyProjectAttributeRequest&, const ModifyProjectAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectsResult> DescribeProjectsOutcome;
			typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeProjectsRequest&, const DescribeProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
			typedef Outcome<Error, Model::CreateFaceGroupResult> CreateFaceGroupOutcome;
			typedef std::future<CreateFaceGroupOutcome> CreateFaceGroupOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateFaceGroupRequest&, const CreateFaceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrainDatasResult> DeleteTrainDatasOutcome;
			typedef std::future<DeleteTrainDatasOutcome> DeleteTrainDatasOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteTrainDatasRequest&, const DeleteTrainDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainDatasAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribePredictDatasResult> DescribePredictDatasOutcome;
			typedef std::future<DescribePredictDatasOutcome> DescribePredictDatasOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribePredictDatasRequest&, const DescribePredictDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictDatasAsyncHandler;
			typedef Outcome<Error, Model::SearchFaceResult> SearchFaceOutcome;
			typedef std::future<SearchFaceOutcome> SearchFaceOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::SearchFaceRequest&, const SearchFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchFaceAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainDatasFromUrlsResult> CreateTrainDatasFromUrlsOutcome;
			typedef std::future<CreateTrainDatasFromUrlsOutcome> CreateTrainDatasFromUrlsOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateTrainDatasFromUrlsRequest&, const CreateTrainDatasFromUrlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainDatasFromUrlsAsyncHandler;
			typedef Outcome<Error, Model::UnregisterFaceResult> UnregisterFaceOutcome;
			typedef std::future<UnregisterFaceOutcome> UnregisterFaceOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::UnregisterFaceRequest&, const UnregisterFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnregisterFaceAsyncHandler;
			typedef Outcome<Error, Model::DeletePredictDatasResult> DeletePredictDatasOutcome;
			typedef std::future<DeletePredictDatasOutcome> DeletePredictDatasOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DeletePredictDatasRequest&, const DeletePredictDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePredictDatasAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrainDatasResult> DescribeTrainDatasOutcome;
			typedef std::future<DescribeTrainDatasOutcome> DescribeTrainDatasOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::DescribeTrainDatasRequest&, const DescribeTrainDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainDatasAsyncHandler;
			typedef Outcome<Error, Model::RegisterFaceResult> RegisterFaceOutcome;
			typedef std::future<RegisterFaceOutcome> RegisterFaceOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::RegisterFaceRequest&, const RegisterFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterFaceAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadTokenResult> CreateUploadTokenOutcome;
			typedef std::future<CreateUploadTokenOutcome> CreateUploadTokenOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::CreateUploadTokenRequest&, const CreateUploadTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadTokenAsyncHandler;
			typedef Outcome<Error, Model::PredictImageResult> PredictImageOutcome;
			typedef std::future<PredictImageOutcome> PredictImageOutcomeCallable;
			typedef std::function<void(const IvisionClient*, const Model::PredictImageRequest&, const PredictImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictImageAsyncHandler;

			IvisionClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IvisionClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IvisionClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IvisionClient();
			TrainProjectOutcome trainProject(const Model::TrainProjectRequest &request)const;
			void trainProjectAsync(const Model::TrainProjectRequest& request, const TrainProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TrainProjectOutcomeCallable trainProjectCallable(const Model::TrainProjectRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			StartStreamPredictOutcome startStreamPredict(const Model::StartStreamPredictRequest &request)const;
			void startStreamPredictAsync(const Model::StartStreamPredictRequest& request, const StartStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartStreamPredictOutcomeCallable startStreamPredictCallable(const Model::StartStreamPredictRequest& request) const;
			DescribeTrainResultOutcome describeTrainResult(const Model::DescribeTrainResultRequest &request)const;
			void describeTrainResultAsync(const Model::DescribeTrainResultRequest& request, const DescribeTrainResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrainResultOutcomeCallable describeTrainResultCallable(const Model::DescribeTrainResultRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			DescribeIterationsOutcome describeIterations(const Model::DescribeIterationsRequest &request)const;
			void describeIterationsAsync(const Model::DescribeIterationsRequest& request, const DescribeIterationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIterationsOutcomeCallable describeIterationsCallable(const Model::DescribeIterationsRequest& request) const;
			DescribeTrainDatasByIdsOutcome describeTrainDatasByIds(const Model::DescribeTrainDatasByIdsRequest &request)const;
			void describeTrainDatasByIdsAsync(const Model::DescribeTrainDatasByIdsRequest& request, const DescribeTrainDatasByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrainDatasByIdsOutcomeCallable describeTrainDatasByIdsCallable(const Model::DescribeTrainDatasByIdsRequest& request) const;
			CreateTrainDatasFromPredictionOutcome createTrainDatasFromPrediction(const Model::CreateTrainDatasFromPredictionRequest &request)const;
			void createTrainDatasFromPredictionAsync(const Model::CreateTrainDatasFromPredictionRequest& request, const CreateTrainDatasFromPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainDatasFromPredictionOutcomeCallable createTrainDatasFromPredictionCallable(const Model::CreateTrainDatasFromPredictionRequest& request) const;
			ModifyTagAttributeOutcome modifyTagAttribute(const Model::ModifyTagAttributeRequest &request)const;
			void modifyTagAttributeAsync(const Model::ModifyTagAttributeRequest& request, const ModifyTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagAttributeOutcomeCallable modifyTagAttributeCallable(const Model::ModifyTagAttributeRequest& request) const;
			CreateTrainDataRegionTagOutcome createTrainDataRegionTag(const Model::CreateTrainDataRegionTagRequest &request)const;
			void createTrainDataRegionTagAsync(const Model::CreateTrainDataRegionTagRequest& request, const CreateTrainDataRegionTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainDataRegionTagOutcomeCallable createTrainDataRegionTagCallable(const Model::CreateTrainDataRegionTagRequest& request) const;
			DeleteFaceGroupOutcome deleteFaceGroup(const Model::DeleteFaceGroupRequest &request)const;
			void deleteFaceGroupAsync(const Model::DeleteFaceGroupRequest& request, const DeleteFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceGroupOutcomeCallable deleteFaceGroupCallable(const Model::DeleteFaceGroupRequest& request) const;
			StopStreamPredictOutcome stopStreamPredict(const Model::StopStreamPredictRequest &request)const;
			void stopStreamPredictAsync(const Model::StopStreamPredictRequest& request, const StopStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopStreamPredictOutcomeCallable stopStreamPredictCallable(const Model::StopStreamPredictRequest& request) const;
			CreateTrainDataTagOutcome createTrainDataTag(const Model::CreateTrainDataTagRequest &request)const;
			void createTrainDataTagAsync(const Model::CreateTrainDataTagRequest& request, const CreateTrainDataTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainDataTagOutcomeCallable createTrainDataTagCallable(const Model::CreateTrainDataTagRequest& request) const;
			DeleteTagOutcome deleteTag(const Model::DeleteTagRequest &request)const;
			void deleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagOutcomeCallable deleteTagCallable(const Model::DeleteTagRequest& request) const;
			ModifyTrainDataTagAttributeOutcome modifyTrainDataTagAttribute(const Model::ModifyTrainDataTagAttributeRequest &request)const;
			void modifyTrainDataTagAttributeAsync(const Model::ModifyTrainDataTagAttributeRequest& request, const ModifyTrainDataTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTrainDataTagAttributeOutcomeCallable modifyTrainDataTagAttributeCallable(const Model::ModifyTrainDataTagAttributeRequest& request) const;
			ModifyTrainDataRegionTagAttributeOutcome modifyTrainDataRegionTagAttribute(const Model::ModifyTrainDataRegionTagAttributeRequest &request)const;
			void modifyTrainDataRegionTagAttributeAsync(const Model::ModifyTrainDataRegionTagAttributeRequest& request, const ModifyTrainDataRegionTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTrainDataRegionTagAttributeOutcomeCallable modifyTrainDataRegionTagAttributeCallable(const Model::ModifyTrainDataRegionTagAttributeRequest& request) const;
			DescribeStreamPredictsOutcome describeStreamPredicts(const Model::DescribeStreamPredictsRequest &request)const;
			void describeStreamPredictsAsync(const Model::DescribeStreamPredictsRequest& request, const DescribeStreamPredictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamPredictsOutcomeCallable describeStreamPredictsCallable(const Model::DescribeStreamPredictsRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeStreamPredictResultOutcome describeStreamPredictResult(const Model::DescribeStreamPredictResultRequest &request)const;
			void describeStreamPredictResultAsync(const Model::DescribeStreamPredictResultRequest& request, const DescribeStreamPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamPredictResultOutcomeCallable describeStreamPredictResultCallable(const Model::DescribeStreamPredictResultRequest& request) const;
			DeleteIterationOutcome deleteIteration(const Model::DeleteIterationRequest &request)const;
			void deleteIterationAsync(const Model::DeleteIterationRequest& request, const DeleteIterationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIterationOutcomeCallable deleteIterationCallable(const Model::DeleteIterationRequest& request) const;
			CreateTrainDatasTagOutcome createTrainDatasTag(const Model::CreateTrainDatasTagRequest &request)const;
			void createTrainDatasTagAsync(const Model::CreateTrainDatasTagRequest& request, const CreateTrainDatasTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainDatasTagOutcomeCallable createTrainDatasTagCallable(const Model::CreateTrainDatasTagRequest& request) const;
			DeleteTrainDatasTagOutcome deleteTrainDatasTag(const Model::DeleteTrainDatasTagRequest &request)const;
			void deleteTrainDatasTagAsync(const Model::DeleteTrainDatasTagRequest& request, const DeleteTrainDatasTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrainDatasTagOutcomeCallable deleteTrainDatasTagCallable(const Model::DeleteTrainDatasTagRequest& request) const;
			ImagePredictOutcome imagePredict(const Model::ImagePredictRequest &request)const;
			void imagePredictAsync(const Model::ImagePredictRequest& request, const ImagePredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImagePredictOutcomeCallable imagePredictCallable(const Model::ImagePredictRequest& request) const;
			CreateStreamPredictOutcome createStreamPredict(const Model::CreateStreamPredictRequest &request)const;
			void createStreamPredictAsync(const Model::CreateStreamPredictRequest& request, const CreateStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStreamPredictOutcomeCallable createStreamPredictCallable(const Model::CreateStreamPredictRequest& request) const;
			DeleteStreamPredictOutcome deleteStreamPredict(const Model::DeleteStreamPredictRequest &request)const;
			void deleteStreamPredictAsync(const Model::DeleteStreamPredictRequest& request, const DeleteStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStreamPredictOutcomeCallable deleteStreamPredictCallable(const Model::DeleteStreamPredictRequest& request) const;
			DescribeFaceGroupsOutcome describeFaceGroups(const Model::DescribeFaceGroupsRequest &request)const;
			void describeFaceGroupsAsync(const Model::DescribeFaceGroupsRequest& request, const DescribeFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceGroupsOutcomeCallable describeFaceGroupsCallable(const Model::DescribeFaceGroupsRequest& request) const;
			ModifyProjectAttributeOutcome modifyProjectAttribute(const Model::ModifyProjectAttributeRequest &request)const;
			void modifyProjectAttributeAsync(const Model::ModifyProjectAttributeRequest& request, const ModifyProjectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProjectAttributeOutcomeCallable modifyProjectAttributeCallable(const Model::ModifyProjectAttributeRequest& request) const;
			DescribeProjectsOutcome describeProjects(const Model::DescribeProjectsRequest &request)const;
			void describeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectsOutcomeCallable describeProjectsCallable(const Model::DescribeProjectsRequest& request) const;
			CreateFaceGroupOutcome createFaceGroup(const Model::CreateFaceGroupRequest &request)const;
			void createFaceGroupAsync(const Model::CreateFaceGroupRequest& request, const CreateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFaceGroupOutcomeCallable createFaceGroupCallable(const Model::CreateFaceGroupRequest& request) const;
			DeleteTrainDatasOutcome deleteTrainDatas(const Model::DeleteTrainDatasRequest &request)const;
			void deleteTrainDatasAsync(const Model::DeleteTrainDatasRequest& request, const DeleteTrainDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrainDatasOutcomeCallable deleteTrainDatasCallable(const Model::DeleteTrainDatasRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DescribePredictDatasOutcome describePredictDatas(const Model::DescribePredictDatasRequest &request)const;
			void describePredictDatasAsync(const Model::DescribePredictDatasRequest& request, const DescribePredictDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePredictDatasOutcomeCallable describePredictDatasCallable(const Model::DescribePredictDatasRequest& request) const;
			SearchFaceOutcome searchFace(const Model::SearchFaceRequest &request)const;
			void searchFaceAsync(const Model::SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchFaceOutcomeCallable searchFaceCallable(const Model::SearchFaceRequest& request) const;
			CreateTrainDatasFromUrlsOutcome createTrainDatasFromUrls(const Model::CreateTrainDatasFromUrlsRequest &request)const;
			void createTrainDatasFromUrlsAsync(const Model::CreateTrainDatasFromUrlsRequest& request, const CreateTrainDatasFromUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainDatasFromUrlsOutcomeCallable createTrainDatasFromUrlsCallable(const Model::CreateTrainDatasFromUrlsRequest& request) const;
			UnregisterFaceOutcome unregisterFace(const Model::UnregisterFaceRequest &request)const;
			void unregisterFaceAsync(const Model::UnregisterFaceRequest& request, const UnregisterFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnregisterFaceOutcomeCallable unregisterFaceCallable(const Model::UnregisterFaceRequest& request) const;
			DeletePredictDatasOutcome deletePredictDatas(const Model::DeletePredictDatasRequest &request)const;
			void deletePredictDatasAsync(const Model::DeletePredictDatasRequest& request, const DeletePredictDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePredictDatasOutcomeCallable deletePredictDatasCallable(const Model::DeletePredictDatasRequest& request) const;
			DescribeTrainDatasOutcome describeTrainDatas(const Model::DescribeTrainDatasRequest &request)const;
			void describeTrainDatasAsync(const Model::DescribeTrainDatasRequest& request, const DescribeTrainDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrainDatasOutcomeCallable describeTrainDatasCallable(const Model::DescribeTrainDatasRequest& request) const;
			RegisterFaceOutcome registerFace(const Model::RegisterFaceRequest &request)const;
			void registerFaceAsync(const Model::RegisterFaceRequest& request, const RegisterFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterFaceOutcomeCallable registerFaceCallable(const Model::RegisterFaceRequest& request) const;
			CreateUploadTokenOutcome createUploadToken(const Model::CreateUploadTokenRequest &request)const;
			void createUploadTokenAsync(const Model::CreateUploadTokenRequest& request, const CreateUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadTokenOutcomeCallable createUploadTokenCallable(const Model::CreateUploadTokenRequest& request) const;
			PredictImageOutcome predictImage(const Model::PredictImageRequest &request)const;
			void predictImageAsync(const Model::PredictImageRequest& request, const PredictImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictImageOutcomeCallable predictImageCallable(const Model::PredictImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IVISION_IVISIONCLIENT_H_
