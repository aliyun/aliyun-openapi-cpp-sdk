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

#include <alibabacloud/cloud-siem/Cloud_siemClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

namespace
{
	const std::string SERVICE_NAME = "cloud-siem";
}

Cloud_siemClient::Cloud_siemClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::Cloud_siemClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::Cloud_siemClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::~Cloud_siemClient()
{}

Cloud_siemClient::BatchJobCheckOutcome Cloud_siemClient::batchJobCheck(const BatchJobCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchJobCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchJobCheckOutcome(BatchJobCheckResult(outcome.result()));
	else
		return BatchJobCheckOutcome(outcome.error());
}

void Cloud_siemClient::batchJobCheckAsync(const BatchJobCheckRequest& request, const BatchJobCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchJobCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::BatchJobCheckOutcomeCallable Cloud_siemClient::batchJobCheckCallable(const BatchJobCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchJobCheckOutcome()>>(
			[this, request]()
			{
			return this->batchJobCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::BatchJobSubmitOutcome Cloud_siemClient::batchJobSubmit(const BatchJobSubmitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchJobSubmitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchJobSubmitOutcome(BatchJobSubmitResult(outcome.result()));
	else
		return BatchJobSubmitOutcome(outcome.error());
}

void Cloud_siemClient::batchJobSubmitAsync(const BatchJobSubmitRequest& request, const BatchJobSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchJobSubmit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::BatchJobSubmitOutcomeCallable Cloud_siemClient::batchJobSubmitCallable(const BatchJobSubmitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchJobSubmitOutcome()>>(
			[this, request]()
			{
			return this->batchJobSubmit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::SendMessageOutcome Cloud_siemClient::sendMessage(const SendMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageOutcome(SendMessageResult(outcome.result()));
	else
		return SendMessageOutcome(outcome.error());
}

void Cloud_siemClient::sendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::SendMessageOutcomeCallable Cloud_siemClient::sendMessageCallable(const SendMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageOutcome()>>(
			[this, request]()
			{
			return this->sendMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

