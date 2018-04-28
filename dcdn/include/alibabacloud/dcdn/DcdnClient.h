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
#include "model/DescribeDcdnRefreshQuotaRequest.h"
#include "model/DescribeDcdnRefreshQuotaResult.h"
#include "model/SetDcdnDomainCertificateRequest.h"
#include "model/SetDcdnDomainCertificateResult.h"
#include "model/DescribeDcdnDomainLogRequest.h"
#include "model/DescribeDcdnDomainLogResult.h"
#include "model/DescribeDcdnDomainOriginBpsDataRequest.h"
#include "model/DescribeDcdnDomainOriginBpsDataResult.h"
#include "model/DescribeDcdnRefreshTasksRequest.h"
#include "model/DescribeDcdnRefreshTasksResult.h"
#include "model/DescribeDcdnServiceRequest.h"
#include "model/DescribeDcdnServiceResult.h"
#include "model/UpdateDcdnDomainRequest.h"
#include "model/UpdateDcdnDomainResult.h"
#include "model/DeleteDcdnDomainRequest.h"
#include "model/DeleteDcdnDomainResult.h"
#include "model/BatchDeleteDcdnDomainConfigsRequest.h"
#include "model/BatchDeleteDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnDomainDetailRequest.h"
#include "model/DescribeDcdnDomainDetailResult.h"
#include "model/DescribeDcdnDomainHitRateDataRequest.h"
#include "model/DescribeDcdnDomainHitRateDataResult.h"
#include "model/DescribeDcdnDomainConfigsRequest.h"
#include "model/DescribeDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnDomainBpsDataRequest.h"
#include "model/DescribeDcdnDomainBpsDataResult.h"
#include "model/DescribeDcdnCertificateListRequest.h"
#include "model/DescribeDcdnCertificateListResult.h"
#include "model/DescribeDcdnCertificateDetailRequest.h"
#include "model/DescribeDcdnCertificateDetailResult.h"
#include "model/DescribeDcdnDomainOriginTrafficDataRequest.h"
#include "model/DescribeDcdnDomainOriginTrafficDataResult.h"
#include "model/DescribeDcdnDomainTrafficDataRequest.h"
#include "model/DescribeDcdnDomainTrafficDataResult.h"
#include "model/RefreshDcdnObjectCachesRequest.h"
#include "model/RefreshDcdnObjectCachesResult.h"
#include "model/DescribeUserDcdnStatusRequest.h"
#include "model/DescribeUserDcdnStatusResult.h"
#include "model/DescribeDcdnDomainQpsDataRequest.h"
#include "model/DescribeDcdnDomainQpsDataResult.h"
#include "model/StartDcdnDomainRequest.h"
#include "model/StartDcdnDomainResult.h"
#include "model/DescribeDcdnUserDomainsRequest.h"
#include "model/DescribeDcdnUserDomainsResult.h"
#include "model/DescribeDcdnDomainHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainHttpCodeDataResult.h"
#include "model/AddDcdnDomainRequest.h"
#include "model/AddDcdnDomainResult.h"
#include "model/PreloadDcdnObjectCachesRequest.h"
#include "model/PreloadDcdnObjectCachesResult.h"
#include "model/DescribeDcdnDomainCnameRequest.h"
#include "model/DescribeDcdnDomainCnameResult.h"
#include "model/StopDcdnDomainRequest.h"
#include "model/StopDcdnDomainResult.h"


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
			typedef Outcome<Error, Model::DescribeDcdnRefreshQuotaResult> DescribeDcdnRefreshQuotaOutcome;
			typedef std::future<DescribeDcdnRefreshQuotaOutcome> DescribeDcdnRefreshQuotaOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshQuotaRequest&, const DescribeDcdnRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainCertificateResult> SetDcdnDomainCertificateOutcome;
			typedef std::future<SetDcdnDomainCertificateOutcome> SetDcdnDomainCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainCertificateRequest&, const SetDcdnDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainLogResult> DescribeDcdnDomainLogOutcome;
			typedef std::future<DescribeDcdnDomainLogOutcome> DescribeDcdnDomainLogOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainLogRequest&, const DescribeDcdnDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginBpsDataResult> DescribeDcdnDomainOriginBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginBpsDataOutcome> DescribeDcdnDomainOriginBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginBpsDataRequest&, const DescribeDcdnDomainOriginBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshTasksResult> DescribeDcdnRefreshTasksOutcome;
			typedef std::future<DescribeDcdnRefreshTasksOutcome> DescribeDcdnRefreshTasksOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshTasksRequest&, const DescribeDcdnRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnServiceResult> DescribeDcdnServiceOutcome;
			typedef std::future<DescribeDcdnServiceOutcome> DescribeDcdnServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnServiceRequest&, const DescribeDcdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnServiceAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDcdnDomainHitRateDataResult> DescribeDcdnDomainHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainHitRateDataOutcome> DescribeDcdnDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHitRateDataRequest&, const DescribeDcdnDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainConfigsResult> DescribeDcdnDomainConfigsOutcome;
			typedef std::future<DescribeDcdnDomainConfigsOutcome> DescribeDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainConfigsRequest&, const DescribeDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainBpsDataResult> DescribeDcdnDomainBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainBpsDataOutcome> DescribeDcdnDomainBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainBpsDataRequest&, const DescribeDcdnDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateListResult> DescribeDcdnCertificateListOutcome;
			typedef std::future<DescribeDcdnCertificateListOutcome> DescribeDcdnCertificateListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateListRequest&, const DescribeDcdnCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateDetailResult> DescribeDcdnCertificateDetailOutcome;
			typedef std::future<DescribeDcdnCertificateDetailOutcome> DescribeDcdnCertificateDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateDetailRequest&, const DescribeDcdnCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginTrafficDataResult> DescribeDcdnDomainOriginTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginTrafficDataOutcome> DescribeDcdnDomainOriginTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginTrafficDataRequest&, const DescribeDcdnDomainOriginTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTrafficDataResult> DescribeDcdnDomainTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainTrafficDataOutcome> DescribeDcdnDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTrafficDataRequest&, const DescribeDcdnDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::RefreshDcdnObjectCachesResult> RefreshDcdnObjectCachesOutcome;
			typedef std::future<RefreshDcdnObjectCachesOutcome> RefreshDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RefreshDcdnObjectCachesRequest&, const RefreshDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDcdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDcdnStatusResult> DescribeUserDcdnStatusOutcome;
			typedef std::future<DescribeUserDcdnStatusOutcome> DescribeUserDcdnStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserDcdnStatusRequest&, const DescribeUserDcdnStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDcdnStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainQpsDataResult> DescribeDcdnDomainQpsDataOutcome;
			typedef std::future<DescribeDcdnDomainQpsDataOutcome> DescribeDcdnDomainQpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainQpsDataRequest&, const DescribeDcdnDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::StartDcdnDomainResult> StartDcdnDomainOutcome;
			typedef std::future<StartDcdnDomainOutcome> StartDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StartDcdnDomainRequest&, const StartDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserDomainsResult> DescribeDcdnUserDomainsOutcome;
			typedef std::future<DescribeDcdnUserDomainsOutcome> DescribeDcdnUserDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserDomainsRequest&, const DescribeDcdnUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHttpCodeDataResult> DescribeDcdnDomainHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainHttpCodeDataOutcome> DescribeDcdnDomainHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHttpCodeDataRequest&, const DescribeDcdnDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::AddDcdnDomainResult> AddDcdnDomainOutcome;
			typedef std::future<AddDcdnDomainOutcome> AddDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::AddDcdnDomainRequest&, const AddDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::PreloadDcdnObjectCachesResult> PreloadDcdnObjectCachesOutcome;
			typedef std::future<PreloadDcdnObjectCachesOutcome> PreloadDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PreloadDcdnObjectCachesRequest&, const PreloadDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadDcdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCnameResult> DescribeDcdnDomainCnameOutcome;
			typedef std::future<DescribeDcdnDomainCnameOutcome> DescribeDcdnDomainCnameOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCnameRequest&, const DescribeDcdnDomainCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCnameAsyncHandler;
			typedef Outcome<Error, Model::StopDcdnDomainResult> StopDcdnDomainOutcome;
			typedef std::future<StopDcdnDomainOutcome> StopDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StopDcdnDomainRequest&, const StopDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDcdnDomainAsyncHandler;

			DcdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DcdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DcdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DcdnClient();
			DescribeDcdnUserResourcePackageOutcome describeDcdnUserResourcePackage(const Model::DescribeDcdnUserResourcePackageRequest &request)const;
			void describeDcdnUserResourcePackageAsync(const Model::DescribeDcdnUserResourcePackageRequest& request, const DescribeDcdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserResourcePackageOutcomeCallable describeDcdnUserResourcePackageCallable(const Model::DescribeDcdnUserResourcePackageRequest& request) const;
			DescribeDcdnRefreshQuotaOutcome describeDcdnRefreshQuota(const Model::DescribeDcdnRefreshQuotaRequest &request)const;
			void describeDcdnRefreshQuotaAsync(const Model::DescribeDcdnRefreshQuotaRequest& request, const DescribeDcdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshQuotaOutcomeCallable describeDcdnRefreshQuotaCallable(const Model::DescribeDcdnRefreshQuotaRequest& request) const;
			SetDcdnDomainCertificateOutcome setDcdnDomainCertificate(const Model::SetDcdnDomainCertificateRequest &request)const;
			void setDcdnDomainCertificateAsync(const Model::SetDcdnDomainCertificateRequest& request, const SetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainCertificateOutcomeCallable setDcdnDomainCertificateCallable(const Model::SetDcdnDomainCertificateRequest& request) const;
			DescribeDcdnDomainLogOutcome describeDcdnDomainLog(const Model::DescribeDcdnDomainLogRequest &request)const;
			void describeDcdnDomainLogAsync(const Model::DescribeDcdnDomainLogRequest& request, const DescribeDcdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainLogOutcomeCallable describeDcdnDomainLogCallable(const Model::DescribeDcdnDomainLogRequest& request) const;
			DescribeDcdnDomainOriginBpsDataOutcome describeDcdnDomainOriginBpsData(const Model::DescribeDcdnDomainOriginBpsDataRequest &request)const;
			void describeDcdnDomainOriginBpsDataAsync(const Model::DescribeDcdnDomainOriginBpsDataRequest& request, const DescribeDcdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginBpsDataOutcomeCallable describeDcdnDomainOriginBpsDataCallable(const Model::DescribeDcdnDomainOriginBpsDataRequest& request) const;
			DescribeDcdnRefreshTasksOutcome describeDcdnRefreshTasks(const Model::DescribeDcdnRefreshTasksRequest &request)const;
			void describeDcdnRefreshTasksAsync(const Model::DescribeDcdnRefreshTasksRequest& request, const DescribeDcdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshTasksOutcomeCallable describeDcdnRefreshTasksCallable(const Model::DescribeDcdnRefreshTasksRequest& request) const;
			DescribeDcdnServiceOutcome describeDcdnService(const Model::DescribeDcdnServiceRequest &request)const;
			void describeDcdnServiceAsync(const Model::DescribeDcdnServiceRequest& request, const DescribeDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnServiceOutcomeCallable describeDcdnServiceCallable(const Model::DescribeDcdnServiceRequest& request) const;
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
			DescribeDcdnDomainHitRateDataOutcome describeDcdnDomainHitRateData(const Model::DescribeDcdnDomainHitRateDataRequest &request)const;
			void describeDcdnDomainHitRateDataAsync(const Model::DescribeDcdnDomainHitRateDataRequest& request, const DescribeDcdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHitRateDataOutcomeCallable describeDcdnDomainHitRateDataCallable(const Model::DescribeDcdnDomainHitRateDataRequest& request) const;
			DescribeDcdnDomainConfigsOutcome describeDcdnDomainConfigs(const Model::DescribeDcdnDomainConfigsRequest &request)const;
			void describeDcdnDomainConfigsAsync(const Model::DescribeDcdnDomainConfigsRequest& request, const DescribeDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainConfigsOutcomeCallable describeDcdnDomainConfigsCallable(const Model::DescribeDcdnDomainConfigsRequest& request) const;
			DescribeDcdnDomainBpsDataOutcome describeDcdnDomainBpsData(const Model::DescribeDcdnDomainBpsDataRequest &request)const;
			void describeDcdnDomainBpsDataAsync(const Model::DescribeDcdnDomainBpsDataRequest& request, const DescribeDcdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainBpsDataOutcomeCallable describeDcdnDomainBpsDataCallable(const Model::DescribeDcdnDomainBpsDataRequest& request) const;
			DescribeDcdnCertificateListOutcome describeDcdnCertificateList(const Model::DescribeDcdnCertificateListRequest &request)const;
			void describeDcdnCertificateListAsync(const Model::DescribeDcdnCertificateListRequest& request, const DescribeDcdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateListOutcomeCallable describeDcdnCertificateListCallable(const Model::DescribeDcdnCertificateListRequest& request) const;
			DescribeDcdnCertificateDetailOutcome describeDcdnCertificateDetail(const Model::DescribeDcdnCertificateDetailRequest &request)const;
			void describeDcdnCertificateDetailAsync(const Model::DescribeDcdnCertificateDetailRequest& request, const DescribeDcdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateDetailOutcomeCallable describeDcdnCertificateDetailCallable(const Model::DescribeDcdnCertificateDetailRequest& request) const;
			DescribeDcdnDomainOriginTrafficDataOutcome describeDcdnDomainOriginTrafficData(const Model::DescribeDcdnDomainOriginTrafficDataRequest &request)const;
			void describeDcdnDomainOriginTrafficDataAsync(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request, const DescribeDcdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginTrafficDataOutcomeCallable describeDcdnDomainOriginTrafficDataCallable(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request) const;
			DescribeDcdnDomainTrafficDataOutcome describeDcdnDomainTrafficData(const Model::DescribeDcdnDomainTrafficDataRequest &request)const;
			void describeDcdnDomainTrafficDataAsync(const Model::DescribeDcdnDomainTrafficDataRequest& request, const DescribeDcdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTrafficDataOutcomeCallable describeDcdnDomainTrafficDataCallable(const Model::DescribeDcdnDomainTrafficDataRequest& request) const;
			RefreshDcdnObjectCachesOutcome refreshDcdnObjectCaches(const Model::RefreshDcdnObjectCachesRequest &request)const;
			void refreshDcdnObjectCachesAsync(const Model::RefreshDcdnObjectCachesRequest& request, const RefreshDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDcdnObjectCachesOutcomeCallable refreshDcdnObjectCachesCallable(const Model::RefreshDcdnObjectCachesRequest& request) const;
			DescribeUserDcdnStatusOutcome describeUserDcdnStatus(const Model::DescribeUserDcdnStatusRequest &request)const;
			void describeUserDcdnStatusAsync(const Model::DescribeUserDcdnStatusRequest& request, const DescribeUserDcdnStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDcdnStatusOutcomeCallable describeUserDcdnStatusCallable(const Model::DescribeUserDcdnStatusRequest& request) const;
			DescribeDcdnDomainQpsDataOutcome describeDcdnDomainQpsData(const Model::DescribeDcdnDomainQpsDataRequest &request)const;
			void describeDcdnDomainQpsDataAsync(const Model::DescribeDcdnDomainQpsDataRequest& request, const DescribeDcdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainQpsDataOutcomeCallable describeDcdnDomainQpsDataCallable(const Model::DescribeDcdnDomainQpsDataRequest& request) const;
			StartDcdnDomainOutcome startDcdnDomain(const Model::StartDcdnDomainRequest &request)const;
			void startDcdnDomainAsync(const Model::StartDcdnDomainRequest& request, const StartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDcdnDomainOutcomeCallable startDcdnDomainCallable(const Model::StartDcdnDomainRequest& request) const;
			DescribeDcdnUserDomainsOutcome describeDcdnUserDomains(const Model::DescribeDcdnUserDomainsRequest &request)const;
			void describeDcdnUserDomainsAsync(const Model::DescribeDcdnUserDomainsRequest& request, const DescribeDcdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserDomainsOutcomeCallable describeDcdnUserDomainsCallable(const Model::DescribeDcdnUserDomainsRequest& request) const;
			DescribeDcdnDomainHttpCodeDataOutcome describeDcdnDomainHttpCodeData(const Model::DescribeDcdnDomainHttpCodeDataRequest &request)const;
			void describeDcdnDomainHttpCodeDataAsync(const Model::DescribeDcdnDomainHttpCodeDataRequest& request, const DescribeDcdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHttpCodeDataOutcomeCallable describeDcdnDomainHttpCodeDataCallable(const Model::DescribeDcdnDomainHttpCodeDataRequest& request) const;
			AddDcdnDomainOutcome addDcdnDomain(const Model::AddDcdnDomainRequest &request)const;
			void addDcdnDomainAsync(const Model::AddDcdnDomainRequest& request, const AddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDcdnDomainOutcomeCallable addDcdnDomainCallable(const Model::AddDcdnDomainRequest& request) const;
			PreloadDcdnObjectCachesOutcome preloadDcdnObjectCaches(const Model::PreloadDcdnObjectCachesRequest &request)const;
			void preloadDcdnObjectCachesAsync(const Model::PreloadDcdnObjectCachesRequest& request, const PreloadDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadDcdnObjectCachesOutcomeCallable preloadDcdnObjectCachesCallable(const Model::PreloadDcdnObjectCachesRequest& request) const;
			DescribeDcdnDomainCnameOutcome describeDcdnDomainCname(const Model::DescribeDcdnDomainCnameRequest &request)const;
			void describeDcdnDomainCnameAsync(const Model::DescribeDcdnDomainCnameRequest& request, const DescribeDcdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCnameOutcomeCallable describeDcdnDomainCnameCallable(const Model::DescribeDcdnDomainCnameRequest& request) const;
			StopDcdnDomainOutcome stopDcdnDomain(const Model::StopDcdnDomainRequest &request)const;
			void stopDcdnDomainAsync(const Model::StopDcdnDomainRequest& request, const StopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDcdnDomainOutcomeCallable stopDcdnDomainCallable(const Model::StopDcdnDomainRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DCDN_DCDNCLIENT_H_
