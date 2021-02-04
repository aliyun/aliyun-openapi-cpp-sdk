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

#include <alibabacloud/safconsole/SafconsoleClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Safconsole;
using namespace AlibabaCloud::Safconsole::Model;

namespace
{
	const std::string SERVICE_NAME = "safconsole";
}

SafconsoleClient::SafconsoleClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "saf");
}

SafconsoleClient::SafconsoleClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "saf");
}

SafconsoleClient::SafconsoleClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "saf");
}

SafconsoleClient::~SafconsoleClient()
{}

SafconsoleClient::RevokeFeedbackOutcome SafconsoleClient::revokeFeedback(const RevokeFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeFeedbackOutcome(RevokeFeedbackResult(outcome.result()));
	else
		return RevokeFeedbackOutcome(outcome.error());
}

void SafconsoleClient::revokeFeedbackAsync(const RevokeFeedbackRequest& request, const RevokeFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafconsoleClient::RevokeFeedbackOutcomeCallable SafconsoleClient::revokeFeedbackCallable(const RevokeFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeFeedbackOutcome()>>(
			[this, request]()
			{
			return this->revokeFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SafconsoleClient::SendFeedbackOutcome SafconsoleClient::sendFeedback(const SendFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendFeedbackOutcome(SendFeedbackResult(outcome.result()));
	else
		return SendFeedbackOutcome(outcome.error());
}

void SafconsoleClient::sendFeedbackAsync(const SendFeedbackRequest& request, const SendFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafconsoleClient::SendFeedbackOutcomeCallable SafconsoleClient::sendFeedbackCallable(const SendFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendFeedbackOutcome()>>(
			[this, request]()
			{
			return this->sendFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

