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

#include <alibabacloud/dypnsapi-intl/Dypnsapi_intlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dypnsapi_intl;
using namespace AlibabaCloud::Dypnsapi_intl::Model;

namespace
{
	const std::string SERVICE_NAME = "Dypnsapi-intl";
}

Dypnsapi_intlClient::Dypnsapi_intlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dypnsapi_intlClient::Dypnsapi_intlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dypnsapi_intlClient::Dypnsapi_intlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dypnsapi_intlClient::~Dypnsapi_intlClient()
{}

Dypnsapi_intlClient::CheckVerificationOutcome Dypnsapi_intlClient::checkVerification(const CheckVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckVerificationOutcome(CheckVerificationResult(outcome.result()));
	else
		return CheckVerificationOutcome(outcome.error());
}

void Dypnsapi_intlClient::checkVerificationAsync(const CheckVerificationRequest& request, const CheckVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dypnsapi_intlClient::CheckVerificationOutcomeCallable Dypnsapi_intlClient::checkVerificationCallable(const CheckVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckVerificationOutcome()>>(
			[this, request]()
			{
			return this->checkVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dypnsapi_intlClient::SearchVerificationOutcome Dypnsapi_intlClient::searchVerification(const SearchVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchVerificationOutcome(SearchVerificationResult(outcome.result()));
	else
		return SearchVerificationOutcome(outcome.error());
}

void Dypnsapi_intlClient::searchVerificationAsync(const SearchVerificationRequest& request, const SearchVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dypnsapi_intlClient::SearchVerificationOutcomeCallable Dypnsapi_intlClient::searchVerificationCallable(const SearchVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchVerificationOutcome()>>(
			[this, request]()
			{
			return this->searchVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dypnsapi_intlClient::StartVerificationOutcome Dypnsapi_intlClient::startVerification(const StartVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartVerificationOutcome(StartVerificationResult(outcome.result()));
	else
		return StartVerificationOutcome(outcome.error());
}

void Dypnsapi_intlClient::startVerificationAsync(const StartVerificationRequest& request, const StartVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dypnsapi_intlClient::StartVerificationOutcomeCallable Dypnsapi_intlClient::startVerificationCallable(const StartVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartVerificationOutcome()>>(
			[this, request]()
			{
			return this->startVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

