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

#ifndef ALIBABACLOUD_CDN_CDNCLIENT_H_
#define ALIBABACLOUD_CDN_CDNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CdnExport.h"
#include "model/DescribeCdnServiceRequest.h"
#include "model/DescribeCdnServiceResult.h"
#include "model/CreateLiveStreamRecordIndexFilesRequest.h"
#include "model/CreateLiveStreamRecordIndexFilesResult.h"
#include "model/DescribeCdnDomainDetailRequest.h"
#include "model/DescribeCdnDomainDetailResult.h"
#include "model/SetWafConfigRequest.h"
#include "model/SetWafConfigResult.h"
#include "model/DescribeLiveStreamsOnlineListRequest.h"
#include "model/DescribeLiveStreamsOnlineListResult.h"
#include "model/DescribeLiveStreamTranscodeInfoRequest.h"
#include "model/DescribeLiveStreamTranscodeInfoResult.h"
#include "model/SetVideoSeekConfigRequest.h"
#include "model/SetVideoSeekConfigResult.h"
#include "model/DescribeCdnMonitorDataRequest.h"
#include "model/DescribeCdnMonitorDataResult.h"
#include "model/SetL2OssKeyConfigRequest.h"
#include "model/SetL2OssKeyConfigResult.h"
#include "model/DescribeDomainReqHitRateDataRequest.h"
#include "model/DescribeDomainReqHitRateDataResult.h"
#include "model/DescribeDomainUvDataRequest.h"
#include "model/DescribeDomainUvDataResult.h"
#include "model/StopMixStreamsServiceRequest.h"
#include "model/StopMixStreamsServiceResult.h"
#include "model/DeleteCdnDomainRequest.h"
#include "model/DeleteCdnDomainResult.h"
#include "model/SetFileTypeForceTtlCodeConfigRequest.h"
#include "model/SetFileTypeForceTtlCodeConfigResult.h"
#include "model/SetRemoveQueryStringConfigRequest.h"
#include "model/SetRemoveQueryStringConfigResult.h"
#include "model/DeleteLiveStreamTranscodeRequest.h"
#include "model/DeleteLiveStreamTranscodeResult.h"
#include "model/DescribeDomainUpstreamOfCenterRequest.h"
#include "model/DescribeDomainUpstreamOfCenterResult.h"
#include "model/StopCdnDomainRequest.h"
#include "model/StopCdnDomainResult.h"
#include "model/DescribeDomainsUsageByDayRequest.h"
#include "model/DescribeDomainsUsageByDayResult.h"
#include "model/DescribeTopDomainsByFlowRequest.h"
#include "model/DescribeTopDomainsByFlowResult.h"
#include "model/DescribeDomainAverageResponseTimeRequest.h"
#include "model/DescribeDomainAverageResponseTimeResult.h"
#include "model/DescribeLiveStreamBitRateDataRequest.h"
#include "model/DescribeLiveStreamBitRateDataResult.h"
#include "model/SetUserDomainBlackListRequest.h"
#include "model/SetUserDomainBlackListResult.h"
#include "model/SetLocationAccessRestrictionRequest.h"
#include "model/SetLocationAccessRestrictionResult.h"
#include "model/DescribeExtensiveDomainDataRequest.h"
#include "model/DescribeExtensiveDomainDataResult.h"
#include "model/ModifyCdnServiceRequest.h"
#include "model/ModifyCdnServiceResult.h"
#include "model/DescribeLiveStreamRecordIndexFileRequest.h"
#include "model/DescribeLiveStreamRecordIndexFileResult.h"
#include "model/DescribeLiveStreamTranscodeStreamNumRequest.h"
#include "model/DescribeLiveStreamTranscodeStreamNumResult.h"
#include "model/DeleteHttpHeaderConfigRequest.h"
#include "model/DeleteHttpHeaderConfigResult.h"
#include "model/DescribeDomainHitRateDataRequest.h"
#include "model/DescribeDomainHitRateDataResult.h"
#include "model/PushObjectCacheRequest.h"
#include "model/PushObjectCacheResult.h"
#include "model/DescribeLiveRecordConfigRequest.h"
#include "model/DescribeLiveRecordConfigResult.h"
#include "model/SetForceRedirectConfigRequest.h"
#include "model/SetForceRedirectConfigResult.h"
#include "model/SetErrorPageConfigRequest.h"
#include "model/SetErrorPageConfigResult.h"
#include "model/DescribeLiveStreamOnlineUserNumRequest.h"
#include "model/DescribeLiveStreamOnlineUserNumResult.h"
#include "model/SetRefererConfigRequest.h"
#include "model/SetRefererConfigResult.h"
#include "model/DescribeDomainSrcFlowDataRequest.h"
#include "model/DescribeDomainSrcFlowDataResult.h"
#include "model/DeleteLiveAppSnapshotConfigRequest.h"
#include "model/DeleteLiveAppSnapshotConfigResult.h"
#include "model/DescribeCdnTypesRequest.h"
#include "model/DescribeCdnTypesResult.h"
#include "model/SetOptimizeConfigRequest.h"
#include "model/SetOptimizeConfigResult.h"
#include "model/SetDynamicConfigRequest.h"
#include "model/SetDynamicConfigResult.h"
#include "model/SetReqAuthConfigRequest.h"
#include "model/SetReqAuthConfigResult.h"
#include "model/DescribeLiveStreamLimitInfoRequest.h"
#include "model/DescribeLiveStreamLimitInfoResult.h"
#include "model/DescribeLiveStreamNumberListRequest.h"
#include "model/DescribeLiveStreamNumberListResult.h"
#include "model/SetHttpErrorPageConfigRequest.h"
#include "model/SetHttpErrorPageConfigResult.h"
#include "model/SetPathForceTtlCodeConfigRequest.h"
#include "model/SetPathForceTtlCodeConfigResult.h"
#include "model/DescribeLiveStreamRelayPushBitRateRequest.h"
#include "model/DescribeLiveStreamRelayPushBitRateResult.h"
#include "model/StartMixStreamsServiceRequest.h"
#include "model/StartMixStreamsServiceResult.h"
#include "model/DescribeLivePullStreamConfigRequest.h"
#include "model/DescribeLivePullStreamConfigResult.h"
#include "model/SetLiveStreamsNotifyUrlConfigRequest.h"
#include "model/SetLiveStreamsNotifyUrlConfigResult.h"
#include "model/DescribeDomainPathDataRequest.h"
#include "model/DescribeDomainPathDataResult.h"
#include "model/DescribeCdnDomainLogsRequest.h"
#include "model/DescribeCdnDomainLogsResult.h"
#include "model/DescribeLiveAppRecordConfigRequest.h"
#include "model/DescribeLiveAppRecordConfigResult.h"
#include "model/DescribeDomainFlowDataRequest.h"
#include "model/DescribeDomainFlowDataResult.h"
#include "model/SetOssLogConfigRequest.h"
#include "model/SetOssLogConfigResult.h"
#include "model/DescribeLiveStreamRelayPushErrorsRequest.h"
#include "model/DescribeLiveStreamRelayPushErrorsResult.h"
#include "model/DescribeLiveStreamsBlockListRequest.h"
#include "model/DescribeLiveStreamsBlockListResult.h"
#include "model/AddLiveStreamTranscodeRequest.h"
#include "model/AddLiveStreamTranscodeResult.h"
#include "model/SetIgnoreQueryStringConfigRequest.h"
#include "model/SetIgnoreQueryStringConfigResult.h"
#include "model/AddLivePullStreamInfoRequest.h"
#include "model/AddLivePullStreamInfoResult.h"
#include "model/DescribeUserCustomerLabelsRequest.h"
#include "model/DescribeUserCustomerLabelsResult.h"
#include "model/BatchDescribeDomainBpsDataRequest.h"
#include "model/BatchDescribeDomainBpsDataResult.h"
#include "model/DescribeDomainTopReferVisitRequest.h"
#include "model/DescribeDomainTopReferVisitResult.h"
#include "model/DescribeLiveStreamBpsDataRequest.h"
#include "model/DescribeLiveStreamBpsDataResult.h"
#include "model/DescribeLiveStreamsControlHistoryRequest.h"
#include "model/DescribeLiveStreamsControlHistoryResult.h"
#include "model/OpenCdnServiceRequest.h"
#include "model/OpenCdnServiceResult.h"
#include "model/SetReqHeaderConfigRequest.h"
#include "model/SetReqHeaderConfigResult.h"
#include "model/DescribeDomainQoSRtRequest.h"
#include "model/DescribeDomainQoSRtResult.h"
#include "model/DescribeDomainRealTimeReqHitRateDataRequest.h"
#include "model/DescribeDomainRealTimeReqHitRateDataResult.h"
#include "model/DescribeLiveStreamFrameAndBitRateByDomainRequest.h"
#include "model/DescribeLiveStreamFrameAndBitRateByDomainResult.h"
#include "model/DescribeLiveStreamSnapshotInfoRequest.h"
#include "model/DescribeLiveStreamSnapshotInfoResult.h"
#include "model/SetIpBlackListConfigRequest.h"
#include "model/SetIpBlackListConfigResult.h"
#include "model/DescribeDomainSlowRatioRequest.h"
#include "model/DescribeDomainSlowRatioResult.h"
#include "model/DescribeDomainCCDataRequest.h"
#include "model/DescribeDomainCCDataResult.h"
#include "model/DescribeLiveStreamRelayPushDataRequest.h"
#include "model/DescribeLiveStreamRelayPushDataResult.h"
#include "model/SetIpAllowListConfigRequest.h"
#include "model/SetIpAllowListConfigResult.h"
#include "model/DescribeDomainRealTimeQpsDataRequest.h"
#include "model/DescribeDomainRealTimeQpsDataResult.h"
#include "model/RefreshObjectCachesRequest.h"
#include "model/RefreshObjectCachesResult.h"
#include "model/DescribeLiveStreamsFrameRateAndBitRateDataRequest.h"
#include "model/DescribeLiveStreamsFrameRateAndBitRateDataResult.h"
#include "model/DescribeOneMinuteDataRequest.h"
#include "model/DescribeOneMinuteDataResult.h"
#include "model/DescribeLiveStreamRecordContentRequest.h"
#include "model/DescribeLiveStreamRecordContentResult.h"
#include "model/AddCdnDomainRequest.h"
#include "model/AddCdnDomainResult.h"
#include "model/SetRangeConfigRequest.h"
#include "model/SetRangeConfigResult.h"
#include "model/DescribeLiveStreamRoomBitRateRequest.h"
#include "model/DescribeLiveStreamRoomBitRateResult.h"
#include "model/SetCcConfigRequest.h"
#include "model/SetCcConfigResult.h"
#include "model/DescribeUserDomainsRequest.h"
#include "model/DescribeUserDomainsResult.h"
#include "model/DescribeLiveSnapshotConfigRequest.h"
#include "model/DescribeLiveSnapshotConfigResult.h"
#include "model/DescribeRefreshTasksRequest.h"
#include "model/DescribeRefreshTasksResult.h"
#include "model/DescribeRefreshQuotaRequest.h"
#include "model/DescribeRefreshQuotaResult.h"
#include "model/AddLiveAppRecordConfigRequest.h"
#include "model/AddLiveAppRecordConfigResult.h"
#include "model/SetForwardSchemeConfigRequest.h"
#include "model/SetForwardSchemeConfigResult.h"
#include "model/DeleteLiveDomainMappingRequest.h"
#include "model/DeleteLiveDomainMappingResult.h"
#include "model/DescribeDomainBpsDataByTimeStampRequest.h"
#include "model/DescribeDomainBpsDataByTimeStampResult.h"
#include "model/SetSourceHostConfigRequest.h"
#include "model/SetSourceHostConfigResult.h"
#include "model/DescribeLiveStreamRoomUserNumberRequest.h"
#include "model/DescribeLiveStreamRoomUserNumberResult.h"
#include "model/DescribeUserConfigsRequest.h"
#include "model/DescribeUserConfigsResult.h"
#include "model/DescribeLiveStreamStreamStatusRequest.h"
#include "model/DescribeLiveStreamStreamStatusResult.h"
#include "model/DescribeLiveStreamRecordIndexFilesRequest.h"
#include "model/DescribeLiveStreamRecordIndexFilesResult.h"
#include "model/ModifyCdnDomainRequest.h"
#include "model/ModifyCdnDomainResult.h"
#include "model/DescribeDomainMonthBillingBpsDataRequest.h"
#include "model/DescribeDomainMonthBillingBpsDataResult.h"
#include "model/DescribeDomainOnlineUserNumberRequest.h"
#include "model/DescribeDomainOnlineUserNumberResult.h"
#include "model/DescribeLiveStreamFrameInfoRequest.h"
#include "model/DescribeLiveStreamFrameInfoResult.h"
#include "model/DescribeLiveStreamFrameLossRatioRequest.h"
#include "model/DescribeLiveStreamFrameLossRatioResult.h"
#include "model/ForbidLiveStreamRequest.h"
#include "model/ForbidLiveStreamResult.h"
#include "model/DescribeLiveStreamDomainAppInfoRequest.h"
#include "model/DescribeLiveStreamDomainAppInfoResult.h"
#include "model/DescribeDomainQpsDataRequest.h"
#include "model/DescribeDomainQpsDataResult.h"
#include "model/SetPageCompressConfigRequest.h"
#include "model/SetPageCompressConfigResult.h"
#include "model/DescribeL2VipsByDomainRequest.h"
#include "model/DescribeL2VipsByDomainResult.h"
#include "model/ModifyHttpHeaderConfigRequest.h"
#include "model/ModifyHttpHeaderConfigResult.h"
#include "model/SetDomainServerCertificateRequest.h"
#include "model/SetDomainServerCertificateResult.h"
#include "model/DescribeIpInfoRequest.h"
#include "model/DescribeIpInfoResult.h"
#include "model/DescribeDomainConfigsRequest.h"
#include "model/DescribeDomainConfigsResult.h"
#include "model/DescribeDomainsBySourceRequest.h"
#include "model/DescribeDomainsBySourceResult.h"
#include "model/UpdateLiveAppSnapshotConfigRequest.h"
#include "model/UpdateLiveAppSnapshotConfigResult.h"
#include "model/DescribeDomainPvDataRequest.h"
#include "model/DescribeDomainPvDataResult.h"
#include "model/SetRemoteReqAuthConfigRequest.h"
#include "model/SetRemoteReqAuthConfigResult.h"
#include "model/DescribeLiveStreamPushErrorsRequest.h"
#include "model/DescribeLiveStreamPushErrorsResult.h"
#include "model/AddLiveAppSnapshotConfigRequest.h"
#include "model/AddLiveAppSnapshotConfigResult.h"
#include "model/DescribeDomainISPDataRequest.h"
#include "model/DescribeDomainISPDataResult.h"
#include "model/ClearUserDomainBlackListRequest.h"
#include "model/ClearUserDomainBlackListResult.h"
#include "model/DescribeDomainFileSizeProportionDataRequest.h"
#include "model/DescribeDomainFileSizeProportionDataResult.h"
#include "model/DescribeLiveSpecificDomainMappingRequest.h"
#include "model/DescribeLiveSpecificDomainMappingResult.h"
#include "model/DescribeDomainRealTimeByteHitRateDataRequest.h"
#include "model/DescribeDomainRealTimeByteHitRateDataResult.h"
#include "model/AddLiveDomainMappingRequest.h"
#include "model/AddLiveDomainMappingResult.h"
#include "model/MigrateDomainToHttpsDeliveryRequest.h"
#include "model/MigrateDomainToHttpsDeliveryResult.h"
#include "model/DescribeDomainRealTimeDataRequest.h"
#include "model/DescribeDomainRealTimeDataResult.h"
#include "model/ResumeLiveStreamRequest.h"
#include "model/ResumeLiveStreamResult.h"
#include "model/GetUserDomainBlackListRequest.h"
#include "model/GetUserDomainBlackListResult.h"
#include "model/SetUserBlackListRequest.h"
#include "model/SetUserBlackListResult.h"
#include "model/DescribeDomainCCAttackInfoRequest.h"
#include "model/DescribeDomainCCAttackInfoResult.h"
#include "model/DescribeDomainRealTimeBpsDataRequest.h"
#include "model/DescribeDomainRealTimeBpsDataResult.h"
#include "model/DescribeLiveStreamsPublishListRequest.h"
#include "model/DescribeLiveStreamsPublishListResult.h"
#include "model/DeleteLivePullStreamInfoRequest.h"
#include "model/DeleteLivePullStreamInfoResult.h"
#include "model/DescribeDomainDownstreamBpsOfEdgeRequest.h"
#include "model/DescribeDomainDownstreamBpsOfEdgeResult.h"
#include "model/ClearUserBlackListRequest.h"
#include "model/ClearUserBlackListResult.h"
#include "model/DescribeDomainMax95BpsDataRequest.h"
#include "model/DescribeDomainMax95BpsDataResult.h"
#include "model/SetHttpsOptionConfigRequest.h"
#include "model/SetHttpsOptionConfigResult.h"
#include "model/SetWaitingRoomConfigRequest.h"
#include "model/SetWaitingRoomConfigResult.h"
#include "model/DescribeRangeDataByLocateAndIspServiceRequest.h"
#include "model/DescribeRangeDataByLocateAndIspServiceResult.h"
#include "model/DescribeLiveStreamOnlineBpsRequest.h"
#include "model/DescribeLiveStreamOnlineBpsResult.h"
#include "model/DescribeDomainRegionDataRequest.h"
#include "model/DescribeDomainRegionDataResult.h"
#include "model/DescribeDomainSrcBpsDataRequest.h"
#include "model/DescribeDomainSrcBpsDataResult.h"
#include "model/DescribeLiveStreamPushDataRequest.h"
#include "model/DescribeLiveStreamPushDataResult.h"
#include "model/DeleteLiveAppRecordConfigRequest.h"
#include "model/DeleteLiveAppRecordConfigResult.h"
#include "model/DescribeCdnRegionAndIspRequest.h"
#include "model/DescribeCdnRegionAndIspResult.h"
#include "model/SetHttpHeaderConfigRequest.h"
#include "model/SetHttpHeaderConfigResult.h"
#include "model/DescribeCdnDomainBaseDetailRequest.h"
#include "model/DescribeCdnDomainBaseDetailResult.h"
#include "model/SetUserAgentAcessRestrictionRequest.h"
#include "model/SetUserAgentAcessRestrictionResult.h"
#include "model/StartCdnDomainRequest.h"
#include "model/StartCdnDomainResult.h"
#include "model/DescribeUserVipsByDomainRequest.h"
#include "model/DescribeUserVipsByDomainResult.h"
#include "model/DescribeDomainUpstreamBpsOfEdgeRequest.h"
#include "model/DescribeDomainUpstreamBpsOfEdgeResult.h"
#include "model/DescribeLiveStreamOnlineUserNumByDomainRequest.h"
#include "model/DescribeLiveStreamOnlineUserNumByDomainResult.h"
#include "model/DescribeDomainHttpsDataRequest.h"
#include "model/DescribeDomainHttpsDataResult.h"
#include "model/DescribeLiveStreamHlsOnlineUserNumByDomainRequest.h"
#include "model/DescribeLiveStreamHlsOnlineUserNumByDomainResult.h"
#include "model/DescribeDomainHttpCodeDataRequest.h"
#include "model/DescribeDomainHttpCodeDataResult.h"


