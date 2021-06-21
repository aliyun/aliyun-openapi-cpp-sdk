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

#include <alibabacloud/rsimganalys/RsimganalysClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

namespace
{
	const std::string SERVICE_NAME = "rsimganalys";
}

RsimganalysClient::RsimganalysClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rsimganalys");
}

RsimganalysClient::RsimganalysClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rsimganalys");
}

RsimganalysClient::RsimganalysClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rsimganalys");
}

RsimganalysClient::~RsimganalysClient()
{}

RsimganalysClient::CreateImageOutcome RsimganalysClient::createImage(const CreateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageOutcome(CreateImageResult(outcome.result()));
	else
		return CreateImageOutcome(outcome.error());
}

void RsimganalysClient::createImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::CreateImageOutcomeCallable RsimganalysClient::createImageCallable(const CreateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
			[this, request]()
			{
			return this->createImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::CreateTaskOutcome RsimganalysClient::createTask(const CreateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskOutcome(CreateTaskResult(outcome.result()));
	else
		return CreateTaskOutcome(outcome.error());
}

void RsimganalysClient::createTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::CreateTaskOutcomeCallable RsimganalysClient::createTaskCallable(const CreateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
			[this, request]()
			{
			return this->createTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::DeleteImageOutcome RsimganalysClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void RsimganalysClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::DeleteImageOutcomeCallable RsimganalysClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::DeleteTaskOutcome RsimganalysClient::deleteTask(const DeleteTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskOutcome(DeleteTaskResult(outcome.result()));
	else
		return DeleteTaskOutcome(outcome.error());
}

void RsimganalysClient::deleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::DeleteTaskOutcomeCallable RsimganalysClient::deleteTaskCallable(const DeleteTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::GetImageOutcome RsimganalysClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void RsimganalysClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::GetImageOutcomeCallable RsimganalysClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::GetShpInfoOutcome RsimganalysClient::getShpInfo(const GetShpInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetShpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetShpInfoOutcome(GetShpInfoResult(outcome.result()));
	else
		return GetShpInfoOutcome(outcome.error());
}

void RsimganalysClient::getShpInfoAsync(const GetShpInfoRequest& request, const GetShpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getShpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::GetShpInfoOutcomeCallable RsimganalysClient::getShpInfoCallable(const GetShpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetShpInfoOutcome()>>(
			[this, request]()
			{
			return this->getShpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::GetTaskOutcome RsimganalysClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void RsimganalysClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::GetTaskOutcomeCallable RsimganalysClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RsimganalysClient::ListTasksOutcome RsimganalysClient::listTasks(const ListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksOutcome(ListTasksResult(outcome.result()));
	else
		return ListTasksOutcome(outcome.error());
}

void RsimganalysClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RsimganalysClient::ListTasksOutcomeCallable RsimganalysClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

