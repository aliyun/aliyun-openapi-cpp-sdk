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
#include "model/DescribeCdnDomainDetailRequest.h"
#include "model/DescribeCdnDomainDetailResult.h"
#include "model/DescribeCdnDomainLogsRequest.h"
#include "model/DescribeCdnDomainLogsResult.h"
#include "model/DescribeCdnServiceRequest.h"
#include "model/DescribeCdnServiceResult.h"
#include "model/DescribeDomainBpsDataRequest.h"
#include "model/DescribeDomainBpsDataResult.h"
#include "model/DescribeDomainBpsDataByTimeStampRequest.h"
#include "model/DescribeDomainBpsDataByTimeStampResult.h"
#include "model/DescribeDomainFileSizeProportionDataRequest.h"
#include "model/DescribeDomainFileSizeProportionDataResult.h"
#include "model/DescribeDomainFlowDataRequest.h"
#include "model/DescribeDomainFlowDataResult.h"
#include "model/DescribeDomainHitRateDataRequest.h"
#include "model/DescribeDomainHitRateDataResult.h"
#include "model/DescribeDomainHttpCodeDataRequest.h"
#include "model/DescribeDomainHttpCodeDataResult.h"
#include "model/DescribeDomainISPDataRequest.h"
#include "model/DescribeDomainISPDataResult.h"
#include "model/DescribeDomainQpsDataRequest.h"
#include "model/DescribeDomainQpsDataResult.h"
#include "model/DescribeDomainRegionDataRequest.h"
#include "model/DescribeDomainRegionDataResult.h"
#include "model/DescribeDomainReqHitRateDataRequest.h"
#include "model/DescribeDomainReqHitRateDataResult.h"
#include "model/DescribeDomainSrcBpsDataRequest.h"
#include "model/DescribeDomainSrcBpsDataResult.h"
#include "model/DescribeDomainSrcFlowDataRequest.h"
#include "model/DescribeDomainSrcFlowDataResult.h"
#include "model/DescribeDomainUvDataRequest.h"
#include "model/DescribeDomainUvDataResult.h"
#include "model/DescribeDomainsBySourceRequest.h"
#include "model/DescribeDomainsBySourceResult.h"
#include "model/DescribeDomainsUsageByDayRequest.h"
#include "model/DescribeDomainsUsageByDayResult.h"
#include "model/DescribeRefreshQuotaRequest.h"
#include "model/DescribeRefreshQuotaResult.h"
#include "model/DescribeTopDomainsByFlowRequest.h"
#include "model/DescribeTopDomainsByFlowResult.h"
#include "model/DescribeUserDomainsRequest.h"
#include "model/DescribeUserDomainsResult.h"
#include "model/OpenCdnServiceRequest.h"
#include "model/OpenCdnServiceResult.h"
#include "model/PushObjectCacheRequest.h"
#include "model/PushObjectCacheResult.h"
#include "model/RefreshObjectCachesRequest.h"
#include "model/RefreshObjectCachesResult.h"
#include "model/TestDescribeDomainBpsDataRequest.h"
#include "model/TestDescribeDomainBpsDataResult.h"


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
			typedef Outcome<Error, Model::DescribeCdnDomainDetailResult> DescribeCdnDomainDetailOutcome;
			typedef std::future<DescribeCdnDomainDetailOutcome> DescribeCdnDomainDetailOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainDetailRequest&, const DescribeCdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnDomainLogsResult> DescribeCdnDomainLogsOutcome;
			typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, const DescribeCdnDomainLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnServiceResult> DescribeCdnServiceOutcome;
			typedef std::future<DescribeCdnServiceOutcome> DescribeCdnServiceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeCdnServiceRequest&, const DescribeCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataResult> DescribeDomainBpsDataOutcome;
			typedef std::future<DescribeDomainBpsDataOutcome> DescribeDomainBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataRequest&, const DescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBpsDataByTimeStampResult> DescribeDomainBpsDataByTimeStampOutcome;
			typedef std::future<DescribeDomainBpsDataByTimeStampOutcome> DescribeDomainBpsDataByTimeStampOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainBpsDataByTimeStampRequest&, const DescribeDomainBpsDataByTimeStampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBpsDataByTimeStampAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDomainISPDataResult> DescribeDomainISPDataOutcome;
			typedef std::future<DescribeDomainISPDataOutcome> DescribeDomainISPDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainISPDataRequest&, const DescribeDomainISPDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainISPDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsDataResult> DescribeDomainQpsDataOutcome;
			typedef std::future<DescribeDomainQpsDataOutcome> DescribeDomainQpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainQpsDataRequest&, const DescribeDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsDataAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDomainUvDataResult> DescribeDomainUvDataOutcome;
			typedef std::future<DescribeDomainUvDataOutcome> DescribeDomainUvDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainUvDataRequest&, const DescribeDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsBySourceResult> DescribeDomainsBySourceOutcome;
			typedef std::future<DescribeDomainsBySourceOutcome> DescribeDomainsBySourceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsBySourceRequest&, const DescribeDomainsBySourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsBySourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsUsageByDayResult> DescribeDomainsUsageByDayOutcome;
			typedef std::future<DescribeDomainsUsageByDayOutcome> DescribeDomainsUsageByDayOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeDomainsUsageByDayRequest&, const DescribeDomainsUsageByDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsUsageByDayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRefreshQuotaResult> DescribeRefreshQuotaOutcome;
			typedef std::future<DescribeRefreshQuotaOutcome> DescribeRefreshQuotaOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeRefreshQuotaRequest&, const DescribeRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopDomainsByFlowResult> DescribeTopDomainsByFlowOutcome;
			typedef std::future<DescribeTopDomainsByFlowOutcome> DescribeTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeTopDomainsByFlowRequest&, const DescribeTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDomainsResult> DescribeUserDomainsOutcome;
			typedef std::future<DescribeUserDomainsOutcome> DescribeUserDomainsOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::DescribeUserDomainsRequest&, const DescribeUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::OpenCdnServiceResult> OpenCdnServiceOutcome;
			typedef std::future<OpenCdnServiceOutcome> OpenCdnServiceOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::OpenCdnServiceRequest&, const OpenCdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCdnServiceAsyncHandler;
			typedef Outcome<Error, Model::PushObjectCacheResult> PushObjectCacheOutcome;
			typedef std::future<PushObjectCacheOutcome> PushObjectCacheOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::PushObjectCacheRequest&, const PushObjectCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushObjectCacheAsyncHandler;
			typedef Outcome<Error, Model::RefreshObjectCachesResult> RefreshObjectCachesOutcome;
			typedef std::future<RefreshObjectCachesOutcome> RefreshObjectCachesOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::RefreshObjectCachesRequest&, const RefreshObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::TestDescribeDomainBpsDataResult> TestDescribeDomainBpsDataOutcome;
			typedef std::future<TestDescribeDomainBpsDataOutcome> TestDescribeDomainBpsDataOutcomeCallable;
			typedef std::function<void(const CdnClient*, const Model::TestDescribeDomainBpsDataRequest&, const TestDescribeDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDescribeDomainBpsDataAsyncHandler;

			CdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CdnClient();
			AddCdnDomainOutcome addCdnDomain(const Model::AddCdnDomainRequest &request)const;
			void addCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCdnDomainOutcomeCallable addCdnDomainCallable(const Model::AddCdnDomainRequest& request) const;
			DescribeCdnDomainDetailOutcome describeCdnDomainDetail(const Model::DescribeCdnDomainDetailRequest &request)const;
			void describeCdnDomainDetailAsync(const Model::DescribeCdnDomainDetailRequest& request, const DescribeCdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainDetailOutcomeCallable describeCdnDomainDetailCallable(const Model::DescribeCdnDomainDetailRequest& request) const;
			DescribeCdnDomainLogsOutcome describeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request)const;
			void describeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnDomainLogsOutcomeCallable describeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request) const;
			DescribeCdnServiceOutcome describeCdnService(const Model::DescribeCdnServiceRequest &request)const;
			void describeCdnServiceAsync(const Model::DescribeCdnServiceRequest& request, const DescribeCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnServiceOutcomeCallable describeCdnServiceCallable(const Model::DescribeCdnServiceRequest& request) const;
			DescribeDomainBpsDataOutcome describeDomainBpsData(const Model::DescribeDomainBpsDataRequest &request)const;
			void describeDomainBpsDataAsync(const Model::DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataOutcomeCallable describeDomainBpsDataCallable(const Model::DescribeDomainBpsDataRequest& request) const;
			DescribeDomainBpsDataByTimeStampOutcome describeDomainBpsDataByTimeStamp(const Model::DescribeDomainBpsDataByTimeStampRequest &request)const;
			void describeDomainBpsDataByTimeStampAsync(const Model::DescribeDomainBpsDataByTimeStampRequest& request, const DescribeDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBpsDataByTimeStampOutcomeCallable describeDomainBpsDataByTimeStampCallable(const Model::DescribeDomainBpsDataByTimeStampRequest& request) const;
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
			DescribeDomainISPDataOutcome describeDomainISPData(const Model::DescribeDomainISPDataRequest &request)const;
			void describeDomainISPDataAsync(const Model::DescribeDomainISPDataRequest& request, const DescribeDomainISPDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainISPDataOutcomeCallable describeDomainISPDataCallable(const Model::DescribeDomainISPDataRequest& request) const;
			DescribeDomainQpsDataOutcome describeDomainQpsData(const Model::DescribeDomainQpsDataRequest &request)const;
			void describeDomainQpsDataAsync(const Model::DescribeDomainQpsDataRequest& request, const DescribeDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQpsDataOutcomeCallable describeDomainQpsDataCallable(const Model::DescribeDomainQpsDataRequest& request) const;
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
			DescribeDomainUvDataOutcome describeDomainUvData(const Model::DescribeDomainUvDataRequest &request)const;
			void describeDomainUvDataAsync(const Model::DescribeDomainUvDataRequest& request, const DescribeDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainUvDataOutcomeCallable describeDomainUvDataCallable(const Model::DescribeDomainUvDataRequest& request) const;
			DescribeDomainsBySourceOutcome describeDomainsBySource(const Model::DescribeDomainsBySourceRequest &request)const;
			void describeDomainsBySourceAsync(const Model::DescribeDomainsBySourceRequest& request, const DescribeDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsBySourceOutcomeCallable describeDomainsBySourceCallable(const Model::DescribeDomainsBySourceRequest& request) const;
			DescribeDomainsUsageByDayOutcome describeDomainsUsageByDay(const Model::DescribeDomainsUsageByDayRequest &request)const;
			void describeDomainsUsageByDayAsync(const Model::DescribeDomainsUsageByDayRequest& request, const DescribeDomainsUsageByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsUsageByDayOutcomeCallable describeDomainsUsageByDayCallable(const Model::DescribeDomainsUsageByDayRequest& request) const;
			DescribeRefreshQuotaOutcome describeRefreshQuota(const Model::DescribeRefreshQuotaRequest &request)const;
			void describeRefreshQuotaAsync(const Model::DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRefreshQuotaOutcomeCallable describeRefreshQuotaCallable(const Model::DescribeRefreshQuotaRequest& request) const;
			DescribeTopDomainsByFlowOutcome describeTopDomainsByFlow(const Model::DescribeTopDomainsByFlowRequest &request)const;
			void describeTopDomainsByFlowAsync(const Model::DescribeTopDomainsByFlowRequest& request, const DescribeTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTopDomainsByFlowOutcomeCallable describeTopDomainsByFlowCallable(const Model::DescribeTopDomainsByFlowRequest& request) const;
			DescribeUserDomainsOutcome describeUserDomains(const Model::DescribeUserDomainsRequest &request)const;
			void describeUserDomainsAsync(const Model::DescribeUserDomainsRequest& request, const DescribeUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDomainsOutcomeCallable describeUserDomainsCallable(const Model::DescribeUserDomainsRequest& request) const;
			OpenCdnServiceOutcome openCdnService(const Model::OpenCdnServiceRequest &request)const;
			void openCdnServiceAsync(const Model::OpenCdnServiceRequest& request, const OpenCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenCdnServiceOutcomeCallable openCdnServiceCallable(const Model::OpenCdnServiceRequest& request) const;
			PushObjectCacheOutcome pushObjectCache(const Model::PushObjectCacheRequest &request)const;
			void pushObjectCacheAsync(const Model::PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushObjectCacheOutcomeCallable pushObjectCacheCallable(const Model::PushObjectCacheRequest& request) const;
			RefreshObjectCachesOutcome refreshObjectCaches(const Model::RefreshObjectCachesRequest &request)const;
			void refreshObjectCachesAsync(const Model::RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshObjectCachesOutcomeCallable refreshObjectCachesCallable(const Model::RefreshObjectCachesRequest& request) const;
			TestDescribeDomainBpsDataOutcome testDescribeDomainBpsData(const Model::TestDescribeDomainBpsDataRequest &request)const;
			void testDescribeDomainBpsDataAsync(const Model::TestDescribeDomainBpsDataRequest& request, const TestDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDescribeDomainBpsDataOutcomeCallable testDescribeDomainBpsDataCallable(const Model::TestDescribeDomainBpsDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CDN_CDNCLIENT_H_