namespace AlibabaCloud
{
	namespace Cdn
	{
		class ALIBABACLOUD_CDN_EXPORT CdnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeCdnServiceResult> DescribeCdnServiceOutcome;			
			typedef std::future<DescribeCdnServiceOutcome> DescribeCdnServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnServiceRequest&, const DescribeCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveStreamRecordIndexFilesResult> CreateLiveStreamRecordIndexFilesOutcome;			
			typedef std::future<CreateLiveStreamRecordIndexFilesOutcome> CreateLiveStreamRecordIndexFilesOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::CreateLiveStreamRecordIndexFilesRequest&, const CreateLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainDetailResult> DescribeCdnDomainDetailOutcome;			
			typedef std::future<DescribeCdnDomainDetailOutcome> DescribeCdnDomainDetailOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainDetailRequest&, const DescribeCdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::SetWafConfigResult> SetWafConfigOutcome;			
			typedef std::future<SetWafConfigOutcome> SetWafConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetWafConfigRequest&, const SetWafConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetWafConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsOnlineListResult> DescribeLiveStreamsOnlineListOutcome;			
			typedef std::future<DescribeLiveStreamsOnlineListOutcome> DescribeLiveStreamsOnlineListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamsOnlineListRequest&, const DescribeLiveStreamsOnlineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsOnlineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeInfoResult> DescribeLiveStreamTranscodeInfoOutcome;			
			typedef std::future<DescribeLiveStreamTranscodeInfoOutcome> DescribeLiveStreamTranscodeInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamTranscodeInfoRequest&, const DescribeLiveStreamTranscodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeInfoAsyncHandler;
			typedef Outcome<Error, Model::SetVideoSeekConfigResult> SetVideoSeekConfigOutcome;			
			typedef std::future<SetVideoSeekConfigOutcome> SetVideoSeekConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetVideoSeekConfigRequest&, const SetVideoSeekConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoSeekConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnMonitorDataResult> DescribeCdnMonitorDataOutcome;			
			typedef std::future<DescribeCdnMonitorDataOutcome> DescribeCdnMonitorDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnMonitorDataRequest&, const DescribeCdnMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::SetL2OssKeyConfigResult> SetL2OssKeyConfigOutcome;			
			typedef std::future<SetL2OssKeyConfigOutcome> SetL2OssKeyConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetL2OssKeyConfigRequest&, const SetL2OssKeyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetL2OssKeyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainReqHitRateDataResult> DescribeDomainReqHitRateDataOutcome;			
			typedef std::future<DescribeDomainReqHitRateDataOutcome> DescribeDomainReqHitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainReqHitRateDataRequest&, const DescribeDomainReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUvDataResult> DescribeDomainUvDataOutcome;			
			typedef std::future<DescribeDomainUvDataOutcome> DescribeDomainUvDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUvDataRequest&, const DescribeDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::StopMixStreamsServiceResult> StopMixStreamsServiceOutcome;			
			typedef std::future<StopMixStreamsServiceOutcome> StopMixStreamsServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::StopMixStreamsServiceRequest&, const StopMixStreamsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMixStreamsServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnDomainResult> DeleteCdnDomainOutcome;			
			typedef std::future<DeleteCdnDomainOutcome> DeleteCdnDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteCdnDomainRequest&, const DeleteCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::SetFileTypeForceTtlCodeConfigResult> SetFileTypeForceTtlCodeConfigOutcome;			
			typedef std::future<SetFileTypeForceTtlCodeConfigOutcome> SetFileTypeForceTtlCodeConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetFileTypeForceTtlCodeConfigRequest&, const SetFileTypeForceTtlCodeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetFileTypeForceTtlCodeConfigAsyncHandler;
			typedef Outcome<Error, Model::SetRemoveQueryStringConfigResult> SetRemoveQueryStringConfigOutcome;			
			typedef std::future<SetRemoveQueryStringConfigOutcome> SetRemoveQueryStringConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetRemoveQueryStringConfigRequest&, const SetRemoveQueryStringConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRemoveQueryStringConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamTranscodeResult> DeleteLiveStreamTranscodeOutcome;			
			typedef std::future<DeleteLiveStreamTranscodeOutcome> DeleteLiveStreamTranscodeOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteLiveStreamTranscodeRequest&, const DeleteLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUpstreamOfCenterResult> DescribeDomainUpstreamOfCenterOutcome;			
			typedef std::future<DescribeDomainUpstreamOfCenterOutcome> DescribeDomainUpstreamOfCenterOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUpstreamOfCenterRequest&, const DescribeDomainUpstreamOfCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUpstreamOfCenterAsyncHandler;
			typedef Outcome<Error, Model::StopCdnDomainResult> StopCdnDomainOutcome;			
			typedef std::future<StopCdnDomainOutcome> StopCdnDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::StopCdnDomainRequest&, const StopCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsUsageByDayResult> DescribeDomainsUsageByDayOutcome;			
			typedef std::future<DescribeDomainsUsageByDayOutcome> DescribeDomainsUsageByDayOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsUsageByDayRequest&, const DescribeDomainsUsageByDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsUsageByDayAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopDomainsByFlowResult> DescribeTopDomainsByFlowOutcome;			
			typedef std::future<DescribeTopDomainsByFlowOutcome> DescribeTopDomainsByFlowOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeTopDomainsByFlowRequest&, const DescribeTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAverageResponseTimeResult> DescribeDomainAverageResponseTimeOutcome;			
			typedef std::future<DescribeDomainAverageResponseTimeOutcome> DescribeDomainAverageResponseTimeOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainAverageResponseTimeRequest&, const DescribeDomainAverageResponseTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAverageResponseTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamBitRateDataResult> DescribeLiveStreamBitRateDataOutcome;			
			typedef std::future<DescribeLiveStreamBitRateDataOutcome> DescribeLiveStreamBitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamBitRateDataRequest&, const DescribeLiveStreamBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::SetUserDomainBlackListResult> SetUserDomainBlackListOutcome;			
			typedef std::future<SetUserDomainBlackListOutcome> SetUserDomainBlackListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetUserDomainBlackListRequest&, const SetUserDomainBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserDomainBlackListAsyncHandler;
			typedef Outcome<Error, Model::SetLocationAccessRestrictionResult> SetLocationAccessRestrictionOutcome;			
			typedef std::future<SetLocationAccessRestrictionOutcome> SetLocationAccessRestrictionOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetLocationAccessRestrictionRequest&, const SetLocationAccessRestrictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLocationAccessRestrictionAsyncHandler;
			typedef Outcome<Error, Model::DescribeExtensiveDomainDataResult> DescribeExtensiveDomainDataOutcome;			
			typedef std::future<DescribeExtensiveDomainDataOutcome> DescribeExtensiveDomainDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeExtensiveDomainDataRequest&, const DescribeExtensiveDomainDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensiveDomainDataAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdnServiceResult> ModifyCdnServiceOutcome;			
			typedef std::future<ModifyCdnServiceOutcome> ModifyCdnServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ModifyCdnServiceRequest&, const ModifyCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFileResult> DescribeLiveStreamRecordIndexFileOutcome;			
			typedef std::future<DescribeLiveStreamRecordIndexFileOutcome> DescribeLiveStreamRecordIndexFileOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRecordIndexFileRequest&, const DescribeLiveStreamRecordIndexFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeStreamNumResult> DescribeLiveStreamTranscodeStreamNumOutcome;			
			typedef std::future<DescribeLiveStreamTranscodeStreamNumOutcome> DescribeLiveStreamTranscodeStreamNumOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamTranscodeStreamNumRequest&, const DescribeLiveStreamTranscodeStreamNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeStreamNumAsyncHandler;
			typedef Outcome<Error, Model::DeleteHttpHeaderConfigResult> DeleteHttpHeaderConfigOutcome;			
			typedef std::future<DeleteHttpHeaderConfigOutcome> DeleteHttpHeaderConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteHttpHeaderConfigRequest&, const DeleteHttpHeaderConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHttpHeaderConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHitRateDataResult> DescribeDomainHitRateDataOutcome;			
			typedef std::future<DescribeDomainHitRateDataOutcome> DescribeDomainHitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHitRateDataRequest&, const DescribeDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::PushObjectCacheResult> PushObjectCacheOutcome;			
			typedef std::future<PushObjectCacheOutcome> PushObjectCacheOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::PushObjectCacheRequest&, const PushObjectCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushObjectCacheAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordConfigResult> DescribeLiveRecordConfigOutcome;			
			typedef std::future<DescribeLiveRecordConfigOutcome> DescribeLiveRecordConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveRecordConfigRequest&, const DescribeLiveRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::SetForceRedirectConfigResult> SetForceRedirectConfigOutcome;			
			typedef std::future<SetForceRedirectConfigOutcome> SetForceRedirectConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetForceRedirectConfigRequest&, const SetForceRedirectConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetForceRedirectConfigAsyncHandler;
			typedef Outcome<Error, Model::SetErrorPageConfigResult> SetErrorPageConfigOutcome;			
			typedef std::future<SetErrorPageConfigOutcome> SetErrorPageConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetErrorPageConfigRequest&, const SetErrorPageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetErrorPageConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamOnlineUserNumResult> DescribeLiveStreamOnlineUserNumOutcome;			
			typedef std::future<DescribeLiveStreamOnlineUserNumOutcome> DescribeLiveStreamOnlineUserNumOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamOnlineUserNumRequest&, const DescribeLiveStreamOnlineUserNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineUserNumAsyncHandler;
			typedef Outcome<Error, Model::SetRefererConfigResult> SetRefererConfigOutcome;			
			typedef std::future<SetRefererConfigOutcome> SetRefererConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetRefererConfigRequest&, const SetRefererConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRefererConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcFlowDataResult> DescribeDomainSrcFlowDataOutcome;			
			typedef std::future<DescribeDomainSrcFlowDataOutcome> DescribeDomainSrcFlowDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcFlowDataRequest&, const DescribeDomainSrcFlowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcFlowDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppSnapshotConfigResult> DeleteLiveAppSnapshotConfigOutcome;			
			typedef std::future<DeleteLiveAppSnapshotConfigOutcome> DeleteLiveAppSnapshotConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteLiveAppSnapshotConfigRequest&, const DeleteLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnTypesResult> DescribeCdnTypesOutcome;			
			typedef std::future<DescribeCdnTypesOutcome> DescribeCdnTypesOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnTypesRequest&, const DescribeCdnTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnTypesAsyncHandler;
			typedef Outcome<Error, Model::SetOptimizeConfigResult> SetOptimizeConfigOutcome;			
			typedef std::future<SetOptimizeConfigOutcome> SetOptimizeConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetOptimizeConfigRequest&, const SetOptimizeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetOptimizeConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDynamicConfigResult> SetDynamicConfigOutcome;			
			typedef std::future<SetDynamicConfigOutcome> SetDynamicConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetDynamicConfigRequest&, const SetDynamicConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDynamicConfigAsyncHandler;
			typedef Outcome<Error, Model::SetReqAuthConfigResult> SetReqAuthConfigOutcome;			
			typedef std::future<SetReqAuthConfigOutcome> SetReqAuthConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetReqAuthConfigRequest&, const SetReqAuthConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetReqAuthConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamLimitInfoResult> DescribeLiveStreamLimitInfoOutcome;			
			typedef std::future<DescribeLiveStreamLimitInfoOutcome> DescribeLiveStreamLimitInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamLimitInfoRequest&, const DescribeLiveStreamLimitInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamLimitInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamNumberListResult> DescribeLiveStreamNumberListOutcome;			
			typedef std::future<DescribeLiveStreamNumberListOutcome> DescribeLiveStreamNumberListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamNumberListRequest&, const DescribeLiveStreamNumberListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamNumberListAsyncHandler;
			typedef Outcome<Error, Model::SetHttpErrorPageConfigResult> SetHttpErrorPageConfigOutcome;			
			typedef std::future<SetHttpErrorPageConfigOutcome> SetHttpErrorPageConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetHttpErrorPageConfigRequest&, const SetHttpErrorPageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetHttpErrorPageConfigAsyncHandler;
			typedef Outcome<Error, Model::SetPathForceTtlCodeConfigResult> SetPathForceTtlCodeConfigOutcome;			
			typedef std::future<SetPathForceTtlCodeConfigOutcome> SetPathForceTtlCodeConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetPathForceTtlCodeConfigRequest&, const SetPathForceTtlCodeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPathForceTtlCodeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRelayPushBitRateResult> DescribeLiveStreamRelayPushBitRateOutcome;			
			typedef std::future<DescribeLiveStreamRelayPushBitRateOutcome> DescribeLiveStreamRelayPushBitRateOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRelayPushBitRateRequest&, const DescribeLiveStreamRelayPushBitRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRelayPushBitRateAsyncHandler;
			typedef Outcome<Error, Model::StartMixStreamsServiceResult> StartMixStreamsServiceOutcome;			
			typedef std::future<StartMixStreamsServiceOutcome> StartMixStreamsServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::StartMixStreamsServiceRequest&, const StartMixStreamsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMixStreamsServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePullStreamConfigResult> DescribeLivePullStreamConfigOutcome;			
			typedef std::future<DescribeLivePullStreamConfigOutcome> DescribeLivePullStreamConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLivePullStreamConfigRequest&, const DescribeLivePullStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamsNotifyUrlConfigResult> SetLiveStreamsNotifyUrlConfigOutcome;			
			typedef std::future<SetLiveStreamsNotifyUrlConfigOutcome> SetLiveStreamsNotifyUrlConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetLiveStreamsNotifyUrlConfigRequest&, const SetLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainPathDataResult> DescribeDomainPathDataOutcome;			
			typedef std::future<DescribeDomainPathDataOutcome> DescribeDomainPathDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainPathDataRequest&, const DescribeDomainPathDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPathDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainLogsResult> DescribeCdnDomainLogsOutcome;			
			typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, const DescribeCdnDomainLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAppRecordConfigResult> DescribeLiveAppRecordConfigOutcome;			
			typedef std::future<DescribeLiveAppRecordConfigOutcome> DescribeLiveAppRecordConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveAppRecordConfigRequest&, const DescribeLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainFlowDataResult> DescribeDomainFlowDataOutcome;			
			typedef std::future<DescribeDomainFlowDataOutcome> DescribeDomainFlowDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainFlowDataRequest&, const DescribeDomainFlowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainFlowDataAsyncHandler;
			typedef Outcome<Error, Model::SetOssLogConfigResult> SetOssLogConfigOutcome;			
			typedef std::future<SetOssLogConfigOutcome> SetOssLogConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetOssLogConfigRequest&, const SetOssLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetOssLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRelayPushErrorsResult> DescribeLiveStreamRelayPushErrorsOutcome;			
			typedef std::future<DescribeLiveStreamRelayPushErrorsOutcome> DescribeLiveStreamRelayPushErrorsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRelayPushErrorsRequest&, const DescribeLiveStreamRelayPushErrorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRelayPushErrorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsBlockListResult> DescribeLiveStreamsBlockListOutcome;			
			typedef std::future<DescribeLiveStreamsBlockListOutcome> DescribeLiveStreamsBlockListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamsBlockListRequest&, const DescribeLiveStreamsBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsBlockListAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamTranscodeResult> AddLiveStreamTranscodeOutcome;			
			typedef std::future<AddLiveStreamTranscodeOutcome> AddLiveStreamTranscodeOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddLiveStreamTranscodeRequest&, const AddLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::SetIgnoreQueryStringConfigResult> SetIgnoreQueryStringConfigOutcome;			
			typedef std::future<SetIgnoreQueryStringConfigOutcome> SetIgnoreQueryStringConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetIgnoreQueryStringConfigRequest&, const SetIgnoreQueryStringConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIgnoreQueryStringConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLivePullStreamInfoResult> AddLivePullStreamInfoOutcome;			
			typedef std::future<AddLivePullStreamInfoOutcome> AddLivePullStreamInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddLivePullStreamInfoRequest&, const AddLivePullStreamInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLivePullStreamInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserCustomerLabelsResult> DescribeUserCustomerLabelsOutcome;			
			typedef std::future<DescribeUserCustomerLabelsOutcome> DescribeUserCustomerLabelsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeUserCustomerLabelsRequest&, const DescribeUserCustomerLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCustomerLabelsAsyncHandler;
			typedef Outcome<Error, Model::BatchDescribeDomainBpsDataResult> BatchDescribeDomainBpsDataOutcome;			
			typedef std::future<BatchDescribeDomainBpsDataOutcome> BatchDescribeDomainBpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::BatchDescribeDomainBpsDataRequest&, const BatchDescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTopReferVisitResult> DescribeDomainTopReferVisitOutcome;			
			typedef std::future<DescribeDomainTopReferVisitOutcome> DescribeDomainTopReferVisitOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainTopReferVisitRequest&, const DescribeDomainTopReferVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTopReferVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamBpsDataResult> DescribeLiveStreamBpsDataOutcome;			
			typedef std::future<DescribeLiveStreamBpsDataOutcome> DescribeLiveStreamBpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamBpsDataRequest&, const DescribeLiveStreamBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsControlHistoryResult> DescribeLiveStreamsControlHistoryOutcome;			
			typedef std::future<DescribeLiveStreamsControlHistoryOutcome> DescribeLiveStreamsControlHistoryOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamsControlHistoryRequest&, const DescribeLiveStreamsControlHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsControlHistoryAsyncHandler;
			typedef Outcome<Error, Model::OpenCdnServiceResult> OpenCdnServiceOutcome;			
			typedef std::future<OpenCdnServiceOutcome> OpenCdnServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::OpenCdnServiceRequest&, const OpenCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::SetReqHeaderConfigResult> SetReqHeaderConfigOutcome;			
			typedef std::future<SetReqHeaderConfigOutcome> SetReqHeaderConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetReqHeaderConfigRequest&, const SetReqHeaderConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetReqHeaderConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQoSRtResult> DescribeDomainQoSRtOutcome;			
			typedef std::future<DescribeDomainQoSRtOutcome> DescribeDomainQoSRtOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainQoSRtRequest&, const DescribeDomainQoSRtOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQoSRtAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeReqHitRateDataResult> DescribeDomainRealTimeReqHitRateDataOutcome;			
			typedef std::future<DescribeDomainRealTimeReqHitRateDataOutcome> DescribeDomainRealTimeReqHitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeReqHitRateDataRequest&, const DescribeDomainRealTimeReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamFrameAndBitRateByDomainResult> DescribeLiveStreamFrameAndBitRateByDomainOutcome;			
			typedef std::future<DescribeLiveStreamFrameAndBitRateByDomainOutcome> DescribeLiveStreamFrameAndBitRateByDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamFrameAndBitRateByDomainRequest&, const DescribeLiveStreamFrameAndBitRateByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamFrameAndBitRateByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamSnapshotInfoResult> DescribeLiveStreamSnapshotInfoOutcome;			
			typedef std::future<DescribeLiveStreamSnapshotInfoOutcome> DescribeLiveStreamSnapshotInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamSnapshotInfoRequest&, const DescribeLiveStreamSnapshotInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamSnapshotInfoAsyncHandler;
			typedef Outcome<Error, Model::SetIpBlackListConfigResult> SetIpBlackListConfigOutcome;			
			typedef std::future<SetIpBlackListConfigOutcome> SetIpBlackListConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetIpBlackListConfigRequest&, const SetIpBlackListConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIpBlackListConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSlowRatioResult> DescribeDomainSlowRatioOutcome;			
			typedef std::future<DescribeDomainSlowRatioOutcome> DescribeDomainSlowRatioOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSlowRatioRequest&, const DescribeDomainSlowRatioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSlowRatioAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCCDataResult> DescribeDomainCCDataOutcome;			
			typedef std::future<DescribeDomainCCDataOutcome> DescribeDomainCCDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainCCDataRequest&, const DescribeDomainCCDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCCDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRelayPushDataResult> DescribeLiveStreamRelayPushDataOutcome;			
			typedef std::future<DescribeLiveStreamRelayPushDataOutcome> DescribeLiveStreamRelayPushDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRelayPushDataRequest&, const DescribeLiveStreamRelayPushDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRelayPushDataAsyncHandler;
			typedef Outcome<Error, Model::SetIpAllowListConfigResult> SetIpAllowListConfigOutcome;			
			typedef std::future<SetIpAllowListConfigOutcome> SetIpAllowListConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetIpAllowListConfigRequest&, const SetIpAllowListConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIpAllowListConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeQpsDataResult> DescribeDomainRealTimeQpsDataOutcome;			
			typedef std::future<DescribeDomainRealTimeQpsDataOutcome> DescribeDomainRealTimeQpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeQpsDataRequest&, const DescribeDomainRealTimeQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeQpsDataAsyncHandler;
			typedef Outcome<Error, Model::RefreshObjectCachesResult> RefreshObjectCachesOutcome;			
			typedef std::future<RefreshObjectCachesOutcome> RefreshObjectCachesOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::RefreshObjectCachesRequest&, const RefreshObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsFrameRateAndBitRateDataResult> DescribeLiveStreamsFrameRateAndBitRateDataOutcome;			
			typedef std::future<DescribeLiveStreamsFrameRateAndBitRateDataOutcome> DescribeLiveStreamsFrameRateAndBitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamsFrameRateAndBitRateDataRequest&, const DescribeLiveStreamsFrameRateAndBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsFrameRateAndBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeOneMinuteDataResult> DescribeOneMinuteDataOutcome;			
			typedef std::future<DescribeOneMinuteDataOutcome> DescribeOneMinuteDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeOneMinuteDataRequest&, const DescribeOneMinuteDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOneMinuteDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordContentResult> DescribeLiveStreamRecordContentOutcome;			
			typedef std::future<DescribeLiveStreamRecordContentOutcome> DescribeLiveStreamRecordContentOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRecordContentRequest&, const DescribeLiveStreamRecordContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordContentAsyncHandler;
			typedef Outcome<Error, Model::AddCdnDomainResult> AddCdnDomainOutcome;			
			typedef std::future<AddCdnDomainOutcome> AddCdnDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddCdnDomainRequest&, const AddCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::SetRangeConfigResult> SetRangeConfigOutcome;			
			typedef std::future<SetRangeConfigOutcome> SetRangeConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetRangeConfigRequest&, const SetRangeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRangeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRoomBitRateResult> DescribeLiveStreamRoomBitRateOutcome;			
			typedef std::future<DescribeLiveStreamRoomBitRateOutcome> DescribeLiveStreamRoomBitRateOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRoomBitRateRequest&, const DescribeLiveStreamRoomBitRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRoomBitRateAsyncHandler;
			typedef Outcome<Error, Model::SetCcConfigResult> SetCcConfigOutcome;			
			typedef std::future<SetCcConfigOutcome> SetCcConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetCcConfigRequest&, const SetCcConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCcConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDomainsResult> DescribeUserDomainsOutcome;			
			typedef std::future<DescribeUserDomainsOutcome> DescribeUserDomainsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeUserDomainsRequest&, const DescribeUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotConfigResult> DescribeLiveSnapshotConfigOutcome;			
			typedef std::future<DescribeLiveSnapshotConfigOutcome> DescribeLiveSnapshotConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveSnapshotConfigRequest&, const DescribeLiveSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshTasksResult> DescribeRefreshTasksOutcome;			
			typedef std::future<DescribeRefreshTasksOutcome> DescribeRefreshTasksOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshTasksRequest&, const DescribeRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshQuotaResult> DescribeRefreshQuotaOutcome;			
			typedef std::future<DescribeRefreshQuotaOutcome> DescribeRefreshQuotaOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshQuotaRequest&, const DescribeRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppRecordConfigResult> AddLiveAppRecordConfigOutcome;			
			typedef std::future<AddLiveAppRecordConfigOutcome> AddLiveAppRecordConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddLiveAppRecordConfigRequest&, const AddLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::SetForwardSchemeConfigResult> SetForwardSchemeConfigOutcome;			
			typedef std::future<SetForwardSchemeConfigOutcome> SetForwardSchemeConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetForwardSchemeConfigRequest&, const SetForwardSchemeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetForwardSchemeConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainMappingResult> DeleteLiveDomainMappingOutcome;			
			typedef std::future<DeleteLiveDomainMappingOutcome> DeleteLiveDomainMappingOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteLiveDomainMappingRequest&, const DeleteLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataByTimeStampResult> DescribeDomainBpsDataByTimeStampOutcome;			
			typedef std::future<DescribeDomainBpsDataByTimeStampOutcome> DescribeDomainBpsDataByTimeStampOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataByTimeStampRequest&, const DescribeDomainBpsDataByTimeStampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataByTimeStampAsyncHandler;
			typedef Outcome<Error, Model::SetSourceHostConfigResult> SetSourceHostConfigOutcome;			
			typedef std::future<SetSourceHostConfigOutcome> SetSourceHostConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetSourceHostConfigRequest&, const SetSourceHostConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSourceHostConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRoomUserNumberResult> DescribeLiveStreamRoomUserNumberOutcome;			
			typedef std::future<DescribeLiveStreamRoomUserNumberOutcome> DescribeLiveStreamRoomUserNumberOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRoomUserNumberRequest&, const DescribeLiveStreamRoomUserNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRoomUserNumberAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserConfigsResult> DescribeUserConfigsOutcome;			
			typedef std::future<DescribeUserConfigsOutcome> DescribeUserConfigsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeUserConfigsRequest&, const DescribeUserConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamStreamStatusResult> DescribeLiveStreamStreamStatusOutcome;			
			typedef std::future<DescribeLiveStreamStreamStatusOutcome> DescribeLiveStreamStreamStatusOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamStreamStatusRequest&, const DescribeLiveStreamStreamStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStreamStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFilesResult> DescribeLiveStreamRecordIndexFilesOutcome;			
			typedef std::future<DescribeLiveStreamRecordIndexFilesOutcome> DescribeLiveStreamRecordIndexFilesOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamRecordIndexFilesRequest&, const DescribeLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdnDomainResult> ModifyCdnDomainOutcome;			
			typedef std::future<ModifyCdnDomainOutcome> ModifyCdnDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ModifyCdnDomainRequest&, const ModifyCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainMonthBillingBpsDataResult> DescribeDomainMonthBillingBpsDataOutcome;			
			typedef std::future<DescribeDomainMonthBillingBpsDataOutcome> DescribeDomainMonthBillingBpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainMonthBillingBpsDataRequest&, const DescribeDomainMonthBillingBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainMonthBillingBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainOnlineUserNumberResult> DescribeDomainOnlineUserNumberOutcome;			
			typedef std::future<DescribeDomainOnlineUserNumberOutcome> DescribeDomainOnlineUserNumberOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainOnlineUserNumberRequest&, const DescribeDomainOnlineUserNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainOnlineUserNumberAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamFrameInfoResult> DescribeLiveStreamFrameInfoOutcome;			
			typedef std::future<DescribeLiveStreamFrameInfoOutcome> DescribeLiveStreamFrameInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamFrameInfoRequest&, const DescribeLiveStreamFrameInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamFrameInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamFrameLossRatioResult> DescribeLiveStreamFrameLossRatioOutcome;			
			typedef std::future<DescribeLiveStreamFrameLossRatioOutcome> DescribeLiveStreamFrameLossRatioOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamFrameLossRatioRequest&, const DescribeLiveStreamFrameLossRatioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamFrameLossRatioAsyncHandler;
			typedef Outcome<Error, Model::ForbidLiveStreamResult> ForbidLiveStreamOutcome;			
			typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ForbidLiveStreamRequest&, const ForbidLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamDomainAppInfoResult> DescribeLiveStreamDomainAppInfoOutcome;			
			typedef std::future<DescribeLiveStreamDomainAppInfoOutcome> DescribeLiveStreamDomainAppInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamDomainAppInfoRequest&, const DescribeLiveStreamDomainAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamDomainAppInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsDataResult> DescribeDomainQpsDataOutcome;			
			typedef std::future<DescribeDomainQpsDataOutcome> DescribeDomainQpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainQpsDataRequest&, const DescribeDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::SetPageCompressConfigResult> SetPageCompressConfigOutcome;			
			typedef std::future<SetPageCompressConfigOutcome> SetPageCompressConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetPageCompressConfigRequest&, const SetPageCompressConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPageCompressConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeL2VipsByDomainResult> DescribeL2VipsByDomainOutcome;			
			typedef std::future<DescribeL2VipsByDomainOutcome> DescribeL2VipsByDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeL2VipsByDomainRequest&, const DescribeL2VipsByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL2VipsByDomainAsyncHandler;
			typedef Outcome<Error, Model::ModifyHttpHeaderConfigResult> ModifyHttpHeaderConfigOutcome;			
			typedef std::future<ModifyHttpHeaderConfigOutcome> ModifyHttpHeaderConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ModifyHttpHeaderConfigRequest&, const ModifyHttpHeaderConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHttpHeaderConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDomainServerCertificateResult> SetDomainServerCertificateOutcome;			
			typedef std::future<SetDomainServerCertificateOutcome> SetDomainServerCertificateOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetDomainServerCertificateRequest&, const SetDomainServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainServerCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpInfoResult> DescribeIpInfoOutcome;			
			typedef std::future<DescribeIpInfoOutcome> DescribeIpInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeIpInfoRequest&, const DescribeIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainConfigsResult> DescribeDomainConfigsOutcome;			
			typedef std::future<DescribeDomainConfigsOutcome> DescribeDomainConfigsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainConfigsRequest&, const DescribeDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsBySourceResult> DescribeDomainsBySourceOutcome;			
			typedef std::future<DescribeDomainsBySourceOutcome> DescribeDomainsBySourceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsBySourceRequest&, const DescribeDomainsBySourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsBySourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAppSnapshotConfigResult> UpdateLiveAppSnapshotConfigOutcome;			
			typedef std::future<UpdateLiveAppSnapshotConfigOutcome> UpdateLiveAppSnapshotConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::UpdateLiveAppSnapshotConfigRequest&, const UpdateLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainPvDataResult> DescribeDomainPvDataOutcome;			
			typedef std::future<DescribeDomainPvDataOutcome> DescribeDomainPvDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainPvDataRequest&, const DescribeDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::SetRemoteReqAuthConfigResult> SetRemoteReqAuthConfigOutcome;			
			typedef std::future<SetRemoteReqAuthConfigOutcome> SetRemoteReqAuthConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetRemoteReqAuthConfigRequest&, const SetRemoteReqAuthConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRemoteReqAuthConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamPushErrorsResult> DescribeLiveStreamPushErrorsOutcome;			
			typedef std::future<DescribeLiveStreamPushErrorsOutcome> DescribeLiveStreamPushErrorsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamPushErrorsRequest&, const DescribeLiveStreamPushErrorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushErrorsAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppSnapshotConfigResult> AddLiveAppSnapshotConfigOutcome;			
			typedef std::future<AddLiveAppSnapshotConfigOutcome> AddLiveAppSnapshotConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddLiveAppSnapshotConfigRequest&, const AddLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainISPDataResult> DescribeDomainISPDataOutcome;			
			typedef std::future<DescribeDomainISPDataOutcome> DescribeDomainISPDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainISPDataRequest&, const DescribeDomainISPDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainISPDataAsyncHandler;
			typedef Outcome<Error, Model::ClearUserDomainBlackListResult> ClearUserDomainBlackListOutcome;			
			typedef std::future<ClearUserDomainBlackListOutcome> ClearUserDomainBlackListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ClearUserDomainBlackListRequest&, const ClearUserDomainBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearUserDomainBlackListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainFileSizeProportionDataResult> DescribeDomainFileSizeProportionDataOutcome;			
			typedef std::future<DescribeDomainFileSizeProportionDataOutcome> DescribeDomainFileSizeProportionDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainFileSizeProportionDataRequest&, const DescribeDomainFileSizeProportionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainFileSizeProportionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSpecificDomainMappingResult> DescribeLiveSpecificDomainMappingOutcome;			
			typedef std::future<DescribeLiveSpecificDomainMappingOutcome> DescribeLiveSpecificDomainMappingOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveSpecificDomainMappingRequest&, const DescribeLiveSpecificDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSpecificDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeByteHitRateDataResult> DescribeDomainRealTimeByteHitRateDataOutcome;			
			typedef std::future<DescribeDomainRealTimeByteHitRateDataOutcome> DescribeDomainRealTimeByteHitRateDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeByteHitRateDataRequest&, const DescribeDomainRealTimeByteHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeByteHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainMappingResult> AddLiveDomainMappingOutcome;			
			typedef std::future<AddLiveDomainMappingOutcome> AddLiveDomainMappingOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::AddLiveDomainMappingRequest&, const AddLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::MigrateDomainToHttpsDeliveryResult> MigrateDomainToHttpsDeliveryOutcome;			
			typedef std::future<MigrateDomainToHttpsDeliveryOutcome> MigrateDomainToHttpsDeliveryOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::MigrateDomainToHttpsDeliveryRequest&, const MigrateDomainToHttpsDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDomainToHttpsDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeDataResult> DescribeDomainRealTimeDataOutcome;			
			typedef std::future<DescribeDomainRealTimeDataOutcome> DescribeDomainRealTimeDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeDataRequest&, const DescribeDomainRealTimeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeDataAsyncHandler;
			typedef Outcome<Error, Model::ResumeLiveStreamResult> ResumeLiveStreamOutcome;			
			typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ResumeLiveStreamRequest&, const ResumeLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::GetUserDomainBlackListResult> GetUserDomainBlackListOutcome;			
			typedef std::future<GetUserDomainBlackListOutcome> GetUserDomainBlackListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::GetUserDomainBlackListRequest&, const GetUserDomainBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserDomainBlackListAsyncHandler;
			typedef Outcome<Error, Model::SetUserBlackListResult> SetUserBlackListOutcome;			
			typedef std::future<SetUserBlackListOutcome> SetUserBlackListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetUserBlackListRequest&, const SetUserBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserBlackListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCCAttackInfoResult> DescribeDomainCCAttackInfoOutcome;			
			typedef std::future<DescribeDomainCCAttackInfoOutcome> DescribeDomainCCAttackInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainCCAttackInfoRequest&, const DescribeDomainCCAttackInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCCAttackInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeBpsDataResult> DescribeDomainRealTimeBpsDataOutcome;			
			typedef std::future<DescribeDomainRealTimeBpsDataOutcome> DescribeDomainRealTimeBpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeBpsDataRequest&, const DescribeDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsPublishListResult> DescribeLiveStreamsPublishListOutcome;			
			typedef std::future<DescribeLiveStreamsPublishListOutcome> DescribeLiveStreamsPublishListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamsPublishListRequest&, const DescribeLiveStreamsPublishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsPublishListAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePullStreamInfoResult> DeleteLivePullStreamInfoOutcome;			
			typedef std::future<DeleteLivePullStreamInfoOutcome> DeleteLivePullStreamInfoOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteLivePullStreamInfoRequest&, const DeleteLivePullStreamInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePullStreamInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainDownstreamBpsOfEdgeResult> DescribeDomainDownstreamBpsOfEdgeOutcome;			
			typedef std::future<DescribeDomainDownstreamBpsOfEdgeOutcome> DescribeDomainDownstreamBpsOfEdgeOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainDownstreamBpsOfEdgeRequest&, const DescribeDomainDownstreamBpsOfEdgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDownstreamBpsOfEdgeAsyncHandler;
			typedef Outcome<Error, Model::ClearUserBlackListResult> ClearUserBlackListOutcome;			
			typedef std::future<ClearUserBlackListOutcome> ClearUserBlackListOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::ClearUserBlackListRequest&, const ClearUserBlackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearUserBlackListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainMax95BpsDataResult> DescribeDomainMax95BpsDataOutcome;			
			typedef std::future<DescribeDomainMax95BpsDataOutcome> DescribeDomainMax95BpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainMax95BpsDataRequest&, const DescribeDomainMax95BpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainMax95BpsDataAsyncHandler;
			typedef Outcome<Error, Model::SetHttpsOptionConfigResult> SetHttpsOptionConfigOutcome;			
			typedef std::future<SetHttpsOptionConfigOutcome> SetHttpsOptionConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetHttpsOptionConfigRequest&, const SetHttpsOptionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetHttpsOptionConfigAsyncHandler;
			typedef Outcome<Error, Model::SetWaitingRoomConfigResult> SetWaitingRoomConfigOutcome;			
			typedef std::future<SetWaitingRoomConfigOutcome> SetWaitingRoomConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetWaitingRoomConfigRequest&, const SetWaitingRoomConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetWaitingRoomConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRangeDataByLocateAndIspServiceResult> DescribeRangeDataByLocateAndIspServiceOutcome;			
			typedef std::future<DescribeRangeDataByLocateAndIspServiceOutcome> DescribeRangeDataByLocateAndIspServiceOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeRangeDataByLocateAndIspServiceRequest&, const DescribeRangeDataByLocateAndIspServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRangeDataByLocateAndIspServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamOnlineBpsResult> DescribeLiveStreamOnlineBpsOutcome;			
			typedef std::future<DescribeLiveStreamOnlineBpsOutcome> DescribeLiveStreamOnlineBpsOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamOnlineBpsRequest&, const DescribeLiveStreamOnlineBpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineBpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRegionDataResult> DescribeDomainRegionDataOutcome;			
			typedef std::future<DescribeDomainRegionDataOutcome> DescribeDomainRegionDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRegionDataRequest&, const DescribeDomainRegionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRegionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcBpsDataResult> DescribeDomainSrcBpsDataOutcome;			
			typedef std::future<DescribeDomainSrcBpsDataOutcome> DescribeDomainSrcBpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcBpsDataRequest&, const DescribeDomainSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamPushDataResult> DescribeLiveStreamPushDataOutcome;			
			typedef std::future<DescribeLiveStreamPushDataOutcome> DescribeLiveStreamPushDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamPushDataRequest&, const DescribeLiveStreamPushDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppRecordConfigResult> DeleteLiveAppRecordConfigOutcome;			
			typedef std::future<DeleteLiveAppRecordConfigOutcome> DeleteLiveAppRecordConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DeleteLiveAppRecordConfigRequest&, const DeleteLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnRegionAndIspResult> DescribeCdnRegionAndIspOutcome;			
			typedef std::future<DescribeCdnRegionAndIspOutcome> DescribeCdnRegionAndIspOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnRegionAndIspRequest&, const DescribeCdnRegionAndIspOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnRegionAndIspAsyncHandler;
			typedef Outcome<Error, Model::SetHttpHeaderConfigResult> SetHttpHeaderConfigOutcome;			
			typedef std::future<SetHttpHeaderConfigOutcome> SetHttpHeaderConfigOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetHttpHeaderConfigRequest&, const SetHttpHeaderConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetHttpHeaderConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainBaseDetailResult> DescribeCdnDomainBaseDetailOutcome;			
			typedef std::future<DescribeCdnDomainBaseDetailOutcome> DescribeCdnDomainBaseDetailOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainBaseDetailRequest&, const DescribeCdnDomainBaseDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainBaseDetailAsyncHandler;
			typedef Outcome<Error, Model::SetUserAgentAcessRestrictionResult> SetUserAgentAcessRestrictionOutcome;			
			typedef std::future<SetUserAgentAcessRestrictionOutcome> SetUserAgentAcessRestrictionOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::SetUserAgentAcessRestrictionRequest&, const SetUserAgentAcessRestrictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserAgentAcessRestrictionAsyncHandler;
			typedef Outcome<Error, Model::StartCdnDomainResult> StartCdnDomainOutcome;			
			typedef std::future<StartCdnDomainOutcome> StartCdnDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::StartCdnDomainRequest&, const StartCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserVipsByDomainResult> DescribeUserVipsByDomainOutcome;			
			typedef std::future<DescribeUserVipsByDomainOutcome> DescribeUserVipsByDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeUserVipsByDomainRequest&, const DescribeUserVipsByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserVipsByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUpstreamBpsOfEdgeResult> DescribeDomainUpstreamBpsOfEdgeOutcome;			
			typedef std::future<DescribeDomainUpstreamBpsOfEdgeOutcome> DescribeDomainUpstreamBpsOfEdgeOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUpstreamBpsOfEdgeRequest&, const DescribeDomainUpstreamBpsOfEdgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUpstreamBpsOfEdgeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamOnlineUserNumByDomainResult> DescribeLiveStreamOnlineUserNumByDomainOutcome;			
			typedef std::future<DescribeLiveStreamOnlineUserNumByDomainOutcome> DescribeLiveStreamOnlineUserNumByDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamOnlineUserNumByDomainRequest&, const DescribeLiveStreamOnlineUserNumByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineUserNumByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHttpsDataResult> DescribeDomainHttpsDataOutcome;			
			typedef std::future<DescribeDomainHttpsDataOutcome> DescribeDomainHttpsDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHttpsDataRequest&, const DescribeDomainHttpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHttpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamHlsOnlineUserNumByDomainResult> DescribeLiveStreamHlsOnlineUserNumByDomainOutcome;			
			typedef std::future<DescribeLiveStreamHlsOnlineUserNumByDomainOutcome> DescribeLiveStreamHlsOnlineUserNumByDomainOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeLiveStreamHlsOnlineUserNumByDomainRequest&, const DescribeLiveStreamHlsOnlineUserNumByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamHlsOnlineUserNumByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHttpCodeDataResult> DescribeDomainHttpCodeDataOutcome;			
			typedef std::future<DescribeDomainHttpCodeDataOutcome> DescribeDomainHttpCodeDataOutcomeCallable;			
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHttpCodeDataRequest&, const DescribeDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHttpCodeDataAsyncHandler;


			CdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CdnClient();

            DescribeCdnServiceOutcome describeCdnService(const Model::DescribeCdnServiceRequest &request)const;
            void describeCdnServiceAsync(const Model::DescribeCdnServiceRequest& request, const DescribeCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnServiceOutcomeCallable describeCdnServiceCallable(const Model::DescribeCdnServiceRequest& request) const;
            CreateLiveStreamRecordIndexFilesOutcome createLiveStreamRecordIndexFiles(const Model::CreateLiveStreamRecordIndexFilesRequest &request)const;
            void createLiveStreamRecordIndexFilesAsync(const Model::CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateLiveStreamRecordIndexFilesOutcomeCallable createLiveStreamRecordIndexFilesCallable(const Model::CreateLiveStreamRecordIndexFilesRequest& request) const;
            DescribeCdnDomainDetailOutcome describeCdnDomainDetail(const Model::DescribeCdnDomainDetailRequest &request)const;
            void describeCdnDomainDetailAsync(const Model::DescribeCdnDomainDetailRequest& request, const DescribeCdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnDomainDetailOutcomeCallable describeCdnDomainDetailCallable(const Model::DescribeCdnDomainDetailRequest& request) const;
            SetWafConfigOutcome setWafConfig(const Model::SetWafConfigRequest &request)const;
            void setWafConfigAsync(const Model::SetWafConfigRequest& request, const SetWafConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetWafConfigOutcomeCallable setWafConfigCallable(const Model::SetWafConfigRequest& request) const;
            DescribeLiveStreamsOnlineListOutcome describeLiveStreamsOnlineList(const Model::DescribeLiveStreamsOnlineListRequest &request)const;
            void describeLiveStreamsOnlineListAsync(const Model::DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamsOnlineListOutcomeCallable describeLiveStreamsOnlineListCallable(const Model::DescribeLiveStreamsOnlineListRequest& request) const;
            DescribeLiveStreamTranscodeInfoOutcome describeLiveStreamTranscodeInfo(const Model::DescribeLiveStreamTranscodeInfoRequest &request)const;
            void describeLiveStreamTranscodeInfoAsync(const Model::DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamTranscodeInfoOutcomeCallable describeLiveStreamTranscodeInfoCallable(const Model::DescribeLiveStreamTranscodeInfoRequest& request) const;
            SetVideoSeekConfigOutcome setVideoSeekConfig(const Model::SetVideoSeekConfigRequest &request)const;
            void setVideoSeekConfigAsync(const Model::SetVideoSeekConfigRequest& request, const SetVideoSeekConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetVideoSeekConfigOutcomeCallable setVideoSeekConfigCallable(const Model::SetVideoSeekConfigRequest& request) const;
            DescribeCdnMonitorDataOutcome describeCdnMonitorData(const Model::DescribeCdnMonitorDataRequest &request)const;
            void describeCdnMonitorDataAsync(const Model::DescribeCdnMonitorDataRequest& request, const DescribeCdnMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnMonitorDataOutcomeCallable describeCdnMonitorDataCallable(const Model::DescribeCdnMonitorDataRequest& request) const;
            SetL2OssKeyConfigOutcome setL2OssKeyConfig(const Model::SetL2OssKeyConfigRequest &request)const;
            void setL2OssKeyConfigAsync(const Model::SetL2OssKeyConfigRequest& request, const SetL2OssKeyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetL2OssKeyConfigOutcomeCallable setL2OssKeyConfigCallable(const Model::SetL2OssKeyConfigRequest& request) const;
            DescribeDomainReqHitRateDataOutcome describeDomainReqHitRateData(const Model::DescribeDomainReqHitRateDataRequest &request)const;
            void describeDomainReqHitRateDataAsync(const Model::DescribeDomainReqHitRateDataRequest& request, const DescribeDomainReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainReqHitRateDataOutcomeCallable describeDomainReqHitRateDataCallable(const Model::DescribeDomainReqHitRateDataRequest& request) const;
            DescribeDomainUvDataOutcome describeDomainUvData(const Model::DescribeDomainUvDataRequest &request)const;
            void describeDomainUvDataAsync(const Model::DescribeDomainUvDataRequest& request, const DescribeDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainUvDataOutcomeCallable describeDomainUvDataCallable(const Model::DescribeDomainUvDataRequest& request) const;
            StopMixStreamsServiceOutcome stopMixStreamsService(const Model::StopMixStreamsServiceRequest &request)const;
            void stopMixStreamsServiceAsync(const Model::StopMixStreamsServiceRequest& request, const StopMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StopMixStreamsServiceOutcomeCallable stopMixStreamsServiceCallable(const Model::StopMixStreamsServiceRequest& request) const;
            DeleteCdnDomainOutcome deleteCdnDomain(const Model::DeleteCdnDomainRequest &request)const;
            void deleteCdnDomainAsync(const Model::DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteCdnDomainOutcomeCallable deleteCdnDomainCallable(const Model::DeleteCdnDomainRequest& request) const;
            SetFileTypeForceTtlCodeConfigOutcome setFileTypeForceTtlCodeConfig(const Model::SetFileTypeForceTtlCodeConfigRequest &request)const;
            void setFileTypeForceTtlCodeConfigAsync(const Model::SetFileTypeForceTtlCodeConfigRequest& request, const SetFileTypeForceTtlCodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetFileTypeForceTtlCodeConfigOutcomeCallable setFileTypeForceTtlCodeConfigCallable(const Model::SetFileTypeForceTtlCodeConfigRequest& request) const;
            SetRemoveQueryStringConfigOutcome setRemoveQueryStringConfig(const Model::SetRemoveQueryStringConfigRequest &request)const;
            void setRemoveQueryStringConfigAsync(const Model::SetRemoveQueryStringConfigRequest& request, const SetRemoveQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetRemoveQueryStringConfigOutcomeCallable setRemoveQueryStringConfigCallable(const Model::SetRemoveQueryStringConfigRequest& request) const;
            DeleteLiveStreamTranscodeOutcome deleteLiveStreamTranscode(const Model::DeleteLiveStreamTranscodeRequest &request)const;
            void deleteLiveStreamTranscodeAsync(const Model::DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteLiveStreamTranscodeOutcomeCallable deleteLiveStreamTranscodeCallable(const Model::DeleteLiveStreamTranscodeRequest& request) const;
            DescribeDomainUpstreamOfCenterOutcome describeDomainUpstreamOfCenter(const Model::DescribeDomainUpstreamOfCenterRequest &request)const;
            void describeDomainUpstreamOfCenterAsync(const Model::DescribeDomainUpstreamOfCenterRequest& request, const DescribeDomainUpstreamOfCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainUpstreamOfCenterOutcomeCallable describeDomainUpstreamOfCenterCallable(const Model::DescribeDomainUpstreamOfCenterRequest& request) const;
            StopCdnDomainOutcome stopCdnDomain(const Model::StopCdnDomainRequest &request)const;
            void stopCdnDomainAsync(const Model::StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StopCdnDomainOutcomeCallable stopCdnDomainCallable(const Model::StopCdnDomainRequest& request) const;
            DescribeDomainsUsageByDayOutcome describeDomainsUsageByDay(const Model::DescribeDomainsUsageByDayRequest &request)const;
            void describeDomainsUsageByDayAsync(const Model::DescribeDomainsUsageByDayRequest& request, const DescribeDomainsUsageByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainsUsageByDayOutcomeCallable describeDomainsUsageByDayCallable(const Model::DescribeDomainsUsageByDayRequest& request) const;
            DescribeTopDomainsByFlowOutcome describeTopDomainsByFlow(const Model::DescribeTopDomainsByFlowRequest &request)const;
            void describeTopDomainsByFlowAsync(const Model::DescribeTopDomainsByFlowRequest& request, const DescribeTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTopDomainsByFlowOutcomeCallable describeTopDomainsByFlowCallable(const Model::DescribeTopDomainsByFlowRequest& request) const;
            DescribeDomainAverageResponseTimeOutcome describeDomainAverageResponseTime(const Model::DescribeDomainAverageResponseTimeRequest &request)const;
            void describeDomainAverageResponseTimeAsync(const Model::DescribeDomainAverageResponseTimeRequest& request, const DescribeDomainAverageResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainAverageResponseTimeOutcomeCallable describeDomainAverageResponseTimeCallable(const Model::DescribeDomainAverageResponseTimeRequest& request) const;
            DescribeLiveStreamBitRateDataOutcome describeLiveStreamBitRateData(const Model::DescribeLiveStreamBitRateDataRequest &request)const;
            void describeLiveStreamBitRateDataAsync(const Model::DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamBitRateDataOutcomeCallable describeLiveStreamBitRateDataCallable(const Model::DescribeLiveStreamBitRateDataRequest& request) const;
            SetUserDomainBlackListOutcome setUserDomainBlackList(const Model::SetUserDomainBlackListRequest &request)const;
            void setUserDomainBlackListAsync(const Model::SetUserDomainBlackListRequest& request, const SetUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetUserDomainBlackListOutcomeCallable setUserDomainBlackListCallable(const Model::SetUserDomainBlackListRequest& request) const;
            SetLocationAccessRestrictionOutcome setLocationAccessRestriction(const Model::SetLocationAccessRestrictionRequest &request)const;
            void setLocationAccessRestrictionAsync(const Model::SetLocationAccessRestrictionRequest& request, const SetLocationAccessRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetLocationAccessRestrictionOutcomeCallable setLocationAccessRestrictionCallable(const Model::SetLocationAccessRestrictionRequest& request) const;
            DescribeExtensiveDomainDataOutcome describeExtensiveDomainData(const Model::DescribeExtensiveDomainDataRequest &request)const;
            void describeExtensiveDomainDataAsync(const Model::DescribeExtensiveDomainDataRequest& request, const DescribeExtensiveDomainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeExtensiveDomainDataOutcomeCallable describeExtensiveDomainDataCallable(const Model::DescribeExtensiveDomainDataRequest& request) const;
            ModifyCdnServiceOutcome modifyCdnService(const Model::ModifyCdnServiceRequest &request)const;
            void modifyCdnServiceAsync(const Model::ModifyCdnServiceRequest& request, const ModifyCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCdnServiceOutcomeCallable modifyCdnServiceCallable(const Model::ModifyCdnServiceRequest& request) const;
            DescribeLiveStreamRecordIndexFileOutcome describeLiveStreamRecordIndexFile(const Model::DescribeLiveStreamRecordIndexFileRequest &request)const;
            void describeLiveStreamRecordIndexFileAsync(const Model::DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRecordIndexFileOutcomeCallable describeLiveStreamRecordIndexFileCallable(const Model::DescribeLiveStreamRecordIndexFileRequest& request) const;
            DescribeLiveStreamTranscodeStreamNumOutcome describeLiveStreamTranscodeStreamNum(const Model::DescribeLiveStreamTranscodeStreamNumRequest &request)const;
            void describeLiveStreamTranscodeStreamNumAsync(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request, const DescribeLiveStreamTranscodeStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamTranscodeStreamNumOutcomeCallable describeLiveStreamTranscodeStreamNumCallable(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request) const;
            DeleteHttpHeaderConfigOutcome deleteHttpHeaderConfig(const Model::DeleteHttpHeaderConfigRequest &request)const;
            void deleteHttpHeaderConfigAsync(const Model::DeleteHttpHeaderConfigRequest& request, const DeleteHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteHttpHeaderConfigOutcomeCallable deleteHttpHeaderConfigCallable(const Model::DeleteHttpHeaderConfigRequest& request) const;
            DescribeDomainHitRateDataOutcome describeDomainHitRateData(const Model::DescribeDomainHitRateDataRequest &request)const;
            void describeDomainHitRateDataAsync(const Model::DescribeDomainHitRateDataRequest& request, const DescribeDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainHitRateDataOutcomeCallable describeDomainHitRateDataCallable(const Model::DescribeDomainHitRateDataRequest& request) const;
            PushObjectCacheOutcome pushObjectCache(const Model::PushObjectCacheRequest &request)const;
            void pushObjectCacheAsync(const Model::PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PushObjectCacheOutcomeCallable pushObjectCacheCallable(const Model::PushObjectCacheRequest& request) const;
            DescribeLiveRecordConfigOutcome describeLiveRecordConfig(const Model::DescribeLiveRecordConfigRequest &request)const;
            void describeLiveRecordConfigAsync(const Model::DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveRecordConfigOutcomeCallable describeLiveRecordConfigCallable(const Model::DescribeLiveRecordConfigRequest& request) const;
            SetForceRedirectConfigOutcome setForceRedirectConfig(const Model::SetForceRedirectConfigRequest &request)const;
            void setForceRedirectConfigAsync(const Model::SetForceRedirectConfigRequest& request, const SetForceRedirectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetForceRedirectConfigOutcomeCallable setForceRedirectConfigCallable(const Model::SetForceRedirectConfigRequest& request) const;
            SetErrorPageConfigOutcome setErrorPageConfig(const Model::SetErrorPageConfigRequest &request)const;
            void setErrorPageConfigAsync(const Model::SetErrorPageConfigRequest& request, const SetErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetErrorPageConfigOutcomeCallable setErrorPageConfigCallable(const Model::SetErrorPageConfigRequest& request) const;
            DescribeLiveStreamOnlineUserNumOutcome describeLiveStreamOnlineUserNum(const Model::DescribeLiveStreamOnlineUserNumRequest &request)const;
            void describeLiveStreamOnlineUserNumAsync(const Model::DescribeLiveStreamOnlineUserNumRequest& request, const DescribeLiveStreamOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamOnlineUserNumOutcomeCallable describeLiveStreamOnlineUserNumCallable(const Model::DescribeLiveStreamOnlineUserNumRequest& request) const;
            SetRefererConfigOutcome setRefererConfig(const Model::SetRefererConfigRequest &request)const;
            void setRefererConfigAsync(const Model::SetRefererConfigRequest& request, const SetRefererConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetRefererConfigOutcomeCallable setRefererConfigCallable(const Model::SetRefererConfigRequest& request) const;
            DescribeDomainSrcFlowDataOutcome describeDomainSrcFlowData(const Model::DescribeDomainSrcFlowDataRequest &request)const;
            void describeDomainSrcFlowDataAsync(const Model::DescribeDomainSrcFlowDataRequest& request, const DescribeDomainSrcFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainSrcFlowDataOutcomeCallable describeDomainSrcFlowDataCallable(const Model::DescribeDomainSrcFlowDataRequest& request) const;
            DeleteLiveAppSnapshotConfigOutcome deleteLiveAppSnapshotConfig(const Model::DeleteLiveAppSnapshotConfigRequest &request)const;
            void deleteLiveAppSnapshotConfigAsync(const Model::DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteLiveAppSnapshotConfigOutcomeCallable deleteLiveAppSnapshotConfigCallable(const Model::DeleteLiveAppSnapshotConfigRequest& request) const;
            DescribeCdnTypesOutcome describeCdnTypes(const Model::DescribeCdnTypesRequest &request)const;
            void describeCdnTypesAsync(const Model::DescribeCdnTypesRequest& request, const DescribeCdnTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnTypesOutcomeCallable describeCdnTypesCallable(const Model::DescribeCdnTypesRequest& request) const;
            SetOptimizeConfigOutcome setOptimizeConfig(const Model::SetOptimizeConfigRequest &request)const;
            void setOptimizeConfigAsync(const Model::SetOptimizeConfigRequest& request, const SetOptimizeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetOptimizeConfigOutcomeCallable setOptimizeConfigCallable(const Model::SetOptimizeConfigRequest& request) const;
            SetDynamicConfigOutcome setDynamicConfig(const Model::SetDynamicConfigRequest &request)const;
            void setDynamicConfigAsync(const Model::SetDynamicConfigRequest& request, const SetDynamicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetDynamicConfigOutcomeCallable setDynamicConfigCallable(const Model::SetDynamicConfigRequest& request) const;
            SetReqAuthConfigOutcome setReqAuthConfig(const Model::SetReqAuthConfigRequest &request)const;
            void setReqAuthConfigAsync(const Model::SetReqAuthConfigRequest& request, const SetReqAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetReqAuthConfigOutcomeCallable setReqAuthConfigCallable(const Model::SetReqAuthConfigRequest& request) const;
            DescribeLiveStreamLimitInfoOutcome describeLiveStreamLimitInfo(const Model::DescribeLiveStreamLimitInfoRequest &request)const;
            void describeLiveStreamLimitInfoAsync(const Model::DescribeLiveStreamLimitInfoRequest& request, const DescribeLiveStreamLimitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamLimitInfoOutcomeCallable describeLiveStreamLimitInfoCallable(const Model::DescribeLiveStreamLimitInfoRequest& request) const;
            DescribeLiveStreamNumberListOutcome describeLiveStreamNumberList(const Model::DescribeLiveStreamNumberListRequest &request)const;
            void describeLiveStreamNumberListAsync(const Model::DescribeLiveStreamNumberListRequest& request, const DescribeLiveStreamNumberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamNumberListOutcomeCallable describeLiveStreamNumberListCallable(const Model::DescribeLiveStreamNumberListRequest& request) const;
            SetHttpErrorPageConfigOutcome setHttpErrorPageConfig(const Model::SetHttpErrorPageConfigRequest &request)const;
            void setHttpErrorPageConfigAsync(const Model::SetHttpErrorPageConfigRequest& request, const SetHttpErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetHttpErrorPageConfigOutcomeCallable setHttpErrorPageConfigCallable(const Model::SetHttpErrorPageConfigRequest& request) const;
            SetPathForceTtlCodeConfigOutcome setPathForceTtlCodeConfig(const Model::SetPathForceTtlCodeConfigRequest &request)const;
            void setPathForceTtlCodeConfigAsync(const Model::SetPathForceTtlCodeConfigRequest& request, const SetPathForceTtlCodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetPathForceTtlCodeConfigOutcomeCallable setPathForceTtlCodeConfigCallable(const Model::SetPathForceTtlCodeConfigRequest& request) const;
            DescribeLiveStreamRelayPushBitRateOutcome describeLiveStreamRelayPushBitRate(const Model::DescribeLiveStreamRelayPushBitRateRequest &request)const;
            void describeLiveStreamRelayPushBitRateAsync(const Model::DescribeLiveStreamRelayPushBitRateRequest& request, const DescribeLiveStreamRelayPushBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRelayPushBitRateOutcomeCallable describeLiveStreamRelayPushBitRateCallable(const Model::DescribeLiveStreamRelayPushBitRateRequest& request) const;
            StartMixStreamsServiceOutcome startMixStreamsService(const Model::StartMixStreamsServiceRequest &request)const;
            void startMixStreamsServiceAsync(const Model::StartMixStreamsServiceRequest& request, const StartMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StartMixStreamsServiceOutcomeCallable startMixStreamsServiceCallable(const Model::StartMixStreamsServiceRequest& request) const;
            DescribeLivePullStreamConfigOutcome describeLivePullStreamConfig(const Model::DescribeLivePullStreamConfigRequest &request)const;
            void describeLivePullStreamConfigAsync(const Model::DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLivePullStreamConfigOutcomeCallable describeLivePullStreamConfigCallable(const Model::DescribeLivePullStreamConfigRequest& request) const;
            SetLiveStreamsNotifyUrlConfigOutcome setLiveStreamsNotifyUrlConfig(const Model::SetLiveStreamsNotifyUrlConfigRequest &request)const;
            void setLiveStreamsNotifyUrlConfigAsync(const Model::SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetLiveStreamsNotifyUrlConfigOutcomeCallable setLiveStreamsNotifyUrlConfigCallable(const Model::SetLiveStreamsNotifyUrlConfigRequest& request) const;
            DescribeDomainPathDataOutcome describeDomainPathData(const Model::DescribeDomainPathDataRequest &request)const;
            void describeDomainPathDataAsync(const Model::DescribeDomainPathDataRequest& request, const DescribeDomainPathDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainPathDataOutcomeCallable describeDomainPathDataCallable(const Model::DescribeDomainPathDataRequest& request) const;
            DescribeCdnDomainLogsOutcome describeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request)const;
            void describeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnDomainLogsOutcomeCallable describeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request) const;
            DescribeLiveAppRecordConfigOutcome describeLiveAppRecordConfig(const Model::DescribeLiveAppRecordConfigRequest &request)const;
            void describeLiveAppRecordConfigAsync(const Model::DescribeLiveAppRecordConfigRequest& request, const DescribeLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveAppRecordConfigOutcomeCallable describeLiveAppRecordConfigCallable(const Model::DescribeLiveAppRecordConfigRequest& request) const;
            DescribeDomainFlowDataOutcome describeDomainFlowData(const Model::DescribeDomainFlowDataRequest &request)const;
            void describeDomainFlowDataAsync(const Model::DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainFlowDataOutcomeCallable describeDomainFlowDataCallable(const Model::DescribeDomainFlowDataRequest& request) const;
            SetOssLogConfigOutcome setOssLogConfig(const Model::SetOssLogConfigRequest &request)const;
            void setOssLogConfigAsync(const Model::SetOssLogConfigRequest& request, const SetOssLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetOssLogConfigOutcomeCallable setOssLogConfigCallable(const Model::SetOssLogConfigRequest& request) const;
            DescribeLiveStreamRelayPushErrorsOutcome describeLiveStreamRelayPushErrors(const Model::DescribeLiveStreamRelayPushErrorsRequest &request)const;
            void describeLiveStreamRelayPushErrorsAsync(const Model::DescribeLiveStreamRelayPushErrorsRequest& request, const DescribeLiveStreamRelayPushErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRelayPushErrorsOutcomeCallable describeLiveStreamRelayPushErrorsCallable(const Model::DescribeLiveStreamRelayPushErrorsRequest& request) const;
            DescribeLiveStreamsBlockListOutcome describeLiveStreamsBlockList(const Model::DescribeLiveStreamsBlockListRequest &request)const;
            void describeLiveStreamsBlockListAsync(const Model::DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamsBlockListOutcomeCallable describeLiveStreamsBlockListCallable(const Model::DescribeLiveStreamsBlockListRequest& request) const;
            AddLiveStreamTranscodeOutcome addLiveStreamTranscode(const Model::AddLiveStreamTranscodeRequest &request)const;
            void addLiveStreamTranscodeAsync(const Model::AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddLiveStreamTranscodeOutcomeCallable addLiveStreamTranscodeCallable(const Model::AddLiveStreamTranscodeRequest& request) const;
            SetIgnoreQueryStringConfigOutcome setIgnoreQueryStringConfig(const Model::SetIgnoreQueryStringConfigRequest &request)const;
            void setIgnoreQueryStringConfigAsync(const Model::SetIgnoreQueryStringConfigRequest& request, const SetIgnoreQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetIgnoreQueryStringConfigOutcomeCallable setIgnoreQueryStringConfigCallable(const Model::SetIgnoreQueryStringConfigRequest& request) const;
            AddLivePullStreamInfoOutcome addLivePullStreamInfo(const Model::AddLivePullStreamInfoRequest &request)const;
            void addLivePullStreamInfoAsync(const Model::AddLivePullStreamInfoRequest& request, const AddLivePullStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddLivePullStreamInfoOutcomeCallable addLivePullStreamInfoCallable(const Model::AddLivePullStreamInfoRequest& request) const;
            DescribeUserCustomerLabelsOutcome describeUserCustomerLabels(const Model::DescribeUserCustomerLabelsRequest &request)const;
            void describeUserCustomerLabelsAsync(const Model::DescribeUserCustomerLabelsRequest& request, const DescribeUserCustomerLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeUserCustomerLabelsOutcomeCallable describeUserCustomerLabelsCallable(const Model::DescribeUserCustomerLabelsRequest& request) const;
            BatchDescribeDomainBpsDataOutcome batchDescribeDomainBpsData(const Model::BatchDescribeDomainBpsDataRequest &request)const;
            void batchDescribeDomainBpsDataAsync(const Model::BatchDescribeDomainBpsDataRequest& request, const BatchDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            BatchDescribeDomainBpsDataOutcomeCallable batchDescribeDomainBpsDataCallable(const Model::BatchDescribeDomainBpsDataRequest& request) const;
            DescribeDomainTopReferVisitOutcome describeDomainTopReferVisit(const Model::DescribeDomainTopReferVisitRequest &request)const;
            void describeDomainTopReferVisitAsync(const Model::DescribeDomainTopReferVisitRequest& request, const DescribeDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainTopReferVisitOutcomeCallable describeDomainTopReferVisitCallable(const Model::DescribeDomainTopReferVisitRequest& request) const;
            DescribeLiveStreamBpsDataOutcome describeLiveStreamBpsData(const Model::DescribeLiveStreamBpsDataRequest &request)const;
            void describeLiveStreamBpsDataAsync(const Model::DescribeLiveStreamBpsDataRequest& request, const DescribeLiveStreamBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamBpsDataOutcomeCallable describeLiveStreamBpsDataCallable(const Model::DescribeLiveStreamBpsDataRequest& request) const;
            DescribeLiveStreamsControlHistoryOutcome describeLiveStreamsControlHistory(const Model::DescribeLiveStreamsControlHistoryRequest &request)const;
            void describeLiveStreamsControlHistoryAsync(const Model::DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamsControlHistoryOutcomeCallable describeLiveStreamsControlHistoryCallable(const Model::DescribeLiveStreamsControlHistoryRequest& request) const;
            OpenCdnServiceOutcome openCdnService(const Model::OpenCdnServiceRequest &request)const;
            void openCdnServiceAsync(const Model::OpenCdnServiceRequest& request, const OpenCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            OpenCdnServiceOutcomeCallable openCdnServiceCallable(const Model::OpenCdnServiceRequest& request) const;
            SetReqHeaderConfigOutcome setReqHeaderConfig(const Model::SetReqHeaderConfigRequest &request)const;
            void setReqHeaderConfigAsync(const Model::SetReqHeaderConfigRequest& request, const SetReqHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetReqHeaderConfigOutcomeCallable setReqHeaderConfigCallable(const Model::SetReqHeaderConfigRequest& request) const;
            DescribeDomainQoSRtOutcome describeDomainQoSRt(const Model::DescribeDomainQoSRtRequest &request)const;
            void describeDomainQoSRtAsync(const Model::DescribeDomainQoSRtRequest& request, const DescribeDomainQoSRtAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainQoSRtOutcomeCallable describeDomainQoSRtCallable(const Model::DescribeDomainQoSRtRequest& request) const;
            DescribeDomainRealTimeReqHitRateDataOutcome describeDomainRealTimeReqHitRateData(const Model::DescribeDomainRealTimeReqHitRateDataRequest &request)const;
            void describeDomainRealTimeReqHitRateDataAsync(const Model::DescribeDomainRealTimeReqHitRateDataRequest& request, const DescribeDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRealTimeReqHitRateDataOutcomeCallable describeDomainRealTimeReqHitRateDataCallable(const Model::DescribeDomainRealTimeReqHitRateDataRequest& request) const;
            DescribeLiveStreamFrameAndBitRateByDomainOutcome describeLiveStreamFrameAndBitRateByDomain(const Model::DescribeLiveStreamFrameAndBitRateByDomainRequest &request)const;
            void describeLiveStreamFrameAndBitRateByDomainAsync(const Model::DescribeLiveStreamFrameAndBitRateByDomainRequest& request, const DescribeLiveStreamFrameAndBitRateByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamFrameAndBitRateByDomainOutcomeCallable describeLiveStreamFrameAndBitRateByDomainCallable(const Model::DescribeLiveStreamFrameAndBitRateByDomainRequest& request) const;
            DescribeLiveStreamSnapshotInfoOutcome describeLiveStreamSnapshotInfo(const Model::DescribeLiveStreamSnapshotInfoRequest &request)const;
            void describeLiveStreamSnapshotInfoAsync(const Model::DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamSnapshotInfoOutcomeCallable describeLiveStreamSnapshotInfoCallable(const Model::DescribeLiveStreamSnapshotInfoRequest& request) const;
            SetIpBlackListConfigOutcome setIpBlackListConfig(const Model::SetIpBlackListConfigRequest &request)const;
            void setIpBlackListConfigAsync(const Model::SetIpBlackListConfigRequest& request, const SetIpBlackListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetIpBlackListConfigOutcomeCallable setIpBlackListConfigCallable(const Model::SetIpBlackListConfigRequest& request) const;
            DescribeDomainSlowRatioOutcome describeDomainSlowRatio(const Model::DescribeDomainSlowRatioRequest &request)const;
            void describeDomainSlowRatioAsync(const Model::DescribeDomainSlowRatioRequest& request, const DescribeDomainSlowRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainSlowRatioOutcomeCallable describeDomainSlowRatioCallable(const Model::DescribeDomainSlowRatioRequest& request) const;
            DescribeDomainCCDataOutcome describeDomainCCData(const Model::DescribeDomainCCDataRequest &request)const;
            void describeDomainCCDataAsync(const Model::DescribeDomainCCDataRequest& request, const DescribeDomainCCDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainCCDataOutcomeCallable describeDomainCCDataCallable(const Model::DescribeDomainCCDataRequest& request) const;
            DescribeLiveStreamRelayPushDataOutcome describeLiveStreamRelayPushData(const Model::DescribeLiveStreamRelayPushDataRequest &request)const;
            void describeLiveStreamRelayPushDataAsync(const Model::DescribeLiveStreamRelayPushDataRequest& request, const DescribeLiveStreamRelayPushDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRelayPushDataOutcomeCallable describeLiveStreamRelayPushDataCallable(const Model::DescribeLiveStreamRelayPushDataRequest& request) const;
            SetIpAllowListConfigOutcome setIpAllowListConfig(const Model::SetIpAllowListConfigRequest &request)const;
            void setIpAllowListConfigAsync(const Model::SetIpAllowListConfigRequest& request, const SetIpAllowListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetIpAllowListConfigOutcomeCallable setIpAllowListConfigCallable(const Model::SetIpAllowListConfigRequest& request) const;
            DescribeDomainRealTimeQpsDataOutcome describeDomainRealTimeQpsData(const Model::DescribeDomainRealTimeQpsDataRequest &request)const;
            void describeDomainRealTimeQpsDataAsync(const Model::DescribeDomainRealTimeQpsDataRequest& request, const DescribeDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRealTimeQpsDataOutcomeCallable describeDomainRealTimeQpsDataCallable(const Model::DescribeDomainRealTimeQpsDataRequest& request) const;
            RefreshObjectCachesOutcome refreshObjectCaches(const Model::RefreshObjectCachesRequest &request)const;
            void refreshObjectCachesAsync(const Model::RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RefreshObjectCachesOutcomeCallable refreshObjectCachesCallable(const Model::RefreshObjectCachesRequest& request) const;
            DescribeLiveStreamsFrameRateAndBitRateDataOutcome describeLiveStreamsFrameRateAndBitRateData(const Model::DescribeLiveStreamsFrameRateAndBitRateDataRequest &request)const;
            void describeLiveStreamsFrameRateAndBitRateDataAsync(const Model::DescribeLiveStreamsFrameRateAndBitRateDataRequest& request, const DescribeLiveStreamsFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamsFrameRateAndBitRateDataOutcomeCallable describeLiveStreamsFrameRateAndBitRateDataCallable(const Model::DescribeLiveStreamsFrameRateAndBitRateDataRequest& request) const;
            DescribeOneMinuteDataOutcome describeOneMinuteData(const Model::DescribeOneMinuteDataRequest &request)const;
            void describeOneMinuteDataAsync(const Model::DescribeOneMinuteDataRequest& request, const DescribeOneMinuteDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeOneMinuteDataOutcomeCallable describeOneMinuteDataCallable(const Model::DescribeOneMinuteDataRequest& request) const;
            DescribeLiveStreamRecordContentOutcome describeLiveStreamRecordContent(const Model::DescribeLiveStreamRecordContentRequest &request)const;
            void describeLiveStreamRecordContentAsync(const Model::DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRecordContentOutcomeCallable describeLiveStreamRecordContentCallable(const Model::DescribeLiveStreamRecordContentRequest& request) const;
            AddCdnDomainOutcome addCdnDomain(const Model::AddCdnDomainRequest &request)const;
            void addCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddCdnDomainOutcomeCallable addCdnDomainCallable(const Model::AddCdnDomainRequest& request) const;
            SetRangeConfigOutcome setRangeConfig(const Model::SetRangeConfigRequest &request)const;
            void setRangeConfigAsync(const Model::SetRangeConfigRequest& request, const SetRangeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetRangeConfigOutcomeCallable setRangeConfigCallable(const Model::SetRangeConfigRequest& request) const;
            DescribeLiveStreamRoomBitRateOutcome describeLiveStreamRoomBitRate(const Model::DescribeLiveStreamRoomBitRateRequest &request)const;
            void describeLiveStreamRoomBitRateAsync(const Model::DescribeLiveStreamRoomBitRateRequest& request, const DescribeLiveStreamRoomBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRoomBitRateOutcomeCallable describeLiveStreamRoomBitRateCallable(const Model::DescribeLiveStreamRoomBitRateRequest& request) const;
            SetCcConfigOutcome setCcConfig(const Model::SetCcConfigRequest &request)const;
            void setCcConfigAsync(const Model::SetCcConfigRequest& request, const SetCcConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetCcConfigOutcomeCallable setCcConfigCallable(const Model::SetCcConfigRequest& request) const;
            DescribeUserDomainsOutcome describeUserDomains(const Model::DescribeUserDomainsRequest &request)const;
            void describeUserDomainsAsync(const Model::DescribeUserDomainsRequest& request, const DescribeUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeUserDomainsOutcomeCallable describeUserDomainsCallable(const Model::DescribeUserDomainsRequest& request) const;
            DescribeLiveSnapshotConfigOutcome describeLiveSnapshotConfig(const Model::DescribeLiveSnapshotConfigRequest &request)const;
            void describeLiveSnapshotConfigAsync(const Model::DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveSnapshotConfigOutcomeCallable describeLiveSnapshotConfigCallable(const Model::DescribeLiveSnapshotConfigRequest& request) const;
            DescribeRefreshTasksOutcome describeRefreshTasks(const Model::DescribeRefreshTasksRequest &request)const;
            void describeRefreshTasksAsync(const Model::DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRefreshTasksOutcomeCallable describeRefreshTasksCallable(const Model::DescribeRefreshTasksRequest& request) const;
            DescribeRefreshQuotaOutcome describeRefreshQuota(const Model::DescribeRefreshQuotaRequest &request)const;
            void describeRefreshQuotaAsync(const Model::DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRefreshQuotaOutcomeCallable describeRefreshQuotaCallable(const Model::DescribeRefreshQuotaRequest& request) const;
            AddLiveAppRecordConfigOutcome addLiveAppRecordConfig(const Model::AddLiveAppRecordConfigRequest &request)const;
            void addLiveAppRecordConfigAsync(const Model::AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddLiveAppRecordConfigOutcomeCallable addLiveAppRecordConfigCallable(const Model::AddLiveAppRecordConfigRequest& request) const;
            SetForwardSchemeConfigOutcome setForwardSchemeConfig(const Model::SetForwardSchemeConfigRequest &request)const;
            void setForwardSchemeConfigAsync(const Model::SetForwardSchemeConfigRequest& request, const SetForwardSchemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetForwardSchemeConfigOutcomeCallable setForwardSchemeConfigCallable(const Model::SetForwardSchemeConfigRequest& request) const;
            DeleteLiveDomainMappingOutcome deleteLiveDomainMapping(const Model::DeleteLiveDomainMappingRequest &request)const;
            void deleteLiveDomainMappingAsync(const Model::DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteLiveDomainMappingOutcomeCallable deleteLiveDomainMappingCallable(const Model::DeleteLiveDomainMappingRequest& request) const;
            DescribeDomainBpsDataByTimeStampOutcome describeDomainBpsDataByTimeStamp(const Model::DescribeDomainBpsDataByTimeStampRequest &request)const;
            void describeDomainBpsDataByTimeStampAsync(const Model::DescribeDomainBpsDataByTimeStampRequest& request, const DescribeDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainBpsDataByTimeStampOutcomeCallable describeDomainBpsDataByTimeStampCallable(const Model::DescribeDomainBpsDataByTimeStampRequest& request) const;
            SetSourceHostConfigOutcome setSourceHostConfig(const Model::SetSourceHostConfigRequest &request)const;
            void setSourceHostConfigAsync(const Model::SetSourceHostConfigRequest& request, const SetSourceHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetSourceHostConfigOutcomeCallable setSourceHostConfigCallable(const Model::SetSourceHostConfigRequest& request) const;
            DescribeLiveStreamRoomUserNumberOutcome describeLiveStreamRoomUserNumber(const Model::DescribeLiveStreamRoomUserNumberRequest &request)const;
            void describeLiveStreamRoomUserNumberAsync(const Model::DescribeLiveStreamRoomUserNumberRequest& request, const DescribeLiveStreamRoomUserNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRoomUserNumberOutcomeCallable describeLiveStreamRoomUserNumberCallable(const Model::DescribeLiveStreamRoomUserNumberRequest& request) const;
            DescribeUserConfigsOutcome describeUserConfigs(const Model::DescribeUserConfigsRequest &request)const;
            void describeUserConfigsAsync(const Model::DescribeUserConfigsRequest& request, const DescribeUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeUserConfigsOutcomeCallable describeUserConfigsCallable(const Model::DescribeUserConfigsRequest& request) const;
            DescribeLiveStreamStreamStatusOutcome describeLiveStreamStreamStatus(const Model::DescribeLiveStreamStreamStatusRequest &request)const;
            void describeLiveStreamStreamStatusAsync(const Model::DescribeLiveStreamStreamStatusRequest& request, const DescribeLiveStreamStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamStreamStatusOutcomeCallable describeLiveStreamStreamStatusCallable(const Model::DescribeLiveStreamStreamStatusRequest& request) const;
            DescribeLiveStreamRecordIndexFilesOutcome describeLiveStreamRecordIndexFiles(const Model::DescribeLiveStreamRecordIndexFilesRequest &request)const;
            void describeLiveStreamRecordIndexFilesAsync(const Model::DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamRecordIndexFilesOutcomeCallable describeLiveStreamRecordIndexFilesCallable(const Model::DescribeLiveStreamRecordIndexFilesRequest& request) const;
            ModifyCdnDomainOutcome modifyCdnDomain(const Model::ModifyCdnDomainRequest &request)const;
            void modifyCdnDomainAsync(const Model::ModifyCdnDomainRequest& request, const ModifyCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCdnDomainOutcomeCallable modifyCdnDomainCallable(const Model::ModifyCdnDomainRequest& request) const;
            DescribeDomainMonthBillingBpsDataOutcome describeDomainMonthBillingBpsData(const Model::DescribeDomainMonthBillingBpsDataRequest &request)const;
            void describeDomainMonthBillingBpsDataAsync(const Model::DescribeDomainMonthBillingBpsDataRequest& request, const DescribeDomainMonthBillingBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainMonthBillingBpsDataOutcomeCallable describeDomainMonthBillingBpsDataCallable(const Model::DescribeDomainMonthBillingBpsDataRequest& request) const;
            DescribeDomainOnlineUserNumberOutcome describeDomainOnlineUserNumber(const Model::DescribeDomainOnlineUserNumberRequest &request)const;
            void describeDomainOnlineUserNumberAsync(const Model::DescribeDomainOnlineUserNumberRequest& request, const DescribeDomainOnlineUserNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainOnlineUserNumberOutcomeCallable describeDomainOnlineUserNumberCallable(const Model::DescribeDomainOnlineUserNumberRequest& request) const;
            DescribeLiveStreamFrameInfoOutcome describeLiveStreamFrameInfo(const Model::DescribeLiveStreamFrameInfoRequest &request)const;
            void describeLiveStreamFrameInfoAsync(const Model::DescribeLiveStreamFrameInfoRequest& request, const DescribeLiveStreamFrameInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamFrameInfoOutcomeCallable describeLiveStreamFrameInfoCallable(const Model::DescribeLiveStreamFrameInfoRequest& request) const;
            DescribeLiveStreamFrameLossRatioOutcome describeLiveStreamFrameLossRatio(const Model::DescribeLiveStreamFrameLossRatioRequest &request)const;
            void describeLiveStreamFrameLossRatioAsync(const Model::DescribeLiveStreamFrameLossRatioRequest& request, const DescribeLiveStreamFrameLossRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamFrameLossRatioOutcomeCallable describeLiveStreamFrameLossRatioCallable(const Model::DescribeLiveStreamFrameLossRatioRequest& request) const;
            ForbidLiveStreamOutcome forbidLiveStream(const Model::ForbidLiveStreamRequest &request)const;
            void forbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ForbidLiveStreamOutcomeCallable forbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request) const;
            DescribeLiveStreamDomainAppInfoOutcome describeLiveStreamDomainAppInfo(const Model::DescribeLiveStreamDomainAppInfoRequest &request)const;
            void describeLiveStreamDomainAppInfoAsync(const Model::DescribeLiveStreamDomainAppInfoRequest& request, const DescribeLiveStreamDomainAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamDomainAppInfoOutcomeCallable describeLiveStreamDomainAppInfoCallable(const Model::DescribeLiveStreamDomainAppInfoRequest& request) const;
            DescribeDomainQpsDataOutcome describeDomainQpsData(const Model::DescribeDomainQpsDataRequest &request)const;
            void describeDomainQpsDataAsync(const Model::DescribeDomainQpsDataRequest& request, const DescribeDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainQpsDataOutcomeCallable describeDomainQpsDataCallable(const Model::DescribeDomainQpsDataRequest& request) const;
            SetPageCompressConfigOutcome setPageCompressConfig(const Model::SetPageCompressConfigRequest &request)const;
            void setPageCompressConfigAsync(const Model::SetPageCompressConfigRequest& request, const SetPageCompressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetPageCompressConfigOutcomeCallable setPageCompressConfigCallable(const Model::SetPageCompressConfigRequest& request) const;
            DescribeL2VipsByDomainOutcome describeL2VipsByDomain(const Model::DescribeL2VipsByDomainRequest &request)const;
            void describeL2VipsByDomainAsync(const Model::DescribeL2VipsByDomainRequest& request, const DescribeL2VipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeL2VipsByDomainOutcomeCallable describeL2VipsByDomainCallable(const Model::DescribeL2VipsByDomainRequest& request) const;
            ModifyHttpHeaderConfigOutcome modifyHttpHeaderConfig(const Model::ModifyHttpHeaderConfigRequest &request)const;
            void modifyHttpHeaderConfigAsync(const Model::ModifyHttpHeaderConfigRequest& request, const ModifyHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyHttpHeaderConfigOutcomeCallable modifyHttpHeaderConfigCallable(const Model::ModifyHttpHeaderConfigRequest& request) const;
            SetDomainServerCertificateOutcome setDomainServerCertificate(const Model::SetDomainServerCertificateRequest &request)const;
            void setDomainServerCertificateAsync(const Model::SetDomainServerCertificateRequest& request, const SetDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetDomainServerCertificateOutcomeCallable setDomainServerCertificateCallable(const Model::SetDomainServerCertificateRequest& request) const;
            DescribeIpInfoOutcome describeIpInfo(const Model::DescribeIpInfoRequest &request)const;
            void describeIpInfoAsync(const Model::DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeIpInfoOutcomeCallable describeIpInfoCallable(const Model::DescribeIpInfoRequest& request) const;
            DescribeDomainConfigsOutcome describeDomainConfigs(const Model::DescribeDomainConfigsRequest &request)const;
            void describeDomainConfigsAsync(const Model::DescribeDomainConfigsRequest& request, const DescribeDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainConfigsOutcomeCallable describeDomainConfigsCallable(const Model::DescribeDomainConfigsRequest& request) const;
            DescribeDomainsBySourceOutcome describeDomainsBySource(const Model::DescribeDomainsBySourceRequest &request)const;
            void describeDomainsBySourceAsync(const Model::DescribeDomainsBySourceRequest& request, const DescribeDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainsBySourceOutcomeCallable describeDomainsBySourceCallable(const Model::DescribeDomainsBySourceRequest& request) const;
            UpdateLiveAppSnapshotConfigOutcome updateLiveAppSnapshotConfig(const Model::UpdateLiveAppSnapshotConfigRequest &request)const;
            void updateLiveAppSnapshotConfigAsync(const Model::UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpdateLiveAppSnapshotConfigOutcomeCallable updateLiveAppSnapshotConfigCallable(const Model::UpdateLiveAppSnapshotConfigRequest& request) const;
            DescribeDomainPvDataOutcome describeDomainPvData(const Model::DescribeDomainPvDataRequest &request)const;
            void describeDomainPvDataAsync(const Model::DescribeDomainPvDataRequest& request, const DescribeDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainPvDataOutcomeCallable describeDomainPvDataCallable(const Model::DescribeDomainPvDataRequest& request) const;
            SetRemoteReqAuthConfigOutcome setRemoteReqAuthConfig(const Model::SetRemoteReqAuthConfigRequest &request)const;
            void setRemoteReqAuthConfigAsync(const Model::SetRemoteReqAuthConfigRequest& request, const SetRemoteReqAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetRemoteReqAuthConfigOutcomeCallable setRemoteReqAuthConfigCallable(const Model::SetRemoteReqAuthConfigRequest& request) const;
            DescribeLiveStreamPushErrorsOutcome describeLiveStreamPushErrors(const Model::DescribeLiveStreamPushErrorsRequest &request)const;
            void describeLiveStreamPushErrorsAsync(const Model::DescribeLiveStreamPushErrorsRequest& request, const DescribeLiveStreamPushErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamPushErrorsOutcomeCallable describeLiveStreamPushErrorsCallable(const Model::DescribeLiveStreamPushErrorsRequest& request) const;
            AddLiveAppSnapshotConfigOutcome addLiveAppSnapshotConfig(const Model::AddLiveAppSnapshotConfigRequest &request)const;
            void addLiveAppSnapshotConfigAsync(const Model::AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddLiveAppSnapshotConfigOutcomeCallable addLiveAppSnapshotConfigCallable(const Model::AddLiveAppSnapshotConfigRequest& request) const;
            DescribeDomainISPDataOutcome describeDomainISPData(const Model::DescribeDomainISPDataRequest &request)const;
            void describeDomainISPDataAsync(const Model::DescribeDomainISPDataRequest& request, const DescribeDomainISPDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainISPDataOutcomeCallable describeDomainISPDataCallable(const Model::DescribeDomainISPDataRequest& request) const;
            ClearUserDomainBlackListOutcome clearUserDomainBlackList(const Model::ClearUserDomainBlackListRequest &request)const;
            void clearUserDomainBlackListAsync(const Model::ClearUserDomainBlackListRequest& request, const ClearUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ClearUserDomainBlackListOutcomeCallable clearUserDomainBlackListCallable(const Model::ClearUserDomainBlackListRequest& request) const;
            DescribeDomainFileSizeProportionDataOutcome describeDomainFileSizeProportionData(const Model::DescribeDomainFileSizeProportionDataRequest &request)const;
            void describeDomainFileSizeProportionDataAsync(const Model::DescribeDomainFileSizeProportionDataRequest& request, const DescribeDomainFileSizeProportionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainFileSizeProportionDataOutcomeCallable describeDomainFileSizeProportionDataCallable(const Model::DescribeDomainFileSizeProportionDataRequest& request) const;
            DescribeLiveSpecificDomainMappingOutcome describeLiveSpecificDomainMapping(const Model::DescribeLiveSpecificDomainMappingRequest &request)const;
            void describeLiveSpecificDomainMappingAsync(const Model::DescribeLiveSpecificDomainMappingRequest& request, const DescribeLiveSpecificDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveSpecificDomainMappingOutcomeCallable describeLiveSpecificDomainMappingCallable(const Model::DescribeLiveSpecificDomainMappingRequest& request) const;
            DescribeDomainRealTimeByteHitRateDataOutcome describeDomainRealTimeByteHitRateData(const Model::DescribeDomainRealTimeByteHitRateDataRequest &request)const;
            void describeDomainRealTimeByteHitRateDataAsync(const Model::DescribeDomainRealTimeByteHitRateDataRequest& request, const DescribeDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRealTimeByteHitRateDataOutcomeCallable describeDomainRealTimeByteHitRateDataCallable(const Model::DescribeDomainRealTimeByteHitRateDataRequest& request) const;
            AddLiveDomainMappingOutcome addLiveDomainMapping(const Model::AddLiveDomainMappingRequest &request)const;
            void addLiveDomainMappingAsync(const Model::AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddLiveDomainMappingOutcomeCallable addLiveDomainMappingCallable(const Model::AddLiveDomainMappingRequest& request) const;
            MigrateDomainToHttpsDeliveryOutcome migrateDomainToHttpsDelivery(const Model::MigrateDomainToHttpsDeliveryRequest &request)const;
            void migrateDomainToHttpsDeliveryAsync(const Model::MigrateDomainToHttpsDeliveryRequest& request, const MigrateDomainToHttpsDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            MigrateDomainToHttpsDeliveryOutcomeCallable migrateDomainToHttpsDeliveryCallable(const Model::MigrateDomainToHttpsDeliveryRequest& request) const;
            DescribeDomainRealTimeDataOutcome describeDomainRealTimeData(const Model::DescribeDomainRealTimeDataRequest &request)const;
            void describeDomainRealTimeDataAsync(const Model::DescribeDomainRealTimeDataRequest& request, const DescribeDomainRealTimeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRealTimeDataOutcomeCallable describeDomainRealTimeDataCallable(const Model::DescribeDomainRealTimeDataRequest& request) const;
            ResumeLiveStreamOutcome resumeLiveStream(const Model::ResumeLiveStreamRequest &request)const;
            void resumeLiveStreamAsync(const Model::ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResumeLiveStreamOutcomeCallable resumeLiveStreamCallable(const Model::ResumeLiveStreamRequest& request) const;
            GetUserDomainBlackListOutcome getUserDomainBlackList(const Model::GetUserDomainBlackListRequest &request)const;
            void getUserDomainBlackListAsync(const Model::GetUserDomainBlackListRequest& request, const GetUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetUserDomainBlackListOutcomeCallable getUserDomainBlackListCallable(const Model::GetUserDomainBlackListRequest& request) const;
            SetUserBlackListOutcome setUserBlackList(const Model::SetUserBlackListRequest &request)const;
            void setUserBlackListAsync(const Model::SetUserBlackListRequest& request, const SetUserBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetUserBlackListOutcomeCallable setUserBlackListCallable(const Model::SetUserBlackListRequest& request) const;
            DescribeDomainCCAttackInfoOutcome describeDomainCCAttackInfo(const Model::DescribeDomainCCAttackInfoRequest &request)const;
            void describeDomainCCAttackInfoAsync(const Model::DescribeDomainCCAttackInfoRequest& request, const DescribeDomainCCAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainCCAttackInfoOutcomeCallable describeDomainCCAttackInfoCallable(const Model::DescribeDomainCCAttackInfoRequest& request) const;
            DescribeDomainRealTimeBpsDataOutcome describeDomainRealTimeBpsData(const Model::DescribeDomainRealTimeBpsDataRequest &request)const;
            void describeDomainRealTimeBpsDataAsync(const Model::DescribeDomainRealTimeBpsDataRequest& request, const DescribeDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRealTimeBpsDataOutcomeCallable describeDomainRealTimeBpsDataCallable(const Model::DescribeDomainRealTimeBpsDataRequest& request) const;
            DescribeLiveStreamsPublishListOutcome describeLiveStreamsPublishList(const Model::DescribeLiveStreamsPublishListRequest &request)const;
            void describeLiveStreamsPublishListAsync(const Model::DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamsPublishListOutcomeCallable describeLiveStreamsPublishListCallable(const Model::DescribeLiveStreamsPublishListRequest& request) const;
            DeleteLivePullStreamInfoOutcome deleteLivePullStreamInfo(const Model::DeleteLivePullStreamInfoRequest &request)const;
            void deleteLivePullStreamInfoAsync(const Model::DeleteLivePullStreamInfoRequest& request, const DeleteLivePullStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteLivePullStreamInfoOutcomeCallable deleteLivePullStreamInfoCallable(const Model::DeleteLivePullStreamInfoRequest& request) const;
            DescribeDomainDownstreamBpsOfEdgeOutcome describeDomainDownstreamBpsOfEdge(const Model::DescribeDomainDownstreamBpsOfEdgeRequest &request)const;
            void describeDomainDownstreamBpsOfEdgeAsync(const Model::DescribeDomainDownstreamBpsOfEdgeRequest& request, const DescribeDomainDownstreamBpsOfEdgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainDownstreamBpsOfEdgeOutcomeCallable describeDomainDownstreamBpsOfEdgeCallable(const Model::DescribeDomainDownstreamBpsOfEdgeRequest& request) const;
            ClearUserBlackListOutcome clearUserBlackList(const Model::ClearUserBlackListRequest &request)const;
            void clearUserBlackListAsync(const Model::ClearUserBlackListRequest& request, const ClearUserBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ClearUserBlackListOutcomeCallable clearUserBlackListCallable(const Model::ClearUserBlackListRequest& request) const;
            DescribeDomainMax95BpsDataOutcome describeDomainMax95BpsData(const Model::DescribeDomainMax95BpsDataRequest &request)const;
            void describeDomainMax95BpsDataAsync(const Model::DescribeDomainMax95BpsDataRequest& request, const DescribeDomainMax95BpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainMax95BpsDataOutcomeCallable describeDomainMax95BpsDataCallable(const Model::DescribeDomainMax95BpsDataRequest& request) const;
            SetHttpsOptionConfigOutcome setHttpsOptionConfig(const Model::SetHttpsOptionConfigRequest &request)const;
            void setHttpsOptionConfigAsync(const Model::SetHttpsOptionConfigRequest& request, const SetHttpsOptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetHttpsOptionConfigOutcomeCallable setHttpsOptionConfigCallable(const Model::SetHttpsOptionConfigRequest& request) const;
            SetWaitingRoomConfigOutcome setWaitingRoomConfig(const Model::SetWaitingRoomConfigRequest &request)const;
            void setWaitingRoomConfigAsync(const Model::SetWaitingRoomConfigRequest& request, const SetWaitingRoomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetWaitingRoomConfigOutcomeCallable setWaitingRoomConfigCallable(const Model::SetWaitingRoomConfigRequest& request) const;
            DescribeRangeDataByLocateAndIspServiceOutcome describeRangeDataByLocateAndIspService(const Model::DescribeRangeDataByLocateAndIspServiceRequest &request)const;
            void describeRangeDataByLocateAndIspServiceAsync(const Model::DescribeRangeDataByLocateAndIspServiceRequest& request, const DescribeRangeDataByLocateAndIspServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRangeDataByLocateAndIspServiceOutcomeCallable describeRangeDataByLocateAndIspServiceCallable(const Model::DescribeRangeDataByLocateAndIspServiceRequest& request) const;
            DescribeLiveStreamOnlineBpsOutcome describeLiveStreamOnlineBps(const Model::DescribeLiveStreamOnlineBpsRequest &request)const;
            void describeLiveStreamOnlineBpsAsync(const Model::DescribeLiveStreamOnlineBpsRequest& request, const DescribeLiveStreamOnlineBpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamOnlineBpsOutcomeCallable describeLiveStreamOnlineBpsCallable(const Model::DescribeLiveStreamOnlineBpsRequest& request) const;
            DescribeDomainRegionDataOutcome describeDomainRegionData(const Model::DescribeDomainRegionDataRequest &request)const;
            void describeDomainRegionDataAsync(const Model::DescribeDomainRegionDataRequest& request, const DescribeDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainRegionDataOutcomeCallable describeDomainRegionDataCallable(const Model::DescribeDomainRegionDataRequest& request) const;
            DescribeDomainSrcBpsDataOutcome describeDomainSrcBpsData(const Model::DescribeDomainSrcBpsDataRequest &request)const;
            void describeDomainSrcBpsDataAsync(const Model::DescribeDomainSrcBpsDataRequest& request, const DescribeDomainSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainSrcBpsDataOutcomeCallable describeDomainSrcBpsDataCallable(const Model::DescribeDomainSrcBpsDataRequest& request) const;
            DescribeLiveStreamPushDataOutcome describeLiveStreamPushData(const Model::DescribeLiveStreamPushDataRequest &request)const;
            void describeLiveStreamPushDataAsync(const Model::DescribeLiveStreamPushDataRequest& request, const DescribeLiveStreamPushDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamPushDataOutcomeCallable describeLiveStreamPushDataCallable(const Model::DescribeLiveStreamPushDataRequest& request) const;
            DeleteLiveAppRecordConfigOutcome deleteLiveAppRecordConfig(const Model::DeleteLiveAppRecordConfigRequest &request)const;
            void deleteLiveAppRecordConfigAsync(const Model::DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteLiveAppRecordConfigOutcomeCallable deleteLiveAppRecordConfigCallable(const Model::DeleteLiveAppRecordConfigRequest& request) const;
            DescribeCdnRegionAndIspOutcome describeCdnRegionAndIsp(const Model::DescribeCdnRegionAndIspRequest &request)const;
            void describeCdnRegionAndIspAsync(const Model::DescribeCdnRegionAndIspRequest& request, const DescribeCdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnRegionAndIspOutcomeCallable describeCdnRegionAndIspCallable(const Model::DescribeCdnRegionAndIspRequest& request) const;
            SetHttpHeaderConfigOutcome setHttpHeaderConfig(const Model::SetHttpHeaderConfigRequest &request)const;
            void setHttpHeaderConfigAsync(const Model::SetHttpHeaderConfigRequest& request, const SetHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetHttpHeaderConfigOutcomeCallable setHttpHeaderConfigCallable(const Model::SetHttpHeaderConfigRequest& request) const;
            DescribeCdnDomainBaseDetailOutcome describeCdnDomainBaseDetail(const Model::DescribeCdnDomainBaseDetailRequest &request)const;
            void describeCdnDomainBaseDetailAsync(const Model::DescribeCdnDomainBaseDetailRequest& request, const DescribeCdnDomainBaseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCdnDomainBaseDetailOutcomeCallable describeCdnDomainBaseDetailCallable(const Model::DescribeCdnDomainBaseDetailRequest& request) const;
            SetUserAgentAcessRestrictionOutcome setUserAgentAcessRestriction(const Model::SetUserAgentAcessRestrictionRequest &request)const;
            void setUserAgentAcessRestrictionAsync(const Model::SetUserAgentAcessRestrictionRequest& request, const SetUserAgentAcessRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetUserAgentAcessRestrictionOutcomeCallable setUserAgentAcessRestrictionCallable(const Model::SetUserAgentAcessRestrictionRequest& request) const;
            StartCdnDomainOutcome startCdnDomain(const Model::StartCdnDomainRequest &request)const;
            void startCdnDomainAsync(const Model::StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StartCdnDomainOutcomeCallable startCdnDomainCallable(const Model::StartCdnDomainRequest& request) const;
            DescribeUserVipsByDomainOutcome describeUserVipsByDomain(const Model::DescribeUserVipsByDomainRequest &request)const;
            void describeUserVipsByDomainAsync(const Model::DescribeUserVipsByDomainRequest& request, const DescribeUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeUserVipsByDomainOutcomeCallable describeUserVipsByDomainCallable(const Model::DescribeUserVipsByDomainRequest& request) const;
            DescribeDomainUpstreamBpsOfEdgeOutcome describeDomainUpstreamBpsOfEdge(const Model::DescribeDomainUpstreamBpsOfEdgeRequest &request)const;
            void describeDomainUpstreamBpsOfEdgeAsync(const Model::DescribeDomainUpstreamBpsOfEdgeRequest& request, const DescribeDomainUpstreamBpsOfEdgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainUpstreamBpsOfEdgeOutcomeCallable describeDomainUpstreamBpsOfEdgeCallable(const Model::DescribeDomainUpstreamBpsOfEdgeRequest& request) const;
            DescribeLiveStreamOnlineUserNumByDomainOutcome describeLiveStreamOnlineUserNumByDomain(const Model::DescribeLiveStreamOnlineUserNumByDomainRequest &request)const;
            void describeLiveStreamOnlineUserNumByDomainAsync(const Model::DescribeLiveStreamOnlineUserNumByDomainRequest& request, const DescribeLiveStreamOnlineUserNumByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamOnlineUserNumByDomainOutcomeCallable describeLiveStreamOnlineUserNumByDomainCallable(const Model::DescribeLiveStreamOnlineUserNumByDomainRequest& request) const;
            DescribeDomainHttpsDataOutcome describeDomainHttpsData(const Model::DescribeDomainHttpsDataRequest &request)const;
            void describeDomainHttpsDataAsync(const Model::DescribeDomainHttpsDataRequest& request, const DescribeDomainHttpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainHttpsDataOutcomeCallable describeDomainHttpsDataCallable(const Model::DescribeDomainHttpsDataRequest& request) const;
            DescribeLiveStreamHlsOnlineUserNumByDomainOutcome describeLiveStreamHlsOnlineUserNumByDomain(const Model::DescribeLiveStreamHlsOnlineUserNumByDomainRequest &request)const;
            void describeLiveStreamHlsOnlineUserNumByDomainAsync(const Model::DescribeLiveStreamHlsOnlineUserNumByDomainRequest& request, const DescribeLiveStreamHlsOnlineUserNumByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLiveStreamHlsOnlineUserNumByDomainOutcomeCallable describeLiveStreamHlsOnlineUserNumByDomainCallable(const Model::DescribeLiveStreamHlsOnlineUserNumByDomainRequest& request) const;
            DescribeDomainHttpCodeDataOutcome describeDomainHttpCodeData(const Model::DescribeDomainHttpCodeDataRequest &request)const;
            void describeDomainHttpCodeDataAsync(const Model::DescribeDomainHttpCodeDataRequest& request, const DescribeDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeDomainHttpCodeDataOutcomeCallable describeDomainHttpCodeDataCallable(const Model::DescribeDomainHttpCodeDataRequest& request) const;
	
		private:
			virtual EndpointOutcome endpoint()const override;
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CDN_CDNCLIENT_H_
