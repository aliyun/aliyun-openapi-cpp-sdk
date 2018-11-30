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

#ifndef ALIBABACLOUD_VOD_VODCLIENT_H_
#define ALIBABACLOUD_VOD_VODCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VodExport.h"
#include "model/DescribePlayUserTotalRequest.h"
#include "model/DescribePlayUserTotalResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteCategoryRequest.h"
#include "model/DeleteCategoryResult.h"
#include "model/CreateUploadAttachedMediaRequest.h"
#include "model/CreateUploadAttachedMediaResult.h"
#include "model/ListAIVideoSummaryJobRequest.h"
#include "model/ListAIVideoSummaryJobResult.h"
#include "model/ListSnapshotsRequest.h"
#include "model/ListSnapshotsResult.h"
#include "model/UpdateVideoInfosRequest.h"
#include "model/UpdateVideoInfosResult.h"
#include "model/GetVideoListRequest.h"
#include "model/GetVideoListResult.h"
#include "model/ListAIVideoTerrorismRecogJobRequest.h"
#include "model/ListAIVideoTerrorismRecogJobResult.h"
#include "model/UpdateEditingProjectRequest.h"
#include "model/UpdateEditingProjectResult.h"
#include "model/SetDefaultVodTemplateRequest.h"
#include "model/SetDefaultVodTemplateResult.h"
#include "model/RefreshObjectCachesRequest.h"
#include "model/RefreshObjectCachesResult.h"
#include "model/DescribeDomainBpsDataRequest.h"
#include "model/DescribeDomainBpsDataResult.h"
#include "model/ListAuditSecurityIpRequest.h"
#include "model/ListAuditSecurityIpResult.h"
#include "model/GetAuditHistoryRequest.h"
#include "model/GetAuditHistoryResult.h"
#include "model/GetMediaDNAResultRequest.h"
#include "model/GetMediaDNAResultResult.h"
#include "model/GetVideoInfoRequest.h"
#include "model/GetVideoInfoResult.h"
#include "model/SetMessageCallbackRequest.h"
#include "model/SetMessageCallbackResult.h"
#include "model/GetVideoInfosRequest.h"
#include "model/GetVideoInfosResult.h"
#include "model/GetEditingProjectMaterialsRequest.h"
#include "model/GetEditingProjectMaterialsResult.h"
#include "model/OpenVodServiceRequest.h"
#include "model/OpenVodServiceResult.h"
#include "model/SubmitAIVideoCategoryJobRequest.h"
#include "model/SubmitAIVideoCategoryJobResult.h"
#include "model/DescribeRefreshTasksRequest.h"
#include "model/DescribeRefreshTasksResult.h"
#include "model/DeleteWatermarkRequest.h"
#include "model/DeleteWatermarkResult.h"
#include "model/UpdateCategoryRequest.h"
#include "model/UpdateCategoryResult.h"
#include "model/RegisterMediaRequest.h"
#include "model/RegisterMediaResult.h"
#include "model/ListAIASRJobRequest.h"
#include "model/ListAIASRJobResult.h"
#include "model/ListAIVideoCensorJobRequest.h"
#include "model/ListAIVideoCensorJobResult.h"
#include "model/DescribeRefreshQuotaRequest.h"
#include "model/DescribeRefreshQuotaResult.h"
#include "model/ProduceEditingProjectVideoRequest.h"
#include "model/ProduceEditingProjectVideoResult.h"
#include "model/GetCDNStatisSumRequest.h"
#include "model/GetCDNStatisSumResult.h"
#include "model/GetVideoPlayAuthRequest.h"
#include "model/GetVideoPlayAuthResult.h"
#include "model/GetAuditResultRequest.h"
#include "model/GetAuditResultResult.h"
#include "model/DeleteVodTemplateRequest.h"
#include "model/DeleteVodTemplateResult.h"
#include "model/SubmitPreprocessJobsRequest.h"
#include "model/SubmitPreprocessJobsResult.h"
#include "model/ListVodTemplateRequest.h"
#include "model/ListVodTemplateResult.h"
#include "model/GetVideoPlayInfoRequest.h"
#include "model/GetVideoPlayInfoResult.h"
#include "model/ListAIJobRequest.h"
#include "model/ListAIJobResult.h"
#include "model/GetVideoConfigRequest.h"
#include "model/GetVideoConfigResult.h"
#include "model/AddWatermarkRequest.h"
#include "model/AddWatermarkResult.h"
#include "model/ListWatermarkRequest.h"
#include "model/ListWatermarkResult.h"
#include "model/CreateUploadImageRequest.h"
#include "model/CreateUploadImageResult.h"
#include "model/UpdateVideoInfoRequest.h"
#include "model/UpdateVideoInfoResult.h"
#include "model/UpdateImageInfosRequest.h"
#include "model/UpdateImageInfosResult.h"
#include "model/DeleteWorkFlowRequest.h"
#include "model/DeleteWorkFlowResult.h"
#include "model/SearchMediaRequest.h"
#include "model/SearchMediaResult.h"
#include "model/DescribePlayTopVideosRequest.h"
#include "model/DescribePlayTopVideosResult.h"
#include "model/SetDefaultWatermarkRequest.h"
#include "model/SetDefaultWatermarkResult.h"
#include "model/PushObjectCacheRequest.h"
#include "model/PushObjectCacheResult.h"
#include "model/AddCategoryRequest.h"
#include "model/AddCategoryResult.h"
#include "model/SubmitSnapshotJobRequest.h"
#include "model/SubmitSnapshotJobResult.h"
#include "model/RefreshUploadVideoRequest.h"
#include "model/RefreshUploadVideoResult.h"
#include "model/ListAIVideoPornRecogJobRequest.h"
#include "model/ListAIVideoPornRecogJobResult.h"
#include "model/GetEditingProjectRequest.h"
#include "model/GetEditingProjectResult.h"
#include "model/SubmitAIVideoCensorJobRequest.h"
#include "model/SubmitAIVideoCensorJobResult.h"
#include "model/DeleteEditingProjectRequest.h"
#include "model/DeleteEditingProjectResult.h"
#include "model/CreateAuditRequest.h"
#include "model/CreateAuditResult.h"
#include "model/SubmitAIVideoTerrorismRecogJobRequest.h"
#include "model/SubmitAIVideoTerrorismRecogJobResult.h"
#include "model/SearchEditingProjectRequest.h"
#include "model/SearchEditingProjectResult.h"
#include "model/GetWatermarkRequest.h"
#include "model/GetWatermarkResult.h"
#include "model/UpdateWatermarkRequest.h"
#include "model/UpdateWatermarkResult.h"
#include "model/GetImageInfoRequest.h"
#include "model/GetImageInfoResult.h"
#include "model/ListWorkFlowRequest.h"
#include "model/ListWorkFlowResult.h"
#include "model/GetMessageCallbackRequest.h"
#include "model/GetMessageCallbackResult.h"
#include "model/ListLiveRecordVideoRequest.h"
#include "model/ListLiveRecordVideoResult.h"
#include "model/UpdateVodTemplateRequest.h"
#include "model/UpdateVodTemplateResult.h"
#include "model/ListAIVideoCategoryJobRequest.h"
#include "model/ListAIVideoCategoryJobResult.h"
#include "model/GetCategoriesRequest.h"
#include "model/GetCategoriesResult.h"
#include "model/DescribePlayVideoStatisRequest.h"
#include "model/DescribePlayVideoStatisResult.h"
#include "model/DeleteStreamRequest.h"
#include "model/DeleteStreamResult.h"
#include "model/UpdateWorkFlowRequest.h"
#include "model/UpdateWorkFlowResult.h"
#include "model/UploadMediaByURLRequest.h"
#include "model/UploadMediaByURLResult.h"
#include "model/SubmitAIJobRequest.h"
#include "model/SubmitAIJobResult.h"
#include "model/ListAIVideoCoverJobRequest.h"
#include "model/ListAIVideoCoverJobResult.h"
#include "model/SubmitAIASRJobRequest.h"
#include "model/SubmitAIASRJobResult.h"
#include "model/GetPlayInfoRequest.h"
#include "model/GetPlayInfoResult.h"
#include "model/GetWorkFlowRequest.h"
#include "model/GetWorkFlowResult.h"
#include "model/SubmitTranscodeJobsRequest.h"
#include "model/SubmitTranscodeJobsResult.h"
#include "model/AddWorkFlowRequest.h"
#include "model/AddWorkFlowResult.h"
#include "model/CreateUploadVideoRequest.h"
#include "model/CreateUploadVideoResult.h"
#include "model/GetOSSStatisRequest.h"
#include "model/GetOSSStatisResult.h"
#include "model/SetAuditSecurityIpRequest.h"
#include "model/SetAuditSecurityIpResult.h"
#include "model/DeleteMezzaninesRequest.h"
#include "model/DeleteMezzaninesResult.h"
#include "model/AddEditingProjectRequest.h"
#include "model/AddEditingProjectResult.h"
#include "model/SubmitAIVideoSummaryJobRequest.h"
#include "model/SubmitAIVideoSummaryJobResult.h"
#include "model/DescribeCdnDomainLogsRequest.h"
#include "model/DescribeCdnDomainLogsResult.h"
#include "model/DescribeDomainFlowDataRequest.h"
#include "model/DescribeDomainFlowDataResult.h"
#include "model/SubmitAIVideoPornRecogJobRequest.h"
#include "model/SubmitAIVideoPornRecogJobResult.h"
#include "model/SetEditingProjectMaterialsRequest.h"
#include "model/SetEditingProjectMaterialsResult.h"
#include "model/GetMezzanineInfoRequest.h"
#include "model/GetMezzanineInfoResult.h"
#include "model/DeleteVideoRequest.h"
#include "model/DeleteVideoResult.h"
#include "model/AddVodTemplateRequest.h"
#include "model/AddVodTemplateResult.h"
#include "model/SubmitAIVideoCoverJobRequest.h"
#include "model/SubmitAIVideoCoverJobResult.h"
#include "model/DescribePlayUserAvgRequest.h"
#include "model/DescribePlayUserAvgResult.h"
#include "model/GetVodTemplateRequest.h"
#include "model/GetVodTemplateResult.h"


