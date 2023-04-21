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

#ifndef ALIBABACLOUD_ICE_ICECLIENT_H_
#define ALIBABACLOUD_ICE_ICECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ICEExport.h"
#include "model/AddCategoryRequest.h"
#include "model/AddCategoryResult.h"
#include "model/AddEditingProjectMaterialsRequest.h"
#include "model/AddEditingProjectMaterialsResult.h"
#include "model/AddFavoritePublicMediaRequest.h"
#include "model/AddFavoritePublicMediaResult.h"
#include "model/AddMediaMarksRequest.h"
#include "model/AddMediaMarksResult.h"
#include "model/AddTemplateRequest.h"
#include "model/AddTemplateResult.h"
#include "model/BatchGetMediaInfosRequest.h"
#include "model/BatchGetMediaInfosResult.h"
#include "model/CancelDNAJobRequest.h"
#include "model/CancelDNAJobResult.h"
#include "model/CancelFavoritePublicMediaRequest.h"
#include "model/CancelFavoritePublicMediaResult.h"
#include "model/CreateAuditRequest.h"
#include "model/CreateAuditResult.h"
#include "model/CreateCustomTemplateRequest.h"
#include "model/CreateCustomTemplateResult.h"
#include "model/CreateDNADBRequest.h"
#include "model/CreateDNADBResult.h"
#include "model/CreateEditingProjectRequest.h"
#include "model/CreateEditingProjectResult.h"
#include "model/CreateLiveRecordTemplateRequest.h"
#include "model/CreateLiveRecordTemplateResult.h"
#include "model/CreateLiveSnapshotTemplateRequest.h"
#include "model/CreateLiveSnapshotTemplateResult.h"
#include "model/CreateLiveTranscodeTemplateRequest.h"
#include "model/CreateLiveTranscodeTemplateResult.h"
#include "model/CreatePipelineRequest.h"
#include "model/CreatePipelineResult.h"
#include "model/CreateUploadMediaRequest.h"
#include "model/CreateUploadMediaResult.h"
#include "model/CreateUploadStreamRequest.h"
#include "model/CreateUploadStreamResult.h"
#include "model/DeleteCategoryRequest.h"
#include "model/DeleteCategoryResult.h"
#include "model/DeleteCustomTemplateRequest.h"
#include "model/DeleteCustomTemplateResult.h"
#include "model/DeleteDNADBRequest.h"
#include "model/DeleteDNADBResult.h"
#include "model/DeleteDNAFilesRequest.h"
#include "model/DeleteDNAFilesResult.h"
#include "model/DeleteEditingProjectMaterialsRequest.h"
#include "model/DeleteEditingProjectMaterialsResult.h"
#include "model/DeleteEditingProjectsRequest.h"
#include "model/DeleteEditingProjectsResult.h"
#include "model/DeleteLiveRecordFilesRequest.h"
#include "model/DeleteLiveRecordFilesResult.h"
#include "model/DeleteLiveRecordTemplateRequest.h"
#include "model/DeleteLiveRecordTemplateResult.h"
#include "model/DeleteLiveSnapshotFilesRequest.h"
#include "model/DeleteLiveSnapshotFilesResult.h"
#include "model/DeleteLiveSnapshotTemplateRequest.h"
#include "model/DeleteLiveSnapshotTemplateResult.h"
#include "model/DeleteLiveTranscodeJobRequest.h"
#include "model/DeleteLiveTranscodeJobResult.h"
#include "model/DeleteLiveTranscodeTemplateRequest.h"
#include "model/DeleteLiveTranscodeTemplateResult.h"
#include "model/DeleteMediaInfosRequest.h"
#include "model/DeleteMediaInfosResult.h"
#include "model/DeleteMediaMarksRequest.h"
#include "model/DeleteMediaMarksResult.h"
#include "model/DeletePipelineRequest.h"
#include "model/DeletePipelineResult.h"
#include "model/DeletePlayInfoRequest.h"
#include "model/DeletePlayInfoResult.h"
#include "model/DeleteSmartJobRequest.h"
#include "model/DeleteSmartJobResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DescribeFilterConfigsRequest.h"
#include "model/DescribeFilterConfigsResult.h"
#include "model/DescribeMeterIceEditUsageRequest.h"
#include "model/DescribeMeterIceEditUsageResult.h"
#include "model/DescribeMeterIceLiveMediaConvertUsageRequest.h"
#include "model/DescribeMeterIceLiveMediaConvertUsageResult.h"
#include "model/DescribeMeterIceMediaConvertUHDUsageRequest.h"
#include "model/DescribeMeterIceMediaConvertUHDUsageResult.h"
#include "model/DescribeMeterIceMediaConvertUsageRequest.h"
#include "model/DescribeMeterIceMediaConvertUsageResult.h"
#include "model/DescribeMeterIceMpsAiUsageRequest.h"
#include "model/DescribeMeterIceMpsAiUsageResult.h"
#include "model/DescribeMeterImsEditUsageRequest.h"
#include "model/DescribeMeterImsEditUsageResult.h"
#include "model/DescribeMeterImsLiveEditUsageRequest.h"
#include "model/DescribeMeterImsLiveEditUsageResult.h"
#include "model/DescribeMeterImsLiveMediaConvertUsageRequest.h"
#include "model/DescribeMeterImsLiveMediaConvertUsageResult.h"
#include "model/DescribeMeterImsLiveRecordUsageRequest.h"
#include "model/DescribeMeterImsLiveRecordUsageResult.h"
#include "model/DescribeMeterImsLiveSnapshotUsageRequest.h"
#include "model/DescribeMeterImsLiveSnapshotUsageResult.h"
#include "model/DescribeMeterImsMediaConvertUHDUsageRequest.h"
#include "model/DescribeMeterImsMediaConvertUHDUsageResult.h"
#include "model/DescribeMeterImsMediaConvertUsageRequest.h"
#include "model/DescribeMeterImsMediaConvertUsageResult.h"
#include "model/DescribeMeterImsMpsAiUsageRequest.h"
#include "model/DescribeMeterImsMpsAiUsageResult.h"
#include "model/DescribeMeterImsSummaryRequest.h"
#include "model/DescribeMeterImsSummaryResult.h"
#include "model/DescribePlayDetailRequest.h"
#include "model/DescribePlayDetailResult.h"
#include "model/DescribePlayEventListRequest.h"
#include "model/DescribePlayEventListResult.h"
#include "model/DescribePlayFirstFrameDurationMetricDataRequest.h"
#include "model/DescribePlayFirstFrameDurationMetricDataResult.h"
#include "model/DescribePlayListRequest.h"
#include "model/DescribePlayListResult.h"
#include "model/DescribePlayMetricDataRequest.h"
#include "model/DescribePlayMetricDataResult.h"
#include "model/DescribePlayQoeListRequest.h"
#include "model/DescribePlayQoeListResult.h"
#include "model/DescribePlayQosListRequest.h"
#include "model/DescribePlayQosListResult.h"
#include "model/DescribeQueryConfigsRequest.h"
#include "model/DescribeQueryConfigsResult.h"
#include "model/GetCategoriesRequest.h"
#include "model/GetCategoriesResult.h"
#include "model/GetContentAnalyzeConfigRequest.h"
#include "model/GetContentAnalyzeConfigResult.h"
#include "model/GetCustomTemplateRequest.h"
#include "model/GetCustomTemplateResult.h"
#include "model/GetDefaultStorageLocationRequest.h"
#include "model/GetDefaultStorageLocationResult.h"
#include "model/GetDynamicImageJobRequest.h"
#include "model/GetDynamicImageJobResult.h"
#include "model/GetEditingProjectRequest.h"
#include "model/GetEditingProjectResult.h"
#include "model/GetEditingProjectMaterialsRequest.h"
#include "model/GetEditingProjectMaterialsResult.h"
#include "model/GetEventCallbackRequest.h"
#include "model/GetEventCallbackResult.h"
#include "model/GetLiveEditingIndexFileRequest.h"
#include "model/GetLiveEditingIndexFileResult.h"
#include "model/GetLiveEditingJobRequest.h"
#include "model/GetLiveEditingJobResult.h"
#include "model/GetLiveRecordJobRequest.h"
#include "model/GetLiveRecordJobResult.h"
#include "model/GetLiveRecordTemplateRequest.h"
#include "model/GetLiveRecordTemplateResult.h"
#include "model/GetLiveSnapshotJobRequest.h"
#include "model/GetLiveSnapshotJobResult.h"
#include "model/GetLiveSnapshotTemplateRequest.h"
#include "model/GetLiveSnapshotTemplateResult.h"
#include "model/GetLiveTranscodeJobRequest.h"
#include "model/GetLiveTranscodeJobResult.h"
#include "model/GetLiveTranscodeTemplateRequest.h"
#include "model/GetLiveTranscodeTemplateResult.h"
#include "model/GetMediaInfoRequest.h"
#include "model/GetMediaInfoResult.h"
#include "model/GetMediaInfoJobRequest.h"
#include "model/GetMediaInfoJobResult.h"
#include "model/GetMediaMarksRequest.h"
#include "model/GetMediaMarksResult.h"
#include "model/GetMediaProducingJobRequest.h"
#include "model/GetMediaProducingJobResult.h"
#include "model/GetPackageJobRequest.h"
#include "model/GetPackageJobResult.h"
#include "model/GetPipelineRequest.h"
#include "model/GetPipelineResult.h"
#include "model/GetPlayInfoRequest.h"
#include "model/GetPlayInfoResult.h"
#include "model/GetPublicMediaInfoRequest.h"
#include "model/GetPublicMediaInfoResult.h"
#include "model/GetSmartHandleJobRequest.h"
#include "model/GetSmartHandleJobResult.h"
#include "model/GetSnapshotJobRequest.h"
#include "model/GetSnapshotJobResult.h"
#include "model/GetSnapshotUrlsRequest.h"
#include "model/GetSnapshotUrlsResult.h"
#include "model/GetSystemTemplateRequest.h"
#include "model/GetSystemTemplateResult.h"
#include "model/GetTemplateRequest.h"
#include "model/GetTemplateResult.h"
#include "model/GetTemplateMaterialsRequest.h"
#include "model/GetTemplateMaterialsResult.h"
#include "model/GetTemplateParamsRequest.h"
#include "model/GetTemplateParamsResult.h"
#include "model/GetTranscodeJobRequest.h"
#include "model/GetTranscodeJobResult.h"
#include "model/GetUrlUploadInfosRequest.h"
#include "model/GetUrlUploadInfosResult.h"
#include "model/GetWorkflowTaskRequest.h"
#include "model/GetWorkflowTaskResult.h"
#include "model/ListAllPublicMediaTagsRequest.h"
#include "model/ListAllPublicMediaTagsResult.h"
#include "model/ListCustomTemplatesRequest.h"
#include "model/ListCustomTemplatesResult.h"
#include "model/ListDNADBRequest.h"
#include "model/ListDNADBResult.h"
#include "model/ListDNAFilesRequest.h"
#include "model/ListDNAFilesResult.h"
#include "model/ListDynamicImageJobsRequest.h"
#include "model/ListDynamicImageJobsResult.h"
#include "model/ListLiveRecordFilesRequest.h"
#include "model/ListLiveRecordFilesResult.h"
#include "model/ListLiveRecordJobsRequest.h"
#include "model/ListLiveRecordJobsResult.h"
#include "model/ListLiveRecordTemplatesRequest.h"
#include "model/ListLiveRecordTemplatesResult.h"
#include "model/ListLiveSnapshotFilesRequest.h"
#include "model/ListLiveSnapshotFilesResult.h"
#include "model/ListLiveSnapshotJobsRequest.h"
#include "model/ListLiveSnapshotJobsResult.h"
#include "model/ListLiveSnapshotTemplatesRequest.h"
#include "model/ListLiveSnapshotTemplatesResult.h"
#include "model/ListLiveTranscodeJobsRequest.h"
#include "model/ListLiveTranscodeJobsResult.h"
#include "model/ListLiveTranscodeTemplatesRequest.h"
#include "model/ListLiveTranscodeTemplatesResult.h"
#include "model/ListMediaBasicInfosRequest.h"
#include "model/ListMediaBasicInfosResult.h"
#include "model/ListMediaInfoJobsRequest.h"
#include "model/ListMediaInfoJobsResult.h"
#include "model/ListMediaMarksRequest.h"
#include "model/ListMediaMarksResult.h"
#include "model/ListPackageJobsRequest.h"
#include "model/ListPackageJobsResult.h"
#include "model/ListPipelinesRequest.h"
#include "model/ListPipelinesResult.h"
#include "model/ListPublicMediaBasicInfosRequest.h"
#include "model/ListPublicMediaBasicInfosResult.h"
#include "model/ListSmartJobsRequest.h"
#include "model/ListSmartJobsResult.h"
#include "model/ListSmartSysAvatarModelsRequest.h"
#include "model/ListSmartSysAvatarModelsResult.h"
#include "model/ListSnapshotJobsRequest.h"
#include "model/ListSnapshotJobsResult.h"
#include "model/ListSystemTemplatesRequest.h"
#include "model/ListSystemTemplatesResult.h"
#include "model/ListTemplatesRequest.h"
#include "model/ListTemplatesResult.h"
#include "model/ListTranscodeJobsRequest.h"
#include "model/ListTranscodeJobsResult.h"
#include "model/QueryDNAJobListRequest.h"
#include "model/QueryDNAJobListResult.h"
#include "model/QueryIProductionJobRequest.h"
#include "model/QueryIProductionJobResult.h"
#include "model/QueryMediaCensorJobDetailRequest.h"
#include "model/QueryMediaCensorJobDetailResult.h"
#include "model/QueryMediaCensorJobListRequest.h"
#include "model/QueryMediaCensorJobListResult.h"
#include "model/QuerySmarttagJobRequest.h"
#include "model/QuerySmarttagJobResult.h"
#include "model/RefreshUploadMediaRequest.h"
#include "model/RefreshUploadMediaResult.h"
#include "model/RegisterMediaInfoRequest.h"
#include "model/RegisterMediaInfoResult.h"
#include "model/RegisterMediaStreamRequest.h"
#include "model/RegisterMediaStreamResult.h"
#include "model/SearchEditingProjectRequest.h"
#include "model/SearchEditingProjectResult.h"
#include "model/SearchMediaRequest.h"
#include "model/SearchMediaResult.h"
#include "model/SearchMediaByFaceRequest.h"
#include "model/SearchMediaByFaceResult.h"
#include "model/SearchMediaClipByFaceRequest.h"
#include "model/SearchMediaClipByFaceResult.h"
#include "model/SearchPublicMediaInfoRequest.h"
#include "model/SearchPublicMediaInfoResult.h"
#include "model/SendLiveSnapshotJobCommandRequest.h"
#include "model/SendLiveSnapshotJobCommandResult.h"
#include "model/SendLiveTranscodeJobCommandRequest.h"
#include "model/SendLiveTranscodeJobCommandResult.h"
#include "model/SetContentAnalyzeConfigRequest.h"
#include "model/SetContentAnalyzeConfigResult.h"
#include "model/SetDefaultCustomTemplateRequest.h"
#include "model/SetDefaultCustomTemplateResult.h"
#include "model/SetDefaultStorageLocationRequest.h"
#include "model/SetDefaultStorageLocationResult.h"
#include "model/SetEventCallbackRequest.h"
#include "model/SetEventCallbackResult.h"
#include "model/StartWorkflowRequest.h"
#include "model/StartWorkflowResult.h"
#include "model/SubmitASRJobRequest.h"
#include "model/SubmitASRJobResult.h"
#include "model/SubmitAudioProduceJobRequest.h"
#include "model/SubmitAudioProduceJobResult.h"
#include "model/SubmitAvatarVideoJobRequest.h"
#include "model/SubmitAvatarVideoJobResult.h"
#include "model/SubmitDNAJobRequest.h"
#include "model/SubmitDNAJobResult.h"
#include "model/SubmitDynamicChartJobRequest.h"
#include "model/SubmitDynamicChartJobResult.h"
#include "model/SubmitDynamicImageJobRequest.h"
#include "model/SubmitDynamicImageJobResult.h"
#include "model/SubmitIProductionJobRequest.h"
#include "model/SubmitIProductionJobResult.h"
#include "model/SubmitLiveEditingJobRequest.h"
#include "model/SubmitLiveEditingJobResult.h"
#include "model/SubmitLiveRecordJobRequest.h"
#include "model/SubmitLiveRecordJobResult.h"
#include "model/SubmitLiveSnapshotJobRequest.h"
#include "model/SubmitLiveSnapshotJobResult.h"
#include "model/SubmitLiveTranscodeJobRequest.h"
#include "model/SubmitLiveTranscodeJobResult.h"
#include "model/SubmitMediaCensorJobRequest.h"
#include "model/SubmitMediaCensorJobResult.h"
#include "model/SubmitMediaInfoJobRequest.h"
#include "model/SubmitMediaInfoJobResult.h"
#include "model/SubmitMediaProducingJobRequest.h"
#include "model/SubmitMediaProducingJobResult.h"
#include "model/SubmitPackageJobRequest.h"
#include "model/SubmitPackageJobResult.h"
#include "model/SubmitSmarttagJobRequest.h"
#include "model/SubmitSmarttagJobResult.h"
#include "model/SubmitSnapshotJobRequest.h"
#include "model/SubmitSnapshotJobResult.h"
#include "model/SubmitSubtitleProduceJobRequest.h"
#include "model/SubmitSubtitleProduceJobResult.h"
#include "model/SubmitSyncMediaInfoJobRequest.h"
#include "model/SubmitSyncMediaInfoJobResult.h"
#include "model/SubmitTranscodeJobRequest.h"
#include "model/SubmitTranscodeJobResult.h"
#include "model/UpdateCategoryRequest.h"
#include "model/UpdateCategoryResult.h"
#include "model/UpdateCustomTemplateRequest.h"
#include "model/UpdateCustomTemplateResult.h"
#include "model/UpdateEditingProjectRequest.h"
#include "model/UpdateEditingProjectResult.h"
#include "model/UpdateLiveRecordTemplateRequest.h"
#include "model/UpdateLiveRecordTemplateResult.h"
#include "model/UpdateLiveSnapshotTemplateRequest.h"
#include "model/UpdateLiveSnapshotTemplateResult.h"
#include "model/UpdateLiveTranscodeJobRequest.h"
#include "model/UpdateLiveTranscodeJobResult.h"
#include "model/UpdateLiveTranscodeTemplateRequest.h"
#include "model/UpdateLiveTranscodeTemplateResult.h"
#include "model/UpdateMediaInfoRequest.h"
#include "model/UpdateMediaInfoResult.h"
#include "model/UpdateMediaMarksRequest.h"
#include "model/UpdateMediaMarksResult.h"
#include "model/UpdatePipelineRequest.h"
#include "model/UpdatePipelineResult.h"
#include "model/UpdateSmartJobRequest.h"
#include "model/UpdateSmartJobResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/UploadMediaByURLRequest.h"
#include "model/UploadMediaByURLResult.h"
#include "model/UploadStreamByURLRequest.h"
#include "model/UploadStreamByURLResult.h"


