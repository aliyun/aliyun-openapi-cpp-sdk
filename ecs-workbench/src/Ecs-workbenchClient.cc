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

#include <alibabacloud/ecs-workbench/Ecs_workbenchClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

namespace
{
	const std::string SERVICE_NAME = "ecs-workbench";
}

Ecs_workbenchClient::Ecs_workbenchClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs-workbench");
}

Ecs_workbenchClient::Ecs_workbenchClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs-workbench");
}

Ecs_workbenchClient::Ecs_workbenchClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs-workbench");
}

Ecs_workbenchClient::~Ecs_workbenchClient()
{}

Ecs_workbenchClient::GetInstanceRecordConfigOutcome Ecs_workbenchClient::getInstanceRecordConfig(const GetInstanceRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceRecordConfigOutcome(GetInstanceRecordConfigResult(outcome.result()));
	else
		return GetInstanceRecordConfigOutcome(outcome.error());
}

void Ecs_workbenchClient::getInstanceRecordConfigAsync(const GetInstanceRecordConfigRequest& request, const GetInstanceRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::GetInstanceRecordConfigOutcomeCallable Ecs_workbenchClient::getInstanceRecordConfigCallable(const GetInstanceRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->getInstanceRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Ecs_workbenchClient::ListInstanceRecordsOutcome Ecs_workbenchClient::listInstanceRecords(const ListInstanceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceRecordsOutcome(ListInstanceRecordsResult(outcome.result()));
	else
		return ListInstanceRecordsOutcome(outcome.error());
}

void Ecs_workbenchClient::listInstanceRecordsAsync(const ListInstanceRecordsRequest& request, const ListInstanceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::ListInstanceRecordsOutcomeCallable Ecs_workbenchClient::listInstanceRecordsCallable(const ListInstanceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceRecordsOutcome()>>(
			[this, request]()
			{
			return this->listInstanceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Ecs_workbenchClient::ListTerminalCommandsOutcome Ecs_workbenchClient::listTerminalCommands(const ListTerminalCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTerminalCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTerminalCommandsOutcome(ListTerminalCommandsResult(outcome.result()));
	else
		return ListTerminalCommandsOutcome(outcome.error());
}

void Ecs_workbenchClient::listTerminalCommandsAsync(const ListTerminalCommandsRequest& request, const ListTerminalCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTerminalCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::ListTerminalCommandsOutcomeCallable Ecs_workbenchClient::listTerminalCommandsCallable(const ListTerminalCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTerminalCommandsOutcome()>>(
			[this, request]()
			{
			return this->listTerminalCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Ecs_workbenchClient::LoginInstanceOutcome Ecs_workbenchClient::loginInstance(const LoginInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoginInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoginInstanceOutcome(LoginInstanceResult(outcome.result()));
	else
		return LoginInstanceOutcome(outcome.error());
}

void Ecs_workbenchClient::loginInstanceAsync(const LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loginInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::LoginInstanceOutcomeCallable Ecs_workbenchClient::loginInstanceCallable(const LoginInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoginInstanceOutcome()>>(
			[this, request]()
			{
			return this->loginInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Ecs_workbenchClient::SetInstanceRecordConfigOutcome Ecs_workbenchClient::setInstanceRecordConfig(const SetInstanceRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetInstanceRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetInstanceRecordConfigOutcome(SetInstanceRecordConfigResult(outcome.result()));
	else
		return SetInstanceRecordConfigOutcome(outcome.error());
}

void Ecs_workbenchClient::setInstanceRecordConfigAsync(const SetInstanceRecordConfigRequest& request, const SetInstanceRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setInstanceRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::SetInstanceRecordConfigOutcomeCallable Ecs_workbenchClient::setInstanceRecordConfigCallable(const SetInstanceRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetInstanceRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->setInstanceRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Ecs_workbenchClient::ViewInstanceRecordsOutcome Ecs_workbenchClient::viewInstanceRecords(const ViewInstanceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ViewInstanceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ViewInstanceRecordsOutcome(ViewInstanceRecordsResult(outcome.result()));
	else
		return ViewInstanceRecordsOutcome(outcome.error());
}

void Ecs_workbenchClient::viewInstanceRecordsAsync(const ViewInstanceRecordsRequest& request, const ViewInstanceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, viewInstanceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Ecs_workbenchClient::ViewInstanceRecordsOutcomeCallable Ecs_workbenchClient::viewInstanceRecordsCallable(const ViewInstanceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ViewInstanceRecordsOutcome()>>(
			[this, request]()
			{
			return this->viewInstanceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