namespace AlibabaCloud
{
	namespace Vod
	{
		class ALIBABACLOUD_VOD_EXPORT VodClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribePlayUserTotalResult> DescribePlayUserTotalOutcome;
			typedef std::future<DescribePlayUserTotalOutcome> DescribePlayUserTotalOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayUserTotalRequest&, const DescribePlayUserTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayUserTotalAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteCategoryResult> DeleteCategoryOutcome;
			typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteCategoryRequest&, const DeleteCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadAttachedMediaResult> CreateUploadAttachedMediaOutcome;
			typedef std::future<CreateUploadAttachedMediaOutcome> CreateUploadAttachedMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadAttachedMediaRequest&, const CreateUploadAttachedMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadAttachedMediaAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoSummaryJobResult> ListAIVideoSummaryJobOutcome;
			typedef std::future<ListAIVideoSummaryJobOutcome> ListAIVideoSummaryJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoSummaryJobRequest&, const ListAIVideoSummaryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoSummaryJobAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotsResult> ListSnapshotsOutcome;
			typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListSnapshotsRequest&, const ListSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::UpdateVideoInfosResult> UpdateVideoInfosOutcome;
			typedef std::future<UpdateVideoInfosOutcome> UpdateVideoInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVideoInfosRequest&, const UpdateVideoInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVideoInfosAsyncHandler;
			typedef Outcome<Error, Model::GetVideoListResult> GetVideoListOutcome;
			typedef std::future<GetVideoListOutcome> GetVideoListOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoListRequest&, const GetVideoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoListAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoTerrorismRecogJobResult> ListAIVideoTerrorismRecogJobOutcome;
			typedef std::future<ListAIVideoTerrorismRecogJobOutcome> ListAIVideoTerrorismRecogJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoTerrorismRecogJobRequest&, const ListAIVideoTerrorismRecogJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoTerrorismRecogJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateEditingProjectResult> UpdateEditingProjectOutcome;
			typedef std::future<UpdateEditingProjectOutcome> UpdateEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateEditingProjectRequest&, const UpdateEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultVodTemplateResult> SetDefaultVodTemplateOutcome;
			typedef std::future<SetDefaultVodTemplateOutcome> SetDefaultVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetDefaultVodTemplateRequest&, const SetDefaultVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::RefreshObjectCachesResult> RefreshObjectCachesOutcome;
			typedef std::future<RefreshObjectCachesOutcome> RefreshObjectCachesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshObjectCachesRequest&, const RefreshObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataResult> DescribeDomainBpsDataOutcome;
			typedef std::future<DescribeDomainBpsDataOutcome> DescribeDomainBpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeDomainBpsDataRequest&, const DescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::ListAuditSecurityIpResult> ListAuditSecurityIpOutcome;
			typedef std::future<ListAuditSecurityIpOutcome> ListAuditSecurityIpOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAuditSecurityIpRequest&, const ListAuditSecurityIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuditSecurityIpAsyncHandler;
			typedef Outcome<Error, Model::GetAuditHistoryResult> GetAuditHistoryOutcome;
			typedef std::future<GetAuditHistoryOutcome> GetAuditHistoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAuditHistoryRequest&, const GetAuditHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuditHistoryAsyncHandler;
			typedef Outcome<Error, Model::GetMediaDNAResultResult> GetMediaDNAResultOutcome;
			typedef std::future<GetMediaDNAResultOutcome> GetMediaDNAResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaDNAResultRequest&, const GetMediaDNAResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaDNAResultAsyncHandler;
			typedef Outcome<Error, Model::GetVideoInfoResult> GetVideoInfoOutcome;
			typedef std::future<GetVideoInfoOutcome> GetVideoInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoInfoRequest&, const GetVideoInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoInfoAsyncHandler;
			typedef Outcome<Error, Model::SetMessageCallbackResult> SetMessageCallbackOutcome;
			typedef std::future<SetMessageCallbackOutcome> SetMessageCallbackOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetMessageCallbackRequest&, const SetMessageCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetMessageCallbackAsyncHandler;
			typedef Outcome<Error, Model::GetVideoInfosResult> GetVideoInfosOutcome;
			typedef std::future<GetVideoInfosOutcome> GetVideoInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoInfosRequest&, const GetVideoInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoInfosAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectMaterialsResult> GetEditingProjectMaterialsOutcome;
			typedef std::future<GetEditingProjectMaterialsOutcome> GetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectMaterialsRequest&, const GetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::OpenVodServiceResult> OpenVodServiceOutcome;
			typedef std::future<OpenVodServiceOutcome> OpenVodServiceOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::OpenVodServiceRequest&, const OpenVodServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenVodServiceAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoCategoryJobResult> SubmitAIVideoCategoryJobOutcome;
			typedef std::future<SubmitAIVideoCategoryJobOutcome> SubmitAIVideoCategoryJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoCategoryJobRequest&, const SubmitAIVideoCategoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoCategoryJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshTasksResult> DescribeRefreshTasksOutcome;
			typedef std::future<DescribeRefreshTasksOutcome> DescribeRefreshTasksOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeRefreshTasksRequest&, const DescribeRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DeleteWatermarkResult> DeleteWatermarkOutcome;
			typedef std::future<DeleteWatermarkOutcome> DeleteWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteWatermarkRequest&, const DeleteWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateCategoryResult> UpdateCategoryOutcome;
			typedef std::future<UpdateCategoryOutcome> UpdateCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateCategoryRequest&, const UpdateCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCategoryAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaResult> RegisterMediaOutcome;
			typedef std::future<RegisterMediaOutcome> RegisterMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RegisterMediaRequest&, const RegisterMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaAsyncHandler;
			typedef Outcome<Error, Model::ListAIASRJobResult> ListAIASRJobOutcome;
			typedef std::future<ListAIASRJobOutcome> ListAIASRJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIASRJobRequest&, const ListAIASRJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIASRJobAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoCensorJobResult> ListAIVideoCensorJobOutcome;
			typedef std::future<ListAIVideoCensorJobOutcome> ListAIVideoCensorJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoCensorJobRequest&, const ListAIVideoCensorJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoCensorJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshQuotaResult> DescribeRefreshQuotaOutcome;
			typedef std::future<DescribeRefreshQuotaOutcome> DescribeRefreshQuotaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeRefreshQuotaRequest&, const DescribeRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::ProduceEditingProjectVideoResult> ProduceEditingProjectVideoOutcome;
			typedef std::future<ProduceEditingProjectVideoOutcome> ProduceEditingProjectVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ProduceEditingProjectVideoRequest&, const ProduceEditingProjectVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProduceEditingProjectVideoAsyncHandler;
			typedef Outcome<Error, Model::GetCDNStatisSumResult> GetCDNStatisSumOutcome;
			typedef std::future<GetCDNStatisSumOutcome> GetCDNStatisSumOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetCDNStatisSumRequest&, const GetCDNStatisSumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCDNStatisSumAsyncHandler;
			typedef Outcome<Error, Model::GetVideoPlayAuthResult> GetVideoPlayAuthOutcome;
			typedef std::future<GetVideoPlayAuthOutcome> GetVideoPlayAuthOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoPlayAuthRequest&, const GetVideoPlayAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoPlayAuthAsyncHandler;
			typedef Outcome<Error, Model::GetAuditResultResult> GetAuditResultOutcome;
			typedef std::future<GetAuditResultOutcome> GetAuditResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAuditResultRequest&, const GetAuditResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuditResultAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodTemplateResult> DeleteVodTemplateOutcome;
			typedef std::future<DeleteVodTemplateOutcome> DeleteVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodTemplateRequest&, const DeleteVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::SubmitPreprocessJobsResult> SubmitPreprocessJobsOutcome;
			typedef std::future<SubmitPreprocessJobsOutcome> SubmitPreprocessJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitPreprocessJobsRequest&, const SubmitPreprocessJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPreprocessJobsAsyncHandler;
			typedef Outcome<Error, Model::ListVodTemplateResult> ListVodTemplateOutcome;
			typedef std::future<ListVodTemplateOutcome> ListVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListVodTemplateRequest&, const ListVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetVideoPlayInfoResult> GetVideoPlayInfoOutcome;
			typedef std::future<GetVideoPlayInfoOutcome> GetVideoPlayInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoPlayInfoRequest&, const GetVideoPlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoPlayInfoAsyncHandler;
			typedef Outcome<Error, Model::ListAIJobResult> ListAIJobOutcome;
			typedef std::future<ListAIJobOutcome> ListAIJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIJobRequest&, const ListAIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIJobAsyncHandler;
			typedef Outcome<Error, Model::GetVideoConfigResult> GetVideoConfigOutcome;
			typedef std::future<GetVideoConfigOutcome> GetVideoConfigOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoConfigRequest&, const GetVideoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoConfigAsyncHandler;
			typedef Outcome<Error, Model::AddWatermarkResult> AddWatermarkOutcome;
			typedef std::future<AddWatermarkOutcome> AddWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddWatermarkRequest&, const AddWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWatermarkAsyncHandler;
			typedef Outcome<Error, Model::ListWatermarkResult> ListWatermarkOutcome;
			typedef std::future<ListWatermarkOutcome> ListWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListWatermarkRequest&, const ListWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWatermarkAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadImageResult> CreateUploadImageOutcome;
			typedef std::future<CreateUploadImageOutcome> CreateUploadImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadImageRequest&, const CreateUploadImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadImageAsyncHandler;
			typedef Outcome<Error, Model::UpdateVideoInfoResult> UpdateVideoInfoOutcome;
			typedef std::future<UpdateVideoInfoOutcome> UpdateVideoInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVideoInfoRequest&, const UpdateVideoInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVideoInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageInfosResult> UpdateImageInfosOutcome;
			typedef std::future<UpdateImageInfosOutcome> UpdateImageInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateImageInfosRequest&, const UpdateImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageInfosAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkFlowResult> DeleteWorkFlowOutcome;
			typedef std::future<DeleteWorkFlowOutcome> DeleteWorkFlowOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteWorkFlowRequest&, const DeleteWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaResult> SearchMediaOutcome;
			typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SearchMediaRequest&, const SearchMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayTopVideosResult> DescribePlayTopVideosOutcome;
			typedef std::future<DescribePlayTopVideosOutcome> DescribePlayTopVideosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayTopVideosRequest&, const DescribePlayTopVideosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayTopVideosAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultWatermarkResult> SetDefaultWatermarkOutcome;
			typedef std::future<SetDefaultWatermarkOutcome> SetDefaultWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetDefaultWatermarkRequest&, const SetDefaultWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultWatermarkAsyncHandler;
			typedef Outcome<Error, Model::PushObjectCacheResult> PushObjectCacheOutcome;
			typedef std::future<PushObjectCacheOutcome> PushObjectCacheOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::PushObjectCacheRequest&, const PushObjectCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushObjectCacheAsyncHandler;
			typedef Outcome<Error, Model::AddCategoryResult> AddCategoryOutcome;
			typedef std::future<AddCategoryOutcome> AddCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddCategoryRequest&, const AddCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCategoryAsyncHandler;
			typedef Outcome<Error, Model::SubmitSnapshotJobResult> SubmitSnapshotJobOutcome;
			typedef std::future<SubmitSnapshotJobOutcome> SubmitSnapshotJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitSnapshotJobRequest&, const SubmitSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::RefreshUploadVideoResult> RefreshUploadVideoOutcome;
			typedef std::future<RefreshUploadVideoOutcome> RefreshUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshUploadVideoRequest&, const RefreshUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoPornRecogJobResult> ListAIVideoPornRecogJobOutcome;
			typedef std::future<ListAIVideoPornRecogJobOutcome> ListAIVideoPornRecogJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoPornRecogJobRequest&, const ListAIVideoPornRecogJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoPornRecogJobAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectResult> GetEditingProjectOutcome;
			typedef std::future<GetEditingProjectOutcome> GetEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectRequest&, const GetEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoCensorJobResult> SubmitAIVideoCensorJobOutcome;
			typedef std::future<SubmitAIVideoCensorJobOutcome> SubmitAIVideoCensorJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoCensorJobRequest&, const SubmitAIVideoCensorJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoCensorJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectResult> DeleteEditingProjectOutcome;
			typedef std::future<DeleteEditingProjectOutcome> DeleteEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteEditingProjectRequest&, const DeleteEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateAuditResult> CreateAuditOutcome;
			typedef std::future<CreateAuditOutcome> CreateAuditOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateAuditRequest&, const CreateAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoTerrorismRecogJobResult> SubmitAIVideoTerrorismRecogJobOutcome;
			typedef std::future<SubmitAIVideoTerrorismRecogJobOutcome> SubmitAIVideoTerrorismRecogJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoTerrorismRecogJobRequest&, const SubmitAIVideoTerrorismRecogJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoTerrorismRecogJobAsyncHandler;
			typedef Outcome<Error, Model::SearchEditingProjectResult> SearchEditingProjectOutcome;
			typedef std::future<SearchEditingProjectOutcome> SearchEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SearchEditingProjectRequest&, const SearchEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::GetWatermarkResult> GetWatermarkOutcome;
			typedef std::future<GetWatermarkOutcome> GetWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetWatermarkRequest&, const GetWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWatermarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateWatermarkResult> UpdateWatermarkOutcome;
			typedef std::future<UpdateWatermarkOutcome> UpdateWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateWatermarkRequest&, const UpdateWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWatermarkAsyncHandler;
			typedef Outcome<Error, Model::GetImageInfoResult> GetImageInfoOutcome;
			typedef std::future<GetImageInfoOutcome> GetImageInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetImageInfoRequest&, const GetImageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageInfoAsyncHandler;
			typedef Outcome<Error, Model::ListWorkFlowResult> ListWorkFlowOutcome;
			typedef std::future<ListWorkFlowOutcome> ListWorkFlowOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListWorkFlowRequest&, const ListWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::GetMessageCallbackResult> GetMessageCallbackOutcome;
			typedef std::future<GetMessageCallbackOutcome> GetMessageCallbackOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMessageCallbackRequest&, const GetMessageCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageCallbackAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordVideoResult> ListLiveRecordVideoOutcome;
			typedef std::future<ListLiveRecordVideoOutcome> ListLiveRecordVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListLiveRecordVideoRequest&, const ListLiveRecordVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordVideoAsyncHandler;
			typedef Outcome<Error, Model::UpdateVodTemplateResult> UpdateVodTemplateOutcome;
			typedef std::future<UpdateVodTemplateOutcome> UpdateVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVodTemplateRequest&, const UpdateVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoCategoryJobResult> ListAIVideoCategoryJobOutcome;
			typedef std::future<ListAIVideoCategoryJobOutcome> ListAIVideoCategoryJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoCategoryJobRequest&, const ListAIVideoCategoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoCategoryJobAsyncHandler;
			typedef Outcome<Error, Model::GetCategoriesResult> GetCategoriesOutcome;
			typedef std::future<GetCategoriesOutcome> GetCategoriesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetCategoriesRequest&, const GetCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCategoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayVideoStatisResult> DescribePlayVideoStatisOutcome;
			typedef std::future<DescribePlayVideoStatisOutcome> DescribePlayVideoStatisOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayVideoStatisRequest&, const DescribePlayVideoStatisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayVideoStatisAsyncHandler;
			typedef Outcome<Error, Model::DeleteStreamResult> DeleteStreamOutcome;
			typedef std::future<DeleteStreamOutcome> DeleteStreamOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteStreamRequest&, const DeleteStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkFlowResult> UpdateWorkFlowOutcome;
			typedef std::future<UpdateWorkFlowOutcome> UpdateWorkFlowOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateWorkFlowRequest&, const UpdateWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::UploadMediaByURLResult> UploadMediaByURLOutcome;
			typedef std::future<UploadMediaByURLOutcome> UploadMediaByURLOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UploadMediaByURLRequest&, const UploadMediaByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMediaByURLAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIJobResult> SubmitAIJobOutcome;
			typedef std::future<SubmitAIJobOutcome> SubmitAIJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIJobRequest&, const SubmitAIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIJobAsyncHandler;
			typedef Outcome<Error, Model::ListAIVideoCoverJobResult> ListAIVideoCoverJobOutcome;
			typedef std::future<ListAIVideoCoverJobOutcome> ListAIVideoCoverJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIVideoCoverJobRequest&, const ListAIVideoCoverJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIVideoCoverJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIASRJobResult> SubmitAIASRJobOutcome;
			typedef std::future<SubmitAIASRJobOutcome> SubmitAIASRJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIASRJobRequest&, const SubmitAIASRJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIASRJobAsyncHandler;
			typedef Outcome<Error, Model::GetPlayInfoResult> GetPlayInfoOutcome;
			typedef std::future<GetPlayInfoOutcome> GetPlayInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetPlayInfoRequest&, const GetPlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPlayInfoAsyncHandler;
			typedef Outcome<Error, Model::GetWorkFlowResult> GetWorkFlowOutcome;
			typedef std::future<GetWorkFlowOutcome> GetWorkFlowOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetWorkFlowRequest&, const GetWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::SubmitTranscodeJobsResult> SubmitTranscodeJobsOutcome;
			typedef std::future<SubmitTranscodeJobsOutcome> SubmitTranscodeJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitTranscodeJobsRequest&, const SubmitTranscodeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTranscodeJobsAsyncHandler;
			typedef Outcome<Error, Model::AddWorkFlowResult> AddWorkFlowOutcome;
			typedef std::future<AddWorkFlowOutcome> AddWorkFlowOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddWorkFlowRequest&, const AddWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadVideoResult> CreateUploadVideoOutcome;
			typedef std::future<CreateUploadVideoOutcome> CreateUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadVideoRequest&, const CreateUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::GetOSSStatisResult> GetOSSStatisOutcome;
			typedef std::future<GetOSSStatisOutcome> GetOSSStatisOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetOSSStatisRequest&, const GetOSSStatisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOSSStatisAsyncHandler;
			typedef Outcome<Error, Model::SetAuditSecurityIpResult> SetAuditSecurityIpOutcome;
			typedef std::future<SetAuditSecurityIpOutcome> SetAuditSecurityIpOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetAuditSecurityIpRequest&, const SetAuditSecurityIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAuditSecurityIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteMezzaninesResult> DeleteMezzaninesOutcome;
			typedef std::future<DeleteMezzaninesOutcome> DeleteMezzaninesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteMezzaninesRequest&, const DeleteMezzaninesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMezzaninesAsyncHandler;
			typedef Outcome<Error, Model::AddEditingProjectResult> AddEditingProjectOutcome;
			typedef std::future<AddEditingProjectOutcome> AddEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddEditingProjectRequest&, const AddEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoSummaryJobResult> SubmitAIVideoSummaryJobOutcome;
			typedef std::future<SubmitAIVideoSummaryJobOutcome> SubmitAIVideoSummaryJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoSummaryJobRequest&, const SubmitAIVideoSummaryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoSummaryJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainLogsResult> DescribeCdnDomainLogsOutcome;
			typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeCdnDomainLogsRequest&, const DescribeCdnDomainLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainFlowDataResult> DescribeDomainFlowDataOutcome;
			typedef std::future<DescribeDomainFlowDataOutcome> DescribeDomainFlowDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeDomainFlowDataRequest&, const DescribeDomainFlowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainFlowDataAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoPornRecogJobResult> SubmitAIVideoPornRecogJobOutcome;
			typedef std::future<SubmitAIVideoPornRecogJobOutcome> SubmitAIVideoPornRecogJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoPornRecogJobRequest&, const SubmitAIVideoPornRecogJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoPornRecogJobAsyncHandler;
			typedef Outcome<Error, Model::SetEditingProjectMaterialsResult> SetEditingProjectMaterialsOutcome;
			typedef std::future<SetEditingProjectMaterialsOutcome> SetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetEditingProjectMaterialsRequest&, const SetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetMezzanineInfoResult> GetMezzanineInfoOutcome;
			typedef std::future<GetMezzanineInfoOutcome> GetMezzanineInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMezzanineInfoRequest&, const GetMezzanineInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMezzanineInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoResult> DeleteVideoOutcome;
			typedef std::future<DeleteVideoOutcome> DeleteVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVideoRequest&, const DeleteVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoAsyncHandler;
			typedef Outcome<Error, Model::AddVodTemplateResult> AddVodTemplateOutcome;
			typedef std::future<AddVodTemplateOutcome> AddVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodTemplateRequest&, const AddVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIVideoCoverJobResult> SubmitAIVideoCoverJobOutcome;
			typedef std::future<SubmitAIVideoCoverJobOutcome> SubmitAIVideoCoverJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIVideoCoverJobRequest&, const SubmitAIVideoCoverJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIVideoCoverJobAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayUserAvgResult> DescribePlayUserAvgOutcome;
			typedef std::future<DescribePlayUserAvgOutcome> DescribePlayUserAvgOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayUserAvgRequest&, const DescribePlayUserAvgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayUserAvgAsyncHandler;
			typedef Outcome<Error, Model::GetVodTemplateResult> GetVodTemplateOutcome;
			typedef std::future<GetVodTemplateOutcome> GetVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVodTemplateRequest&, const GetVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVodTemplateAsyncHandler;

			VodClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VodClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VodClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VodClient();
			DescribePlayUserTotalOutcome describePlayUserTotal(const Model::DescribePlayUserTotalRequest &request)const;
			void describePlayUserTotalAsync(const Model::DescribePlayUserTotalRequest& request, const DescribePlayUserTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayUserTotalOutcomeCallable describePlayUserTotalCallable(const Model::DescribePlayUserTotalRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteCategoryOutcome deleteCategory(const Model::DeleteCategoryRequest &request)const;
			void deleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCategoryOutcomeCallable deleteCategoryCallable(const Model::DeleteCategoryRequest& request) const;
			CreateUploadAttachedMediaOutcome createUploadAttachedMedia(const Model::CreateUploadAttachedMediaRequest &request)const;
			void createUploadAttachedMediaAsync(const Model::CreateUploadAttachedMediaRequest& request, const CreateUploadAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadAttachedMediaOutcomeCallable createUploadAttachedMediaCallable(const Model::CreateUploadAttachedMediaRequest& request) const;
			ListAIVideoSummaryJobOutcome listAIVideoSummaryJob(const Model::ListAIVideoSummaryJobRequest &request)const;
			void listAIVideoSummaryJobAsync(const Model::ListAIVideoSummaryJobRequest& request, const ListAIVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoSummaryJobOutcomeCallable listAIVideoSummaryJobCallable(const Model::ListAIVideoSummaryJobRequest& request) const;
			ListSnapshotsOutcome listSnapshots(const Model::ListSnapshotsRequest &request)const;
			void listSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotsOutcomeCallable listSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;
			UpdateVideoInfosOutcome updateVideoInfos(const Model::UpdateVideoInfosRequest &request)const;
			void updateVideoInfosAsync(const Model::UpdateVideoInfosRequest& request, const UpdateVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVideoInfosOutcomeCallable updateVideoInfosCallable(const Model::UpdateVideoInfosRequest& request) const;
			GetVideoListOutcome getVideoList(const Model::GetVideoListRequest &request)const;
			void getVideoListAsync(const Model::GetVideoListRequest& request, const GetVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoListOutcomeCallable getVideoListCallable(const Model::GetVideoListRequest& request) const;
			ListAIVideoTerrorismRecogJobOutcome listAIVideoTerrorismRecogJob(const Model::ListAIVideoTerrorismRecogJobRequest &request)const;
			void listAIVideoTerrorismRecogJobAsync(const Model::ListAIVideoTerrorismRecogJobRequest& request, const ListAIVideoTerrorismRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoTerrorismRecogJobOutcomeCallable listAIVideoTerrorismRecogJobCallable(const Model::ListAIVideoTerrorismRecogJobRequest& request) const;
			UpdateEditingProjectOutcome updateEditingProject(const Model::UpdateEditingProjectRequest &request)const;
			void updateEditingProjectAsync(const Model::UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEditingProjectOutcomeCallable updateEditingProjectCallable(const Model::UpdateEditingProjectRequest& request) const;
			SetDefaultVodTemplateOutcome setDefaultVodTemplate(const Model::SetDefaultVodTemplateRequest &request)const;
			void setDefaultVodTemplateAsync(const Model::SetDefaultVodTemplateRequest& request, const SetDefaultVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultVodTemplateOutcomeCallable setDefaultVodTemplateCallable(const Model::SetDefaultVodTemplateRequest& request) const;
			RefreshObjectCachesOutcome refreshObjectCaches(const Model::RefreshObjectCachesRequest &request)const;
			void refreshObjectCachesAsync(const Model::RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshObjectCachesOutcomeCallable refreshObjectCachesCallable(const Model::RefreshObjectCachesRequest& request) const;
			DescribeDomainBpsDataOutcome describeDomainBpsData(const Model::DescribeDomainBpsDataRequest &request)const;
			void describeDomainBpsDataAsync(const Model::DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataOutcomeCallable describeDomainBpsDataCallable(const Model::DescribeDomainBpsDataRequest& request) const;
			ListAuditSecurityIpOutcome listAuditSecurityIp(const Model::ListAuditSecurityIpRequest &request)const;
			void listAuditSecurityIpAsync(const Model::ListAuditSecurityIpRequest& request, const ListAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuditSecurityIpOutcomeCallable listAuditSecurityIpCallable(const Model::ListAuditSecurityIpRequest& request) const;
			GetAuditHistoryOutcome getAuditHistory(const Model::GetAuditHistoryRequest &request)const;
			void getAuditHistoryAsync(const Model::GetAuditHistoryRequest& request, const GetAuditHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuditHistoryOutcomeCallable getAuditHistoryCallable(const Model::GetAuditHistoryRequest& request) const;
			GetMediaDNAResultOutcome getMediaDNAResult(const Model::GetMediaDNAResultRequest &request)const;
			void getMediaDNAResultAsync(const Model::GetMediaDNAResultRequest& request, const GetMediaDNAResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaDNAResultOutcomeCallable getMediaDNAResultCallable(const Model::GetMediaDNAResultRequest& request) const;
			GetVideoInfoOutcome getVideoInfo(const Model::GetVideoInfoRequest &request)const;
			void getVideoInfoAsync(const Model::GetVideoInfoRequest& request, const GetVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoInfoOutcomeCallable getVideoInfoCallable(const Model::GetVideoInfoRequest& request) const;
			SetMessageCallbackOutcome setMessageCallback(const Model::SetMessageCallbackRequest &request)const;
			void setMessageCallbackAsync(const Model::SetMessageCallbackRequest& request, const SetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetMessageCallbackOutcomeCallable setMessageCallbackCallable(const Model::SetMessageCallbackRequest& request) const;
			GetVideoInfosOutcome getVideoInfos(const Model::GetVideoInfosRequest &request)const;
			void getVideoInfosAsync(const Model::GetVideoInfosRequest& request, const GetVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoInfosOutcomeCallable getVideoInfosCallable(const Model::GetVideoInfosRequest& request) const;
			GetEditingProjectMaterialsOutcome getEditingProjectMaterials(const Model::GetEditingProjectMaterialsRequest &request)const;
			void getEditingProjectMaterialsAsync(const Model::GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectMaterialsOutcomeCallable getEditingProjectMaterialsCallable(const Model::GetEditingProjectMaterialsRequest& request) const;
			OpenVodServiceOutcome openVodService(const Model::OpenVodServiceRequest &request)const;
			void openVodServiceAsync(const Model::OpenVodServiceRequest& request, const OpenVodServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenVodServiceOutcomeCallable openVodServiceCallable(const Model::OpenVodServiceRequest& request) const;
			SubmitAIVideoCategoryJobOutcome submitAIVideoCategoryJob(const Model::SubmitAIVideoCategoryJobRequest &request)const;
			void submitAIVideoCategoryJobAsync(const Model::SubmitAIVideoCategoryJobRequest& request, const SubmitAIVideoCategoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoCategoryJobOutcomeCallable submitAIVideoCategoryJobCallable(const Model::SubmitAIVideoCategoryJobRequest& request) const;
			DescribeRefreshTasksOutcome describeRefreshTasks(const Model::DescribeRefreshTasksRequest &request)const;
			void describeRefreshTasksAsync(const Model::DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshTasksOutcomeCallable describeRefreshTasksCallable(const Model::DescribeRefreshTasksRequest& request) const;
			DeleteWatermarkOutcome deleteWatermark(const Model::DeleteWatermarkRequest &request)const;
			void deleteWatermarkAsync(const Model::DeleteWatermarkRequest& request, const DeleteWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWatermarkOutcomeCallable deleteWatermarkCallable(const Model::DeleteWatermarkRequest& request) const;
			UpdateCategoryOutcome updateCategory(const Model::UpdateCategoryRequest &request)const;
			void updateCategoryAsync(const Model::UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCategoryOutcomeCallable updateCategoryCallable(const Model::UpdateCategoryRequest& request) const;
			RegisterMediaOutcome registerMedia(const Model::RegisterMediaRequest &request)const;
			void registerMediaAsync(const Model::RegisterMediaRequest& request, const RegisterMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaOutcomeCallable registerMediaCallable(const Model::RegisterMediaRequest& request) const;
			ListAIASRJobOutcome listAIASRJob(const Model::ListAIASRJobRequest &request)const;
			void listAIASRJobAsync(const Model::ListAIASRJobRequest& request, const ListAIASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIASRJobOutcomeCallable listAIASRJobCallable(const Model::ListAIASRJobRequest& request) const;
			ListAIVideoCensorJobOutcome listAIVideoCensorJob(const Model::ListAIVideoCensorJobRequest &request)const;
			void listAIVideoCensorJobAsync(const Model::ListAIVideoCensorJobRequest& request, const ListAIVideoCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoCensorJobOutcomeCallable listAIVideoCensorJobCallable(const Model::ListAIVideoCensorJobRequest& request) const;
			DescribeRefreshQuotaOutcome describeRefreshQuota(const Model::DescribeRefreshQuotaRequest &request)const;
			void describeRefreshQuotaAsync(const Model::DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshQuotaOutcomeCallable describeRefreshQuotaCallable(const Model::DescribeRefreshQuotaRequest& request) const;
			ProduceEditingProjectVideoOutcome produceEditingProjectVideo(const Model::ProduceEditingProjectVideoRequest &request)const;
			void produceEditingProjectVideoAsync(const Model::ProduceEditingProjectVideoRequest& request, const ProduceEditingProjectVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProduceEditingProjectVideoOutcomeCallable produceEditingProjectVideoCallable(const Model::ProduceEditingProjectVideoRequest& request) const;
			GetCDNStatisSumOutcome getCDNStatisSum(const Model::GetCDNStatisSumRequest &request)const;
			void getCDNStatisSumAsync(const Model::GetCDNStatisSumRequest& request, const GetCDNStatisSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCDNStatisSumOutcomeCallable getCDNStatisSumCallable(const Model::GetCDNStatisSumRequest& request) const;
			GetVideoPlayAuthOutcome getVideoPlayAuth(const Model::GetVideoPlayAuthRequest &request)const;
			void getVideoPlayAuthAsync(const Model::GetVideoPlayAuthRequest& request, const GetVideoPlayAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoPlayAuthOutcomeCallable getVideoPlayAuthCallable(const Model::GetVideoPlayAuthRequest& request) const;
			GetAuditResultOutcome getAuditResult(const Model::GetAuditResultRequest &request)const;
			void getAuditResultAsync(const Model::GetAuditResultRequest& request, const GetAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuditResultOutcomeCallable getAuditResultCallable(const Model::GetAuditResultRequest& request) const;
			DeleteVodTemplateOutcome deleteVodTemplate(const Model::DeleteVodTemplateRequest &request)const;
			void deleteVodTemplateAsync(const Model::DeleteVodTemplateRequest& request, const DeleteVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodTemplateOutcomeCallable deleteVodTemplateCallable(const Model::DeleteVodTemplateRequest& request) const;
			SubmitPreprocessJobsOutcome submitPreprocessJobs(const Model::SubmitPreprocessJobsRequest &request)const;
			void submitPreprocessJobsAsync(const Model::SubmitPreprocessJobsRequest& request, const SubmitPreprocessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPreprocessJobsOutcomeCallable submitPreprocessJobsCallable(const Model::SubmitPreprocessJobsRequest& request) const;
			ListVodTemplateOutcome listVodTemplate(const Model::ListVodTemplateRequest &request)const;
			void listVodTemplateAsync(const Model::ListVodTemplateRequest& request, const ListVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVodTemplateOutcomeCallable listVodTemplateCallable(const Model::ListVodTemplateRequest& request) const;
			GetVideoPlayInfoOutcome getVideoPlayInfo(const Model::GetVideoPlayInfoRequest &request)const;
			void getVideoPlayInfoAsync(const Model::GetVideoPlayInfoRequest& request, const GetVideoPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoPlayInfoOutcomeCallable getVideoPlayInfoCallable(const Model::GetVideoPlayInfoRequest& request) const;
			ListAIJobOutcome listAIJob(const Model::ListAIJobRequest &request)const;
			void listAIJobAsync(const Model::ListAIJobRequest& request, const ListAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIJobOutcomeCallable listAIJobCallable(const Model::ListAIJobRequest& request) const;
			GetVideoConfigOutcome getVideoConfig(const Model::GetVideoConfigRequest &request)const;
			void getVideoConfigAsync(const Model::GetVideoConfigRequest& request, const GetVideoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoConfigOutcomeCallable getVideoConfigCallable(const Model::GetVideoConfigRequest& request) const;
			AddWatermarkOutcome addWatermark(const Model::AddWatermarkRequest &request)const;
			void addWatermarkAsync(const Model::AddWatermarkRequest& request, const AddWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWatermarkOutcomeCallable addWatermarkCallable(const Model::AddWatermarkRequest& request) const;
			ListWatermarkOutcome listWatermark(const Model::ListWatermarkRequest &request)const;
			void listWatermarkAsync(const Model::ListWatermarkRequest& request, const ListWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWatermarkOutcomeCallable listWatermarkCallable(const Model::ListWatermarkRequest& request) const;
			CreateUploadImageOutcome createUploadImage(const Model::CreateUploadImageRequest &request)const;
			void createUploadImageAsync(const Model::CreateUploadImageRequest& request, const CreateUploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadImageOutcomeCallable createUploadImageCallable(const Model::CreateUploadImageRequest& request) const;
			UpdateVideoInfoOutcome updateVideoInfo(const Model::UpdateVideoInfoRequest &request)const;
			void updateVideoInfoAsync(const Model::UpdateVideoInfoRequest& request, const UpdateVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVideoInfoOutcomeCallable updateVideoInfoCallable(const Model::UpdateVideoInfoRequest& request) const;
			UpdateImageInfosOutcome updateImageInfos(const Model::UpdateImageInfosRequest &request)const;
			void updateImageInfosAsync(const Model::UpdateImageInfosRequest& request, const UpdateImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageInfosOutcomeCallable updateImageInfosCallable(const Model::UpdateImageInfosRequest& request) const;
			DeleteWorkFlowOutcome deleteWorkFlow(const Model::DeleteWorkFlowRequest &request)const;
			void deleteWorkFlowAsync(const Model::DeleteWorkFlowRequest& request, const DeleteWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkFlowOutcomeCallable deleteWorkFlowCallable(const Model::DeleteWorkFlowRequest& request) const;
			SearchMediaOutcome searchMedia(const Model::SearchMediaRequest &request)const;
			void searchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaOutcomeCallable searchMediaCallable(const Model::SearchMediaRequest& request) const;
			DescribePlayTopVideosOutcome describePlayTopVideos(const Model::DescribePlayTopVideosRequest &request)const;
			void describePlayTopVideosAsync(const Model::DescribePlayTopVideosRequest& request, const DescribePlayTopVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayTopVideosOutcomeCallable describePlayTopVideosCallable(const Model::DescribePlayTopVideosRequest& request) const;
			SetDefaultWatermarkOutcome setDefaultWatermark(const Model::SetDefaultWatermarkRequest &request)const;
			void setDefaultWatermarkAsync(const Model::SetDefaultWatermarkRequest& request, const SetDefaultWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultWatermarkOutcomeCallable setDefaultWatermarkCallable(const Model::SetDefaultWatermarkRequest& request) const;
			PushObjectCacheOutcome pushObjectCache(const Model::PushObjectCacheRequest &request)const;
			void pushObjectCacheAsync(const Model::PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushObjectCacheOutcomeCallable pushObjectCacheCallable(const Model::PushObjectCacheRequest& request) const;
			AddCategoryOutcome addCategory(const Model::AddCategoryRequest &request)const;
			void addCategoryAsync(const Model::AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCategoryOutcomeCallable addCategoryCallable(const Model::AddCategoryRequest& request) const;
			SubmitSnapshotJobOutcome submitSnapshotJob(const Model::SubmitSnapshotJobRequest &request)const;
			void submitSnapshotJobAsync(const Model::SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSnapshotJobOutcomeCallable submitSnapshotJobCallable(const Model::SubmitSnapshotJobRequest& request) const;
			RefreshUploadVideoOutcome refreshUploadVideo(const Model::RefreshUploadVideoRequest &request)const;
			void refreshUploadVideoAsync(const Model::RefreshUploadVideoRequest& request, const RefreshUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshUploadVideoOutcomeCallable refreshUploadVideoCallable(const Model::RefreshUploadVideoRequest& request) const;
			ListAIVideoPornRecogJobOutcome listAIVideoPornRecogJob(const Model::ListAIVideoPornRecogJobRequest &request)const;
			void listAIVideoPornRecogJobAsync(const Model::ListAIVideoPornRecogJobRequest& request, const ListAIVideoPornRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoPornRecogJobOutcomeCallable listAIVideoPornRecogJobCallable(const Model::ListAIVideoPornRecogJobRequest& request) const;
			GetEditingProjectOutcome getEditingProject(const Model::GetEditingProjectRequest &request)const;
			void getEditingProjectAsync(const Model::GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectOutcomeCallable getEditingProjectCallable(const Model::GetEditingProjectRequest& request) const;
			SubmitAIVideoCensorJobOutcome submitAIVideoCensorJob(const Model::SubmitAIVideoCensorJobRequest &request)const;
			void submitAIVideoCensorJobAsync(const Model::SubmitAIVideoCensorJobRequest& request, const SubmitAIVideoCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoCensorJobOutcomeCallable submitAIVideoCensorJobCallable(const Model::SubmitAIVideoCensorJobRequest& request) const;
			DeleteEditingProjectOutcome deleteEditingProject(const Model::DeleteEditingProjectRequest &request)const;
			void deleteEditingProjectAsync(const Model::DeleteEditingProjectRequest& request, const DeleteEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectOutcomeCallable deleteEditingProjectCallable(const Model::DeleteEditingProjectRequest& request) const;
			CreateAuditOutcome createAudit(const Model::CreateAuditRequest &request)const;
			void createAuditAsync(const Model::CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuditOutcomeCallable createAuditCallable(const Model::CreateAuditRequest& request) const;
			SubmitAIVideoTerrorismRecogJobOutcome submitAIVideoTerrorismRecogJob(const Model::SubmitAIVideoTerrorismRecogJobRequest &request)const;
			void submitAIVideoTerrorismRecogJobAsync(const Model::SubmitAIVideoTerrorismRecogJobRequest& request, const SubmitAIVideoTerrorismRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoTerrorismRecogJobOutcomeCallable submitAIVideoTerrorismRecogJobCallable(const Model::SubmitAIVideoTerrorismRecogJobRequest& request) const;
			SearchEditingProjectOutcome searchEditingProject(const Model::SearchEditingProjectRequest &request)const;
			void searchEditingProjectAsync(const Model::SearchEditingProjectRequest& request, const SearchEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchEditingProjectOutcomeCallable searchEditingProjectCallable(const Model::SearchEditingProjectRequest& request) const;
			GetWatermarkOutcome getWatermark(const Model::GetWatermarkRequest &request)const;
			void getWatermarkAsync(const Model::GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWatermarkOutcomeCallable getWatermarkCallable(const Model::GetWatermarkRequest& request) const;
			UpdateWatermarkOutcome updateWatermark(const Model::UpdateWatermarkRequest &request)const;
			void updateWatermarkAsync(const Model::UpdateWatermarkRequest& request, const UpdateWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWatermarkOutcomeCallable updateWatermarkCallable(const Model::UpdateWatermarkRequest& request) const;
			GetImageInfoOutcome getImageInfo(const Model::GetImageInfoRequest &request)const;
			void getImageInfoAsync(const Model::GetImageInfoRequest& request, const GetImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageInfoOutcomeCallable getImageInfoCallable(const Model::GetImageInfoRequest& request) const;
			ListWorkFlowOutcome listWorkFlow(const Model::ListWorkFlowRequest &request)const;
			void listWorkFlowAsync(const Model::ListWorkFlowRequest& request, const ListWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkFlowOutcomeCallable listWorkFlowCallable(const Model::ListWorkFlowRequest& request) const;
			GetMessageCallbackOutcome getMessageCallback(const Model::GetMessageCallbackRequest &request)const;
			void getMessageCallbackAsync(const Model::GetMessageCallbackRequest& request, const GetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageCallbackOutcomeCallable getMessageCallbackCallable(const Model::GetMessageCallbackRequest& request) const;
			ListLiveRecordVideoOutcome listLiveRecordVideo(const Model::ListLiveRecordVideoRequest &request)const;
			void listLiveRecordVideoAsync(const Model::ListLiveRecordVideoRequest& request, const ListLiveRecordVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordVideoOutcomeCallable listLiveRecordVideoCallable(const Model::ListLiveRecordVideoRequest& request) const;
			UpdateVodTemplateOutcome updateVodTemplate(const Model::UpdateVodTemplateRequest &request)const;
			void updateVodTemplateAsync(const Model::UpdateVodTemplateRequest& request, const UpdateVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVodTemplateOutcomeCallable updateVodTemplateCallable(const Model::UpdateVodTemplateRequest& request) const;
			ListAIVideoCategoryJobOutcome listAIVideoCategoryJob(const Model::ListAIVideoCategoryJobRequest &request)const;
			void listAIVideoCategoryJobAsync(const Model::ListAIVideoCategoryJobRequest& request, const ListAIVideoCategoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoCategoryJobOutcomeCallable listAIVideoCategoryJobCallable(const Model::ListAIVideoCategoryJobRequest& request) const;
			GetCategoriesOutcome getCategories(const Model::GetCategoriesRequest &request)const;
			void getCategoriesAsync(const Model::GetCategoriesRequest& request, const GetCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCategoriesOutcomeCallable getCategoriesCallable(const Model::GetCategoriesRequest& request) const;
			DescribePlayVideoStatisOutcome describePlayVideoStatis(const Model::DescribePlayVideoStatisRequest &request)const;
			void describePlayVideoStatisAsync(const Model::DescribePlayVideoStatisRequest& request, const DescribePlayVideoStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayVideoStatisOutcomeCallable describePlayVideoStatisCallable(const Model::DescribePlayVideoStatisRequest& request) const;
			DeleteStreamOutcome deleteStream(const Model::DeleteStreamRequest &request)const;
			void deleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStreamOutcomeCallable deleteStreamCallable(const Model::DeleteStreamRequest& request) const;
			UpdateWorkFlowOutcome updateWorkFlow(const Model::UpdateWorkFlowRequest &request)const;
			void updateWorkFlowAsync(const Model::UpdateWorkFlowRequest& request, const UpdateWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkFlowOutcomeCallable updateWorkFlowCallable(const Model::UpdateWorkFlowRequest& request) const;
			UploadMediaByURLOutcome uploadMediaByURL(const Model::UploadMediaByURLRequest &request)const;
			void uploadMediaByURLAsync(const Model::UploadMediaByURLRequest& request, const UploadMediaByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMediaByURLOutcomeCallable uploadMediaByURLCallable(const Model::UploadMediaByURLRequest& request) const;
			SubmitAIJobOutcome submitAIJob(const Model::SubmitAIJobRequest &request)const;
			void submitAIJobAsync(const Model::SubmitAIJobRequest& request, const SubmitAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIJobOutcomeCallable submitAIJobCallable(const Model::SubmitAIJobRequest& request) const;
			ListAIVideoCoverJobOutcome listAIVideoCoverJob(const Model::ListAIVideoCoverJobRequest &request)const;
			void listAIVideoCoverJobAsync(const Model::ListAIVideoCoverJobRequest& request, const ListAIVideoCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIVideoCoverJobOutcomeCallable listAIVideoCoverJobCallable(const Model::ListAIVideoCoverJobRequest& request) const;
			SubmitAIASRJobOutcome submitAIASRJob(const Model::SubmitAIASRJobRequest &request)const;
			void submitAIASRJobAsync(const Model::SubmitAIASRJobRequest& request, const SubmitAIASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIASRJobOutcomeCallable submitAIASRJobCallable(const Model::SubmitAIASRJobRequest& request) const;
			GetPlayInfoOutcome getPlayInfo(const Model::GetPlayInfoRequest &request)const;
			void getPlayInfoAsync(const Model::GetPlayInfoRequest& request, const GetPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPlayInfoOutcomeCallable getPlayInfoCallable(const Model::GetPlayInfoRequest& request) const;
			GetWorkFlowOutcome getWorkFlow(const Model::GetWorkFlowRequest &request)const;
			void getWorkFlowAsync(const Model::GetWorkFlowRequest& request, const GetWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkFlowOutcomeCallable getWorkFlowCallable(const Model::GetWorkFlowRequest& request) const;
			SubmitTranscodeJobsOutcome submitTranscodeJobs(const Model::SubmitTranscodeJobsRequest &request)const;
			void submitTranscodeJobsAsync(const Model::SubmitTranscodeJobsRequest& request, const SubmitTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTranscodeJobsOutcomeCallable submitTranscodeJobsCallable(const Model::SubmitTranscodeJobsRequest& request) const;
			AddWorkFlowOutcome addWorkFlow(const Model::AddWorkFlowRequest &request)const;
			void addWorkFlowAsync(const Model::AddWorkFlowRequest& request, const AddWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWorkFlowOutcomeCallable addWorkFlowCallable(const Model::AddWorkFlowRequest& request) const;
			CreateUploadVideoOutcome createUploadVideo(const Model::CreateUploadVideoRequest &request)const;
			void createUploadVideoAsync(const Model::CreateUploadVideoRequest& request, const CreateUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadVideoOutcomeCallable createUploadVideoCallable(const Model::CreateUploadVideoRequest& request) const;
			GetOSSStatisOutcome getOSSStatis(const Model::GetOSSStatisRequest &request)const;
			void getOSSStatisAsync(const Model::GetOSSStatisRequest& request, const GetOSSStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOSSStatisOutcomeCallable getOSSStatisCallable(const Model::GetOSSStatisRequest& request) const;
			SetAuditSecurityIpOutcome setAuditSecurityIp(const Model::SetAuditSecurityIpRequest &request)const;
			void setAuditSecurityIpAsync(const Model::SetAuditSecurityIpRequest& request, const SetAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAuditSecurityIpOutcomeCallable setAuditSecurityIpCallable(const Model::SetAuditSecurityIpRequest& request) const;
			DeleteMezzaninesOutcome deleteMezzanines(const Model::DeleteMezzaninesRequest &request)const;
			void deleteMezzaninesAsync(const Model::DeleteMezzaninesRequest& request, const DeleteMezzaninesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMezzaninesOutcomeCallable deleteMezzaninesCallable(const Model::DeleteMezzaninesRequest& request) const;
			AddEditingProjectOutcome addEditingProject(const Model::AddEditingProjectRequest &request)const;
			void addEditingProjectAsync(const Model::AddEditingProjectRequest& request, const AddEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEditingProjectOutcomeCallable addEditingProjectCallable(const Model::AddEditingProjectRequest& request) const;
			SubmitAIVideoSummaryJobOutcome submitAIVideoSummaryJob(const Model::SubmitAIVideoSummaryJobRequest &request)const;
			void submitAIVideoSummaryJobAsync(const Model::SubmitAIVideoSummaryJobRequest& request, const SubmitAIVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoSummaryJobOutcomeCallable submitAIVideoSummaryJobCallable(const Model::SubmitAIVideoSummaryJobRequest& request) const;
			DescribeCdnDomainLogsOutcome describeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request)const;
			void describeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainLogsOutcomeCallable describeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request) const;
			DescribeDomainFlowDataOutcome describeDomainFlowData(const Model::DescribeDomainFlowDataRequest &request)const;
			void describeDomainFlowDataAsync(const Model::DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainFlowDataOutcomeCallable describeDomainFlowDataCallable(const Model::DescribeDomainFlowDataRequest& request) const;
			SubmitAIVideoPornRecogJobOutcome submitAIVideoPornRecogJob(const Model::SubmitAIVideoPornRecogJobRequest &request)const;
			void submitAIVideoPornRecogJobAsync(const Model::SubmitAIVideoPornRecogJobRequest& request, const SubmitAIVideoPornRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoPornRecogJobOutcomeCallable submitAIVideoPornRecogJobCallable(const Model::SubmitAIVideoPornRecogJobRequest& request) const;
			SetEditingProjectMaterialsOutcome setEditingProjectMaterials(const Model::SetEditingProjectMaterialsRequest &request)const;
			void setEditingProjectMaterialsAsync(const Model::SetEditingProjectMaterialsRequest& request, const SetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEditingProjectMaterialsOutcomeCallable setEditingProjectMaterialsCallable(const Model::SetEditingProjectMaterialsRequest& request) const;
			GetMezzanineInfoOutcome getMezzanineInfo(const Model::GetMezzanineInfoRequest &request)const;
			void getMezzanineInfoAsync(const Model::GetMezzanineInfoRequest& request, const GetMezzanineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMezzanineInfoOutcomeCallable getMezzanineInfoCallable(const Model::GetMezzanineInfoRequest& request) const;
			DeleteVideoOutcome deleteVideo(const Model::DeleteVideoRequest &request)const;
			void deleteVideoAsync(const Model::DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoOutcomeCallable deleteVideoCallable(const Model::DeleteVideoRequest& request) const;
			AddVodTemplateOutcome addVodTemplate(const Model::AddVodTemplateRequest &request)const;
			void addVodTemplateAsync(const Model::AddVodTemplateRequest& request, const AddVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodTemplateOutcomeCallable addVodTemplateCallable(const Model::AddVodTemplateRequest& request) const;
			SubmitAIVideoCoverJobOutcome submitAIVideoCoverJob(const Model::SubmitAIVideoCoverJobRequest &request)const;
			void submitAIVideoCoverJobAsync(const Model::SubmitAIVideoCoverJobRequest& request, const SubmitAIVideoCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIVideoCoverJobOutcomeCallable submitAIVideoCoverJobCallable(const Model::SubmitAIVideoCoverJobRequest& request) const;
			DescribePlayUserAvgOutcome describePlayUserAvg(const Model::DescribePlayUserAvgRequest &request)const;
			void describePlayUserAvgAsync(const Model::DescribePlayUserAvgRequest& request, const DescribePlayUserAvgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayUserAvgOutcomeCallable describePlayUserAvgCallable(const Model::DescribePlayUserAvgRequest& request) const;
			GetVodTemplateOutcome getVodTemplate(const Model::GetVodTemplateRequest &request)const;
			void getVodTemplateAsync(const Model::GetVodTemplateRequest& request, const GetVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVodTemplateOutcomeCallable getVodTemplateCallable(const Model::GetVodTemplateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VOD_VODCLIENT_H_
