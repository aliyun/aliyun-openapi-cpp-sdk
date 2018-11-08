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

#ifndef ALIBABACLOUD_ARMS_ARMSCLIENT_H_
#define ALIBABACLOUD_ARMS_ARMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ARMSExport.h"
#include "model/ARMSQueryDataSetRequest.h"
#include "model/ARMSQueryDataSetResult.h"
#include "model/MetricQueryRequest.h"
#include "model/MetricQueryResult.h"


namespace AlibabaCloud
{
	namespace ARMS
	{
		class ALIBABACLOUD_ARMS_EXPORT ARMSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ARMSQueryDataSetResult> ARMSQueryDataSetOutcome;
			typedef std::future<ARMSQueryDataSetOutcome> ARMSQueryDataSetOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ARMSQueryDataSetRequest&, const ARMSQueryDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ARMSQueryDataSetAsyncHandler;
			typedef Outcome<Error, Model::MetricQueryResult> MetricQueryOutcome;
			typedef std::future<MetricQueryOutcome> MetricQueryOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::MetricQueryRequest&, const MetricQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetricQueryAsyncHandler;

			ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ARMSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ARMSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ARMSClient();
			ARMSQueryDataSetOutcome aRMSQueryDataSet(const Model::ARMSQueryDataSetRequest &request)const;
			void aRMSQueryDataSetAsync(const Model::ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ARMSQueryDataSetOutcomeCallable aRMSQueryDataSetCallable(const Model::ARMSQueryDataSetRequest& request) const;
			MetricQueryOutcome metricQuery(const Model::MetricQueryRequest &request)const;
			void metricQueryAsync(const Model::MetricQueryRequest& request, const MetricQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetricQueryOutcomeCallable metricQueryCallable(const Model::MetricQueryRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
