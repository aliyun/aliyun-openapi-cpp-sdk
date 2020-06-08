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

#include <alibabacloud/dbfs/DBFSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

namespace
{
	const std::string SERVICE_NAME = "DBFS";
}

DBFSClient::DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::DBFSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::DBFSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::~DBFSClient()
{}

DBFSClient::AttachDbfsOutcome DBFSClient::attachDbfs(const AttachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDbfsOutcome(AttachDbfsResult(outcome.result()));
	else
		return AttachDbfsOutcome(outcome.error());
}

void DBFSClient::attachDbfsAsync(const AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::AttachDbfsOutcomeCallable DBFSClient::attachDbfsCallable(const AttachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDbfsOutcome()>>(
			[this, request]()
			{
			return this->attachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateDbfsOutcome DBFSClient::createDbfs(const CreateDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDbfsOutcome(CreateDbfsResult(outcome.result()));
	else
		return CreateDbfsOutcome(outcome.error());
}

void DBFSClient::createDbfsAsync(const CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateDbfsOutcomeCallable DBFSClient::createDbfsCallable(const CreateDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDbfsOutcome()>>(
			[this, request]()
			{
			return this->createDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteDbfsOutcome DBFSClient::deleteDbfs(const DeleteDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDbfsOutcome(DeleteDbfsResult(outcome.result()));
	else
		return DeleteDbfsOutcome(outcome.error());
}

void DBFSClient::deleteDbfsAsync(const DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteDbfsOutcomeCallable DBFSClient::deleteDbfsCallable(const DeleteDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDbfsOutcome()>>(
			[this, request]()
			{
			return this->deleteDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DetachDbfsOutcome DBFSClient::detachDbfs(const DetachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDbfsOutcome(DetachDbfsResult(outcome.result()));
	else
		return DetachDbfsOutcome(outcome.error());
}

void DBFSClient::detachDbfsAsync(const DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DetachDbfsOutcomeCallable DBFSClient::detachDbfsCallable(const DetachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDbfsOutcome()>>(
			[this, request]()
			{
			return this->detachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetDbfsOutcome DBFSClient::getDbfs(const GetDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDbfsOutcome(GetDbfsResult(outcome.result()));
	else
		return GetDbfsOutcome(outcome.error());
}

void DBFSClient::getDbfsAsync(const GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetDbfsOutcomeCallable DBFSClient::getDbfsCallable(const GetDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDbfsOutcome()>>(
			[this, request]()
			{
			return this->getDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListDbfsOutcome DBFSClient::listDbfs(const ListDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDbfsOutcome(ListDbfsResult(outcome.result()));
	else
		return ListDbfsOutcome(outcome.error());
}

void DBFSClient::listDbfsAsync(const ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListDbfsOutcomeCallable DBFSClient::listDbfsCallable(const ListDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDbfsOutcome()>>(
			[this, request]()
			{
			return this->listDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ResizeDbfsOutcome DBFSClient::resizeDbfs(const ResizeDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDbfsOutcome(ResizeDbfsResult(outcome.result()));
	else
		return ResizeDbfsOutcome(outcome.error());
}

void DBFSClient::resizeDbfsAsync(const ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ResizeDbfsOutcomeCallable DBFSClient::resizeDbfsCallable(const ResizeDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDbfsOutcome()>>(
			[this, request]()
			{
			return this->resizeDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

