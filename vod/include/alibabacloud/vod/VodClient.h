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
#include "model/AddEditingProjectMaterialsRequest.h"
#include "model/AddEditingProjectMaterialsResult.h"
#include "model/AddTranscodeTemplateGroupRequest.h"
#include "model/AddTranscodeTemplateGroupResult.h"
#include "model/AddVodDomainRequest.h"
#include "model/AddVodDomainResult.h"
#include "model/AddVodStorageForAppRequest.h"
#include "model/AddVodStorageForAppResult.h"
#include "model/AddVodTemplateRequest.h"
#include "model/AddVodTemplateResult.h"
#include "model/AddWatermarkRequest.h"
#include "model/AddWatermarkResult.h"
#include "model/AttachAppPolicyToIdentityRequest.h"
#include "model/AttachAppPolicyToIdentityResult.h"
#include "model/BatchGetMediaInfosRequest.h"
#include "model/BatchGetMediaInfosResult.h"
#include "model/BatchSetVodDomainConfigsRequest.h"
#include "model/BatchSetVodDomainConfigsResult.h"
#include "model/BatchStartVodDomainRequest.h"
#include "model/BatchStartVodDomainResult.h"
#include "model/BatchStopVodDomainRequest.h"
#include "model/BatchStopVodDomainResult.h"
#include "model/CancelUrlUploadJobsRequest.h"
#include "model/CancelUrlUploadJobsResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CreateAppInfoRequest.h"
#include "model/CreateAppInfoResult.h"
#include "model/CreateAuditRequest.h"
#include "model/CreateAuditResult.h"
#include "model/CreateUploadAttachedMediaRequest.h"
#include "model/CreateUploadAttachedMediaResult.h"
#include "model/CreateUploadImageRequest.h"
#include "model/CreateUploadImageResult.h"
#include "model/CreateUploadVideoRequest.h"
#include "model/CreateUploadVideoResult.h"
#include "model/DecryptKMSDataKeyRequest.h"
#include "model/DecryptKMSDataKeyResult.h"
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
#include "model/DeleteDynamicImageRequest.h"
#include "model/DeleteDynamicImageResult.h"
#include "model/DeleteEditingProjectRequest.h"
#include "model/DeleteEditingProjectResult.h"
#include "model/DeleteEditingProjectMaterialsRequest.h"
#include "model/DeleteEditingProjectMaterialsResult.h"
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
#include "model/DeleteVodSpecificConfigRequest.h"
#include "model/DeleteVodSpecificConfigResult.h"
#include "model/DeleteVodTemplateRequest.h"
#include "model/DeleteVodTemplateResult.h"
#include "model/DeleteWatermarkRequest.h"
#include "model/DeleteWatermarkResult.h"
#include "model/DescribeMediaDistributionRequest.h"
#include "model/DescribeMediaDistributionResult.h"
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
#include "model/DescribeVodDomainBpsDataByLayerRequest.h"
#include "model/DescribeVodDomainBpsDataByLayerResult.h"
#include "model/DescribeVodDomainCertificateInfoRequest.h"
#include "model/DescribeVodDomainCertificateInfoResult.h"
#include "model/DescribeVodDomainConfigsRequest.h"
#include "model/DescribeVodDomainConfigsResult.h"
#include "model/DescribeVodDomainDetailRequest.h"
#include "model/DescribeVodDomainDetailResult.h"
#include "model/DescribeVodDomainHitRateDataRequest.h"
#include "model/DescribeVodDomainHitRateDataResult.h"
#include "model/DescribeVodDomainLogRequest.h"
#include "model/DescribeVodDomainLogResult.h"
#include "model/DescribeVodDomainMax95BpsDataRequest.h"
#include "model/DescribeVodDomainMax95BpsDataResult.h"
#include "model/DescribeVodDomainQpsDataRequest.h"
#include "model/DescribeVodDomainQpsDataResult.h"
#include "model/DescribeVodDomainRealTimeBpsDataRequest.h"
#include "model/DescribeVodDomainRealTimeBpsDataResult.h"
#include "model/DescribeVodDomainRealTimeByteHitRateDataRequest.h"
#include "model/DescribeVodDomainRealTimeByteHitRateDataResult.h"
#include "model/DescribeVodDomainRealTimeDetailDataRequest.h"
#include "model/DescribeVodDomainRealTimeDetailDataResult.h"
#include "model/DescribeVodDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeVodDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeVodDomainRealTimeQpsDataRequest.h"
#include "model/DescribeVodDomainRealTimeQpsDataResult.h"
#include "model/DescribeVodDomainRealTimeReqHitRateDataRequest.h"
#include "model/DescribeVodDomainRealTimeReqHitRateDataResult.h"
#include "model/DescribeVodDomainRealTimeTrafficDataRequest.h"
#include "model/DescribeVodDomainRealTimeTrafficDataResult.h"
#include "model/DescribeVodDomainReqHitRateDataRequest.h"
#include "model/DescribeVodDomainReqHitRateDataResult.h"
#include "model/DescribeVodDomainSrcBpsDataRequest.h"
#include "model/DescribeVodDomainSrcBpsDataResult.h"
#include "model/DescribeVodDomainSrcTrafficDataRequest.h"
#include "model/DescribeVodDomainSrcTrafficDataResult.h"
#include "model/DescribeVodDomainTrafficDataRequest.h"
#include "model/DescribeVodDomainTrafficDataResult.h"
#include "model/DescribeVodDomainUsageDataRequest.h"
#include "model/DescribeVodDomainUsageDataResult.h"
#include "model/DescribeVodEditingUsageDataRequest.h"
#include "model/DescribeVodEditingUsageDataResult.h"
#include "model/DescribeVodMediaPlayDataRequest.h"
#include "model/DescribeVodMediaPlayDataResult.h"
#include "model/DescribeVodRangeDataByLocateAndIspServiceRequest.h"
#include "model/DescribeVodRangeDataByLocateAndIspServiceResult.h"
#include "model/DescribeVodRefreshQuotaRequest.h"
#include "model/DescribeVodRefreshQuotaResult.h"
#include "model/DescribeVodRefreshTasksRequest.h"
#include "model/DescribeVodRefreshTasksResult.h"
#include "model/DescribeVodSSLCertificateListRequest.h"
#include "model/DescribeVodSSLCertificateListResult.h"
#include "model/DescribeVodStorageDataRequest.h"
#include "model/DescribeVodStorageDataResult.h"
#include "model/DescribeVodTieringStorageDataRequest.h"
#include "model/DescribeVodTieringStorageDataResult.h"
#include "model/DescribeVodTieringStorageRetrievalDataRequest.h"
#include "model/DescribeVodTieringStorageRetrievalDataResult.h"
#include "model/DescribeVodTranscodeDataRequest.h"
#include "model/DescribeVodTranscodeDataResult.h"
#include "model/DescribeVodUserDomainsRequest.h"
#include "model/DescribeVodUserDomainsResult.h"
#include "model/DescribeVodVerifyContentRequest.h"
#include "model/DescribeVodVerifyContentResult.h"
#include "model/DetachAppPolicyFromIdentityRequest.h"
#include "model/DetachAppPolicyFromIdentityResult.h"
#include "model/GenerateDownloadSecretKeyRequest.h"
#include "model/GenerateDownloadSecretKeyResult.h"
#include "model/GenerateKMSDataKeyRequest.h"
#include "model/GenerateKMSDataKeyResult.h"
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
#include "model/GetDailyPlayRegionStatisRequest.h"
#include "model/GetDailyPlayRegionStatisResult.h"
#include "model/GetDefaultAITemplateRequest.h"
#include "model/GetDefaultAITemplateResult.h"
#include "model/GetDigitalWatermarkExtractResultRequest.h"
#include "model/GetDigitalWatermarkExtractResultResult.h"
#include "model/GetEditingProjectRequest.h"
#include "model/GetEditingProjectResult.h"
#include "model/GetEditingProjectMaterialsRequest.h"
#include "model/GetEditingProjectMaterialsResult.h"
#include "model/GetImageInfoRequest.h"
#include "model/GetImageInfoResult.h"
#include "model/GetImageInfosRequest.h"
#include "model/GetImageInfosResult.h"
#include "model/GetJobDetailRequest.h"
#include "model/GetJobDetailResult.h"
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
#include "model/GetMediaRefreshJobsRequest.h"
#include "model/GetMediaRefreshJobsResult.h"
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
#include "model/ListDynamicImageRequest.h"
#include "model/ListDynamicImageResult.h"
#include "model/ListJobInfoRequest.h"
#include "model/ListJobInfoResult.h"
#include "model/ListLiveRecordVideoRequest.h"
#include "model/ListLiveRecordVideoResult.h"
#include "model/ListSnapshotsRequest.h"
#include "model/ListSnapshotsResult.h"
#include "model/ListTranscodeTaskRequest.h"
#include "model/ListTranscodeTaskResult.h"
#include "model/ListTranscodeTemplateGroupRequest.h"
#include "model/ListTranscodeTemplateGroupResult.h"
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
#include "model/RefreshMediaPlayUrlsRequest.h"
#include "model/RefreshMediaPlayUrlsResult.h"
#include "model/RefreshUploadVideoRequest.h"
#include "model/RefreshUploadVideoResult.h"
#include "model/RefreshVodObjectCachesRequest.h"
#include "model/RefreshVodObjectCachesResult.h"
#include "model/RegisterMediaRequest.h"
#include "model/RegisterMediaResult.h"
#include "model/RestoreMediaRequest.h"
#include "model/RestoreMediaResult.h"
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
#include "model/SetVodDomainSSLCertificateRequest.h"
#include "model/SetVodDomainSSLCertificateResult.h"
#include "model/SubmitAIImageAuditJobRequest.h"
#include "model/SubmitAIImageAuditJobResult.h"
#include "model/SubmitAIImageJobRequest.h"
#include "model/SubmitAIImageJobResult.h"
#include "model/SubmitAIJobRequest.h"
#include "model/SubmitAIJobResult.h"
#include "model/SubmitAIMediaAuditJobRequest.h"
#include "model/SubmitAIMediaAuditJobResult.h"
#include "model/SubmitDigitalWatermarkExtractJobRequest.h"
#include "model/SubmitDigitalWatermarkExtractJobResult.h"
#include "model/SubmitDynamicImageJobRequest.h"
#include "model/SubmitDynamicImageJobResult.h"
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
#include "model/UpdateAITemplateRequest.h"
#include "model/UpdateAITemplateResult.h"
#include "model/UpdateAppInfoRequest.h"
#include "model/UpdateAppInfoResult.h"
#include "model/UpdateAttachedMediaInfosRequest.h"
#include "model/UpdateAttachedMediaInfosResult.h"
#include "model/UpdateCategoryRequest.h"
#include "model/UpdateCategoryResult.h"
#include "model/UpdateEditingProjectRequest.h"
#include "model/UpdateEditingProjectResult.h"
#include "model/UpdateImageInfosRequest.h"
#include "model/UpdateImageInfosResult.h"
#include "model/UpdateMediaStorageClassRequest.h"
#include "model/UpdateMediaStorageClassResult.h"
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
			typedef Outcome<Error, Model::AddEditingProjectMaterialsResult> AddEditingProjectMaterialsOutcome;
			typedef std::future<AddEditingProjectMaterialsOutcome> AddEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddEditingProjectMaterialsRequest&, const AddEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::AddTranscodeTemplateGroupResult> AddTranscodeTemplateGroupOutcome;
			typedef std::future<AddTranscodeTemplateGroupOutcome> AddTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddTranscodeTemplateGroupRequest&, const AddTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTranscodeTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::AddVodDomainResult> AddVodDomainOutcome;
			typedef std::future<AddVodDomainOutcome> AddVodDomainOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodDomainRequest&, const AddVodDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodDomainAsyncHandler;
			typedef Outcome<Error, Model::AddVodStorageForAppResult> AddVodStorageForAppOutcome;
			typedef std::future<AddVodStorageForAppOutcome> AddVodStorageForAppOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodStorageForAppRequest&, const AddVodStorageForAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodStorageForAppAsyncHandler;
			typedef Outcome<Error, Model::AddVodTemplateResult> AddVodTemplateOutcome;
			typedef std::future<AddVodTemplateOutcome> AddVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddVodTemplateRequest&, const AddVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddWatermarkResult> AddWatermarkOutcome;
			typedef std::future<AddWatermarkOutcome> AddWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AddWatermarkRequest&, const AddWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWatermarkAsyncHandler;
			typedef Outcome<Error, Model::AttachAppPolicyToIdentityResult> AttachAppPolicyToIdentityOutcome;
			typedef std::future<AttachAppPolicyToIdentityOutcome> AttachAppPolicyToIdentityOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::AttachAppPolicyToIdentityRequest&, const AttachAppPolicyToIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachAppPolicyToIdentityAsyncHandler;
			typedef Outcome<Error, Model::BatchGetMediaInfosResult> BatchGetMediaInfosOutcome;
			typedef std::future<BatchGetMediaInfosOutcome> BatchGetMediaInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::BatchGetMediaInfosRequest&, const BatchGetMediaInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetMediaInfosAsyncHandler;
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
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAppInfoResult> CreateAppInfoOutcome;
			typedef std::future<CreateAppInfoOutcome> CreateAppInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateAppInfoRequest&, const CreateAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppInfoAsyncHandler;
			typedef Outcome<Error, Model::CreateAuditResult> CreateAuditOutcome;
			typedef std::future<CreateAuditOutcome> CreateAuditOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateAuditRequest&, const CreateAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadAttachedMediaResult> CreateUploadAttachedMediaOutcome;
			typedef std::future<CreateUploadAttachedMediaOutcome> CreateUploadAttachedMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadAttachedMediaRequest&, const CreateUploadAttachedMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadAttachedMediaAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadImageResult> CreateUploadImageOutcome;
			typedef std::future<CreateUploadImageOutcome> CreateUploadImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadImageRequest&, const CreateUploadImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadImageAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadVideoResult> CreateUploadVideoOutcome;
			typedef std::future<CreateUploadVideoOutcome> CreateUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::CreateUploadVideoRequest&, const CreateUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::DecryptKMSDataKeyResult> DecryptKMSDataKeyOutcome;
			typedef std::future<DecryptKMSDataKeyOutcome> DecryptKMSDataKeyOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DecryptKMSDataKeyRequest&, const DecryptKMSDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptKMSDataKeyAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteDynamicImageResult> DeleteDynamicImageOutcome;
			typedef std::future<DeleteDynamicImageOutcome> DeleteDynamicImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteDynamicImageRequest&, const DeleteDynamicImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDynamicImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectResult> DeleteEditingProjectOutcome;
			typedef std::future<DeleteEditingProjectOutcome> DeleteEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteEditingProjectRequest&, const DeleteEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteEditingProjectMaterialsResult> DeleteEditingProjectMaterialsOutcome;
			typedef std::future<DeleteEditingProjectMaterialsOutcome> DeleteEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteEditingProjectMaterialsRequest&, const DeleteEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEditingProjectMaterialsAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteVodSpecificConfigResult> DeleteVodSpecificConfigOutcome;
			typedef std::future<DeleteVodSpecificConfigOutcome> DeleteVodSpecificConfigOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodSpecificConfigRequest&, const DeleteVodSpecificConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodSpecificConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteVodTemplateResult> DeleteVodTemplateOutcome;
			typedef std::future<DeleteVodTemplateOutcome> DeleteVodTemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteVodTemplateRequest&, const DeleteVodTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteWatermarkResult> DeleteWatermarkOutcome;
			typedef std::future<DeleteWatermarkOutcome> DeleteWatermarkOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DeleteWatermarkRequest&, const DeleteWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DescribeMediaDistributionResult> DescribeMediaDistributionOutcome;
			typedef std::future<DescribeMediaDistributionOutcome> DescribeMediaDistributionOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeMediaDistributionRequest&, const DescribeMediaDistributionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaDistributionAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeVodDomainBpsDataByLayerResult> DescribeVodDomainBpsDataByLayerOutcome;
			typedef std::future<DescribeVodDomainBpsDataByLayerOutcome> DescribeVodDomainBpsDataByLayerOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainBpsDataByLayerRequest&, const DescribeVodDomainBpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainBpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainCertificateInfoResult> DescribeVodDomainCertificateInfoOutcome;
			typedef std::future<DescribeVodDomainCertificateInfoOutcome> DescribeVodDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainCertificateInfoRequest&, const DescribeVodDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainConfigsResult> DescribeVodDomainConfigsOutcome;
			typedef std::future<DescribeVodDomainConfigsOutcome> DescribeVodDomainConfigsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainConfigsRequest&, const DescribeVodDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainDetailResult> DescribeVodDomainDetailOutcome;
			typedef std::future<DescribeVodDomainDetailOutcome> DescribeVodDomainDetailOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainDetailRequest&, const DescribeVodDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainHitRateDataResult> DescribeVodDomainHitRateDataOutcome;
			typedef std::future<DescribeVodDomainHitRateDataOutcome> DescribeVodDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainHitRateDataRequest&, const DescribeVodDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainLogResult> DescribeVodDomainLogOutcome;
			typedef std::future<DescribeVodDomainLogOutcome> DescribeVodDomainLogOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainLogRequest&, const DescribeVodDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainMax95BpsDataResult> DescribeVodDomainMax95BpsDataOutcome;
			typedef std::future<DescribeVodDomainMax95BpsDataOutcome> DescribeVodDomainMax95BpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainMax95BpsDataRequest&, const DescribeVodDomainMax95BpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainMax95BpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainQpsDataResult> DescribeVodDomainQpsDataOutcome;
			typedef std::future<DescribeVodDomainQpsDataOutcome> DescribeVodDomainQpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainQpsDataRequest&, const DescribeVodDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeBpsDataResult> DescribeVodDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeBpsDataOutcome> DescribeVodDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeBpsDataRequest&, const DescribeVodDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeByteHitRateDataResult> DescribeVodDomainRealTimeByteHitRateDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeByteHitRateDataOutcome> DescribeVodDomainRealTimeByteHitRateDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeByteHitRateDataRequest&, const DescribeVodDomainRealTimeByteHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeByteHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeDetailDataResult> DescribeVodDomainRealTimeDetailDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeDetailDataOutcome> DescribeVodDomainRealTimeDetailDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeDetailDataRequest&, const DescribeVodDomainRealTimeDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeHttpCodeDataResult> DescribeVodDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeHttpCodeDataOutcome> DescribeVodDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeHttpCodeDataRequest&, const DescribeVodDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeQpsDataResult> DescribeVodDomainRealTimeQpsDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeQpsDataOutcome> DescribeVodDomainRealTimeQpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeQpsDataRequest&, const DescribeVodDomainRealTimeQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeReqHitRateDataResult> DescribeVodDomainRealTimeReqHitRateDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeReqHitRateDataOutcome> DescribeVodDomainRealTimeReqHitRateDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeReqHitRateDataRequest&, const DescribeVodDomainRealTimeReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainRealTimeTrafficDataResult> DescribeVodDomainRealTimeTrafficDataOutcome;
			typedef std::future<DescribeVodDomainRealTimeTrafficDataOutcome> DescribeVodDomainRealTimeTrafficDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainRealTimeTrafficDataRequest&, const DescribeVodDomainRealTimeTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainRealTimeTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainReqHitRateDataResult> DescribeVodDomainReqHitRateDataOutcome;
			typedef std::future<DescribeVodDomainReqHitRateDataOutcome> DescribeVodDomainReqHitRateDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainReqHitRateDataRequest&, const DescribeVodDomainReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainSrcBpsDataResult> DescribeVodDomainSrcBpsDataOutcome;
			typedef std::future<DescribeVodDomainSrcBpsDataOutcome> DescribeVodDomainSrcBpsDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainSrcBpsDataRequest&, const DescribeVodDomainSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainSrcTrafficDataResult> DescribeVodDomainSrcTrafficDataOutcome;
			typedef std::future<DescribeVodDomainSrcTrafficDataOutcome> DescribeVodDomainSrcTrafficDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainSrcTrafficDataRequest&, const DescribeVodDomainSrcTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainSrcTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainTrafficDataResult> DescribeVodDomainTrafficDataOutcome;
			typedef std::future<DescribeVodDomainTrafficDataOutcome> DescribeVodDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainTrafficDataRequest&, const DescribeVodDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodDomainUsageDataResult> DescribeVodDomainUsageDataOutcome;
			typedef std::future<DescribeVodDomainUsageDataOutcome> DescribeVodDomainUsageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodDomainUsageDataRequest&, const DescribeVodDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodEditingUsageDataResult> DescribeVodEditingUsageDataOutcome;
			typedef std::future<DescribeVodEditingUsageDataOutcome> DescribeVodEditingUsageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodEditingUsageDataRequest&, const DescribeVodEditingUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodEditingUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodMediaPlayDataResult> DescribeVodMediaPlayDataOutcome;
			typedef std::future<DescribeVodMediaPlayDataOutcome> DescribeVodMediaPlayDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodMediaPlayDataRequest&, const DescribeVodMediaPlayDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodMediaPlayDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodRangeDataByLocateAndIspServiceResult> DescribeVodRangeDataByLocateAndIspServiceOutcome;
			typedef std::future<DescribeVodRangeDataByLocateAndIspServiceOutcome> DescribeVodRangeDataByLocateAndIspServiceOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodRangeDataByLocateAndIspServiceRequest&, const DescribeVodRangeDataByLocateAndIspServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodRangeDataByLocateAndIspServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodRefreshQuotaResult> DescribeVodRefreshQuotaOutcome;
			typedef std::future<DescribeVodRefreshQuotaOutcome> DescribeVodRefreshQuotaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodRefreshQuotaRequest&, const DescribeVodRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodRefreshTasksResult> DescribeVodRefreshTasksOutcome;
			typedef std::future<DescribeVodRefreshTasksOutcome> DescribeVodRefreshTasksOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodRefreshTasksRequest&, const DescribeVodRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodSSLCertificateListResult> DescribeVodSSLCertificateListOutcome;
			typedef std::future<DescribeVodSSLCertificateListOutcome> DescribeVodSSLCertificateListOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodSSLCertificateListRequest&, const DescribeVodSSLCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodSSLCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodStorageDataResult> DescribeVodStorageDataOutcome;
			typedef std::future<DescribeVodStorageDataOutcome> DescribeVodStorageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodStorageDataRequest&, const DescribeVodStorageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodStorageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodTieringStorageDataResult> DescribeVodTieringStorageDataOutcome;
			typedef std::future<DescribeVodTieringStorageDataOutcome> DescribeVodTieringStorageDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodTieringStorageDataRequest&, const DescribeVodTieringStorageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodTieringStorageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodTieringStorageRetrievalDataResult> DescribeVodTieringStorageRetrievalDataOutcome;
			typedef std::future<DescribeVodTieringStorageRetrievalDataOutcome> DescribeVodTieringStorageRetrievalDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodTieringStorageRetrievalDataRequest&, const DescribeVodTieringStorageRetrievalDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodTieringStorageRetrievalDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodTranscodeDataResult> DescribeVodTranscodeDataOutcome;
			typedef std::future<DescribeVodTranscodeDataOutcome> DescribeVodTranscodeDataOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodTranscodeDataRequest&, const DescribeVodTranscodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodTranscodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodUserDomainsResult> DescribeVodUserDomainsOutcome;
			typedef std::future<DescribeVodUserDomainsOutcome> DescribeVodUserDomainsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodUserDomainsRequest&, const DescribeVodUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodVerifyContentResult> DescribeVodVerifyContentOutcome;
			typedef std::future<DescribeVodVerifyContentOutcome> DescribeVodVerifyContentOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DescribeVodVerifyContentRequest&, const DescribeVodVerifyContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodVerifyContentAsyncHandler;
			typedef Outcome<Error, Model::DetachAppPolicyFromIdentityResult> DetachAppPolicyFromIdentityOutcome;
			typedef std::future<DetachAppPolicyFromIdentityOutcome> DetachAppPolicyFromIdentityOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::DetachAppPolicyFromIdentityRequest&, const DetachAppPolicyFromIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachAppPolicyFromIdentityAsyncHandler;
			typedef Outcome<Error, Model::GenerateDownloadSecretKeyResult> GenerateDownloadSecretKeyOutcome;
			typedef std::future<GenerateDownloadSecretKeyOutcome> GenerateDownloadSecretKeyOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GenerateDownloadSecretKeyRequest&, const GenerateDownloadSecretKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDownloadSecretKeyAsyncHandler;
			typedef Outcome<Error, Model::GenerateKMSDataKeyResult> GenerateKMSDataKeyOutcome;
			typedef std::future<GenerateKMSDataKeyOutcome> GenerateKMSDataKeyOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GenerateKMSDataKeyRequest&, const GenerateKMSDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateKMSDataKeyAsyncHandler;
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
			typedef Outcome<Error, Model::GetDailyPlayRegionStatisResult> GetDailyPlayRegionStatisOutcome;
			typedef std::future<GetDailyPlayRegionStatisOutcome> GetDailyPlayRegionStatisOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDailyPlayRegionStatisRequest&, const GetDailyPlayRegionStatisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDailyPlayRegionStatisAsyncHandler;
			typedef Outcome<Error, Model::GetDefaultAITemplateResult> GetDefaultAITemplateOutcome;
			typedef std::future<GetDefaultAITemplateOutcome> GetDefaultAITemplateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDefaultAITemplateRequest&, const GetDefaultAITemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDefaultAITemplateAsyncHandler;
			typedef Outcome<Error, Model::GetDigitalWatermarkExtractResultResult> GetDigitalWatermarkExtractResultOutcome;
			typedef std::future<GetDigitalWatermarkExtractResultOutcome> GetDigitalWatermarkExtractResultOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetDigitalWatermarkExtractResultRequest&, const GetDigitalWatermarkExtractResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDigitalWatermarkExtractResultAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectResult> GetEditingProjectOutcome;
			typedef std::future<GetEditingProjectOutcome> GetEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectRequest&, const GetEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::GetEditingProjectMaterialsResult> GetEditingProjectMaterialsOutcome;
			typedef std::future<GetEditingProjectMaterialsOutcome> GetEditingProjectMaterialsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetEditingProjectMaterialsRequest&, const GetEditingProjectMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingProjectMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetImageInfoResult> GetImageInfoOutcome;
			typedef std::future<GetImageInfoOutcome> GetImageInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetImageInfoRequest&, const GetImageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageInfoAsyncHandler;
			typedef Outcome<Error, Model::GetImageInfosResult> GetImageInfosOutcome;
			typedef std::future<GetImageInfosOutcome> GetImageInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetImageInfosRequest&, const GetImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageInfosAsyncHandler;
			typedef Outcome<Error, Model::GetJobDetailResult> GetJobDetailOutcome;
			typedef std::future<GetJobDetailOutcome> GetJobDetailOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetJobDetailRequest&, const GetJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobDetailAsyncHandler;
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
			typedef Outcome<Error, Model::GetMediaRefreshJobsResult> GetMediaRefreshJobsOutcome;
			typedef std::future<GetMediaRefreshJobsOutcome> GetMediaRefreshJobsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::GetMediaRefreshJobsRequest&, const GetMediaRefreshJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaRefreshJobsAsyncHandler;
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
			typedef Outcome<Error, Model::ListDynamicImageResult> ListDynamicImageOutcome;
			typedef std::future<ListDynamicImageOutcome> ListDynamicImageOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListDynamicImageRequest&, const ListDynamicImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicImageAsyncHandler;
			typedef Outcome<Error, Model::ListJobInfoResult> ListJobInfoOutcome;
			typedef std::future<ListJobInfoOutcome> ListJobInfoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListJobInfoRequest&, const ListJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobInfoAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRecordVideoResult> ListLiveRecordVideoOutcome;
			typedef std::future<ListLiveRecordVideoOutcome> ListLiveRecordVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListLiveRecordVideoRequest&, const ListLiveRecordVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRecordVideoAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotsResult> ListSnapshotsOutcome;
			typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListSnapshotsRequest&, const ListSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::ListTranscodeTaskResult> ListTranscodeTaskOutcome;
			typedef std::future<ListTranscodeTaskOutcome> ListTranscodeTaskOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListTranscodeTaskRequest&, const ListTranscodeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscodeTaskAsyncHandler;
			typedef Outcome<Error, Model::ListTranscodeTemplateGroupResult> ListTranscodeTemplateGroupOutcome;
			typedef std::future<ListTranscodeTemplateGroupOutcome> ListTranscodeTemplateGroupOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::ListTranscodeTemplateGroupRequest&, const ListTranscodeTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscodeTemplateGroupAsyncHandler;
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
			typedef Outcome<Error, Model::RefreshMediaPlayUrlsResult> RefreshMediaPlayUrlsOutcome;
			typedef std::future<RefreshMediaPlayUrlsOutcome> RefreshMediaPlayUrlsOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshMediaPlayUrlsRequest&, const RefreshMediaPlayUrlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshMediaPlayUrlsAsyncHandler;
			typedef Outcome<Error, Model::RefreshUploadVideoResult> RefreshUploadVideoOutcome;
			typedef std::future<RefreshUploadVideoOutcome> RefreshUploadVideoOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshUploadVideoRequest&, const RefreshUploadVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUploadVideoAsyncHandler;
			typedef Outcome<Error, Model::RefreshVodObjectCachesResult> RefreshVodObjectCachesOutcome;
			typedef std::future<RefreshVodObjectCachesOutcome> RefreshVodObjectCachesOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RefreshVodObjectCachesRequest&, const RefreshVodObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshVodObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaResult> RegisterMediaOutcome;
			typedef std::future<RegisterMediaOutcome> RegisterMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RegisterMediaRequest&, const RegisterMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaAsyncHandler;
			typedef Outcome<Error, Model::RestoreMediaResult> RestoreMediaOutcome;
			typedef std::future<RestoreMediaOutcome> RestoreMediaOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::RestoreMediaRequest&, const RestoreMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreMediaAsyncHandler;
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
			typedef Outcome<Error, Model::SetVodDomainSSLCertificateResult> SetVodDomainSSLCertificateOutcome;
			typedef std::future<SetVodDomainSSLCertificateOutcome> SetVodDomainSSLCertificateOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SetVodDomainSSLCertificateRequest&, const SetVodDomainSSLCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVodDomainSSLCertificateAsyncHandler;
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
			typedef Outcome<Error, Model::SubmitDigitalWatermarkExtractJobResult> SubmitDigitalWatermarkExtractJobOutcome;
			typedef std::future<SubmitDigitalWatermarkExtractJobOutcome> SubmitDigitalWatermarkExtractJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitDigitalWatermarkExtractJobRequest&, const SubmitDigitalWatermarkExtractJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDigitalWatermarkExtractJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitDynamicImageJobResult> SubmitDynamicImageJobOutcome;
			typedef std::future<SubmitDynamicImageJobOutcome> SubmitDynamicImageJobOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::SubmitDynamicImageJobRequest&, const SubmitDynamicImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDynamicImageJobAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateEditingProjectResult> UpdateEditingProjectOutcome;
			typedef std::future<UpdateEditingProjectOutcome> UpdateEditingProjectOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateEditingProjectRequest&, const UpdateEditingProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEditingProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageInfosResult> UpdateImageInfosOutcome;
			typedef std::future<UpdateImageInfosOutcome> UpdateImageInfosOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateImageInfosRequest&, const UpdateImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageInfosAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaStorageClassResult> UpdateMediaStorageClassOutcome;
			typedef std::future<UpdateMediaStorageClassOutcome> UpdateMediaStorageClassOutcomeCallable;
			typedef std::function<void(const VodClient*, const Model::UpdateMediaStorageClassRequest&, const UpdateMediaStorageClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaStorageClassAsyncHandler;
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
			AddEditingProjectMaterialsOutcome addEditingProjectMaterials(const Model::AddEditingProjectMaterialsRequest &request)const;
			void addEditingProjectMaterialsAsync(const Model::AddEditingProjectMaterialsRequest& request, const AddEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEditingProjectMaterialsOutcomeCallable addEditingProjectMaterialsCallable(const Model::AddEditingProjectMaterialsRequest& request) const;
			AddTranscodeTemplateGroupOutcome addTranscodeTemplateGroup(const Model::AddTranscodeTemplateGroupRequest &request)const;
			void addTranscodeTemplateGroupAsync(const Model::AddTranscodeTemplateGroupRequest& request, const AddTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTranscodeTemplateGroupOutcomeCallable addTranscodeTemplateGroupCallable(const Model::AddTranscodeTemplateGroupRequest& request) const;
			AddVodDomainOutcome addVodDomain(const Model::AddVodDomainRequest &request)const;
			void addVodDomainAsync(const Model::AddVodDomainRequest& request, const AddVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodDomainOutcomeCallable addVodDomainCallable(const Model::AddVodDomainRequest& request) const;
			AddVodStorageForAppOutcome addVodStorageForApp(const Model::AddVodStorageForAppRequest &request)const;
			void addVodStorageForAppAsync(const Model::AddVodStorageForAppRequest& request, const AddVodStorageForAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodStorageForAppOutcomeCallable addVodStorageForAppCallable(const Model::AddVodStorageForAppRequest& request) const;
			AddVodTemplateOutcome addVodTemplate(const Model::AddVodTemplateRequest &request)const;
			void addVodTemplateAsync(const Model::AddVodTemplateRequest& request, const AddVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVodTemplateOutcomeCallable addVodTemplateCallable(const Model::AddVodTemplateRequest& request) const;
			AddWatermarkOutcome addWatermark(const Model::AddWatermarkRequest &request)const;
			void addWatermarkAsync(const Model::AddWatermarkRequest& request, const AddWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWatermarkOutcomeCallable addWatermarkCallable(const Model::AddWatermarkRequest& request) const;
			AttachAppPolicyToIdentityOutcome attachAppPolicyToIdentity(const Model::AttachAppPolicyToIdentityRequest &request)const;
			void attachAppPolicyToIdentityAsync(const Model::AttachAppPolicyToIdentityRequest& request, const AttachAppPolicyToIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachAppPolicyToIdentityOutcomeCallable attachAppPolicyToIdentityCallable(const Model::AttachAppPolicyToIdentityRequest& request) const;
			BatchGetMediaInfosOutcome batchGetMediaInfos(const Model::BatchGetMediaInfosRequest &request)const;
			void batchGetMediaInfosAsync(const Model::BatchGetMediaInfosRequest& request, const BatchGetMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetMediaInfosOutcomeCallable batchGetMediaInfosCallable(const Model::BatchGetMediaInfosRequest& request) const;
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
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CreateAppInfoOutcome createAppInfo(const Model::CreateAppInfoRequest &request)const;
			void createAppInfoAsync(const Model::CreateAppInfoRequest& request, const CreateAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppInfoOutcomeCallable createAppInfoCallable(const Model::CreateAppInfoRequest& request) const;
			CreateAuditOutcome createAudit(const Model::CreateAuditRequest &request)const;
			void createAuditAsync(const Model::CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuditOutcomeCallable createAuditCallable(const Model::CreateAuditRequest& request) const;
			CreateUploadAttachedMediaOutcome createUploadAttachedMedia(const Model::CreateUploadAttachedMediaRequest &request)const;
			void createUploadAttachedMediaAsync(const Model::CreateUploadAttachedMediaRequest& request, const CreateUploadAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadAttachedMediaOutcomeCallable createUploadAttachedMediaCallable(const Model::CreateUploadAttachedMediaRequest& request) const;
			CreateUploadImageOutcome createUploadImage(const Model::CreateUploadImageRequest &request)const;
			void createUploadImageAsync(const Model::CreateUploadImageRequest& request, const CreateUploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadImageOutcomeCallable createUploadImageCallable(const Model::CreateUploadImageRequest& request) const;
			CreateUploadVideoOutcome createUploadVideo(const Model::CreateUploadVideoRequest &request)const;
			void createUploadVideoAsync(const Model::CreateUploadVideoRequest& request, const CreateUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadVideoOutcomeCallable createUploadVideoCallable(const Model::CreateUploadVideoRequest& request) const;
			DecryptKMSDataKeyOutcome decryptKMSDataKey(const Model::DecryptKMSDataKeyRequest &request)const;
			void decryptKMSDataKeyAsync(const Model::DecryptKMSDataKeyRequest& request, const DecryptKMSDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptKMSDataKeyOutcomeCallable decryptKMSDataKeyCallable(const Model::DecryptKMSDataKeyRequest& request) const;
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
			DeleteDynamicImageOutcome deleteDynamicImage(const Model::DeleteDynamicImageRequest &request)const;
			void deleteDynamicImageAsync(const Model::DeleteDynamicImageRequest& request, const DeleteDynamicImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDynamicImageOutcomeCallable deleteDynamicImageCallable(const Model::DeleteDynamicImageRequest& request) const;
			DeleteEditingProjectOutcome deleteEditingProject(const Model::DeleteEditingProjectRequest &request)const;
			void deleteEditingProjectAsync(const Model::DeleteEditingProjectRequest& request, const DeleteEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectOutcomeCallable deleteEditingProjectCallable(const Model::DeleteEditingProjectRequest& request) const;
			DeleteEditingProjectMaterialsOutcome deleteEditingProjectMaterials(const Model::DeleteEditingProjectMaterialsRequest &request)const;
			void deleteEditingProjectMaterialsAsync(const Model::DeleteEditingProjectMaterialsRequest& request, const DeleteEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEditingProjectMaterialsOutcomeCallable deleteEditingProjectMaterialsCallable(const Model::DeleteEditingProjectMaterialsRequest& request) const;
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
			DeleteVodSpecificConfigOutcome deleteVodSpecificConfig(const Model::DeleteVodSpecificConfigRequest &request)const;
			void deleteVodSpecificConfigAsync(const Model::DeleteVodSpecificConfigRequest& request, const DeleteVodSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodSpecificConfigOutcomeCallable deleteVodSpecificConfigCallable(const Model::DeleteVodSpecificConfigRequest& request) const;
			DeleteVodTemplateOutcome deleteVodTemplate(const Model::DeleteVodTemplateRequest &request)const;
			void deleteVodTemplateAsync(const Model::DeleteVodTemplateRequest& request, const DeleteVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVodTemplateOutcomeCallable deleteVodTemplateCallable(const Model::DeleteVodTemplateRequest& request) const;
			DeleteWatermarkOutcome deleteWatermark(const Model::DeleteWatermarkRequest &request)const;
			void deleteWatermarkAsync(const Model::DeleteWatermarkRequest& request, const DeleteWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWatermarkOutcomeCallable deleteWatermarkCallable(const Model::DeleteWatermarkRequest& request) const;
			DescribeMediaDistributionOutcome describeMediaDistribution(const Model::DescribeMediaDistributionRequest &request)const;
			void describeMediaDistributionAsync(const Model::DescribeMediaDistributionRequest& request, const DescribeMediaDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMediaDistributionOutcomeCallable describeMediaDistributionCallable(const Model::DescribeMediaDistributionRequest& request) const;
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
			DescribeVodDomainBpsDataByLayerOutcome describeVodDomainBpsDataByLayer(const Model::DescribeVodDomainBpsDataByLayerRequest &request)const;
			void describeVodDomainBpsDataByLayerAsync(const Model::DescribeVodDomainBpsDataByLayerRequest& request, const DescribeVodDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainBpsDataByLayerOutcomeCallable describeVodDomainBpsDataByLayerCallable(const Model::DescribeVodDomainBpsDataByLayerRequest& request) const;
			DescribeVodDomainCertificateInfoOutcome describeVodDomainCertificateInfo(const Model::DescribeVodDomainCertificateInfoRequest &request)const;
			void describeVodDomainCertificateInfoAsync(const Model::DescribeVodDomainCertificateInfoRequest& request, const DescribeVodDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainCertificateInfoOutcomeCallable describeVodDomainCertificateInfoCallable(const Model::DescribeVodDomainCertificateInfoRequest& request) const;
			DescribeVodDomainConfigsOutcome describeVodDomainConfigs(const Model::DescribeVodDomainConfigsRequest &request)const;
			void describeVodDomainConfigsAsync(const Model::DescribeVodDomainConfigsRequest& request, const DescribeVodDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainConfigsOutcomeCallable describeVodDomainConfigsCallable(const Model::DescribeVodDomainConfigsRequest& request) const;
			DescribeVodDomainDetailOutcome describeVodDomainDetail(const Model::DescribeVodDomainDetailRequest &request)const;
			void describeVodDomainDetailAsync(const Model::DescribeVodDomainDetailRequest& request, const DescribeVodDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainDetailOutcomeCallable describeVodDomainDetailCallable(const Model::DescribeVodDomainDetailRequest& request) const;
			DescribeVodDomainHitRateDataOutcome describeVodDomainHitRateData(const Model::DescribeVodDomainHitRateDataRequest &request)const;
			void describeVodDomainHitRateDataAsync(const Model::DescribeVodDomainHitRateDataRequest& request, const DescribeVodDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainHitRateDataOutcomeCallable describeVodDomainHitRateDataCallable(const Model::DescribeVodDomainHitRateDataRequest& request) const;
			DescribeVodDomainLogOutcome describeVodDomainLog(const Model::DescribeVodDomainLogRequest &request)const;
			void describeVodDomainLogAsync(const Model::DescribeVodDomainLogRequest& request, const DescribeVodDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainLogOutcomeCallable describeVodDomainLogCallable(const Model::DescribeVodDomainLogRequest& request) const;
			DescribeVodDomainMax95BpsDataOutcome describeVodDomainMax95BpsData(const Model::DescribeVodDomainMax95BpsDataRequest &request)const;
			void describeVodDomainMax95BpsDataAsync(const Model::DescribeVodDomainMax95BpsDataRequest& request, const DescribeVodDomainMax95BpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainMax95BpsDataOutcomeCallable describeVodDomainMax95BpsDataCallable(const Model::DescribeVodDomainMax95BpsDataRequest& request) const;
			DescribeVodDomainQpsDataOutcome describeVodDomainQpsData(const Model::DescribeVodDomainQpsDataRequest &request)const;
			void describeVodDomainQpsDataAsync(const Model::DescribeVodDomainQpsDataRequest& request, const DescribeVodDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainQpsDataOutcomeCallable describeVodDomainQpsDataCallable(const Model::DescribeVodDomainQpsDataRequest& request) const;
			DescribeVodDomainRealTimeBpsDataOutcome describeVodDomainRealTimeBpsData(const Model::DescribeVodDomainRealTimeBpsDataRequest &request)const;
			void describeVodDomainRealTimeBpsDataAsync(const Model::DescribeVodDomainRealTimeBpsDataRequest& request, const DescribeVodDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeBpsDataOutcomeCallable describeVodDomainRealTimeBpsDataCallable(const Model::DescribeVodDomainRealTimeBpsDataRequest& request) const;
			DescribeVodDomainRealTimeByteHitRateDataOutcome describeVodDomainRealTimeByteHitRateData(const Model::DescribeVodDomainRealTimeByteHitRateDataRequest &request)const;
			void describeVodDomainRealTimeByteHitRateDataAsync(const Model::DescribeVodDomainRealTimeByteHitRateDataRequest& request, const DescribeVodDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeByteHitRateDataOutcomeCallable describeVodDomainRealTimeByteHitRateDataCallable(const Model::DescribeVodDomainRealTimeByteHitRateDataRequest& request) const;
			DescribeVodDomainRealTimeDetailDataOutcome describeVodDomainRealTimeDetailData(const Model::DescribeVodDomainRealTimeDetailDataRequest &request)const;
			void describeVodDomainRealTimeDetailDataAsync(const Model::DescribeVodDomainRealTimeDetailDataRequest& request, const DescribeVodDomainRealTimeDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeDetailDataOutcomeCallable describeVodDomainRealTimeDetailDataCallable(const Model::DescribeVodDomainRealTimeDetailDataRequest& request) const;
			DescribeVodDomainRealTimeHttpCodeDataOutcome describeVodDomainRealTimeHttpCodeData(const Model::DescribeVodDomainRealTimeHttpCodeDataRequest &request)const;
			void describeVodDomainRealTimeHttpCodeDataAsync(const Model::DescribeVodDomainRealTimeHttpCodeDataRequest& request, const DescribeVodDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeHttpCodeDataOutcomeCallable describeVodDomainRealTimeHttpCodeDataCallable(const Model::DescribeVodDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeVodDomainRealTimeQpsDataOutcome describeVodDomainRealTimeQpsData(const Model::DescribeVodDomainRealTimeQpsDataRequest &request)const;
			void describeVodDomainRealTimeQpsDataAsync(const Model::DescribeVodDomainRealTimeQpsDataRequest& request, const DescribeVodDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeQpsDataOutcomeCallable describeVodDomainRealTimeQpsDataCallable(const Model::DescribeVodDomainRealTimeQpsDataRequest& request) const;
			DescribeVodDomainRealTimeReqHitRateDataOutcome describeVodDomainRealTimeReqHitRateData(const Model::DescribeVodDomainRealTimeReqHitRateDataRequest &request)const;
			void describeVodDomainRealTimeReqHitRateDataAsync(const Model::DescribeVodDomainRealTimeReqHitRateDataRequest& request, const DescribeVodDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeReqHitRateDataOutcomeCallable describeVodDomainRealTimeReqHitRateDataCallable(const Model::DescribeVodDomainRealTimeReqHitRateDataRequest& request) const;
			DescribeVodDomainRealTimeTrafficDataOutcome describeVodDomainRealTimeTrafficData(const Model::DescribeVodDomainRealTimeTrafficDataRequest &request)const;
			void describeVodDomainRealTimeTrafficDataAsync(const Model::DescribeVodDomainRealTimeTrafficDataRequest& request, const DescribeVodDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainRealTimeTrafficDataOutcomeCallable describeVodDomainRealTimeTrafficDataCallable(const Model::DescribeVodDomainRealTimeTrafficDataRequest& request) const;
			DescribeVodDomainReqHitRateDataOutcome describeVodDomainReqHitRateData(const Model::DescribeVodDomainReqHitRateDataRequest &request)const;
			void describeVodDomainReqHitRateDataAsync(const Model::DescribeVodDomainReqHitRateDataRequest& request, const DescribeVodDomainReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainReqHitRateDataOutcomeCallable describeVodDomainReqHitRateDataCallable(const Model::DescribeVodDomainReqHitRateDataRequest& request) const;
			DescribeVodDomainSrcBpsDataOutcome describeVodDomainSrcBpsData(const Model::DescribeVodDomainSrcBpsDataRequest &request)const;
			void describeVodDomainSrcBpsDataAsync(const Model::DescribeVodDomainSrcBpsDataRequest& request, const DescribeVodDomainSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainSrcBpsDataOutcomeCallable describeVodDomainSrcBpsDataCallable(const Model::DescribeVodDomainSrcBpsDataRequest& request) const;
			DescribeVodDomainSrcTrafficDataOutcome describeVodDomainSrcTrafficData(const Model::DescribeVodDomainSrcTrafficDataRequest &request)const;
			void describeVodDomainSrcTrafficDataAsync(const Model::DescribeVodDomainSrcTrafficDataRequest& request, const DescribeVodDomainSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainSrcTrafficDataOutcomeCallable describeVodDomainSrcTrafficDataCallable(const Model::DescribeVodDomainSrcTrafficDataRequest& request) const;
			DescribeVodDomainTrafficDataOutcome describeVodDomainTrafficData(const Model::DescribeVodDomainTrafficDataRequest &request)const;
			void describeVodDomainTrafficDataAsync(const Model::DescribeVodDomainTrafficDataRequest& request, const DescribeVodDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainTrafficDataOutcomeCallable describeVodDomainTrafficDataCallable(const Model::DescribeVodDomainTrafficDataRequest& request) const;
			DescribeVodDomainUsageDataOutcome describeVodDomainUsageData(const Model::DescribeVodDomainUsageDataRequest &request)const;
			void describeVodDomainUsageDataAsync(const Model::DescribeVodDomainUsageDataRequest& request, const DescribeVodDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodDomainUsageDataOutcomeCallable describeVodDomainUsageDataCallable(const Model::DescribeVodDomainUsageDataRequest& request) const;
			DescribeVodEditingUsageDataOutcome describeVodEditingUsageData(const Model::DescribeVodEditingUsageDataRequest &request)const;
			void describeVodEditingUsageDataAsync(const Model::DescribeVodEditingUsageDataRequest& request, const DescribeVodEditingUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodEditingUsageDataOutcomeCallable describeVodEditingUsageDataCallable(const Model::DescribeVodEditingUsageDataRequest& request) const;
			DescribeVodMediaPlayDataOutcome describeVodMediaPlayData(const Model::DescribeVodMediaPlayDataRequest &request)const;
			void describeVodMediaPlayDataAsync(const Model::DescribeVodMediaPlayDataRequest& request, const DescribeVodMediaPlayDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodMediaPlayDataOutcomeCallable describeVodMediaPlayDataCallable(const Model::DescribeVodMediaPlayDataRequest& request) const;
			DescribeVodRangeDataByLocateAndIspServiceOutcome describeVodRangeDataByLocateAndIspService(const Model::DescribeVodRangeDataByLocateAndIspServiceRequest &request)const;
			void describeVodRangeDataByLocateAndIspServiceAsync(const Model::DescribeVodRangeDataByLocateAndIspServiceRequest& request, const DescribeVodRangeDataByLocateAndIspServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodRangeDataByLocateAndIspServiceOutcomeCallable describeVodRangeDataByLocateAndIspServiceCallable(const Model::DescribeVodRangeDataByLocateAndIspServiceRequest& request) const;
			DescribeVodRefreshQuotaOutcome describeVodRefreshQuota(const Model::DescribeVodRefreshQuotaRequest &request)const;
			void describeVodRefreshQuotaAsync(const Model::DescribeVodRefreshQuotaRequest& request, const DescribeVodRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodRefreshQuotaOutcomeCallable describeVodRefreshQuotaCallable(const Model::DescribeVodRefreshQuotaRequest& request) const;
			DescribeVodRefreshTasksOutcome describeVodRefreshTasks(const Model::DescribeVodRefreshTasksRequest &request)const;
			void describeVodRefreshTasksAsync(const Model::DescribeVodRefreshTasksRequest& request, const DescribeVodRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodRefreshTasksOutcomeCallable describeVodRefreshTasksCallable(const Model::DescribeVodRefreshTasksRequest& request) const;
			DescribeVodSSLCertificateListOutcome describeVodSSLCertificateList(const Model::DescribeVodSSLCertificateListRequest &request)const;
			void describeVodSSLCertificateListAsync(const Model::DescribeVodSSLCertificateListRequest& request, const DescribeVodSSLCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodSSLCertificateListOutcomeCallable describeVodSSLCertificateListCallable(const Model::DescribeVodSSLCertificateListRequest& request) const;
			DescribeVodStorageDataOutcome describeVodStorageData(const Model::DescribeVodStorageDataRequest &request)const;
			void describeVodStorageDataAsync(const Model::DescribeVodStorageDataRequest& request, const DescribeVodStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodStorageDataOutcomeCallable describeVodStorageDataCallable(const Model::DescribeVodStorageDataRequest& request) const;
			DescribeVodTieringStorageDataOutcome describeVodTieringStorageData(const Model::DescribeVodTieringStorageDataRequest &request)const;
			void describeVodTieringStorageDataAsync(const Model::DescribeVodTieringStorageDataRequest& request, const DescribeVodTieringStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodTieringStorageDataOutcomeCallable describeVodTieringStorageDataCallable(const Model::DescribeVodTieringStorageDataRequest& request) const;
			DescribeVodTieringStorageRetrievalDataOutcome describeVodTieringStorageRetrievalData(const Model::DescribeVodTieringStorageRetrievalDataRequest &request)const;
			void describeVodTieringStorageRetrievalDataAsync(const Model::DescribeVodTieringStorageRetrievalDataRequest& request, const DescribeVodTieringStorageRetrievalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodTieringStorageRetrievalDataOutcomeCallable describeVodTieringStorageRetrievalDataCallable(const Model::DescribeVodTieringStorageRetrievalDataRequest& request) const;
			DescribeVodTranscodeDataOutcome describeVodTranscodeData(const Model::DescribeVodTranscodeDataRequest &request)const;
			void describeVodTranscodeDataAsync(const Model::DescribeVodTranscodeDataRequest& request, const DescribeVodTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodTranscodeDataOutcomeCallable describeVodTranscodeDataCallable(const Model::DescribeVodTranscodeDataRequest& request) const;
			DescribeVodUserDomainsOutcome describeVodUserDomains(const Model::DescribeVodUserDomainsRequest &request)const;
			void describeVodUserDomainsAsync(const Model::DescribeVodUserDomainsRequest& request, const DescribeVodUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodUserDomainsOutcomeCallable describeVodUserDomainsCallable(const Model::DescribeVodUserDomainsRequest& request) const;
			DescribeVodVerifyContentOutcome describeVodVerifyContent(const Model::DescribeVodVerifyContentRequest &request)const;
			void describeVodVerifyContentAsync(const Model::DescribeVodVerifyContentRequest& request, const DescribeVodVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodVerifyContentOutcomeCallable describeVodVerifyContentCallable(const Model::DescribeVodVerifyContentRequest& request) const;
			DetachAppPolicyFromIdentityOutcome detachAppPolicyFromIdentity(const Model::DetachAppPolicyFromIdentityRequest &request)const;
			void detachAppPolicyFromIdentityAsync(const Model::DetachAppPolicyFromIdentityRequest& request, const DetachAppPolicyFromIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachAppPolicyFromIdentityOutcomeCallable detachAppPolicyFromIdentityCallable(const Model::DetachAppPolicyFromIdentityRequest& request) const;
			GenerateDownloadSecretKeyOutcome generateDownloadSecretKey(const Model::GenerateDownloadSecretKeyRequest &request)const;
			void generateDownloadSecretKeyAsync(const Model::GenerateDownloadSecretKeyRequest& request, const GenerateDownloadSecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDownloadSecretKeyOutcomeCallable generateDownloadSecretKeyCallable(const Model::GenerateDownloadSecretKeyRequest& request) const;
			GenerateKMSDataKeyOutcome generateKMSDataKey(const Model::GenerateKMSDataKeyRequest &request)const;
			void generateKMSDataKeyAsync(const Model::GenerateKMSDataKeyRequest& request, const GenerateKMSDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateKMSDataKeyOutcomeCallable generateKMSDataKeyCallable(const Model::GenerateKMSDataKeyRequest& request) const;
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
			GetDailyPlayRegionStatisOutcome getDailyPlayRegionStatis(const Model::GetDailyPlayRegionStatisRequest &request)const;
			void getDailyPlayRegionStatisAsync(const Model::GetDailyPlayRegionStatisRequest& request, const GetDailyPlayRegionStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDailyPlayRegionStatisOutcomeCallable getDailyPlayRegionStatisCallable(const Model::GetDailyPlayRegionStatisRequest& request) const;
			GetDefaultAITemplateOutcome getDefaultAITemplate(const Model::GetDefaultAITemplateRequest &request)const;
			void getDefaultAITemplateAsync(const Model::GetDefaultAITemplateRequest& request, const GetDefaultAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDefaultAITemplateOutcomeCallable getDefaultAITemplateCallable(const Model::GetDefaultAITemplateRequest& request) const;
			GetDigitalWatermarkExtractResultOutcome getDigitalWatermarkExtractResult(const Model::GetDigitalWatermarkExtractResultRequest &request)const;
			void getDigitalWatermarkExtractResultAsync(const Model::GetDigitalWatermarkExtractResultRequest& request, const GetDigitalWatermarkExtractResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDigitalWatermarkExtractResultOutcomeCallable getDigitalWatermarkExtractResultCallable(const Model::GetDigitalWatermarkExtractResultRequest& request) const;
			GetEditingProjectOutcome getEditingProject(const Model::GetEditingProjectRequest &request)const;
			void getEditingProjectAsync(const Model::GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectOutcomeCallable getEditingProjectCallable(const Model::GetEditingProjectRequest& request) const;
			GetEditingProjectMaterialsOutcome getEditingProjectMaterials(const Model::GetEditingProjectMaterialsRequest &request)const;
			void getEditingProjectMaterialsAsync(const Model::GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingProjectMaterialsOutcomeCallable getEditingProjectMaterialsCallable(const Model::GetEditingProjectMaterialsRequest& request) const;
			GetImageInfoOutcome getImageInfo(const Model::GetImageInfoRequest &request)const;
			void getImageInfoAsync(const Model::GetImageInfoRequest& request, const GetImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageInfoOutcomeCallable getImageInfoCallable(const Model::GetImageInfoRequest& request) const;
			GetImageInfosOutcome getImageInfos(const Model::GetImageInfosRequest &request)const;
			void getImageInfosAsync(const Model::GetImageInfosRequest& request, const GetImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageInfosOutcomeCallable getImageInfosCallable(const Model::GetImageInfosRequest& request) const;
			GetJobDetailOutcome getJobDetail(const Model::GetJobDetailRequest &request)const;
			void getJobDetailAsync(const Model::GetJobDetailRequest& request, const GetJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobDetailOutcomeCallable getJobDetailCallable(const Model::GetJobDetailRequest& request) const;
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
			GetMediaRefreshJobsOutcome getMediaRefreshJobs(const Model::GetMediaRefreshJobsRequest &request)const;
			void getMediaRefreshJobsAsync(const Model::GetMediaRefreshJobsRequest& request, const GetMediaRefreshJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaRefreshJobsOutcomeCallable getMediaRefreshJobsCallable(const Model::GetMediaRefreshJobsRequest& request) const;
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
			ListDynamicImageOutcome listDynamicImage(const Model::ListDynamicImageRequest &request)const;
			void listDynamicImageAsync(const Model::ListDynamicImageRequest& request, const ListDynamicImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicImageOutcomeCallable listDynamicImageCallable(const Model::ListDynamicImageRequest& request) const;
			ListJobInfoOutcome listJobInfo(const Model::ListJobInfoRequest &request)const;
			void listJobInfoAsync(const Model::ListJobInfoRequest& request, const ListJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobInfoOutcomeCallable listJobInfoCallable(const Model::ListJobInfoRequest& request) const;
			ListLiveRecordVideoOutcome listLiveRecordVideo(const Model::ListLiveRecordVideoRequest &request)const;
			void listLiveRecordVideoAsync(const Model::ListLiveRecordVideoRequest& request, const ListLiveRecordVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRecordVideoOutcomeCallable listLiveRecordVideoCallable(const Model::ListLiveRecordVideoRequest& request) const;
			ListSnapshotsOutcome listSnapshots(const Model::ListSnapshotsRequest &request)const;
			void listSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotsOutcomeCallable listSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;
			ListTranscodeTaskOutcome listTranscodeTask(const Model::ListTranscodeTaskRequest &request)const;
			void listTranscodeTaskAsync(const Model::ListTranscodeTaskRequest& request, const ListTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscodeTaskOutcomeCallable listTranscodeTaskCallable(const Model::ListTranscodeTaskRequest& request) const;
			ListTranscodeTemplateGroupOutcome listTranscodeTemplateGroup(const Model::ListTranscodeTemplateGroupRequest &request)const;
			void listTranscodeTemplateGroupAsync(const Model::ListTranscodeTemplateGroupRequest& request, const ListTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscodeTemplateGroupOutcomeCallable listTranscodeTemplateGroupCallable(const Model::ListTranscodeTemplateGroupRequest& request) const;
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
			RefreshMediaPlayUrlsOutcome refreshMediaPlayUrls(const Model::RefreshMediaPlayUrlsRequest &request)const;
			void refreshMediaPlayUrlsAsync(const Model::RefreshMediaPlayUrlsRequest& request, const RefreshMediaPlayUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshMediaPlayUrlsOutcomeCallable refreshMediaPlayUrlsCallable(const Model::RefreshMediaPlayUrlsRequest& request) const;
			RefreshUploadVideoOutcome refreshUploadVideo(const Model::RefreshUploadVideoRequest &request)const;
			void refreshUploadVideoAsync(const Model::RefreshUploadVideoRequest& request, const RefreshUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshUploadVideoOutcomeCallable refreshUploadVideoCallable(const Model::RefreshUploadVideoRequest& request) const;
			RefreshVodObjectCachesOutcome refreshVodObjectCaches(const Model::RefreshVodObjectCachesRequest &request)const;
			void refreshVodObjectCachesAsync(const Model::RefreshVodObjectCachesRequest& request, const RefreshVodObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshVodObjectCachesOutcomeCallable refreshVodObjectCachesCallable(const Model::RefreshVodObjectCachesRequest& request) const;
			RegisterMediaOutcome registerMedia(const Model::RegisterMediaRequest &request)const;
			void registerMediaAsync(const Model::RegisterMediaRequest& request, const RegisterMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaOutcomeCallable registerMediaCallable(const Model::RegisterMediaRequest& request) const;
			RestoreMediaOutcome restoreMedia(const Model::RestoreMediaRequest &request)const;
			void restoreMediaAsync(const Model::RestoreMediaRequest& request, const RestoreMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreMediaOutcomeCallable restoreMediaCallable(const Model::RestoreMediaRequest& request) const;
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
			SetVodDomainSSLCertificateOutcome setVodDomainSSLCertificate(const Model::SetVodDomainSSLCertificateRequest &request)const;
			void setVodDomainSSLCertificateAsync(const Model::SetVodDomainSSLCertificateRequest& request, const SetVodDomainSSLCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVodDomainSSLCertificateOutcomeCallable setVodDomainSSLCertificateCallable(const Model::SetVodDomainSSLCertificateRequest& request) const;
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
			SubmitDigitalWatermarkExtractJobOutcome submitDigitalWatermarkExtractJob(const Model::SubmitDigitalWatermarkExtractJobRequest &request)const;
			void submitDigitalWatermarkExtractJobAsync(const Model::SubmitDigitalWatermarkExtractJobRequest& request, const SubmitDigitalWatermarkExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDigitalWatermarkExtractJobOutcomeCallable submitDigitalWatermarkExtractJobCallable(const Model::SubmitDigitalWatermarkExtractJobRequest& request) const;
			SubmitDynamicImageJobOutcome submitDynamicImageJob(const Model::SubmitDynamicImageJobRequest &request)const;
			void submitDynamicImageJobAsync(const Model::SubmitDynamicImageJobRequest& request, const SubmitDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDynamicImageJobOutcomeCallable submitDynamicImageJobCallable(const Model::SubmitDynamicImageJobRequest& request) const;
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
			UpdateEditingProjectOutcome updateEditingProject(const Model::UpdateEditingProjectRequest &request)const;
			void updateEditingProjectAsync(const Model::UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEditingProjectOutcomeCallable updateEditingProjectCallable(const Model::UpdateEditingProjectRequest& request) const;
			UpdateImageInfosOutcome updateImageInfos(const Model::UpdateImageInfosRequest &request)const;
			void updateImageInfosAsync(const Model::UpdateImageInfosRequest& request, const UpdateImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageInfosOutcomeCallable updateImageInfosCallable(const Model::UpdateImageInfosRequest& request) const;
			UpdateMediaStorageClassOutcome updateMediaStorageClass(const Model::UpdateMediaStorageClassRequest &request)const;
			void updateMediaStorageClassAsync(const Model::UpdateMediaStorageClassRequest& request, const UpdateMediaStorageClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaStorageClassOutcomeCallable updateMediaStorageClassCallable(const Model::UpdateMediaStorageClassRequest& request) const;
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
