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

#ifndef ALIBABACLOUD_GREEN_GREENCLIENT_H_
#define ALIBABACLOUD_GREEN_GREENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "GreenExport.h"
#include "model/AddFacesRequest.h"
#include "model/AddFacesResult.h"
#include "model/AddGroupsRequest.h"
#include "model/AddGroupsResult.h"
#include "model/AddPersonRequest.h"
#include "model/AddPersonResult.h"
#include "model/AddSimilarityImageRequest.h"
#include "model/AddSimilarityImageResult.h"
#include "model/AddSimilarityLibraryRequest.h"
#include "model/AddSimilarityLibraryResult.h"
#include "model/AddVideoDnaRequest.h"
#include "model/AddVideoDnaResult.h"
#include "model/AddVideoDnaGroupRequest.h"
#include "model/AddVideoDnaGroupResult.h"
#include "model/CreatCustomOcrTemplateRequest.h"
#include "model/CreatCustomOcrTemplateResult.h"
#include "model/CreateAuditCallbackRequest.h"
#include "model/CreateAuditCallbackResult.h"
#include "model/CreateBizTypeRequest.h"
#include "model/CreateBizTypeResult.h"
#include "model/CreateCdiBagRequest.h"
#include "model/CreateCdiBagResult.h"
#include "model/CreateCdiBaseBagRequest.h"
#include "model/CreateCdiBaseBagResult.h"
#include "model/CreateImageLibRequest.h"
#include "model/CreateImageLibResult.h"
#include "model/CreateKeywordRequest.h"
#include "model/CreateKeywordResult.h"
#include "model/CreateKeywordLibRequest.h"
#include "model/CreateKeywordLibResult.h"
#include "model/CreateWebSiteInstanceRequest.h"
#include "model/CreateWebSiteInstanceResult.h"
#include "model/CreateWebsiteIndexPageBaselineRequest.h"
#include "model/CreateWebsiteIndexPageBaselineResult.h"
#include "model/DeleteBizTypeRequest.h"
#include "model/DeleteBizTypeResult.h"
#include "model/DeleteCustomOcrTemplateRequest.h"
#include "model/DeleteCustomOcrTemplateResult.h"
#include "model/DeleteFacesRequest.h"
#include "model/DeleteFacesResult.h"
#include "model/DeleteGroupsRequest.h"
#include "model/DeleteGroupsResult.h"
#include "model/DeleteImageFromLibRequest.h"
#include "model/DeleteImageFromLibResult.h"
#include "model/DeleteImageLibRequest.h"
#include "model/DeleteImageLibResult.h"
#include "model/DeleteKeywordRequest.h"
#include "model/DeleteKeywordResult.h"
#include "model/DeleteKeywordLibRequest.h"
#include "model/DeleteKeywordLibResult.h"
#include "model/DeleteNotificationContactsRequest.h"
#include "model/DeleteNotificationContactsResult.h"
#include "model/DeletePersonRequest.h"
#include "model/DeletePersonResult.h"
#include "model/DeleteSimilarityImageRequest.h"
#include "model/DeleteSimilarityImageResult.h"
#include "model/DeleteSimilarityLibraryRequest.h"
#include "model/DeleteSimilarityLibraryResult.h"
#include "model/DeleteVideoDnaRequest.h"
#include "model/DeleteVideoDnaResult.h"
#include "model/DeleteVideoDnaGroupRequest.h"
#include "model/DeleteVideoDnaGroupResult.h"
#include "model/DescribeAppInfoRequest.h"
#include "model/DescribeAppInfoResult.h"
#include "model/DescribeAuditCallbackRequest.h"
#include "model/DescribeAuditCallbackResult.h"
#include "model/DescribeAuditCallbackListRequest.h"
#include "model/DescribeAuditCallbackListResult.h"
#include "model/DescribeAuditContentRequest.h"
#include "model/DescribeAuditContentResult.h"
#include "model/DescribeAuditContentItemRequest.h"
#include "model/DescribeAuditContentItemResult.h"
#include "model/DescribeAuditRangeRequest.h"
#include "model/DescribeAuditRangeResult.h"
#include "model/DescribeAuditSettingRequest.h"
#include "model/DescribeAuditSettingResult.h"
#include "model/DescribeBizTypeImageLibRequest.h"
#include "model/DescribeBizTypeImageLibResult.h"
#include "model/DescribeBizTypeSettingRequest.h"
#include "model/DescribeBizTypeSettingResult.h"
#include "model/DescribeBizTypeTextLibRequest.h"
#include "model/DescribeBizTypeTextLibResult.h"
#include "model/DescribeBizTypesRequest.h"
#include "model/DescribeBizTypesResult.h"
#include "model/DescribeCloudMonitorServicesRequest.h"
#include "model/DescribeCloudMonitorServicesResult.h"
#include "model/DescribeCustomOcrTemplateRequest.h"
#include "model/DescribeCustomOcrTemplateResult.h"
#include "model/DescribeImageFromLibRequest.h"
#include "model/DescribeImageFromLibResult.h"
#include "model/DescribeImageLibRequest.h"
#include "model/DescribeImageLibResult.h"
#include "model/DescribeImageUploadInfoRequest.h"
#include "model/DescribeImageUploadInfoResult.h"
#include "model/DescribeKeywordRequest.h"
#include "model/DescribeKeywordResult.h"
#include "model/DescribeKeywordLibRequest.h"
#include "model/DescribeKeywordLibResult.h"
#include "model/DescribeNotificationSettingRequest.h"
#include "model/DescribeNotificationSettingResult.h"
#include "model/DescribeOpenApiRcpStatsRequest.h"
#include "model/DescribeOpenApiRcpStatsResult.h"
#include "model/DescribeOpenApiUsageRequest.h"
#include "model/DescribeOpenApiUsageResult.h"
#include "model/DescribeOssCallbackSettingRequest.h"
#include "model/DescribeOssCallbackSettingResult.h"
#include "model/DescribeOssIncrementCheckSettingRequest.h"
#include "model/DescribeOssIncrementCheckSettingResult.h"
#include "model/DescribeOssIncrementOverviewRequest.h"
#include "model/DescribeOssIncrementOverviewResult.h"
#include "model/DescribeOssIncrementStatsRequest.h"
#include "model/DescribeOssIncrementStatsResult.h"
#include "model/DescribeOssResultItemsRequest.h"
#include "model/DescribeOssResultItemsResult.h"
#include "model/DescribeOssStockStatusRequest.h"
#include "model/DescribeOssStockStatusResult.h"
#include "model/DescribeSdkUrlRequest.h"
#include "model/DescribeSdkUrlResult.h"
#include "model/DescribeUpdatePackageResultRequest.h"
#include "model/DescribeUpdatePackageResultResult.h"
#include "model/DescribeUploadInfoRequest.h"
#include "model/DescribeUploadInfoResult.h"
#include "model/DescribeUsageBillRequest.h"
#include "model/DescribeUsageBillResult.h"
#include "model/DescribeUserBizTypesRequest.h"
#include "model/DescribeUserBizTypesResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"
#include "model/DescribeViewContentRequest.h"
#include "model/DescribeViewContentResult.h"
#include "model/DescribeWebsiteIndexPageBaselineRequest.h"
#include "model/DescribeWebsiteIndexPageBaselineResult.h"
#include "model/DescribeWebsiteInstanceRequest.h"
#include "model/DescribeWebsiteInstanceResult.h"
#include "model/DescribeWebsiteInstanceIdRequest.h"
#include "model/DescribeWebsiteInstanceIdResult.h"
#include "model/DescribeWebsiteInstanceKeyUrlRequest.h"
#include "model/DescribeWebsiteInstanceKeyUrlResult.h"
#include "model/DescribeWebsiteScanResultRequest.h"
#include "model/DescribeWebsiteScanResultResult.h"
#include "model/DescribeWebsiteScanResultDetailRequest.h"
#include "model/DescribeWebsiteScanResultDetailResult.h"
#include "model/DescribeWebsiteStatRequest.h"
#include "model/DescribeWebsiteStatResult.h"
#include "model/DescribeWebsiteVerifyInfoRequest.h"
#include "model/DescribeWebsiteVerifyInfoResult.h"
#include "model/DetectFaceRequest.h"
#include "model/DetectFaceResult.h"
#include "model/ExportKeywordsRequest.h"
#include "model/ExportKeywordsResult.h"
#include "model/ExportOpenApiRcpStatsRequest.h"
#include "model/ExportOpenApiRcpStatsResult.h"
#include "model/ExportOssResultRequest.h"
#include "model/ExportOssResultResult.h"
#include "model/FileAsyncScanRequest.h"
#include "model/FileAsyncScanResult.h"
#include "model/FileAsyncScanResultsRequest.h"
#include "model/FileAsyncScanResultsResult.h"
#include "model/GetAddVideoDnaResultsRequest.h"
#include "model/GetAddVideoDnaResultsResult.h"
#include "model/GetFacesRequest.h"
#include "model/GetFacesResult.h"
#include "model/GetGroupsRequest.h"
#include "model/GetGroupsResult.h"
#include "model/GetPersonRequest.h"
#include "model/GetPersonResult.h"
#include "model/GetPersonsRequest.h"
#include "model/GetPersonsResult.h"
#include "model/GetSimilarityImageRequest.h"
#include "model/GetSimilarityImageResult.h"
#include "model/GetSimilarityLibraryRequest.h"
#include "model/GetSimilarityLibraryResult.h"
#include "model/ImageAsyncManualScanRequest.h"
#include "model/ImageAsyncManualScanResult.h"
#include "model/ImageAsyncManualScanResultsRequest.h"
#include "model/ImageAsyncManualScanResultsResult.h"
#include "model/ImageAsyncScanRequest.h"
#include "model/ImageAsyncScanResult.h"
#include "model/ImageAsyncScanResultsRequest.h"
#include "model/ImageAsyncScanResultsResult.h"
#include "model/ImageDetectionRequest.h"
#include "model/ImageDetectionResult.h"
#include "model/ImageResultRequest.h"
#include "model/ImageResultResult.h"
#include "model/ImageResultsRequest.h"
#include "model/ImageResultsResult.h"
#include "model/ImageScanFeedbackRequest.h"
#include "model/ImageScanFeedbackResult.h"
#include "model/ImageSyncScanRequest.h"
#include "model/ImageSyncScanResult.h"
#include "model/ImportKeywordsRequest.h"
#include "model/ImportKeywordsResult.h"
#include "model/ListSimilarityImagesRequest.h"
#include "model/ListSimilarityImagesResult.h"
#include "model/ListSimilarityLibrariesRequest.h"
#include "model/ListSimilarityLibrariesResult.h"
#include "model/LiveStreamAsyncScanRequest.h"
#include "model/LiveStreamAsyncScanResult.h"
#include "model/LiveStreamAsyncScanResultsRequest.h"
#include "model/LiveStreamAsyncScanResultsResult.h"
#include "model/LiveStreamCancelScanRequest.h"
#include "model/LiveStreamCancelScanResult.h"
#include "model/MarkAuditContentRequest.h"
#include "model/MarkAuditContentResult.h"
#include "model/MarkAuditContentItemRequest.h"
#include "model/MarkAuditContentItemResult.h"
#include "model/MarkOssResultRequest.h"
#include "model/MarkOssResultResult.h"
#include "model/MarkWebsiteScanResultRequest.h"
#include "model/MarkWebsiteScanResultResult.h"
#include "model/RefundCdiBagRequest.h"
#include "model/RefundCdiBagResult.h"
#include "model/RefundCdiBaseBagRequest.h"
#include "model/RefundCdiBaseBagResult.h"
#include "model/RefundWebSiteInstanceRequest.h"
#include "model/RefundWebSiteInstanceResult.h"
#include "model/RenewWebSiteInstanceRequest.h"
#include "model/RenewWebSiteInstanceResult.h"
#include "model/SampleFeedbackRequest.h"
#include "model/SampleFeedbackResult.h"
#include "model/SearchPersonRequest.h"
#include "model/SearchPersonResult.h"
#include "model/SendVerifyCodeToEmailRequest.h"
#include "model/SendVerifyCodeToEmailResult.h"
#include "model/SendVerifyCodeToPhoneRequest.h"
#include "model/SendVerifyCodeToPhoneResult.h"
#include "model/SendWebsiteFeedbackRequest.h"
#include "model/SendWebsiteFeedbackResult.h"
#include "model/SetPersonRequest.h"
#include "model/SetPersonResult.h"
#include "model/TextAsyncManualScanRequest.h"
#include "model/TextAsyncManualScanResult.h"
#include "model/TextAsyncManualScanResultsRequest.h"
#include "model/TextAsyncManualScanResultsResult.h"
#include "model/TextFeedbackRequest.h"
#include "model/TextFeedbackResult.h"
#include "model/TextKeywordFilterRequest.h"
#include "model/TextKeywordFilterResult.h"
#include "model/TextScanRequest.h"
#include "model/TextScanResult.h"
#include "model/UpdateAppPackageRequest.h"
#include "model/UpdateAppPackageResult.h"
#include "model/UpdateAuditCallbackRequest.h"
#include "model/UpdateAuditCallbackResult.h"
#include "model/UpdateAuditRangeRequest.h"
#include "model/UpdateAuditRangeResult.h"
#include "model/UpdateAuditSettingRequest.h"
#include "model/UpdateAuditSettingResult.h"
#include "model/UpdateBizTypeRequest.h"
#include "model/UpdateBizTypeResult.h"
#include "model/UpdateBizTypeImageLibRequest.h"
#include "model/UpdateBizTypeImageLibResult.h"
#include "model/UpdateBizTypeSettingRequest.h"
#include "model/UpdateBizTypeSettingResult.h"
#include "model/UpdateBizTypeTextLibRequest.h"
#include "model/UpdateBizTypeTextLibResult.h"
#include "model/UpdateCustomOcrTemplateRequest.h"
#include "model/UpdateCustomOcrTemplateResult.h"
#include "model/UpdateImageLibRequest.h"
#include "model/UpdateImageLibResult.h"
#include "model/UpdateKeywordLibRequest.h"
#include "model/UpdateKeywordLibResult.h"
#include "model/UpdateNotificationSettingRequest.h"
#include "model/UpdateNotificationSettingResult.h"
#include "model/UpdateOssCallbackSettingRequest.h"
#include "model/UpdateOssCallbackSettingResult.h"
#include "model/UpdateOssIncrementCheckSettingRequest.h"
#include "model/UpdateOssIncrementCheckSettingResult.h"
#include "model/UpdateOssStockStatusRequest.h"
#include "model/UpdateOssStockStatusResult.h"
#include "model/UpdateWebsiteInstanceRequest.h"
#include "model/UpdateWebsiteInstanceResult.h"
#include "model/UpdateWebsiteInstanceKeyUrlRequest.h"
#include "model/UpdateWebsiteInstanceKeyUrlResult.h"
#include "model/UpdateWebsiteInstanceStatusRequest.h"
#include "model/UpdateWebsiteInstanceStatusResult.h"
#include "model/UpgradeCdiBaseBagRequest.h"
#include "model/UpgradeCdiBaseBagResult.h"
#include "model/UploadCredentialsRequest.h"
#include "model/UploadCredentialsResult.h"
#include "model/UploadImageToLibRequest.h"
#include "model/UploadImageToLibResult.h"
#include "model/VerifyCustomOcrTemplateRequest.h"
#include "model/VerifyCustomOcrTemplateResult.h"
#include "model/VerifyEmailRequest.h"
#include "model/VerifyEmailResult.h"
#include "model/VerifyPhoneRequest.h"
#include "model/VerifyPhoneResult.h"
#include "model/VerifyWebsiteInstanceRequest.h"
#include "model/VerifyWebsiteInstanceResult.h"
#include "model/VideoAsyncManualScanRequest.h"
#include "model/VideoAsyncManualScanResult.h"
#include "model/VideoAsyncManualScanResultsRequest.h"
#include "model/VideoAsyncManualScanResultsResult.h"
#include "model/VideoAsyncScanRequest.h"
#include "model/VideoAsyncScanResult.h"
#include "model/VideoAsyncScanResultsRequest.h"
#include "model/VideoAsyncScanResultsResult.h"
#include "model/VideoCancelScanRequest.h"
#include "model/VideoCancelScanResult.h"
#include "model/VideoFeedbackRequest.h"
#include "model/VideoFeedbackResult.h"
#include "model/VideoSyncScanRequest.h"
#include "model/VideoSyncScanResult.h"
#include "model/VodAsyncScanRequest.h"
#include "model/VodAsyncScanResult.h"
#include "model/VodAsyncScanResultsRequest.h"
#include "model/VodAsyncScanResultsResult.h"
#include "model/VoiceAsyncManualScanRequest.h"
#include "model/VoiceAsyncManualScanResult.h"
#include "model/VoiceAsyncManualScanResultsRequest.h"
#include "model/VoiceAsyncManualScanResultsResult.h"
#include "model/VoiceAsyncScanRequest.h"
#include "model/VoiceAsyncScanResult.h"
#include "model/VoiceAsyncScanResultsRequest.h"
#include "model/VoiceAsyncScanResultsResult.h"
#include "model/VoiceCancelScanRequest.h"
#include "model/VoiceCancelScanResult.h"
#include "model/VoiceIdentityCheckRequest.h"
#include "model/VoiceIdentityCheckResult.h"
#include "model/VoiceIdentityRegisterRequest.h"
#include "model/VoiceIdentityRegisterResult.h"
#include "model/VoiceIdentityStartCheckRequest.h"
#include "model/VoiceIdentityStartCheckResult.h"
#include "model/VoiceIdentityStartRegisterRequest.h"
#include "model/VoiceIdentityStartRegisterResult.h"
#include "model/VoiceIdentityUnregisterRequest.h"
#include "model/VoiceIdentityUnregisterResult.h"
#include "model/VoiceSyncScanRequest.h"
#include "model/VoiceSyncScanResult.h"
#include "model/WebpageAsyncScanRequest.h"
#include "model/WebpageAsyncScanResult.h"
#include "model/WebpageAsyncScanResultsRequest.h"
#include "model/WebpageAsyncScanResultsResult.h"
#include "model/WebpageSyncScanRequest.h"
#include "model/WebpageSyncScanResult.h"


