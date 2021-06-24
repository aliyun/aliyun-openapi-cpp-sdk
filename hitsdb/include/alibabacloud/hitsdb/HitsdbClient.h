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

#ifndef ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
#define ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HitsdbExport.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetLindormInstanceRequest.h"
#include "model/GetLindormInstanceResult.h"
#include "model/GetLindormInstanceListRequest.h"
#include "model/GetLindormInstanceListResult.h"


namespace AlibabaCloud
{
	namespace Hitsdb
	{
		class ALIBABACLOUD_HITSDB_EXPORT HitsdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceResult> GetLindormInstanceOutcome;
			typedef std::future<GetLindormInstanceOutcome> GetLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceRequest&, const GetLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceListResult> GetLindormInstanceListOutcome;
			typedef std::future<GetLindormInstanceListOutcome> GetLindormInstanceListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceListRequest&, const GetLindormInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceListAsyncHandler;

			HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HitsdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HitsdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HitsdbClient();
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetLindormInstanceOutcome getLindormInstance(const Model::GetLindormInstanceRequest &request)const;
			void getLindormInstanceAsync(const Model::GetLindormInstanceRequest& request, const GetLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceOutcomeCallable getLindormInstanceCallable(const Model::GetLindormInstanceRequest& request) const;
			GetLindormInstanceListOutcome getLindormInstanceList(const Model::GetLindormInstanceListRequest &request)const;
			void getLindormInstanceListAsync(const Model::GetLindormInstanceListRequest& request, const GetLindormInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceListOutcomeCallable getLindormInstanceListCallable(const Model::GetLindormInstanceListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
