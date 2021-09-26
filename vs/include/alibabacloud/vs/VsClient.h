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

#ifndef ALIBABACLOUD_VS_VSCLIENT_H_
#define ALIBABACLOUD_VS_VSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VsExport.h"
#include "model/AddDeviceRequest.h"
#include "model/AddDeviceResult.h"
#include "model/AddRenderingDeviceInternetPortsRequest.h"
#include "model/AddRenderingDeviceInternetPortsResult.h"
#include "model/AddVsPullStreamInfoConfigRequest.h"
#include "model/AddVsPullStreamInfoConfigResult.h"
#include "model/BatchBindDirectoriesRequest.h"
#include "model/BatchBindDirectoriesResult.h"
#include "model/BatchBindParentPlatformDevicesRequest.h"
#include "model/BatchBindParentPlatformDevicesResult.h"
#include "model/BatchBindPurchasedDevicesRequest.h"
#include "model/BatchBindPurchasedDevicesResult.h"
#include "model/BatchBindTemplateRequest.h"
#include "model/BatchBindTemplateResult.h"
#include "model/BatchBindTemplatesRequest.h"
#include "model/BatchBindTemplatesResult.h"
#include "model/BatchDeleteDevicesRequest.h"
#include "model/BatchDeleteDevicesResult.h"
#include "model/BatchDeleteVsDomainConfigsRequest.h"
#include "model/BatchDeleteVsDomainConfigsResult.h"
#include "model/BatchForbidVsStreamRequest.h"
#include "model/BatchForbidVsStreamResult.h"
#include "model/BatchResumeVsStreamRequest.h"
#include "model/BatchResumeVsStreamResult.h"
#include "model/BatchSetVsDomainConfigsRequest.h"
#include "model/BatchSetVsDomainConfigsResult.h"
#include "model/BatchStartDevicesRequest.h"
#include "model/BatchStartDevicesResult.h"
#include "model/BatchStartStreamsRequest.h"
#include "model/BatchStartStreamsResult.h"
#include "model/BatchStopDevicesRequest.h"
#include "model/BatchStopDevicesResult.h"
#include "model/BatchStopStreamsRequest.h"
#include "model/BatchStopStreamsResult.h"
#include "model/BatchUnbindDirectoriesRequest.h"
#include "model/BatchUnbindDirectoriesResult.h"
#include "model/BatchUnbindParentPlatformDevicesRequest.h"
#include "model/BatchUnbindParentPlatformDevicesResult.h"
#include "model/BatchUnbindPurchasedDevicesRequest.h"
#include "model/BatchUnbindPurchasedDevicesResult.h"
#include "model/BatchUnbindTemplateRequest.h"
#include "model/BatchUnbindTemplateResult.h"
#include "model/BatchUnbindTemplatesRequest.h"
#include "model/BatchUnbindTemplatesResult.h"
#include "model/BindDirectoryRequest.h"
#include "model/BindDirectoryResult.h"
#include "model/BindParentPlatformDeviceRequest.h"
#include "model/BindParentPlatformDeviceResult.h"
#include "model/BindPurchasedDeviceRequest.h"
#include "model/BindPurchasedDeviceResult.h"
#include "model/BindTemplateRequest.h"
#include "model/BindTemplateResult.h"
#include "model/ContinuousAdjustRequest.h"
#include "model/ContinuousAdjustResult.h"
#include "model/ContinuousMoveRequest.h"
#include "model/ContinuousMoveResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateDeviceRequest.h"
#include "model/CreateDeviceResult.h"
#include "model/CreateDeviceAlarmRequest.h"
#include "model/CreateDeviceAlarmResult.h"
#include "model/CreateDeviceSnapshotRequest.h"
#include "model/CreateDeviceSnapshotResult.h"
#include "model/CreateDirectoryRequest.h"
#include "model/CreateDirectoryResult.h"
#include "model/CreateGroupRequest.h"
#include "model/CreateGroupResult.h"
#include "model/CreateParentPlatformRequest.h"
#include "model/CreateParentPlatformResult.h"
#include "model/CreateRenderingDeviceRequest.h"
#include "model/CreateRenderingDeviceResult.h"
#include "model/CreateStreamSnapshotRequest.h"
#include "model/CreateStreamSnapshotResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/DeleteBucketRequest.h"
#include "model/DeleteBucketResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/DeleteDirectoryRequest.h"
#include "model/DeleteDirectoryResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteParentPlatformRequest.h"
#include "model/DeleteParentPlatformResult.h"
#include "model/DeletePresetRequest.h"
#include "model/DeletePresetResult.h"
#include "model/DeleteRenderingDeviceInternetPortsRequest.h"
#include "model/DeleteRenderingDeviceInternetPortsResult.h"
#include "model/DeleteRenderingDevicesRequest.h"
#include "model/DeleteRenderingDevicesResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteVsPullStreamInfoConfigRequest.h"
#include "model/DeleteVsPullStreamInfoConfigResult.h"
#include "model/DeleteVsStreamsNotifyUrlConfigRequest.h"
#include "model/DeleteVsStreamsNotifyUrlConfigResult.h"
#include "model/DescribeAccountStatRequest.h"
#include "model/DescribeAccountStatResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/DescribeClusterDevicesRequest.h"
#include "model/DescribeClusterDevicesResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/DescribeDeviceRequest.h"
#include "model/DescribeDeviceResult.h"
#include "model/DescribeDeviceChannelsRequest.h"
#include "model/DescribeDeviceChannelsResult.h"
#include "model/DescribeDeviceGatewayRequest.h"
#include "model/DescribeDeviceGatewayResult.h"
#include "model/DescribeDeviceURLRequest.h"
#include "model/DescribeDeviceURLResult.h"
#include "model/DescribeDevicesRequest.h"
#include "model/DescribeDevicesResult.h"
#include "model/DescribeDirectoriesRequest.h"
#include "model/DescribeDirectoriesResult.h"
#include "model/DescribeDirectoryRequest.h"
#include "model/DescribeDirectoryResult.h"
#include "model/DescribeGroupRequest.h"
#include "model/DescribeGroupResult.h"
#include "model/DescribeGroupsRequest.h"
#include "model/DescribeGroupsResult.h"
#include "model/DescribeNodeDevicesInfoRequest.h"
#include "model/DescribeNodeDevicesInfoResult.h"
#include "model/DescribeParentPlatformRequest.h"
#include "model/DescribeParentPlatformResult.h"
#include "model/DescribeParentPlatformDevicesRequest.h"
#include "model/DescribeParentPlatformDevicesResult.h"
#include "model/DescribeParentPlatformsRequest.h"
#include "model/DescribeParentPlatformsResult.h"
#include "model/DescribePresetsRequest.h"
#include "model/DescribePresetsResult.h"
#include "model/DescribePurchasedDeviceRequest.h"
#include "model/DescribePurchasedDeviceResult.h"
#include "model/DescribePurchasedDevicesRequest.h"
#include "model/DescribePurchasedDevicesResult.h"
#include "model/DescribeRecordsRequest.h"
#include "model/DescribeRecordsResult.h"
#include "model/DescribeRenderingDevicesRequest.h"
#include "model/DescribeRenderingDevicesResult.h"
#include "model/DescribeStreamRequest.h"
#include "model/DescribeStreamResult.h"
#include "model/DescribeStreamURLRequest.h"
#include "model/DescribeStreamURLResult.h"
#include "model/DescribeStreamVodListRequest.h"
#include "model/DescribeStreamVodListResult.h"
#include "model/DescribeStreamsRequest.h"
#include "model/DescribeStreamsResult.h"
#include "model/DescribeTemplateRequest.h"
#include "model/DescribeTemplateResult.h"
#include "model/DescribeTemplatesRequest.h"
#include "model/DescribeTemplatesResult.h"
#include "model/DescribeVodStreamURLRequest.h"
#include "model/DescribeVodStreamURLResult.h"
#include "model/DescribeVsCertificateDetailRequest.h"
#include "model/DescribeVsCertificateDetailResult.h"
#include "model/DescribeVsCertificateListRequest.h"
#include "model/DescribeVsCertificateListResult.h"
#include "model/DescribeVsDomainBpsDataRequest.h"
#include "model/DescribeVsDomainBpsDataResult.h"
#include "model/DescribeVsDomainCertificateInfoRequest.h"
#include "model/DescribeVsDomainCertificateInfoResult.h"
#include "model/DescribeVsDomainConfigsRequest.h"
#include "model/DescribeVsDomainConfigsResult.h"
#include "model/DescribeVsDomainDetailRequest.h"
#include "model/DescribeVsDomainDetailResult.h"
#include "model/DescribeVsDomainPvDataRequest.h"
#include "model/DescribeVsDomainPvDataResult.h"
#include "model/DescribeVsDomainPvUvDataRequest.h"
#include "model/DescribeVsDomainPvUvDataResult.h"
#include "model/DescribeVsDomainRecordDataRequest.h"
#include "model/DescribeVsDomainRecordDataResult.h"
#include "model/DescribeVsDomainRegionDataRequest.h"
#include "model/DescribeVsDomainRegionDataResult.h"
#include "model/DescribeVsDomainReqBpsDataRequest.h"
#include "model/DescribeVsDomainReqBpsDataResult.h"
#include "model/DescribeVsDomainReqTrafficDataRequest.h"
#include "model/DescribeVsDomainReqTrafficDataResult.h"
#include "model/DescribeVsDomainSnapshotDataRequest.h"
#include "model/DescribeVsDomainSnapshotDataResult.h"
#include "model/DescribeVsDomainTrafficDataRequest.h"
#include "model/DescribeVsDomainTrafficDataResult.h"
#include "model/DescribeVsDomainUvDataRequest.h"
#include "model/DescribeVsDomainUvDataResult.h"
#include "model/DescribeVsPullStreamInfoConfigRequest.h"
#include "model/DescribeVsPullStreamInfoConfigResult.h"
#include "model/DescribeVsStorageTrafficUsageDataRequest.h"
#include "model/DescribeVsStorageTrafficUsageDataResult.h"
#include "model/DescribeVsStorageUsageDataRequest.h"
#include "model/DescribeVsStorageUsageDataResult.h"
#include "model/DescribeVsStreamsNotifyUrlConfigRequest.h"
#include "model/DescribeVsStreamsNotifyUrlConfigResult.h"
#include "model/DescribeVsStreamsOnlineListRequest.h"
#include "model/DescribeVsStreamsOnlineListResult.h"
#include "model/DescribeVsStreamsPublishListRequest.h"
#include "model/DescribeVsStreamsPublishListResult.h"
#include "model/DescribeVsTopDomainsByFlowRequest.h"
#include "model/DescribeVsTopDomainsByFlowResult.h"
#include "model/DescribeVsUpPeakPublishStreamDataRequest.h"
#include "model/DescribeVsUpPeakPublishStreamDataResult.h"
#include "model/DescribeVsUserResourcePackageRequest.h"
#include "model/DescribeVsUserResourcePackageResult.h"
#include "model/ForbidVsStreamRequest.h"
#include "model/ForbidVsStreamResult.h"
#include "model/GetBucketInfoRequest.h"
#include "model/GetBucketInfoResult.h"
#include "model/GotoPresetRequest.h"
#include "model/GotoPresetResult.h"
#include "model/ListBucketsRequest.h"
#include "model/ListBucketsResult.h"
#include "model/ListDeviceChannelsRequest.h"
#include "model/ListDeviceChannelsResult.h"
#include "model/ListDeviceRecordsRequest.h"
#include "model/ListDeviceRecordsResult.h"
#include "model/ListObjectsRequest.h"
#include "model/ListObjectsResult.h"
#include "model/ModifyDeviceRequest.h"
#include "model/ModifyDeviceResult.h"
#include "model/ModifyDeviceAlarmRequest.h"
#include "model/ModifyDeviceAlarmResult.h"
#include "model/ModifyDeviceCaptureRequest.h"
#include "model/ModifyDeviceCaptureResult.h"
#include "model/ModifyDeviceChannelsRequest.h"
#include "model/ModifyDeviceChannelsResult.h"
#include "model/ModifyDirectoryRequest.h"
#include "model/ModifyDirectoryResult.h"
#include "model/ModifyGroupRequest.h"
#include "model/ModifyGroupResult.h"
#include "model/ModifyParentPlatformRequest.h"
#include "model/ModifyParentPlatformResult.h"
#include "model/ModifyTemplateRequest.h"
#include "model/ModifyTemplateResult.h"
#include "model/OpenVsServiceRequest.h"
#include "model/OpenVsServiceResult.h"
#include "model/OperateRenderingDevicesRequest.h"
#include "model/OperateRenderingDevicesResult.h"
#include "model/PrepareUploadRequest.h"
#include "model/PrepareUploadResult.h"
#include "model/PutBucketRequest.h"
#include "model/PutBucketResult.h"
#include "model/ResetRenderingDevicesRequest.h"
#include "model/ResetRenderingDevicesResult.h"
#include "model/ResumeVsStreamRequest.h"
#include "model/ResumeVsStreamResult.h"
#include "model/SetPresetRequest.h"
#include "model/SetPresetResult.h"
#include "model/SetVsDomainCertificateRequest.h"
#include "model/SetVsDomainCertificateResult.h"
#include "model/SetVsStreamsNotifyUrlConfigRequest.h"
#include "model/SetVsStreamsNotifyUrlConfigResult.h"
#include "model/StartDeviceRequest.h"
#include "model/StartDeviceResult.h"
#include "model/StartParentPlatformRequest.h"
#include "model/StartParentPlatformResult.h"
#include "model/StartRecordStreamRequest.h"
#include "model/StartRecordStreamResult.h"
#include "model/StartStreamRequest.h"
#include "model/StartStreamResult.h"
#include "model/StartTransferStreamRequest.h"
#include "model/StartTransferStreamResult.h"
#include "model/StopAdjustRequest.h"
#include "model/StopAdjustResult.h"
#include "model/StopDeviceRequest.h"
#include "model/StopDeviceResult.h"
#include "model/StopMoveRequest.h"
#include "model/StopMoveResult.h"
#include "model/StopRecordStreamRequest.h"
#include "model/StopRecordStreamResult.h"
#include "model/StopStreamRequest.h"
#include "model/StopStreamResult.h"
#include "model/StopTransferStreamRequest.h"
#include "model/StopTransferStreamResult.h"
#include "model/SyncCatalogsRequest.h"
#include "model/SyncCatalogsResult.h"
#include "model/SyncDeviceChannelsRequest.h"
#include "model/SyncDeviceChannelsResult.h"
#include "model/UnbindDirectoryRequest.h"
#include "model/UnbindDirectoryResult.h"
#include "model/UnbindParentPlatformDeviceRequest.h"
#include "model/UnbindParentPlatformDeviceResult.h"
#include "model/UnbindPurchasedDeviceRequest.h"
#include "model/UnbindPurchasedDeviceResult.h"
#include "model/UnbindTemplateRequest.h"
#include "model/UnbindTemplateResult.h"
#include "model/UnlockDeviceRequest.h"
#include "model/UnlockDeviceResult.h"
#include "model/UpdateBucketInfoRequest.h"
#include "model/UpdateBucketInfoResult.h"
#include "model/UpdateClusterRequest.h"
#include "model/UpdateClusterResult.h"
#include "model/UpdateRenderingDeviceSpecRequest.h"
#include "model/UpdateRenderingDeviceSpecResult.h"
#include "model/UpdateVsPullStreamInfoConfigRequest.h"
#include "model/UpdateVsPullStreamInfoConfigResult.h"
#include "model/UploadDeviceRecordRequest.h"
#include "model/UploadDeviceRecordResult.h"


