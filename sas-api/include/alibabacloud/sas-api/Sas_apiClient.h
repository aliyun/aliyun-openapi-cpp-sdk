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

#ifndef ALIBABACLOUD_SAS_API_SAS_APICLIENT_H_
#define ALIBABACLOUD_SAS_API_SAS_APICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Sas_apiExport.h"
#include "model/DescribeAccountProfileByKeyRequest.h"
#include "model/DescribeAccountProfileByKeyResult.h"
#include "model/DescribeAccountProfileByKeyWordRequest.h"
#include "model/DescribeAccountProfileByKeyWordResult.h"
#include "model/DescribeHitRateColumnRequest.h"
#include "model/DescribeHitRateColumnResult.h"
#include "model/DescribeHitRatePieRequest.h"
#include "model/DescribeHitRatePieResult.h"
#include "model/DescribePerDateDataRequest.h"
#include "model/DescribePerDateDataResult.h"
#include "model/DescribeThreatDistributeRequest.h"
#include "model/DescribeThreatDistributeResult.h"
#include "model/DescribeThreatTypeLinesRequest.h"
#include "model/DescribeThreatTypeLinesResult.h"
#include "model/DescribeTotalAndRateLineRequest.h"
#include "model/DescribeTotalAndRateLineResult.h"
#include "model/GetAccountProfileRequest.h"
#include "model/GetAccountProfileResult.h"
#include "model/GetInstanceCountRequest.h"
#include "model/GetInstanceCountResult.h"
#include "model/GetIpProfileRequest.h"
#include "model/GetIpProfileResult.h"
#include "model/GetPhoneProfileRequest.h"
#include "model/GetPhoneProfileResult.h"


