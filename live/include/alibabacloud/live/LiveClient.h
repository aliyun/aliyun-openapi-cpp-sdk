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

#ifndef ALIBABACLOUD_LIVE_LIVECLIENT_H_
#define ALIBABACLOUD_LIVE_LIVECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LiveExport.h"
#include "model/AddCasterComponentRequest.h"
#include "model/AddCasterComponentResult.h"
#include "model/AddCasterEpisodeRequest.h"
#include "model/AddCasterEpisodeResult.h"
#include "model/AddCasterEpisodeGroupRequest.h"
#include "model/AddCasterEpisodeGroupResult.h"
#include "model/AddCasterEpisodeGroupContentRequest.h"
#include "model/AddCasterEpisodeGroupContentResult.h"
#include "model/AddCasterLayoutRequest.h"
#include "model/AddCasterLayoutResult.h"
#include "model/AddCasterProgramRequest.h"
#include "model/AddCasterProgramResult.h"
#include "model/AddCasterVideoResourceRequest.h"
#include "model/AddCasterVideoResourceResult.h"
#include "model/AddCustomLiveStreamTranscodeRequest.h"
#include "model/AddCustomLiveStreamTranscodeResult.h"
#include "model/AddLiveAIProduceRulesRequest.h"
#include "model/AddLiveAIProduceRulesResult.h"
#include "model/AddLiveAISubtitleRequest.h"
#include "model/AddLiveAISubtitleResult.h"
#include "model/AddLiveAppRecordConfigRequest.h"
#include "model/AddLiveAppRecordConfigResult.h"
#include "model/AddLiveAppSnapshotConfigRequest.h"
#include "model/AddLiveAppSnapshotConfigResult.h"
#include "model/AddLiveAudioAuditConfigRequest.h"
#include "model/AddLiveAudioAuditConfigResult.h"
#include "model/AddLiveAudioAuditNotifyConfigRequest.h"
#include "model/AddLiveAudioAuditNotifyConfigResult.h"
#include "model/AddLiveCenterTransferRequest.h"
#include "model/AddLiveCenterTransferResult.h"
#include "model/AddLiveDetectNotifyConfigRequest.h"
#include "model/AddLiveDetectNotifyConfigResult.h"
#include "model/AddLiveDomainRequest.h"
#include "model/AddLiveDomainResult.h"
#include "model/AddLiveDomainMappingRequest.h"
#include "model/AddLiveDomainMappingResult.h"
#include "model/AddLiveDomainPlayMappingRequest.h"
#include "model/AddLiveDomainPlayMappingResult.h"
#include "model/AddLiveMessageGroupBandRequest.h"
#include "model/AddLiveMessageGroupBandResult.h"
#include "model/AddLivePackageConfigRequest.h"
#include "model/AddLivePackageConfigResult.h"
#include "model/AddLivePullStreamInfoConfigRequest.h"
#include "model/AddLivePullStreamInfoConfigResult.h"
#include "model/AddLiveRecordNotifyConfigRequest.h"
#include "model/AddLiveRecordNotifyConfigResult.h"
#include "model/AddLiveRecordVodConfigRequest.h"
#include "model/AddLiveRecordVodConfigResult.h"
#include "model/AddLiveSnapshotDetectPornConfigRequest.h"
#include "model/AddLiveSnapshotDetectPornConfigResult.h"
#include "model/AddLiveSnapshotNotifyConfigRequest.h"
#include "model/AddLiveSnapshotNotifyConfigResult.h"
#include "model/AddLiveStreamMergeRequest.h"
#include "model/AddLiveStreamMergeResult.h"
#include "model/AddLiveStreamTranscodeRequest.h"
#include "model/AddLiveStreamTranscodeResult.h"
#include "model/AddLiveStreamWatermarkRequest.h"
#include "model/AddLiveStreamWatermarkResult.h"
#include "model/AddLiveStreamWatermarkRuleRequest.h"
#include "model/AddLiveStreamWatermarkRuleResult.h"
#include "model/AddPlaylistItemsRequest.h"
#include "model/AddPlaylistItemsResult.h"
#include "model/AddRtsLiveStreamTranscodeRequest.h"
#include "model/AddRtsLiveStreamTranscodeResult.h"
#include "model/AddShowIntoShowListRequest.h"
#include "model/AddShowIntoShowListResult.h"
#include "model/AddStudioLayoutRequest.h"
#include "model/AddStudioLayoutResult.h"
#include "model/AddTrancodeSEIRequest.h"
#include "model/AddTrancodeSEIResult.h"
#include "model/BanLiveMessageGroupRequest.h"
#include "model/BanLiveMessageGroupResult.h"
#include "model/BatchDeleteLiveDomainConfigsRequest.h"
#include "model/BatchDeleteLiveDomainConfigsResult.h"
#include "model/BatchGetOnlineUsersRequest.h"
#include "model/BatchGetOnlineUsersResult.h"
#include "model/BatchSetLiveDomainConfigsRequest.h"
#include "model/BatchSetLiveDomainConfigsResult.h"
#include "model/CancelMuteAllGroupUserRequest.h"
#include "model/CancelMuteAllGroupUserResult.h"
#include "model/CancelMuteGroupUserRequest.h"
#include "model/CancelMuteGroupUserResult.h"
#include "model/ChangeLiveDomainResourceGroupRequest.h"
#include "model/ChangeLiveDomainResourceGroupResult.h"
#include "model/CheckLiveMessageUsersInGroupRequest.h"
#include "model/CheckLiveMessageUsersInGroupResult.h"
#include "model/CheckLiveMessageUsersOnlineRequest.h"
#include "model/CheckLiveMessageUsersOnlineResult.h"
#include "model/CloseLiveShiftRequest.h"
#include "model/CloseLiveShiftResult.h"
#include "model/CopyCasterRequest.h"
#include "model/CopyCasterResult.h"
#include "model/CopyCasterSceneConfigRequest.h"
#include "model/CopyCasterSceneConfigResult.h"
#include "model/CreateCasterRequest.h"
#include "model/CreateCasterResult.h"
#include "model/CreateCustomTemplateRequest.h"
#include "model/CreateCustomTemplateResult.h"
#include "model/CreateEdgeTranscodeJobRequest.h"
#include "model/CreateEdgeTranscodeJobResult.h"
#include "model/CreateEventSubRequest.h"
#include "model/CreateEventSubResult.h"
#include "model/CreateLiveAIStudioRequest.h"
#include "model/CreateLiveAIStudioResult.h"
#include "model/CreateLiveDelayConfigRequest.h"
#include "model/CreateLiveDelayConfigResult.h"
#include "model/CreateLiveMessageAppRequest.h"
#include "model/CreateLiveMessageAppResult.h"
#include "model/CreateLiveMessageGroupRequest.h"
#include "model/CreateLiveMessageGroupResult.h"
#include "model/CreateLivePrivateLineRequest.h"
#include "model/CreateLivePrivateLineResult.h"
#include "model/CreateLivePullToPushRequest.h"
#include "model/CreateLivePullToPushResult.h"
#include "model/CreateLiveRealTimeLogDeliveryRequest.h"
#include "model/CreateLiveRealTimeLogDeliveryResult.h"
#include "model/CreateLiveStreamMonitorRequest.h"
#include "model/CreateLiveStreamMonitorResult.h"
#include "model/CreateLiveStreamRecordIndexFilesRequest.h"
#include "model/CreateLiveStreamRecordIndexFilesResult.h"
#include "model/CreateMessageAppRequest.h"
#include "model/CreateMessageAppResult.h"
#include "model/CreateMessageGroupRequest.h"
#include "model/CreateMessageGroupResult.h"
#include "model/CreateMixStreamRequest.h"
#include "model/CreateMixStreamResult.h"
#include "model/CreateRTCWhipStreamAddressRequest.h"
#include "model/CreateRTCWhipStreamAddressResult.h"
#include "model/CreateRoomRealTimeStreamAddressRequest.h"
#include "model/CreateRoomRealTimeStreamAddressResult.h"
#include "model/CreateRtcAsrTaskRequest.h"
#include "model/CreateRtcAsrTaskResult.h"
#include "model/CreateRtcMPUEventSubRequest.h"
#include "model/CreateRtcMPUEventSubResult.h"
#include "model/DeleteCasterRequest.h"
#include "model/DeleteCasterResult.h"
#include "model/DeleteCasterComponentRequest.h"
#include "model/DeleteCasterComponentResult.h"
#include "model/DeleteCasterEpisodeRequest.h"
#include "model/DeleteCasterEpisodeResult.h"
#include "model/DeleteCasterEpisodeGroupRequest.h"
#include "model/DeleteCasterEpisodeGroupResult.h"
#include "model/DeleteCasterLayoutRequest.h"
#include "model/DeleteCasterLayoutResult.h"
#include "model/DeleteCasterProgramRequest.h"
#include "model/DeleteCasterProgramResult.h"
#include "model/DeleteCasterSceneConfigRequest.h"
#include "model/DeleteCasterSceneConfigResult.h"
#include "model/DeleteCasterVideoResourceRequest.h"
#include "model/DeleteCasterVideoResourceResult.h"
#include "model/DeleteChannelRequest.h"
#include "model/DeleteChannelResult.h"
#include "model/DeleteCustomTemplateRequest.h"
#include "model/DeleteCustomTemplateResult.h"
#include "model/DeleteEdgeTranscodeJobRequest.h"
#include "model/DeleteEdgeTranscodeJobResult.h"
#include "model/DeleteEventSubRequest.h"
#include "model/DeleteEventSubResult.h"
#include "model/DeleteLiveAIProduceRulesRequest.h"
#include "model/DeleteLiveAIProduceRulesResult.h"
#include "model/DeleteLiveAIStudioRequest.h"
#include "model/DeleteLiveAIStudioResult.h"
#include "model/DeleteLiveAISubtitleRequest.h"
#include "model/DeleteLiveAISubtitleResult.h"
#include "model/DeleteLiveAppRecordConfigRequest.h"
#include "model/DeleteLiveAppRecordConfigResult.h"
#include "model/DeleteLiveAppSnapshotConfigRequest.h"
#include "model/DeleteLiveAppSnapshotConfigResult.h"
#include "model/DeleteLiveAudioAuditConfigRequest.h"
#include "model/DeleteLiveAudioAuditConfigResult.h"
#include "model/DeleteLiveAudioAuditNotifyConfigRequest.h"
#include "model/DeleteLiveAudioAuditNotifyConfigResult.h"
#include "model/DeleteLiveCenterTransferRequest.h"
#include "model/DeleteLiveCenterTransferResult.h"
#include "model/DeleteLiveDelayConfigRequest.h"
#include "model/DeleteLiveDelayConfigResult.h"
#include "model/DeleteLiveDetectNotifyConfigRequest.h"
#include "model/DeleteLiveDetectNotifyConfigResult.h"
#include "model/DeleteLiveDomainRequest.h"
#include "model/DeleteLiveDomainResult.h"
#include "model/DeleteLiveDomainMappingRequest.h"
#include "model/DeleteLiveDomainMappingResult.h"
#include "model/DeleteLiveDomainPlayMappingRequest.h"
#include "model/DeleteLiveDomainPlayMappingResult.h"
#include "model/DeleteLiveEdgeTransferRequest.h"
#include "model/DeleteLiveEdgeTransferResult.h"
#include "model/DeleteLiveLazyPullStreamInfoConfigRequest.h"
#include "model/DeleteLiveLazyPullStreamInfoConfigResult.h"
#include "model/DeleteLiveMessageGroupRequest.h"
#include "model/DeleteLiveMessageGroupResult.h"
#include "model/DeleteLiveMessageGroupMessageRequest.h"
#include "model/DeleteLiveMessageGroupMessageResult.h"
#include "model/DeleteLiveMessageUserMessageRequest.h"
#include "model/DeleteLiveMessageUserMessageResult.h"
#include "model/DeleteLivePackageConfigRequest.h"
#include "model/DeleteLivePackageConfigResult.h"
#include "model/DeleteLivePrivateLineRequest.h"
#include "model/DeleteLivePrivateLineResult.h"
#include "model/DeleteLivePullStreamInfoConfigRequest.h"
#include "model/DeleteLivePullStreamInfoConfigResult.h"
#include "model/DeleteLivePullToPushRequest.h"
#include "model/DeleteLivePullToPushResult.h"
#include "model/DeleteLiveRealTimeLogLogstoreRequest.h"
#include "model/DeleteLiveRealTimeLogLogstoreResult.h"
#include "model/DeleteLiveRealtimeLogDeliveryRequest.h"
#include "model/DeleteLiveRealtimeLogDeliveryResult.h"
#include "model/DeleteLiveRecordNotifyConfigRequest.h"
#include "model/DeleteLiveRecordNotifyConfigResult.h"
#include "model/DeleteLiveRecordVodConfigRequest.h"
#include "model/DeleteLiveRecordVodConfigResult.h"
#include "model/DeleteLiveSnapshotDetectPornConfigRequest.h"
#include "model/DeleteLiveSnapshotDetectPornConfigResult.h"
#include "model/DeleteLiveSnapshotNotifyConfigRequest.h"
#include "model/DeleteLiveSnapshotNotifyConfigResult.h"
#include "model/DeleteLiveSpecificStagingConfigRequest.h"
#include "model/DeleteLiveSpecificStagingConfigResult.h"
#include "model/DeleteLiveStreamBlockRequest.h"
#include "model/DeleteLiveStreamBlockResult.h"
#include "model/DeleteLiveStreamMergeRequest.h"
#include "model/DeleteLiveStreamMergeResult.h"
#include "model/DeleteLiveStreamMonitorRequest.h"
#include "model/DeleteLiveStreamMonitorResult.h"
#include "model/DeleteLiveStreamRecordIndexFilesRequest.h"
#include "model/DeleteLiveStreamRecordIndexFilesResult.h"
#include "model/DeleteLiveStreamTranscodeRequest.h"
#include "model/DeleteLiveStreamTranscodeResult.h"
#include "model/DeleteLiveStreamWatermarkRequest.h"
#include "model/DeleteLiveStreamWatermarkResult.h"
#include "model/DeleteLiveStreamWatermarkRuleRequest.h"
#include "model/DeleteLiveStreamWatermarkRuleResult.h"
#include "model/DeleteLiveStreamsNotifyUrlConfigRequest.h"
#include "model/DeleteLiveStreamsNotifyUrlConfigResult.h"
#include "model/DeleteMessageAppRequest.h"
#include "model/DeleteMessageAppResult.h"
#include "model/DeleteMixStreamRequest.h"
#include "model/DeleteMixStreamResult.h"
#include "model/DeletePlaylistRequest.h"
#include "model/DeletePlaylistResult.h"
#include "model/DeletePlaylistItemsRequest.h"
#include "model/DeletePlaylistItemsResult.h"
#include "model/DeleteRtcAsrTaskRequest.h"
#include "model/DeleteRtcAsrTaskResult.h"
#include "model/DeleteRtcMPUEventSubRequest.h"
#include "model/DeleteRtcMPUEventSubResult.h"
#include "model/DeleteSnapshotCallbackAuthRequest.h"
#include "model/DeleteSnapshotCallbackAuthResult.h"
#include "model/DeleteSnapshotFilesRequest.h"
#include "model/DeleteSnapshotFilesResult.h"
#include "model/DeleteStudioLayoutRequest.h"
#include "model/DeleteStudioLayoutResult.h"
#include "model/DescribeAutoShowListTasksRequest.h"
#include "model/DescribeAutoShowListTasksResult.h"
#include "model/DescribeCasterChannelsRequest.h"
#include "model/DescribeCasterChannelsResult.h"
#include "model/DescribeCasterComponentsRequest.h"
#include "model/DescribeCasterComponentsResult.h"
#include "model/DescribeCasterConfigRequest.h"
#include "model/DescribeCasterConfigResult.h"
#include "model/DescribeCasterLayoutsRequest.h"
#include "model/DescribeCasterLayoutsResult.h"
#include "model/DescribeCasterProgramRequest.h"
#include "model/DescribeCasterProgramResult.h"
#include "model/DescribeCasterSceneAudioRequest.h"
#include "model/DescribeCasterSceneAudioResult.h"
#include "model/DescribeCasterScenesRequest.h"
#include "model/DescribeCasterScenesResult.h"
#include "model/DescribeCasterStreamUrlRequest.h"
#include "model/DescribeCasterStreamUrlResult.h"
#include "model/DescribeCasterVideoResourcesRequest.h"
#include "model/DescribeCasterVideoResourcesResult.h"
#include "model/DescribeCastersRequest.h"
#include "model/DescribeCastersResult.h"
#include "model/DescribeChannelParticipantsRequest.h"
#include "model/DescribeChannelParticipantsResult.h"
#include "model/DescribeChannelUsersRequest.h"
#include "model/DescribeChannelUsersResult.h"
#include "model/DescribeDomainUsageDataRequest.h"
#include "model/DescribeDomainUsageDataResult.h"
#include "model/DescribeDomainWithIntegrityRequest.h"
#include "model/DescribeDomainWithIntegrityResult.h"
#include "model/DescribeHlsLiveStreamRealTimeBpsDataRequest.h"
#include "model/DescribeHlsLiveStreamRealTimeBpsDataResult.h"
#include "model/DescribeLiveAIProduceRulesRequest.h"
#include "model/DescribeLiveAIProduceRulesResult.h"
#include "model/DescribeLiveAIStudioRequest.h"
#include "model/DescribeLiveAIStudioResult.h"
#include "model/DescribeLiveAISubtitleRequest.h"
#include "model/DescribeLiveAISubtitleResult.h"
#include "model/DescribeLiveAudioAuditConfigRequest.h"
#include "model/DescribeLiveAudioAuditConfigResult.h"
#include "model/DescribeLiveAudioAuditNotifyConfigRequest.h"
#include "model/DescribeLiveAudioAuditNotifyConfigResult.h"
#include "model/DescribeLiveCdnDiagnoseInfoRequest.h"
#include "model/DescribeLiveCdnDiagnoseInfoResult.h"
#include "model/DescribeLiveCenterStreamRateDataRequest.h"
#include "model/DescribeLiveCenterStreamRateDataResult.h"
#include "model/DescribeLiveCenterTransferRequest.h"
#include "model/DescribeLiveCenterTransferResult.h"
#include "model/DescribeLiveCertificateDetailRequest.h"
#include "model/DescribeLiveCertificateDetailResult.h"
#include "model/DescribeLiveCertificateListRequest.h"
#include "model/DescribeLiveCertificateListResult.h"
#include "model/DescribeLiveDelayConfigRequest.h"
#include "model/DescribeLiveDelayConfigResult.h"
#include "model/DescribeLiveDelayedStreamingUsageRequest.h"
#include "model/DescribeLiveDelayedStreamingUsageResult.h"
#include "model/DescribeLiveDetectNotifyConfigRequest.h"
#include "model/DescribeLiveDetectNotifyConfigResult.h"
#include "model/DescribeLiveDetectPornDataRequest.h"
#include "model/DescribeLiveDetectPornDataResult.h"
#include "model/DescribeLiveDomainBpsDataRequest.h"
#include "model/DescribeLiveDomainBpsDataResult.h"
#include "model/DescribeLiveDomainBpsDataByLayerRequest.h"
#include "model/DescribeLiveDomainBpsDataByLayerResult.h"
#include "model/DescribeLiveDomainByCertificateRequest.h"
#include "model/DescribeLiveDomainByCertificateResult.h"
#include "model/DescribeLiveDomainCertificateInfoRequest.h"
#include "model/DescribeLiveDomainCertificateInfoResult.h"
#include "model/DescribeLiveDomainConfigsRequest.h"
#include "model/DescribeLiveDomainConfigsResult.h"
#include "model/DescribeLiveDomainDetailRequest.h"
#include "model/DescribeLiveDomainDetailResult.h"
#include "model/DescribeLiveDomainEdgeLogRequest.h"
#include "model/DescribeLiveDomainEdgeLogResult.h"
#include "model/DescribeLiveDomainFrameRateAndBitRateDataRequest.h"
#include "model/DescribeLiveDomainFrameRateAndBitRateDataResult.h"
#include "model/DescribeLiveDomainLimitRequest.h"
#include "model/DescribeLiveDomainLimitResult.h"
#include "model/DescribeLiveDomainLogRequest.h"
#include "model/DescribeLiveDomainLogResult.h"
#include "model/DescribeLiveDomainLogExTtlRequest.h"
#include "model/DescribeLiveDomainLogExTtlResult.h"
#include "model/DescribeLiveDomainMappingRequest.h"
#include "model/DescribeLiveDomainMappingResult.h"
#include "model/DescribeLiveDomainMonitoringUsageDataRequest.h"
#include "model/DescribeLiveDomainMonitoringUsageDataResult.h"
#include "model/DescribeLiveDomainMultiStreamConfigRequest.h"
#include "model/DescribeLiveDomainMultiStreamConfigResult.h"
#include "model/DescribeLiveDomainOnlineUserNumRequest.h"
#include "model/DescribeLiveDomainOnlineUserNumResult.h"
#include "model/DescribeLiveDomainPublishErrorCodeRequest.h"
#include "model/DescribeLiveDomainPublishErrorCodeResult.h"
#include "model/DescribeLiveDomainPushBpsDataRequest.h"
#include "model/DescribeLiveDomainPushBpsDataResult.h"
#include "model/DescribeLiveDomainPushTrafficDataRequest.h"
#include "model/DescribeLiveDomainPushTrafficDataResult.h"
#include "model/DescribeLiveDomainPvUvDataRequest.h"
#include "model/DescribeLiveDomainPvUvDataResult.h"
#include "model/DescribeLiveDomainRealTimeBpsDataRequest.h"
#include "model/DescribeLiveDomainRealTimeBpsDataResult.h"
#include "model/DescribeLiveDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeLiveDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeLiveDomainRealTimeTrafficDataRequest.h"
#include "model/DescribeLiveDomainRealTimeTrafficDataResult.h"
#include "model/DescribeLiveDomainRealtimeLogDeliveryRequest.h"
#include "model/DescribeLiveDomainRealtimeLogDeliveryResult.h"
#include "model/DescribeLiveDomainRecordUsageDataRequest.h"
#include "model/DescribeLiveDomainRecordUsageDataResult.h"
#include "model/DescribeLiveDomainSnapshotDataRequest.h"
#include "model/DescribeLiveDomainSnapshotDataResult.h"
#include "model/DescribeLiveDomainStagingConfigRequest.h"
#include "model/DescribeLiveDomainStagingConfigResult.h"
#include "model/DescribeLiveDomainStreamTranscodeDataRequest.h"
#include "model/DescribeLiveDomainStreamTranscodeDataResult.h"
#include "model/DescribeLiveDomainTimeShiftDataRequest.h"
#include "model/DescribeLiveDomainTimeShiftDataResult.h"
#include "model/DescribeLiveDomainTrafficDataRequest.h"
#include "model/DescribeLiveDomainTrafficDataResult.h"
#include "model/DescribeLiveDomainTranscodeParamsRequest.h"
#include "model/DescribeLiveDomainTranscodeParamsResult.h"
#include "model/DescribeLiveDrmUsageDataRequest.h"
#include "model/DescribeLiveDrmUsageDataResult.h"
#include "model/DescribeLiveEdgeTransferRequest.h"
#include "model/DescribeLiveEdgeTransferResult.h"
#include "model/DescribeLiveGrtnDurationRequest.h"
#include "model/DescribeLiveGrtnDurationResult.h"
#include "model/DescribeLiveHttpsDomainListRequest.h"
#include "model/DescribeLiveHttpsDomainListResult.h"
#include "model/DescribeLiveInteractionMetricDataRequest.h"
#include "model/DescribeLiveInteractionMetricDataResult.h"
#include "model/DescribeLiveIpInfoRequest.h"
#include "model/DescribeLiveIpInfoResult.h"
#include "model/DescribeLiveLazyPullStreamConfigRequest.h"
#include "model/DescribeLiveLazyPullStreamConfigResult.h"
#include "model/DescribeLiveMessageAppRequest.h"
#include "model/DescribeLiveMessageAppResult.h"
#include "model/DescribeLiveMessageGroupRequest.h"
#include "model/DescribeLiveMessageGroupResult.h"
#include "model/DescribeLiveMessageGroupBandRequest.h"
#include "model/DescribeLiveMessageGroupBandResult.h"
#include "model/DescribeLivePackageConfigRequest.h"
#include "model/DescribeLivePackageConfigResult.h"
#include "model/DescribeLivePrivateLineAreasRequest.h"
#include "model/DescribeLivePrivateLineAreasResult.h"
#include "model/DescribeLivePrivateLineAvailGARequest.h"
#include "model/DescribeLivePrivateLineAvailGAResult.h"
#include "model/DescribeLiveProducerUsageDataRequest.h"
#include "model/DescribeLiveProducerUsageDataResult.h"
#include "model/DescribeLivePullStreamConfigRequest.h"
#include "model/DescribeLivePullStreamConfigResult.h"
#include "model/DescribeLivePullToPushRequest.h"
#include "model/DescribeLivePullToPushResult.h"
#include "model/DescribeLivePullToPushListRequest.h"
#include "model/DescribeLivePullToPushListResult.h"
#include "model/DescribeLivePushProxyLogRequest.h"
#include "model/DescribeLivePushProxyLogResult.h"
#include "model/DescribeLivePushProxyUsageDataRequest.h"
#include "model/DescribeLivePushProxyUsageDataResult.h"
#include "model/DescribeLiveRealtimeDeliveryAccRequest.h"
#include "model/DescribeLiveRealtimeDeliveryAccResult.h"
#include "model/DescribeLiveRealtimeLogAuthorizedRequest.h"
#include "model/DescribeLiveRealtimeLogAuthorizedResult.h"
#include "model/DescribeLiveRecordConfigRequest.h"
#include "model/DescribeLiveRecordConfigResult.h"
#include "model/DescribeLiveRecordNotifyConfigRequest.h"
#include "model/DescribeLiveRecordNotifyConfigResult.h"
#include "model/DescribeLiveRecordNotifyRecordsRequest.h"
#include "model/DescribeLiveRecordNotifyRecordsResult.h"
#include "model/DescribeLiveRecordVodConfigsRequest.h"
#include "model/DescribeLiveRecordVodConfigsResult.h"
#include "model/DescribeLiveShiftConfigsRequest.h"
#include "model/DescribeLiveShiftConfigsResult.h"
#include "model/DescribeLiveSnapshotConfigRequest.h"
#include "model/DescribeLiveSnapshotConfigResult.h"
#include "model/DescribeLiveSnapshotDetectPornConfigRequest.h"
#include "model/DescribeLiveSnapshotDetectPornConfigResult.h"
#include "model/DescribeLiveSnapshotNotifyConfigRequest.h"
#include "model/DescribeLiveSnapshotNotifyConfigResult.h"
#include "model/DescribeLiveStreamAuthCheckingRequest.h"
#include "model/DescribeLiveStreamAuthCheckingResult.h"
#include "model/DescribeLiveStreamBitRateDataRequest.h"
#include "model/DescribeLiveStreamBitRateDataResult.h"
#include "model/DescribeLiveStreamCountRequest.h"
#include "model/DescribeLiveStreamCountResult.h"
#include "model/DescribeLiveStreamDelayConfigRequest.h"
#include "model/DescribeLiveStreamDelayConfigResult.h"
#include "model/DescribeLiveStreamDetailFrameRateAndBitRateDataRequest.h"
#include "model/DescribeLiveStreamDetailFrameRateAndBitRateDataResult.h"
#include "model/DescribeLiveStreamHistoryUserNumRequest.h"
#include "model/DescribeLiveStreamHistoryUserNumResult.h"
#include "model/DescribeLiveStreamMergeRequest.h"
#include "model/DescribeLiveStreamMergeResult.h"
#include "model/DescribeLiveStreamMetricDetailDataRequest.h"
#include "model/DescribeLiveStreamMetricDetailDataResult.h"
#include "model/DescribeLiveStreamMonitorListRequest.h"
#include "model/DescribeLiveStreamMonitorListResult.h"
#include "model/DescribeLiveStreamPreloadTasksRequest.h"
#include "model/DescribeLiveStreamPreloadTasksResult.h"
#include "model/DescribeLiveStreamPushMetricDetailDataRequest.h"
#include "model/DescribeLiveStreamPushMetricDetailDataResult.h"
#include "model/DescribeLiveStreamRecordContentRequest.h"
#include "model/DescribeLiveStreamRecordContentResult.h"
#include "model/DescribeLiveStreamRecordIndexFileRequest.h"
#include "model/DescribeLiveStreamRecordIndexFileResult.h"
#include "model/DescribeLiveStreamRecordIndexFilesRequest.h"
#include "model/DescribeLiveStreamRecordIndexFilesResult.h"
#include "model/DescribeLiveStreamSnapshotInfoRequest.h"
#include "model/DescribeLiveStreamSnapshotInfoResult.h"
#include "model/DescribeLiveStreamStateRequest.h"
#include "model/DescribeLiveStreamStateResult.h"
#include "model/DescribeLiveStreamTranscodeInfoRequest.h"
#include "model/DescribeLiveStreamTranscodeInfoResult.h"
#include "model/DescribeLiveStreamTranscodeMetricDataRequest.h"
#include "model/DescribeLiveStreamTranscodeMetricDataResult.h"
#include "model/DescribeLiveStreamTranscodeStreamNumRequest.h"
#include "model/DescribeLiveStreamTranscodeStreamNumResult.h"
#include "model/DescribeLiveStreamWatermarkRulesRequest.h"
#include "model/DescribeLiveStreamWatermarkRulesResult.h"
#include "model/DescribeLiveStreamWatermarksRequest.h"
#include "model/DescribeLiveStreamWatermarksResult.h"
#include "model/DescribeLiveStreamsBlockListRequest.h"
#include "model/DescribeLiveStreamsBlockListResult.h"
#include "model/DescribeLiveStreamsControlHistoryRequest.h"
#include "model/DescribeLiveStreamsControlHistoryResult.h"
#include "model/DescribeLiveStreamsNotifyRecordsRequest.h"
#include "model/DescribeLiveStreamsNotifyRecordsResult.h"
#include "model/DescribeLiveStreamsNotifyUrlConfigRequest.h"
#include "model/DescribeLiveStreamsNotifyUrlConfigResult.h"
#include "model/DescribeLiveStreamsOnlineListRequest.h"
#include "model/DescribeLiveStreamsOnlineListResult.h"
#include "model/DescribeLiveStreamsPublishListRequest.h"
#include "model/DescribeLiveStreamsPublishListResult.h"
#include "model/DescribeLiveStreamsTotalCountRequest.h"
#include "model/DescribeLiveStreamsTotalCountResult.h"
#include "model/DescribeLiveTopDomainsByFlowRequest.h"
#include "model/DescribeLiveTopDomainsByFlowResult.h"
#include "model/DescribeLiveTrafficDomainLogRequest.h"
#include "model/DescribeLiveTrafficDomainLogResult.h"
#include "model/DescribeLiveUpVideoAudioInfoRequest.h"
#include "model/DescribeLiveUpVideoAudioInfoResult.h"
#include "model/DescribeLiveUserBillPredictionRequest.h"
#include "model/DescribeLiveUserBillPredictionResult.h"
#include "model/DescribeLiveUserDomainsRequest.h"
#include "model/DescribeLiveUserDomainsResult.h"
#include "model/DescribeLiveUserStreamMetricDataRequest.h"
#include "model/DescribeLiveUserStreamMetricDataResult.h"
#include "model/DescribeLiveUserTagsRequest.h"
#include "model/DescribeLiveUserTagsResult.h"
#include "model/DescribeLiveUserTrafficLogRequest.h"
#include "model/DescribeLiveUserTrafficLogResult.h"
#include "model/DescribeLiveVerifyContentRequest.h"
#include "model/DescribeLiveVerifyContentResult.h"
#include "model/DescribeMeterLiveBypassDurationRequest.h"
#include "model/DescribeMeterLiveBypassDurationResult.h"
#include "model/DescribeMixStreamListRequest.h"
#include "model/DescribeMixStreamListResult.h"
#include "model/DescribeRTSNativeSDKFirstFrameCostRequest.h"
#include "model/DescribeRTSNativeSDKFirstFrameCostResult.h"
#include "model/DescribeRTSNativeSDKFirstFrameDelayRequest.h"
#include "model/DescribeRTSNativeSDKFirstFrameDelayResult.h"
#include "model/DescribeRTSNativeSDKPlayFailStatusRequest.h"
#include "model/DescribeRTSNativeSDKPlayFailStatusResult.h"
#include "model/DescribeRTSNativeSDKPlayTimeRequest.h"
#include "model/DescribeRTSNativeSDKPlayTimeResult.h"
#include "model/DescribeRTSNativeSDKVvDataRequest.h"
#include "model/DescribeRTSNativeSDKVvDataResult.h"
#include "model/DescribeRtcCloudRecordingFilesRequest.h"
#include "model/DescribeRtcCloudRecordingFilesResult.h"
#include "model/DescribeRtcMPUEventSubRequest.h"
#include "model/DescribeRtcMPUEventSubResult.h"
#include "model/DescribeShowListRequest.h"
#include "model/DescribeShowListResult.h"
#include "model/DescribeStreamLocationBlockRequest.h"
#include "model/DescribeStreamLocationBlockResult.h"
#include "model/DescribeStudioLayoutsRequest.h"
#include "model/DescribeStudioLayoutsResult.h"
#include "model/DescribeToutiaoLivePlayRequest.h"
#include "model/DescribeToutiaoLivePlayResult.h"
#include "model/DescribeToutiaoLivePublishRequest.h"
#include "model/DescribeToutiaoLivePublishResult.h"
#include "model/DescribeUidOnlineStreamsRequest.h"
#include "model/DescribeUidOnlineStreamsResult.h"
#include "model/DescribeUpBpsPeakDataRequest.h"
#include "model/DescribeUpBpsPeakDataResult.h"
#include "model/DescribeUpBpsPeakOfLineRequest.h"
#include "model/DescribeUpBpsPeakOfLineResult.h"
#include "model/DescribeUpPeakPublishStreamDataRequest.h"
#include "model/DescribeUpPeakPublishStreamDataResult.h"
#include "model/DisableLiveRealtimeLogDeliveryRequest.h"
#include "model/DisableLiveRealtimeLogDeliveryResult.h"
#include "model/DynamicUpdateWaterMarkStreamRuleRequest.h"
#include "model/DynamicUpdateWaterMarkStreamRuleResult.h"
#include "model/EditPlaylistRequest.h"
#include "model/EditPlaylistResult.h"
#include "model/EditShowAndReplaceRequest.h"
#include "model/EditShowAndReplaceResult.h"
#include "model/EffectCasterUrgentRequest.h"
#include "model/EffectCasterUrgentResult.h"
#include "model/EffectCasterVideoResourceRequest.h"
#include "model/EffectCasterVideoResourceResult.h"
#include "model/EnableLiveRealtimeLogDeliveryRequest.h"
#include "model/EnableLiveRealtimeLogDeliveryResult.h"
#include "model/ForbidLiveStreamRequest.h"
#include "model/ForbidLiveStreamResult.h"
#include "model/GetAllCustomTemplatesRequest.h"
#include "model/GetAllCustomTemplatesResult.h"
#include "model/GetCustomTemplateRequest.h"
#include "model/GetCustomTemplateResult.h"
#include "model/GetEdgeTranscodeJobRequest.h"
#include "model/GetEdgeTranscodeJobResult.h"
#include "model/GetEdgeTranscodeTemplateRequest.h"
#include "model/GetEdgeTranscodeTemplateResult.h"
#include "model/GetEditingJobInfoRequest.h"
#include "model/GetEditingJobInfoResult.h"
#include "model/GetMessageAppRequest.h"
#include "model/GetMessageAppResult.h"
#include "model/GetMessageGroupRequest.h"
#include "model/GetMessageGroupResult.h"
#include "model/GetMessageTokenRequest.h"
#include "model/GetMessageTokenResult.h"
#include "model/GetTranscodeTaskStatusRequest.h"
#include "model/GetTranscodeTaskStatusResult.h"
#include "model/HotLiveRtcStreamRequest.h"
#include "model/HotLiveRtcStreamResult.h"
#include "model/InitializeAutoShowListTaskRequest.h"
#include "model/InitializeAutoShowListTaskResult.h"
#include "model/JoinMessageGroupRequest.h"
#include "model/JoinMessageGroupResult.h"
#include "model/KickLiveMessageGroupUserRequest.h"
#include "model/KickLiveMessageGroupUserResult.h"
#include "model/LeaveMessageGroupRequest.h"
#include "model/LeaveMessageGroupResult.h"
#include "model/ListEdgeTranscodeJobRequest.h"
#include "model/ListEdgeTranscodeJobResult.h"
#include "model/ListEdgeTranscodeTemplateRequest.h"
#include "model/ListEdgeTranscodeTemplateResult.h"
#include "model/ListEventSubRequest.h"
#include "model/ListEventSubResult.h"
#include "model/ListEventSubEventRequest.h"
#include "model/ListEventSubEventResult.h"
#include "model/ListLiveDelayConfigRequest.h"
#include "model/ListLiveDelayConfigResult.h"
#include "model/ListLiveMessageAppsRequest.h"
#include "model/ListLiveMessageAppsResult.h"
#include "model/ListLiveMessageGroupByPageRequest.h"
#include "model/ListLiveMessageGroupByPageResult.h"
#include "model/ListLiveMessageGroupMessagesRequest.h"
#include "model/ListLiveMessageGroupMessagesResult.h"
#include "model/ListLiveMessageGroupUsersRequest.h"
#include "model/ListLiveMessageGroupUsersResult.h"
#include "model/ListLiveMessageGroupsRequest.h"
#include "model/ListLiveMessageGroupsResult.h"
#include "model/ListLiveRealtimeLogDeliveryRequest.h"
#include "model/ListLiveRealtimeLogDeliveryResult.h"
#include "model/ListLiveRealtimeLogDeliveryDomainsRequest.h"
#include "model/ListLiveRealtimeLogDeliveryDomainsResult.h"
#include "model/ListLiveRealtimeLogDeliveryInfosRequest.h"
#include "model/ListLiveRealtimeLogDeliveryInfosResult.h"
#include "model/ListMessageRequest.h"
#include "model/ListMessageResult.h"
#include "model/ListMessageAppRequest.h"
#include "model/ListMessageAppResult.h"
#include "model/ListMessageGroupRequest.h"
#include "model/ListMessageGroupResult.h"
#include "model/ListMessageGroupUserRequest.h"
#include "model/ListMessageGroupUserResult.h"
#include "model/ListMessageGroupUserByIdRequest.h"
#include "model/ListMessageGroupUserByIdResult.h"
#include "model/ListMuteGroupUserRequest.h"
#include "model/ListMuteGroupUserResult.h"
#include "model/ListPlaylistRequest.h"
#include "model/ListPlaylistResult.h"
#include "model/ListPlaylistItemsRequest.h"
#include "model/ListPlaylistItemsResult.h"
#include "model/ListRtcMPUEventSubRecordRequest.h"
#include "model/ListRtcMPUEventSubRecordResult.h"
#include "model/ListRtcMPUTaskDetailRequest.h"
#include "model/ListRtcMPUTaskDetailResult.h"
#include "model/LiveUpstreamQosDataRequest.h"
#include "model/LiveUpstreamQosDataResult.h"
#include "model/MiguLivePullToPushStartRequest.h"
#include "model/MiguLivePullToPushStartResult.h"
#include "model/MiguLivePullToPushStatusRequest.h"
#include "model/MiguLivePullToPushStatusResult.h"
#include "model/ModifyCasterComponentRequest.h"
#include "model/ModifyCasterComponentResult.h"
#include "model/ModifyCasterEpisodeRequest.h"
#include "model/ModifyCasterEpisodeResult.h"
#include "model/ModifyCasterLayoutRequest.h"
#include "model/ModifyCasterLayoutResult.h"
#include "model/ModifyCasterProgramRequest.h"
#include "model/ModifyCasterProgramResult.h"
#include "model/ModifyCasterVideoResourceRequest.h"
#include "model/ModifyCasterVideoResourceResult.h"
#include "model/ModifyLiveAIStudioRequest.h"
#include "model/ModifyLiveAIStudioResult.h"
#include "model/ModifyLiveDomainSchdmByPropertyRequest.h"
#include "model/ModifyLiveDomainSchdmByPropertyResult.h"
#include "model/ModifyLiveMessageAppAuditRequest.h"
#include "model/ModifyLiveMessageAppAuditResult.h"
#include "model/ModifyLiveMessageAppCallbackRequest.h"
#include "model/ModifyLiveMessageAppCallbackResult.h"
#include "model/ModifyLiveMessageAppDisableRequest.h"
#include "model/ModifyLiveMessageAppDisableResult.h"
#include "model/ModifyLiveMessageGroupRequest.h"
#include "model/ModifyLiveMessageGroupResult.h"
#include "model/ModifyLiveMessageGroupBandRequest.h"
#include "model/ModifyLiveMessageGroupBandResult.h"
#include "model/ModifyLiveMessageUserInfoRequest.h"
#include "model/ModifyLiveMessageUserInfoResult.h"
#include "model/ModifyLiveRealtimeLogDeliveryRequest.h"
#include "model/ModifyLiveRealtimeLogDeliveryResult.h"
#include "model/ModifyShowListRequest.h"
#include "model/ModifyShowListResult.h"
#include "model/ModifyStudioLayoutRequest.h"
#include "model/ModifyStudioLayoutResult.h"
#include "model/MuteAllGroupUserRequest.h"
#include "model/MuteAllGroupUserResult.h"
#include "model/MuteGroupUserRequest.h"
#include "model/MuteGroupUserResult.h"
#include "model/OpenLiveShiftRequest.h"
#include "model/OpenLiveShiftResult.h"
#include "model/PlayChoosenShowRequest.h"
#include "model/PlayChoosenShowResult.h"
#include "model/PublishLiveStagingConfigToProductionRequest.h"
#include "model/PublishLiveStagingConfigToProductionResult.h"
#include "model/QueryLiveDomainMultiStreamListRequest.h"
#include "model/QueryLiveDomainMultiStreamListResult.h"
#include "model/QueryMessageAppRequest.h"
#include "model/QueryMessageAppResult.h"
#include "model/QueryRtcAsrTasksRequest.h"
#include "model/QueryRtcAsrTasksResult.h"
#include "model/QuerySnapshotCallbackAuthRequest.h"
#include "model/QuerySnapshotCallbackAuthResult.h"
#include "model/RealTimeRecordCommandRequest.h"
#include "model/RealTimeRecordCommandResult.h"
#include "model/RecoverLiveMessageDeletedGroupRequest.h"
#include "model/RecoverLiveMessageDeletedGroupResult.h"
#include "model/RemoveLiveMessageGroupBandRequest.h"
#include "model/RemoveLiveMessageGroupBandResult.h"
#include "model/RemoveShowFromShowListRequest.h"
#include "model/RemoveShowFromShowListResult.h"
#include "model/RemoveTerminalsRequest.h"
#include "model/RemoveTerminalsResult.h"
#include "model/RestartCasterRequest.h"
#include "model/RestartCasterResult.h"
#include "model/RestartLivePullToPushRequest.h"
#include "model/RestartLivePullToPushResult.h"
#include "model/RestartTranscodeTaskRequest.h"
#include "model/RestartTranscodeTaskResult.h"
#include "model/ResumeLiveStreamRequest.h"
#include "model/ResumeLiveStreamResult.h"
#include "model/RollbackLiveStagingConfigRequest.h"
#include "model/RollbackLiveStagingConfigResult.h"
#include "model/SendLikeRequest.h"
#include "model/SendLikeResult.h"
#include "model/SendLiveMessageGroupRequest.h"
#include "model/SendLiveMessageGroupResult.h"
#include "model/SendLiveMessageUserRequest.h"
#include "model/SendLiveMessageUserResult.h"
#include "model/SendMessageToGroupRequest.h"
#include "model/SendMessageToGroupResult.h"
#include "model/SendMessageToGroupUsersRequest.h"
#include "model/SendMessageToGroupUsersResult.h"
#include "model/SetCasterChannelRequest.h"
#include "model/SetCasterChannelResult.h"
#include "model/SetCasterConfigRequest.h"
#include "model/SetCasterConfigResult.h"
#include "model/SetCasterSceneConfigRequest.h"
#include "model/SetCasterSceneConfigResult.h"
#include "model/SetLiveDomainCertificateRequest.h"
#include "model/SetLiveDomainCertificateResult.h"
#include "model/SetLiveDomainMultiStreamConfigRequest.h"
#include "model/SetLiveDomainMultiStreamConfigResult.h"
#include "model/SetLiveDomainMultiStreamMasterRequest.h"
#include "model/SetLiveDomainMultiStreamMasterResult.h"
#include "model/SetLiveDomainMultiStreamOptimalModeRequest.h"
#include "model/SetLiveDomainMultiStreamOptimalModeResult.h"
#include "model/SetLiveDomainStagingConfigRequest.h"
#include "model/SetLiveDomainStagingConfigResult.h"
#include "model/SetLiveEdgeTransferRequest.h"
#include "model/SetLiveEdgeTransferResult.h"
#include "model/SetLiveLazyPullStreamInfoConfigRequest.h"
#include "model/SetLiveLazyPullStreamInfoConfigResult.h"
#include "model/SetLiveMpuTaskSeiRequest.h"
#include "model/SetLiveMpuTaskSeiResult.h"
#include "model/SetLiveStreamBlockRequest.h"
#include "model/SetLiveStreamBlockResult.h"
#include "model/SetLiveStreamDelayConfigRequest.h"
#include "model/SetLiveStreamDelayConfigResult.h"
#include "model/SetLiveStreamPreloadTasksRequest.h"
#include "model/SetLiveStreamPreloadTasksResult.h"
#include "model/SetLiveStreamsNotifyUrlConfigRequest.h"
#include "model/SetLiveStreamsNotifyUrlConfigResult.h"
#include "model/SetShowListBackgroundRequest.h"
#include "model/SetShowListBackgroundResult.h"
#include "model/SetSnapshotCallbackAuthRequest.h"
#include "model/SetSnapshotCallbackAuthResult.h"
#include "model/StartCasterRequest.h"
#include "model/StartCasterResult.h"
#include "model/StartCasterSceneRequest.h"
#include "model/StartCasterSceneResult.h"
#include "model/StartEdgeTranscodeJobRequest.h"
#include "model/StartEdgeTranscodeJobResult.h"
#include "model/StartLiveDomainRequest.h"
#include "model/StartLiveDomainResult.h"
#include "model/StartLiveMPUTaskRequest.h"
#include "model/StartLiveMPUTaskResult.h"
#include "model/StartLiveStreamMonitorRequest.h"
#include "model/StartLiveStreamMonitorResult.h"
#include "model/StartPlaylistRequest.h"
#include "model/StartPlaylistResult.h"
#include "model/StartRtcCloudRecordingRequest.h"
#include "model/StartRtcCloudRecordingResult.h"
#include "model/StopCasterRequest.h"
#include "model/StopCasterResult.h"
#include "model/StopCasterSceneRequest.h"
#include "model/StopCasterSceneResult.h"
#include "model/StopEdgeTranscodeJobRequest.h"
#include "model/StopEdgeTranscodeJobResult.h"
#include "model/StopLiveDomainRequest.h"
#include "model/StopLiveDomainResult.h"
#include "model/StopLiveMPUTaskRequest.h"
#include "model/StopLiveMPUTaskResult.h"
#include "model/StopLivePullToPushRequest.h"
#include "model/StopLivePullToPushResult.h"
#include "model/StopLiveStreamMonitorRequest.h"
#include "model/StopLiveStreamMonitorResult.h"
#include "model/StopPlaylistRequest.h"
#include "model/StopPlaylistResult.h"
#include "model/StopRtcAsrTaskRequest.h"
#include "model/StopRtcAsrTaskResult.h"
#include "model/StopRtcCloudRecordingRequest.h"
#include "model/StopRtcCloudRecordingResult.h"
#include "model/TagLiveResourcesRequest.h"
#include "model/TagLiveResourcesResult.h"
#include "model/UnTagLiveResourcesRequest.h"
#include "model/UnTagLiveResourcesResult.h"
#include "model/UnbanLiveMessageGroupRequest.h"
#include "model/UnbanLiveMessageGroupResult.h"
#include "model/UpdateCasterResourceGroupRequest.h"
#include "model/UpdateCasterResourceGroupResult.h"
#include "model/UpdateCasterSceneAudioRequest.h"
#include "model/UpdateCasterSceneAudioResult.h"
#include "model/UpdateCasterSceneConfigRequest.h"
#include "model/UpdateCasterSceneConfigResult.h"
#include "model/UpdateCustomLiveStreamTranscodeRequest.h"
#include "model/UpdateCustomLiveStreamTranscodeResult.h"
#include "model/UpdateEdgeTranscodeJobRequest.h"
#include "model/UpdateEdgeTranscodeJobResult.h"
#include "model/UpdateEventSubRequest.h"
#include "model/UpdateEventSubResult.h"
#include "model/UpdateLiveAIProduceRulesRequest.h"
#include "model/UpdateLiveAIProduceRulesResult.h"
#include "model/UpdateLiveAISubtitleRequest.h"
#include "model/UpdateLiveAISubtitleResult.h"
#include "model/UpdateLiveAppRecordConfigRequest.h"
#include "model/UpdateLiveAppRecordConfigResult.h"
#include "model/UpdateLiveAppSnapshotConfigRequest.h"
#include "model/UpdateLiveAppSnapshotConfigResult.h"
#include "model/UpdateLiveAudioAuditConfigRequest.h"
#include "model/UpdateLiveAudioAuditConfigResult.h"
#include "model/UpdateLiveAudioAuditNotifyConfigRequest.h"
#include "model/UpdateLiveAudioAuditNotifyConfigResult.h"
#include "model/UpdateLiveCenterTransferRequest.h"
#include "model/UpdateLiveCenterTransferResult.h"
#include "model/UpdateLiveDelayConfigRequest.h"
#include "model/UpdateLiveDelayConfigResult.h"
#include "model/UpdateLiveDetectNotifyConfigRequest.h"
#include "model/UpdateLiveDetectNotifyConfigResult.h"
#include "model/UpdateLiveMPUTaskRequest.h"
#include "model/UpdateLiveMPUTaskResult.h"
#include "model/UpdateLivePackageConfigRequest.h"
#include "model/UpdateLivePackageConfigResult.h"
#include "model/UpdateLivePullStreamInfoConfigRequest.h"
#include "model/UpdateLivePullStreamInfoConfigResult.h"
#include "model/UpdateLivePullToPushRequest.h"
#include "model/UpdateLivePullToPushResult.h"
#include "model/UpdateLiveRecordNotifyConfigRequest.h"
#include "model/UpdateLiveRecordNotifyConfigResult.h"
#include "model/UpdateLiveRecordVodConfigRequest.h"
#include "model/UpdateLiveRecordVodConfigResult.h"
#include "model/UpdateLiveSnapshotDetectPornConfigRequest.h"
#include "model/UpdateLiveSnapshotDetectPornConfigResult.h"
#include "model/UpdateLiveSnapshotNotifyConfigRequest.h"
#include "model/UpdateLiveSnapshotNotifyConfigResult.h"
#include "model/UpdateLiveStreamMonitorRequest.h"
#include "model/UpdateLiveStreamMonitorResult.h"
#include "model/UpdateLiveStreamTranscodeRequest.h"
#include "model/UpdateLiveStreamTranscodeResult.h"
#include "model/UpdateLiveStreamWatermarkRequest.h"
#include "model/UpdateLiveStreamWatermarkResult.h"
#include "model/UpdateLiveStreamWatermarkRuleRequest.h"
#include "model/UpdateLiveStreamWatermarkRuleResult.h"
#include "model/UpdateMessageAppRequest.h"
#include "model/UpdateMessageAppResult.h"
#include "model/UpdateMessageGroupRequest.h"
#include "model/UpdateMessageGroupResult.h"
#include "model/UpdateMixStreamRequest.h"
#include "model/UpdateMixStreamResult.h"
#include "model/UpdateRtcCloudRecordingRequest.h"
#include "model/UpdateRtcCloudRecordingResult.h"
#include "model/UpdateRtcMPUEventSubRequest.h"
#include "model/UpdateRtcMPUEventSubResult.h"
#include "model/UpdateRtsLiveStreamTranscodeRequest.h"
#include "model/UpdateRtsLiveStreamTranscodeResult.h"
#include "model/VerifyLiveDomainOwnerRequest.h"
#include "model/VerifyLiveDomainOwnerResult.h"


namespace AlibabaCloud
{
	namespace Live
	{
		class ALIBABACLOUD_LIVE_EXPORT LiveClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCasterComponentResult> AddCasterComponentOutcome;
			typedef std::future<AddCasterComponentOutcome> AddCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterComponentRequest&, const AddCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeResult> AddCasterEpisodeOutcome;
			typedef std::future<AddCasterEpisodeOutcome> AddCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeRequest&, const AddCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeGroupResult> AddCasterEpisodeGroupOutcome;
			typedef std::future<AddCasterEpisodeGroupOutcome> AddCasterEpisodeGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeGroupRequest&, const AddCasterEpisodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeGroupAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeGroupContentResult> AddCasterEpisodeGroupContentOutcome;
			typedef std::future<AddCasterEpisodeGroupContentOutcome> AddCasterEpisodeGroupContentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeGroupContentRequest&, const AddCasterEpisodeGroupContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeGroupContentAsyncHandler;
			typedef Outcome<Error, Model::AddCasterLayoutResult> AddCasterLayoutOutcome;
			typedef std::future<AddCasterLayoutOutcome> AddCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterLayoutRequest&, const AddCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::AddCasterProgramResult> AddCasterProgramOutcome;
			typedef std::future<AddCasterProgramOutcome> AddCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterProgramRequest&, const AddCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::AddCasterVideoResourceResult> AddCasterVideoResourceOutcome;
			typedef std::future<AddCasterVideoResourceOutcome> AddCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterVideoResourceRequest&, const AddCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::AddCustomLiveStreamTranscodeResult> AddCustomLiveStreamTranscodeOutcome;
			typedef std::future<AddCustomLiveStreamTranscodeOutcome> AddCustomLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCustomLiveStreamTranscodeRequest&, const AddCustomLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAIProduceRulesResult> AddLiveAIProduceRulesOutcome;
			typedef std::future<AddLiveAIProduceRulesOutcome> AddLiveAIProduceRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAIProduceRulesRequest&, const AddLiveAIProduceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAIProduceRulesAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAISubtitleResult> AddLiveAISubtitleOutcome;
			typedef std::future<AddLiveAISubtitleOutcome> AddLiveAISubtitleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAISubtitleRequest&, const AddLiveAISubtitleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAISubtitleAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppRecordConfigResult> AddLiveAppRecordConfigOutcome;
			typedef std::future<AddLiveAppRecordConfigOutcome> AddLiveAppRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAppRecordConfigRequest&, const AddLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppSnapshotConfigResult> AddLiveAppSnapshotConfigOutcome;
			typedef std::future<AddLiveAppSnapshotConfigOutcome> AddLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAppSnapshotConfigRequest&, const AddLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAudioAuditConfigResult> AddLiveAudioAuditConfigOutcome;
			typedef std::future<AddLiveAudioAuditConfigOutcome> AddLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAudioAuditConfigRequest&, const AddLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAudioAuditNotifyConfigResult> AddLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<AddLiveAudioAuditNotifyConfigOutcome> AddLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAudioAuditNotifyConfigRequest&, const AddLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveCenterTransferResult> AddLiveCenterTransferOutcome;
			typedef std::future<AddLiveCenterTransferOutcome> AddLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveCenterTransferRequest&, const AddLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDetectNotifyConfigResult> AddLiveDetectNotifyConfigOutcome;
			typedef std::future<AddLiveDetectNotifyConfigOutcome> AddLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDetectNotifyConfigRequest&, const AddLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainResult> AddLiveDomainOutcome;
			typedef std::future<AddLiveDomainOutcome> AddLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainRequest&, const AddLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainMappingResult> AddLiveDomainMappingOutcome;
			typedef std::future<AddLiveDomainMappingOutcome> AddLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainMappingRequest&, const AddLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainPlayMappingResult> AddLiveDomainPlayMappingOutcome;
			typedef std::future<AddLiveDomainPlayMappingOutcome> AddLiveDomainPlayMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainPlayMappingRequest&, const AddLiveDomainPlayMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainPlayMappingAsyncHandler;
			typedef Outcome<Error, Model::AddLiveMessageGroupBandResult> AddLiveMessageGroupBandOutcome;
			typedef std::future<AddLiveMessageGroupBandOutcome> AddLiveMessageGroupBandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveMessageGroupBandRequest&, const AddLiveMessageGroupBandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveMessageGroupBandAsyncHandler;
			typedef Outcome<Error, Model::AddLivePackageConfigResult> AddLivePackageConfigOutcome;
			typedef std::future<AddLivePackageConfigOutcome> AddLivePackageConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLivePackageConfigRequest&, const AddLivePackageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLivePackageConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLivePullStreamInfoConfigResult> AddLivePullStreamInfoConfigOutcome;
			typedef std::future<AddLivePullStreamInfoConfigOutcome> AddLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLivePullStreamInfoConfigRequest&, const AddLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveRecordNotifyConfigResult> AddLiveRecordNotifyConfigOutcome;
			typedef std::future<AddLiveRecordNotifyConfigOutcome> AddLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveRecordNotifyConfigRequest&, const AddLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveRecordVodConfigResult> AddLiveRecordVodConfigOutcome;
			typedef std::future<AddLiveRecordVodConfigOutcome> AddLiveRecordVodConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveRecordVodConfigRequest&, const AddLiveRecordVodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveRecordVodConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveSnapshotDetectPornConfigResult> AddLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<AddLiveSnapshotDetectPornConfigOutcome> AddLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveSnapshotDetectPornConfigRequest&, const AddLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveSnapshotNotifyConfigResult> AddLiveSnapshotNotifyConfigOutcome;
			typedef std::future<AddLiveSnapshotNotifyConfigOutcome> AddLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveSnapshotNotifyConfigRequest&, const AddLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamMergeResult> AddLiveStreamMergeOutcome;
			typedef std::future<AddLiveStreamMergeOutcome> AddLiveStreamMergeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamMergeRequest&, const AddLiveStreamMergeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamMergeAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamTranscodeResult> AddLiveStreamTranscodeOutcome;
			typedef std::future<AddLiveStreamTranscodeOutcome> AddLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamTranscodeRequest&, const AddLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamWatermarkResult> AddLiveStreamWatermarkOutcome;
			typedef std::future<AddLiveStreamWatermarkOutcome> AddLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamWatermarkRequest&, const AddLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamWatermarkRuleResult> AddLiveStreamWatermarkRuleOutcome;
			typedef std::future<AddLiveStreamWatermarkRuleOutcome> AddLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamWatermarkRuleRequest&, const AddLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::AddPlaylistItemsResult> AddPlaylistItemsOutcome;
			typedef std::future<AddPlaylistItemsOutcome> AddPlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddPlaylistItemsRequest&, const AddPlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::AddRtsLiveStreamTranscodeResult> AddRtsLiveStreamTranscodeOutcome;
			typedef std::future<AddRtsLiveStreamTranscodeOutcome> AddRtsLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddRtsLiveStreamTranscodeRequest&, const AddRtsLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRtsLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddShowIntoShowListResult> AddShowIntoShowListOutcome;
			typedef std::future<AddShowIntoShowListOutcome> AddShowIntoShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddShowIntoShowListRequest&, const AddShowIntoShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddShowIntoShowListAsyncHandler;
			typedef Outcome<Error, Model::AddStudioLayoutResult> AddStudioLayoutOutcome;
			typedef std::future<AddStudioLayoutOutcome> AddStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddStudioLayoutRequest&, const AddStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::AddTrancodeSEIResult> AddTrancodeSEIOutcome;
			typedef std::future<AddTrancodeSEIOutcome> AddTrancodeSEIOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddTrancodeSEIRequest&, const AddTrancodeSEIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTrancodeSEIAsyncHandler;
			typedef Outcome<Error, Model::BanLiveMessageGroupResult> BanLiveMessageGroupOutcome;
			typedef std::future<BanLiveMessageGroupOutcome> BanLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BanLiveMessageGroupRequest&, const BanLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BanLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteLiveDomainConfigsResult> BatchDeleteLiveDomainConfigsOutcome;
			typedef std::future<BatchDeleteLiveDomainConfigsOutcome> BatchDeleteLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchDeleteLiveDomainConfigsRequest&, const BatchDeleteLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchGetOnlineUsersResult> BatchGetOnlineUsersOutcome;
			typedef std::future<BatchGetOnlineUsersOutcome> BatchGetOnlineUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchGetOnlineUsersRequest&, const BatchGetOnlineUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetOnlineUsersAsyncHandler;
			typedef Outcome<Error, Model::BatchSetLiveDomainConfigsResult> BatchSetLiveDomainConfigsOutcome;
			typedef std::future<BatchSetLiveDomainConfigsOutcome> BatchSetLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchSetLiveDomainConfigsRequest&, const BatchSetLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::CancelMuteAllGroupUserResult> CancelMuteAllGroupUserOutcome;
			typedef std::future<CancelMuteAllGroupUserOutcome> CancelMuteAllGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CancelMuteAllGroupUserRequest&, const CancelMuteAllGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelMuteAllGroupUserAsyncHandler;
			typedef Outcome<Error, Model::CancelMuteGroupUserResult> CancelMuteGroupUserOutcome;
			typedef std::future<CancelMuteGroupUserOutcome> CancelMuteGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CancelMuteGroupUserRequest&, const CancelMuteGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelMuteGroupUserAsyncHandler;
			typedef Outcome<Error, Model::ChangeLiveDomainResourceGroupResult> ChangeLiveDomainResourceGroupOutcome;
			typedef std::future<ChangeLiveDomainResourceGroupOutcome> ChangeLiveDomainResourceGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ChangeLiveDomainResourceGroupRequest&, const ChangeLiveDomainResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeLiveDomainResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckLiveMessageUsersInGroupResult> CheckLiveMessageUsersInGroupOutcome;
			typedef std::future<CheckLiveMessageUsersInGroupOutcome> CheckLiveMessageUsersInGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CheckLiveMessageUsersInGroupRequest&, const CheckLiveMessageUsersInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckLiveMessageUsersInGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckLiveMessageUsersOnlineResult> CheckLiveMessageUsersOnlineOutcome;
			typedef std::future<CheckLiveMessageUsersOnlineOutcome> CheckLiveMessageUsersOnlineOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CheckLiveMessageUsersOnlineRequest&, const CheckLiveMessageUsersOnlineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckLiveMessageUsersOnlineAsyncHandler;
			typedef Outcome<Error, Model::CloseLiveShiftResult> CloseLiveShiftOutcome;
			typedef std::future<CloseLiveShiftOutcome> CloseLiveShiftOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CloseLiveShiftRequest&, const CloseLiveShiftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseLiveShiftAsyncHandler;
			typedef Outcome<Error, Model::CopyCasterResult> CopyCasterOutcome;
			typedef std::future<CopyCasterOutcome> CopyCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CopyCasterRequest&, const CopyCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCasterAsyncHandler;
			typedef Outcome<Error, Model::CopyCasterSceneConfigResult> CopyCasterSceneConfigOutcome;
			typedef std::future<CopyCasterSceneConfigOutcome> CopyCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CopyCasterSceneConfigRequest&, const CopyCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateCasterResult> CreateCasterOutcome;
			typedef std::future<CreateCasterOutcome> CreateCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateCasterRequest&, const CreateCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomTemplateResult> CreateCustomTemplateOutcome;
			typedef std::future<CreateCustomTemplateOutcome> CreateCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateCustomTemplateRequest&, const CreateCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeTranscodeJobResult> CreateEdgeTranscodeJobOutcome;
			typedef std::future<CreateEdgeTranscodeJobOutcome> CreateEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateEdgeTranscodeJobRequest&, const CreateEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateEventSubResult> CreateEventSubOutcome;
			typedef std::future<CreateEventSubOutcome> CreateEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateEventSubRequest&, const CreateEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventSubAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveAIStudioResult> CreateLiveAIStudioOutcome;
			typedef std::future<CreateLiveAIStudioOutcome> CreateLiveAIStudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveAIStudioRequest&, const CreateLiveAIStudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveAIStudioAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveDelayConfigResult> CreateLiveDelayConfigOutcome;
			typedef std::future<CreateLiveDelayConfigOutcome> CreateLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveDelayConfigRequest&, const CreateLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveMessageAppResult> CreateLiveMessageAppOutcome;
			typedef std::future<CreateLiveMessageAppOutcome> CreateLiveMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveMessageAppRequest&, const CreateLiveMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveMessageAppAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveMessageGroupResult> CreateLiveMessageGroupOutcome;
			typedef std::future<CreateLiveMessageGroupOutcome> CreateLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveMessageGroupRequest&, const CreateLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateLivePrivateLineResult> CreateLivePrivateLineOutcome;
			typedef std::future<CreateLivePrivateLineOutcome> CreateLivePrivateLineOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLivePrivateLineRequest&, const CreateLivePrivateLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLivePrivateLineAsyncHandler;
			typedef Outcome<Error, Model::CreateLivePullToPushResult> CreateLivePullToPushOutcome;
			typedef std::future<CreateLivePullToPushOutcome> CreateLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLivePullToPushRequest&, const CreateLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveRealTimeLogDeliveryResult> CreateLiveRealTimeLogDeliveryOutcome;
			typedef std::future<CreateLiveRealTimeLogDeliveryOutcome> CreateLiveRealTimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveRealTimeLogDeliveryRequest&, const CreateLiveRealTimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRealTimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveStreamMonitorResult> CreateLiveStreamMonitorOutcome;
			typedef std::future<CreateLiveStreamMonitorOutcome> CreateLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveStreamMonitorRequest&, const CreateLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveStreamRecordIndexFilesResult> CreateLiveStreamRecordIndexFilesOutcome;
			typedef std::future<CreateLiveStreamRecordIndexFilesOutcome> CreateLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveStreamRecordIndexFilesRequest&, const CreateLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::CreateMessageAppResult> CreateMessageAppOutcome;
			typedef std::future<CreateMessageAppOutcome> CreateMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMessageAppRequest&, const CreateMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageAppAsyncHandler;
			typedef Outcome<Error, Model::CreateMessageGroupResult> CreateMessageGroupOutcome;
			typedef std::future<CreateMessageGroupOutcome> CreateMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMessageGroupRequest&, const CreateMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMixStreamResult> CreateMixStreamOutcome;
			typedef std::future<CreateMixStreamOutcome> CreateMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMixStreamRequest&, const CreateMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMixStreamAsyncHandler;
			typedef Outcome<Error, Model::CreateRTCWhipStreamAddressResult> CreateRTCWhipStreamAddressOutcome;
			typedef std::future<CreateRTCWhipStreamAddressOutcome> CreateRTCWhipStreamAddressOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateRTCWhipStreamAddressRequest&, const CreateRTCWhipStreamAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRTCWhipStreamAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateRoomRealTimeStreamAddressResult> CreateRoomRealTimeStreamAddressOutcome;
			typedef std::future<CreateRoomRealTimeStreamAddressOutcome> CreateRoomRealTimeStreamAddressOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateRoomRealTimeStreamAddressRequest&, const CreateRoomRealTimeStreamAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoomRealTimeStreamAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateRtcAsrTaskResult> CreateRtcAsrTaskOutcome;
			typedef std::future<CreateRtcAsrTaskOutcome> CreateRtcAsrTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateRtcAsrTaskRequest&, const CreateRtcAsrTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRtcAsrTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateRtcMPUEventSubResult> CreateRtcMPUEventSubOutcome;
			typedef std::future<CreateRtcMPUEventSubOutcome> CreateRtcMPUEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateRtcMPUEventSubRequest&, const CreateRtcMPUEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRtcMPUEventSubAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterResult> DeleteCasterOutcome;
			typedef std::future<DeleteCasterOutcome> DeleteCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterRequest&, const DeleteCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterComponentResult> DeleteCasterComponentOutcome;
			typedef std::future<DeleteCasterComponentOutcome> DeleteCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterComponentRequest&, const DeleteCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterEpisodeResult> DeleteCasterEpisodeOutcome;
			typedef std::future<DeleteCasterEpisodeOutcome> DeleteCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterEpisodeRequest&, const DeleteCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterEpisodeGroupResult> DeleteCasterEpisodeGroupOutcome;
			typedef std::future<DeleteCasterEpisodeGroupOutcome> DeleteCasterEpisodeGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterEpisodeGroupRequest&, const DeleteCasterEpisodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterEpisodeGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterLayoutResult> DeleteCasterLayoutOutcome;
			typedef std::future<DeleteCasterLayoutOutcome> DeleteCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterLayoutRequest&, const DeleteCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterProgramResult> DeleteCasterProgramOutcome;
			typedef std::future<DeleteCasterProgramOutcome> DeleteCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterProgramRequest&, const DeleteCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterSceneConfigResult> DeleteCasterSceneConfigOutcome;
			typedef std::future<DeleteCasterSceneConfigOutcome> DeleteCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterSceneConfigRequest&, const DeleteCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterVideoResourceResult> DeleteCasterVideoResourceOutcome;
			typedef std::future<DeleteCasterVideoResourceOutcome> DeleteCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterVideoResourceRequest&, const DeleteCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteChannelResult> DeleteChannelOutcome;
			typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteChannelRequest&, const DeleteChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomTemplateResult> DeleteCustomTemplateOutcome;
			typedef std::future<DeleteCustomTemplateOutcome> DeleteCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCustomTemplateRequest&, const DeleteCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteEdgeTranscodeJobResult> DeleteEdgeTranscodeJobOutcome;
			typedef std::future<DeleteEdgeTranscodeJobOutcome> DeleteEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteEdgeTranscodeJobRequest&, const DeleteEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventSubResult> DeleteEventSubOutcome;
			typedef std::future<DeleteEventSubOutcome> DeleteEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteEventSubRequest&, const DeleteEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventSubAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAIProduceRulesResult> DeleteLiveAIProduceRulesOutcome;
			typedef std::future<DeleteLiveAIProduceRulesOutcome> DeleteLiveAIProduceRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAIProduceRulesRequest&, const DeleteLiveAIProduceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAIProduceRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAIStudioResult> DeleteLiveAIStudioOutcome;
			typedef std::future<DeleteLiveAIStudioOutcome> DeleteLiveAIStudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAIStudioRequest&, const DeleteLiveAIStudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAIStudioAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAISubtitleResult> DeleteLiveAISubtitleOutcome;
			typedef std::future<DeleteLiveAISubtitleOutcome> DeleteLiveAISubtitleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAISubtitleRequest&, const DeleteLiveAISubtitleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAISubtitleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppRecordConfigResult> DeleteLiveAppRecordConfigOutcome;
			typedef std::future<DeleteLiveAppRecordConfigOutcome> DeleteLiveAppRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAppRecordConfigRequest&, const DeleteLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppSnapshotConfigResult> DeleteLiveAppSnapshotConfigOutcome;
			typedef std::future<DeleteLiveAppSnapshotConfigOutcome> DeleteLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAppSnapshotConfigRequest&, const DeleteLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAudioAuditConfigResult> DeleteLiveAudioAuditConfigOutcome;
			typedef std::future<DeleteLiveAudioAuditConfigOutcome> DeleteLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAudioAuditConfigRequest&, const DeleteLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAudioAuditNotifyConfigResult> DeleteLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<DeleteLiveAudioAuditNotifyConfigOutcome> DeleteLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAudioAuditNotifyConfigRequest&, const DeleteLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveCenterTransferResult> DeleteLiveCenterTransferOutcome;
			typedef std::future<DeleteLiveCenterTransferOutcome> DeleteLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveCenterTransferRequest&, const DeleteLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDelayConfigResult> DeleteLiveDelayConfigOutcome;
			typedef std::future<DeleteLiveDelayConfigOutcome> DeleteLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDelayConfigRequest&, const DeleteLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDetectNotifyConfigResult> DeleteLiveDetectNotifyConfigOutcome;
			typedef std::future<DeleteLiveDetectNotifyConfigOutcome> DeleteLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDetectNotifyConfigRequest&, const DeleteLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainResult> DeleteLiveDomainOutcome;
			typedef std::future<DeleteLiveDomainOutcome> DeleteLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainRequest&, const DeleteLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainMappingResult> DeleteLiveDomainMappingOutcome;
			typedef std::future<DeleteLiveDomainMappingOutcome> DeleteLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainMappingRequest&, const DeleteLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainPlayMappingResult> DeleteLiveDomainPlayMappingOutcome;
			typedef std::future<DeleteLiveDomainPlayMappingOutcome> DeleteLiveDomainPlayMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainPlayMappingRequest&, const DeleteLiveDomainPlayMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainPlayMappingAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveEdgeTransferResult> DeleteLiveEdgeTransferOutcome;
			typedef std::future<DeleteLiveEdgeTransferOutcome> DeleteLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveEdgeTransferRequest&, const DeleteLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveLazyPullStreamInfoConfigResult> DeleteLiveLazyPullStreamInfoConfigOutcome;
			typedef std::future<DeleteLiveLazyPullStreamInfoConfigOutcome> DeleteLiveLazyPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveLazyPullStreamInfoConfigRequest&, const DeleteLiveLazyPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveLazyPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveMessageGroupResult> DeleteLiveMessageGroupOutcome;
			typedef std::future<DeleteLiveMessageGroupOutcome> DeleteLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveMessageGroupRequest&, const DeleteLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveMessageGroupMessageResult> DeleteLiveMessageGroupMessageOutcome;
			typedef std::future<DeleteLiveMessageGroupMessageOutcome> DeleteLiveMessageGroupMessageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveMessageGroupMessageRequest&, const DeleteLiveMessageGroupMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveMessageGroupMessageAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveMessageUserMessageResult> DeleteLiveMessageUserMessageOutcome;
			typedef std::future<DeleteLiveMessageUserMessageOutcome> DeleteLiveMessageUserMessageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveMessageUserMessageRequest&, const DeleteLiveMessageUserMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveMessageUserMessageAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePackageConfigResult> DeleteLivePackageConfigOutcome;
			typedef std::future<DeleteLivePackageConfigOutcome> DeleteLivePackageConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLivePackageConfigRequest&, const DeleteLivePackageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePackageConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePrivateLineResult> DeleteLivePrivateLineOutcome;
			typedef std::future<DeleteLivePrivateLineOutcome> DeleteLivePrivateLineOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLivePrivateLineRequest&, const DeleteLivePrivateLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePrivateLineAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePullStreamInfoConfigResult> DeleteLivePullStreamInfoConfigOutcome;
			typedef std::future<DeleteLivePullStreamInfoConfigOutcome> DeleteLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLivePullStreamInfoConfigRequest&, const DeleteLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePullToPushResult> DeleteLivePullToPushOutcome;
			typedef std::future<DeleteLivePullToPushOutcome> DeleteLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLivePullToPushRequest&, const DeleteLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRealTimeLogLogstoreResult> DeleteLiveRealTimeLogLogstoreOutcome;
			typedef std::future<DeleteLiveRealTimeLogLogstoreOutcome> DeleteLiveRealTimeLogLogstoreOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRealTimeLogLogstoreRequest&, const DeleteLiveRealTimeLogLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRealTimeLogLogstoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRealtimeLogDeliveryResult> DeleteLiveRealtimeLogDeliveryOutcome;
			typedef std::future<DeleteLiveRealtimeLogDeliveryOutcome> DeleteLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRealtimeLogDeliveryRequest&, const DeleteLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordNotifyConfigResult> DeleteLiveRecordNotifyConfigOutcome;
			typedef std::future<DeleteLiveRecordNotifyConfigOutcome> DeleteLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordNotifyConfigRequest&, const DeleteLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordVodConfigResult> DeleteLiveRecordVodConfigOutcome;
			typedef std::future<DeleteLiveRecordVodConfigOutcome> DeleteLiveRecordVodConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordVodConfigRequest&, const DeleteLiveRecordVodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordVodConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotDetectPornConfigResult> DeleteLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<DeleteLiveSnapshotDetectPornConfigOutcome> DeleteLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotDetectPornConfigRequest&, const DeleteLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotNotifyConfigResult> DeleteLiveSnapshotNotifyConfigOutcome;
			typedef std::future<DeleteLiveSnapshotNotifyConfigOutcome> DeleteLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotNotifyConfigRequest&, const DeleteLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSpecificStagingConfigResult> DeleteLiveSpecificStagingConfigOutcome;
			typedef std::future<DeleteLiveSpecificStagingConfigOutcome> DeleteLiveSpecificStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSpecificStagingConfigRequest&, const DeleteLiveSpecificStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSpecificStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamBlockResult> DeleteLiveStreamBlockOutcome;
			typedef std::future<DeleteLiveStreamBlockOutcome> DeleteLiveStreamBlockOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamBlockRequest&, const DeleteLiveStreamBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamBlockAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamMergeResult> DeleteLiveStreamMergeOutcome;
			typedef std::future<DeleteLiveStreamMergeOutcome> DeleteLiveStreamMergeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamMergeRequest&, const DeleteLiveStreamMergeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamMergeAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamMonitorResult> DeleteLiveStreamMonitorOutcome;
			typedef std::future<DeleteLiveStreamMonitorOutcome> DeleteLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamMonitorRequest&, const DeleteLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamRecordIndexFilesResult> DeleteLiveStreamRecordIndexFilesOutcome;
			typedef std::future<DeleteLiveStreamRecordIndexFilesOutcome> DeleteLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamRecordIndexFilesRequest&, const DeleteLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamTranscodeResult> DeleteLiveStreamTranscodeOutcome;
			typedef std::future<DeleteLiveStreamTranscodeOutcome> DeleteLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamTranscodeRequest&, const DeleteLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamWatermarkResult> DeleteLiveStreamWatermarkOutcome;
			typedef std::future<DeleteLiveStreamWatermarkOutcome> DeleteLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamWatermarkRequest&, const DeleteLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamWatermarkRuleResult> DeleteLiveStreamWatermarkRuleOutcome;
			typedef std::future<DeleteLiveStreamWatermarkRuleOutcome> DeleteLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamWatermarkRuleRequest&, const DeleteLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamsNotifyUrlConfigResult> DeleteLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<DeleteLiveStreamsNotifyUrlConfigOutcome> DeleteLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamsNotifyUrlConfigRequest&, const DeleteLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteMessageAppResult> DeleteMessageAppOutcome;
			typedef std::future<DeleteMessageAppOutcome> DeleteMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteMessageAppRequest&, const DeleteMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteMixStreamResult> DeleteMixStreamOutcome;
			typedef std::future<DeleteMixStreamOutcome> DeleteMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteMixStreamRequest&, const DeleteMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMixStreamAsyncHandler;
			typedef Outcome<Error, Model::DeletePlaylistResult> DeletePlaylistOutcome;
			typedef std::future<DeletePlaylistOutcome> DeletePlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeletePlaylistRequest&, const DeletePlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlaylistAsyncHandler;
			typedef Outcome<Error, Model::DeletePlaylistItemsResult> DeletePlaylistItemsOutcome;
			typedef std::future<DeletePlaylistItemsOutcome> DeletePlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeletePlaylistItemsRequest&, const DeletePlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRtcAsrTaskResult> DeleteRtcAsrTaskOutcome;
			typedef std::future<DeleteRtcAsrTaskOutcome> DeleteRtcAsrTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteRtcAsrTaskRequest&, const DeleteRtcAsrTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRtcAsrTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteRtcMPUEventSubResult> DeleteRtcMPUEventSubOutcome;
			typedef std::future<DeleteRtcMPUEventSubOutcome> DeleteRtcMPUEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteRtcMPUEventSubRequest&, const DeleteRtcMPUEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRtcMPUEventSubAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotCallbackAuthResult> DeleteSnapshotCallbackAuthOutcome;
			typedef std::future<DeleteSnapshotCallbackAuthOutcome> DeleteSnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteSnapshotCallbackAuthRequest&, const DeleteSnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotFilesResult> DeleteSnapshotFilesOutcome;
			typedef std::future<DeleteSnapshotFilesOutcome> DeleteSnapshotFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteSnapshotFilesRequest&, const DeleteSnapshotFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteStudioLayoutResult> DeleteStudioLayoutOutcome;
			typedef std::future<DeleteStudioLayoutOutcome> DeleteStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteStudioLayoutRequest&, const DeleteStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoShowListTasksResult> DescribeAutoShowListTasksOutcome;
			typedef std::future<DescribeAutoShowListTasksOutcome> DescribeAutoShowListTasksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeAutoShowListTasksRequest&, const DescribeAutoShowListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoShowListTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterChannelsResult> DescribeCasterChannelsOutcome;
			typedef std::future<DescribeCasterChannelsOutcome> DescribeCasterChannelsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterChannelsRequest&, const DescribeCasterChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterChannelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterComponentsResult> DescribeCasterComponentsOutcome;
			typedef std::future<DescribeCasterComponentsOutcome> DescribeCasterComponentsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterComponentsRequest&, const DescribeCasterComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterComponentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterConfigResult> DescribeCasterConfigOutcome;
			typedef std::future<DescribeCasterConfigOutcome> DescribeCasterConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterConfigRequest&, const DescribeCasterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterLayoutsResult> DescribeCasterLayoutsOutcome;
			typedef std::future<DescribeCasterLayoutsOutcome> DescribeCasterLayoutsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterLayoutsRequest&, const DescribeCasterLayoutsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterLayoutsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterProgramResult> DescribeCasterProgramOutcome;
			typedef std::future<DescribeCasterProgramOutcome> DescribeCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterProgramRequest&, const DescribeCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterSceneAudioResult> DescribeCasterSceneAudioOutcome;
			typedef std::future<DescribeCasterSceneAudioOutcome> DescribeCasterSceneAudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterSceneAudioRequest&, const DescribeCasterSceneAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterSceneAudioAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterScenesResult> DescribeCasterScenesOutcome;
			typedef std::future<DescribeCasterScenesOutcome> DescribeCasterScenesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterScenesRequest&, const DescribeCasterScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterScenesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterStreamUrlResult> DescribeCasterStreamUrlOutcome;
			typedef std::future<DescribeCasterStreamUrlOutcome> DescribeCasterStreamUrlOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterStreamUrlRequest&, const DescribeCasterStreamUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterStreamUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterVideoResourcesResult> DescribeCasterVideoResourcesOutcome;
			typedef std::future<DescribeCasterVideoResourcesOutcome> DescribeCasterVideoResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterVideoResourcesRequest&, const DescribeCasterVideoResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterVideoResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCastersResult> DescribeCastersOutcome;
			typedef std::future<DescribeCastersOutcome> DescribeCastersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCastersRequest&, const DescribeCastersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCastersAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelParticipantsResult> DescribeChannelParticipantsOutcome;
			typedef std::future<DescribeChannelParticipantsOutcome> DescribeChannelParticipantsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeChannelParticipantsRequest&, const DescribeChannelParticipantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelParticipantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelUsersResult> DescribeChannelUsersOutcome;
			typedef std::future<DescribeChannelUsersOutcome> DescribeChannelUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeChannelUsersRequest&, const DescribeChannelUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUsageDataResult> DescribeDomainUsageDataOutcome;
			typedef std::future<DescribeDomainUsageDataOutcome> DescribeDomainUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeDomainUsageDataRequest&, const DescribeDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainWithIntegrityResult> DescribeDomainWithIntegrityOutcome;
			typedef std::future<DescribeDomainWithIntegrityOutcome> DescribeDomainWithIntegrityOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeDomainWithIntegrityRequest&, const DescribeDomainWithIntegrityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainWithIntegrityAsyncHandler;
			typedef Outcome<Error, Model::DescribeHlsLiveStreamRealTimeBpsDataResult> DescribeHlsLiveStreamRealTimeBpsDataOutcome;
			typedef std::future<DescribeHlsLiveStreamRealTimeBpsDataOutcome> DescribeHlsLiveStreamRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest&, const DescribeHlsLiveStreamRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHlsLiveStreamRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAIProduceRulesResult> DescribeLiveAIProduceRulesOutcome;
			typedef std::future<DescribeLiveAIProduceRulesOutcome> DescribeLiveAIProduceRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAIProduceRulesRequest&, const DescribeLiveAIProduceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAIProduceRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAIStudioResult> DescribeLiveAIStudioOutcome;
			typedef std::future<DescribeLiveAIStudioOutcome> DescribeLiveAIStudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAIStudioRequest&, const DescribeLiveAIStudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAIStudioAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAISubtitleResult> DescribeLiveAISubtitleOutcome;
			typedef std::future<DescribeLiveAISubtitleOutcome> DescribeLiveAISubtitleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAISubtitleRequest&, const DescribeLiveAISubtitleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAISubtitleAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAudioAuditConfigResult> DescribeLiveAudioAuditConfigOutcome;
			typedef std::future<DescribeLiveAudioAuditConfigOutcome> DescribeLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAudioAuditConfigRequest&, const DescribeLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAudioAuditNotifyConfigResult> DescribeLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<DescribeLiveAudioAuditNotifyConfigOutcome> DescribeLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAudioAuditNotifyConfigRequest&, const DescribeLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCdnDiagnoseInfoResult> DescribeLiveCdnDiagnoseInfoOutcome;
			typedef std::future<DescribeLiveCdnDiagnoseInfoOutcome> DescribeLiveCdnDiagnoseInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCdnDiagnoseInfoRequest&, const DescribeLiveCdnDiagnoseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCdnDiagnoseInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCenterStreamRateDataResult> DescribeLiveCenterStreamRateDataOutcome;
			typedef std::future<DescribeLiveCenterStreamRateDataOutcome> DescribeLiveCenterStreamRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCenterStreamRateDataRequest&, const DescribeLiveCenterStreamRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCenterStreamRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCenterTransferResult> DescribeLiveCenterTransferOutcome;
			typedef std::future<DescribeLiveCenterTransferOutcome> DescribeLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCenterTransferRequest&, const DescribeLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCertificateDetailResult> DescribeLiveCertificateDetailOutcome;
			typedef std::future<DescribeLiveCertificateDetailOutcome> DescribeLiveCertificateDetailOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertificateDetailRequest&, const DescribeLiveCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCertificateListResult> DescribeLiveCertificateListOutcome;
			typedef std::future<DescribeLiveCertificateListOutcome> DescribeLiveCertificateListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertificateListRequest&, const DescribeLiveCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDelayConfigResult> DescribeLiveDelayConfigOutcome;
			typedef std::future<DescribeLiveDelayConfigOutcome> DescribeLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayConfigRequest&, const DescribeLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDelayedStreamingUsageResult> DescribeLiveDelayedStreamingUsageOutcome;
			typedef std::future<DescribeLiveDelayedStreamingUsageOutcome> DescribeLiveDelayedStreamingUsageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayedStreamingUsageRequest&, const DescribeLiveDelayedStreamingUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayedStreamingUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDetectNotifyConfigResult> DescribeLiveDetectNotifyConfigOutcome;
			typedef std::future<DescribeLiveDetectNotifyConfigOutcome> DescribeLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDetectNotifyConfigRequest&, const DescribeLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDetectPornDataResult> DescribeLiveDetectPornDataOutcome;
			typedef std::future<DescribeLiveDetectPornDataOutcome> DescribeLiveDetectPornDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDetectPornDataRequest&, const DescribeLiveDetectPornDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDetectPornDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainBpsDataResult> DescribeLiveDomainBpsDataOutcome;
			typedef std::future<DescribeLiveDomainBpsDataOutcome> DescribeLiveDomainBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainBpsDataRequest&, const DescribeLiveDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainBpsDataByLayerResult> DescribeLiveDomainBpsDataByLayerOutcome;
			typedef std::future<DescribeLiveDomainBpsDataByLayerOutcome> DescribeLiveDomainBpsDataByLayerOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainBpsDataByLayerRequest&, const DescribeLiveDomainBpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainBpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainByCertificateResult> DescribeLiveDomainByCertificateOutcome;
			typedef std::future<DescribeLiveDomainByCertificateOutcome> DescribeLiveDomainByCertificateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainByCertificateRequest&, const DescribeLiveDomainByCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainByCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainCertificateInfoResult> DescribeLiveDomainCertificateInfoOutcome;
			typedef std::future<DescribeLiveDomainCertificateInfoOutcome> DescribeLiveDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertificateInfoRequest&, const DescribeLiveDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainConfigsResult> DescribeLiveDomainConfigsOutcome;
			typedef std::future<DescribeLiveDomainConfigsOutcome> DescribeLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainConfigsRequest&, const DescribeLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainDetailResult> DescribeLiveDomainDetailOutcome;
			typedef std::future<DescribeLiveDomainDetailOutcome> DescribeLiveDomainDetailOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainDetailRequest&, const DescribeLiveDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainEdgeLogResult> DescribeLiveDomainEdgeLogOutcome;
			typedef std::future<DescribeLiveDomainEdgeLogOutcome> DescribeLiveDomainEdgeLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainEdgeLogRequest&, const DescribeLiveDomainEdgeLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainEdgeLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainFrameRateAndBitRateDataResult> DescribeLiveDomainFrameRateAndBitRateDataOutcome;
			typedef std::future<DescribeLiveDomainFrameRateAndBitRateDataOutcome> DescribeLiveDomainFrameRateAndBitRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest&, const DescribeLiveDomainFrameRateAndBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainFrameRateAndBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainLimitResult> DescribeLiveDomainLimitOutcome;
			typedef std::future<DescribeLiveDomainLimitOutcome> DescribeLiveDomainLimitOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainLimitRequest&, const DescribeLiveDomainLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainLimitAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainLogResult> DescribeLiveDomainLogOutcome;
			typedef std::future<DescribeLiveDomainLogOutcome> DescribeLiveDomainLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainLogRequest&, const DescribeLiveDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainLogExTtlResult> DescribeLiveDomainLogExTtlOutcome;
			typedef std::future<DescribeLiveDomainLogExTtlOutcome> DescribeLiveDomainLogExTtlOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainLogExTtlRequest&, const DescribeLiveDomainLogExTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainLogExTtlAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainMappingResult> DescribeLiveDomainMappingOutcome;
			typedef std::future<DescribeLiveDomainMappingOutcome> DescribeLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainMappingRequest&, const DescribeLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainMonitoringUsageDataResult> DescribeLiveDomainMonitoringUsageDataOutcome;
			typedef std::future<DescribeLiveDomainMonitoringUsageDataOutcome> DescribeLiveDomainMonitoringUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainMonitoringUsageDataRequest&, const DescribeLiveDomainMonitoringUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainMonitoringUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainMultiStreamConfigResult> DescribeLiveDomainMultiStreamConfigOutcome;
			typedef std::future<DescribeLiveDomainMultiStreamConfigOutcome> DescribeLiveDomainMultiStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainMultiStreamConfigRequest&, const DescribeLiveDomainMultiStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainMultiStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainOnlineUserNumResult> DescribeLiveDomainOnlineUserNumOutcome;
			typedef std::future<DescribeLiveDomainOnlineUserNumOutcome> DescribeLiveDomainOnlineUserNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainOnlineUserNumRequest&, const DescribeLiveDomainOnlineUserNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainOnlineUserNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPublishErrorCodeResult> DescribeLiveDomainPublishErrorCodeOutcome;
			typedef std::future<DescribeLiveDomainPublishErrorCodeOutcome> DescribeLiveDomainPublishErrorCodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPublishErrorCodeRequest&, const DescribeLiveDomainPublishErrorCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPublishErrorCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPushBpsDataResult> DescribeLiveDomainPushBpsDataOutcome;
			typedef std::future<DescribeLiveDomainPushBpsDataOutcome> DescribeLiveDomainPushBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPushBpsDataRequest&, const DescribeLiveDomainPushBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPushBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPushTrafficDataResult> DescribeLiveDomainPushTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainPushTrafficDataOutcome> DescribeLiveDomainPushTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPushTrafficDataRequest&, const DescribeLiveDomainPushTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPushTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPvUvDataResult> DescribeLiveDomainPvUvDataOutcome;
			typedef std::future<DescribeLiveDomainPvUvDataOutcome> DescribeLiveDomainPvUvDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPvUvDataRequest&, const DescribeLiveDomainPvUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPvUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeBpsDataResult> DescribeLiveDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeBpsDataOutcome> DescribeLiveDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeBpsDataRequest&, const DescribeLiveDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeHttpCodeDataResult> DescribeLiveDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeHttpCodeDataOutcome> DescribeLiveDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest&, const DescribeLiveDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeTrafficDataResult> DescribeLiveDomainRealTimeTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeTrafficDataOutcome> DescribeLiveDomainRealTimeTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeTrafficDataRequest&, const DescribeLiveDomainRealTimeTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealtimeLogDeliveryResult> DescribeLiveDomainRealtimeLogDeliveryOutcome;
			typedef std::future<DescribeLiveDomainRealtimeLogDeliveryOutcome> DescribeLiveDomainRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealtimeLogDeliveryRequest&, const DescribeLiveDomainRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRecordUsageDataResult> DescribeLiveDomainRecordUsageDataOutcome;
			typedef std::future<DescribeLiveDomainRecordUsageDataOutcome> DescribeLiveDomainRecordUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRecordUsageDataRequest&, const DescribeLiveDomainRecordUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRecordUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainSnapshotDataResult> DescribeLiveDomainSnapshotDataOutcome;
			typedef std::future<DescribeLiveDomainSnapshotDataOutcome> DescribeLiveDomainSnapshotDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainSnapshotDataRequest&, const DescribeLiveDomainSnapshotDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainSnapshotDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainStagingConfigResult> DescribeLiveDomainStagingConfigOutcome;
			typedef std::future<DescribeLiveDomainStagingConfigOutcome> DescribeLiveDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainStagingConfigRequest&, const DescribeLiveDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainStreamTranscodeDataResult> DescribeLiveDomainStreamTranscodeDataOutcome;
			typedef std::future<DescribeLiveDomainStreamTranscodeDataOutcome> DescribeLiveDomainStreamTranscodeDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainStreamTranscodeDataRequest&, const DescribeLiveDomainStreamTranscodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainStreamTranscodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTimeShiftDataResult> DescribeLiveDomainTimeShiftDataOutcome;
			typedef std::future<DescribeLiveDomainTimeShiftDataOutcome> DescribeLiveDomainTimeShiftDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTimeShiftDataRequest&, const DescribeLiveDomainTimeShiftDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTimeShiftDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTrafficDataResult> DescribeLiveDomainTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainTrafficDataOutcome> DescribeLiveDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTrafficDataRequest&, const DescribeLiveDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTranscodeParamsResult> DescribeLiveDomainTranscodeParamsOutcome;
			typedef std::future<DescribeLiveDomainTranscodeParamsOutcome> DescribeLiveDomainTranscodeParamsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTranscodeParamsRequest&, const DescribeLiveDomainTranscodeParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTranscodeParamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDrmUsageDataResult> DescribeLiveDrmUsageDataOutcome;
			typedef std::future<DescribeLiveDrmUsageDataOutcome> DescribeLiveDrmUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDrmUsageDataRequest&, const DescribeLiveDrmUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDrmUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveEdgeTransferResult> DescribeLiveEdgeTransferOutcome;
			typedef std::future<DescribeLiveEdgeTransferOutcome> DescribeLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveEdgeTransferRequest&, const DescribeLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveGrtnDurationResult> DescribeLiveGrtnDurationOutcome;
			typedef std::future<DescribeLiveGrtnDurationOutcome> DescribeLiveGrtnDurationOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveGrtnDurationRequest&, const DescribeLiveGrtnDurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveGrtnDurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveHttpsDomainListResult> DescribeLiveHttpsDomainListOutcome;
			typedef std::future<DescribeLiveHttpsDomainListOutcome> DescribeLiveHttpsDomainListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveHttpsDomainListRequest&, const DescribeLiveHttpsDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveHttpsDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveInteractionMetricDataResult> DescribeLiveInteractionMetricDataOutcome;
			typedef std::future<DescribeLiveInteractionMetricDataOutcome> DescribeLiveInteractionMetricDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveInteractionMetricDataRequest&, const DescribeLiveInteractionMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveInteractionMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveIpInfoResult> DescribeLiveIpInfoOutcome;
			typedef std::future<DescribeLiveIpInfoOutcome> DescribeLiveIpInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveIpInfoRequest&, const DescribeLiveIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveLazyPullStreamConfigResult> DescribeLiveLazyPullStreamConfigOutcome;
			typedef std::future<DescribeLiveLazyPullStreamConfigOutcome> DescribeLiveLazyPullStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveLazyPullStreamConfigRequest&, const DescribeLiveLazyPullStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveLazyPullStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveMessageAppResult> DescribeLiveMessageAppOutcome;
			typedef std::future<DescribeLiveMessageAppOutcome> DescribeLiveMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveMessageAppRequest&, const DescribeLiveMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveMessageAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveMessageGroupResult> DescribeLiveMessageGroupOutcome;
			typedef std::future<DescribeLiveMessageGroupOutcome> DescribeLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveMessageGroupRequest&, const DescribeLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveMessageGroupBandResult> DescribeLiveMessageGroupBandOutcome;
			typedef std::future<DescribeLiveMessageGroupBandOutcome> DescribeLiveMessageGroupBandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveMessageGroupBandRequest&, const DescribeLiveMessageGroupBandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveMessageGroupBandAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePackageConfigResult> DescribeLivePackageConfigOutcome;
			typedef std::future<DescribeLivePackageConfigOutcome> DescribeLivePackageConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePackageConfigRequest&, const DescribeLivePackageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePackageConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePrivateLineAreasResult> DescribeLivePrivateLineAreasOutcome;
			typedef std::future<DescribeLivePrivateLineAreasOutcome> DescribeLivePrivateLineAreasOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePrivateLineAreasRequest&, const DescribeLivePrivateLineAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePrivateLineAreasAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePrivateLineAvailGAResult> DescribeLivePrivateLineAvailGAOutcome;
			typedef std::future<DescribeLivePrivateLineAvailGAOutcome> DescribeLivePrivateLineAvailGAOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePrivateLineAvailGARequest&, const DescribeLivePrivateLineAvailGAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePrivateLineAvailGAAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveProducerUsageDataResult> DescribeLiveProducerUsageDataOutcome;
			typedef std::future<DescribeLiveProducerUsageDataOutcome> DescribeLiveProducerUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveProducerUsageDataRequest&, const DescribeLiveProducerUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveProducerUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePullStreamConfigResult> DescribeLivePullStreamConfigOutcome;
			typedef std::future<DescribeLivePullStreamConfigOutcome> DescribeLivePullStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePullStreamConfigRequest&, const DescribeLivePullStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePullToPushResult> DescribeLivePullToPushOutcome;
			typedef std::future<DescribeLivePullToPushOutcome> DescribeLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePullToPushRequest&, const DescribeLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePullToPushListResult> DescribeLivePullToPushListOutcome;
			typedef std::future<DescribeLivePullToPushListOutcome> DescribeLivePullToPushListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePullToPushListRequest&, const DescribeLivePullToPushListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullToPushListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePushProxyLogResult> DescribeLivePushProxyLogOutcome;
			typedef std::future<DescribeLivePushProxyLogOutcome> DescribeLivePushProxyLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePushProxyLogRequest&, const DescribeLivePushProxyLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePushProxyLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePushProxyUsageDataResult> DescribeLivePushProxyUsageDataOutcome;
			typedef std::future<DescribeLivePushProxyUsageDataOutcome> DescribeLivePushProxyUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePushProxyUsageDataRequest&, const DescribeLivePushProxyUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePushProxyUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRealtimeDeliveryAccResult> DescribeLiveRealtimeDeliveryAccOutcome;
			typedef std::future<DescribeLiveRealtimeDeliveryAccOutcome> DescribeLiveRealtimeDeliveryAccOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRealtimeDeliveryAccRequest&, const DescribeLiveRealtimeDeliveryAccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRealtimeDeliveryAccAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRealtimeLogAuthorizedResult> DescribeLiveRealtimeLogAuthorizedOutcome;
			typedef std::future<DescribeLiveRealtimeLogAuthorizedOutcome> DescribeLiveRealtimeLogAuthorizedOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRealtimeLogAuthorizedRequest&, const DescribeLiveRealtimeLogAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRealtimeLogAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordConfigResult> DescribeLiveRecordConfigOutcome;
			typedef std::future<DescribeLiveRecordConfigOutcome> DescribeLiveRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordConfigRequest&, const DescribeLiveRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordNotifyConfigResult> DescribeLiveRecordNotifyConfigOutcome;
			typedef std::future<DescribeLiveRecordNotifyConfigOutcome> DescribeLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordNotifyConfigRequest&, const DescribeLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordNotifyRecordsResult> DescribeLiveRecordNotifyRecordsOutcome;
			typedef std::future<DescribeLiveRecordNotifyRecordsOutcome> DescribeLiveRecordNotifyRecordsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordNotifyRecordsRequest&, const DescribeLiveRecordNotifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordNotifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordVodConfigsResult> DescribeLiveRecordVodConfigsOutcome;
			typedef std::future<DescribeLiveRecordVodConfigsOutcome> DescribeLiveRecordVodConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordVodConfigsRequest&, const DescribeLiveRecordVodConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordVodConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveShiftConfigsResult> DescribeLiveShiftConfigsOutcome;
			typedef std::future<DescribeLiveShiftConfigsOutcome> DescribeLiveShiftConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveShiftConfigsRequest&, const DescribeLiveShiftConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveShiftConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotConfigResult> DescribeLiveSnapshotConfigOutcome;
			typedef std::future<DescribeLiveSnapshotConfigOutcome> DescribeLiveSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotConfigRequest&, const DescribeLiveSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotDetectPornConfigResult> DescribeLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<DescribeLiveSnapshotDetectPornConfigOutcome> DescribeLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotDetectPornConfigRequest&, const DescribeLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotNotifyConfigResult> DescribeLiveSnapshotNotifyConfigOutcome;
			typedef std::future<DescribeLiveSnapshotNotifyConfigOutcome> DescribeLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotNotifyConfigRequest&, const DescribeLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamAuthCheckingResult> DescribeLiveStreamAuthCheckingOutcome;
			typedef std::future<DescribeLiveStreamAuthCheckingOutcome> DescribeLiveStreamAuthCheckingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamAuthCheckingRequest&, const DescribeLiveStreamAuthCheckingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamAuthCheckingAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamBitRateDataResult> DescribeLiveStreamBitRateDataOutcome;
			typedef std::future<DescribeLiveStreamBitRateDataOutcome> DescribeLiveStreamBitRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamBitRateDataRequest&, const DescribeLiveStreamBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamCountResult> DescribeLiveStreamCountOutcome;
			typedef std::future<DescribeLiveStreamCountOutcome> DescribeLiveStreamCountOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamCountRequest&, const DescribeLiveStreamCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamDelayConfigResult> DescribeLiveStreamDelayConfigOutcome;
			typedef std::future<DescribeLiveStreamDelayConfigOutcome> DescribeLiveStreamDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamDelayConfigRequest&, const DescribeLiveStreamDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamDetailFrameRateAndBitRateDataResult> DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome;
			typedef std::future<DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome> DescribeLiveStreamDetailFrameRateAndBitRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest&, const DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamDetailFrameRateAndBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamHistoryUserNumResult> DescribeLiveStreamHistoryUserNumOutcome;
			typedef std::future<DescribeLiveStreamHistoryUserNumOutcome> DescribeLiveStreamHistoryUserNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamHistoryUserNumRequest&, const DescribeLiveStreamHistoryUserNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamHistoryUserNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamMergeResult> DescribeLiveStreamMergeOutcome;
			typedef std::future<DescribeLiveStreamMergeOutcome> DescribeLiveStreamMergeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMergeRequest&, const DescribeLiveStreamMergeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMergeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamMetricDetailDataResult> DescribeLiveStreamMetricDetailDataOutcome;
			typedef std::future<DescribeLiveStreamMetricDetailDataOutcome> DescribeLiveStreamMetricDetailDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMetricDetailDataRequest&, const DescribeLiveStreamMetricDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMetricDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamMonitorListResult> DescribeLiveStreamMonitorListOutcome;
			typedef std::future<DescribeLiveStreamMonitorListOutcome> DescribeLiveStreamMonitorListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMonitorListRequest&, const DescribeLiveStreamMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMonitorListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamPreloadTasksResult> DescribeLiveStreamPreloadTasksOutcome;
			typedef std::future<DescribeLiveStreamPreloadTasksOutcome> DescribeLiveStreamPreloadTasksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPreloadTasksRequest&, const DescribeLiveStreamPreloadTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPreloadTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamPushMetricDetailDataResult> DescribeLiveStreamPushMetricDetailDataOutcome;
			typedef std::future<DescribeLiveStreamPushMetricDetailDataOutcome> DescribeLiveStreamPushMetricDetailDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPushMetricDetailDataRequest&, const DescribeLiveStreamPushMetricDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushMetricDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordContentResult> DescribeLiveStreamRecordContentOutcome;
			typedef std::future<DescribeLiveStreamRecordContentOutcome> DescribeLiveStreamRecordContentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordContentRequest&, const DescribeLiveStreamRecordContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFileResult> DescribeLiveStreamRecordIndexFileOutcome;
			typedef std::future<DescribeLiveStreamRecordIndexFileOutcome> DescribeLiveStreamRecordIndexFileOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordIndexFileRequest&, const DescribeLiveStreamRecordIndexFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFilesResult> DescribeLiveStreamRecordIndexFilesOutcome;
			typedef std::future<DescribeLiveStreamRecordIndexFilesOutcome> DescribeLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordIndexFilesRequest&, const DescribeLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamSnapshotInfoResult> DescribeLiveStreamSnapshotInfoOutcome;
			typedef std::future<DescribeLiveStreamSnapshotInfoOutcome> DescribeLiveStreamSnapshotInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamSnapshotInfoRequest&, const DescribeLiveStreamSnapshotInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamSnapshotInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamStateResult> DescribeLiveStreamStateOutcome;
			typedef std::future<DescribeLiveStreamStateOutcome> DescribeLiveStreamStateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamStateRequest&, const DescribeLiveStreamStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStateAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeInfoResult> DescribeLiveStreamTranscodeInfoOutcome;
			typedef std::future<DescribeLiveStreamTranscodeInfoOutcome> DescribeLiveStreamTranscodeInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamTranscodeInfoRequest&, const DescribeLiveStreamTranscodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeMetricDataResult> DescribeLiveStreamTranscodeMetricDataOutcome;
			typedef std::future<DescribeLiveStreamTranscodeMetricDataOutcome> DescribeLiveStreamTranscodeMetricDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamTranscodeMetricDataRequest&, const DescribeLiveStreamTranscodeMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeStreamNumResult> DescribeLiveStreamTranscodeStreamNumOutcome;
			typedef std::future<DescribeLiveStreamTranscodeStreamNumOutcome> DescribeLiveStreamTranscodeStreamNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamTranscodeStreamNumRequest&, const DescribeLiveStreamTranscodeStreamNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeStreamNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamWatermarkRulesResult> DescribeLiveStreamWatermarkRulesOutcome;
			typedef std::future<DescribeLiveStreamWatermarkRulesOutcome> DescribeLiveStreamWatermarkRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamWatermarkRulesRequest&, const DescribeLiveStreamWatermarkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamWatermarkRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamWatermarksResult> DescribeLiveStreamWatermarksOutcome;
			typedef std::future<DescribeLiveStreamWatermarksOutcome> DescribeLiveStreamWatermarksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamWatermarksRequest&, const DescribeLiveStreamWatermarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamWatermarksAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsBlockListResult> DescribeLiveStreamsBlockListOutcome;
			typedef std::future<DescribeLiveStreamsBlockListOutcome> DescribeLiveStreamsBlockListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsBlockListRequest&, const DescribeLiveStreamsBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsBlockListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsControlHistoryResult> DescribeLiveStreamsControlHistoryOutcome;
			typedef std::future<DescribeLiveStreamsControlHistoryOutcome> DescribeLiveStreamsControlHistoryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsControlHistoryRequest&, const DescribeLiveStreamsControlHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsControlHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsNotifyRecordsResult> DescribeLiveStreamsNotifyRecordsOutcome;
			typedef std::future<DescribeLiveStreamsNotifyRecordsOutcome> DescribeLiveStreamsNotifyRecordsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsNotifyRecordsRequest&, const DescribeLiveStreamsNotifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsNotifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsNotifyUrlConfigResult> DescribeLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<DescribeLiveStreamsNotifyUrlConfigOutcome> DescribeLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsNotifyUrlConfigRequest&, const DescribeLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsOnlineListResult> DescribeLiveStreamsOnlineListOutcome;
			typedef std::future<DescribeLiveStreamsOnlineListOutcome> DescribeLiveStreamsOnlineListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsOnlineListRequest&, const DescribeLiveStreamsOnlineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsOnlineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsPublishListResult> DescribeLiveStreamsPublishListOutcome;
			typedef std::future<DescribeLiveStreamsPublishListOutcome> DescribeLiveStreamsPublishListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsPublishListRequest&, const DescribeLiveStreamsPublishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsPublishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsTotalCountResult> DescribeLiveStreamsTotalCountOutcome;
			typedef std::future<DescribeLiveStreamsTotalCountOutcome> DescribeLiveStreamsTotalCountOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsTotalCountRequest&, const DescribeLiveStreamsTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveTopDomainsByFlowResult> DescribeLiveTopDomainsByFlowOutcome;
			typedef std::future<DescribeLiveTopDomainsByFlowOutcome> DescribeLiveTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveTopDomainsByFlowRequest&, const DescribeLiveTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveTrafficDomainLogResult> DescribeLiveTrafficDomainLogOutcome;
			typedef std::future<DescribeLiveTrafficDomainLogOutcome> DescribeLiveTrafficDomainLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveTrafficDomainLogRequest&, const DescribeLiveTrafficDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTrafficDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUpVideoAudioInfoResult> DescribeLiveUpVideoAudioInfoOutcome;
			typedef std::future<DescribeLiveUpVideoAudioInfoOutcome> DescribeLiveUpVideoAudioInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUpVideoAudioInfoRequest&, const DescribeLiveUpVideoAudioInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUpVideoAudioInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserBillPredictionResult> DescribeLiveUserBillPredictionOutcome;
			typedef std::future<DescribeLiveUserBillPredictionOutcome> DescribeLiveUserBillPredictionOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserBillPredictionRequest&, const DescribeLiveUserBillPredictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserBillPredictionAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserDomainsResult> DescribeLiveUserDomainsOutcome;
			typedef std::future<DescribeLiveUserDomainsOutcome> DescribeLiveUserDomainsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserDomainsRequest&, const DescribeLiveUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserStreamMetricDataResult> DescribeLiveUserStreamMetricDataOutcome;
			typedef std::future<DescribeLiveUserStreamMetricDataOutcome> DescribeLiveUserStreamMetricDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserStreamMetricDataRequest&, const DescribeLiveUserStreamMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserStreamMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserTagsResult> DescribeLiveUserTagsOutcome;
			typedef std::future<DescribeLiveUserTagsOutcome> DescribeLiveUserTagsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserTagsRequest&, const DescribeLiveUserTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserTrafficLogResult> DescribeLiveUserTrafficLogOutcome;
			typedef std::future<DescribeLiveUserTrafficLogOutcome> DescribeLiveUserTrafficLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserTrafficLogRequest&, const DescribeLiveUserTrafficLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserTrafficLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveVerifyContentResult> DescribeLiveVerifyContentOutcome;
			typedef std::future<DescribeLiveVerifyContentOutcome> DescribeLiveVerifyContentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveVerifyContentRequest&, const DescribeLiveVerifyContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveVerifyContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterLiveBypassDurationResult> DescribeMeterLiveBypassDurationOutcome;
			typedef std::future<DescribeMeterLiveBypassDurationOutcome> DescribeMeterLiveBypassDurationOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeMeterLiveBypassDurationRequest&, const DescribeMeterLiveBypassDurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterLiveBypassDurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeMixStreamListResult> DescribeMixStreamListOutcome;
			typedef std::future<DescribeMixStreamListOutcome> DescribeMixStreamListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeMixStreamListRequest&, const DescribeMixStreamListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMixStreamListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKFirstFrameCostResult> DescribeRTSNativeSDKFirstFrameCostOutcome;
			typedef std::future<DescribeRTSNativeSDKFirstFrameCostOutcome> DescribeRTSNativeSDKFirstFrameCostOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKFirstFrameCostRequest&, const DescribeRTSNativeSDKFirstFrameCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKFirstFrameCostAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKFirstFrameDelayResult> DescribeRTSNativeSDKFirstFrameDelayOutcome;
			typedef std::future<DescribeRTSNativeSDKFirstFrameDelayOutcome> DescribeRTSNativeSDKFirstFrameDelayOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKFirstFrameDelayRequest&, const DescribeRTSNativeSDKFirstFrameDelayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKFirstFrameDelayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKPlayFailStatusResult> DescribeRTSNativeSDKPlayFailStatusOutcome;
			typedef std::future<DescribeRTSNativeSDKPlayFailStatusOutcome> DescribeRTSNativeSDKPlayFailStatusOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKPlayFailStatusRequest&, const DescribeRTSNativeSDKPlayFailStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKPlayFailStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKPlayTimeResult> DescribeRTSNativeSDKPlayTimeOutcome;
			typedef std::future<DescribeRTSNativeSDKPlayTimeOutcome> DescribeRTSNativeSDKPlayTimeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKPlayTimeRequest&, const DescribeRTSNativeSDKPlayTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKPlayTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKVvDataResult> DescribeRTSNativeSDKVvDataOutcome;
			typedef std::future<DescribeRTSNativeSDKVvDataOutcome> DescribeRTSNativeSDKVvDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKVvDataRequest&, const DescribeRTSNativeSDKVvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKVvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcCloudRecordingFilesResult> DescribeRtcCloudRecordingFilesOutcome;
			typedef std::future<DescribeRtcCloudRecordingFilesOutcome> DescribeRtcCloudRecordingFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRtcCloudRecordingFilesRequest&, const DescribeRtcCloudRecordingFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcCloudRecordingFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcMPUEventSubResult> DescribeRtcMPUEventSubOutcome;
			typedef std::future<DescribeRtcMPUEventSubOutcome> DescribeRtcMPUEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRtcMPUEventSubRequest&, const DescribeRtcMPUEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcMPUEventSubAsyncHandler;
			typedef Outcome<Error, Model::DescribeShowListResult> DescribeShowListOutcome;
			typedef std::future<DescribeShowListOutcome> DescribeShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeShowListRequest&, const DescribeShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShowListAsyncHandler;
			typedef Outcome<Error, Model::DescribeStreamLocationBlockResult> DescribeStreamLocationBlockOutcome;
			typedef std::future<DescribeStreamLocationBlockOutcome> DescribeStreamLocationBlockOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeStreamLocationBlockRequest&, const DescribeStreamLocationBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLocationBlockAsyncHandler;
			typedef Outcome<Error, Model::DescribeStudioLayoutsResult> DescribeStudioLayoutsOutcome;
			typedef std::future<DescribeStudioLayoutsOutcome> DescribeStudioLayoutsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeStudioLayoutsRequest&, const DescribeStudioLayoutsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStudioLayoutsAsyncHandler;
			typedef Outcome<Error, Model::DescribeToutiaoLivePlayResult> DescribeToutiaoLivePlayOutcome;
			typedef std::future<DescribeToutiaoLivePlayOutcome> DescribeToutiaoLivePlayOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeToutiaoLivePlayRequest&, const DescribeToutiaoLivePlayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeToutiaoLivePlayAsyncHandler;
			typedef Outcome<Error, Model::DescribeToutiaoLivePublishResult> DescribeToutiaoLivePublishOutcome;
			typedef std::future<DescribeToutiaoLivePublishOutcome> DescribeToutiaoLivePublishOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeToutiaoLivePublishRequest&, const DescribeToutiaoLivePublishOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeToutiaoLivePublishAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidOnlineStreamsResult> DescribeUidOnlineStreamsOutcome;
			typedef std::future<DescribeUidOnlineStreamsOutcome> DescribeUidOnlineStreamsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUidOnlineStreamsRequest&, const DescribeUidOnlineStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidOnlineStreamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpBpsPeakDataResult> DescribeUpBpsPeakDataOutcome;
			typedef std::future<DescribeUpBpsPeakDataOutcome> DescribeUpBpsPeakDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpBpsPeakDataRequest&, const DescribeUpBpsPeakDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpBpsPeakDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpBpsPeakOfLineResult> DescribeUpBpsPeakOfLineOutcome;
			typedef std::future<DescribeUpBpsPeakOfLineOutcome> DescribeUpBpsPeakOfLineOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpBpsPeakOfLineRequest&, const DescribeUpBpsPeakOfLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpBpsPeakOfLineAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpPeakPublishStreamDataResult> DescribeUpPeakPublishStreamDataOutcome;
			typedef std::future<DescribeUpPeakPublishStreamDataOutcome> DescribeUpPeakPublishStreamDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpPeakPublishStreamDataRequest&, const DescribeUpPeakPublishStreamDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpPeakPublishStreamDataAsyncHandler;
			typedef Outcome<Error, Model::DisableLiveRealtimeLogDeliveryResult> DisableLiveRealtimeLogDeliveryOutcome;
			typedef std::future<DisableLiveRealtimeLogDeliveryOutcome> DisableLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DisableLiveRealtimeLogDeliveryRequest&, const DisableLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DynamicUpdateWaterMarkStreamRuleResult> DynamicUpdateWaterMarkStreamRuleOutcome;
			typedef std::future<DynamicUpdateWaterMarkStreamRuleOutcome> DynamicUpdateWaterMarkStreamRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DynamicUpdateWaterMarkStreamRuleRequest&, const DynamicUpdateWaterMarkStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DynamicUpdateWaterMarkStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::EditPlaylistResult> EditPlaylistOutcome;
			typedef std::future<EditPlaylistOutcome> EditPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EditPlaylistRequest&, const EditPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditPlaylistAsyncHandler;
			typedef Outcome<Error, Model::EditShowAndReplaceResult> EditShowAndReplaceOutcome;
			typedef std::future<EditShowAndReplaceOutcome> EditShowAndReplaceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EditShowAndReplaceRequest&, const EditShowAndReplaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditShowAndReplaceAsyncHandler;
			typedef Outcome<Error, Model::EffectCasterUrgentResult> EffectCasterUrgentOutcome;
			typedef std::future<EffectCasterUrgentOutcome> EffectCasterUrgentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EffectCasterUrgentRequest&, const EffectCasterUrgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EffectCasterUrgentAsyncHandler;
			typedef Outcome<Error, Model::EffectCasterVideoResourceResult> EffectCasterVideoResourceOutcome;
			typedef std::future<EffectCasterVideoResourceOutcome> EffectCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EffectCasterVideoResourceRequest&, const EffectCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EffectCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::EnableLiveRealtimeLogDeliveryResult> EnableLiveRealtimeLogDeliveryOutcome;
			typedef std::future<EnableLiveRealtimeLogDeliveryOutcome> EnableLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EnableLiveRealtimeLogDeliveryRequest&, const EnableLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ForbidLiveStreamResult> ForbidLiveStreamOutcome;
			typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ForbidLiveStreamRequest&, const ForbidLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::GetAllCustomTemplatesResult> GetAllCustomTemplatesOutcome;
			typedef std::future<GetAllCustomTemplatesOutcome> GetAllCustomTemplatesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetAllCustomTemplatesRequest&, const GetAllCustomTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllCustomTemplatesAsyncHandler;
			typedef Outcome<Error, Model::GetCustomTemplateResult> GetCustomTemplateOutcome;
			typedef std::future<GetCustomTemplateOutcome> GetCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetCustomTemplateRequest&, const GetCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeTranscodeJobResult> GetEdgeTranscodeJobOutcome;
			typedef std::future<GetEdgeTranscodeJobOutcome> GetEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetEdgeTranscodeJobRequest&, const GetEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeTranscodeTemplateResult> GetEdgeTranscodeTemplateOutcome;
			typedef std::future<GetEdgeTranscodeTemplateOutcome> GetEdgeTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetEdgeTranscodeTemplateRequest&, const GetEdgeTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetEditingJobInfoResult> GetEditingJobInfoOutcome;
			typedef std::future<GetEditingJobInfoOutcome> GetEditingJobInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetEditingJobInfoRequest&, const GetEditingJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingJobInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMessageAppResult> GetMessageAppOutcome;
			typedef std::future<GetMessageAppOutcome> GetMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageAppRequest&, const GetMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageAppAsyncHandler;
			typedef Outcome<Error, Model::GetMessageGroupResult> GetMessageGroupOutcome;
			typedef std::future<GetMessageGroupOutcome> GetMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageGroupRequest&, const GetMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::GetMessageTokenResult> GetMessageTokenOutcome;
			typedef std::future<GetMessageTokenOutcome> GetMessageTokenOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageTokenRequest&, const GetMessageTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageTokenAsyncHandler;
			typedef Outcome<Error, Model::GetTranscodeTaskStatusResult> GetTranscodeTaskStatusOutcome;
			typedef std::future<GetTranscodeTaskStatusOutcome> GetTranscodeTaskStatusOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetTranscodeTaskStatusRequest&, const GetTranscodeTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscodeTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::HotLiveRtcStreamResult> HotLiveRtcStreamOutcome;
			typedef std::future<HotLiveRtcStreamOutcome> HotLiveRtcStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::HotLiveRtcStreamRequest&, const HotLiveRtcStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HotLiveRtcStreamAsyncHandler;
			typedef Outcome<Error, Model::InitializeAutoShowListTaskResult> InitializeAutoShowListTaskOutcome;
			typedef std::future<InitializeAutoShowListTaskOutcome> InitializeAutoShowListTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::InitializeAutoShowListTaskRequest&, const InitializeAutoShowListTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeAutoShowListTaskAsyncHandler;
			typedef Outcome<Error, Model::JoinMessageGroupResult> JoinMessageGroupOutcome;
			typedef std::future<JoinMessageGroupOutcome> JoinMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::JoinMessageGroupRequest&, const JoinMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::KickLiveMessageGroupUserResult> KickLiveMessageGroupUserOutcome;
			typedef std::future<KickLiveMessageGroupUserOutcome> KickLiveMessageGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::KickLiveMessageGroupUserRequest&, const KickLiveMessageGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickLiveMessageGroupUserAsyncHandler;
			typedef Outcome<Error, Model::LeaveMessageGroupResult> LeaveMessageGroupOutcome;
			typedef std::future<LeaveMessageGroupOutcome> LeaveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::LeaveMessageGroupRequest&, const LeaveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LeaveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::ListEdgeTranscodeJobResult> ListEdgeTranscodeJobOutcome;
			typedef std::future<ListEdgeTranscodeJobOutcome> ListEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListEdgeTranscodeJobRequest&, const ListEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::ListEdgeTranscodeTemplateResult> ListEdgeTranscodeTemplateOutcome;
			typedef std::future<ListEdgeTranscodeTemplateOutcome> ListEdgeTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListEdgeTranscodeTemplateRequest&, const ListEdgeTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEdgeTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListEventSubResult> ListEventSubOutcome;
			typedef std::future<ListEventSubOutcome> ListEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListEventSubRequest&, const ListEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventSubAsyncHandler;
			typedef Outcome<Error, Model::ListEventSubEventResult> ListEventSubEventOutcome;
			typedef std::future<ListEventSubEventOutcome> ListEventSubEventOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListEventSubEventRequest&, const ListEventSubEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventSubEventAsyncHandler;
			typedef Outcome<Error, Model::ListLiveDelayConfigResult> ListLiveDelayConfigOutcome;
			typedef std::future<ListLiveDelayConfigOutcome> ListLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveDelayConfigRequest&, const ListLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::ListLiveMessageAppsResult> ListLiveMessageAppsOutcome;
			typedef std::future<ListLiveMessageAppsOutcome> ListLiveMessageAppsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveMessageAppsRequest&, const ListLiveMessageAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveMessageAppsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveMessageGroupByPageResult> ListLiveMessageGroupByPageOutcome;
			typedef std::future<ListLiveMessageGroupByPageOutcome> ListLiveMessageGroupByPageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveMessageGroupByPageRequest&, const ListLiveMessageGroupByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveMessageGroupByPageAsyncHandler;
			typedef Outcome<Error, Model::ListLiveMessageGroupMessagesResult> ListLiveMessageGroupMessagesOutcome;
			typedef std::future<ListLiveMessageGroupMessagesOutcome> ListLiveMessageGroupMessagesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveMessageGroupMessagesRequest&, const ListLiveMessageGroupMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveMessageGroupMessagesAsyncHandler;
			typedef Outcome<Error, Model::ListLiveMessageGroupUsersResult> ListLiveMessageGroupUsersOutcome;
			typedef std::future<ListLiveMessageGroupUsersOutcome> ListLiveMessageGroupUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveMessageGroupUsersRequest&, const ListLiveMessageGroupUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveMessageGroupUsersAsyncHandler;
			typedef Outcome<Error, Model::ListLiveMessageGroupsResult> ListLiveMessageGroupsOutcome;
			typedef std::future<ListLiveMessageGroupsOutcome> ListLiveMessageGroupsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveMessageGroupsRequest&, const ListLiveMessageGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveMessageGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryResult> ListLiveRealtimeLogDeliveryOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryOutcome> ListLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryRequest&, const ListLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryDomainsResult> ListLiveRealtimeLogDeliveryDomainsOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryDomainsOutcome> ListLiveRealtimeLogDeliveryDomainsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryDomainsRequest&, const ListLiveRealtimeLogDeliveryDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryInfosResult> ListLiveRealtimeLogDeliveryInfosOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryInfosOutcome> ListLiveRealtimeLogDeliveryInfosOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryInfosRequest&, const ListLiveRealtimeLogDeliveryInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryInfosAsyncHandler;
			typedef Outcome<Error, Model::ListMessageResult> ListMessageOutcome;
			typedef std::future<ListMessageOutcome> ListMessageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageRequest&, const ListMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageAsyncHandler;
			typedef Outcome<Error, Model::ListMessageAppResult> ListMessageAppOutcome;
			typedef std::future<ListMessageAppOutcome> ListMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageAppRequest&, const ListMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageAppAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupResult> ListMessageGroupOutcome;
			typedef std::future<ListMessageGroupOutcome> ListMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupRequest&, const ListMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupUserResult> ListMessageGroupUserOutcome;
			typedef std::future<ListMessageGroupUserOutcome> ListMessageGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupUserRequest&, const ListMessageGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupUserAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupUserByIdResult> ListMessageGroupUserByIdOutcome;
			typedef std::future<ListMessageGroupUserByIdOutcome> ListMessageGroupUserByIdOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupUserByIdRequest&, const ListMessageGroupUserByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupUserByIdAsyncHandler;
			typedef Outcome<Error, Model::ListMuteGroupUserResult> ListMuteGroupUserOutcome;
			typedef std::future<ListMuteGroupUserOutcome> ListMuteGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMuteGroupUserRequest&, const ListMuteGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMuteGroupUserAsyncHandler;
			typedef Outcome<Error, Model::ListPlaylistResult> ListPlaylistOutcome;
			typedef std::future<ListPlaylistOutcome> ListPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListPlaylistRequest&, const ListPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlaylistAsyncHandler;
			typedef Outcome<Error, Model::ListPlaylistItemsResult> ListPlaylistItemsOutcome;
			typedef std::future<ListPlaylistItemsOutcome> ListPlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListPlaylistItemsRequest&, const ListPlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::ListRtcMPUEventSubRecordResult> ListRtcMPUEventSubRecordOutcome;
			typedef std::future<ListRtcMPUEventSubRecordOutcome> ListRtcMPUEventSubRecordOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListRtcMPUEventSubRecordRequest&, const ListRtcMPUEventSubRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRtcMPUEventSubRecordAsyncHandler;
			typedef Outcome<Error, Model::ListRtcMPUTaskDetailResult> ListRtcMPUTaskDetailOutcome;
			typedef std::future<ListRtcMPUTaskDetailOutcome> ListRtcMPUTaskDetailOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListRtcMPUTaskDetailRequest&, const ListRtcMPUTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRtcMPUTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::LiveUpstreamQosDataResult> LiveUpstreamQosDataOutcome;
			typedef std::future<LiveUpstreamQosDataOutcome> LiveUpstreamQosDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::LiveUpstreamQosDataRequest&, const LiveUpstreamQosDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LiveUpstreamQosDataAsyncHandler;
			typedef Outcome<Error, Model::MiguLivePullToPushStartResult> MiguLivePullToPushStartOutcome;
			typedef std::future<MiguLivePullToPushStartOutcome> MiguLivePullToPushStartOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MiguLivePullToPushStartRequest&, const MiguLivePullToPushStartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MiguLivePullToPushStartAsyncHandler;
			typedef Outcome<Error, Model::MiguLivePullToPushStatusResult> MiguLivePullToPushStatusOutcome;
			typedef std::future<MiguLivePullToPushStatusOutcome> MiguLivePullToPushStatusOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MiguLivePullToPushStatusRequest&, const MiguLivePullToPushStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MiguLivePullToPushStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterComponentResult> ModifyCasterComponentOutcome;
			typedef std::future<ModifyCasterComponentOutcome> ModifyCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterComponentRequest&, const ModifyCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterEpisodeResult> ModifyCasterEpisodeOutcome;
			typedef std::future<ModifyCasterEpisodeOutcome> ModifyCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterEpisodeRequest&, const ModifyCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterLayoutResult> ModifyCasterLayoutOutcome;
			typedef std::future<ModifyCasterLayoutOutcome> ModifyCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterLayoutRequest&, const ModifyCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterProgramResult> ModifyCasterProgramOutcome;
			typedef std::future<ModifyCasterProgramOutcome> ModifyCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterProgramRequest&, const ModifyCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterVideoResourceResult> ModifyCasterVideoResourceOutcome;
			typedef std::future<ModifyCasterVideoResourceOutcome> ModifyCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterVideoResourceRequest&, const ModifyCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveAIStudioResult> ModifyLiveAIStudioOutcome;
			typedef std::future<ModifyLiveAIStudioOutcome> ModifyLiveAIStudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveAIStudioRequest&, const ModifyLiveAIStudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveAIStudioAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveDomainSchdmByPropertyResult> ModifyLiveDomainSchdmByPropertyOutcome;
			typedef std::future<ModifyLiveDomainSchdmByPropertyOutcome> ModifyLiveDomainSchdmByPropertyOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainSchdmByPropertyRequest&, const ModifyLiveDomainSchdmByPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainSchdmByPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageAppAuditResult> ModifyLiveMessageAppAuditOutcome;
			typedef std::future<ModifyLiveMessageAppAuditOutcome> ModifyLiveMessageAppAuditOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageAppAuditRequest&, const ModifyLiveMessageAppAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageAppAuditAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageAppCallbackResult> ModifyLiveMessageAppCallbackOutcome;
			typedef std::future<ModifyLiveMessageAppCallbackOutcome> ModifyLiveMessageAppCallbackOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageAppCallbackRequest&, const ModifyLiveMessageAppCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageAppCallbackAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageAppDisableResult> ModifyLiveMessageAppDisableOutcome;
			typedef std::future<ModifyLiveMessageAppDisableOutcome> ModifyLiveMessageAppDisableOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageAppDisableRequest&, const ModifyLiveMessageAppDisableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageAppDisableAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageGroupResult> ModifyLiveMessageGroupOutcome;
			typedef std::future<ModifyLiveMessageGroupOutcome> ModifyLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageGroupRequest&, const ModifyLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageGroupBandResult> ModifyLiveMessageGroupBandOutcome;
			typedef std::future<ModifyLiveMessageGroupBandOutcome> ModifyLiveMessageGroupBandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageGroupBandRequest&, const ModifyLiveMessageGroupBandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageGroupBandAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveMessageUserInfoResult> ModifyLiveMessageUserInfoOutcome;
			typedef std::future<ModifyLiveMessageUserInfoOutcome> ModifyLiveMessageUserInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveMessageUserInfoRequest&, const ModifyLiveMessageUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveMessageUserInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveRealtimeLogDeliveryResult> ModifyLiveRealtimeLogDeliveryOutcome;
			typedef std::future<ModifyLiveRealtimeLogDeliveryOutcome> ModifyLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveRealtimeLogDeliveryRequest&, const ModifyLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ModifyShowListResult> ModifyShowListOutcome;
			typedef std::future<ModifyShowListOutcome> ModifyShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyShowListRequest&, const ModifyShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShowListAsyncHandler;
			typedef Outcome<Error, Model::ModifyStudioLayoutResult> ModifyStudioLayoutOutcome;
			typedef std::future<ModifyStudioLayoutOutcome> ModifyStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyStudioLayoutRequest&, const ModifyStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::MuteAllGroupUserResult> MuteAllGroupUserOutcome;
			typedef std::future<MuteAllGroupUserOutcome> MuteAllGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MuteAllGroupUserRequest&, const MuteAllGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAllGroupUserAsyncHandler;
			typedef Outcome<Error, Model::MuteGroupUserResult> MuteGroupUserOutcome;
			typedef std::future<MuteGroupUserOutcome> MuteGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MuteGroupUserRequest&, const MuteGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteGroupUserAsyncHandler;
			typedef Outcome<Error, Model::OpenLiveShiftResult> OpenLiveShiftOutcome;
			typedef std::future<OpenLiveShiftOutcome> OpenLiveShiftOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::OpenLiveShiftRequest&, const OpenLiveShiftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenLiveShiftAsyncHandler;
			typedef Outcome<Error, Model::PlayChoosenShowResult> PlayChoosenShowOutcome;
			typedef std::future<PlayChoosenShowOutcome> PlayChoosenShowOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::PlayChoosenShowRequest&, const PlayChoosenShowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PlayChoosenShowAsyncHandler;
			typedef Outcome<Error, Model::PublishLiveStagingConfigToProductionResult> PublishLiveStagingConfigToProductionOutcome;
			typedef std::future<PublishLiveStagingConfigToProductionOutcome> PublishLiveStagingConfigToProductionOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::PublishLiveStagingConfigToProductionRequest&, const PublishLiveStagingConfigToProductionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishLiveStagingConfigToProductionAsyncHandler;
			typedef Outcome<Error, Model::QueryLiveDomainMultiStreamListResult> QueryLiveDomainMultiStreamListOutcome;
			typedef std::future<QueryLiveDomainMultiStreamListOutcome> QueryLiveDomainMultiStreamListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QueryLiveDomainMultiStreamListRequest&, const QueryLiveDomainMultiStreamListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLiveDomainMultiStreamListAsyncHandler;
			typedef Outcome<Error, Model::QueryMessageAppResult> QueryMessageAppOutcome;
			typedef std::future<QueryMessageAppOutcome> QueryMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QueryMessageAppRequest&, const QueryMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMessageAppAsyncHandler;
			typedef Outcome<Error, Model::QueryRtcAsrTasksResult> QueryRtcAsrTasksOutcome;
			typedef std::future<QueryRtcAsrTasksOutcome> QueryRtcAsrTasksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QueryRtcAsrTasksRequest&, const QueryRtcAsrTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRtcAsrTasksAsyncHandler;
			typedef Outcome<Error, Model::QuerySnapshotCallbackAuthResult> QuerySnapshotCallbackAuthOutcome;
			typedef std::future<QuerySnapshotCallbackAuthOutcome> QuerySnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QuerySnapshotCallbackAuthRequest&, const QuerySnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::RealTimeRecordCommandResult> RealTimeRecordCommandOutcome;
			typedef std::future<RealTimeRecordCommandOutcome> RealTimeRecordCommandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RealTimeRecordCommandRequest&, const RealTimeRecordCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RealTimeRecordCommandAsyncHandler;
			typedef Outcome<Error, Model::RecoverLiveMessageDeletedGroupResult> RecoverLiveMessageDeletedGroupOutcome;
			typedef std::future<RecoverLiveMessageDeletedGroupOutcome> RecoverLiveMessageDeletedGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RecoverLiveMessageDeletedGroupRequest&, const RecoverLiveMessageDeletedGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverLiveMessageDeletedGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveLiveMessageGroupBandResult> RemoveLiveMessageGroupBandOutcome;
			typedef std::future<RemoveLiveMessageGroupBandOutcome> RemoveLiveMessageGroupBandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RemoveLiveMessageGroupBandRequest&, const RemoveLiveMessageGroupBandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveLiveMessageGroupBandAsyncHandler;
			typedef Outcome<Error, Model::RemoveShowFromShowListResult> RemoveShowFromShowListOutcome;
			typedef std::future<RemoveShowFromShowListOutcome> RemoveShowFromShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RemoveShowFromShowListRequest&, const RemoveShowFromShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveShowFromShowListAsyncHandler;
			typedef Outcome<Error, Model::RemoveTerminalsResult> RemoveTerminalsOutcome;
			typedef std::future<RemoveTerminalsOutcome> RemoveTerminalsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RemoveTerminalsRequest&, const RemoveTerminalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTerminalsAsyncHandler;
			typedef Outcome<Error, Model::RestartCasterResult> RestartCasterOutcome;
			typedef std::future<RestartCasterOutcome> RestartCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RestartCasterRequest&, const RestartCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartCasterAsyncHandler;
			typedef Outcome<Error, Model::RestartLivePullToPushResult> RestartLivePullToPushOutcome;
			typedef std::future<RestartLivePullToPushOutcome> RestartLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RestartLivePullToPushRequest&, const RestartLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::RestartTranscodeTaskResult> RestartTranscodeTaskOutcome;
			typedef std::future<RestartTranscodeTaskOutcome> RestartTranscodeTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RestartTranscodeTaskRequest&, const RestartTranscodeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartTranscodeTaskAsyncHandler;
			typedef Outcome<Error, Model::ResumeLiveStreamResult> ResumeLiveStreamOutcome;
			typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ResumeLiveStreamRequest&, const ResumeLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::RollbackLiveStagingConfigResult> RollbackLiveStagingConfigOutcome;
			typedef std::future<RollbackLiveStagingConfigOutcome> RollbackLiveStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RollbackLiveStagingConfigRequest&, const RollbackLiveStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackLiveStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SendLikeResult> SendLikeOutcome;
			typedef std::future<SendLikeOutcome> SendLikeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendLikeRequest&, const SendLikeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLikeAsyncHandler;
			typedef Outcome<Error, Model::SendLiveMessageGroupResult> SendLiveMessageGroupOutcome;
			typedef std::future<SendLiveMessageGroupOutcome> SendLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendLiveMessageGroupRequest&, const SendLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::SendLiveMessageUserResult> SendLiveMessageUserOutcome;
			typedef std::future<SendLiveMessageUserOutcome> SendLiveMessageUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendLiveMessageUserRequest&, const SendLiveMessageUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLiveMessageUserAsyncHandler;
			typedef Outcome<Error, Model::SendMessageToGroupResult> SendMessageToGroupOutcome;
			typedef std::future<SendMessageToGroupOutcome> SendMessageToGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendMessageToGroupRequest&, const SendMessageToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageToGroupAsyncHandler;
			typedef Outcome<Error, Model::SendMessageToGroupUsersResult> SendMessageToGroupUsersOutcome;
			typedef std::future<SendMessageToGroupUsersOutcome> SendMessageToGroupUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendMessageToGroupUsersRequest&, const SendMessageToGroupUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageToGroupUsersAsyncHandler;
			typedef Outcome<Error, Model::SetCasterChannelResult> SetCasterChannelOutcome;
			typedef std::future<SetCasterChannelOutcome> SetCasterChannelOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterChannelRequest&, const SetCasterChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterChannelAsyncHandler;
			typedef Outcome<Error, Model::SetCasterConfigResult> SetCasterConfigOutcome;
			typedef std::future<SetCasterConfigOutcome> SetCasterConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterConfigRequest&, const SetCasterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterConfigAsyncHandler;
			typedef Outcome<Error, Model::SetCasterSceneConfigResult> SetCasterSceneConfigOutcome;
			typedef std::future<SetCasterSceneConfigOutcome> SetCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterSceneConfigRequest&, const SetCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainCertificateResult> SetLiveDomainCertificateOutcome;
			typedef std::future<SetLiveDomainCertificateOutcome> SetLiveDomainCertificateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainCertificateRequest&, const SetLiveDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainMultiStreamConfigResult> SetLiveDomainMultiStreamConfigOutcome;
			typedef std::future<SetLiveDomainMultiStreamConfigOutcome> SetLiveDomainMultiStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainMultiStreamConfigRequest&, const SetLiveDomainMultiStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainMultiStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainMultiStreamMasterResult> SetLiveDomainMultiStreamMasterOutcome;
			typedef std::future<SetLiveDomainMultiStreamMasterOutcome> SetLiveDomainMultiStreamMasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainMultiStreamMasterRequest&, const SetLiveDomainMultiStreamMasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainMultiStreamMasterAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainMultiStreamOptimalModeResult> SetLiveDomainMultiStreamOptimalModeOutcome;
			typedef std::future<SetLiveDomainMultiStreamOptimalModeOutcome> SetLiveDomainMultiStreamOptimalModeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainMultiStreamOptimalModeRequest&, const SetLiveDomainMultiStreamOptimalModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainMultiStreamOptimalModeAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainStagingConfigResult> SetLiveDomainStagingConfigOutcome;
			typedef std::future<SetLiveDomainStagingConfigOutcome> SetLiveDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainStagingConfigRequest&, const SetLiveDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveEdgeTransferResult> SetLiveEdgeTransferOutcome;
			typedef std::future<SetLiveEdgeTransferOutcome> SetLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveEdgeTransferRequest&, const SetLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::SetLiveLazyPullStreamInfoConfigResult> SetLiveLazyPullStreamInfoConfigOutcome;
			typedef std::future<SetLiveLazyPullStreamInfoConfigOutcome> SetLiveLazyPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveLazyPullStreamInfoConfigRequest&, const SetLiveLazyPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveLazyPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveMpuTaskSeiResult> SetLiveMpuTaskSeiOutcome;
			typedef std::future<SetLiveMpuTaskSeiOutcome> SetLiveMpuTaskSeiOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveMpuTaskSeiRequest&, const SetLiveMpuTaskSeiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveMpuTaskSeiAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamBlockResult> SetLiveStreamBlockOutcome;
			typedef std::future<SetLiveStreamBlockOutcome> SetLiveStreamBlockOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamBlockRequest&, const SetLiveStreamBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamBlockAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamDelayConfigResult> SetLiveStreamDelayConfigOutcome;
			typedef std::future<SetLiveStreamDelayConfigOutcome> SetLiveStreamDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamDelayConfigRequest&, const SetLiveStreamDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamPreloadTasksResult> SetLiveStreamPreloadTasksOutcome;
			typedef std::future<SetLiveStreamPreloadTasksOutcome> SetLiveStreamPreloadTasksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamPreloadTasksRequest&, const SetLiveStreamPreloadTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamPreloadTasksAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamsNotifyUrlConfigResult> SetLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<SetLiveStreamsNotifyUrlConfigOutcome> SetLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamsNotifyUrlConfigRequest&, const SetLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::SetShowListBackgroundResult> SetShowListBackgroundOutcome;
			typedef std::future<SetShowListBackgroundOutcome> SetShowListBackgroundOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetShowListBackgroundRequest&, const SetShowListBackgroundOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetShowListBackgroundAsyncHandler;
			typedef Outcome<Error, Model::SetSnapshotCallbackAuthResult> SetSnapshotCallbackAuthOutcome;
			typedef std::future<SetSnapshotCallbackAuthOutcome> SetSnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetSnapshotCallbackAuthRequest&, const SetSnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::StartCasterResult> StartCasterOutcome;
			typedef std::future<StartCasterOutcome> StartCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartCasterRequest&, const StartCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCasterAsyncHandler;
			typedef Outcome<Error, Model::StartCasterSceneResult> StartCasterSceneOutcome;
			typedef std::future<StartCasterSceneOutcome> StartCasterSceneOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartCasterSceneRequest&, const StartCasterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCasterSceneAsyncHandler;
			typedef Outcome<Error, Model::StartEdgeTranscodeJobResult> StartEdgeTranscodeJobOutcome;
			typedef std::future<StartEdgeTranscodeJobOutcome> StartEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartEdgeTranscodeJobRequest&, const StartEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::StartLiveDomainResult> StartLiveDomainOutcome;
			typedef std::future<StartLiveDomainOutcome> StartLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartLiveDomainRequest&, const StartLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::StartLiveMPUTaskResult> StartLiveMPUTaskOutcome;
			typedef std::future<StartLiveMPUTaskOutcome> StartLiveMPUTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartLiveMPUTaskRequest&, const StartLiveMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StartLiveStreamMonitorResult> StartLiveStreamMonitorOutcome;
			typedef std::future<StartLiveStreamMonitorOutcome> StartLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartLiveStreamMonitorRequest&, const StartLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::StartPlaylistResult> StartPlaylistOutcome;
			typedef std::future<StartPlaylistOutcome> StartPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartPlaylistRequest&, const StartPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPlaylistAsyncHandler;
			typedef Outcome<Error, Model::StartRtcCloudRecordingResult> StartRtcCloudRecordingOutcome;
			typedef std::future<StartRtcCloudRecordingOutcome> StartRtcCloudRecordingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartRtcCloudRecordingRequest&, const StartRtcCloudRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRtcCloudRecordingAsyncHandler;
			typedef Outcome<Error, Model::StopCasterResult> StopCasterOutcome;
			typedef std::future<StopCasterOutcome> StopCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopCasterRequest&, const StopCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterAsyncHandler;
			typedef Outcome<Error, Model::StopCasterSceneResult> StopCasterSceneOutcome;
			typedef std::future<StopCasterSceneOutcome> StopCasterSceneOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopCasterSceneRequest&, const StopCasterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterSceneAsyncHandler;
			typedef Outcome<Error, Model::StopEdgeTranscodeJobResult> StopEdgeTranscodeJobOutcome;
			typedef std::future<StopEdgeTranscodeJobOutcome> StopEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopEdgeTranscodeJobRequest&, const StopEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::StopLiveDomainResult> StopLiveDomainOutcome;
			typedef std::future<StopLiveDomainOutcome> StopLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLiveDomainRequest&, const StopLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::StopLiveMPUTaskResult> StopLiveMPUTaskOutcome;
			typedef std::future<StopLiveMPUTaskOutcome> StopLiveMPUTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLiveMPUTaskRequest&, const StopLiveMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StopLivePullToPushResult> StopLivePullToPushOutcome;
			typedef std::future<StopLivePullToPushOutcome> StopLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLivePullToPushRequest&, const StopLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::StopLiveStreamMonitorResult> StopLiveStreamMonitorOutcome;
			typedef std::future<StopLiveStreamMonitorOutcome> StopLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLiveStreamMonitorRequest&, const StopLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::StopPlaylistResult> StopPlaylistOutcome;
			typedef std::future<StopPlaylistOutcome> StopPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopPlaylistRequest&, const StopPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPlaylistAsyncHandler;
			typedef Outcome<Error, Model::StopRtcAsrTaskResult> StopRtcAsrTaskOutcome;
			typedef std::future<StopRtcAsrTaskOutcome> StopRtcAsrTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopRtcAsrTaskRequest&, const StopRtcAsrTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRtcAsrTaskAsyncHandler;
			typedef Outcome<Error, Model::StopRtcCloudRecordingResult> StopRtcCloudRecordingOutcome;
			typedef std::future<StopRtcCloudRecordingOutcome> StopRtcCloudRecordingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopRtcCloudRecordingRequest&, const StopRtcCloudRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRtcCloudRecordingAsyncHandler;
			typedef Outcome<Error, Model::TagLiveResourcesResult> TagLiveResourcesOutcome;
			typedef std::future<TagLiveResourcesOutcome> TagLiveResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::TagLiveResourcesRequest&, const TagLiveResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagLiveResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagLiveResourcesResult> UnTagLiveResourcesOutcome;
			typedef std::future<UnTagLiveResourcesOutcome> UnTagLiveResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UnTagLiveResourcesRequest&, const UnTagLiveResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagLiveResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnbanLiveMessageGroupResult> UnbanLiveMessageGroupOutcome;
			typedef std::future<UnbanLiveMessageGroupOutcome> UnbanLiveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UnbanLiveMessageGroupRequest&, const UnbanLiveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbanLiveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateCasterResourceGroupResult> UpdateCasterResourceGroupOutcome;
			typedef std::future<UpdateCasterResourceGroupOutcome> UpdateCasterResourceGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCasterResourceGroupRequest&, const UpdateCasterResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCasterResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateCasterSceneAudioResult> UpdateCasterSceneAudioOutcome;
			typedef std::future<UpdateCasterSceneAudioOutcome> UpdateCasterSceneAudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCasterSceneAudioRequest&, const UpdateCasterSceneAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCasterSceneAudioAsyncHandler;
			typedef Outcome<Error, Model::UpdateCasterSceneConfigResult> UpdateCasterSceneConfigOutcome;
			typedef std::future<UpdateCasterSceneConfigOutcome> UpdateCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCasterSceneConfigRequest&, const UpdateCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomLiveStreamTranscodeResult> UpdateCustomLiveStreamTranscodeOutcome;
			typedef std::future<UpdateCustomLiveStreamTranscodeOutcome> UpdateCustomLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCustomLiveStreamTranscodeRequest&, const UpdateCustomLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::UpdateEdgeTranscodeJobResult> UpdateEdgeTranscodeJobOutcome;
			typedef std::future<UpdateEdgeTranscodeJobOutcome> UpdateEdgeTranscodeJobOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateEdgeTranscodeJobRequest&, const UpdateEdgeTranscodeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeTranscodeJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateEventSubResult> UpdateEventSubOutcome;
			typedef std::future<UpdateEventSubOutcome> UpdateEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateEventSubRequest&, const UpdateEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventSubAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAIProduceRulesResult> UpdateLiveAIProduceRulesOutcome;
			typedef std::future<UpdateLiveAIProduceRulesOutcome> UpdateLiveAIProduceRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAIProduceRulesRequest&, const UpdateLiveAIProduceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAIProduceRulesAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAISubtitleResult> UpdateLiveAISubtitleOutcome;
			typedef std::future<UpdateLiveAISubtitleOutcome> UpdateLiveAISubtitleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAISubtitleRequest&, const UpdateLiveAISubtitleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAISubtitleAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAppRecordConfigResult> UpdateLiveAppRecordConfigOutcome;
			typedef std::future<UpdateLiveAppRecordConfigOutcome> UpdateLiveAppRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAppRecordConfigRequest&, const UpdateLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAppSnapshotConfigResult> UpdateLiveAppSnapshotConfigOutcome;
			typedef std::future<UpdateLiveAppSnapshotConfigOutcome> UpdateLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAppSnapshotConfigRequest&, const UpdateLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAudioAuditConfigResult> UpdateLiveAudioAuditConfigOutcome;
			typedef std::future<UpdateLiveAudioAuditConfigOutcome> UpdateLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAudioAuditConfigRequest&, const UpdateLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAudioAuditNotifyConfigResult> UpdateLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<UpdateLiveAudioAuditNotifyConfigOutcome> UpdateLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAudioAuditNotifyConfigRequest&, const UpdateLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveCenterTransferResult> UpdateLiveCenterTransferOutcome;
			typedef std::future<UpdateLiveCenterTransferOutcome> UpdateLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveCenterTransferRequest&, const UpdateLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveDelayConfigResult> UpdateLiveDelayConfigOutcome;
			typedef std::future<UpdateLiveDelayConfigOutcome> UpdateLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveDelayConfigRequest&, const UpdateLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveDetectNotifyConfigResult> UpdateLiveDetectNotifyConfigOutcome;
			typedef std::future<UpdateLiveDetectNotifyConfigOutcome> UpdateLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveDetectNotifyConfigRequest&, const UpdateLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveMPUTaskResult> UpdateLiveMPUTaskOutcome;
			typedef std::future<UpdateLiveMPUTaskOutcome> UpdateLiveMPUTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveMPUTaskRequest&, const UpdateLiveMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateLivePackageConfigResult> UpdateLivePackageConfigOutcome;
			typedef std::future<UpdateLivePackageConfigOutcome> UpdateLivePackageConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLivePackageConfigRequest&, const UpdateLivePackageConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLivePackageConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLivePullStreamInfoConfigResult> UpdateLivePullStreamInfoConfigOutcome;
			typedef std::future<UpdateLivePullStreamInfoConfigOutcome> UpdateLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLivePullStreamInfoConfigRequest&, const UpdateLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLivePullToPushResult> UpdateLivePullToPushOutcome;
			typedef std::future<UpdateLivePullToPushOutcome> UpdateLivePullToPushOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLivePullToPushRequest&, const UpdateLivePullToPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLivePullToPushAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveRecordNotifyConfigResult> UpdateLiveRecordNotifyConfigOutcome;
			typedef std::future<UpdateLiveRecordNotifyConfigOutcome> UpdateLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveRecordNotifyConfigRequest&, const UpdateLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveRecordVodConfigResult> UpdateLiveRecordVodConfigOutcome;
			typedef std::future<UpdateLiveRecordVodConfigOutcome> UpdateLiveRecordVodConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveRecordVodConfigRequest&, const UpdateLiveRecordVodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveRecordVodConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveSnapshotDetectPornConfigResult> UpdateLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<UpdateLiveSnapshotDetectPornConfigOutcome> UpdateLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveSnapshotDetectPornConfigRequest&, const UpdateLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveSnapshotNotifyConfigResult> UpdateLiveSnapshotNotifyConfigOutcome;
			typedef std::future<UpdateLiveSnapshotNotifyConfigOutcome> UpdateLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveSnapshotNotifyConfigRequest&, const UpdateLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamMonitorResult> UpdateLiveStreamMonitorOutcome;
			typedef std::future<UpdateLiveStreamMonitorOutcome> UpdateLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamMonitorRequest&, const UpdateLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamTranscodeResult> UpdateLiveStreamTranscodeOutcome;
			typedef std::future<UpdateLiveStreamTranscodeOutcome> UpdateLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamTranscodeRequest&, const UpdateLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamWatermarkResult> UpdateLiveStreamWatermarkOutcome;
			typedef std::future<UpdateLiveStreamWatermarkOutcome> UpdateLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamWatermarkRequest&, const UpdateLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamWatermarkRuleResult> UpdateLiveStreamWatermarkRuleOutcome;
			typedef std::future<UpdateLiveStreamWatermarkRuleOutcome> UpdateLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamWatermarkRuleRequest&, const UpdateLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateMessageAppResult> UpdateMessageAppOutcome;
			typedef std::future<UpdateMessageAppOutcome> UpdateMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMessageAppRequest&, const UpdateMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateMessageGroupResult> UpdateMessageGroupOutcome;
			typedef std::future<UpdateMessageGroupOutcome> UpdateMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMessageGroupRequest&, const UpdateMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateMixStreamResult> UpdateMixStreamOutcome;
			typedef std::future<UpdateMixStreamOutcome> UpdateMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMixStreamRequest&, const UpdateMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMixStreamAsyncHandler;
			typedef Outcome<Error, Model::UpdateRtcCloudRecordingResult> UpdateRtcCloudRecordingOutcome;
			typedef std::future<UpdateRtcCloudRecordingOutcome> UpdateRtcCloudRecordingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateRtcCloudRecordingRequest&, const UpdateRtcCloudRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRtcCloudRecordingAsyncHandler;
			typedef Outcome<Error, Model::UpdateRtcMPUEventSubResult> UpdateRtcMPUEventSubOutcome;
			typedef std::future<UpdateRtcMPUEventSubOutcome> UpdateRtcMPUEventSubOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateRtcMPUEventSubRequest&, const UpdateRtcMPUEventSubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRtcMPUEventSubAsyncHandler;
			typedef Outcome<Error, Model::UpdateRtsLiveStreamTranscodeResult> UpdateRtsLiveStreamTranscodeOutcome;
			typedef std::future<UpdateRtsLiveStreamTranscodeOutcome> UpdateRtsLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateRtsLiveStreamTranscodeRequest&, const UpdateRtsLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRtsLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::VerifyLiveDomainOwnerResult> VerifyLiveDomainOwnerOutcome;
			typedef std::future<VerifyLiveDomainOwnerOutcome> VerifyLiveDomainOwnerOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::VerifyLiveDomainOwnerRequest&, const VerifyLiveDomainOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyLiveDomainOwnerAsyncHandler;

			LiveClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LiveClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LiveClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LiveClient();
			AddCasterComponentOutcome addCasterComponent(const Model::AddCasterComponentRequest &request)const;
			void addCasterComponentAsync(const Model::AddCasterComponentRequest& request, const AddCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterComponentOutcomeCallable addCasterComponentCallable(const Model::AddCasterComponentRequest& request) const;
			AddCasterEpisodeOutcome addCasterEpisode(const Model::AddCasterEpisodeRequest &request)const;
			void addCasterEpisodeAsync(const Model::AddCasterEpisodeRequest& request, const AddCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeOutcomeCallable addCasterEpisodeCallable(const Model::AddCasterEpisodeRequest& request) const;
			AddCasterEpisodeGroupOutcome addCasterEpisodeGroup(const Model::AddCasterEpisodeGroupRequest &request)const;
			void addCasterEpisodeGroupAsync(const Model::AddCasterEpisodeGroupRequest& request, const AddCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeGroupOutcomeCallable addCasterEpisodeGroupCallable(const Model::AddCasterEpisodeGroupRequest& request) const;
			AddCasterEpisodeGroupContentOutcome addCasterEpisodeGroupContent(const Model::AddCasterEpisodeGroupContentRequest &request)const;
			void addCasterEpisodeGroupContentAsync(const Model::AddCasterEpisodeGroupContentRequest& request, const AddCasterEpisodeGroupContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeGroupContentOutcomeCallable addCasterEpisodeGroupContentCallable(const Model::AddCasterEpisodeGroupContentRequest& request) const;
			AddCasterLayoutOutcome addCasterLayout(const Model::AddCasterLayoutRequest &request)const;
			void addCasterLayoutAsync(const Model::AddCasterLayoutRequest& request, const AddCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterLayoutOutcomeCallable addCasterLayoutCallable(const Model::AddCasterLayoutRequest& request) const;
			AddCasterProgramOutcome addCasterProgram(const Model::AddCasterProgramRequest &request)const;
			void addCasterProgramAsync(const Model::AddCasterProgramRequest& request, const AddCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterProgramOutcomeCallable addCasterProgramCallable(const Model::AddCasterProgramRequest& request) const;
			AddCasterVideoResourceOutcome addCasterVideoResource(const Model::AddCasterVideoResourceRequest &request)const;
			void addCasterVideoResourceAsync(const Model::AddCasterVideoResourceRequest& request, const AddCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterVideoResourceOutcomeCallable addCasterVideoResourceCallable(const Model::AddCasterVideoResourceRequest& request) const;
			AddCustomLiveStreamTranscodeOutcome addCustomLiveStreamTranscode(const Model::AddCustomLiveStreamTranscodeRequest &request)const;
			void addCustomLiveStreamTranscodeAsync(const Model::AddCustomLiveStreamTranscodeRequest& request, const AddCustomLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomLiveStreamTranscodeOutcomeCallable addCustomLiveStreamTranscodeCallable(const Model::AddCustomLiveStreamTranscodeRequest& request) const;
			AddLiveAIProduceRulesOutcome addLiveAIProduceRules(const Model::AddLiveAIProduceRulesRequest &request)const;
			void addLiveAIProduceRulesAsync(const Model::AddLiveAIProduceRulesRequest& request, const AddLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAIProduceRulesOutcomeCallable addLiveAIProduceRulesCallable(const Model::AddLiveAIProduceRulesRequest& request) const;
			AddLiveAISubtitleOutcome addLiveAISubtitle(const Model::AddLiveAISubtitleRequest &request)const;
			void addLiveAISubtitleAsync(const Model::AddLiveAISubtitleRequest& request, const AddLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAISubtitleOutcomeCallable addLiveAISubtitleCallable(const Model::AddLiveAISubtitleRequest& request) const;
			AddLiveAppRecordConfigOutcome addLiveAppRecordConfig(const Model::AddLiveAppRecordConfigRequest &request)const;
			void addLiveAppRecordConfigAsync(const Model::AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAppRecordConfigOutcomeCallable addLiveAppRecordConfigCallable(const Model::AddLiveAppRecordConfigRequest& request) const;
			AddLiveAppSnapshotConfigOutcome addLiveAppSnapshotConfig(const Model::AddLiveAppSnapshotConfigRequest &request)const;
			void addLiveAppSnapshotConfigAsync(const Model::AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAppSnapshotConfigOutcomeCallable addLiveAppSnapshotConfigCallable(const Model::AddLiveAppSnapshotConfigRequest& request) const;
			AddLiveAudioAuditConfigOutcome addLiveAudioAuditConfig(const Model::AddLiveAudioAuditConfigRequest &request)const;
			void addLiveAudioAuditConfigAsync(const Model::AddLiveAudioAuditConfigRequest& request, const AddLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAudioAuditConfigOutcomeCallable addLiveAudioAuditConfigCallable(const Model::AddLiveAudioAuditConfigRequest& request) const;
			AddLiveAudioAuditNotifyConfigOutcome addLiveAudioAuditNotifyConfig(const Model::AddLiveAudioAuditNotifyConfigRequest &request)const;
			void addLiveAudioAuditNotifyConfigAsync(const Model::AddLiveAudioAuditNotifyConfigRequest& request, const AddLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAudioAuditNotifyConfigOutcomeCallable addLiveAudioAuditNotifyConfigCallable(const Model::AddLiveAudioAuditNotifyConfigRequest& request) const;
			AddLiveCenterTransferOutcome addLiveCenterTransfer(const Model::AddLiveCenterTransferRequest &request)const;
			void addLiveCenterTransferAsync(const Model::AddLiveCenterTransferRequest& request, const AddLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveCenterTransferOutcomeCallable addLiveCenterTransferCallable(const Model::AddLiveCenterTransferRequest& request) const;
			AddLiveDetectNotifyConfigOutcome addLiveDetectNotifyConfig(const Model::AddLiveDetectNotifyConfigRequest &request)const;
			void addLiveDetectNotifyConfigAsync(const Model::AddLiveDetectNotifyConfigRequest& request, const AddLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDetectNotifyConfigOutcomeCallable addLiveDetectNotifyConfigCallable(const Model::AddLiveDetectNotifyConfigRequest& request) const;
			AddLiveDomainOutcome addLiveDomain(const Model::AddLiveDomainRequest &request)const;
			void addLiveDomainAsync(const Model::AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainOutcomeCallable addLiveDomainCallable(const Model::AddLiveDomainRequest& request) const;
			AddLiveDomainMappingOutcome addLiveDomainMapping(const Model::AddLiveDomainMappingRequest &request)const;
			void addLiveDomainMappingAsync(const Model::AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainMappingOutcomeCallable addLiveDomainMappingCallable(const Model::AddLiveDomainMappingRequest& request) const;
			AddLiveDomainPlayMappingOutcome addLiveDomainPlayMapping(const Model::AddLiveDomainPlayMappingRequest &request)const;
			void addLiveDomainPlayMappingAsync(const Model::AddLiveDomainPlayMappingRequest& request, const AddLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainPlayMappingOutcomeCallable addLiveDomainPlayMappingCallable(const Model::AddLiveDomainPlayMappingRequest& request) const;
			AddLiveMessageGroupBandOutcome addLiveMessageGroupBand(const Model::AddLiveMessageGroupBandRequest &request)const;
			void addLiveMessageGroupBandAsync(const Model::AddLiveMessageGroupBandRequest& request, const AddLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveMessageGroupBandOutcomeCallable addLiveMessageGroupBandCallable(const Model::AddLiveMessageGroupBandRequest& request) const;
			AddLivePackageConfigOutcome addLivePackageConfig(const Model::AddLivePackageConfigRequest &request)const;
			void addLivePackageConfigAsync(const Model::AddLivePackageConfigRequest& request, const AddLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLivePackageConfigOutcomeCallable addLivePackageConfigCallable(const Model::AddLivePackageConfigRequest& request) const;
			AddLivePullStreamInfoConfigOutcome addLivePullStreamInfoConfig(const Model::AddLivePullStreamInfoConfigRequest &request)const;
			void addLivePullStreamInfoConfigAsync(const Model::AddLivePullStreamInfoConfigRequest& request, const AddLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLivePullStreamInfoConfigOutcomeCallable addLivePullStreamInfoConfigCallable(const Model::AddLivePullStreamInfoConfigRequest& request) const;
			AddLiveRecordNotifyConfigOutcome addLiveRecordNotifyConfig(const Model::AddLiveRecordNotifyConfigRequest &request)const;
			void addLiveRecordNotifyConfigAsync(const Model::AddLiveRecordNotifyConfigRequest& request, const AddLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveRecordNotifyConfigOutcomeCallable addLiveRecordNotifyConfigCallable(const Model::AddLiveRecordNotifyConfigRequest& request) const;
			AddLiveRecordVodConfigOutcome addLiveRecordVodConfig(const Model::AddLiveRecordVodConfigRequest &request)const;
			void addLiveRecordVodConfigAsync(const Model::AddLiveRecordVodConfigRequest& request, const AddLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveRecordVodConfigOutcomeCallable addLiveRecordVodConfigCallable(const Model::AddLiveRecordVodConfigRequest& request) const;
			AddLiveSnapshotDetectPornConfigOutcome addLiveSnapshotDetectPornConfig(const Model::AddLiveSnapshotDetectPornConfigRequest &request)const;
			void addLiveSnapshotDetectPornConfigAsync(const Model::AddLiveSnapshotDetectPornConfigRequest& request, const AddLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveSnapshotDetectPornConfigOutcomeCallable addLiveSnapshotDetectPornConfigCallable(const Model::AddLiveSnapshotDetectPornConfigRequest& request) const;
			AddLiveSnapshotNotifyConfigOutcome addLiveSnapshotNotifyConfig(const Model::AddLiveSnapshotNotifyConfigRequest &request)const;
			void addLiveSnapshotNotifyConfigAsync(const Model::AddLiveSnapshotNotifyConfigRequest& request, const AddLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveSnapshotNotifyConfigOutcomeCallable addLiveSnapshotNotifyConfigCallable(const Model::AddLiveSnapshotNotifyConfigRequest& request) const;
			AddLiveStreamMergeOutcome addLiveStreamMerge(const Model::AddLiveStreamMergeRequest &request)const;
			void addLiveStreamMergeAsync(const Model::AddLiveStreamMergeRequest& request, const AddLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamMergeOutcomeCallable addLiveStreamMergeCallable(const Model::AddLiveStreamMergeRequest& request) const;
			AddLiveStreamTranscodeOutcome addLiveStreamTranscode(const Model::AddLiveStreamTranscodeRequest &request)const;
			void addLiveStreamTranscodeAsync(const Model::AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamTranscodeOutcomeCallable addLiveStreamTranscodeCallable(const Model::AddLiveStreamTranscodeRequest& request) const;
			AddLiveStreamWatermarkOutcome addLiveStreamWatermark(const Model::AddLiveStreamWatermarkRequest &request)const;
			void addLiveStreamWatermarkAsync(const Model::AddLiveStreamWatermarkRequest& request, const AddLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamWatermarkOutcomeCallable addLiveStreamWatermarkCallable(const Model::AddLiveStreamWatermarkRequest& request) const;
			AddLiveStreamWatermarkRuleOutcome addLiveStreamWatermarkRule(const Model::AddLiveStreamWatermarkRuleRequest &request)const;
			void addLiveStreamWatermarkRuleAsync(const Model::AddLiveStreamWatermarkRuleRequest& request, const AddLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamWatermarkRuleOutcomeCallable addLiveStreamWatermarkRuleCallable(const Model::AddLiveStreamWatermarkRuleRequest& request) const;
			AddPlaylistItemsOutcome addPlaylistItems(const Model::AddPlaylistItemsRequest &request)const;
			void addPlaylistItemsAsync(const Model::AddPlaylistItemsRequest& request, const AddPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPlaylistItemsOutcomeCallable addPlaylistItemsCallable(const Model::AddPlaylistItemsRequest& request) const;
			AddRtsLiveStreamTranscodeOutcome addRtsLiveStreamTranscode(const Model::AddRtsLiveStreamTranscodeRequest &request)const;
			void addRtsLiveStreamTranscodeAsync(const Model::AddRtsLiveStreamTranscodeRequest& request, const AddRtsLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRtsLiveStreamTranscodeOutcomeCallable addRtsLiveStreamTranscodeCallable(const Model::AddRtsLiveStreamTranscodeRequest& request) const;
			AddShowIntoShowListOutcome addShowIntoShowList(const Model::AddShowIntoShowListRequest &request)const;
			void addShowIntoShowListAsync(const Model::AddShowIntoShowListRequest& request, const AddShowIntoShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddShowIntoShowListOutcomeCallable addShowIntoShowListCallable(const Model::AddShowIntoShowListRequest& request) const;
			AddStudioLayoutOutcome addStudioLayout(const Model::AddStudioLayoutRequest &request)const;
			void addStudioLayoutAsync(const Model::AddStudioLayoutRequest& request, const AddStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddStudioLayoutOutcomeCallable addStudioLayoutCallable(const Model::AddStudioLayoutRequest& request) const;
			AddTrancodeSEIOutcome addTrancodeSEI(const Model::AddTrancodeSEIRequest &request)const;
			void addTrancodeSEIAsync(const Model::AddTrancodeSEIRequest& request, const AddTrancodeSEIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTrancodeSEIOutcomeCallable addTrancodeSEICallable(const Model::AddTrancodeSEIRequest& request) const;
			BanLiveMessageGroupOutcome banLiveMessageGroup(const Model::BanLiveMessageGroupRequest &request)const;
			void banLiveMessageGroupAsync(const Model::BanLiveMessageGroupRequest& request, const BanLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BanLiveMessageGroupOutcomeCallable banLiveMessageGroupCallable(const Model::BanLiveMessageGroupRequest& request) const;
			BatchDeleteLiveDomainConfigsOutcome batchDeleteLiveDomainConfigs(const Model::BatchDeleteLiveDomainConfigsRequest &request)const;
			void batchDeleteLiveDomainConfigsAsync(const Model::BatchDeleteLiveDomainConfigsRequest& request, const BatchDeleteLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteLiveDomainConfigsOutcomeCallable batchDeleteLiveDomainConfigsCallable(const Model::BatchDeleteLiveDomainConfigsRequest& request) const;
			BatchGetOnlineUsersOutcome batchGetOnlineUsers(const Model::BatchGetOnlineUsersRequest &request)const;
			void batchGetOnlineUsersAsync(const Model::BatchGetOnlineUsersRequest& request, const BatchGetOnlineUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetOnlineUsersOutcomeCallable batchGetOnlineUsersCallable(const Model::BatchGetOnlineUsersRequest& request) const;
			BatchSetLiveDomainConfigsOutcome batchSetLiveDomainConfigs(const Model::BatchSetLiveDomainConfigsRequest &request)const;
			void batchSetLiveDomainConfigsAsync(const Model::BatchSetLiveDomainConfigsRequest& request, const BatchSetLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetLiveDomainConfigsOutcomeCallable batchSetLiveDomainConfigsCallable(const Model::BatchSetLiveDomainConfigsRequest& request) const;
			CancelMuteAllGroupUserOutcome cancelMuteAllGroupUser(const Model::CancelMuteAllGroupUserRequest &request)const;
			void cancelMuteAllGroupUserAsync(const Model::CancelMuteAllGroupUserRequest& request, const CancelMuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelMuteAllGroupUserOutcomeCallable cancelMuteAllGroupUserCallable(const Model::CancelMuteAllGroupUserRequest& request) const;
			CancelMuteGroupUserOutcome cancelMuteGroupUser(const Model::CancelMuteGroupUserRequest &request)const;
			void cancelMuteGroupUserAsync(const Model::CancelMuteGroupUserRequest& request, const CancelMuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelMuteGroupUserOutcomeCallable cancelMuteGroupUserCallable(const Model::CancelMuteGroupUserRequest& request) const;
			ChangeLiveDomainResourceGroupOutcome changeLiveDomainResourceGroup(const Model::ChangeLiveDomainResourceGroupRequest &request)const;
			void changeLiveDomainResourceGroupAsync(const Model::ChangeLiveDomainResourceGroupRequest& request, const ChangeLiveDomainResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeLiveDomainResourceGroupOutcomeCallable changeLiveDomainResourceGroupCallable(const Model::ChangeLiveDomainResourceGroupRequest& request) const;
			CheckLiveMessageUsersInGroupOutcome checkLiveMessageUsersInGroup(const Model::CheckLiveMessageUsersInGroupRequest &request)const;
			void checkLiveMessageUsersInGroupAsync(const Model::CheckLiveMessageUsersInGroupRequest& request, const CheckLiveMessageUsersInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckLiveMessageUsersInGroupOutcomeCallable checkLiveMessageUsersInGroupCallable(const Model::CheckLiveMessageUsersInGroupRequest& request) const;
			CheckLiveMessageUsersOnlineOutcome checkLiveMessageUsersOnline(const Model::CheckLiveMessageUsersOnlineRequest &request)const;
			void checkLiveMessageUsersOnlineAsync(const Model::CheckLiveMessageUsersOnlineRequest& request, const CheckLiveMessageUsersOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckLiveMessageUsersOnlineOutcomeCallable checkLiveMessageUsersOnlineCallable(const Model::CheckLiveMessageUsersOnlineRequest& request) const;
			CloseLiveShiftOutcome closeLiveShift(const Model::CloseLiveShiftRequest &request)const;
			void closeLiveShiftAsync(const Model::CloseLiveShiftRequest& request, const CloseLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseLiveShiftOutcomeCallable closeLiveShiftCallable(const Model::CloseLiveShiftRequest& request) const;
			CopyCasterOutcome copyCaster(const Model::CopyCasterRequest &request)const;
			void copyCasterAsync(const Model::CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCasterOutcomeCallable copyCasterCallable(const Model::CopyCasterRequest& request) const;
			CopyCasterSceneConfigOutcome copyCasterSceneConfig(const Model::CopyCasterSceneConfigRequest &request)const;
			void copyCasterSceneConfigAsync(const Model::CopyCasterSceneConfigRequest& request, const CopyCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCasterSceneConfigOutcomeCallable copyCasterSceneConfigCallable(const Model::CopyCasterSceneConfigRequest& request) const;
			CreateCasterOutcome createCaster(const Model::CreateCasterRequest &request)const;
			void createCasterAsync(const Model::CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCasterOutcomeCallable createCasterCallable(const Model::CreateCasterRequest& request) const;
			CreateCustomTemplateOutcome createCustomTemplate(const Model::CreateCustomTemplateRequest &request)const;
			void createCustomTemplateAsync(const Model::CreateCustomTemplateRequest& request, const CreateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomTemplateOutcomeCallable createCustomTemplateCallable(const Model::CreateCustomTemplateRequest& request) const;
			CreateEdgeTranscodeJobOutcome createEdgeTranscodeJob(const Model::CreateEdgeTranscodeJobRequest &request)const;
			void createEdgeTranscodeJobAsync(const Model::CreateEdgeTranscodeJobRequest& request, const CreateEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeTranscodeJobOutcomeCallable createEdgeTranscodeJobCallable(const Model::CreateEdgeTranscodeJobRequest& request) const;
			CreateEventSubOutcome createEventSub(const Model::CreateEventSubRequest &request)const;
			void createEventSubAsync(const Model::CreateEventSubRequest& request, const CreateEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventSubOutcomeCallable createEventSubCallable(const Model::CreateEventSubRequest& request) const;
			CreateLiveAIStudioOutcome createLiveAIStudio(const Model::CreateLiveAIStudioRequest &request)const;
			void createLiveAIStudioAsync(const Model::CreateLiveAIStudioRequest& request, const CreateLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveAIStudioOutcomeCallable createLiveAIStudioCallable(const Model::CreateLiveAIStudioRequest& request) const;
			CreateLiveDelayConfigOutcome createLiveDelayConfig(const Model::CreateLiveDelayConfigRequest &request)const;
			void createLiveDelayConfigAsync(const Model::CreateLiveDelayConfigRequest& request, const CreateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveDelayConfigOutcomeCallable createLiveDelayConfigCallable(const Model::CreateLiveDelayConfigRequest& request) const;
			CreateLiveMessageAppOutcome createLiveMessageApp(const Model::CreateLiveMessageAppRequest &request)const;
			void createLiveMessageAppAsync(const Model::CreateLiveMessageAppRequest& request, const CreateLiveMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveMessageAppOutcomeCallable createLiveMessageAppCallable(const Model::CreateLiveMessageAppRequest& request) const;
			CreateLiveMessageGroupOutcome createLiveMessageGroup(const Model::CreateLiveMessageGroupRequest &request)const;
			void createLiveMessageGroupAsync(const Model::CreateLiveMessageGroupRequest& request, const CreateLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveMessageGroupOutcomeCallable createLiveMessageGroupCallable(const Model::CreateLiveMessageGroupRequest& request) const;
			CreateLivePrivateLineOutcome createLivePrivateLine(const Model::CreateLivePrivateLineRequest &request)const;
			void createLivePrivateLineAsync(const Model::CreateLivePrivateLineRequest& request, const CreateLivePrivateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLivePrivateLineOutcomeCallable createLivePrivateLineCallable(const Model::CreateLivePrivateLineRequest& request) const;
			CreateLivePullToPushOutcome createLivePullToPush(const Model::CreateLivePullToPushRequest &request)const;
			void createLivePullToPushAsync(const Model::CreateLivePullToPushRequest& request, const CreateLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLivePullToPushOutcomeCallable createLivePullToPushCallable(const Model::CreateLivePullToPushRequest& request) const;
			CreateLiveRealTimeLogDeliveryOutcome createLiveRealTimeLogDelivery(const Model::CreateLiveRealTimeLogDeliveryRequest &request)const;
			void createLiveRealTimeLogDeliveryAsync(const Model::CreateLiveRealTimeLogDeliveryRequest& request, const CreateLiveRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveRealTimeLogDeliveryOutcomeCallable createLiveRealTimeLogDeliveryCallable(const Model::CreateLiveRealTimeLogDeliveryRequest& request) const;
			CreateLiveStreamMonitorOutcome createLiveStreamMonitor(const Model::CreateLiveStreamMonitorRequest &request)const;
			void createLiveStreamMonitorAsync(const Model::CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveStreamMonitorOutcomeCallable createLiveStreamMonitorCallable(const Model::CreateLiveStreamMonitorRequest& request) const;
			CreateLiveStreamRecordIndexFilesOutcome createLiveStreamRecordIndexFiles(const Model::CreateLiveStreamRecordIndexFilesRequest &request)const;
			void createLiveStreamRecordIndexFilesAsync(const Model::CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveStreamRecordIndexFilesOutcomeCallable createLiveStreamRecordIndexFilesCallable(const Model::CreateLiveStreamRecordIndexFilesRequest& request) const;
			CreateMessageAppOutcome createMessageApp(const Model::CreateMessageAppRequest &request)const;
			void createMessageAppAsync(const Model::CreateMessageAppRequest& request, const CreateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMessageAppOutcomeCallable createMessageAppCallable(const Model::CreateMessageAppRequest& request) const;
			CreateMessageGroupOutcome createMessageGroup(const Model::CreateMessageGroupRequest &request)const;
			void createMessageGroupAsync(const Model::CreateMessageGroupRequest& request, const CreateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMessageGroupOutcomeCallable createMessageGroupCallable(const Model::CreateMessageGroupRequest& request) const;
			CreateMixStreamOutcome createMixStream(const Model::CreateMixStreamRequest &request)const;
			void createMixStreamAsync(const Model::CreateMixStreamRequest& request, const CreateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMixStreamOutcomeCallable createMixStreamCallable(const Model::CreateMixStreamRequest& request) const;
			CreateRTCWhipStreamAddressOutcome createRTCWhipStreamAddress(const Model::CreateRTCWhipStreamAddressRequest &request)const;
			void createRTCWhipStreamAddressAsync(const Model::CreateRTCWhipStreamAddressRequest& request, const CreateRTCWhipStreamAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRTCWhipStreamAddressOutcomeCallable createRTCWhipStreamAddressCallable(const Model::CreateRTCWhipStreamAddressRequest& request) const;
			CreateRoomRealTimeStreamAddressOutcome createRoomRealTimeStreamAddress(const Model::CreateRoomRealTimeStreamAddressRequest &request)const;
			void createRoomRealTimeStreamAddressAsync(const Model::CreateRoomRealTimeStreamAddressRequest& request, const CreateRoomRealTimeStreamAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoomRealTimeStreamAddressOutcomeCallable createRoomRealTimeStreamAddressCallable(const Model::CreateRoomRealTimeStreamAddressRequest& request) const;
			CreateRtcAsrTaskOutcome createRtcAsrTask(const Model::CreateRtcAsrTaskRequest &request)const;
			void createRtcAsrTaskAsync(const Model::CreateRtcAsrTaskRequest& request, const CreateRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRtcAsrTaskOutcomeCallable createRtcAsrTaskCallable(const Model::CreateRtcAsrTaskRequest& request) const;
			CreateRtcMPUEventSubOutcome createRtcMPUEventSub(const Model::CreateRtcMPUEventSubRequest &request)const;
			void createRtcMPUEventSubAsync(const Model::CreateRtcMPUEventSubRequest& request, const CreateRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRtcMPUEventSubOutcomeCallable createRtcMPUEventSubCallable(const Model::CreateRtcMPUEventSubRequest& request) const;
			DeleteCasterOutcome deleteCaster(const Model::DeleteCasterRequest &request)const;
			void deleteCasterAsync(const Model::DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterOutcomeCallable deleteCasterCallable(const Model::DeleteCasterRequest& request) const;
			DeleteCasterComponentOutcome deleteCasterComponent(const Model::DeleteCasterComponentRequest &request)const;
			void deleteCasterComponentAsync(const Model::DeleteCasterComponentRequest& request, const DeleteCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterComponentOutcomeCallable deleteCasterComponentCallable(const Model::DeleteCasterComponentRequest& request) const;
			DeleteCasterEpisodeOutcome deleteCasterEpisode(const Model::DeleteCasterEpisodeRequest &request)const;
			void deleteCasterEpisodeAsync(const Model::DeleteCasterEpisodeRequest& request, const DeleteCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterEpisodeOutcomeCallable deleteCasterEpisodeCallable(const Model::DeleteCasterEpisodeRequest& request) const;
			DeleteCasterEpisodeGroupOutcome deleteCasterEpisodeGroup(const Model::DeleteCasterEpisodeGroupRequest &request)const;
			void deleteCasterEpisodeGroupAsync(const Model::DeleteCasterEpisodeGroupRequest& request, const DeleteCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterEpisodeGroupOutcomeCallable deleteCasterEpisodeGroupCallable(const Model::DeleteCasterEpisodeGroupRequest& request) const;
			DeleteCasterLayoutOutcome deleteCasterLayout(const Model::DeleteCasterLayoutRequest &request)const;
			void deleteCasterLayoutAsync(const Model::DeleteCasterLayoutRequest& request, const DeleteCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterLayoutOutcomeCallable deleteCasterLayoutCallable(const Model::DeleteCasterLayoutRequest& request) const;
			DeleteCasterProgramOutcome deleteCasterProgram(const Model::DeleteCasterProgramRequest &request)const;
			void deleteCasterProgramAsync(const Model::DeleteCasterProgramRequest& request, const DeleteCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterProgramOutcomeCallable deleteCasterProgramCallable(const Model::DeleteCasterProgramRequest& request) const;
			DeleteCasterSceneConfigOutcome deleteCasterSceneConfig(const Model::DeleteCasterSceneConfigRequest &request)const;
			void deleteCasterSceneConfigAsync(const Model::DeleteCasterSceneConfigRequest& request, const DeleteCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterSceneConfigOutcomeCallable deleteCasterSceneConfigCallable(const Model::DeleteCasterSceneConfigRequest& request) const;
			DeleteCasterVideoResourceOutcome deleteCasterVideoResource(const Model::DeleteCasterVideoResourceRequest &request)const;
			void deleteCasterVideoResourceAsync(const Model::DeleteCasterVideoResourceRequest& request, const DeleteCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterVideoResourceOutcomeCallable deleteCasterVideoResourceCallable(const Model::DeleteCasterVideoResourceRequest& request) const;
			DeleteChannelOutcome deleteChannel(const Model::DeleteChannelRequest &request)const;
			void deleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChannelOutcomeCallable deleteChannelCallable(const Model::DeleteChannelRequest& request) const;
			DeleteCustomTemplateOutcome deleteCustomTemplate(const Model::DeleteCustomTemplateRequest &request)const;
			void deleteCustomTemplateAsync(const Model::DeleteCustomTemplateRequest& request, const DeleteCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomTemplateOutcomeCallable deleteCustomTemplateCallable(const Model::DeleteCustomTemplateRequest& request) const;
			DeleteEdgeTranscodeJobOutcome deleteEdgeTranscodeJob(const Model::DeleteEdgeTranscodeJobRequest &request)const;
			void deleteEdgeTranscodeJobAsync(const Model::DeleteEdgeTranscodeJobRequest& request, const DeleteEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEdgeTranscodeJobOutcomeCallable deleteEdgeTranscodeJobCallable(const Model::DeleteEdgeTranscodeJobRequest& request) const;
			DeleteEventSubOutcome deleteEventSub(const Model::DeleteEventSubRequest &request)const;
			void deleteEventSubAsync(const Model::DeleteEventSubRequest& request, const DeleteEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventSubOutcomeCallable deleteEventSubCallable(const Model::DeleteEventSubRequest& request) const;
			DeleteLiveAIProduceRulesOutcome deleteLiveAIProduceRules(const Model::DeleteLiveAIProduceRulesRequest &request)const;
			void deleteLiveAIProduceRulesAsync(const Model::DeleteLiveAIProduceRulesRequest& request, const DeleteLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAIProduceRulesOutcomeCallable deleteLiveAIProduceRulesCallable(const Model::DeleteLiveAIProduceRulesRequest& request) const;
			DeleteLiveAIStudioOutcome deleteLiveAIStudio(const Model::DeleteLiveAIStudioRequest &request)const;
			void deleteLiveAIStudioAsync(const Model::DeleteLiveAIStudioRequest& request, const DeleteLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAIStudioOutcomeCallable deleteLiveAIStudioCallable(const Model::DeleteLiveAIStudioRequest& request) const;
			DeleteLiveAISubtitleOutcome deleteLiveAISubtitle(const Model::DeleteLiveAISubtitleRequest &request)const;
			void deleteLiveAISubtitleAsync(const Model::DeleteLiveAISubtitleRequest& request, const DeleteLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAISubtitleOutcomeCallable deleteLiveAISubtitleCallable(const Model::DeleteLiveAISubtitleRequest& request) const;
			DeleteLiveAppRecordConfigOutcome deleteLiveAppRecordConfig(const Model::DeleteLiveAppRecordConfigRequest &request)const;
			void deleteLiveAppRecordConfigAsync(const Model::DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAppRecordConfigOutcomeCallable deleteLiveAppRecordConfigCallable(const Model::DeleteLiveAppRecordConfigRequest& request) const;
			DeleteLiveAppSnapshotConfigOutcome deleteLiveAppSnapshotConfig(const Model::DeleteLiveAppSnapshotConfigRequest &request)const;
			void deleteLiveAppSnapshotConfigAsync(const Model::DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAppSnapshotConfigOutcomeCallable deleteLiveAppSnapshotConfigCallable(const Model::DeleteLiveAppSnapshotConfigRequest& request) const;
			DeleteLiveAudioAuditConfigOutcome deleteLiveAudioAuditConfig(const Model::DeleteLiveAudioAuditConfigRequest &request)const;
			void deleteLiveAudioAuditConfigAsync(const Model::DeleteLiveAudioAuditConfigRequest& request, const DeleteLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAudioAuditConfigOutcomeCallable deleteLiveAudioAuditConfigCallable(const Model::DeleteLiveAudioAuditConfigRequest& request) const;
			DeleteLiveAudioAuditNotifyConfigOutcome deleteLiveAudioAuditNotifyConfig(const Model::DeleteLiveAudioAuditNotifyConfigRequest &request)const;
			void deleteLiveAudioAuditNotifyConfigAsync(const Model::DeleteLiveAudioAuditNotifyConfigRequest& request, const DeleteLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAudioAuditNotifyConfigOutcomeCallable deleteLiveAudioAuditNotifyConfigCallable(const Model::DeleteLiveAudioAuditNotifyConfigRequest& request) const;
			DeleteLiveCenterTransferOutcome deleteLiveCenterTransfer(const Model::DeleteLiveCenterTransferRequest &request)const;
			void deleteLiveCenterTransferAsync(const Model::DeleteLiveCenterTransferRequest& request, const DeleteLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveCenterTransferOutcomeCallable deleteLiveCenterTransferCallable(const Model::DeleteLiveCenterTransferRequest& request) const;
			DeleteLiveDelayConfigOutcome deleteLiveDelayConfig(const Model::DeleteLiveDelayConfigRequest &request)const;
			void deleteLiveDelayConfigAsync(const Model::DeleteLiveDelayConfigRequest& request, const DeleteLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDelayConfigOutcomeCallable deleteLiveDelayConfigCallable(const Model::DeleteLiveDelayConfigRequest& request) const;
			DeleteLiveDetectNotifyConfigOutcome deleteLiveDetectNotifyConfig(const Model::DeleteLiveDetectNotifyConfigRequest &request)const;
			void deleteLiveDetectNotifyConfigAsync(const Model::DeleteLiveDetectNotifyConfigRequest& request, const DeleteLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDetectNotifyConfigOutcomeCallable deleteLiveDetectNotifyConfigCallable(const Model::DeleteLiveDetectNotifyConfigRequest& request) const;
			DeleteLiveDomainOutcome deleteLiveDomain(const Model::DeleteLiveDomainRequest &request)const;
			void deleteLiveDomainAsync(const Model::DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainOutcomeCallable deleteLiveDomainCallable(const Model::DeleteLiveDomainRequest& request) const;
			DeleteLiveDomainMappingOutcome deleteLiveDomainMapping(const Model::DeleteLiveDomainMappingRequest &request)const;
			void deleteLiveDomainMappingAsync(const Model::DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainMappingOutcomeCallable deleteLiveDomainMappingCallable(const Model::DeleteLiveDomainMappingRequest& request) const;
			DeleteLiveDomainPlayMappingOutcome deleteLiveDomainPlayMapping(const Model::DeleteLiveDomainPlayMappingRequest &request)const;
			void deleteLiveDomainPlayMappingAsync(const Model::DeleteLiveDomainPlayMappingRequest& request, const DeleteLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainPlayMappingOutcomeCallable deleteLiveDomainPlayMappingCallable(const Model::DeleteLiveDomainPlayMappingRequest& request) const;
			DeleteLiveEdgeTransferOutcome deleteLiveEdgeTransfer(const Model::DeleteLiveEdgeTransferRequest &request)const;
			void deleteLiveEdgeTransferAsync(const Model::DeleteLiveEdgeTransferRequest& request, const DeleteLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveEdgeTransferOutcomeCallable deleteLiveEdgeTransferCallable(const Model::DeleteLiveEdgeTransferRequest& request) const;
			DeleteLiveLazyPullStreamInfoConfigOutcome deleteLiveLazyPullStreamInfoConfig(const Model::DeleteLiveLazyPullStreamInfoConfigRequest &request)const;
			void deleteLiveLazyPullStreamInfoConfigAsync(const Model::DeleteLiveLazyPullStreamInfoConfigRequest& request, const DeleteLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveLazyPullStreamInfoConfigOutcomeCallable deleteLiveLazyPullStreamInfoConfigCallable(const Model::DeleteLiveLazyPullStreamInfoConfigRequest& request) const;
			DeleteLiveMessageGroupOutcome deleteLiveMessageGroup(const Model::DeleteLiveMessageGroupRequest &request)const;
			void deleteLiveMessageGroupAsync(const Model::DeleteLiveMessageGroupRequest& request, const DeleteLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveMessageGroupOutcomeCallable deleteLiveMessageGroupCallable(const Model::DeleteLiveMessageGroupRequest& request) const;
			DeleteLiveMessageGroupMessageOutcome deleteLiveMessageGroupMessage(const Model::DeleteLiveMessageGroupMessageRequest &request)const;
			void deleteLiveMessageGroupMessageAsync(const Model::DeleteLiveMessageGroupMessageRequest& request, const DeleteLiveMessageGroupMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveMessageGroupMessageOutcomeCallable deleteLiveMessageGroupMessageCallable(const Model::DeleteLiveMessageGroupMessageRequest& request) const;
			DeleteLiveMessageUserMessageOutcome deleteLiveMessageUserMessage(const Model::DeleteLiveMessageUserMessageRequest &request)const;
			void deleteLiveMessageUserMessageAsync(const Model::DeleteLiveMessageUserMessageRequest& request, const DeleteLiveMessageUserMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveMessageUserMessageOutcomeCallable deleteLiveMessageUserMessageCallable(const Model::DeleteLiveMessageUserMessageRequest& request) const;
			DeleteLivePackageConfigOutcome deleteLivePackageConfig(const Model::DeleteLivePackageConfigRequest &request)const;
			void deleteLivePackageConfigAsync(const Model::DeleteLivePackageConfigRequest& request, const DeleteLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLivePackageConfigOutcomeCallable deleteLivePackageConfigCallable(const Model::DeleteLivePackageConfigRequest& request) const;
			DeleteLivePrivateLineOutcome deleteLivePrivateLine(const Model::DeleteLivePrivateLineRequest &request)const;
			void deleteLivePrivateLineAsync(const Model::DeleteLivePrivateLineRequest& request, const DeleteLivePrivateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLivePrivateLineOutcomeCallable deleteLivePrivateLineCallable(const Model::DeleteLivePrivateLineRequest& request) const;
			DeleteLivePullStreamInfoConfigOutcome deleteLivePullStreamInfoConfig(const Model::DeleteLivePullStreamInfoConfigRequest &request)const;
			void deleteLivePullStreamInfoConfigAsync(const Model::DeleteLivePullStreamInfoConfigRequest& request, const DeleteLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLivePullStreamInfoConfigOutcomeCallable deleteLivePullStreamInfoConfigCallable(const Model::DeleteLivePullStreamInfoConfigRequest& request) const;
			DeleteLivePullToPushOutcome deleteLivePullToPush(const Model::DeleteLivePullToPushRequest &request)const;
			void deleteLivePullToPushAsync(const Model::DeleteLivePullToPushRequest& request, const DeleteLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLivePullToPushOutcomeCallable deleteLivePullToPushCallable(const Model::DeleteLivePullToPushRequest& request) const;
			DeleteLiveRealTimeLogLogstoreOutcome deleteLiveRealTimeLogLogstore(const Model::DeleteLiveRealTimeLogLogstoreRequest &request)const;
			void deleteLiveRealTimeLogLogstoreAsync(const Model::DeleteLiveRealTimeLogLogstoreRequest& request, const DeleteLiveRealTimeLogLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRealTimeLogLogstoreOutcomeCallable deleteLiveRealTimeLogLogstoreCallable(const Model::DeleteLiveRealTimeLogLogstoreRequest& request) const;
			DeleteLiveRealtimeLogDeliveryOutcome deleteLiveRealtimeLogDelivery(const Model::DeleteLiveRealtimeLogDeliveryRequest &request)const;
			void deleteLiveRealtimeLogDeliveryAsync(const Model::DeleteLiveRealtimeLogDeliveryRequest& request, const DeleteLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRealtimeLogDeliveryOutcomeCallable deleteLiveRealtimeLogDeliveryCallable(const Model::DeleteLiveRealtimeLogDeliveryRequest& request) const;
			DeleteLiveRecordNotifyConfigOutcome deleteLiveRecordNotifyConfig(const Model::DeleteLiveRecordNotifyConfigRequest &request)const;
			void deleteLiveRecordNotifyConfigAsync(const Model::DeleteLiveRecordNotifyConfigRequest& request, const DeleteLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordNotifyConfigOutcomeCallable deleteLiveRecordNotifyConfigCallable(const Model::DeleteLiveRecordNotifyConfigRequest& request) const;
			DeleteLiveRecordVodConfigOutcome deleteLiveRecordVodConfig(const Model::DeleteLiveRecordVodConfigRequest &request)const;
			void deleteLiveRecordVodConfigAsync(const Model::DeleteLiveRecordVodConfigRequest& request, const DeleteLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordVodConfigOutcomeCallable deleteLiveRecordVodConfigCallable(const Model::DeleteLiveRecordVodConfigRequest& request) const;
			DeleteLiveSnapshotDetectPornConfigOutcome deleteLiveSnapshotDetectPornConfig(const Model::DeleteLiveSnapshotDetectPornConfigRequest &request)const;
			void deleteLiveSnapshotDetectPornConfigAsync(const Model::DeleteLiveSnapshotDetectPornConfigRequest& request, const DeleteLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotDetectPornConfigOutcomeCallable deleteLiveSnapshotDetectPornConfigCallable(const Model::DeleteLiveSnapshotDetectPornConfigRequest& request) const;
			DeleteLiveSnapshotNotifyConfigOutcome deleteLiveSnapshotNotifyConfig(const Model::DeleteLiveSnapshotNotifyConfigRequest &request)const;
			void deleteLiveSnapshotNotifyConfigAsync(const Model::DeleteLiveSnapshotNotifyConfigRequest& request, const DeleteLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotNotifyConfigOutcomeCallable deleteLiveSnapshotNotifyConfigCallable(const Model::DeleteLiveSnapshotNotifyConfigRequest& request) const;
			DeleteLiveSpecificStagingConfigOutcome deleteLiveSpecificStagingConfig(const Model::DeleteLiveSpecificStagingConfigRequest &request)const;
			void deleteLiveSpecificStagingConfigAsync(const Model::DeleteLiveSpecificStagingConfigRequest& request, const DeleteLiveSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSpecificStagingConfigOutcomeCallable deleteLiveSpecificStagingConfigCallable(const Model::DeleteLiveSpecificStagingConfigRequest& request) const;
			DeleteLiveStreamBlockOutcome deleteLiveStreamBlock(const Model::DeleteLiveStreamBlockRequest &request)const;
			void deleteLiveStreamBlockAsync(const Model::DeleteLiveStreamBlockRequest& request, const DeleteLiveStreamBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamBlockOutcomeCallable deleteLiveStreamBlockCallable(const Model::DeleteLiveStreamBlockRequest& request) const;
			DeleteLiveStreamMergeOutcome deleteLiveStreamMerge(const Model::DeleteLiveStreamMergeRequest &request)const;
			void deleteLiveStreamMergeAsync(const Model::DeleteLiveStreamMergeRequest& request, const DeleteLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamMergeOutcomeCallable deleteLiveStreamMergeCallable(const Model::DeleteLiveStreamMergeRequest& request) const;
			DeleteLiveStreamMonitorOutcome deleteLiveStreamMonitor(const Model::DeleteLiveStreamMonitorRequest &request)const;
			void deleteLiveStreamMonitorAsync(const Model::DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamMonitorOutcomeCallable deleteLiveStreamMonitorCallable(const Model::DeleteLiveStreamMonitorRequest& request) const;
			DeleteLiveStreamRecordIndexFilesOutcome deleteLiveStreamRecordIndexFiles(const Model::DeleteLiveStreamRecordIndexFilesRequest &request)const;
			void deleteLiveStreamRecordIndexFilesAsync(const Model::DeleteLiveStreamRecordIndexFilesRequest& request, const DeleteLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamRecordIndexFilesOutcomeCallable deleteLiveStreamRecordIndexFilesCallable(const Model::DeleteLiveStreamRecordIndexFilesRequest& request) const;
			DeleteLiveStreamTranscodeOutcome deleteLiveStreamTranscode(const Model::DeleteLiveStreamTranscodeRequest &request)const;
			void deleteLiveStreamTranscodeAsync(const Model::DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamTranscodeOutcomeCallable deleteLiveStreamTranscodeCallable(const Model::DeleteLiveStreamTranscodeRequest& request) const;
			DeleteLiveStreamWatermarkOutcome deleteLiveStreamWatermark(const Model::DeleteLiveStreamWatermarkRequest &request)const;
			void deleteLiveStreamWatermarkAsync(const Model::DeleteLiveStreamWatermarkRequest& request, const DeleteLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamWatermarkOutcomeCallable deleteLiveStreamWatermarkCallable(const Model::DeleteLiveStreamWatermarkRequest& request) const;
			DeleteLiveStreamWatermarkRuleOutcome deleteLiveStreamWatermarkRule(const Model::DeleteLiveStreamWatermarkRuleRequest &request)const;
			void deleteLiveStreamWatermarkRuleAsync(const Model::DeleteLiveStreamWatermarkRuleRequest& request, const DeleteLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamWatermarkRuleOutcomeCallable deleteLiveStreamWatermarkRuleCallable(const Model::DeleteLiveStreamWatermarkRuleRequest& request) const;
			DeleteLiveStreamsNotifyUrlConfigOutcome deleteLiveStreamsNotifyUrlConfig(const Model::DeleteLiveStreamsNotifyUrlConfigRequest &request)const;
			void deleteLiveStreamsNotifyUrlConfigAsync(const Model::DeleteLiveStreamsNotifyUrlConfigRequest& request, const DeleteLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamsNotifyUrlConfigOutcomeCallable deleteLiveStreamsNotifyUrlConfigCallable(const Model::DeleteLiveStreamsNotifyUrlConfigRequest& request) const;
			DeleteMessageAppOutcome deleteMessageApp(const Model::DeleteMessageAppRequest &request)const;
			void deleteMessageAppAsync(const Model::DeleteMessageAppRequest& request, const DeleteMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMessageAppOutcomeCallable deleteMessageAppCallable(const Model::DeleteMessageAppRequest& request) const;
			DeleteMixStreamOutcome deleteMixStream(const Model::DeleteMixStreamRequest &request)const;
			void deleteMixStreamAsync(const Model::DeleteMixStreamRequest& request, const DeleteMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMixStreamOutcomeCallable deleteMixStreamCallable(const Model::DeleteMixStreamRequest& request) const;
			DeletePlaylistOutcome deletePlaylist(const Model::DeletePlaylistRequest &request)const;
			void deletePlaylistAsync(const Model::DeletePlaylistRequest& request, const DeletePlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlaylistOutcomeCallable deletePlaylistCallable(const Model::DeletePlaylistRequest& request) const;
			DeletePlaylistItemsOutcome deletePlaylistItems(const Model::DeletePlaylistItemsRequest &request)const;
			void deletePlaylistItemsAsync(const Model::DeletePlaylistItemsRequest& request, const DeletePlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlaylistItemsOutcomeCallable deletePlaylistItemsCallable(const Model::DeletePlaylistItemsRequest& request) const;
			DeleteRtcAsrTaskOutcome deleteRtcAsrTask(const Model::DeleteRtcAsrTaskRequest &request)const;
			void deleteRtcAsrTaskAsync(const Model::DeleteRtcAsrTaskRequest& request, const DeleteRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRtcAsrTaskOutcomeCallable deleteRtcAsrTaskCallable(const Model::DeleteRtcAsrTaskRequest& request) const;
			DeleteRtcMPUEventSubOutcome deleteRtcMPUEventSub(const Model::DeleteRtcMPUEventSubRequest &request)const;
			void deleteRtcMPUEventSubAsync(const Model::DeleteRtcMPUEventSubRequest& request, const DeleteRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRtcMPUEventSubOutcomeCallable deleteRtcMPUEventSubCallable(const Model::DeleteRtcMPUEventSubRequest& request) const;
			DeleteSnapshotCallbackAuthOutcome deleteSnapshotCallbackAuth(const Model::DeleteSnapshotCallbackAuthRequest &request)const;
			void deleteSnapshotCallbackAuthAsync(const Model::DeleteSnapshotCallbackAuthRequest& request, const DeleteSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotCallbackAuthOutcomeCallable deleteSnapshotCallbackAuthCallable(const Model::DeleteSnapshotCallbackAuthRequest& request) const;
			DeleteSnapshotFilesOutcome deleteSnapshotFiles(const Model::DeleteSnapshotFilesRequest &request)const;
			void deleteSnapshotFilesAsync(const Model::DeleteSnapshotFilesRequest& request, const DeleteSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotFilesOutcomeCallable deleteSnapshotFilesCallable(const Model::DeleteSnapshotFilesRequest& request) const;
			DeleteStudioLayoutOutcome deleteStudioLayout(const Model::DeleteStudioLayoutRequest &request)const;
			void deleteStudioLayoutAsync(const Model::DeleteStudioLayoutRequest& request, const DeleteStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStudioLayoutOutcomeCallable deleteStudioLayoutCallable(const Model::DeleteStudioLayoutRequest& request) const;
			DescribeAutoShowListTasksOutcome describeAutoShowListTasks(const Model::DescribeAutoShowListTasksRequest &request)const;
			void describeAutoShowListTasksAsync(const Model::DescribeAutoShowListTasksRequest& request, const DescribeAutoShowListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoShowListTasksOutcomeCallable describeAutoShowListTasksCallable(const Model::DescribeAutoShowListTasksRequest& request) const;
			DescribeCasterChannelsOutcome describeCasterChannels(const Model::DescribeCasterChannelsRequest &request)const;
			void describeCasterChannelsAsync(const Model::DescribeCasterChannelsRequest& request, const DescribeCasterChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterChannelsOutcomeCallable describeCasterChannelsCallable(const Model::DescribeCasterChannelsRequest& request) const;
			DescribeCasterComponentsOutcome describeCasterComponents(const Model::DescribeCasterComponentsRequest &request)const;
			void describeCasterComponentsAsync(const Model::DescribeCasterComponentsRequest& request, const DescribeCasterComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterComponentsOutcomeCallable describeCasterComponentsCallable(const Model::DescribeCasterComponentsRequest& request) const;
			DescribeCasterConfigOutcome describeCasterConfig(const Model::DescribeCasterConfigRequest &request)const;
			void describeCasterConfigAsync(const Model::DescribeCasterConfigRequest& request, const DescribeCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterConfigOutcomeCallable describeCasterConfigCallable(const Model::DescribeCasterConfigRequest& request) const;
			DescribeCasterLayoutsOutcome describeCasterLayouts(const Model::DescribeCasterLayoutsRequest &request)const;
			void describeCasterLayoutsAsync(const Model::DescribeCasterLayoutsRequest& request, const DescribeCasterLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterLayoutsOutcomeCallable describeCasterLayoutsCallable(const Model::DescribeCasterLayoutsRequest& request) const;
			DescribeCasterProgramOutcome describeCasterProgram(const Model::DescribeCasterProgramRequest &request)const;
			void describeCasterProgramAsync(const Model::DescribeCasterProgramRequest& request, const DescribeCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterProgramOutcomeCallable describeCasterProgramCallable(const Model::DescribeCasterProgramRequest& request) const;
			DescribeCasterSceneAudioOutcome describeCasterSceneAudio(const Model::DescribeCasterSceneAudioRequest &request)const;
			void describeCasterSceneAudioAsync(const Model::DescribeCasterSceneAudioRequest& request, const DescribeCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterSceneAudioOutcomeCallable describeCasterSceneAudioCallable(const Model::DescribeCasterSceneAudioRequest& request) const;
			DescribeCasterScenesOutcome describeCasterScenes(const Model::DescribeCasterScenesRequest &request)const;
			void describeCasterScenesAsync(const Model::DescribeCasterScenesRequest& request, const DescribeCasterScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterScenesOutcomeCallable describeCasterScenesCallable(const Model::DescribeCasterScenesRequest& request) const;
			DescribeCasterStreamUrlOutcome describeCasterStreamUrl(const Model::DescribeCasterStreamUrlRequest &request)const;
			void describeCasterStreamUrlAsync(const Model::DescribeCasterStreamUrlRequest& request, const DescribeCasterStreamUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterStreamUrlOutcomeCallable describeCasterStreamUrlCallable(const Model::DescribeCasterStreamUrlRequest& request) const;
			DescribeCasterVideoResourcesOutcome describeCasterVideoResources(const Model::DescribeCasterVideoResourcesRequest &request)const;
			void describeCasterVideoResourcesAsync(const Model::DescribeCasterVideoResourcesRequest& request, const DescribeCasterVideoResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterVideoResourcesOutcomeCallable describeCasterVideoResourcesCallable(const Model::DescribeCasterVideoResourcesRequest& request) const;
			DescribeCastersOutcome describeCasters(const Model::DescribeCastersRequest &request)const;
			void describeCastersAsync(const Model::DescribeCastersRequest& request, const DescribeCastersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCastersOutcomeCallable describeCastersCallable(const Model::DescribeCastersRequest& request) const;
			DescribeChannelParticipantsOutcome describeChannelParticipants(const Model::DescribeChannelParticipantsRequest &request)const;
			void describeChannelParticipantsAsync(const Model::DescribeChannelParticipantsRequest& request, const DescribeChannelParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelParticipantsOutcomeCallable describeChannelParticipantsCallable(const Model::DescribeChannelParticipantsRequest& request) const;
			DescribeChannelUsersOutcome describeChannelUsers(const Model::DescribeChannelUsersRequest &request)const;
			void describeChannelUsersAsync(const Model::DescribeChannelUsersRequest& request, const DescribeChannelUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelUsersOutcomeCallable describeChannelUsersCallable(const Model::DescribeChannelUsersRequest& request) const;
			DescribeDomainUsageDataOutcome describeDomainUsageData(const Model::DescribeDomainUsageDataRequest &request)const;
			void describeDomainUsageDataAsync(const Model::DescribeDomainUsageDataRequest& request, const DescribeDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainUsageDataOutcomeCallable describeDomainUsageDataCallable(const Model::DescribeDomainUsageDataRequest& request) const;
			DescribeDomainWithIntegrityOutcome describeDomainWithIntegrity(const Model::DescribeDomainWithIntegrityRequest &request)const;
			void describeDomainWithIntegrityAsync(const Model::DescribeDomainWithIntegrityRequest& request, const DescribeDomainWithIntegrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainWithIntegrityOutcomeCallable describeDomainWithIntegrityCallable(const Model::DescribeDomainWithIntegrityRequest& request) const;
			DescribeHlsLiveStreamRealTimeBpsDataOutcome describeHlsLiveStreamRealTimeBpsData(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest &request)const;
			void describeHlsLiveStreamRealTimeBpsDataAsync(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest& request, const DescribeHlsLiveStreamRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHlsLiveStreamRealTimeBpsDataOutcomeCallable describeHlsLiveStreamRealTimeBpsDataCallable(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest& request) const;
			DescribeLiveAIProduceRulesOutcome describeLiveAIProduceRules(const Model::DescribeLiveAIProduceRulesRequest &request)const;
			void describeLiveAIProduceRulesAsync(const Model::DescribeLiveAIProduceRulesRequest& request, const DescribeLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAIProduceRulesOutcomeCallable describeLiveAIProduceRulesCallable(const Model::DescribeLiveAIProduceRulesRequest& request) const;
			DescribeLiveAIStudioOutcome describeLiveAIStudio(const Model::DescribeLiveAIStudioRequest &request)const;
			void describeLiveAIStudioAsync(const Model::DescribeLiveAIStudioRequest& request, const DescribeLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAIStudioOutcomeCallable describeLiveAIStudioCallable(const Model::DescribeLiveAIStudioRequest& request) const;
			DescribeLiveAISubtitleOutcome describeLiveAISubtitle(const Model::DescribeLiveAISubtitleRequest &request)const;
			void describeLiveAISubtitleAsync(const Model::DescribeLiveAISubtitleRequest& request, const DescribeLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAISubtitleOutcomeCallable describeLiveAISubtitleCallable(const Model::DescribeLiveAISubtitleRequest& request) const;
			DescribeLiveAudioAuditConfigOutcome describeLiveAudioAuditConfig(const Model::DescribeLiveAudioAuditConfigRequest &request)const;
			void describeLiveAudioAuditConfigAsync(const Model::DescribeLiveAudioAuditConfigRequest& request, const DescribeLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAudioAuditConfigOutcomeCallable describeLiveAudioAuditConfigCallable(const Model::DescribeLiveAudioAuditConfigRequest& request) const;
			DescribeLiveAudioAuditNotifyConfigOutcome describeLiveAudioAuditNotifyConfig(const Model::DescribeLiveAudioAuditNotifyConfigRequest &request)const;
			void describeLiveAudioAuditNotifyConfigAsync(const Model::DescribeLiveAudioAuditNotifyConfigRequest& request, const DescribeLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAudioAuditNotifyConfigOutcomeCallable describeLiveAudioAuditNotifyConfigCallable(const Model::DescribeLiveAudioAuditNotifyConfigRequest& request) const;
			DescribeLiveCdnDiagnoseInfoOutcome describeLiveCdnDiagnoseInfo(const Model::DescribeLiveCdnDiagnoseInfoRequest &request)const;
			void describeLiveCdnDiagnoseInfoAsync(const Model::DescribeLiveCdnDiagnoseInfoRequest& request, const DescribeLiveCdnDiagnoseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCdnDiagnoseInfoOutcomeCallable describeLiveCdnDiagnoseInfoCallable(const Model::DescribeLiveCdnDiagnoseInfoRequest& request) const;
			DescribeLiveCenterStreamRateDataOutcome describeLiveCenterStreamRateData(const Model::DescribeLiveCenterStreamRateDataRequest &request)const;
			void describeLiveCenterStreamRateDataAsync(const Model::DescribeLiveCenterStreamRateDataRequest& request, const DescribeLiveCenterStreamRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCenterStreamRateDataOutcomeCallable describeLiveCenterStreamRateDataCallable(const Model::DescribeLiveCenterStreamRateDataRequest& request) const;
			DescribeLiveCenterTransferOutcome describeLiveCenterTransfer(const Model::DescribeLiveCenterTransferRequest &request)const;
			void describeLiveCenterTransferAsync(const Model::DescribeLiveCenterTransferRequest& request, const DescribeLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCenterTransferOutcomeCallable describeLiveCenterTransferCallable(const Model::DescribeLiveCenterTransferRequest& request) const;
			DescribeLiveCertificateDetailOutcome describeLiveCertificateDetail(const Model::DescribeLiveCertificateDetailRequest &request)const;
			void describeLiveCertificateDetailAsync(const Model::DescribeLiveCertificateDetailRequest& request, const DescribeLiveCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCertificateDetailOutcomeCallable describeLiveCertificateDetailCallable(const Model::DescribeLiveCertificateDetailRequest& request) const;
			DescribeLiveCertificateListOutcome describeLiveCertificateList(const Model::DescribeLiveCertificateListRequest &request)const;
			void describeLiveCertificateListAsync(const Model::DescribeLiveCertificateListRequest& request, const DescribeLiveCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCertificateListOutcomeCallable describeLiveCertificateListCallable(const Model::DescribeLiveCertificateListRequest& request) const;
			DescribeLiveDelayConfigOutcome describeLiveDelayConfig(const Model::DescribeLiveDelayConfigRequest &request)const;
			void describeLiveDelayConfigAsync(const Model::DescribeLiveDelayConfigRequest& request, const DescribeLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDelayConfigOutcomeCallable describeLiveDelayConfigCallable(const Model::DescribeLiveDelayConfigRequest& request) const;
			DescribeLiveDelayedStreamingUsageOutcome describeLiveDelayedStreamingUsage(const Model::DescribeLiveDelayedStreamingUsageRequest &request)const;
			void describeLiveDelayedStreamingUsageAsync(const Model::DescribeLiveDelayedStreamingUsageRequest& request, const DescribeLiveDelayedStreamingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDelayedStreamingUsageOutcomeCallable describeLiveDelayedStreamingUsageCallable(const Model::DescribeLiveDelayedStreamingUsageRequest& request) const;
			DescribeLiveDetectNotifyConfigOutcome describeLiveDetectNotifyConfig(const Model::DescribeLiveDetectNotifyConfigRequest &request)const;
			void describeLiveDetectNotifyConfigAsync(const Model::DescribeLiveDetectNotifyConfigRequest& request, const DescribeLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDetectNotifyConfigOutcomeCallable describeLiveDetectNotifyConfigCallable(const Model::DescribeLiveDetectNotifyConfigRequest& request) const;
			DescribeLiveDetectPornDataOutcome describeLiveDetectPornData(const Model::DescribeLiveDetectPornDataRequest &request)const;
			void describeLiveDetectPornDataAsync(const Model::DescribeLiveDetectPornDataRequest& request, const DescribeLiveDetectPornDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDetectPornDataOutcomeCallable describeLiveDetectPornDataCallable(const Model::DescribeLiveDetectPornDataRequest& request) const;
			DescribeLiveDomainBpsDataOutcome describeLiveDomainBpsData(const Model::DescribeLiveDomainBpsDataRequest &request)const;
			void describeLiveDomainBpsDataAsync(const Model::DescribeLiveDomainBpsDataRequest& request, const DescribeLiveDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainBpsDataOutcomeCallable describeLiveDomainBpsDataCallable(const Model::DescribeLiveDomainBpsDataRequest& request) const;
			DescribeLiveDomainBpsDataByLayerOutcome describeLiveDomainBpsDataByLayer(const Model::DescribeLiveDomainBpsDataByLayerRequest &request)const;
			void describeLiveDomainBpsDataByLayerAsync(const Model::DescribeLiveDomainBpsDataByLayerRequest& request, const DescribeLiveDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainBpsDataByLayerOutcomeCallable describeLiveDomainBpsDataByLayerCallable(const Model::DescribeLiveDomainBpsDataByLayerRequest& request) const;
			DescribeLiveDomainByCertificateOutcome describeLiveDomainByCertificate(const Model::DescribeLiveDomainByCertificateRequest &request)const;
			void describeLiveDomainByCertificateAsync(const Model::DescribeLiveDomainByCertificateRequest& request, const DescribeLiveDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainByCertificateOutcomeCallable describeLiveDomainByCertificateCallable(const Model::DescribeLiveDomainByCertificateRequest& request) const;
			DescribeLiveDomainCertificateInfoOutcome describeLiveDomainCertificateInfo(const Model::DescribeLiveDomainCertificateInfoRequest &request)const;
			void describeLiveDomainCertificateInfoAsync(const Model::DescribeLiveDomainCertificateInfoRequest& request, const DescribeLiveDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainCertificateInfoOutcomeCallable describeLiveDomainCertificateInfoCallable(const Model::DescribeLiveDomainCertificateInfoRequest& request) const;
			DescribeLiveDomainConfigsOutcome describeLiveDomainConfigs(const Model::DescribeLiveDomainConfigsRequest &request)const;
			void describeLiveDomainConfigsAsync(const Model::DescribeLiveDomainConfigsRequest& request, const DescribeLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainConfigsOutcomeCallable describeLiveDomainConfigsCallable(const Model::DescribeLiveDomainConfigsRequest& request) const;
			DescribeLiveDomainDetailOutcome describeLiveDomainDetail(const Model::DescribeLiveDomainDetailRequest &request)const;
			void describeLiveDomainDetailAsync(const Model::DescribeLiveDomainDetailRequest& request, const DescribeLiveDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainDetailOutcomeCallable describeLiveDomainDetailCallable(const Model::DescribeLiveDomainDetailRequest& request) const;
			DescribeLiveDomainEdgeLogOutcome describeLiveDomainEdgeLog(const Model::DescribeLiveDomainEdgeLogRequest &request)const;
			void describeLiveDomainEdgeLogAsync(const Model::DescribeLiveDomainEdgeLogRequest& request, const DescribeLiveDomainEdgeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainEdgeLogOutcomeCallable describeLiveDomainEdgeLogCallable(const Model::DescribeLiveDomainEdgeLogRequest& request) const;
			DescribeLiveDomainFrameRateAndBitRateDataOutcome describeLiveDomainFrameRateAndBitRateData(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest &request)const;
			void describeLiveDomainFrameRateAndBitRateDataAsync(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest& request, const DescribeLiveDomainFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainFrameRateAndBitRateDataOutcomeCallable describeLiveDomainFrameRateAndBitRateDataCallable(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest& request) const;
			DescribeLiveDomainLimitOutcome describeLiveDomainLimit(const Model::DescribeLiveDomainLimitRequest &request)const;
			void describeLiveDomainLimitAsync(const Model::DescribeLiveDomainLimitRequest& request, const DescribeLiveDomainLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainLimitOutcomeCallable describeLiveDomainLimitCallable(const Model::DescribeLiveDomainLimitRequest& request) const;
			DescribeLiveDomainLogOutcome describeLiveDomainLog(const Model::DescribeLiveDomainLogRequest &request)const;
			void describeLiveDomainLogAsync(const Model::DescribeLiveDomainLogRequest& request, const DescribeLiveDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainLogOutcomeCallable describeLiveDomainLogCallable(const Model::DescribeLiveDomainLogRequest& request) const;
			DescribeLiveDomainLogExTtlOutcome describeLiveDomainLogExTtl(const Model::DescribeLiveDomainLogExTtlRequest &request)const;
			void describeLiveDomainLogExTtlAsync(const Model::DescribeLiveDomainLogExTtlRequest& request, const DescribeLiveDomainLogExTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainLogExTtlOutcomeCallable describeLiveDomainLogExTtlCallable(const Model::DescribeLiveDomainLogExTtlRequest& request) const;
			DescribeLiveDomainMappingOutcome describeLiveDomainMapping(const Model::DescribeLiveDomainMappingRequest &request)const;
			void describeLiveDomainMappingAsync(const Model::DescribeLiveDomainMappingRequest& request, const DescribeLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainMappingOutcomeCallable describeLiveDomainMappingCallable(const Model::DescribeLiveDomainMappingRequest& request) const;
			DescribeLiveDomainMonitoringUsageDataOutcome describeLiveDomainMonitoringUsageData(const Model::DescribeLiveDomainMonitoringUsageDataRequest &request)const;
			void describeLiveDomainMonitoringUsageDataAsync(const Model::DescribeLiveDomainMonitoringUsageDataRequest& request, const DescribeLiveDomainMonitoringUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainMonitoringUsageDataOutcomeCallable describeLiveDomainMonitoringUsageDataCallable(const Model::DescribeLiveDomainMonitoringUsageDataRequest& request) const;
			DescribeLiveDomainMultiStreamConfigOutcome describeLiveDomainMultiStreamConfig(const Model::DescribeLiveDomainMultiStreamConfigRequest &request)const;
			void describeLiveDomainMultiStreamConfigAsync(const Model::DescribeLiveDomainMultiStreamConfigRequest& request, const DescribeLiveDomainMultiStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainMultiStreamConfigOutcomeCallable describeLiveDomainMultiStreamConfigCallable(const Model::DescribeLiveDomainMultiStreamConfigRequest& request) const;
			DescribeLiveDomainOnlineUserNumOutcome describeLiveDomainOnlineUserNum(const Model::DescribeLiveDomainOnlineUserNumRequest &request)const;
			void describeLiveDomainOnlineUserNumAsync(const Model::DescribeLiveDomainOnlineUserNumRequest& request, const DescribeLiveDomainOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainOnlineUserNumOutcomeCallable describeLiveDomainOnlineUserNumCallable(const Model::DescribeLiveDomainOnlineUserNumRequest& request) const;
			DescribeLiveDomainPublishErrorCodeOutcome describeLiveDomainPublishErrorCode(const Model::DescribeLiveDomainPublishErrorCodeRequest &request)const;
			void describeLiveDomainPublishErrorCodeAsync(const Model::DescribeLiveDomainPublishErrorCodeRequest& request, const DescribeLiveDomainPublishErrorCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPublishErrorCodeOutcomeCallable describeLiveDomainPublishErrorCodeCallable(const Model::DescribeLiveDomainPublishErrorCodeRequest& request) const;
			DescribeLiveDomainPushBpsDataOutcome describeLiveDomainPushBpsData(const Model::DescribeLiveDomainPushBpsDataRequest &request)const;
			void describeLiveDomainPushBpsDataAsync(const Model::DescribeLiveDomainPushBpsDataRequest& request, const DescribeLiveDomainPushBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPushBpsDataOutcomeCallable describeLiveDomainPushBpsDataCallable(const Model::DescribeLiveDomainPushBpsDataRequest& request) const;
			DescribeLiveDomainPushTrafficDataOutcome describeLiveDomainPushTrafficData(const Model::DescribeLiveDomainPushTrafficDataRequest &request)const;
			void describeLiveDomainPushTrafficDataAsync(const Model::DescribeLiveDomainPushTrafficDataRequest& request, const DescribeLiveDomainPushTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPushTrafficDataOutcomeCallable describeLiveDomainPushTrafficDataCallable(const Model::DescribeLiveDomainPushTrafficDataRequest& request) const;
			DescribeLiveDomainPvUvDataOutcome describeLiveDomainPvUvData(const Model::DescribeLiveDomainPvUvDataRequest &request)const;
			void describeLiveDomainPvUvDataAsync(const Model::DescribeLiveDomainPvUvDataRequest& request, const DescribeLiveDomainPvUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPvUvDataOutcomeCallable describeLiveDomainPvUvDataCallable(const Model::DescribeLiveDomainPvUvDataRequest& request) const;
			DescribeLiveDomainRealTimeBpsDataOutcome describeLiveDomainRealTimeBpsData(const Model::DescribeLiveDomainRealTimeBpsDataRequest &request)const;
			void describeLiveDomainRealTimeBpsDataAsync(const Model::DescribeLiveDomainRealTimeBpsDataRequest& request, const DescribeLiveDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeBpsDataOutcomeCallable describeLiveDomainRealTimeBpsDataCallable(const Model::DescribeLiveDomainRealTimeBpsDataRequest& request) const;
			DescribeLiveDomainRealTimeHttpCodeDataOutcome describeLiveDomainRealTimeHttpCodeData(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest &request)const;
			void describeLiveDomainRealTimeHttpCodeDataAsync(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest& request, const DescribeLiveDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeHttpCodeDataOutcomeCallable describeLiveDomainRealTimeHttpCodeDataCallable(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeLiveDomainRealTimeTrafficDataOutcome describeLiveDomainRealTimeTrafficData(const Model::DescribeLiveDomainRealTimeTrafficDataRequest &request)const;
			void describeLiveDomainRealTimeTrafficDataAsync(const Model::DescribeLiveDomainRealTimeTrafficDataRequest& request, const DescribeLiveDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeTrafficDataOutcomeCallable describeLiveDomainRealTimeTrafficDataCallable(const Model::DescribeLiveDomainRealTimeTrafficDataRequest& request) const;
			DescribeLiveDomainRealtimeLogDeliveryOutcome describeLiveDomainRealtimeLogDelivery(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest &request)const;
			void describeLiveDomainRealtimeLogDeliveryAsync(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest& request, const DescribeLiveDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealtimeLogDeliveryOutcomeCallable describeLiveDomainRealtimeLogDeliveryCallable(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest& request) const;
			DescribeLiveDomainRecordUsageDataOutcome describeLiveDomainRecordUsageData(const Model::DescribeLiveDomainRecordUsageDataRequest &request)const;
			void describeLiveDomainRecordUsageDataAsync(const Model::DescribeLiveDomainRecordUsageDataRequest& request, const DescribeLiveDomainRecordUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRecordUsageDataOutcomeCallable describeLiveDomainRecordUsageDataCallable(const Model::DescribeLiveDomainRecordUsageDataRequest& request) const;
			DescribeLiveDomainSnapshotDataOutcome describeLiveDomainSnapshotData(const Model::DescribeLiveDomainSnapshotDataRequest &request)const;
			void describeLiveDomainSnapshotDataAsync(const Model::DescribeLiveDomainSnapshotDataRequest& request, const DescribeLiveDomainSnapshotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainSnapshotDataOutcomeCallable describeLiveDomainSnapshotDataCallable(const Model::DescribeLiveDomainSnapshotDataRequest& request) const;
			DescribeLiveDomainStagingConfigOutcome describeLiveDomainStagingConfig(const Model::DescribeLiveDomainStagingConfigRequest &request)const;
			void describeLiveDomainStagingConfigAsync(const Model::DescribeLiveDomainStagingConfigRequest& request, const DescribeLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainStagingConfigOutcomeCallable describeLiveDomainStagingConfigCallable(const Model::DescribeLiveDomainStagingConfigRequest& request) const;
			DescribeLiveDomainStreamTranscodeDataOutcome describeLiveDomainStreamTranscodeData(const Model::DescribeLiveDomainStreamTranscodeDataRequest &request)const;
			void describeLiveDomainStreamTranscodeDataAsync(const Model::DescribeLiveDomainStreamTranscodeDataRequest& request, const DescribeLiveDomainStreamTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainStreamTranscodeDataOutcomeCallable describeLiveDomainStreamTranscodeDataCallable(const Model::DescribeLiveDomainStreamTranscodeDataRequest& request) const;
			DescribeLiveDomainTimeShiftDataOutcome describeLiveDomainTimeShiftData(const Model::DescribeLiveDomainTimeShiftDataRequest &request)const;
			void describeLiveDomainTimeShiftDataAsync(const Model::DescribeLiveDomainTimeShiftDataRequest& request, const DescribeLiveDomainTimeShiftDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTimeShiftDataOutcomeCallable describeLiveDomainTimeShiftDataCallable(const Model::DescribeLiveDomainTimeShiftDataRequest& request) const;
			DescribeLiveDomainTrafficDataOutcome describeLiveDomainTrafficData(const Model::DescribeLiveDomainTrafficDataRequest &request)const;
			void describeLiveDomainTrafficDataAsync(const Model::DescribeLiveDomainTrafficDataRequest& request, const DescribeLiveDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTrafficDataOutcomeCallable describeLiveDomainTrafficDataCallable(const Model::DescribeLiveDomainTrafficDataRequest& request) const;
			DescribeLiveDomainTranscodeParamsOutcome describeLiveDomainTranscodeParams(const Model::DescribeLiveDomainTranscodeParamsRequest &request)const;
			void describeLiveDomainTranscodeParamsAsync(const Model::DescribeLiveDomainTranscodeParamsRequest& request, const DescribeLiveDomainTranscodeParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTranscodeParamsOutcomeCallable describeLiveDomainTranscodeParamsCallable(const Model::DescribeLiveDomainTranscodeParamsRequest& request) const;
			DescribeLiveDrmUsageDataOutcome describeLiveDrmUsageData(const Model::DescribeLiveDrmUsageDataRequest &request)const;
			void describeLiveDrmUsageDataAsync(const Model::DescribeLiveDrmUsageDataRequest& request, const DescribeLiveDrmUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDrmUsageDataOutcomeCallable describeLiveDrmUsageDataCallable(const Model::DescribeLiveDrmUsageDataRequest& request) const;
			DescribeLiveEdgeTransferOutcome describeLiveEdgeTransfer(const Model::DescribeLiveEdgeTransferRequest &request)const;
			void describeLiveEdgeTransferAsync(const Model::DescribeLiveEdgeTransferRequest& request, const DescribeLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveEdgeTransferOutcomeCallable describeLiveEdgeTransferCallable(const Model::DescribeLiveEdgeTransferRequest& request) const;
			DescribeLiveGrtnDurationOutcome describeLiveGrtnDuration(const Model::DescribeLiveGrtnDurationRequest &request)const;
			void describeLiveGrtnDurationAsync(const Model::DescribeLiveGrtnDurationRequest& request, const DescribeLiveGrtnDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveGrtnDurationOutcomeCallable describeLiveGrtnDurationCallable(const Model::DescribeLiveGrtnDurationRequest& request) const;
			DescribeLiveHttpsDomainListOutcome describeLiveHttpsDomainList(const Model::DescribeLiveHttpsDomainListRequest &request)const;
			void describeLiveHttpsDomainListAsync(const Model::DescribeLiveHttpsDomainListRequest& request, const DescribeLiveHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveHttpsDomainListOutcomeCallable describeLiveHttpsDomainListCallable(const Model::DescribeLiveHttpsDomainListRequest& request) const;
			DescribeLiveInteractionMetricDataOutcome describeLiveInteractionMetricData(const Model::DescribeLiveInteractionMetricDataRequest &request)const;
			void describeLiveInteractionMetricDataAsync(const Model::DescribeLiveInteractionMetricDataRequest& request, const DescribeLiveInteractionMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveInteractionMetricDataOutcomeCallable describeLiveInteractionMetricDataCallable(const Model::DescribeLiveInteractionMetricDataRequest& request) const;
			DescribeLiveIpInfoOutcome describeLiveIpInfo(const Model::DescribeLiveIpInfoRequest &request)const;
			void describeLiveIpInfoAsync(const Model::DescribeLiveIpInfoRequest& request, const DescribeLiveIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveIpInfoOutcomeCallable describeLiveIpInfoCallable(const Model::DescribeLiveIpInfoRequest& request) const;
			DescribeLiveLazyPullStreamConfigOutcome describeLiveLazyPullStreamConfig(const Model::DescribeLiveLazyPullStreamConfigRequest &request)const;
			void describeLiveLazyPullStreamConfigAsync(const Model::DescribeLiveLazyPullStreamConfigRequest& request, const DescribeLiveLazyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveLazyPullStreamConfigOutcomeCallable describeLiveLazyPullStreamConfigCallable(const Model::DescribeLiveLazyPullStreamConfigRequest& request) const;
			DescribeLiveMessageAppOutcome describeLiveMessageApp(const Model::DescribeLiveMessageAppRequest &request)const;
			void describeLiveMessageAppAsync(const Model::DescribeLiveMessageAppRequest& request, const DescribeLiveMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveMessageAppOutcomeCallable describeLiveMessageAppCallable(const Model::DescribeLiveMessageAppRequest& request) const;
			DescribeLiveMessageGroupOutcome describeLiveMessageGroup(const Model::DescribeLiveMessageGroupRequest &request)const;
			void describeLiveMessageGroupAsync(const Model::DescribeLiveMessageGroupRequest& request, const DescribeLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveMessageGroupOutcomeCallable describeLiveMessageGroupCallable(const Model::DescribeLiveMessageGroupRequest& request) const;
			DescribeLiveMessageGroupBandOutcome describeLiveMessageGroupBand(const Model::DescribeLiveMessageGroupBandRequest &request)const;
			void describeLiveMessageGroupBandAsync(const Model::DescribeLiveMessageGroupBandRequest& request, const DescribeLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveMessageGroupBandOutcomeCallable describeLiveMessageGroupBandCallable(const Model::DescribeLiveMessageGroupBandRequest& request) const;
			DescribeLivePackageConfigOutcome describeLivePackageConfig(const Model::DescribeLivePackageConfigRequest &request)const;
			void describeLivePackageConfigAsync(const Model::DescribeLivePackageConfigRequest& request, const DescribeLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePackageConfigOutcomeCallable describeLivePackageConfigCallable(const Model::DescribeLivePackageConfigRequest& request) const;
			DescribeLivePrivateLineAreasOutcome describeLivePrivateLineAreas(const Model::DescribeLivePrivateLineAreasRequest &request)const;
			void describeLivePrivateLineAreasAsync(const Model::DescribeLivePrivateLineAreasRequest& request, const DescribeLivePrivateLineAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePrivateLineAreasOutcomeCallable describeLivePrivateLineAreasCallable(const Model::DescribeLivePrivateLineAreasRequest& request) const;
			DescribeLivePrivateLineAvailGAOutcome describeLivePrivateLineAvailGA(const Model::DescribeLivePrivateLineAvailGARequest &request)const;
			void describeLivePrivateLineAvailGAAsync(const Model::DescribeLivePrivateLineAvailGARequest& request, const DescribeLivePrivateLineAvailGAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePrivateLineAvailGAOutcomeCallable describeLivePrivateLineAvailGACallable(const Model::DescribeLivePrivateLineAvailGARequest& request) const;
			DescribeLiveProducerUsageDataOutcome describeLiveProducerUsageData(const Model::DescribeLiveProducerUsageDataRequest &request)const;
			void describeLiveProducerUsageDataAsync(const Model::DescribeLiveProducerUsageDataRequest& request, const DescribeLiveProducerUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveProducerUsageDataOutcomeCallable describeLiveProducerUsageDataCallable(const Model::DescribeLiveProducerUsageDataRequest& request) const;
			DescribeLivePullStreamConfigOutcome describeLivePullStreamConfig(const Model::DescribeLivePullStreamConfigRequest &request)const;
			void describeLivePullStreamConfigAsync(const Model::DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePullStreamConfigOutcomeCallable describeLivePullStreamConfigCallable(const Model::DescribeLivePullStreamConfigRequest& request) const;
			DescribeLivePullToPushOutcome describeLivePullToPush(const Model::DescribeLivePullToPushRequest &request)const;
			void describeLivePullToPushAsync(const Model::DescribeLivePullToPushRequest& request, const DescribeLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePullToPushOutcomeCallable describeLivePullToPushCallable(const Model::DescribeLivePullToPushRequest& request) const;
			DescribeLivePullToPushListOutcome describeLivePullToPushList(const Model::DescribeLivePullToPushListRequest &request)const;
			void describeLivePullToPushListAsync(const Model::DescribeLivePullToPushListRequest& request, const DescribeLivePullToPushListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePullToPushListOutcomeCallable describeLivePullToPushListCallable(const Model::DescribeLivePullToPushListRequest& request) const;
			DescribeLivePushProxyLogOutcome describeLivePushProxyLog(const Model::DescribeLivePushProxyLogRequest &request)const;
			void describeLivePushProxyLogAsync(const Model::DescribeLivePushProxyLogRequest& request, const DescribeLivePushProxyLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePushProxyLogOutcomeCallable describeLivePushProxyLogCallable(const Model::DescribeLivePushProxyLogRequest& request) const;
			DescribeLivePushProxyUsageDataOutcome describeLivePushProxyUsageData(const Model::DescribeLivePushProxyUsageDataRequest &request)const;
			void describeLivePushProxyUsageDataAsync(const Model::DescribeLivePushProxyUsageDataRequest& request, const DescribeLivePushProxyUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePushProxyUsageDataOutcomeCallable describeLivePushProxyUsageDataCallable(const Model::DescribeLivePushProxyUsageDataRequest& request) const;
			DescribeLiveRealtimeDeliveryAccOutcome describeLiveRealtimeDeliveryAcc(const Model::DescribeLiveRealtimeDeliveryAccRequest &request)const;
			void describeLiveRealtimeDeliveryAccAsync(const Model::DescribeLiveRealtimeDeliveryAccRequest& request, const DescribeLiveRealtimeDeliveryAccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRealtimeDeliveryAccOutcomeCallable describeLiveRealtimeDeliveryAccCallable(const Model::DescribeLiveRealtimeDeliveryAccRequest& request) const;
			DescribeLiveRealtimeLogAuthorizedOutcome describeLiveRealtimeLogAuthorized(const Model::DescribeLiveRealtimeLogAuthorizedRequest &request)const;
			void describeLiveRealtimeLogAuthorizedAsync(const Model::DescribeLiveRealtimeLogAuthorizedRequest& request, const DescribeLiveRealtimeLogAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRealtimeLogAuthorizedOutcomeCallable describeLiveRealtimeLogAuthorizedCallable(const Model::DescribeLiveRealtimeLogAuthorizedRequest& request) const;
			DescribeLiveRecordConfigOutcome describeLiveRecordConfig(const Model::DescribeLiveRecordConfigRequest &request)const;
			void describeLiveRecordConfigAsync(const Model::DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordConfigOutcomeCallable describeLiveRecordConfigCallable(const Model::DescribeLiveRecordConfigRequest& request) const;
			DescribeLiveRecordNotifyConfigOutcome describeLiveRecordNotifyConfig(const Model::DescribeLiveRecordNotifyConfigRequest &request)const;
			void describeLiveRecordNotifyConfigAsync(const Model::DescribeLiveRecordNotifyConfigRequest& request, const DescribeLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordNotifyConfigOutcomeCallable describeLiveRecordNotifyConfigCallable(const Model::DescribeLiveRecordNotifyConfigRequest& request) const;
			DescribeLiveRecordNotifyRecordsOutcome describeLiveRecordNotifyRecords(const Model::DescribeLiveRecordNotifyRecordsRequest &request)const;
			void describeLiveRecordNotifyRecordsAsync(const Model::DescribeLiveRecordNotifyRecordsRequest& request, const DescribeLiveRecordNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordNotifyRecordsOutcomeCallable describeLiveRecordNotifyRecordsCallable(const Model::DescribeLiveRecordNotifyRecordsRequest& request) const;
			DescribeLiveRecordVodConfigsOutcome describeLiveRecordVodConfigs(const Model::DescribeLiveRecordVodConfigsRequest &request)const;
			void describeLiveRecordVodConfigsAsync(const Model::DescribeLiveRecordVodConfigsRequest& request, const DescribeLiveRecordVodConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordVodConfigsOutcomeCallable describeLiveRecordVodConfigsCallable(const Model::DescribeLiveRecordVodConfigsRequest& request) const;
			DescribeLiveShiftConfigsOutcome describeLiveShiftConfigs(const Model::DescribeLiveShiftConfigsRequest &request)const;
			void describeLiveShiftConfigsAsync(const Model::DescribeLiveShiftConfigsRequest& request, const DescribeLiveShiftConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveShiftConfigsOutcomeCallable describeLiveShiftConfigsCallable(const Model::DescribeLiveShiftConfigsRequest& request) const;
			DescribeLiveSnapshotConfigOutcome describeLiveSnapshotConfig(const Model::DescribeLiveSnapshotConfigRequest &request)const;
			void describeLiveSnapshotConfigAsync(const Model::DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotConfigOutcomeCallable describeLiveSnapshotConfigCallable(const Model::DescribeLiveSnapshotConfigRequest& request) const;
			DescribeLiveSnapshotDetectPornConfigOutcome describeLiveSnapshotDetectPornConfig(const Model::DescribeLiveSnapshotDetectPornConfigRequest &request)const;
			void describeLiveSnapshotDetectPornConfigAsync(const Model::DescribeLiveSnapshotDetectPornConfigRequest& request, const DescribeLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotDetectPornConfigOutcomeCallable describeLiveSnapshotDetectPornConfigCallable(const Model::DescribeLiveSnapshotDetectPornConfigRequest& request) const;
			DescribeLiveSnapshotNotifyConfigOutcome describeLiveSnapshotNotifyConfig(const Model::DescribeLiveSnapshotNotifyConfigRequest &request)const;
			void describeLiveSnapshotNotifyConfigAsync(const Model::DescribeLiveSnapshotNotifyConfigRequest& request, const DescribeLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotNotifyConfigOutcomeCallable describeLiveSnapshotNotifyConfigCallable(const Model::DescribeLiveSnapshotNotifyConfigRequest& request) const;
			DescribeLiveStreamAuthCheckingOutcome describeLiveStreamAuthChecking(const Model::DescribeLiveStreamAuthCheckingRequest &request)const;
			void describeLiveStreamAuthCheckingAsync(const Model::DescribeLiveStreamAuthCheckingRequest& request, const DescribeLiveStreamAuthCheckingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamAuthCheckingOutcomeCallable describeLiveStreamAuthCheckingCallable(const Model::DescribeLiveStreamAuthCheckingRequest& request) const;
			DescribeLiveStreamBitRateDataOutcome describeLiveStreamBitRateData(const Model::DescribeLiveStreamBitRateDataRequest &request)const;
			void describeLiveStreamBitRateDataAsync(const Model::DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamBitRateDataOutcomeCallable describeLiveStreamBitRateDataCallable(const Model::DescribeLiveStreamBitRateDataRequest& request) const;
			DescribeLiveStreamCountOutcome describeLiveStreamCount(const Model::DescribeLiveStreamCountRequest &request)const;
			void describeLiveStreamCountAsync(const Model::DescribeLiveStreamCountRequest& request, const DescribeLiveStreamCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamCountOutcomeCallable describeLiveStreamCountCallable(const Model::DescribeLiveStreamCountRequest& request) const;
			DescribeLiveStreamDelayConfigOutcome describeLiveStreamDelayConfig(const Model::DescribeLiveStreamDelayConfigRequest &request)const;
			void describeLiveStreamDelayConfigAsync(const Model::DescribeLiveStreamDelayConfigRequest& request, const DescribeLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamDelayConfigOutcomeCallable describeLiveStreamDelayConfigCallable(const Model::DescribeLiveStreamDelayConfigRequest& request) const;
			DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome describeLiveStreamDetailFrameRateAndBitRateData(const Model::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request)const;
			void describeLiveStreamDetailFrameRateAndBitRateDataAsync(const Model::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest& request, const DescribeLiveStreamDetailFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamDetailFrameRateAndBitRateDataOutcomeCallable describeLiveStreamDetailFrameRateAndBitRateDataCallable(const Model::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest& request) const;
			DescribeLiveStreamHistoryUserNumOutcome describeLiveStreamHistoryUserNum(const Model::DescribeLiveStreamHistoryUserNumRequest &request)const;
			void describeLiveStreamHistoryUserNumAsync(const Model::DescribeLiveStreamHistoryUserNumRequest& request, const DescribeLiveStreamHistoryUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamHistoryUserNumOutcomeCallable describeLiveStreamHistoryUserNumCallable(const Model::DescribeLiveStreamHistoryUserNumRequest& request) const;
			DescribeLiveStreamMergeOutcome describeLiveStreamMerge(const Model::DescribeLiveStreamMergeRequest &request)const;
			void describeLiveStreamMergeAsync(const Model::DescribeLiveStreamMergeRequest& request, const DescribeLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamMergeOutcomeCallable describeLiveStreamMergeCallable(const Model::DescribeLiveStreamMergeRequest& request) const;
			DescribeLiveStreamMetricDetailDataOutcome describeLiveStreamMetricDetailData(const Model::DescribeLiveStreamMetricDetailDataRequest &request)const;
			void describeLiveStreamMetricDetailDataAsync(const Model::DescribeLiveStreamMetricDetailDataRequest& request, const DescribeLiveStreamMetricDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamMetricDetailDataOutcomeCallable describeLiveStreamMetricDetailDataCallable(const Model::DescribeLiveStreamMetricDetailDataRequest& request) const;
			DescribeLiveStreamMonitorListOutcome describeLiveStreamMonitorList(const Model::DescribeLiveStreamMonitorListRequest &request)const;
			void describeLiveStreamMonitorListAsync(const Model::DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamMonitorListOutcomeCallable describeLiveStreamMonitorListCallable(const Model::DescribeLiveStreamMonitorListRequest& request) const;
			DescribeLiveStreamPreloadTasksOutcome describeLiveStreamPreloadTasks(const Model::DescribeLiveStreamPreloadTasksRequest &request)const;
			void describeLiveStreamPreloadTasksAsync(const Model::DescribeLiveStreamPreloadTasksRequest& request, const DescribeLiveStreamPreloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamPreloadTasksOutcomeCallable describeLiveStreamPreloadTasksCallable(const Model::DescribeLiveStreamPreloadTasksRequest& request) const;
			DescribeLiveStreamPushMetricDetailDataOutcome describeLiveStreamPushMetricDetailData(const Model::DescribeLiveStreamPushMetricDetailDataRequest &request)const;
			void describeLiveStreamPushMetricDetailDataAsync(const Model::DescribeLiveStreamPushMetricDetailDataRequest& request, const DescribeLiveStreamPushMetricDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamPushMetricDetailDataOutcomeCallable describeLiveStreamPushMetricDetailDataCallable(const Model::DescribeLiveStreamPushMetricDetailDataRequest& request) const;
			DescribeLiveStreamRecordContentOutcome describeLiveStreamRecordContent(const Model::DescribeLiveStreamRecordContentRequest &request)const;
			void describeLiveStreamRecordContentAsync(const Model::DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordContentOutcomeCallable describeLiveStreamRecordContentCallable(const Model::DescribeLiveStreamRecordContentRequest& request) const;
			DescribeLiveStreamRecordIndexFileOutcome describeLiveStreamRecordIndexFile(const Model::DescribeLiveStreamRecordIndexFileRequest &request)const;
			void describeLiveStreamRecordIndexFileAsync(const Model::DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordIndexFileOutcomeCallable describeLiveStreamRecordIndexFileCallable(const Model::DescribeLiveStreamRecordIndexFileRequest& request) const;
			DescribeLiveStreamRecordIndexFilesOutcome describeLiveStreamRecordIndexFiles(const Model::DescribeLiveStreamRecordIndexFilesRequest &request)const;
			void describeLiveStreamRecordIndexFilesAsync(const Model::DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordIndexFilesOutcomeCallable describeLiveStreamRecordIndexFilesCallable(const Model::DescribeLiveStreamRecordIndexFilesRequest& request) const;
			DescribeLiveStreamSnapshotInfoOutcome describeLiveStreamSnapshotInfo(const Model::DescribeLiveStreamSnapshotInfoRequest &request)const;
			void describeLiveStreamSnapshotInfoAsync(const Model::DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamSnapshotInfoOutcomeCallable describeLiveStreamSnapshotInfoCallable(const Model::DescribeLiveStreamSnapshotInfoRequest& request) const;
			DescribeLiveStreamStateOutcome describeLiveStreamState(const Model::DescribeLiveStreamStateRequest &request)const;
			void describeLiveStreamStateAsync(const Model::DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamStateOutcomeCallable describeLiveStreamStateCallable(const Model::DescribeLiveStreamStateRequest& request) const;
			DescribeLiveStreamTranscodeInfoOutcome describeLiveStreamTranscodeInfo(const Model::DescribeLiveStreamTranscodeInfoRequest &request)const;
			void describeLiveStreamTranscodeInfoAsync(const Model::DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamTranscodeInfoOutcomeCallable describeLiveStreamTranscodeInfoCallable(const Model::DescribeLiveStreamTranscodeInfoRequest& request) const;
			DescribeLiveStreamTranscodeMetricDataOutcome describeLiveStreamTranscodeMetricData(const Model::DescribeLiveStreamTranscodeMetricDataRequest &request)const;
			void describeLiveStreamTranscodeMetricDataAsync(const Model::DescribeLiveStreamTranscodeMetricDataRequest& request, const DescribeLiveStreamTranscodeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamTranscodeMetricDataOutcomeCallable describeLiveStreamTranscodeMetricDataCallable(const Model::DescribeLiveStreamTranscodeMetricDataRequest& request) const;
			DescribeLiveStreamTranscodeStreamNumOutcome describeLiveStreamTranscodeStreamNum(const Model::DescribeLiveStreamTranscodeStreamNumRequest &request)const;
			void describeLiveStreamTranscodeStreamNumAsync(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request, const DescribeLiveStreamTranscodeStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamTranscodeStreamNumOutcomeCallable describeLiveStreamTranscodeStreamNumCallable(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request) const;
			DescribeLiveStreamWatermarkRulesOutcome describeLiveStreamWatermarkRules(const Model::DescribeLiveStreamWatermarkRulesRequest &request)const;
			void describeLiveStreamWatermarkRulesAsync(const Model::DescribeLiveStreamWatermarkRulesRequest& request, const DescribeLiveStreamWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamWatermarkRulesOutcomeCallable describeLiveStreamWatermarkRulesCallable(const Model::DescribeLiveStreamWatermarkRulesRequest& request) const;
			DescribeLiveStreamWatermarksOutcome describeLiveStreamWatermarks(const Model::DescribeLiveStreamWatermarksRequest &request)const;
			void describeLiveStreamWatermarksAsync(const Model::DescribeLiveStreamWatermarksRequest& request, const DescribeLiveStreamWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamWatermarksOutcomeCallable describeLiveStreamWatermarksCallable(const Model::DescribeLiveStreamWatermarksRequest& request) const;
			DescribeLiveStreamsBlockListOutcome describeLiveStreamsBlockList(const Model::DescribeLiveStreamsBlockListRequest &request)const;
			void describeLiveStreamsBlockListAsync(const Model::DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsBlockListOutcomeCallable describeLiveStreamsBlockListCallable(const Model::DescribeLiveStreamsBlockListRequest& request) const;
			DescribeLiveStreamsControlHistoryOutcome describeLiveStreamsControlHistory(const Model::DescribeLiveStreamsControlHistoryRequest &request)const;
			void describeLiveStreamsControlHistoryAsync(const Model::DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsControlHistoryOutcomeCallable describeLiveStreamsControlHistoryCallable(const Model::DescribeLiveStreamsControlHistoryRequest& request) const;
			DescribeLiveStreamsNotifyRecordsOutcome describeLiveStreamsNotifyRecords(const Model::DescribeLiveStreamsNotifyRecordsRequest &request)const;
			void describeLiveStreamsNotifyRecordsAsync(const Model::DescribeLiveStreamsNotifyRecordsRequest& request, const DescribeLiveStreamsNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsNotifyRecordsOutcomeCallable describeLiveStreamsNotifyRecordsCallable(const Model::DescribeLiveStreamsNotifyRecordsRequest& request) const;
			DescribeLiveStreamsNotifyUrlConfigOutcome describeLiveStreamsNotifyUrlConfig(const Model::DescribeLiveStreamsNotifyUrlConfigRequest &request)const;
			void describeLiveStreamsNotifyUrlConfigAsync(const Model::DescribeLiveStreamsNotifyUrlConfigRequest& request, const DescribeLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsNotifyUrlConfigOutcomeCallable describeLiveStreamsNotifyUrlConfigCallable(const Model::DescribeLiveStreamsNotifyUrlConfigRequest& request) const;
			DescribeLiveStreamsOnlineListOutcome describeLiveStreamsOnlineList(const Model::DescribeLiveStreamsOnlineListRequest &request)const;
			void describeLiveStreamsOnlineListAsync(const Model::DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsOnlineListOutcomeCallable describeLiveStreamsOnlineListCallable(const Model::DescribeLiveStreamsOnlineListRequest& request) const;
			DescribeLiveStreamsPublishListOutcome describeLiveStreamsPublishList(const Model::DescribeLiveStreamsPublishListRequest &request)const;
			void describeLiveStreamsPublishListAsync(const Model::DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsPublishListOutcomeCallable describeLiveStreamsPublishListCallable(const Model::DescribeLiveStreamsPublishListRequest& request) const;
			DescribeLiveStreamsTotalCountOutcome describeLiveStreamsTotalCount(const Model::DescribeLiveStreamsTotalCountRequest &request)const;
			void describeLiveStreamsTotalCountAsync(const Model::DescribeLiveStreamsTotalCountRequest& request, const DescribeLiveStreamsTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsTotalCountOutcomeCallable describeLiveStreamsTotalCountCallable(const Model::DescribeLiveStreamsTotalCountRequest& request) const;
			DescribeLiveTopDomainsByFlowOutcome describeLiveTopDomainsByFlow(const Model::DescribeLiveTopDomainsByFlowRequest &request)const;
			void describeLiveTopDomainsByFlowAsync(const Model::DescribeLiveTopDomainsByFlowRequest& request, const DescribeLiveTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveTopDomainsByFlowOutcomeCallable describeLiveTopDomainsByFlowCallable(const Model::DescribeLiveTopDomainsByFlowRequest& request) const;
			DescribeLiveTrafficDomainLogOutcome describeLiveTrafficDomainLog(const Model::DescribeLiveTrafficDomainLogRequest &request)const;
			void describeLiveTrafficDomainLogAsync(const Model::DescribeLiveTrafficDomainLogRequest& request, const DescribeLiveTrafficDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveTrafficDomainLogOutcomeCallable describeLiveTrafficDomainLogCallable(const Model::DescribeLiveTrafficDomainLogRequest& request) const;
			DescribeLiveUpVideoAudioInfoOutcome describeLiveUpVideoAudioInfo(const Model::DescribeLiveUpVideoAudioInfoRequest &request)const;
			void describeLiveUpVideoAudioInfoAsync(const Model::DescribeLiveUpVideoAudioInfoRequest& request, const DescribeLiveUpVideoAudioInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUpVideoAudioInfoOutcomeCallable describeLiveUpVideoAudioInfoCallable(const Model::DescribeLiveUpVideoAudioInfoRequest& request) const;
			DescribeLiveUserBillPredictionOutcome describeLiveUserBillPrediction(const Model::DescribeLiveUserBillPredictionRequest &request)const;
			void describeLiveUserBillPredictionAsync(const Model::DescribeLiveUserBillPredictionRequest& request, const DescribeLiveUserBillPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserBillPredictionOutcomeCallable describeLiveUserBillPredictionCallable(const Model::DescribeLiveUserBillPredictionRequest& request) const;
			DescribeLiveUserDomainsOutcome describeLiveUserDomains(const Model::DescribeLiveUserDomainsRequest &request)const;
			void describeLiveUserDomainsAsync(const Model::DescribeLiveUserDomainsRequest& request, const DescribeLiveUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserDomainsOutcomeCallable describeLiveUserDomainsCallable(const Model::DescribeLiveUserDomainsRequest& request) const;
			DescribeLiveUserStreamMetricDataOutcome describeLiveUserStreamMetricData(const Model::DescribeLiveUserStreamMetricDataRequest &request)const;
			void describeLiveUserStreamMetricDataAsync(const Model::DescribeLiveUserStreamMetricDataRequest& request, const DescribeLiveUserStreamMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserStreamMetricDataOutcomeCallable describeLiveUserStreamMetricDataCallable(const Model::DescribeLiveUserStreamMetricDataRequest& request) const;
			DescribeLiveUserTagsOutcome describeLiveUserTags(const Model::DescribeLiveUserTagsRequest &request)const;
			void describeLiveUserTagsAsync(const Model::DescribeLiveUserTagsRequest& request, const DescribeLiveUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserTagsOutcomeCallable describeLiveUserTagsCallable(const Model::DescribeLiveUserTagsRequest& request) const;
			DescribeLiveUserTrafficLogOutcome describeLiveUserTrafficLog(const Model::DescribeLiveUserTrafficLogRequest &request)const;
			void describeLiveUserTrafficLogAsync(const Model::DescribeLiveUserTrafficLogRequest& request, const DescribeLiveUserTrafficLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserTrafficLogOutcomeCallable describeLiveUserTrafficLogCallable(const Model::DescribeLiveUserTrafficLogRequest& request) const;
			DescribeLiveVerifyContentOutcome describeLiveVerifyContent(const Model::DescribeLiveVerifyContentRequest &request)const;
			void describeLiveVerifyContentAsync(const Model::DescribeLiveVerifyContentRequest& request, const DescribeLiveVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveVerifyContentOutcomeCallable describeLiveVerifyContentCallable(const Model::DescribeLiveVerifyContentRequest& request) const;
			DescribeMeterLiveBypassDurationOutcome describeMeterLiveBypassDuration(const Model::DescribeMeterLiveBypassDurationRequest &request)const;
			void describeMeterLiveBypassDurationAsync(const Model::DescribeMeterLiveBypassDurationRequest& request, const DescribeMeterLiveBypassDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterLiveBypassDurationOutcomeCallable describeMeterLiveBypassDurationCallable(const Model::DescribeMeterLiveBypassDurationRequest& request) const;
			DescribeMixStreamListOutcome describeMixStreamList(const Model::DescribeMixStreamListRequest &request)const;
			void describeMixStreamListAsync(const Model::DescribeMixStreamListRequest& request, const DescribeMixStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMixStreamListOutcomeCallable describeMixStreamListCallable(const Model::DescribeMixStreamListRequest& request) const;
			DescribeRTSNativeSDKFirstFrameCostOutcome describeRTSNativeSDKFirstFrameCost(const Model::DescribeRTSNativeSDKFirstFrameCostRequest &request)const;
			void describeRTSNativeSDKFirstFrameCostAsync(const Model::DescribeRTSNativeSDKFirstFrameCostRequest& request, const DescribeRTSNativeSDKFirstFrameCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKFirstFrameCostOutcomeCallable describeRTSNativeSDKFirstFrameCostCallable(const Model::DescribeRTSNativeSDKFirstFrameCostRequest& request) const;
			DescribeRTSNativeSDKFirstFrameDelayOutcome describeRTSNativeSDKFirstFrameDelay(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest &request)const;
			void describeRTSNativeSDKFirstFrameDelayAsync(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest& request, const DescribeRTSNativeSDKFirstFrameDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKFirstFrameDelayOutcomeCallable describeRTSNativeSDKFirstFrameDelayCallable(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest& request) const;
			DescribeRTSNativeSDKPlayFailStatusOutcome describeRTSNativeSDKPlayFailStatus(const Model::DescribeRTSNativeSDKPlayFailStatusRequest &request)const;
			void describeRTSNativeSDKPlayFailStatusAsync(const Model::DescribeRTSNativeSDKPlayFailStatusRequest& request, const DescribeRTSNativeSDKPlayFailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKPlayFailStatusOutcomeCallable describeRTSNativeSDKPlayFailStatusCallable(const Model::DescribeRTSNativeSDKPlayFailStatusRequest& request) const;
			DescribeRTSNativeSDKPlayTimeOutcome describeRTSNativeSDKPlayTime(const Model::DescribeRTSNativeSDKPlayTimeRequest &request)const;
			void describeRTSNativeSDKPlayTimeAsync(const Model::DescribeRTSNativeSDKPlayTimeRequest& request, const DescribeRTSNativeSDKPlayTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKPlayTimeOutcomeCallable describeRTSNativeSDKPlayTimeCallable(const Model::DescribeRTSNativeSDKPlayTimeRequest& request) const;
			DescribeRTSNativeSDKVvDataOutcome describeRTSNativeSDKVvData(const Model::DescribeRTSNativeSDKVvDataRequest &request)const;
			void describeRTSNativeSDKVvDataAsync(const Model::DescribeRTSNativeSDKVvDataRequest& request, const DescribeRTSNativeSDKVvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKVvDataOutcomeCallable describeRTSNativeSDKVvDataCallable(const Model::DescribeRTSNativeSDKVvDataRequest& request) const;
			DescribeRtcCloudRecordingFilesOutcome describeRtcCloudRecordingFiles(const Model::DescribeRtcCloudRecordingFilesRequest &request)const;
			void describeRtcCloudRecordingFilesAsync(const Model::DescribeRtcCloudRecordingFilesRequest& request, const DescribeRtcCloudRecordingFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcCloudRecordingFilesOutcomeCallable describeRtcCloudRecordingFilesCallable(const Model::DescribeRtcCloudRecordingFilesRequest& request) const;
			DescribeRtcMPUEventSubOutcome describeRtcMPUEventSub(const Model::DescribeRtcMPUEventSubRequest &request)const;
			void describeRtcMPUEventSubAsync(const Model::DescribeRtcMPUEventSubRequest& request, const DescribeRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcMPUEventSubOutcomeCallable describeRtcMPUEventSubCallable(const Model::DescribeRtcMPUEventSubRequest& request) const;
			DescribeShowListOutcome describeShowList(const Model::DescribeShowListRequest &request)const;
			void describeShowListAsync(const Model::DescribeShowListRequest& request, const DescribeShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShowListOutcomeCallable describeShowListCallable(const Model::DescribeShowListRequest& request) const;
			DescribeStreamLocationBlockOutcome describeStreamLocationBlock(const Model::DescribeStreamLocationBlockRequest &request)const;
			void describeStreamLocationBlockAsync(const Model::DescribeStreamLocationBlockRequest& request, const DescribeStreamLocationBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStreamLocationBlockOutcomeCallable describeStreamLocationBlockCallable(const Model::DescribeStreamLocationBlockRequest& request) const;
			DescribeStudioLayoutsOutcome describeStudioLayouts(const Model::DescribeStudioLayoutsRequest &request)const;
			void describeStudioLayoutsAsync(const Model::DescribeStudioLayoutsRequest& request, const DescribeStudioLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStudioLayoutsOutcomeCallable describeStudioLayoutsCallable(const Model::DescribeStudioLayoutsRequest& request) const;
			DescribeToutiaoLivePlayOutcome describeToutiaoLivePlay(const Model::DescribeToutiaoLivePlayRequest &request)const;
			void describeToutiaoLivePlayAsync(const Model::DescribeToutiaoLivePlayRequest& request, const DescribeToutiaoLivePlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeToutiaoLivePlayOutcomeCallable describeToutiaoLivePlayCallable(const Model::DescribeToutiaoLivePlayRequest& request) const;
			DescribeToutiaoLivePublishOutcome describeToutiaoLivePublish(const Model::DescribeToutiaoLivePublishRequest &request)const;
			void describeToutiaoLivePublishAsync(const Model::DescribeToutiaoLivePublishRequest& request, const DescribeToutiaoLivePublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeToutiaoLivePublishOutcomeCallable describeToutiaoLivePublishCallable(const Model::DescribeToutiaoLivePublishRequest& request) const;
			DescribeUidOnlineStreamsOutcome describeUidOnlineStreams(const Model::DescribeUidOnlineStreamsRequest &request)const;
			void describeUidOnlineStreamsAsync(const Model::DescribeUidOnlineStreamsRequest& request, const DescribeUidOnlineStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidOnlineStreamsOutcomeCallable describeUidOnlineStreamsCallable(const Model::DescribeUidOnlineStreamsRequest& request) const;
			DescribeUpBpsPeakDataOutcome describeUpBpsPeakData(const Model::DescribeUpBpsPeakDataRequest &request)const;
			void describeUpBpsPeakDataAsync(const Model::DescribeUpBpsPeakDataRequest& request, const DescribeUpBpsPeakDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpBpsPeakDataOutcomeCallable describeUpBpsPeakDataCallable(const Model::DescribeUpBpsPeakDataRequest& request) const;
			DescribeUpBpsPeakOfLineOutcome describeUpBpsPeakOfLine(const Model::DescribeUpBpsPeakOfLineRequest &request)const;
			void describeUpBpsPeakOfLineAsync(const Model::DescribeUpBpsPeakOfLineRequest& request, const DescribeUpBpsPeakOfLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpBpsPeakOfLineOutcomeCallable describeUpBpsPeakOfLineCallable(const Model::DescribeUpBpsPeakOfLineRequest& request) const;
			DescribeUpPeakPublishStreamDataOutcome describeUpPeakPublishStreamData(const Model::DescribeUpPeakPublishStreamDataRequest &request)const;
			void describeUpPeakPublishStreamDataAsync(const Model::DescribeUpPeakPublishStreamDataRequest& request, const DescribeUpPeakPublishStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpPeakPublishStreamDataOutcomeCallable describeUpPeakPublishStreamDataCallable(const Model::DescribeUpPeakPublishStreamDataRequest& request) const;
			DisableLiveRealtimeLogDeliveryOutcome disableLiveRealtimeLogDelivery(const Model::DisableLiveRealtimeLogDeliveryRequest &request)const;
			void disableLiveRealtimeLogDeliveryAsync(const Model::DisableLiveRealtimeLogDeliveryRequest& request, const DisableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLiveRealtimeLogDeliveryOutcomeCallable disableLiveRealtimeLogDeliveryCallable(const Model::DisableLiveRealtimeLogDeliveryRequest& request) const;
			DynamicUpdateWaterMarkStreamRuleOutcome dynamicUpdateWaterMarkStreamRule(const Model::DynamicUpdateWaterMarkStreamRuleRequest &request)const;
			void dynamicUpdateWaterMarkStreamRuleAsync(const Model::DynamicUpdateWaterMarkStreamRuleRequest& request, const DynamicUpdateWaterMarkStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DynamicUpdateWaterMarkStreamRuleOutcomeCallable dynamicUpdateWaterMarkStreamRuleCallable(const Model::DynamicUpdateWaterMarkStreamRuleRequest& request) const;
			EditPlaylistOutcome editPlaylist(const Model::EditPlaylistRequest &request)const;
			void editPlaylistAsync(const Model::EditPlaylistRequest& request, const EditPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditPlaylistOutcomeCallable editPlaylistCallable(const Model::EditPlaylistRequest& request) const;
			EditShowAndReplaceOutcome editShowAndReplace(const Model::EditShowAndReplaceRequest &request)const;
			void editShowAndReplaceAsync(const Model::EditShowAndReplaceRequest& request, const EditShowAndReplaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditShowAndReplaceOutcomeCallable editShowAndReplaceCallable(const Model::EditShowAndReplaceRequest& request) const;
			EffectCasterUrgentOutcome effectCasterUrgent(const Model::EffectCasterUrgentRequest &request)const;
			void effectCasterUrgentAsync(const Model::EffectCasterUrgentRequest& request, const EffectCasterUrgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EffectCasterUrgentOutcomeCallable effectCasterUrgentCallable(const Model::EffectCasterUrgentRequest& request) const;
			EffectCasterVideoResourceOutcome effectCasterVideoResource(const Model::EffectCasterVideoResourceRequest &request)const;
			void effectCasterVideoResourceAsync(const Model::EffectCasterVideoResourceRequest& request, const EffectCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EffectCasterVideoResourceOutcomeCallable effectCasterVideoResourceCallable(const Model::EffectCasterVideoResourceRequest& request) const;
			EnableLiveRealtimeLogDeliveryOutcome enableLiveRealtimeLogDelivery(const Model::EnableLiveRealtimeLogDeliveryRequest &request)const;
			void enableLiveRealtimeLogDeliveryAsync(const Model::EnableLiveRealtimeLogDeliveryRequest& request, const EnableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLiveRealtimeLogDeliveryOutcomeCallable enableLiveRealtimeLogDeliveryCallable(const Model::EnableLiveRealtimeLogDeliveryRequest& request) const;
			ForbidLiveStreamOutcome forbidLiveStream(const Model::ForbidLiveStreamRequest &request)const;
			void forbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForbidLiveStreamOutcomeCallable forbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request) const;
			GetAllCustomTemplatesOutcome getAllCustomTemplates(const Model::GetAllCustomTemplatesRequest &request)const;
			void getAllCustomTemplatesAsync(const Model::GetAllCustomTemplatesRequest& request, const GetAllCustomTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllCustomTemplatesOutcomeCallable getAllCustomTemplatesCallable(const Model::GetAllCustomTemplatesRequest& request) const;
			GetCustomTemplateOutcome getCustomTemplate(const Model::GetCustomTemplateRequest &request)const;
			void getCustomTemplateAsync(const Model::GetCustomTemplateRequest& request, const GetCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomTemplateOutcomeCallable getCustomTemplateCallable(const Model::GetCustomTemplateRequest& request) const;
			GetEdgeTranscodeJobOutcome getEdgeTranscodeJob(const Model::GetEdgeTranscodeJobRequest &request)const;
			void getEdgeTranscodeJobAsync(const Model::GetEdgeTranscodeJobRequest& request, const GetEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeTranscodeJobOutcomeCallable getEdgeTranscodeJobCallable(const Model::GetEdgeTranscodeJobRequest& request) const;
			GetEdgeTranscodeTemplateOutcome getEdgeTranscodeTemplate(const Model::GetEdgeTranscodeTemplateRequest &request)const;
			void getEdgeTranscodeTemplateAsync(const Model::GetEdgeTranscodeTemplateRequest& request, const GetEdgeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeTranscodeTemplateOutcomeCallable getEdgeTranscodeTemplateCallable(const Model::GetEdgeTranscodeTemplateRequest& request) const;
			GetEditingJobInfoOutcome getEditingJobInfo(const Model::GetEditingJobInfoRequest &request)const;
			void getEditingJobInfoAsync(const Model::GetEditingJobInfoRequest& request, const GetEditingJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingJobInfoOutcomeCallable getEditingJobInfoCallable(const Model::GetEditingJobInfoRequest& request) const;
			GetMessageAppOutcome getMessageApp(const Model::GetMessageAppRequest &request)const;
			void getMessageAppAsync(const Model::GetMessageAppRequest& request, const GetMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageAppOutcomeCallable getMessageAppCallable(const Model::GetMessageAppRequest& request) const;
			GetMessageGroupOutcome getMessageGroup(const Model::GetMessageGroupRequest &request)const;
			void getMessageGroupAsync(const Model::GetMessageGroupRequest& request, const GetMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageGroupOutcomeCallable getMessageGroupCallable(const Model::GetMessageGroupRequest& request) const;
			GetMessageTokenOutcome getMessageToken(const Model::GetMessageTokenRequest &request)const;
			void getMessageTokenAsync(const Model::GetMessageTokenRequest& request, const GetMessageTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageTokenOutcomeCallable getMessageTokenCallable(const Model::GetMessageTokenRequest& request) const;
			GetTranscodeTaskStatusOutcome getTranscodeTaskStatus(const Model::GetTranscodeTaskStatusRequest &request)const;
			void getTranscodeTaskStatusAsync(const Model::GetTranscodeTaskStatusRequest& request, const GetTranscodeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscodeTaskStatusOutcomeCallable getTranscodeTaskStatusCallable(const Model::GetTranscodeTaskStatusRequest& request) const;
			HotLiveRtcStreamOutcome hotLiveRtcStream(const Model::HotLiveRtcStreamRequest &request)const;
			void hotLiveRtcStreamAsync(const Model::HotLiveRtcStreamRequest& request, const HotLiveRtcStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HotLiveRtcStreamOutcomeCallable hotLiveRtcStreamCallable(const Model::HotLiveRtcStreamRequest& request) const;
			InitializeAutoShowListTaskOutcome initializeAutoShowListTask(const Model::InitializeAutoShowListTaskRequest &request)const;
			void initializeAutoShowListTaskAsync(const Model::InitializeAutoShowListTaskRequest& request, const InitializeAutoShowListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeAutoShowListTaskOutcomeCallable initializeAutoShowListTaskCallable(const Model::InitializeAutoShowListTaskRequest& request) const;
			JoinMessageGroupOutcome joinMessageGroup(const Model::JoinMessageGroupRequest &request)const;
			void joinMessageGroupAsync(const Model::JoinMessageGroupRequest& request, const JoinMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinMessageGroupOutcomeCallable joinMessageGroupCallable(const Model::JoinMessageGroupRequest& request) const;
			KickLiveMessageGroupUserOutcome kickLiveMessageGroupUser(const Model::KickLiveMessageGroupUserRequest &request)const;
			void kickLiveMessageGroupUserAsync(const Model::KickLiveMessageGroupUserRequest& request, const KickLiveMessageGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickLiveMessageGroupUserOutcomeCallable kickLiveMessageGroupUserCallable(const Model::KickLiveMessageGroupUserRequest& request) const;
			LeaveMessageGroupOutcome leaveMessageGroup(const Model::LeaveMessageGroupRequest &request)const;
			void leaveMessageGroupAsync(const Model::LeaveMessageGroupRequest& request, const LeaveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LeaveMessageGroupOutcomeCallable leaveMessageGroupCallable(const Model::LeaveMessageGroupRequest& request) const;
			ListEdgeTranscodeJobOutcome listEdgeTranscodeJob(const Model::ListEdgeTranscodeJobRequest &request)const;
			void listEdgeTranscodeJobAsync(const Model::ListEdgeTranscodeJobRequest& request, const ListEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEdgeTranscodeJobOutcomeCallable listEdgeTranscodeJobCallable(const Model::ListEdgeTranscodeJobRequest& request) const;
			ListEdgeTranscodeTemplateOutcome listEdgeTranscodeTemplate(const Model::ListEdgeTranscodeTemplateRequest &request)const;
			void listEdgeTranscodeTemplateAsync(const Model::ListEdgeTranscodeTemplateRequest& request, const ListEdgeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEdgeTranscodeTemplateOutcomeCallable listEdgeTranscodeTemplateCallable(const Model::ListEdgeTranscodeTemplateRequest& request) const;
			ListEventSubOutcome listEventSub(const Model::ListEventSubRequest &request)const;
			void listEventSubAsync(const Model::ListEventSubRequest& request, const ListEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventSubOutcomeCallable listEventSubCallable(const Model::ListEventSubRequest& request) const;
			ListEventSubEventOutcome listEventSubEvent(const Model::ListEventSubEventRequest &request)const;
			void listEventSubEventAsync(const Model::ListEventSubEventRequest& request, const ListEventSubEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventSubEventOutcomeCallable listEventSubEventCallable(const Model::ListEventSubEventRequest& request) const;
			ListLiveDelayConfigOutcome listLiveDelayConfig(const Model::ListLiveDelayConfigRequest &request)const;
			void listLiveDelayConfigAsync(const Model::ListLiveDelayConfigRequest& request, const ListLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveDelayConfigOutcomeCallable listLiveDelayConfigCallable(const Model::ListLiveDelayConfigRequest& request) const;
			ListLiveMessageAppsOutcome listLiveMessageApps(const Model::ListLiveMessageAppsRequest &request)const;
			void listLiveMessageAppsAsync(const Model::ListLiveMessageAppsRequest& request, const ListLiveMessageAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveMessageAppsOutcomeCallable listLiveMessageAppsCallable(const Model::ListLiveMessageAppsRequest& request) const;
			ListLiveMessageGroupByPageOutcome listLiveMessageGroupByPage(const Model::ListLiveMessageGroupByPageRequest &request)const;
			void listLiveMessageGroupByPageAsync(const Model::ListLiveMessageGroupByPageRequest& request, const ListLiveMessageGroupByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveMessageGroupByPageOutcomeCallable listLiveMessageGroupByPageCallable(const Model::ListLiveMessageGroupByPageRequest& request) const;
			ListLiveMessageGroupMessagesOutcome listLiveMessageGroupMessages(const Model::ListLiveMessageGroupMessagesRequest &request)const;
			void listLiveMessageGroupMessagesAsync(const Model::ListLiveMessageGroupMessagesRequest& request, const ListLiveMessageGroupMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveMessageGroupMessagesOutcomeCallable listLiveMessageGroupMessagesCallable(const Model::ListLiveMessageGroupMessagesRequest& request) const;
			ListLiveMessageGroupUsersOutcome listLiveMessageGroupUsers(const Model::ListLiveMessageGroupUsersRequest &request)const;
			void listLiveMessageGroupUsersAsync(const Model::ListLiveMessageGroupUsersRequest& request, const ListLiveMessageGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveMessageGroupUsersOutcomeCallable listLiveMessageGroupUsersCallable(const Model::ListLiveMessageGroupUsersRequest& request) const;
			ListLiveMessageGroupsOutcome listLiveMessageGroups(const Model::ListLiveMessageGroupsRequest &request)const;
			void listLiveMessageGroupsAsync(const Model::ListLiveMessageGroupsRequest& request, const ListLiveMessageGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveMessageGroupsOutcomeCallable listLiveMessageGroupsCallable(const Model::ListLiveMessageGroupsRequest& request) const;
			ListLiveRealtimeLogDeliveryOutcome listLiveRealtimeLogDelivery(const Model::ListLiveRealtimeLogDeliveryRequest &request)const;
			void listLiveRealtimeLogDeliveryAsync(const Model::ListLiveRealtimeLogDeliveryRequest& request, const ListLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryOutcomeCallable listLiveRealtimeLogDeliveryCallable(const Model::ListLiveRealtimeLogDeliveryRequest& request) const;
			ListLiveRealtimeLogDeliveryDomainsOutcome listLiveRealtimeLogDeliveryDomains(const Model::ListLiveRealtimeLogDeliveryDomainsRequest &request)const;
			void listLiveRealtimeLogDeliveryDomainsAsync(const Model::ListLiveRealtimeLogDeliveryDomainsRequest& request, const ListLiveRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryDomainsOutcomeCallable listLiveRealtimeLogDeliveryDomainsCallable(const Model::ListLiveRealtimeLogDeliveryDomainsRequest& request) const;
			ListLiveRealtimeLogDeliveryInfosOutcome listLiveRealtimeLogDeliveryInfos(const Model::ListLiveRealtimeLogDeliveryInfosRequest &request)const;
			void listLiveRealtimeLogDeliveryInfosAsync(const Model::ListLiveRealtimeLogDeliveryInfosRequest& request, const ListLiveRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryInfosOutcomeCallable listLiveRealtimeLogDeliveryInfosCallable(const Model::ListLiveRealtimeLogDeliveryInfosRequest& request) const;
			ListMessageOutcome listMessage(const Model::ListMessageRequest &request)const;
			void listMessageAsync(const Model::ListMessageRequest& request, const ListMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageOutcomeCallable listMessageCallable(const Model::ListMessageRequest& request) const;
			ListMessageAppOutcome listMessageApp(const Model::ListMessageAppRequest &request)const;
			void listMessageAppAsync(const Model::ListMessageAppRequest& request, const ListMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageAppOutcomeCallable listMessageAppCallable(const Model::ListMessageAppRequest& request) const;
			ListMessageGroupOutcome listMessageGroup(const Model::ListMessageGroupRequest &request)const;
			void listMessageGroupAsync(const Model::ListMessageGroupRequest& request, const ListMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupOutcomeCallable listMessageGroupCallable(const Model::ListMessageGroupRequest& request) const;
			ListMessageGroupUserOutcome listMessageGroupUser(const Model::ListMessageGroupUserRequest &request)const;
			void listMessageGroupUserAsync(const Model::ListMessageGroupUserRequest& request, const ListMessageGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupUserOutcomeCallable listMessageGroupUserCallable(const Model::ListMessageGroupUserRequest& request) const;
			ListMessageGroupUserByIdOutcome listMessageGroupUserById(const Model::ListMessageGroupUserByIdRequest &request)const;
			void listMessageGroupUserByIdAsync(const Model::ListMessageGroupUserByIdRequest& request, const ListMessageGroupUserByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupUserByIdOutcomeCallable listMessageGroupUserByIdCallable(const Model::ListMessageGroupUserByIdRequest& request) const;
			ListMuteGroupUserOutcome listMuteGroupUser(const Model::ListMuteGroupUserRequest &request)const;
			void listMuteGroupUserAsync(const Model::ListMuteGroupUserRequest& request, const ListMuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMuteGroupUserOutcomeCallable listMuteGroupUserCallable(const Model::ListMuteGroupUserRequest& request) const;
			ListPlaylistOutcome listPlaylist(const Model::ListPlaylistRequest &request)const;
			void listPlaylistAsync(const Model::ListPlaylistRequest& request, const ListPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlaylistOutcomeCallable listPlaylistCallable(const Model::ListPlaylistRequest& request) const;
			ListPlaylistItemsOutcome listPlaylistItems(const Model::ListPlaylistItemsRequest &request)const;
			void listPlaylistItemsAsync(const Model::ListPlaylistItemsRequest& request, const ListPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlaylistItemsOutcomeCallable listPlaylistItemsCallable(const Model::ListPlaylistItemsRequest& request) const;
			ListRtcMPUEventSubRecordOutcome listRtcMPUEventSubRecord(const Model::ListRtcMPUEventSubRecordRequest &request)const;
			void listRtcMPUEventSubRecordAsync(const Model::ListRtcMPUEventSubRecordRequest& request, const ListRtcMPUEventSubRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRtcMPUEventSubRecordOutcomeCallable listRtcMPUEventSubRecordCallable(const Model::ListRtcMPUEventSubRecordRequest& request) const;
			ListRtcMPUTaskDetailOutcome listRtcMPUTaskDetail(const Model::ListRtcMPUTaskDetailRequest &request)const;
			void listRtcMPUTaskDetailAsync(const Model::ListRtcMPUTaskDetailRequest& request, const ListRtcMPUTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRtcMPUTaskDetailOutcomeCallable listRtcMPUTaskDetailCallable(const Model::ListRtcMPUTaskDetailRequest& request) const;
			LiveUpstreamQosDataOutcome liveUpstreamQosData(const Model::LiveUpstreamQosDataRequest &request)const;
			void liveUpstreamQosDataAsync(const Model::LiveUpstreamQosDataRequest& request, const LiveUpstreamQosDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LiveUpstreamQosDataOutcomeCallable liveUpstreamQosDataCallable(const Model::LiveUpstreamQosDataRequest& request) const;
			MiguLivePullToPushStartOutcome miguLivePullToPushStart(const Model::MiguLivePullToPushStartRequest &request)const;
			void miguLivePullToPushStartAsync(const Model::MiguLivePullToPushStartRequest& request, const MiguLivePullToPushStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MiguLivePullToPushStartOutcomeCallable miguLivePullToPushStartCallable(const Model::MiguLivePullToPushStartRequest& request) const;
			MiguLivePullToPushStatusOutcome miguLivePullToPushStatus(const Model::MiguLivePullToPushStatusRequest &request)const;
			void miguLivePullToPushStatusAsync(const Model::MiguLivePullToPushStatusRequest& request, const MiguLivePullToPushStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MiguLivePullToPushStatusOutcomeCallable miguLivePullToPushStatusCallable(const Model::MiguLivePullToPushStatusRequest& request) const;
			ModifyCasterComponentOutcome modifyCasterComponent(const Model::ModifyCasterComponentRequest &request)const;
			void modifyCasterComponentAsync(const Model::ModifyCasterComponentRequest& request, const ModifyCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterComponentOutcomeCallable modifyCasterComponentCallable(const Model::ModifyCasterComponentRequest& request) const;
			ModifyCasterEpisodeOutcome modifyCasterEpisode(const Model::ModifyCasterEpisodeRequest &request)const;
			void modifyCasterEpisodeAsync(const Model::ModifyCasterEpisodeRequest& request, const ModifyCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterEpisodeOutcomeCallable modifyCasterEpisodeCallable(const Model::ModifyCasterEpisodeRequest& request) const;
			ModifyCasterLayoutOutcome modifyCasterLayout(const Model::ModifyCasterLayoutRequest &request)const;
			void modifyCasterLayoutAsync(const Model::ModifyCasterLayoutRequest& request, const ModifyCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterLayoutOutcomeCallable modifyCasterLayoutCallable(const Model::ModifyCasterLayoutRequest& request) const;
			ModifyCasterProgramOutcome modifyCasterProgram(const Model::ModifyCasterProgramRequest &request)const;
			void modifyCasterProgramAsync(const Model::ModifyCasterProgramRequest& request, const ModifyCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterProgramOutcomeCallable modifyCasterProgramCallable(const Model::ModifyCasterProgramRequest& request) const;
			ModifyCasterVideoResourceOutcome modifyCasterVideoResource(const Model::ModifyCasterVideoResourceRequest &request)const;
			void modifyCasterVideoResourceAsync(const Model::ModifyCasterVideoResourceRequest& request, const ModifyCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterVideoResourceOutcomeCallable modifyCasterVideoResourceCallable(const Model::ModifyCasterVideoResourceRequest& request) const;
			ModifyLiveAIStudioOutcome modifyLiveAIStudio(const Model::ModifyLiveAIStudioRequest &request)const;
			void modifyLiveAIStudioAsync(const Model::ModifyLiveAIStudioRequest& request, const ModifyLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveAIStudioOutcomeCallable modifyLiveAIStudioCallable(const Model::ModifyLiveAIStudioRequest& request) const;
			ModifyLiveDomainSchdmByPropertyOutcome modifyLiveDomainSchdmByProperty(const Model::ModifyLiveDomainSchdmByPropertyRequest &request)const;
			void modifyLiveDomainSchdmByPropertyAsync(const Model::ModifyLiveDomainSchdmByPropertyRequest& request, const ModifyLiveDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveDomainSchdmByPropertyOutcomeCallable modifyLiveDomainSchdmByPropertyCallable(const Model::ModifyLiveDomainSchdmByPropertyRequest& request) const;
			ModifyLiveMessageAppAuditOutcome modifyLiveMessageAppAudit(const Model::ModifyLiveMessageAppAuditRequest &request)const;
			void modifyLiveMessageAppAuditAsync(const Model::ModifyLiveMessageAppAuditRequest& request, const ModifyLiveMessageAppAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageAppAuditOutcomeCallable modifyLiveMessageAppAuditCallable(const Model::ModifyLiveMessageAppAuditRequest& request) const;
			ModifyLiveMessageAppCallbackOutcome modifyLiveMessageAppCallback(const Model::ModifyLiveMessageAppCallbackRequest &request)const;
			void modifyLiveMessageAppCallbackAsync(const Model::ModifyLiveMessageAppCallbackRequest& request, const ModifyLiveMessageAppCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageAppCallbackOutcomeCallable modifyLiveMessageAppCallbackCallable(const Model::ModifyLiveMessageAppCallbackRequest& request) const;
			ModifyLiveMessageAppDisableOutcome modifyLiveMessageAppDisable(const Model::ModifyLiveMessageAppDisableRequest &request)const;
			void modifyLiveMessageAppDisableAsync(const Model::ModifyLiveMessageAppDisableRequest& request, const ModifyLiveMessageAppDisableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageAppDisableOutcomeCallable modifyLiveMessageAppDisableCallable(const Model::ModifyLiveMessageAppDisableRequest& request) const;
			ModifyLiveMessageGroupOutcome modifyLiveMessageGroup(const Model::ModifyLiveMessageGroupRequest &request)const;
			void modifyLiveMessageGroupAsync(const Model::ModifyLiveMessageGroupRequest& request, const ModifyLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageGroupOutcomeCallable modifyLiveMessageGroupCallable(const Model::ModifyLiveMessageGroupRequest& request) const;
			ModifyLiveMessageGroupBandOutcome modifyLiveMessageGroupBand(const Model::ModifyLiveMessageGroupBandRequest &request)const;
			void modifyLiveMessageGroupBandAsync(const Model::ModifyLiveMessageGroupBandRequest& request, const ModifyLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageGroupBandOutcomeCallable modifyLiveMessageGroupBandCallable(const Model::ModifyLiveMessageGroupBandRequest& request) const;
			ModifyLiveMessageUserInfoOutcome modifyLiveMessageUserInfo(const Model::ModifyLiveMessageUserInfoRequest &request)const;
			void modifyLiveMessageUserInfoAsync(const Model::ModifyLiveMessageUserInfoRequest& request, const ModifyLiveMessageUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveMessageUserInfoOutcomeCallable modifyLiveMessageUserInfoCallable(const Model::ModifyLiveMessageUserInfoRequest& request) const;
			ModifyLiveRealtimeLogDeliveryOutcome modifyLiveRealtimeLogDelivery(const Model::ModifyLiveRealtimeLogDeliveryRequest &request)const;
			void modifyLiveRealtimeLogDeliveryAsync(const Model::ModifyLiveRealtimeLogDeliveryRequest& request, const ModifyLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveRealtimeLogDeliveryOutcomeCallable modifyLiveRealtimeLogDeliveryCallable(const Model::ModifyLiveRealtimeLogDeliveryRequest& request) const;
			ModifyShowListOutcome modifyShowList(const Model::ModifyShowListRequest &request)const;
			void modifyShowListAsync(const Model::ModifyShowListRequest& request, const ModifyShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyShowListOutcomeCallable modifyShowListCallable(const Model::ModifyShowListRequest& request) const;
			ModifyStudioLayoutOutcome modifyStudioLayout(const Model::ModifyStudioLayoutRequest &request)const;
			void modifyStudioLayoutAsync(const Model::ModifyStudioLayoutRequest& request, const ModifyStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStudioLayoutOutcomeCallable modifyStudioLayoutCallable(const Model::ModifyStudioLayoutRequest& request) const;
			MuteAllGroupUserOutcome muteAllGroupUser(const Model::MuteAllGroupUserRequest &request)const;
			void muteAllGroupUserAsync(const Model::MuteAllGroupUserRequest& request, const MuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAllGroupUserOutcomeCallable muteAllGroupUserCallable(const Model::MuteAllGroupUserRequest& request) const;
			MuteGroupUserOutcome muteGroupUser(const Model::MuteGroupUserRequest &request)const;
			void muteGroupUserAsync(const Model::MuteGroupUserRequest& request, const MuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteGroupUserOutcomeCallable muteGroupUserCallable(const Model::MuteGroupUserRequest& request) const;
			OpenLiveShiftOutcome openLiveShift(const Model::OpenLiveShiftRequest &request)const;
			void openLiveShiftAsync(const Model::OpenLiveShiftRequest& request, const OpenLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenLiveShiftOutcomeCallable openLiveShiftCallable(const Model::OpenLiveShiftRequest& request) const;
			PlayChoosenShowOutcome playChoosenShow(const Model::PlayChoosenShowRequest &request)const;
			void playChoosenShowAsync(const Model::PlayChoosenShowRequest& request, const PlayChoosenShowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PlayChoosenShowOutcomeCallable playChoosenShowCallable(const Model::PlayChoosenShowRequest& request) const;
			PublishLiveStagingConfigToProductionOutcome publishLiveStagingConfigToProduction(const Model::PublishLiveStagingConfigToProductionRequest &request)const;
			void publishLiveStagingConfigToProductionAsync(const Model::PublishLiveStagingConfigToProductionRequest& request, const PublishLiveStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishLiveStagingConfigToProductionOutcomeCallable publishLiveStagingConfigToProductionCallable(const Model::PublishLiveStagingConfigToProductionRequest& request) const;
			QueryLiveDomainMultiStreamListOutcome queryLiveDomainMultiStreamList(const Model::QueryLiveDomainMultiStreamListRequest &request)const;
			void queryLiveDomainMultiStreamListAsync(const Model::QueryLiveDomainMultiStreamListRequest& request, const QueryLiveDomainMultiStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLiveDomainMultiStreamListOutcomeCallable queryLiveDomainMultiStreamListCallable(const Model::QueryLiveDomainMultiStreamListRequest& request) const;
			QueryMessageAppOutcome queryMessageApp(const Model::QueryMessageAppRequest &request)const;
			void queryMessageAppAsync(const Model::QueryMessageAppRequest& request, const QueryMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMessageAppOutcomeCallable queryMessageAppCallable(const Model::QueryMessageAppRequest& request) const;
			QueryRtcAsrTasksOutcome queryRtcAsrTasks(const Model::QueryRtcAsrTasksRequest &request)const;
			void queryRtcAsrTasksAsync(const Model::QueryRtcAsrTasksRequest& request, const QueryRtcAsrTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRtcAsrTasksOutcomeCallable queryRtcAsrTasksCallable(const Model::QueryRtcAsrTasksRequest& request) const;
			QuerySnapshotCallbackAuthOutcome querySnapshotCallbackAuth(const Model::QuerySnapshotCallbackAuthRequest &request)const;
			void querySnapshotCallbackAuthAsync(const Model::QuerySnapshotCallbackAuthRequest& request, const QuerySnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySnapshotCallbackAuthOutcomeCallable querySnapshotCallbackAuthCallable(const Model::QuerySnapshotCallbackAuthRequest& request) const;
			RealTimeRecordCommandOutcome realTimeRecordCommand(const Model::RealTimeRecordCommandRequest &request)const;
			void realTimeRecordCommandAsync(const Model::RealTimeRecordCommandRequest& request, const RealTimeRecordCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RealTimeRecordCommandOutcomeCallable realTimeRecordCommandCallable(const Model::RealTimeRecordCommandRequest& request) const;
			RecoverLiveMessageDeletedGroupOutcome recoverLiveMessageDeletedGroup(const Model::RecoverLiveMessageDeletedGroupRequest &request)const;
			void recoverLiveMessageDeletedGroupAsync(const Model::RecoverLiveMessageDeletedGroupRequest& request, const RecoverLiveMessageDeletedGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverLiveMessageDeletedGroupOutcomeCallable recoverLiveMessageDeletedGroupCallable(const Model::RecoverLiveMessageDeletedGroupRequest& request) const;
			RemoveLiveMessageGroupBandOutcome removeLiveMessageGroupBand(const Model::RemoveLiveMessageGroupBandRequest &request)const;
			void removeLiveMessageGroupBandAsync(const Model::RemoveLiveMessageGroupBandRequest& request, const RemoveLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveLiveMessageGroupBandOutcomeCallable removeLiveMessageGroupBandCallable(const Model::RemoveLiveMessageGroupBandRequest& request) const;
			RemoveShowFromShowListOutcome removeShowFromShowList(const Model::RemoveShowFromShowListRequest &request)const;
			void removeShowFromShowListAsync(const Model::RemoveShowFromShowListRequest& request, const RemoveShowFromShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveShowFromShowListOutcomeCallable removeShowFromShowListCallable(const Model::RemoveShowFromShowListRequest& request) const;
			RemoveTerminalsOutcome removeTerminals(const Model::RemoveTerminalsRequest &request)const;
			void removeTerminalsAsync(const Model::RemoveTerminalsRequest& request, const RemoveTerminalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTerminalsOutcomeCallable removeTerminalsCallable(const Model::RemoveTerminalsRequest& request) const;
			RestartCasterOutcome restartCaster(const Model::RestartCasterRequest &request)const;
			void restartCasterAsync(const Model::RestartCasterRequest& request, const RestartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartCasterOutcomeCallable restartCasterCallable(const Model::RestartCasterRequest& request) const;
			RestartLivePullToPushOutcome restartLivePullToPush(const Model::RestartLivePullToPushRequest &request)const;
			void restartLivePullToPushAsync(const Model::RestartLivePullToPushRequest& request, const RestartLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartLivePullToPushOutcomeCallable restartLivePullToPushCallable(const Model::RestartLivePullToPushRequest& request) const;
			RestartTranscodeTaskOutcome restartTranscodeTask(const Model::RestartTranscodeTaskRequest &request)const;
			void restartTranscodeTaskAsync(const Model::RestartTranscodeTaskRequest& request, const RestartTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartTranscodeTaskOutcomeCallable restartTranscodeTaskCallable(const Model::RestartTranscodeTaskRequest& request) const;
			ResumeLiveStreamOutcome resumeLiveStream(const Model::ResumeLiveStreamRequest &request)const;
			void resumeLiveStreamAsync(const Model::ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeLiveStreamOutcomeCallable resumeLiveStreamCallable(const Model::ResumeLiveStreamRequest& request) const;
			RollbackLiveStagingConfigOutcome rollbackLiveStagingConfig(const Model::RollbackLiveStagingConfigRequest &request)const;
			void rollbackLiveStagingConfigAsync(const Model::RollbackLiveStagingConfigRequest& request, const RollbackLiveStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackLiveStagingConfigOutcomeCallable rollbackLiveStagingConfigCallable(const Model::RollbackLiveStagingConfigRequest& request) const;
			SendLikeOutcome sendLike(const Model::SendLikeRequest &request)const;
			void sendLikeAsync(const Model::SendLikeRequest& request, const SendLikeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLikeOutcomeCallable sendLikeCallable(const Model::SendLikeRequest& request) const;
			SendLiveMessageGroupOutcome sendLiveMessageGroup(const Model::SendLiveMessageGroupRequest &request)const;
			void sendLiveMessageGroupAsync(const Model::SendLiveMessageGroupRequest& request, const SendLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLiveMessageGroupOutcomeCallable sendLiveMessageGroupCallable(const Model::SendLiveMessageGroupRequest& request) const;
			SendLiveMessageUserOutcome sendLiveMessageUser(const Model::SendLiveMessageUserRequest &request)const;
			void sendLiveMessageUserAsync(const Model::SendLiveMessageUserRequest& request, const SendLiveMessageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLiveMessageUserOutcomeCallable sendLiveMessageUserCallable(const Model::SendLiveMessageUserRequest& request) const;
			SendMessageToGroupOutcome sendMessageToGroup(const Model::SendMessageToGroupRequest &request)const;
			void sendMessageToGroupAsync(const Model::SendMessageToGroupRequest& request, const SendMessageToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageToGroupOutcomeCallable sendMessageToGroupCallable(const Model::SendMessageToGroupRequest& request) const;
			SendMessageToGroupUsersOutcome sendMessageToGroupUsers(const Model::SendMessageToGroupUsersRequest &request)const;
			void sendMessageToGroupUsersAsync(const Model::SendMessageToGroupUsersRequest& request, const SendMessageToGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageToGroupUsersOutcomeCallable sendMessageToGroupUsersCallable(const Model::SendMessageToGroupUsersRequest& request) const;
			SetCasterChannelOutcome setCasterChannel(const Model::SetCasterChannelRequest &request)const;
			void setCasterChannelAsync(const Model::SetCasterChannelRequest& request, const SetCasterChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterChannelOutcomeCallable setCasterChannelCallable(const Model::SetCasterChannelRequest& request) const;
			SetCasterConfigOutcome setCasterConfig(const Model::SetCasterConfigRequest &request)const;
			void setCasterConfigAsync(const Model::SetCasterConfigRequest& request, const SetCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterConfigOutcomeCallable setCasterConfigCallable(const Model::SetCasterConfigRequest& request) const;
			SetCasterSceneConfigOutcome setCasterSceneConfig(const Model::SetCasterSceneConfigRequest &request)const;
			void setCasterSceneConfigAsync(const Model::SetCasterSceneConfigRequest& request, const SetCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterSceneConfigOutcomeCallable setCasterSceneConfigCallable(const Model::SetCasterSceneConfigRequest& request) const;
			SetLiveDomainCertificateOutcome setLiveDomainCertificate(const Model::SetLiveDomainCertificateRequest &request)const;
			void setLiveDomainCertificateAsync(const Model::SetLiveDomainCertificateRequest& request, const SetLiveDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainCertificateOutcomeCallable setLiveDomainCertificateCallable(const Model::SetLiveDomainCertificateRequest& request) const;
			SetLiveDomainMultiStreamConfigOutcome setLiveDomainMultiStreamConfig(const Model::SetLiveDomainMultiStreamConfigRequest &request)const;
			void setLiveDomainMultiStreamConfigAsync(const Model::SetLiveDomainMultiStreamConfigRequest& request, const SetLiveDomainMultiStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainMultiStreamConfigOutcomeCallable setLiveDomainMultiStreamConfigCallable(const Model::SetLiveDomainMultiStreamConfigRequest& request) const;
			SetLiveDomainMultiStreamMasterOutcome setLiveDomainMultiStreamMaster(const Model::SetLiveDomainMultiStreamMasterRequest &request)const;
			void setLiveDomainMultiStreamMasterAsync(const Model::SetLiveDomainMultiStreamMasterRequest& request, const SetLiveDomainMultiStreamMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainMultiStreamMasterOutcomeCallable setLiveDomainMultiStreamMasterCallable(const Model::SetLiveDomainMultiStreamMasterRequest& request) const;
			SetLiveDomainMultiStreamOptimalModeOutcome setLiveDomainMultiStreamOptimalMode(const Model::SetLiveDomainMultiStreamOptimalModeRequest &request)const;
			void setLiveDomainMultiStreamOptimalModeAsync(const Model::SetLiveDomainMultiStreamOptimalModeRequest& request, const SetLiveDomainMultiStreamOptimalModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainMultiStreamOptimalModeOutcomeCallable setLiveDomainMultiStreamOptimalModeCallable(const Model::SetLiveDomainMultiStreamOptimalModeRequest& request) const;
			SetLiveDomainStagingConfigOutcome setLiveDomainStagingConfig(const Model::SetLiveDomainStagingConfigRequest &request)const;
			void setLiveDomainStagingConfigAsync(const Model::SetLiveDomainStagingConfigRequest& request, const SetLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainStagingConfigOutcomeCallable setLiveDomainStagingConfigCallable(const Model::SetLiveDomainStagingConfigRequest& request) const;
			SetLiveEdgeTransferOutcome setLiveEdgeTransfer(const Model::SetLiveEdgeTransferRequest &request)const;
			void setLiveEdgeTransferAsync(const Model::SetLiveEdgeTransferRequest& request, const SetLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveEdgeTransferOutcomeCallable setLiveEdgeTransferCallable(const Model::SetLiveEdgeTransferRequest& request) const;
			SetLiveLazyPullStreamInfoConfigOutcome setLiveLazyPullStreamInfoConfig(const Model::SetLiveLazyPullStreamInfoConfigRequest &request)const;
			void setLiveLazyPullStreamInfoConfigAsync(const Model::SetLiveLazyPullStreamInfoConfigRequest& request, const SetLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveLazyPullStreamInfoConfigOutcomeCallable setLiveLazyPullStreamInfoConfigCallable(const Model::SetLiveLazyPullStreamInfoConfigRequest& request) const;
			SetLiveMpuTaskSeiOutcome setLiveMpuTaskSei(const Model::SetLiveMpuTaskSeiRequest &request)const;
			void setLiveMpuTaskSeiAsync(const Model::SetLiveMpuTaskSeiRequest& request, const SetLiveMpuTaskSeiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveMpuTaskSeiOutcomeCallable setLiveMpuTaskSeiCallable(const Model::SetLiveMpuTaskSeiRequest& request) const;
			SetLiveStreamBlockOutcome setLiveStreamBlock(const Model::SetLiveStreamBlockRequest &request)const;
			void setLiveStreamBlockAsync(const Model::SetLiveStreamBlockRequest& request, const SetLiveStreamBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamBlockOutcomeCallable setLiveStreamBlockCallable(const Model::SetLiveStreamBlockRequest& request) const;
			SetLiveStreamDelayConfigOutcome setLiveStreamDelayConfig(const Model::SetLiveStreamDelayConfigRequest &request)const;
			void setLiveStreamDelayConfigAsync(const Model::SetLiveStreamDelayConfigRequest& request, const SetLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamDelayConfigOutcomeCallable setLiveStreamDelayConfigCallable(const Model::SetLiveStreamDelayConfigRequest& request) const;
			SetLiveStreamPreloadTasksOutcome setLiveStreamPreloadTasks(const Model::SetLiveStreamPreloadTasksRequest &request)const;
			void setLiveStreamPreloadTasksAsync(const Model::SetLiveStreamPreloadTasksRequest& request, const SetLiveStreamPreloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamPreloadTasksOutcomeCallable setLiveStreamPreloadTasksCallable(const Model::SetLiveStreamPreloadTasksRequest& request) const;
			SetLiveStreamsNotifyUrlConfigOutcome setLiveStreamsNotifyUrlConfig(const Model::SetLiveStreamsNotifyUrlConfigRequest &request)const;
			void setLiveStreamsNotifyUrlConfigAsync(const Model::SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamsNotifyUrlConfigOutcomeCallable setLiveStreamsNotifyUrlConfigCallable(const Model::SetLiveStreamsNotifyUrlConfigRequest& request) const;
			SetShowListBackgroundOutcome setShowListBackground(const Model::SetShowListBackgroundRequest &request)const;
			void setShowListBackgroundAsync(const Model::SetShowListBackgroundRequest& request, const SetShowListBackgroundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetShowListBackgroundOutcomeCallable setShowListBackgroundCallable(const Model::SetShowListBackgroundRequest& request) const;
			SetSnapshotCallbackAuthOutcome setSnapshotCallbackAuth(const Model::SetSnapshotCallbackAuthRequest &request)const;
			void setSnapshotCallbackAuthAsync(const Model::SetSnapshotCallbackAuthRequest& request, const SetSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSnapshotCallbackAuthOutcomeCallable setSnapshotCallbackAuthCallable(const Model::SetSnapshotCallbackAuthRequest& request) const;
			StartCasterOutcome startCaster(const Model::StartCasterRequest &request)const;
			void startCasterAsync(const Model::StartCasterRequest& request, const StartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCasterOutcomeCallable startCasterCallable(const Model::StartCasterRequest& request) const;
			StartCasterSceneOutcome startCasterScene(const Model::StartCasterSceneRequest &request)const;
			void startCasterSceneAsync(const Model::StartCasterSceneRequest& request, const StartCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCasterSceneOutcomeCallable startCasterSceneCallable(const Model::StartCasterSceneRequest& request) const;
			StartEdgeTranscodeJobOutcome startEdgeTranscodeJob(const Model::StartEdgeTranscodeJobRequest &request)const;
			void startEdgeTranscodeJobAsync(const Model::StartEdgeTranscodeJobRequest& request, const StartEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEdgeTranscodeJobOutcomeCallable startEdgeTranscodeJobCallable(const Model::StartEdgeTranscodeJobRequest& request) const;
			StartLiveDomainOutcome startLiveDomain(const Model::StartLiveDomainRequest &request)const;
			void startLiveDomainAsync(const Model::StartLiveDomainRequest& request, const StartLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveDomainOutcomeCallable startLiveDomainCallable(const Model::StartLiveDomainRequest& request) const;
			StartLiveMPUTaskOutcome startLiveMPUTask(const Model::StartLiveMPUTaskRequest &request)const;
			void startLiveMPUTaskAsync(const Model::StartLiveMPUTaskRequest& request, const StartLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveMPUTaskOutcomeCallable startLiveMPUTaskCallable(const Model::StartLiveMPUTaskRequest& request) const;
			StartLiveStreamMonitorOutcome startLiveStreamMonitor(const Model::StartLiveStreamMonitorRequest &request)const;
			void startLiveStreamMonitorAsync(const Model::StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveStreamMonitorOutcomeCallable startLiveStreamMonitorCallable(const Model::StartLiveStreamMonitorRequest& request) const;
			StartPlaylistOutcome startPlaylist(const Model::StartPlaylistRequest &request)const;
			void startPlaylistAsync(const Model::StartPlaylistRequest& request, const StartPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPlaylistOutcomeCallable startPlaylistCallable(const Model::StartPlaylistRequest& request) const;
			StartRtcCloudRecordingOutcome startRtcCloudRecording(const Model::StartRtcCloudRecordingRequest &request)const;
			void startRtcCloudRecordingAsync(const Model::StartRtcCloudRecordingRequest& request, const StartRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRtcCloudRecordingOutcomeCallable startRtcCloudRecordingCallable(const Model::StartRtcCloudRecordingRequest& request) const;
			StopCasterOutcome stopCaster(const Model::StopCasterRequest &request)const;
			void stopCasterAsync(const Model::StopCasterRequest& request, const StopCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCasterOutcomeCallable stopCasterCallable(const Model::StopCasterRequest& request) const;
			StopCasterSceneOutcome stopCasterScene(const Model::StopCasterSceneRequest &request)const;
			void stopCasterSceneAsync(const Model::StopCasterSceneRequest& request, const StopCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCasterSceneOutcomeCallable stopCasterSceneCallable(const Model::StopCasterSceneRequest& request) const;
			StopEdgeTranscodeJobOutcome stopEdgeTranscodeJob(const Model::StopEdgeTranscodeJobRequest &request)const;
			void stopEdgeTranscodeJobAsync(const Model::StopEdgeTranscodeJobRequest& request, const StopEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEdgeTranscodeJobOutcomeCallable stopEdgeTranscodeJobCallable(const Model::StopEdgeTranscodeJobRequest& request) const;
			StopLiveDomainOutcome stopLiveDomain(const Model::StopLiveDomainRequest &request)const;
			void stopLiveDomainAsync(const Model::StopLiveDomainRequest& request, const StopLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveDomainOutcomeCallable stopLiveDomainCallable(const Model::StopLiveDomainRequest& request) const;
			StopLiveMPUTaskOutcome stopLiveMPUTask(const Model::StopLiveMPUTaskRequest &request)const;
			void stopLiveMPUTaskAsync(const Model::StopLiveMPUTaskRequest& request, const StopLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveMPUTaskOutcomeCallable stopLiveMPUTaskCallable(const Model::StopLiveMPUTaskRequest& request) const;
			StopLivePullToPushOutcome stopLivePullToPush(const Model::StopLivePullToPushRequest &request)const;
			void stopLivePullToPushAsync(const Model::StopLivePullToPushRequest& request, const StopLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLivePullToPushOutcomeCallable stopLivePullToPushCallable(const Model::StopLivePullToPushRequest& request) const;
			StopLiveStreamMonitorOutcome stopLiveStreamMonitor(const Model::StopLiveStreamMonitorRequest &request)const;
			void stopLiveStreamMonitorAsync(const Model::StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveStreamMonitorOutcomeCallable stopLiveStreamMonitorCallable(const Model::StopLiveStreamMonitorRequest& request) const;
			StopPlaylistOutcome stopPlaylist(const Model::StopPlaylistRequest &request)const;
			void stopPlaylistAsync(const Model::StopPlaylistRequest& request, const StopPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPlaylistOutcomeCallable stopPlaylistCallable(const Model::StopPlaylistRequest& request) const;
			StopRtcAsrTaskOutcome stopRtcAsrTask(const Model::StopRtcAsrTaskRequest &request)const;
			void stopRtcAsrTaskAsync(const Model::StopRtcAsrTaskRequest& request, const StopRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRtcAsrTaskOutcomeCallable stopRtcAsrTaskCallable(const Model::StopRtcAsrTaskRequest& request) const;
			StopRtcCloudRecordingOutcome stopRtcCloudRecording(const Model::StopRtcCloudRecordingRequest &request)const;
			void stopRtcCloudRecordingAsync(const Model::StopRtcCloudRecordingRequest& request, const StopRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRtcCloudRecordingOutcomeCallable stopRtcCloudRecordingCallable(const Model::StopRtcCloudRecordingRequest& request) const;
			TagLiveResourcesOutcome tagLiveResources(const Model::TagLiveResourcesRequest &request)const;
			void tagLiveResourcesAsync(const Model::TagLiveResourcesRequest& request, const TagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagLiveResourcesOutcomeCallable tagLiveResourcesCallable(const Model::TagLiveResourcesRequest& request) const;
			UnTagLiveResourcesOutcome unTagLiveResources(const Model::UnTagLiveResourcesRequest &request)const;
			void unTagLiveResourcesAsync(const Model::UnTagLiveResourcesRequest& request, const UnTagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagLiveResourcesOutcomeCallable unTagLiveResourcesCallable(const Model::UnTagLiveResourcesRequest& request) const;
			UnbanLiveMessageGroupOutcome unbanLiveMessageGroup(const Model::UnbanLiveMessageGroupRequest &request)const;
			void unbanLiveMessageGroupAsync(const Model::UnbanLiveMessageGroupRequest& request, const UnbanLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbanLiveMessageGroupOutcomeCallable unbanLiveMessageGroupCallable(const Model::UnbanLiveMessageGroupRequest& request) const;
			UpdateCasterResourceGroupOutcome updateCasterResourceGroup(const Model::UpdateCasterResourceGroupRequest &request)const;
			void updateCasterResourceGroupAsync(const Model::UpdateCasterResourceGroupRequest& request, const UpdateCasterResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCasterResourceGroupOutcomeCallable updateCasterResourceGroupCallable(const Model::UpdateCasterResourceGroupRequest& request) const;
			UpdateCasterSceneAudioOutcome updateCasterSceneAudio(const Model::UpdateCasterSceneAudioRequest &request)const;
			void updateCasterSceneAudioAsync(const Model::UpdateCasterSceneAudioRequest& request, const UpdateCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCasterSceneAudioOutcomeCallable updateCasterSceneAudioCallable(const Model::UpdateCasterSceneAudioRequest& request) const;
			UpdateCasterSceneConfigOutcome updateCasterSceneConfig(const Model::UpdateCasterSceneConfigRequest &request)const;
			void updateCasterSceneConfigAsync(const Model::UpdateCasterSceneConfigRequest& request, const UpdateCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCasterSceneConfigOutcomeCallable updateCasterSceneConfigCallable(const Model::UpdateCasterSceneConfigRequest& request) const;
			UpdateCustomLiveStreamTranscodeOutcome updateCustomLiveStreamTranscode(const Model::UpdateCustomLiveStreamTranscodeRequest &request)const;
			void updateCustomLiveStreamTranscodeAsync(const Model::UpdateCustomLiveStreamTranscodeRequest& request, const UpdateCustomLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomLiveStreamTranscodeOutcomeCallable updateCustomLiveStreamTranscodeCallable(const Model::UpdateCustomLiveStreamTranscodeRequest& request) const;
			UpdateEdgeTranscodeJobOutcome updateEdgeTranscodeJob(const Model::UpdateEdgeTranscodeJobRequest &request)const;
			void updateEdgeTranscodeJobAsync(const Model::UpdateEdgeTranscodeJobRequest& request, const UpdateEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEdgeTranscodeJobOutcomeCallable updateEdgeTranscodeJobCallable(const Model::UpdateEdgeTranscodeJobRequest& request) const;
			UpdateEventSubOutcome updateEventSub(const Model::UpdateEventSubRequest &request)const;
			void updateEventSubAsync(const Model::UpdateEventSubRequest& request, const UpdateEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEventSubOutcomeCallable updateEventSubCallable(const Model::UpdateEventSubRequest& request) const;
			UpdateLiveAIProduceRulesOutcome updateLiveAIProduceRules(const Model::UpdateLiveAIProduceRulesRequest &request)const;
			void updateLiveAIProduceRulesAsync(const Model::UpdateLiveAIProduceRulesRequest& request, const UpdateLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAIProduceRulesOutcomeCallable updateLiveAIProduceRulesCallable(const Model::UpdateLiveAIProduceRulesRequest& request) const;
			UpdateLiveAISubtitleOutcome updateLiveAISubtitle(const Model::UpdateLiveAISubtitleRequest &request)const;
			void updateLiveAISubtitleAsync(const Model::UpdateLiveAISubtitleRequest& request, const UpdateLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAISubtitleOutcomeCallable updateLiveAISubtitleCallable(const Model::UpdateLiveAISubtitleRequest& request) const;
			UpdateLiveAppRecordConfigOutcome updateLiveAppRecordConfig(const Model::UpdateLiveAppRecordConfigRequest &request)const;
			void updateLiveAppRecordConfigAsync(const Model::UpdateLiveAppRecordConfigRequest& request, const UpdateLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAppRecordConfigOutcomeCallable updateLiveAppRecordConfigCallable(const Model::UpdateLiveAppRecordConfigRequest& request) const;
			UpdateLiveAppSnapshotConfigOutcome updateLiveAppSnapshotConfig(const Model::UpdateLiveAppSnapshotConfigRequest &request)const;
			void updateLiveAppSnapshotConfigAsync(const Model::UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAppSnapshotConfigOutcomeCallable updateLiveAppSnapshotConfigCallable(const Model::UpdateLiveAppSnapshotConfigRequest& request) const;
			UpdateLiveAudioAuditConfigOutcome updateLiveAudioAuditConfig(const Model::UpdateLiveAudioAuditConfigRequest &request)const;
			void updateLiveAudioAuditConfigAsync(const Model::UpdateLiveAudioAuditConfigRequest& request, const UpdateLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAudioAuditConfigOutcomeCallable updateLiveAudioAuditConfigCallable(const Model::UpdateLiveAudioAuditConfigRequest& request) const;
			UpdateLiveAudioAuditNotifyConfigOutcome updateLiveAudioAuditNotifyConfig(const Model::UpdateLiveAudioAuditNotifyConfigRequest &request)const;
			void updateLiveAudioAuditNotifyConfigAsync(const Model::UpdateLiveAudioAuditNotifyConfigRequest& request, const UpdateLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAudioAuditNotifyConfigOutcomeCallable updateLiveAudioAuditNotifyConfigCallable(const Model::UpdateLiveAudioAuditNotifyConfigRequest& request) const;
			UpdateLiveCenterTransferOutcome updateLiveCenterTransfer(const Model::UpdateLiveCenterTransferRequest &request)const;
			void updateLiveCenterTransferAsync(const Model::UpdateLiveCenterTransferRequest& request, const UpdateLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveCenterTransferOutcomeCallable updateLiveCenterTransferCallable(const Model::UpdateLiveCenterTransferRequest& request) const;
			UpdateLiveDelayConfigOutcome updateLiveDelayConfig(const Model::UpdateLiveDelayConfigRequest &request)const;
			void updateLiveDelayConfigAsync(const Model::UpdateLiveDelayConfigRequest& request, const UpdateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveDelayConfigOutcomeCallable updateLiveDelayConfigCallable(const Model::UpdateLiveDelayConfigRequest& request) const;
			UpdateLiveDetectNotifyConfigOutcome updateLiveDetectNotifyConfig(const Model::UpdateLiveDetectNotifyConfigRequest &request)const;
			void updateLiveDetectNotifyConfigAsync(const Model::UpdateLiveDetectNotifyConfigRequest& request, const UpdateLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveDetectNotifyConfigOutcomeCallable updateLiveDetectNotifyConfigCallable(const Model::UpdateLiveDetectNotifyConfigRequest& request) const;
			UpdateLiveMPUTaskOutcome updateLiveMPUTask(const Model::UpdateLiveMPUTaskRequest &request)const;
			void updateLiveMPUTaskAsync(const Model::UpdateLiveMPUTaskRequest& request, const UpdateLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveMPUTaskOutcomeCallable updateLiveMPUTaskCallable(const Model::UpdateLiveMPUTaskRequest& request) const;
			UpdateLivePackageConfigOutcome updateLivePackageConfig(const Model::UpdateLivePackageConfigRequest &request)const;
			void updateLivePackageConfigAsync(const Model::UpdateLivePackageConfigRequest& request, const UpdateLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLivePackageConfigOutcomeCallable updateLivePackageConfigCallable(const Model::UpdateLivePackageConfigRequest& request) const;
			UpdateLivePullStreamInfoConfigOutcome updateLivePullStreamInfoConfig(const Model::UpdateLivePullStreamInfoConfigRequest &request)const;
			void updateLivePullStreamInfoConfigAsync(const Model::UpdateLivePullStreamInfoConfigRequest& request, const UpdateLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLivePullStreamInfoConfigOutcomeCallable updateLivePullStreamInfoConfigCallable(const Model::UpdateLivePullStreamInfoConfigRequest& request) const;
			UpdateLivePullToPushOutcome updateLivePullToPush(const Model::UpdateLivePullToPushRequest &request)const;
			void updateLivePullToPushAsync(const Model::UpdateLivePullToPushRequest& request, const UpdateLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLivePullToPushOutcomeCallable updateLivePullToPushCallable(const Model::UpdateLivePullToPushRequest& request) const;
			UpdateLiveRecordNotifyConfigOutcome updateLiveRecordNotifyConfig(const Model::UpdateLiveRecordNotifyConfigRequest &request)const;
			void updateLiveRecordNotifyConfigAsync(const Model::UpdateLiveRecordNotifyConfigRequest& request, const UpdateLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveRecordNotifyConfigOutcomeCallable updateLiveRecordNotifyConfigCallable(const Model::UpdateLiveRecordNotifyConfigRequest& request) const;
			UpdateLiveRecordVodConfigOutcome updateLiveRecordVodConfig(const Model::UpdateLiveRecordVodConfigRequest &request)const;
			void updateLiveRecordVodConfigAsync(const Model::UpdateLiveRecordVodConfigRequest& request, const UpdateLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveRecordVodConfigOutcomeCallable updateLiveRecordVodConfigCallable(const Model::UpdateLiveRecordVodConfigRequest& request) const;
			UpdateLiveSnapshotDetectPornConfigOutcome updateLiveSnapshotDetectPornConfig(const Model::UpdateLiveSnapshotDetectPornConfigRequest &request)const;
			void updateLiveSnapshotDetectPornConfigAsync(const Model::UpdateLiveSnapshotDetectPornConfigRequest& request, const UpdateLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveSnapshotDetectPornConfigOutcomeCallable updateLiveSnapshotDetectPornConfigCallable(const Model::UpdateLiveSnapshotDetectPornConfigRequest& request) const;
			UpdateLiveSnapshotNotifyConfigOutcome updateLiveSnapshotNotifyConfig(const Model::UpdateLiveSnapshotNotifyConfigRequest &request)const;
			void updateLiveSnapshotNotifyConfigAsync(const Model::UpdateLiveSnapshotNotifyConfigRequest& request, const UpdateLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveSnapshotNotifyConfigOutcomeCallable updateLiveSnapshotNotifyConfigCallable(const Model::UpdateLiveSnapshotNotifyConfigRequest& request) const;
			UpdateLiveStreamMonitorOutcome updateLiveStreamMonitor(const Model::UpdateLiveStreamMonitorRequest &request)const;
			void updateLiveStreamMonitorAsync(const Model::UpdateLiveStreamMonitorRequest& request, const UpdateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamMonitorOutcomeCallable updateLiveStreamMonitorCallable(const Model::UpdateLiveStreamMonitorRequest& request) const;
			UpdateLiveStreamTranscodeOutcome updateLiveStreamTranscode(const Model::UpdateLiveStreamTranscodeRequest &request)const;
			void updateLiveStreamTranscodeAsync(const Model::UpdateLiveStreamTranscodeRequest& request, const UpdateLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamTranscodeOutcomeCallable updateLiveStreamTranscodeCallable(const Model::UpdateLiveStreamTranscodeRequest& request) const;
			UpdateLiveStreamWatermarkOutcome updateLiveStreamWatermark(const Model::UpdateLiveStreamWatermarkRequest &request)const;
			void updateLiveStreamWatermarkAsync(const Model::UpdateLiveStreamWatermarkRequest& request, const UpdateLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamWatermarkOutcomeCallable updateLiveStreamWatermarkCallable(const Model::UpdateLiveStreamWatermarkRequest& request) const;
			UpdateLiveStreamWatermarkRuleOutcome updateLiveStreamWatermarkRule(const Model::UpdateLiveStreamWatermarkRuleRequest &request)const;
			void updateLiveStreamWatermarkRuleAsync(const Model::UpdateLiveStreamWatermarkRuleRequest& request, const UpdateLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamWatermarkRuleOutcomeCallable updateLiveStreamWatermarkRuleCallable(const Model::UpdateLiveStreamWatermarkRuleRequest& request) const;
			UpdateMessageAppOutcome updateMessageApp(const Model::UpdateMessageAppRequest &request)const;
			void updateMessageAppAsync(const Model::UpdateMessageAppRequest& request, const UpdateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMessageAppOutcomeCallable updateMessageAppCallable(const Model::UpdateMessageAppRequest& request) const;
			UpdateMessageGroupOutcome updateMessageGroup(const Model::UpdateMessageGroupRequest &request)const;
			void updateMessageGroupAsync(const Model::UpdateMessageGroupRequest& request, const UpdateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMessageGroupOutcomeCallable updateMessageGroupCallable(const Model::UpdateMessageGroupRequest& request) const;
			UpdateMixStreamOutcome updateMixStream(const Model::UpdateMixStreamRequest &request)const;
			void updateMixStreamAsync(const Model::UpdateMixStreamRequest& request, const UpdateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMixStreamOutcomeCallable updateMixStreamCallable(const Model::UpdateMixStreamRequest& request) const;
			UpdateRtcCloudRecordingOutcome updateRtcCloudRecording(const Model::UpdateRtcCloudRecordingRequest &request)const;
			void updateRtcCloudRecordingAsync(const Model::UpdateRtcCloudRecordingRequest& request, const UpdateRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRtcCloudRecordingOutcomeCallable updateRtcCloudRecordingCallable(const Model::UpdateRtcCloudRecordingRequest& request) const;
			UpdateRtcMPUEventSubOutcome updateRtcMPUEventSub(const Model::UpdateRtcMPUEventSubRequest &request)const;
			void updateRtcMPUEventSubAsync(const Model::UpdateRtcMPUEventSubRequest& request, const UpdateRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRtcMPUEventSubOutcomeCallable updateRtcMPUEventSubCallable(const Model::UpdateRtcMPUEventSubRequest& request) const;
			UpdateRtsLiveStreamTranscodeOutcome updateRtsLiveStreamTranscode(const Model::UpdateRtsLiveStreamTranscodeRequest &request)const;
			void updateRtsLiveStreamTranscodeAsync(const Model::UpdateRtsLiveStreamTranscodeRequest& request, const UpdateRtsLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRtsLiveStreamTranscodeOutcomeCallable updateRtsLiveStreamTranscodeCallable(const Model::UpdateRtsLiveStreamTranscodeRequest& request) const;
			VerifyLiveDomainOwnerOutcome verifyLiveDomainOwner(const Model::VerifyLiveDomainOwnerRequest &request)const;
			void verifyLiveDomainOwnerAsync(const Model::VerifyLiveDomainOwnerRequest& request, const VerifyLiveDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyLiveDomainOwnerOutcomeCallable verifyLiveDomainOwnerCallable(const Model::VerifyLiveDomainOwnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LIVE_LIVECLIENT_H_
