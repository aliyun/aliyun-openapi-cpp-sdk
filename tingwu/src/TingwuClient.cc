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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tingwupaas");
}

TingwuClient::TingwuClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tingwupaas");
}

TingwuClient::TingwuClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tingwupaas");
}

TingwuClient::~TingwuClient()
{}

TingwuClient::CreateFileTransOutcome TingwuClient::createFileTrans(const CreateFileTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileTransOutcome(CreateFileTransResult(outcome.result()));
	else
		return CreateFileTransOutcome(outcome.error());
}

void TingwuClient::createFileTransAsync(const CreateFileTransRequest& request, const CreateFileTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::CreateFileTransOutcomeCallable TingwuClient::createFileTransCallable(const CreateFileTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileTransOutcome()>>(
			[this, request]()
			{
			return this->createFileTrans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::CreateMeetingTransOutcome TingwuClient::createMeetingTrans(const CreateMeetingTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMeetingTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMeetingTransOutcome(CreateMeetingTransResult(outcome.result()));
	else
		return CreateMeetingTransOutcome(outcome.error());
}

void TingwuClient::createMeetingTransAsync(const CreateMeetingTransRequest& request, const CreateMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMeetingTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::CreateMeetingTransOutcomeCallable TingwuClient::createMeetingTransCallable(const CreateMeetingTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMeetingTransOutcome()>>(
			[this, request]()
			{
			return this->createMeetingTrans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::GetFileTransOutcome TingwuClient::getFileTrans(const GetFileTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileTransOutcome(GetFileTransResult(outcome.result()));
	else
		return GetFileTransOutcome(outcome.error());
}

void TingwuClient::getFileTransAsync(const GetFileTransRequest& request, const GetFileTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::GetFileTransOutcomeCallable TingwuClient::getFileTransCallable(const GetFileTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileTransOutcome()>>(
			[this, request]()
			{
			return this->getFileTrans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::GetMeetingTransOutcome TingwuClient::getMeetingTrans(const GetMeetingTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMeetingTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMeetingTransOutcome(GetMeetingTransResult(outcome.result()));
	else
		return GetMeetingTransOutcome(outcome.error());
}

void TingwuClient::getMeetingTransAsync(const GetMeetingTransRequest& request, const GetMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMeetingTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::GetMeetingTransOutcomeCallable TingwuClient::getMeetingTransCallable(const GetMeetingTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMeetingTransOutcome()>>(
			[this, request]()
			{
			return this->getMeetingTrans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TingwuClient::StopMeetingTransOutcome TingwuClient::stopMeetingTrans(const StopMeetingTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMeetingTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMeetingTransOutcome(StopMeetingTransResult(outcome.result()));
	else
		return StopMeetingTransOutcome(outcome.error());
}

void TingwuClient::stopMeetingTransAsync(const StopMeetingTransRequest& request, const StopMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMeetingTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TingwuClient::StopMeetingTransOutcomeCallable TingwuClient::stopMeetingTransCallable(const StopMeetingTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMeetingTransOutcome()>>(
			[this, request]()
			{
			return this->stopMeetingTrans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

