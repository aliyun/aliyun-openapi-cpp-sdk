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

#include <alibabacloud/xspace/XspaceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Xspace;
using namespace AlibabaCloud::Xspace::Model;

namespace
{
	const std::string SERVICE_NAME = "xspace";
}

XspaceClient::XspaceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "xspace");
}

XspaceClient::XspaceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "xspace");
}

XspaceClient::XspaceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "xspace");
}

XspaceClient::~XspaceClient()
{}

XspaceClient::QueryCustomerByIdOutcome XspaceClient::queryCustomerById(const QueryCustomerByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerByIdOutcome(QueryCustomerByIdResult(outcome.result()));
	else
		return QueryCustomerByIdOutcome(outcome.error());
}

void XspaceClient::queryCustomerByIdAsync(const QueryCustomerByIdRequest& request, const QueryCustomerByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XspaceClient::QueryCustomerByIdOutcomeCallable XspaceClient::queryCustomerByIdCallable(const QueryCustomerByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerByIdOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XspaceClient::QueryCustomerByPhoneOutcome XspaceClient::queryCustomerByPhone(const QueryCustomerByPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerByPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerByPhoneOutcome(QueryCustomerByPhoneResult(outcome.result()));
	else
		return QueryCustomerByPhoneOutcome(outcome.error());
}

void XspaceClient::queryCustomerByPhoneAsync(const QueryCustomerByPhoneRequest& request, const QueryCustomerByPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerByPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XspaceClient::QueryCustomerByPhoneOutcomeCallable XspaceClient::queryCustomerByPhoneCallable(const QueryCustomerByPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerByPhoneOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerByPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