namespace AlibabaCloud
{
	namespace Sas_api
	{
		class ALIBABACLOUD_SAS_API_EXPORT Sas_apiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeAccountProfileByKeyResult> DescribeAccountProfileByKeyOutcome;
			typedef std::future<DescribeAccountProfileByKeyOutcome> DescribeAccountProfileByKeyOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeAccountProfileByKeyRequest&, const DescribeAccountProfileByKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountProfileByKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountProfileByKeyWordResult> DescribeAccountProfileByKeyWordOutcome;
			typedef std::future<DescribeAccountProfileByKeyWordOutcome> DescribeAccountProfileByKeyWordOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeAccountProfileByKeyWordRequest&, const DescribeAccountProfileByKeyWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountProfileByKeyWordAsyncHandler;
			typedef Outcome<Error, Model::DescribeHitRateColumnResult> DescribeHitRateColumnOutcome;
			typedef std::future<DescribeHitRateColumnOutcome> DescribeHitRateColumnOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeHitRateColumnRequest&, const DescribeHitRateColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHitRateColumnAsyncHandler;
			typedef Outcome<Error, Model::DescribeHitRatePieResult> DescribeHitRatePieOutcome;
			typedef std::future<DescribeHitRatePieOutcome> DescribeHitRatePieOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeHitRatePieRequest&, const DescribeHitRatePieOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHitRatePieAsyncHandler;
			typedef Outcome<Error, Model::DescribePerDateDataResult> DescribePerDateDataOutcome;
			typedef std::future<DescribePerDateDataOutcome> DescribePerDateDataOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribePerDateDataRequest&, const DescribePerDateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePerDateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeThreatDistributeResult> DescribeThreatDistributeOutcome;
			typedef std::future<DescribeThreatDistributeOutcome> DescribeThreatDistributeOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeThreatDistributeRequest&, const DescribeThreatDistributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThreatDistributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeThreatTypeLinesResult> DescribeThreatTypeLinesOutcome;
			typedef std::future<DescribeThreatTypeLinesOutcome> DescribeThreatTypeLinesOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeThreatTypeLinesRequest&, const DescribeThreatTypeLinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThreatTypeLinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalAndRateLineResult> DescribeTotalAndRateLineOutcome;
			typedef std::future<DescribeTotalAndRateLineOutcome> DescribeTotalAndRateLineOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::DescribeTotalAndRateLineRequest&, const DescribeTotalAndRateLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalAndRateLineAsyncHandler;
			typedef Outcome<Error, Model::GetAccountProfileResult> GetAccountProfileOutcome;
			typedef std::future<GetAccountProfileOutcome> GetAccountProfileOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::GetAccountProfileRequest&, const GetAccountProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountProfileAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceCountResult> GetInstanceCountOutcome;
			typedef std::future<GetInstanceCountOutcome> GetInstanceCountOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::GetInstanceCountRequest&, const GetInstanceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceCountAsyncHandler;
			typedef Outcome<Error, Model::GetIpProfileResult> GetIpProfileOutcome;
			typedef std::future<GetIpProfileOutcome> GetIpProfileOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::GetIpProfileRequest&, const GetIpProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIpProfileAsyncHandler;
			typedef Outcome<Error, Model::GetPhoneProfileResult> GetPhoneProfileOutcome;
			typedef std::future<GetPhoneProfileOutcome> GetPhoneProfileOutcomeCallable;
			typedef std::function<void(const Sas_apiClient*, const Model::GetPhoneProfileRequest&, const GetPhoneProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhoneProfileAsyncHandler;

			Sas_apiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Sas_apiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Sas_apiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Sas_apiClient();
			DescribeAccountProfileByKeyOutcome describeAccountProfileByKey(const Model::DescribeAccountProfileByKeyRequest &request)const;
			void describeAccountProfileByKeyAsync(const Model::DescribeAccountProfileByKeyRequest& request, const DescribeAccountProfileByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountProfileByKeyOutcomeCallable describeAccountProfileByKeyCallable(const Model::DescribeAccountProfileByKeyRequest& request) const;
			DescribeAccountProfileByKeyWordOutcome describeAccountProfileByKeyWord(const Model::DescribeAccountProfileByKeyWordRequest &request)const;
			void describeAccountProfileByKeyWordAsync(const Model::DescribeAccountProfileByKeyWordRequest& request, const DescribeAccountProfileByKeyWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountProfileByKeyWordOutcomeCallable describeAccountProfileByKeyWordCallable(const Model::DescribeAccountProfileByKeyWordRequest& request) const;
			DescribeHitRateColumnOutcome describeHitRateColumn(const Model::DescribeHitRateColumnRequest &request)const;
			void describeHitRateColumnAsync(const Model::DescribeHitRateColumnRequest& request, const DescribeHitRateColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHitRateColumnOutcomeCallable describeHitRateColumnCallable(const Model::DescribeHitRateColumnRequest& request) const;
			DescribeHitRatePieOutcome describeHitRatePie(const Model::DescribeHitRatePieRequest &request)const;
			void describeHitRatePieAsync(const Model::DescribeHitRatePieRequest& request, const DescribeHitRatePieAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHitRatePieOutcomeCallable describeHitRatePieCallable(const Model::DescribeHitRatePieRequest& request) const;
			DescribePerDateDataOutcome describePerDateData(const Model::DescribePerDateDataRequest &request)const;
			void describePerDateDataAsync(const Model::DescribePerDateDataRequest& request, const DescribePerDateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePerDateDataOutcomeCallable describePerDateDataCallable(const Model::DescribePerDateDataRequest& request) const;
			DescribeThreatDistributeOutcome describeThreatDistribute(const Model::DescribeThreatDistributeRequest &request)const;
			void describeThreatDistributeAsync(const Model::DescribeThreatDistributeRequest& request, const DescribeThreatDistributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeThreatDistributeOutcomeCallable describeThreatDistributeCallable(const Model::DescribeThreatDistributeRequest& request) const;
			DescribeThreatTypeLinesOutcome describeThreatTypeLines(const Model::DescribeThreatTypeLinesRequest &request)const;
			void describeThreatTypeLinesAsync(const Model::DescribeThreatTypeLinesRequest& request, const DescribeThreatTypeLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeThreatTypeLinesOutcomeCallable describeThreatTypeLinesCallable(const Model::DescribeThreatTypeLinesRequest& request) const;
			DescribeTotalAndRateLineOutcome describeTotalAndRateLine(const Model::DescribeTotalAndRateLineRequest &request)const;
			void describeTotalAndRateLineAsync(const Model::DescribeTotalAndRateLineRequest& request, const DescribeTotalAndRateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalAndRateLineOutcomeCallable describeTotalAndRateLineCallable(const Model::DescribeTotalAndRateLineRequest& request) const;
			GetAccountProfileOutcome getAccountProfile(const Model::GetAccountProfileRequest &request)const;
			void getAccountProfileAsync(const Model::GetAccountProfileRequest& request, const GetAccountProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountProfileOutcomeCallable getAccountProfileCallable(const Model::GetAccountProfileRequest& request) const;
			GetInstanceCountOutcome getInstanceCount(const Model::GetInstanceCountRequest &request)const;
			void getInstanceCountAsync(const Model::GetInstanceCountRequest& request, const GetInstanceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceCountOutcomeCallable getInstanceCountCallable(const Model::GetInstanceCountRequest& request) const;
			GetIpProfileOutcome getIpProfile(const Model::GetIpProfileRequest &request)const;
			void getIpProfileAsync(const Model::GetIpProfileRequest& request, const GetIpProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIpProfileOutcomeCallable getIpProfileCallable(const Model::GetIpProfileRequest& request) const;
			GetPhoneProfileOutcome getPhoneProfile(const Model::GetPhoneProfileRequest &request)const;
			void getPhoneProfileAsync(const Model::GetPhoneProfileRequest& request, const GetPhoneProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhoneProfileOutcomeCallable getPhoneProfileCallable(const Model::GetPhoneProfileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAS_API_SAS_APICLIENT_H_
