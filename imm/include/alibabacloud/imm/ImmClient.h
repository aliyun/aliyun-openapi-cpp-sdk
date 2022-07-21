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

#ifndef ALIBABACLOUD_IMM_IMMCLIENT_H_
#define ALIBABACLOUD_IMM_IMMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImmExport.h"
#include "model/AddStoryFilesRequest.h"
#include "model/AddStoryFilesResult.h"
#include "model/AttachOSSBucketRequest.h"
#include "model/AttachOSSBucketResult.h"
#include "model/BatchDeleteFileMetaRequest.h"
#include "model/BatchDeleteFileMetaResult.h"
#include "model/BatchGetFileMetaRequest.h"
#include "model/BatchGetFileMetaResult.h"
#include "model/BatchIndexFileMetaRequest.h"
#include "model/BatchIndexFileMetaResult.h"
#include "model/BatchUpdateFileMetaRequest.h"
#include "model/BatchUpdateFileMetaResult.h"
#include "model/CompareImageFacesRequest.h"
#include "model/CompareImageFacesResult.h"
#include "model/ConvertOfficeFormatRequest.h"
#include "model/ConvertOfficeFormatResult.h"
#include "model/CreateBindingRequest.h"
#include "model/CreateBindingResult.h"
#include "model/CreateDatasetRequest.h"
#include "model/CreateDatasetResult.h"
#include "model/CreateDetectVideoLabelsTaskRequest.h"
#include "model/CreateDetectVideoLabelsTaskResult.h"
#include "model/CreateFigureClusteringTaskRequest.h"
#include "model/CreateFigureClusteringTaskResult.h"
#include "model/CreateFigureClustersMergingTaskRequest.h"
#include "model/CreateFigureClustersMergingTaskResult.h"
#include "model/CreateGrabFrameTaskRequest.h"
#include "model/CreateGrabFrameTaskResult.h"
#include "model/CreateGroupFacesJobRequest.h"
#include "model/CreateGroupFacesJobResult.h"
#include "model/CreateImageModerationTaskRequest.h"
#include "model/CreateImageModerationTaskResult.h"
#include "model/CreateImageSplicingTaskRequest.h"
#include "model/CreateImageSplicingTaskResult.h"
#include "model/CreateMediaConvertTaskRequest.h"
#include "model/CreateMediaConvertTaskResult.h"
#include "model/CreateMergeFaceGroupsJobRequest.h"
#include "model/CreateMergeFaceGroupsJobResult.h"
#include "model/CreateOfficeConversionTaskRequest.h"
#include "model/CreateOfficeConversionTaskResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateSetRequest.h"
#include "model/CreateSetResult.h"
#include "model/CreateStoryRequest.h"
#include "model/CreateStoryResult.h"
#include "model/CreateVideoCompressTaskRequest.h"
#include "model/CreateVideoCompressTaskResult.h"
#include "model/CreateVideoModerationTaskRequest.h"
#include "model/CreateVideoModerationTaskResult.h"
#include "model/DecodeBlindWatermarkRequest.h"
#include "model/DecodeBlindWatermarkResult.h"
#include "model/DeleteBindingRequest.h"
#include "model/DeleteBindingResult.h"
#include "model/DeleteDatasetRequest.h"
#include "model/DeleteDatasetResult.h"
#include "model/DeleteFileMetaRequest.h"
#include "model/DeleteFileMetaResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteOfficeConversionTaskRequest.h"
#include "model/DeleteOfficeConversionTaskResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteSetRequest.h"
#include "model/DeleteSetResult.h"
#include "model/DeleteStoryRequest.h"
#include "model/DeleteStoryResult.h"
#include "model/DeleteVideoRequest.h"
#include "model/DeleteVideoResult.h"
#include "model/DeleteVideoTaskRequest.h"
#include "model/DeleteVideoTaskResult.h"
#include "model/DetachOSSBucketRequest.h"
#include "model/DetachOSSBucketResult.h"
#include "model/DetectImageBodiesRequest.h"
#include "model/DetectImageBodiesResult.h"
#include "model/DetectImageCodesRequest.h"
#include "model/DetectImageCodesResult.h"
#include "model/DetectImageCroppingRequest.h"
#include "model/DetectImageCroppingResult.h"
#include "model/DetectImageFacesRequest.h"
#include "model/DetectImageFacesResult.h"
#include "model/DetectImageLabelsRequest.h"
#include "model/DetectImageLabelsResult.h"
#include "model/DetectImageQRCodesRequest.h"
#include "model/DetectImageQRCodesResult.h"
#include "model/DetectImageScoreRequest.h"
#include "model/DetectImageScoreResult.h"
#include "model/DetectImageTagsRequest.h"
#include "model/DetectImageTagsResult.h"
#include "model/DetectQRCodesRequest.h"
#include "model/DetectQRCodesResult.h"
#include "model/DetectTextAnomalyRequest.h"
#include "model/DetectTextAnomalyResult.h"
#include "model/EncodeBlindWatermarkRequest.h"
#include "model/EncodeBlindWatermarkResult.h"
#include "model/FindImagesRequest.h"
#include "model/FindImagesResult.h"
#include "model/FindSimilarFacesRequest.h"
#include "model/FindSimilarFacesResult.h"
#include "model/FuzzyQueryRequest.h"
#include "model/FuzzyQueryResult.h"
#include "model/GetBindingRequest.h"
#include "model/GetBindingResult.h"
#include "model/GetDatasetRequest.h"
#include "model/GetDatasetResult.h"
#include "model/GetDetectVideoLabelsResultRequest.h"
#include "model/GetDetectVideoLabelsResultResult.h"
#include "model/GetFigureClusterRequest.h"
#include "model/GetFigureClusterResult.h"
#include "model/GetFileMetaRequest.h"
#include "model/GetFileMetaResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetImageCroppingSuggestionsRequest.h"
#include "model/GetImageCroppingSuggestionsResult.h"
#include "model/GetImageQualityRequest.h"
#include "model/GetImageQualityResult.h"
#include "model/GetMediaMetaRequest.h"
#include "model/GetMediaMetaResult.h"
#include "model/GetOSSBucketAttachmentRequest.h"
#include "model/GetOSSBucketAttachmentResult.h"
#include "model/GetOfficeConversionTaskRequest.h"
#include "model/GetOfficeConversionTaskResult.h"
#include "model/GetOfficePreviewURLRequest.h"
#include "model/GetOfficePreviewURLResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/GetSetRequest.h"
#include "model/GetSetResult.h"
#include "model/GetStoryRequest.h"
#include "model/GetStoryResult.h"
#include "model/GetTaskRequest.h"
#include "model/GetTaskResult.h"
#include "model/GetVideoRequest.h"
#include "model/GetVideoResult.h"
#include "model/GetVideoTaskRequest.h"
#include "model/GetVideoTaskResult.h"
#include "model/GetWebofficeURLRequest.h"
#include "model/GetWebofficeURLResult.h"
#include "model/IndexFileMetaRequest.h"
#include "model/IndexFileMetaResult.h"
#include "model/IndexImageRequest.h"
#include "model/IndexImageResult.h"
#include "model/IndexVideoRequest.h"
#include "model/IndexVideoResult.h"
#include "model/ListBindingsRequest.h"
#include "model/ListBindingsResult.h"
#include "model/ListDatasetsRequest.h"
#include "model/ListDatasetsResult.h"
#include "model/ListFaceGroupsRequest.h"
#include "model/ListFaceGroupsResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListOfficeConversionTaskRequest.h"
#include "model/ListOfficeConversionTaskResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListSetTagsRequest.h"
#include "model/ListSetTagsResult.h"
#include "model/ListSetsRequest.h"
#include "model/ListSetsResult.h"
#include "model/ListTasksRequest.h"
#include "model/ListTasksResult.h"
#include "model/ListVideoAudiosRequest.h"
#include "model/ListVideoAudiosResult.h"
#include "model/ListVideoFramesRequest.h"
#include "model/ListVideoFramesResult.h"
#include "model/ListVideoTasksRequest.h"
#include "model/ListVideoTasksResult.h"
#include "model/ListVideosRequest.h"
#include "model/ListVideosResult.h"
#include "model/MergeFigureClustersRequest.h"
#include "model/MergeFigureClustersResult.h"
#include "model/OpenImmServiceRequest.h"
#include "model/OpenImmServiceResult.h"
#include "model/PutProjectRequest.h"
#include "model/PutProjectResult.h"
#include "model/QueryFigureClustersRequest.h"
#include "model/QueryFigureClustersResult.h"
#include "model/QueryStoriesRequest.h"
#include "model/QueryStoriesResult.h"
#include "model/RefreshOfficePreviewTokenRequest.h"
#include "model/RefreshOfficePreviewTokenResult.h"
#include "model/RefreshWebofficeTokenRequest.h"
#include "model/RefreshWebofficeTokenResult.h"
#include "model/RemoveStoryFilesRequest.h"
#include "model/RemoveStoryFilesResult.h"
#include "model/ResumeBindingRequest.h"
#include "model/ResumeBindingResult.h"
#include "model/SemanticQueryRequest.h"
#include "model/SemanticQueryResult.h"
#include "model/SimpleQueryRequest.h"
#include "model/SimpleQueryResult.h"
#include "model/StopBindingRequest.h"
#include "model/StopBindingResult.h"
#include "model/UpdateDatasetRequest.h"
#include "model/UpdateDatasetResult.h"
#include "model/UpdateFaceGroupRequest.h"
#include "model/UpdateFaceGroupResult.h"
#include "model/UpdateFigureClusterRequest.h"
#include "model/UpdateFigureClusterResult.h"
#include "model/UpdateFileMetaRequest.h"
#include "model/UpdateFileMetaResult.h"
#include "model/UpdateImageRequest.h"
#include "model/UpdateImageResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/UpdateSetRequest.h"
#include "model/UpdateSetResult.h"
#include "model/UpdateStoryRequest.h"
#include "model/UpdateStoryResult.h"


