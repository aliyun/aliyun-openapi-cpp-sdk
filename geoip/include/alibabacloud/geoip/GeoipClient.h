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

#ifndef ALIBABACLOUD_GEOIP_GEOIPCLIENT_H_
#define ALIBABACLOUD_GEOIP_GEOIPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GeoipExport.h"
#include "model/DescribeGeoipInstanceRequest.h"
#include "model/DescribeGeoipInstanceResult.h"
#include "model/DescribeGeoipInstanceStatisticsRequest.h"
#include "model/DescribeGeoipInstanceStatisticsResult.h"
#include "model/DescribeGeoipInstancesRequest.h"
#include "model/DescribeGeoipInstancesResult.h"
#include "model/DescribeIpv6LocationRequest.h"
#include "model/DescribeIpv6LocationResult.h"


namespace AlibabaCloud
{
	namespace Geoip
	{
		class ALIBABACLOUD_GEOIP_EXPORT GeoipClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeGeoipInstanceResult> DescribeGeoipInstanceOutcome;
			typedef std::future<DescribeGeoipInstanceOutcome> DescribeGeoipInstanceOutcomeCallable;
			typedef std::function<void(const GeoipClient*, const Model::DescribeGeoipInstanceRequest&, const DescribeGeoipInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeoipInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeGeoipInstanceStatisticsResult> DescribeGeoipInstanceStatisticsOutcome;
			typedef std::future<DescribeGeoipInstanceStatisticsOutcome> DescribeGeoipInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const GeoipClient*, const Model::DescribeGeoipInstanceStatisticsRequest&, const DescribeGeoipInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeoipInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGeoipInstancesResult> DescribeGeoipInstancesOutcome;
			typedef std::future<DescribeGeoipInstancesOutcome> DescribeGeoipInstancesOutcomeCallable;
			typedef std::function<void(const GeoipClient*, const Model::DescribeGeoipInstancesRequest&, const DescribeGeoipInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeoipInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpv6LocationResult> DescribeIpv6LocationOutcome;
			typedef std::future<DescribeIpv6LocationOutcome> DescribeIpv6LocationOutcomeCallable;
			typedef std::function<void(const GeoipClient*, const Model::DescribeIpv6LocationRequest&, const DescribeIpv6LocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpv6LocationAsyncHandler;

			GeoipClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GeoipClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GeoipClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GeoipClient();
			DescribeGeoipInstanceOutcome describeGeoipInstance(const Model::DescribeGeoipInstanceRequest &request)const;
			void describeGeoipInstanceAsync(const Model::DescribeGeoipInstanceRequest& request, const DescribeGeoipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGeoipInstanceOutcomeCallable describeGeoipInstanceCallable(const Model::DescribeGeoipInstanceRequest& request) const;
			DescribeGeoipInstanceStatisticsOutcome describeGeoipInstanceStatistics(const Model::DescribeGeoipInstanceStatisticsRequest &request)const;
			void describeGeoipInstanceStatisticsAsync(const Model::DescribeGeoipInstanceStatisticsRequest& request, const DescribeGeoipInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGeoipInstanceStatisticsOutcomeCallable describeGeoipInstanceStatisticsCallable(const Model::DescribeGeoipInstanceStatisticsRequest& request) const;
			DescribeGeoipInstancesOutcome describeGeoipInstances(const Model::DescribeGeoipInstancesRequest &request)const;
			void describeGeoipInstancesAsync(const Model::DescribeGeoipInstancesRequest& request, const DescribeGeoipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGeoipInstancesOutcomeCallable describeGeoipInstancesCallable(const Model::DescribeGeoipInstancesRequest& request) const;
			DescribeIpv6LocationOutcome describeIpv6Location(const Model::DescribeIpv6LocationRequest &request)const;
			void describeIpv6LocationAsync(const Model::DescribeIpv6LocationRequest& request, const DescribeIpv6LocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpv6LocationOutcomeCallable describeIpv6LocationCallable(const Model::DescribeIpv6LocationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GEOIP_GEOIPCLIENT_H_
