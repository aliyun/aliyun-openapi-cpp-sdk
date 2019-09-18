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

#include <alibabacloud/teslastream/TeslaStreamClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::TeslaStream;
using namespace AlibabaCloud::TeslaStream::Model;

namespace
{
	const std::string SERVICE_NAME = "TeslaStream";
}

TeslaStreamClient::TeslaStreamClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslastream");
}

TeslaStreamClient::TeslaStreamClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslastream");
}

TeslaStreamClient::TeslaStreamClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslastream");
}

TeslaStreamClient::~TeslaStreamClient()
{}

TeslaStreamClient::BatchGetJobMetricInfoOutcome TeslaStreamClient::batchGetJobMetricInfo(const BatchGetJobMetricInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetJobMetricInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetJobMetricInfoOutcome(BatchGetJobMetricInfoResult(outcome.result()));
	else
		return BatchGetJobMetricInfoOutcome(outcome.error());
}

void TeslaStreamClient::batchGetJobMetricInfoAsync(const BatchGetJobMetricInfoRequest& request, const BatchGetJobMetricInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetJobMetricInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaStreamClient::BatchGetJobMetricInfoOutcomeCallable TeslaStreamClient::batchGetJobMetricInfoCallable(const BatchGetJobMetricInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetJobMetricInfoOutcome()>>(
			[this, request]()
			{
			return this->batchGetJobMetricInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaStreamClient::BatchGetPluginConfigInfoOutcome TeslaStreamClient::batchGetPluginConfigInfo(const BatchGetPluginConfigInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetPluginConfigInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetPluginConfigInfoOutcome(BatchGetPluginConfigInfoResult(outcome.result()));
	else
		return BatchGetPluginConfigInfoOutcome(outcome.error());
}

void TeslaStreamClient::batchGetPluginConfigInfoAsync(const BatchGetPluginConfigInfoRequest& request, const BatchGetPluginConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetPluginConfigInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaStreamClient::BatchGetPluginConfigInfoOutcomeCallable TeslaStreamClient::batchGetPluginConfigInfoCallable(const BatchGetPluginConfigInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetPluginConfigInfoOutcome()>>(
			[this, request]()
			{
			return this->batchGetPluginConfigInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaStreamClient::GetJobTopologyOutcome TeslaStreamClient::getJobTopology(const GetJobTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobTopologyOutcome(GetJobTopologyResult(outcome.result()));
	else
		return GetJobTopologyOutcome(outcome.error());
}

void TeslaStreamClient::getJobTopologyAsync(const GetJobTopologyRequest& request, const GetJobTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaStreamClient::GetJobTopologyOutcomeCallable TeslaStreamClient::getJobTopologyCallable(const GetJobTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobTopologyOutcome()>>(
			[this, request]()
			{
			return this->getJobTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