namespace AlibabaCloud
{
	namespace Imm
	{
		class ALIBABACLOUD_IMM_EXPORT ImmClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddStoryFilesResult> AddStoryFilesOutcome;
			typedef std::future<AddStoryFilesOutcome> AddStoryFilesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::AddStoryFilesRequest&, const AddStoryFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddStoryFilesAsyncHandler;
			typedef Outcome<Error, Model::AttachOSSBucketResult> AttachOSSBucketOutcome;
			typedef std::future<AttachOSSBucketOutcome> AttachOSSBucketOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::AttachOSSBucketRequest&, const AttachOSSBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachOSSBucketAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteFileMetaResult> BatchDeleteFileMetaOutcome;
			typedef std::future<BatchDeleteFileMetaOutcome> BatchDeleteFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::BatchDeleteFileMetaRequest&, const BatchDeleteFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteFileMetaAsyncHandler;
			typedef Outcome<Error, Model::BatchGetFileMetaResult> BatchGetFileMetaOutcome;
			typedef std::future<BatchGetFileMetaOutcome> BatchGetFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::BatchGetFileMetaRequest&, const BatchGetFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetFileMetaAsyncHandler;
			typedef Outcome<Error, Model::BatchIndexFileMetaResult> BatchIndexFileMetaOutcome;
			typedef std::future<BatchIndexFileMetaOutcome> BatchIndexFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::BatchIndexFileMetaRequest&, const BatchIndexFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchIndexFileMetaAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdateFileMetaResult> BatchUpdateFileMetaOutcome;
			typedef std::future<BatchUpdateFileMetaOutcome> BatchUpdateFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::BatchUpdateFileMetaRequest&, const BatchUpdateFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateFileMetaAsyncHandler;
			typedef Outcome<Error, Model::CompareImageFacesResult> CompareImageFacesOutcome;
			typedef std::future<CompareImageFacesOutcome> CompareImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CompareImageFacesRequest&, const CompareImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareImageFacesAsyncHandler;
			typedef Outcome<Error, Model::ConvertOfficeFormatResult> ConvertOfficeFormatOutcome;
			typedef std::future<ConvertOfficeFormatOutcome> ConvertOfficeFormatOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ConvertOfficeFormatRequest&, const ConvertOfficeFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertOfficeFormatAsyncHandler;
			typedef Outcome<Error, Model::CreateBindingResult> CreateBindingOutcome;
			typedef std::future<CreateBindingOutcome> CreateBindingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateBindingRequest&, const CreateBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBindingAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetResult> CreateDatasetOutcome;
			typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateDatasetRequest&, const CreateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateDetectVideoLabelsTaskResult> CreateDetectVideoLabelsTaskOutcome;
			typedef std::future<CreateDetectVideoLabelsTaskOutcome> CreateDetectVideoLabelsTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateDetectVideoLabelsTaskRequest&, const CreateDetectVideoLabelsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDetectVideoLabelsTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateFigureClusteringTaskResult> CreateFigureClusteringTaskOutcome;
			typedef std::future<CreateFigureClusteringTaskOutcome> CreateFigureClusteringTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateFigureClusteringTaskRequest&, const CreateFigureClusteringTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFigureClusteringTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateFigureClustersMergingTaskResult> CreateFigureClustersMergingTaskOutcome;
			typedef std::future<CreateFigureClustersMergingTaskOutcome> CreateFigureClustersMergingTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateFigureClustersMergingTaskRequest&, const CreateFigureClustersMergingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFigureClustersMergingTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateGrabFrameTaskResult> CreateGrabFrameTaskOutcome;
			typedef std::future<CreateGrabFrameTaskOutcome> CreateGrabFrameTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateGrabFrameTaskRequest&, const CreateGrabFrameTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrabFrameTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupFacesJobResult> CreateGroupFacesJobOutcome;
			typedef std::future<CreateGroupFacesJobOutcome> CreateGroupFacesJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateGroupFacesJobRequest&, const CreateGroupFacesJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupFacesJobAsyncHandler;
			typedef Outcome<Error, Model::CreateImageModerationTaskResult> CreateImageModerationTaskOutcome;
			typedef std::future<CreateImageModerationTaskOutcome> CreateImageModerationTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateImageModerationTaskRequest&, const CreateImageModerationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageModerationTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateImageSplicingTaskResult> CreateImageSplicingTaskOutcome;
			typedef std::future<CreateImageSplicingTaskOutcome> CreateImageSplicingTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateImageSplicingTaskRequest&, const CreateImageSplicingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSplicingTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateMediaConvertTaskResult> CreateMediaConvertTaskOutcome;
			typedef std::future<CreateMediaConvertTaskOutcome> CreateMediaConvertTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateMediaConvertTaskRequest&, const CreateMediaConvertTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaConvertTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeFaceGroupsJobResult> CreateMergeFaceGroupsJobOutcome;
			typedef std::future<CreateMergeFaceGroupsJobOutcome> CreateMergeFaceGroupsJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateMergeFaceGroupsJobRequest&, const CreateMergeFaceGroupsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeFaceGroupsJobAsyncHandler;
			typedef Outcome<Error, Model::CreateOfficeConversionTaskResult> CreateOfficeConversionTaskOutcome;
			typedef std::future<CreateOfficeConversionTaskOutcome> CreateOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateOfficeConversionTaskRequest&, const CreateOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateSetResult> CreateSetOutcome;
			typedef std::future<CreateSetOutcome> CreateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateSetRequest&, const CreateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSetAsyncHandler;
			typedef Outcome<Error, Model::CreateStoryResult> CreateStoryOutcome;
			typedef std::future<CreateStoryOutcome> CreateStoryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateStoryRequest&, const CreateStoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoryAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoCompressTaskResult> CreateVideoCompressTaskOutcome;
			typedef std::future<CreateVideoCompressTaskOutcome> CreateVideoCompressTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoCompressTaskRequest&, const CreateVideoCompressTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoCompressTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoModerationTaskResult> CreateVideoModerationTaskOutcome;
			typedef std::future<CreateVideoModerationTaskOutcome> CreateVideoModerationTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoModerationTaskRequest&, const CreateVideoModerationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoModerationTaskAsyncHandler;
			typedef Outcome<Error, Model::DecodeBlindWatermarkResult> DecodeBlindWatermarkOutcome;
			typedef std::future<DecodeBlindWatermarkOutcome> DecodeBlindWatermarkOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DecodeBlindWatermarkRequest&, const DecodeBlindWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecodeBlindWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DeleteBindingResult> DeleteBindingOutcome;
			typedef std::future<DeleteBindingOutcome> DeleteBindingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteBindingRequest&, const DeleteBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBindingAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatasetResult> DeleteDatasetOutcome;
			typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteDatasetRequest&, const DeleteDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileMetaResult> DeleteFileMetaOutcome;
			typedef std::future<DeleteFileMetaOutcome> DeleteFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteFileMetaRequest&, const DeleteFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileMetaAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteOfficeConversionTaskResult> DeleteOfficeConversionTaskOutcome;
			typedef std::future<DeleteOfficeConversionTaskOutcome> DeleteOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteOfficeConversionTaskRequest&, const DeleteOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteSetResult> DeleteSetOutcome;
			typedef std::future<DeleteSetOutcome> DeleteSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteSetRequest&, const DeleteSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteStoryResult> DeleteStoryOutcome;
			typedef std::future<DeleteStoryOutcome> DeleteStoryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteStoryRequest&, const DeleteStoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoResult> DeleteVideoOutcome;
			typedef std::future<DeleteVideoOutcome> DeleteVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoRequest&, const DeleteVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoTaskResult> DeleteVideoTaskOutcome;
			typedef std::future<DeleteVideoTaskOutcome> DeleteVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoTaskRequest&, const DeleteVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::DetachOSSBucketResult> DetachOSSBucketOutcome;
			typedef std::future<DetachOSSBucketOutcome> DetachOSSBucketOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetachOSSBucketRequest&, const DetachOSSBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachOSSBucketAsyncHandler;
			typedef Outcome<Error, Model::DetectImageBodiesResult> DetectImageBodiesOutcome;
			typedef std::future<DetectImageBodiesOutcome> DetectImageBodiesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageBodiesRequest&, const DetectImageBodiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageBodiesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageCodesResult> DetectImageCodesOutcome;
			typedef std::future<DetectImageCodesOutcome> DetectImageCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageCodesRequest&, const DetectImageCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageCodesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageCroppingResult> DetectImageCroppingOutcome;
			typedef std::future<DetectImageCroppingOutcome> DetectImageCroppingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageCroppingRequest&, const DetectImageCroppingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageCroppingAsyncHandler;
			typedef Outcome<Error, Model::DetectImageFacesResult> DetectImageFacesOutcome;
			typedef std::future<DetectImageFacesOutcome> DetectImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageFacesRequest&, const DetectImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageFacesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageLabelsResult> DetectImageLabelsOutcome;
			typedef std::future<DetectImageLabelsOutcome> DetectImageLabelsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageLabelsRequest&, const DetectImageLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageLabelsAsyncHandler;
			typedef Outcome<Error, Model::DetectImageQRCodesResult> DetectImageQRCodesOutcome;
			typedef std::future<DetectImageQRCodesOutcome> DetectImageQRCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageQRCodesRequest&, const DetectImageQRCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageQRCodesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageScoreResult> DetectImageScoreOutcome;
			typedef std::future<DetectImageScoreOutcome> DetectImageScoreOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageScoreRequest&, const DetectImageScoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageScoreAsyncHandler;
			typedef Outcome<Error, Model::DetectImageTagsResult> DetectImageTagsOutcome;
			typedef std::future<DetectImageTagsOutcome> DetectImageTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageTagsRequest&, const DetectImageTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageTagsAsyncHandler;
			typedef Outcome<Error, Model::DetectQRCodesResult> DetectQRCodesOutcome;
			typedef std::future<DetectQRCodesOutcome> DetectQRCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectQRCodesRequest&, const DetectQRCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectQRCodesAsyncHandler;
			typedef Outcome<Error, Model::DetectTextAnomalyResult> DetectTextAnomalyOutcome;
			typedef std::future<DetectTextAnomalyOutcome> DetectTextAnomalyOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectTextAnomalyRequest&, const DetectTextAnomalyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectTextAnomalyAsyncHandler;
			typedef Outcome<Error, Model::EncodeBlindWatermarkResult> EncodeBlindWatermarkOutcome;
			typedef std::future<EncodeBlindWatermarkOutcome> EncodeBlindWatermarkOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::EncodeBlindWatermarkRequest&, const EncodeBlindWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncodeBlindWatermarkAsyncHandler;
			typedef Outcome<Error, Model::FindImagesResult> FindImagesOutcome;
			typedef std::future<FindImagesOutcome> FindImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindImagesRequest&, const FindImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindImagesAsyncHandler;
			typedef Outcome<Error, Model::FindSimilarFacesResult> FindSimilarFacesOutcome;
			typedef std::future<FindSimilarFacesOutcome> FindSimilarFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindSimilarFacesRequest&, const FindSimilarFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindSimilarFacesAsyncHandler;
			typedef Outcome<Error, Model::FuzzyQueryResult> FuzzyQueryOutcome;
			typedef std::future<FuzzyQueryOutcome> FuzzyQueryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FuzzyQueryRequest&, const FuzzyQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FuzzyQueryAsyncHandler;
			typedef Outcome<Error, Model::GetBindingResult> GetBindingOutcome;
			typedef std::future<GetBindingOutcome> GetBindingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetBindingRequest&, const GetBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBindingAsyncHandler;
			typedef Outcome<Error, Model::GetDatasetResult> GetDatasetOutcome;
			typedef std::future<GetDatasetOutcome> GetDatasetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetDatasetRequest&, const GetDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatasetAsyncHandler;
			typedef Outcome<Error, Model::GetDetectVideoLabelsResultResult> GetDetectVideoLabelsResultOutcome;
			typedef std::future<GetDetectVideoLabelsResultOutcome> GetDetectVideoLabelsResultOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetDetectVideoLabelsResultRequest&, const GetDetectVideoLabelsResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectVideoLabelsResultAsyncHandler;
			typedef Outcome<Error, Model::GetFigureClusterResult> GetFigureClusterOutcome;
			typedef std::future<GetFigureClusterOutcome> GetFigureClusterOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetFigureClusterRequest&, const GetFigureClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFigureClusterAsyncHandler;
			typedef Outcome<Error, Model::GetFileMetaResult> GetFileMetaOutcome;
			typedef std::future<GetFileMetaOutcome> GetFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetFileMetaRequest&, const GetFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileMetaAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetImageCroppingSuggestionsResult> GetImageCroppingSuggestionsOutcome;
			typedef std::future<GetImageCroppingSuggestionsOutcome> GetImageCroppingSuggestionsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageCroppingSuggestionsRequest&, const GetImageCroppingSuggestionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageCroppingSuggestionsAsyncHandler;
			typedef Outcome<Error, Model::GetImageQualityResult> GetImageQualityOutcome;
			typedef std::future<GetImageQualityOutcome> GetImageQualityOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageQualityRequest&, const GetImageQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageQualityAsyncHandler;
			typedef Outcome<Error, Model::GetMediaMetaResult> GetMediaMetaOutcome;
			typedef std::future<GetMediaMetaOutcome> GetMediaMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetMediaMetaRequest&, const GetMediaMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaMetaAsyncHandler;
			typedef Outcome<Error, Model::GetOSSBucketAttachmentResult> GetOSSBucketAttachmentOutcome;
			typedef std::future<GetOSSBucketAttachmentOutcome> GetOSSBucketAttachmentOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOSSBucketAttachmentRequest&, const GetOSSBucketAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOSSBucketAttachmentAsyncHandler;
			typedef Outcome<Error, Model::GetOfficeConversionTaskResult> GetOfficeConversionTaskOutcome;
			typedef std::future<GetOfficeConversionTaskOutcome> GetOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficeConversionTaskRequest&, const GetOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::GetOfficePreviewURLResult> GetOfficePreviewURLOutcome;
			typedef std::future<GetOfficePreviewURLOutcome> GetOfficePreviewURLOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficePreviewURLRequest&, const GetOfficePreviewURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficePreviewURLAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::GetSetResult> GetSetOutcome;
			typedef std::future<GetSetOutcome> GetSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetSetRequest&, const GetSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSetAsyncHandler;
			typedef Outcome<Error, Model::GetStoryResult> GetStoryOutcome;
			typedef std::future<GetStoryOutcome> GetStoryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetStoryRequest&, const GetStoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStoryAsyncHandler;
			typedef Outcome<Error, Model::GetTaskResult> GetTaskOutcome;
			typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetTaskRequest&, const GetTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
			typedef Outcome<Error, Model::GetVideoResult> GetVideoOutcome;
			typedef std::future<GetVideoOutcome> GetVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoRequest&, const GetVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoAsyncHandler;
			typedef Outcome<Error, Model::GetVideoTaskResult> GetVideoTaskOutcome;
			typedef std::future<GetVideoTaskOutcome> GetVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoTaskRequest&, const GetVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::GetWebofficeURLResult> GetWebofficeURLOutcome;
			typedef std::future<GetWebofficeURLOutcome> GetWebofficeURLOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetWebofficeURLRequest&, const GetWebofficeURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWebofficeURLAsyncHandler;
			typedef Outcome<Error, Model::IndexFileMetaResult> IndexFileMetaOutcome;
			typedef std::future<IndexFileMetaOutcome> IndexFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexFileMetaRequest&, const IndexFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexFileMetaAsyncHandler;
			typedef Outcome<Error, Model::IndexImageResult> IndexImageOutcome;
			typedef std::future<IndexImageOutcome> IndexImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexImageRequest&, const IndexImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexImageAsyncHandler;
			typedef Outcome<Error, Model::IndexVideoResult> IndexVideoOutcome;
			typedef std::future<IndexVideoOutcome> IndexVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexVideoRequest&, const IndexVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexVideoAsyncHandler;
			typedef Outcome<Error, Model::ListBindingsResult> ListBindingsOutcome;
			typedef std::future<ListBindingsOutcome> ListBindingsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListBindingsRequest&, const ListBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListDatasetsResult> ListDatasetsOutcome;
			typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListDatasetsRequest&, const ListDatasetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasetsAsyncHandler;
			typedef Outcome<Error, Model::ListFaceGroupsResult> ListFaceGroupsOutcome;
			typedef std::future<ListFaceGroupsOutcome> ListFaceGroupsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceGroupsRequest&, const ListFaceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListOfficeConversionTaskResult> ListOfficeConversionTaskOutcome;
			typedef std::future<ListOfficeConversionTaskOutcome> ListOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListOfficeConversionTaskRequest&, const ListOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListSetTagsResult> ListSetTagsOutcome;
			typedef std::future<ListSetTagsOutcome> ListSetTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetTagsRequest&, const ListSetTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetTagsAsyncHandler;
			typedef Outcome<Error, Model::ListSetsResult> ListSetsOutcome;
			typedef std::future<ListSetsOutcome> ListSetsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetsRequest&, const ListSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetsAsyncHandler;
			typedef Outcome<Error, Model::ListTasksResult> ListTasksOutcome;
			typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListTasksRequest&, const ListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
			typedef Outcome<Error, Model::ListVideoAudiosResult> ListVideoAudiosOutcome;
			typedef std::future<ListVideoAudiosOutcome> ListVideoAudiosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoAudiosRequest&, const ListVideoAudiosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoAudiosAsyncHandler;
			typedef Outcome<Error, Model::ListVideoFramesResult> ListVideoFramesOutcome;
			typedef std::future<ListVideoFramesOutcome> ListVideoFramesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoFramesRequest&, const ListVideoFramesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoFramesAsyncHandler;
			typedef Outcome<Error, Model::ListVideoTasksResult> ListVideoTasksOutcome;
			typedef std::future<ListVideoTasksOutcome> ListVideoTasksOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoTasksRequest&, const ListVideoTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoTasksAsyncHandler;
			typedef Outcome<Error, Model::ListVideosResult> ListVideosOutcome;
			typedef std::future<ListVideosOutcome> ListVideosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideosRequest&, const ListVideosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideosAsyncHandler;
			typedef Outcome<Error, Model::MergeFigureClustersResult> MergeFigureClustersOutcome;
			typedef std::future<MergeFigureClustersOutcome> MergeFigureClustersOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::MergeFigureClustersRequest&, const MergeFigureClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MergeFigureClustersAsyncHandler;
			typedef Outcome<Error, Model::OpenImmServiceResult> OpenImmServiceOutcome;
			typedef std::future<OpenImmServiceOutcome> OpenImmServiceOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::OpenImmServiceRequest&, const OpenImmServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenImmServiceAsyncHandler;
			typedef Outcome<Error, Model::PutProjectResult> PutProjectOutcome;
			typedef std::future<PutProjectOutcome> PutProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::PutProjectRequest&, const PutProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutProjectAsyncHandler;
			typedef Outcome<Error, Model::QueryFigureClustersResult> QueryFigureClustersOutcome;
			typedef std::future<QueryFigureClustersOutcome> QueryFigureClustersOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::QueryFigureClustersRequest&, const QueryFigureClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFigureClustersAsyncHandler;
			typedef Outcome<Error, Model::QueryStoriesResult> QueryStoriesOutcome;
			typedef std::future<QueryStoriesOutcome> QueryStoriesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::QueryStoriesRequest&, const QueryStoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStoriesAsyncHandler;
			typedef Outcome<Error, Model::RefreshOfficePreviewTokenResult> RefreshOfficePreviewTokenOutcome;
			typedef std::future<RefreshOfficePreviewTokenOutcome> RefreshOfficePreviewTokenOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RefreshOfficePreviewTokenRequest&, const RefreshOfficePreviewTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshOfficePreviewTokenAsyncHandler;
			typedef Outcome<Error, Model::RefreshWebofficeTokenResult> RefreshWebofficeTokenOutcome;
			typedef std::future<RefreshWebofficeTokenOutcome> RefreshWebofficeTokenOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RefreshWebofficeTokenRequest&, const RefreshWebofficeTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshWebofficeTokenAsyncHandler;
			typedef Outcome<Error, Model::RemoveStoryFilesResult> RemoveStoryFilesOutcome;
			typedef std::future<RemoveStoryFilesOutcome> RemoveStoryFilesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RemoveStoryFilesRequest&, const RemoveStoryFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveStoryFilesAsyncHandler;
			typedef Outcome<Error, Model::ResumeBindingResult> ResumeBindingOutcome;
			typedef std::future<ResumeBindingOutcome> ResumeBindingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ResumeBindingRequest&, const ResumeBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeBindingAsyncHandler;
			typedef Outcome<Error, Model::SemanticQueryResult> SemanticQueryOutcome;
			typedef std::future<SemanticQueryOutcome> SemanticQueryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::SemanticQueryRequest&, const SemanticQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SemanticQueryAsyncHandler;
			typedef Outcome<Error, Model::SimpleQueryResult> SimpleQueryOutcome;
			typedef std::future<SimpleQueryOutcome> SimpleQueryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::SimpleQueryRequest&, const SimpleQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SimpleQueryAsyncHandler;
			typedef Outcome<Error, Model::StopBindingResult> StopBindingOutcome;
			typedef std::future<StopBindingOutcome> StopBindingOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::StopBindingRequest&, const StopBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopBindingAsyncHandler;
			typedef Outcome<Error, Model::UpdateDatasetResult> UpdateDatasetOutcome;
			typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateDatasetRequest&, const UpdateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatasetAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceGroupResult> UpdateFaceGroupOutcome;
			typedef std::future<UpdateFaceGroupOutcome> UpdateFaceGroupOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateFaceGroupRequest&, const UpdateFaceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateFigureClusterResult> UpdateFigureClusterOutcome;
			typedef std::future<UpdateFigureClusterOutcome> UpdateFigureClusterOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateFigureClusterRequest&, const UpdateFigureClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFigureClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileMetaResult> UpdateFileMetaOutcome;
			typedef std::future<UpdateFileMetaOutcome> UpdateFileMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateFileMetaRequest&, const UpdateFileMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileMetaAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageResult> UpdateImageOutcome;
			typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateImageRequest&, const UpdateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateSetResult> UpdateSetOutcome;
			typedef std::future<UpdateSetOutcome> UpdateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateSetRequest&, const UpdateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSetAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoryResult> UpdateStoryOutcome;
			typedef std::future<UpdateStoryOutcome> UpdateStoryOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateStoryRequest&, const UpdateStoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoryAsyncHandler;

			ImmClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImmClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImmClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImmClient();
			AddStoryFilesOutcome addStoryFiles(const Model::AddStoryFilesRequest &request)const;
			void addStoryFilesAsync(const Model::AddStoryFilesRequest& request, const AddStoryFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddStoryFilesOutcomeCallable addStoryFilesCallable(const Model::AddStoryFilesRequest& request) const;
			AttachOSSBucketOutcome attachOSSBucket(const Model::AttachOSSBucketRequest &request)const;
			void attachOSSBucketAsync(const Model::AttachOSSBucketRequest& request, const AttachOSSBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachOSSBucketOutcomeCallable attachOSSBucketCallable(const Model::AttachOSSBucketRequest& request) const;
			BatchDeleteFileMetaOutcome batchDeleteFileMeta(const Model::BatchDeleteFileMetaRequest &request)const;
			void batchDeleteFileMetaAsync(const Model::BatchDeleteFileMetaRequest& request, const BatchDeleteFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteFileMetaOutcomeCallable batchDeleteFileMetaCallable(const Model::BatchDeleteFileMetaRequest& request) const;
			BatchGetFileMetaOutcome batchGetFileMeta(const Model::BatchGetFileMetaRequest &request)const;
			void batchGetFileMetaAsync(const Model::BatchGetFileMetaRequest& request, const BatchGetFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetFileMetaOutcomeCallable batchGetFileMetaCallable(const Model::BatchGetFileMetaRequest& request) const;
			BatchIndexFileMetaOutcome batchIndexFileMeta(const Model::BatchIndexFileMetaRequest &request)const;
			void batchIndexFileMetaAsync(const Model::BatchIndexFileMetaRequest& request, const BatchIndexFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchIndexFileMetaOutcomeCallable batchIndexFileMetaCallable(const Model::BatchIndexFileMetaRequest& request) const;
			BatchUpdateFileMetaOutcome batchUpdateFileMeta(const Model::BatchUpdateFileMetaRequest &request)const;
			void batchUpdateFileMetaAsync(const Model::BatchUpdateFileMetaRequest& request, const BatchUpdateFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdateFileMetaOutcomeCallable batchUpdateFileMetaCallable(const Model::BatchUpdateFileMetaRequest& request) const;
			CompareImageFacesOutcome compareImageFaces(const Model::CompareImageFacesRequest &request)const;
			void compareImageFacesAsync(const Model::CompareImageFacesRequest& request, const CompareImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareImageFacesOutcomeCallable compareImageFacesCallable(const Model::CompareImageFacesRequest& request) const;
			ConvertOfficeFormatOutcome convertOfficeFormat(const Model::ConvertOfficeFormatRequest &request)const;
			void convertOfficeFormatAsync(const Model::ConvertOfficeFormatRequest& request, const ConvertOfficeFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertOfficeFormatOutcomeCallable convertOfficeFormatCallable(const Model::ConvertOfficeFormatRequest& request) const;
			CreateBindingOutcome createBinding(const Model::CreateBindingRequest &request)const;
			void createBindingAsync(const Model::CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBindingOutcomeCallable createBindingCallable(const Model::CreateBindingRequest& request) const;
			CreateDatasetOutcome createDataset(const Model::CreateDatasetRequest &request)const;
			void createDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetOutcomeCallable createDatasetCallable(const Model::CreateDatasetRequest& request) const;
			CreateDetectVideoLabelsTaskOutcome createDetectVideoLabelsTask(const Model::CreateDetectVideoLabelsTaskRequest &request)const;
			void createDetectVideoLabelsTaskAsync(const Model::CreateDetectVideoLabelsTaskRequest& request, const CreateDetectVideoLabelsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDetectVideoLabelsTaskOutcomeCallable createDetectVideoLabelsTaskCallable(const Model::CreateDetectVideoLabelsTaskRequest& request) const;
			CreateFigureClusteringTaskOutcome createFigureClusteringTask(const Model::CreateFigureClusteringTaskRequest &request)const;
			void createFigureClusteringTaskAsync(const Model::CreateFigureClusteringTaskRequest& request, const CreateFigureClusteringTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFigureClusteringTaskOutcomeCallable createFigureClusteringTaskCallable(const Model::CreateFigureClusteringTaskRequest& request) const;
			CreateFigureClustersMergingTaskOutcome createFigureClustersMergingTask(const Model::CreateFigureClustersMergingTaskRequest &request)const;
			void createFigureClustersMergingTaskAsync(const Model::CreateFigureClustersMergingTaskRequest& request, const CreateFigureClustersMergingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFigureClustersMergingTaskOutcomeCallable createFigureClustersMergingTaskCallable(const Model::CreateFigureClustersMergingTaskRequest& request) const;
			CreateGrabFrameTaskOutcome createGrabFrameTask(const Model::CreateGrabFrameTaskRequest &request)const;
			void createGrabFrameTaskAsync(const Model::CreateGrabFrameTaskRequest& request, const CreateGrabFrameTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGrabFrameTaskOutcomeCallable createGrabFrameTaskCallable(const Model::CreateGrabFrameTaskRequest& request) const;
			CreateGroupFacesJobOutcome createGroupFacesJob(const Model::CreateGroupFacesJobRequest &request)const;
			void createGroupFacesJobAsync(const Model::CreateGroupFacesJobRequest& request, const CreateGroupFacesJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupFacesJobOutcomeCallable createGroupFacesJobCallable(const Model::CreateGroupFacesJobRequest& request) const;
			CreateImageModerationTaskOutcome createImageModerationTask(const Model::CreateImageModerationTaskRequest &request)const;
			void createImageModerationTaskAsync(const Model::CreateImageModerationTaskRequest& request, const CreateImageModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageModerationTaskOutcomeCallable createImageModerationTaskCallable(const Model::CreateImageModerationTaskRequest& request) const;
			CreateImageSplicingTaskOutcome createImageSplicingTask(const Model::CreateImageSplicingTaskRequest &request)const;
			void createImageSplicingTaskAsync(const Model::CreateImageSplicingTaskRequest& request, const CreateImageSplicingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageSplicingTaskOutcomeCallable createImageSplicingTaskCallable(const Model::CreateImageSplicingTaskRequest& request) const;
			CreateMediaConvertTaskOutcome createMediaConvertTask(const Model::CreateMediaConvertTaskRequest &request)const;
			void createMediaConvertTaskAsync(const Model::CreateMediaConvertTaskRequest& request, const CreateMediaConvertTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMediaConvertTaskOutcomeCallable createMediaConvertTaskCallable(const Model::CreateMediaConvertTaskRequest& request) const;
			CreateMergeFaceGroupsJobOutcome createMergeFaceGroupsJob(const Model::CreateMergeFaceGroupsJobRequest &request)const;
			void createMergeFaceGroupsJobAsync(const Model::CreateMergeFaceGroupsJobRequest& request, const CreateMergeFaceGroupsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeFaceGroupsJobOutcomeCallable createMergeFaceGroupsJobCallable(const Model::CreateMergeFaceGroupsJobRequest& request) const;
			CreateOfficeConversionTaskOutcome createOfficeConversionTask(const Model::CreateOfficeConversionTaskRequest &request)const;
			void createOfficeConversionTaskAsync(const Model::CreateOfficeConversionTaskRequest& request, const CreateOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOfficeConversionTaskOutcomeCallable createOfficeConversionTaskCallable(const Model::CreateOfficeConversionTaskRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateSetOutcome createSet(const Model::CreateSetRequest &request)const;
			void createSetAsync(const Model::CreateSetRequest& request, const CreateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSetOutcomeCallable createSetCallable(const Model::CreateSetRequest& request) const;
			CreateStoryOutcome createStory(const Model::CreateStoryRequest &request)const;
			void createStoryAsync(const Model::CreateStoryRequest& request, const CreateStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStoryOutcomeCallable createStoryCallable(const Model::CreateStoryRequest& request) const;
			CreateVideoCompressTaskOutcome createVideoCompressTask(const Model::CreateVideoCompressTaskRequest &request)const;
			void createVideoCompressTaskAsync(const Model::CreateVideoCompressTaskRequest& request, const CreateVideoCompressTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoCompressTaskOutcomeCallable createVideoCompressTaskCallable(const Model::CreateVideoCompressTaskRequest& request) const;
			CreateVideoModerationTaskOutcome createVideoModerationTask(const Model::CreateVideoModerationTaskRequest &request)const;
			void createVideoModerationTaskAsync(const Model::CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoModerationTaskOutcomeCallable createVideoModerationTaskCallable(const Model::CreateVideoModerationTaskRequest& request) const;
			DecodeBlindWatermarkOutcome decodeBlindWatermark(const Model::DecodeBlindWatermarkRequest &request)const;
			void decodeBlindWatermarkAsync(const Model::DecodeBlindWatermarkRequest& request, const DecodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecodeBlindWatermarkOutcomeCallable decodeBlindWatermarkCallable(const Model::DecodeBlindWatermarkRequest& request) const;
			DeleteBindingOutcome deleteBinding(const Model::DeleteBindingRequest &request)const;
			void deleteBindingAsync(const Model::DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBindingOutcomeCallable deleteBindingCallable(const Model::DeleteBindingRequest& request) const;
			DeleteDatasetOutcome deleteDataset(const Model::DeleteDatasetRequest &request)const;
			void deleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatasetOutcomeCallable deleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;
			DeleteFileMetaOutcome deleteFileMeta(const Model::DeleteFileMetaRequest &request)const;
			void deleteFileMetaAsync(const Model::DeleteFileMetaRequest& request, const DeleteFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileMetaOutcomeCallable deleteFileMetaCallable(const Model::DeleteFileMetaRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteOfficeConversionTaskOutcome deleteOfficeConversionTask(const Model::DeleteOfficeConversionTaskRequest &request)const;
			void deleteOfficeConversionTaskAsync(const Model::DeleteOfficeConversionTaskRequest& request, const DeleteOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOfficeConversionTaskOutcomeCallable deleteOfficeConversionTaskCallable(const Model::DeleteOfficeConversionTaskRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteSetOutcome deleteSet(const Model::DeleteSetRequest &request)const;
			void deleteSetAsync(const Model::DeleteSetRequest& request, const DeleteSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSetOutcomeCallable deleteSetCallable(const Model::DeleteSetRequest& request) const;
			DeleteStoryOutcome deleteStory(const Model::DeleteStoryRequest &request)const;
			void deleteStoryAsync(const Model::DeleteStoryRequest& request, const DeleteStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStoryOutcomeCallable deleteStoryCallable(const Model::DeleteStoryRequest& request) const;
			DeleteVideoOutcome deleteVideo(const Model::DeleteVideoRequest &request)const;
			void deleteVideoAsync(const Model::DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoOutcomeCallable deleteVideoCallable(const Model::DeleteVideoRequest& request) const;
			DeleteVideoTaskOutcome deleteVideoTask(const Model::DeleteVideoTaskRequest &request)const;
			void deleteVideoTaskAsync(const Model::DeleteVideoTaskRequest& request, const DeleteVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoTaskOutcomeCallable deleteVideoTaskCallable(const Model::DeleteVideoTaskRequest& request) const;
			DetachOSSBucketOutcome detachOSSBucket(const Model::DetachOSSBucketRequest &request)const;
			void detachOSSBucketAsync(const Model::DetachOSSBucketRequest& request, const DetachOSSBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachOSSBucketOutcomeCallable detachOSSBucketCallable(const Model::DetachOSSBucketRequest& request) const;
			DetectImageBodiesOutcome detectImageBodies(const Model::DetectImageBodiesRequest &request)const;
			void detectImageBodiesAsync(const Model::DetectImageBodiesRequest& request, const DetectImageBodiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageBodiesOutcomeCallable detectImageBodiesCallable(const Model::DetectImageBodiesRequest& request) const;
			DetectImageCodesOutcome detectImageCodes(const Model::DetectImageCodesRequest &request)const;
			void detectImageCodesAsync(const Model::DetectImageCodesRequest& request, const DetectImageCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageCodesOutcomeCallable detectImageCodesCallable(const Model::DetectImageCodesRequest& request) const;
			DetectImageCroppingOutcome detectImageCropping(const Model::DetectImageCroppingRequest &request)const;
			void detectImageCroppingAsync(const Model::DetectImageCroppingRequest& request, const DetectImageCroppingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageCroppingOutcomeCallable detectImageCroppingCallable(const Model::DetectImageCroppingRequest& request) const;
			DetectImageFacesOutcome detectImageFaces(const Model::DetectImageFacesRequest &request)const;
			void detectImageFacesAsync(const Model::DetectImageFacesRequest& request, const DetectImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageFacesOutcomeCallable detectImageFacesCallable(const Model::DetectImageFacesRequest& request) const;
			DetectImageLabelsOutcome detectImageLabels(const Model::DetectImageLabelsRequest &request)const;
			void detectImageLabelsAsync(const Model::DetectImageLabelsRequest& request, const DetectImageLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageLabelsOutcomeCallable detectImageLabelsCallable(const Model::DetectImageLabelsRequest& request) const;
			DetectImageQRCodesOutcome detectImageQRCodes(const Model::DetectImageQRCodesRequest &request)const;
			void detectImageQRCodesAsync(const Model::DetectImageQRCodesRequest& request, const DetectImageQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageQRCodesOutcomeCallable detectImageQRCodesCallable(const Model::DetectImageQRCodesRequest& request) const;
			DetectImageScoreOutcome detectImageScore(const Model::DetectImageScoreRequest &request)const;
			void detectImageScoreAsync(const Model::DetectImageScoreRequest& request, const DetectImageScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageScoreOutcomeCallable detectImageScoreCallable(const Model::DetectImageScoreRequest& request) const;
			DetectImageTagsOutcome detectImageTags(const Model::DetectImageTagsRequest &request)const;
			void detectImageTagsAsync(const Model::DetectImageTagsRequest& request, const DetectImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageTagsOutcomeCallable detectImageTagsCallable(const Model::DetectImageTagsRequest& request) const;
			DetectQRCodesOutcome detectQRCodes(const Model::DetectQRCodesRequest &request)const;
			void detectQRCodesAsync(const Model::DetectQRCodesRequest& request, const DetectQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectQRCodesOutcomeCallable detectQRCodesCallable(const Model::DetectQRCodesRequest& request) const;
			DetectTextAnomalyOutcome detectTextAnomaly(const Model::DetectTextAnomalyRequest &request)const;
			void detectTextAnomalyAsync(const Model::DetectTextAnomalyRequest& request, const DetectTextAnomalyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectTextAnomalyOutcomeCallable detectTextAnomalyCallable(const Model::DetectTextAnomalyRequest& request) const;
			EncodeBlindWatermarkOutcome encodeBlindWatermark(const Model::EncodeBlindWatermarkRequest &request)const;
			void encodeBlindWatermarkAsync(const Model::EncodeBlindWatermarkRequest& request, const EncodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncodeBlindWatermarkOutcomeCallable encodeBlindWatermarkCallable(const Model::EncodeBlindWatermarkRequest& request) const;
			FindImagesOutcome findImages(const Model::FindImagesRequest &request)const;
			void findImagesAsync(const Model::FindImagesRequest& request, const FindImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindImagesOutcomeCallable findImagesCallable(const Model::FindImagesRequest& request) const;
			FindSimilarFacesOutcome findSimilarFaces(const Model::FindSimilarFacesRequest &request)const;
			void findSimilarFacesAsync(const Model::FindSimilarFacesRequest& request, const FindSimilarFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindSimilarFacesOutcomeCallable findSimilarFacesCallable(const Model::FindSimilarFacesRequest& request) const;
			FuzzyQueryOutcome fuzzyQuery(const Model::FuzzyQueryRequest &request)const;
			void fuzzyQueryAsync(const Model::FuzzyQueryRequest& request, const FuzzyQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FuzzyQueryOutcomeCallable fuzzyQueryCallable(const Model::FuzzyQueryRequest& request) const;
			GetBindingOutcome getBinding(const Model::GetBindingRequest &request)const;
			void getBindingAsync(const Model::GetBindingRequest& request, const GetBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBindingOutcomeCallable getBindingCallable(const Model::GetBindingRequest& request) const;
			GetDatasetOutcome getDataset(const Model::GetDatasetRequest &request)const;
			void getDatasetAsync(const Model::GetDatasetRequest& request, const GetDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatasetOutcomeCallable getDatasetCallable(const Model::GetDatasetRequest& request) const;
			GetDetectVideoLabelsResultOutcome getDetectVideoLabelsResult(const Model::GetDetectVideoLabelsResultRequest &request)const;
			void getDetectVideoLabelsResultAsync(const Model::GetDetectVideoLabelsResultRequest& request, const GetDetectVideoLabelsResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectVideoLabelsResultOutcomeCallable getDetectVideoLabelsResultCallable(const Model::GetDetectVideoLabelsResultRequest& request) const;
			GetFigureClusterOutcome getFigureCluster(const Model::GetFigureClusterRequest &request)const;
			void getFigureClusterAsync(const Model::GetFigureClusterRequest& request, const GetFigureClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFigureClusterOutcomeCallable getFigureClusterCallable(const Model::GetFigureClusterRequest& request) const;
			GetFileMetaOutcome getFileMeta(const Model::GetFileMetaRequest &request)const;
			void getFileMetaAsync(const Model::GetFileMetaRequest& request, const GetFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileMetaOutcomeCallable getFileMetaCallable(const Model::GetFileMetaRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetImageCroppingSuggestionsOutcome getImageCroppingSuggestions(const Model::GetImageCroppingSuggestionsRequest &request)const;
			void getImageCroppingSuggestionsAsync(const Model::GetImageCroppingSuggestionsRequest& request, const GetImageCroppingSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageCroppingSuggestionsOutcomeCallable getImageCroppingSuggestionsCallable(const Model::GetImageCroppingSuggestionsRequest& request) const;
			GetImageQualityOutcome getImageQuality(const Model::GetImageQualityRequest &request)const;
			void getImageQualityAsync(const Model::GetImageQualityRequest& request, const GetImageQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageQualityOutcomeCallable getImageQualityCallable(const Model::GetImageQualityRequest& request) const;
			GetMediaMetaOutcome getMediaMeta(const Model::GetMediaMetaRequest &request)const;
			void getMediaMetaAsync(const Model::GetMediaMetaRequest& request, const GetMediaMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaMetaOutcomeCallable getMediaMetaCallable(const Model::GetMediaMetaRequest& request) const;
			GetOSSBucketAttachmentOutcome getOSSBucketAttachment(const Model::GetOSSBucketAttachmentRequest &request)const;
			void getOSSBucketAttachmentAsync(const Model::GetOSSBucketAttachmentRequest& request, const GetOSSBucketAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOSSBucketAttachmentOutcomeCallable getOSSBucketAttachmentCallable(const Model::GetOSSBucketAttachmentRequest& request) const;
			GetOfficeConversionTaskOutcome getOfficeConversionTask(const Model::GetOfficeConversionTaskRequest &request)const;
			void getOfficeConversionTaskAsync(const Model::GetOfficeConversionTaskRequest& request, const GetOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficeConversionTaskOutcomeCallable getOfficeConversionTaskCallable(const Model::GetOfficeConversionTaskRequest& request) const;
			GetOfficePreviewURLOutcome getOfficePreviewURL(const Model::GetOfficePreviewURLRequest &request)const;
			void getOfficePreviewURLAsync(const Model::GetOfficePreviewURLRequest& request, const GetOfficePreviewURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficePreviewURLOutcomeCallable getOfficePreviewURLCallable(const Model::GetOfficePreviewURLRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			GetSetOutcome getSet(const Model::GetSetRequest &request)const;
			void getSetAsync(const Model::GetSetRequest& request, const GetSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSetOutcomeCallable getSetCallable(const Model::GetSetRequest& request) const;
			GetStoryOutcome getStory(const Model::GetStoryRequest &request)const;
			void getStoryAsync(const Model::GetStoryRequest& request, const GetStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStoryOutcomeCallable getStoryCallable(const Model::GetStoryRequest& request) const;
			GetTaskOutcome getTask(const Model::GetTaskRequest &request)const;
			void getTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskOutcomeCallable getTaskCallable(const Model::GetTaskRequest& request) const;
			GetVideoOutcome getVideo(const Model::GetVideoRequest &request)const;
			void getVideoAsync(const Model::GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoOutcomeCallable getVideoCallable(const Model::GetVideoRequest& request) const;
			GetVideoTaskOutcome getVideoTask(const Model::GetVideoTaskRequest &request)const;
			void getVideoTaskAsync(const Model::GetVideoTaskRequest& request, const GetVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoTaskOutcomeCallable getVideoTaskCallable(const Model::GetVideoTaskRequest& request) const;
			GetWebofficeURLOutcome getWebofficeURL(const Model::GetWebofficeURLRequest &request)const;
			void getWebofficeURLAsync(const Model::GetWebofficeURLRequest& request, const GetWebofficeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWebofficeURLOutcomeCallable getWebofficeURLCallable(const Model::GetWebofficeURLRequest& request) const;
			IndexFileMetaOutcome indexFileMeta(const Model::IndexFileMetaRequest &request)const;
			void indexFileMetaAsync(const Model::IndexFileMetaRequest& request, const IndexFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexFileMetaOutcomeCallable indexFileMetaCallable(const Model::IndexFileMetaRequest& request) const;
			IndexImageOutcome indexImage(const Model::IndexImageRequest &request)const;
			void indexImageAsync(const Model::IndexImageRequest& request, const IndexImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexImageOutcomeCallable indexImageCallable(const Model::IndexImageRequest& request) const;
			IndexVideoOutcome indexVideo(const Model::IndexVideoRequest &request)const;
			void indexVideoAsync(const Model::IndexVideoRequest& request, const IndexVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexVideoOutcomeCallable indexVideoCallable(const Model::IndexVideoRequest& request) const;
			ListBindingsOutcome listBindings(const Model::ListBindingsRequest &request)const;
			void listBindingsAsync(const Model::ListBindingsRequest& request, const ListBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBindingsOutcomeCallable listBindingsCallable(const Model::ListBindingsRequest& request) const;
			ListDatasetsOutcome listDatasets(const Model::ListDatasetsRequest &request)const;
			void listDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasetsOutcomeCallable listDatasetsCallable(const Model::ListDatasetsRequest& request) const;
			ListFaceGroupsOutcome listFaceGroups(const Model::ListFaceGroupsRequest &request)const;
			void listFaceGroupsAsync(const Model::ListFaceGroupsRequest& request, const ListFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceGroupsOutcomeCallable listFaceGroupsCallable(const Model::ListFaceGroupsRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListOfficeConversionTaskOutcome listOfficeConversionTask(const Model::ListOfficeConversionTaskRequest &request)const;
			void listOfficeConversionTaskAsync(const Model::ListOfficeConversionTaskRequest& request, const ListOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOfficeConversionTaskOutcomeCallable listOfficeConversionTaskCallable(const Model::ListOfficeConversionTaskRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListSetTagsOutcome listSetTags(const Model::ListSetTagsRequest &request)const;
			void listSetTagsAsync(const Model::ListSetTagsRequest& request, const ListSetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetTagsOutcomeCallable listSetTagsCallable(const Model::ListSetTagsRequest& request) const;
			ListSetsOutcome listSets(const Model::ListSetsRequest &request)const;
			void listSetsAsync(const Model::ListSetsRequest& request, const ListSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetsOutcomeCallable listSetsCallable(const Model::ListSetsRequest& request) const;
			ListTasksOutcome listTasks(const Model::ListTasksRequest &request)const;
			void listTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTasksOutcomeCallable listTasksCallable(const Model::ListTasksRequest& request) const;
			ListVideoAudiosOutcome listVideoAudios(const Model::ListVideoAudiosRequest &request)const;
			void listVideoAudiosAsync(const Model::ListVideoAudiosRequest& request, const ListVideoAudiosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoAudiosOutcomeCallable listVideoAudiosCallable(const Model::ListVideoAudiosRequest& request) const;
			ListVideoFramesOutcome listVideoFrames(const Model::ListVideoFramesRequest &request)const;
			void listVideoFramesAsync(const Model::ListVideoFramesRequest& request, const ListVideoFramesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoFramesOutcomeCallable listVideoFramesCallable(const Model::ListVideoFramesRequest& request) const;
			ListVideoTasksOutcome listVideoTasks(const Model::ListVideoTasksRequest &request)const;
			void listVideoTasksAsync(const Model::ListVideoTasksRequest& request, const ListVideoTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoTasksOutcomeCallable listVideoTasksCallable(const Model::ListVideoTasksRequest& request) const;
			ListVideosOutcome listVideos(const Model::ListVideosRequest &request)const;
			void listVideosAsync(const Model::ListVideosRequest& request, const ListVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideosOutcomeCallable listVideosCallable(const Model::ListVideosRequest& request) const;
			MergeFigureClustersOutcome mergeFigureClusters(const Model::MergeFigureClustersRequest &request)const;
			void mergeFigureClustersAsync(const Model::MergeFigureClustersRequest& request, const MergeFigureClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MergeFigureClustersOutcomeCallable mergeFigureClustersCallable(const Model::MergeFigureClustersRequest& request) const;
			OpenImmServiceOutcome openImmService(const Model::OpenImmServiceRequest &request)const;
			void openImmServiceAsync(const Model::OpenImmServiceRequest& request, const OpenImmServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenImmServiceOutcomeCallable openImmServiceCallable(const Model::OpenImmServiceRequest& request) const;
			PutProjectOutcome putProject(const Model::PutProjectRequest &request)const;
			void putProjectAsync(const Model::PutProjectRequest& request, const PutProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutProjectOutcomeCallable putProjectCallable(const Model::PutProjectRequest& request) const;
			QueryFigureClustersOutcome queryFigureClusters(const Model::QueryFigureClustersRequest &request)const;
			void queryFigureClustersAsync(const Model::QueryFigureClustersRequest& request, const QueryFigureClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFigureClustersOutcomeCallable queryFigureClustersCallable(const Model::QueryFigureClustersRequest& request) const;
			QueryStoriesOutcome queryStories(const Model::QueryStoriesRequest &request)const;
			void queryStoriesAsync(const Model::QueryStoriesRequest& request, const QueryStoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStoriesOutcomeCallable queryStoriesCallable(const Model::QueryStoriesRequest& request) const;
			RefreshOfficePreviewTokenOutcome refreshOfficePreviewToken(const Model::RefreshOfficePreviewTokenRequest &request)const;
			void refreshOfficePreviewTokenAsync(const Model::RefreshOfficePreviewTokenRequest& request, const RefreshOfficePreviewTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshOfficePreviewTokenOutcomeCallable refreshOfficePreviewTokenCallable(const Model::RefreshOfficePreviewTokenRequest& request) const;
			RefreshWebofficeTokenOutcome refreshWebofficeToken(const Model::RefreshWebofficeTokenRequest &request)const;
			void refreshWebofficeTokenAsync(const Model::RefreshWebofficeTokenRequest& request, const RefreshWebofficeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshWebofficeTokenOutcomeCallable refreshWebofficeTokenCallable(const Model::RefreshWebofficeTokenRequest& request) const;
			RemoveStoryFilesOutcome removeStoryFiles(const Model::RemoveStoryFilesRequest &request)const;
			void removeStoryFilesAsync(const Model::RemoveStoryFilesRequest& request, const RemoveStoryFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveStoryFilesOutcomeCallable removeStoryFilesCallable(const Model::RemoveStoryFilesRequest& request) const;
			ResumeBindingOutcome resumeBinding(const Model::ResumeBindingRequest &request)const;
			void resumeBindingAsync(const Model::ResumeBindingRequest& request, const ResumeBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeBindingOutcomeCallable resumeBindingCallable(const Model::ResumeBindingRequest& request) const;
			SemanticQueryOutcome semanticQuery(const Model::SemanticQueryRequest &request)const;
			void semanticQueryAsync(const Model::SemanticQueryRequest& request, const SemanticQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SemanticQueryOutcomeCallable semanticQueryCallable(const Model::SemanticQueryRequest& request) const;
			SimpleQueryOutcome simpleQuery(const Model::SimpleQueryRequest &request)const;
			void simpleQueryAsync(const Model::SimpleQueryRequest& request, const SimpleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SimpleQueryOutcomeCallable simpleQueryCallable(const Model::SimpleQueryRequest& request) const;
			StopBindingOutcome stopBinding(const Model::StopBindingRequest &request)const;
			void stopBindingAsync(const Model::StopBindingRequest& request, const StopBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopBindingOutcomeCallable stopBindingCallable(const Model::StopBindingRequest& request) const;
			UpdateDatasetOutcome updateDataset(const Model::UpdateDatasetRequest &request)const;
			void updateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDatasetOutcomeCallable updateDatasetCallable(const Model::UpdateDatasetRequest& request) const;
			UpdateFaceGroupOutcome updateFaceGroup(const Model::UpdateFaceGroupRequest &request)const;
			void updateFaceGroupAsync(const Model::UpdateFaceGroupRequest& request, const UpdateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceGroupOutcomeCallable updateFaceGroupCallable(const Model::UpdateFaceGroupRequest& request) const;
			UpdateFigureClusterOutcome updateFigureCluster(const Model::UpdateFigureClusterRequest &request)const;
			void updateFigureClusterAsync(const Model::UpdateFigureClusterRequest& request, const UpdateFigureClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFigureClusterOutcomeCallable updateFigureClusterCallable(const Model::UpdateFigureClusterRequest& request) const;
			UpdateFileMetaOutcome updateFileMeta(const Model::UpdateFileMetaRequest &request)const;
			void updateFileMetaAsync(const Model::UpdateFileMetaRequest& request, const UpdateFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileMetaOutcomeCallable updateFileMetaCallable(const Model::UpdateFileMetaRequest& request) const;
			UpdateImageOutcome updateImage(const Model::UpdateImageRequest &request)const;
			void updateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageOutcomeCallable updateImageCallable(const Model::UpdateImageRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			UpdateSetOutcome updateSet(const Model::UpdateSetRequest &request)const;
			void updateSetAsync(const Model::UpdateSetRequest& request, const UpdateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSetOutcomeCallable updateSetCallable(const Model::UpdateSetRequest& request) const;
			UpdateStoryOutcome updateStory(const Model::UpdateStoryRequest &request)const;
			void updateStoryAsync(const Model::UpdateStoryRequest& request, const UpdateStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoryOutcomeCallable updateStoryCallable(const Model::UpdateStoryRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMM_IMMCLIENT_H_
