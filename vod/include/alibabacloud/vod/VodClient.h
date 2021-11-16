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
#include "model/AddAITemplateRequest.h"
#include "model/AddAITemplateResult.h"
#include "model/AddCategoryRequest.h"
#include "model/AddCategoryResult.h"
#include "model/AddEditingProjectRequest.h"
#include "model/AddEditingProjectResult.h"
#include "model/AddTranscodeTemplateGroupRequest.h"
#include "model/AddTranscodeTemplateGroupResult.h"
#include "model/AddVodDomainRequest.h"
#include "model/AddVodDomainResult.h"
#include "model/AddVodTemplateRequest.h"
#include "model/AddVodTemplateResult.h"
#include "model/AddWatermarkRequest.h"
#include "model/AddWatermarkResult.h"
#include "model/AttachAppPolicyToIdentityRequest.h"
#include "model/AttachAppPolicyToIdentityResult.h"
#include "model/BatchSetVodDomainConfigsRequest.h"
#include "model/BatchSetVodDomainConfigsResult.h"
#include "model/BatchStartVodDomainRequest.h"
#include "model/BatchStartVodDomainResult.h"
#include "model/BatchStopVodDomainRequest.h"
#include "model/BatchStopVodDomainResult.h"
#include "model/CancelUrlUploadJobsRequest.h"
#include "model/CancelUrlUploadJobsResult.h"
#include "model/CreateAppInfoRequest.h"
#include "model/CreateAppInfoResult.h"
#include "model/CreateAuditRequest.h"
#include "model/CreateAuditResult.h"
#include "model/CreateDetectionTemplateRequest.h"
#include "model/CreateDetectionTemplateResult.h"
#include "model/CreateUploadAttachedMediaRequest.h"
#include "model/CreateUploadAttachedMediaResult.h"
#include "model/CreateUploadImageRequest.h"
#include "model/CreateUploadImageResult.h"
#include "model/CreateUploadVideoRequest.h"
#include "model/CreateUploadVideoResult.h"
#include "model/CreateVodRealTimeLogDeliveryRequest.h"
#include "model/CreateVodRealTimeLogDeliveryResult.h"
#include "model/DeleteAIImageInfosRequest.h"
#include "model/DeleteAIImageInfosResult.h"
#include "model/DeleteAITemplateRequest.h"
#include "model/DeleteAITemplateResult.h"
#include "model/DeleteAppInfoRequest.h"
#include "model/DeleteAppInfoResult.h"
#include "model/DeleteAttachedMediaRequest.h"
#include "model/DeleteAttachedMediaResult.h"
#include "model/DeleteCategoryRequest.h"
#include "model/DeleteCategoryResult.h"
#include "model/DeleteDetectionTemplateRequest.h"
#include "model/DeleteDetectionTemplateResult.h"
#include "model/DeleteDynamicImageRequest.h"
#include "model/DeleteDynamicImageResult.h"
#include "model/DeleteEditingProjectRequest.h"
#include "model/DeleteEditingProjectResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteMessageCallbackRequest.h"
#include "model/DeleteMessageCallbackResult.h"
#include "model/DeleteMezzaninesRequest.h"
#include "model/DeleteMezzaninesResult.h"
#include "model/DeleteMultipartUploadRequest.h"
#include "model/DeleteMultipartUploadResult.h"
#include "model/DeleteStreamRequest.h"
#include "model/DeleteStreamResult.h"
#include "model/DeleteTranscodeTemplateGroupRequest.h"
#include "model/DeleteTranscodeTemplateGroupResult.h"
#include "model/DeleteVideoRequest.h"
#include "model/DeleteVideoResult.h"
#include "model/DeleteVodDomainRequest.h"
#include "model/DeleteVodDomainResult.h"
#include "model/DeleteVodRealtimeLogDeliveryRequest.h"
#include "model/DeleteVodRealtimeLogDeliveryResult.h"
#include "model/DeleteVodSpecificConfigRequest.h"
#include "model/DeleteVodSpecificConfigResult.h"
#include "model/DeleteVodTemplateRequest.h"
#include "model/DeleteVodTemplateResult.h"
#include "model/DeleteWatermarkRequest.h"
#include "model/DeleteWatermarkResult.h"
#include "model/DescribePlayTopVideosRequest.h"
#include "model/DescribePlayTopVideosResult.h"
#include "model/DescribePlayUserAvgRequest.h"
#include "model/DescribePlayUserAvgResult.h"
#include "model/DescribePlayUserTotalRequest.h"
#include "model/DescribePlayUserTotalResult.h"
#include "model/DescribePlayVideoStatisRequest.h"
#include "model/DescribePlayVideoStatisResult.h"
#include "model/DescribeVodAIDataRequest.h"
#include "model/DescribeVodAIDataResult.h"
#include "model/DescribeVodCertificateListRequest.h"
#include "model/DescribeVodCertificateListResult.h"
#include "model/DescribeVodDomainBpsDataRequest.h"
#include "model/DescribeVodDomainBpsDataResult.h"
#include "model/DescribeVodDomainCertificateInfoRequest.h"
#include "model/DescribeVodDomainCertificateInfoResult.h"
#include "model/DescribeVodDomainConfigsRequest.h"
#include "model/DescribeVodDomainConfigsResult.h"
#include "model/DescribeVodDomainDetailRequest.h"
#include "model/DescribeVodDomainDetailResult.h"
#include "model/DescribeVodDomainLogRequest.h"
#include "model/DescribeVodDomainLogResult.h"
#include "model/DescribeVodDomainRealtimeLogDeliveryRequest.h"
#include "model/DescribeVodDomainRealtimeLogDeliveryResult.h"
#include "model/DescribeVodDomainTrafficDataRequest.h"
#include "model/DescribeVodDomainTrafficDataResult.h"
#include "model/DescribeVodDomainUsageDataRequest.h"
#include "model/DescribeVodDomainUsageDataResult.h"
#include "model/DescribeVodRefreshQuotaRequest.h"
#include "model/DescribeVodRefreshQuotaResult.h"
#include "model/DescribeVodRefreshTasksRequest.h"
#include "model/DescribeVodRefreshTasksResult.h"
#include "model/DescribeVodStorageDataRequest.h"
#include "model/DescribeVodStorageDataResult.h"
#include "model/DescribeVodTagResourcesRequest.h"
#include "model/DescribeVodTagResourcesResult.h"
#include "model/DescribeVodTranscodeDataRequest.h"
#include "model/DescribeVodTranscodeDataResult.h"
#include "model/DescribeVodUserDomainsRequest.h"
#include "model/DescribeVodUserDomainsResult.h"
#include "model/DescribeVodUserTagsRequest.h"
#include "model/DescribeVodUserTagsResult.h"
#include "model/DescribeVodVerifyContentRequest.h"
#include "model/DescribeVodVerifyContentResult.h"
#include "model/DetachAppPolicyFromIdentityRequest.h"
#include "model/DetachAppPolicyFromIdentityResult.h"
#include "model/DisableVodRealtimeLogDeliveryRequest.h"
#include "model/DisableVodRealtimeLogDeliveryResult.h"
#include "model/EnableVodRealtimeLogDeliveryRequest.h"
#include "model/EnableVodRealtimeLogDeliveryResult.h"
#include "model/GetAICaptionExtractionJobsRequest.h"
#include "model/GetAICaptionExtractionJobsResult.h"
#include "model/GetAIImageJobsRequest.h"
#include "model/GetAIImageJobsResult.h"
#include "model/GetAIMediaAuditJobRequest.h"
#include "model/GetAIMediaAuditJobResult.h"
#include "model/GetAITemplateRequest.h"
#include "model/GetAITemplateResult.h"
#include "model/GetAIVideoTagResultRequest.h"
#include "model/GetAIVideoTagResultResult.h"
#include "model/GetAppInfosRequest.h"
#include "model/GetAppInfosResult.h"
#include "model/GetAttachedMediaInfoRequest.h"
#include "model/GetAttachedMediaInfoResult.h"
#include "model/GetAuditHistoryRequest.h"
#include "model/GetAuditHistoryResult.h"
#include "model/GetCategoriesRequest.h"
#include "model/GetCategoriesResult.h"
#include "model/GetDefaultAITemplateRequest.h"
#include "model/GetDefaultAITemplateResult.h"
#include "model/GetDetectionJobRequest.h"
#include "model/GetDetectionJobResult.h"
#include "model/GetDetectionResultRequest.h"
#include "model/GetDetectionResultResult.h"
#include "model/GetDetectionTemplateRequest.h"
#include "model/GetDetectionTemplateResult.h"
#include "model/GetEditingProjectRequest.h"
#include "model/GetEditingProjectResult.h"
#include "model/GetEditingProjectMaterialsRequest.h"
#include "model/GetEditingProjectMaterialsResult.h"
#include "model/GetImageInfoRequest.h"
#include "model/GetImageInfoResult.h"
#include "model/GetMediaAuditAudioResultDetailRequest.h"
#include "model/GetMediaAuditAudioResultDetailResult.h"
#include "model/GetMediaAuditResultRequest.h"
#include "model/GetMediaAuditResultResult.h"
#include "model/GetMediaAuditResultDetailRequest.h"
#include "model/GetMediaAuditResultDetailResult.h"
#include "model/GetMediaAuditResultTimelineRequest.h"
#include "model/GetMediaAuditResultTimelineResult.h"
#include "model/GetMediaDNAResultRequest.h"
#include "model/GetMediaDNAResultResult.h"
#include "model/GetMessageCallbackRequest.h"
#include "model/GetMessageCallbackResult.h"
#include "model/GetMezzanineInfoRequest.h"
#include "model/GetMezzanineInfoResult.h"
#include "model/GetPlayInfoRequest.h"
#include "model/GetPlayInfoResult.h"
#include "model/GetTranscodeSummaryRequest.h"
#include "model/GetTranscodeSummaryResult.h"
#include "model/GetTranscodeTaskRequest.h"
#include "model/GetTranscodeTaskResult.h"
#include "model/GetTranscodeTemplateGroupRequest.h"
#include "model/GetTranscodeTemplateGroupResult.h"
#include "model/GetURLUploadInfosRequest.h"
#include "model/GetURLUploadInfosResult.h"
#include "model/GetUploadDetailsRequest.h"
#include "model/GetUploadDetailsResult.h"
#include "model/GetVideoInfoRequest.h"
#include "model/GetVideoInfoResult.h"
#include "model/GetVideoInfosRequest.h"
#include "model/GetVideoInfosResult.h"
#include "model/GetVideoListRequest.h"
#include "model/GetVideoListResult.h"
#include "model/GetVideoPlayAuthRequest.h"
#include "model/GetVideoPlayAuthResult.h"
#include "model/GetVodTemplateRequest.h"
#include "model/GetVodTemplateResult.h"
#include "model/GetWatermarkRequest.h"
#include "model/GetWatermarkResult.h"
#include "model/ListAIImageInfoRequest.h"
#include "model/ListAIImageInfoResult.h"
#include "model/ListAIJobRequest.h"
#include "model/ListAIJobResult.h"
#include "model/ListAITemplateRequest.h"
#include "model/ListAITemplateResult.h"
#include "model/ListAppInfoRequest.h"
#include "model/ListAppInfoResult.h"
#include "model/ListAppPoliciesForIdentityRequest.h"
#include "model/ListAppPoliciesForIdentityResult.h"
#include "model/ListAuditSecurityIpRequest.h"
#include "model/ListAuditSecurityIpResult.h"
#include "model/ListDetectionJobRequest.h"
#include "model/ListDetectionJobResult.h"
#include "model/ListDetectionTemplateRequest.h"
#include "model/ListDetectionTemplateResult.h"
#include "model/ListDynamicImageRequest.h"
#include "model/ListDynamicImageResult.h"
#include "model/ListLetterSendJobRequest.h"
#include "model/ListLetterSendJobResult.h"
#include "model/ListLiveRecordVideoRequest.h"
#include "model/ListLiveRecordVideoResult.h"
#include "model/ListMediaDNADeleteJobRequest.h"
#include "model/ListMediaDNADeleteJobResult.h"
#include "model/ListSnapshotsRequest.h"
#include "model/ListSnapshotsResult.h"
#include "model/ListTranscodeTaskRequest.h"
#include "model/ListTranscodeTaskResult.h"
#include "model/ListTranscodeTemplateGroupRequest.h"
#include "model/ListTranscodeTemplateGroupResult.h"
#include "model/ListVodRealtimeLogDeliveryDomainsRequest.h"
#include "model/ListVodRealtimeLogDeliveryDomainsResult.h"
#include "model/ListVodRealtimeLogDeliveryInfosRequest.h"
#include "model/ListVodRealtimeLogDeliveryInfosResult.h"
#include "model/ListVodTemplateRequest.h"
#include "model/ListVodTemplateResult.h"
#include "model/ListWatermarkRequest.h"
#include "model/ListWatermarkResult.h"
#include "model/MoveAppResourceRequest.h"
#include "model/MoveAppResourceResult.h"
#include "model/PreloadVodObjectCachesRequest.h"
#include "model/PreloadVodObjectCachesResult.h"
#include "model/ProduceEditingProjectVideoRequest.h"
#include "model/ProduceEditingProjectVideoResult.h"
#include "model/RefreshUploadVideoRequest.h"
#include "model/RefreshUploadVideoResult.h"
#include "model/RefreshVodObjectCachesRequest.h"
#include "model/RefreshVodObjectCachesResult.h"
#include "model/RegisterMediaRequest.h"
#include "model/RegisterMediaResult.h"
#include "model/SearchEditingProjectRequest.h"
#include "model/SearchEditingProjectResult.h"
#include "model/SearchMediaRequest.h"
#include "model/SearchMediaResult.h"
#include "model/SetAuditSecurityIpRequest.h"
#include "model/SetAuditSecurityIpResult.h"
#include "model/SetCrossdomainContentRequest.h"
#include "model/SetCrossdomainContentResult.h"
#include "model/SetDefaultAITemplateRequest.h"
#include "model/SetDefaultAITemplateResult.h"
#include "model/SetDefaultTranscodeTemplateGroupRequest.h"
#include "model/SetDefaultTranscodeTemplateGroupResult.h"
#include "model/SetDefaultWatermarkRequest.h"
#include "model/SetDefaultWatermarkResult.h"
#include "model/SetEditingProjectMaterialsRequest.h"
#include "model/SetEditingProjectMaterialsResult.h"
#include "model/SetMessageCallbackRequest.h"
#include "model/SetMessageCallbackResult.h"
#include "model/SetVodDomainCertificateRequest.h"
#include "model/SetVodDomainCertificateResult.h"
#include "model/SubmitAICaptionExtractionJobRequest.h"
#include "model/SubmitAICaptionExtractionJobResult.h"
#include "model/SubmitAIImageAuditJobRequest.h"
#include "model/SubmitAIImageAuditJobResult.h"
#include "model/SubmitAIImageJobRequest.h"
#include "model/SubmitAIImageJobResult.h"
#include "model/SubmitAIJobRequest.h"
#include "model/SubmitAIJobResult.h"
#include "model/SubmitAIMediaAuditJobRequest.h"
#include "model/SubmitAIMediaAuditJobResult.h"
#include "model/SubmitDetectionJobRequest.h"
#include "model/SubmitDetectionJobResult.h"
#include "model/SubmitDynamicImageJobRequest.h"
#include "model/SubmitDynamicImageJobResult.h"
#include "model/SubmitLiveEditingRequest.h"
#include "model/SubmitLiveEditingResult.h"
#include "model/SubmitMediaDNADeleteJobRequest.h"
#include "model/SubmitMediaDNADeleteJobResult.h"
#include "model/SubmitPreprocessJobsRequest.h"
#include "model/SubmitPreprocessJobsResult.h"
#include "model/SubmitSnapshotJobRequest.h"
#include "model/SubmitSnapshotJobResult.h"
#include "model/SubmitTranscodeJobsRequest.h"
#include "model/SubmitTranscodeJobsResult.h"
#include "model/SubmitWorkflowJobRequest.h"
#include "model/SubmitWorkflowJobResult.h"
#include "model/TagVodResourcesRequest.h"
#include "model/TagVodResourcesResult.h"
#include "model/UnTagVodResourcesRequest.h"
#include "model/UnTagVodResourcesResult.h"
#include "model/UpdateAITemplateRequest.h"
#include "model/UpdateAITemplateResult.h"
#include "model/UpdateAppInfoRequest.h"
#include "model/UpdateAppInfoResult.h"
#include "model/UpdateAttachedMediaInfosRequest.h"
#include "model/UpdateAttachedMediaInfosResult.h"
#include "model/UpdateCategoryRequest.h"
#include "model/UpdateCategoryResult.h"
#include "model/UpdateDetectionJobRequest.h"
#include "model/UpdateDetectionJobResult.h"
#include "model/UpdateDetectionTemplateRequest.h"
#include "model/UpdateDetectionTemplateResult.h"
#include "model/UpdateEditingProjectRequest.h"
#include "model/UpdateEditingProjectResult.h"
#include "model/UpdateImageInfosRequest.h"
#include "model/UpdateImageInfosResult.h"
#include "model/UpdateStreamInfoRequest.h"
#include "model/UpdateStreamInfoResult.h"
#include "model/UpdateTranscodeTemplateGroupRequest.h"
#include "model/UpdateTranscodeTemplateGroupResult.h"
#include "model/UpdateVideoInfoRequest.h"
#include "model/UpdateVideoInfoResult.h"
#include "model/UpdateVideoInfosRequest.h"
#include "model/UpdateVideoInfosResult.h"
#include "model/UpdateVodDomainRequest.h"
#include "model/UpdateVodDomainResult.h"
#include "model/UpdateVodTemplateRequest.h"
#include "model/UpdateVodTemplateResult.h"
#include "model/UpdateWatermarkRequest.h"
#include "model/UpdateWatermarkResult.h"
#include "model/UploadMediaByURLRequest.h"
#include "model/UploadMediaByURLResult.h"
#include "model/UploadStreamByURLRequest.h"
#include "model/UploadStreamByURLResult.h"
#include "model/VerifyVodDomainOwnerRequest.h"
#include "model/VerifyVodDomainOwnerResult.h"