namespace AlibabaCloud
{
	namespace Vs
	{
		class ALIBABACLOUD_VS_EXPORT VsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDeviceResult> AddDeviceOutcome;
			typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::AddDeviceRequest&, const AddDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddRenderingDeviceInternetPortsResult> AddRenderingDeviceInternetPortsOutcome;
			typedef std::future<AddRenderingDeviceInternetPortsOutcome> AddRenderingDeviceInternetPortsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::AddRenderingDeviceInternetPortsRequest&, const AddRenderingDeviceInternetPortsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRenderingDeviceInternetPortsAsyncHandler;
			typedef Outcome<Error, Model::AddVsPullStreamInfoConfigResult> AddVsPullStreamInfoConfigOutcome;
			typedef std::future<AddVsPullStreamInfoConfigOutcome> AddVsPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::AddVsPullStreamInfoConfigRequest&, const AddVsPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVsPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchBindDirectoriesResult> BatchBindDirectoriesOutcome;
			typedef std::future<BatchBindDirectoriesOutcome> BatchBindDirectoriesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchBindDirectoriesRequest&, const BatchBindDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::BatchBindParentPlatformDevicesResult> BatchBindParentPlatformDevicesOutcome;
			typedef std::future<BatchBindParentPlatformDevicesOutcome> BatchBindParentPlatformDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchBindParentPlatformDevicesRequest&, const BatchBindParentPlatformDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindParentPlatformDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchBindPurchasedDevicesResult> BatchBindPurchasedDevicesOutcome;
			typedef std::future<BatchBindPurchasedDevicesOutcome> BatchBindPurchasedDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchBindPurchasedDevicesRequest&, const BatchBindPurchasedDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindPurchasedDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchBindTemplateResult> BatchBindTemplateOutcome;
			typedef std::future<BatchBindTemplateOutcome> BatchBindTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchBindTemplateRequest&, const BatchBindTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindTemplateAsyncHandler;
			typedef Outcome<Error, Model::BatchBindTemplatesResult> BatchBindTemplatesOutcome;
			typedef std::future<BatchBindTemplatesOutcome> BatchBindTemplatesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchBindTemplatesRequest&, const BatchBindTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindTemplatesAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDevicesResult> BatchDeleteDevicesOutcome;
			typedef std::future<BatchDeleteDevicesOutcome> BatchDeleteDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchDeleteDevicesRequest&, const BatchDeleteDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteVsDomainConfigsResult> BatchDeleteVsDomainConfigsOutcome;
			typedef std::future<BatchDeleteVsDomainConfigsOutcome> BatchDeleteVsDomainConfigsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchDeleteVsDomainConfigsRequest&, const BatchDeleteVsDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteVsDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchForbidVsStreamResult> BatchForbidVsStreamOutcome;
			typedef std::future<BatchForbidVsStreamOutcome> BatchForbidVsStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchForbidVsStreamRequest&, const BatchForbidVsStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchForbidVsStreamAsyncHandler;
			typedef Outcome<Error, Model::BatchResumeVsStreamResult> BatchResumeVsStreamOutcome;
			typedef std::future<BatchResumeVsStreamOutcome> BatchResumeVsStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchResumeVsStreamRequest&, const BatchResumeVsStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchResumeVsStreamAsyncHandler;
			typedef Outcome<Error, Model::BatchSetVsDomainConfigsResult> BatchSetVsDomainConfigsOutcome;
			typedef std::future<BatchSetVsDomainConfigsOutcome> BatchSetVsDomainConfigsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchSetVsDomainConfigsRequest&, const BatchSetVsDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetVsDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchStartDevicesResult> BatchStartDevicesOutcome;
			typedef std::future<BatchStartDevicesOutcome> BatchStartDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchStartDevicesRequest&, const BatchStartDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchStartStreamsResult> BatchStartStreamsOutcome;
			typedef std::future<BatchStartStreamsOutcome> BatchStartStreamsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchStartStreamsRequest&, const BatchStartStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartStreamsAsyncHandler;
			typedef Outcome<Error, Model::BatchStopDevicesResult> BatchStopDevicesOutcome;
			typedef std::future<BatchStopDevicesOutcome> BatchStopDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchStopDevicesRequest&, const BatchStopDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchStopStreamsResult> BatchStopStreamsOutcome;
			typedef std::future<BatchStopStreamsOutcome> BatchStopStreamsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchStopStreamsRequest&, const BatchStopStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopStreamsAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindDirectoriesResult> BatchUnbindDirectoriesOutcome;
			typedef std::future<BatchUnbindDirectoriesOutcome> BatchUnbindDirectoriesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchUnbindDirectoriesRequest&, const BatchUnbindDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindParentPlatformDevicesResult> BatchUnbindParentPlatformDevicesOutcome;
			typedef std::future<BatchUnbindParentPlatformDevicesOutcome> BatchUnbindParentPlatformDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchUnbindParentPlatformDevicesRequest&, const BatchUnbindParentPlatformDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindParentPlatformDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindPurchasedDevicesResult> BatchUnbindPurchasedDevicesOutcome;
			typedef std::future<BatchUnbindPurchasedDevicesOutcome> BatchUnbindPurchasedDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchUnbindPurchasedDevicesRequest&, const BatchUnbindPurchasedDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindPurchasedDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindTemplateResult> BatchUnbindTemplateOutcome;
			typedef std::future<BatchUnbindTemplateOutcome> BatchUnbindTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchUnbindTemplateRequest&, const BatchUnbindTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindTemplateAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindTemplatesResult> BatchUnbindTemplatesOutcome;
			typedef std::future<BatchUnbindTemplatesOutcome> BatchUnbindTemplatesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BatchUnbindTemplatesRequest&, const BatchUnbindTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindTemplatesAsyncHandler;
			typedef Outcome<Error, Model::BindDirectoryResult> BindDirectoryOutcome;
			typedef std::future<BindDirectoryOutcome> BindDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BindDirectoryRequest&, const BindDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDirectoryAsyncHandler;
			typedef Outcome<Error, Model::BindParentPlatformDeviceResult> BindParentPlatformDeviceOutcome;
			typedef std::future<BindParentPlatformDeviceOutcome> BindParentPlatformDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BindParentPlatformDeviceRequest&, const BindParentPlatformDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindParentPlatformDeviceAsyncHandler;
			typedef Outcome<Error, Model::BindPurchasedDeviceResult> BindPurchasedDeviceOutcome;
			typedef std::future<BindPurchasedDeviceOutcome> BindPurchasedDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BindPurchasedDeviceRequest&, const BindPurchasedDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindPurchasedDeviceAsyncHandler;
			typedef Outcome<Error, Model::BindTemplateResult> BindTemplateOutcome;
			typedef std::future<BindTemplateOutcome> BindTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::BindTemplateRequest&, const BindTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindTemplateAsyncHandler;
			typedef Outcome<Error, Model::ContinuousAdjustResult> ContinuousAdjustOutcome;
			typedef std::future<ContinuousAdjustOutcome> ContinuousAdjustOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ContinuousAdjustRequest&, const ContinuousAdjustOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinuousAdjustAsyncHandler;
			typedef Outcome<Error, Model::ContinuousMoveResult> ContinuousMoveOutcome;
			typedef std::future<ContinuousMoveOutcome> ContinuousMoveOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ContinuousMoveRequest&, const ContinuousMoveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinuousMoveAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceResult> CreateDeviceOutcome;
			typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateDeviceRequest&, const CreateDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceAlarmResult> CreateDeviceAlarmOutcome;
			typedef std::future<CreateDeviceAlarmOutcome> CreateDeviceAlarmOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateDeviceAlarmRequest&, const CreateDeviceAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAlarmAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceSnapshotResult> CreateDeviceSnapshotOutcome;
			typedef std::future<CreateDeviceSnapshotOutcome> CreateDeviceSnapshotOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateDeviceSnapshotRequest&, const CreateDeviceSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateDirectoryResult> CreateDirectoryOutcome;
			typedef std::future<CreateDirectoryOutcome> CreateDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateDirectoryRequest&, const CreateDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectoryAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupResult> CreateGroupOutcome;
			typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateGroupRequest&, const CreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateParentPlatformResult> CreateParentPlatformOutcome;
			typedef std::future<CreateParentPlatformOutcome> CreateParentPlatformOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateParentPlatformRequest&, const CreateParentPlatformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParentPlatformAsyncHandler;
			typedef Outcome<Error, Model::CreateRenderingDeviceResult> CreateRenderingDeviceOutcome;
			typedef std::future<CreateRenderingDeviceOutcome> CreateRenderingDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateRenderingDeviceRequest&, const CreateRenderingDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRenderingDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateStreamSnapshotResult> CreateStreamSnapshotOutcome;
			typedef std::future<CreateStreamSnapshotOutcome> CreateStreamSnapshotOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateStreamSnapshotRequest&, const CreateStreamSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteBucketResult> DeleteBucketOutcome;
			typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteBucketRequest&, const DeleteBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBucketAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDirectoryResult> DeleteDirectoryOutcome;
			typedef std::future<DeleteDirectoryOutcome> DeleteDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteDirectoryRequest&, const DeleteDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteParentPlatformResult> DeleteParentPlatformOutcome;
			typedef std::future<DeleteParentPlatformOutcome> DeleteParentPlatformOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteParentPlatformRequest&, const DeleteParentPlatformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParentPlatformAsyncHandler;
			typedef Outcome<Error, Model::DeletePresetResult> DeletePresetOutcome;
			typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeletePresetRequest&, const DeletePresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePresetAsyncHandler;
			typedef Outcome<Error, Model::DeleteRenderingDeviceInternetPortsResult> DeleteRenderingDeviceInternetPortsOutcome;
			typedef std::future<DeleteRenderingDeviceInternetPortsOutcome> DeleteRenderingDeviceInternetPortsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteRenderingDeviceInternetPortsRequest&, const DeleteRenderingDeviceInternetPortsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRenderingDeviceInternetPortsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRenderingDevicesResult> DeleteRenderingDevicesOutcome;
			typedef std::future<DeleteRenderingDevicesOutcome> DeleteRenderingDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteRenderingDevicesRequest&, const DeleteRenderingDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRenderingDevicesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteVsPullStreamInfoConfigResult> DeleteVsPullStreamInfoConfigOutcome;
			typedef std::future<DeleteVsPullStreamInfoConfigOutcome> DeleteVsPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteVsPullStreamInfoConfigRequest&, const DeleteVsPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVsPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteVsStreamsNotifyUrlConfigResult> DeleteVsStreamsNotifyUrlConfigOutcome;
			typedef std::future<DeleteVsStreamsNotifyUrlConfigOutcome> DeleteVsStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DeleteVsStreamsNotifyUrlConfigRequest&, const DeleteVsStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVsStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountStatResult> DescribeAccountStatOutcome;
			typedef std::future<DescribeAccountStatOutcome> DescribeAccountStatOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeAccountStatRequest&, const DescribeAccountStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDevicesResult> DescribeClusterDevicesOutcome;
			typedef std::future<DescribeClusterDevicesOutcome> DescribeClusterDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeClusterDevicesRequest&, const DescribeClusterDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceResult> DescribeDeviceOutcome;
			typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDeviceRequest&, const DescribeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceChannelsResult> DescribeDeviceChannelsOutcome;
			typedef std::future<DescribeDeviceChannelsOutcome> DescribeDeviceChannelsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDeviceChannelsRequest&, const DescribeDeviceChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceChannelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceGatewayResult> DescribeDeviceGatewayOutcome;
			typedef std::future<DescribeDeviceGatewayOutcome> DescribeDeviceGatewayOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDeviceGatewayRequest&, const DescribeDeviceGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceURLResult> DescribeDeviceURLOutcome;
			typedef std::future<DescribeDeviceURLOutcome> DescribeDeviceURLOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDeviceURLRequest&, const DescribeDeviceURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceURLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDevicesResult> DescribeDevicesOutcome;
			typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDevicesRequest&, const DescribeDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDirectoriesResult> DescribeDirectoriesOutcome;
			typedef std::future<DescribeDirectoriesOutcome> DescribeDirectoriesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDirectoriesRequest&, const DescribeDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDirectoryResult> DescribeDirectoryOutcome;
			typedef std::future<DescribeDirectoryOutcome> DescribeDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeDirectoryRequest&, const DescribeDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupResult> DescribeGroupOutcome;
			typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeGroupRequest&, const DescribeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupsResult> DescribeGroupsOutcome;
			typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeGroupsRequest&, const DescribeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeDevicesInfoResult> DescribeNodeDevicesInfoOutcome;
			typedef std::future<DescribeNodeDevicesInfoOutcome> DescribeNodeDevicesInfoOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeNodeDevicesInfoRequest&, const DescribeNodeDevicesInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeDevicesInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeParentPlatformResult> DescribeParentPlatformOutcome;
			typedef std::future<DescribeParentPlatformOutcome> DescribeParentPlatformOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeParentPlatformRequest&, const DescribeParentPlatformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParentPlatformAsyncHandler;
			typedef Outcome<Error, Model::DescribeParentPlatformDevicesResult> DescribeParentPlatformDevicesOutcome;
			typedef std::future<DescribeParentPlatformDevicesOutcome> DescribeParentPlatformDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeParentPlatformDevicesRequest&, const DescribeParentPlatformDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParentPlatformDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParentPlatformsResult> DescribeParentPlatformsOutcome;
			typedef std::future<DescribeParentPlatformsOutcome> DescribeParentPlatformsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeParentPlatformsRequest&, const DescribeParentPlatformsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParentPlatformsAsyncHandler;
			typedef Outcome<Error, Model::DescribePresetsResult> DescribePresetsOutcome;
			typedef std::future<DescribePresetsOutcome> DescribePresetsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribePresetsRequest&, const DescribePresetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePresetsAsyncHandler;
			typedef Outcome<Error, Model::DescribePurchasedDeviceResult> DescribePurchasedDeviceOutcome;
			typedef std::future<DescribePurchasedDeviceOutcome> DescribePurchasedDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribePurchasedDeviceRequest&, const DescribePurchasedDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchasedDeviceAsyncHandler;
			typedef Outcome<Error, Model::DescribePurchasedDevicesResult> DescribePurchasedDevicesOutcome;
			typedef std::future<DescribePurchasedDevicesOutcome> DescribePurchasedDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribePurchasedDevicesRequest&, const DescribePurchasedDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchasedDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordsResult> DescribeRecordsOutcome;
			typedef std::future<DescribeRecordsOutcome> DescribeRecordsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeRecordsRequest&, const DescribeRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenderingDevicesResult> DescribeRenderingDevicesOutcome;
			typedef std::future<DescribeRenderingDevicesOutcome> DescribeRenderingDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeRenderingDevicesRequest&, const DescribeRenderingDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenderingDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamResult> DescribeStreamOutcome;
			typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeStreamRequest&, const DescribeStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamURLResult> DescribeStreamURLOutcome;
			typedef std::future<DescribeStreamURLOutcome> DescribeStreamURLOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeStreamURLRequest&, const DescribeStreamURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamURLAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamVodListResult> DescribeStreamVodListOutcome;
			typedef std::future<DescribeStreamVodListOutcome> DescribeStreamVodListOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeStreamVodListRequest&, const DescribeStreamVodListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamVodListAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamsResult> DescribeStreamsOutcome;
			typedef std::future<DescribeStreamsOutcome> DescribeStreamsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeStreamsRequest&, const DescribeStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplateResult> DescribeTemplateOutcome;
			typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeTemplateRequest&, const DescribeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplatesResult> DescribeTemplatesOutcome;
			typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeTemplatesRequest&, const DescribeTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVodStreamURLResult> DescribeVodStreamURLOutcome;
			typedef std::future<DescribeVodStreamURLOutcome> DescribeVodStreamURLOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVodStreamURLRequest&, const DescribeVodStreamURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodStreamURLAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsCertificateDetailResult> DescribeVsCertificateDetailOutcome;
			typedef std::future<DescribeVsCertificateDetailOutcome> DescribeVsCertificateDetailOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsCertificateDetailRequest&, const DescribeVsCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsCertificateListResult> DescribeVsCertificateListOutcome;
			typedef std::future<DescribeVsCertificateListOutcome> DescribeVsCertificateListOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsCertificateListRequest&, const DescribeVsCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainBpsDataResult> DescribeVsDomainBpsDataOutcome;
			typedef std::future<DescribeVsDomainBpsDataOutcome> DescribeVsDomainBpsDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainBpsDataRequest&, const DescribeVsDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainCertificateInfoResult> DescribeVsDomainCertificateInfoOutcome;
			typedef std::future<DescribeVsDomainCertificateInfoOutcome> DescribeVsDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainCertificateInfoRequest&, const DescribeVsDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainConfigsResult> DescribeVsDomainConfigsOutcome;
			typedef std::future<DescribeVsDomainConfigsOutcome> DescribeVsDomainConfigsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainConfigsRequest&, const DescribeVsDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainDetailResult> DescribeVsDomainDetailOutcome;
			typedef std::future<DescribeVsDomainDetailOutcome> DescribeVsDomainDetailOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainDetailRequest&, const DescribeVsDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainPvDataResult> DescribeVsDomainPvDataOutcome;
			typedef std::future<DescribeVsDomainPvDataOutcome> DescribeVsDomainPvDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainPvDataRequest&, const DescribeVsDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainPvUvDataResult> DescribeVsDomainPvUvDataOutcome;
			typedef std::future<DescribeVsDomainPvUvDataOutcome> DescribeVsDomainPvUvDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainPvUvDataRequest&, const DescribeVsDomainPvUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainPvUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainRecordDataResult> DescribeVsDomainRecordDataOutcome;
			typedef std::future<DescribeVsDomainRecordDataOutcome> DescribeVsDomainRecordDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainRecordDataRequest&, const DescribeVsDomainRecordDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainRecordDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainRegionDataResult> DescribeVsDomainRegionDataOutcome;
			typedef std::future<DescribeVsDomainRegionDataOutcome> DescribeVsDomainRegionDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainRegionDataRequest&, const DescribeVsDomainRegionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainRegionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainReqBpsDataResult> DescribeVsDomainReqBpsDataOutcome;
			typedef std::future<DescribeVsDomainReqBpsDataOutcome> DescribeVsDomainReqBpsDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainReqBpsDataRequest&, const DescribeVsDomainReqBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainReqBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainReqTrafficDataResult> DescribeVsDomainReqTrafficDataOutcome;
			typedef std::future<DescribeVsDomainReqTrafficDataOutcome> DescribeVsDomainReqTrafficDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainReqTrafficDataRequest&, const DescribeVsDomainReqTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainReqTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainSnapshotDataResult> DescribeVsDomainSnapshotDataOutcome;
			typedef std::future<DescribeVsDomainSnapshotDataOutcome> DescribeVsDomainSnapshotDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainSnapshotDataRequest&, const DescribeVsDomainSnapshotDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainSnapshotDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainTrafficDataResult> DescribeVsDomainTrafficDataOutcome;
			typedef std::future<DescribeVsDomainTrafficDataOutcome> DescribeVsDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainTrafficDataRequest&, const DescribeVsDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsDomainUvDataResult> DescribeVsDomainUvDataOutcome;
			typedef std::future<DescribeVsDomainUvDataOutcome> DescribeVsDomainUvDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsDomainUvDataRequest&, const DescribeVsDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsPullStreamInfoConfigResult> DescribeVsPullStreamInfoConfigOutcome;
			typedef std::future<DescribeVsPullStreamInfoConfigOutcome> DescribeVsPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsPullStreamInfoConfigRequest&, const DescribeVsPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsStorageTrafficUsageDataResult> DescribeVsStorageTrafficUsageDataOutcome;
			typedef std::future<DescribeVsStorageTrafficUsageDataOutcome> DescribeVsStorageTrafficUsageDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsStorageTrafficUsageDataRequest&, const DescribeVsStorageTrafficUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsStorageTrafficUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsStorageUsageDataResult> DescribeVsStorageUsageDataOutcome;
			typedef std::future<DescribeVsStorageUsageDataOutcome> DescribeVsStorageUsageDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsStorageUsageDataRequest&, const DescribeVsStorageUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsStorageUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsStreamsNotifyUrlConfigResult> DescribeVsStreamsNotifyUrlConfigOutcome;
			typedef std::future<DescribeVsStreamsNotifyUrlConfigOutcome> DescribeVsStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsStreamsNotifyUrlConfigRequest&, const DescribeVsStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsStreamsOnlineListResult> DescribeVsStreamsOnlineListOutcome;
			typedef std::future<DescribeVsStreamsOnlineListOutcome> DescribeVsStreamsOnlineListOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsStreamsOnlineListRequest&, const DescribeVsStreamsOnlineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsStreamsOnlineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsStreamsPublishListResult> DescribeVsStreamsPublishListOutcome;
			typedef std::future<DescribeVsStreamsPublishListOutcome> DescribeVsStreamsPublishListOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsStreamsPublishListRequest&, const DescribeVsStreamsPublishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsStreamsPublishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsTopDomainsByFlowResult> DescribeVsTopDomainsByFlowOutcome;
			typedef std::future<DescribeVsTopDomainsByFlowOutcome> DescribeVsTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsTopDomainsByFlowRequest&, const DescribeVsTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsUpPeakPublishStreamDataResult> DescribeVsUpPeakPublishStreamDataOutcome;
			typedef std::future<DescribeVsUpPeakPublishStreamDataOutcome> DescribeVsUpPeakPublishStreamDataOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsUpPeakPublishStreamDataRequest&, const DescribeVsUpPeakPublishStreamDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsUpPeakPublishStreamDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVsUserResourcePackageResult> DescribeVsUserResourcePackageOutcome;
			typedef std::future<DescribeVsUserResourcePackageOutcome> DescribeVsUserResourcePackageOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::DescribeVsUserResourcePackageRequest&, const DescribeVsUserResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVsUserResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::ForbidVsStreamResult> ForbidVsStreamOutcome;
			typedef std::future<ForbidVsStreamOutcome> ForbidVsStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ForbidVsStreamRequest&, const ForbidVsStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidVsStreamAsyncHandler;
			typedef Outcome<Error, Model::GetBucketInfoResult> GetBucketInfoOutcome;
			typedef std::future<GetBucketInfoOutcome> GetBucketInfoOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::GetBucketInfoRequest&, const GetBucketInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBucketInfoAsyncHandler;
			typedef Outcome<Error, Model::GotoPresetResult> GotoPresetOutcome;
			typedef std::future<GotoPresetOutcome> GotoPresetOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::GotoPresetRequest&, const GotoPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GotoPresetAsyncHandler;
			typedef Outcome<Error, Model::ListBucketsResult> ListBucketsOutcome;
			typedef std::future<ListBucketsOutcome> ListBucketsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ListBucketsRequest&, const ListBucketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBucketsAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceChannelsResult> ListDeviceChannelsOutcome;
			typedef std::future<ListDeviceChannelsOutcome> ListDeviceChannelsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ListDeviceChannelsRequest&, const ListDeviceChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceChannelsAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceRecordsResult> ListDeviceRecordsOutcome;
			typedef std::future<ListDeviceRecordsOutcome> ListDeviceRecordsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ListDeviceRecordsRequest&, const ListDeviceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListObjectsResult> ListObjectsOutcome;
			typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ListObjectsRequest&, const ListObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListObjectsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceResult> ModifyDeviceOutcome;
			typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyDeviceRequest&, const ModifyDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceAlarmResult> ModifyDeviceAlarmOutcome;
			typedef std::future<ModifyDeviceAlarmOutcome> ModifyDeviceAlarmOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyDeviceAlarmRequest&, const ModifyDeviceAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAlarmAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceCaptureResult> ModifyDeviceCaptureOutcome;
			typedef std::future<ModifyDeviceCaptureOutcome> ModifyDeviceCaptureOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyDeviceCaptureRequest&, const ModifyDeviceCaptureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceCaptureAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceChannelsResult> ModifyDeviceChannelsOutcome;
			typedef std::future<ModifyDeviceChannelsOutcome> ModifyDeviceChannelsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyDeviceChannelsRequest&, const ModifyDeviceChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceChannelsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDirectoryResult> ModifyDirectoryOutcome;
			typedef std::future<ModifyDirectoryOutcome> ModifyDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyDirectoryRequest&, const ModifyDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupResult> ModifyGroupOutcome;
			typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyGroupRequest&, const ModifyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyParentPlatformResult> ModifyParentPlatformOutcome;
			typedef std::future<ModifyParentPlatformOutcome> ModifyParentPlatformOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyParentPlatformRequest&, const ModifyParentPlatformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParentPlatformAsyncHandler;
			typedef Outcome<Error, Model::ModifyTemplateResult> ModifyTemplateOutcome;
			typedef std::future<ModifyTemplateOutcome> ModifyTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ModifyTemplateRequest&, const ModifyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTemplateAsyncHandler;
			typedef Outcome<Error, Model::OpenVsServiceResult> OpenVsServiceOutcome;
			typedef std::future<OpenVsServiceOutcome> OpenVsServiceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::OpenVsServiceRequest&, const OpenVsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenVsServiceAsyncHandler;
			typedef Outcome<Error, Model::OperateRenderingDevicesResult> OperateRenderingDevicesOutcome;
			typedef std::future<OperateRenderingDevicesOutcome> OperateRenderingDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::OperateRenderingDevicesRequest&, const OperateRenderingDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateRenderingDevicesAsyncHandler;
			typedef Outcome<Error, Model::PrepareUploadResult> PrepareUploadOutcome;
			typedef std::future<PrepareUploadOutcome> PrepareUploadOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::PrepareUploadRequest&, const PrepareUploadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrepareUploadAsyncHandler;
			typedef Outcome<Error, Model::PutBucketResult> PutBucketOutcome;
			typedef std::future<PutBucketOutcome> PutBucketOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::PutBucketRequest&, const PutBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutBucketAsyncHandler;
			typedef Outcome<Error, Model::ResetRenderingDevicesResult> ResetRenderingDevicesOutcome;
			typedef std::future<ResetRenderingDevicesOutcome> ResetRenderingDevicesOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ResetRenderingDevicesRequest&, const ResetRenderingDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetRenderingDevicesAsyncHandler;
			typedef Outcome<Error, Model::ResumeVsStreamResult> ResumeVsStreamOutcome;
			typedef std::future<ResumeVsStreamOutcome> ResumeVsStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::ResumeVsStreamRequest&, const ResumeVsStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeVsStreamAsyncHandler;
			typedef Outcome<Error, Model::SetPresetResult> SetPresetOutcome;
			typedef std::future<SetPresetOutcome> SetPresetOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::SetPresetRequest&, const SetPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPresetAsyncHandler;
			typedef Outcome<Error, Model::SetVsDomainCertificateResult> SetVsDomainCertificateOutcome;
			typedef std::future<SetVsDomainCertificateOutcome> SetVsDomainCertificateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::SetVsDomainCertificateRequest&, const SetVsDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVsDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetVsStreamsNotifyUrlConfigResult> SetVsStreamsNotifyUrlConfigOutcome;
			typedef std::future<SetVsStreamsNotifyUrlConfigOutcome> SetVsStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::SetVsStreamsNotifyUrlConfigRequest&, const SetVsStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVsStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::StartDeviceResult> StartDeviceOutcome;
			typedef std::future<StartDeviceOutcome> StartDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StartDeviceRequest&, const StartDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDeviceAsyncHandler;
			typedef Outcome<Error, Model::StartParentPlatformResult> StartParentPlatformOutcome;
			typedef std::future<StartParentPlatformOutcome> StartParentPlatformOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StartParentPlatformRequest&, const StartParentPlatformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartParentPlatformAsyncHandler;
			typedef Outcome<Error, Model::StartRecordStreamResult> StartRecordStreamOutcome;
			typedef std::future<StartRecordStreamOutcome> StartRecordStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StartRecordStreamRequest&, const StartRecordStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRecordStreamAsyncHandler;
			typedef Outcome<Error, Model::StartStreamResult> StartStreamOutcome;
			typedef std::future<StartStreamOutcome> StartStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StartStreamRequest&, const StartStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamAsyncHandler;
			typedef Outcome<Error, Model::StartTransferStreamResult> StartTransferStreamOutcome;
			typedef std::future<StartTransferStreamOutcome> StartTransferStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StartTransferStreamRequest&, const StartTransferStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTransferStreamAsyncHandler;
			typedef Outcome<Error, Model::StopAdjustResult> StopAdjustOutcome;
			typedef std::future<StopAdjustOutcome> StopAdjustOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopAdjustRequest&, const StopAdjustOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopAdjustAsyncHandler;
			typedef Outcome<Error, Model::StopDeviceResult> StopDeviceOutcome;
			typedef std::future<StopDeviceOutcome> StopDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopDeviceRequest&, const StopDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDeviceAsyncHandler;
			typedef Outcome<Error, Model::StopMoveResult> StopMoveOutcome;
			typedef std::future<StopMoveOutcome> StopMoveOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopMoveRequest&, const StopMoveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMoveAsyncHandler;
			typedef Outcome<Error, Model::StopRecordStreamResult> StopRecordStreamOutcome;
			typedef std::future<StopRecordStreamOutcome> StopRecordStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopRecordStreamRequest&, const StopRecordStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordStreamAsyncHandler;
			typedef Outcome<Error, Model::StopStreamResult> StopStreamOutcome;
			typedef std::future<StopStreamOutcome> StopStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopStreamRequest&, const StopStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamAsyncHandler;
			typedef Outcome<Error, Model::StopTransferStreamResult> StopTransferStreamOutcome;
			typedef std::future<StopTransferStreamOutcome> StopTransferStreamOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::StopTransferStreamRequest&, const StopTransferStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTransferStreamAsyncHandler;
			typedef Outcome<Error, Model::SyncCatalogsResult> SyncCatalogsOutcome;
			typedef std::future<SyncCatalogsOutcome> SyncCatalogsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::SyncCatalogsRequest&, const SyncCatalogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncCatalogsAsyncHandler;
			typedef Outcome<Error, Model::SyncDeviceChannelsResult> SyncDeviceChannelsOutcome;
			typedef std::future<SyncDeviceChannelsOutcome> SyncDeviceChannelsOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::SyncDeviceChannelsRequest&, const SyncDeviceChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDeviceChannelsAsyncHandler;
			typedef Outcome<Error, Model::UnbindDirectoryResult> UnbindDirectoryOutcome;
			typedef std::future<UnbindDirectoryOutcome> UnbindDirectoryOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UnbindDirectoryRequest&, const UnbindDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDirectoryAsyncHandler;
			typedef Outcome<Error, Model::UnbindParentPlatformDeviceResult> UnbindParentPlatformDeviceOutcome;
			typedef std::future<UnbindParentPlatformDeviceOutcome> UnbindParentPlatformDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UnbindParentPlatformDeviceRequest&, const UnbindParentPlatformDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindParentPlatformDeviceAsyncHandler;
			typedef Outcome<Error, Model::UnbindPurchasedDeviceResult> UnbindPurchasedDeviceOutcome;
			typedef std::future<UnbindPurchasedDeviceOutcome> UnbindPurchasedDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UnbindPurchasedDeviceRequest&, const UnbindPurchasedDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPurchasedDeviceAsyncHandler;
			typedef Outcome<Error, Model::UnbindTemplateResult> UnbindTemplateOutcome;
			typedef std::future<UnbindTemplateOutcome> UnbindTemplateOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UnbindTemplateRequest&, const UnbindTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindTemplateAsyncHandler;
			typedef Outcome<Error, Model::UnlockDeviceResult> UnlockDeviceOutcome;
			typedef std::future<UnlockDeviceOutcome> UnlockDeviceOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UnlockDeviceRequest&, const UnlockDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateBucketInfoResult> UpdateBucketInfoOutcome;
			typedef std::future<UpdateBucketInfoOutcome> UpdateBucketInfoOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UpdateBucketInfoRequest&, const UpdateBucketInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBucketInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterResult> UpdateClusterOutcome;
			typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UpdateClusterRequest&, const UpdateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateRenderingDeviceSpecResult> UpdateRenderingDeviceSpecOutcome;
			typedef std::future<UpdateRenderingDeviceSpecOutcome> UpdateRenderingDeviceSpecOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UpdateRenderingDeviceSpecRequest&, const UpdateRenderingDeviceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRenderingDeviceSpecAsyncHandler;
			typedef Outcome<Error, Model::UpdateVsPullStreamInfoConfigResult> UpdateVsPullStreamInfoConfigOutcome;
			typedef std::future<UpdateVsPullStreamInfoConfigOutcome> UpdateVsPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UpdateVsPullStreamInfoConfigRequest&, const UpdateVsPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVsPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::UploadDeviceRecordResult> UploadDeviceRecordOutcome;
			typedef std::future<UploadDeviceRecordOutcome> UploadDeviceRecordOutcomeCallable;
			typedef std::function<void(const VsClient*, const Model::UploadDeviceRecordRequest&, const UploadDeviceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDeviceRecordAsyncHandler;

			VsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VsClient();
			AddDeviceOutcome addDevice(const Model::AddDeviceRequest &request)const;
			void addDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceOutcomeCallable addDeviceCallable(const Model::AddDeviceRequest& request) const;
			AddRenderingDeviceInternetPortsOutcome addRenderingDeviceInternetPorts(const Model::AddRenderingDeviceInternetPortsRequest &request)const;
			void addRenderingDeviceInternetPortsAsync(const Model::AddRenderingDeviceInternetPortsRequest& request, const AddRenderingDeviceInternetPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRenderingDeviceInternetPortsOutcomeCallable addRenderingDeviceInternetPortsCallable(const Model::AddRenderingDeviceInternetPortsRequest& request) const;
			AddVsPullStreamInfoConfigOutcome addVsPullStreamInfoConfig(const Model::AddVsPullStreamInfoConfigRequest &request)const;
			void addVsPullStreamInfoConfigAsync(const Model::AddVsPullStreamInfoConfigRequest& request, const AddVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVsPullStreamInfoConfigOutcomeCallable addVsPullStreamInfoConfigCallable(const Model::AddVsPullStreamInfoConfigRequest& request) const;
			BatchBindDirectoriesOutcome batchBindDirectories(const Model::BatchBindDirectoriesRequest &request)const;
			void batchBindDirectoriesAsync(const Model::BatchBindDirectoriesRequest& request, const BatchBindDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindDirectoriesOutcomeCallable batchBindDirectoriesCallable(const Model::BatchBindDirectoriesRequest& request) const;
			BatchBindParentPlatformDevicesOutcome batchBindParentPlatformDevices(const Model::BatchBindParentPlatformDevicesRequest &request)const;
			void batchBindParentPlatformDevicesAsync(const Model::BatchBindParentPlatformDevicesRequest& request, const BatchBindParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindParentPlatformDevicesOutcomeCallable batchBindParentPlatformDevicesCallable(const Model::BatchBindParentPlatformDevicesRequest& request) const;
			BatchBindPurchasedDevicesOutcome batchBindPurchasedDevices(const Model::BatchBindPurchasedDevicesRequest &request)const;
			void batchBindPurchasedDevicesAsync(const Model::BatchBindPurchasedDevicesRequest& request, const BatchBindPurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindPurchasedDevicesOutcomeCallable batchBindPurchasedDevicesCallable(const Model::BatchBindPurchasedDevicesRequest& request) const;
			BatchBindTemplateOutcome batchBindTemplate(const Model::BatchBindTemplateRequest &request)const;
			void batchBindTemplateAsync(const Model::BatchBindTemplateRequest& request, const BatchBindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindTemplateOutcomeCallable batchBindTemplateCallable(const Model::BatchBindTemplateRequest& request) const;
			BatchBindTemplatesOutcome batchBindTemplates(const Model::BatchBindTemplatesRequest &request)const;
			void batchBindTemplatesAsync(const Model::BatchBindTemplatesRequest& request, const BatchBindTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindTemplatesOutcomeCallable batchBindTemplatesCallable(const Model::BatchBindTemplatesRequest& request) const;
			BatchDeleteDevicesOutcome batchDeleteDevices(const Model::BatchDeleteDevicesRequest &request)const;
			void batchDeleteDevicesAsync(const Model::BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDevicesOutcomeCallable batchDeleteDevicesCallable(const Model::BatchDeleteDevicesRequest& request) const;
			BatchDeleteVsDomainConfigsOutcome batchDeleteVsDomainConfigs(const Model::BatchDeleteVsDomainConfigsRequest &request)const;
			void batchDeleteVsDomainConfigsAsync(const Model::BatchDeleteVsDomainConfigsRequest& request, const BatchDeleteVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteVsDomainConfigsOutcomeCallable batchDeleteVsDomainConfigsCallable(const Model::BatchDeleteVsDomainConfigsRequest& request) const;
			BatchForbidVsStreamOutcome batchForbidVsStream(const Model::BatchForbidVsStreamRequest &request)const;
			void batchForbidVsStreamAsync(const Model::BatchForbidVsStreamRequest& request, const BatchForbidVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchForbidVsStreamOutcomeCallable batchForbidVsStreamCallable(const Model::BatchForbidVsStreamRequest& request) const;
			BatchResumeVsStreamOutcome batchResumeVsStream(const Model::BatchResumeVsStreamRequest &request)const;
			void batchResumeVsStreamAsync(const Model::BatchResumeVsStreamRequest& request, const BatchResumeVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchResumeVsStreamOutcomeCallable batchResumeVsStreamCallable(const Model::BatchResumeVsStreamRequest& request) const;
			BatchSetVsDomainConfigsOutcome batchSetVsDomainConfigs(const Model::BatchSetVsDomainConfigsRequest &request)const;
			void batchSetVsDomainConfigsAsync(const Model::BatchSetVsDomainConfigsRequest& request, const BatchSetVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetVsDomainConfigsOutcomeCallable batchSetVsDomainConfigsCallable(const Model::BatchSetVsDomainConfigsRequest& request) const;
			BatchStartDevicesOutcome batchStartDevices(const Model::BatchStartDevicesRequest &request)const;
			void batchStartDevicesAsync(const Model::BatchStartDevicesRequest& request, const BatchStartDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartDevicesOutcomeCallable batchStartDevicesCallable(const Model::BatchStartDevicesRequest& request) const;
			BatchStartStreamsOutcome batchStartStreams(const Model::BatchStartStreamsRequest &request)const;
			void batchStartStreamsAsync(const Model::BatchStartStreamsRequest& request, const BatchStartStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartStreamsOutcomeCallable batchStartStreamsCallable(const Model::BatchStartStreamsRequest& request) const;
			BatchStopDevicesOutcome batchStopDevices(const Model::BatchStopDevicesRequest &request)const;
			void batchStopDevicesAsync(const Model::BatchStopDevicesRequest& request, const BatchStopDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopDevicesOutcomeCallable batchStopDevicesCallable(const Model::BatchStopDevicesRequest& request) const;
			BatchStopStreamsOutcome batchStopStreams(const Model::BatchStopStreamsRequest &request)const;
			void batchStopStreamsAsync(const Model::BatchStopStreamsRequest& request, const BatchStopStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopStreamsOutcomeCallable batchStopStreamsCallable(const Model::BatchStopStreamsRequest& request) const;
			BatchUnbindDirectoriesOutcome batchUnbindDirectories(const Model::BatchUnbindDirectoriesRequest &request)const;
			void batchUnbindDirectoriesAsync(const Model::BatchUnbindDirectoriesRequest& request, const BatchUnbindDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindDirectoriesOutcomeCallable batchUnbindDirectoriesCallable(const Model::BatchUnbindDirectoriesRequest& request) const;
			BatchUnbindParentPlatformDevicesOutcome batchUnbindParentPlatformDevices(const Model::BatchUnbindParentPlatformDevicesRequest &request)const;
			void batchUnbindParentPlatformDevicesAsync(const Model::BatchUnbindParentPlatformDevicesRequest& request, const BatchUnbindParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindParentPlatformDevicesOutcomeCallable batchUnbindParentPlatformDevicesCallable(const Model::BatchUnbindParentPlatformDevicesRequest& request) const;
			BatchUnbindPurchasedDevicesOutcome batchUnbindPurchasedDevices(const Model::BatchUnbindPurchasedDevicesRequest &request)const;
			void batchUnbindPurchasedDevicesAsync(const Model::BatchUnbindPurchasedDevicesRequest& request, const BatchUnbindPurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindPurchasedDevicesOutcomeCallable batchUnbindPurchasedDevicesCallable(const Model::BatchUnbindPurchasedDevicesRequest& request) const;
			BatchUnbindTemplateOutcome batchUnbindTemplate(const Model::BatchUnbindTemplateRequest &request)const;
			void batchUnbindTemplateAsync(const Model::BatchUnbindTemplateRequest& request, const BatchUnbindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindTemplateOutcomeCallable batchUnbindTemplateCallable(const Model::BatchUnbindTemplateRequest& request) const;
			BatchUnbindTemplatesOutcome batchUnbindTemplates(const Model::BatchUnbindTemplatesRequest &request)const;
			void batchUnbindTemplatesAsync(const Model::BatchUnbindTemplatesRequest& request, const BatchUnbindTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindTemplatesOutcomeCallable batchUnbindTemplatesCallable(const Model::BatchUnbindTemplatesRequest& request) const;
			BindDirectoryOutcome bindDirectory(const Model::BindDirectoryRequest &request)const;
			void bindDirectoryAsync(const Model::BindDirectoryRequest& request, const BindDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDirectoryOutcomeCallable bindDirectoryCallable(const Model::BindDirectoryRequest& request) const;
			BindParentPlatformDeviceOutcome bindParentPlatformDevice(const Model::BindParentPlatformDeviceRequest &request)const;
			void bindParentPlatformDeviceAsync(const Model::BindParentPlatformDeviceRequest& request, const BindParentPlatformDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindParentPlatformDeviceOutcomeCallable bindParentPlatformDeviceCallable(const Model::BindParentPlatformDeviceRequest& request) const;
			BindPurchasedDeviceOutcome bindPurchasedDevice(const Model::BindPurchasedDeviceRequest &request)const;
			void bindPurchasedDeviceAsync(const Model::BindPurchasedDeviceRequest& request, const BindPurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindPurchasedDeviceOutcomeCallable bindPurchasedDeviceCallable(const Model::BindPurchasedDeviceRequest& request) const;
			BindTemplateOutcome bindTemplate(const Model::BindTemplateRequest &request)const;
			void bindTemplateAsync(const Model::BindTemplateRequest& request, const BindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindTemplateOutcomeCallable bindTemplateCallable(const Model::BindTemplateRequest& request) const;
			ContinuousAdjustOutcome continuousAdjust(const Model::ContinuousAdjustRequest &request)const;
			void continuousAdjustAsync(const Model::ContinuousAdjustRequest& request, const ContinuousAdjustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinuousAdjustOutcomeCallable continuousAdjustCallable(const Model::ContinuousAdjustRequest& request) const;
			ContinuousMoveOutcome continuousMove(const Model::ContinuousMoveRequest &request)const;
			void continuousMoveAsync(const Model::ContinuousMoveRequest& request, const ContinuousMoveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinuousMoveOutcomeCallable continuousMoveCallable(const Model::ContinuousMoveRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateDeviceOutcome createDevice(const Model::CreateDeviceRequest &request)const;
			void createDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceOutcomeCallable createDeviceCallable(const Model::CreateDeviceRequest& request) const;
			CreateDeviceAlarmOutcome createDeviceAlarm(const Model::CreateDeviceAlarmRequest &request)const;
			void createDeviceAlarmAsync(const Model::CreateDeviceAlarmRequest& request, const CreateDeviceAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceAlarmOutcomeCallable createDeviceAlarmCallable(const Model::CreateDeviceAlarmRequest& request) const;
			CreateDeviceSnapshotOutcome createDeviceSnapshot(const Model::CreateDeviceSnapshotRequest &request)const;
			void createDeviceSnapshotAsync(const Model::CreateDeviceSnapshotRequest& request, const CreateDeviceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceSnapshotOutcomeCallable createDeviceSnapshotCallable(const Model::CreateDeviceSnapshotRequest& request) const;
			CreateDirectoryOutcome createDirectory(const Model::CreateDirectoryRequest &request)const;
			void createDirectoryAsync(const Model::CreateDirectoryRequest& request, const CreateDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDirectoryOutcomeCallable createDirectoryCallable(const Model::CreateDirectoryRequest& request) const;
			CreateGroupOutcome createGroup(const Model::CreateGroupRequest &request)const;
			void createGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupOutcomeCallable createGroupCallable(const Model::CreateGroupRequest& request) const;
			CreateParentPlatformOutcome createParentPlatform(const Model::CreateParentPlatformRequest &request)const;
			void createParentPlatformAsync(const Model::CreateParentPlatformRequest& request, const CreateParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParentPlatformOutcomeCallable createParentPlatformCallable(const Model::CreateParentPlatformRequest& request) const;
			CreateRenderingDeviceOutcome createRenderingDevice(const Model::CreateRenderingDeviceRequest &request)const;
			void createRenderingDeviceAsync(const Model::CreateRenderingDeviceRequest& request, const CreateRenderingDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRenderingDeviceOutcomeCallable createRenderingDeviceCallable(const Model::CreateRenderingDeviceRequest& request) const;
			CreateStreamSnapshotOutcome createStreamSnapshot(const Model::CreateStreamSnapshotRequest &request)const;
			void createStreamSnapshotAsync(const Model::CreateStreamSnapshotRequest& request, const CreateStreamSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStreamSnapshotOutcomeCallable createStreamSnapshotCallable(const Model::CreateStreamSnapshotRequest& request) const;
			CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
			void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
			DeleteBucketOutcome deleteBucket(const Model::DeleteBucketRequest &request)const;
			void deleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBucketOutcomeCallable deleteBucketCallable(const Model::DeleteBucketRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			DeleteDirectoryOutcome deleteDirectory(const Model::DeleteDirectoryRequest &request)const;
			void deleteDirectoryAsync(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDirectoryOutcomeCallable deleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteParentPlatformOutcome deleteParentPlatform(const Model::DeleteParentPlatformRequest &request)const;
			void deleteParentPlatformAsync(const Model::DeleteParentPlatformRequest& request, const DeleteParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParentPlatformOutcomeCallable deleteParentPlatformCallable(const Model::DeleteParentPlatformRequest& request) const;
			DeletePresetOutcome deletePreset(const Model::DeletePresetRequest &request)const;
			void deletePresetAsync(const Model::DeletePresetRequest& request, const DeletePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePresetOutcomeCallable deletePresetCallable(const Model::DeletePresetRequest& request) const;
			DeleteRenderingDeviceInternetPortsOutcome deleteRenderingDeviceInternetPorts(const Model::DeleteRenderingDeviceInternetPortsRequest &request)const;
			void deleteRenderingDeviceInternetPortsAsync(const Model::DeleteRenderingDeviceInternetPortsRequest& request, const DeleteRenderingDeviceInternetPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRenderingDeviceInternetPortsOutcomeCallable deleteRenderingDeviceInternetPortsCallable(const Model::DeleteRenderingDeviceInternetPortsRequest& request) const;
			DeleteRenderingDevicesOutcome deleteRenderingDevices(const Model::DeleteRenderingDevicesRequest &request)const;
			void deleteRenderingDevicesAsync(const Model::DeleteRenderingDevicesRequest& request, const DeleteRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRenderingDevicesOutcomeCallable deleteRenderingDevicesCallable(const Model::DeleteRenderingDevicesRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteVsPullStreamInfoConfigOutcome deleteVsPullStreamInfoConfig(const Model::DeleteVsPullStreamInfoConfigRequest &request)const;
			void deleteVsPullStreamInfoConfigAsync(const Model::DeleteVsPullStreamInfoConfigRequest& request, const DeleteVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVsPullStreamInfoConfigOutcomeCallable deleteVsPullStreamInfoConfigCallable(const Model::DeleteVsPullStreamInfoConfigRequest& request) const;
			DeleteVsStreamsNotifyUrlConfigOutcome deleteVsStreamsNotifyUrlConfig(const Model::DeleteVsStreamsNotifyUrlConfigRequest &request)const;
			void deleteVsStreamsNotifyUrlConfigAsync(const Model::DeleteVsStreamsNotifyUrlConfigRequest& request, const DeleteVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVsStreamsNotifyUrlConfigOutcomeCallable deleteVsStreamsNotifyUrlConfigCallable(const Model::DeleteVsStreamsNotifyUrlConfigRequest& request) const;
			DescribeAccountStatOutcome describeAccountStat(const Model::DescribeAccountStatRequest &request)const;
			void describeAccountStatAsync(const Model::DescribeAccountStatRequest& request, const DescribeAccountStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountStatOutcomeCallable describeAccountStatCallable(const Model::DescribeAccountStatRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			DescribeClusterDevicesOutcome describeClusterDevices(const Model::DescribeClusterDevicesRequest &request)const;
			void describeClusterDevicesAsync(const Model::DescribeClusterDevicesRequest& request, const DescribeClusterDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDevicesOutcomeCallable describeClusterDevicesCallable(const Model::DescribeClusterDevicesRequest& request) const;
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			DescribeDeviceOutcome describeDevice(const Model::DescribeDeviceRequest &request)const;
			void describeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceOutcomeCallable describeDeviceCallable(const Model::DescribeDeviceRequest& request) const;
			DescribeDeviceChannelsOutcome describeDeviceChannels(const Model::DescribeDeviceChannelsRequest &request)const;
			void describeDeviceChannelsAsync(const Model::DescribeDeviceChannelsRequest& request, const DescribeDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceChannelsOutcomeCallable describeDeviceChannelsCallable(const Model::DescribeDeviceChannelsRequest& request) const;
			DescribeDeviceGatewayOutcome describeDeviceGateway(const Model::DescribeDeviceGatewayRequest &request)const;
			void describeDeviceGatewayAsync(const Model::DescribeDeviceGatewayRequest& request, const DescribeDeviceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceGatewayOutcomeCallable describeDeviceGatewayCallable(const Model::DescribeDeviceGatewayRequest& request) const;
			DescribeDeviceURLOutcome describeDeviceURL(const Model::DescribeDeviceURLRequest &request)const;
			void describeDeviceURLAsync(const Model::DescribeDeviceURLRequest& request, const DescribeDeviceURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceURLOutcomeCallable describeDeviceURLCallable(const Model::DescribeDeviceURLRequest& request) const;
			DescribeDevicesOutcome describeDevices(const Model::DescribeDevicesRequest &request)const;
			void describeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDevicesOutcomeCallable describeDevicesCallable(const Model::DescribeDevicesRequest& request) const;
			DescribeDirectoriesOutcome describeDirectories(const Model::DescribeDirectoriesRequest &request)const;
			void describeDirectoriesAsync(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDirectoriesOutcomeCallable describeDirectoriesCallable(const Model::DescribeDirectoriesRequest& request) const;
			DescribeDirectoryOutcome describeDirectory(const Model::DescribeDirectoryRequest &request)const;
			void describeDirectoryAsync(const Model::DescribeDirectoryRequest& request, const DescribeDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDirectoryOutcomeCallable describeDirectoryCallable(const Model::DescribeDirectoryRequest& request) const;
			DescribeGroupOutcome describeGroup(const Model::DescribeGroupRequest &request)const;
			void describeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupOutcomeCallable describeGroupCallable(const Model::DescribeGroupRequest& request) const;
			DescribeGroupsOutcome describeGroups(const Model::DescribeGroupsRequest &request)const;
			void describeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupsOutcomeCallable describeGroupsCallable(const Model::DescribeGroupsRequest& request) const;
			DescribeNodeDevicesInfoOutcome describeNodeDevicesInfo(const Model::DescribeNodeDevicesInfoRequest &request)const;
			void describeNodeDevicesInfoAsync(const Model::DescribeNodeDevicesInfoRequest& request, const DescribeNodeDevicesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeDevicesInfoOutcomeCallable describeNodeDevicesInfoCallable(const Model::DescribeNodeDevicesInfoRequest& request) const;
			DescribeParentPlatformOutcome describeParentPlatform(const Model::DescribeParentPlatformRequest &request)const;
			void describeParentPlatformAsync(const Model::DescribeParentPlatformRequest& request, const DescribeParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParentPlatformOutcomeCallable describeParentPlatformCallable(const Model::DescribeParentPlatformRequest& request) const;
			DescribeParentPlatformDevicesOutcome describeParentPlatformDevices(const Model::DescribeParentPlatformDevicesRequest &request)const;
			void describeParentPlatformDevicesAsync(const Model::DescribeParentPlatformDevicesRequest& request, const DescribeParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParentPlatformDevicesOutcomeCallable describeParentPlatformDevicesCallable(const Model::DescribeParentPlatformDevicesRequest& request) const;
			DescribeParentPlatformsOutcome describeParentPlatforms(const Model::DescribeParentPlatformsRequest &request)const;
			void describeParentPlatformsAsync(const Model::DescribeParentPlatformsRequest& request, const DescribeParentPlatformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParentPlatformsOutcomeCallable describeParentPlatformsCallable(const Model::DescribeParentPlatformsRequest& request) const;
			DescribePresetsOutcome describePresets(const Model::DescribePresetsRequest &request)const;
			void describePresetsAsync(const Model::DescribePresetsRequest& request, const DescribePresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePresetsOutcomeCallable describePresetsCallable(const Model::DescribePresetsRequest& request) const;
			DescribePurchasedDeviceOutcome describePurchasedDevice(const Model::DescribePurchasedDeviceRequest &request)const;
			void describePurchasedDeviceAsync(const Model::DescribePurchasedDeviceRequest& request, const DescribePurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePurchasedDeviceOutcomeCallable describePurchasedDeviceCallable(const Model::DescribePurchasedDeviceRequest& request) const;
			DescribePurchasedDevicesOutcome describePurchasedDevices(const Model::DescribePurchasedDevicesRequest &request)const;
			void describePurchasedDevicesAsync(const Model::DescribePurchasedDevicesRequest& request, const DescribePurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePurchasedDevicesOutcomeCallable describePurchasedDevicesCallable(const Model::DescribePurchasedDevicesRequest& request) const;
			DescribeRecordsOutcome describeRecords(const Model::DescribeRecordsRequest &request)const;
			void describeRecordsAsync(const Model::DescribeRecordsRequest& request, const DescribeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordsOutcomeCallable describeRecordsCallable(const Model::DescribeRecordsRequest& request) const;
			DescribeRenderingDevicesOutcome describeRenderingDevices(const Model::DescribeRenderingDevicesRequest &request)const;
			void describeRenderingDevicesAsync(const Model::DescribeRenderingDevicesRequest& request, const DescribeRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenderingDevicesOutcomeCallable describeRenderingDevicesCallable(const Model::DescribeRenderingDevicesRequest& request) const;
			DescribeStreamOutcome describeStream(const Model::DescribeStreamRequest &request)const;
			void describeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamOutcomeCallable describeStreamCallable(const Model::DescribeStreamRequest& request) const;
			DescribeStreamURLOutcome describeStreamURL(const Model::DescribeStreamURLRequest &request)const;
			void describeStreamURLAsync(const Model::DescribeStreamURLRequest& request, const DescribeStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamURLOutcomeCallable describeStreamURLCallable(const Model::DescribeStreamURLRequest& request) const;
			DescribeStreamVodListOutcome describeStreamVodList(const Model::DescribeStreamVodListRequest &request)const;
			void describeStreamVodListAsync(const Model::DescribeStreamVodListRequest& request, const DescribeStreamVodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamVodListOutcomeCallable describeStreamVodListCallable(const Model::DescribeStreamVodListRequest& request) const;
			DescribeStreamsOutcome describeStreams(const Model::DescribeStreamsRequest &request)const;
			void describeStreamsAsync(const Model::DescribeStreamsRequest& request, const DescribeStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamsOutcomeCallable describeStreamsCallable(const Model::DescribeStreamsRequest& request) const;
			DescribeTemplateOutcome describeTemplate(const Model::DescribeTemplateRequest &request)const;
			void describeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplateOutcomeCallable describeTemplateCallable(const Model::DescribeTemplateRequest& request) const;
			DescribeTemplatesOutcome describeTemplates(const Model::DescribeTemplatesRequest &request)const;
			void describeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplatesOutcomeCallable describeTemplatesCallable(const Model::DescribeTemplatesRequest& request) const;
			DescribeVodStreamURLOutcome describeVodStreamURL(const Model::DescribeVodStreamURLRequest &request)const;
			void describeVodStreamURLAsync(const Model::DescribeVodStreamURLRequest& request, const DescribeVodStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVodStreamURLOutcomeCallable describeVodStreamURLCallable(const Model::DescribeVodStreamURLRequest& request) const;
			DescribeVsCertificateDetailOutcome describeVsCertificateDetail(const Model::DescribeVsCertificateDetailRequest &request)const;
			void describeVsCertificateDetailAsync(const Model::DescribeVsCertificateDetailRequest& request, const DescribeVsCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsCertificateDetailOutcomeCallable describeVsCertificateDetailCallable(const Model::DescribeVsCertificateDetailRequest& request) const;
			DescribeVsCertificateListOutcome describeVsCertificateList(const Model::DescribeVsCertificateListRequest &request)const;
			void describeVsCertificateListAsync(const Model::DescribeVsCertificateListRequest& request, const DescribeVsCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsCertificateListOutcomeCallable describeVsCertificateListCallable(const Model::DescribeVsCertificateListRequest& request) const;
			DescribeVsDomainBpsDataOutcome describeVsDomainBpsData(const Model::DescribeVsDomainBpsDataRequest &request)const;
			void describeVsDomainBpsDataAsync(const Model::DescribeVsDomainBpsDataRequest& request, const DescribeVsDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainBpsDataOutcomeCallable describeVsDomainBpsDataCallable(const Model::DescribeVsDomainBpsDataRequest& request) const;
			DescribeVsDomainCertificateInfoOutcome describeVsDomainCertificateInfo(const Model::DescribeVsDomainCertificateInfoRequest &request)const;
			void describeVsDomainCertificateInfoAsync(const Model::DescribeVsDomainCertificateInfoRequest& request, const DescribeVsDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainCertificateInfoOutcomeCallable describeVsDomainCertificateInfoCallable(const Model::DescribeVsDomainCertificateInfoRequest& request) const;
			DescribeVsDomainConfigsOutcome describeVsDomainConfigs(const Model::DescribeVsDomainConfigsRequest &request)const;
			void describeVsDomainConfigsAsync(const Model::DescribeVsDomainConfigsRequest& request, const DescribeVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainConfigsOutcomeCallable describeVsDomainConfigsCallable(const Model::DescribeVsDomainConfigsRequest& request) const;
			DescribeVsDomainDetailOutcome describeVsDomainDetail(const Model::DescribeVsDomainDetailRequest &request)const;
			void describeVsDomainDetailAsync(const Model::DescribeVsDomainDetailRequest& request, const DescribeVsDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainDetailOutcomeCallable describeVsDomainDetailCallable(const Model::DescribeVsDomainDetailRequest& request) const;
			DescribeVsDomainPvDataOutcome describeVsDomainPvData(const Model::DescribeVsDomainPvDataRequest &request)const;
			void describeVsDomainPvDataAsync(const Model::DescribeVsDomainPvDataRequest& request, const DescribeVsDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainPvDataOutcomeCallable describeVsDomainPvDataCallable(const Model::DescribeVsDomainPvDataRequest& request) const;
			DescribeVsDomainPvUvDataOutcome describeVsDomainPvUvData(const Model::DescribeVsDomainPvUvDataRequest &request)const;
			void describeVsDomainPvUvDataAsync(const Model::DescribeVsDomainPvUvDataRequest& request, const DescribeVsDomainPvUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainPvUvDataOutcomeCallable describeVsDomainPvUvDataCallable(const Model::DescribeVsDomainPvUvDataRequest& request) const;
			DescribeVsDomainRecordDataOutcome describeVsDomainRecordData(const Model::DescribeVsDomainRecordDataRequest &request)const;
			void describeVsDomainRecordDataAsync(const Model::DescribeVsDomainRecordDataRequest& request, const DescribeVsDomainRecordDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainRecordDataOutcomeCallable describeVsDomainRecordDataCallable(const Model::DescribeVsDomainRecordDataRequest& request) const;
			DescribeVsDomainRegionDataOutcome describeVsDomainRegionData(const Model::DescribeVsDomainRegionDataRequest &request)const;
			void describeVsDomainRegionDataAsync(const Model::DescribeVsDomainRegionDataRequest& request, const DescribeVsDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainRegionDataOutcomeCallable describeVsDomainRegionDataCallable(const Model::DescribeVsDomainRegionDataRequest& request) const;
			DescribeVsDomainReqBpsDataOutcome describeVsDomainReqBpsData(const Model::DescribeVsDomainReqBpsDataRequest &request)const;
			void describeVsDomainReqBpsDataAsync(const Model::DescribeVsDomainReqBpsDataRequest& request, const DescribeVsDomainReqBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainReqBpsDataOutcomeCallable describeVsDomainReqBpsDataCallable(const Model::DescribeVsDomainReqBpsDataRequest& request) const;
			DescribeVsDomainReqTrafficDataOutcome describeVsDomainReqTrafficData(const Model::DescribeVsDomainReqTrafficDataRequest &request)const;
			void describeVsDomainReqTrafficDataAsync(const Model::DescribeVsDomainReqTrafficDataRequest& request, const DescribeVsDomainReqTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainReqTrafficDataOutcomeCallable describeVsDomainReqTrafficDataCallable(const Model::DescribeVsDomainReqTrafficDataRequest& request) const;
			DescribeVsDomainSnapshotDataOutcome describeVsDomainSnapshotData(const Model::DescribeVsDomainSnapshotDataRequest &request)const;
			void describeVsDomainSnapshotDataAsync(const Model::DescribeVsDomainSnapshotDataRequest& request, const DescribeVsDomainSnapshotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainSnapshotDataOutcomeCallable describeVsDomainSnapshotDataCallable(const Model::DescribeVsDomainSnapshotDataRequest& request) const;
			DescribeVsDomainTrafficDataOutcome describeVsDomainTrafficData(const Model::DescribeVsDomainTrafficDataRequest &request)const;
			void describeVsDomainTrafficDataAsync(const Model::DescribeVsDomainTrafficDataRequest& request, const DescribeVsDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainTrafficDataOutcomeCallable describeVsDomainTrafficDataCallable(const Model::DescribeVsDomainTrafficDataRequest& request) const;
			DescribeVsDomainUvDataOutcome describeVsDomainUvData(const Model::DescribeVsDomainUvDataRequest &request)const;
			void describeVsDomainUvDataAsync(const Model::DescribeVsDomainUvDataRequest& request, const DescribeVsDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsDomainUvDataOutcomeCallable describeVsDomainUvDataCallable(const Model::DescribeVsDomainUvDataRequest& request) const;
			DescribeVsPullStreamInfoConfigOutcome describeVsPullStreamInfoConfig(const Model::DescribeVsPullStreamInfoConfigRequest &request)const;
			void describeVsPullStreamInfoConfigAsync(const Model::DescribeVsPullStreamInfoConfigRequest& request, const DescribeVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsPullStreamInfoConfigOutcomeCallable describeVsPullStreamInfoConfigCallable(const Model::DescribeVsPullStreamInfoConfigRequest& request) const;
			DescribeVsStorageTrafficUsageDataOutcome describeVsStorageTrafficUsageData(const Model::DescribeVsStorageTrafficUsageDataRequest &request)const;
			void describeVsStorageTrafficUsageDataAsync(const Model::DescribeVsStorageTrafficUsageDataRequest& request, const DescribeVsStorageTrafficUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsStorageTrafficUsageDataOutcomeCallable describeVsStorageTrafficUsageDataCallable(const Model::DescribeVsStorageTrafficUsageDataRequest& request) const;
			DescribeVsStorageUsageDataOutcome describeVsStorageUsageData(const Model::DescribeVsStorageUsageDataRequest &request)const;
			void describeVsStorageUsageDataAsync(const Model::DescribeVsStorageUsageDataRequest& request, const DescribeVsStorageUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsStorageUsageDataOutcomeCallable describeVsStorageUsageDataCallable(const Model::DescribeVsStorageUsageDataRequest& request) const;
			DescribeVsStreamsNotifyUrlConfigOutcome describeVsStreamsNotifyUrlConfig(const Model::DescribeVsStreamsNotifyUrlConfigRequest &request)const;
			void describeVsStreamsNotifyUrlConfigAsync(const Model::DescribeVsStreamsNotifyUrlConfigRequest& request, const DescribeVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsStreamsNotifyUrlConfigOutcomeCallable describeVsStreamsNotifyUrlConfigCallable(const Model::DescribeVsStreamsNotifyUrlConfigRequest& request) const;
			DescribeVsStreamsOnlineListOutcome describeVsStreamsOnlineList(const Model::DescribeVsStreamsOnlineListRequest &request)const;
			void describeVsStreamsOnlineListAsync(const Model::DescribeVsStreamsOnlineListRequest& request, const DescribeVsStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsStreamsOnlineListOutcomeCallable describeVsStreamsOnlineListCallable(const Model::DescribeVsStreamsOnlineListRequest& request) const;
			DescribeVsStreamsPublishListOutcome describeVsStreamsPublishList(const Model::DescribeVsStreamsPublishListRequest &request)const;
			void describeVsStreamsPublishListAsync(const Model::DescribeVsStreamsPublishListRequest& request, const DescribeVsStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsStreamsPublishListOutcomeCallable describeVsStreamsPublishListCallable(const Model::DescribeVsStreamsPublishListRequest& request) const;
			DescribeVsTopDomainsByFlowOutcome describeVsTopDomainsByFlow(const Model::DescribeVsTopDomainsByFlowRequest &request)const;
			void describeVsTopDomainsByFlowAsync(const Model::DescribeVsTopDomainsByFlowRequest& request, const DescribeVsTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsTopDomainsByFlowOutcomeCallable describeVsTopDomainsByFlowCallable(const Model::DescribeVsTopDomainsByFlowRequest& request) const;
			DescribeVsUpPeakPublishStreamDataOutcome describeVsUpPeakPublishStreamData(const Model::DescribeVsUpPeakPublishStreamDataRequest &request)const;
			void describeVsUpPeakPublishStreamDataAsync(const Model::DescribeVsUpPeakPublishStreamDataRequest& request, const DescribeVsUpPeakPublishStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsUpPeakPublishStreamDataOutcomeCallable describeVsUpPeakPublishStreamDataCallable(const Model::DescribeVsUpPeakPublishStreamDataRequest& request) const;
			DescribeVsUserResourcePackageOutcome describeVsUserResourcePackage(const Model::DescribeVsUserResourcePackageRequest &request)const;
			void describeVsUserResourcePackageAsync(const Model::DescribeVsUserResourcePackageRequest& request, const DescribeVsUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVsUserResourcePackageOutcomeCallable describeVsUserResourcePackageCallable(const Model::DescribeVsUserResourcePackageRequest& request) const;
			ForbidVsStreamOutcome forbidVsStream(const Model::ForbidVsStreamRequest &request)const;
			void forbidVsStreamAsync(const Model::ForbidVsStreamRequest& request, const ForbidVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForbidVsStreamOutcomeCallable forbidVsStreamCallable(const Model::ForbidVsStreamRequest& request) const;
			GetBucketInfoOutcome getBucketInfo(const Model::GetBucketInfoRequest &request)const;
			void getBucketInfoAsync(const Model::GetBucketInfoRequest& request, const GetBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBucketInfoOutcomeCallable getBucketInfoCallable(const Model::GetBucketInfoRequest& request) const;
			GotoPresetOutcome gotoPreset(const Model::GotoPresetRequest &request)const;
			void gotoPresetAsync(const Model::GotoPresetRequest& request, const GotoPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GotoPresetOutcomeCallable gotoPresetCallable(const Model::GotoPresetRequest& request) const;
			ListBucketsOutcome listBuckets(const Model::ListBucketsRequest &request)const;
			void listBucketsAsync(const Model::ListBucketsRequest& request, const ListBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBucketsOutcomeCallable listBucketsCallable(const Model::ListBucketsRequest& request) const;
			ListDeviceChannelsOutcome listDeviceChannels(const Model::ListDeviceChannelsRequest &request)const;
			void listDeviceChannelsAsync(const Model::ListDeviceChannelsRequest& request, const ListDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceChannelsOutcomeCallable listDeviceChannelsCallable(const Model::ListDeviceChannelsRequest& request) const;
			ListDeviceRecordsOutcome listDeviceRecords(const Model::ListDeviceRecordsRequest &request)const;
			void listDeviceRecordsAsync(const Model::ListDeviceRecordsRequest& request, const ListDeviceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceRecordsOutcomeCallable listDeviceRecordsCallable(const Model::ListDeviceRecordsRequest& request) const;
			ListObjectsOutcome listObjects(const Model::ListObjectsRequest &request)const;
			void listObjectsAsync(const Model::ListObjectsRequest& request, const ListObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListObjectsOutcomeCallable listObjectsCallable(const Model::ListObjectsRequest& request) const;
			ModifyDeviceOutcome modifyDevice(const Model::ModifyDeviceRequest &request)const;
			void modifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceOutcomeCallable modifyDeviceCallable(const Model::ModifyDeviceRequest& request) const;
			ModifyDeviceAlarmOutcome modifyDeviceAlarm(const Model::ModifyDeviceAlarmRequest &request)const;
			void modifyDeviceAlarmAsync(const Model::ModifyDeviceAlarmRequest& request, const ModifyDeviceAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceAlarmOutcomeCallable modifyDeviceAlarmCallable(const Model::ModifyDeviceAlarmRequest& request) const;
			ModifyDeviceCaptureOutcome modifyDeviceCapture(const Model::ModifyDeviceCaptureRequest &request)const;
			void modifyDeviceCaptureAsync(const Model::ModifyDeviceCaptureRequest& request, const ModifyDeviceCaptureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceCaptureOutcomeCallable modifyDeviceCaptureCallable(const Model::ModifyDeviceCaptureRequest& request) const;
			ModifyDeviceChannelsOutcome modifyDeviceChannels(const Model::ModifyDeviceChannelsRequest &request)const;
			void modifyDeviceChannelsAsync(const Model::ModifyDeviceChannelsRequest& request, const ModifyDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceChannelsOutcomeCallable modifyDeviceChannelsCallable(const Model::ModifyDeviceChannelsRequest& request) const;
			ModifyDirectoryOutcome modifyDirectory(const Model::ModifyDirectoryRequest &request)const;
			void modifyDirectoryAsync(const Model::ModifyDirectoryRequest& request, const ModifyDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDirectoryOutcomeCallable modifyDirectoryCallable(const Model::ModifyDirectoryRequest& request) const;
			ModifyGroupOutcome modifyGroup(const Model::ModifyGroupRequest &request)const;
			void modifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupOutcomeCallable modifyGroupCallable(const Model::ModifyGroupRequest& request) const;
			ModifyParentPlatformOutcome modifyParentPlatform(const Model::ModifyParentPlatformRequest &request)const;
			void modifyParentPlatformAsync(const Model::ModifyParentPlatformRequest& request, const ModifyParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParentPlatformOutcomeCallable modifyParentPlatformCallable(const Model::ModifyParentPlatformRequest& request) const;
			ModifyTemplateOutcome modifyTemplate(const Model::ModifyTemplateRequest &request)const;
			void modifyTemplateAsync(const Model::ModifyTemplateRequest& request, const ModifyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTemplateOutcomeCallable modifyTemplateCallable(const Model::ModifyTemplateRequest& request) const;
			OpenVsServiceOutcome openVsService(const Model::OpenVsServiceRequest &request)const;
			void openVsServiceAsync(const Model::OpenVsServiceRequest& request, const OpenVsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenVsServiceOutcomeCallable openVsServiceCallable(const Model::OpenVsServiceRequest& request) const;
			OperateRenderingDevicesOutcome operateRenderingDevices(const Model::OperateRenderingDevicesRequest &request)const;
			void operateRenderingDevicesAsync(const Model::OperateRenderingDevicesRequest& request, const OperateRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateRenderingDevicesOutcomeCallable operateRenderingDevicesCallable(const Model::OperateRenderingDevicesRequest& request) const;
			PrepareUploadOutcome prepareUpload(const Model::PrepareUploadRequest &request)const;
			void prepareUploadAsync(const Model::PrepareUploadRequest& request, const PrepareUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrepareUploadOutcomeCallable prepareUploadCallable(const Model::PrepareUploadRequest& request) const;
			PutBucketOutcome putBucket(const Model::PutBucketRequest &request)const;
			void putBucketAsync(const Model::PutBucketRequest& request, const PutBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutBucketOutcomeCallable putBucketCallable(const Model::PutBucketRequest& request) const;
			ResetRenderingDevicesOutcome resetRenderingDevices(const Model::ResetRenderingDevicesRequest &request)const;
			void resetRenderingDevicesAsync(const Model::ResetRenderingDevicesRequest& request, const ResetRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetRenderingDevicesOutcomeCallable resetRenderingDevicesCallable(const Model::ResetRenderingDevicesRequest& request) const;
			ResumeVsStreamOutcome resumeVsStream(const Model::ResumeVsStreamRequest &request)const;
			void resumeVsStreamAsync(const Model::ResumeVsStreamRequest& request, const ResumeVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeVsStreamOutcomeCallable resumeVsStreamCallable(const Model::ResumeVsStreamRequest& request) const;
			SetPresetOutcome setPreset(const Model::SetPresetRequest &request)const;
			void setPresetAsync(const Model::SetPresetRequest& request, const SetPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPresetOutcomeCallable setPresetCallable(const Model::SetPresetRequest& request) const;
			SetVsDomainCertificateOutcome setVsDomainCertificate(const Model::SetVsDomainCertificateRequest &request)const;
			void setVsDomainCertificateAsync(const Model::SetVsDomainCertificateRequest& request, const SetVsDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVsDomainCertificateOutcomeCallable setVsDomainCertificateCallable(const Model::SetVsDomainCertificateRequest& request) const;
			SetVsStreamsNotifyUrlConfigOutcome setVsStreamsNotifyUrlConfig(const Model::SetVsStreamsNotifyUrlConfigRequest &request)const;
			void setVsStreamsNotifyUrlConfigAsync(const Model::SetVsStreamsNotifyUrlConfigRequest& request, const SetVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVsStreamsNotifyUrlConfigOutcomeCallable setVsStreamsNotifyUrlConfigCallable(const Model::SetVsStreamsNotifyUrlConfigRequest& request) const;
			StartDeviceOutcome startDevice(const Model::StartDeviceRequest &request)const;
			void startDeviceAsync(const Model::StartDeviceRequest& request, const StartDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDeviceOutcomeCallable startDeviceCallable(const Model::StartDeviceRequest& request) const;
			StartParentPlatformOutcome startParentPlatform(const Model::StartParentPlatformRequest &request)const;
			void startParentPlatformAsync(const Model::StartParentPlatformRequest& request, const StartParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartParentPlatformOutcomeCallable startParentPlatformCallable(const Model::StartParentPlatformRequest& request) const;
			StartRecordStreamOutcome startRecordStream(const Model::StartRecordStreamRequest &request)const;
			void startRecordStreamAsync(const Model::StartRecordStreamRequest& request, const StartRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRecordStreamOutcomeCallable startRecordStreamCallable(const Model::StartRecordStreamRequest& request) const;
			StartStreamOutcome startStream(const Model::StartStreamRequest &request)const;
			void startStreamAsync(const Model::StartStreamRequest& request, const StartStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartStreamOutcomeCallable startStreamCallable(const Model::StartStreamRequest& request) const;
			StartTransferStreamOutcome startTransferStream(const Model::StartTransferStreamRequest &request)const;
			void startTransferStreamAsync(const Model::StartTransferStreamRequest& request, const StartTransferStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTransferStreamOutcomeCallable startTransferStreamCallable(const Model::StartTransferStreamRequest& request) const;
			StopAdjustOutcome stopAdjust(const Model::StopAdjustRequest &request)const;
			void stopAdjustAsync(const Model::StopAdjustRequest& request, const StopAdjustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopAdjustOutcomeCallable stopAdjustCallable(const Model::StopAdjustRequest& request) const;
			StopDeviceOutcome stopDevice(const Model::StopDeviceRequest &request)const;
			void stopDeviceAsync(const Model::StopDeviceRequest& request, const StopDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDeviceOutcomeCallable stopDeviceCallable(const Model::StopDeviceRequest& request) const;
			StopMoveOutcome stopMove(const Model::StopMoveRequest &request)const;
			void stopMoveAsync(const Model::StopMoveRequest& request, const StopMoveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMoveOutcomeCallable stopMoveCallable(const Model::StopMoveRequest& request) const;
			StopRecordStreamOutcome stopRecordStream(const Model::StopRecordStreamRequest &request)const;
			void stopRecordStreamAsync(const Model::StopRecordStreamRequest& request, const StopRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRecordStreamOutcomeCallable stopRecordStreamCallable(const Model::StopRecordStreamRequest& request) const;
			StopStreamOutcome stopStream(const Model::StopStreamRequest &request)const;
			void stopStreamAsync(const Model::StopStreamRequest& request, const StopStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopStreamOutcomeCallable stopStreamCallable(const Model::StopStreamRequest& request) const;
			StopTransferStreamOutcome stopTransferStream(const Model::StopTransferStreamRequest &request)const;
			void stopTransferStreamAsync(const Model::StopTransferStreamRequest& request, const StopTransferStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTransferStreamOutcomeCallable stopTransferStreamCallable(const Model::StopTransferStreamRequest& request) const;
			SyncCatalogsOutcome syncCatalogs(const Model::SyncCatalogsRequest &request)const;
			void syncCatalogsAsync(const Model::SyncCatalogsRequest& request, const SyncCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncCatalogsOutcomeCallable syncCatalogsCallable(const Model::SyncCatalogsRequest& request) const;
			SyncDeviceChannelsOutcome syncDeviceChannels(const Model::SyncDeviceChannelsRequest &request)const;
			void syncDeviceChannelsAsync(const Model::SyncDeviceChannelsRequest& request, const SyncDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDeviceChannelsOutcomeCallable syncDeviceChannelsCallable(const Model::SyncDeviceChannelsRequest& request) const;
			UnbindDirectoryOutcome unbindDirectory(const Model::UnbindDirectoryRequest &request)const;
			void unbindDirectoryAsync(const Model::UnbindDirectoryRequest& request, const UnbindDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindDirectoryOutcomeCallable unbindDirectoryCallable(const Model::UnbindDirectoryRequest& request) const;
			UnbindParentPlatformDeviceOutcome unbindParentPlatformDevice(const Model::UnbindParentPlatformDeviceRequest &request)const;
			void unbindParentPlatformDeviceAsync(const Model::UnbindParentPlatformDeviceRequest& request, const UnbindParentPlatformDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindParentPlatformDeviceOutcomeCallable unbindParentPlatformDeviceCallable(const Model::UnbindParentPlatformDeviceRequest& request) const;
			UnbindPurchasedDeviceOutcome unbindPurchasedDevice(const Model::UnbindPurchasedDeviceRequest &request)const;
			void unbindPurchasedDeviceAsync(const Model::UnbindPurchasedDeviceRequest& request, const UnbindPurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindPurchasedDeviceOutcomeCallable unbindPurchasedDeviceCallable(const Model::UnbindPurchasedDeviceRequest& request) const;
			UnbindTemplateOutcome unbindTemplate(const Model::UnbindTemplateRequest &request)const;
			void unbindTemplateAsync(const Model::UnbindTemplateRequest& request, const UnbindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindTemplateOutcomeCallable unbindTemplateCallable(const Model::UnbindTemplateRequest& request) const;
			UnlockDeviceOutcome unlockDevice(const Model::UnlockDeviceRequest &request)const;
			void unlockDeviceAsync(const Model::UnlockDeviceRequest& request, const UnlockDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockDeviceOutcomeCallable unlockDeviceCallable(const Model::UnlockDeviceRequest& request) const;
			UpdateBucketInfoOutcome updateBucketInfo(const Model::UpdateBucketInfoRequest &request)const;
			void updateBucketInfoAsync(const Model::UpdateBucketInfoRequest& request, const UpdateBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBucketInfoOutcomeCallable updateBucketInfoCallable(const Model::UpdateBucketInfoRequest& request) const;
			UpdateClusterOutcome updateCluster(const Model::UpdateClusterRequest &request)const;
			void updateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterOutcomeCallable updateClusterCallable(const Model::UpdateClusterRequest& request) const;
			UpdateRenderingDeviceSpecOutcome updateRenderingDeviceSpec(const Model::UpdateRenderingDeviceSpecRequest &request)const;
			void updateRenderingDeviceSpecAsync(const Model::UpdateRenderingDeviceSpecRequest& request, const UpdateRenderingDeviceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRenderingDeviceSpecOutcomeCallable updateRenderingDeviceSpecCallable(const Model::UpdateRenderingDeviceSpecRequest& request) const;
			UpdateVsPullStreamInfoConfigOutcome updateVsPullStreamInfoConfig(const Model::UpdateVsPullStreamInfoConfigRequest &request)const;
			void updateVsPullStreamInfoConfigAsync(const Model::UpdateVsPullStreamInfoConfigRequest& request, const UpdateVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVsPullStreamInfoConfigOutcomeCallable updateVsPullStreamInfoConfigCallable(const Model::UpdateVsPullStreamInfoConfigRequest& request) const;
			UploadDeviceRecordOutcome uploadDeviceRecord(const Model::UploadDeviceRecordRequest &request)const;
			void uploadDeviceRecordAsync(const Model::UploadDeviceRecordRequest& request, const UploadDeviceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDeviceRecordOutcomeCallable uploadDeviceRecordCallable(const Model::UploadDeviceRecordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VS_VSCLIENT_H_
