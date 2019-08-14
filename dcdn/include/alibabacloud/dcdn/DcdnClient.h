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

#ifndef ALIBABACLOUD_DCDN_DCDNCLIENT_H_
#define ALIBABACLOUD_DCDN_DCDNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DcdnExport.h"
#include "model/DescribeDcdnUserResourcePackageRequest.h"
#include "model/DescribeDcdnUserResourcePackageResult.h"
#include "model/DescribeDcdnDomainTopUrlVisitRequest.h"
#include "model/DescribeDcdnDomainTopUrlVisitResult.h"
#include "model/DescribeDcdnRefreshQuotaRequest.h"
#include "model/DescribeDcdnRefreshQuotaResult.h"
#include "model/SetDcdnDomainCertificateRequest.h"
#include "model/SetDcdnDomainCertificateResult.h"
#include "model/DescribeDcdnDomainOriginBpsDataRequest.h"
#include "model/DescribeDcdnDomainOriginBpsDataResult.h"
#include "model/DescribeDcdnRefreshTasksRequest.h"
#include "model/DescribeDcdnRefreshTasksResult.h"
#include "model/UpdateDcdnDomainRequest.h"
#include "model/UpdateDcdnDomainResult.h"
#include "model/DeleteDcdnDomainRequest.h"
#include "model/DeleteDcdnDomainResult.h"
#include "model/BatchDeleteDcdnDomainConfigsRequest.h"
#include "model/BatchDeleteDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnDomainDetailRequest.h"
#include "model/DescribeDcdnDomainDetailResult.h"
#include "model/DescribeDcdnDomainConfigsRequest.h"
#include "model/DescribeDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnCertificateListRequest.h"
#include "model/DescribeDcdnCertificateListResult.h"
#include "model/DescribeDcdnIpaDomainConfigsRequest.h"
#include "model/DescribeDcdnIpaDomainConfigsResult.h"
#include "model/DescribeDcdnDomainWebsocketBpsDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketBpsDataResult.h"
#include "model/DescribeDcdnDomainRealTimeSrcBpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeSrcBpsDataResult.h"
#include "model/DescribeDcdnDomainTrafficDataRequest.h"
#include "model/DescribeDcdnDomainTrafficDataResult.h"
#include "model/DescribeDcdnTopDomainsByFlowRequest.h"
#include "model/DescribeDcdnTopDomainsByFlowResult.h"
#include "model/DescribeDcdnDomainRealTimeSrcTrafficDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeSrcTrafficDataResult.h"
#include "model/DescribeDcdnDomainRealTimeByteHitRateDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeByteHitRateDataResult.h"
#include "model/DescribeDcdnDomainPvDataRequest.h"
#include "model/DescribeDcdnDomainPvDataResult.h"
#include "model/DescribeDcdnDomainQpsDataRequest.h"
#include "model/DescribeDcdnDomainQpsDataResult.h"
#include "model/DescribeDcdnDomainIspDataRequest.h"
#include "model/DescribeDcdnDomainIspDataResult.h"
#include "model/DescribeDcdnDomainWebsocketHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainRealTimeBpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeBpsDataResult.h"
#include "model/ModifyDCdnDomainSchdmByPropertyRequest.h"
#include "model/ModifyDCdnDomainSchdmByPropertyResult.h"
#include "model/DescribeDcdnDomainCnameRequest.h"
#include "model/DescribeDcdnDomainCnameResult.h"
#include "model/DescribeDcdnDomainTopReferVisitRequest.h"
#include "model/DescribeDcdnDomainTopReferVisitResult.h"
#include "model/StopDcdnDomainRequest.h"
#include "model/StopDcdnDomainResult.h"
#include "model/UpdateDcdnIpaDomainRequest.h"
#include "model/UpdateDcdnIpaDomainResult.h"
#include "model/DescribeDcdnIpaServiceRequest.h"
#include "model/DescribeDcdnIpaServiceResult.h"
#include "model/BatchSetDcdnDomainConfigsRequest.h"
#include "model/BatchSetDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainLogRequest.h"
#include "model/DescribeDcdnDomainLogResult.h"
#include "model/DescribeDcdnDomainUvDataRequest.h"
#include "model/DescribeDcdnDomainUvDataResult.h"
#include "model/BatchSetDcdnIpaDomainConfigsRequest.h"
#include "model/BatchSetDcdnIpaDomainConfigsResult.h"
#include "model/DescribeDcdnUserQuotaRequest.h"
#include "model/DescribeDcdnUserQuotaResult.h"
#include "model/DescribeDcdnDomainCertificateInfoRequest.h"
#include "model/DescribeDcdnDomainCertificateInfoResult.h"
#include "model/DescribeDcdnDomainIpaTrafficDataRequest.h"
#include "model/DescribeDcdnDomainIpaTrafficDataResult.h"
#include "model/StartDcdnIpaDomainRequest.h"
#include "model/StartDcdnIpaDomainResult.h"
#include "model/DescribeDcdnServiceRequest.h"
#include "model/DescribeDcdnServiceResult.h"
#include "model/DescribeDcdnDomainRealTimeReqHitRateDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeReqHitRateDataResult.h"
#include "model/AddDcdnIpaDomainRequest.h"
#include "model/AddDcdnIpaDomainResult.h"
#include "model/DescribeDcdnDomainWebsocketTrafficDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketTrafficDataResult.h"
#include "model/DescribeDcdnDomainHitRateDataRequest.h"
#include "model/DescribeDcdnDomainHitRateDataResult.h"
#include "model/DescribeDcdnDomainBpsDataRequest.h"
#include "model/DescribeDcdnDomainBpsDataResult.h"
#include "model/DeleteDcdnIpaDomainRequest.h"
#include "model/DeleteDcdnIpaDomainResult.h"
#include "model/DescribeDcdnCertificateDetailRequest.h"
#include "model/DescribeDcdnCertificateDetailResult.h"
#include "model/DescribeDcdnDomainOriginTrafficDataRequest.h"
#include "model/DescribeDcdnDomainOriginTrafficDataResult.h"
#include "model/DescribeDcdnDomainRealTimeQpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeQpsDataResult.h"
#include "model/RefreshDcdnObjectCachesRequest.h"
#include "model/RefreshDcdnObjectCachesResult.h"
#include "model/StopDcdnIpaDomainRequest.h"
#include "model/StopDcdnIpaDomainResult.h"
#include "model/DescribeUserDcdnStatusRequest.h"
#include "model/DescribeUserDcdnStatusResult.h"
#include "model/DescribeDcdnDomainRegionDataRequest.h"
#include "model/DescribeDcdnDomainRegionDataResult.h"
#include "model/DescribeDcdnDomainIpaBpsDataRequest.h"
#include "model/DescribeDcdnDomainIpaBpsDataResult.h"
#include "model/StartDcdnDomainRequest.h"
#include "model/StartDcdnDomainResult.h"
#include "model/DescribeDcdnUserDomainsRequest.h"
#include "model/DescribeDcdnUserDomainsResult.h"
#include "model/DescribeDcdnIpaUserDomainsRequest.h"
#include "model/DescribeDcdnIpaUserDomainsResult.h"
#include "model/DescribeUserDcdnIpaStatusRequest.h"
#include "model/DescribeUserDcdnIpaStatusResult.h"
#include "model/DescribeDcdnDomainHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainHttpCodeDataResult.h"
#include "model/DescribeDcdnIpaDomainDetailRequest.h"
#include "model/DescribeDcdnIpaDomainDetailResult.h"
#include "model/AddDcdnDomainRequest.h"
#include "model/AddDcdnDomainResult.h"
#include "model/PreloadDcdnObjectCachesRequest.h"
#include "model/PreloadDcdnObjectCachesResult.h"