namespace AlibabaCloud
{
	namespace ICE
	{
		class ALIBABACLOUD_ICE_EXPORT ICEClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCategoryResult> AddCategoryOutcome;
			typedef std::future<AddCategoryOutcome> AddCategoryOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::AddCategoryRequest&, const AddCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCategoryAsyncHandler;
			typedef Outcome<Error, Model::AddEditingProjectMaterialsResult> AddEditingProjectMaterialsOutcome;
			typedef std::future<AddEditingProjectMaterialsOutcome> AddEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::AddEditingProjectMaterialsRequest&, const AddEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::AddFavoritePublicMediaResult> AddFavoritePublicMediaOutcome;
			typedef std::future<AddFavoritePublicMediaOutcome> AddFavoritePublicMediaOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::AddFavoritePublicMediaRequest&, const AddFavoritePublicMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFavoritePublicMediaAsyncHandler;
			typedef Outcome<Error, Model::AddMediaMarksResult> AddMediaMarksOutcome;
			typedef std::future<AddMediaMarksOutcome> AddMediaMarksOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::AddMediaMarksRequest&, const AddMediaMarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMediaMarksAsyncHandler;
			typedef Outcome<Error, Model::AddTemplateResult> AddTemplateOutcome;
			typedef std::future<AddTemplateOutcome> AddTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::AddTemplateRequest&, const AddTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTemplateAsyncHandler;
			typedef Outcome<Error, Model::BatchGetMediaInfosResult> BatchGetMediaInfosOutcome;
			typedef std::future<BatchGetMediaInfosOutcome> BatchGetMediaInfosOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::BatchGetMediaInfosRequest&, const BatchGetMediaInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetMediaInfosAsyncHandler;
			typedef Outcome<Error, Model::CancelDNAJobResult> CancelDNAJobOutcome;
			typedef std::future<CancelDNAJobOutcome> CancelDNAJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CancelDNAJobRequest&, const CancelDNAJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDNAJobAsyncHandler;
			typedef Outcome<Error, Model::CancelFavoritePublicMediaResult> CancelFavoritePublicMediaOutcome;
			typedef std::future<CancelFavoritePublicMediaOutcome> CancelFavoritePublicMediaOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CancelFavoritePublicMediaRequest&, const CancelFavoritePublicMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelFavoritePublicMediaAsyncHandler;
			typedef Outcome<Error, Model::CreateAuditResult> CreateAuditOutcome;
			typedef std::future<CreateAuditOutcome> CreateAuditOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateAuditRequest&, const CreateAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomTemplateResult> CreateCustomTemplateOutcome;
			typedef std::future<CreateCustomTemplateOutcome> CreateCustomTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateCustomTemplateRequest&, const CreateCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateDNADBResult> CreateDNADBOutcome;
			typedef std::future<CreateDNADBOutcome> CreateDNADBOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateDNADBRequest&, const CreateDNADBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDNADBAsyncHandler;
			typedef Outcome<Error, Model::CreateEditingProjectResult> CreateEditingProjectOutcome;
			typedef std::future<CreateEditingProjectOutcome> CreateEditingProjectOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateEditingProjectRequest&, const CreateEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveRecordTemplateResult> CreateLiveRecordTemplateOutcome;
			typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateLiveRecordTemplateRequest&, const CreateLiveRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveSnapshotTemplateResult> CreateLiveSnapshotTemplateOutcome;
			typedef std::future<CreateLiveSnapshotTemplateOutcome> CreateLiveSnapshotTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateLiveSnapshotTemplateRequest&, const CreateLiveSnapshotTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveTranscodeTemplateResult> CreateLiveTranscodeTemplateOutcome;
			typedef std::future<CreateLiveTranscodeTemplateOutcome> CreateLiveTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateLiveTranscodeTemplateRequest&, const CreateLiveTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelineResult> CreatePipelineOutcome;
			typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreatePipelineRequest&, const CreatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelineAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadMediaResult> CreateUploadMediaOutcome;
			typedef std::future<CreateUploadMediaOutcome> CreateUploadMediaOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateUploadMediaRequest&, const CreateUploadMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadMediaAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadStreamResult> CreateUploadStreamOutcome;
			typedef std::future<CreateUploadStreamOutcome> CreateUploadStreamOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::CreateUploadStreamRequest&, const CreateUploadStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteCategoryResult> DeleteCategoryOutcome;
			typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteCategoryRequest&, const DeleteCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomTemplateResult> DeleteCustomTemplateOutcome;
			typedef std::future<DeleteCustomTemplateOutcome> DeleteCustomTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteCustomTemplateRequest&, const DeleteCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteDNADBResult> DeleteDNADBOutcome;
			typedef std::future<DeleteDNADBOutcome> DeleteDNADBOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteDNADBRequest&, const DeleteDNADBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDNADBAsyncHandler;
			typedef Outcome<Error, Model::DeleteDNAFilesResult> DeleteDNAFilesOutcome;
			typedef std::future<DeleteDNAFilesOutcome> DeleteDNAFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteDNAFilesRequest&, const DeleteDNAFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDNAFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectMaterialsResult> DeleteEditingProjectMaterialsOutcome;
			typedef std::future<DeleteEditingProjectMaterialsOutcome> DeleteEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteEditingProjectMaterialsRequest&, const DeleteEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectsResult> DeleteEditingProjectsOutcome;
			typedef std::future<DeleteEditingProjectsOutcome> DeleteEditingProjectsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteEditingProjectsRequest&, const DeleteEditingProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectsAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordFilesResult> DeleteLiveRecordFilesOutcome;
			typedef std::future<DeleteLiveRecordFilesOutcome> DeleteLiveRecordFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveRecordFilesRequest&, const DeleteLiveRecordFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordTemplateResult> DeleteLiveRecordTemplateOutcome;
			typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveRecordTemplateRequest&, const DeleteLiveRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotFilesResult> DeleteLiveSnapshotFilesOutcome;
			typedef std::future<DeleteLiveSnapshotFilesOutcome> DeleteLiveSnapshotFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveSnapshotFilesRequest&, const DeleteLiveSnapshotFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotTemplateResult> DeleteLiveSnapshotTemplateOutcome;
			typedef std::future<DeleteLiveSnapshotTemplateOutcome> DeleteLiveSnapshotTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveSnapshotTemplateRequest&, const DeleteLiveSnapshotTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveTranscodeJobResult> DeleteLiveTranscodeJobOutcome;
			typedef std::future<DeleteLiveTranscodeJobOutcome> DeleteLiveTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveTranscodeJobRequest&, const DeleteLiveTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveTranscodeTemplateResult> DeleteLiveTranscodeTemplateOutcome;
			typedef std::future<DeleteLiveTranscodeTemplateOutcome> DeleteLiveTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteLiveTranscodeTemplateRequest&, const DeleteLiveTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaInfosResult> DeleteMediaInfosOutcome;
			typedef std::future<DeleteMediaInfosOutcome> DeleteMediaInfosOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteMediaInfosRequest&, const DeleteMediaInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaInfosAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaMarksResult> DeleteMediaMarksOutcome;
			typedef std::future<DeleteMediaMarksOutcome> DeleteMediaMarksOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteMediaMarksRequest&, const DeleteMediaMarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaMarksAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelineResult> DeletePipelineOutcome;
			typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeletePipelineRequest&, const DeletePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelineAsyncHandler;
			typedef Outcome<Error, Model::DeletePlayInfoResult> DeletePlayInfoOutcome;
			typedef std::future<DeletePlayInfoOutcome> DeletePlayInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeletePlayInfoRequest&, const DeletePlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlayInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmartJobResult> DeleteSmartJobOutcome;
			typedef std::future<DeleteSmartJobOutcome> DeleteSmartJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteSmartJobRequest&, const DeleteSmartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeFilterConfigsResult> DescribeFilterConfigsOutcome;
			typedef std::future<DescribeFilterConfigsOutcome> DescribeFilterConfigsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeFilterConfigsRequest&, const DescribeFilterConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterIceEditUsageResult> DescribeMeterIceEditUsageOutcome;
			typedef std::future<DescribeMeterIceEditUsageOutcome> DescribeMeterIceEditUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterIceEditUsageRequest&, const DescribeMeterIceEditUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterIceEditUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterIceLiveMediaConvertUsageResult> DescribeMeterIceLiveMediaConvertUsageOutcome;
			typedef std::future<DescribeMeterIceLiveMediaConvertUsageOutcome> DescribeMeterIceLiveMediaConvertUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterIceLiveMediaConvertUsageRequest&, const DescribeMeterIceLiveMediaConvertUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterIceLiveMediaConvertUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterIceMediaConvertUHDUsageResult> DescribeMeterIceMediaConvertUHDUsageOutcome;
			typedef std::future<DescribeMeterIceMediaConvertUHDUsageOutcome> DescribeMeterIceMediaConvertUHDUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterIceMediaConvertUHDUsageRequest&, const DescribeMeterIceMediaConvertUHDUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterIceMediaConvertUHDUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterIceMediaConvertUsageResult> DescribeMeterIceMediaConvertUsageOutcome;
			typedef std::future<DescribeMeterIceMediaConvertUsageOutcome> DescribeMeterIceMediaConvertUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterIceMediaConvertUsageRequest&, const DescribeMeterIceMediaConvertUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterIceMediaConvertUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterIceMpsAiUsageResult> DescribeMeterIceMpsAiUsageOutcome;
			typedef std::future<DescribeMeterIceMpsAiUsageOutcome> DescribeMeterIceMpsAiUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterIceMpsAiUsageRequest&, const DescribeMeterIceMpsAiUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterIceMpsAiUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsEditUsageResult> DescribeMeterImsEditUsageOutcome;
			typedef std::future<DescribeMeterImsEditUsageOutcome> DescribeMeterImsEditUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsEditUsageRequest&, const DescribeMeterImsEditUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsEditUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsLiveEditUsageResult> DescribeMeterImsLiveEditUsageOutcome;
			typedef std::future<DescribeMeterImsLiveEditUsageOutcome> DescribeMeterImsLiveEditUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsLiveEditUsageRequest&, const DescribeMeterImsLiveEditUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsLiveEditUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsLiveMediaConvertUsageResult> DescribeMeterImsLiveMediaConvertUsageOutcome;
			typedef std::future<DescribeMeterImsLiveMediaConvertUsageOutcome> DescribeMeterImsLiveMediaConvertUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsLiveMediaConvertUsageRequest&, const DescribeMeterImsLiveMediaConvertUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsLiveMediaConvertUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsLiveRecordUsageResult> DescribeMeterImsLiveRecordUsageOutcome;
			typedef std::future<DescribeMeterImsLiveRecordUsageOutcome> DescribeMeterImsLiveRecordUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsLiveRecordUsageRequest&, const DescribeMeterImsLiveRecordUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsLiveRecordUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsLiveSnapshotUsageResult> DescribeMeterImsLiveSnapshotUsageOutcome;
			typedef std::future<DescribeMeterImsLiveSnapshotUsageOutcome> DescribeMeterImsLiveSnapshotUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsLiveSnapshotUsageRequest&, const DescribeMeterImsLiveSnapshotUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsLiveSnapshotUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsMediaConvertUHDUsageResult> DescribeMeterImsMediaConvertUHDUsageOutcome;
			typedef std::future<DescribeMeterImsMediaConvertUHDUsageOutcome> DescribeMeterImsMediaConvertUHDUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsMediaConvertUHDUsageRequest&, const DescribeMeterImsMediaConvertUHDUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsMediaConvertUHDUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsMediaConvertUsageResult> DescribeMeterImsMediaConvertUsageOutcome;
			typedef std::future<DescribeMeterImsMediaConvertUsageOutcome> DescribeMeterImsMediaConvertUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsMediaConvertUsageRequest&, const DescribeMeterImsMediaConvertUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsMediaConvertUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsMpsAiUsageResult> DescribeMeterImsMpsAiUsageOutcome;
			typedef std::future<DescribeMeterImsMpsAiUsageOutcome> DescribeMeterImsMpsAiUsageOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsMpsAiUsageRequest&, const DescribeMeterImsMpsAiUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsMpsAiUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterImsSummaryResult> DescribeMeterImsSummaryOutcome;
			typedef std::future<DescribeMeterImsSummaryOutcome> DescribeMeterImsSummaryOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeMeterImsSummaryRequest&, const DescribeMeterImsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterImsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayDetailResult> DescribePlayDetailOutcome;
			typedef std::future<DescribePlayDetailOutcome> DescribePlayDetailOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayDetailRequest&, const DescribePlayDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayEventListResult> DescribePlayEventListOutcome;
			typedef std::future<DescribePlayEventListOutcome> DescribePlayEventListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayEventListRequest&, const DescribePlayEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayFirstFrameDurationMetricDataResult> DescribePlayFirstFrameDurationMetricDataOutcome;
			typedef std::future<DescribePlayFirstFrameDurationMetricDataOutcome> DescribePlayFirstFrameDurationMetricDataOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayFirstFrameDurationMetricDataRequest&, const DescribePlayFirstFrameDurationMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayFirstFrameDurationMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayListResult> DescribePlayListOutcome;
			typedef std::future<DescribePlayListOutcome> DescribePlayListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayListRequest&, const DescribePlayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayListAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayMetricDataResult> DescribePlayMetricDataOutcome;
			typedef std::future<DescribePlayMetricDataOutcome> DescribePlayMetricDataOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayMetricDataRequest&, const DescribePlayMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayQoeListResult> DescribePlayQoeListOutcome;
			typedef std::future<DescribePlayQoeListOutcome> DescribePlayQoeListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayQoeListRequest&, const DescribePlayQoeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayQoeListAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayQosListResult> DescribePlayQosListOutcome;
			typedef std::future<DescribePlayQosListOutcome> DescribePlayQosListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribePlayQosListRequest&, const DescribePlayQosListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayQosListAsyncHandler;
			typedef Outcome<Error, Model::DescribeQueryConfigsResult> DescribeQueryConfigsOutcome;
			typedef std::future<DescribeQueryConfigsOutcome> DescribeQueryConfigsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::DescribeQueryConfigsRequest&, const DescribeQueryConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueryConfigsAsyncHandler;
			typedef Outcome<Error, Model::GetCategoriesResult> GetCategoriesOutcome;
			typedef std::future<GetCategoriesOutcome> GetCategoriesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetCategoriesRequest&, const GetCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCategoriesAsyncHandler;
			typedef Outcome<Error, Model::GetContentAnalyzeConfigResult> GetContentAnalyzeConfigOutcome;
			typedef std::future<GetContentAnalyzeConfigOutcome> GetContentAnalyzeConfigOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetContentAnalyzeConfigRequest&, const GetContentAnalyzeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContentAnalyzeConfigAsyncHandler;
			typedef Outcome<Error, Model::GetCustomTemplateResult> GetCustomTemplateOutcome;
			typedef std::future<GetCustomTemplateOutcome> GetCustomTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetCustomTemplateRequest&, const GetCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetDefaultStorageLocationResult> GetDefaultStorageLocationOutcome;
			typedef std::future<GetDefaultStorageLocationOutcome> GetDefaultStorageLocationOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetDefaultStorageLocationRequest&, const GetDefaultStorageLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDefaultStorageLocationAsyncHandler;
			typedef Outcome<Error, Model::GetDynamicImageJobResult> GetDynamicImageJobOutcome;
			typedef std::future<GetDynamicImageJobOutcome> GetDynamicImageJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetDynamicImageJobRequest&, const GetDynamicImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDynamicImageJobAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectResult> GetEditingProjectOutcome;
			typedef std::future<GetEditingProjectOutcome> GetEditingProjectOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetEditingProjectRequest&, const GetEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectMaterialsResult> GetEditingProjectMaterialsOutcome;
			typedef std::future<GetEditingProjectMaterialsOutcome> GetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetEditingProjectMaterialsRequest&, const GetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetEventCallbackResult> GetEventCallbackOutcome;
			typedef std::future<GetEventCallbackOutcome> GetEventCallbackOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetEventCallbackRequest&, const GetEventCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEventCallbackAsyncHandler;
			typedef Outcome<Error, Model::GetLiveEditingIndexFileResult> GetLiveEditingIndexFileOutcome;
			typedef std::future<GetLiveEditingIndexFileOutcome> GetLiveEditingIndexFileOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveEditingIndexFileRequest&, const GetLiveEditingIndexFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveEditingIndexFileAsyncHandler;
			typedef Outcome<Error, Model::GetLiveEditingJobResult> GetLiveEditingJobOutcome;
			typedef std::future<GetLiveEditingJobOutcome> GetLiveEditingJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveEditingJobRequest&, const GetLiveEditingJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveEditingJobAsyncHandler;
			typedef Outcome<Error, Model::GetLiveRecordJobResult> GetLiveRecordJobOutcome;
			typedef std::future<GetLiveRecordJobOutcome> GetLiveRecordJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveRecordJobRequest&, const GetLiveRecordJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveRecordJobAsyncHandler;
			typedef Outcome<Error, Model::GetLiveRecordTemplateResult> GetLiveRecordTemplateOutcome;
			typedef std::future<GetLiveRecordTemplateOutcome> GetLiveRecordTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveRecordTemplateRequest&, const GetLiveRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetLiveSnapshotJobResult> GetLiveSnapshotJobOutcome;
			typedef std::future<GetLiveSnapshotJobOutcome> GetLiveSnapshotJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveSnapshotJobRequest&, const GetLiveSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::GetLiveSnapshotTemplateResult> GetLiveSnapshotTemplateOutcome;
			typedef std::future<GetLiveSnapshotTemplateOutcome> GetLiveSnapshotTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveSnapshotTemplateRequest&, const GetLiveSnapshotTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveSnapshotTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetLiveTranscodeJobResult> GetLiveTranscodeJobOutcome;
			typedef std::future<GetLiveTranscodeJobOutcome> GetLiveTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveTranscodeJobRequest&, const GetLiveTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::GetLiveTranscodeTemplateResult> GetLiveTranscodeTemplateOutcome;
			typedef std::future<GetLiveTranscodeTemplateOutcome> GetLiveTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetLiveTranscodeTemplateRequest&, const GetLiveTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetMediaInfoResult> GetMediaInfoOutcome;
			typedef std::future<GetMediaInfoOutcome> GetMediaInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetMediaInfoRequest&, const GetMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMediaInfoJobResult> GetMediaInfoJobOutcome;
			typedef std::future<GetMediaInfoJobOutcome> GetMediaInfoJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetMediaInfoJobRequest&, const GetMediaInfoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaInfoJobAsyncHandler;
			typedef Outcome<Error, Model::GetMediaMarksResult> GetMediaMarksOutcome;
			typedef std::future<GetMediaMarksOutcome> GetMediaMarksOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetMediaMarksRequest&, const GetMediaMarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaMarksAsyncHandler;
			typedef Outcome<Error, Model::GetMediaProducingJobResult> GetMediaProducingJobOutcome;
			typedef std::future<GetMediaProducingJobOutcome> GetMediaProducingJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetMediaProducingJobRequest&, const GetMediaProducingJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaProducingJobAsyncHandler;
			typedef Outcome<Error, Model::GetPackageJobResult> GetPackageJobOutcome;
			typedef std::future<GetPackageJobOutcome> GetPackageJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetPackageJobRequest&, const GetPackageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPackageJobAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineResult> GetPipelineOutcome;
			typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetPipelineRequest&, const GetPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineAsyncHandler;
			typedef Outcome<Error, Model::GetPlayInfoResult> GetPlayInfoOutcome;
			typedef std::future<GetPlayInfoOutcome> GetPlayInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetPlayInfoRequest&, const GetPlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPlayInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPublicMediaInfoResult> GetPublicMediaInfoOutcome;
			typedef std::future<GetPublicMediaInfoOutcome> GetPublicMediaInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetPublicMediaInfoRequest&, const GetPublicMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::GetSmartHandleJobResult> GetSmartHandleJobOutcome;
			typedef std::future<GetSmartHandleJobOutcome> GetSmartHandleJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetSmartHandleJobRequest&, const GetSmartHandleJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartHandleJobAsyncHandler;
			typedef Outcome<Error, Model::GetSnapshotJobResult> GetSnapshotJobOutcome;
			typedef std::future<GetSnapshotJobOutcome> GetSnapshotJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetSnapshotJobRequest&, const GetSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::GetSnapshotUrlsResult> GetSnapshotUrlsOutcome;
			typedef std::future<GetSnapshotUrlsOutcome> GetSnapshotUrlsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetSnapshotUrlsRequest&, const GetSnapshotUrlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSnapshotUrlsAsyncHandler;
			typedef Outcome<Error, Model::GetSystemTemplateResult> GetSystemTemplateOutcome;
			typedef std::future<GetSystemTemplateOutcome> GetSystemTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetSystemTemplateRequest&, const GetSystemTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSystemTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateResult> GetTemplateOutcome;
			typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetTemplateRequest&, const GetTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateMaterialsResult> GetTemplateMaterialsOutcome;
			typedef std::future<GetTemplateMaterialsOutcome> GetTemplateMaterialsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetTemplateMaterialsRequest&, const GetTemplateMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateParamsResult> GetTemplateParamsOutcome;
			typedef std::future<GetTemplateParamsOutcome> GetTemplateParamsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetTemplateParamsRequest&, const GetTemplateParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateParamsAsyncHandler;
			typedef Outcome<Error, Model::GetTranscodeJobResult> GetTranscodeJobOutcome;
			typedef std::future<GetTranscodeJobOutcome> GetTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetTranscodeJobRequest&, const GetTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::GetUrlUploadInfosResult> GetUrlUploadInfosOutcome;
			typedef std::future<GetUrlUploadInfosOutcome> GetUrlUploadInfosOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetUrlUploadInfosRequest&, const GetUrlUploadInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUrlUploadInfosAsyncHandler;
			typedef Outcome<Error, Model::GetWorkflowTaskResult> GetWorkflowTaskOutcome;
			typedef std::future<GetWorkflowTaskOutcome> GetWorkflowTaskOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::GetWorkflowTaskRequest&, const GetWorkflowTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowTaskAsyncHandler;
			typedef Outcome<Error, Model::ListAllPublicMediaTagsResult> ListAllPublicMediaTagsOutcome;
			typedef std::future<ListAllPublicMediaTagsOutcome> ListAllPublicMediaTagsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListAllPublicMediaTagsRequest&, const ListAllPublicMediaTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllPublicMediaTagsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomTemplatesResult> ListCustomTemplatesOutcome;
			typedef std::future<ListCustomTemplatesOutcome> ListCustomTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListCustomTemplatesRequest&, const ListCustomTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListDNADBResult> ListDNADBOutcome;
			typedef std::future<ListDNADBOutcome> ListDNADBOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListDNADBRequest&, const ListDNADBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDNADBAsyncHandler;
			typedef Outcome<Error, Model::ListDNAFilesResult> ListDNAFilesOutcome;
			typedef std::future<ListDNAFilesOutcome> ListDNAFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListDNAFilesRequest&, const ListDNAFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDNAFilesAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicImageJobsResult> ListDynamicImageJobsOutcome;
			typedef std::future<ListDynamicImageJobsOutcome> ListDynamicImageJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListDynamicImageJobsRequest&, const ListDynamicImageJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicImageJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordFilesResult> ListLiveRecordFilesOutcome;
			typedef std::future<ListLiveRecordFilesOutcome> ListLiveRecordFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveRecordFilesRequest&, const ListLiveRecordFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordFilesAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordJobsResult> ListLiveRecordJobsOutcome;
			typedef std::future<ListLiveRecordJobsOutcome> ListLiveRecordJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveRecordJobsRequest&, const ListLiveRecordJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordTemplatesResult> ListLiveRecordTemplatesOutcome;
			typedef std::future<ListLiveRecordTemplatesOutcome> ListLiveRecordTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveRecordTemplatesRequest&, const ListLiveRecordTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListLiveSnapshotFilesResult> ListLiveSnapshotFilesOutcome;
			typedef std::future<ListLiveSnapshotFilesOutcome> ListLiveSnapshotFilesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveSnapshotFilesRequest&, const ListLiveSnapshotFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveSnapshotFilesAsyncHandler;
			typedef Outcome<Error, Model::ListLiveSnapshotJobsResult> ListLiveSnapshotJobsOutcome;
			typedef std::future<ListLiveSnapshotJobsOutcome> ListLiveSnapshotJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveSnapshotJobsRequest&, const ListLiveSnapshotJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveSnapshotJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveSnapshotTemplatesResult> ListLiveSnapshotTemplatesOutcome;
			typedef std::future<ListLiveSnapshotTemplatesOutcome> ListLiveSnapshotTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveSnapshotTemplatesRequest&, const ListLiveSnapshotTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveSnapshotTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListLiveTranscodeJobsResult> ListLiveTranscodeJobsOutcome;
			typedef std::future<ListLiveTranscodeJobsOutcome> ListLiveTranscodeJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveTranscodeJobsRequest&, const ListLiveTranscodeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveTranscodeJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveTranscodeTemplatesResult> ListLiveTranscodeTemplatesOutcome;
			typedef std::future<ListLiveTranscodeTemplatesOutcome> ListLiveTranscodeTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListLiveTranscodeTemplatesRequest&, const ListLiveTranscodeTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveTranscodeTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListMediaBasicInfosResult> ListMediaBasicInfosOutcome;
			typedef std::future<ListMediaBasicInfosOutcome> ListMediaBasicInfosOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListMediaBasicInfosRequest&, const ListMediaBasicInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaBasicInfosAsyncHandler;
			typedef Outcome<Error, Model::ListMediaInfoJobsResult> ListMediaInfoJobsOutcome;
			typedef std::future<ListMediaInfoJobsOutcome> ListMediaInfoJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListMediaInfoJobsRequest&, const ListMediaInfoJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaInfoJobsAsyncHandler;
			typedef Outcome<Error, Model::ListMediaMarksResult> ListMediaMarksOutcome;
			typedef std::future<ListMediaMarksOutcome> ListMediaMarksOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListMediaMarksRequest&, const ListMediaMarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaMarksAsyncHandler;
			typedef Outcome<Error, Model::ListPackageJobsResult> ListPackageJobsOutcome;
			typedef std::future<ListPackageJobsOutcome> ListPackageJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListPackageJobsRequest&, const ListPackageJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPackageJobsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelinesResult> ListPipelinesOutcome;
			typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListPipelinesRequest&, const ListPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ListPublicMediaBasicInfosResult> ListPublicMediaBasicInfosOutcome;
			typedef std::future<ListPublicMediaBasicInfosOutcome> ListPublicMediaBasicInfosOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListPublicMediaBasicInfosRequest&, const ListPublicMediaBasicInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublicMediaBasicInfosAsyncHandler;
			typedef Outcome<Error, Model::ListSmartJobsResult> ListSmartJobsOutcome;
			typedef std::future<ListSmartJobsOutcome> ListSmartJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListSmartJobsRequest&, const ListSmartJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSmartJobsAsyncHandler;
			typedef Outcome<Error, Model::ListSmartSysAvatarModelsResult> ListSmartSysAvatarModelsOutcome;
			typedef std::future<ListSmartSysAvatarModelsOutcome> ListSmartSysAvatarModelsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListSmartSysAvatarModelsRequest&, const ListSmartSysAvatarModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSmartSysAvatarModelsAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotJobsResult> ListSnapshotJobsOutcome;
			typedef std::future<ListSnapshotJobsOutcome> ListSnapshotJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListSnapshotJobsRequest&, const ListSnapshotJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotJobsAsyncHandler;
			typedef Outcome<Error, Model::ListSystemTemplatesResult> ListSystemTemplatesOutcome;
			typedef std::future<ListSystemTemplatesOutcome> ListSystemTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListSystemTemplatesRequest&, const ListSystemTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListTemplatesResult> ListTemplatesOutcome;
			typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListTemplatesRequest&, const ListTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListTranscodeJobsResult> ListTranscodeJobsOutcome;
			typedef std::future<ListTranscodeJobsOutcome> ListTranscodeJobsOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::ListTranscodeJobsRequest&, const ListTranscodeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscodeJobsAsyncHandler;
			typedef Outcome<Error, Model::QueryDNAJobListResult> QueryDNAJobListOutcome;
			typedef std::future<QueryDNAJobListOutcome> QueryDNAJobListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::QueryDNAJobListRequest&, const QueryDNAJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDNAJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryIProductionJobResult> QueryIProductionJobOutcome;
			typedef std::future<QueryIProductionJobOutcome> QueryIProductionJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::QueryIProductionJobRequest&, const QueryIProductionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIProductionJobAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobDetailResult> QueryMediaCensorJobDetailOutcome;
			typedef std::future<QueryMediaCensorJobDetailOutcome> QueryMediaCensorJobDetailOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::QueryMediaCensorJobDetailRequest&, const QueryMediaCensorJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobListResult> QueryMediaCensorJobListOutcome;
			typedef std::future<QueryMediaCensorJobListOutcome> QueryMediaCensorJobListOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::QueryMediaCensorJobListRequest&, const QueryMediaCensorJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobListAsyncHandler;
			typedef Outcome<Error, Model::QuerySmarttagJobResult> QuerySmarttagJobOutcome;
			typedef std::future<QuerySmarttagJobOutcome> QuerySmarttagJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::QuerySmarttagJobRequest&, const QuerySmarttagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmarttagJobAsyncHandler;
			typedef Outcome<Error, Model::RefreshUploadMediaResult> RefreshUploadMediaOutcome;
			typedef std::future<RefreshUploadMediaOutcome> RefreshUploadMediaOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::RefreshUploadMediaRequest&, const RefreshUploadMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUploadMediaAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaInfoResult> RegisterMediaInfoOutcome;
			typedef std::future<RegisterMediaInfoOutcome> RegisterMediaInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::RegisterMediaInfoRequest&, const RegisterMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaStreamResult> RegisterMediaStreamOutcome;
			typedef std::future<RegisterMediaStreamOutcome> RegisterMediaStreamOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::RegisterMediaStreamRequest&, const RegisterMediaStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaStreamAsyncHandler;
			typedef Outcome<Error, Model::SearchEditingProjectResult> SearchEditingProjectOutcome;
			typedef std::future<SearchEditingProjectOutcome> SearchEditingProjectOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SearchEditingProjectRequest&, const SearchEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaResult> SearchMediaOutcome;
			typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SearchMediaRequest&, const SearchMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaByFaceResult> SearchMediaByFaceOutcome;
			typedef std::future<SearchMediaByFaceOutcome> SearchMediaByFaceOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SearchMediaByFaceRequest&, const SearchMediaByFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaByFaceAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaClipByFaceResult> SearchMediaClipByFaceOutcome;
			typedef std::future<SearchMediaClipByFaceOutcome> SearchMediaClipByFaceOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SearchMediaClipByFaceRequest&, const SearchMediaClipByFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaClipByFaceAsyncHandler;
			typedef Outcome<Error, Model::SearchPublicMediaInfoResult> SearchPublicMediaInfoOutcome;
			typedef std::future<SearchPublicMediaInfoOutcome> SearchPublicMediaInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SearchPublicMediaInfoRequest&, const SearchPublicMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchPublicMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::SendLiveSnapshotJobCommandResult> SendLiveSnapshotJobCommandOutcome;
			typedef std::future<SendLiveSnapshotJobCommandOutcome> SendLiveSnapshotJobCommandOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SendLiveSnapshotJobCommandRequest&, const SendLiveSnapshotJobCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLiveSnapshotJobCommandAsyncHandler;
			typedef Outcome<Error, Model::SendLiveTranscodeJobCommandResult> SendLiveTranscodeJobCommandOutcome;
			typedef std::future<SendLiveTranscodeJobCommandOutcome> SendLiveTranscodeJobCommandOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SendLiveTranscodeJobCommandRequest&, const SendLiveTranscodeJobCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLiveTranscodeJobCommandAsyncHandler;
			typedef Outcome<Error, Model::SetContentAnalyzeConfigResult> SetContentAnalyzeConfigOutcome;
			typedef std::future<SetContentAnalyzeConfigOutcome> SetContentAnalyzeConfigOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SetContentAnalyzeConfigRequest&, const SetContentAnalyzeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetContentAnalyzeConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultCustomTemplateResult> SetDefaultCustomTemplateOutcome;
			typedef std::future<SetDefaultCustomTemplateOutcome> SetDefaultCustomTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SetDefaultCustomTemplateRequest&, const SetDefaultCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultStorageLocationResult> SetDefaultStorageLocationOutcome;
			typedef std::future<SetDefaultStorageLocationOutcome> SetDefaultStorageLocationOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SetDefaultStorageLocationRequest&, const SetDefaultStorageLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultStorageLocationAsyncHandler;
			typedef Outcome<Error, Model::SetEventCallbackResult> SetEventCallbackOutcome;
			typedef std::future<SetEventCallbackOutcome> SetEventCallbackOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SetEventCallbackRequest&, const SetEventCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEventCallbackAsyncHandler;
			typedef Outcome<Error, Model::StartWorkflowResult> StartWorkflowOutcome;
			typedef std::future<StartWorkflowOutcome> StartWorkflowOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::StartWorkflowRequest&, const StartWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartWorkflowAsyncHandler;
			typedef Outcome<Error, Model::SubmitASRJobResult> SubmitASRJobOutcome;
			typedef std::future<SubmitASRJobOutcome> SubmitASRJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitASRJobRequest&, const SubmitASRJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitASRJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAudioProduceJobResult> SubmitAudioProduceJobOutcome;
			typedef std::future<SubmitAudioProduceJobOutcome> SubmitAudioProduceJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitAudioProduceJobRequest&, const SubmitAudioProduceJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAudioProduceJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAvatarVideoJobResult> SubmitAvatarVideoJobOutcome;
			typedef std::future<SubmitAvatarVideoJobOutcome> SubmitAvatarVideoJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitAvatarVideoJobRequest&, const SubmitAvatarVideoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAvatarVideoJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDNAJobResult> SubmitDNAJobOutcome;
			typedef std::future<SubmitDNAJobOutcome> SubmitDNAJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitDNAJobRequest&, const SubmitDNAJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDNAJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDynamicChartJobResult> SubmitDynamicChartJobOutcome;
			typedef std::future<SubmitDynamicChartJobOutcome> SubmitDynamicChartJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitDynamicChartJobRequest&, const SubmitDynamicChartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDynamicChartJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDynamicImageJobResult> SubmitDynamicImageJobOutcome;
			typedef std::future<SubmitDynamicImageJobOutcome> SubmitDynamicImageJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitDynamicImageJobRequest&, const SubmitDynamicImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDynamicImageJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitIProductionJobResult> SubmitIProductionJobOutcome;
			typedef std::future<SubmitIProductionJobOutcome> SubmitIProductionJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitIProductionJobRequest&, const SubmitIProductionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIProductionJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitLiveEditingJobResult> SubmitLiveEditingJobOutcome;
			typedef std::future<SubmitLiveEditingJobOutcome> SubmitLiveEditingJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitLiveEditingJobRequest&, const SubmitLiveEditingJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLiveEditingJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitLiveRecordJobResult> SubmitLiveRecordJobOutcome;
			typedef std::future<SubmitLiveRecordJobOutcome> SubmitLiveRecordJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitLiveRecordJobRequest&, const SubmitLiveRecordJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLiveRecordJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitLiveSnapshotJobResult> SubmitLiveSnapshotJobOutcome;
			typedef std::future<SubmitLiveSnapshotJobOutcome> SubmitLiveSnapshotJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitLiveSnapshotJobRequest&, const SubmitLiveSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLiveSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitLiveTranscodeJobResult> SubmitLiveTranscodeJobOutcome;
			typedef std::future<SubmitLiveTranscodeJobOutcome> SubmitLiveTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitLiveTranscodeJobRequest&, const SubmitLiveTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLiveTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaCensorJobResult> SubmitMediaCensorJobOutcome;
			typedef std::future<SubmitMediaCensorJobOutcome> SubmitMediaCensorJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitMediaCensorJobRequest&, const SubmitMediaCensorJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaCensorJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaInfoJobResult> SubmitMediaInfoJobOutcome;
			typedef std::future<SubmitMediaInfoJobOutcome> SubmitMediaInfoJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitMediaInfoJobRequest&, const SubmitMediaInfoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaInfoJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaProducingJobResult> SubmitMediaProducingJobOutcome;
			typedef std::future<SubmitMediaProducingJobOutcome> SubmitMediaProducingJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitMediaProducingJobRequest&, const SubmitMediaProducingJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaProducingJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitPackageJobResult> SubmitPackageJobOutcome;
			typedef std::future<SubmitPackageJobOutcome> SubmitPackageJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitPackageJobRequest&, const SubmitPackageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPackageJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmarttagJobResult> SubmitSmarttagJobOutcome;
			typedef std::future<SubmitSmarttagJobOutcome> SubmitSmarttagJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitSmarttagJobRequest&, const SubmitSmarttagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmarttagJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSnapshotJobResult> SubmitSnapshotJobOutcome;
			typedef std::future<SubmitSnapshotJobOutcome> SubmitSnapshotJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitSnapshotJobRequest&, const SubmitSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSubtitleProduceJobResult> SubmitSubtitleProduceJobOutcome;
			typedef std::future<SubmitSubtitleProduceJobOutcome> SubmitSubtitleProduceJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitSubtitleProduceJobRequest&, const SubmitSubtitleProduceJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSubtitleProduceJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSyncMediaInfoJobResult> SubmitSyncMediaInfoJobOutcome;
			typedef std::future<SubmitSyncMediaInfoJobOutcome> SubmitSyncMediaInfoJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitSyncMediaInfoJobRequest&, const SubmitSyncMediaInfoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSyncMediaInfoJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTranscodeJobResult> SubmitTranscodeJobOutcome;
			typedef std::future<SubmitTranscodeJobOutcome> SubmitTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::SubmitTranscodeJobRequest&, const SubmitTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateCategoryResult> UpdateCategoryOutcome;
			typedef std::future<UpdateCategoryOutcome> UpdateCategoryOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateCategoryRequest&, const UpdateCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomTemplateResult> UpdateCustomTemplateOutcome;
			typedef std::future<UpdateCustomTemplateOutcome> UpdateCustomTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateCustomTemplateRequest&, const UpdateCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateEditingProjectResult> UpdateEditingProjectOutcome;
			typedef std::future<UpdateEditingProjectOutcome> UpdateEditingProjectOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateEditingProjectRequest&, const UpdateEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveRecordTemplateResult> UpdateLiveRecordTemplateOutcome;
			typedef std::future<UpdateLiveRecordTemplateOutcome> UpdateLiveRecordTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateLiveRecordTemplateRequest&, const UpdateLiveRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveSnapshotTemplateResult> UpdateLiveSnapshotTemplateOutcome;
			typedef std::future<UpdateLiveSnapshotTemplateOutcome> UpdateLiveSnapshotTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateLiveSnapshotTemplateRequest&, const UpdateLiveSnapshotTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveSnapshotTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveTranscodeJobResult> UpdateLiveTranscodeJobOutcome;
			typedef std::future<UpdateLiveTranscodeJobOutcome> UpdateLiveTranscodeJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateLiveTranscodeJobRequest&, const UpdateLiveTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveTranscodeTemplateResult> UpdateLiveTranscodeTemplateOutcome;
			typedef std::future<UpdateLiveTranscodeTemplateOutcome> UpdateLiveTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateLiveTranscodeTemplateRequest&, const UpdateLiveTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaInfoResult> UpdateMediaInfoOutcome;
			typedef std::future<UpdateMediaInfoOutcome> UpdateMediaInfoOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateMediaInfoRequest&, const UpdateMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaMarksResult> UpdateMediaMarksOutcome;
			typedef std::future<UpdateMediaMarksOutcome> UpdateMediaMarksOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateMediaMarksRequest&, const UpdateMediaMarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaMarksAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineResult> UpdatePipelineOutcome;
			typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdatePipelineRequest&, const UpdatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartJobResult> UpdateSmartJobOutcome;
			typedef std::future<UpdateSmartJobOutcome> UpdateSmartJobOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateSmartJobRequest&, const UpdateSmartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::UploadMediaByURLResult> UploadMediaByURLOutcome;
			typedef std::future<UploadMediaByURLOutcome> UploadMediaByURLOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UploadMediaByURLRequest&, const UploadMediaByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMediaByURLAsyncHandler;
			typedef Outcome<Error, Model::UploadStreamByURLResult> UploadStreamByURLOutcome;
			typedef std::future<UploadStreamByURLOutcome> UploadStreamByURLOutcomeCallable;
			typedef std::function<void(const ICEClient*, const Model::UploadStreamByURLRequest&, const UploadStreamByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadStreamByURLAsyncHandler;

			ICEClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ICEClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ICEClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ICEClient();
			AddCategoryOutcome addCategory(const Model::AddCategoryRequest &request)const;
			void addCategoryAsync(const Model::AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCategoryOutcomeCallable addCategoryCallable(const Model::AddCategoryRequest& request) const;
			AddEditingProjectMaterialsOutcome addEditingProjectMaterials(const Model::AddEditingProjectMaterialsRequest &request)const;
			void addEditingProjectMaterialsAsync(const Model::AddEditingProjectMaterialsRequest& request, const AddEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEditingProjectMaterialsOutcomeCallable addEditingProjectMaterialsCallable(const Model::AddEditingProjectMaterialsRequest& request) const;
			AddFavoritePublicMediaOutcome addFavoritePublicMedia(const Model::AddFavoritePublicMediaRequest &request)const;
			void addFavoritePublicMediaAsync(const Model::AddFavoritePublicMediaRequest& request, const AddFavoritePublicMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFavoritePublicMediaOutcomeCallable addFavoritePublicMediaCallable(const Model::AddFavoritePublicMediaRequest& request) const;
			AddMediaMarksOutcome addMediaMarks(const Model::AddMediaMarksRequest &request)const;
			void addMediaMarksAsync(const Model::AddMediaMarksRequest& request, const AddMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMediaMarksOutcomeCallable addMediaMarksCallable(const Model::AddMediaMarksRequest& request) const;
			AddTemplateOutcome addTemplate(const Model::AddTemplateRequest &request)const;
			void addTemplateAsync(const Model::AddTemplateRequest& request, const AddTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTemplateOutcomeCallable addTemplateCallable(const Model::AddTemplateRequest& request) const;
			BatchGetMediaInfosOutcome batchGetMediaInfos(const Model::BatchGetMediaInfosRequest &request)const;
			void batchGetMediaInfosAsync(const Model::BatchGetMediaInfosRequest& request, const BatchGetMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetMediaInfosOutcomeCallable batchGetMediaInfosCallable(const Model::BatchGetMediaInfosRequest& request) const;
			CancelDNAJobOutcome cancelDNAJob(const Model::CancelDNAJobRequest &request)const;
			void cancelDNAJobAsync(const Model::CancelDNAJobRequest& request, const CancelDNAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDNAJobOutcomeCallable cancelDNAJobCallable(const Model::CancelDNAJobRequest& request) const;
			CancelFavoritePublicMediaOutcome cancelFavoritePublicMedia(const Model::CancelFavoritePublicMediaRequest &request)const;
			void cancelFavoritePublicMediaAsync(const Model::CancelFavoritePublicMediaRequest& request, const CancelFavoritePublicMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelFavoritePublicMediaOutcomeCallable cancelFavoritePublicMediaCallable(const Model::CancelFavoritePublicMediaRequest& request) const;
			CreateAuditOutcome createAudit(const Model::CreateAuditRequest &request)const;
			void createAuditAsync(const Model::CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuditOutcomeCallable createAuditCallable(const Model::CreateAuditRequest& request) const;
			CreateCustomTemplateOutcome createCustomTemplate(const Model::CreateCustomTemplateRequest &request)const;
			void createCustomTemplateAsync(const Model::CreateCustomTemplateRequest& request, const CreateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomTemplateOutcomeCallable createCustomTemplateCallable(const Model::CreateCustomTemplateRequest& request) const;
			CreateDNADBOutcome createDNADB(const Model::CreateDNADBRequest &request)const;
			void createDNADBAsync(const Model::CreateDNADBRequest& request, const CreateDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDNADBOutcomeCallable createDNADBCallable(const Model::CreateDNADBRequest& request) const;
			CreateEditingProjectOutcome createEditingProject(const Model::CreateEditingProjectRequest &request)const;
			void createEditingProjectAsync(const Model::CreateEditingProjectRequest& request, const CreateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEditingProjectOutcomeCallable createEditingProjectCallable(const Model::CreateEditingProjectRequest& request) const;
			CreateLiveRecordTemplateOutcome createLiveRecordTemplate(const Model::CreateLiveRecordTemplateRequest &request)const;
			void createLiveRecordTemplateAsync(const Model::CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveRecordTemplateOutcomeCallable createLiveRecordTemplateCallable(const Model::CreateLiveRecordTemplateRequest& request) const;
			CreateLiveSnapshotTemplateOutcome createLiveSnapshotTemplate(const Model::CreateLiveSnapshotTemplateRequest &request)const;
			void createLiveSnapshotTemplateAsync(const Model::CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveSnapshotTemplateOutcomeCallable createLiveSnapshotTemplateCallable(const Model::CreateLiveSnapshotTemplateRequest& request) const;
			CreateLiveTranscodeTemplateOutcome createLiveTranscodeTemplate(const Model::CreateLiveTranscodeTemplateRequest &request)const;
			void createLiveTranscodeTemplateAsync(const Model::CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveTranscodeTemplateOutcomeCallable createLiveTranscodeTemplateCallable(const Model::CreateLiveTranscodeTemplateRequest& request) const;
			CreatePipelineOutcome createPipeline(const Model::CreatePipelineRequest &request)const;
			void createPipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelineOutcomeCallable createPipelineCallable(const Model::CreatePipelineRequest& request) const;
			CreateUploadMediaOutcome createUploadMedia(const Model::CreateUploadMediaRequest &request)const;
			void createUploadMediaAsync(const Model::CreateUploadMediaRequest& request, const CreateUploadMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadMediaOutcomeCallable createUploadMediaCallable(const Model::CreateUploadMediaRequest& request) const;
			CreateUploadStreamOutcome createUploadStream(const Model::CreateUploadStreamRequest &request)const;
			void createUploadStreamAsync(const Model::CreateUploadStreamRequest& request, const CreateUploadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadStreamOutcomeCallable createUploadStreamCallable(const Model::CreateUploadStreamRequest& request) const;
			DeleteCategoryOutcome deleteCategory(const Model::DeleteCategoryRequest &request)const;
			void deleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCategoryOutcomeCallable deleteCategoryCallable(const Model::DeleteCategoryRequest& request) const;
			DeleteCustomTemplateOutcome deleteCustomTemplate(const Model::DeleteCustomTemplateRequest &request)const;
			void deleteCustomTemplateAsync(const Model::DeleteCustomTemplateRequest& request, const DeleteCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomTemplateOutcomeCallable deleteCustomTemplateCallable(const Model::DeleteCustomTemplateRequest& request) const;
			DeleteDNADBOutcome deleteDNADB(const Model::DeleteDNADBRequest &request)const;
			void deleteDNADBAsync(const Model::DeleteDNADBRequest& request, const DeleteDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDNADBOutcomeCallable deleteDNADBCallable(const Model::DeleteDNADBRequest& request) const;
			DeleteDNAFilesOutcome deleteDNAFiles(const Model::DeleteDNAFilesRequest &request)const;
			void deleteDNAFilesAsync(const Model::DeleteDNAFilesRequest& request, const DeleteDNAFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDNAFilesOutcomeCallable deleteDNAFilesCallable(const Model::DeleteDNAFilesRequest& request) const;
			DeleteEditingProjectMaterialsOutcome deleteEditingProjectMaterials(const Model::DeleteEditingProjectMaterialsRequest &request)const;
			void deleteEditingProjectMaterialsAsync(const Model::DeleteEditingProjectMaterialsRequest& request, const DeleteEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectMaterialsOutcomeCallable deleteEditingProjectMaterialsCallable(const Model::DeleteEditingProjectMaterialsRequest& request) const;
			DeleteEditingProjectsOutcome deleteEditingProjects(const Model::DeleteEditingProjectsRequest &request)const;
			void deleteEditingProjectsAsync(const Model::DeleteEditingProjectsRequest& request, const DeleteEditingProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectsOutcomeCallable deleteEditingProjectsCallable(const Model::DeleteEditingProjectsRequest& request) const;
			DeleteLiveRecordFilesOutcome deleteLiveRecordFiles(const Model::DeleteLiveRecordFilesRequest &request)const;
			void deleteLiveRecordFilesAsync(const Model::DeleteLiveRecordFilesRequest& request, const DeleteLiveRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordFilesOutcomeCallable deleteLiveRecordFilesCallable(const Model::DeleteLiveRecordFilesRequest& request) const;
			DeleteLiveRecordTemplateOutcome deleteLiveRecordTemplate(const Model::DeleteLiveRecordTemplateRequest &request)const;
			void deleteLiveRecordTemplateAsync(const Model::DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordTemplateOutcomeCallable deleteLiveRecordTemplateCallable(const Model::DeleteLiveRecordTemplateRequest& request) const;
			DeleteLiveSnapshotFilesOutcome deleteLiveSnapshotFiles(const Model::DeleteLiveSnapshotFilesRequest &request)const;
			void deleteLiveSnapshotFilesAsync(const Model::DeleteLiveSnapshotFilesRequest& request, const DeleteLiveSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotFilesOutcomeCallable deleteLiveSnapshotFilesCallable(const Model::DeleteLiveSnapshotFilesRequest& request) const;
			DeleteLiveSnapshotTemplateOutcome deleteLiveSnapshotTemplate(const Model::DeleteLiveSnapshotTemplateRequest &request)const;
			void deleteLiveSnapshotTemplateAsync(const Model::DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotTemplateOutcomeCallable deleteLiveSnapshotTemplateCallable(const Model::DeleteLiveSnapshotTemplateRequest& request) const;
			DeleteLiveTranscodeJobOutcome deleteLiveTranscodeJob(const Model::DeleteLiveTranscodeJobRequest &request)const;
			void deleteLiveTranscodeJobAsync(const Model::DeleteLiveTranscodeJobRequest& request, const DeleteLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveTranscodeJobOutcomeCallable deleteLiveTranscodeJobCallable(const Model::DeleteLiveTranscodeJobRequest& request) const;
			DeleteLiveTranscodeTemplateOutcome deleteLiveTranscodeTemplate(const Model::DeleteLiveTranscodeTemplateRequest &request)const;
			void deleteLiveTranscodeTemplateAsync(const Model::DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveTranscodeTemplateOutcomeCallable deleteLiveTranscodeTemplateCallable(const Model::DeleteLiveTranscodeTemplateRequest& request) const;
			DeleteMediaInfosOutcome deleteMediaInfos(const Model::DeleteMediaInfosRequest &request)const;
			void deleteMediaInfosAsync(const Model::DeleteMediaInfosRequest& request, const DeleteMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaInfosOutcomeCallable deleteMediaInfosCallable(const Model::DeleteMediaInfosRequest& request) const;
			DeleteMediaMarksOutcome deleteMediaMarks(const Model::DeleteMediaMarksRequest &request)const;
			void deleteMediaMarksAsync(const Model::DeleteMediaMarksRequest& request, const DeleteMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaMarksOutcomeCallable deleteMediaMarksCallable(const Model::DeleteMediaMarksRequest& request) const;
			DeletePipelineOutcome deletePipeline(const Model::DeletePipelineRequest &request)const;
			void deletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelineOutcomeCallable deletePipelineCallable(const Model::DeletePipelineRequest& request) const;
			DeletePlayInfoOutcome deletePlayInfo(const Model::DeletePlayInfoRequest &request)const;
			void deletePlayInfoAsync(const Model::DeletePlayInfoRequest& request, const DeletePlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlayInfoOutcomeCallable deletePlayInfoCallable(const Model::DeletePlayInfoRequest& request) const;
			DeleteSmartJobOutcome deleteSmartJob(const Model::DeleteSmartJobRequest &request)const;
			void deleteSmartJobAsync(const Model::DeleteSmartJobRequest& request, const DeleteSmartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmartJobOutcomeCallable deleteSmartJobCallable(const Model::DeleteSmartJobRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DescribeFilterConfigsOutcome describeFilterConfigs(const Model::DescribeFilterConfigsRequest &request)const;
			void describeFilterConfigsAsync(const Model::DescribeFilterConfigsRequest& request, const DescribeFilterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFilterConfigsOutcomeCallable describeFilterConfigsCallable(const Model::DescribeFilterConfigsRequest& request) const;
			DescribeMeterIceEditUsageOutcome describeMeterIceEditUsage(const Model::DescribeMeterIceEditUsageRequest &request)const;
			void describeMeterIceEditUsageAsync(const Model::DescribeMeterIceEditUsageRequest& request, const DescribeMeterIceEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterIceEditUsageOutcomeCallable describeMeterIceEditUsageCallable(const Model::DescribeMeterIceEditUsageRequest& request) const;
			DescribeMeterIceLiveMediaConvertUsageOutcome describeMeterIceLiveMediaConvertUsage(const Model::DescribeMeterIceLiveMediaConvertUsageRequest &request)const;
			void describeMeterIceLiveMediaConvertUsageAsync(const Model::DescribeMeterIceLiveMediaConvertUsageRequest& request, const DescribeMeterIceLiveMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterIceLiveMediaConvertUsageOutcomeCallable describeMeterIceLiveMediaConvertUsageCallable(const Model::DescribeMeterIceLiveMediaConvertUsageRequest& request) const;
			DescribeMeterIceMediaConvertUHDUsageOutcome describeMeterIceMediaConvertUHDUsage(const Model::DescribeMeterIceMediaConvertUHDUsageRequest &request)const;
			void describeMeterIceMediaConvertUHDUsageAsync(const Model::DescribeMeterIceMediaConvertUHDUsageRequest& request, const DescribeMeterIceMediaConvertUHDUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterIceMediaConvertUHDUsageOutcomeCallable describeMeterIceMediaConvertUHDUsageCallable(const Model::DescribeMeterIceMediaConvertUHDUsageRequest& request) const;
			DescribeMeterIceMediaConvertUsageOutcome describeMeterIceMediaConvertUsage(const Model::DescribeMeterIceMediaConvertUsageRequest &request)const;
			void describeMeterIceMediaConvertUsageAsync(const Model::DescribeMeterIceMediaConvertUsageRequest& request, const DescribeMeterIceMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterIceMediaConvertUsageOutcomeCallable describeMeterIceMediaConvertUsageCallable(const Model::DescribeMeterIceMediaConvertUsageRequest& request) const;
			DescribeMeterIceMpsAiUsageOutcome describeMeterIceMpsAiUsage(const Model::DescribeMeterIceMpsAiUsageRequest &request)const;
			void describeMeterIceMpsAiUsageAsync(const Model::DescribeMeterIceMpsAiUsageRequest& request, const DescribeMeterIceMpsAiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterIceMpsAiUsageOutcomeCallable describeMeterIceMpsAiUsageCallable(const Model::DescribeMeterIceMpsAiUsageRequest& request) const;
			DescribeMeterImsEditUsageOutcome describeMeterImsEditUsage(const Model::DescribeMeterImsEditUsageRequest &request)const;
			void describeMeterImsEditUsageAsync(const Model::DescribeMeterImsEditUsageRequest& request, const DescribeMeterImsEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsEditUsageOutcomeCallable describeMeterImsEditUsageCallable(const Model::DescribeMeterImsEditUsageRequest& request) const;
			DescribeMeterImsLiveEditUsageOutcome describeMeterImsLiveEditUsage(const Model::DescribeMeterImsLiveEditUsageRequest &request)const;
			void describeMeterImsLiveEditUsageAsync(const Model::DescribeMeterImsLiveEditUsageRequest& request, const DescribeMeterImsLiveEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsLiveEditUsageOutcomeCallable describeMeterImsLiveEditUsageCallable(const Model::DescribeMeterImsLiveEditUsageRequest& request) const;
			DescribeMeterImsLiveMediaConvertUsageOutcome describeMeterImsLiveMediaConvertUsage(const Model::DescribeMeterImsLiveMediaConvertUsageRequest &request)const;
			void describeMeterImsLiveMediaConvertUsageAsync(const Model::DescribeMeterImsLiveMediaConvertUsageRequest& request, const DescribeMeterImsLiveMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsLiveMediaConvertUsageOutcomeCallable describeMeterImsLiveMediaConvertUsageCallable(const Model::DescribeMeterImsLiveMediaConvertUsageRequest& request) const;
			DescribeMeterImsLiveRecordUsageOutcome describeMeterImsLiveRecordUsage(const Model::DescribeMeterImsLiveRecordUsageRequest &request)const;
			void describeMeterImsLiveRecordUsageAsync(const Model::DescribeMeterImsLiveRecordUsageRequest& request, const DescribeMeterImsLiveRecordUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsLiveRecordUsageOutcomeCallable describeMeterImsLiveRecordUsageCallable(const Model::DescribeMeterImsLiveRecordUsageRequest& request) const;
			DescribeMeterImsLiveSnapshotUsageOutcome describeMeterImsLiveSnapshotUsage(const Model::DescribeMeterImsLiveSnapshotUsageRequest &request)const;
			void describeMeterImsLiveSnapshotUsageAsync(const Model::DescribeMeterImsLiveSnapshotUsageRequest& request, const DescribeMeterImsLiveSnapshotUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsLiveSnapshotUsageOutcomeCallable describeMeterImsLiveSnapshotUsageCallable(const Model::DescribeMeterImsLiveSnapshotUsageRequest& request) const;
			DescribeMeterImsMediaConvertUHDUsageOutcome describeMeterImsMediaConvertUHDUsage(const Model::DescribeMeterImsMediaConvertUHDUsageRequest &request)const;
			void describeMeterImsMediaConvertUHDUsageAsync(const Model::DescribeMeterImsMediaConvertUHDUsageRequest& request, const DescribeMeterImsMediaConvertUHDUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsMediaConvertUHDUsageOutcomeCallable describeMeterImsMediaConvertUHDUsageCallable(const Model::DescribeMeterImsMediaConvertUHDUsageRequest& request) const;
			DescribeMeterImsMediaConvertUsageOutcome describeMeterImsMediaConvertUsage(const Model::DescribeMeterImsMediaConvertUsageRequest &request)const;
			void describeMeterImsMediaConvertUsageAsync(const Model::DescribeMeterImsMediaConvertUsageRequest& request, const DescribeMeterImsMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsMediaConvertUsageOutcomeCallable describeMeterImsMediaConvertUsageCallable(const Model::DescribeMeterImsMediaConvertUsageRequest& request) const;
			DescribeMeterImsMpsAiUsageOutcome describeMeterImsMpsAiUsage(const Model::DescribeMeterImsMpsAiUsageRequest &request)const;
			void describeMeterImsMpsAiUsageAsync(const Model::DescribeMeterImsMpsAiUsageRequest& request, const DescribeMeterImsMpsAiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsMpsAiUsageOutcomeCallable describeMeterImsMpsAiUsageCallable(const Model::DescribeMeterImsMpsAiUsageRequest& request) const;
			DescribeMeterImsSummaryOutcome describeMeterImsSummary(const Model::DescribeMeterImsSummaryRequest &request)const;
			void describeMeterImsSummaryAsync(const Model::DescribeMeterImsSummaryRequest& request, const DescribeMeterImsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterImsSummaryOutcomeCallable describeMeterImsSummaryCallable(const Model::DescribeMeterImsSummaryRequest& request) const;
			DescribePlayDetailOutcome describePlayDetail(const Model::DescribePlayDetailRequest &request)const;
			void describePlayDetailAsync(const Model::DescribePlayDetailRequest& request, const DescribePlayDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayDetailOutcomeCallable describePlayDetailCallable(const Model::DescribePlayDetailRequest& request) const;
			DescribePlayEventListOutcome describePlayEventList(const Model::DescribePlayEventListRequest &request)const;
			void describePlayEventListAsync(const Model::DescribePlayEventListRequest& request, const DescribePlayEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayEventListOutcomeCallable describePlayEventListCallable(const Model::DescribePlayEventListRequest& request) const;
			DescribePlayFirstFrameDurationMetricDataOutcome describePlayFirstFrameDurationMetricData(const Model::DescribePlayFirstFrameDurationMetricDataRequest &request)const;
			void describePlayFirstFrameDurationMetricDataAsync(const Model::DescribePlayFirstFrameDurationMetricDataRequest& request, const DescribePlayFirstFrameDurationMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayFirstFrameDurationMetricDataOutcomeCallable describePlayFirstFrameDurationMetricDataCallable(const Model::DescribePlayFirstFrameDurationMetricDataRequest& request) const;
			DescribePlayListOutcome describePlayList(const Model::DescribePlayListRequest &request)const;
			void describePlayListAsync(const Model::DescribePlayListRequest& request, const DescribePlayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayListOutcomeCallable describePlayListCallable(const Model::DescribePlayListRequest& request) const;
			DescribePlayMetricDataOutcome describePlayMetricData(const Model::DescribePlayMetricDataRequest &request)const;
			void describePlayMetricDataAsync(const Model::DescribePlayMetricDataRequest& request, const DescribePlayMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayMetricDataOutcomeCallable describePlayMetricDataCallable(const Model::DescribePlayMetricDataRequest& request) const;
			DescribePlayQoeListOutcome describePlayQoeList(const Model::DescribePlayQoeListRequest &request)const;
			void describePlayQoeListAsync(const Model::DescribePlayQoeListRequest& request, const DescribePlayQoeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayQoeListOutcomeCallable describePlayQoeListCallable(const Model::DescribePlayQoeListRequest& request) const;
			DescribePlayQosListOutcome describePlayQosList(const Model::DescribePlayQosListRequest &request)const;
			void describePlayQosListAsync(const Model::DescribePlayQosListRequest& request, const DescribePlayQosListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayQosListOutcomeCallable describePlayQosListCallable(const Model::DescribePlayQosListRequest& request) const;
			DescribeQueryConfigsOutcome describeQueryConfigs(const Model::DescribeQueryConfigsRequest &request)const;
			void describeQueryConfigsAsync(const Model::DescribeQueryConfigsRequest& request, const DescribeQueryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQueryConfigsOutcomeCallable describeQueryConfigsCallable(const Model::DescribeQueryConfigsRequest& request) const;
			GetCategoriesOutcome getCategories(const Model::GetCategoriesRequest &request)const;
			void getCategoriesAsync(const Model::GetCategoriesRequest& request, const GetCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCategoriesOutcomeCallable getCategoriesCallable(const Model::GetCategoriesRequest& request) const;
			GetContentAnalyzeConfigOutcome getContentAnalyzeConfig(const Model::GetContentAnalyzeConfigRequest &request)const;
			void getContentAnalyzeConfigAsync(const Model::GetContentAnalyzeConfigRequest& request, const GetContentAnalyzeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContentAnalyzeConfigOutcomeCallable getContentAnalyzeConfigCallable(const Model::GetContentAnalyzeConfigRequest& request) const;
			GetCustomTemplateOutcome getCustomTemplate(const Model::GetCustomTemplateRequest &request)const;
			void getCustomTemplateAsync(const Model::GetCustomTemplateRequest& request, const GetCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomTemplateOutcomeCallable getCustomTemplateCallable(const Model::GetCustomTemplateRequest& request) const;
			GetDefaultStorageLocationOutcome getDefaultStorageLocation(const Model::GetDefaultStorageLocationRequest &request)const;
			void getDefaultStorageLocationAsync(const Model::GetDefaultStorageLocationRequest& request, const GetDefaultStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDefaultStorageLocationOutcomeCallable getDefaultStorageLocationCallable(const Model::GetDefaultStorageLocationRequest& request) const;
			GetDynamicImageJobOutcome getDynamicImageJob(const Model::GetDynamicImageJobRequest &request)const;
			void getDynamicImageJobAsync(const Model::GetDynamicImageJobRequest& request, const GetDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDynamicImageJobOutcomeCallable getDynamicImageJobCallable(const Model::GetDynamicImageJobRequest& request) const;
			GetEditingProjectOutcome getEditingProject(const Model::GetEditingProjectRequest &request)const;
			void getEditingProjectAsync(const Model::GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectOutcomeCallable getEditingProjectCallable(const Model::GetEditingProjectRequest& request) const;
			GetEditingProjectMaterialsOutcome getEditingProjectMaterials(const Model::GetEditingProjectMaterialsRequest &request)const;
			void getEditingProjectMaterialsAsync(const Model::GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectMaterialsOutcomeCallable getEditingProjectMaterialsCallable(const Model::GetEditingProjectMaterialsRequest& request) const;
			GetEventCallbackOutcome getEventCallback(const Model::GetEventCallbackRequest &request)const;
			void getEventCallbackAsync(const Model::GetEventCallbackRequest& request, const GetEventCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEventCallbackOutcomeCallable getEventCallbackCallable(const Model::GetEventCallbackRequest& request) const;
			GetLiveEditingIndexFileOutcome getLiveEditingIndexFile(const Model::GetLiveEditingIndexFileRequest &request)const;
			void getLiveEditingIndexFileAsync(const Model::GetLiveEditingIndexFileRequest& request, const GetLiveEditingIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveEditingIndexFileOutcomeCallable getLiveEditingIndexFileCallable(const Model::GetLiveEditingIndexFileRequest& request) const;
			GetLiveEditingJobOutcome getLiveEditingJob(const Model::GetLiveEditingJobRequest &request)const;
			void getLiveEditingJobAsync(const Model::GetLiveEditingJobRequest& request, const GetLiveEditingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveEditingJobOutcomeCallable getLiveEditingJobCallable(const Model::GetLiveEditingJobRequest& request) const;
			GetLiveRecordJobOutcome getLiveRecordJob(const Model::GetLiveRecordJobRequest &request)const;
			void getLiveRecordJobAsync(const Model::GetLiveRecordJobRequest& request, const GetLiveRecordJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveRecordJobOutcomeCallable getLiveRecordJobCallable(const Model::GetLiveRecordJobRequest& request) const;
			GetLiveRecordTemplateOutcome getLiveRecordTemplate(const Model::GetLiveRecordTemplateRequest &request)const;
			void getLiveRecordTemplateAsync(const Model::GetLiveRecordTemplateRequest& request, const GetLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveRecordTemplateOutcomeCallable getLiveRecordTemplateCallable(const Model::GetLiveRecordTemplateRequest& request) const;
			GetLiveSnapshotJobOutcome getLiveSnapshotJob(const Model::GetLiveSnapshotJobRequest &request)const;
			void getLiveSnapshotJobAsync(const Model::GetLiveSnapshotJobRequest& request, const GetLiveSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveSnapshotJobOutcomeCallable getLiveSnapshotJobCallable(const Model::GetLiveSnapshotJobRequest& request) const;
			GetLiveSnapshotTemplateOutcome getLiveSnapshotTemplate(const Model::GetLiveSnapshotTemplateRequest &request)const;
			void getLiveSnapshotTemplateAsync(const Model::GetLiveSnapshotTemplateRequest& request, const GetLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveSnapshotTemplateOutcomeCallable getLiveSnapshotTemplateCallable(const Model::GetLiveSnapshotTemplateRequest& request) const;
			GetLiveTranscodeJobOutcome getLiveTranscodeJob(const Model::GetLiveTranscodeJobRequest &request)const;
			void getLiveTranscodeJobAsync(const Model::GetLiveTranscodeJobRequest& request, const GetLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveTranscodeJobOutcomeCallable getLiveTranscodeJobCallable(const Model::GetLiveTranscodeJobRequest& request) const;
			GetLiveTranscodeTemplateOutcome getLiveTranscodeTemplate(const Model::GetLiveTranscodeTemplateRequest &request)const;
			void getLiveTranscodeTemplateAsync(const Model::GetLiveTranscodeTemplateRequest& request, const GetLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLiveTranscodeTemplateOutcomeCallable getLiveTranscodeTemplateCallable(const Model::GetLiveTranscodeTemplateRequest& request) const;
			GetMediaInfoOutcome getMediaInfo(const Model::GetMediaInfoRequest &request)const;
			void getMediaInfoAsync(const Model::GetMediaInfoRequest& request, const GetMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaInfoOutcomeCallable getMediaInfoCallable(const Model::GetMediaInfoRequest& request) const;
			GetMediaInfoJobOutcome getMediaInfoJob(const Model::GetMediaInfoJobRequest &request)const;
			void getMediaInfoJobAsync(const Model::GetMediaInfoJobRequest& request, const GetMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaInfoJobOutcomeCallable getMediaInfoJobCallable(const Model::GetMediaInfoJobRequest& request) const;
			GetMediaMarksOutcome getMediaMarks(const Model::GetMediaMarksRequest &request)const;
			void getMediaMarksAsync(const Model::GetMediaMarksRequest& request, const GetMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaMarksOutcomeCallable getMediaMarksCallable(const Model::GetMediaMarksRequest& request) const;
			GetMediaProducingJobOutcome getMediaProducingJob(const Model::GetMediaProducingJobRequest &request)const;
			void getMediaProducingJobAsync(const Model::GetMediaProducingJobRequest& request, const GetMediaProducingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaProducingJobOutcomeCallable getMediaProducingJobCallable(const Model::GetMediaProducingJobRequest& request) const;
			GetPackageJobOutcome getPackageJob(const Model::GetPackageJobRequest &request)const;
			void getPackageJobAsync(const Model::GetPackageJobRequest& request, const GetPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPackageJobOutcomeCallable getPackageJobCallable(const Model::GetPackageJobRequest& request) const;
			GetPipelineOutcome getPipeline(const Model::GetPipelineRequest &request)const;
			void getPipelineAsync(const Model::GetPipelineRequest& request, const GetPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineOutcomeCallable getPipelineCallable(const Model::GetPipelineRequest& request) const;
			GetPlayInfoOutcome getPlayInfo(const Model::GetPlayInfoRequest &request)const;
			void getPlayInfoAsync(const Model::GetPlayInfoRequest& request, const GetPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPlayInfoOutcomeCallable getPlayInfoCallable(const Model::GetPlayInfoRequest& request) const;
			GetPublicMediaInfoOutcome getPublicMediaInfo(const Model::GetPublicMediaInfoRequest &request)const;
			void getPublicMediaInfoAsync(const Model::GetPublicMediaInfoRequest& request, const GetPublicMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPublicMediaInfoOutcomeCallable getPublicMediaInfoCallable(const Model::GetPublicMediaInfoRequest& request) const;
			GetSmartHandleJobOutcome getSmartHandleJob(const Model::GetSmartHandleJobRequest &request)const;
			void getSmartHandleJobAsync(const Model::GetSmartHandleJobRequest& request, const GetSmartHandleJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartHandleJobOutcomeCallable getSmartHandleJobCallable(const Model::GetSmartHandleJobRequest& request) const;
			GetSnapshotJobOutcome getSnapshotJob(const Model::GetSnapshotJobRequest &request)const;
			void getSnapshotJobAsync(const Model::GetSnapshotJobRequest& request, const GetSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSnapshotJobOutcomeCallable getSnapshotJobCallable(const Model::GetSnapshotJobRequest& request) const;
			GetSnapshotUrlsOutcome getSnapshotUrls(const Model::GetSnapshotUrlsRequest &request)const;
			void getSnapshotUrlsAsync(const Model::GetSnapshotUrlsRequest& request, const GetSnapshotUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSnapshotUrlsOutcomeCallable getSnapshotUrlsCallable(const Model::GetSnapshotUrlsRequest& request) const;
			GetSystemTemplateOutcome getSystemTemplate(const Model::GetSystemTemplateRequest &request)const;
			void getSystemTemplateAsync(const Model::GetSystemTemplateRequest& request, const GetSystemTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSystemTemplateOutcomeCallable getSystemTemplateCallable(const Model::GetSystemTemplateRequest& request) const;
			GetTemplateOutcome getTemplate(const Model::GetTemplateRequest &request)const;
			void getTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateOutcomeCallable getTemplateCallable(const Model::GetTemplateRequest& request) const;
			GetTemplateMaterialsOutcome getTemplateMaterials(const Model::GetTemplateMaterialsRequest &request)const;
			void getTemplateMaterialsAsync(const Model::GetTemplateMaterialsRequest& request, const GetTemplateMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateMaterialsOutcomeCallable getTemplateMaterialsCallable(const Model::GetTemplateMaterialsRequest& request) const;
			GetTemplateParamsOutcome getTemplateParams(const Model::GetTemplateParamsRequest &request)const;
			void getTemplateParamsAsync(const Model::GetTemplateParamsRequest& request, const GetTemplateParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateParamsOutcomeCallable getTemplateParamsCallable(const Model::GetTemplateParamsRequest& request) const;
			GetTranscodeJobOutcome getTranscodeJob(const Model::GetTranscodeJobRequest &request)const;
			void getTranscodeJobAsync(const Model::GetTranscodeJobRequest& request, const GetTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscodeJobOutcomeCallable getTranscodeJobCallable(const Model::GetTranscodeJobRequest& request) const;
			GetUrlUploadInfosOutcome getUrlUploadInfos(const Model::GetUrlUploadInfosRequest &request)const;
			void getUrlUploadInfosAsync(const Model::GetUrlUploadInfosRequest& request, const GetUrlUploadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUrlUploadInfosOutcomeCallable getUrlUploadInfosCallable(const Model::GetUrlUploadInfosRequest& request) const;
			GetWorkflowTaskOutcome getWorkflowTask(const Model::GetWorkflowTaskRequest &request)const;
			void getWorkflowTaskAsync(const Model::GetWorkflowTaskRequest& request, const GetWorkflowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkflowTaskOutcomeCallable getWorkflowTaskCallable(const Model::GetWorkflowTaskRequest& request) const;
			ListAllPublicMediaTagsOutcome listAllPublicMediaTags(const Model::ListAllPublicMediaTagsRequest &request)const;
			void listAllPublicMediaTagsAsync(const Model::ListAllPublicMediaTagsRequest& request, const ListAllPublicMediaTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllPublicMediaTagsOutcomeCallable listAllPublicMediaTagsCallable(const Model::ListAllPublicMediaTagsRequest& request) const;
			ListCustomTemplatesOutcome listCustomTemplates(const Model::ListCustomTemplatesRequest &request)const;
			void listCustomTemplatesAsync(const Model::ListCustomTemplatesRequest& request, const ListCustomTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomTemplatesOutcomeCallable listCustomTemplatesCallable(const Model::ListCustomTemplatesRequest& request) const;
			ListDNADBOutcome listDNADB(const Model::ListDNADBRequest &request)const;
			void listDNADBAsync(const Model::ListDNADBRequest& request, const ListDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDNADBOutcomeCallable listDNADBCallable(const Model::ListDNADBRequest& request) const;
			ListDNAFilesOutcome listDNAFiles(const Model::ListDNAFilesRequest &request)const;
			void listDNAFilesAsync(const Model::ListDNAFilesRequest& request, const ListDNAFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDNAFilesOutcomeCallable listDNAFilesCallable(const Model::ListDNAFilesRequest& request) const;
			ListDynamicImageJobsOutcome listDynamicImageJobs(const Model::ListDynamicImageJobsRequest &request)const;
			void listDynamicImageJobsAsync(const Model::ListDynamicImageJobsRequest& request, const ListDynamicImageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicImageJobsOutcomeCallable listDynamicImageJobsCallable(const Model::ListDynamicImageJobsRequest& request) const;
			ListLiveRecordFilesOutcome listLiveRecordFiles(const Model::ListLiveRecordFilesRequest &request)const;
			void listLiveRecordFilesAsync(const Model::ListLiveRecordFilesRequest& request, const ListLiveRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordFilesOutcomeCallable listLiveRecordFilesCallable(const Model::ListLiveRecordFilesRequest& request) const;
			ListLiveRecordJobsOutcome listLiveRecordJobs(const Model::ListLiveRecordJobsRequest &request)const;
			void listLiveRecordJobsAsync(const Model::ListLiveRecordJobsRequest& request, const ListLiveRecordJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordJobsOutcomeCallable listLiveRecordJobsCallable(const Model::ListLiveRecordJobsRequest& request) const;
			ListLiveRecordTemplatesOutcome listLiveRecordTemplates(const Model::ListLiveRecordTemplatesRequest &request)const;
			void listLiveRecordTemplatesAsync(const Model::ListLiveRecordTemplatesRequest& request, const ListLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordTemplatesOutcomeCallable listLiveRecordTemplatesCallable(const Model::ListLiveRecordTemplatesRequest& request) const;
			ListLiveSnapshotFilesOutcome listLiveSnapshotFiles(const Model::ListLiveSnapshotFilesRequest &request)const;
			void listLiveSnapshotFilesAsync(const Model::ListLiveSnapshotFilesRequest& request, const ListLiveSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveSnapshotFilesOutcomeCallable listLiveSnapshotFilesCallable(const Model::ListLiveSnapshotFilesRequest& request) const;
			ListLiveSnapshotJobsOutcome listLiveSnapshotJobs(const Model::ListLiveSnapshotJobsRequest &request)const;
			void listLiveSnapshotJobsAsync(const Model::ListLiveSnapshotJobsRequest& request, const ListLiveSnapshotJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveSnapshotJobsOutcomeCallable listLiveSnapshotJobsCallable(const Model::ListLiveSnapshotJobsRequest& request) const;
			ListLiveSnapshotTemplatesOutcome listLiveSnapshotTemplates(const Model::ListLiveSnapshotTemplatesRequest &request)const;
			void listLiveSnapshotTemplatesAsync(const Model::ListLiveSnapshotTemplatesRequest& request, const ListLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveSnapshotTemplatesOutcomeCallable listLiveSnapshotTemplatesCallable(const Model::ListLiveSnapshotTemplatesRequest& request) const;
			ListLiveTranscodeJobsOutcome listLiveTranscodeJobs(const Model::ListLiveTranscodeJobsRequest &request)const;
			void listLiveTranscodeJobsAsync(const Model::ListLiveTranscodeJobsRequest& request, const ListLiveTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveTranscodeJobsOutcomeCallable listLiveTranscodeJobsCallable(const Model::ListLiveTranscodeJobsRequest& request) const;
			ListLiveTranscodeTemplatesOutcome listLiveTranscodeTemplates(const Model::ListLiveTranscodeTemplatesRequest &request)const;
			void listLiveTranscodeTemplatesAsync(const Model::ListLiveTranscodeTemplatesRequest& request, const ListLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveTranscodeTemplatesOutcomeCallable listLiveTranscodeTemplatesCallable(const Model::ListLiveTranscodeTemplatesRequest& request) const;
			ListMediaBasicInfosOutcome listMediaBasicInfos(const Model::ListMediaBasicInfosRequest &request)const;
			void listMediaBasicInfosAsync(const Model::ListMediaBasicInfosRequest& request, const ListMediaBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaBasicInfosOutcomeCallable listMediaBasicInfosCallable(const Model::ListMediaBasicInfosRequest& request) const;
			ListMediaInfoJobsOutcome listMediaInfoJobs(const Model::ListMediaInfoJobsRequest &request)const;
			void listMediaInfoJobsAsync(const Model::ListMediaInfoJobsRequest& request, const ListMediaInfoJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaInfoJobsOutcomeCallable listMediaInfoJobsCallable(const Model::ListMediaInfoJobsRequest& request) const;
			ListMediaMarksOutcome listMediaMarks(const Model::ListMediaMarksRequest &request)const;
			void listMediaMarksAsync(const Model::ListMediaMarksRequest& request, const ListMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaMarksOutcomeCallable listMediaMarksCallable(const Model::ListMediaMarksRequest& request) const;
			ListPackageJobsOutcome listPackageJobs(const Model::ListPackageJobsRequest &request)const;
			void listPackageJobsAsync(const Model::ListPackageJobsRequest& request, const ListPackageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPackageJobsOutcomeCallable listPackageJobsCallable(const Model::ListPackageJobsRequest& request) const;
			ListPipelinesOutcome listPipelines(const Model::ListPipelinesRequest &request)const;
			void listPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelinesOutcomeCallable listPipelinesCallable(const Model::ListPipelinesRequest& request) const;
			ListPublicMediaBasicInfosOutcome listPublicMediaBasicInfos(const Model::ListPublicMediaBasicInfosRequest &request)const;
			void listPublicMediaBasicInfosAsync(const Model::ListPublicMediaBasicInfosRequest& request, const ListPublicMediaBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublicMediaBasicInfosOutcomeCallable listPublicMediaBasicInfosCallable(const Model::ListPublicMediaBasicInfosRequest& request) const;
			ListSmartJobsOutcome listSmartJobs(const Model::ListSmartJobsRequest &request)const;
			void listSmartJobsAsync(const Model::ListSmartJobsRequest& request, const ListSmartJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSmartJobsOutcomeCallable listSmartJobsCallable(const Model::ListSmartJobsRequest& request) const;
			ListSmartSysAvatarModelsOutcome listSmartSysAvatarModels(const Model::ListSmartSysAvatarModelsRequest &request)const;
			void listSmartSysAvatarModelsAsync(const Model::ListSmartSysAvatarModelsRequest& request, const ListSmartSysAvatarModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSmartSysAvatarModelsOutcomeCallable listSmartSysAvatarModelsCallable(const Model::ListSmartSysAvatarModelsRequest& request) const;
			ListSnapshotJobsOutcome listSnapshotJobs(const Model::ListSnapshotJobsRequest &request)const;
			void listSnapshotJobsAsync(const Model::ListSnapshotJobsRequest& request, const ListSnapshotJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotJobsOutcomeCallable listSnapshotJobsCallable(const Model::ListSnapshotJobsRequest& request) const;
			ListSystemTemplatesOutcome listSystemTemplates(const Model::ListSystemTemplatesRequest &request)const;
			void listSystemTemplatesAsync(const Model::ListSystemTemplatesRequest& request, const ListSystemTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemTemplatesOutcomeCallable listSystemTemplatesCallable(const Model::ListSystemTemplatesRequest& request) const;
			ListTemplatesOutcome listTemplates(const Model::ListTemplatesRequest &request)const;
			void listTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTemplatesOutcomeCallable listTemplatesCallable(const Model::ListTemplatesRequest& request) const;
			ListTranscodeJobsOutcome listTranscodeJobs(const Model::ListTranscodeJobsRequest &request)const;
			void listTranscodeJobsAsync(const Model::ListTranscodeJobsRequest& request, const ListTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscodeJobsOutcomeCallable listTranscodeJobsCallable(const Model::ListTranscodeJobsRequest& request) const;
			QueryDNAJobListOutcome queryDNAJobList(const Model::QueryDNAJobListRequest &request)const;
			void queryDNAJobListAsync(const Model::QueryDNAJobListRequest& request, const QueryDNAJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDNAJobListOutcomeCallable queryDNAJobListCallable(const Model::QueryDNAJobListRequest& request) const;
			QueryIProductionJobOutcome queryIProductionJob(const Model::QueryIProductionJobRequest &request)const;
			void queryIProductionJobAsync(const Model::QueryIProductionJobRequest& request, const QueryIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIProductionJobOutcomeCallable queryIProductionJobCallable(const Model::QueryIProductionJobRequest& request) const;
			QueryMediaCensorJobDetailOutcome queryMediaCensorJobDetail(const Model::QueryMediaCensorJobDetailRequest &request)const;
			void queryMediaCensorJobDetailAsync(const Model::QueryMediaCensorJobDetailRequest& request, const QueryMediaCensorJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobDetailOutcomeCallable queryMediaCensorJobDetailCallable(const Model::QueryMediaCensorJobDetailRequest& request) const;
			QueryMediaCensorJobListOutcome queryMediaCensorJobList(const Model::QueryMediaCensorJobListRequest &request)const;
			void queryMediaCensorJobListAsync(const Model::QueryMediaCensorJobListRequest& request, const QueryMediaCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobListOutcomeCallable queryMediaCensorJobListCallable(const Model::QueryMediaCensorJobListRequest& request) const;
			QuerySmarttagJobOutcome querySmarttagJob(const Model::QuerySmarttagJobRequest &request)const;
			void querySmarttagJobAsync(const Model::QuerySmarttagJobRequest& request, const QuerySmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmarttagJobOutcomeCallable querySmarttagJobCallable(const Model::QuerySmarttagJobRequest& request) const;
			RefreshUploadMediaOutcome refreshUploadMedia(const Model::RefreshUploadMediaRequest &request)const;
			void refreshUploadMediaAsync(const Model::RefreshUploadMediaRequest& request, const RefreshUploadMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshUploadMediaOutcomeCallable refreshUploadMediaCallable(const Model::RefreshUploadMediaRequest& request) const;
			RegisterMediaInfoOutcome registerMediaInfo(const Model::RegisterMediaInfoRequest &request)const;
			void registerMediaInfoAsync(const Model::RegisterMediaInfoRequest& request, const RegisterMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaInfoOutcomeCallable registerMediaInfoCallable(const Model::RegisterMediaInfoRequest& request) const;
			RegisterMediaStreamOutcome registerMediaStream(const Model::RegisterMediaStreamRequest &request)const;
			void registerMediaStreamAsync(const Model::RegisterMediaStreamRequest& request, const RegisterMediaStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaStreamOutcomeCallable registerMediaStreamCallable(const Model::RegisterMediaStreamRequest& request) const;
			SearchEditingProjectOutcome searchEditingProject(const Model::SearchEditingProjectRequest &request)const;
			void searchEditingProjectAsync(const Model::SearchEditingProjectRequest& request, const SearchEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchEditingProjectOutcomeCallable searchEditingProjectCallable(const Model::SearchEditingProjectRequest& request) const;
			SearchMediaOutcome searchMedia(const Model::SearchMediaRequest &request)const;
			void searchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaOutcomeCallable searchMediaCallable(const Model::SearchMediaRequest& request) const;
			SearchMediaByFaceOutcome searchMediaByFace(const Model::SearchMediaByFaceRequest &request)const;
			void searchMediaByFaceAsync(const Model::SearchMediaByFaceRequest& request, const SearchMediaByFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaByFaceOutcomeCallable searchMediaByFaceCallable(const Model::SearchMediaByFaceRequest& request) const;
			SearchMediaClipByFaceOutcome searchMediaClipByFace(const Model::SearchMediaClipByFaceRequest &request)const;
			void searchMediaClipByFaceAsync(const Model::SearchMediaClipByFaceRequest& request, const SearchMediaClipByFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaClipByFaceOutcomeCallable searchMediaClipByFaceCallable(const Model::SearchMediaClipByFaceRequest& request) const;
			SearchPublicMediaInfoOutcome searchPublicMediaInfo(const Model::SearchPublicMediaInfoRequest &request)const;
			void searchPublicMediaInfoAsync(const Model::SearchPublicMediaInfoRequest& request, const SearchPublicMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchPublicMediaInfoOutcomeCallable searchPublicMediaInfoCallable(const Model::SearchPublicMediaInfoRequest& request) const;
			SendLiveSnapshotJobCommandOutcome sendLiveSnapshotJobCommand(const Model::SendLiveSnapshotJobCommandRequest &request)const;
			void sendLiveSnapshotJobCommandAsync(const Model::SendLiveSnapshotJobCommandRequest& request, const SendLiveSnapshotJobCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLiveSnapshotJobCommandOutcomeCallable sendLiveSnapshotJobCommandCallable(const Model::SendLiveSnapshotJobCommandRequest& request) const;
			SendLiveTranscodeJobCommandOutcome sendLiveTranscodeJobCommand(const Model::SendLiveTranscodeJobCommandRequest &request)const;
			void sendLiveTranscodeJobCommandAsync(const Model::SendLiveTranscodeJobCommandRequest& request, const SendLiveTranscodeJobCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLiveTranscodeJobCommandOutcomeCallable sendLiveTranscodeJobCommandCallable(const Model::SendLiveTranscodeJobCommandRequest& request) const;
			SetContentAnalyzeConfigOutcome setContentAnalyzeConfig(const Model::SetContentAnalyzeConfigRequest &request)const;
			void setContentAnalyzeConfigAsync(const Model::SetContentAnalyzeConfigRequest& request, const SetContentAnalyzeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetContentAnalyzeConfigOutcomeCallable setContentAnalyzeConfigCallable(const Model::SetContentAnalyzeConfigRequest& request) const;
			SetDefaultCustomTemplateOutcome setDefaultCustomTemplate(const Model::SetDefaultCustomTemplateRequest &request)const;
			void setDefaultCustomTemplateAsync(const Model::SetDefaultCustomTemplateRequest& request, const SetDefaultCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultCustomTemplateOutcomeCallable setDefaultCustomTemplateCallable(const Model::SetDefaultCustomTemplateRequest& request) const;
			SetDefaultStorageLocationOutcome setDefaultStorageLocation(const Model::SetDefaultStorageLocationRequest &request)const;
			void setDefaultStorageLocationAsync(const Model::SetDefaultStorageLocationRequest& request, const SetDefaultStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultStorageLocationOutcomeCallable setDefaultStorageLocationCallable(const Model::SetDefaultStorageLocationRequest& request) const;
			SetEventCallbackOutcome setEventCallback(const Model::SetEventCallbackRequest &request)const;
			void setEventCallbackAsync(const Model::SetEventCallbackRequest& request, const SetEventCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEventCallbackOutcomeCallable setEventCallbackCallable(const Model::SetEventCallbackRequest& request) const;
			StartWorkflowOutcome startWorkflow(const Model::StartWorkflowRequest &request)const;
			void startWorkflowAsync(const Model::StartWorkflowRequest& request, const StartWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartWorkflowOutcomeCallable startWorkflowCallable(const Model::StartWorkflowRequest& request) const;
			SubmitASRJobOutcome submitASRJob(const Model::SubmitASRJobRequest &request)const;
			void submitASRJobAsync(const Model::SubmitASRJobRequest& request, const SubmitASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitASRJobOutcomeCallable submitASRJobCallable(const Model::SubmitASRJobRequest& request) const;
			SubmitAudioProduceJobOutcome submitAudioProduceJob(const Model::SubmitAudioProduceJobRequest &request)const;
			void submitAudioProduceJobAsync(const Model::SubmitAudioProduceJobRequest& request, const SubmitAudioProduceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAudioProduceJobOutcomeCallable submitAudioProduceJobCallable(const Model::SubmitAudioProduceJobRequest& request) const;
			SubmitAvatarVideoJobOutcome submitAvatarVideoJob(const Model::SubmitAvatarVideoJobRequest &request)const;
			void submitAvatarVideoJobAsync(const Model::SubmitAvatarVideoJobRequest& request, const SubmitAvatarVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAvatarVideoJobOutcomeCallable submitAvatarVideoJobCallable(const Model::SubmitAvatarVideoJobRequest& request) const;
			SubmitDNAJobOutcome submitDNAJob(const Model::SubmitDNAJobRequest &request)const;
			void submitDNAJobAsync(const Model::SubmitDNAJobRequest& request, const SubmitDNAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDNAJobOutcomeCallable submitDNAJobCallable(const Model::SubmitDNAJobRequest& request) const;
			SubmitDynamicChartJobOutcome submitDynamicChartJob(const Model::SubmitDynamicChartJobRequest &request)const;
			void submitDynamicChartJobAsync(const Model::SubmitDynamicChartJobRequest& request, const SubmitDynamicChartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDynamicChartJobOutcomeCallable submitDynamicChartJobCallable(const Model::SubmitDynamicChartJobRequest& request) const;
			SubmitDynamicImageJobOutcome submitDynamicImageJob(const Model::SubmitDynamicImageJobRequest &request)const;
			void submitDynamicImageJobAsync(const Model::SubmitDynamicImageJobRequest& request, const SubmitDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDynamicImageJobOutcomeCallable submitDynamicImageJobCallable(const Model::SubmitDynamicImageJobRequest& request) const;
			SubmitIProductionJobOutcome submitIProductionJob(const Model::SubmitIProductionJobRequest &request)const;
			void submitIProductionJobAsync(const Model::SubmitIProductionJobRequest& request, const SubmitIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIProductionJobOutcomeCallable submitIProductionJobCallable(const Model::SubmitIProductionJobRequest& request) const;
			SubmitLiveEditingJobOutcome submitLiveEditingJob(const Model::SubmitLiveEditingJobRequest &request)const;
			void submitLiveEditingJobAsync(const Model::SubmitLiveEditingJobRequest& request, const SubmitLiveEditingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLiveEditingJobOutcomeCallable submitLiveEditingJobCallable(const Model::SubmitLiveEditingJobRequest& request) const;
			SubmitLiveRecordJobOutcome submitLiveRecordJob(const Model::SubmitLiveRecordJobRequest &request)const;
			void submitLiveRecordJobAsync(const Model::SubmitLiveRecordJobRequest& request, const SubmitLiveRecordJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLiveRecordJobOutcomeCallable submitLiveRecordJobCallable(const Model::SubmitLiveRecordJobRequest& request) const;
			SubmitLiveSnapshotJobOutcome submitLiveSnapshotJob(const Model::SubmitLiveSnapshotJobRequest &request)const;
			void submitLiveSnapshotJobAsync(const Model::SubmitLiveSnapshotJobRequest& request, const SubmitLiveSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLiveSnapshotJobOutcomeCallable submitLiveSnapshotJobCallable(const Model::SubmitLiveSnapshotJobRequest& request) const;
			SubmitLiveTranscodeJobOutcome submitLiveTranscodeJob(const Model::SubmitLiveTranscodeJobRequest &request)const;
			void submitLiveTranscodeJobAsync(const Model::SubmitLiveTranscodeJobRequest& request, const SubmitLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLiveTranscodeJobOutcomeCallable submitLiveTranscodeJobCallable(const Model::SubmitLiveTranscodeJobRequest& request) const;
			SubmitMediaCensorJobOutcome submitMediaCensorJob(const Model::SubmitMediaCensorJobRequest &request)const;
			void submitMediaCensorJobAsync(const Model::SubmitMediaCensorJobRequest& request, const SubmitMediaCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaCensorJobOutcomeCallable submitMediaCensorJobCallable(const Model::SubmitMediaCensorJobRequest& request) const;
			SubmitMediaInfoJobOutcome submitMediaInfoJob(const Model::SubmitMediaInfoJobRequest &request)const;
			void submitMediaInfoJobAsync(const Model::SubmitMediaInfoJobRequest& request, const SubmitMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaInfoJobOutcomeCallable submitMediaInfoJobCallable(const Model::SubmitMediaInfoJobRequest& request) const;
			SubmitMediaProducingJobOutcome submitMediaProducingJob(const Model::SubmitMediaProducingJobRequest &request)const;
			void submitMediaProducingJobAsync(const Model::SubmitMediaProducingJobRequest& request, const SubmitMediaProducingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaProducingJobOutcomeCallable submitMediaProducingJobCallable(const Model::SubmitMediaProducingJobRequest& request) const;
			SubmitPackageJobOutcome submitPackageJob(const Model::SubmitPackageJobRequest &request)const;
			void submitPackageJobAsync(const Model::SubmitPackageJobRequest& request, const SubmitPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPackageJobOutcomeCallable submitPackageJobCallable(const Model::SubmitPackageJobRequest& request) const;
			SubmitSmarttagJobOutcome submitSmarttagJob(const Model::SubmitSmarttagJobRequest &request)const;
			void submitSmarttagJobAsync(const Model::SubmitSmarttagJobRequest& request, const SubmitSmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmarttagJobOutcomeCallable submitSmarttagJobCallable(const Model::SubmitSmarttagJobRequest& request) const;
			SubmitSnapshotJobOutcome submitSnapshotJob(const Model::SubmitSnapshotJobRequest &request)const;
			void submitSnapshotJobAsync(const Model::SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSnapshotJobOutcomeCallable submitSnapshotJobCallable(const Model::SubmitSnapshotJobRequest& request) const;
			SubmitSubtitleProduceJobOutcome submitSubtitleProduceJob(const Model::SubmitSubtitleProduceJobRequest &request)const;
			void submitSubtitleProduceJobAsync(const Model::SubmitSubtitleProduceJobRequest& request, const SubmitSubtitleProduceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSubtitleProduceJobOutcomeCallable submitSubtitleProduceJobCallable(const Model::SubmitSubtitleProduceJobRequest& request) const;
			SubmitSyncMediaInfoJobOutcome submitSyncMediaInfoJob(const Model::SubmitSyncMediaInfoJobRequest &request)const;
			void submitSyncMediaInfoJobAsync(const Model::SubmitSyncMediaInfoJobRequest& request, const SubmitSyncMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSyncMediaInfoJobOutcomeCallable submitSyncMediaInfoJobCallable(const Model::SubmitSyncMediaInfoJobRequest& request) const;
			SubmitTranscodeJobOutcome submitTranscodeJob(const Model::SubmitTranscodeJobRequest &request)const;
			void submitTranscodeJobAsync(const Model::SubmitTranscodeJobRequest& request, const SubmitTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTranscodeJobOutcomeCallable submitTranscodeJobCallable(const Model::SubmitTranscodeJobRequest& request) const;
			UpdateCategoryOutcome updateCategory(const Model::UpdateCategoryRequest &request)const;
			void updateCategoryAsync(const Model::UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCategoryOutcomeCallable updateCategoryCallable(const Model::UpdateCategoryRequest& request) const;
			UpdateCustomTemplateOutcome updateCustomTemplate(const Model::UpdateCustomTemplateRequest &request)const;
			void updateCustomTemplateAsync(const Model::UpdateCustomTemplateRequest& request, const UpdateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomTemplateOutcomeCallable updateCustomTemplateCallable(const Model::UpdateCustomTemplateRequest& request) const;
			UpdateEditingProjectOutcome updateEditingProject(const Model::UpdateEditingProjectRequest &request)const;
			void updateEditingProjectAsync(const Model::UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEditingProjectOutcomeCallable updateEditingProjectCallable(const Model::UpdateEditingProjectRequest& request) const;
			UpdateLiveRecordTemplateOutcome updateLiveRecordTemplate(const Model::UpdateLiveRecordTemplateRequest &request)const;
			void updateLiveRecordTemplateAsync(const Model::UpdateLiveRecordTemplateRequest& request, const UpdateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveRecordTemplateOutcomeCallable updateLiveRecordTemplateCallable(const Model::UpdateLiveRecordTemplateRequest& request) const;
			UpdateLiveSnapshotTemplateOutcome updateLiveSnapshotTemplate(const Model::UpdateLiveSnapshotTemplateRequest &request)const;
			void updateLiveSnapshotTemplateAsync(const Model::UpdateLiveSnapshotTemplateRequest& request, const UpdateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveSnapshotTemplateOutcomeCallable updateLiveSnapshotTemplateCallable(const Model::UpdateLiveSnapshotTemplateRequest& request) const;
			UpdateLiveTranscodeJobOutcome updateLiveTranscodeJob(const Model::UpdateLiveTranscodeJobRequest &request)const;
			void updateLiveTranscodeJobAsync(const Model::UpdateLiveTranscodeJobRequest& request, const UpdateLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveTranscodeJobOutcomeCallable updateLiveTranscodeJobCallable(const Model::UpdateLiveTranscodeJobRequest& request) const;
			UpdateLiveTranscodeTemplateOutcome updateLiveTranscodeTemplate(const Model::UpdateLiveTranscodeTemplateRequest &request)const;
			void updateLiveTranscodeTemplateAsync(const Model::UpdateLiveTranscodeTemplateRequest& request, const UpdateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveTranscodeTemplateOutcomeCallable updateLiveTranscodeTemplateCallable(const Model::UpdateLiveTranscodeTemplateRequest& request) const;
			UpdateMediaInfoOutcome updateMediaInfo(const Model::UpdateMediaInfoRequest &request)const;
			void updateMediaInfoAsync(const Model::UpdateMediaInfoRequest& request, const UpdateMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaInfoOutcomeCallable updateMediaInfoCallable(const Model::UpdateMediaInfoRequest& request) const;
			UpdateMediaMarksOutcome updateMediaMarks(const Model::UpdateMediaMarksRequest &request)const;
			void updateMediaMarksAsync(const Model::UpdateMediaMarksRequest& request, const UpdateMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaMarksOutcomeCallable updateMediaMarksCallable(const Model::UpdateMediaMarksRequest& request) const;
			UpdatePipelineOutcome updatePipeline(const Model::UpdatePipelineRequest &request)const;
			void updatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineOutcomeCallable updatePipelineCallable(const Model::UpdatePipelineRequest& request) const;
			UpdateSmartJobOutcome updateSmartJob(const Model::UpdateSmartJobRequest &request)const;
			void updateSmartJobAsync(const Model::UpdateSmartJobRequest& request, const UpdateSmartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartJobOutcomeCallable updateSmartJobCallable(const Model::UpdateSmartJobRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			UploadMediaByURLOutcome uploadMediaByURL(const Model::UploadMediaByURLRequest &request)const;
			void uploadMediaByURLAsync(const Model::UploadMediaByURLRequest& request, const UploadMediaByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMediaByURLOutcomeCallable uploadMediaByURLCallable(const Model::UploadMediaByURLRequest& request) const;
			UploadStreamByURLOutcome uploadStreamByURL(const Model::UploadStreamByURLRequest &request)const;
			void uploadStreamByURLAsync(const Model::UploadStreamByURLRequest& request, const UploadStreamByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadStreamByURLOutcomeCallable uploadStreamByURLCallable(const Model::UploadStreamByURLRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ICE_ICECLIENT_H_
