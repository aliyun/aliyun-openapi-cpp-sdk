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

#ifndef ALIBABACLOUD_ANTIDDOS_PUBLIC_ANTIDDOS_PUBLICCLIENT_H_
#define ALIBABACLOUD_ANTIDDOS_PUBLIC_ANTIDDOS_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Antiddos_publicExport.h"
#include "model/DescribeBgpPackByIpRequest.h"
#include "model/DescribeBgpPackByIpResult.h"
#include "model/DescribeCapRequest.h"
#include "model/DescribeCapResult.h"
#include "model/DescribeDdosCountRequest.h"
#include "model/DescribeDdosCountResult.h"
#include "model/DescribeDdosCreditRequest.h"
#include "model/DescribeDdosCreditResult.h"
#include "model/DescribeDdosEventListRequest.h"
#include "model/DescribeDdosEventListResult.h"
#include "model/DescribeDdosThresholdRequest.h"
#include "model/DescribeDdosThresholdResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstanceIpAddressRequest.h"
#include "model/DescribeInstanceIpAddressResult.h"
#include "model/DescribeIpDdosThresholdRequest.h"
#include "model/DescribeIpDdosThresholdResult.h"
#include "model/DescribeIpLocationServiceRequest.h"
#include "model/DescribeIpLocationServiceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/ModifyDdosStatusRequest.h"
#include "model/ModifyDdosStatusResult.h"
#include "model/ModifyDefenseThresholdRequest.h"
#include "model/ModifyDefenseThresholdResult.h"
#include "model/ModifyIpDefenseThresholdRequest.h"
#include "model/ModifyIpDefenseThresholdResult.h"


