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

#include <alibabacloud/ddosdiversion/DdosDiversionClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DdosDiversion;
using namespace AlibabaCloud::DdosDiversion::Model;

namespace
{
	const std::string SERVICE_NAME = "DdosDiversion";
}

DdosDiversionClient::DdosDiversionClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosDiversionClient::DdosDiversionClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosDiversionClient::DdosDiversionClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosDiversionClient::~DdosDiversionClient()
{}

DdosDiversionClient::ConfigNetStatusOutcome DdosDiversionClient::configNetStatus(const ConfigNetStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigNetStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigNetStatusOutcome(ConfigNetStatusResult(outcome.result()));
	else
		return ConfigNetStatusOutcome(outcome.error());
}

void DdosDiversionClient::configNetStatusAsync(const ConfigNetStatusRequest& request, const ConfigNetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configNetStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosDiversionClient::ConfigNetStatusOutcomeCallable DdosDiversionClient::configNetStatusCallable(const ConfigNetStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigNetStatusOutcome()>>(
			[this, request]()
			{
			return this->configNetStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosDiversionClient::ListInstanceOutcome DdosDiversionClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void DdosDiversionClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosDiversionClient::ListInstanceOutcomeCallable DdosDiversionClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosDiversionClient::QueryNetListOutcome DdosDiversionClient::queryNetList(const QueryNetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryNetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryNetListOutcome(QueryNetListResult(outcome.result()));
	else
		return QueryNetListOutcome(outcome.error());
}

void DdosDiversionClient::queryNetListAsync(const QueryNetListRequest& request, const QueryNetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryNetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosDiversionClient::QueryNetListOutcomeCallable DdosDiversionClient::queryNetListCallable(const QueryNetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryNetListOutcome()>>(
			[this, request]()
			{
			return this->queryNetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

