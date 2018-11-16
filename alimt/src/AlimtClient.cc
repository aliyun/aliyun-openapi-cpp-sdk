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

#include <alibabacloud/alimt/AlimtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alimt;
using namespace AlibabaCloud::Alimt::Model;

namespace
{
	const std::string SERVICE_NAME = "alimt";
}

AlimtClient::AlimtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::AlimtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::AlimtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::~AlimtClient()
{}

AlimtClient::TranslateECommerceOutcome AlimtClient::translateECommerce(const TranslateECommerceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateECommerceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateECommerceOutcome(TranslateECommerceResult(outcome.result()));
	else
		return TranslateECommerceOutcome(outcome.error());
}

void AlimtClient::translateECommerceAsync(const TranslateECommerceRequest& request, const TranslateECommerceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translateECommerce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateECommerceOutcomeCallable AlimtClient::translateECommerceCallable(const TranslateECommerceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateECommerceOutcome()>>(
			[this, request]()
			{
			return this->translateECommerce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::TranslateGeneralOutcome AlimtClient::translateGeneral(const TranslateGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateGeneralOutcome(TranslateGeneralResult(outcome.result()));
	else
		return TranslateGeneralOutcome(outcome.error());
}

void AlimtClient::translateGeneralAsync(const TranslateGeneralRequest& request, const TranslateGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translateGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateGeneralOutcomeCallable AlimtClient::translateGeneralCallable(const TranslateGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateGeneralOutcome()>>(
			[this, request]()
			{
			return this->translateGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

