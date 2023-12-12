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

#include <alibabacloud/tingwu/TingwuClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Tingwu;
using namespace AlibabaCloud::Tingwu::Model;

namespace
{
	const std::string SERVICE_NAME = "tingwu";
}

TingwuClient::TingwuClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TingwuClient::TingwuClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TingwuClient::TingwuClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TingwuClient::~TingwuClient()
{}

TingwuClient::CreateTaskOutcome TingwuClient::createTask(const CreateTaskRequest &request) const
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

void TingwuClient::createTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::CreateTaskOutcomeCallable TingwuClient::createTaskCallable(const CreateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
			[this, request]()
			{
			return this->createTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::CreateTranscriptionPhrasesOutcome TingwuClient::createTranscriptionPhrases(const CreateTranscriptionPhrasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTranscriptionPhrasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTranscriptionPhrasesOutcome(CreateTranscriptionPhrasesResult(outcome.result()));
	else
		return CreateTranscriptionPhrasesOutcome(outcome.error());
}

void TingwuClient::createTranscriptionPhrasesAsync(const CreateTranscriptionPhrasesRequest& request, const CreateTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTranscriptionPhrases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::CreateTranscriptionPhrasesOutcomeCallable TingwuClient::createTranscriptionPhrasesCallable(const CreateTranscriptionPhrasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTranscriptionPhrasesOutcome()>>(
			[this, request]()
			{
			return this->createTranscriptionPhrases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::DeleteTranscriptionPhrasesOutcome TingwuClient::deleteTranscriptionPhrases(const DeleteTranscriptionPhrasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTranscriptionPhrasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTranscriptionPhrasesOutcome(DeleteTranscriptionPhrasesResult(outcome.result()));
	else
		return DeleteTranscriptionPhrasesOutcome(outcome.error());
}

void TingwuClient::deleteTranscriptionPhrasesAsync(const DeleteTranscriptionPhrasesRequest& request, const DeleteTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTranscriptionPhrases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::DeleteTranscriptionPhrasesOutcomeCallable TingwuClient::deleteTranscriptionPhrasesCallable(const DeleteTranscriptionPhrasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTranscriptionPhrasesOutcome()>>(
			[this, request]()
			{
			return this->deleteTranscriptionPhrases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::GetTaskInfoOutcome TingwuClient::getTaskInfo(const GetTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskInfoOutcome(GetTaskInfoResult(outcome.result()));
	else
		return GetTaskInfoOutcome(outcome.error());
}

void TingwuClient::getTaskInfoAsync(const GetTaskInfoRequest& request, const GetTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::GetTaskInfoOutcomeCallable TingwuClient::getTaskInfoCallable(const GetTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->getTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::GetTranscriptionPhrasesOutcome TingwuClient::getTranscriptionPhrases(const GetTranscriptionPhrasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscriptionPhrasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscriptionPhrasesOutcome(GetTranscriptionPhrasesResult(outcome.result()));
	else
		return GetTranscriptionPhrasesOutcome(outcome.error());
}

void TingwuClient::getTranscriptionPhrasesAsync(const GetTranscriptionPhrasesRequest& request, const GetTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscriptionPhrases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::GetTranscriptionPhrasesOutcomeCallable TingwuClient::getTranscriptionPhrasesCallable(const GetTranscriptionPhrasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscriptionPhrasesOutcome()>>(
			[this, request]()
			{
			return this->getTranscriptionPhrases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::ListTranscriptionPhrasesOutcome TingwuClient::listTranscriptionPhrases(const ListTranscriptionPhrasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTranscriptionPhrasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTranscriptionPhrasesOutcome(ListTranscriptionPhrasesResult(outcome.result()));
	else
		return ListTranscriptionPhrasesOutcome(outcome.error());
}

void TingwuClient::listTranscriptionPhrasesAsync(const ListTranscriptionPhrasesRequest& request, const ListTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTranscriptionPhrases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::ListTranscriptionPhrasesOutcomeCallable TingwuClient::listTranscriptionPhrasesCallable(const ListTranscriptionPhrasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTranscriptionPhrasesOutcome()>>(
			[this, request]()
			{
			return this->listTranscriptionPhrases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::UpdateTranscriptionPhrasesOutcome TingwuClient::updateTranscriptionPhrases(const UpdateTranscriptionPhrasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTranscriptionPhrasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTranscriptionPhrasesOutcome(UpdateTranscriptionPhrasesResult(outcome.result()));
	else
		return UpdateTranscriptionPhrasesOutcome(outcome.error());
}

void TingwuClient::updateTranscriptionPhrasesAsync(const UpdateTranscriptionPhrasesRequest& request, const UpdateTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTranscriptionPhrases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::UpdateTranscriptionPhrasesOutcomeCallable TingwuClient::updateTranscriptionPhrasesCallable(const UpdateTranscriptionPhrasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTranscriptionPhrasesOutcome()>>(
			[this, request]()
			{
			return this->updateTranscriptionPhrases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

