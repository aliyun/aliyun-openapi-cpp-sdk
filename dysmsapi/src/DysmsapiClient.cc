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

#include <alibabacloud/dysmsapi/DysmsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dysmsapi";
}

DysmsapiClient::DysmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysmsapi");
}

DysmsapiClient::DysmsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysmsapi");
}

DysmsapiClient::DysmsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysmsapi");
}

DysmsapiClient::~DysmsapiClient()
{}

DysmsapiClient::SendSmsOutcome DysmsapiClient::sendSms(const SendSmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendSmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendSmsOutcome(SendSmsResult(outcome.result()));
	else
		return SendSmsOutcome(outcome.error());
}

void DysmsapiClient::sendSmsAsync(const SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendSms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendSmsOutcomeCallable DysmsapiClient::sendSmsCallable(const SendSmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendSmsOutcome()>>(
			[this, request]()
			{
			return this->sendSms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SendBatchSmsOutcome DysmsapiClient::sendBatchSms(const SendBatchSmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendBatchSmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendBatchSmsOutcome(SendBatchSmsResult(outcome.result()));
	else
		return SendBatchSmsOutcome(outcome.error());
}

void DysmsapiClient::sendBatchSmsAsync(const SendBatchSmsRequest& request, const SendBatchSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendBatchSms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendBatchSmsOutcomeCallable DysmsapiClient::sendBatchSmsCallable(const SendBatchSmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendBatchSmsOutcome()>>(
			[this, request]()
			{
			return this->sendBatchSms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::QuerySendDetailsOutcome DysmsapiClient::querySendDetails(const QuerySendDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySendDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySendDetailsOutcome(QuerySendDetailsResult(outcome.result()));
	else
		return QuerySendDetailsOutcome(outcome.error());
}

void DysmsapiClient::querySendDetailsAsync(const QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySendDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::QuerySendDetailsOutcomeCallable DysmsapiClient::querySendDetailsCallable(const QuerySendDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySendDetailsOutcome()>>(
			[this, request]()
			{
			return this->querySendDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

