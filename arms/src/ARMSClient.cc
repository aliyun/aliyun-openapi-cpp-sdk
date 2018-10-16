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

#include <alibabacloud/arms/ARMSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

namespace
{
	const std::string SERVICE_NAME = "ARMS";
}

ARMSClient::ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::ARMSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::ARMSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::~ARMSClient()
{}

ARMSClient::ARMSQueryDataSetOutcome ARMSClient::aRMSQueryDataSet(const ARMSQueryDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ARMSQueryDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ARMSQueryDataSetOutcome(ARMSQueryDataSetResult(outcome.result()));
	else
		return ARMSQueryDataSetOutcome(outcome.error());
}

void ARMSClient::aRMSQueryDataSetAsync(const ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aRMSQueryDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ARMSQueryDataSetOutcomeCallable ARMSClient::aRMSQueryDataSetCallable(const ARMSQueryDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ARMSQueryDataSetOutcome()>>(
			[this, request]()
			{
			return this->aRMSQueryDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::MetricQueryOutcome ARMSClient::metricQuery(const MetricQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetricQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetricQueryOutcome(MetricQueryResult(outcome.result()));
	else
		return MetricQueryOutcome(outcome.error());
}

void ARMSClient::metricQueryAsync(const MetricQueryRequest& request, const MetricQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metricQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::MetricQueryOutcomeCallable ARMSClient::metricQueryCallable(const MetricQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetricQueryOutcome()>>(
			[this, request]()
			{
			return this->metricQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

