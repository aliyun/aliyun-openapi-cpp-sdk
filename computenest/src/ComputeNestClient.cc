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

#include <alibabacloud/computenest/ComputeNestClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

namespace
{
	const std::string SERVICE_NAME = "ComputeNest";
}

ComputeNestClient::ComputeNestClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "computenest");
}

ComputeNestClient::ComputeNestClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "computenest");
}

ComputeNestClient::ComputeNestClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "computenest");
}

ComputeNestClient::~ComputeNestClient()
{}

ComputeNestClient::ChangeResourceGroupOutcome ComputeNestClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void ComputeNestClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::ChangeResourceGroupOutcomeCallable ComputeNestClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::ContinueDeployServiceInstanceOutcome ComputeNestClient::continueDeployServiceInstance(const ContinueDeployServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinueDeployServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinueDeployServiceInstanceOutcome(ContinueDeployServiceInstanceResult(outcome.result()));
	else
		return ContinueDeployServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::continueDeployServiceInstanceAsync(const ContinueDeployServiceInstanceRequest& request, const ContinueDeployServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continueDeployServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::ContinueDeployServiceInstanceOutcomeCallable ComputeNestClient::continueDeployServiceInstanceCallable(const ContinueDeployServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinueDeployServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->continueDeployServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::CreateServiceInstanceOutcome ComputeNestClient::createServiceInstance(const CreateServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceInstanceOutcome(CreateServiceInstanceResult(outcome.result()));
	else
		return CreateServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::createServiceInstanceAsync(const CreateServiceInstanceRequest& request, const CreateServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::CreateServiceInstanceOutcomeCallable ComputeNestClient::createServiceInstanceCallable(const CreateServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->createServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::DeleteServiceInstancesOutcome ComputeNestClient::deleteServiceInstances(const DeleteServiceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceInstancesOutcome(DeleteServiceInstancesResult(outcome.result()));
	else
		return DeleteServiceInstancesOutcome(outcome.error());
}

void ComputeNestClient::deleteServiceInstancesAsync(const DeleteServiceInstancesRequest& request, const DeleteServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::DeleteServiceInstancesOutcomeCallable ComputeNestClient::deleteServiceInstancesCallable(const DeleteServiceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::GetServiceInstanceOutcome ComputeNestClient::getServiceInstance(const GetServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceInstanceOutcome(GetServiceInstanceResult(outcome.result()));
	else
		return GetServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::getServiceInstanceAsync(const GetServiceInstanceRequest& request, const GetServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::GetServiceInstanceOutcomeCallable ComputeNestClient::getServiceInstanceCallable(const GetServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->getServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::GetServiceTemplateParameterConstraintsOutcome ComputeNestClient::getServiceTemplateParameterConstraints(const GetServiceTemplateParameterConstraintsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceTemplateParameterConstraintsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceTemplateParameterConstraintsOutcome(GetServiceTemplateParameterConstraintsResult(outcome.result()));
	else
		return GetServiceTemplateParameterConstraintsOutcome(outcome.error());
}

void ComputeNestClient::getServiceTemplateParameterConstraintsAsync(const GetServiceTemplateParameterConstraintsRequest& request, const GetServiceTemplateParameterConstraintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceTemplateParameterConstraints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::GetServiceTemplateParameterConstraintsOutcomeCallable ComputeNestClient::getServiceTemplateParameterConstraintsCallable(const GetServiceTemplateParameterConstraintsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceTemplateParameterConstraintsOutcome()>>(
			[this, request]()
			{
			return this->getServiceTemplateParameterConstraints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::ListServiceInstanceLogsOutcome ComputeNestClient::listServiceInstanceLogs(const ListServiceInstanceLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceInstanceLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceInstanceLogsOutcome(ListServiceInstanceLogsResult(outcome.result()));
	else
		return ListServiceInstanceLogsOutcome(outcome.error());
}

void ComputeNestClient::listServiceInstanceLogsAsync(const ListServiceInstanceLogsRequest& request, const ListServiceInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceInstanceLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::ListServiceInstanceLogsOutcomeCallable ComputeNestClient::listServiceInstanceLogsCallable(const ListServiceInstanceLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceInstanceLogsOutcome()>>(
			[this, request]()
			{
			return this->listServiceInstanceLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::ListServiceInstanceResourcesOutcome ComputeNestClient::listServiceInstanceResources(const ListServiceInstanceResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceInstanceResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceInstanceResourcesOutcome(ListServiceInstanceResourcesResult(outcome.result()));
	else
		return ListServiceInstanceResourcesOutcome(outcome.error());
}

void ComputeNestClient::listServiceInstanceResourcesAsync(const ListServiceInstanceResourcesRequest& request, const ListServiceInstanceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceInstanceResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::ListServiceInstanceResourcesOutcomeCallable ComputeNestClient::listServiceInstanceResourcesCallable(const ListServiceInstanceResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceInstanceResourcesOutcome()>>(
			[this, request]()
			{
			return this->listServiceInstanceResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::ListServiceInstancesOutcome ComputeNestClient::listServiceInstances(const ListServiceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceInstancesOutcome(ListServiceInstancesResult(outcome.result()));
	else
		return ListServiceInstancesOutcome(outcome.error());
}

void ComputeNestClient::listServiceInstancesAsync(const ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::ListServiceInstancesOutcomeCallable ComputeNestClient::listServiceInstancesCallable(const ListServiceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceInstancesOutcome()>>(
			[this, request]()
			{
			return this->listServiceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::RestartServiceInstanceOutcome ComputeNestClient::restartServiceInstance(const RestartServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartServiceInstanceOutcome(RestartServiceInstanceResult(outcome.result()));
	else
		return RestartServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::restartServiceInstanceAsync(const RestartServiceInstanceRequest& request, const RestartServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::RestartServiceInstanceOutcomeCallable ComputeNestClient::restartServiceInstanceCallable(const RestartServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::StartServiceInstanceOutcome ComputeNestClient::startServiceInstance(const StartServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartServiceInstanceOutcome(StartServiceInstanceResult(outcome.result()));
	else
		return StartServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::startServiceInstanceAsync(const StartServiceInstanceRequest& request, const StartServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::StartServiceInstanceOutcomeCallable ComputeNestClient::startServiceInstanceCallable(const StartServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->startServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestClient::StopServiceInstanceOutcome ComputeNestClient::stopServiceInstance(const StopServiceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopServiceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopServiceInstanceOutcome(StopServiceInstanceResult(outcome.result()));
	else
		return StopServiceInstanceOutcome(outcome.error());
}

void ComputeNestClient::stopServiceInstanceAsync(const StopServiceInstanceRequest& request, const StopServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestClient::StopServiceInstanceOutcomeCallable ComputeNestClient::stopServiceInstanceCallable(const StopServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