namespace AlibabaCloud
{
	namespace Dcdn
	{
		class ALIBABACLOUD_DCDN_EXPORT DcdnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeDcdnUserResourcePackageResult> DescribeDcdnUserResourcePackageOutcome;
			typedef std::future<DescribeDcdnUserResourcePackageOutcome> DescribeDcdnUserResourcePackageOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserResourcePackageRequest&, const DescribeDcdnUserResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTopUrlVisitResult> DescribeDcdnDomainTopUrlVisitOutcome;
			typedef std::future<DescribeDcdnDomainTopUrlVisitOutcome> DescribeDcdnDomainTopUrlVisitOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTopUrlVisitRequest&, const DescribeDcdnDomainTopUrlVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTopUrlVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshQuotaResult> DescribeDcdnRefreshQuotaOutcome;
			typedef std::future<DescribeDcdnRefreshQuotaOutcome> DescribeDcdnRefreshQuotaOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshQuotaRequest&, const DescribeDcdnRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainCertificateResult> SetDcdnDomainCertificateOutcome;
			typedef std::future<SetDcdnDomainCertificateOutcome> SetDcdnDomainCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainCertificateRequest&, const SetDcdnDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginBpsDataResult> DescribeDcdnDomainOriginBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginBpsDataOutcome> DescribeDcdnDomainOriginBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginBpsDataRequest&, const DescribeDcdnDomainOriginBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshTasksResult> DescribeDcdnRefreshTasksOutcome;
			typedef std::future<DescribeDcdnRefreshTasksOutcome> DescribeDcdnRefreshTasksOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshTasksRequest&, const DescribeDcdnRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnDomainResult> UpdateDcdnDomainOutcome;
			typedef std::future<UpdateDcdnDomainOutcome> UpdateDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnDomainRequest&, const UpdateDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnDomainResult> DeleteDcdnDomainOutcome;
			typedef std::future<DeleteDcdnDomainOutcome> DeleteDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnDomainRequest&, const DeleteDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDcdnDomainConfigsResult> BatchDeleteDcdnDomainConfigsOutcome;
			typedef std::future<BatchDeleteDcdnDomainConfigsOutcome> BatchDeleteDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchDeleteDcdnDomainConfigsRequest&, const BatchDeleteDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainDetailResult> DescribeDcdnDomainDetailOutcome;
			typedef std::future<DescribeDcdnDomainDetailOutcome> DescribeDcdnDomainDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainDetailRequest&, const DescribeDcdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainConfigsResult> DescribeDcdnDomainConfigsOutcome;
			typedef std::future<DescribeDcdnDomainConfigsOutcome> DescribeDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainConfigsRequest&, const DescribeDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateListResult> DescribeDcdnCertificateListOutcome;
			typedef std::future<DescribeDcdnCertificateListOutcome> DescribeDcdnCertificateListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateListRequest&, const DescribeDcdnCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaDomainConfigsResult> DescribeDcdnIpaDomainConfigsOutcome;
			typedef std::future<DescribeDcdnIpaDomainConfigsOutcome> DescribeDcdnIpaDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaDomainConfigsRequest&, const DescribeDcdnIpaDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketBpsDataResult> DescribeDcdnDomainWebsocketBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketBpsDataOutcome> DescribeDcdnDomainWebsocketBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketBpsDataRequest&, const DescribeDcdnDomainWebsocketBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeSrcBpsDataResult> DescribeDcdnDomainRealTimeSrcBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeSrcBpsDataOutcome> DescribeDcdnDomainRealTimeSrcBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest&, const DescribeDcdnDomainRealTimeSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTrafficDataResult> DescribeDcdnDomainTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainTrafficDataOutcome> DescribeDcdnDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTrafficDataRequest&, const DescribeDcdnDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnTopDomainsByFlowResult> DescribeDcdnTopDomainsByFlowOutcome;
			typedef std::future<DescribeDcdnTopDomainsByFlowOutcome> DescribeDcdnTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnTopDomainsByFlowRequest&, const DescribeDcdnTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeSrcTrafficDataResult> DescribeDcdnDomainRealTimeSrcTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeSrcTrafficDataOutcome> DescribeDcdnDomainRealTimeSrcTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest&, const DescribeDcdnDomainRealTimeSrcTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeSrcTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeByteHitRateDataResult> DescribeDcdnDomainRealTimeByteHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeByteHitRateDataOutcome> DescribeDcdnDomainRealTimeByteHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest&, const DescribeDcdnDomainRealTimeByteHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeByteHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainPvDataResult> DescribeDcdnDomainPvDataOutcome;
			typedef std::future<DescribeDcdnDomainPvDataOutcome> DescribeDcdnDomainPvDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainPvDataRequest&, const DescribeDcdnDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainQpsDataResult> DescribeDcdnDomainQpsDataOutcome;
			typedef std::future<DescribeDcdnDomainQpsDataOutcome> DescribeDcdnDomainQpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainQpsDataRequest&, const DescribeDcdnDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIspDataResult> DescribeDcdnDomainIspDataOutcome;
			typedef std::future<DescribeDcdnDomainIspDataOutcome> DescribeDcdnDomainIspDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIspDataRequest&, const DescribeDcdnDomainIspDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIspDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketHttpCodeDataResult> DescribeDcdnDomainWebsocketHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketHttpCodeDataOutcome> DescribeDcdnDomainWebsocketHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest&, const DescribeDcdnDomainWebsocketHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeBpsDataResult> DescribeDcdnDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeBpsDataOutcome> DescribeDcdnDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeBpsDataRequest&, const DescribeDcdnDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::ModifyDCdnDomainSchdmByPropertyResult> ModifyDCdnDomainSchdmByPropertyOutcome;
			typedef std::future<ModifyDCdnDomainSchdmByPropertyOutcome> ModifyDCdnDomainSchdmByPropertyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDCdnDomainSchdmByPropertyRequest&, const ModifyDCdnDomainSchdmByPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDCdnDomainSchdmByPropertyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCnameResult> DescribeDcdnDomainCnameOutcome;
			typedef std::future<DescribeDcdnDomainCnameOutcome> DescribeDcdnDomainCnameOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCnameRequest&, const DescribeDcdnDomainCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTopReferVisitResult> DescribeDcdnDomainTopReferVisitOutcome;
			typedef std::future<DescribeDcdnDomainTopReferVisitOutcome> DescribeDcdnDomainTopReferVisitOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTopReferVisitRequest&, const DescribeDcdnDomainTopReferVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTopReferVisitAsyncHandler;
			typedef Outcome<Error, Model::StopDcdnDomainResult> StopDcdnDomainOutcome;
			typedef std::future<StopDcdnDomainOutcome> StopDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StopDcdnDomainRequest&, const StopDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnIpaDomainResult> UpdateDcdnIpaDomainOutcome;
			typedef std::future<UpdateDcdnIpaDomainOutcome> UpdateDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnIpaDomainRequest&, const UpdateDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaServiceResult> DescribeDcdnIpaServiceOutcome;
			typedef std::future<DescribeDcdnIpaServiceOutcome> DescribeDcdnIpaServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaServiceRequest&, const DescribeDcdnIpaServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaServiceAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnDomainConfigsResult> BatchSetDcdnDomainConfigsOutcome;
			typedef std::future<BatchSetDcdnDomainConfigsOutcome> BatchSetDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnDomainConfigsRequest&, const BatchSetDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeHttpCodeDataResult> DescribeDcdnDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeHttpCodeDataOutcome> DescribeDcdnDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest&, const DescribeDcdnDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainLogResult> DescribeDcdnDomainLogOutcome;
			typedef std::future<DescribeDcdnDomainLogOutcome> DescribeDcdnDomainLogOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainLogRequest&, const DescribeDcdnDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainUvDataResult> DescribeDcdnDomainUvDataOutcome;
			typedef std::future<DescribeDcdnDomainUvDataOutcome> DescribeDcdnDomainUvDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainUvDataRequest&, const DescribeDcdnDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnIpaDomainConfigsResult> BatchSetDcdnIpaDomainConfigsOutcome;
			typedef std::future<BatchSetDcdnIpaDomainConfigsOutcome> BatchSetDcdnIpaDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnIpaDomainConfigsRequest&, const BatchSetDcdnIpaDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnIpaDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserQuotaResult> DescribeDcdnUserQuotaOutcome;
			typedef std::future<DescribeDcdnUserQuotaOutcome> DescribeDcdnUserQuotaOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserQuotaRequest&, const DescribeDcdnUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCertificateInfoResult> DescribeDcdnDomainCertificateInfoOutcome;
			typedef std::future<DescribeDcdnDomainCertificateInfoOutcome> DescribeDcdnDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCertificateInfoRequest&, const DescribeDcdnDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIpaTrafficDataResult> DescribeDcdnDomainIpaTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainIpaTrafficDataOutcome> DescribeDcdnDomainIpaTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIpaTrafficDataRequest&, const DescribeDcdnDomainIpaTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIpaTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::StartDcdnIpaDomainResult> StartDcdnIpaDomainOutcome;
			typedef std::future<StartDcdnIpaDomainOutcome> StartDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StartDcdnIpaDomainRequest&, const StartDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnServiceResult> DescribeDcdnServiceOutcome;
			typedef std::future<DescribeDcdnServiceOutcome> DescribeDcdnServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnServiceRequest&, const DescribeDcdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeReqHitRateDataResult> DescribeDcdnDomainRealTimeReqHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeReqHitRateDataOutcome> DescribeDcdnDomainRealTimeReqHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest&, const DescribeDcdnDomainRealTimeReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::AddDcdnIpaDomainResult> AddDcdnIpaDomainOutcome;
			typedef std::future<AddDcdnIpaDomainOutcome> AddDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::AddDcdnIpaDomainRequest&, const AddDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketTrafficDataResult> DescribeDcdnDomainWebsocketTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketTrafficDataOutcome> DescribeDcdnDomainWebsocketTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketTrafficDataRequest&, const DescribeDcdnDomainWebsocketTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHitRateDataResult> DescribeDcdnDomainHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainHitRateDataOutcome> DescribeDcdnDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHitRateDataRequest&, const DescribeDcdnDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainBpsDataResult> DescribeDcdnDomainBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainBpsDataOutcome> DescribeDcdnDomainBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainBpsDataRequest&, const DescribeDcdnDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnIpaDomainResult> DeleteDcdnIpaDomainOutcome;
			typedef std::future<DeleteDcdnIpaDomainOutcome> DeleteDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnIpaDomainRequest&, const DeleteDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateDetailResult> DescribeDcdnCertificateDetailOutcome;
			typedef std::future<DescribeDcdnCertificateDetailOutcome> DescribeDcdnCertificateDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateDetailRequest&, const DescribeDcdnCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginTrafficDataResult> DescribeDcdnDomainOriginTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginTrafficDataOutcome> DescribeDcdnDomainOriginTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginTrafficDataRequest&, const DescribeDcdnDomainOriginTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeQpsDataResult> DescribeDcdnDomainRealTimeQpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeQpsDataOutcome> DescribeDcdnDomainRealTimeQpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeQpsDataRequest&, const DescribeDcdnDomainRealTimeQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeQpsDataAsyncHandler;
			typedef Outcome<Error, Model::RefreshDcdnObjectCachesResult> RefreshDcdnObjectCachesOutcome;
			typedef std::future<RefreshDcdnObjectCachesOutcome> RefreshDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RefreshDcdnObjectCachesRequest&, const RefreshDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDcdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::StopDcdnIpaDomainResult> StopDcdnIpaDomainOutcome;
			typedef std::future<StopDcdnIpaDomainOutcome> StopDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StopDcdnIpaDomainRequest&, const StopDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDcdnStatusResult> DescribeUserDcdnStatusOutcome;
			typedef std::future<DescribeUserDcdnStatusOutcome> DescribeUserDcdnStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserDcdnStatusRequest&, const DescribeUserDcdnStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDcdnStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRegionDataResult> DescribeDcdnDomainRegionDataOutcome;
			typedef std::future<DescribeDcdnDomainRegionDataOutcome> DescribeDcdnDomainRegionDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRegionDataRequest&, const DescribeDcdnDomainRegionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRegionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIpaBpsDataResult> DescribeDcdnDomainIpaBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainIpaBpsDataOutcome> DescribeDcdnDomainIpaBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIpaBpsDataRequest&, const DescribeDcdnDomainIpaBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIpaBpsDataAsyncHandler;
			typedef Outcome<Error, Model::StartDcdnDomainResult> StartDcdnDomainOutcome;
			typedef std::future<StartDcdnDomainOutcome> StartDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StartDcdnDomainRequest&, const StartDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserDomainsResult> DescribeDcdnUserDomainsOutcome;
			typedef std::future<DescribeDcdnUserDomainsOutcome> DescribeDcdnUserDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserDomainsRequest&, const DescribeDcdnUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaUserDomainsResult> DescribeDcdnIpaUserDomainsOutcome;
			typedef std::future<DescribeDcdnIpaUserDomainsOutcome> DescribeDcdnIpaUserDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaUserDomainsRequest&, const DescribeDcdnIpaUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDcdnIpaStatusResult> DescribeUserDcdnIpaStatusOutcome;
			typedef std::future<DescribeUserDcdnIpaStatusOutcome> DescribeUserDcdnIpaStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserDcdnIpaStatusRequest&, const DescribeUserDcdnIpaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDcdnIpaStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHttpCodeDataResult> DescribeDcdnDomainHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainHttpCodeDataOutcome> DescribeDcdnDomainHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHttpCodeDataRequest&, const DescribeDcdnDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaDomainDetailResult> DescribeDcdnIpaDomainDetailOutcome;
			typedef std::future<DescribeDcdnIpaDomainDetailOutcome> DescribeDcdnIpaDomainDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaDomainDetailRequest&, const DescribeDcdnIpaDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::AddDcdnDomainResult> AddDcdnDomainOutcome;
			typedef std::future<AddDcdnDomainOutcome> AddDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::AddDcdnDomainRequest&, const AddDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::PreloadDcdnObjectCachesResult> PreloadDcdnObjectCachesOutcome;
			typedef std::future<PreloadDcdnObjectCachesOutcome> PreloadDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PreloadDcdnObjectCachesRequest&, const PreloadDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadDcdnObjectCachesAsyncHandler;

			DcdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DcdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DcdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DcdnClient();
			DescribeDcdnUserResourcePackageOutcome describeDcdnUserResourcePackage(const Model::DescribeDcdnUserResourcePackageRequest &request)const;
			void describeDcdnUserResourcePackageAsync(const Model::DescribeDcdnUserResourcePackageRequest& request, const DescribeDcdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserResourcePackageOutcomeCallable describeDcdnUserResourcePackageCallable(const Model::DescribeDcdnUserResourcePackageRequest& request) const;
			DescribeDcdnDomainTopUrlVisitOutcome describeDcdnDomainTopUrlVisit(const Model::DescribeDcdnDomainTopUrlVisitRequest &request)const;
			void describeDcdnDomainTopUrlVisitAsync(const Model::DescribeDcdnDomainTopUrlVisitRequest& request, const DescribeDcdnDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTopUrlVisitOutcomeCallable describeDcdnDomainTopUrlVisitCallable(const Model::DescribeDcdnDomainTopUrlVisitRequest& request) const;
			DescribeDcdnRefreshQuotaOutcome describeDcdnRefreshQuota(const Model::DescribeDcdnRefreshQuotaRequest &request)const;
			void describeDcdnRefreshQuotaAsync(const Model::DescribeDcdnRefreshQuotaRequest& request, const DescribeDcdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshQuotaOutcomeCallable describeDcdnRefreshQuotaCallable(const Model::DescribeDcdnRefreshQuotaRequest& request) const;
			SetDcdnDomainCertificateOutcome setDcdnDomainCertificate(const Model::SetDcdnDomainCertificateRequest &request)const;
			void setDcdnDomainCertificateAsync(const Model::SetDcdnDomainCertificateRequest& request, const SetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainCertificateOutcomeCallable setDcdnDomainCertificateCallable(const Model::SetDcdnDomainCertificateRequest& request) const;
			DescribeDcdnDomainOriginBpsDataOutcome describeDcdnDomainOriginBpsData(const Model::DescribeDcdnDomainOriginBpsDataRequest &request)const;
			void describeDcdnDomainOriginBpsDataAsync(const Model::DescribeDcdnDomainOriginBpsDataRequest& request, const DescribeDcdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginBpsDataOutcomeCallable describeDcdnDomainOriginBpsDataCallable(const Model::DescribeDcdnDomainOriginBpsDataRequest& request) const;
			DescribeDcdnRefreshTasksOutcome describeDcdnRefreshTasks(const Model::DescribeDcdnRefreshTasksRequest &request)const;
			void describeDcdnRefreshTasksAsync(const Model::DescribeDcdnRefreshTasksRequest& request, const DescribeDcdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshTasksOutcomeCallable describeDcdnRefreshTasksCallable(const Model::DescribeDcdnRefreshTasksRequest& request) const;
			UpdateDcdnDomainOutcome updateDcdnDomain(const Model::UpdateDcdnDomainRequest &request)const;
			void updateDcdnDomainAsync(const Model::UpdateDcdnDomainRequest& request, const UpdateDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnDomainOutcomeCallable updateDcdnDomainCallable(const Model::UpdateDcdnDomainRequest& request) const;
			DeleteDcdnDomainOutcome deleteDcdnDomain(const Model::DeleteDcdnDomainRequest &request)const;
			void deleteDcdnDomainAsync(const Model::DeleteDcdnDomainRequest& request, const DeleteDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnDomainOutcomeCallable deleteDcdnDomainCallable(const Model::DeleteDcdnDomainRequest& request) const;
			BatchDeleteDcdnDomainConfigsOutcome batchDeleteDcdnDomainConfigs(const Model::BatchDeleteDcdnDomainConfigsRequest &request)const;
			void batchDeleteDcdnDomainConfigsAsync(const Model::BatchDeleteDcdnDomainConfigsRequest& request, const BatchDeleteDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDcdnDomainConfigsOutcomeCallable batchDeleteDcdnDomainConfigsCallable(const Model::BatchDeleteDcdnDomainConfigsRequest& request) const;
			DescribeDcdnDomainDetailOutcome describeDcdnDomainDetail(const Model::DescribeDcdnDomainDetailRequest &request)const;
			void describeDcdnDomainDetailAsync(const Model::DescribeDcdnDomainDetailRequest& request, const DescribeDcdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainDetailOutcomeCallable describeDcdnDomainDetailCallable(const Model::DescribeDcdnDomainDetailRequest& request) const;
			DescribeDcdnDomainConfigsOutcome describeDcdnDomainConfigs(const Model::DescribeDcdnDomainConfigsRequest &request)const;
			void describeDcdnDomainConfigsAsync(const Model::DescribeDcdnDomainConfigsRequest& request, const DescribeDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainConfigsOutcomeCallable describeDcdnDomainConfigsCallable(const Model::DescribeDcdnDomainConfigsRequest& request) const;
			DescribeDcdnCertificateListOutcome describeDcdnCertificateList(const Model::DescribeDcdnCertificateListRequest &request)const;
			void describeDcdnCertificateListAsync(const Model::DescribeDcdnCertificateListRequest& request, const DescribeDcdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateListOutcomeCallable describeDcdnCertificateListCallable(const Model::DescribeDcdnCertificateListRequest& request) const;
			DescribeDcdnIpaDomainConfigsOutcome describeDcdnIpaDomainConfigs(const Model::DescribeDcdnIpaDomainConfigsRequest &request)const;
			void describeDcdnIpaDomainConfigsAsync(const Model::DescribeDcdnIpaDomainConfigsRequest& request, const DescribeDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaDomainConfigsOutcomeCallable describeDcdnIpaDomainConfigsCallable(const Model::DescribeDcdnIpaDomainConfigsRequest& request) const;
			DescribeDcdnDomainWebsocketBpsDataOutcome describeDcdnDomainWebsocketBpsData(const Model::DescribeDcdnDomainWebsocketBpsDataRequest &request)const;
			void describeDcdnDomainWebsocketBpsDataAsync(const Model::DescribeDcdnDomainWebsocketBpsDataRequest& request, const DescribeDcdnDomainWebsocketBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketBpsDataOutcomeCallable describeDcdnDomainWebsocketBpsDataCallable(const Model::DescribeDcdnDomainWebsocketBpsDataRequest& request) const;
			DescribeDcdnDomainRealTimeSrcBpsDataOutcome describeDcdnDomainRealTimeSrcBpsData(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest &request)const;
			void describeDcdnDomainRealTimeSrcBpsDataAsync(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest& request, const DescribeDcdnDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeSrcBpsDataOutcomeCallable describeDcdnDomainRealTimeSrcBpsDataCallable(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest& request) const;
			DescribeDcdnDomainTrafficDataOutcome describeDcdnDomainTrafficData(const Model::DescribeDcdnDomainTrafficDataRequest &request)const;
			void describeDcdnDomainTrafficDataAsync(const Model::DescribeDcdnDomainTrafficDataRequest& request, const DescribeDcdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTrafficDataOutcomeCallable describeDcdnDomainTrafficDataCallable(const Model::DescribeDcdnDomainTrafficDataRequest& request) const;
			DescribeDcdnTopDomainsByFlowOutcome describeDcdnTopDomainsByFlow(const Model::DescribeDcdnTopDomainsByFlowRequest &request)const;
			void describeDcdnTopDomainsByFlowAsync(const Model::DescribeDcdnTopDomainsByFlowRequest& request, const DescribeDcdnTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnTopDomainsByFlowOutcomeCallable describeDcdnTopDomainsByFlowCallable(const Model::DescribeDcdnTopDomainsByFlowRequest& request) const;
			DescribeDcdnDomainRealTimeSrcTrafficDataOutcome describeDcdnDomainRealTimeSrcTrafficData(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request)const;
			void describeDcdnDomainRealTimeSrcTrafficDataAsync(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest& request, const DescribeDcdnDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeSrcTrafficDataOutcomeCallable describeDcdnDomainRealTimeSrcTrafficDataCallable(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest& request) const;
			DescribeDcdnDomainRealTimeByteHitRateDataOutcome describeDcdnDomainRealTimeByteHitRateData(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest &request)const;
			void describeDcdnDomainRealTimeByteHitRateDataAsync(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest& request, const DescribeDcdnDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeByteHitRateDataOutcomeCallable describeDcdnDomainRealTimeByteHitRateDataCallable(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest& request) const;
			DescribeDcdnDomainPvDataOutcome describeDcdnDomainPvData(const Model::DescribeDcdnDomainPvDataRequest &request)const;
			void describeDcdnDomainPvDataAsync(const Model::DescribeDcdnDomainPvDataRequest& request, const DescribeDcdnDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainPvDataOutcomeCallable describeDcdnDomainPvDataCallable(const Model::DescribeDcdnDomainPvDataRequest& request) const;
			DescribeDcdnDomainQpsDataOutcome describeDcdnDomainQpsData(const Model::DescribeDcdnDomainQpsDataRequest &request)const;
			void describeDcdnDomainQpsDataAsync(const Model::DescribeDcdnDomainQpsDataRequest& request, const DescribeDcdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainQpsDataOutcomeCallable describeDcdnDomainQpsDataCallable(const Model::DescribeDcdnDomainQpsDataRequest& request) const;
			DescribeDcdnDomainIspDataOutcome describeDcdnDomainIspData(const Model::DescribeDcdnDomainIspDataRequest &request)const;
			void describeDcdnDomainIspDataAsync(const Model::DescribeDcdnDomainIspDataRequest& request, const DescribeDcdnDomainIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIspDataOutcomeCallable describeDcdnDomainIspDataCallable(const Model::DescribeDcdnDomainIspDataRequest& request) const;
			DescribeDcdnDomainWebsocketHttpCodeDataOutcome describeDcdnDomainWebsocketHttpCodeData(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest &request)const;
			void describeDcdnDomainWebsocketHttpCodeDataAsync(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest& request, const DescribeDcdnDomainWebsocketHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketHttpCodeDataOutcomeCallable describeDcdnDomainWebsocketHttpCodeDataCallable(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest& request) const;
			DescribeDcdnDomainRealTimeBpsDataOutcome describeDcdnDomainRealTimeBpsData(const Model::DescribeDcdnDomainRealTimeBpsDataRequest &request)const;
			void describeDcdnDomainRealTimeBpsDataAsync(const Model::DescribeDcdnDomainRealTimeBpsDataRequest& request, const DescribeDcdnDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeBpsDataOutcomeCallable describeDcdnDomainRealTimeBpsDataCallable(const Model::DescribeDcdnDomainRealTimeBpsDataRequest& request) const;
			ModifyDCdnDomainSchdmByPropertyOutcome modifyDCdnDomainSchdmByProperty(const Model::ModifyDCdnDomainSchdmByPropertyRequest &request)const;
			void modifyDCdnDomainSchdmByPropertyAsync(const Model::ModifyDCdnDomainSchdmByPropertyRequest& request, const ModifyDCdnDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDCdnDomainSchdmByPropertyOutcomeCallable modifyDCdnDomainSchdmByPropertyCallable(const Model::ModifyDCdnDomainSchdmByPropertyRequest& request) const;
			DescribeDcdnDomainCnameOutcome describeDcdnDomainCname(const Model::DescribeDcdnDomainCnameRequest &request)const;
			void describeDcdnDomainCnameAsync(const Model::DescribeDcdnDomainCnameRequest& request, const DescribeDcdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCnameOutcomeCallable describeDcdnDomainCnameCallable(const Model::DescribeDcdnDomainCnameRequest& request) const;
			DescribeDcdnDomainTopReferVisitOutcome describeDcdnDomainTopReferVisit(const Model::DescribeDcdnDomainTopReferVisitRequest &request)const;
			void describeDcdnDomainTopReferVisitAsync(const Model::DescribeDcdnDomainTopReferVisitRequest& request, const DescribeDcdnDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTopReferVisitOutcomeCallable describeDcdnDomainTopReferVisitCallable(const Model::DescribeDcdnDomainTopReferVisitRequest& request) const;
			StopDcdnDomainOutcome stopDcdnDomain(const Model::StopDcdnDomainRequest &request)const;
			void stopDcdnDomainAsync(const Model::StopDcdnDomainRequest& request, const StopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDcdnDomainOutcomeCallable stopDcdnDomainCallable(const Model::StopDcdnDomainRequest& request) const;
			UpdateDcdnIpaDomainOutcome updateDcdnIpaDomain(const Model::UpdateDcdnIpaDomainRequest &request)const;
			void updateDcdnIpaDomainAsync(const Model::UpdateDcdnIpaDomainRequest& request, const UpdateDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnIpaDomainOutcomeCallable updateDcdnIpaDomainCallable(const Model::UpdateDcdnIpaDomainRequest& request) const;
			DescribeDcdnIpaServiceOutcome describeDcdnIpaService(const Model::DescribeDcdnIpaServiceRequest &request)const;
			void describeDcdnIpaServiceAsync(const Model::DescribeDcdnIpaServiceRequest& request, const DescribeDcdnIpaServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaServiceOutcomeCallable describeDcdnIpaServiceCallable(const Model::DescribeDcdnIpaServiceRequest& request) const;
			BatchSetDcdnDomainConfigsOutcome batchSetDcdnDomainConfigs(const Model::BatchSetDcdnDomainConfigsRequest &request)const;
			void batchSetDcdnDomainConfigsAsync(const Model::BatchSetDcdnDomainConfigsRequest& request, const BatchSetDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnDomainConfigsOutcomeCallable batchSetDcdnDomainConfigsCallable(const Model::BatchSetDcdnDomainConfigsRequest& request) const;
			DescribeDcdnDomainRealTimeHttpCodeDataOutcome describeDcdnDomainRealTimeHttpCodeData(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest &request)const;
			void describeDcdnDomainRealTimeHttpCodeDataAsync(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest& request, const DescribeDcdnDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeHttpCodeDataOutcomeCallable describeDcdnDomainRealTimeHttpCodeDataCallable(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeDcdnDomainLogOutcome describeDcdnDomainLog(const Model::DescribeDcdnDomainLogRequest &request)const;
			void describeDcdnDomainLogAsync(const Model::DescribeDcdnDomainLogRequest& request, const DescribeDcdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainLogOutcomeCallable describeDcdnDomainLogCallable(const Model::DescribeDcdnDomainLogRequest& request) const;
			DescribeDcdnDomainUvDataOutcome describeDcdnDomainUvData(const Model::DescribeDcdnDomainUvDataRequest &request)const;
			void describeDcdnDomainUvDataAsync(const Model::DescribeDcdnDomainUvDataRequest& request, const DescribeDcdnDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainUvDataOutcomeCallable describeDcdnDomainUvDataCallable(const Model::DescribeDcdnDomainUvDataRequest& request) const;
			BatchSetDcdnIpaDomainConfigsOutcome batchSetDcdnIpaDomainConfigs(const Model::BatchSetDcdnIpaDomainConfigsRequest &request)const;
			void batchSetDcdnIpaDomainConfigsAsync(const Model::BatchSetDcdnIpaDomainConfigsRequest& request, const BatchSetDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnIpaDomainConfigsOutcomeCallable batchSetDcdnIpaDomainConfigsCallable(const Model::BatchSetDcdnIpaDomainConfigsRequest& request) const;
			DescribeDcdnUserQuotaOutcome describeDcdnUserQuota(const Model::DescribeDcdnUserQuotaRequest &request)const;
			void describeDcdnUserQuotaAsync(const Model::DescribeDcdnUserQuotaRequest& request, const DescribeDcdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserQuotaOutcomeCallable describeDcdnUserQuotaCallable(const Model::DescribeDcdnUserQuotaRequest& request) const;
			DescribeDcdnDomainCertificateInfoOutcome describeDcdnDomainCertificateInfo(const Model::DescribeDcdnDomainCertificateInfoRequest &request)const;
			void describeDcdnDomainCertificateInfoAsync(const Model::DescribeDcdnDomainCertificateInfoRequest& request, const DescribeDcdnDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCertificateInfoOutcomeCallable describeDcdnDomainCertificateInfoCallable(const Model::DescribeDcdnDomainCertificateInfoRequest& request) const;
			DescribeDcdnDomainIpaTrafficDataOutcome describeDcdnDomainIpaTrafficData(const Model::DescribeDcdnDomainIpaTrafficDataRequest &request)const;
			void describeDcdnDomainIpaTrafficDataAsync(const Model::DescribeDcdnDomainIpaTrafficDataRequest& request, const DescribeDcdnDomainIpaTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIpaTrafficDataOutcomeCallable describeDcdnDomainIpaTrafficDataCallable(const Model::DescribeDcdnDomainIpaTrafficDataRequest& request) const;
			StartDcdnIpaDomainOutcome startDcdnIpaDomain(const Model::StartDcdnIpaDomainRequest &request)const;
			void startDcdnIpaDomainAsync(const Model::StartDcdnIpaDomainRequest& request, const StartDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDcdnIpaDomainOutcomeCallable startDcdnIpaDomainCallable(const Model::StartDcdnIpaDomainRequest& request) const;
			DescribeDcdnServiceOutcome describeDcdnService(const Model::DescribeDcdnServiceRequest &request)const;
			void describeDcdnServiceAsync(const Model::DescribeDcdnServiceRequest& request, const DescribeDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnServiceOutcomeCallable describeDcdnServiceCallable(const Model::DescribeDcdnServiceRequest& request) const;
			DescribeDcdnDomainRealTimeReqHitRateDataOutcome describeDcdnDomainRealTimeReqHitRateData(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest &request)const;
			void describeDcdnDomainRealTimeReqHitRateDataAsync(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest& request, const DescribeDcdnDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeReqHitRateDataOutcomeCallable describeDcdnDomainRealTimeReqHitRateDataCallable(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest& request) const;
			AddDcdnIpaDomainOutcome addDcdnIpaDomain(const Model::AddDcdnIpaDomainRequest &request)const;
			void addDcdnIpaDomainAsync(const Model::AddDcdnIpaDomainRequest& request, const AddDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDcdnIpaDomainOutcomeCallable addDcdnIpaDomainCallable(const Model::AddDcdnIpaDomainRequest& request) const;
			DescribeDcdnDomainWebsocketTrafficDataOutcome describeDcdnDomainWebsocketTrafficData(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest &request)const;
			void describeDcdnDomainWebsocketTrafficDataAsync(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest& request, const DescribeDcdnDomainWebsocketTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketTrafficDataOutcomeCallable describeDcdnDomainWebsocketTrafficDataCallable(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest& request) const;
			DescribeDcdnDomainHitRateDataOutcome describeDcdnDomainHitRateData(const Model::DescribeDcdnDomainHitRateDataRequest &request)const;
			void describeDcdnDomainHitRateDataAsync(const Model::DescribeDcdnDomainHitRateDataRequest& request, const DescribeDcdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHitRateDataOutcomeCallable describeDcdnDomainHitRateDataCallable(const Model::DescribeDcdnDomainHitRateDataRequest& request) const;
			DescribeDcdnDomainBpsDataOutcome describeDcdnDomainBpsData(const Model::DescribeDcdnDomainBpsDataRequest &request)const;
			void describeDcdnDomainBpsDataAsync(const Model::DescribeDcdnDomainBpsDataRequest& request, const DescribeDcdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainBpsDataOutcomeCallable describeDcdnDomainBpsDataCallable(const Model::DescribeDcdnDomainBpsDataRequest& request) const;
			DeleteDcdnIpaDomainOutcome deleteDcdnIpaDomain(const Model::DeleteDcdnIpaDomainRequest &request)const;
			void deleteDcdnIpaDomainAsync(const Model::DeleteDcdnIpaDomainRequest& request, const DeleteDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnIpaDomainOutcomeCallable deleteDcdnIpaDomainCallable(const Model::DeleteDcdnIpaDomainRequest& request) const;
			DescribeDcdnCertificateDetailOutcome describeDcdnCertificateDetail(const Model::DescribeDcdnCertificateDetailRequest &request)const;
			void describeDcdnCertificateDetailAsync(const Model::DescribeDcdnCertificateDetailRequest& request, const DescribeDcdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateDetailOutcomeCallable describeDcdnCertificateDetailCallable(const Model::DescribeDcdnCertificateDetailRequest& request) const;
			DescribeDcdnDomainOriginTrafficDataOutcome describeDcdnDomainOriginTrafficData(const Model::DescribeDcdnDomainOriginTrafficDataRequest &request)const;
			void describeDcdnDomainOriginTrafficDataAsync(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request, const DescribeDcdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginTrafficDataOutcomeCallable describeDcdnDomainOriginTrafficDataCallable(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request) const;
			DescribeDcdnDomainRealTimeQpsDataOutcome describeDcdnDomainRealTimeQpsData(const Model::DescribeDcdnDomainRealTimeQpsDataRequest &request)const;
			void describeDcdnDomainRealTimeQpsDataAsync(const Model::DescribeDcdnDomainRealTimeQpsDataRequest& request, const DescribeDcdnDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeQpsDataOutcomeCallable describeDcdnDomainRealTimeQpsDataCallable(const Model::DescribeDcdnDomainRealTimeQpsDataRequest& request) const;
			RefreshDcdnObjectCachesOutcome refreshDcdnObjectCaches(const Model::RefreshDcdnObjectCachesRequest &request)const;
			void refreshDcdnObjectCachesAsync(const Model::RefreshDcdnObjectCachesRequest& request, const RefreshDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDcdnObjectCachesOutcomeCallable refreshDcdnObjectCachesCallable(const Model::RefreshDcdnObjectCachesRequest& request) const;
			StopDcdnIpaDomainOutcome stopDcdnIpaDomain(const Model::StopDcdnIpaDomainRequest &request)const;
			void stopDcdnIpaDomainAsync(const Model::StopDcdnIpaDomainRequest& request, const StopDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDcdnIpaDomainOutcomeCallable stopDcdnIpaDomainCallable(const Model::StopDcdnIpaDomainRequest& request) const;
			DescribeUserDcdnStatusOutcome describeUserDcdnStatus(const Model::DescribeUserDcdnStatusRequest &request)const;
			void describeUserDcdnStatusAsync(const Model::DescribeUserDcdnStatusRequest& request, const DescribeUserDcdnStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDcdnStatusOutcomeCallable describeUserDcdnStatusCallable(const Model::DescribeUserDcdnStatusRequest& request) const;
			DescribeDcdnDomainRegionDataOutcome describeDcdnDomainRegionData(const Model::DescribeDcdnDomainRegionDataRequest &request)const;
			void describeDcdnDomainRegionDataAsync(const Model::DescribeDcdnDomainRegionDataRequest& request, const DescribeDcdnDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRegionDataOutcomeCallable describeDcdnDomainRegionDataCallable(const Model::DescribeDcdnDomainRegionDataRequest& request) const;
			DescribeDcdnDomainIpaBpsDataOutcome describeDcdnDomainIpaBpsData(const Model::DescribeDcdnDomainIpaBpsDataRequest &request)const;
			void describeDcdnDomainIpaBpsDataAsync(const Model::DescribeDcdnDomainIpaBpsDataRequest& request, const DescribeDcdnDomainIpaBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIpaBpsDataOutcomeCallable describeDcdnDomainIpaBpsDataCallable(const Model::DescribeDcdnDomainIpaBpsDataRequest& request) const;
			StartDcdnDomainOutcome startDcdnDomain(const Model::StartDcdnDomainRequest &request)const;
			void startDcdnDomainAsync(const Model::StartDcdnDomainRequest& request, const StartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDcdnDomainOutcomeCallable startDcdnDomainCallable(const Model::StartDcdnDomainRequest& request) const;
			DescribeDcdnUserDomainsOutcome describeDcdnUserDomains(const Model::DescribeDcdnUserDomainsRequest &request)const;
			void describeDcdnUserDomainsAsync(const Model::DescribeDcdnUserDomainsRequest& request, const DescribeDcdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserDomainsOutcomeCallable describeDcdnUserDomainsCallable(const Model::DescribeDcdnUserDomainsRequest& request) const;
			DescribeDcdnIpaUserDomainsOutcome describeDcdnIpaUserDomains(const Model::DescribeDcdnIpaUserDomainsRequest &request)const;
			void describeDcdnIpaUserDomainsAsync(const Model::DescribeDcdnIpaUserDomainsRequest& request, const DescribeDcdnIpaUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaUserDomainsOutcomeCallable describeDcdnIpaUserDomainsCallable(const Model::DescribeDcdnIpaUserDomainsRequest& request) const;
			DescribeUserDcdnIpaStatusOutcome describeUserDcdnIpaStatus(const Model::DescribeUserDcdnIpaStatusRequest &request)const;
			void describeUserDcdnIpaStatusAsync(const Model::DescribeUserDcdnIpaStatusRequest& request, const DescribeUserDcdnIpaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDcdnIpaStatusOutcomeCallable describeUserDcdnIpaStatusCallable(const Model::DescribeUserDcdnIpaStatusRequest& request) const;
			DescribeDcdnDomainHttpCodeDataOutcome describeDcdnDomainHttpCodeData(const Model::DescribeDcdnDomainHttpCodeDataRequest &request)const;
			void describeDcdnDomainHttpCodeDataAsync(const Model::DescribeDcdnDomainHttpCodeDataRequest& request, const DescribeDcdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHttpCodeDataOutcomeCallable describeDcdnDomainHttpCodeDataCallable(const Model::DescribeDcdnDomainHttpCodeDataRequest& request) const;
			DescribeDcdnIpaDomainDetailOutcome describeDcdnIpaDomainDetail(const Model::DescribeDcdnIpaDomainDetailRequest &request)const;
			void describeDcdnIpaDomainDetailAsync(const Model::DescribeDcdnIpaDomainDetailRequest& request, const DescribeDcdnIpaDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaDomainDetailOutcomeCallable describeDcdnIpaDomainDetailCallable(const Model::DescribeDcdnIpaDomainDetailRequest& request) const;
			AddDcdnDomainOutcome addDcdnDomain(const Model::AddDcdnDomainRequest &request)const;
			void addDcdnDomainAsync(const Model::AddDcdnDomainRequest& request, const AddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDcdnDomainOutcomeCallable addDcdnDomainCallable(const Model::AddDcdnDomainRequest& request) const;
			PreloadDcdnObjectCachesOutcome preloadDcdnObjectCaches(const Model::PreloadDcdnObjectCachesRequest &request)const;
			void preloadDcdnObjectCachesAsync(const Model::PreloadDcdnObjectCachesRequest& request, const PreloadDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadDcdnObjectCachesOutcomeCallable preloadDcdnObjectCachesCallable(const Model::PreloadDcdnObjectCachesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DCDN_DCDNCLIENT_H_
