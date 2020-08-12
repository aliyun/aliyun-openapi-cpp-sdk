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

#include <alibabacloud/devops-rdc/Devops_rdcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

namespace
{
	const std::string SERVICE_NAME = "devops-rdc";
}

Devops_rdcClient::Devops_rdcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::Devops_rdcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::Devops_rdcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::~Devops_rdcClient()
{}

Devops_rdcClient::CancelPipelineOutcome Devops_rdcClient::cancelPipeline(const CancelPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPipelineOutcome(CancelPipelineResult(outcome.result()));
	else
		return CancelPipelineOutcome(outcome.error());
}

void Devops_rdcClient::cancelPipelineAsync(const CancelPipelineRequest& request, const CancelPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CancelPipelineOutcomeCallable Devops_rdcClient::cancelPipelineCallable(const CancelPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPipelineOutcome()>>(
			[this, request]()
			{
			return this->cancelPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateCredentialOutcome Devops_rdcClient::createCredential(const CreateCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCredentialOutcome(CreateCredentialResult(outcome.result()));
	else
		return CreateCredentialOutcome(outcome.error());
}

void Devops_rdcClient::createCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateCredentialOutcomeCallable Devops_rdcClient::createCredentialCallable(const CreateCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
			[this, request]()
			{
			return this->createCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreatePipelineOutcome Devops_rdcClient::createPipeline(const CreatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineOutcome(CreatePipelineResult(outcome.result()));
	else
		return CreatePipelineOutcome(outcome.error());
}

void Devops_rdcClient::createPipelineAsync(const CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreatePipelineOutcomeCallable Devops_rdcClient::createPipelineCallable(const CreatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineOutcome()>>(
			[this, request]()
			{
			return this->createPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateServiceConnectionOutcome Devops_rdcClient::createServiceConnection(const CreateServiceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceConnectionOutcome(CreateServiceConnectionResult(outcome.result()));
	else
		return CreateServiceConnectionOutcome(outcome.error());
}

void Devops_rdcClient::createServiceConnectionAsync(const CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateServiceConnectionOutcomeCallable Devops_rdcClient::createServiceConnectionCallable(const CreateServiceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceConnectionOutcome()>>(
			[this, request]()
			{
			return this->createServiceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ExecutePipelineOutcome Devops_rdcClient::executePipeline(const ExecutePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecutePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecutePipelineOutcome(ExecutePipelineResult(outcome.result()));
	else
		return ExecutePipelineOutcome(outcome.error());
}

void Devops_rdcClient::executePipelineAsync(const ExecutePipelineRequest& request, const ExecutePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ExecutePipelineOutcomeCallable Devops_rdcClient::executePipelineCallable(const ExecutePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecutePipelineOutcome()>>(
			[this, request]()
			{
			return this->executePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceBuildNumberStatusOutcome Devops_rdcClient::getPipelineInstanceBuildNumberStatus(const GetPipelineInstanceBuildNumberStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceBuildNumberStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceBuildNumberStatusOutcome(GetPipelineInstanceBuildNumberStatusResult(outcome.result()));
	else
		return GetPipelineInstanceBuildNumberStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceBuildNumberStatusAsync(const GetPipelineInstanceBuildNumberStatusRequest& request, const GetPipelineInstanceBuildNumberStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceBuildNumberStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceBuildNumberStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceBuildNumberStatusCallable(const GetPipelineInstanceBuildNumberStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceBuildNumberStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceBuildNumberStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceGroupStatusOutcome Devops_rdcClient::getPipelineInstanceGroupStatus(const GetPipelineInstanceGroupStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceGroupStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceGroupStatusOutcome(GetPipelineInstanceGroupStatusResult(outcome.result()));
	else
		return GetPipelineInstanceGroupStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceGroupStatusAsync(const GetPipelineInstanceGroupStatusRequest& request, const GetPipelineInstanceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceGroupStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceGroupStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceGroupStatusCallable(const GetPipelineInstanceGroupStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceGroupStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceGroupStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceInfoOutcome Devops_rdcClient::getPipelineInstanceInfo(const GetPipelineInstanceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceInfoOutcome(GetPipelineInstanceInfoResult(outcome.result()));
	else
		return GetPipelineInstanceInfoOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceInfoAsync(const GetPipelineInstanceInfoRequest& request, const GetPipelineInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceInfoOutcomeCallable Devops_rdcClient::getPipelineInstanceInfoCallable(const GetPipelineInstanceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceInfoOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceStatusOutcome Devops_rdcClient::getPipelineInstanceStatus(const GetPipelineInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceStatusOutcome(GetPipelineInstanceStatusResult(outcome.result()));
	else
		return GetPipelineInstanceStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceStatusAsync(const GetPipelineInstanceStatusRequest& request, const GetPipelineInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceStatusCallable(const GetPipelineInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineLogOutcome Devops_rdcClient::getPipelineLog(const GetPipelineLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineLogOutcome(GetPipelineLogResult(outcome.result()));
	else
		return GetPipelineLogOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineLogAsync(const GetPipelineLogRequest& request, const GetPipelineLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineLogOutcomeCallable Devops_rdcClient::getPipelineLogCallable(const GetPipelineLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineLogOutcome()>>(
			[this, request]()
			{
			return this->getPipelineLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipleineLatestInstanceStatusOutcome Devops_rdcClient::getPipleineLatestInstanceStatus(const GetPipleineLatestInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipleineLatestInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipleineLatestInstanceStatusOutcome(GetPipleineLatestInstanceStatusResult(outcome.result()));
	else
		return GetPipleineLatestInstanceStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipleineLatestInstanceStatusAsync(const GetPipleineLatestInstanceStatusRequest& request, const GetPipleineLatestInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipleineLatestInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipleineLatestInstanceStatusOutcomeCallable Devops_rdcClient::getPipleineLatestInstanceStatusCallable(const GetPipleineLatestInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipleineLatestInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipleineLatestInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListCredentialsOutcome Devops_rdcClient::listCredentials(const ListCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCredentialsOutcome(ListCredentialsResult(outcome.result()));
	else
		return ListCredentialsOutcome(outcome.error());
}

void Devops_rdcClient::listCredentialsAsync(const ListCredentialsRequest& request, const ListCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListCredentialsOutcomeCallable Devops_rdcClient::listCredentialsCallable(const ListCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCredentialsOutcome()>>(
			[this, request]()
			{
			return this->listCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListPipelinesOutcome Devops_rdcClient::listPipelines(const ListPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelinesOutcome(ListPipelinesResult(outcome.result()));
	else
		return ListPipelinesOutcome(outcome.error());
}

void Devops_rdcClient::listPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListPipelinesOutcomeCallable Devops_rdcClient::listPipelinesCallable(const ListPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelinesOutcome()>>(
			[this, request]()
			{
			return this->listPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListServiceConnectionsOutcome Devops_rdcClient::listServiceConnections(const ListServiceConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceConnectionsOutcome(ListServiceConnectionsResult(outcome.result()));
	else
		return ListServiceConnectionsOutcome(outcome.error());
}

void Devops_rdcClient::listServiceConnectionsAsync(const ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListServiceConnectionsOutcomeCallable Devops_rdcClient::listServiceConnectionsCallable(const ListServiceConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listServiceConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