namespace AlibabaCloud
{
	namespace Vod
	{
		class ALIBABACLOUD_VOD_EXPORT VodClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAITemplateResult> AddAITemplateOutcome;
			typedef std::future<AddAITemplateOutcome> AddAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddAITemplateRequest&, const AddAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAITemplateAsyncHandler;
			typedef Outcome<Error, Model::AddCategoryResult> AddCategoryOutcome;
			typedef std::future<AddCategoryOutcome> AddCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddCategoryRequest&, const AddCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCategoryAsyncHandler;
			typedef Outcome<Error, Model::AddEditingProjectResult> AddEditingProjectOutcome;
			typedef std::future<AddEditingProjectOutcome> AddEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddEditingProjectRequest&, const AddEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::AddTranscodeTemplateGroupResult> AddTranscodeTemplateGroupOutcome;
			typedef std::future<AddTranscodeTemplateGroupOutcome> AddTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddTranscodeTemplateGroupRequest&, const AddTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::AddVodDomainResult> AddVodDomainOutcome;
			typedef std::future<AddVodDomainOutcome> AddVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodDomainRequest&, const AddVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodDomainAsyncHandler;
			typedef Outcome<Error, Model::AddVodTemplateResult> AddVodTemplateOutcome;
			typedef std::future<AddVodTemplateOutcome> AddVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodTemplateRequest&, const AddVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddWatermarkResult> AddWatermarkOutcome;
			typedef std::future<AddWatermarkOutcome> AddWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddWatermarkRequest&, const AddWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWatermarkAsyncHandler;
			typedef Outcome<Error, Model::AttachAppPolicyToIdentityResult> AttachAppPolicyToIdentityOutcome;
			typedef std::future<AttachAppPolicyToIdentityOutcome> AttachAppPolicyToIdentityOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AttachAppPolicyToIdentityRequest&, const AttachAppPolicyToIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachAppPolicyToIdentityAsyncHandler;
			typedef Outcome<Error, Model::BatchSetVodDomainConfigsResult> BatchSetVodDomainConfigsOutcome;
			typedef std::future<BatchSetVodDomainConfigsOutcome> BatchSetVodDomainConfigsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::BatchSetVodDomainConfigsRequest&, const BatchSetVodDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetVodDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchStartVodDomainResult> BatchStartVodDomainOutcome;
			typedef std::future<BatchStartVodDomainOutcome> BatchStartVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::BatchStartVodDomainRequest&, const BatchStartVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartVodDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchStopVodDomainResult> BatchStopVodDomainOutcome;
			typedef std::future<BatchStopVodDomainOutcome> BatchStopVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::BatchStopVodDomainRequest&, const BatchStopVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopVodDomainAsyncHandler;
			typedef Outcome<Error, Model::CancelUrlUploadJobsResult> CancelUrlUploadJobsOutcome;
			typedef std::future<CancelUrlUploadJobsOutcome> CancelUrlUploadJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CancelUrlUploadJobsRequest&, const CancelUrlUploadJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelUrlUploadJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateAppInfoResult> CreateAppInfoOutcome;
			typedef std::future<CreateAppInfoOutcome> CreateAppInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateAppInfoRequest&, const CreateAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppInfoAsyncHandler;
			typedef Outcome<Error, Model::CreateAuditResult> CreateAuditOutcome;
			typedef std::future<CreateAuditOutcome> CreateAuditOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateAuditRequest&, const CreateAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditAsyncHandler;
			typedef Outcome<Error, Model::CreateDetectionTemplateResult> CreateDetectionTemplateOutcome;
			typedef std::future<CreateDetectionTemplateOutcome> CreateDetectionTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateDetectionTemplateRequest&, const CreateDetectionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDetectionTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadAttachedMediaResult> CreateUploadAttachedMediaOutcome;
			typedef std::future<CreateUploadAttachedMediaOutcome> CreateUploadAttachedMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadAttachedMediaRequest&, const CreateUploadAttachedMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadAttachedMediaAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadImageResult> CreateUploadImageOutcome;
			typedef std::future<CreateUploadImageOutcome> CreateUploadImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadImageRequest&, const CreateUploadImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadImageAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadVideoResult> CreateUploadVideoOutcome;
			typedef std::future<CreateUploadVideoOutcome> CreateUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadVideoRequest&, const CreateUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::CreateVodRealTimeLogDeliveryResult> CreateVodRealTimeLogDeliveryOutcome;
			typedef std::future<CreateVodRealTimeLogDeliveryOutcome> CreateVodRealTimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateVodRealTimeLogDeliveryRequest&, const CreateVodRealTimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVodRealTimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteAIImageInfosResult> DeleteAIImageInfosOutcome;
			typedef std::future<DeleteAIImageInfosOutcome> DeleteAIImageInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteAIImageInfosRequest&, const DeleteAIImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIImageInfosAsyncHandler;
			typedef Outcome<Error, Model::DeleteAITemplateResult> DeleteAITemplateOutcome;
			typedef std::future<DeleteAITemplateOutcome> DeleteAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteAITemplateRequest&, const DeleteAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAITemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppInfoResult> DeleteAppInfoOutcome;
			typedef std::future<DeleteAppInfoOutcome> DeleteAppInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteAppInfoRequest&, const DeleteAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteAttachedMediaResult> DeleteAttachedMediaOutcome;
			typedef std::future<DeleteAttachedMediaOutcome> DeleteAttachedMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteAttachedMediaRequest&, const DeleteAttachedMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttachedMediaAsyncHandler;
			typedef Outcome<Error, Model::DeleteCategoryResult> DeleteCategoryOutcome;
			typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteCategoryRequest&, const DeleteCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteDetectionTemplateResult> DeleteDetectionTemplateOutcome;
			typedef std::future<DeleteDetectionTemplateOutcome> DeleteDetectionTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteDetectionTemplateRequest&, const DeleteDetectionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDetectionTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteDynamicImageResult> DeleteDynamicImageOutcome;
			typedef std::future<DeleteDynamicImageOutcome> DeleteDynamicImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteDynamicImageRequest&, const DeleteDynamicImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDynamicImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectResult> DeleteEditingProjectOutcome;
			typedef std::future<DeleteEditingProjectOutcome> DeleteEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteEditingProjectRequest&, const DeleteEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteMessageCallbackResult> DeleteMessageCallbackOutcome;
			typedef std::future<DeleteMessageCallbackOutcome> DeleteMessageCallbackOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteMessageCallbackRequest&, const DeleteMessageCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageCallbackAsyncHandler;
			typedef Outcome<Error, Model::DeleteMezzaninesResult> DeleteMezzaninesOutcome;
			typedef std::future<DeleteMezzaninesOutcome> DeleteMezzaninesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteMezzaninesRequest&, const DeleteMezzaninesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMezzaninesAsyncHandler;
			typedef Outcome<Error, Model::DeleteMultipartUploadResult> DeleteMultipartUploadOutcome;
			typedef std::future<DeleteMultipartUploadOutcome> DeleteMultipartUploadOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteMultipartUploadRequest&, const DeleteMultipartUploadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultipartUploadAsyncHandler;
			typedef Outcome<Error, Model::DeleteStreamResult> DeleteStreamOutcome;
			typedef std::future<DeleteStreamOutcome> DeleteStreamOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteStreamRequest&, const DeleteStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteTranscodeTemplateGroupResult> DeleteTranscodeTemplateGroupOutcome;
			typedef std::future<DeleteTranscodeTemplateGroupOutcome> DeleteTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteTranscodeTemplateGroupRequest&, const DeleteTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoResult> DeleteVideoOutcome;
			typedef std::future<DeleteVideoOutcome> DeleteVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVideoRequest&, const DeleteVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodDomainResult> DeleteVodDomainOutcome;
			typedef std::future<DeleteVodDomainOutcome> DeleteVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodDomainRequest&, const DeleteVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodRealtimeLogDeliveryResult> DeleteVodRealtimeLogDeliveryOutcome;
			typedef std::future<DeleteVodRealtimeLogDeliveryOutcome> DeleteVodRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodRealtimeLogDeliveryRequest&, const DeleteVodRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodSpecificConfigResult> DeleteVodSpecificConfigOutcome;
			typedef std::future<DeleteVodSpecificConfigOutcome> DeleteVodSpecificConfigOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodSpecificConfigRequest&, const DeleteVodSpecificConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodSpecificConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodTemplateResult> DeleteVodTemplateOutcome;
			typedef std::future<DeleteVodTemplateOutcome> DeleteVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodTemplateRequest&, const DeleteVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteWatermarkResult> DeleteWatermarkOutcome;
			typedef std::future<DeleteWatermarkOutcome> DeleteWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteWatermarkRequest&, const DeleteWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayTopVideosResult> DescribePlayTopVideosOutcome;
			typedef std::future<DescribePlayTopVideosOutcome> DescribePlayTopVideosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayTopVideosRequest&, const DescribePlayTopVideosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayTopVideosAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayUserAvgResult> DescribePlayUserAvgOutcome;
			typedef std::future<DescribePlayUserAvgOutcome> DescribePlayUserAvgOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayUserAvgRequest&, const DescribePlayUserAvgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayUserAvgAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayUserTotalResult> DescribePlayUserTotalOutcome;
			typedef std::future<DescribePlayUserTotalOutcome> DescribePlayUserTotalOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayUserTotalRequest&, const DescribePlayUserTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayUserTotalAsyncHandler;
			typedef Outcome<Error, Model::DescribePlayVideoStatisResult> DescribePlayVideoStatisOutcome;
			typedef std::future<DescribePlayVideoStatisOutcome> DescribePlayVideoStatisOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribePlayVideoStatisRequest&, const DescribePlayVideoStatisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayVideoStatisAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodAIDataResult> DescribeVodAIDataOutcome;
			typedef std::future<DescribeVodAIDataOutcome> DescribeVodAIDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodAIDataRequest&, const DescribeVodAIDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodAIDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodCertificateListResult> DescribeVodCertificateListOutcome;
			typedef std::future<DescribeVodCertificateListOutcome> DescribeVodCertificateListOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodCertificateListRequest&, const DescribeVodCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainBpsDataResult> DescribeVodDomainBpsDataOutcome;
			typedef std::future<DescribeVodDomainBpsDataOutcome> DescribeVodDomainBpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainBpsDataRequest&, const DescribeVodDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainCertificateInfoResult> DescribeVodDomainCertificateInfoOutcome;
			typedef std::future<DescribeVodDomainCertificateInfoOutcome> DescribeVodDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainCertificateInfoRequest&, const DescribeVodDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainConfigsResult> DescribeVodDomainConfigsOutcome;
			typedef std::future<DescribeVodDomainConfigsOutcome> DescribeVodDomainConfigsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainConfigsRequest&, const DescribeVodDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainDetailResult> DescribeVodDomainDetailOutcome;
			typedef std::future<DescribeVodDomainDetailOutcome> DescribeVodDomainDetailOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainDetailRequest&, const DescribeVodDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainLogResult> DescribeVodDomainLogOutcome;
			typedef std::future<DescribeVodDomainLogOutcome> DescribeVodDomainLogOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainLogRequest&, const DescribeVodDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealtimeLogDeliveryResult> DescribeVodDomainRealtimeLogDeliveryOutcome;
			typedef std::future<DescribeVodDomainRealtimeLogDeliveryOutcome> DescribeVodDomainRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealtimeLogDeliveryRequest&, const DescribeVodDomainRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainTrafficDataResult> DescribeVodDomainTrafficDataOutcome;
			typedef std::future<DescribeVodDomainTrafficDataOutcome> DescribeVodDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainTrafficDataRequest&, const DescribeVodDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainUsageDataResult> DescribeVodDomainUsageDataOutcome;
			typedef std::future<DescribeVodDomainUsageDataOutcome> DescribeVodDomainUsageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainUsageDataRequest&, const DescribeVodDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodRefreshQuotaResult> DescribeVodRefreshQuotaOutcome;
			typedef std::future<DescribeVodRefreshQuotaOutcome> DescribeVodRefreshQuotaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodRefreshQuotaRequest&, const DescribeVodRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodRefreshTasksResult> DescribeVodRefreshTasksOutcome;
			typedef std::future<DescribeVodRefreshTasksOutcome> DescribeVodRefreshTasksOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodRefreshTasksRequest&, const DescribeVodRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodStorageDataResult> DescribeVodStorageDataOutcome;
			typedef std::future<DescribeVodStorageDataOutcome> DescribeVodStorageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodStorageDataRequest&, const DescribeVodStorageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodStorageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodTagResourcesResult> DescribeVodTagResourcesOutcome;
			typedef std::future<DescribeVodTagResourcesOutcome> DescribeVodTagResourcesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodTagResourcesRequest&, const DescribeVodTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodTranscodeDataResult> DescribeVodTranscodeDataOutcome;
			typedef std::future<DescribeVodTranscodeDataOutcome> DescribeVodTranscodeDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodTranscodeDataRequest&, const DescribeVodTranscodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodTranscodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodUserDomainsResult> DescribeVodUserDomainsOutcome;
			typedef std::future<DescribeVodUserDomainsOutcome> DescribeVodUserDomainsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodUserDomainsRequest&, const DescribeVodUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodUserTagsResult> DescribeVodUserTagsOutcome;
			typedef std::future<DescribeVodUserTagsOutcome> DescribeVodUserTagsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodUserTagsRequest&, const DescribeVodUserTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodUserTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodVerifyContentResult> DescribeVodVerifyContentOutcome;
			typedef std::future<DescribeVodVerifyContentOutcome> DescribeVodVerifyContentOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodVerifyContentRequest&, const DescribeVodVerifyContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodVerifyContentAsyncHandler;
			typedef Outcome<Error, Model::DetachAppPolicyFromIdentityResult> DetachAppPolicyFromIdentityOutcome;
			typedef std::future<DetachAppPolicyFromIdentityOutcome> DetachAppPolicyFromIdentityOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DetachAppPolicyFromIdentityRequest&, const DetachAppPolicyFromIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachAppPolicyFromIdentityAsyncHandler;
			typedef Outcome<Error, Model::DisableVodRealtimeLogDeliveryResult> DisableVodRealtimeLogDeliveryOutcome;
			typedef std::future<DisableVodRealtimeLogDeliveryOutcome> DisableVodRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DisableVodRealtimeLogDeliveryRequest&, const DisableVodRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVodRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::EnableVodRealtimeLogDeliveryResult> EnableVodRealtimeLogDeliveryOutcome;
			typedef std::future<EnableVodRealtimeLogDeliveryOutcome> EnableVodRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::EnableVodRealtimeLogDeliveryRequest&, const EnableVodRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVodRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::GetAICaptionExtractionJobsResult> GetAICaptionExtractionJobsOutcome;
			typedef std::future<GetAICaptionExtractionJobsOutcome> GetAICaptionExtractionJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAICaptionExtractionJobsRequest&, const GetAICaptionExtractionJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAICaptionExtractionJobsAsyncHandler;
			typedef Outcome<Error, Model::GetAIImageJobsResult> GetAIImageJobsOutcome;
			typedef std::future<GetAIImageJobsOutcome> GetAIImageJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAIImageJobsRequest&, const GetAIImageJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAIImageJobsAsyncHandler;
			typedef Outcome<Error, Model::GetAIMediaAuditJobResult> GetAIMediaAuditJobOutcome;
			typedef std::future<GetAIMediaAuditJobOutcome> GetAIMediaAuditJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAIMediaAuditJobRequest&, const GetAIMediaAuditJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAIMediaAuditJobAsyncHandler;
			typedef Outcome<Error, Model::GetAITemplateResult> GetAITemplateOutcome;
			typedef std::future<GetAITemplateOutcome> GetAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAITemplateRequest&, const GetAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAITemplateAsyncHandler;
			typedef Outcome<Error, Model::GetAIVideoTagResultResult> GetAIVideoTagResultOutcome;
			typedef std::future<GetAIVideoTagResultOutcome> GetAIVideoTagResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAIVideoTagResultRequest&, const GetAIVideoTagResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAIVideoTagResultAsyncHandler;
			typedef Outcome<Error, Model::GetAppInfosResult> GetAppInfosOutcome;
			typedef std::future<GetAppInfosOutcome> GetAppInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAppInfosRequest&, const GetAppInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppInfosAsyncHandler;
			typedef Outcome<Error, Model::GetAttachedMediaInfoResult> GetAttachedMediaInfoOutcome;
			typedef std::future<GetAttachedMediaInfoOutcome> GetAttachedMediaInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAttachedMediaInfoRequest&, const GetAttachedMediaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAttachedMediaInfoAsyncHandler;
			typedef Outcome<Error, Model::GetAuditHistoryResult> GetAuditHistoryOutcome;
			typedef std::future<GetAuditHistoryOutcome> GetAuditHistoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetAuditHistoryRequest&, const GetAuditHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuditHistoryAsyncHandler;
			typedef Outcome<Error, Model::GetCategoriesResult> GetCategoriesOutcome;
			typedef std::future<GetCategoriesOutcome> GetCategoriesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetCategoriesRequest&, const GetCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCategoriesAsyncHandler;
			typedef Outcome<Error, Model::GetDefaultAITemplateResult> GetDefaultAITemplateOutcome;
			typedef std::future<GetDefaultAITemplateOutcome> GetDefaultAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDefaultAITemplateRequest&, const GetDefaultAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDefaultAITemplateAsyncHandler;
			typedef Outcome<Error, Model::GetDetectionJobResult> GetDetectionJobOutcome;
			typedef std::future<GetDetectionJobOutcome> GetDetectionJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDetectionJobRequest&, const GetDetectionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectionJobAsyncHandler;
			typedef Outcome<Error, Model::GetDetectionResultResult> GetDetectionResultOutcome;
			typedef std::future<GetDetectionResultOutcome> GetDetectionResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDetectionResultRequest&, const GetDetectionResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectionResultAsyncHandler;
			typedef Outcome<Error, Model::GetDetectionTemplateResult> GetDetectionTemplateOutcome;
			typedef std::future<GetDetectionTemplateOutcome> GetDetectionTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDetectionTemplateRequest&, const GetDetectionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectionTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectResult> GetEditingProjectOutcome;
			typedef std::future<GetEditingProjectOutcome> GetEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectRequest&, const GetEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectMaterialsResult> GetEditingProjectMaterialsOutcome;
			typedef std::future<GetEditingProjectMaterialsOutcome> GetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectMaterialsRequest&, const GetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetImageInfoResult> GetImageInfoOutcome;
			typedef std::future<GetImageInfoOutcome> GetImageInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetImageInfoRequest&, const GetImageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMediaAuditAudioResultDetailResult> GetMediaAuditAudioResultDetailOutcome;
			typedef std::future<GetMediaAuditAudioResultDetailOutcome> GetMediaAuditAudioResultDetailOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaAuditAudioResultDetailRequest&, const GetMediaAuditAudioResultDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaAuditAudioResultDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMediaAuditResultResult> GetMediaAuditResultOutcome;
			typedef std::future<GetMediaAuditResultOutcome> GetMediaAuditResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaAuditResultRequest&, const GetMediaAuditResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaAuditResultAsyncHandler;
			typedef Outcome<Error, Model::GetMediaAuditResultDetailResult> GetMediaAuditResultDetailOutcome;
			typedef std::future<GetMediaAuditResultDetailOutcome> GetMediaAuditResultDetailOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaAuditResultDetailRequest&, const GetMediaAuditResultDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaAuditResultDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMediaAuditResultTimelineResult> GetMediaAuditResultTimelineOutcome;
			typedef std::future<GetMediaAuditResultTimelineOutcome> GetMediaAuditResultTimelineOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaAuditResultTimelineRequest&, const GetMediaAuditResultTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaAuditResultTimelineAsyncHandler;
			typedef Outcome<Error, Model::GetMediaDNAResultResult> GetMediaDNAResultOutcome;
			typedef std::future<GetMediaDNAResultOutcome> GetMediaDNAResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaDNAResultRequest&, const GetMediaDNAResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaDNAResultAsyncHandler;
			typedef Outcome<Error, Model::GetMessageCallbackResult> GetMessageCallbackOutcome;
			typedef std::future<GetMessageCallbackOutcome> GetMessageCallbackOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMessageCallbackRequest&, const GetMessageCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageCallbackAsyncHandler;
			typedef Outcome<Error, Model::GetMezzanineInfoResult> GetMezzanineInfoOutcome;
			typedef std::future<GetMezzanineInfoOutcome> GetMezzanineInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMezzanineInfoRequest&, const GetMezzanineInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMezzanineInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPlayInfoResult> GetPlayInfoOutcome;
			typedef std::future<GetPlayInfoOutcome> GetPlayInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetPlayInfoRequest&, const GetPlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPlayInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTranscodeSummaryResult> GetTranscodeSummaryOutcome;
			typedef std::future<GetTranscodeSummaryOutcome> GetTranscodeSummaryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetTranscodeSummaryRequest&, const GetTranscodeSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscodeSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetTranscodeTaskResult> GetTranscodeTaskOutcome;
			typedef std::future<GetTranscodeTaskOutcome> GetTranscodeTaskOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetTranscodeTaskRequest&, const GetTranscodeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscodeTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTranscodeTemplateGroupResult> GetTranscodeTemplateGroupOutcome;
			typedef std::future<GetTranscodeTemplateGroupOutcome> GetTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetTranscodeTemplateGroupRequest&, const GetTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::GetURLUploadInfosResult> GetURLUploadInfosOutcome;
			typedef std::future<GetURLUploadInfosOutcome> GetURLUploadInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetURLUploadInfosRequest&, const GetURLUploadInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetURLUploadInfosAsyncHandler;
			typedef Outcome<Error, Model::GetUploadDetailsResult> GetUploadDetailsOutcome;
			typedef std::future<GetUploadDetailsOutcome> GetUploadDetailsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetUploadDetailsRequest&, const GetUploadDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadDetailsAsyncHandler;
			typedef Outcome<Error, Model::GetVideoInfoResult> GetVideoInfoOutcome;
			typedef std::future<GetVideoInfoOutcome> GetVideoInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoInfoRequest&, const GetVideoInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoInfoAsyncHandler;
			typedef Outcome<Error, Model::GetVideoInfosResult> GetVideoInfosOutcome;
			typedef std::future<GetVideoInfosOutcome> GetVideoInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoInfosRequest&, const GetVideoInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoInfosAsyncHandler;
			typedef Outcome<Error, Model::GetVideoListResult> GetVideoListOutcome;
			typedef std::future<GetVideoListOutcome> GetVideoListOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoListRequest&, const GetVideoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoListAsyncHandler;
			typedef Outcome<Error, Model::GetVideoPlayAuthResult> GetVideoPlayAuthOutcome;
			typedef std::future<GetVideoPlayAuthOutcome> GetVideoPlayAuthOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVideoPlayAuthRequest&, const GetVideoPlayAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoPlayAuthAsyncHandler;
			typedef Outcome<Error, Model::GetVodTemplateResult> GetVodTemplateOutcome;
			typedef std::future<GetVodTemplateOutcome> GetVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetVodTemplateRequest&, const GetVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetWatermarkResult> GetWatermarkOutcome;
			typedef std::future<GetWatermarkOutcome> GetWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetWatermarkRequest&, const GetWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWatermarkAsyncHandler;
			typedef Outcome<Error, Model::ListAIImageInfoResult> ListAIImageInfoOutcome;
			typedef std::future<ListAIImageInfoOutcome> ListAIImageInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIImageInfoRequest&, const ListAIImageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIImageInfoAsyncHandler;
			typedef Outcome<Error, Model::ListAIJobResult> ListAIJobOutcome;
			typedef std::future<ListAIJobOutcome> ListAIJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAIJobRequest&, const ListAIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAIJobAsyncHandler;
			typedef Outcome<Error, Model::ListAITemplateResult> ListAITemplateOutcome;
			typedef std::future<ListAITemplateOutcome> ListAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAITemplateRequest&, const ListAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAITemplateAsyncHandler;
			typedef Outcome<Error, Model::ListAppInfoResult> ListAppInfoOutcome;
			typedef std::future<ListAppInfoOutcome> ListAppInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAppInfoRequest&, const ListAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInfoAsyncHandler;
			typedef Outcome<Error, Model::ListAppPoliciesForIdentityResult> ListAppPoliciesForIdentityOutcome;
			typedef std::future<ListAppPoliciesForIdentityOutcome> ListAppPoliciesForIdentityOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAppPoliciesForIdentityRequest&, const ListAppPoliciesForIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppPoliciesForIdentityAsyncHandler;
			typedef Outcome<Error, Model::ListAuditSecurityIpResult> ListAuditSecurityIpOutcome;
			typedef std::future<ListAuditSecurityIpOutcome> ListAuditSecurityIpOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListAuditSecurityIpRequest&, const ListAuditSecurityIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuditSecurityIpAsyncHandler;
			typedef Outcome<Error, Model::ListDetectionJobResult> ListDetectionJobOutcome;
			typedef std::future<ListDetectionJobOutcome> ListDetectionJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListDetectionJobRequest&, const ListDetectionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDetectionJobAsyncHandler;
			typedef Outcome<Error, Model::ListDetectionTemplateResult> ListDetectionTemplateOutcome;
			typedef std::future<ListDetectionTemplateOutcome> ListDetectionTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListDetectionTemplateRequest&, const ListDetectionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDetectionTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicImageResult> ListDynamicImageOutcome;
			typedef std::future<ListDynamicImageOutcome> ListDynamicImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListDynamicImageRequest&, const ListDynamicImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicImageAsyncHandler;
			typedef Outcome<Error, Model::ListLetterSendJobResult> ListLetterSendJobOutcome;
			typedef std::future<ListLetterSendJobOutcome> ListLetterSendJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListLetterSendJobRequest&, const ListLetterSendJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLetterSendJobAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordVideoResult> ListLiveRecordVideoOutcome;
			typedef std::future<ListLiveRecordVideoOutcome> ListLiveRecordVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListLiveRecordVideoRequest&, const ListLiveRecordVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordVideoAsyncHandler;
			typedef Outcome<Error, Model::ListMediaDNADeleteJobResult> ListMediaDNADeleteJobOutcome;
			typedef std::future<ListMediaDNADeleteJobOutcome> ListMediaDNADeleteJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListMediaDNADeleteJobRequest&, const ListMediaDNADeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaDNADeleteJobAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotsResult> ListSnapshotsOutcome;
			typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListSnapshotsRequest&, const ListSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::ListTranscodeTaskResult> ListTranscodeTaskOutcome;
			typedef std::future<ListTranscodeTaskOutcome> ListTranscodeTaskOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListTranscodeTaskRequest&, const ListTranscodeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscodeTaskAsyncHandler;
			typedef Outcome<Error, Model::ListTranscodeTemplateGroupResult> ListTranscodeTemplateGroupOutcome;
			typedef std::future<ListTranscodeTemplateGroupOutcome> ListTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListTranscodeTemplateGroupRequest&, const ListTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::ListVodRealtimeLogDeliveryDomainsResult> ListVodRealtimeLogDeliveryDomainsOutcome;
			typedef std::future<ListVodRealtimeLogDeliveryDomainsOutcome> ListVodRealtimeLogDeliveryDomainsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListVodRealtimeLogDeliveryDomainsRequest&, const ListVodRealtimeLogDeliveryDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVodRealtimeLogDeliveryDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListVodRealtimeLogDeliveryInfosResult> ListVodRealtimeLogDeliveryInfosOutcome;
			typedef std::future<ListVodRealtimeLogDeliveryInfosOutcome> ListVodRealtimeLogDeliveryInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListVodRealtimeLogDeliveryInfosRequest&, const ListVodRealtimeLogDeliveryInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVodRealtimeLogDeliveryInfosAsyncHandler;
			typedef Outcome<Error, Model::ListVodTemplateResult> ListVodTemplateOutcome;
			typedef std::future<ListVodTemplateOutcome> ListVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListVodTemplateRequest&, const ListVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListWatermarkResult> ListWatermarkOutcome;
			typedef std::future<ListWatermarkOutcome> ListWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListWatermarkRequest&, const ListWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWatermarkAsyncHandler;
			typedef Outcome<Error, Model::MoveAppResourceResult> MoveAppResourceOutcome;
			typedef std::future<MoveAppResourceOutcome> MoveAppResourceOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::MoveAppResourceRequest&, const MoveAppResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveAppResourceAsyncHandler;
			typedef Outcome<Error, Model::PreloadVodObjectCachesResult> PreloadVodObjectCachesOutcome;
			typedef std::future<PreloadVodObjectCachesOutcome> PreloadVodObjectCachesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::PreloadVodObjectCachesRequest&, const PreloadVodObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadVodObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::ProduceEditingProjectVideoResult> ProduceEditingProjectVideoOutcome;
			typedef std::future<ProduceEditingProjectVideoOutcome> ProduceEditingProjectVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ProduceEditingProjectVideoRequest&, const ProduceEditingProjectVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProduceEditingProjectVideoAsyncHandler;
			typedef Outcome<Error, Model::RefreshUploadVideoResult> RefreshUploadVideoOutcome;
			typedef std::future<RefreshUploadVideoOutcome> RefreshUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshUploadVideoRequest&, const RefreshUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::RefreshVodObjectCachesResult> RefreshVodObjectCachesOutcome;
			typedef std::future<RefreshVodObjectCachesOutcome> RefreshVodObjectCachesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshVodObjectCachesRequest&, const RefreshVodObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshVodObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaResult> RegisterMediaOutcome;
			typedef std::future<RegisterMediaOutcome> RegisterMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RegisterMediaRequest&, const RegisterMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaAsyncHandler;
			typedef Outcome<Error, Model::SearchEditingProjectResult> SearchEditingProjectOutcome;
			typedef std::future<SearchEditingProjectOutcome> SearchEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SearchEditingProjectRequest&, const SearchEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaResult> SearchMediaOutcome;
			typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SearchMediaRequest&, const SearchMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
			typedef Outcome<Error, Model::SetAuditSecurityIpResult> SetAuditSecurityIpOutcome;
			typedef std::future<SetAuditSecurityIpOutcome> SetAuditSecurityIpOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetAuditSecurityIpRequest&, const SetAuditSecurityIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAuditSecurityIpAsyncHandler;
			typedef Outcome<Error, Model::SetCrossdomainContentResult> SetCrossdomainContentOutcome;
			typedef std::future<SetCrossdomainContentOutcome> SetCrossdomainContentOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetCrossdomainContentRequest&, const SetCrossdomainContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCrossdomainContentAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultAITemplateResult> SetDefaultAITemplateOutcome;
			typedef std::future<SetDefaultAITemplateOutcome> SetDefaultAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetDefaultAITemplateRequest&, const SetDefaultAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultAITemplateAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultTranscodeTemplateGroupResult> SetDefaultTranscodeTemplateGroupOutcome;
			typedef std::future<SetDefaultTranscodeTemplateGroupOutcome> SetDefaultTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetDefaultTranscodeTemplateGroupRequest&, const SetDefaultTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultWatermarkResult> SetDefaultWatermarkOutcome;
			typedef std::future<SetDefaultWatermarkOutcome> SetDefaultWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetDefaultWatermarkRequest&, const SetDefaultWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultWatermarkAsyncHandler;
			typedef Outcome<Error, Model::SetEditingProjectMaterialsResult> SetEditingProjectMaterialsOutcome;
			typedef std::future<SetEditingProjectMaterialsOutcome> SetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetEditingProjectMaterialsRequest&, const SetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::SetMessageCallbackResult> SetMessageCallbackOutcome;
			typedef std::future<SetMessageCallbackOutcome> SetMessageCallbackOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetMessageCallbackRequest&, const SetMessageCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetMessageCallbackAsyncHandler;
			typedef Outcome<Error, Model::SetVodDomainCertificateResult> SetVodDomainCertificateOutcome;
			typedef std::future<SetVodDomainCertificateOutcome> SetVodDomainCertificateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetVodDomainCertificateRequest&, const SetVodDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVodDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SubmitAICaptionExtractionJobResult> SubmitAICaptionExtractionJobOutcome;
			typedef std::future<SubmitAICaptionExtractionJobOutcome> SubmitAICaptionExtractionJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAICaptionExtractionJobRequest&, const SubmitAICaptionExtractionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAICaptionExtractionJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIImageAuditJobResult> SubmitAIImageAuditJobOutcome;
			typedef std::future<SubmitAIImageAuditJobOutcome> SubmitAIImageAuditJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIImageAuditJobRequest&, const SubmitAIImageAuditJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIImageAuditJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIImageJobResult> SubmitAIImageJobOutcome;
			typedef std::future<SubmitAIImageJobOutcome> SubmitAIImageJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIImageJobRequest&, const SubmitAIImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIImageJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIJobResult> SubmitAIJobOutcome;
			typedef std::future<SubmitAIJobOutcome> SubmitAIJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIJobRequest&, const SubmitAIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAIMediaAuditJobResult> SubmitAIMediaAuditJobOutcome;
			typedef std::future<SubmitAIMediaAuditJobOutcome> SubmitAIMediaAuditJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitAIMediaAuditJobRequest&, const SubmitAIMediaAuditJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAIMediaAuditJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDetectionJobResult> SubmitDetectionJobOutcome;
			typedef std::future<SubmitDetectionJobOutcome> SubmitDetectionJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitDetectionJobRequest&, const SubmitDetectionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDetectionJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDynamicImageJobResult> SubmitDynamicImageJobOutcome;
			typedef std::future<SubmitDynamicImageJobOutcome> SubmitDynamicImageJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitDynamicImageJobRequest&, const SubmitDynamicImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDynamicImageJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitLiveEditingResult> SubmitLiveEditingOutcome;
			typedef std::future<SubmitLiveEditingOutcome> SubmitLiveEditingOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitLiveEditingRequest&, const SubmitLiveEditingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLiveEditingAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaDNADeleteJobResult> SubmitMediaDNADeleteJobOutcome;
			typedef std::future<SubmitMediaDNADeleteJobOutcome> SubmitMediaDNADeleteJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitMediaDNADeleteJobRequest&, const SubmitMediaDNADeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaDNADeleteJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitPreprocessJobsResult> SubmitPreprocessJobsOutcome;
			typedef std::future<SubmitPreprocessJobsOutcome> SubmitPreprocessJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitPreprocessJobsRequest&, const SubmitPreprocessJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPreprocessJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitSnapshotJobResult> SubmitSnapshotJobOutcome;
			typedef std::future<SubmitSnapshotJobOutcome> SubmitSnapshotJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitSnapshotJobRequest&, const SubmitSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTranscodeJobsResult> SubmitTranscodeJobsOutcome;
			typedef std::future<SubmitTranscodeJobsOutcome> SubmitTranscodeJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitTranscodeJobsRequest&, const SubmitTranscodeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTranscodeJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitWorkflowJobResult> SubmitWorkflowJobOutcome;
			typedef std::future<SubmitWorkflowJobOutcome> SubmitWorkflowJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitWorkflowJobRequest&, const SubmitWorkflowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitWorkflowJobAsyncHandler;
			typedef Outcome<Error, Model::TagVodResourcesResult> TagVodResourcesOutcome;
			typedef std::future<TagVodResourcesOutcome> TagVodResourcesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::TagVodResourcesRequest&, const TagVodResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagVodResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagVodResourcesResult> UnTagVodResourcesOutcome;
			typedef std::future<UnTagVodResourcesOutcome> UnTagVodResourcesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UnTagVodResourcesRequest&, const UnTagVodResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagVodResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAITemplateResult> UpdateAITemplateOutcome;
			typedef std::future<UpdateAITemplateOutcome> UpdateAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateAITemplateRequest&, const UpdateAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAITemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppInfoResult> UpdateAppInfoOutcome;
			typedef std::future<UpdateAppInfoOutcome> UpdateAppInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateAppInfoRequest&, const UpdateAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateAttachedMediaInfosResult> UpdateAttachedMediaInfosOutcome;
			typedef std::future<UpdateAttachedMediaInfosOutcome> UpdateAttachedMediaInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateAttachedMediaInfosRequest&, const UpdateAttachedMediaInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAttachedMediaInfosAsyncHandler;
			typedef Outcome<Error, Model::UpdateCategoryResult> UpdateCategoryOutcome;
			typedef std::future<UpdateCategoryOutcome> UpdateCategoryOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateCategoryRequest&, const UpdateCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateDetectionJobResult> UpdateDetectionJobOutcome;
			typedef std::future<UpdateDetectionJobOutcome> UpdateDetectionJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateDetectionJobRequest&, const UpdateDetectionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDetectionJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateDetectionTemplateResult> UpdateDetectionTemplateOutcome;
			typedef std::future<UpdateDetectionTemplateOutcome> UpdateDetectionTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateDetectionTemplateRequest&, const UpdateDetectionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDetectionTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateEditingProjectResult> UpdateEditingProjectOutcome;
			typedef std::future<UpdateEditingProjectOutcome> UpdateEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateEditingProjectRequest&, const UpdateEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageInfosResult> UpdateImageInfosOutcome;
			typedef std::future<UpdateImageInfosOutcome> UpdateImageInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateImageInfosRequest&, const UpdateImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageInfosAsyncHandler;
			typedef Outcome<Error, Model::UpdateStreamInfoResult> UpdateStreamInfoOutcome;
			typedef std::future<UpdateStreamInfoOutcome> UpdateStreamInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateStreamInfoRequest&, const UpdateStreamInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStreamInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateTranscodeTemplateGroupResult> UpdateTranscodeTemplateGroupOutcome;
			typedef std::future<UpdateTranscodeTemplateGroupOutcome> UpdateTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateTranscodeTemplateGroupRequest&, const UpdateTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateVideoInfoResult> UpdateVideoInfoOutcome;
			typedef std::future<UpdateVideoInfoOutcome> UpdateVideoInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVideoInfoRequest&, const UpdateVideoInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVideoInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateVideoInfosResult> UpdateVideoInfosOutcome;
			typedef std::future<UpdateVideoInfosOutcome> UpdateVideoInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVideoInfosRequest&, const UpdateVideoInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVideoInfosAsyncHandler;
			typedef Outcome<Error, Model::UpdateVodDomainResult> UpdateVodDomainOutcome;
			typedef std::future<UpdateVodDomainOutcome> UpdateVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVodDomainRequest&, const UpdateVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVodDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateVodTemplateResult> UpdateVodTemplateOutcome;
			typedef std::future<UpdateVodTemplateOutcome> UpdateVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateVodTemplateRequest&, const UpdateVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateWatermarkResult> UpdateWatermarkOutcome;
			typedef std::future<UpdateWatermarkOutcome> UpdateWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateWatermarkRequest&, const UpdateWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWatermarkAsyncHandler;
			typedef Outcome<Error, Model::UploadMediaByURLResult> UploadMediaByURLOutcome;
			typedef std::future<UploadMediaByURLOutcome> UploadMediaByURLOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UploadMediaByURLRequest&, const UploadMediaByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMediaByURLAsyncHandler;
			typedef Outcome<Error, Model::UploadStreamByURLResult> UploadStreamByURLOutcome;
			typedef std::future<UploadStreamByURLOutcome> UploadStreamByURLOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UploadStreamByURLRequest&, const UploadStreamByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadStreamByURLAsyncHandler;
			typedef Outcome<Error, Model::VerifyVodDomainOwnerResult> VerifyVodDomainOwnerOutcome;
			typedef std::future<VerifyVodDomainOwnerOutcome> VerifyVodDomainOwnerOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::VerifyVodDomainOwnerRequest&, const VerifyVodDomainOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyVodDomainOwnerAsyncHandler;

			VodClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VodClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VodClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VodClient();
			AddAITemplateOutcome addAITemplate(const Model::AddAITemplateRequest &request)const;
			void addAITemplateAsync(const Model::AddAITemplateRequest& request, const AddAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAITemplateOutcomeCallable addAITemplateCallable(const Model::AddAITemplateRequest& request) const;
			AddCategoryOutcome addCategory(const Model::AddCategoryRequest &request)const;
			void addCategoryAsync(const Model::AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCategoryOutcomeCallable addCategoryCallable(const Model::AddCategoryRequest& request) const;
			AddEditingProjectOutcome addEditingProject(const Model::AddEditingProjectRequest &request)const;
			void addEditingProjectAsync(const Model::AddEditingProjectRequest& request, const AddEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEditingProjectOutcomeCallable addEditingProjectCallable(const Model::AddEditingProjectRequest& request) const;
			AddTranscodeTemplateGroupOutcome addTranscodeTemplateGroup(const Model::AddTranscodeTemplateGroupRequest &request)const;
			void addTranscodeTemplateGroupAsync(const Model::AddTranscodeTemplateGroupRequest& request, const AddTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTranscodeTemplateGroupOutcomeCallable addTranscodeTemplateGroupCallable(const Model::AddTranscodeTemplateGroupRequest& request) const;
			AddVodDomainOutcome addVodDomain(const Model::AddVodDomainRequest &request)const;
			void addVodDomainAsync(const Model::AddVodDomainRequest& request, const AddVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodDomainOutcomeCallable addVodDomainCallable(const Model::AddVodDomainRequest& request) const;
			AddVodTemplateOutcome addVodTemplate(const Model::AddVodTemplateRequest &request)const;
			void addVodTemplateAsync(const Model::AddVodTemplateRequest& request, const AddVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodTemplateOutcomeCallable addVodTemplateCallable(const Model::AddVodTemplateRequest& request) const;
			AddWatermarkOutcome addWatermark(const Model::AddWatermarkRequest &request)const;
			void addWatermarkAsync(const Model::AddWatermarkRequest& request, const AddWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWatermarkOutcomeCallable addWatermarkCallable(const Model::AddWatermarkRequest& request) const;
			AttachAppPolicyToIdentityOutcome attachAppPolicyToIdentity(const Model::AttachAppPolicyToIdentityRequest &request)const;
			void attachAppPolicyToIdentityAsync(const Model::AttachAppPolicyToIdentityRequest& request, const AttachAppPolicyToIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachAppPolicyToIdentityOutcomeCallable attachAppPolicyToIdentityCallable(const Model::AttachAppPolicyToIdentityRequest& request) const;
			BatchSetVodDomainConfigsOutcome batchSetVodDomainConfigs(const Model::BatchSetVodDomainConfigsRequest &request)const;
			void batchSetVodDomainConfigsAsync(const Model::BatchSetVodDomainConfigsRequest& request, const BatchSetVodDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetVodDomainConfigsOutcomeCallable batchSetVodDomainConfigsCallable(const Model::BatchSetVodDomainConfigsRequest& request) const;
			BatchStartVodDomainOutcome batchStartVodDomain(const Model::BatchStartVodDomainRequest &request)const;
			void batchStartVodDomainAsync(const Model::BatchStartVodDomainRequest& request, const BatchStartVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartVodDomainOutcomeCallable batchStartVodDomainCallable(const Model::BatchStartVodDomainRequest& request) const;
			BatchStopVodDomainOutcome batchStopVodDomain(const Model::BatchStopVodDomainRequest &request)const;
			void batchStopVodDomainAsync(const Model::BatchStopVodDomainRequest& request, const BatchStopVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopVodDomainOutcomeCallable batchStopVodDomainCallable(const Model::BatchStopVodDomainRequest& request) const;
			CancelUrlUploadJobsOutcome cancelUrlUploadJobs(const Model::CancelUrlUploadJobsRequest &request)const;
			void cancelUrlUploadJobsAsync(const Model::CancelUrlUploadJobsRequest& request, const CancelUrlUploadJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelUrlUploadJobsOutcomeCallable cancelUrlUploadJobsCallable(const Model::CancelUrlUploadJobsRequest& request) const;
			CreateAppInfoOutcome createAppInfo(const Model::CreateAppInfoRequest &request)const;
			void createAppInfoAsync(const Model::CreateAppInfoRequest& request, const CreateAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppInfoOutcomeCallable createAppInfoCallable(const Model::CreateAppInfoRequest& request) const;
			CreateAuditOutcome createAudit(const Model::CreateAuditRequest &request)const;
			void createAuditAsync(const Model::CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuditOutcomeCallable createAuditCallable(const Model::CreateAuditRequest& request) const;
			CreateDetectionTemplateOutcome createDetectionTemplate(const Model::CreateDetectionTemplateRequest &request)const;
			void createDetectionTemplateAsync(const Model::CreateDetectionTemplateRequest& request, const CreateDetectionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDetectionTemplateOutcomeCallable createDetectionTemplateCallable(const Model::CreateDetectionTemplateRequest& request) const;
			CreateUploadAttachedMediaOutcome createUploadAttachedMedia(const Model::CreateUploadAttachedMediaRequest &request)const;
			void createUploadAttachedMediaAsync(const Model::CreateUploadAttachedMediaRequest& request, const CreateUploadAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadAttachedMediaOutcomeCallable createUploadAttachedMediaCallable(const Model::CreateUploadAttachedMediaRequest& request) const;
			CreateUploadImageOutcome createUploadImage(const Model::CreateUploadImageRequest &request)const;
			void createUploadImageAsync(const Model::CreateUploadImageRequest& request, const CreateUploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadImageOutcomeCallable createUploadImageCallable(const Model::CreateUploadImageRequest& request) const;
			CreateUploadVideoOutcome createUploadVideo(const Model::CreateUploadVideoRequest &request)const;
			void createUploadVideoAsync(const Model::CreateUploadVideoRequest& request, const CreateUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadVideoOutcomeCallable createUploadVideoCallable(const Model::CreateUploadVideoRequest& request) const;
			CreateVodRealTimeLogDeliveryOutcome createVodRealTimeLogDelivery(const Model::CreateVodRealTimeLogDeliveryRequest &request)const;
			void createVodRealTimeLogDeliveryAsync(const Model::CreateVodRealTimeLogDeliveryRequest& request, const CreateVodRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVodRealTimeLogDeliveryOutcomeCallable createVodRealTimeLogDeliveryCallable(const Model::CreateVodRealTimeLogDeliveryRequest& request) const;
			DeleteAIImageInfosOutcome deleteAIImageInfos(const Model::DeleteAIImageInfosRequest &request)const;
			void deleteAIImageInfosAsync(const Model::DeleteAIImageInfosRequest& request, const DeleteAIImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAIImageInfosOutcomeCallable deleteAIImageInfosCallable(const Model::DeleteAIImageInfosRequest& request) const;
			DeleteAITemplateOutcome deleteAITemplate(const Model::DeleteAITemplateRequest &request)const;
			void deleteAITemplateAsync(const Model::DeleteAITemplateRequest& request, const DeleteAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAITemplateOutcomeCallable deleteAITemplateCallable(const Model::DeleteAITemplateRequest& request) const;
			DeleteAppInfoOutcome deleteAppInfo(const Model::DeleteAppInfoRequest &request)const;
			void deleteAppInfoAsync(const Model::DeleteAppInfoRequest& request, const DeleteAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppInfoOutcomeCallable deleteAppInfoCallable(const Model::DeleteAppInfoRequest& request) const;
			DeleteAttachedMediaOutcome deleteAttachedMedia(const Model::DeleteAttachedMediaRequest &request)const;
			void deleteAttachedMediaAsync(const Model::DeleteAttachedMediaRequest& request, const DeleteAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAttachedMediaOutcomeCallable deleteAttachedMediaCallable(const Model::DeleteAttachedMediaRequest& request) const;
			DeleteCategoryOutcome deleteCategory(const Model::DeleteCategoryRequest &request)const;
			void deleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCategoryOutcomeCallable deleteCategoryCallable(const Model::DeleteCategoryRequest& request) const;
			DeleteDetectionTemplateOutcome deleteDetectionTemplate(const Model::DeleteDetectionTemplateRequest &request)const;
			void deleteDetectionTemplateAsync(const Model::DeleteDetectionTemplateRequest& request, const DeleteDetectionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDetectionTemplateOutcomeCallable deleteDetectionTemplateCallable(const Model::DeleteDetectionTemplateRequest& request) const;
			DeleteDynamicImageOutcome deleteDynamicImage(const Model::DeleteDynamicImageRequest &request)const;
			void deleteDynamicImageAsync(const Model::DeleteDynamicImageRequest& request, const DeleteDynamicImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDynamicImageOutcomeCallable deleteDynamicImageCallable(const Model::DeleteDynamicImageRequest& request) const;
			DeleteEditingProjectOutcome deleteEditingProject(const Model::DeleteEditingProjectRequest &request)const;
			void deleteEditingProjectAsync(const Model::DeleteEditingProjectRequest& request, const DeleteEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectOutcomeCallable deleteEditingProjectCallable(const Model::DeleteEditingProjectRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteMessageCallbackOutcome deleteMessageCallback(const Model::DeleteMessageCallbackRequest &request)const;
			void deleteMessageCallbackAsync(const Model::DeleteMessageCallbackRequest& request, const DeleteMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMessageCallbackOutcomeCallable deleteMessageCallbackCallable(const Model::DeleteMessageCallbackRequest& request) const;
			DeleteMezzaninesOutcome deleteMezzanines(const Model::DeleteMezzaninesRequest &request)const;
			void deleteMezzaninesAsync(const Model::DeleteMezzaninesRequest& request, const DeleteMezzaninesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMezzaninesOutcomeCallable deleteMezzaninesCallable(const Model::DeleteMezzaninesRequest& request) const;
			DeleteMultipartUploadOutcome deleteMultipartUpload(const Model::DeleteMultipartUploadRequest &request)const;
			void deleteMultipartUploadAsync(const Model::DeleteMultipartUploadRequest& request, const DeleteMultipartUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMultipartUploadOutcomeCallable deleteMultipartUploadCallable(const Model::DeleteMultipartUploadRequest& request) const;
			DeleteStreamOutcome deleteStream(const Model::DeleteStreamRequest &request)const;
			void deleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStreamOutcomeCallable deleteStreamCallable(const Model::DeleteStreamRequest& request) const;
			DeleteTranscodeTemplateGroupOutcome deleteTranscodeTemplateGroup(const Model::DeleteTranscodeTemplateGroupRequest &request)const;
			void deleteTranscodeTemplateGroupAsync(const Model::DeleteTranscodeTemplateGroupRequest& request, const DeleteTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTranscodeTemplateGroupOutcomeCallable deleteTranscodeTemplateGroupCallable(const Model::DeleteTranscodeTemplateGroupRequest& request) const;
			DeleteVideoOutcome deleteVideo(const Model::DeleteVideoRequest &request)const;
			void deleteVideoAsync(const Model::DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoOutcomeCallable deleteVideoCallable(const Model::DeleteVideoRequest& request) const;
			DeleteVodDomainOutcome deleteVodDomain(const Model::DeleteVodDomainRequest &request)const;
			void deleteVodDomainAsync(const Model::DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodDomainOutcomeCallable deleteVodDomainCallable(const Model::DeleteVodDomainRequest& request) const;
			DeleteVodRealtimeLogDeliveryOutcome deleteVodRealtimeLogDelivery(const Model::DeleteVodRealtimeLogDeliveryRequest &request)const;
			void deleteVodRealtimeLogDeliveryAsync(const Model::DeleteVodRealtimeLogDeliveryRequest& request, const DeleteVodRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodRealtimeLogDeliveryOutcomeCallable deleteVodRealtimeLogDeliveryCallable(const Model::DeleteVodRealtimeLogDeliveryRequest& request) const;
			DeleteVodSpecificConfigOutcome deleteVodSpecificConfig(const Model::DeleteVodSpecificConfigRequest &request)const;
			void deleteVodSpecificConfigAsync(const Model::DeleteVodSpecificConfigRequest& request, const DeleteVodSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodSpecificConfigOutcomeCallable deleteVodSpecificConfigCallable(const Model::DeleteVodSpecificConfigRequest& request) const;
			DeleteVodTemplateOutcome deleteVodTemplate(const Model::DeleteVodTemplateRequest &request)const;
			void deleteVodTemplateAsync(const Model::DeleteVodTemplateRequest& request, const DeleteVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodTemplateOutcomeCallable deleteVodTemplateCallable(const Model::DeleteVodTemplateRequest& request) const;
			DeleteWatermarkOutcome deleteWatermark(const Model::DeleteWatermarkRequest &request)const;
			void deleteWatermarkAsync(const Model::DeleteWatermarkRequest& request, const DeleteWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWatermarkOutcomeCallable deleteWatermarkCallable(const Model::DeleteWatermarkRequest& request) const;
			DescribePlayTopVideosOutcome describePlayTopVideos(const Model::DescribePlayTopVideosRequest &request)const;
			void describePlayTopVideosAsync(const Model::DescribePlayTopVideosRequest& request, const DescribePlayTopVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayTopVideosOutcomeCallable describePlayTopVideosCallable(const Model::DescribePlayTopVideosRequest& request) const;
			DescribePlayUserAvgOutcome describePlayUserAvg(const Model::DescribePlayUserAvgRequest &request)const;
			void describePlayUserAvgAsync(const Model::DescribePlayUserAvgRequest& request, const DescribePlayUserAvgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayUserAvgOutcomeCallable describePlayUserAvgCallable(const Model::DescribePlayUserAvgRequest& request) const;
			DescribePlayUserTotalOutcome describePlayUserTotal(const Model::DescribePlayUserTotalRequest &request)const;
			void describePlayUserTotalAsync(const Model::DescribePlayUserTotalRequest& request, const DescribePlayUserTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayUserTotalOutcomeCallable describePlayUserTotalCallable(const Model::DescribePlayUserTotalRequest& request) const;
			DescribePlayVideoStatisOutcome describePlayVideoStatis(const Model::DescribePlayVideoStatisRequest &request)const;
			void describePlayVideoStatisAsync(const Model::DescribePlayVideoStatisRequest& request, const DescribePlayVideoStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlayVideoStatisOutcomeCallable describePlayVideoStatisCallable(const Model::DescribePlayVideoStatisRequest& request) const;
			DescribeVodAIDataOutcome describeVodAIData(const Model::DescribeVodAIDataRequest &request)const;
			void describeVodAIDataAsync(const Model::DescribeVodAIDataRequest& request, const DescribeVodAIDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodAIDataOutcomeCallable describeVodAIDataCallable(const Model::DescribeVodAIDataRequest& request) const;
			DescribeVodCertificateListOutcome describeVodCertificateList(const Model::DescribeVodCertificateListRequest &request)const;
			void describeVodCertificateListAsync(const Model::DescribeVodCertificateListRequest& request, const DescribeVodCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodCertificateListOutcomeCallable describeVodCertificateListCallable(const Model::DescribeVodCertificateListRequest& request) const;
			DescribeVodDomainBpsDataOutcome describeVodDomainBpsData(const Model::DescribeVodDomainBpsDataRequest &request)const;
			void describeVodDomainBpsDataAsync(const Model::DescribeVodDomainBpsDataRequest& request, const DescribeVodDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainBpsDataOutcomeCallable describeVodDomainBpsDataCallable(const Model::DescribeVodDomainBpsDataRequest& request) const;
			DescribeVodDomainCertificateInfoOutcome describeVodDomainCertificateInfo(const Model::DescribeVodDomainCertificateInfoRequest &request)const;
			void describeVodDomainCertificateInfoAsync(const Model::DescribeVodDomainCertificateInfoRequest& request, const DescribeVodDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainCertificateInfoOutcomeCallable describeVodDomainCertificateInfoCallable(const Model::DescribeVodDomainCertificateInfoRequest& request) const;
			DescribeVodDomainConfigsOutcome describeVodDomainConfigs(const Model::DescribeVodDomainConfigsRequest &request)const;
			void describeVodDomainConfigsAsync(const Model::DescribeVodDomainConfigsRequest& request, const DescribeVodDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainConfigsOutcomeCallable describeVodDomainConfigsCallable(const Model::DescribeVodDomainConfigsRequest& request) const;
			DescribeVodDomainDetailOutcome describeVodDomainDetail(const Model::DescribeVodDomainDetailRequest &request)const;
			void describeVodDomainDetailAsync(const Model::DescribeVodDomainDetailRequest& request, const DescribeVodDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainDetailOutcomeCallable describeVodDomainDetailCallable(const Model::DescribeVodDomainDetailRequest& request) const;
			DescribeVodDomainLogOutcome describeVodDomainLog(const Model::DescribeVodDomainLogRequest &request)const;
			void describeVodDomainLogAsync(const Model::DescribeVodDomainLogRequest& request, const DescribeVodDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainLogOutcomeCallable describeVodDomainLogCallable(const Model::DescribeVodDomainLogRequest& request) const;
			DescribeVodDomainRealtimeLogDeliveryOutcome describeVodDomainRealtimeLogDelivery(const Model::DescribeVodDomainRealtimeLogDeliveryRequest &request)const;
			void describeVodDomainRealtimeLogDeliveryAsync(const Model::DescribeVodDomainRealtimeLogDeliveryRequest& request, const DescribeVodDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealtimeLogDeliveryOutcomeCallable describeVodDomainRealtimeLogDeliveryCallable(const Model::DescribeVodDomainRealtimeLogDeliveryRequest& request) const;
			DescribeVodDomainTrafficDataOutcome describeVodDomainTrafficData(const Model::DescribeVodDomainTrafficDataRequest &request)const;
			void describeVodDomainTrafficDataAsync(const Model::DescribeVodDomainTrafficDataRequest& request, const DescribeVodDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainTrafficDataOutcomeCallable describeVodDomainTrafficDataCallable(const Model::DescribeVodDomainTrafficDataRequest& request) const;
			DescribeVodDomainUsageDataOutcome describeVodDomainUsageData(const Model::DescribeVodDomainUsageDataRequest &request)const;
			void describeVodDomainUsageDataAsync(const Model::DescribeVodDomainUsageDataRequest& request, const DescribeVodDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainUsageDataOutcomeCallable describeVodDomainUsageDataCallable(const Model::DescribeVodDomainUsageDataRequest& request) const;
			DescribeVodRefreshQuotaOutcome describeVodRefreshQuota(const Model::DescribeVodRefreshQuotaRequest &request)const;
			void describeVodRefreshQuotaAsync(const Model::DescribeVodRefreshQuotaRequest& request, const DescribeVodRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodRefreshQuotaOutcomeCallable describeVodRefreshQuotaCallable(const Model::DescribeVodRefreshQuotaRequest& request) const;
			DescribeVodRefreshTasksOutcome describeVodRefreshTasks(const Model::DescribeVodRefreshTasksRequest &request)const;
			void describeVodRefreshTasksAsync(const Model::DescribeVodRefreshTasksRequest& request, const DescribeVodRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodRefreshTasksOutcomeCallable describeVodRefreshTasksCallable(const Model::DescribeVodRefreshTasksRequest& request) const;
			DescribeVodStorageDataOutcome describeVodStorageData(const Model::DescribeVodStorageDataRequest &request)const;
			void describeVodStorageDataAsync(const Model::DescribeVodStorageDataRequest& request, const DescribeVodStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodStorageDataOutcomeCallable describeVodStorageDataCallable(const Model::DescribeVodStorageDataRequest& request) const;
			DescribeVodTagResourcesOutcome describeVodTagResources(const Model::DescribeVodTagResourcesRequest &request)const;
			void describeVodTagResourcesAsync(const Model::DescribeVodTagResourcesRequest& request, const DescribeVodTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodTagResourcesOutcomeCallable describeVodTagResourcesCallable(const Model::DescribeVodTagResourcesRequest& request) const;
			DescribeVodTranscodeDataOutcome describeVodTranscodeData(const Model::DescribeVodTranscodeDataRequest &request)const;
			void describeVodTranscodeDataAsync(const Model::DescribeVodTranscodeDataRequest& request, const DescribeVodTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodTranscodeDataOutcomeCallable describeVodTranscodeDataCallable(const Model::DescribeVodTranscodeDataRequest& request) const;
			DescribeVodUserDomainsOutcome describeVodUserDomains(const Model::DescribeVodUserDomainsRequest &request)const;
			void describeVodUserDomainsAsync(const Model::DescribeVodUserDomainsRequest& request, const DescribeVodUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodUserDomainsOutcomeCallable describeVodUserDomainsCallable(const Model::DescribeVodUserDomainsRequest& request) const;
			DescribeVodUserTagsOutcome describeVodUserTags(const Model::DescribeVodUserTagsRequest &request)const;
			void describeVodUserTagsAsync(const Model::DescribeVodUserTagsRequest& request, const DescribeVodUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodUserTagsOutcomeCallable describeVodUserTagsCallable(const Model::DescribeVodUserTagsRequest& request) const;
			DescribeVodVerifyContentOutcome describeVodVerifyContent(const Model::DescribeVodVerifyContentRequest &request)const;
			void describeVodVerifyContentAsync(const Model::DescribeVodVerifyContentRequest& request, const DescribeVodVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodVerifyContentOutcomeCallable describeVodVerifyContentCallable(const Model::DescribeVodVerifyContentRequest& request) const;
			DetachAppPolicyFromIdentityOutcome detachAppPolicyFromIdentity(const Model::DetachAppPolicyFromIdentityRequest &request)const;
			void detachAppPolicyFromIdentityAsync(const Model::DetachAppPolicyFromIdentityRequest& request, const DetachAppPolicyFromIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachAppPolicyFromIdentityOutcomeCallable detachAppPolicyFromIdentityCallable(const Model::DetachAppPolicyFromIdentityRequest& request) const;
			DisableVodRealtimeLogDeliveryOutcome disableVodRealtimeLogDelivery(const Model::DisableVodRealtimeLogDeliveryRequest &request)const;
			void disableVodRealtimeLogDeliveryAsync(const Model::DisableVodRealtimeLogDeliveryRequest& request, const DisableVodRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableVodRealtimeLogDeliveryOutcomeCallable disableVodRealtimeLogDeliveryCallable(const Model::DisableVodRealtimeLogDeliveryRequest& request) const;
			EnableVodRealtimeLogDeliveryOutcome enableVodRealtimeLogDelivery(const Model::EnableVodRealtimeLogDeliveryRequest &request)const;
			void enableVodRealtimeLogDeliveryAsync(const Model::EnableVodRealtimeLogDeliveryRequest& request, const EnableVodRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableVodRealtimeLogDeliveryOutcomeCallable enableVodRealtimeLogDeliveryCallable(const Model::EnableVodRealtimeLogDeliveryRequest& request) const;
			GetAICaptionExtractionJobsOutcome getAICaptionExtractionJobs(const Model::GetAICaptionExtractionJobsRequest &request)const;
			void getAICaptionExtractionJobsAsync(const Model::GetAICaptionExtractionJobsRequest& request, const GetAICaptionExtractionJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAICaptionExtractionJobsOutcomeCallable getAICaptionExtractionJobsCallable(const Model::GetAICaptionExtractionJobsRequest& request) const;
			GetAIImageJobsOutcome getAIImageJobs(const Model::GetAIImageJobsRequest &request)const;
			void getAIImageJobsAsync(const Model::GetAIImageJobsRequest& request, const GetAIImageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAIImageJobsOutcomeCallable getAIImageJobsCallable(const Model::GetAIImageJobsRequest& request) const;
			GetAIMediaAuditJobOutcome getAIMediaAuditJob(const Model::GetAIMediaAuditJobRequest &request)const;
			void getAIMediaAuditJobAsync(const Model::GetAIMediaAuditJobRequest& request, const GetAIMediaAuditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAIMediaAuditJobOutcomeCallable getAIMediaAuditJobCallable(const Model::GetAIMediaAuditJobRequest& request) const;
			GetAITemplateOutcome getAITemplate(const Model::GetAITemplateRequest &request)const;
			void getAITemplateAsync(const Model::GetAITemplateRequest& request, const GetAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAITemplateOutcomeCallable getAITemplateCallable(const Model::GetAITemplateRequest& request) const;
			GetAIVideoTagResultOutcome getAIVideoTagResult(const Model::GetAIVideoTagResultRequest &request)const;
			void getAIVideoTagResultAsync(const Model::GetAIVideoTagResultRequest& request, const GetAIVideoTagResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAIVideoTagResultOutcomeCallable getAIVideoTagResultCallable(const Model::GetAIVideoTagResultRequest& request) const;
			GetAppInfosOutcome getAppInfos(const Model::GetAppInfosRequest &request)const;
			void getAppInfosAsync(const Model::GetAppInfosRequest& request, const GetAppInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppInfosOutcomeCallable getAppInfosCallable(const Model::GetAppInfosRequest& request) const;
			GetAttachedMediaInfoOutcome getAttachedMediaInfo(const Model::GetAttachedMediaInfoRequest &request)const;
			void getAttachedMediaInfoAsync(const Model::GetAttachedMediaInfoRequest& request, const GetAttachedMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAttachedMediaInfoOutcomeCallable getAttachedMediaInfoCallable(const Model::GetAttachedMediaInfoRequest& request) const;
			GetAuditHistoryOutcome getAuditHistory(const Model::GetAuditHistoryRequest &request)const;
			void getAuditHistoryAsync(const Model::GetAuditHistoryRequest& request, const GetAuditHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuditHistoryOutcomeCallable getAuditHistoryCallable(const Model::GetAuditHistoryRequest& request) const;
			GetCategoriesOutcome getCategories(const Model::GetCategoriesRequest &request)const;
			void getCategoriesAsync(const Model::GetCategoriesRequest& request, const GetCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCategoriesOutcomeCallable getCategoriesCallable(const Model::GetCategoriesRequest& request) const;
			GetDefaultAITemplateOutcome getDefaultAITemplate(const Model::GetDefaultAITemplateRequest &request)const;
			void getDefaultAITemplateAsync(const Model::GetDefaultAITemplateRequest& request, const GetDefaultAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDefaultAITemplateOutcomeCallable getDefaultAITemplateCallable(const Model::GetDefaultAITemplateRequest& request) const;
			GetDetectionJobOutcome getDetectionJob(const Model::GetDetectionJobRequest &request)const;
			void getDetectionJobAsync(const Model::GetDetectionJobRequest& request, const GetDetectionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectionJobOutcomeCallable getDetectionJobCallable(const Model::GetDetectionJobRequest& request) const;
			GetDetectionResultOutcome getDetectionResult(const Model::GetDetectionResultRequest &request)const;
			void getDetectionResultAsync(const Model::GetDetectionResultRequest& request, const GetDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectionResultOutcomeCallable getDetectionResultCallable(const Model::GetDetectionResultRequest& request) const;
			GetDetectionTemplateOutcome getDetectionTemplate(const Model::GetDetectionTemplateRequest &request)const;
			void getDetectionTemplateAsync(const Model::GetDetectionTemplateRequest& request, const GetDetectionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectionTemplateOutcomeCallable getDetectionTemplateCallable(const Model::GetDetectionTemplateRequest& request) const;
			GetEditingProjectOutcome getEditingProject(const Model::GetEditingProjectRequest &request)const;
			void getEditingProjectAsync(const Model::GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectOutcomeCallable getEditingProjectCallable(const Model::GetEditingProjectRequest& request) const;
			GetEditingProjectMaterialsOutcome getEditingProjectMaterials(const Model::GetEditingProjectMaterialsRequest &request)const;
			void getEditingProjectMaterialsAsync(const Model::GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectMaterialsOutcomeCallable getEditingProjectMaterialsCallable(const Model::GetEditingProjectMaterialsRequest& request) const;
			GetImageInfoOutcome getImageInfo(const Model::GetImageInfoRequest &request)const;
			void getImageInfoAsync(const Model::GetImageInfoRequest& request, const GetImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageInfoOutcomeCallable getImageInfoCallable(const Model::GetImageInfoRequest& request) const;
			GetMediaAuditAudioResultDetailOutcome getMediaAuditAudioResultDetail(const Model::GetMediaAuditAudioResultDetailRequest &request)const;
			void getMediaAuditAudioResultDetailAsync(const Model::GetMediaAuditAudioResultDetailRequest& request, const GetMediaAuditAudioResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaAuditAudioResultDetailOutcomeCallable getMediaAuditAudioResultDetailCallable(const Model::GetMediaAuditAudioResultDetailRequest& request) const;
			GetMediaAuditResultOutcome getMediaAuditResult(const Model::GetMediaAuditResultRequest &request)const;
			void getMediaAuditResultAsync(const Model::GetMediaAuditResultRequest& request, const GetMediaAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaAuditResultOutcomeCallable getMediaAuditResultCallable(const Model::GetMediaAuditResultRequest& request) const;
			GetMediaAuditResultDetailOutcome getMediaAuditResultDetail(const Model::GetMediaAuditResultDetailRequest &request)const;
			void getMediaAuditResultDetailAsync(const Model::GetMediaAuditResultDetailRequest& request, const GetMediaAuditResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaAuditResultDetailOutcomeCallable getMediaAuditResultDetailCallable(const Model::GetMediaAuditResultDetailRequest& request) const;
			GetMediaAuditResultTimelineOutcome getMediaAuditResultTimeline(const Model::GetMediaAuditResultTimelineRequest &request)const;
			void getMediaAuditResultTimelineAsync(const Model::GetMediaAuditResultTimelineRequest& request, const GetMediaAuditResultTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaAuditResultTimelineOutcomeCallable getMediaAuditResultTimelineCallable(const Model::GetMediaAuditResultTimelineRequest& request) const;
			GetMediaDNAResultOutcome getMediaDNAResult(const Model::GetMediaDNAResultRequest &request)const;
			void getMediaDNAResultAsync(const Model::GetMediaDNAResultRequest& request, const GetMediaDNAResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaDNAResultOutcomeCallable getMediaDNAResultCallable(const Model::GetMediaDNAResultRequest& request) const;
			GetMessageCallbackOutcome getMessageCallback(const Model::GetMessageCallbackRequest &request)const;
			void getMessageCallbackAsync(const Model::GetMessageCallbackRequest& request, const GetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageCallbackOutcomeCallable getMessageCallbackCallable(const Model::GetMessageCallbackRequest& request) const;
			GetMezzanineInfoOutcome getMezzanineInfo(const Model::GetMezzanineInfoRequest &request)const;
			void getMezzanineInfoAsync(const Model::GetMezzanineInfoRequest& request, const GetMezzanineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMezzanineInfoOutcomeCallable getMezzanineInfoCallable(const Model::GetMezzanineInfoRequest& request) const;
			GetPlayInfoOutcome getPlayInfo(const Model::GetPlayInfoRequest &request)const;
			void getPlayInfoAsync(const Model::GetPlayInfoRequest& request, const GetPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPlayInfoOutcomeCallable getPlayInfoCallable(const Model::GetPlayInfoRequest& request) const;
			GetTranscodeSummaryOutcome getTranscodeSummary(const Model::GetTranscodeSummaryRequest &request)const;
			void getTranscodeSummaryAsync(const Model::GetTranscodeSummaryRequest& request, const GetTranscodeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscodeSummaryOutcomeCallable getTranscodeSummaryCallable(const Model::GetTranscodeSummaryRequest& request) const;
			GetTranscodeTaskOutcome getTranscodeTask(const Model::GetTranscodeTaskRequest &request)const;
			void getTranscodeTaskAsync(const Model::GetTranscodeTaskRequest& request, const GetTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscodeTaskOutcomeCallable getTranscodeTaskCallable(const Model::GetTranscodeTaskRequest& request) const;
			GetTranscodeTemplateGroupOutcome getTranscodeTemplateGroup(const Model::GetTranscodeTemplateGroupRequest &request)const;
			void getTranscodeTemplateGroupAsync(const Model::GetTranscodeTemplateGroupRequest& request, const GetTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscodeTemplateGroupOutcomeCallable getTranscodeTemplateGroupCallable(const Model::GetTranscodeTemplateGroupRequest& request) const;
			GetURLUploadInfosOutcome getURLUploadInfos(const Model::GetURLUploadInfosRequest &request)const;
			void getURLUploadInfosAsync(const Model::GetURLUploadInfosRequest& request, const GetURLUploadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetURLUploadInfosOutcomeCallable getURLUploadInfosCallable(const Model::GetURLUploadInfosRequest& request) const;
			GetUploadDetailsOutcome getUploadDetails(const Model::GetUploadDetailsRequest &request)const;
			void getUploadDetailsAsync(const Model::GetUploadDetailsRequest& request, const GetUploadDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUploadDetailsOutcomeCallable getUploadDetailsCallable(const Model::GetUploadDetailsRequest& request) const;
			GetVideoInfoOutcome getVideoInfo(const Model::GetVideoInfoRequest &request)const;
			void getVideoInfoAsync(const Model::GetVideoInfoRequest& request, const GetVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoInfoOutcomeCallable getVideoInfoCallable(const Model::GetVideoInfoRequest& request) const;
			GetVideoInfosOutcome getVideoInfos(const Model::GetVideoInfosRequest &request)const;
			void getVideoInfosAsync(const Model::GetVideoInfosRequest& request, const GetVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoInfosOutcomeCallable getVideoInfosCallable(const Model::GetVideoInfosRequest& request) const;
			GetVideoListOutcome getVideoList(const Model::GetVideoListRequest &request)const;
			void getVideoListAsync(const Model::GetVideoListRequest& request, const GetVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoListOutcomeCallable getVideoListCallable(const Model::GetVideoListRequest& request) const;
			GetVideoPlayAuthOutcome getVideoPlayAuth(const Model::GetVideoPlayAuthRequest &request)const;
			void getVideoPlayAuthAsync(const Model::GetVideoPlayAuthRequest& request, const GetVideoPlayAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoPlayAuthOutcomeCallable getVideoPlayAuthCallable(const Model::GetVideoPlayAuthRequest& request) const;
			GetVodTemplateOutcome getVodTemplate(const Model::GetVodTemplateRequest &request)const;
			void getVodTemplateAsync(const Model::GetVodTemplateRequest& request, const GetVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVodTemplateOutcomeCallable getVodTemplateCallable(const Model::GetVodTemplateRequest& request) const;
			GetWatermarkOutcome getWatermark(const Model::GetWatermarkRequest &request)const;
			void getWatermarkAsync(const Model::GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWatermarkOutcomeCallable getWatermarkCallable(const Model::GetWatermarkRequest& request) const;
			ListAIImageInfoOutcome listAIImageInfo(const Model::ListAIImageInfoRequest &request)const;
			void listAIImageInfoAsync(const Model::ListAIImageInfoRequest& request, const ListAIImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIImageInfoOutcomeCallable listAIImageInfoCallable(const Model::ListAIImageInfoRequest& request) const;
			ListAIJobOutcome listAIJob(const Model::ListAIJobRequest &request)const;
			void listAIJobAsync(const Model::ListAIJobRequest& request, const ListAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAIJobOutcomeCallable listAIJobCallable(const Model::ListAIJobRequest& request) const;
			ListAITemplateOutcome listAITemplate(const Model::ListAITemplateRequest &request)const;
			void listAITemplateAsync(const Model::ListAITemplateRequest& request, const ListAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAITemplateOutcomeCallable listAITemplateCallable(const Model::ListAITemplateRequest& request) const;
			ListAppInfoOutcome listAppInfo(const Model::ListAppInfoRequest &request)const;
			void listAppInfoAsync(const Model::ListAppInfoRequest& request, const ListAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInfoOutcomeCallable listAppInfoCallable(const Model::ListAppInfoRequest& request) const;
			ListAppPoliciesForIdentityOutcome listAppPoliciesForIdentity(const Model::ListAppPoliciesForIdentityRequest &request)const;
			void listAppPoliciesForIdentityAsync(const Model::ListAppPoliciesForIdentityRequest& request, const ListAppPoliciesForIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppPoliciesForIdentityOutcomeCallable listAppPoliciesForIdentityCallable(const Model::ListAppPoliciesForIdentityRequest& request) const;
			ListAuditSecurityIpOutcome listAuditSecurityIp(const Model::ListAuditSecurityIpRequest &request)const;
			void listAuditSecurityIpAsync(const Model::ListAuditSecurityIpRequest& request, const ListAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuditSecurityIpOutcomeCallable listAuditSecurityIpCallable(const Model::ListAuditSecurityIpRequest& request) const;
			ListDetectionJobOutcome listDetectionJob(const Model::ListDetectionJobRequest &request)const;
			void listDetectionJobAsync(const Model::ListDetectionJobRequest& request, const ListDetectionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDetectionJobOutcomeCallable listDetectionJobCallable(const Model::ListDetectionJobRequest& request) const;
			ListDetectionTemplateOutcome listDetectionTemplate(const Model::ListDetectionTemplateRequest &request)const;
			void listDetectionTemplateAsync(const Model::ListDetectionTemplateRequest& request, const ListDetectionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDetectionTemplateOutcomeCallable listDetectionTemplateCallable(const Model::ListDetectionTemplateRequest& request) const;
			ListDynamicImageOutcome listDynamicImage(const Model::ListDynamicImageRequest &request)const;
			void listDynamicImageAsync(const Model::ListDynamicImageRequest& request, const ListDynamicImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicImageOutcomeCallable listDynamicImageCallable(const Model::ListDynamicImageRequest& request) const;
			ListLetterSendJobOutcome listLetterSendJob(const Model::ListLetterSendJobRequest &request)const;
			void listLetterSendJobAsync(const Model::ListLetterSendJobRequest& request, const ListLetterSendJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLetterSendJobOutcomeCallable listLetterSendJobCallable(const Model::ListLetterSendJobRequest& request) const;
			ListLiveRecordVideoOutcome listLiveRecordVideo(const Model::ListLiveRecordVideoRequest &request)const;
			void listLiveRecordVideoAsync(const Model::ListLiveRecordVideoRequest& request, const ListLiveRecordVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordVideoOutcomeCallable listLiveRecordVideoCallable(const Model::ListLiveRecordVideoRequest& request) const;
			ListMediaDNADeleteJobOutcome listMediaDNADeleteJob(const Model::ListMediaDNADeleteJobRequest &request)const;
			void listMediaDNADeleteJobAsync(const Model::ListMediaDNADeleteJobRequest& request, const ListMediaDNADeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaDNADeleteJobOutcomeCallable listMediaDNADeleteJobCallable(const Model::ListMediaDNADeleteJobRequest& request) const;
			ListSnapshotsOutcome listSnapshots(const Model::ListSnapshotsRequest &request)const;
			void listSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotsOutcomeCallable listSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;
			ListTranscodeTaskOutcome listTranscodeTask(const Model::ListTranscodeTaskRequest &request)const;
			void listTranscodeTaskAsync(const Model::ListTranscodeTaskRequest& request, const ListTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscodeTaskOutcomeCallable listTranscodeTaskCallable(const Model::ListTranscodeTaskRequest& request) const;
			ListTranscodeTemplateGroupOutcome listTranscodeTemplateGroup(const Model::ListTranscodeTemplateGroupRequest &request)const;
			void listTranscodeTemplateGroupAsync(const Model::ListTranscodeTemplateGroupRequest& request, const ListTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscodeTemplateGroupOutcomeCallable listTranscodeTemplateGroupCallable(const Model::ListTranscodeTemplateGroupRequest& request) const;
			ListVodRealtimeLogDeliveryDomainsOutcome listVodRealtimeLogDeliveryDomains(const Model::ListVodRealtimeLogDeliveryDomainsRequest &request)const;
			void listVodRealtimeLogDeliveryDomainsAsync(const Model::ListVodRealtimeLogDeliveryDomainsRequest& request, const ListVodRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVodRealtimeLogDeliveryDomainsOutcomeCallable listVodRealtimeLogDeliveryDomainsCallable(const Model::ListVodRealtimeLogDeliveryDomainsRequest& request) const;
			ListVodRealtimeLogDeliveryInfosOutcome listVodRealtimeLogDeliveryInfos(const Model::ListVodRealtimeLogDeliveryInfosRequest &request)const;
			void listVodRealtimeLogDeliveryInfosAsync(const Model::ListVodRealtimeLogDeliveryInfosRequest& request, const ListVodRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVodRealtimeLogDeliveryInfosOutcomeCallable listVodRealtimeLogDeliveryInfosCallable(const Model::ListVodRealtimeLogDeliveryInfosRequest& request) const;
			ListVodTemplateOutcome listVodTemplate(const Model::ListVodTemplateRequest &request)const;
			void listVodTemplateAsync(const Model::ListVodTemplateRequest& request, const ListVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVodTemplateOutcomeCallable listVodTemplateCallable(const Model::ListVodTemplateRequest& request) const;
			ListWatermarkOutcome listWatermark(const Model::ListWatermarkRequest &request)const;
			void listWatermarkAsync(const Model::ListWatermarkRequest& request, const ListWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWatermarkOutcomeCallable listWatermarkCallable(const Model::ListWatermarkRequest& request) const;
			MoveAppResourceOutcome moveAppResource(const Model::MoveAppResourceRequest &request)const;
			void moveAppResourceAsync(const Model::MoveAppResourceRequest& request, const MoveAppResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveAppResourceOutcomeCallable moveAppResourceCallable(const Model::MoveAppResourceRequest& request) const;
			PreloadVodObjectCachesOutcome preloadVodObjectCaches(const Model::PreloadVodObjectCachesRequest &request)const;
			void preloadVodObjectCachesAsync(const Model::PreloadVodObjectCachesRequest& request, const PreloadVodObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadVodObjectCachesOutcomeCallable preloadVodObjectCachesCallable(const Model::PreloadVodObjectCachesRequest& request) const;
			ProduceEditingProjectVideoOutcome produceEditingProjectVideo(const Model::ProduceEditingProjectVideoRequest &request)const;
			void produceEditingProjectVideoAsync(const Model::ProduceEditingProjectVideoRequest& request, const ProduceEditingProjectVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProduceEditingProjectVideoOutcomeCallable produceEditingProjectVideoCallable(const Model::ProduceEditingProjectVideoRequest& request) const;
			RefreshUploadVideoOutcome refreshUploadVideo(const Model::RefreshUploadVideoRequest &request)const;
			void refreshUploadVideoAsync(const Model::RefreshUploadVideoRequest& request, const RefreshUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshUploadVideoOutcomeCallable refreshUploadVideoCallable(const Model::RefreshUploadVideoRequest& request) const;
			RefreshVodObjectCachesOutcome refreshVodObjectCaches(const Model::RefreshVodObjectCachesRequest &request)const;
			void refreshVodObjectCachesAsync(const Model::RefreshVodObjectCachesRequest& request, const RefreshVodObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshVodObjectCachesOutcomeCallable refreshVodObjectCachesCallable(const Model::RefreshVodObjectCachesRequest& request) const;
			RegisterMediaOutcome registerMedia(const Model::RegisterMediaRequest &request)const;
			void registerMediaAsync(const Model::RegisterMediaRequest& request, const RegisterMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaOutcomeCallable registerMediaCallable(const Model::RegisterMediaRequest& request) const;
			SearchEditingProjectOutcome searchEditingProject(const Model::SearchEditingProjectRequest &request)const;
			void searchEditingProjectAsync(const Model::SearchEditingProjectRequest& request, const SearchEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchEditingProjectOutcomeCallable searchEditingProjectCallable(const Model::SearchEditingProjectRequest& request) const;
			SearchMediaOutcome searchMedia(const Model::SearchMediaRequest &request)const;
			void searchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaOutcomeCallable searchMediaCallable(const Model::SearchMediaRequest& request) const;
			SetAuditSecurityIpOutcome setAuditSecurityIp(const Model::SetAuditSecurityIpRequest &request)const;
			void setAuditSecurityIpAsync(const Model::SetAuditSecurityIpRequest& request, const SetAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAuditSecurityIpOutcomeCallable setAuditSecurityIpCallable(const Model::SetAuditSecurityIpRequest& request) const;
			SetCrossdomainContentOutcome setCrossdomainContent(const Model::SetCrossdomainContentRequest &request)const;
			void setCrossdomainContentAsync(const Model::SetCrossdomainContentRequest& request, const SetCrossdomainContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCrossdomainContentOutcomeCallable setCrossdomainContentCallable(const Model::SetCrossdomainContentRequest& request) const;
			SetDefaultAITemplateOutcome setDefaultAITemplate(const Model::SetDefaultAITemplateRequest &request)const;
			void setDefaultAITemplateAsync(const Model::SetDefaultAITemplateRequest& request, const SetDefaultAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultAITemplateOutcomeCallable setDefaultAITemplateCallable(const Model::SetDefaultAITemplateRequest& request) const;
			SetDefaultTranscodeTemplateGroupOutcome setDefaultTranscodeTemplateGroup(const Model::SetDefaultTranscodeTemplateGroupRequest &request)const;
			void setDefaultTranscodeTemplateGroupAsync(const Model::SetDefaultTranscodeTemplateGroupRequest& request, const SetDefaultTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultTranscodeTemplateGroupOutcomeCallable setDefaultTranscodeTemplateGroupCallable(const Model::SetDefaultTranscodeTemplateGroupRequest& request) const;
			SetDefaultWatermarkOutcome setDefaultWatermark(const Model::SetDefaultWatermarkRequest &request)const;
			void setDefaultWatermarkAsync(const Model::SetDefaultWatermarkRequest& request, const SetDefaultWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultWatermarkOutcomeCallable setDefaultWatermarkCallable(const Model::SetDefaultWatermarkRequest& request) const;
			SetEditingProjectMaterialsOutcome setEditingProjectMaterials(const Model::SetEditingProjectMaterialsRequest &request)const;
			void setEditingProjectMaterialsAsync(const Model::SetEditingProjectMaterialsRequest& request, const SetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEditingProjectMaterialsOutcomeCallable setEditingProjectMaterialsCallable(const Model::SetEditingProjectMaterialsRequest& request) const;
			SetMessageCallbackOutcome setMessageCallback(const Model::SetMessageCallbackRequest &request)const;
			void setMessageCallbackAsync(const Model::SetMessageCallbackRequest& request, const SetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetMessageCallbackOutcomeCallable setMessageCallbackCallable(const Model::SetMessageCallbackRequest& request) const;
			SetVodDomainCertificateOutcome setVodDomainCertificate(const Model::SetVodDomainCertificateRequest &request)const;
			void setVodDomainCertificateAsync(const Model::SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVodDomainCertificateOutcomeCallable setVodDomainCertificateCallable(const Model::SetVodDomainCertificateRequest& request) const;
			SubmitAICaptionExtractionJobOutcome submitAICaptionExtractionJob(const Model::SubmitAICaptionExtractionJobRequest &request)const;
			void submitAICaptionExtractionJobAsync(const Model::SubmitAICaptionExtractionJobRequest& request, const SubmitAICaptionExtractionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAICaptionExtractionJobOutcomeCallable submitAICaptionExtractionJobCallable(const Model::SubmitAICaptionExtractionJobRequest& request) const;
			SubmitAIImageAuditJobOutcome submitAIImageAuditJob(const Model::SubmitAIImageAuditJobRequest &request)const;
			void submitAIImageAuditJobAsync(const Model::SubmitAIImageAuditJobRequest& request, const SubmitAIImageAuditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIImageAuditJobOutcomeCallable submitAIImageAuditJobCallable(const Model::SubmitAIImageAuditJobRequest& request) const;
			SubmitAIImageJobOutcome submitAIImageJob(const Model::SubmitAIImageJobRequest &request)const;
			void submitAIImageJobAsync(const Model::SubmitAIImageJobRequest& request, const SubmitAIImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIImageJobOutcomeCallable submitAIImageJobCallable(const Model::SubmitAIImageJobRequest& request) const;
			SubmitAIJobOutcome submitAIJob(const Model::SubmitAIJobRequest &request)const;
			void submitAIJobAsync(const Model::SubmitAIJobRequest& request, const SubmitAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIJobOutcomeCallable submitAIJobCallable(const Model::SubmitAIJobRequest& request) const;
			SubmitAIMediaAuditJobOutcome submitAIMediaAuditJob(const Model::SubmitAIMediaAuditJobRequest &request)const;
			void submitAIMediaAuditJobAsync(const Model::SubmitAIMediaAuditJobRequest& request, const SubmitAIMediaAuditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAIMediaAuditJobOutcomeCallable submitAIMediaAuditJobCallable(const Model::SubmitAIMediaAuditJobRequest& request) const;
			SubmitDetectionJobOutcome submitDetectionJob(const Model::SubmitDetectionJobRequest &request)const;
			void submitDetectionJobAsync(const Model::SubmitDetectionJobRequest& request, const SubmitDetectionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDetectionJobOutcomeCallable submitDetectionJobCallable(const Model::SubmitDetectionJobRequest& request) const;
			SubmitDynamicImageJobOutcome submitDynamicImageJob(const Model::SubmitDynamicImageJobRequest &request)const;
			void submitDynamicImageJobAsync(const Model::SubmitDynamicImageJobRequest& request, const SubmitDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDynamicImageJobOutcomeCallable submitDynamicImageJobCallable(const Model::SubmitDynamicImageJobRequest& request) const;
			SubmitLiveEditingOutcome submitLiveEditing(const Model::SubmitLiveEditingRequest &request)const;
			void submitLiveEditingAsync(const Model::SubmitLiveEditingRequest& request, const SubmitLiveEditingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLiveEditingOutcomeCallable submitLiveEditingCallable(const Model::SubmitLiveEditingRequest& request) const;
			SubmitMediaDNADeleteJobOutcome submitMediaDNADeleteJob(const Model::SubmitMediaDNADeleteJobRequest &request)const;
			void submitMediaDNADeleteJobAsync(const Model::SubmitMediaDNADeleteJobRequest& request, const SubmitMediaDNADeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaDNADeleteJobOutcomeCallable submitMediaDNADeleteJobCallable(const Model::SubmitMediaDNADeleteJobRequest& request) const;
			SubmitPreprocessJobsOutcome submitPreprocessJobs(const Model::SubmitPreprocessJobsRequest &request)const;
			void submitPreprocessJobsAsync(const Model::SubmitPreprocessJobsRequest& request, const SubmitPreprocessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPreprocessJobsOutcomeCallable submitPreprocessJobsCallable(const Model::SubmitPreprocessJobsRequest& request) const;
			SubmitSnapshotJobOutcome submitSnapshotJob(const Model::SubmitSnapshotJobRequest &request)const;
			void submitSnapshotJobAsync(const Model::SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSnapshotJobOutcomeCallable submitSnapshotJobCallable(const Model::SubmitSnapshotJobRequest& request) const;
			SubmitTranscodeJobsOutcome submitTranscodeJobs(const Model::SubmitTranscodeJobsRequest &request)const;
			void submitTranscodeJobsAsync(const Model::SubmitTranscodeJobsRequest& request, const SubmitTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTranscodeJobsOutcomeCallable submitTranscodeJobsCallable(const Model::SubmitTranscodeJobsRequest& request) const;
			SubmitWorkflowJobOutcome submitWorkflowJob(const Model::SubmitWorkflowJobRequest &request)const;
			void submitWorkflowJobAsync(const Model::SubmitWorkflowJobRequest& request, const SubmitWorkflowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitWorkflowJobOutcomeCallable submitWorkflowJobCallable(const Model::SubmitWorkflowJobRequest& request) const;
			TagVodResourcesOutcome tagVodResources(const Model::TagVodResourcesRequest &request)const;
			void tagVodResourcesAsync(const Model::TagVodResourcesRequest& request, const TagVodResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagVodResourcesOutcomeCallable tagVodResourcesCallable(const Model::TagVodResourcesRequest& request) const;
			UnTagVodResourcesOutcome unTagVodResources(const Model::UnTagVodResourcesRequest &request)const;
			void unTagVodResourcesAsync(const Model::UnTagVodResourcesRequest& request, const UnTagVodResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagVodResourcesOutcomeCallable unTagVodResourcesCallable(const Model::UnTagVodResourcesRequest& request) const;
			UpdateAITemplateOutcome updateAITemplate(const Model::UpdateAITemplateRequest &request)const;
			void updateAITemplateAsync(const Model::UpdateAITemplateRequest& request, const UpdateAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAITemplateOutcomeCallable updateAITemplateCallable(const Model::UpdateAITemplateRequest& request) const;
			UpdateAppInfoOutcome updateAppInfo(const Model::UpdateAppInfoRequest &request)const;
			void updateAppInfoAsync(const Model::UpdateAppInfoRequest& request, const UpdateAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppInfoOutcomeCallable updateAppInfoCallable(const Model::UpdateAppInfoRequest& request) const;
			UpdateAttachedMediaInfosOutcome updateAttachedMediaInfos(const Model::UpdateAttachedMediaInfosRequest &request)const;
			void updateAttachedMediaInfosAsync(const Model::UpdateAttachedMediaInfosRequest& request, const UpdateAttachedMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAttachedMediaInfosOutcomeCallable updateAttachedMediaInfosCallable(const Model::UpdateAttachedMediaInfosRequest& request) const;
			UpdateCategoryOutcome updateCategory(const Model::UpdateCategoryRequest &request)const;
			void updateCategoryAsync(const Model::UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCategoryOutcomeCallable updateCategoryCallable(const Model::UpdateCategoryRequest& request) const;
			UpdateDetectionJobOutcome updateDetectionJob(const Model::UpdateDetectionJobRequest &request)const;
			void updateDetectionJobAsync(const Model::UpdateDetectionJobRequest& request, const UpdateDetectionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDetectionJobOutcomeCallable updateDetectionJobCallable(const Model::UpdateDetectionJobRequest& request) const;
			UpdateDetectionTemplateOutcome updateDetectionTemplate(const Model::UpdateDetectionTemplateRequest &request)const;
			void updateDetectionTemplateAsync(const Model::UpdateDetectionTemplateRequest& request, const UpdateDetectionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDetectionTemplateOutcomeCallable updateDetectionTemplateCallable(const Model::UpdateDetectionTemplateRequest& request) const;
			UpdateEditingProjectOutcome updateEditingProject(const Model::UpdateEditingProjectRequest &request)const;
			void updateEditingProjectAsync(const Model::UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEditingProjectOutcomeCallable updateEditingProjectCallable(const Model::UpdateEditingProjectRequest& request) const;
			UpdateImageInfosOutcome updateImageInfos(const Model::UpdateImageInfosRequest &request)const;
			void updateImageInfosAsync(const Model::UpdateImageInfosRequest& request, const UpdateImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageInfosOutcomeCallable updateImageInfosCallable(const Model::UpdateImageInfosRequest& request) const;
			UpdateStreamInfoOutcome updateStreamInfo(const Model::UpdateStreamInfoRequest &request)const;
			void updateStreamInfoAsync(const Model::UpdateStreamInfoRequest& request, const UpdateStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStreamInfoOutcomeCallable updateStreamInfoCallable(const Model::UpdateStreamInfoRequest& request) const;
			UpdateTranscodeTemplateGroupOutcome updateTranscodeTemplateGroup(const Model::UpdateTranscodeTemplateGroupRequest &request)const;
			void updateTranscodeTemplateGroupAsync(const Model::UpdateTranscodeTemplateGroupRequest& request, const UpdateTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTranscodeTemplateGroupOutcomeCallable updateTranscodeTemplateGroupCallable(const Model::UpdateTranscodeTemplateGroupRequest& request) const;
			UpdateVideoInfoOutcome updateVideoInfo(const Model::UpdateVideoInfoRequest &request)const;
			void updateVideoInfoAsync(const Model::UpdateVideoInfoRequest& request, const UpdateVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVideoInfoOutcomeCallable updateVideoInfoCallable(const Model::UpdateVideoInfoRequest& request) const;
			UpdateVideoInfosOutcome updateVideoInfos(const Model::UpdateVideoInfosRequest &request)const;
			void updateVideoInfosAsync(const Model::UpdateVideoInfosRequest& request, const UpdateVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVideoInfosOutcomeCallable updateVideoInfosCallable(const Model::UpdateVideoInfosRequest& request) const;
			UpdateVodDomainOutcome updateVodDomain(const Model::UpdateVodDomainRequest &request)const;
			void updateVodDomainAsync(const Model::UpdateVodDomainRequest& request, const UpdateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVodDomainOutcomeCallable updateVodDomainCallable(const Model::UpdateVodDomainRequest& request) const;
			UpdateVodTemplateOutcome updateVodTemplate(const Model::UpdateVodTemplateRequest &request)const;
			void updateVodTemplateAsync(const Model::UpdateVodTemplateRequest& request, const UpdateVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVodTemplateOutcomeCallable updateVodTemplateCallable(const Model::UpdateVodTemplateRequest& request) const;
			UpdateWatermarkOutcome updateWatermark(const Model::UpdateWatermarkRequest &request)const;
			void updateWatermarkAsync(const Model::UpdateWatermarkRequest& request, const UpdateWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWatermarkOutcomeCallable updateWatermarkCallable(const Model::UpdateWatermarkRequest& request) const;
			UploadMediaByURLOutcome uploadMediaByURL(const Model::UploadMediaByURLRequest &request)const;
			void uploadMediaByURLAsync(const Model::UploadMediaByURLRequest& request, const UploadMediaByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMediaByURLOutcomeCallable uploadMediaByURLCallable(const Model::UploadMediaByURLRequest& request) const;
			UploadStreamByURLOutcome uploadStreamByURL(const Model::UploadStreamByURLRequest &request)const;
			void uploadStreamByURLAsync(const Model::UploadStreamByURLRequest& request, const UploadStreamByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadStreamByURLOutcomeCallable uploadStreamByURLCallable(const Model::UploadStreamByURLRequest& request) const;
			VerifyVodDomainOwnerOutcome verifyVodDomainOwner(const Model::VerifyVodDomainOwnerRequest &request)const;
			void verifyVodDomainOwnerAsync(const Model::VerifyVodDomainOwnerRequest& request, const VerifyVodDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyVodDomainOwnerOutcomeCallable verifyVodDomainOwnerCallable(const Model::VerifyVodDomainOwnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VOD_VODCLIENT_H_
