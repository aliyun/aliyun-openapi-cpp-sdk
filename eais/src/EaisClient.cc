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

#include <alibabacloud/eais/EaisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eais;
using namespace AlibabaCloud::Eais::Model;

namespace
{
	const std::string SERVICE_NAME = "eais";
}

EaisClient::EaisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::EaisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::EaisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::~EaisClient()
{}

EaisClient::AttachEaiOutcome EaisClient::attachEai(const AttachEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachEaiOutcome(AttachEaiResult(outcome.result()));
	else
		return AttachEaiOutcome(outcome.error());
}

void EaisClient::attachEaiAsync(const AttachEaiRequest& request, const AttachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::AttachEaiOutcomeCallable EaisClient::attachEaiCallable(const AttachEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachEaiOutcome()>>(
			[this, request]()
			{
			return this->attachEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiOutcome EaisClient::createEai(const CreateEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiOutcome(CreateEaiResult(outcome.result()));
	else
		return CreateEaiOutcome(outcome.error());
}

void EaisClient::createEaiAsync(const CreateEaiRequest& request, const CreateEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiOutcomeCallable EaisClient::createEaiCallable(const CreateEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiOutcome()>>(
			[this, request]()
			{
			return this->createEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiAllOutcome EaisClient::createEaiAll(const CreateEaiAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiAllOutcome(CreateEaiAllResult(outcome.result()));
	else
		return CreateEaiAllOutcome(outcome.error());
}

void EaisClient::createEaiAllAsync(const CreateEaiAllRequest& request, const CreateEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEaiAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiAllOutcomeCallable EaisClient::createEaiAllCallable(const CreateEaiAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiAllOutcome()>>(
			[this, request]()
			{
			return this->createEaiAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DeleteEaiOutcome EaisClient::deleteEai(const DeleteEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEaiOutcome(DeleteEaiResult(outcome.result()));
	else
		return DeleteEaiOutcome(outcome.error());
}

void EaisClient::deleteEaiAsync(const DeleteEaiRequest& request, const DeleteEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DeleteEaiOutcomeCallable EaisClient::deleteEaiCallable(const DeleteEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEaiOutcome()>>(
			[this, request]()
			{
			return this->deleteEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DeleteEaiAllOutcome EaisClient::deleteEaiAll(const DeleteEaiAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEaiAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEaiAllOutcome(DeleteEaiAllResult(outcome.result()));
	else
		return DeleteEaiAllOutcome(outcome.error());
}

void EaisClient::deleteEaiAllAsync(const DeleteEaiAllRequest& request, const DeleteEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEaiAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DeleteEaiAllOutcomeCallable EaisClient::deleteEaiAllCallable(const DeleteEaiAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEaiAllOutcome()>>(
			[this, request]()
			{
			return this->deleteEaiAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DescribeEaisOutcome EaisClient::describeEais(const DescribeEaisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEaisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEaisOutcome(DescribeEaisResult(outcome.result()));
	else
		return DescribeEaisOutcome(outcome.error());
}

void EaisClient::describeEaisAsync(const DescribeEaisRequest& request, const DescribeEaisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEais(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DescribeEaisOutcomeCallable EaisClient::describeEaisCallable(const DescribeEaisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEaisOutcome()>>(
			[this, request]()
			{
			return this->describeEais(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DescribeRegionsOutcome EaisClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void EaisClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DescribeRegionsOutcomeCallable EaisClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DetachEaiOutcome EaisClient::detachEai(const DetachEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachEaiOutcome(DetachEaiResult(outcome.result()));
	else
		return DetachEaiOutcome(outcome.error());
}

void EaisClient::detachEaiAsync(const DetachEaiRequest& request, const DetachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DetachEaiOutcomeCallable EaisClient::detachEaiCallable(const DetachEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachEaiOutcome()>>(
			[this, request]()
			{
			return this->detachEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::GetPrivateIpOutcome EaisClient::getPrivateIp(const GetPrivateIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrivateIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrivateIpOutcome(GetPrivateIpResult(outcome.result()));
	else
		return GetPrivateIpOutcome(outcome.error());
}

void EaisClient::getPrivateIpAsync(const GetPrivateIpRequest& request, const GetPrivateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrivateIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::GetPrivateIpOutcomeCallable EaisClient::getPrivateIpCallable(const GetPrivateIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrivateIpOutcome()>>(
			[this, request]()
			{
			return this->getPrivateIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

