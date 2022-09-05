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
#include "model/AddCdnDomainRequest.h"
#include "model/AddCdnDomainResult.h"
#include "model/AddFCTriggerRequest.h"
#include "model/AddFCTriggerResult.h"
#include "model/BatchAddCdnDomainRequest.h"
#include "model/BatchAddCdnDomainResult.h"
#include "model/BatchDeleteCdnDomainConfigRequest.h"
#include "model/BatchDeleteCdnDomainConfigResult.h"
#include "model/BatchSetCdnDomainConfigRequest.h"
#include "model/BatchSetCdnDomainConfigResult.h"
#include "model/BatchSetCdnDomainServerCertificateRequest.h"
#include "model/BatchSetCdnDomainServerCertificateResult.h"
#include "model/BatchStartCdnDomainRequest.h"
#include "model/BatchStartCdnDomainResult.h"
#include "model/BatchStopCdnDomainRequest.h"
#include "model/BatchStopCdnDomainResult.h"
#include "model/BatchUpdateCdnDomainRequest.h"
#include "model/BatchUpdateCdnDomainResult.h"
#include "model/CreateCdnCertificateSigningRequestRequest.h"
#include "model/CreateCdnCertificateSigningRequestResult.h"
#include "model/CreateCdnDeliverTaskRequest.h"
#include "model/CreateCdnDeliverTaskResult.h"
#include "model/CreateCdnSubTaskRequest.h"
#include "model/CreateCdnSubTaskResult.h"
#include "model/CreateIllegalUrlExportTaskRequest.h"
#include "model/CreateIllegalUrlExportTaskResult.h"
#include "model/CreateRealTimeLogDeliveryRequest.h"
#include "model/CreateRealTimeLogDeliveryResult.h"
#include "model/CreateUsageDetailDataExportTaskRequest.h"
#include "model/CreateUsageDetailDataExportTaskResult.h"
#include "model/CreateUserUsageDataExportTaskRequest.h"
#include "model/CreateUserUsageDataExportTaskResult.h"
#include "model/DeleteCdnDeliverTaskRequest.h"
#include "model/DeleteCdnDeliverTaskResult.h"
#include "model/DeleteCdnDomainRequest.h"
#include "model/DeleteCdnDomainResult.h"
#include "model/DeleteCdnSubTaskRequest.h"
#include "model/DeleteCdnSubTaskResult.h"
#include "model/DeleteFCTriggerRequest.h"
#include "model/DeleteFCTriggerResult.h"
#include "model/DeleteRealTimeLogLogstoreRequest.h"
#include "model/DeleteRealTimeLogLogstoreResult.h"
#include "model/DeleteRealtimeLogDeliveryRequest.h"
#include "model/DeleteRealtimeLogDeliveryResult.h"
#include "model/DeleteSpecificConfigRequest.h"
#include "model/DeleteSpecificConfigResult.h"
#include "model/DeleteSpecificStagingConfigRequest.h"
#include "model/DeleteSpecificStagingConfigResult.h"
#include "model/DeleteUsageDetailDataExportTaskRequest.h"
#include "model/DeleteUsageDetailDataExportTaskResult.h"
#include "model/DeleteUserUsageDataExportTaskRequest.h"
#include "model/DeleteUserUsageDataExportTaskResult.h"
#include "model/DescribeActiveVersionOfConfigGroupRequest.h"
#include "model/DescribeActiveVersionOfConfigGroupResult.h"
#include "model/DescribeBlockedRegionsRequest.h"
#include "model/DescribeBlockedRegionsResult.h"
#include "model/DescribeCdnCertificateDetailRequest.h"
#include "model/DescribeCdnCertificateDetailResult.h"
#include "model/DescribeCdnCertificateListRequest.h"
#include "model/DescribeCdnCertificateListResult.h"
#include "model/DescribeCdnDeletedDomainsRequest.h"
#include "model/DescribeCdnDeletedDomainsResult.h"
#include "model/DescribeCdnDeliverListRequest.h"
#include "model/DescribeCdnDeliverListResult.h"
#include "model/DescribeCdnDomainByCertificateRequest.h"
#include "model/DescribeCdnDomainByCertificateResult.h"
#include "model/DescribeCdnDomainConfigsRequest.h"
#include "model/DescribeCdnDomainConfigsResult.h"
#include "model/DescribeCdnDomainDetailRequest.h"
#include "model/DescribeCdnDomainDetailResult.h"
#include "model/DescribeCdnDomainLogsRequest.h"
#include "model/DescribeCdnDomainLogsResult.h"
#include "model/DescribeCdnDomainStagingConfigRequest.h"
#include "model/DescribeCdnDomainStagingConfigResult.h"
#include "model/DescribeCdnHttpsDomainListRequest.h"
#include "model/DescribeCdnHttpsDomainListResult.h"
#include "model/DescribeCdnOrderCommodityCodeRequest.h"
#include "model/DescribeCdnOrderCommodityCodeResult.h"
#include "model/DescribeCdnRegionAndIspRequest.h"
#include "model/DescribeCdnRegionAndIspResult.h"
#include "model/DescribeCdnReportRequest.h"
#include "model/DescribeCdnReportResult.h"
#include "model/DescribeCdnReportListRequest.h"
#include "model/DescribeCdnReportListResult.h"
#include "model/DescribeCdnSMCertificateDetailRequest.h"
#include "model/DescribeCdnSMCertificateDetailResult.h"
#include "model/DescribeCdnSMCertificateListRequest.h"
#include "model/DescribeCdnSMCertificateListResult.h"
#include "model/DescribeCdnServiceRequest.h"
#include "model/DescribeCdnServiceResult.h"
#include "model/DescribeCdnSubListRequest.h"
#include "model/DescribeCdnSubListResult.h"
#include "model/DescribeCdnUserBillHistoryRequest.h"
#include "model/DescribeCdnUserBillHistoryResult.h"
#include "model/DescribeCdnUserBillPredictionRequest.h"
#include "model/DescribeCdnUserBillPredictionResult.h"
#include "model/DescribeCdnUserBillTypeRequest.h"
#include "model/DescribeCdnUserBillTypeResult.h"
#include "model/DescribeCdnUserConfigsRequest.h"
#include "model/DescribeCdnUserConfigsResult.h"
#include "model/DescribeCdnUserDomainsByFuncRequest.h"
#include "model/DescribeCdnUserDomainsByFuncResult.h"
#include "model/DescribeCdnUserQuotaRequest.h"
#include "model/DescribeCdnUserQuotaResult.h"
#include "model/DescribeCdnUserResourcePackageRequest.h"
#include "model/DescribeCdnUserResourcePackageResult.h"
#include "model/DescribeCdnWafDomainRequest.h"
#include "model/DescribeCdnWafDomainResult.h"
#include "model/DescribeCertificateInfoByIDRequest.h"
#include "model/DescribeCertificateInfoByIDResult.h"
#include "model/DescribeConfigGroupDetailRequest.h"
#include "model/DescribeConfigGroupDetailResult.h"
#include "model/DescribeConfigOfVersionRequest.h"
#include "model/DescribeConfigOfVersionResult.h"
#include "model/DescribeCustomLogConfigRequest.h"
#include "model/DescribeCustomLogConfigResult.h"
#include "model/DescribeDomainAverageResponseTimeRequest.h"
#include "model/DescribeDomainAverageResponseTimeResult.h"
#include "model/DescribeDomainBpsDataRequest.h"
#include "model/DescribeDomainBpsDataResult.h"
#include "model/DescribeDomainBpsDataByLayerRequest.h"
#include "model/DescribeDomainBpsDataByLayerResult.h"
#include "model/DescribeDomainBpsDataByTimeStampRequest.h"
#include "model/DescribeDomainBpsDataByTimeStampResult.h"
#include "model/DescribeDomainCcActivityLogRequest.h"
#include "model/DescribeDomainCcActivityLogResult.h"
#include "model/DescribeDomainCertificateInfoRequest.h"
#include "model/DescribeDomainCertificateInfoResult.h"
#include "model/DescribeDomainCustomLogConfigRequest.h"
#include "model/DescribeDomainCustomLogConfigResult.h"
#include "model/DescribeDomainDetailDataByLayerRequest.h"
#include "model/DescribeDomainDetailDataByLayerResult.h"
#include "model/DescribeDomainFileSizeProportionDataRequest.h"
#include "model/DescribeDomainFileSizeProportionDataResult.h"
#include "model/DescribeDomainFlowDataRequest.h"
#include "model/DescribeDomainFlowDataResult.h"
#include "model/DescribeDomainHitRateDataRequest.h"
#include "model/DescribeDomainHitRateDataResult.h"
#include "model/DescribeDomainHttpCodeDataRequest.h"
#include "model/DescribeDomainHttpCodeDataResult.h"
#include "model/DescribeDomainHttpCodeDataByLayerRequest.h"
#include "model/DescribeDomainHttpCodeDataByLayerResult.h"
#include "model/DescribeDomainISPDataRequest.h"
#include "model/DescribeDomainISPDataResult.h"
#include "model/DescribeDomainMax95BpsDataRequest.h"
#include "model/DescribeDomainMax95BpsDataResult.h"
#include "model/DescribeDomainMultiUsageDataRequest.h"
#include "model/DescribeDomainMultiUsageDataResult.h"
#include "model/DescribeDomainNamesOfVersionRequest.h"
#include "model/DescribeDomainNamesOfVersionResult.h"
#include "model/DescribeDomainPathDataRequest.h"
#include "model/DescribeDomainPathDataResult.h"
#include "model/DescribeDomainPvDataRequest.h"
#include "model/DescribeDomainPvDataResult.h"
#include "model/DescribeDomainQpsDataRequest.h"
#include "model/DescribeDomainQpsDataResult.h"
#include "model/DescribeDomainQpsDataByLayerRequest.h"
#include "model/DescribeDomainQpsDataByLayerResult.h"
#include "model/DescribeDomainRealTimeBpsDataRequest.h"
#include "model/DescribeDomainRealTimeBpsDataResult.h"
#include "model/DescribeDomainRealTimeByteHitRateDataRequest.h"
#include "model/DescribeDomainRealTimeByteHitRateDataResult.h"
#include "model/DescribeDomainRealTimeDetailDataRequest.h"
#include "model/DescribeDomainRealTimeDetailDataResult.h"
#include "model/DescribeDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeDomainRealTimeQpsDataRequest.h"
#include "model/DescribeDomainRealTimeQpsDataResult.h"
#include "model/DescribeDomainRealTimeReqHitRateDataRequest.h"
#include "model/DescribeDomainRealTimeReqHitRateDataResult.h"
#include "model/DescribeDomainRealTimeSrcBpsDataRequest.h"
#include "model/DescribeDomainRealTimeSrcBpsDataResult.h"
#include "model/DescribeDomainRealTimeSrcHttpCodeDataRequest.h"
#include "model/DescribeDomainRealTimeSrcHttpCodeDataResult.h"
#include "model/DescribeDomainRealTimeSrcTrafficDataRequest.h"
#include "model/DescribeDomainRealTimeSrcTrafficDataResult.h"
#include "model/DescribeDomainRealTimeTrafficDataRequest.h"
#include "model/DescribeDomainRealTimeTrafficDataResult.h"
#include "model/DescribeDomainRealtimeLogDeliveryRequest.h"
#include "model/DescribeDomainRealtimeLogDeliveryResult.h"
#include "model/DescribeDomainRegionDataRequest.h"
#include "model/DescribeDomainRegionDataResult.h"
#include "model/DescribeDomainReqHitRateDataRequest.h"
#include "model/DescribeDomainReqHitRateDataResult.h"
#include "model/DescribeDomainSrcBpsDataRequest.h"
#include "model/DescribeDomainSrcBpsDataResult.h"
#include "model/DescribeDomainSrcFlowDataRequest.h"
#include "model/DescribeDomainSrcFlowDataResult.h"
#include "model/DescribeDomainSrcHttpCodeDataRequest.h"
#include "model/DescribeDomainSrcHttpCodeDataResult.h"
#include "model/DescribeDomainSrcQpsDataRequest.h"
#include "model/DescribeDomainSrcQpsDataResult.h"
#include "model/DescribeDomainSrcTopUrlVisitRequest.h"
#include "model/DescribeDomainSrcTopUrlVisitResult.h"
#include "model/DescribeDomainSrcTrafficDataRequest.h"
#include "model/DescribeDomainSrcTrafficDataResult.h"
#include "model/DescribeDomainTopClientIpVisitRequest.h"
#include "model/DescribeDomainTopClientIpVisitResult.h"
#include "model/DescribeDomainTopReferVisitRequest.h"
#include "model/DescribeDomainTopReferVisitResult.h"
#include "model/DescribeDomainTopUrlVisitRequest.h"
#include "model/DescribeDomainTopUrlVisitResult.h"
#include "model/DescribeDomainTrafficDataRequest.h"
#include "model/DescribeDomainTrafficDataResult.h"
#include "model/DescribeDomainUsageDataRequest.h"
#include "model/DescribeDomainUsageDataResult.h"
#include "model/DescribeDomainUvDataRequest.h"
#include "model/DescribeDomainUvDataResult.h"
#include "model/DescribeDomainsBySourceRequest.h"
#include "model/DescribeDomainsBySourceResult.h"
#include "model/DescribeDomainsUsageByDayRequest.h"
#include "model/DescribeDomainsUsageByDayResult.h"
#include "model/DescribeEsExceptionDataRequest.h"
#include "model/DescribeEsExceptionDataResult.h"
#include "model/DescribeEsExecuteDataRequest.h"
#include "model/DescribeEsExecuteDataResult.h"
#include "model/DescribeFCTriggerRequest.h"
#include "model/DescribeFCTriggerResult.h"
#include "model/DescribeIllegalUrlExportTaskRequest.h"
#include "model/DescribeIllegalUrlExportTaskResult.h"
#include "model/DescribeIpInfoRequest.h"
#include "model/DescribeIpInfoResult.h"
#include "model/DescribeIpStatusRequest.h"
#include "model/DescribeIpStatusResult.h"
#include "model/DescribeL2VipsByDomainRequest.h"
#include "model/DescribeL2VipsByDomainResult.h"
#include "model/DescribeRangeDataByLocateAndIspServiceRequest.h"
#include "model/DescribeRangeDataByLocateAndIspServiceResult.h"
#include "model/DescribeRealtimeDeliveryAccRequest.h"
#include "model/DescribeRealtimeDeliveryAccResult.h"
#include "model/DescribeRealtimeLogAuthorizedRequest.h"
#include "model/DescribeRealtimeLogAuthorizedResult.h"
#include "model/DescribeRefreshQuotaRequest.h"
#include "model/DescribeRefreshQuotaResult.h"
#include "model/DescribeRefreshTaskByIdRequest.h"
#include "model/DescribeRefreshTaskByIdResult.h"
#include "model/DescribeRefreshTasksRequest.h"
#include "model/DescribeRefreshTasksResult.h"
#include "model/DescribeStagingIpRequest.h"
#include "model/DescribeStagingIpResult.h"
#include "model/DescribeTagResourcesRequest.h"
#include "model/DescribeTagResourcesResult.h"
#include "model/DescribeTopDomainsByFlowRequest.h"
#include "model/DescribeTopDomainsByFlowResult.h"
#include "model/DescribeUserCertificateExpireCountRequest.h"
#include "model/DescribeUserCertificateExpireCountResult.h"
#include "model/DescribeUserConfigsRequest.h"
#include "model/DescribeUserConfigsResult.h"
#include "model/DescribeUserDomainsRequest.h"
#include "model/DescribeUserDomainsResult.h"
#include "model/DescribeUserTagsRequest.h"
#include "model/DescribeUserTagsResult.h"
#include "model/DescribeUserUsageDataExportTaskRequest.h"
#include "model/DescribeUserUsageDataExportTaskResult.h"
#include "model/DescribeUserUsageDetailDataExportTaskRequest.h"
#include "model/DescribeUserUsageDetailDataExportTaskResult.h"
#include "model/DescribeUserVipsByDomainRequest.h"
#include "model/DescribeUserVipsByDomainResult.h"
#include "model/DescribeVerifyContentRequest.h"
#include "model/DescribeVerifyContentResult.h"
#include "model/DisableRealtimeLogDeliveryRequest.h"
#include "model/DisableRealtimeLogDeliveryResult.h"
#include "model/EnableRealtimeLogDeliveryRequest.h"
#include "model/EnableRealtimeLogDeliveryResult.h"
#include "model/ListDomainsByLogConfigIdRequest.h"
#include "model/ListDomainsByLogConfigIdResult.h"
#include "model/ListFCTriggerRequest.h"
#include "model/ListFCTriggerResult.h"
#include "model/ListRealtimeLogDeliveryDomainsRequest.h"
#include "model/ListRealtimeLogDeliveryDomainsResult.h"
#include "model/ListRealtimeLogDeliveryInfosRequest.h"
#include "model/ListRealtimeLogDeliveryInfosResult.h"
#include "model/ListUserCustomLogConfigRequest.h"
#include "model/ListUserCustomLogConfigResult.h"
#include "model/ModifyCdnDomainRequest.h"
#include "model/ModifyCdnDomainResult.h"
#include "model/ModifyCdnDomainSchdmByPropertyRequest.h"
#include "model/ModifyCdnDomainSchdmByPropertyResult.h"
#include "model/ModifyRealtimeLogDeliveryRequest.h"
#include "model/ModifyRealtimeLogDeliveryResult.h"
#include "model/OpenCdnServiceRequest.h"
#include "model/OpenCdnServiceResult.h"
#include "model/PublishStagingConfigToProductionRequest.h"
#include "model/PublishStagingConfigToProductionResult.h"
#include "model/PushObjectCacheRequest.h"
#include "model/PushObjectCacheResult.h"
#include "model/RefreshObjectCachesRequest.h"
#include "model/RefreshObjectCachesResult.h"
#include "model/RollbackStagingConfigRequest.h"
#include "model/RollbackStagingConfigResult.h"
#include "model/SetCdnDomainCSRCertificateRequest.h"
#include "model/SetCdnDomainCSRCertificateResult.h"
#include "model/SetCdnDomainSMCertificateRequest.h"
#include "model/SetCdnDomainSMCertificateResult.h"
#include "model/SetCdnDomainStagingConfigRequest.h"
#include "model/SetCdnDomainStagingConfigResult.h"
#include "model/SetConfigOfVersionRequest.h"
#include "model/SetConfigOfVersionResult.h"
#include "model/SetDomainServerCertificateRequest.h"
#include "model/SetDomainServerCertificateResult.h"
#include "model/SetReqHeaderConfigRequest.h"
#include "model/SetReqHeaderConfigResult.h"
#include "model/SetWaitingRoomConfigRequest.h"
#include "model/SetWaitingRoomConfigResult.h"
#include "model/StartCdnDomainRequest.h"
#include "model/StartCdnDomainResult.h"
#include "model/StopCdnDomainRequest.h"
#include "model/StopCdnDomainResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TestDescribeDomainBpsDataRequest.h"
#include "model/TestDescribeDomainBpsDataResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateCdnDeliverTaskRequest.h"
#include "model/UpdateCdnDeliverTaskResult.h"
#include "model/UpdateCdnSubTaskRequest.h"
#include "model/UpdateCdnSubTaskResult.h"
#include "model/UpdateFCTriggerRequest.h"
#include "model/UpdateFCTriggerResult.h"
#include "model/VerifyDomainOwnerRequest.h"
#include "model/VerifyDomainOwnerResult.h"


