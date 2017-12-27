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

#ifndef ALIBABACLOUD_CORE_LOCATION_LOCATIONCLIENT_H_
#define ALIBABACLOUD_CORE_LOCATION_LOCATIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "model/DescribeEndpointsRequest.h"
#include "model/DescribeEndpointsResult.h"

namespace AlibabaCloud
{
	namespace Location
	{
		class ALIBABACLOUD_CORE_EXPORT LocationClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeEndpointsResult> DescribeEndpointsOutcome;
			typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
			typedef std::function<void(const LocationClient*, const Model::DescribeEndpointsRequest&, const DescribeEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointsAsyncHandler;

			LocationClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LocationClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LocationClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LocationClient();

			DescribeEndpointsOutcome describeEndpoints(const Model::DescribeEndpointsRequest &request)const;
			void describeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointsOutcomeCallable describeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;
		private:
			virtual EndpointOutcome endpoint()const override;
		};
	}
}

#endif // !ALIBABACLOUD_CORE_LOCATION_LOCATIONCLIENT_H_
