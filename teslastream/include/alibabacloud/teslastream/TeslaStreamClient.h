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

#ifndef ALIBABACLOUD_TESLASTREAM_TESLASTREAMCLIENT_H_
#define ALIBABACLOUD_TESLASTREAM_TESLASTREAMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TeslaStreamExport.h"
#include "model/BatchGetJobMetricInfoRequest.h"
#include "model/BatchGetJobMetricInfoResult.h"
#include "model/BatchGetPluginConfigInfoRequest.h"
#include "model/BatchGetPluginConfigInfoResult.h"
#include "model/GetJobTopologyRequest.h"
#include "model/GetJobTopologyResult.h"


namespace AlibabaCloud
{
	namespace TeslaStream
	{
		class ALIBABACLOUD_TESLASTREAM_EXPORT TeslaStreamClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchGetJobMetricInfoResult> BatchGetJobMetricInfoOutcome;
			typedef std::future<BatchGetJobMetricInfoOutcome> BatchGetJobMetricInfoOutcomeCallable;
			typedef std::function<void(const TeslaStreamClient*, const Model::BatchGetJobMetricInfoRequest&, const BatchGetJobMetricInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetJobMetricInfoAsyncHandler;
			typedef Outcome<Error, Model::BatchGetPluginConfigInfoResult> BatchGetPluginConfigInfoOutcome;
			typedef std::future<BatchGetPluginConfigInfoOutcome> BatchGetPluginConfigInfoOutcomeCallable;
			typedef std::function<void(const TeslaStreamClient*, const Model::BatchGetPluginConfigInfoRequest&, const BatchGetPluginConfigInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetPluginConfigInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobTopologyResult> GetJobTopologyOutcome;
			typedef std::future<GetJobTopologyOutcome> GetJobTopologyOutcomeCallable;
			typedef std::function<void(const TeslaStreamClient*, const Model::GetJobTopologyRequest&, const GetJobTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobTopologyAsyncHandler;

			TeslaStreamClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TeslaStreamClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TeslaStreamClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TeslaStreamClient();
			BatchGetJobMetricInfoOutcome batchGetJobMetricInfo(const Model::BatchGetJobMetricInfoRequest &request)const;
			void batchGetJobMetricInfoAsync(const Model::BatchGetJobMetricInfoRequest& request, const BatchGetJobMetricInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetJobMetricInfoOutcomeCallable batchGetJobMetricInfoCallable(const Model::BatchGetJobMetricInfoRequest& request) const;
			BatchGetPluginConfigInfoOutcome batchGetPluginConfigInfo(const Model::BatchGetPluginConfigInfoRequest &request)const;
			void batchGetPluginConfigInfoAsync(const Model::BatchGetPluginConfigInfoRequest& request, const BatchGetPluginConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetPluginConfigInfoOutcomeCallable batchGetPluginConfigInfoCallable(const Model::BatchGetPluginConfigInfoRequest& request) const;
			GetJobTopologyOutcome getJobTopology(const Model::GetJobTopologyRequest &request)const;
			void getJobTopologyAsync(const Model::GetJobTopologyRequest& request, const GetJobTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobTopologyOutcomeCallable getJobTopologyCallable(const Model::GetJobTopologyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TESLASTREAM_TESLASTREAMCLIENT_H_