namespace AlibabaCloud
{
	namespace Green
	{
		class ALIBABACLOUD_GREEN_EXPORT GreenClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddFacesResult> AddFacesOutcome;
			typedef std::future<AddFacesOutcome> AddFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddFacesRequest&, const AddFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFacesAsyncHandler;
			typedef Outcome<Error, Model::AddGroupsResult> AddGroupsOutcome;
			typedef std::future<AddGroupsOutcome> AddGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddGroupsRequest&, const AddGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupsAsyncHandler;
			typedef Outcome<Error, Model::AddPersonResult> AddPersonOutcome;
			typedef std::future<AddPersonOutcome> AddPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddPersonRequest&, const AddPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPersonAsyncHandler;
			typedef Outcome<Error, Model::AddSimilarityImageResult> AddSimilarityImageOutcome;
			typedef std::future<AddSimilarityImageOutcome> AddSimilarityImageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddSimilarityImageRequest&, const AddSimilarityImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSimilarityImageAsyncHandler;
			typedef Outcome<Error, Model::AddSimilarityLibraryResult> AddSimilarityLibraryOutcome;
			typedef std::future<AddSimilarityLibraryOutcome> AddSimilarityLibraryOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddSimilarityLibraryRequest&, const AddSimilarityLibraryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSimilarityLibraryAsyncHandler;
			typedef Outcome<Error, Model::AddVideoDnaResult> AddVideoDnaOutcome;
			typedef std::future<AddVideoDnaOutcome> AddVideoDnaOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddVideoDnaRequest&, const AddVideoDnaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVideoDnaAsyncHandler;
			typedef Outcome<Error, Model::AddVideoDnaGroupResult> AddVideoDnaGroupOutcome;
			typedef std::future<AddVideoDnaGroupOutcome> AddVideoDnaGroupOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddVideoDnaGroupRequest&, const AddVideoDnaGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVideoDnaGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatCustomOcrTemplateResult> CreatCustomOcrTemplateOutcome;
			typedef std::future<CreatCustomOcrTemplateOutcome> CreatCustomOcrTemplateOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreatCustomOcrTemplateRequest&, const CreatCustomOcrTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatCustomOcrTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateAuditCallbackResult> CreateAuditCallbackOutcome;
			typedef std::future<CreateAuditCallbackOutcome> CreateAuditCallbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateAuditCallbackRequest&, const CreateAuditCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditCallbackAsyncHandler;
			typedef Outcome<Error, Model::CreateBizTypeResult> CreateBizTypeOutcome;
			typedef std::future<CreateBizTypeOutcome> CreateBizTypeOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateBizTypeRequest&, const CreateBizTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBizTypeAsyncHandler;
			typedef Outcome<Error, Model::CreateCdiBagResult> CreateCdiBagOutcome;
			typedef std::future<CreateCdiBagOutcome> CreateCdiBagOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateCdiBagRequest&, const CreateCdiBagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdiBagAsyncHandler;
			typedef Outcome<Error, Model::CreateCdiBaseBagResult> CreateCdiBaseBagOutcome;
			typedef std::future<CreateCdiBaseBagOutcome> CreateCdiBaseBagOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateCdiBaseBagRequest&, const CreateCdiBaseBagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdiBaseBagAsyncHandler;
			typedef Outcome<Error, Model::CreateImageLibResult> CreateImageLibOutcome;
			typedef std::future<CreateImageLibOutcome> CreateImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateImageLibRequest&, const CreateImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageLibAsyncHandler;
			typedef Outcome<Error, Model::CreateKeywordResult> CreateKeywordOutcome;
			typedef std::future<CreateKeywordOutcome> CreateKeywordOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateKeywordRequest&, const CreateKeywordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeywordAsyncHandler;
			typedef Outcome<Error, Model::CreateKeywordLibResult> CreateKeywordLibOutcome;
			typedef std::future<CreateKeywordLibOutcome> CreateKeywordLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateKeywordLibRequest&, const CreateKeywordLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeywordLibAsyncHandler;
			typedef Outcome<Error, Model::CreateWebSiteInstanceResult> CreateWebSiteInstanceOutcome;
			typedef std::future<CreateWebSiteInstanceOutcome> CreateWebSiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateWebSiteInstanceRequest&, const CreateWebSiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebSiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateWebsiteIndexPageBaselineResult> CreateWebsiteIndexPageBaselineOutcome;
			typedef std::future<CreateWebsiteIndexPageBaselineOutcome> CreateWebsiteIndexPageBaselineOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::CreateWebsiteIndexPageBaselineRequest&, const CreateWebsiteIndexPageBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebsiteIndexPageBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteBizTypeResult> DeleteBizTypeOutcome;
			typedef std::future<DeleteBizTypeOutcome> DeleteBizTypeOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteBizTypeRequest&, const DeleteBizTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBizTypeAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomOcrTemplateResult> DeleteCustomOcrTemplateOutcome;
			typedef std::future<DeleteCustomOcrTemplateOutcome> DeleteCustomOcrTemplateOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteCustomOcrTemplateRequest&, const DeleteCustomOcrTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomOcrTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteFacesResult> DeleteFacesOutcome;
			typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteFacesRequest&, const DeleteFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFacesAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupsResult> DeleteGroupsOutcome;
			typedef std::future<DeleteGroupsOutcome> DeleteGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteGroupsRequest&, const DeleteGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageFromLibResult> DeleteImageFromLibOutcome;
			typedef std::future<DeleteImageFromLibOutcome> DeleteImageFromLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteImageFromLibRequest&, const DeleteImageFromLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageFromLibAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageLibResult> DeleteImageLibOutcome;
			typedef std::future<DeleteImageLibOutcome> DeleteImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteImageLibRequest&, const DeleteImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageLibAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeywordResult> DeleteKeywordOutcome;
			typedef std::future<DeleteKeywordOutcome> DeleteKeywordOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteKeywordRequest&, const DeleteKeywordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeywordAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeywordLibResult> DeleteKeywordLibOutcome;
			typedef std::future<DeleteKeywordLibOutcome> DeleteKeywordLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteKeywordLibRequest&, const DeleteKeywordLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeywordLibAsyncHandler;
			typedef Outcome<Error, Model::DeleteNotificationContactsResult> DeleteNotificationContactsOutcome;
			typedef std::future<DeleteNotificationContactsOutcome> DeleteNotificationContactsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteNotificationContactsRequest&, const DeleteNotificationContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationContactsAsyncHandler;
			typedef Outcome<Error, Model::DeletePersonResult> DeletePersonOutcome;
			typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeletePersonRequest&, const DeletePersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
			typedef Outcome<Error, Model::DeleteSimilarityImageResult> DeleteSimilarityImageOutcome;
			typedef std::future<DeleteSimilarityImageOutcome> DeleteSimilarityImageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteSimilarityImageRequest&, const DeleteSimilarityImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSimilarityImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteSimilarityLibraryResult> DeleteSimilarityLibraryOutcome;
			typedef std::future<DeleteSimilarityLibraryOutcome> DeleteSimilarityLibraryOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteSimilarityLibraryRequest&, const DeleteSimilarityLibraryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSimilarityLibraryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoDnaResult> DeleteVideoDnaOutcome;
			typedef std::future<DeleteVideoDnaOutcome> DeleteVideoDnaOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteVideoDnaRequest&, const DeleteVideoDnaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoDnaAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoDnaGroupResult> DeleteVideoDnaGroupOutcome;
			typedef std::future<DeleteVideoDnaGroupOutcome> DeleteVideoDnaGroupOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteVideoDnaGroupRequest&, const DeleteVideoDnaGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoDnaGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppInfoResult> DescribeAppInfoOutcome;
			typedef std::future<DescribeAppInfoOutcome> DescribeAppInfoOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAppInfoRequest&, const DescribeAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditCallbackResult> DescribeAuditCallbackOutcome;
			typedef std::future<DescribeAuditCallbackOutcome> DescribeAuditCallbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditCallbackRequest&, const DescribeAuditCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditCallbackAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditCallbackListResult> DescribeAuditCallbackListOutcome;
			typedef std::future<DescribeAuditCallbackListOutcome> DescribeAuditCallbackListOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditCallbackListRequest&, const DescribeAuditCallbackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditCallbackListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditContentResult> DescribeAuditContentOutcome;
			typedef std::future<DescribeAuditContentOutcome> DescribeAuditContentOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditContentRequest&, const DescribeAuditContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditContentItemResult> DescribeAuditContentItemOutcome;
			typedef std::future<DescribeAuditContentItemOutcome> DescribeAuditContentItemOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditContentItemRequest&, const DescribeAuditContentItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditContentItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditRangeResult> DescribeAuditRangeOutcome;
			typedef std::future<DescribeAuditRangeOutcome> DescribeAuditRangeOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditRangeRequest&, const DescribeAuditRangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRangeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditSettingResult> DescribeAuditSettingOutcome;
			typedef std::future<DescribeAuditSettingOutcome> DescribeAuditSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeAuditSettingRequest&, const DescribeAuditSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizTypeImageLibResult> DescribeBizTypeImageLibOutcome;
			typedef std::future<DescribeBizTypeImageLibOutcome> DescribeBizTypeImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeBizTypeImageLibRequest&, const DescribeBizTypeImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTypeImageLibAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizTypeSettingResult> DescribeBizTypeSettingOutcome;
			typedef std::future<DescribeBizTypeSettingOutcome> DescribeBizTypeSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeBizTypeSettingRequest&, const DescribeBizTypeSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTypeSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizTypeTextLibResult> DescribeBizTypeTextLibOutcome;
			typedef std::future<DescribeBizTypeTextLibOutcome> DescribeBizTypeTextLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeBizTypeTextLibRequest&, const DescribeBizTypeTextLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTypeTextLibAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizTypesResult> DescribeBizTypesOutcome;
			typedef std::future<DescribeBizTypesOutcome> DescribeBizTypesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeBizTypesRequest&, const DescribeBizTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudMonitorServicesResult> DescribeCloudMonitorServicesOutcome;
			typedef std::future<DescribeCloudMonitorServicesOutcome> DescribeCloudMonitorServicesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeCloudMonitorServicesRequest&, const DescribeCloudMonitorServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMonitorServicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomOcrTemplateResult> DescribeCustomOcrTemplateOutcome;
			typedef std::future<DescribeCustomOcrTemplateOutcome> DescribeCustomOcrTemplateOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeCustomOcrTemplateRequest&, const DescribeCustomOcrTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomOcrTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageFromLibResult> DescribeImageFromLibOutcome;
			typedef std::future<DescribeImageFromLibOutcome> DescribeImageFromLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeImageFromLibRequest&, const DescribeImageFromLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFromLibAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageLibResult> DescribeImageLibOutcome;
			typedef std::future<DescribeImageLibOutcome> DescribeImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeImageLibRequest&, const DescribeImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLibAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageUploadInfoResult> DescribeImageUploadInfoOutcome;
			typedef std::future<DescribeImageUploadInfoOutcome> DescribeImageUploadInfoOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeImageUploadInfoRequest&, const DescribeImageUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeywordResult> DescribeKeywordOutcome;
			typedef std::future<DescribeKeywordOutcome> DescribeKeywordOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeKeywordRequest&, const DescribeKeywordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeywordAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeywordLibResult> DescribeKeywordLibOutcome;
			typedef std::future<DescribeKeywordLibOutcome> DescribeKeywordLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeKeywordLibRequest&, const DescribeKeywordLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeywordLibAsyncHandler;
			typedef Outcome<Error, Model::DescribeNotificationSettingResult> DescribeNotificationSettingOutcome;
			typedef std::future<DescribeNotificationSettingOutcome> DescribeNotificationSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeNotificationSettingRequest&, const DescribeNotificationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeOpenApiRcpStatsResult> DescribeOpenApiRcpStatsOutcome;
			typedef std::future<DescribeOpenApiRcpStatsOutcome> DescribeOpenApiRcpStatsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOpenApiRcpStatsRequest&, const DescribeOpenApiRcpStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenApiRcpStatsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOpenApiUsageResult> DescribeOpenApiUsageOutcome;
			typedef std::future<DescribeOpenApiUsageOutcome> DescribeOpenApiUsageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOpenApiUsageRequest&, const DescribeOpenApiUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenApiUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssCallbackSettingResult> DescribeOssCallbackSettingOutcome;
			typedef std::future<DescribeOssCallbackSettingOutcome> DescribeOssCallbackSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssCallbackSettingRequest&, const DescribeOssCallbackSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssCallbackSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssIncrementCheckSettingResult> DescribeOssIncrementCheckSettingOutcome;
			typedef std::future<DescribeOssIncrementCheckSettingOutcome> DescribeOssIncrementCheckSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssIncrementCheckSettingRequest&, const DescribeOssIncrementCheckSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssIncrementCheckSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssIncrementOverviewResult> DescribeOssIncrementOverviewOutcome;
			typedef std::future<DescribeOssIncrementOverviewOutcome> DescribeOssIncrementOverviewOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssIncrementOverviewRequest&, const DescribeOssIncrementOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssIncrementOverviewAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssIncrementStatsResult> DescribeOssIncrementStatsOutcome;
			typedef std::future<DescribeOssIncrementStatsOutcome> DescribeOssIncrementStatsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssIncrementStatsRequest&, const DescribeOssIncrementStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssIncrementStatsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssResultItemsResult> DescribeOssResultItemsOutcome;
			typedef std::future<DescribeOssResultItemsOutcome> DescribeOssResultItemsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssResultItemsRequest&, const DescribeOssResultItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssResultItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssStockStatusResult> DescribeOssStockStatusOutcome;
			typedef std::future<DescribeOssStockStatusOutcome> DescribeOssStockStatusOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeOssStockStatusRequest&, const DescribeOssStockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssStockStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSdkUrlResult> DescribeSdkUrlOutcome;
			typedef std::future<DescribeSdkUrlOutcome> DescribeSdkUrlOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeSdkUrlRequest&, const DescribeSdkUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpdatePackageResultResult> DescribeUpdatePackageResultOutcome;
			typedef std::future<DescribeUpdatePackageResultOutcome> DescribeUpdatePackageResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeUpdatePackageResultRequest&, const DescribeUpdatePackageResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdatePackageResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeUploadInfoResult> DescribeUploadInfoOutcome;
			typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeUploadInfoRequest&, const DescribeUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsageBillResult> DescribeUsageBillOutcome;
			typedef std::future<DescribeUsageBillOutcome> DescribeUsageBillOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeUsageBillRequest&, const DescribeUsageBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageBillAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBizTypesResult> DescribeUserBizTypesOutcome;
			typedef std::future<DescribeUserBizTypesOutcome> DescribeUserBizTypesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeUserBizTypesRequest&, const DescribeUserBizTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBizTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeViewContentResult> DescribeViewContentOutcome;
			typedef std::future<DescribeViewContentOutcome> DescribeViewContentOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeViewContentRequest&, const DescribeViewContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteIndexPageBaselineResult> DescribeWebsiteIndexPageBaselineOutcome;
			typedef std::future<DescribeWebsiteIndexPageBaselineOutcome> DescribeWebsiteIndexPageBaselineOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteIndexPageBaselineRequest&, const DescribeWebsiteIndexPageBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteIndexPageBaselineAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteInstanceResult> DescribeWebsiteInstanceOutcome;
			typedef std::future<DescribeWebsiteInstanceOutcome> DescribeWebsiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteInstanceRequest&, const DescribeWebsiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteInstanceIdResult> DescribeWebsiteInstanceIdOutcome;
			typedef std::future<DescribeWebsiteInstanceIdOutcome> DescribeWebsiteInstanceIdOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteInstanceIdRequest&, const DescribeWebsiteInstanceIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteInstanceIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteInstanceKeyUrlResult> DescribeWebsiteInstanceKeyUrlOutcome;
			typedef std::future<DescribeWebsiteInstanceKeyUrlOutcome> DescribeWebsiteInstanceKeyUrlOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteInstanceKeyUrlRequest&, const DescribeWebsiteInstanceKeyUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteInstanceKeyUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteScanResultResult> DescribeWebsiteScanResultOutcome;
			typedef std::future<DescribeWebsiteScanResultOutcome> DescribeWebsiteScanResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteScanResultRequest&, const DescribeWebsiteScanResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteScanResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteScanResultDetailResult> DescribeWebsiteScanResultDetailOutcome;
			typedef std::future<DescribeWebsiteScanResultDetailOutcome> DescribeWebsiteScanResultDetailOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteScanResultDetailRequest&, const DescribeWebsiteScanResultDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteScanResultDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteStatResult> DescribeWebsiteStatOutcome;
			typedef std::future<DescribeWebsiteStatOutcome> DescribeWebsiteStatOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteStatRequest&, const DescribeWebsiteStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebsiteVerifyInfoResult> DescribeWebsiteVerifyInfoOutcome;
			typedef std::future<DescribeWebsiteVerifyInfoOutcome> DescribeWebsiteVerifyInfoOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DescribeWebsiteVerifyInfoRequest&, const DescribeWebsiteVerifyInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebsiteVerifyInfoAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceResult> DetectFaceOutcome;
			typedef std::future<DetectFaceOutcome> DetectFaceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DetectFaceRequest&, const DetectFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAsyncHandler;
			typedef Outcome<Error, Model::ExportKeywordsResult> ExportKeywordsOutcome;
			typedef std::future<ExportKeywordsOutcome> ExportKeywordsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ExportKeywordsRequest&, const ExportKeywordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportKeywordsAsyncHandler;
			typedef Outcome<Error, Model::ExportOpenApiRcpStatsResult> ExportOpenApiRcpStatsOutcome;
			typedef std::future<ExportOpenApiRcpStatsOutcome> ExportOpenApiRcpStatsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ExportOpenApiRcpStatsRequest&, const ExportOpenApiRcpStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportOpenApiRcpStatsAsyncHandler;
			typedef Outcome<Error, Model::ExportOssResultResult> ExportOssResultOutcome;
			typedef std::future<ExportOssResultOutcome> ExportOssResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ExportOssResultRequest&, const ExportOssResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportOssResultAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResult> FileAsyncScanOutcome;
			typedef std::future<FileAsyncScanOutcome> FileAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanRequest&, const FileAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResultsResult> FileAsyncScanResultsOutcome;
			typedef std::future<FileAsyncScanResultsOutcome> FileAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanResultsRequest&, const FileAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::GetAddVideoDnaResultsResult> GetAddVideoDnaResultsOutcome;
			typedef std::future<GetAddVideoDnaResultsOutcome> GetAddVideoDnaResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetAddVideoDnaResultsRequest&, const GetAddVideoDnaResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddVideoDnaResultsAsyncHandler;
			typedef Outcome<Error, Model::GetFacesResult> GetFacesOutcome;
			typedef std::future<GetFacesOutcome> GetFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetFacesRequest&, const GetFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFacesAsyncHandler;
			typedef Outcome<Error, Model::GetGroupsResult> GetGroupsOutcome;
			typedef std::future<GetGroupsOutcome> GetGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetGroupsRequest&, const GetGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupsAsyncHandler;
			typedef Outcome<Error, Model::GetPersonResult> GetPersonOutcome;
			typedef std::future<GetPersonOutcome> GetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonRequest&, const GetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonAsyncHandler;
			typedef Outcome<Error, Model::GetPersonsResult> GetPersonsOutcome;
			typedef std::future<GetPersonsOutcome> GetPersonsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonsRequest&, const GetPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonsAsyncHandler;
			typedef Outcome<Error, Model::GetSimilarityImageResult> GetSimilarityImageOutcome;
			typedef std::future<GetSimilarityImageOutcome> GetSimilarityImageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetSimilarityImageRequest&, const GetSimilarityImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSimilarityImageAsyncHandler;
			typedef Outcome<Error, Model::GetSimilarityLibraryResult> GetSimilarityLibraryOutcome;
			typedef std::future<GetSimilarityLibraryOutcome> GetSimilarityLibraryOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetSimilarityLibraryRequest&, const GetSimilarityLibraryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSimilarityLibraryAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncManualScanResult> ImageAsyncManualScanOutcome;
			typedef std::future<ImageAsyncManualScanOutcome> ImageAsyncManualScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncManualScanRequest&, const ImageAsyncManualScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncManualScanAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncManualScanResultsResult> ImageAsyncManualScanResultsOutcome;
			typedef std::future<ImageAsyncManualScanResultsOutcome> ImageAsyncManualScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncManualScanResultsRequest&, const ImageAsyncManualScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncManualScanResultsAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResult> ImageAsyncScanOutcome;
			typedef std::future<ImageAsyncScanOutcome> ImageAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanRequest&, const ImageAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResultsResult> ImageAsyncScanResultsOutcome;
			typedef std::future<ImageAsyncScanResultsOutcome> ImageAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanResultsRequest&, const ImageAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::ImageDetectionResult> ImageDetectionOutcome;
			typedef std::future<ImageDetectionOutcome> ImageDetectionOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageDetectionRequest&, const ImageDetectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageDetectionAsyncHandler;
			typedef Outcome<Error, Model::ImageResultResult> ImageResultOutcome;
			typedef std::future<ImageResultOutcome> ImageResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageResultRequest&, const ImageResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageResultAsyncHandler;
			typedef Outcome<Error, Model::ImageResultsResult> ImageResultsOutcome;
			typedef std::future<ImageResultsOutcome> ImageResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageResultsRequest&, const ImageResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageResultsAsyncHandler;
			typedef Outcome<Error, Model::ImageScanFeedbackResult> ImageScanFeedbackOutcome;
			typedef std::future<ImageScanFeedbackOutcome> ImageScanFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageScanFeedbackRequest&, const ImageScanFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageScanFeedbackAsyncHandler;
			typedef Outcome<Error, Model::ImageSyncScanResult> ImageSyncScanOutcome;
			typedef std::future<ImageSyncScanOutcome> ImageSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageSyncScanRequest&, const ImageSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageSyncScanAsyncHandler;
			typedef Outcome<Error, Model::ImportKeywordsResult> ImportKeywordsOutcome;
			typedef std::future<ImportKeywordsOutcome> ImportKeywordsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImportKeywordsRequest&, const ImportKeywordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeywordsAsyncHandler;
			typedef Outcome<Error, Model::ListSimilarityImagesResult> ListSimilarityImagesOutcome;
			typedef std::future<ListSimilarityImagesOutcome> ListSimilarityImagesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ListSimilarityImagesRequest&, const ListSimilarityImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSimilarityImagesAsyncHandler;
			typedef Outcome<Error, Model::ListSimilarityLibrariesResult> ListSimilarityLibrariesOutcome;
			typedef std::future<ListSimilarityLibrariesOutcome> ListSimilarityLibrariesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ListSimilarityLibrariesRequest&, const ListSimilarityLibrariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSimilarityLibrariesAsyncHandler;
			typedef Outcome<Error, Model::LiveStreamAsyncScanResult> LiveStreamAsyncScanOutcome;
			typedef std::future<LiveStreamAsyncScanOutcome> LiveStreamAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::LiveStreamAsyncScanRequest&, const LiveStreamAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LiveStreamAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::LiveStreamAsyncScanResultsResult> LiveStreamAsyncScanResultsOutcome;
			typedef std::future<LiveStreamAsyncScanResultsOutcome> LiveStreamAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::LiveStreamAsyncScanResultsRequest&, const LiveStreamAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LiveStreamAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::LiveStreamCancelScanResult> LiveStreamCancelScanOutcome;
			typedef std::future<LiveStreamCancelScanOutcome> LiveStreamCancelScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::LiveStreamCancelScanRequest&, const LiveStreamCancelScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LiveStreamCancelScanAsyncHandler;
			typedef Outcome<Error, Model::MarkAuditContentResult> MarkAuditContentOutcome;
			typedef std::future<MarkAuditContentOutcome> MarkAuditContentOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::MarkAuditContentRequest&, const MarkAuditContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MarkAuditContentAsyncHandler;
			typedef Outcome<Error, Model::MarkAuditContentItemResult> MarkAuditContentItemOutcome;
			typedef std::future<MarkAuditContentItemOutcome> MarkAuditContentItemOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::MarkAuditContentItemRequest&, const MarkAuditContentItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MarkAuditContentItemAsyncHandler;
			typedef Outcome<Error, Model::MarkOssResultResult> MarkOssResultOutcome;
			typedef std::future<MarkOssResultOutcome> MarkOssResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::MarkOssResultRequest&, const MarkOssResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MarkOssResultAsyncHandler;
			typedef Outcome<Error, Model::MarkWebsiteScanResultResult> MarkWebsiteScanResultOutcome;
			typedef std::future<MarkWebsiteScanResultOutcome> MarkWebsiteScanResultOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::MarkWebsiteScanResultRequest&, const MarkWebsiteScanResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MarkWebsiteScanResultAsyncHandler;
			typedef Outcome<Error, Model::RefundCdiBagResult> RefundCdiBagOutcome;
			typedef std::future<RefundCdiBagOutcome> RefundCdiBagOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::RefundCdiBagRequest&, const RefundCdiBagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundCdiBagAsyncHandler;
			typedef Outcome<Error, Model::RefundCdiBaseBagResult> RefundCdiBaseBagOutcome;
			typedef std::future<RefundCdiBaseBagOutcome> RefundCdiBaseBagOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::RefundCdiBaseBagRequest&, const RefundCdiBaseBagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundCdiBaseBagAsyncHandler;
			typedef Outcome<Error, Model::RefundWebSiteInstanceResult> RefundWebSiteInstanceOutcome;
			typedef std::future<RefundWebSiteInstanceOutcome> RefundWebSiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::RefundWebSiteInstanceRequest&, const RefundWebSiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundWebSiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewWebSiteInstanceResult> RenewWebSiteInstanceOutcome;
			typedef std::future<RenewWebSiteInstanceOutcome> RenewWebSiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::RenewWebSiteInstanceRequest&, const RenewWebSiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewWebSiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::SampleFeedbackResult> SampleFeedbackOutcome;
			typedef std::future<SampleFeedbackOutcome> SampleFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SampleFeedbackRequest&, const SampleFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SampleFeedbackAsyncHandler;
			typedef Outcome<Error, Model::SearchPersonResult> SearchPersonOutcome;
			typedef std::future<SearchPersonOutcome> SearchPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SearchPersonRequest&, const SearchPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonAsyncHandler;
			typedef Outcome<Error, Model::SendVerifyCodeToEmailResult> SendVerifyCodeToEmailOutcome;
			typedef std::future<SendVerifyCodeToEmailOutcome> SendVerifyCodeToEmailOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SendVerifyCodeToEmailRequest&, const SendVerifyCodeToEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerifyCodeToEmailAsyncHandler;
			typedef Outcome<Error, Model::SendVerifyCodeToPhoneResult> SendVerifyCodeToPhoneOutcome;
			typedef std::future<SendVerifyCodeToPhoneOutcome> SendVerifyCodeToPhoneOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SendVerifyCodeToPhoneRequest&, const SendVerifyCodeToPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerifyCodeToPhoneAsyncHandler;
			typedef Outcome<Error, Model::SendWebsiteFeedbackResult> SendWebsiteFeedbackOutcome;
			typedef std::future<SendWebsiteFeedbackOutcome> SendWebsiteFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SendWebsiteFeedbackRequest&, const SendWebsiteFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendWebsiteFeedbackAsyncHandler;
			typedef Outcome<Error, Model::SetPersonResult> SetPersonOutcome;
			typedef std::future<SetPersonOutcome> SetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SetPersonRequest&, const SetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPersonAsyncHandler;
			typedef Outcome<Error, Model::TextAsyncManualScanResult> TextAsyncManualScanOutcome;
			typedef std::future<TextAsyncManualScanOutcome> TextAsyncManualScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextAsyncManualScanRequest&, const TextAsyncManualScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextAsyncManualScanAsyncHandler;
			typedef Outcome<Error, Model::TextAsyncManualScanResultsResult> TextAsyncManualScanResultsOutcome;
			typedef std::future<TextAsyncManualScanResultsOutcome> TextAsyncManualScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextAsyncManualScanResultsRequest&, const TextAsyncManualScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextAsyncManualScanResultsAsyncHandler;
			typedef Outcome<Error, Model::TextFeedbackResult> TextFeedbackOutcome;
			typedef std::future<TextFeedbackOutcome> TextFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextFeedbackRequest&, const TextFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextFeedbackAsyncHandler;
			typedef Outcome<Error, Model::TextKeywordFilterResult> TextKeywordFilterOutcome;
			typedef std::future<TextKeywordFilterOutcome> TextKeywordFilterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextKeywordFilterRequest&, const TextKeywordFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextKeywordFilterAsyncHandler;
			typedef Outcome<Error, Model::TextScanResult> TextScanOutcome;
			typedef std::future<TextScanOutcome> TextScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextScanRequest&, const TextScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextScanAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppPackageResult> UpdateAppPackageOutcome;
			typedef std::future<UpdateAppPackageOutcome> UpdateAppPackageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateAppPackageRequest&, const UpdateAppPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppPackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuditCallbackResult> UpdateAuditCallbackOutcome;
			typedef std::future<UpdateAuditCallbackOutcome> UpdateAuditCallbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateAuditCallbackRequest&, const UpdateAuditCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuditCallbackAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuditRangeResult> UpdateAuditRangeOutcome;
			typedef std::future<UpdateAuditRangeOutcome> UpdateAuditRangeOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateAuditRangeRequest&, const UpdateAuditRangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuditRangeAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuditSettingResult> UpdateAuditSettingOutcome;
			typedef std::future<UpdateAuditSettingOutcome> UpdateAuditSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateAuditSettingRequest&, const UpdateAuditSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuditSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateBizTypeResult> UpdateBizTypeOutcome;
			typedef std::future<UpdateBizTypeOutcome> UpdateBizTypeOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateBizTypeRequest&, const UpdateBizTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBizTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateBizTypeImageLibResult> UpdateBizTypeImageLibOutcome;
			typedef std::future<UpdateBizTypeImageLibOutcome> UpdateBizTypeImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateBizTypeImageLibRequest&, const UpdateBizTypeImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBizTypeImageLibAsyncHandler;
			typedef Outcome<Error, Model::UpdateBizTypeSettingResult> UpdateBizTypeSettingOutcome;
			typedef std::future<UpdateBizTypeSettingOutcome> UpdateBizTypeSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateBizTypeSettingRequest&, const UpdateBizTypeSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBizTypeSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateBizTypeTextLibResult> UpdateBizTypeTextLibOutcome;
			typedef std::future<UpdateBizTypeTextLibOutcome> UpdateBizTypeTextLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateBizTypeTextLibRequest&, const UpdateBizTypeTextLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBizTypeTextLibAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomOcrTemplateResult> UpdateCustomOcrTemplateOutcome;
			typedef std::future<UpdateCustomOcrTemplateOutcome> UpdateCustomOcrTemplateOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateCustomOcrTemplateRequest&, const UpdateCustomOcrTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomOcrTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageLibResult> UpdateImageLibOutcome;
			typedef std::future<UpdateImageLibOutcome> UpdateImageLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateImageLibRequest&, const UpdateImageLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageLibAsyncHandler;
			typedef Outcome<Error, Model::UpdateKeywordLibResult> UpdateKeywordLibOutcome;
			typedef std::future<UpdateKeywordLibOutcome> UpdateKeywordLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateKeywordLibRequest&, const UpdateKeywordLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKeywordLibAsyncHandler;
			typedef Outcome<Error, Model::UpdateNotificationSettingResult> UpdateNotificationSettingOutcome;
			typedef std::future<UpdateNotificationSettingOutcome> UpdateNotificationSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateNotificationSettingRequest&, const UpdateNotificationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNotificationSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateOssCallbackSettingResult> UpdateOssCallbackSettingOutcome;
			typedef std::future<UpdateOssCallbackSettingOutcome> UpdateOssCallbackSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateOssCallbackSettingRequest&, const UpdateOssCallbackSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOssCallbackSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateOssIncrementCheckSettingResult> UpdateOssIncrementCheckSettingOutcome;
			typedef std::future<UpdateOssIncrementCheckSettingOutcome> UpdateOssIncrementCheckSettingOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateOssIncrementCheckSettingRequest&, const UpdateOssIncrementCheckSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOssIncrementCheckSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateOssStockStatusResult> UpdateOssStockStatusOutcome;
			typedef std::future<UpdateOssStockStatusOutcome> UpdateOssStockStatusOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateOssStockStatusRequest&, const UpdateOssStockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOssStockStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateWebsiteInstanceResult> UpdateWebsiteInstanceOutcome;
			typedef std::future<UpdateWebsiteInstanceOutcome> UpdateWebsiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateWebsiteInstanceRequest&, const UpdateWebsiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWebsiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateWebsiteInstanceKeyUrlResult> UpdateWebsiteInstanceKeyUrlOutcome;
			typedef std::future<UpdateWebsiteInstanceKeyUrlOutcome> UpdateWebsiteInstanceKeyUrlOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateWebsiteInstanceKeyUrlRequest&, const UpdateWebsiteInstanceKeyUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWebsiteInstanceKeyUrlAsyncHandler;
			typedef Outcome<Error, Model::UpdateWebsiteInstanceStatusResult> UpdateWebsiteInstanceStatusOutcome;
			typedef std::future<UpdateWebsiteInstanceStatusOutcome> UpdateWebsiteInstanceStatusOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpdateWebsiteInstanceStatusRequest&, const UpdateWebsiteInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWebsiteInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::UpgradeCdiBaseBagResult> UpgradeCdiBaseBagOutcome;
			typedef std::future<UpgradeCdiBaseBagOutcome> UpgradeCdiBaseBagOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UpgradeCdiBaseBagRequest&, const UpgradeCdiBaseBagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeCdiBaseBagAsyncHandler;
			typedef Outcome<Error, Model::UploadCredentialsResult> UploadCredentialsOutcome;
			typedef std::future<UploadCredentialsOutcome> UploadCredentialsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UploadCredentialsRequest&, const UploadCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCredentialsAsyncHandler;
			typedef Outcome<Error, Model::UploadImageToLibResult> UploadImageToLibOutcome;
			typedef std::future<UploadImageToLibOutcome> UploadImageToLibOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UploadImageToLibRequest&, const UploadImageToLibOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadImageToLibAsyncHandler;
			typedef Outcome<Error, Model::VerifyCustomOcrTemplateResult> VerifyCustomOcrTemplateOutcome;
			typedef std::future<VerifyCustomOcrTemplateOutcome> VerifyCustomOcrTemplateOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VerifyCustomOcrTemplateRequest&, const VerifyCustomOcrTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCustomOcrTemplateAsyncHandler;
			typedef Outcome<Error, Model::VerifyEmailResult> VerifyEmailOutcome;
			typedef std::future<VerifyEmailOutcome> VerifyEmailOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VerifyEmailRequest&, const VerifyEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyEmailAsyncHandler;
			typedef Outcome<Error, Model::VerifyPhoneResult> VerifyPhoneOutcome;
			typedef std::future<VerifyPhoneOutcome> VerifyPhoneOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VerifyPhoneRequest&, const VerifyPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPhoneAsyncHandler;
			typedef Outcome<Error, Model::VerifyWebsiteInstanceResult> VerifyWebsiteInstanceOutcome;
			typedef std::future<VerifyWebsiteInstanceOutcome> VerifyWebsiteInstanceOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VerifyWebsiteInstanceRequest&, const VerifyWebsiteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyWebsiteInstanceAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncManualScanResult> VideoAsyncManualScanOutcome;
			typedef std::future<VideoAsyncManualScanOutcome> VideoAsyncManualScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncManualScanRequest&, const VideoAsyncManualScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncManualScanAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncManualScanResultsResult> VideoAsyncManualScanResultsOutcome;
			typedef std::future<VideoAsyncManualScanResultsOutcome> VideoAsyncManualScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncManualScanResultsRequest&, const VideoAsyncManualScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncManualScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResult> VideoAsyncScanOutcome;
			typedef std::future<VideoAsyncScanOutcome> VideoAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanRequest&, const VideoAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResultsResult> VideoAsyncScanResultsOutcome;
			typedef std::future<VideoAsyncScanResultsOutcome> VideoAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanResultsRequest&, const VideoAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VideoCancelScanResult> VideoCancelScanOutcome;
			typedef std::future<VideoCancelScanOutcome> VideoCancelScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoCancelScanRequest&, const VideoCancelScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoCancelScanAsyncHandler;
			typedef Outcome<Error, Model::VideoFeedbackResult> VideoFeedbackOutcome;
			typedef std::future<VideoFeedbackOutcome> VideoFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoFeedbackRequest&, const VideoFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoFeedbackAsyncHandler;
			typedef Outcome<Error, Model::VideoSyncScanResult> VideoSyncScanOutcome;
			typedef std::future<VideoSyncScanOutcome> VideoSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoSyncScanRequest&, const VideoSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoSyncScanAsyncHandler;
			typedef Outcome<Error, Model::VodAsyncScanResult> VodAsyncScanOutcome;
			typedef std::future<VodAsyncScanOutcome> VodAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VodAsyncScanRequest&, const VodAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VodAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VodAsyncScanResultsResult> VodAsyncScanResultsOutcome;
			typedef std::future<VodAsyncScanResultsOutcome> VodAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VodAsyncScanResultsRequest&, const VodAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VodAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncManualScanResult> VoiceAsyncManualScanOutcome;
			typedef std::future<VoiceAsyncManualScanOutcome> VoiceAsyncManualScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncManualScanRequest&, const VoiceAsyncManualScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncManualScanAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncManualScanResultsResult> VoiceAsyncManualScanResultsOutcome;
			typedef std::future<VoiceAsyncManualScanResultsOutcome> VoiceAsyncManualScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncManualScanResultsRequest&, const VoiceAsyncManualScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncManualScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResult> VoiceAsyncScanOutcome;
			typedef std::future<VoiceAsyncScanOutcome> VoiceAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanRequest&, const VoiceAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResultsResult> VoiceAsyncScanResultsOutcome;
			typedef std::future<VoiceAsyncScanResultsOutcome> VoiceAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanResultsRequest&, const VoiceAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VoiceCancelScanResult> VoiceCancelScanOutcome;
			typedef std::future<VoiceCancelScanOutcome> VoiceCancelScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceCancelScanRequest&, const VoiceCancelScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceCancelScanAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityCheckResult> VoiceIdentityCheckOutcome;
			typedef std::future<VoiceIdentityCheckOutcome> VoiceIdentityCheckOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityCheckRequest&, const VoiceIdentityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityCheckAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityRegisterResult> VoiceIdentityRegisterOutcome;
			typedef std::future<VoiceIdentityRegisterOutcome> VoiceIdentityRegisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityRegisterRequest&, const VoiceIdentityRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityRegisterAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityStartCheckResult> VoiceIdentityStartCheckOutcome;
			typedef std::future<VoiceIdentityStartCheckOutcome> VoiceIdentityStartCheckOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityStartCheckRequest&, const VoiceIdentityStartCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityStartCheckAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityStartRegisterResult> VoiceIdentityStartRegisterOutcome;
			typedef std::future<VoiceIdentityStartRegisterOutcome> VoiceIdentityStartRegisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityStartRegisterRequest&, const VoiceIdentityStartRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityStartRegisterAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityUnregisterResult> VoiceIdentityUnregisterOutcome;
			typedef std::future<VoiceIdentityUnregisterOutcome> VoiceIdentityUnregisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityUnregisterRequest&, const VoiceIdentityUnregisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityUnregisterAsyncHandler;
			typedef Outcome<Error, Model::VoiceSyncScanResult> VoiceSyncScanOutcome;
			typedef std::future<VoiceSyncScanOutcome> VoiceSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceSyncScanRequest&, const VoiceSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceSyncScanAsyncHandler;
			typedef Outcome<Error, Model::WebpageAsyncScanResult> WebpageAsyncScanOutcome;
			typedef std::future<WebpageAsyncScanOutcome> WebpageAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::WebpageAsyncScanRequest&, const WebpageAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WebpageAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::WebpageAsyncScanResultsResult> WebpageAsyncScanResultsOutcome;
			typedef std::future<WebpageAsyncScanResultsOutcome> WebpageAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::WebpageAsyncScanResultsRequest&, const WebpageAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WebpageAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::WebpageSyncScanResult> WebpageSyncScanOutcome;
			typedef std::future<WebpageSyncScanOutcome> WebpageSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::WebpageSyncScanRequest&, const WebpageSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WebpageSyncScanAsyncHandler;

			GreenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GreenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GreenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GreenClient();
			AddFacesOutcome addFaces(const Model::AddFacesRequest &request)const;
			void addFacesAsync(const Model::AddFacesRequest& request, const AddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFacesOutcomeCallable addFacesCallable(const Model::AddFacesRequest& request) const;
			AddGroupsOutcome addGroups(const Model::AddGroupsRequest &request)const;
			void addGroupsAsync(const Model::AddGroupsRequest& request, const AddGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupsOutcomeCallable addGroupsCallable(const Model::AddGroupsRequest& request) const;
			AddPersonOutcome addPerson(const Model::AddPersonRequest &request)const;
			void addPersonAsync(const Model::AddPersonRequest& request, const AddPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPersonOutcomeCallable addPersonCallable(const Model::AddPersonRequest& request) const;
			AddSimilarityImageOutcome addSimilarityImage(const Model::AddSimilarityImageRequest &request)const;
			void addSimilarityImageAsync(const Model::AddSimilarityImageRequest& request, const AddSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSimilarityImageOutcomeCallable addSimilarityImageCallable(const Model::AddSimilarityImageRequest& request) const;
			AddSimilarityLibraryOutcome addSimilarityLibrary(const Model::AddSimilarityLibraryRequest &request)const;
			void addSimilarityLibraryAsync(const Model::AddSimilarityLibraryRequest& request, const AddSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSimilarityLibraryOutcomeCallable addSimilarityLibraryCallable(const Model::AddSimilarityLibraryRequest& request) const;
			AddVideoDnaOutcome addVideoDna(const Model::AddVideoDnaRequest &request)const;
			void addVideoDnaAsync(const Model::AddVideoDnaRequest& request, const AddVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVideoDnaOutcomeCallable addVideoDnaCallable(const Model::AddVideoDnaRequest& request) const;
			AddVideoDnaGroupOutcome addVideoDnaGroup(const Model::AddVideoDnaGroupRequest &request)const;
			void addVideoDnaGroupAsync(const Model::AddVideoDnaGroupRequest& request, const AddVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVideoDnaGroupOutcomeCallable addVideoDnaGroupCallable(const Model::AddVideoDnaGroupRequest& request) const;
			CreatCustomOcrTemplateOutcome creatCustomOcrTemplate(const Model::CreatCustomOcrTemplateRequest &request)const;
			void creatCustomOcrTemplateAsync(const Model::CreatCustomOcrTemplateRequest& request, const CreatCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatCustomOcrTemplateOutcomeCallable creatCustomOcrTemplateCallable(const Model::CreatCustomOcrTemplateRequest& request) const;
			CreateAuditCallbackOutcome createAuditCallback(const Model::CreateAuditCallbackRequest &request)const;
			void createAuditCallbackAsync(const Model::CreateAuditCallbackRequest& request, const CreateAuditCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuditCallbackOutcomeCallable createAuditCallbackCallable(const Model::CreateAuditCallbackRequest& request) const;
			CreateBizTypeOutcome createBizType(const Model::CreateBizTypeRequest &request)const;
			void createBizTypeAsync(const Model::CreateBizTypeRequest& request, const CreateBizTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBizTypeOutcomeCallable createBizTypeCallable(const Model::CreateBizTypeRequest& request) const;
			CreateCdiBagOutcome createCdiBag(const Model::CreateCdiBagRequest &request)const;
			void createCdiBagAsync(const Model::CreateCdiBagRequest& request, const CreateCdiBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdiBagOutcomeCallable createCdiBagCallable(const Model::CreateCdiBagRequest& request) const;
			CreateCdiBaseBagOutcome createCdiBaseBag(const Model::CreateCdiBaseBagRequest &request)const;
			void createCdiBaseBagAsync(const Model::CreateCdiBaseBagRequest& request, const CreateCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdiBaseBagOutcomeCallable createCdiBaseBagCallable(const Model::CreateCdiBaseBagRequest& request) const;
			CreateImageLibOutcome createImageLib(const Model::CreateImageLibRequest &request)const;
			void createImageLibAsync(const Model::CreateImageLibRequest& request, const CreateImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageLibOutcomeCallable createImageLibCallable(const Model::CreateImageLibRequest& request) const;
			CreateKeywordOutcome createKeyword(const Model::CreateKeywordRequest &request)const;
			void createKeywordAsync(const Model::CreateKeywordRequest& request, const CreateKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeywordOutcomeCallable createKeywordCallable(const Model::CreateKeywordRequest& request) const;
			CreateKeywordLibOutcome createKeywordLib(const Model::CreateKeywordLibRequest &request)const;
			void createKeywordLibAsync(const Model::CreateKeywordLibRequest& request, const CreateKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeywordLibOutcomeCallable createKeywordLibCallable(const Model::CreateKeywordLibRequest& request) const;
			CreateWebSiteInstanceOutcome createWebSiteInstance(const Model::CreateWebSiteInstanceRequest &request)const;
			void createWebSiteInstanceAsync(const Model::CreateWebSiteInstanceRequest& request, const CreateWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebSiteInstanceOutcomeCallable createWebSiteInstanceCallable(const Model::CreateWebSiteInstanceRequest& request) const;
			CreateWebsiteIndexPageBaselineOutcome createWebsiteIndexPageBaseline(const Model::CreateWebsiteIndexPageBaselineRequest &request)const;
			void createWebsiteIndexPageBaselineAsync(const Model::CreateWebsiteIndexPageBaselineRequest& request, const CreateWebsiteIndexPageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebsiteIndexPageBaselineOutcomeCallable createWebsiteIndexPageBaselineCallable(const Model::CreateWebsiteIndexPageBaselineRequest& request) const;
			DeleteBizTypeOutcome deleteBizType(const Model::DeleteBizTypeRequest &request)const;
			void deleteBizTypeAsync(const Model::DeleteBizTypeRequest& request, const DeleteBizTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBizTypeOutcomeCallable deleteBizTypeCallable(const Model::DeleteBizTypeRequest& request) const;
			DeleteCustomOcrTemplateOutcome deleteCustomOcrTemplate(const Model::DeleteCustomOcrTemplateRequest &request)const;
			void deleteCustomOcrTemplateAsync(const Model::DeleteCustomOcrTemplateRequest& request, const DeleteCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomOcrTemplateOutcomeCallable deleteCustomOcrTemplateCallable(const Model::DeleteCustomOcrTemplateRequest& request) const;
			DeleteFacesOutcome deleteFaces(const Model::DeleteFacesRequest &request)const;
			void deleteFacesAsync(const Model::DeleteFacesRequest& request, const DeleteFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFacesOutcomeCallable deleteFacesCallable(const Model::DeleteFacesRequest& request) const;
			DeleteGroupsOutcome deleteGroups(const Model::DeleteGroupsRequest &request)const;
			void deleteGroupsAsync(const Model::DeleteGroupsRequest& request, const DeleteGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupsOutcomeCallable deleteGroupsCallable(const Model::DeleteGroupsRequest& request) const;
			DeleteImageFromLibOutcome deleteImageFromLib(const Model::DeleteImageFromLibRequest &request)const;
			void deleteImageFromLibAsync(const Model::DeleteImageFromLibRequest& request, const DeleteImageFromLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageFromLibOutcomeCallable deleteImageFromLibCallable(const Model::DeleteImageFromLibRequest& request) const;
			DeleteImageLibOutcome deleteImageLib(const Model::DeleteImageLibRequest &request)const;
			void deleteImageLibAsync(const Model::DeleteImageLibRequest& request, const DeleteImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageLibOutcomeCallable deleteImageLibCallable(const Model::DeleteImageLibRequest& request) const;
			DeleteKeywordOutcome deleteKeyword(const Model::DeleteKeywordRequest &request)const;
			void deleteKeywordAsync(const Model::DeleteKeywordRequest& request, const DeleteKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeywordOutcomeCallable deleteKeywordCallable(const Model::DeleteKeywordRequest& request) const;
			DeleteKeywordLibOutcome deleteKeywordLib(const Model::DeleteKeywordLibRequest &request)const;
			void deleteKeywordLibAsync(const Model::DeleteKeywordLibRequest& request, const DeleteKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeywordLibOutcomeCallable deleteKeywordLibCallable(const Model::DeleteKeywordLibRequest& request) const;
			DeleteNotificationContactsOutcome deleteNotificationContacts(const Model::DeleteNotificationContactsRequest &request)const;
			void deleteNotificationContactsAsync(const Model::DeleteNotificationContactsRequest& request, const DeleteNotificationContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNotificationContactsOutcomeCallable deleteNotificationContactsCallable(const Model::DeleteNotificationContactsRequest& request) const;
			DeletePersonOutcome deletePerson(const Model::DeletePersonRequest &request)const;
			void deletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePersonOutcomeCallable deletePersonCallable(const Model::DeletePersonRequest& request) const;
			DeleteSimilarityImageOutcome deleteSimilarityImage(const Model::DeleteSimilarityImageRequest &request)const;
			void deleteSimilarityImageAsync(const Model::DeleteSimilarityImageRequest& request, const DeleteSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSimilarityImageOutcomeCallable deleteSimilarityImageCallable(const Model::DeleteSimilarityImageRequest& request) const;
			DeleteSimilarityLibraryOutcome deleteSimilarityLibrary(const Model::DeleteSimilarityLibraryRequest &request)const;
			void deleteSimilarityLibraryAsync(const Model::DeleteSimilarityLibraryRequest& request, const DeleteSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSimilarityLibraryOutcomeCallable deleteSimilarityLibraryCallable(const Model::DeleteSimilarityLibraryRequest& request) const;
			DeleteVideoDnaOutcome deleteVideoDna(const Model::DeleteVideoDnaRequest &request)const;
			void deleteVideoDnaAsync(const Model::DeleteVideoDnaRequest& request, const DeleteVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoDnaOutcomeCallable deleteVideoDnaCallable(const Model::DeleteVideoDnaRequest& request) const;
			DeleteVideoDnaGroupOutcome deleteVideoDnaGroup(const Model::DeleteVideoDnaGroupRequest &request)const;
			void deleteVideoDnaGroupAsync(const Model::DeleteVideoDnaGroupRequest& request, const DeleteVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoDnaGroupOutcomeCallable deleteVideoDnaGroupCallable(const Model::DeleteVideoDnaGroupRequest& request) const;
			DescribeAppInfoOutcome describeAppInfo(const Model::DescribeAppInfoRequest &request)const;
			void describeAppInfoAsync(const Model::DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppInfoOutcomeCallable describeAppInfoCallable(const Model::DescribeAppInfoRequest& request) const;
			DescribeAuditCallbackOutcome describeAuditCallback(const Model::DescribeAuditCallbackRequest &request)const;
			void describeAuditCallbackAsync(const Model::DescribeAuditCallbackRequest& request, const DescribeAuditCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditCallbackOutcomeCallable describeAuditCallbackCallable(const Model::DescribeAuditCallbackRequest& request) const;
			DescribeAuditCallbackListOutcome describeAuditCallbackList(const Model::DescribeAuditCallbackListRequest &request)const;
			void describeAuditCallbackListAsync(const Model::DescribeAuditCallbackListRequest& request, const DescribeAuditCallbackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditCallbackListOutcomeCallable describeAuditCallbackListCallable(const Model::DescribeAuditCallbackListRequest& request) const;
			DescribeAuditContentOutcome describeAuditContent(const Model::DescribeAuditContentRequest &request)const;
			void describeAuditContentAsync(const Model::DescribeAuditContentRequest& request, const DescribeAuditContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditContentOutcomeCallable describeAuditContentCallable(const Model::DescribeAuditContentRequest& request) const;
			DescribeAuditContentItemOutcome describeAuditContentItem(const Model::DescribeAuditContentItemRequest &request)const;
			void describeAuditContentItemAsync(const Model::DescribeAuditContentItemRequest& request, const DescribeAuditContentItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditContentItemOutcomeCallable describeAuditContentItemCallable(const Model::DescribeAuditContentItemRequest& request) const;
			DescribeAuditRangeOutcome describeAuditRange(const Model::DescribeAuditRangeRequest &request)const;
			void describeAuditRangeAsync(const Model::DescribeAuditRangeRequest& request, const DescribeAuditRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditRangeOutcomeCallable describeAuditRangeCallable(const Model::DescribeAuditRangeRequest& request) const;
			DescribeAuditSettingOutcome describeAuditSetting(const Model::DescribeAuditSettingRequest &request)const;
			void describeAuditSettingAsync(const Model::DescribeAuditSettingRequest& request, const DescribeAuditSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditSettingOutcomeCallable describeAuditSettingCallable(const Model::DescribeAuditSettingRequest& request) const;
			DescribeBizTypeImageLibOutcome describeBizTypeImageLib(const Model::DescribeBizTypeImageLibRequest &request)const;
			void describeBizTypeImageLibAsync(const Model::DescribeBizTypeImageLibRequest& request, const DescribeBizTypeImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizTypeImageLibOutcomeCallable describeBizTypeImageLibCallable(const Model::DescribeBizTypeImageLibRequest& request) const;
			DescribeBizTypeSettingOutcome describeBizTypeSetting(const Model::DescribeBizTypeSettingRequest &request)const;
			void describeBizTypeSettingAsync(const Model::DescribeBizTypeSettingRequest& request, const DescribeBizTypeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizTypeSettingOutcomeCallable describeBizTypeSettingCallable(const Model::DescribeBizTypeSettingRequest& request) const;
			DescribeBizTypeTextLibOutcome describeBizTypeTextLib(const Model::DescribeBizTypeTextLibRequest &request)const;
			void describeBizTypeTextLibAsync(const Model::DescribeBizTypeTextLibRequest& request, const DescribeBizTypeTextLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizTypeTextLibOutcomeCallable describeBizTypeTextLibCallable(const Model::DescribeBizTypeTextLibRequest& request) const;
			DescribeBizTypesOutcome describeBizTypes(const Model::DescribeBizTypesRequest &request)const;
			void describeBizTypesAsync(const Model::DescribeBizTypesRequest& request, const DescribeBizTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizTypesOutcomeCallable describeBizTypesCallable(const Model::DescribeBizTypesRequest& request) const;
			DescribeCloudMonitorServicesOutcome describeCloudMonitorServices(const Model::DescribeCloudMonitorServicesRequest &request)const;
			void describeCloudMonitorServicesAsync(const Model::DescribeCloudMonitorServicesRequest& request, const DescribeCloudMonitorServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudMonitorServicesOutcomeCallable describeCloudMonitorServicesCallable(const Model::DescribeCloudMonitorServicesRequest& request) const;
			DescribeCustomOcrTemplateOutcome describeCustomOcrTemplate(const Model::DescribeCustomOcrTemplateRequest &request)const;
			void describeCustomOcrTemplateAsync(const Model::DescribeCustomOcrTemplateRequest& request, const DescribeCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomOcrTemplateOutcomeCallable describeCustomOcrTemplateCallable(const Model::DescribeCustomOcrTemplateRequest& request) const;
			DescribeImageFromLibOutcome describeImageFromLib(const Model::DescribeImageFromLibRequest &request)const;
			void describeImageFromLibAsync(const Model::DescribeImageFromLibRequest& request, const DescribeImageFromLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageFromLibOutcomeCallable describeImageFromLibCallable(const Model::DescribeImageFromLibRequest& request) const;
			DescribeImageLibOutcome describeImageLib(const Model::DescribeImageLibRequest &request)const;
			void describeImageLibAsync(const Model::DescribeImageLibRequest& request, const DescribeImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageLibOutcomeCallable describeImageLibCallable(const Model::DescribeImageLibRequest& request) const;
			DescribeImageUploadInfoOutcome describeImageUploadInfo(const Model::DescribeImageUploadInfoRequest &request)const;
			void describeImageUploadInfoAsync(const Model::DescribeImageUploadInfoRequest& request, const DescribeImageUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageUploadInfoOutcomeCallable describeImageUploadInfoCallable(const Model::DescribeImageUploadInfoRequest& request) const;
			DescribeKeywordOutcome describeKeyword(const Model::DescribeKeywordRequest &request)const;
			void describeKeywordAsync(const Model::DescribeKeywordRequest& request, const DescribeKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeywordOutcomeCallable describeKeywordCallable(const Model::DescribeKeywordRequest& request) const;
			DescribeKeywordLibOutcome describeKeywordLib(const Model::DescribeKeywordLibRequest &request)const;
			void describeKeywordLibAsync(const Model::DescribeKeywordLibRequest& request, const DescribeKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeywordLibOutcomeCallable describeKeywordLibCallable(const Model::DescribeKeywordLibRequest& request) const;
			DescribeNotificationSettingOutcome describeNotificationSetting(const Model::DescribeNotificationSettingRequest &request)const;
			void describeNotificationSettingAsync(const Model::DescribeNotificationSettingRequest& request, const DescribeNotificationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNotificationSettingOutcomeCallable describeNotificationSettingCallable(const Model::DescribeNotificationSettingRequest& request) const;
			DescribeOpenApiRcpStatsOutcome describeOpenApiRcpStats(const Model::DescribeOpenApiRcpStatsRequest &request)const;
			void describeOpenApiRcpStatsAsync(const Model::DescribeOpenApiRcpStatsRequest& request, const DescribeOpenApiRcpStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOpenApiRcpStatsOutcomeCallable describeOpenApiRcpStatsCallable(const Model::DescribeOpenApiRcpStatsRequest& request) const;
			DescribeOpenApiUsageOutcome describeOpenApiUsage(const Model::DescribeOpenApiUsageRequest &request)const;
			void describeOpenApiUsageAsync(const Model::DescribeOpenApiUsageRequest& request, const DescribeOpenApiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOpenApiUsageOutcomeCallable describeOpenApiUsageCallable(const Model::DescribeOpenApiUsageRequest& request) const;
			DescribeOssCallbackSettingOutcome describeOssCallbackSetting(const Model::DescribeOssCallbackSettingRequest &request)const;
			void describeOssCallbackSettingAsync(const Model::DescribeOssCallbackSettingRequest& request, const DescribeOssCallbackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssCallbackSettingOutcomeCallable describeOssCallbackSettingCallable(const Model::DescribeOssCallbackSettingRequest& request) const;
			DescribeOssIncrementCheckSettingOutcome describeOssIncrementCheckSetting(const Model::DescribeOssIncrementCheckSettingRequest &request)const;
			void describeOssIncrementCheckSettingAsync(const Model::DescribeOssIncrementCheckSettingRequest& request, const DescribeOssIncrementCheckSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssIncrementCheckSettingOutcomeCallable describeOssIncrementCheckSettingCallable(const Model::DescribeOssIncrementCheckSettingRequest& request) const;
			DescribeOssIncrementOverviewOutcome describeOssIncrementOverview(const Model::DescribeOssIncrementOverviewRequest &request)const;
			void describeOssIncrementOverviewAsync(const Model::DescribeOssIncrementOverviewRequest& request, const DescribeOssIncrementOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssIncrementOverviewOutcomeCallable describeOssIncrementOverviewCallable(const Model::DescribeOssIncrementOverviewRequest& request) const;
			DescribeOssIncrementStatsOutcome describeOssIncrementStats(const Model::DescribeOssIncrementStatsRequest &request)const;
			void describeOssIncrementStatsAsync(const Model::DescribeOssIncrementStatsRequest& request, const DescribeOssIncrementStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssIncrementStatsOutcomeCallable describeOssIncrementStatsCallable(const Model::DescribeOssIncrementStatsRequest& request) const;
			DescribeOssResultItemsOutcome describeOssResultItems(const Model::DescribeOssResultItemsRequest &request)const;
			void describeOssResultItemsAsync(const Model::DescribeOssResultItemsRequest& request, const DescribeOssResultItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssResultItemsOutcomeCallable describeOssResultItemsCallable(const Model::DescribeOssResultItemsRequest& request) const;
			DescribeOssStockStatusOutcome describeOssStockStatus(const Model::DescribeOssStockStatusRequest &request)const;
			void describeOssStockStatusAsync(const Model::DescribeOssStockStatusRequest& request, const DescribeOssStockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssStockStatusOutcomeCallable describeOssStockStatusCallable(const Model::DescribeOssStockStatusRequest& request) const;
			DescribeSdkUrlOutcome describeSdkUrl(const Model::DescribeSdkUrlRequest &request)const;
			void describeSdkUrlAsync(const Model::DescribeSdkUrlRequest& request, const DescribeSdkUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSdkUrlOutcomeCallable describeSdkUrlCallable(const Model::DescribeSdkUrlRequest& request) const;
			DescribeUpdatePackageResultOutcome describeUpdatePackageResult(const Model::DescribeUpdatePackageResultRequest &request)const;
			void describeUpdatePackageResultAsync(const Model::DescribeUpdatePackageResultRequest& request, const DescribeUpdatePackageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpdatePackageResultOutcomeCallable describeUpdatePackageResultCallable(const Model::DescribeUpdatePackageResultRequest& request) const;
			DescribeUploadInfoOutcome describeUploadInfo(const Model::DescribeUploadInfoRequest &request)const;
			void describeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUploadInfoOutcomeCallable describeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request) const;
			DescribeUsageBillOutcome describeUsageBill(const Model::DescribeUsageBillRequest &request)const;
			void describeUsageBillAsync(const Model::DescribeUsageBillRequest& request, const DescribeUsageBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsageBillOutcomeCallable describeUsageBillCallable(const Model::DescribeUsageBillRequest& request) const;
			DescribeUserBizTypesOutcome describeUserBizTypes(const Model::DescribeUserBizTypesRequest &request)const;
			void describeUserBizTypesAsync(const Model::DescribeUserBizTypesRequest& request, const DescribeUserBizTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBizTypesOutcomeCallable describeUserBizTypesCallable(const Model::DescribeUserBizTypesRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
			DescribeViewContentOutcome describeViewContent(const Model::DescribeViewContentRequest &request)const;
			void describeViewContentAsync(const Model::DescribeViewContentRequest& request, const DescribeViewContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeViewContentOutcomeCallable describeViewContentCallable(const Model::DescribeViewContentRequest& request) const;
			DescribeWebsiteIndexPageBaselineOutcome describeWebsiteIndexPageBaseline(const Model::DescribeWebsiteIndexPageBaselineRequest &request)const;
			void describeWebsiteIndexPageBaselineAsync(const Model::DescribeWebsiteIndexPageBaselineRequest& request, const DescribeWebsiteIndexPageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteIndexPageBaselineOutcomeCallable describeWebsiteIndexPageBaselineCallable(const Model::DescribeWebsiteIndexPageBaselineRequest& request) const;
			DescribeWebsiteInstanceOutcome describeWebsiteInstance(const Model::DescribeWebsiteInstanceRequest &request)const;
			void describeWebsiteInstanceAsync(const Model::DescribeWebsiteInstanceRequest& request, const DescribeWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteInstanceOutcomeCallable describeWebsiteInstanceCallable(const Model::DescribeWebsiteInstanceRequest& request) const;
			DescribeWebsiteInstanceIdOutcome describeWebsiteInstanceId(const Model::DescribeWebsiteInstanceIdRequest &request)const;
			void describeWebsiteInstanceIdAsync(const Model::DescribeWebsiteInstanceIdRequest& request, const DescribeWebsiteInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteInstanceIdOutcomeCallable describeWebsiteInstanceIdCallable(const Model::DescribeWebsiteInstanceIdRequest& request) const;
			DescribeWebsiteInstanceKeyUrlOutcome describeWebsiteInstanceKeyUrl(const Model::DescribeWebsiteInstanceKeyUrlRequest &request)const;
			void describeWebsiteInstanceKeyUrlAsync(const Model::DescribeWebsiteInstanceKeyUrlRequest& request, const DescribeWebsiteInstanceKeyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteInstanceKeyUrlOutcomeCallable describeWebsiteInstanceKeyUrlCallable(const Model::DescribeWebsiteInstanceKeyUrlRequest& request) const;
			DescribeWebsiteScanResultOutcome describeWebsiteScanResult(const Model::DescribeWebsiteScanResultRequest &request)const;
			void describeWebsiteScanResultAsync(const Model::DescribeWebsiteScanResultRequest& request, const DescribeWebsiteScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteScanResultOutcomeCallable describeWebsiteScanResultCallable(const Model::DescribeWebsiteScanResultRequest& request) const;
			DescribeWebsiteScanResultDetailOutcome describeWebsiteScanResultDetail(const Model::DescribeWebsiteScanResultDetailRequest &request)const;
			void describeWebsiteScanResultDetailAsync(const Model::DescribeWebsiteScanResultDetailRequest& request, const DescribeWebsiteScanResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteScanResultDetailOutcomeCallable describeWebsiteScanResultDetailCallable(const Model::DescribeWebsiteScanResultDetailRequest& request) const;
			DescribeWebsiteStatOutcome describeWebsiteStat(const Model::DescribeWebsiteStatRequest &request)const;
			void describeWebsiteStatAsync(const Model::DescribeWebsiteStatRequest& request, const DescribeWebsiteStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteStatOutcomeCallable describeWebsiteStatCallable(const Model::DescribeWebsiteStatRequest& request) const;
			DescribeWebsiteVerifyInfoOutcome describeWebsiteVerifyInfo(const Model::DescribeWebsiteVerifyInfoRequest &request)const;
			void describeWebsiteVerifyInfoAsync(const Model::DescribeWebsiteVerifyInfoRequest& request, const DescribeWebsiteVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebsiteVerifyInfoOutcomeCallable describeWebsiteVerifyInfoCallable(const Model::DescribeWebsiteVerifyInfoRequest& request) const;
			DetectFaceOutcome detectFace(const Model::DetectFaceRequest &request)const;
			void detectFaceAsync(const Model::DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceOutcomeCallable detectFaceCallable(const Model::DetectFaceRequest& request) const;
			ExportKeywordsOutcome exportKeywords(const Model::ExportKeywordsRequest &request)const;
			void exportKeywordsAsync(const Model::ExportKeywordsRequest& request, const ExportKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportKeywordsOutcomeCallable exportKeywordsCallable(const Model::ExportKeywordsRequest& request) const;
			ExportOpenApiRcpStatsOutcome exportOpenApiRcpStats(const Model::ExportOpenApiRcpStatsRequest &request)const;
			void exportOpenApiRcpStatsAsync(const Model::ExportOpenApiRcpStatsRequest& request, const ExportOpenApiRcpStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportOpenApiRcpStatsOutcomeCallable exportOpenApiRcpStatsCallable(const Model::ExportOpenApiRcpStatsRequest& request) const;
			ExportOssResultOutcome exportOssResult(const Model::ExportOssResultRequest &request)const;
			void exportOssResultAsync(const Model::ExportOssResultRequest& request, const ExportOssResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportOssResultOutcomeCallable exportOssResultCallable(const Model::ExportOssResultRequest& request) const;
			FileAsyncScanOutcome fileAsyncScan(const Model::FileAsyncScanRequest &request)const;
			void fileAsyncScanAsync(const Model::FileAsyncScanRequest& request, const FileAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanOutcomeCallable fileAsyncScanCallable(const Model::FileAsyncScanRequest& request) const;
			FileAsyncScanResultsOutcome fileAsyncScanResults(const Model::FileAsyncScanResultsRequest &request)const;
			void fileAsyncScanResultsAsync(const Model::FileAsyncScanResultsRequest& request, const FileAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanResultsOutcomeCallable fileAsyncScanResultsCallable(const Model::FileAsyncScanResultsRequest& request) const;
			GetAddVideoDnaResultsOutcome getAddVideoDnaResults(const Model::GetAddVideoDnaResultsRequest &request)const;
			void getAddVideoDnaResultsAsync(const Model::GetAddVideoDnaResultsRequest& request, const GetAddVideoDnaResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddVideoDnaResultsOutcomeCallable getAddVideoDnaResultsCallable(const Model::GetAddVideoDnaResultsRequest& request) const;
			GetFacesOutcome getFaces(const Model::GetFacesRequest &request)const;
			void getFacesAsync(const Model::GetFacesRequest& request, const GetFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFacesOutcomeCallable getFacesCallable(const Model::GetFacesRequest& request) const;
			GetGroupsOutcome getGroups(const Model::GetGroupsRequest &request)const;
			void getGroupsAsync(const Model::GetGroupsRequest& request, const GetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupsOutcomeCallable getGroupsCallable(const Model::GetGroupsRequest& request) const;
			GetPersonOutcome getPerson(const Model::GetPersonRequest &request)const;
			void getPersonAsync(const Model::GetPersonRequest& request, const GetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonOutcomeCallable getPersonCallable(const Model::GetPersonRequest& request) const;
			GetPersonsOutcome getPersons(const Model::GetPersonsRequest &request)const;
			void getPersonsAsync(const Model::GetPersonsRequest& request, const GetPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonsOutcomeCallable getPersonsCallable(const Model::GetPersonsRequest& request) const;
			GetSimilarityImageOutcome getSimilarityImage(const Model::GetSimilarityImageRequest &request)const;
			void getSimilarityImageAsync(const Model::GetSimilarityImageRequest& request, const GetSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSimilarityImageOutcomeCallable getSimilarityImageCallable(const Model::GetSimilarityImageRequest& request) const;
			GetSimilarityLibraryOutcome getSimilarityLibrary(const Model::GetSimilarityLibraryRequest &request)const;
			void getSimilarityLibraryAsync(const Model::GetSimilarityLibraryRequest& request, const GetSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSimilarityLibraryOutcomeCallable getSimilarityLibraryCallable(const Model::GetSimilarityLibraryRequest& request) const;
			ImageAsyncManualScanOutcome imageAsyncManualScan(const Model::ImageAsyncManualScanRequest &request)const;
			void imageAsyncManualScanAsync(const Model::ImageAsyncManualScanRequest& request, const ImageAsyncManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncManualScanOutcomeCallable imageAsyncManualScanCallable(const Model::ImageAsyncManualScanRequest& request) const;
			ImageAsyncManualScanResultsOutcome imageAsyncManualScanResults(const Model::ImageAsyncManualScanResultsRequest &request)const;
			void imageAsyncManualScanResultsAsync(const Model::ImageAsyncManualScanResultsRequest& request, const ImageAsyncManualScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncManualScanResultsOutcomeCallable imageAsyncManualScanResultsCallable(const Model::ImageAsyncManualScanResultsRequest& request) const;
			ImageAsyncScanOutcome imageAsyncScan(const Model::ImageAsyncScanRequest &request)const;
			void imageAsyncScanAsync(const Model::ImageAsyncScanRequest& request, const ImageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanOutcomeCallable imageAsyncScanCallable(const Model::ImageAsyncScanRequest& request) const;
			ImageAsyncScanResultsOutcome imageAsyncScanResults(const Model::ImageAsyncScanResultsRequest &request)const;
			void imageAsyncScanResultsAsync(const Model::ImageAsyncScanResultsRequest& request, const ImageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanResultsOutcomeCallable imageAsyncScanResultsCallable(const Model::ImageAsyncScanResultsRequest& request) const;
			ImageDetectionOutcome imageDetection(const Model::ImageDetectionRequest &request)const;
			void imageDetectionAsync(const Model::ImageDetectionRequest& request, const ImageDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageDetectionOutcomeCallable imageDetectionCallable(const Model::ImageDetectionRequest& request) const;
			ImageResultOutcome imageResult(const Model::ImageResultRequest &request)const;
			void imageResultAsync(const Model::ImageResultRequest& request, const ImageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageResultOutcomeCallable imageResultCallable(const Model::ImageResultRequest& request) const;
			ImageResultsOutcome imageResults(const Model::ImageResultsRequest &request)const;
			void imageResultsAsync(const Model::ImageResultsRequest& request, const ImageResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageResultsOutcomeCallable imageResultsCallable(const Model::ImageResultsRequest& request) const;
			ImageScanFeedbackOutcome imageScanFeedback(const Model::ImageScanFeedbackRequest &request)const;
			void imageScanFeedbackAsync(const Model::ImageScanFeedbackRequest& request, const ImageScanFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageScanFeedbackOutcomeCallable imageScanFeedbackCallable(const Model::ImageScanFeedbackRequest& request) const;
			ImageSyncScanOutcome imageSyncScan(const Model::ImageSyncScanRequest &request)const;
			void imageSyncScanAsync(const Model::ImageSyncScanRequest& request, const ImageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageSyncScanOutcomeCallable imageSyncScanCallable(const Model::ImageSyncScanRequest& request) const;
			ImportKeywordsOutcome importKeywords(const Model::ImportKeywordsRequest &request)const;
			void importKeywordsAsync(const Model::ImportKeywordsRequest& request, const ImportKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeywordsOutcomeCallable importKeywordsCallable(const Model::ImportKeywordsRequest& request) const;
			ListSimilarityImagesOutcome listSimilarityImages(const Model::ListSimilarityImagesRequest &request)const;
			void listSimilarityImagesAsync(const Model::ListSimilarityImagesRequest& request, const ListSimilarityImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSimilarityImagesOutcomeCallable listSimilarityImagesCallable(const Model::ListSimilarityImagesRequest& request) const;
			ListSimilarityLibrariesOutcome listSimilarityLibraries(const Model::ListSimilarityLibrariesRequest &request)const;
			void listSimilarityLibrariesAsync(const Model::ListSimilarityLibrariesRequest& request, const ListSimilarityLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSimilarityLibrariesOutcomeCallable listSimilarityLibrariesCallable(const Model::ListSimilarityLibrariesRequest& request) const;
			LiveStreamAsyncScanOutcome liveStreamAsyncScan(const Model::LiveStreamAsyncScanRequest &request)const;
			void liveStreamAsyncScanAsync(const Model::LiveStreamAsyncScanRequest& request, const LiveStreamAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LiveStreamAsyncScanOutcomeCallable liveStreamAsyncScanCallable(const Model::LiveStreamAsyncScanRequest& request) const;
			LiveStreamAsyncScanResultsOutcome liveStreamAsyncScanResults(const Model::LiveStreamAsyncScanResultsRequest &request)const;
			void liveStreamAsyncScanResultsAsync(const Model::LiveStreamAsyncScanResultsRequest& request, const LiveStreamAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LiveStreamAsyncScanResultsOutcomeCallable liveStreamAsyncScanResultsCallable(const Model::LiveStreamAsyncScanResultsRequest& request) const;
			LiveStreamCancelScanOutcome liveStreamCancelScan(const Model::LiveStreamCancelScanRequest &request)const;
			void liveStreamCancelScanAsync(const Model::LiveStreamCancelScanRequest& request, const LiveStreamCancelScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LiveStreamCancelScanOutcomeCallable liveStreamCancelScanCallable(const Model::LiveStreamCancelScanRequest& request) const;
			MarkAuditContentOutcome markAuditContent(const Model::MarkAuditContentRequest &request)const;
			void markAuditContentAsync(const Model::MarkAuditContentRequest& request, const MarkAuditContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MarkAuditContentOutcomeCallable markAuditContentCallable(const Model::MarkAuditContentRequest& request) const;
			MarkAuditContentItemOutcome markAuditContentItem(const Model::MarkAuditContentItemRequest &request)const;
			void markAuditContentItemAsync(const Model::MarkAuditContentItemRequest& request, const MarkAuditContentItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MarkAuditContentItemOutcomeCallable markAuditContentItemCallable(const Model::MarkAuditContentItemRequest& request) const;
			MarkOssResultOutcome markOssResult(const Model::MarkOssResultRequest &request)const;
			void markOssResultAsync(const Model::MarkOssResultRequest& request, const MarkOssResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MarkOssResultOutcomeCallable markOssResultCallable(const Model::MarkOssResultRequest& request) const;
			MarkWebsiteScanResultOutcome markWebsiteScanResult(const Model::MarkWebsiteScanResultRequest &request)const;
			void markWebsiteScanResultAsync(const Model::MarkWebsiteScanResultRequest& request, const MarkWebsiteScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MarkWebsiteScanResultOutcomeCallable markWebsiteScanResultCallable(const Model::MarkWebsiteScanResultRequest& request) const;
			RefundCdiBagOutcome refundCdiBag(const Model::RefundCdiBagRequest &request)const;
			void refundCdiBagAsync(const Model::RefundCdiBagRequest& request, const RefundCdiBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundCdiBagOutcomeCallable refundCdiBagCallable(const Model::RefundCdiBagRequest& request) const;
			RefundCdiBaseBagOutcome refundCdiBaseBag(const Model::RefundCdiBaseBagRequest &request)const;
			void refundCdiBaseBagAsync(const Model::RefundCdiBaseBagRequest& request, const RefundCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundCdiBaseBagOutcomeCallable refundCdiBaseBagCallable(const Model::RefundCdiBaseBagRequest& request) const;
			RefundWebSiteInstanceOutcome refundWebSiteInstance(const Model::RefundWebSiteInstanceRequest &request)const;
			void refundWebSiteInstanceAsync(const Model::RefundWebSiteInstanceRequest& request, const RefundWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundWebSiteInstanceOutcomeCallable refundWebSiteInstanceCallable(const Model::RefundWebSiteInstanceRequest& request) const;
			RenewWebSiteInstanceOutcome renewWebSiteInstance(const Model::RenewWebSiteInstanceRequest &request)const;
			void renewWebSiteInstanceAsync(const Model::RenewWebSiteInstanceRequest& request, const RenewWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewWebSiteInstanceOutcomeCallable renewWebSiteInstanceCallable(const Model::RenewWebSiteInstanceRequest& request) const;
			SampleFeedbackOutcome sampleFeedback(const Model::SampleFeedbackRequest &request)const;
			void sampleFeedbackAsync(const Model::SampleFeedbackRequest& request, const SampleFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SampleFeedbackOutcomeCallable sampleFeedbackCallable(const Model::SampleFeedbackRequest& request) const;
			SearchPersonOutcome searchPerson(const Model::SearchPersonRequest &request)const;
			void searchPersonAsync(const Model::SearchPersonRequest& request, const SearchPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchPersonOutcomeCallable searchPersonCallable(const Model::SearchPersonRequest& request) const;
			SendVerifyCodeToEmailOutcome sendVerifyCodeToEmail(const Model::SendVerifyCodeToEmailRequest &request)const;
			void sendVerifyCodeToEmailAsync(const Model::SendVerifyCodeToEmailRequest& request, const SendVerifyCodeToEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerifyCodeToEmailOutcomeCallable sendVerifyCodeToEmailCallable(const Model::SendVerifyCodeToEmailRequest& request) const;
			SendVerifyCodeToPhoneOutcome sendVerifyCodeToPhone(const Model::SendVerifyCodeToPhoneRequest &request)const;
			void sendVerifyCodeToPhoneAsync(const Model::SendVerifyCodeToPhoneRequest& request, const SendVerifyCodeToPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerifyCodeToPhoneOutcomeCallable sendVerifyCodeToPhoneCallable(const Model::SendVerifyCodeToPhoneRequest& request) const;
			SendWebsiteFeedbackOutcome sendWebsiteFeedback(const Model::SendWebsiteFeedbackRequest &request)const;
			void sendWebsiteFeedbackAsync(const Model::SendWebsiteFeedbackRequest& request, const SendWebsiteFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendWebsiteFeedbackOutcomeCallable sendWebsiteFeedbackCallable(const Model::SendWebsiteFeedbackRequest& request) const;
			SetPersonOutcome setPerson(const Model::SetPersonRequest &request)const;
			void setPersonAsync(const Model::SetPersonRequest& request, const SetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPersonOutcomeCallable setPersonCallable(const Model::SetPersonRequest& request) const;
			TextAsyncManualScanOutcome textAsyncManualScan(const Model::TextAsyncManualScanRequest &request)const;
			void textAsyncManualScanAsync(const Model::TextAsyncManualScanRequest& request, const TextAsyncManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextAsyncManualScanOutcomeCallable textAsyncManualScanCallable(const Model::TextAsyncManualScanRequest& request) const;
			TextAsyncManualScanResultsOutcome textAsyncManualScanResults(const Model::TextAsyncManualScanResultsRequest &request)const;
			void textAsyncManualScanResultsAsync(const Model::TextAsyncManualScanResultsRequest& request, const TextAsyncManualScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextAsyncManualScanResultsOutcomeCallable textAsyncManualScanResultsCallable(const Model::TextAsyncManualScanResultsRequest& request) const;
			TextFeedbackOutcome textFeedback(const Model::TextFeedbackRequest &request)const;
			void textFeedbackAsync(const Model::TextFeedbackRequest& request, const TextFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextFeedbackOutcomeCallable textFeedbackCallable(const Model::TextFeedbackRequest& request) const;
			TextKeywordFilterOutcome textKeywordFilter(const Model::TextKeywordFilterRequest &request)const;
			void textKeywordFilterAsync(const Model::TextKeywordFilterRequest& request, const TextKeywordFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextKeywordFilterOutcomeCallable textKeywordFilterCallable(const Model::TextKeywordFilterRequest& request) const;
			TextScanOutcome textScan(const Model::TextScanRequest &request)const;
			void textScanAsync(const Model::TextScanRequest& request, const TextScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextScanOutcomeCallable textScanCallable(const Model::TextScanRequest& request) const;
			UpdateAppPackageOutcome updateAppPackage(const Model::UpdateAppPackageRequest &request)const;
			void updateAppPackageAsync(const Model::UpdateAppPackageRequest& request, const UpdateAppPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppPackageOutcomeCallable updateAppPackageCallable(const Model::UpdateAppPackageRequest& request) const;
			UpdateAuditCallbackOutcome updateAuditCallback(const Model::UpdateAuditCallbackRequest &request)const;
			void updateAuditCallbackAsync(const Model::UpdateAuditCallbackRequest& request, const UpdateAuditCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuditCallbackOutcomeCallable updateAuditCallbackCallable(const Model::UpdateAuditCallbackRequest& request) const;
			UpdateAuditRangeOutcome updateAuditRange(const Model::UpdateAuditRangeRequest &request)const;
			void updateAuditRangeAsync(const Model::UpdateAuditRangeRequest& request, const UpdateAuditRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuditRangeOutcomeCallable updateAuditRangeCallable(const Model::UpdateAuditRangeRequest& request) const;
			UpdateAuditSettingOutcome updateAuditSetting(const Model::UpdateAuditSettingRequest &request)const;
			void updateAuditSettingAsync(const Model::UpdateAuditSettingRequest& request, const UpdateAuditSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuditSettingOutcomeCallable updateAuditSettingCallable(const Model::UpdateAuditSettingRequest& request) const;
			UpdateBizTypeOutcome updateBizType(const Model::UpdateBizTypeRequest &request)const;
			void updateBizTypeAsync(const Model::UpdateBizTypeRequest& request, const UpdateBizTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBizTypeOutcomeCallable updateBizTypeCallable(const Model::UpdateBizTypeRequest& request) const;
			UpdateBizTypeImageLibOutcome updateBizTypeImageLib(const Model::UpdateBizTypeImageLibRequest &request)const;
			void updateBizTypeImageLibAsync(const Model::UpdateBizTypeImageLibRequest& request, const UpdateBizTypeImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBizTypeImageLibOutcomeCallable updateBizTypeImageLibCallable(const Model::UpdateBizTypeImageLibRequest& request) const;
			UpdateBizTypeSettingOutcome updateBizTypeSetting(const Model::UpdateBizTypeSettingRequest &request)const;
			void updateBizTypeSettingAsync(const Model::UpdateBizTypeSettingRequest& request, const UpdateBizTypeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBizTypeSettingOutcomeCallable updateBizTypeSettingCallable(const Model::UpdateBizTypeSettingRequest& request) const;
			UpdateBizTypeTextLibOutcome updateBizTypeTextLib(const Model::UpdateBizTypeTextLibRequest &request)const;
			void updateBizTypeTextLibAsync(const Model::UpdateBizTypeTextLibRequest& request, const UpdateBizTypeTextLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBizTypeTextLibOutcomeCallable updateBizTypeTextLibCallable(const Model::UpdateBizTypeTextLibRequest& request) const;
			UpdateCustomOcrTemplateOutcome updateCustomOcrTemplate(const Model::UpdateCustomOcrTemplateRequest &request)const;
			void updateCustomOcrTemplateAsync(const Model::UpdateCustomOcrTemplateRequest& request, const UpdateCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomOcrTemplateOutcomeCallable updateCustomOcrTemplateCallable(const Model::UpdateCustomOcrTemplateRequest& request) const;
			UpdateImageLibOutcome updateImageLib(const Model::UpdateImageLibRequest &request)const;
			void updateImageLibAsync(const Model::UpdateImageLibRequest& request, const UpdateImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageLibOutcomeCallable updateImageLibCallable(const Model::UpdateImageLibRequest& request) const;
			UpdateKeywordLibOutcome updateKeywordLib(const Model::UpdateKeywordLibRequest &request)const;
			void updateKeywordLibAsync(const Model::UpdateKeywordLibRequest& request, const UpdateKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKeywordLibOutcomeCallable updateKeywordLibCallable(const Model::UpdateKeywordLibRequest& request) const;
			UpdateNotificationSettingOutcome updateNotificationSetting(const Model::UpdateNotificationSettingRequest &request)const;
			void updateNotificationSettingAsync(const Model::UpdateNotificationSettingRequest& request, const UpdateNotificationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNotificationSettingOutcomeCallable updateNotificationSettingCallable(const Model::UpdateNotificationSettingRequest& request) const;
			UpdateOssCallbackSettingOutcome updateOssCallbackSetting(const Model::UpdateOssCallbackSettingRequest &request)const;
			void updateOssCallbackSettingAsync(const Model::UpdateOssCallbackSettingRequest& request, const UpdateOssCallbackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOssCallbackSettingOutcomeCallable updateOssCallbackSettingCallable(const Model::UpdateOssCallbackSettingRequest& request) const;
			UpdateOssIncrementCheckSettingOutcome updateOssIncrementCheckSetting(const Model::UpdateOssIncrementCheckSettingRequest &request)const;
			void updateOssIncrementCheckSettingAsync(const Model::UpdateOssIncrementCheckSettingRequest& request, const UpdateOssIncrementCheckSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOssIncrementCheckSettingOutcomeCallable updateOssIncrementCheckSettingCallable(const Model::UpdateOssIncrementCheckSettingRequest& request) const;
			UpdateOssStockStatusOutcome updateOssStockStatus(const Model::UpdateOssStockStatusRequest &request)const;
			void updateOssStockStatusAsync(const Model::UpdateOssStockStatusRequest& request, const UpdateOssStockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOssStockStatusOutcomeCallable updateOssStockStatusCallable(const Model::UpdateOssStockStatusRequest& request) const;
			UpdateWebsiteInstanceOutcome updateWebsiteInstance(const Model::UpdateWebsiteInstanceRequest &request)const;
			void updateWebsiteInstanceAsync(const Model::UpdateWebsiteInstanceRequest& request, const UpdateWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWebsiteInstanceOutcomeCallable updateWebsiteInstanceCallable(const Model::UpdateWebsiteInstanceRequest& request) const;
			UpdateWebsiteInstanceKeyUrlOutcome updateWebsiteInstanceKeyUrl(const Model::UpdateWebsiteInstanceKeyUrlRequest &request)const;
			void updateWebsiteInstanceKeyUrlAsync(const Model::UpdateWebsiteInstanceKeyUrlRequest& request, const UpdateWebsiteInstanceKeyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWebsiteInstanceKeyUrlOutcomeCallable updateWebsiteInstanceKeyUrlCallable(const Model::UpdateWebsiteInstanceKeyUrlRequest& request) const;
			UpdateWebsiteInstanceStatusOutcome updateWebsiteInstanceStatus(const Model::UpdateWebsiteInstanceStatusRequest &request)const;
			void updateWebsiteInstanceStatusAsync(const Model::UpdateWebsiteInstanceStatusRequest& request, const UpdateWebsiteInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWebsiteInstanceStatusOutcomeCallable updateWebsiteInstanceStatusCallable(const Model::UpdateWebsiteInstanceStatusRequest& request) const;
			UpgradeCdiBaseBagOutcome upgradeCdiBaseBag(const Model::UpgradeCdiBaseBagRequest &request)const;
			void upgradeCdiBaseBagAsync(const Model::UpgradeCdiBaseBagRequest& request, const UpgradeCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeCdiBaseBagOutcomeCallable upgradeCdiBaseBagCallable(const Model::UpgradeCdiBaseBagRequest& request) const;
			UploadCredentialsOutcome uploadCredentials(const Model::UploadCredentialsRequest &request)const;
			void uploadCredentialsAsync(const Model::UploadCredentialsRequest& request, const UploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCredentialsOutcomeCallable uploadCredentialsCallable(const Model::UploadCredentialsRequest& request) const;
			UploadImageToLibOutcome uploadImageToLib(const Model::UploadImageToLibRequest &request)const;
			void uploadImageToLibAsync(const Model::UploadImageToLibRequest& request, const UploadImageToLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadImageToLibOutcomeCallable uploadImageToLibCallable(const Model::UploadImageToLibRequest& request) const;
			VerifyCustomOcrTemplateOutcome verifyCustomOcrTemplate(const Model::VerifyCustomOcrTemplateRequest &request)const;
			void verifyCustomOcrTemplateAsync(const Model::VerifyCustomOcrTemplateRequest& request, const VerifyCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCustomOcrTemplateOutcomeCallable verifyCustomOcrTemplateCallable(const Model::VerifyCustomOcrTemplateRequest& request) const;
			VerifyEmailOutcome verifyEmail(const Model::VerifyEmailRequest &request)const;
			void verifyEmailAsync(const Model::VerifyEmailRequest& request, const VerifyEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyEmailOutcomeCallable verifyEmailCallable(const Model::VerifyEmailRequest& request) const;
			VerifyPhoneOutcome verifyPhone(const Model::VerifyPhoneRequest &request)const;
			void verifyPhoneAsync(const Model::VerifyPhoneRequest& request, const VerifyPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPhoneOutcomeCallable verifyPhoneCallable(const Model::VerifyPhoneRequest& request) const;
			VerifyWebsiteInstanceOutcome verifyWebsiteInstance(const Model::VerifyWebsiteInstanceRequest &request)const;
			void verifyWebsiteInstanceAsync(const Model::VerifyWebsiteInstanceRequest& request, const VerifyWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyWebsiteInstanceOutcomeCallable verifyWebsiteInstanceCallable(const Model::VerifyWebsiteInstanceRequest& request) const;
			VideoAsyncManualScanOutcome videoAsyncManualScan(const Model::VideoAsyncManualScanRequest &request)const;
			void videoAsyncManualScanAsync(const Model::VideoAsyncManualScanRequest& request, const VideoAsyncManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncManualScanOutcomeCallable videoAsyncManualScanCallable(const Model::VideoAsyncManualScanRequest& request) const;
			VideoAsyncManualScanResultsOutcome videoAsyncManualScanResults(const Model::VideoAsyncManualScanResultsRequest &request)const;
			void videoAsyncManualScanResultsAsync(const Model::VideoAsyncManualScanResultsRequest& request, const VideoAsyncManualScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncManualScanResultsOutcomeCallable videoAsyncManualScanResultsCallable(const Model::VideoAsyncManualScanResultsRequest& request) const;
			VideoAsyncScanOutcome videoAsyncScan(const Model::VideoAsyncScanRequest &request)const;
			void videoAsyncScanAsync(const Model::VideoAsyncScanRequest& request, const VideoAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanOutcomeCallable videoAsyncScanCallable(const Model::VideoAsyncScanRequest& request) const;
			VideoAsyncScanResultsOutcome videoAsyncScanResults(const Model::VideoAsyncScanResultsRequest &request)const;
			void videoAsyncScanResultsAsync(const Model::VideoAsyncScanResultsRequest& request, const VideoAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanResultsOutcomeCallable videoAsyncScanResultsCallable(const Model::VideoAsyncScanResultsRequest& request) const;
			VideoCancelScanOutcome videoCancelScan(const Model::VideoCancelScanRequest &request)const;
			void videoCancelScanAsync(const Model::VideoCancelScanRequest& request, const VideoCancelScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoCancelScanOutcomeCallable videoCancelScanCallable(const Model::VideoCancelScanRequest& request) const;
			VideoFeedbackOutcome videoFeedback(const Model::VideoFeedbackRequest &request)const;
			void videoFeedbackAsync(const Model::VideoFeedbackRequest& request, const VideoFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoFeedbackOutcomeCallable videoFeedbackCallable(const Model::VideoFeedbackRequest& request) const;
			VideoSyncScanOutcome videoSyncScan(const Model::VideoSyncScanRequest &request)const;
			void videoSyncScanAsync(const Model::VideoSyncScanRequest& request, const VideoSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoSyncScanOutcomeCallable videoSyncScanCallable(const Model::VideoSyncScanRequest& request) const;
			VodAsyncScanOutcome vodAsyncScan(const Model::VodAsyncScanRequest &request)const;
			void vodAsyncScanAsync(const Model::VodAsyncScanRequest& request, const VodAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VodAsyncScanOutcomeCallable vodAsyncScanCallable(const Model::VodAsyncScanRequest& request) const;
			VodAsyncScanResultsOutcome vodAsyncScanResults(const Model::VodAsyncScanResultsRequest &request)const;
			void vodAsyncScanResultsAsync(const Model::VodAsyncScanResultsRequest& request, const VodAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VodAsyncScanResultsOutcomeCallable vodAsyncScanResultsCallable(const Model::VodAsyncScanResultsRequest& request) const;
			VoiceAsyncManualScanOutcome voiceAsyncManualScan(const Model::VoiceAsyncManualScanRequest &request)const;
			void voiceAsyncManualScanAsync(const Model::VoiceAsyncManualScanRequest& request, const VoiceAsyncManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncManualScanOutcomeCallable voiceAsyncManualScanCallable(const Model::VoiceAsyncManualScanRequest& request) const;
			VoiceAsyncManualScanResultsOutcome voiceAsyncManualScanResults(const Model::VoiceAsyncManualScanResultsRequest &request)const;
			void voiceAsyncManualScanResultsAsync(const Model::VoiceAsyncManualScanResultsRequest& request, const VoiceAsyncManualScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncManualScanResultsOutcomeCallable voiceAsyncManualScanResultsCallable(const Model::VoiceAsyncManualScanResultsRequest& request) const;
			VoiceAsyncScanOutcome voiceAsyncScan(const Model::VoiceAsyncScanRequest &request)const;
			void voiceAsyncScanAsync(const Model::VoiceAsyncScanRequest& request, const VoiceAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanOutcomeCallable voiceAsyncScanCallable(const Model::VoiceAsyncScanRequest& request) const;
			VoiceAsyncScanResultsOutcome voiceAsyncScanResults(const Model::VoiceAsyncScanResultsRequest &request)const;
			void voiceAsyncScanResultsAsync(const Model::VoiceAsyncScanResultsRequest& request, const VoiceAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanResultsOutcomeCallable voiceAsyncScanResultsCallable(const Model::VoiceAsyncScanResultsRequest& request) const;
			VoiceCancelScanOutcome voiceCancelScan(const Model::VoiceCancelScanRequest &request)const;
			void voiceCancelScanAsync(const Model::VoiceCancelScanRequest& request, const VoiceCancelScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceCancelScanOutcomeCallable voiceCancelScanCallable(const Model::VoiceCancelScanRequest& request) const;
			VoiceIdentityCheckOutcome voiceIdentityCheck(const Model::VoiceIdentityCheckRequest &request)const;
			void voiceIdentityCheckAsync(const Model::VoiceIdentityCheckRequest& request, const VoiceIdentityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityCheckOutcomeCallable voiceIdentityCheckCallable(const Model::VoiceIdentityCheckRequest& request) const;
			VoiceIdentityRegisterOutcome voiceIdentityRegister(const Model::VoiceIdentityRegisterRequest &request)const;
			void voiceIdentityRegisterAsync(const Model::VoiceIdentityRegisterRequest& request, const VoiceIdentityRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityRegisterOutcomeCallable voiceIdentityRegisterCallable(const Model::VoiceIdentityRegisterRequest& request) const;
			VoiceIdentityStartCheckOutcome voiceIdentityStartCheck(const Model::VoiceIdentityStartCheckRequest &request)const;
			void voiceIdentityStartCheckAsync(const Model::VoiceIdentityStartCheckRequest& request, const VoiceIdentityStartCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityStartCheckOutcomeCallable voiceIdentityStartCheckCallable(const Model::VoiceIdentityStartCheckRequest& request) const;
			VoiceIdentityStartRegisterOutcome voiceIdentityStartRegister(const Model::VoiceIdentityStartRegisterRequest &request)const;
			void voiceIdentityStartRegisterAsync(const Model::VoiceIdentityStartRegisterRequest& request, const VoiceIdentityStartRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityStartRegisterOutcomeCallable voiceIdentityStartRegisterCallable(const Model::VoiceIdentityStartRegisterRequest& request) const;
			VoiceIdentityUnregisterOutcome voiceIdentityUnregister(const Model::VoiceIdentityUnregisterRequest &request)const;
			void voiceIdentityUnregisterAsync(const Model::VoiceIdentityUnregisterRequest& request, const VoiceIdentityUnregisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityUnregisterOutcomeCallable voiceIdentityUnregisterCallable(const Model::VoiceIdentityUnregisterRequest& request) const;
			VoiceSyncScanOutcome voiceSyncScan(const Model::VoiceSyncScanRequest &request)const;
			void voiceSyncScanAsync(const Model::VoiceSyncScanRequest& request, const VoiceSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceSyncScanOutcomeCallable voiceSyncScanCallable(const Model::VoiceSyncScanRequest& request) const;
			WebpageAsyncScanOutcome webpageAsyncScan(const Model::WebpageAsyncScanRequest &request)const;
			void webpageAsyncScanAsync(const Model::WebpageAsyncScanRequest& request, const WebpageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WebpageAsyncScanOutcomeCallable webpageAsyncScanCallable(const Model::WebpageAsyncScanRequest& request) const;
			WebpageAsyncScanResultsOutcome webpageAsyncScanResults(const Model::WebpageAsyncScanResultsRequest &request)const;
			void webpageAsyncScanResultsAsync(const Model::WebpageAsyncScanResultsRequest& request, const WebpageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WebpageAsyncScanResultsOutcomeCallable webpageAsyncScanResultsCallable(const Model::WebpageAsyncScanResultsRequest& request) const;
			WebpageSyncScanOutcome webpageSyncScan(const Model::WebpageSyncScanRequest &request)const;
			void webpageSyncScanAsync(const Model::WebpageSyncScanRequest& request, const WebpageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WebpageSyncScanOutcomeCallable webpageSyncScanCallable(const Model::WebpageSyncScanRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GREEN_GREENCLIENT_H_
