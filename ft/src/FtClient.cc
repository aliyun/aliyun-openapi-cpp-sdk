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

#include <alibabacloud/ft/FtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

namespace
{
	const std::string SERVICE_NAME = "Ft";
}

FtClient::FtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::~FtClient()
{}

FtClient::CreateInsOutcome FtClient::createIns(const CreateInsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInsOutcome(CreateInsResult(outcome.result()));
	else
		return CreateInsOutcome(outcome.error());
}

void FtClient::createInsAsync(const CreateInsRequest& request, const CreateInsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::CreateInsOutcomeCallable FtClient::createInsCallable(const CreateInsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInsOutcome()>>(
			[this, request]()
			{
			return this->createIns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcNoDefaultErrorCodeApiOutcome FtClient::rpcNoDefaultErrorCodeApi(const RpcNoDefaultErrorCodeApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcNoDefaultErrorCodeApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcNoDefaultErrorCodeApiOutcome(RpcNoDefaultErrorCodeApiResult(outcome.result()));
	else
		return RpcNoDefaultErrorCodeApiOutcome(outcome.error());
}

void FtClient::rpcNoDefaultErrorCodeApiAsync(const RpcNoDefaultErrorCodeApiRequest& request, const RpcNoDefaultErrorCodeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcNoDefaultErrorCodeApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcNoDefaultErrorCodeApiOutcomeCallable FtClient::rpcNoDefaultErrorCodeApiCallable(const RpcNoDefaultErrorCodeApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcNoDefaultErrorCodeApiOutcome()>>(
			[this, request]()
			{
			return this->rpcNoDefaultErrorCodeApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::UpdateInsOutcome FtClient::updateIns(const UpdateInsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInsOutcome(UpdateInsResult(outcome.result()));
	else
		return UpdateInsOutcome(outcome.error());
}

void FtClient::updateInsAsync(const UpdateInsRequest& request, const UpdateInsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::UpdateInsOutcomeCallable FtClient::updateInsCallable(const UpdateInsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInsOutcome()>>(
			[this, request]()
			{
			return this->updateIns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

