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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::DysmsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::DysmsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::~DysmsapiClient()
{}

DysmsapiClient::BatchSendMessageToGlobeOutcome DysmsapiClient::batchSendMessageToGlobe(const BatchSendMessageToGlobeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSendMessageToGlobeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSendMessageToGlobeOutcome(BatchSendMessageToGlobeResult(outcome.result()));
	else
		return BatchSendMessageToGlobeOutcome(outcome.error());
}

void DysmsapiClient::batchSendMessageToGlobeAsync(const BatchSendMessageToGlobeRequest& request, const BatchSendMessageToGlobeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSendMessageToGlobe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::BatchSendMessageToGlobeOutcomeCallable DysmsapiClient::batchSendMessageToGlobeCallable(const BatchSendMessageToGlobeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSendMessageToGlobeOutcome()>>(
			[this, request]()
			{
			return this->batchSendMessageToGlobe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::ConversionDataOutcome DysmsapiClient::conversionData(const ConversionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConversionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConversionDataOutcome(ConversionDataResult(outcome.result()));
	else
		return ConversionDataOutcome(outcome.error());
}

void DysmsapiClient::conversionDataAsync(const ConversionDataRequest& request, const ConversionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, conversionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::ConversionDataOutcomeCallable DysmsapiClient::conversionDataCallable(const ConversionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConversionDataOutcome()>>(
			[this, request]()
			{
			return this->conversionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::QueryMessageOutcome DysmsapiClient::queryMessage(const QueryMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMessageOutcome(QueryMessageResult(outcome.result()));
	else
		return QueryMessageOutcome(outcome.error());
}

void DysmsapiClient::queryMessageAsync(const QueryMessageRequest& request, const QueryMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::QueryMessageOutcomeCallable DysmsapiClient::queryMessageCallable(const QueryMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMessageOutcome()>>(
			[this, request]()
			{
			return this->queryMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SendMessageToGlobeOutcome DysmsapiClient::sendMessageToGlobe(const SendMessageToGlobeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageToGlobeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageToGlobeOutcome(SendMessageToGlobeResult(outcome.result()));
	else
		return SendMessageToGlobeOutcome(outcome.error());
}

void DysmsapiClient::sendMessageToGlobeAsync(const SendMessageToGlobeRequest& request, const SendMessageToGlobeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessageToGlobe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendMessageToGlobeOutcomeCallable DysmsapiClient::sendMessageToGlobeCallable(const SendMessageToGlobeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageToGlobeOutcome()>>(
			[this, request]()
			{
			return this->sendMessageToGlobe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SendMessageWithTemplateOutcome DysmsapiClient::sendMessageWithTemplate(const SendMessageWithTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageWithTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageWithTemplateOutcome(SendMessageWithTemplateResult(outcome.result()));
	else
		return SendMessageWithTemplateOutcome(outcome.error());
}

void DysmsapiClient::sendMessageWithTemplateAsync(const SendMessageWithTemplateRequest& request, const SendMessageWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessageWithTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendMessageWithTemplateOutcomeCallable DysmsapiClient::sendMessageWithTemplateCallable(const SendMessageWithTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageWithTemplateOutcome()>>(
			[this, request]()
			{
			return this->sendMessageWithTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SmsConversionOutcome DysmsapiClient::smsConversion(const SmsConversionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmsConversionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmsConversionOutcome(SmsConversionResult(outcome.result()));
	else
		return SmsConversionOutcome(outcome.error());
}

void DysmsapiClient::smsConversionAsync(const SmsConversionRequest& request, const SmsConversionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smsConversion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SmsConversionOutcomeCallable DysmsapiClient::smsConversionCallable(const SmsConversionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmsConversionOutcome()>>(
			[this, request]()
			{
			return this->smsConversion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