namespace AlibabaCloud
{
	namespace Cdn
	{
		class ALIBABACLOUD_CDN_EXPORT CdnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCdnDomainResult> AddCdnDomainOutcome;
			typedef std::future<AddCdnDomainOutcome> AddCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::AddCdnDomainRequest&, const AddCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::AddFCTriggerResult> AddFCTriggerOutcome;
			typedef std::future<AddFCTriggerOutcome> AddFCTriggerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::AddFCTriggerRequest&, const AddFCTriggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFCTriggerAsyncHandler;
			typedef Outcome<Error, Model::BatchAddCdnDomainResult> BatchAddCdnDomainOutcome;
			typedef std::future<BatchAddCdnDomainOutcome> BatchAddCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchAddCdnDomainRequest&, const BatchAddCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteCdnDomainConfigResult> BatchDeleteCdnDomainConfigOutcome;
			typedef std::future<BatchDeleteCdnDomainConfigOutcome> BatchDeleteCdnDomainConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchDeleteCdnDomainConfigRequest&, const BatchDeleteCdnDomainConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteCdnDomainConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchSetCdnDomainConfigResult> BatchSetCdnDomainConfigOutcome;
			typedef std::future<BatchSetCdnDomainConfigOutcome> BatchSetCdnDomainConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchSetCdnDomainConfigRequest&, const BatchSetCdnDomainConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetCdnDomainConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchSetCdnDomainServerCertificateResult> BatchSetCdnDomainServerCertificateOutcome;
			typedef std::future<BatchSetCdnDomainServerCertificateOutcome> BatchSetCdnDomainServerCertificateOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchSetCdnDomainServerCertificateRequest&, const BatchSetCdnDomainServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetCdnDomainServerCertificateAsyncHandler;
			typedef Outcome<Error, Model::BatchStartCdnDomainResult> BatchStartCdnDomainOutcome;
			typedef std::future<BatchStartCdnDomainOutcome> BatchStartCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchStartCdnDomainRequest&, const BatchStartCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchStopCdnDomainResult> BatchStopCdnDomainOutcome;
			typedef std::future<BatchStopCdnDomainOutcome> BatchStopCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchStopCdnDomainRequest&, const BatchStopCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdateCdnDomainResult> BatchUpdateCdnDomainOutcome;
			typedef std::future<BatchUpdateCdnDomainOutcome> BatchUpdateCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::BatchUpdateCdnDomainRequest&, const BatchUpdateCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateCdnCertificateSigningRequestResult> CreateCdnCertificateSigningRequestOutcome;
			typedef std::future<CreateCdnCertificateSigningRequestOutcome> CreateCdnCertificateSigningRequestOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateCdnCertificateSigningRequestRequest&, const CreateCdnCertificateSigningRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdnCertificateSigningRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateCdnDeliverTaskResult> CreateCdnDeliverTaskOutcome;
			typedef std::future<CreateCdnDeliverTaskOutcome> CreateCdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateCdnDeliverTaskRequest&, const CreateCdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCdnSubTaskResult> CreateCdnSubTaskOutcome;
			typedef std::future<CreateCdnSubTaskOutcome> CreateCdnSubTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateCdnSubTaskRequest&, const CreateCdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateIllegalUrlExportTaskResult> CreateIllegalUrlExportTaskOutcome;
			typedef std::future<CreateIllegalUrlExportTaskOutcome> CreateIllegalUrlExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateIllegalUrlExportTaskRequest&, const CreateIllegalUrlExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIllegalUrlExportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateRealTimeLogDeliveryResult> CreateRealTimeLogDeliveryOutcome;
			typedef std::future<CreateRealTimeLogDeliveryOutcome> CreateRealTimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateRealTimeLogDeliveryRequest&, const CreateRealTimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRealTimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::CreateUsageDetailDataExportTaskResult> CreateUsageDetailDataExportTaskOutcome;
			typedef std::future<CreateUsageDetailDataExportTaskOutcome> CreateUsageDetailDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateUsageDetailDataExportTaskRequest&, const CreateUsageDetailDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsageDetailDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateUserUsageDataExportTaskResult> CreateUserUsageDataExportTaskOutcome;
			typedef std::future<CreateUserUsageDataExportTaskOutcome> CreateUserUsageDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::CreateUserUsageDataExportTaskRequest&, const CreateUserUsageDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserUsageDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnDeliverTaskResult> DeleteCdnDeliverTaskOutcome;
			typedef std::future<DeleteCdnDeliverTaskOutcome> DeleteCdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteCdnDeliverTaskRequest&, const DeleteCdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnDomainResult> DeleteCdnDomainOutcome;
			typedef std::future<DeleteCdnDomainOutcome> DeleteCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteCdnDomainRequest&, const DeleteCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnSubTaskResult> DeleteCdnSubTaskOutcome;
			typedef std::future<DeleteCdnSubTaskOutcome> DeleteCdnSubTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteCdnSubTaskRequest&, const DeleteCdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteFCTriggerResult> DeleteFCTriggerOutcome;
			typedef std::future<DeleteFCTriggerOutcome> DeleteFCTriggerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteFCTriggerRequest&, const DeleteFCTriggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFCTriggerAsyncHandler;
			typedef Outcome<Error, Model::DeleteRealTimeLogLogstoreResult> DeleteRealTimeLogLogstoreOutcome;
			typedef std::future<DeleteRealTimeLogLogstoreOutcome> DeleteRealTimeLogLogstoreOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteRealTimeLogLogstoreRequest&, const DeleteRealTimeLogLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRealTimeLogLogstoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteRealtimeLogDeliveryResult> DeleteRealtimeLogDeliveryOutcome;
			typedef std::future<DeleteRealtimeLogDeliveryOutcome> DeleteRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteRealtimeLogDeliveryRequest&, const DeleteRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteSpecificConfigResult> DeleteSpecificConfigOutcome;
			typedef std::future<DeleteSpecificConfigOutcome> DeleteSpecificConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteSpecificConfigRequest&, const DeleteSpecificConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpecificConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteSpecificStagingConfigResult> DeleteSpecificStagingConfigOutcome;
			typedef std::future<DeleteSpecificStagingConfigOutcome> DeleteSpecificStagingConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteSpecificStagingConfigRequest&, const DeleteSpecificStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpecificStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteUsageDetailDataExportTaskResult> DeleteUsageDetailDataExportTaskOutcome;
			typedef std::future<DeleteUsageDetailDataExportTaskOutcome> DeleteUsageDetailDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteUsageDetailDataExportTaskRequest&, const DeleteUsageDetailDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsageDetailDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserUsageDataExportTaskResult> DeleteUserUsageDataExportTaskOutcome;
			typedef std::future<DeleteUserUsageDataExportTaskOutcome> DeleteUserUsageDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DeleteUserUsageDataExportTaskRequest&, const DeleteUserUsageDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserUsageDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveVersionOfConfigGroupResult> DescribeActiveVersionOfConfigGroupOutcome;
			typedef std::future<DescribeActiveVersionOfConfigGroupOutcome> DescribeActiveVersionOfConfigGroupOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeActiveVersionOfConfigGroupRequest&, const DescribeActiveVersionOfConfigGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveVersionOfConfigGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeBlockedRegionsResult> DescribeBlockedRegionsOutcome;
			typedef std::future<DescribeBlockedRegionsOutcome> DescribeBlockedRegionsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeBlockedRegionsRequest&, const DescribeBlockedRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockedRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnCertificateDetailResult> DescribeCdnCertificateDetailOutcome;
			typedef std::future<DescribeCdnCertificateDetailOutcome> DescribeCdnCertificateDetailOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnCertificateDetailRequest&, const DescribeCdnCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnCertificateListResult> DescribeCdnCertificateListOutcome;
			typedef std::future<DescribeCdnCertificateListOutcome> DescribeCdnCertificateListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnCertificateListRequest&, const DescribeCdnCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDeletedDomainsResult> DescribeCdnDeletedDomainsOutcome;
			typedef std::future<DescribeCdnDeletedDomainsOutcome> DescribeCdnDeletedDomainsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDeletedDomainsRequest&, const DescribeCdnDeletedDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDeletedDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDeliverListResult> DescribeCdnDeliverListOutcome;
			typedef std::future<DescribeCdnDeliverListOutcome> DescribeCdnDeliverListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDeliverListRequest&, const DescribeCdnDeliverListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDeliverListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainByCertificateResult> DescribeCdnDomainByCertificateOutcome;
			typedef std::future<DescribeCdnDomainByCertificateOutcome> DescribeCdnDomainByCertificateOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainByCertificateRequest&, const DescribeCdnDomainByCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainByCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainConfigsResult> DescribeCdnDomainConfigsOutcome;
			typedef std::future<DescribeCdnDomainConfigsOutcome> DescribeCdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainConfigsRequest&, const DescribeCdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainDetailResult> DescribeCdnDomainDetailOutcome;
			typedef std::future<DescribeCdnDomainDetailOutcome> DescribeCdnDomainDetailOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainDetailRequest&, const DescribeCdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainLogsResult> DescribeCdnDomainLogsOutcome;
			typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, const DescribeCdnDomainLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainStagingConfigResult> DescribeCdnDomainStagingConfigOutcome;
			typedef std::future<DescribeCdnDomainStagingConfigOutcome> DescribeCdnDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainStagingConfigRequest&, const DescribeCdnDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnHttpsDomainListResult> DescribeCdnHttpsDomainListOutcome;
			typedef std::future<DescribeCdnHttpsDomainListOutcome> DescribeCdnHttpsDomainListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnHttpsDomainListRequest&, const DescribeCdnHttpsDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnHttpsDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnOrderCommodityCodeResult> DescribeCdnOrderCommodityCodeOutcome;
			typedef std::future<DescribeCdnOrderCommodityCodeOutcome> DescribeCdnOrderCommodityCodeOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnOrderCommodityCodeRequest&, const DescribeCdnOrderCommodityCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnOrderCommodityCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnRegionAndIspResult> DescribeCdnRegionAndIspOutcome;
			typedef std::future<DescribeCdnRegionAndIspOutcome> DescribeCdnRegionAndIspOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnRegionAndIspRequest&, const DescribeCdnRegionAndIspOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnRegionAndIspAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnReportResult> DescribeCdnReportOutcome;
			typedef std::future<DescribeCdnReportOutcome> DescribeCdnReportOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnReportRequest&, const DescribeCdnReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnReportListResult> DescribeCdnReportListOutcome;
			typedef std::future<DescribeCdnReportListOutcome> DescribeCdnReportListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnReportListRequest&, const DescribeCdnReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnSMCertificateDetailResult> DescribeCdnSMCertificateDetailOutcome;
			typedef std::future<DescribeCdnSMCertificateDetailOutcome> DescribeCdnSMCertificateDetailOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnSMCertificateDetailRequest&, const DescribeCdnSMCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnSMCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnSMCertificateListResult> DescribeCdnSMCertificateListOutcome;
			typedef std::future<DescribeCdnSMCertificateListOutcome> DescribeCdnSMCertificateListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnSMCertificateListRequest&, const DescribeCdnSMCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnSMCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnServiceResult> DescribeCdnServiceOutcome;
			typedef std::future<DescribeCdnServiceOutcome> DescribeCdnServiceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnServiceRequest&, const DescribeCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnSubListResult> DescribeCdnSubListOutcome;
			typedef std::future<DescribeCdnSubListOutcome> DescribeCdnSubListOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnSubListRequest&, const DescribeCdnSubListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnSubListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserBillHistoryResult> DescribeCdnUserBillHistoryOutcome;
			typedef std::future<DescribeCdnUserBillHistoryOutcome> DescribeCdnUserBillHistoryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserBillHistoryRequest&, const DescribeCdnUserBillHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserBillHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserBillPredictionResult> DescribeCdnUserBillPredictionOutcome;
			typedef std::future<DescribeCdnUserBillPredictionOutcome> DescribeCdnUserBillPredictionOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserBillPredictionRequest&, const DescribeCdnUserBillPredictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserBillPredictionAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserBillTypeResult> DescribeCdnUserBillTypeOutcome;
			typedef std::future<DescribeCdnUserBillTypeOutcome> DescribeCdnUserBillTypeOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserBillTypeRequest&, const DescribeCdnUserBillTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserBillTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserConfigsResult> DescribeCdnUserConfigsOutcome;
			typedef std::future<DescribeCdnUserConfigsOutcome> DescribeCdnUserConfigsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserConfigsRequest&, const DescribeCdnUserConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserDomainsByFuncResult> DescribeCdnUserDomainsByFuncOutcome;
			typedef std::future<DescribeCdnUserDomainsByFuncOutcome> DescribeCdnUserDomainsByFuncOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserDomainsByFuncRequest&, const DescribeCdnUserDomainsByFuncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserDomainsByFuncAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserQuotaResult> DescribeCdnUserQuotaOutcome;
			typedef std::future<DescribeCdnUserQuotaOutcome> DescribeCdnUserQuotaOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserQuotaRequest&, const DescribeCdnUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnUserResourcePackageResult> DescribeCdnUserResourcePackageOutcome;
			typedef std::future<DescribeCdnUserResourcePackageOutcome> DescribeCdnUserResourcePackageOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnUserResourcePackageRequest&, const DescribeCdnUserResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnUserResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnWafDomainResult> DescribeCdnWafDomainOutcome;
			typedef std::future<DescribeCdnWafDomainOutcome> DescribeCdnWafDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnWafDomainRequest&, const DescribeCdnWafDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnWafDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateInfoByIDResult> DescribeCertificateInfoByIDOutcome;
			typedef std::future<DescribeCertificateInfoByIDOutcome> DescribeCertificateInfoByIDOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCertificateInfoByIDRequest&, const DescribeCertificateInfoByIDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateInfoByIDAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigGroupDetailResult> DescribeConfigGroupDetailOutcome;
			typedef std::future<DescribeConfigGroupDetailOutcome> DescribeConfigGroupDetailOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeConfigGroupDetailRequest&, const DescribeConfigGroupDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigGroupDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigOfVersionResult> DescribeConfigOfVersionOutcome;
			typedef std::future<DescribeConfigOfVersionOutcome> DescribeConfigOfVersionOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeConfigOfVersionRequest&, const DescribeConfigOfVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigOfVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomLogConfigResult> DescribeCustomLogConfigOutcome;
			typedef std::future<DescribeCustomLogConfigOutcome> DescribeCustomLogConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCustomLogConfigRequest&, const DescribeCustomLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAverageResponseTimeResult> DescribeDomainAverageResponseTimeOutcome;
			typedef std::future<DescribeDomainAverageResponseTimeOutcome> DescribeDomainAverageResponseTimeOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainAverageResponseTimeRequest&, const DescribeDomainAverageResponseTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAverageResponseTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataResult> DescribeDomainBpsDataOutcome;
			typedef std::future<DescribeDomainBpsDataOutcome> DescribeDomainBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataRequest&, const DescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataByLayerResult> DescribeDomainBpsDataByLayerOutcome;
			typedef std::future<DescribeDomainBpsDataByLayerOutcome> DescribeDomainBpsDataByLayerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataByLayerRequest&, const DescribeDomainBpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataByTimeStampResult> DescribeDomainBpsDataByTimeStampOutcome;
			typedef std::future<DescribeDomainBpsDataByTimeStampOutcome> DescribeDomainBpsDataByTimeStampOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataByTimeStampRequest&, const DescribeDomainBpsDataByTimeStampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataByTimeStampAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCcActivityLogResult> DescribeDomainCcActivityLogOutcome;
			typedef std::future<DescribeDomainCcActivityLogOutcome> DescribeDomainCcActivityLogOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainCcActivityLogRequest&, const DescribeDomainCcActivityLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCcActivityLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCertificateInfoResult> DescribeDomainCertificateInfoOutcome;
			typedef std::future<DescribeDomainCertificateInfoOutcome> DescribeDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainCertificateInfoRequest&, const DescribeDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCustomLogConfigResult> DescribeDomainCustomLogConfigOutcome;
			typedef std::future<DescribeDomainCustomLogConfigOutcome> DescribeDomainCustomLogConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainCustomLogConfigRequest&, const DescribeDomainCustomLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCustomLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainDetailDataByLayerResult> DescribeDomainDetailDataByLayerOutcome;
			typedef std::future<DescribeDomainDetailDataByLayerOutcome> DescribeDomainDetailDataByLayerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainDetailDataByLayerRequest&, const DescribeDomainDetailDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainFileSizeProportionDataResult> DescribeDomainFileSizeProportionDataOutcome;
			typedef std::future<DescribeDomainFileSizeProportionDataOutcome> DescribeDomainFileSizeProportionDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainFileSizeProportionDataRequest&, const DescribeDomainFileSizeProportionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainFileSizeProportionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainFlowDataResult> DescribeDomainFlowDataOutcome;
			typedef std::future<DescribeDomainFlowDataOutcome> DescribeDomainFlowDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainFlowDataRequest&, const DescribeDomainFlowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainFlowDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHitRateDataResult> DescribeDomainHitRateDataOutcome;
			typedef std::future<DescribeDomainHitRateDataOutcome> DescribeDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHitRateDataRequest&, const DescribeDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHttpCodeDataResult> DescribeDomainHttpCodeDataOutcome;
			typedef std::future<DescribeDomainHttpCodeDataOutcome> DescribeDomainHttpCodeDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHttpCodeDataRequest&, const DescribeDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainHttpCodeDataByLayerResult> DescribeDomainHttpCodeDataByLayerOutcome;
			typedef std::future<DescribeDomainHttpCodeDataByLayerOutcome> DescribeDomainHttpCodeDataByLayerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainHttpCodeDataByLayerRequest&, const DescribeDomainHttpCodeDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainHttpCodeDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainISPDataResult> DescribeDomainISPDataOutcome;
			typedef std::future<DescribeDomainISPDataOutcome> DescribeDomainISPDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainISPDataRequest&, const DescribeDomainISPDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainISPDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainMax95BpsDataResult> DescribeDomainMax95BpsDataOutcome;
			typedef std::future<DescribeDomainMax95BpsDataOutcome> DescribeDomainMax95BpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainMax95BpsDataRequest&, const DescribeDomainMax95BpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainMax95BpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainMultiUsageDataResult> DescribeDomainMultiUsageDataOutcome;
			typedef std::future<DescribeDomainMultiUsageDataOutcome> DescribeDomainMultiUsageDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainMultiUsageDataRequest&, const DescribeDomainMultiUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainMultiUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainNamesOfVersionResult> DescribeDomainNamesOfVersionOutcome;
			typedef std::future<DescribeDomainNamesOfVersionOutcome> DescribeDomainNamesOfVersionOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainNamesOfVersionRequest&, const DescribeDomainNamesOfVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainNamesOfVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainPathDataResult> DescribeDomainPathDataOutcome;
			typedef std::future<DescribeDomainPathDataOutcome> DescribeDomainPathDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainPathDataRequest&, const DescribeDomainPathDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPathDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainPvDataResult> DescribeDomainPvDataOutcome;
			typedef std::future<DescribeDomainPvDataOutcome> DescribeDomainPvDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainPvDataRequest&, const DescribeDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsDataResult> DescribeDomainQpsDataOutcome;
			typedef std::future<DescribeDomainQpsDataOutcome> DescribeDomainQpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainQpsDataRequest&, const DescribeDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsDataByLayerResult> DescribeDomainQpsDataByLayerOutcome;
			typedef std::future<DescribeDomainQpsDataByLayerOutcome> DescribeDomainQpsDataByLayerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainQpsDataByLayerRequest&, const DescribeDomainQpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeBpsDataResult> DescribeDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeDomainRealTimeBpsDataOutcome> DescribeDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeBpsDataRequest&, const DescribeDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeByteHitRateDataResult> DescribeDomainRealTimeByteHitRateDataOutcome;
			typedef std::future<DescribeDomainRealTimeByteHitRateDataOutcome> DescribeDomainRealTimeByteHitRateDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeByteHitRateDataRequest&, const DescribeDomainRealTimeByteHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeByteHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeDetailDataResult> DescribeDomainRealTimeDetailDataOutcome;
			typedef std::future<DescribeDomainRealTimeDetailDataOutcome> DescribeDomainRealTimeDetailDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeDetailDataRequest&, const DescribeDomainRealTimeDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeHttpCodeDataResult> DescribeDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeDomainRealTimeHttpCodeDataOutcome> DescribeDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeHttpCodeDataRequest&, const DescribeDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeQpsDataResult> DescribeDomainRealTimeQpsDataOutcome;
			typedef std::future<DescribeDomainRealTimeQpsDataOutcome> DescribeDomainRealTimeQpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeQpsDataRequest&, const DescribeDomainRealTimeQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeReqHitRateDataResult> DescribeDomainRealTimeReqHitRateDataOutcome;
			typedef std::future<DescribeDomainRealTimeReqHitRateDataOutcome> DescribeDomainRealTimeReqHitRateDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeReqHitRateDataRequest&, const DescribeDomainRealTimeReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeSrcBpsDataResult> DescribeDomainRealTimeSrcBpsDataOutcome;
			typedef std::future<DescribeDomainRealTimeSrcBpsDataOutcome> DescribeDomainRealTimeSrcBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeSrcBpsDataRequest&, const DescribeDomainRealTimeSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeSrcHttpCodeDataResult> DescribeDomainRealTimeSrcHttpCodeDataOutcome;
			typedef std::future<DescribeDomainRealTimeSrcHttpCodeDataOutcome> DescribeDomainRealTimeSrcHttpCodeDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeSrcHttpCodeDataRequest&, const DescribeDomainRealTimeSrcHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeSrcHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeSrcTrafficDataResult> DescribeDomainRealTimeSrcTrafficDataOutcome;
			typedef std::future<DescribeDomainRealTimeSrcTrafficDataOutcome> DescribeDomainRealTimeSrcTrafficDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeSrcTrafficDataRequest&, const DescribeDomainRealTimeSrcTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeSrcTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealTimeTrafficDataResult> DescribeDomainRealTimeTrafficDataOutcome;
			typedef std::future<DescribeDomainRealTimeTrafficDataOutcome> DescribeDomainRealTimeTrafficDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealTimeTrafficDataRequest&, const DescribeDomainRealTimeTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealTimeTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRealtimeLogDeliveryResult> DescribeDomainRealtimeLogDeliveryOutcome;
			typedef std::future<DescribeDomainRealtimeLogDeliveryOutcome> DescribeDomainRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRealtimeLogDeliveryRequest&, const DescribeDomainRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRegionDataResult> DescribeDomainRegionDataOutcome;
			typedef std::future<DescribeDomainRegionDataOutcome> DescribeDomainRegionDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainRegionDataRequest&, const DescribeDomainRegionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRegionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainReqHitRateDataResult> DescribeDomainReqHitRateDataOutcome;
			typedef std::future<DescribeDomainReqHitRateDataOutcome> DescribeDomainReqHitRateDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainReqHitRateDataRequest&, const DescribeDomainReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcBpsDataResult> DescribeDomainSrcBpsDataOutcome;
			typedef std::future<DescribeDomainSrcBpsDataOutcome> DescribeDomainSrcBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcBpsDataRequest&, const DescribeDomainSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcFlowDataResult> DescribeDomainSrcFlowDataOutcome;
			typedef std::future<DescribeDomainSrcFlowDataOutcome> DescribeDomainSrcFlowDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcFlowDataRequest&, const DescribeDomainSrcFlowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcFlowDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcHttpCodeDataResult> DescribeDomainSrcHttpCodeDataOutcome;
			typedef std::future<DescribeDomainSrcHttpCodeDataOutcome> DescribeDomainSrcHttpCodeDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcHttpCodeDataRequest&, const DescribeDomainSrcHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcQpsDataResult> DescribeDomainSrcQpsDataOutcome;
			typedef std::future<DescribeDomainSrcQpsDataOutcome> DescribeDomainSrcQpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcQpsDataRequest&, const DescribeDomainSrcQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcTopUrlVisitResult> DescribeDomainSrcTopUrlVisitOutcome;
			typedef std::future<DescribeDomainSrcTopUrlVisitOutcome> DescribeDomainSrcTopUrlVisitOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcTopUrlVisitRequest&, const DescribeDomainSrcTopUrlVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcTopUrlVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSrcTrafficDataResult> DescribeDomainSrcTrafficDataOutcome;
			typedef std::future<DescribeDomainSrcTrafficDataOutcome> DescribeDomainSrcTrafficDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainSrcTrafficDataRequest&, const DescribeDomainSrcTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSrcTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTopClientIpVisitResult> DescribeDomainTopClientIpVisitOutcome;
			typedef std::future<DescribeDomainTopClientIpVisitOutcome> DescribeDomainTopClientIpVisitOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainTopClientIpVisitRequest&, const DescribeDomainTopClientIpVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTopClientIpVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTopReferVisitResult> DescribeDomainTopReferVisitOutcome;
			typedef std::future<DescribeDomainTopReferVisitOutcome> DescribeDomainTopReferVisitOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainTopReferVisitRequest&, const DescribeDomainTopReferVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTopReferVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTopUrlVisitResult> DescribeDomainTopUrlVisitOutcome;
			typedef std::future<DescribeDomainTopUrlVisitOutcome> DescribeDomainTopUrlVisitOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainTopUrlVisitRequest&, const DescribeDomainTopUrlVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTopUrlVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTrafficDataResult> DescribeDomainTrafficDataOutcome;
			typedef std::future<DescribeDomainTrafficDataOutcome> DescribeDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainTrafficDataRequest&, const DescribeDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUsageDataResult> DescribeDomainUsageDataOutcome;
			typedef std::future<DescribeDomainUsageDataOutcome> DescribeDomainUsageDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUsageDataRequest&, const DescribeDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUvDataResult> DescribeDomainUvDataOutcome;
			typedef std::future<DescribeDomainUvDataOutcome> DescribeDomainUvDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUvDataRequest&, const DescribeDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsBySourceResult> DescribeDomainsBySourceOutcome;
			typedef std::future<DescribeDomainsBySourceOutcome> DescribeDomainsBySourceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsBySourceRequest&, const DescribeDomainsBySourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsBySourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsUsageByDayResult> DescribeDomainsUsageByDayOutcome;
			typedef std::future<DescribeDomainsUsageByDayOutcome> DescribeDomainsUsageByDayOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsUsageByDayRequest&, const DescribeDomainsUsageByDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsUsageByDayAsyncHandler;
			typedef Outcome<Error, Model::DescribeEsExceptionDataResult> DescribeEsExceptionDataOutcome;
			typedef std::future<DescribeEsExceptionDataOutcome> DescribeEsExceptionDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeEsExceptionDataRequest&, const DescribeEsExceptionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEsExceptionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeEsExecuteDataResult> DescribeEsExecuteDataOutcome;
			typedef std::future<DescribeEsExecuteDataOutcome> DescribeEsExecuteDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeEsExecuteDataRequest&, const DescribeEsExecuteDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEsExecuteDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeFCTriggerResult> DescribeFCTriggerOutcome;
			typedef std::future<DescribeFCTriggerOutcome> DescribeFCTriggerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeFCTriggerRequest&, const DescribeFCTriggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFCTriggerAsyncHandler;
			typedef Outcome<Error, Model::DescribeIllegalUrlExportTaskResult> DescribeIllegalUrlExportTaskOutcome;
			typedef std::future<DescribeIllegalUrlExportTaskOutcome> DescribeIllegalUrlExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeIllegalUrlExportTaskRequest&, const DescribeIllegalUrlExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIllegalUrlExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpInfoResult> DescribeIpInfoOutcome;
			typedef std::future<DescribeIpInfoOutcome> DescribeIpInfoOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeIpInfoRequest&, const DescribeIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpStatusResult> DescribeIpStatusOutcome;
			typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeIpStatusRequest&, const DescribeIpStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeL2VipsByDomainResult> DescribeL2VipsByDomainOutcome;
			typedef std::future<DescribeL2VipsByDomainOutcome> DescribeL2VipsByDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeL2VipsByDomainRequest&, const DescribeL2VipsByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL2VipsByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeRangeDataByLocateAndIspServiceResult> DescribeRangeDataByLocateAndIspServiceOutcome;
			typedef std::future<DescribeRangeDataByLocateAndIspServiceOutcome> DescribeRangeDataByLocateAndIspServiceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRangeDataByLocateAndIspServiceRequest&, const DescribeRangeDataByLocateAndIspServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRangeDataByLocateAndIspServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRealtimeDeliveryAccResult> DescribeRealtimeDeliveryAccOutcome;
			typedef std::future<DescribeRealtimeDeliveryAccOutcome> DescribeRealtimeDeliveryAccOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRealtimeDeliveryAccRequest&, const DescribeRealtimeDeliveryAccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeDeliveryAccAsyncHandler;
			typedef Outcome<Error, Model::DescribeRealtimeLogAuthorizedResult> DescribeRealtimeLogAuthorizedOutcome;
			typedef std::future<DescribeRealtimeLogAuthorizedOutcome> DescribeRealtimeLogAuthorizedOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRealtimeLogAuthorizedRequest&, const DescribeRealtimeLogAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeLogAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshQuotaResult> DescribeRefreshQuotaOutcome;
			typedef std::future<DescribeRefreshQuotaOutcome> DescribeRefreshQuotaOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshQuotaRequest&, const DescribeRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshTaskByIdResult> DescribeRefreshTaskByIdOutcome;
			typedef std::future<DescribeRefreshTaskByIdOutcome> DescribeRefreshTaskByIdOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshTaskByIdRequest&, const DescribeRefreshTaskByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshTaskByIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshTasksResult> DescribeRefreshTasksOutcome;
			typedef std::future<DescribeRefreshTasksOutcome> DescribeRefreshTasksOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshTasksRequest&, const DescribeRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeStagingIpResult> DescribeStagingIpOutcome;
			typedef std::future<DescribeStagingIpOutcome> DescribeStagingIpOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeStagingIpRequest&, const DescribeStagingIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStagingIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagResourcesResult> DescribeTagResourcesOutcome;
			typedef std::future<DescribeTagResourcesOutcome> DescribeTagResourcesOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeTagResourcesRequest&, const DescribeTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopDomainsByFlowResult> DescribeTopDomainsByFlowOutcome;
			typedef std::future<DescribeTopDomainsByFlowOutcome> DescribeTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeTopDomainsByFlowRequest&, const DescribeTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserCertificateExpireCountResult> DescribeUserCertificateExpireCountOutcome;
			typedef std::future<DescribeUserCertificateExpireCountOutcome> DescribeUserCertificateExpireCountOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserCertificateExpireCountRequest&, const DescribeUserCertificateExpireCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCertificateExpireCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserConfigsResult> DescribeUserConfigsOutcome;
			typedef std::future<DescribeUserConfigsOutcome> DescribeUserConfigsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserConfigsRequest&, const DescribeUserConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDomainsResult> DescribeUserDomainsOutcome;
			typedef std::future<DescribeUserDomainsOutcome> DescribeUserDomainsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserDomainsRequest&, const DescribeUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserTagsResult> DescribeUserTagsOutcome;
			typedef std::future<DescribeUserTagsOutcome> DescribeUserTagsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserTagsRequest&, const DescribeUserTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserUsageDataExportTaskResult> DescribeUserUsageDataExportTaskOutcome;
			typedef std::future<DescribeUserUsageDataExportTaskOutcome> DescribeUserUsageDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserUsageDataExportTaskRequest&, const DescribeUserUsageDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserUsageDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserUsageDetailDataExportTaskResult> DescribeUserUsageDetailDataExportTaskOutcome;
			typedef std::future<DescribeUserUsageDetailDataExportTaskOutcome> DescribeUserUsageDetailDataExportTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserUsageDetailDataExportTaskRequest&, const DescribeUserUsageDetailDataExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserUsageDetailDataExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserVipsByDomainResult> DescribeUserVipsByDomainOutcome;
			typedef std::future<DescribeUserVipsByDomainOutcome> DescribeUserVipsByDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserVipsByDomainRequest&, const DescribeUserVipsByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserVipsByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyContentResult> DescribeVerifyContentOutcome;
			typedef std::future<DescribeVerifyContentOutcome> DescribeVerifyContentOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeVerifyContentRequest&, const DescribeVerifyContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyContentAsyncHandler;
			typedef Outcome<Error, Model::DisableRealtimeLogDeliveryResult> DisableRealtimeLogDeliveryOutcome;
			typedef std::future<DisableRealtimeLogDeliveryOutcome> DisableRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DisableRealtimeLogDeliveryRequest&, const DisableRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::EnableRealtimeLogDeliveryResult> EnableRealtimeLogDeliveryOutcome;
			typedef std::future<EnableRealtimeLogDeliveryOutcome> EnableRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::EnableRealtimeLogDeliveryRequest&, const EnableRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ListDomainsByLogConfigIdResult> ListDomainsByLogConfigIdOutcome;
			typedef std::future<ListDomainsByLogConfigIdOutcome> ListDomainsByLogConfigIdOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ListDomainsByLogConfigIdRequest&, const ListDomainsByLogConfigIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDomainsByLogConfigIdAsyncHandler;
			typedef Outcome<Error, Model::ListFCTriggerResult> ListFCTriggerOutcome;
			typedef std::future<ListFCTriggerOutcome> ListFCTriggerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ListFCTriggerRequest&, const ListFCTriggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFCTriggerAsyncHandler;
			typedef Outcome<Error, Model::ListRealtimeLogDeliveryDomainsResult> ListRealtimeLogDeliveryDomainsOutcome;
			typedef std::future<ListRealtimeLogDeliveryDomainsOutcome> ListRealtimeLogDeliveryDomainsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ListRealtimeLogDeliveryDomainsRequest&, const ListRealtimeLogDeliveryDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealtimeLogDeliveryDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListRealtimeLogDeliveryInfosResult> ListRealtimeLogDeliveryInfosOutcome;
			typedef std::future<ListRealtimeLogDeliveryInfosOutcome> ListRealtimeLogDeliveryInfosOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ListRealtimeLogDeliveryInfosRequest&, const ListRealtimeLogDeliveryInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealtimeLogDeliveryInfosAsyncHandler;
			typedef Outcome<Error, Model::ListUserCustomLogConfigResult> ListUserCustomLogConfigOutcome;
			typedef std::future<ListUserCustomLogConfigOutcome> ListUserCustomLogConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ListUserCustomLogConfigRequest&, const ListUserCustomLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserCustomLogConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdnDomainResult> ModifyCdnDomainOutcome;
			typedef std::future<ModifyCdnDomainOutcome> ModifyCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ModifyCdnDomainRequest&, const ModifyCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdnDomainSchdmByPropertyResult> ModifyCdnDomainSchdmByPropertyOutcome;
			typedef std::future<ModifyCdnDomainSchdmByPropertyOutcome> ModifyCdnDomainSchdmByPropertyOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ModifyCdnDomainSchdmByPropertyRequest&, const ModifyCdnDomainSchdmByPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdnDomainSchdmByPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyRealtimeLogDeliveryResult> ModifyRealtimeLogDeliveryOutcome;
			typedef std::future<ModifyRealtimeLogDeliveryOutcome> ModifyRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::ModifyRealtimeLogDeliveryRequest&, const ModifyRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::OpenCdnServiceResult> OpenCdnServiceOutcome;
			typedef std::future<OpenCdnServiceOutcome> OpenCdnServiceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::OpenCdnServiceRequest&, const OpenCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::PublishStagingConfigToProductionResult> PublishStagingConfigToProductionOutcome;
			typedef std::future<PublishStagingConfigToProductionOutcome> PublishStagingConfigToProductionOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::PublishStagingConfigToProductionRequest&, const PublishStagingConfigToProductionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishStagingConfigToProductionAsyncHandler;
			typedef Outcome<Error, Model::PushObjectCacheResult> PushObjectCacheOutcome;
			typedef std::future<PushObjectCacheOutcome> PushObjectCacheOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::PushObjectCacheRequest&, const PushObjectCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushObjectCacheAsyncHandler;
			typedef Outcome<Error, Model::RefreshObjectCachesResult> RefreshObjectCachesOutcome;
			typedef std::future<RefreshObjectCachesOutcome> RefreshObjectCachesOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::RefreshObjectCachesRequest&, const RefreshObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::RollbackStagingConfigResult> RollbackStagingConfigOutcome;
			typedef std::future<RollbackStagingConfigOutcome> RollbackStagingConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::RollbackStagingConfigRequest&, const RollbackStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetCdnDomainCSRCertificateResult> SetCdnDomainCSRCertificateOutcome;
			typedef std::future<SetCdnDomainCSRCertificateOutcome> SetCdnDomainCSRCertificateOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetCdnDomainCSRCertificateRequest&, const SetCdnDomainCSRCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCdnDomainCSRCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetCdnDomainSMCertificateResult> SetCdnDomainSMCertificateOutcome;
			typedef std::future<SetCdnDomainSMCertificateOutcome> SetCdnDomainSMCertificateOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetCdnDomainSMCertificateRequest&, const SetCdnDomainSMCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCdnDomainSMCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetCdnDomainStagingConfigResult> SetCdnDomainStagingConfigOutcome;
			typedef std::future<SetCdnDomainStagingConfigOutcome> SetCdnDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetCdnDomainStagingConfigRequest&, const SetCdnDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCdnDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetConfigOfVersionResult> SetConfigOfVersionOutcome;
			typedef std::future<SetConfigOfVersionOutcome> SetConfigOfVersionOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetConfigOfVersionRequest&, const SetConfigOfVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetConfigOfVersionAsyncHandler;
			typedef Outcome<Error, Model::SetDomainServerCertificateResult> SetDomainServerCertificateOutcome;
			typedef std::future<SetDomainServerCertificateOutcome> SetDomainServerCertificateOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetDomainServerCertificateRequest&, const SetDomainServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainServerCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetReqHeaderConfigResult> SetReqHeaderConfigOutcome;
			typedef std::future<SetReqHeaderConfigOutcome> SetReqHeaderConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetReqHeaderConfigRequest&, const SetReqHeaderConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetReqHeaderConfigAsyncHandler;
			typedef Outcome<Error, Model::SetWaitingRoomConfigResult> SetWaitingRoomConfigOutcome;
			typedef std::future<SetWaitingRoomConfigOutcome> SetWaitingRoomConfigOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::SetWaitingRoomConfigRequest&, const SetWaitingRoomConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetWaitingRoomConfigAsyncHandler;
			typedef Outcome<Error, Model::StartCdnDomainResult> StartCdnDomainOutcome;
			typedef std::future<StartCdnDomainOutcome> StartCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::StartCdnDomainRequest&, const StartCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::StopCdnDomainResult> StopCdnDomainOutcome;
			typedef std::future<StopCdnDomainOutcome> StopCdnDomainOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::StopCdnDomainRequest&, const StopCdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCdnDomainAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TestDescribeDomainBpsDataResult> TestDescribeDomainBpsDataOutcome;
			typedef std::future<TestDescribeDomainBpsDataOutcome> TestDescribeDomainBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::TestDescribeDomainBpsDataRequest&, const TestDescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDescribeDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateCdnDeliverTaskResult> UpdateCdnDeliverTaskOutcome;
			typedef std::future<UpdateCdnDeliverTaskOutcome> UpdateCdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::UpdateCdnDeliverTaskRequest&, const UpdateCdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateCdnSubTaskResult> UpdateCdnSubTaskOutcome;
			typedef std::future<UpdateCdnSubTaskOutcome> UpdateCdnSubTaskOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::UpdateCdnSubTaskRequest&, const UpdateCdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateFCTriggerResult> UpdateFCTriggerOutcome;
			typedef std::future<UpdateFCTriggerOutcome> UpdateFCTriggerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::UpdateFCTriggerRequest&, const UpdateFCTriggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFCTriggerAsyncHandler;
			typedef Outcome<Error, Model::VerifyDomainOwnerResult> VerifyDomainOwnerOutcome;
			typedef std::future<VerifyDomainOwnerOutcome> VerifyDomainOwnerOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::VerifyDomainOwnerRequest&, const VerifyDomainOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDomainOwnerAsyncHandler;

			CdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CdnClient();
			AddCdnDomainOutcome addCdnDomain(const Model::AddCdnDomainRequest &request)const;
			void addCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCdnDomainOutcomeCallable addCdnDomainCallable(const Model::AddCdnDomainRequest& request) const;
			AddFCTriggerOutcome addFCTrigger(const Model::AddFCTriggerRequest &request)const;
			void addFCTriggerAsync(const Model::AddFCTriggerRequest& request, const AddFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFCTriggerOutcomeCallable addFCTriggerCallable(const Model::AddFCTriggerRequest& request) const;
			BatchAddCdnDomainOutcome batchAddCdnDomain(const Model::BatchAddCdnDomainRequest &request)const;
			void batchAddCdnDomainAsync(const Model::BatchAddCdnDomainRequest& request, const BatchAddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddCdnDomainOutcomeCallable batchAddCdnDomainCallable(const Model::BatchAddCdnDomainRequest& request) const;
			BatchDeleteCdnDomainConfigOutcome batchDeleteCdnDomainConfig(const Model::BatchDeleteCdnDomainConfigRequest &request)const;
			void batchDeleteCdnDomainConfigAsync(const Model::BatchDeleteCdnDomainConfigRequest& request, const BatchDeleteCdnDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteCdnDomainConfigOutcomeCallable batchDeleteCdnDomainConfigCallable(const Model::BatchDeleteCdnDomainConfigRequest& request) const;
			BatchSetCdnDomainConfigOutcome batchSetCdnDomainConfig(const Model::BatchSetCdnDomainConfigRequest &request)const;
			void batchSetCdnDomainConfigAsync(const Model::BatchSetCdnDomainConfigRequest& request, const BatchSetCdnDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetCdnDomainConfigOutcomeCallable batchSetCdnDomainConfigCallable(const Model::BatchSetCdnDomainConfigRequest& request) const;
			BatchSetCdnDomainServerCertificateOutcome batchSetCdnDomainServerCertificate(const Model::BatchSetCdnDomainServerCertificateRequest &request)const;
			void batchSetCdnDomainServerCertificateAsync(const Model::BatchSetCdnDomainServerCertificateRequest& request, const BatchSetCdnDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetCdnDomainServerCertificateOutcomeCallable batchSetCdnDomainServerCertificateCallable(const Model::BatchSetCdnDomainServerCertificateRequest& request) const;
			BatchStartCdnDomainOutcome batchStartCdnDomain(const Model::BatchStartCdnDomainRequest &request)const;
			void batchStartCdnDomainAsync(const Model::BatchStartCdnDomainRequest& request, const BatchStartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartCdnDomainOutcomeCallable batchStartCdnDomainCallable(const Model::BatchStartCdnDomainRequest& request) const;
			BatchStopCdnDomainOutcome batchStopCdnDomain(const Model::BatchStopCdnDomainRequest &request)const;
			void batchStopCdnDomainAsync(const Model::BatchStopCdnDomainRequest& request, const BatchStopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopCdnDomainOutcomeCallable batchStopCdnDomainCallable(const Model::BatchStopCdnDomainRequest& request) const;
			BatchUpdateCdnDomainOutcome batchUpdateCdnDomain(const Model::BatchUpdateCdnDomainRequest &request)const;
			void batchUpdateCdnDomainAsync(const Model::BatchUpdateCdnDomainRequest& request, const BatchUpdateCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdateCdnDomainOutcomeCallable batchUpdateCdnDomainCallable(const Model::BatchUpdateCdnDomainRequest& request) const;
			CreateCdnCertificateSigningRequestOutcome createCdnCertificateSigningRequest(const Model::CreateCdnCertificateSigningRequestRequest &request)const;
			void createCdnCertificateSigningRequestAsync(const Model::CreateCdnCertificateSigningRequestRequest& request, const CreateCdnCertificateSigningRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdnCertificateSigningRequestOutcomeCallable createCdnCertificateSigningRequestCallable(const Model::CreateCdnCertificateSigningRequestRequest& request) const;
			CreateCdnDeliverTaskOutcome createCdnDeliverTask(const Model::CreateCdnDeliverTaskRequest &request)const;
			void createCdnDeliverTaskAsync(const Model::CreateCdnDeliverTaskRequest& request, const CreateCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdnDeliverTaskOutcomeCallable createCdnDeliverTaskCallable(const Model::CreateCdnDeliverTaskRequest& request) const;
			CreateCdnSubTaskOutcome createCdnSubTask(const Model::CreateCdnSubTaskRequest &request)const;
			void createCdnSubTaskAsync(const Model::CreateCdnSubTaskRequest& request, const CreateCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdnSubTaskOutcomeCallable createCdnSubTaskCallable(const Model::CreateCdnSubTaskRequest& request) const;
			CreateIllegalUrlExportTaskOutcome createIllegalUrlExportTask(const Model::CreateIllegalUrlExportTaskRequest &request)const;
			void createIllegalUrlExportTaskAsync(const Model::CreateIllegalUrlExportTaskRequest& request, const CreateIllegalUrlExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIllegalUrlExportTaskOutcomeCallable createIllegalUrlExportTaskCallable(const Model::CreateIllegalUrlExportTaskRequest& request) const;
			CreateRealTimeLogDeliveryOutcome createRealTimeLogDelivery(const Model::CreateRealTimeLogDeliveryRequest &request)const;
			void createRealTimeLogDeliveryAsync(const Model::CreateRealTimeLogDeliveryRequest& request, const CreateRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRealTimeLogDeliveryOutcomeCallable createRealTimeLogDeliveryCallable(const Model::CreateRealTimeLogDeliveryRequest& request) const;
			CreateUsageDetailDataExportTaskOutcome createUsageDetailDataExportTask(const Model::CreateUsageDetailDataExportTaskRequest &request)const;
			void createUsageDetailDataExportTaskAsync(const Model::CreateUsageDetailDataExportTaskRequest& request, const CreateUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUsageDetailDataExportTaskOutcomeCallable createUsageDetailDataExportTaskCallable(const Model::CreateUsageDetailDataExportTaskRequest& request) const;
			CreateUserUsageDataExportTaskOutcome createUserUsageDataExportTask(const Model::CreateUserUsageDataExportTaskRequest &request)const;
			void createUserUsageDataExportTaskAsync(const Model::CreateUserUsageDataExportTaskRequest& request, const CreateUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserUsageDataExportTaskOutcomeCallable createUserUsageDataExportTaskCallable(const Model::CreateUserUsageDataExportTaskRequest& request) const;
			DeleteCdnDeliverTaskOutcome deleteCdnDeliverTask(const Model::DeleteCdnDeliverTaskRequest &request)const;
			void deleteCdnDeliverTaskAsync(const Model::DeleteCdnDeliverTaskRequest& request, const DeleteCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdnDeliverTaskOutcomeCallable deleteCdnDeliverTaskCallable(const Model::DeleteCdnDeliverTaskRequest& request) const;
			DeleteCdnDomainOutcome deleteCdnDomain(const Model::DeleteCdnDomainRequest &request)const;
			void deleteCdnDomainAsync(const Model::DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdnDomainOutcomeCallable deleteCdnDomainCallable(const Model::DeleteCdnDomainRequest& request) const;
			DeleteCdnSubTaskOutcome deleteCdnSubTask(const Model::DeleteCdnSubTaskRequest &request)const;
			void deleteCdnSubTaskAsync(const Model::DeleteCdnSubTaskRequest& request, const DeleteCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdnSubTaskOutcomeCallable deleteCdnSubTaskCallable(const Model::DeleteCdnSubTaskRequest& request) const;
			DeleteFCTriggerOutcome deleteFCTrigger(const Model::DeleteFCTriggerRequest &request)const;
			void deleteFCTriggerAsync(const Model::DeleteFCTriggerRequest& request, const DeleteFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFCTriggerOutcomeCallable deleteFCTriggerCallable(const Model::DeleteFCTriggerRequest& request) const;
			DeleteRealTimeLogLogstoreOutcome deleteRealTimeLogLogstore(const Model::DeleteRealTimeLogLogstoreRequest &request)const;
			void deleteRealTimeLogLogstoreAsync(const Model::DeleteRealTimeLogLogstoreRequest& request, const DeleteRealTimeLogLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRealTimeLogLogstoreOutcomeCallable deleteRealTimeLogLogstoreCallable(const Model::DeleteRealTimeLogLogstoreRequest& request) const;
			DeleteRealtimeLogDeliveryOutcome deleteRealtimeLogDelivery(const Model::DeleteRealtimeLogDeliveryRequest &request)const;
			void deleteRealtimeLogDeliveryAsync(const Model::DeleteRealtimeLogDeliveryRequest& request, const DeleteRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRealtimeLogDeliveryOutcomeCallable deleteRealtimeLogDeliveryCallable(const Model::DeleteRealtimeLogDeliveryRequest& request) const;
			DeleteSpecificConfigOutcome deleteSpecificConfig(const Model::DeleteSpecificConfigRequest &request)const;
			void deleteSpecificConfigAsync(const Model::DeleteSpecificConfigRequest& request, const DeleteSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSpecificConfigOutcomeCallable deleteSpecificConfigCallable(const Model::DeleteSpecificConfigRequest& request) const;
			DeleteSpecificStagingConfigOutcome deleteSpecificStagingConfig(const Model::DeleteSpecificStagingConfigRequest &request)const;
			void deleteSpecificStagingConfigAsync(const Model::DeleteSpecificStagingConfigRequest& request, const DeleteSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSpecificStagingConfigOutcomeCallable deleteSpecificStagingConfigCallable(const Model::DeleteSpecificStagingConfigRequest& request) const;
			DeleteUsageDetailDataExportTaskOutcome deleteUsageDetailDataExportTask(const Model::DeleteUsageDetailDataExportTaskRequest &request)const;
			void deleteUsageDetailDataExportTaskAsync(const Model::DeleteUsageDetailDataExportTaskRequest& request, const DeleteUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUsageDetailDataExportTaskOutcomeCallable deleteUsageDetailDataExportTaskCallable(const Model::DeleteUsageDetailDataExportTaskRequest& request) const;
			DeleteUserUsageDataExportTaskOutcome deleteUserUsageDataExportTask(const Model::DeleteUserUsageDataExportTaskRequest &request)const;
			void deleteUserUsageDataExportTaskAsync(const Model::DeleteUserUsageDataExportTaskRequest& request, const DeleteUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserUsageDataExportTaskOutcomeCallable deleteUserUsageDataExportTaskCallable(const Model::DeleteUserUsageDataExportTaskRequest& request) const;
			DescribeActiveVersionOfConfigGroupOutcome describeActiveVersionOfConfigGroup(const Model::DescribeActiveVersionOfConfigGroupRequest &request)const;
			void describeActiveVersionOfConfigGroupAsync(const Model::DescribeActiveVersionOfConfigGroupRequest& request, const DescribeActiveVersionOfConfigGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveVersionOfConfigGroupOutcomeCallable describeActiveVersionOfConfigGroupCallable(const Model::DescribeActiveVersionOfConfigGroupRequest& request) const;
			DescribeBlockedRegionsOutcome describeBlockedRegions(const Model::DescribeBlockedRegionsRequest &request)const;
			void describeBlockedRegionsAsync(const Model::DescribeBlockedRegionsRequest& request, const DescribeBlockedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBlockedRegionsOutcomeCallable describeBlockedRegionsCallable(const Model::DescribeBlockedRegionsRequest& request) const;
			DescribeCdnCertificateDetailOutcome describeCdnCertificateDetail(const Model::DescribeCdnCertificateDetailRequest &request)const;
			void describeCdnCertificateDetailAsync(const Model::DescribeCdnCertificateDetailRequest& request, const DescribeCdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnCertificateDetailOutcomeCallable describeCdnCertificateDetailCallable(const Model::DescribeCdnCertificateDetailRequest& request) const;
			DescribeCdnCertificateListOutcome describeCdnCertificateList(const Model::DescribeCdnCertificateListRequest &request)const;
			void describeCdnCertificateListAsync(const Model::DescribeCdnCertificateListRequest& request, const DescribeCdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnCertificateListOutcomeCallable describeCdnCertificateListCallable(const Model::DescribeCdnCertificateListRequest& request) const;
			DescribeCdnDeletedDomainsOutcome describeCdnDeletedDomains(const Model::DescribeCdnDeletedDomainsRequest &request)const;
			void describeCdnDeletedDomainsAsync(const Model::DescribeCdnDeletedDomainsRequest& request, const DescribeCdnDeletedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDeletedDomainsOutcomeCallable describeCdnDeletedDomainsCallable(const Model::DescribeCdnDeletedDomainsRequest& request) const;
			DescribeCdnDeliverListOutcome describeCdnDeliverList(const Model::DescribeCdnDeliverListRequest &request)const;
			void describeCdnDeliverListAsync(const Model::DescribeCdnDeliverListRequest& request, const DescribeCdnDeliverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDeliverListOutcomeCallable describeCdnDeliverListCallable(const Model::DescribeCdnDeliverListRequest& request) const;
			DescribeCdnDomainByCertificateOutcome describeCdnDomainByCertificate(const Model::DescribeCdnDomainByCertificateRequest &request)const;
			void describeCdnDomainByCertificateAsync(const Model::DescribeCdnDomainByCertificateRequest& request, const DescribeCdnDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainByCertificateOutcomeCallable describeCdnDomainByCertificateCallable(const Model::DescribeCdnDomainByCertificateRequest& request) const;
			DescribeCdnDomainConfigsOutcome describeCdnDomainConfigs(const Model::DescribeCdnDomainConfigsRequest &request)const;
			void describeCdnDomainConfigsAsync(const Model::DescribeCdnDomainConfigsRequest& request, const DescribeCdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainConfigsOutcomeCallable describeCdnDomainConfigsCallable(const Model::DescribeCdnDomainConfigsRequest& request) const;
			DescribeCdnDomainDetailOutcome describeCdnDomainDetail(const Model::DescribeCdnDomainDetailRequest &request)const;
			void describeCdnDomainDetailAsync(const Model::DescribeCdnDomainDetailRequest& request, const DescribeCdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainDetailOutcomeCallable describeCdnDomainDetailCallable(const Model::DescribeCdnDomainDetailRequest& request) const;
			DescribeCdnDomainLogsOutcome describeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request)const;
			void describeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainLogsOutcomeCallable describeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request) const;
			DescribeCdnDomainStagingConfigOutcome describeCdnDomainStagingConfig(const Model::DescribeCdnDomainStagingConfigRequest &request)const;
			void describeCdnDomainStagingConfigAsync(const Model::DescribeCdnDomainStagingConfigRequest& request, const DescribeCdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainStagingConfigOutcomeCallable describeCdnDomainStagingConfigCallable(const Model::DescribeCdnDomainStagingConfigRequest& request) const;
			DescribeCdnHttpsDomainListOutcome describeCdnHttpsDomainList(const Model::DescribeCdnHttpsDomainListRequest &request)const;
			void describeCdnHttpsDomainListAsync(const Model::DescribeCdnHttpsDomainListRequest& request, const DescribeCdnHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnHttpsDomainListOutcomeCallable describeCdnHttpsDomainListCallable(const Model::DescribeCdnHttpsDomainListRequest& request) const;
			DescribeCdnOrderCommodityCodeOutcome describeCdnOrderCommodityCode(const Model::DescribeCdnOrderCommodityCodeRequest &request)const;
			void describeCdnOrderCommodityCodeAsync(const Model::DescribeCdnOrderCommodityCodeRequest& request, const DescribeCdnOrderCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnOrderCommodityCodeOutcomeCallable describeCdnOrderCommodityCodeCallable(const Model::DescribeCdnOrderCommodityCodeRequest& request) const;
			DescribeCdnRegionAndIspOutcome describeCdnRegionAndIsp(const Model::DescribeCdnRegionAndIspRequest &request)const;
			void describeCdnRegionAndIspAsync(const Model::DescribeCdnRegionAndIspRequest& request, const DescribeCdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnRegionAndIspOutcomeCallable describeCdnRegionAndIspCallable(const Model::DescribeCdnRegionAndIspRequest& request) const;
			DescribeCdnReportOutcome describeCdnReport(const Model::DescribeCdnReportRequest &request)const;
			void describeCdnReportAsync(const Model::DescribeCdnReportRequest& request, const DescribeCdnReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnReportOutcomeCallable describeCdnReportCallable(const Model::DescribeCdnReportRequest& request) const;
			DescribeCdnReportListOutcome describeCdnReportList(const Model::DescribeCdnReportListRequest &request)const;
			void describeCdnReportListAsync(const Model::DescribeCdnReportListRequest& request, const DescribeCdnReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnReportListOutcomeCallable describeCdnReportListCallable(const Model::DescribeCdnReportListRequest& request) const;
			DescribeCdnSMCertificateDetailOutcome describeCdnSMCertificateDetail(const Model::DescribeCdnSMCertificateDetailRequest &request)const;
			void describeCdnSMCertificateDetailAsync(const Model::DescribeCdnSMCertificateDetailRequest& request, const DescribeCdnSMCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnSMCertificateDetailOutcomeCallable describeCdnSMCertificateDetailCallable(const Model::DescribeCdnSMCertificateDetailRequest& request) const;
			DescribeCdnSMCertificateListOutcome describeCdnSMCertificateList(const Model::DescribeCdnSMCertificateListRequest &request)const;
			void describeCdnSMCertificateListAsync(const Model::DescribeCdnSMCertificateListRequest& request, const DescribeCdnSMCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnSMCertificateListOutcomeCallable describeCdnSMCertificateListCallable(const Model::DescribeCdnSMCertificateListRequest& request) const;
			DescribeCdnServiceOutcome describeCdnService(const Model::DescribeCdnServiceRequest &request)const;
			void describeCdnServiceAsync(const Model::DescribeCdnServiceRequest& request, const DescribeCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnServiceOutcomeCallable describeCdnServiceCallable(const Model::DescribeCdnServiceRequest& request) const;
			DescribeCdnSubListOutcome describeCdnSubList(const Model::DescribeCdnSubListRequest &request)const;
			void describeCdnSubListAsync(const Model::DescribeCdnSubListRequest& request, const DescribeCdnSubListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnSubListOutcomeCallable describeCdnSubListCallable(const Model::DescribeCdnSubListRequest& request) const;
			DescribeCdnUserBillHistoryOutcome describeCdnUserBillHistory(const Model::DescribeCdnUserBillHistoryRequest &request)const;
			void describeCdnUserBillHistoryAsync(const Model::DescribeCdnUserBillHistoryRequest& request, const DescribeCdnUserBillHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserBillHistoryOutcomeCallable describeCdnUserBillHistoryCallable(const Model::DescribeCdnUserBillHistoryRequest& request) const;
			DescribeCdnUserBillPredictionOutcome describeCdnUserBillPrediction(const Model::DescribeCdnUserBillPredictionRequest &request)const;
			void describeCdnUserBillPredictionAsync(const Model::DescribeCdnUserBillPredictionRequest& request, const DescribeCdnUserBillPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserBillPredictionOutcomeCallable describeCdnUserBillPredictionCallable(const Model::DescribeCdnUserBillPredictionRequest& request) const;
			DescribeCdnUserBillTypeOutcome describeCdnUserBillType(const Model::DescribeCdnUserBillTypeRequest &request)const;
			void describeCdnUserBillTypeAsync(const Model::DescribeCdnUserBillTypeRequest& request, const DescribeCdnUserBillTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserBillTypeOutcomeCallable describeCdnUserBillTypeCallable(const Model::DescribeCdnUserBillTypeRequest& request) const;
			DescribeCdnUserConfigsOutcome describeCdnUserConfigs(const Model::DescribeCdnUserConfigsRequest &request)const;
			void describeCdnUserConfigsAsync(const Model::DescribeCdnUserConfigsRequest& request, const DescribeCdnUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserConfigsOutcomeCallable describeCdnUserConfigsCallable(const Model::DescribeCdnUserConfigsRequest& request) const;
			DescribeCdnUserDomainsByFuncOutcome describeCdnUserDomainsByFunc(const Model::DescribeCdnUserDomainsByFuncRequest &request)const;
			void describeCdnUserDomainsByFuncAsync(const Model::DescribeCdnUserDomainsByFuncRequest& request, const DescribeCdnUserDomainsByFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserDomainsByFuncOutcomeCallable describeCdnUserDomainsByFuncCallable(const Model::DescribeCdnUserDomainsByFuncRequest& request) const;
			DescribeCdnUserQuotaOutcome describeCdnUserQuota(const Model::DescribeCdnUserQuotaRequest &request)const;
			void describeCdnUserQuotaAsync(const Model::DescribeCdnUserQuotaRequest& request, const DescribeCdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserQuotaOutcomeCallable describeCdnUserQuotaCallable(const Model::DescribeCdnUserQuotaRequest& request) const;
			DescribeCdnUserResourcePackageOutcome describeCdnUserResourcePackage(const Model::DescribeCdnUserResourcePackageRequest &request)const;
			void describeCdnUserResourcePackageAsync(const Model::DescribeCdnUserResourcePackageRequest& request, const DescribeCdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnUserResourcePackageOutcomeCallable describeCdnUserResourcePackageCallable(const Model::DescribeCdnUserResourcePackageRequest& request) const;
			DescribeCdnWafDomainOutcome describeCdnWafDomain(const Model::DescribeCdnWafDomainRequest &request)const;
			void describeCdnWafDomainAsync(const Model::DescribeCdnWafDomainRequest& request, const DescribeCdnWafDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnWafDomainOutcomeCallable describeCdnWafDomainCallable(const Model::DescribeCdnWafDomainRequest& request) const;
			DescribeCertificateInfoByIDOutcome describeCertificateInfoByID(const Model::DescribeCertificateInfoByIDRequest &request)const;
			void describeCertificateInfoByIDAsync(const Model::DescribeCertificateInfoByIDRequest& request, const DescribeCertificateInfoByIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateInfoByIDOutcomeCallable describeCertificateInfoByIDCallable(const Model::DescribeCertificateInfoByIDRequest& request) const;
			DescribeConfigGroupDetailOutcome describeConfigGroupDetail(const Model::DescribeConfigGroupDetailRequest &request)const;
			void describeConfigGroupDetailAsync(const Model::DescribeConfigGroupDetailRequest& request, const DescribeConfigGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigGroupDetailOutcomeCallable describeConfigGroupDetailCallable(const Model::DescribeConfigGroupDetailRequest& request) const;
			DescribeConfigOfVersionOutcome describeConfigOfVersion(const Model::DescribeConfigOfVersionRequest &request)const;
			void describeConfigOfVersionAsync(const Model::DescribeConfigOfVersionRequest& request, const DescribeConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigOfVersionOutcomeCallable describeConfigOfVersionCallable(const Model::DescribeConfigOfVersionRequest& request) const;
			DescribeCustomLogConfigOutcome describeCustomLogConfig(const Model::DescribeCustomLogConfigRequest &request)const;
			void describeCustomLogConfigAsync(const Model::DescribeCustomLogConfigRequest& request, const DescribeCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomLogConfigOutcomeCallable describeCustomLogConfigCallable(const Model::DescribeCustomLogConfigRequest& request) const;
			DescribeDomainAverageResponseTimeOutcome describeDomainAverageResponseTime(const Model::DescribeDomainAverageResponseTimeRequest &request)const;
			void describeDomainAverageResponseTimeAsync(const Model::DescribeDomainAverageResponseTimeRequest& request, const DescribeDomainAverageResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainAverageResponseTimeOutcomeCallable describeDomainAverageResponseTimeCallable(const Model::DescribeDomainAverageResponseTimeRequest& request) const;
			DescribeDomainBpsDataOutcome describeDomainBpsData(const Model::DescribeDomainBpsDataRequest &request)const;
			void describeDomainBpsDataAsync(const Model::DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataOutcomeCallable describeDomainBpsDataCallable(const Model::DescribeDomainBpsDataRequest& request) const;
			DescribeDomainBpsDataByLayerOutcome describeDomainBpsDataByLayer(const Model::DescribeDomainBpsDataByLayerRequest &request)const;
			void describeDomainBpsDataByLayerAsync(const Model::DescribeDomainBpsDataByLayerRequest& request, const DescribeDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataByLayerOutcomeCallable describeDomainBpsDataByLayerCallable(const Model::DescribeDomainBpsDataByLayerRequest& request) const;
			DescribeDomainBpsDataByTimeStampOutcome describeDomainBpsDataByTimeStamp(const Model::DescribeDomainBpsDataByTimeStampRequest &request)const;
			void describeDomainBpsDataByTimeStampAsync(const Model::DescribeDomainBpsDataByTimeStampRequest& request, const DescribeDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataByTimeStampOutcomeCallable describeDomainBpsDataByTimeStampCallable(const Model::DescribeDomainBpsDataByTimeStampRequest& request) const;
			DescribeDomainCcActivityLogOutcome describeDomainCcActivityLog(const Model::DescribeDomainCcActivityLogRequest &request)const;
			void describeDomainCcActivityLogAsync(const Model::DescribeDomainCcActivityLogRequest& request, const DescribeDomainCcActivityLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainCcActivityLogOutcomeCallable describeDomainCcActivityLogCallable(const Model::DescribeDomainCcActivityLogRequest& request) const;
			DescribeDomainCertificateInfoOutcome describeDomainCertificateInfo(const Model::DescribeDomainCertificateInfoRequest &request)const;
			void describeDomainCertificateInfoAsync(const Model::DescribeDomainCertificateInfoRequest& request, const DescribeDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainCertificateInfoOutcomeCallable describeDomainCertificateInfoCallable(const Model::DescribeDomainCertificateInfoRequest& request) const;
			DescribeDomainCustomLogConfigOutcome describeDomainCustomLogConfig(const Model::DescribeDomainCustomLogConfigRequest &request)const;
			void describeDomainCustomLogConfigAsync(const Model::DescribeDomainCustomLogConfigRequest& request, const DescribeDomainCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainCustomLogConfigOutcomeCallable describeDomainCustomLogConfigCallable(const Model::DescribeDomainCustomLogConfigRequest& request) const;
			DescribeDomainDetailDataByLayerOutcome describeDomainDetailDataByLayer(const Model::DescribeDomainDetailDataByLayerRequest &request)const;
			void describeDomainDetailDataByLayerAsync(const Model::DescribeDomainDetailDataByLayerRequest& request, const DescribeDomainDetailDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainDetailDataByLayerOutcomeCallable describeDomainDetailDataByLayerCallable(const Model::DescribeDomainDetailDataByLayerRequest& request) const;
			DescribeDomainFileSizeProportionDataOutcome describeDomainFileSizeProportionData(const Model::DescribeDomainFileSizeProportionDataRequest &request)const;
			void describeDomainFileSizeProportionDataAsync(const Model::DescribeDomainFileSizeProportionDataRequest& request, const DescribeDomainFileSizeProportionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainFileSizeProportionDataOutcomeCallable describeDomainFileSizeProportionDataCallable(const Model::DescribeDomainFileSizeProportionDataRequest& request) const;
			DescribeDomainFlowDataOutcome describeDomainFlowData(const Model::DescribeDomainFlowDataRequest &request)const;
			void describeDomainFlowDataAsync(const Model::DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainFlowDataOutcomeCallable describeDomainFlowDataCallable(const Model::DescribeDomainFlowDataRequest& request) const;
			DescribeDomainHitRateDataOutcome describeDomainHitRateData(const Model::DescribeDomainHitRateDataRequest &request)const;
			void describeDomainHitRateDataAsync(const Model::DescribeDomainHitRateDataRequest& request, const DescribeDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainHitRateDataOutcomeCallable describeDomainHitRateDataCallable(const Model::DescribeDomainHitRateDataRequest& request) const;
			DescribeDomainHttpCodeDataOutcome describeDomainHttpCodeData(const Model::DescribeDomainHttpCodeDataRequest &request)const;
			void describeDomainHttpCodeDataAsync(const Model::DescribeDomainHttpCodeDataRequest& request, const DescribeDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainHttpCodeDataOutcomeCallable describeDomainHttpCodeDataCallable(const Model::DescribeDomainHttpCodeDataRequest& request) const;
			DescribeDomainHttpCodeDataByLayerOutcome describeDomainHttpCodeDataByLayer(const Model::DescribeDomainHttpCodeDataByLayerRequest &request)const;
			void describeDomainHttpCodeDataByLayerAsync(const Model::DescribeDomainHttpCodeDataByLayerRequest& request, const DescribeDomainHttpCodeDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainHttpCodeDataByLayerOutcomeCallable describeDomainHttpCodeDataByLayerCallable(const Model::DescribeDomainHttpCodeDataByLayerRequest& request) const;
			DescribeDomainISPDataOutcome describeDomainISPData(const Model::DescribeDomainISPDataRequest &request)const;
			void describeDomainISPDataAsync(const Model::DescribeDomainISPDataRequest& request, const DescribeDomainISPDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainISPDataOutcomeCallable describeDomainISPDataCallable(const Model::DescribeDomainISPDataRequest& request) const;
			DescribeDomainMax95BpsDataOutcome describeDomainMax95BpsData(const Model::DescribeDomainMax95BpsDataRequest &request)const;
			void describeDomainMax95BpsDataAsync(const Model::DescribeDomainMax95BpsDataRequest& request, const DescribeDomainMax95BpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainMax95BpsDataOutcomeCallable describeDomainMax95BpsDataCallable(const Model::DescribeDomainMax95BpsDataRequest& request) const;
			DescribeDomainMultiUsageDataOutcome describeDomainMultiUsageData(const Model::DescribeDomainMultiUsageDataRequest &request)const;
			void describeDomainMultiUsageDataAsync(const Model::DescribeDomainMultiUsageDataRequest& request, const DescribeDomainMultiUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainMultiUsageDataOutcomeCallable describeDomainMultiUsageDataCallable(const Model::DescribeDomainMultiUsageDataRequest& request) const;
			DescribeDomainNamesOfVersionOutcome describeDomainNamesOfVersion(const Model::DescribeDomainNamesOfVersionRequest &request)const;
			void describeDomainNamesOfVersionAsync(const Model::DescribeDomainNamesOfVersionRequest& request, const DescribeDomainNamesOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainNamesOfVersionOutcomeCallable describeDomainNamesOfVersionCallable(const Model::DescribeDomainNamesOfVersionRequest& request) const;
			DescribeDomainPathDataOutcome describeDomainPathData(const Model::DescribeDomainPathDataRequest &request)const;
			void describeDomainPathDataAsync(const Model::DescribeDomainPathDataRequest& request, const DescribeDomainPathDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainPathDataOutcomeCallable describeDomainPathDataCallable(const Model::DescribeDomainPathDataRequest& request) const;
			DescribeDomainPvDataOutcome describeDomainPvData(const Model::DescribeDomainPvDataRequest &request)const;
			void describeDomainPvDataAsync(const Model::DescribeDomainPvDataRequest& request, const DescribeDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainPvDataOutcomeCallable describeDomainPvDataCallable(const Model::DescribeDomainPvDataRequest& request) const;
			DescribeDomainQpsDataOutcome describeDomainQpsData(const Model::DescribeDomainQpsDataRequest &request)const;
			void describeDomainQpsDataAsync(const Model::DescribeDomainQpsDataRequest& request, const DescribeDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQpsDataOutcomeCallable describeDomainQpsDataCallable(const Model::DescribeDomainQpsDataRequest& request) const;
			DescribeDomainQpsDataByLayerOutcome describeDomainQpsDataByLayer(const Model::DescribeDomainQpsDataByLayerRequest &request)const;
			void describeDomainQpsDataByLayerAsync(const Model::DescribeDomainQpsDataByLayerRequest& request, const DescribeDomainQpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQpsDataByLayerOutcomeCallable describeDomainQpsDataByLayerCallable(const Model::DescribeDomainQpsDataByLayerRequest& request) const;
			DescribeDomainRealTimeBpsDataOutcome describeDomainRealTimeBpsData(const Model::DescribeDomainRealTimeBpsDataRequest &request)const;
			void describeDomainRealTimeBpsDataAsync(const Model::DescribeDomainRealTimeBpsDataRequest& request, const DescribeDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeBpsDataOutcomeCallable describeDomainRealTimeBpsDataCallable(const Model::DescribeDomainRealTimeBpsDataRequest& request) const;
			DescribeDomainRealTimeByteHitRateDataOutcome describeDomainRealTimeByteHitRateData(const Model::DescribeDomainRealTimeByteHitRateDataRequest &request)const;
			void describeDomainRealTimeByteHitRateDataAsync(const Model::DescribeDomainRealTimeByteHitRateDataRequest& request, const DescribeDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeByteHitRateDataOutcomeCallable describeDomainRealTimeByteHitRateDataCallable(const Model::DescribeDomainRealTimeByteHitRateDataRequest& request) const;
			DescribeDomainRealTimeDetailDataOutcome describeDomainRealTimeDetailData(const Model::DescribeDomainRealTimeDetailDataRequest &request)const;
			void describeDomainRealTimeDetailDataAsync(const Model::DescribeDomainRealTimeDetailDataRequest& request, const DescribeDomainRealTimeDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeDetailDataOutcomeCallable describeDomainRealTimeDetailDataCallable(const Model::DescribeDomainRealTimeDetailDataRequest& request) const;
			DescribeDomainRealTimeHttpCodeDataOutcome describeDomainRealTimeHttpCodeData(const Model::DescribeDomainRealTimeHttpCodeDataRequest &request)const;
			void describeDomainRealTimeHttpCodeDataAsync(const Model::DescribeDomainRealTimeHttpCodeDataRequest& request, const DescribeDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeHttpCodeDataOutcomeCallable describeDomainRealTimeHttpCodeDataCallable(const Model::DescribeDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeDomainRealTimeQpsDataOutcome describeDomainRealTimeQpsData(const Model::DescribeDomainRealTimeQpsDataRequest &request)const;
			void describeDomainRealTimeQpsDataAsync(const Model::DescribeDomainRealTimeQpsDataRequest& request, const DescribeDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeQpsDataOutcomeCallable describeDomainRealTimeQpsDataCallable(const Model::DescribeDomainRealTimeQpsDataRequest& request) const;
			DescribeDomainRealTimeReqHitRateDataOutcome describeDomainRealTimeReqHitRateData(const Model::DescribeDomainRealTimeReqHitRateDataRequest &request)const;
			void describeDomainRealTimeReqHitRateDataAsync(const Model::DescribeDomainRealTimeReqHitRateDataRequest& request, const DescribeDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeReqHitRateDataOutcomeCallable describeDomainRealTimeReqHitRateDataCallable(const Model::DescribeDomainRealTimeReqHitRateDataRequest& request) const;
			DescribeDomainRealTimeSrcBpsDataOutcome describeDomainRealTimeSrcBpsData(const Model::DescribeDomainRealTimeSrcBpsDataRequest &request)const;
			void describeDomainRealTimeSrcBpsDataAsync(const Model::DescribeDomainRealTimeSrcBpsDataRequest& request, const DescribeDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeSrcBpsDataOutcomeCallable describeDomainRealTimeSrcBpsDataCallable(const Model::DescribeDomainRealTimeSrcBpsDataRequest& request) const;
			DescribeDomainRealTimeSrcHttpCodeDataOutcome describeDomainRealTimeSrcHttpCodeData(const Model::DescribeDomainRealTimeSrcHttpCodeDataRequest &request)const;
			void describeDomainRealTimeSrcHttpCodeDataAsync(const Model::DescribeDomainRealTimeSrcHttpCodeDataRequest& request, const DescribeDomainRealTimeSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeSrcHttpCodeDataOutcomeCallable describeDomainRealTimeSrcHttpCodeDataCallable(const Model::DescribeDomainRealTimeSrcHttpCodeDataRequest& request) const;
			DescribeDomainRealTimeSrcTrafficDataOutcome describeDomainRealTimeSrcTrafficData(const Model::DescribeDomainRealTimeSrcTrafficDataRequest &request)const;
			void describeDomainRealTimeSrcTrafficDataAsync(const Model::DescribeDomainRealTimeSrcTrafficDataRequest& request, const DescribeDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeSrcTrafficDataOutcomeCallable describeDomainRealTimeSrcTrafficDataCallable(const Model::DescribeDomainRealTimeSrcTrafficDataRequest& request) const;
			DescribeDomainRealTimeTrafficDataOutcome describeDomainRealTimeTrafficData(const Model::DescribeDomainRealTimeTrafficDataRequest &request)const;
			void describeDomainRealTimeTrafficDataAsync(const Model::DescribeDomainRealTimeTrafficDataRequest& request, const DescribeDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealTimeTrafficDataOutcomeCallable describeDomainRealTimeTrafficDataCallable(const Model::DescribeDomainRealTimeTrafficDataRequest& request) const;
			DescribeDomainRealtimeLogDeliveryOutcome describeDomainRealtimeLogDelivery(const Model::DescribeDomainRealtimeLogDeliveryRequest &request)const;
			void describeDomainRealtimeLogDeliveryAsync(const Model::DescribeDomainRealtimeLogDeliveryRequest& request, const DescribeDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRealtimeLogDeliveryOutcomeCallable describeDomainRealtimeLogDeliveryCallable(const Model::DescribeDomainRealtimeLogDeliveryRequest& request) const;
			DescribeDomainRegionDataOutcome describeDomainRegionData(const Model::DescribeDomainRegionDataRequest &request)const;
			void describeDomainRegionDataAsync(const Model::DescribeDomainRegionDataRequest& request, const DescribeDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRegionDataOutcomeCallable describeDomainRegionDataCallable(const Model::DescribeDomainRegionDataRequest& request) const;
			DescribeDomainReqHitRateDataOutcome describeDomainReqHitRateData(const Model::DescribeDomainReqHitRateDataRequest &request)const;
			void describeDomainReqHitRateDataAsync(const Model::DescribeDomainReqHitRateDataRequest& request, const DescribeDomainReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainReqHitRateDataOutcomeCallable describeDomainReqHitRateDataCallable(const Model::DescribeDomainReqHitRateDataRequest& request) const;
			DescribeDomainSrcBpsDataOutcome describeDomainSrcBpsData(const Model::DescribeDomainSrcBpsDataRequest &request)const;
			void describeDomainSrcBpsDataAsync(const Model::DescribeDomainSrcBpsDataRequest& request, const DescribeDomainSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcBpsDataOutcomeCallable describeDomainSrcBpsDataCallable(const Model::DescribeDomainSrcBpsDataRequest& request) const;
			DescribeDomainSrcFlowDataOutcome describeDomainSrcFlowData(const Model::DescribeDomainSrcFlowDataRequest &request)const;
			void describeDomainSrcFlowDataAsync(const Model::DescribeDomainSrcFlowDataRequest& request, const DescribeDomainSrcFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcFlowDataOutcomeCallable describeDomainSrcFlowDataCallable(const Model::DescribeDomainSrcFlowDataRequest& request) const;
			DescribeDomainSrcHttpCodeDataOutcome describeDomainSrcHttpCodeData(const Model::DescribeDomainSrcHttpCodeDataRequest &request)const;
			void describeDomainSrcHttpCodeDataAsync(const Model::DescribeDomainSrcHttpCodeDataRequest& request, const DescribeDomainSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcHttpCodeDataOutcomeCallable describeDomainSrcHttpCodeDataCallable(const Model::DescribeDomainSrcHttpCodeDataRequest& request) const;
			DescribeDomainSrcQpsDataOutcome describeDomainSrcQpsData(const Model::DescribeDomainSrcQpsDataRequest &request)const;
			void describeDomainSrcQpsDataAsync(const Model::DescribeDomainSrcQpsDataRequest& request, const DescribeDomainSrcQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcQpsDataOutcomeCallable describeDomainSrcQpsDataCallable(const Model::DescribeDomainSrcQpsDataRequest& request) const;
			DescribeDomainSrcTopUrlVisitOutcome describeDomainSrcTopUrlVisit(const Model::DescribeDomainSrcTopUrlVisitRequest &request)const;
			void describeDomainSrcTopUrlVisitAsync(const Model::DescribeDomainSrcTopUrlVisitRequest& request, const DescribeDomainSrcTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcTopUrlVisitOutcomeCallable describeDomainSrcTopUrlVisitCallable(const Model::DescribeDomainSrcTopUrlVisitRequest& request) const;
			DescribeDomainSrcTrafficDataOutcome describeDomainSrcTrafficData(const Model::DescribeDomainSrcTrafficDataRequest &request)const;
			void describeDomainSrcTrafficDataAsync(const Model::DescribeDomainSrcTrafficDataRequest& request, const DescribeDomainSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSrcTrafficDataOutcomeCallable describeDomainSrcTrafficDataCallable(const Model::DescribeDomainSrcTrafficDataRequest& request) const;
			DescribeDomainTopClientIpVisitOutcome describeDomainTopClientIpVisit(const Model::DescribeDomainTopClientIpVisitRequest &request)const;
			void describeDomainTopClientIpVisitAsync(const Model::DescribeDomainTopClientIpVisitRequest& request, const DescribeDomainTopClientIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainTopClientIpVisitOutcomeCallable describeDomainTopClientIpVisitCallable(const Model::DescribeDomainTopClientIpVisitRequest& request) const;
			DescribeDomainTopReferVisitOutcome describeDomainTopReferVisit(const Model::DescribeDomainTopReferVisitRequest &request)const;
			void describeDomainTopReferVisitAsync(const Model::DescribeDomainTopReferVisitRequest& request, const DescribeDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainTopReferVisitOutcomeCallable describeDomainTopReferVisitCallable(const Model::DescribeDomainTopReferVisitRequest& request) const;
			DescribeDomainTopUrlVisitOutcome describeDomainTopUrlVisit(const Model::DescribeDomainTopUrlVisitRequest &request)const;
			void describeDomainTopUrlVisitAsync(const Model::DescribeDomainTopUrlVisitRequest& request, const DescribeDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainTopUrlVisitOutcomeCallable describeDomainTopUrlVisitCallable(const Model::DescribeDomainTopUrlVisitRequest& request) const;
			DescribeDomainTrafficDataOutcome describeDomainTrafficData(const Model::DescribeDomainTrafficDataRequest &request)const;
			void describeDomainTrafficDataAsync(const Model::DescribeDomainTrafficDataRequest& request, const DescribeDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainTrafficDataOutcomeCallable describeDomainTrafficDataCallable(const Model::DescribeDomainTrafficDataRequest& request) const;
			DescribeDomainUsageDataOutcome describeDomainUsageData(const Model::DescribeDomainUsageDataRequest &request)const;
			void describeDomainUsageDataAsync(const Model::DescribeDomainUsageDataRequest& request, const DescribeDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainUsageDataOutcomeCallable describeDomainUsageDataCallable(const Model::DescribeDomainUsageDataRequest& request) const;
			DescribeDomainUvDataOutcome describeDomainUvData(const Model::DescribeDomainUvDataRequest &request)const;
			void describeDomainUvDataAsync(const Model::DescribeDomainUvDataRequest& request, const DescribeDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainUvDataOutcomeCallable describeDomainUvDataCallable(const Model::DescribeDomainUvDataRequest& request) const;
			DescribeDomainsBySourceOutcome describeDomainsBySource(const Model::DescribeDomainsBySourceRequest &request)const;
			void describeDomainsBySourceAsync(const Model::DescribeDomainsBySourceRequest& request, const DescribeDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsBySourceOutcomeCallable describeDomainsBySourceCallable(const Model::DescribeDomainsBySourceRequest& request) const;
			DescribeDomainsUsageByDayOutcome describeDomainsUsageByDay(const Model::DescribeDomainsUsageByDayRequest &request)const;
			void describeDomainsUsageByDayAsync(const Model::DescribeDomainsUsageByDayRequest& request, const DescribeDomainsUsageByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsUsageByDayOutcomeCallable describeDomainsUsageByDayCallable(const Model::DescribeDomainsUsageByDayRequest& request) const;
			DescribeEsExceptionDataOutcome describeEsExceptionData(const Model::DescribeEsExceptionDataRequest &request)const;
			void describeEsExceptionDataAsync(const Model::DescribeEsExceptionDataRequest& request, const DescribeEsExceptionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEsExceptionDataOutcomeCallable describeEsExceptionDataCallable(const Model::DescribeEsExceptionDataRequest& request) const;
			DescribeEsExecuteDataOutcome describeEsExecuteData(const Model::DescribeEsExecuteDataRequest &request)const;
			void describeEsExecuteDataAsync(const Model::DescribeEsExecuteDataRequest& request, const DescribeEsExecuteDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEsExecuteDataOutcomeCallable describeEsExecuteDataCallable(const Model::DescribeEsExecuteDataRequest& request) const;
			DescribeFCTriggerOutcome describeFCTrigger(const Model::DescribeFCTriggerRequest &request)const;
			void describeFCTriggerAsync(const Model::DescribeFCTriggerRequest& request, const DescribeFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFCTriggerOutcomeCallable describeFCTriggerCallable(const Model::DescribeFCTriggerRequest& request) const;
			DescribeIllegalUrlExportTaskOutcome describeIllegalUrlExportTask(const Model::DescribeIllegalUrlExportTaskRequest &request)const;
			void describeIllegalUrlExportTaskAsync(const Model::DescribeIllegalUrlExportTaskRequest& request, const DescribeIllegalUrlExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIllegalUrlExportTaskOutcomeCallable describeIllegalUrlExportTaskCallable(const Model::DescribeIllegalUrlExportTaskRequest& request) const;
			DescribeIpInfoOutcome describeIpInfo(const Model::DescribeIpInfoRequest &request)const;
			void describeIpInfoAsync(const Model::DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpInfoOutcomeCallable describeIpInfoCallable(const Model::DescribeIpInfoRequest& request) const;
			DescribeIpStatusOutcome describeIpStatus(const Model::DescribeIpStatusRequest &request)const;
			void describeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpStatusOutcomeCallable describeIpStatusCallable(const Model::DescribeIpStatusRequest& request) const;
			DescribeL2VipsByDomainOutcome describeL2VipsByDomain(const Model::DescribeL2VipsByDomainRequest &request)const;
			void describeL2VipsByDomainAsync(const Model::DescribeL2VipsByDomainRequest& request, const DescribeL2VipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeL2VipsByDomainOutcomeCallable describeL2VipsByDomainCallable(const Model::DescribeL2VipsByDomainRequest& request) const;
			DescribeRangeDataByLocateAndIspServiceOutcome describeRangeDataByLocateAndIspService(const Model::DescribeRangeDataByLocateAndIspServiceRequest &request)const;
			void describeRangeDataByLocateAndIspServiceAsync(const Model::DescribeRangeDataByLocateAndIspServiceRequest& request, const DescribeRangeDataByLocateAndIspServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRangeDataByLocateAndIspServiceOutcomeCallable describeRangeDataByLocateAndIspServiceCallable(const Model::DescribeRangeDataByLocateAndIspServiceRequest& request) const;
			DescribeRealtimeDeliveryAccOutcome describeRealtimeDeliveryAcc(const Model::DescribeRealtimeDeliveryAccRequest &request)const;
			void describeRealtimeDeliveryAccAsync(const Model::DescribeRealtimeDeliveryAccRequest& request, const DescribeRealtimeDeliveryAccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRealtimeDeliveryAccOutcomeCallable describeRealtimeDeliveryAccCallable(const Model::DescribeRealtimeDeliveryAccRequest& request) const;
			DescribeRealtimeLogAuthorizedOutcome describeRealtimeLogAuthorized(const Model::DescribeRealtimeLogAuthorizedRequest &request)const;
			void describeRealtimeLogAuthorizedAsync(const Model::DescribeRealtimeLogAuthorizedRequest& request, const DescribeRealtimeLogAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRealtimeLogAuthorizedOutcomeCallable describeRealtimeLogAuthorizedCallable(const Model::DescribeRealtimeLogAuthorizedRequest& request) const;
			DescribeRefreshQuotaOutcome describeRefreshQuota(const Model::DescribeRefreshQuotaRequest &request)const;
			void describeRefreshQuotaAsync(const Model::DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshQuotaOutcomeCallable describeRefreshQuotaCallable(const Model::DescribeRefreshQuotaRequest& request) const;
			DescribeRefreshTaskByIdOutcome describeRefreshTaskById(const Model::DescribeRefreshTaskByIdRequest &request)const;
			void describeRefreshTaskByIdAsync(const Model::DescribeRefreshTaskByIdRequest& request, const DescribeRefreshTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshTaskByIdOutcomeCallable describeRefreshTaskByIdCallable(const Model::DescribeRefreshTaskByIdRequest& request) const;
			DescribeRefreshTasksOutcome describeRefreshTasks(const Model::DescribeRefreshTasksRequest &request)const;
			void describeRefreshTasksAsync(const Model::DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshTasksOutcomeCallable describeRefreshTasksCallable(const Model::DescribeRefreshTasksRequest& request) const;
			DescribeStagingIpOutcome describeStagingIp(const Model::DescribeStagingIpRequest &request)const;
			void describeStagingIpAsync(const Model::DescribeStagingIpRequest& request, const DescribeStagingIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStagingIpOutcomeCallable describeStagingIpCallable(const Model::DescribeStagingIpRequest& request) const;
			DescribeTagResourcesOutcome describeTagResources(const Model::DescribeTagResourcesRequest &request)const;
			void describeTagResourcesAsync(const Model::DescribeTagResourcesRequest& request, const DescribeTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagResourcesOutcomeCallable describeTagResourcesCallable(const Model::DescribeTagResourcesRequest& request) const;
			DescribeTopDomainsByFlowOutcome describeTopDomainsByFlow(const Model::DescribeTopDomainsByFlowRequest &request)const;
			void describeTopDomainsByFlowAsync(const Model::DescribeTopDomainsByFlowRequest& request, const DescribeTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTopDomainsByFlowOutcomeCallable describeTopDomainsByFlowCallable(const Model::DescribeTopDomainsByFlowRequest& request) const;
			DescribeUserCertificateExpireCountOutcome describeUserCertificateExpireCount(const Model::DescribeUserCertificateExpireCountRequest &request)const;
			void describeUserCertificateExpireCountAsync(const Model::DescribeUserCertificateExpireCountRequest& request, const DescribeUserCertificateExpireCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserCertificateExpireCountOutcomeCallable describeUserCertificateExpireCountCallable(const Model::DescribeUserCertificateExpireCountRequest& request) const;
			DescribeUserConfigsOutcome describeUserConfigs(const Model::DescribeUserConfigsRequest &request)const;
			void describeUserConfigsAsync(const Model::DescribeUserConfigsRequest& request, const DescribeUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserConfigsOutcomeCallable describeUserConfigsCallable(const Model::DescribeUserConfigsRequest& request) const;
			DescribeUserDomainsOutcome describeUserDomains(const Model::DescribeUserDomainsRequest &request)const;
			void describeUserDomainsAsync(const Model::DescribeUserDomainsRequest& request, const DescribeUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDomainsOutcomeCallable describeUserDomainsCallable(const Model::DescribeUserDomainsRequest& request) const;
			DescribeUserTagsOutcome describeUserTags(const Model::DescribeUserTagsRequest &request)const;
			void describeUserTagsAsync(const Model::DescribeUserTagsRequest& request, const DescribeUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserTagsOutcomeCallable describeUserTagsCallable(const Model::DescribeUserTagsRequest& request) const;
			DescribeUserUsageDataExportTaskOutcome describeUserUsageDataExportTask(const Model::DescribeUserUsageDataExportTaskRequest &request)const;
			void describeUserUsageDataExportTaskAsync(const Model::DescribeUserUsageDataExportTaskRequest& request, const DescribeUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserUsageDataExportTaskOutcomeCallable describeUserUsageDataExportTaskCallable(const Model::DescribeUserUsageDataExportTaskRequest& request) const;
			DescribeUserUsageDetailDataExportTaskOutcome describeUserUsageDetailDataExportTask(const Model::DescribeUserUsageDetailDataExportTaskRequest &request)const;
			void describeUserUsageDetailDataExportTaskAsync(const Model::DescribeUserUsageDetailDataExportTaskRequest& request, const DescribeUserUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserUsageDetailDataExportTaskOutcomeCallable describeUserUsageDetailDataExportTaskCallable(const Model::DescribeUserUsageDetailDataExportTaskRequest& request) const;
			DescribeUserVipsByDomainOutcome describeUserVipsByDomain(const Model::DescribeUserVipsByDomainRequest &request)const;
			void describeUserVipsByDomainAsync(const Model::DescribeUserVipsByDomainRequest& request, const DescribeUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserVipsByDomainOutcomeCallable describeUserVipsByDomainCallable(const Model::DescribeUserVipsByDomainRequest& request) const;
			DescribeVerifyContentOutcome describeVerifyContent(const Model::DescribeVerifyContentRequest &request)const;
			void describeVerifyContentAsync(const Model::DescribeVerifyContentRequest& request, const DescribeVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyContentOutcomeCallable describeVerifyContentCallable(const Model::DescribeVerifyContentRequest& request) const;
			DisableRealtimeLogDeliveryOutcome disableRealtimeLogDelivery(const Model::DisableRealtimeLogDeliveryRequest &request)const;
			void disableRealtimeLogDeliveryAsync(const Model::DisableRealtimeLogDeliveryRequest& request, const DisableRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableRealtimeLogDeliveryOutcomeCallable disableRealtimeLogDeliveryCallable(const Model::DisableRealtimeLogDeliveryRequest& request) const;
			EnableRealtimeLogDeliveryOutcome enableRealtimeLogDelivery(const Model::EnableRealtimeLogDeliveryRequest &request)const;
			void enableRealtimeLogDeliveryAsync(const Model::EnableRealtimeLogDeliveryRequest& request, const EnableRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRealtimeLogDeliveryOutcomeCallable enableRealtimeLogDeliveryCallable(const Model::EnableRealtimeLogDeliveryRequest& request) const;
			ListDomainsByLogConfigIdOutcome listDomainsByLogConfigId(const Model::ListDomainsByLogConfigIdRequest &request)const;
			void listDomainsByLogConfigIdAsync(const Model::ListDomainsByLogConfigIdRequest& request, const ListDomainsByLogConfigIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDomainsByLogConfigIdOutcomeCallable listDomainsByLogConfigIdCallable(const Model::ListDomainsByLogConfigIdRequest& request) const;
			ListFCTriggerOutcome listFCTrigger(const Model::ListFCTriggerRequest &request)const;
			void listFCTriggerAsync(const Model::ListFCTriggerRequest& request, const ListFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFCTriggerOutcomeCallable listFCTriggerCallable(const Model::ListFCTriggerRequest& request) const;
			ListRealtimeLogDeliveryDomainsOutcome listRealtimeLogDeliveryDomains(const Model::ListRealtimeLogDeliveryDomainsRequest &request)const;
			void listRealtimeLogDeliveryDomainsAsync(const Model::ListRealtimeLogDeliveryDomainsRequest& request, const ListRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealtimeLogDeliveryDomainsOutcomeCallable listRealtimeLogDeliveryDomainsCallable(const Model::ListRealtimeLogDeliveryDomainsRequest& request) const;
			ListRealtimeLogDeliveryInfosOutcome listRealtimeLogDeliveryInfos(const Model::ListRealtimeLogDeliveryInfosRequest &request)const;
			void listRealtimeLogDeliveryInfosAsync(const Model::ListRealtimeLogDeliveryInfosRequest& request, const ListRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealtimeLogDeliveryInfosOutcomeCallable listRealtimeLogDeliveryInfosCallable(const Model::ListRealtimeLogDeliveryInfosRequest& request) const;
			ListUserCustomLogConfigOutcome listUserCustomLogConfig(const Model::ListUserCustomLogConfigRequest &request)const;
			void listUserCustomLogConfigAsync(const Model::ListUserCustomLogConfigRequest& request, const ListUserCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserCustomLogConfigOutcomeCallable listUserCustomLogConfigCallable(const Model::ListUserCustomLogConfigRequest& request) const;
			ModifyCdnDomainOutcome modifyCdnDomain(const Model::ModifyCdnDomainRequest &request)const;
			void modifyCdnDomainAsync(const Model::ModifyCdnDomainRequest& request, const ModifyCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCdnDomainOutcomeCallable modifyCdnDomainCallable(const Model::ModifyCdnDomainRequest& request) const;
			ModifyCdnDomainSchdmByPropertyOutcome modifyCdnDomainSchdmByProperty(const Model::ModifyCdnDomainSchdmByPropertyRequest &request)const;
			void modifyCdnDomainSchdmByPropertyAsync(const Model::ModifyCdnDomainSchdmByPropertyRequest& request, const ModifyCdnDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCdnDomainSchdmByPropertyOutcomeCallable modifyCdnDomainSchdmByPropertyCallable(const Model::ModifyCdnDomainSchdmByPropertyRequest& request) const;
			ModifyRealtimeLogDeliveryOutcome modifyRealtimeLogDelivery(const Model::ModifyRealtimeLogDeliveryRequest &request)const;
			void modifyRealtimeLogDeliveryAsync(const Model::ModifyRealtimeLogDeliveryRequest& request, const ModifyRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRealtimeLogDeliveryOutcomeCallable modifyRealtimeLogDeliveryCallable(const Model::ModifyRealtimeLogDeliveryRequest& request) const;
			OpenCdnServiceOutcome openCdnService(const Model::OpenCdnServiceRequest &request)const;
			void openCdnServiceAsync(const Model::OpenCdnServiceRequest& request, const OpenCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenCdnServiceOutcomeCallable openCdnServiceCallable(const Model::OpenCdnServiceRequest& request) const;
			PublishStagingConfigToProductionOutcome publishStagingConfigToProduction(const Model::PublishStagingConfigToProductionRequest &request)const;
			void publishStagingConfigToProductionAsync(const Model::PublishStagingConfigToProductionRequest& request, const PublishStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishStagingConfigToProductionOutcomeCallable publishStagingConfigToProductionCallable(const Model::PublishStagingConfigToProductionRequest& request) const;
			PushObjectCacheOutcome pushObjectCache(const Model::PushObjectCacheRequest &request)const;
			void pushObjectCacheAsync(const Model::PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushObjectCacheOutcomeCallable pushObjectCacheCallable(const Model::PushObjectCacheRequest& request) const;
			RefreshObjectCachesOutcome refreshObjectCaches(const Model::RefreshObjectCachesRequest &request)const;
			void refreshObjectCachesAsync(const Model::RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshObjectCachesOutcomeCallable refreshObjectCachesCallable(const Model::RefreshObjectCachesRequest& request) const;
			RollbackStagingConfigOutcome rollbackStagingConfig(const Model::RollbackStagingConfigRequest &request)const;
			void rollbackStagingConfigAsync(const Model::RollbackStagingConfigRequest& request, const RollbackStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackStagingConfigOutcomeCallable rollbackStagingConfigCallable(const Model::RollbackStagingConfigRequest& request) const;
			SetCdnDomainCSRCertificateOutcome setCdnDomainCSRCertificate(const Model::SetCdnDomainCSRCertificateRequest &request)const;
			void setCdnDomainCSRCertificateAsync(const Model::SetCdnDomainCSRCertificateRequest& request, const SetCdnDomainCSRCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCdnDomainCSRCertificateOutcomeCallable setCdnDomainCSRCertificateCallable(const Model::SetCdnDomainCSRCertificateRequest& request) const;
			SetCdnDomainSMCertificateOutcome setCdnDomainSMCertificate(const Model::SetCdnDomainSMCertificateRequest &request)const;
			void setCdnDomainSMCertificateAsync(const Model::SetCdnDomainSMCertificateRequest& request, const SetCdnDomainSMCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCdnDomainSMCertificateOutcomeCallable setCdnDomainSMCertificateCallable(const Model::SetCdnDomainSMCertificateRequest& request) const;
			SetCdnDomainStagingConfigOutcome setCdnDomainStagingConfig(const Model::SetCdnDomainStagingConfigRequest &request)const;
			void setCdnDomainStagingConfigAsync(const Model::SetCdnDomainStagingConfigRequest& request, const SetCdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCdnDomainStagingConfigOutcomeCallable setCdnDomainStagingConfigCallable(const Model::SetCdnDomainStagingConfigRequest& request) const;
			SetConfigOfVersionOutcome setConfigOfVersion(const Model::SetConfigOfVersionRequest &request)const;
			void setConfigOfVersionAsync(const Model::SetConfigOfVersionRequest& request, const SetConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetConfigOfVersionOutcomeCallable setConfigOfVersionCallable(const Model::SetConfigOfVersionRequest& request) const;
			SetDomainServerCertificateOutcome setDomainServerCertificate(const Model::SetDomainServerCertificateRequest &request)const;
			void setDomainServerCertificateAsync(const Model::SetDomainServerCertificateRequest& request, const SetDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainServerCertificateOutcomeCallable setDomainServerCertificateCallable(const Model::SetDomainServerCertificateRequest& request) const;
			SetReqHeaderConfigOutcome setReqHeaderConfig(const Model::SetReqHeaderConfigRequest &request)const;
			void setReqHeaderConfigAsync(const Model::SetReqHeaderConfigRequest& request, const SetReqHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetReqHeaderConfigOutcomeCallable setReqHeaderConfigCallable(const Model::SetReqHeaderConfigRequest& request) const;
			SetWaitingRoomConfigOutcome setWaitingRoomConfig(const Model::SetWaitingRoomConfigRequest &request)const;
			void setWaitingRoomConfigAsync(const Model::SetWaitingRoomConfigRequest& request, const SetWaitingRoomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetWaitingRoomConfigOutcomeCallable setWaitingRoomConfigCallable(const Model::SetWaitingRoomConfigRequest& request) const;
			StartCdnDomainOutcome startCdnDomain(const Model::StartCdnDomainRequest &request)const;
			void startCdnDomainAsync(const Model::StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCdnDomainOutcomeCallable startCdnDomainCallable(const Model::StartCdnDomainRequest& request) const;
			StopCdnDomainOutcome stopCdnDomain(const Model::StopCdnDomainRequest &request)const;
			void stopCdnDomainAsync(const Model::StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCdnDomainOutcomeCallable stopCdnDomainCallable(const Model::StopCdnDomainRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TestDescribeDomainBpsDataOutcome testDescribeDomainBpsData(const Model::TestDescribeDomainBpsDataRequest &request)const;
			void testDescribeDomainBpsDataAsync(const Model::TestDescribeDomainBpsDataRequest& request, const TestDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDescribeDomainBpsDataOutcomeCallable testDescribeDomainBpsDataCallable(const Model::TestDescribeDomainBpsDataRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateCdnDeliverTaskOutcome updateCdnDeliverTask(const Model::UpdateCdnDeliverTaskRequest &request)const;
			void updateCdnDeliverTaskAsync(const Model::UpdateCdnDeliverTaskRequest& request, const UpdateCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCdnDeliverTaskOutcomeCallable updateCdnDeliverTaskCallable(const Model::UpdateCdnDeliverTaskRequest& request) const;
			UpdateCdnSubTaskOutcome updateCdnSubTask(const Model::UpdateCdnSubTaskRequest &request)const;
			void updateCdnSubTaskAsync(const Model::UpdateCdnSubTaskRequest& request, const UpdateCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCdnSubTaskOutcomeCallable updateCdnSubTaskCallable(const Model::UpdateCdnSubTaskRequest& request) const;
			UpdateFCTriggerOutcome updateFCTrigger(const Model::UpdateFCTriggerRequest &request)const;
			void updateFCTriggerAsync(const Model::UpdateFCTriggerRequest& request, const UpdateFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFCTriggerOutcomeCallable updateFCTriggerCallable(const Model::UpdateFCTriggerRequest& request) const;
			VerifyDomainOwnerOutcome verifyDomainOwner(const Model::VerifyDomainOwnerRequest &request)const;
			void verifyDomainOwnerAsync(const Model::VerifyDomainOwnerRequest& request, const VerifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyDomainOwnerOutcomeCallable verifyDomainOwnerCallable(const Model::VerifyDomainOwnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CDN_CDNCLIENT_H_