namespace AlibabaCloud
{
	namespace Antiddos_public
	{
		class ALIBABACLOUD_ANTIDDOS_PUBLIC_EXPORT Antiddos_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeBgpPackByIpResult> DescribeBgpPackByIpOutcome;
			typedef std::future<DescribeBgpPackByIpOutcome> DescribeBgpPackByIpOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeBgpPackByIpRequest&, const DescribeBgpPackByIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpPackByIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeCapResult> DescribeCapOutcome;
			typedef std::future<DescribeCapOutcome> DescribeCapOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeCapRequest&, const DescribeCapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCapAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosCountResult> DescribeDdosCountOutcome;
			typedef std::future<DescribeDdosCountOutcome> DescribeDdosCountOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeDdosCountRequest&, const DescribeDdosCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosCreditResult> DescribeDdosCreditOutcome;
			typedef std::future<DescribeDdosCreditOutcome> DescribeDdosCreditOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeDdosCreditRequest&, const DescribeDdosCreditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosCreditAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosEventListResult> DescribeDdosEventListOutcome;
			typedef std::future<DescribeDdosEventListOutcome> DescribeDdosEventListOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeDdosEventListRequest&, const DescribeDdosEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosThresholdResult> DescribeDdosThresholdOutcome;
			typedef std::future<DescribeDdosThresholdOutcome> DescribeDdosThresholdOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeDdosThresholdRequest&, const DescribeDdosThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosThresholdAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceIpAddressResult> DescribeInstanceIpAddressOutcome;
			typedef std::future<DescribeInstanceIpAddressOutcome> DescribeInstanceIpAddressOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeInstanceIpAddressRequest&, const DescribeInstanceIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceIpAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpDdosThresholdResult> DescribeIpDdosThresholdOutcome;
			typedef std::future<DescribeIpDdosThresholdOutcome> DescribeIpDdosThresholdOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeIpDdosThresholdRequest&, const DescribeIpDdosThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpDdosThresholdAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpLocationServiceResult> DescribeIpLocationServiceOutcome;
			typedef std::future<DescribeIpLocationServiceOutcome> DescribeIpLocationServiceOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeIpLocationServiceRequest&, const DescribeIpLocationServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpLocationServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDdosStatusResult> ModifyDdosStatusOutcome;
			typedef std::future<ModifyDdosStatusOutcome> ModifyDdosStatusOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::ModifyDdosStatusRequest&, const ModifyDdosStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDdosStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyDefenseThresholdResult> ModifyDefenseThresholdOutcome;
			typedef std::future<ModifyDefenseThresholdOutcome> ModifyDefenseThresholdOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::ModifyDefenseThresholdRequest&, const ModifyDefenseThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefenseThresholdAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpDefenseThresholdResult> ModifyIpDefenseThresholdOutcome;
			typedef std::future<ModifyIpDefenseThresholdOutcome> ModifyIpDefenseThresholdOutcomeCallable;
			typedef std::function<void(const Antiddos_publicClient*, const Model::ModifyIpDefenseThresholdRequest&, const ModifyIpDefenseThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpDefenseThresholdAsyncHandler;

			Antiddos_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Antiddos_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Antiddos_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Antiddos_publicClient();
			DescribeBgpPackByIpOutcome describeBgpPackByIp(const Model::DescribeBgpPackByIpRequest &request)const;
			void describeBgpPackByIpAsync(const Model::DescribeBgpPackByIpRequest& request, const DescribeBgpPackByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBgpPackByIpOutcomeCallable describeBgpPackByIpCallable(const Model::DescribeBgpPackByIpRequest& request) const;
			DescribeCapOutcome describeCap(const Model::DescribeCapRequest &request)const;
			void describeCapAsync(const Model::DescribeCapRequest& request, const DescribeCapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCapOutcomeCallable describeCapCallable(const Model::DescribeCapRequest& request) const;
			DescribeDdosCountOutcome describeDdosCount(const Model::DescribeDdosCountRequest &request)const;
			void describeDdosCountAsync(const Model::DescribeDdosCountRequest& request, const DescribeDdosCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosCountOutcomeCallable describeDdosCountCallable(const Model::DescribeDdosCountRequest& request) const;
			DescribeDdosCreditOutcome describeDdosCredit(const Model::DescribeDdosCreditRequest &request)const;
			void describeDdosCreditAsync(const Model::DescribeDdosCreditRequest& request, const DescribeDdosCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosCreditOutcomeCallable describeDdosCreditCallable(const Model::DescribeDdosCreditRequest& request) const;
			DescribeDdosEventListOutcome describeDdosEventList(const Model::DescribeDdosEventListRequest &request)const;
			void describeDdosEventListAsync(const Model::DescribeDdosEventListRequest& request, const DescribeDdosEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosEventListOutcomeCallable describeDdosEventListCallable(const Model::DescribeDdosEventListRequest& request) const;
			DescribeDdosThresholdOutcome describeDdosThreshold(const Model::DescribeDdosThresholdRequest &request)const;
			void describeDdosThresholdAsync(const Model::DescribeDdosThresholdRequest& request, const DescribeDdosThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosThresholdOutcomeCallable describeDdosThresholdCallable(const Model::DescribeDdosThresholdRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeInstanceIpAddressOutcome describeInstanceIpAddress(const Model::DescribeInstanceIpAddressRequest &request)const;
			void describeInstanceIpAddressAsync(const Model::DescribeInstanceIpAddressRequest& request, const DescribeInstanceIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceIpAddressOutcomeCallable describeInstanceIpAddressCallable(const Model::DescribeInstanceIpAddressRequest& request) const;
			DescribeIpDdosThresholdOutcome describeIpDdosThreshold(const Model::DescribeIpDdosThresholdRequest &request)const;
			void describeIpDdosThresholdAsync(const Model::DescribeIpDdosThresholdRequest& request, const DescribeIpDdosThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpDdosThresholdOutcomeCallable describeIpDdosThresholdCallable(const Model::DescribeIpDdosThresholdRequest& request) const;
			DescribeIpLocationServiceOutcome describeIpLocationService(const Model::DescribeIpLocationServiceRequest &request)const;
			void describeIpLocationServiceAsync(const Model::DescribeIpLocationServiceRequest& request, const DescribeIpLocationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpLocationServiceOutcomeCallable describeIpLocationServiceCallable(const Model::DescribeIpLocationServiceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			ModifyDdosStatusOutcome modifyDdosStatus(const Model::ModifyDdosStatusRequest &request)const;
			void modifyDdosStatusAsync(const Model::ModifyDdosStatusRequest& request, const ModifyDdosStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDdosStatusOutcomeCallable modifyDdosStatusCallable(const Model::ModifyDdosStatusRequest& request) const;
			ModifyDefenseThresholdOutcome modifyDefenseThreshold(const Model::ModifyDefenseThresholdRequest &request)const;
			void modifyDefenseThresholdAsync(const Model::ModifyDefenseThresholdRequest& request, const ModifyDefenseThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDefenseThresholdOutcomeCallable modifyDefenseThresholdCallable(const Model::ModifyDefenseThresholdRequest& request) const;
			ModifyIpDefenseThresholdOutcome modifyIpDefenseThreshold(const Model::ModifyIpDefenseThresholdRequest &request)const;
			void modifyIpDefenseThresholdAsync(const Model::ModifyIpDefenseThresholdRequest& request, const ModifyIpDefenseThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpDefenseThresholdOutcomeCallable modifyIpDefenseThresholdCallable(const Model::ModifyIpDefenseThresholdRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ANTIDDOS_PUBLIC_ANTIDDOS_PUBLICCLIENT_H_
