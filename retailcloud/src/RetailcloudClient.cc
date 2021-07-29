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

#include <alibabacloud/retailcloud/RetailcloudClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

namespace
{
	const std::string SERVICE_NAME = "retailcloud";
}

RetailcloudClient::RetailcloudClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RetailcloudClient::RetailcloudClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RetailcloudClient::RetailcloudClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RetailcloudClient::~RetailcloudClient()
{}

RetailcloudClient::AddClusterNodeOutcome RetailcloudClient::addClusterNode(const AddClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClusterNodeOutcome(AddClusterNodeResult(outcome.result()));
	else
		return AddClusterNodeOutcome(outcome.error());
}

void RetailcloudClient::addClusterNodeAsync(const AddClusterNodeRequest& request, const AddClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::AddClusterNodeOutcomeCallable RetailcloudClient::addClusterNodeCallable(const AddClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->addClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::AllocatePodConfigOutcome RetailcloudClient::allocatePodConfig(const AllocatePodConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePodConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePodConfigOutcome(AllocatePodConfigResult(outcome.result()));
	else
		return AllocatePodConfigOutcome(outcome.error());
}

void RetailcloudClient::allocatePodConfigAsync(const AllocatePodConfigRequest& request, const AllocatePodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePodConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::AllocatePodConfigOutcomeCallable RetailcloudClient::allocatePodConfigCallable(const AllocatePodConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePodConfigOutcome()>>(
			[this, request]()
			{
			return this->allocatePodConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::BatchAddServersOutcome RetailcloudClient::batchAddServers(const BatchAddServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddServersOutcome(BatchAddServersResult(outcome.result()));
	else
		return BatchAddServersOutcome(outcome.error());
}

void RetailcloudClient::batchAddServersAsync(const BatchAddServersRequest& request, const BatchAddServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::BatchAddServersOutcomeCallable RetailcloudClient::batchAddServersCallable(const BatchAddServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddServersOutcome()>>(
			[this, request]()
			{
			return this->batchAddServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::BindGroupOutcome RetailcloudClient::bindGroup(const BindGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindGroupOutcome(BindGroupResult(outcome.result()));
	else
		return BindGroupOutcome(outcome.error());
}

void RetailcloudClient::bindGroupAsync(const BindGroupRequest& request, const BindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::BindGroupOutcomeCallable RetailcloudClient::bindGroupCallable(const BindGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindGroupOutcome()>>(
			[this, request]()
			{
			return this->bindGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::BindNodeLabelOutcome RetailcloudClient::bindNodeLabel(const BindNodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindNodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindNodeLabelOutcome(BindNodeLabelResult(outcome.result()));
	else
		return BindNodeLabelOutcome(outcome.error());
}

void RetailcloudClient::bindNodeLabelAsync(const BindNodeLabelRequest& request, const BindNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindNodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::BindNodeLabelOutcomeCallable RetailcloudClient::bindNodeLabelCallable(const BindNodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindNodeLabelOutcome()>>(
			[this, request]()
			{
			return this->bindNodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CloseDeployOrderOutcome RetailcloudClient::closeDeployOrder(const CloseDeployOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDeployOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDeployOrderOutcome(CloseDeployOrderResult(outcome.result()));
	else
		return CloseDeployOrderOutcome(outcome.error());
}

void RetailcloudClient::closeDeployOrderAsync(const CloseDeployOrderRequest& request, const CloseDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDeployOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CloseDeployOrderOutcomeCallable RetailcloudClient::closeDeployOrderCallable(const CloseDeployOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDeployOrderOutcome()>>(
			[this, request]()
			{
			return this->closeDeployOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateAccountOutcome RetailcloudClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void RetailcloudClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateAccountOutcomeCallable RetailcloudClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateAppOutcome RetailcloudClient::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void RetailcloudClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateAppOutcomeCallable RetailcloudClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateAppGroupOutcome RetailcloudClient::createAppGroup(const CreateAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppGroupOutcome(CreateAppGroupResult(outcome.result()));
	else
		return CreateAppGroupOutcome(outcome.error());
}

void RetailcloudClient::createAppGroupAsync(const CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateAppGroupOutcomeCallable RetailcloudClient::createAppGroupCallable(const CreateAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppGroupOutcome()>>(
			[this, request]()
			{
			return this->createAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateAppMonitorsOutcome RetailcloudClient::createAppMonitors(const CreateAppMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppMonitorsOutcome(CreateAppMonitorsResult(outcome.result()));
	else
		return CreateAppMonitorsOutcome(outcome.error());
}

void RetailcloudClient::createAppMonitorsAsync(const CreateAppMonitorsRequest& request, const CreateAppMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateAppMonitorsOutcomeCallable RetailcloudClient::createAppMonitorsCallable(const CreateAppMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppMonitorsOutcome()>>(
			[this, request]()
			{
			return this->createAppMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateAppResourceAllocOutcome RetailcloudClient::createAppResourceAlloc(const CreateAppResourceAllocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppResourceAllocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppResourceAllocOutcome(CreateAppResourceAllocResult(outcome.result()));
	else
		return CreateAppResourceAllocOutcome(outcome.error());
}

void RetailcloudClient::createAppResourceAllocAsync(const CreateAppResourceAllocRequest& request, const CreateAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppResourceAlloc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateAppResourceAllocOutcomeCallable RetailcloudClient::createAppResourceAllocCallable(const CreateAppResourceAllocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppResourceAllocOutcome()>>(
			[this, request]()
			{
			return this->createAppResourceAlloc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateClusterOutcome RetailcloudClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void RetailcloudClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateClusterOutcomeCallable RetailcloudClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateDbOutcome RetailcloudClient::createDb(const CreateDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDbOutcome(CreateDbResult(outcome.result()));
	else
		return CreateDbOutcome(outcome.error());
}

void RetailcloudClient::createDbAsync(const CreateDbRequest& request, const CreateDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateDbOutcomeCallable RetailcloudClient::createDbCallable(const CreateDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDbOutcome()>>(
			[this, request]()
			{
			return this->createDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateDeployConfigOutcome RetailcloudClient::createDeployConfig(const CreateDeployConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeployConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeployConfigOutcome(CreateDeployConfigResult(outcome.result()));
	else
		return CreateDeployConfigOutcome(outcome.error());
}

void RetailcloudClient::createDeployConfigAsync(const CreateDeployConfigRequest& request, const CreateDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeployConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateDeployConfigOutcomeCallable RetailcloudClient::createDeployConfigCallable(const CreateDeployConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeployConfigOutcome()>>(
			[this, request]()
			{
			return this->createDeployConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateEnvironmentOutcome RetailcloudClient::createEnvironment(const CreateEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvironmentOutcome(CreateEnvironmentResult(outcome.result()));
	else
		return CreateEnvironmentOutcome(outcome.error());
}

void RetailcloudClient::createEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateEnvironmentOutcomeCallable RetailcloudClient::createEnvironmentCallable(const CreateEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->createEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateNodeLabelOutcome RetailcloudClient::createNodeLabel(const CreateNodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeLabelOutcome(CreateNodeLabelResult(outcome.result()));
	else
		return CreateNodeLabelOutcome(outcome.error());
}

void RetailcloudClient::createNodeLabelAsync(const CreateNodeLabelRequest& request, const CreateNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateNodeLabelOutcomeCallable RetailcloudClient::createNodeLabelCallable(const CreateNodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeLabelOutcome()>>(
			[this, request]()
			{
			return this->createNodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreatePersistentVolumeOutcome RetailcloudClient::createPersistentVolume(const CreatePersistentVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePersistentVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePersistentVolumeOutcome(CreatePersistentVolumeResult(outcome.result()));
	else
		return CreatePersistentVolumeOutcome(outcome.error());
}

void RetailcloudClient::createPersistentVolumeAsync(const CreatePersistentVolumeRequest& request, const CreatePersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPersistentVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreatePersistentVolumeOutcomeCallable RetailcloudClient::createPersistentVolumeCallable(const CreatePersistentVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePersistentVolumeOutcome()>>(
			[this, request]()
			{
			return this->createPersistentVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreatePersistentVolumeClaimOutcome RetailcloudClient::createPersistentVolumeClaim(const CreatePersistentVolumeClaimRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePersistentVolumeClaimOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePersistentVolumeClaimOutcome(CreatePersistentVolumeClaimResult(outcome.result()));
	else
		return CreatePersistentVolumeClaimOutcome(outcome.error());
}

void RetailcloudClient::createPersistentVolumeClaimAsync(const CreatePersistentVolumeClaimRequest& request, const CreatePersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPersistentVolumeClaim(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreatePersistentVolumeClaimOutcomeCallable RetailcloudClient::createPersistentVolumeClaimCallable(const CreatePersistentVolumeClaimRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePersistentVolumeClaimOutcome()>>(
			[this, request]()
			{
			return this->createPersistentVolumeClaim(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateServiceOutcome RetailcloudClient::createService(const CreateServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceOutcome(CreateServiceResult(outcome.result()));
	else
		return CreateServiceOutcome(outcome.error());
}

void RetailcloudClient::createServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateServiceOutcomeCallable RetailcloudClient::createServiceCallable(const CreateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
			[this, request]()
			{
			return this->createService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::CreateSlbAPOutcome RetailcloudClient::createSlbAP(const CreateSlbAPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSlbAPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSlbAPOutcome(CreateSlbAPResult(outcome.result()));
	else
		return CreateSlbAPOutcome(outcome.error());
}

void RetailcloudClient::createSlbAPAsync(const CreateSlbAPRequest& request, const CreateSlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSlbAP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::CreateSlbAPOutcomeCallable RetailcloudClient::createSlbAPCallable(const CreateSlbAPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSlbAPOutcome()>>(
			[this, request]()
			{
			return this->createSlbAP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteAppDetailOutcome RetailcloudClient::deleteAppDetail(const DeleteAppDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppDetailOutcome(DeleteAppDetailResult(outcome.result()));
	else
		return DeleteAppDetailOutcome(outcome.error());
}

void RetailcloudClient::deleteAppDetailAsync(const DeleteAppDetailRequest& request, const DeleteAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteAppDetailOutcomeCallable RetailcloudClient::deleteAppDetailCallable(const DeleteAppDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppDetailOutcome()>>(
			[this, request]()
			{
			return this->deleteAppDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteAppEnvironmentOutcome RetailcloudClient::deleteAppEnvironment(const DeleteAppEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppEnvironmentOutcome(DeleteAppEnvironmentResult(outcome.result()));
	else
		return DeleteAppEnvironmentOutcome(outcome.error());
}

void RetailcloudClient::deleteAppEnvironmentAsync(const DeleteAppEnvironmentRequest& request, const DeleteAppEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteAppEnvironmentOutcomeCallable RetailcloudClient::deleteAppEnvironmentCallable(const DeleteAppEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->deleteAppEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteAppGroupOutcome RetailcloudClient::deleteAppGroup(const DeleteAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppGroupOutcome(DeleteAppGroupResult(outcome.result()));
	else
		return DeleteAppGroupOutcome(outcome.error());
}

void RetailcloudClient::deleteAppGroupAsync(const DeleteAppGroupRequest& request, const DeleteAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteAppGroupOutcomeCallable RetailcloudClient::deleteAppGroupCallable(const DeleteAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteAppResourceAllocOutcome RetailcloudClient::deleteAppResourceAlloc(const DeleteAppResourceAllocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppResourceAllocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppResourceAllocOutcome(DeleteAppResourceAllocResult(outcome.result()));
	else
		return DeleteAppResourceAllocOutcome(outcome.error());
}

void RetailcloudClient::deleteAppResourceAllocAsync(const DeleteAppResourceAllocRequest& request, const DeleteAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppResourceAlloc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteAppResourceAllocOutcomeCallable RetailcloudClient::deleteAppResourceAllocCallable(const DeleteAppResourceAllocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppResourceAllocOutcome()>>(
			[this, request]()
			{
			return this->deleteAppResourceAlloc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteClusterOutcome RetailcloudClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void RetailcloudClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteClusterOutcomeCallable RetailcloudClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteDatabaseOutcome RetailcloudClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void RetailcloudClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteDatabaseOutcomeCallable RetailcloudClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteDeployConfigOutcome RetailcloudClient::deleteDeployConfig(const DeleteDeployConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeployConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeployConfigOutcome(DeleteDeployConfigResult(outcome.result()));
	else
		return DeleteDeployConfigOutcome(outcome.error());
}

void RetailcloudClient::deleteDeployConfigAsync(const DeleteDeployConfigRequest& request, const DeleteDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeployConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteDeployConfigOutcomeCallable RetailcloudClient::deleteDeployConfigCallable(const DeleteDeployConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeployConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDeployConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteNodeLabelOutcome RetailcloudClient::deleteNodeLabel(const DeleteNodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodeLabelOutcome(DeleteNodeLabelResult(outcome.result()));
	else
		return DeleteNodeLabelOutcome(outcome.error());
}

void RetailcloudClient::deleteNodeLabelAsync(const DeleteNodeLabelRequest& request, const DeleteNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteNodeLabelOutcomeCallable RetailcloudClient::deleteNodeLabelCallable(const DeleteNodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodeLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteNodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeletePersistentVolumeOutcome RetailcloudClient::deletePersistentVolume(const DeletePersistentVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePersistentVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePersistentVolumeOutcome(DeletePersistentVolumeResult(outcome.result()));
	else
		return DeletePersistentVolumeOutcome(outcome.error());
}

void RetailcloudClient::deletePersistentVolumeAsync(const DeletePersistentVolumeRequest& request, const DeletePersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePersistentVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeletePersistentVolumeOutcomeCallable RetailcloudClient::deletePersistentVolumeCallable(const DeletePersistentVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePersistentVolumeOutcome()>>(
			[this, request]()
			{
			return this->deletePersistentVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeletePersistentVolumeClaimOutcome RetailcloudClient::deletePersistentVolumeClaim(const DeletePersistentVolumeClaimRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePersistentVolumeClaimOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePersistentVolumeClaimOutcome(DeletePersistentVolumeClaimResult(outcome.result()));
	else
		return DeletePersistentVolumeClaimOutcome(outcome.error());
}

void RetailcloudClient::deletePersistentVolumeClaimAsync(const DeletePersistentVolumeClaimRequest& request, const DeletePersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePersistentVolumeClaim(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeletePersistentVolumeClaimOutcomeCallable RetailcloudClient::deletePersistentVolumeClaimCallable(const DeletePersistentVolumeClaimRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePersistentVolumeClaimOutcome()>>(
			[this, request]()
			{
			return this->deletePersistentVolumeClaim(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteRdsAccountOutcome RetailcloudClient::deleteRdsAccount(const DeleteRdsAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRdsAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRdsAccountOutcome(DeleteRdsAccountResult(outcome.result()));
	else
		return DeleteRdsAccountOutcome(outcome.error());
}

void RetailcloudClient::deleteRdsAccountAsync(const DeleteRdsAccountRequest& request, const DeleteRdsAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRdsAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteRdsAccountOutcomeCallable RetailcloudClient::deleteRdsAccountCallable(const DeleteRdsAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRdsAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteRdsAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteServiceOutcome RetailcloudClient::deleteService(const DeleteServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceOutcome(DeleteServiceResult(outcome.result()));
	else
		return DeleteServiceOutcome(outcome.error());
}

void RetailcloudClient::deleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteServiceOutcomeCallable RetailcloudClient::deleteServiceCallable(const DeleteServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeleteSlbAPOutcome RetailcloudClient::deleteSlbAP(const DeleteSlbAPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSlbAPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSlbAPOutcome(DeleteSlbAPResult(outcome.result()));
	else
		return DeleteSlbAPOutcome(outcome.error());
}

void RetailcloudClient::deleteSlbAPAsync(const DeleteSlbAPRequest& request, const DeleteSlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSlbAP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeleteSlbAPOutcomeCallable RetailcloudClient::deleteSlbAPCallable(const DeleteSlbAPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSlbAPOutcome()>>(
			[this, request]()
			{
			return this->deleteSlbAP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DeployAppOutcome RetailcloudClient::deployApp(const DeployAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployAppOutcome(DeployAppResult(outcome.result()));
	else
		return DeployAppOutcome(outcome.error());
}

void RetailcloudClient::deployAppAsync(const DeployAppRequest& request, const DeployAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DeployAppOutcomeCallable RetailcloudClient::deployAppCallable(const DeployAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployAppOutcome()>>(
			[this, request]()
			{
			return this->deployApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeAppDetailOutcome RetailcloudClient::describeAppDetail(const DescribeAppDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppDetailOutcome(DescribeAppDetailResult(outcome.result()));
	else
		return DescribeAppDetailOutcome(outcome.error());
}

void RetailcloudClient::describeAppDetailAsync(const DescribeAppDetailRequest& request, const DescribeAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeAppDetailOutcomeCallable RetailcloudClient::describeAppDetailCallable(const DescribeAppDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAppDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeAppEnvironmentDetailOutcome RetailcloudClient::describeAppEnvironmentDetail(const DescribeAppEnvironmentDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppEnvironmentDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppEnvironmentDetailOutcome(DescribeAppEnvironmentDetailResult(outcome.result()));
	else
		return DescribeAppEnvironmentDetailOutcome(outcome.error());
}

void RetailcloudClient::describeAppEnvironmentDetailAsync(const DescribeAppEnvironmentDetailRequest& request, const DescribeAppEnvironmentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppEnvironmentDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeAppEnvironmentDetailOutcomeCallable RetailcloudClient::describeAppEnvironmentDetailCallable(const DescribeAppEnvironmentDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppEnvironmentDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAppEnvironmentDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeAppMonitorMetricOutcome RetailcloudClient::describeAppMonitorMetric(const DescribeAppMonitorMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppMonitorMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppMonitorMetricOutcome(DescribeAppMonitorMetricResult(outcome.result()));
	else
		return DescribeAppMonitorMetricOutcome(outcome.error());
}

void RetailcloudClient::describeAppMonitorMetricAsync(const DescribeAppMonitorMetricRequest& request, const DescribeAppMonitorMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppMonitorMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeAppMonitorMetricOutcomeCallable RetailcloudClient::describeAppMonitorMetricCallable(const DescribeAppMonitorMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppMonitorMetricOutcome()>>(
			[this, request]()
			{
			return this->describeAppMonitorMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeAppResourceAllocOutcome RetailcloudClient::describeAppResourceAlloc(const DescribeAppResourceAllocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppResourceAllocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppResourceAllocOutcome(DescribeAppResourceAllocResult(outcome.result()));
	else
		return DescribeAppResourceAllocOutcome(outcome.error());
}

void RetailcloudClient::describeAppResourceAllocAsync(const DescribeAppResourceAllocRequest& request, const DescribeAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppResourceAlloc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeAppResourceAllocOutcomeCallable RetailcloudClient::describeAppResourceAllocCallable(const DescribeAppResourceAllocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppResourceAllocOutcome()>>(
			[this, request]()
			{
			return this->describeAppResourceAlloc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeClusterDetailOutcome RetailcloudClient::describeClusterDetail(const DescribeClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterDetailOutcome(DescribeClusterDetailResult(outcome.result()));
	else
		return DescribeClusterDetailOutcome(outcome.error());
}

void RetailcloudClient::describeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeClusterDetailOutcomeCallable RetailcloudClient::describeClusterDetailCallable(const DescribeClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->describeClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeDatabasesOutcome RetailcloudClient::describeDatabases(const DescribeDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabasesOutcome(DescribeDatabasesResult(outcome.result()));
	else
		return DescribeDatabasesOutcome(outcome.error());
}

void RetailcloudClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeDatabasesOutcomeCallable RetailcloudClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeDeployOrderDetailOutcome RetailcloudClient::describeDeployOrderDetail(const DescribeDeployOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeployOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeployOrderDetailOutcome(DescribeDeployOrderDetailResult(outcome.result()));
	else
		return DescribeDeployOrderDetailOutcome(outcome.error());
}

void RetailcloudClient::describeDeployOrderDetailAsync(const DescribeDeployOrderDetailRequest& request, const DescribeDeployOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeployOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeDeployOrderDetailOutcomeCallable RetailcloudClient::describeDeployOrderDetailCallable(const DescribeDeployOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeployOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDeployOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeEventMonitorListOutcome RetailcloudClient::describeEventMonitorList(const DescribeEventMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventMonitorListOutcome(DescribeEventMonitorListResult(outcome.result()));
	else
		return DescribeEventMonitorListOutcome(outcome.error());
}

void RetailcloudClient::describeEventMonitorListAsync(const DescribeEventMonitorListRequest& request, const DescribeEventMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeEventMonitorListOutcomeCallable RetailcloudClient::describeEventMonitorListCallable(const DescribeEventMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventMonitorListOutcome()>>(
			[this, request]()
			{
			return this->describeEventMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeJobLogOutcome RetailcloudClient::describeJobLog(const DescribeJobLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobLogOutcome(DescribeJobLogResult(outcome.result()));
	else
		return DescribeJobLogOutcome(outcome.error());
}

void RetailcloudClient::describeJobLogAsync(const DescribeJobLogRequest& request, const DescribeJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeJobLogOutcomeCallable RetailcloudClient::describeJobLogCallable(const DescribeJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobLogOutcome()>>(
			[this, request]()
			{
			return this->describeJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribePodContainerLogListOutcome RetailcloudClient::describePodContainerLogList(const DescribePodContainerLogListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePodContainerLogListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePodContainerLogListOutcome(DescribePodContainerLogListResult(outcome.result()));
	else
		return DescribePodContainerLogListOutcome(outcome.error());
}

void RetailcloudClient::describePodContainerLogListAsync(const DescribePodContainerLogListRequest& request, const DescribePodContainerLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePodContainerLogList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribePodContainerLogListOutcomeCallable RetailcloudClient::describePodContainerLogListCallable(const DescribePodContainerLogListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePodContainerLogListOutcome()>>(
			[this, request]()
			{
			return this->describePodContainerLogList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribePodEventsOutcome RetailcloudClient::describePodEvents(const DescribePodEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePodEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePodEventsOutcome(DescribePodEventsResult(outcome.result()));
	else
		return DescribePodEventsOutcome(outcome.error());
}

void RetailcloudClient::describePodEventsAsync(const DescribePodEventsRequest& request, const DescribePodEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePodEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribePodEventsOutcomeCallable RetailcloudClient::describePodEventsCallable(const DescribePodEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePodEventsOutcome()>>(
			[this, request]()
			{
			return this->describePodEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribePodLogOutcome RetailcloudClient::describePodLog(const DescribePodLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePodLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePodLogOutcome(DescribePodLogResult(outcome.result()));
	else
		return DescribePodLogOutcome(outcome.error());
}

void RetailcloudClient::describePodLogAsync(const DescribePodLogRequest& request, const DescribePodLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePodLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribePodLogOutcomeCallable RetailcloudClient::describePodLogCallable(const DescribePodLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePodLogOutcome()>>(
			[this, request]()
			{
			return this->describePodLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeRdsAccountsOutcome RetailcloudClient::describeRdsAccounts(const DescribeRdsAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsAccountsOutcome(DescribeRdsAccountsResult(outcome.result()));
	else
		return DescribeRdsAccountsOutcome(outcome.error());
}

void RetailcloudClient::describeRdsAccountsAsync(const DescribeRdsAccountsRequest& request, const DescribeRdsAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeRdsAccountsOutcomeCallable RetailcloudClient::describeRdsAccountsCallable(const DescribeRdsAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeServiceDetailOutcome RetailcloudClient::describeServiceDetail(const DescribeServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceDetailOutcome(DescribeServiceDetailResult(outcome.result()));
	else
		return DescribeServiceDetailOutcome(outcome.error());
}

void RetailcloudClient::describeServiceDetailAsync(const DescribeServiceDetailRequest& request, const DescribeServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeServiceDetailOutcomeCallable RetailcloudClient::describeServiceDetailCallable(const DescribeServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->describeServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::DescribeSlbAPDetailOutcome RetailcloudClient::describeSlbAPDetail(const DescribeSlbAPDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlbAPDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlbAPDetailOutcome(DescribeSlbAPDetailResult(outcome.result()));
	else
		return DescribeSlbAPDetailOutcome(outcome.error());
}

void RetailcloudClient::describeSlbAPDetailAsync(const DescribeSlbAPDetailRequest& request, const DescribeSlbAPDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlbAPDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::DescribeSlbAPDetailOutcomeCallable RetailcloudClient::describeSlbAPDetailCallable(const DescribeSlbAPDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlbAPDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSlbAPDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::GetInstTransInfoOutcome RetailcloudClient::getInstTransInfo(const GetInstTransInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstTransInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstTransInfoOutcome(GetInstTransInfoResult(outcome.result()));
	else
		return GetInstTransInfoOutcome(outcome.error());
}

void RetailcloudClient::getInstTransInfoAsync(const GetInstTransInfoRequest& request, const GetInstTransInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstTransInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::GetInstTransInfoOutcomeCallable RetailcloudClient::getInstTransInfoCallable(const GetInstTransInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstTransInfoOutcome()>>(
			[this, request]()
			{
			return this->getInstTransInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::GetRdsBackUpOutcome RetailcloudClient::getRdsBackUp(const GetRdsBackUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRdsBackUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRdsBackUpOutcome(GetRdsBackUpResult(outcome.result()));
	else
		return GetRdsBackUpOutcome(outcome.error());
}

void RetailcloudClient::getRdsBackUpAsync(const GetRdsBackUpRequest& request, const GetRdsBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRdsBackUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::GetRdsBackUpOutcomeCallable RetailcloudClient::getRdsBackUpCallable(const GetRdsBackUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRdsBackUpOutcome()>>(
			[this, request]()
			{
			return this->getRdsBackUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::GrantDbToAccountOutcome RetailcloudClient::grantDbToAccount(const GrantDbToAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantDbToAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantDbToAccountOutcome(GrantDbToAccountResult(outcome.result()));
	else
		return GrantDbToAccountOutcome(outcome.error());
}

void RetailcloudClient::grantDbToAccountAsync(const GrantDbToAccountRequest& request, const GrantDbToAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantDbToAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::GrantDbToAccountOutcomeCallable RetailcloudClient::grantDbToAccountCallable(const GrantDbToAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantDbToAccountOutcome()>>(
			[this, request]()
			{
			return this->grantDbToAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppOutcome RetailcloudClient::listApp(const ListAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppOutcome(ListAppResult(outcome.result()));
	else
		return ListAppOutcome(outcome.error());
}

void RetailcloudClient::listAppAsync(const ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppOutcomeCallable RetailcloudClient::listAppCallable(const ListAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppOutcome()>>(
			[this, request]()
			{
			return this->listApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppCmsGroupsOutcome RetailcloudClient::listAppCmsGroups(const ListAppCmsGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppCmsGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppCmsGroupsOutcome(ListAppCmsGroupsResult(outcome.result()));
	else
		return ListAppCmsGroupsOutcome(outcome.error());
}

void RetailcloudClient::listAppCmsGroupsAsync(const ListAppCmsGroupsRequest& request, const ListAppCmsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppCmsGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppCmsGroupsOutcomeCallable RetailcloudClient::listAppCmsGroupsCallable(const ListAppCmsGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppCmsGroupsOutcome()>>(
			[this, request]()
			{
			return this->listAppCmsGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppEnvironmentOutcome RetailcloudClient::listAppEnvironment(const ListAppEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppEnvironmentOutcome(ListAppEnvironmentResult(outcome.result()));
	else
		return ListAppEnvironmentOutcome(outcome.error());
}

void RetailcloudClient::listAppEnvironmentAsync(const ListAppEnvironmentRequest& request, const ListAppEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppEnvironmentOutcomeCallable RetailcloudClient::listAppEnvironmentCallable(const ListAppEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->listAppEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppGroupOutcome RetailcloudClient::listAppGroup(const ListAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppGroupOutcome(ListAppGroupResult(outcome.result()));
	else
		return ListAppGroupOutcome(outcome.error());
}

void RetailcloudClient::listAppGroupAsync(const ListAppGroupRequest& request, const ListAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppGroupOutcomeCallable RetailcloudClient::listAppGroupCallable(const ListAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppGroupOutcome()>>(
			[this, request]()
			{
			return this->listAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppGroupMappingOutcome RetailcloudClient::listAppGroupMapping(const ListAppGroupMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppGroupMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppGroupMappingOutcome(ListAppGroupMappingResult(outcome.result()));
	else
		return ListAppGroupMappingOutcome(outcome.error());
}

void RetailcloudClient::listAppGroupMappingAsync(const ListAppGroupMappingRequest& request, const ListAppGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppGroupMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppGroupMappingOutcomeCallable RetailcloudClient::listAppGroupMappingCallable(const ListAppGroupMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppGroupMappingOutcome()>>(
			[this, request]()
			{
			return this->listAppGroupMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppInstanceOutcome RetailcloudClient::listAppInstance(const ListAppInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInstanceOutcome(ListAppInstanceResult(outcome.result()));
	else
		return ListAppInstanceOutcome(outcome.error());
}

void RetailcloudClient::listAppInstanceAsync(const ListAppInstanceRequest& request, const ListAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppInstanceOutcomeCallable RetailcloudClient::listAppInstanceCallable(const ListAppInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInstanceOutcome()>>(
			[this, request]()
			{
			return this->listAppInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAppResourceAllocsOutcome RetailcloudClient::listAppResourceAllocs(const ListAppResourceAllocsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppResourceAllocsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppResourceAllocsOutcome(ListAppResourceAllocsResult(outcome.result()));
	else
		return ListAppResourceAllocsOutcome(outcome.error());
}

void RetailcloudClient::listAppResourceAllocsAsync(const ListAppResourceAllocsRequest& request, const ListAppResourceAllocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppResourceAllocs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAppResourceAllocsOutcomeCallable RetailcloudClient::listAppResourceAllocsCallable(const ListAppResourceAllocsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppResourceAllocsOutcome()>>(
			[this, request]()
			{
			return this->listAppResourceAllocs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListAvailableClusterNodeOutcome RetailcloudClient::listAvailableClusterNode(const ListAvailableClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableClusterNodeOutcome(ListAvailableClusterNodeResult(outcome.result()));
	else
		return ListAvailableClusterNodeOutcome(outcome.error());
}

void RetailcloudClient::listAvailableClusterNodeAsync(const ListAvailableClusterNodeRequest& request, const ListAvailableClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListAvailableClusterNodeOutcomeCallable RetailcloudClient::listAvailableClusterNodeCallable(const ListAvailableClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->listAvailableClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListClusterOutcome RetailcloudClient::listCluster(const ListClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOutcome(ListClusterResult(outcome.result()));
	else
		return ListClusterOutcome(outcome.error());
}

void RetailcloudClient::listClusterAsync(const ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListClusterOutcomeCallable RetailcloudClient::listClusterCallable(const ListClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOutcome()>>(
			[this, request]()
			{
			return this->listCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListClusterNodeOutcome RetailcloudClient::listClusterNode(const ListClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterNodeOutcome(ListClusterNodeResult(outcome.result()));
	else
		return ListClusterNodeOutcome(outcome.error());
}

void RetailcloudClient::listClusterNodeAsync(const ListClusterNodeRequest& request, const ListClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListClusterNodeOutcomeCallable RetailcloudClient::listClusterNodeCallable(const ListClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->listClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListDeployConfigOutcome RetailcloudClient::listDeployConfig(const ListDeployConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeployConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeployConfigOutcome(ListDeployConfigResult(outcome.result()));
	else
		return ListDeployConfigOutcome(outcome.error());
}

void RetailcloudClient::listDeployConfigAsync(const ListDeployConfigRequest& request, const ListDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListDeployConfigOutcomeCallable RetailcloudClient::listDeployConfigCallable(const ListDeployConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeployConfigOutcome()>>(
			[this, request]()
			{
			return this->listDeployConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListDeployOrdersOutcome RetailcloudClient::listDeployOrders(const ListDeployOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeployOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeployOrdersOutcome(ListDeployOrdersResult(outcome.result()));
	else
		return ListDeployOrdersOutcome(outcome.error());
}

void RetailcloudClient::listDeployOrdersAsync(const ListDeployOrdersRequest& request, const ListDeployOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListDeployOrdersOutcomeCallable RetailcloudClient::listDeployOrdersCallable(const ListDeployOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeployOrdersOutcome()>>(
			[this, request]()
			{
			return this->listDeployOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListJobHistoriesOutcome RetailcloudClient::listJobHistories(const ListJobHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobHistoriesOutcome(ListJobHistoriesResult(outcome.result()));
	else
		return ListJobHistoriesOutcome(outcome.error());
}

void RetailcloudClient::listJobHistoriesAsync(const ListJobHistoriesRequest& request, const ListJobHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListJobHistoriesOutcomeCallable RetailcloudClient::listJobHistoriesCallable(const ListJobHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobHistoriesOutcome()>>(
			[this, request]()
			{
			return this->listJobHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListNodeLabelBindingsOutcome RetailcloudClient::listNodeLabelBindings(const ListNodeLabelBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeLabelBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeLabelBindingsOutcome(ListNodeLabelBindingsResult(outcome.result()));
	else
		return ListNodeLabelBindingsOutcome(outcome.error());
}

void RetailcloudClient::listNodeLabelBindingsAsync(const ListNodeLabelBindingsRequest& request, const ListNodeLabelBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeLabelBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListNodeLabelBindingsOutcomeCallable RetailcloudClient::listNodeLabelBindingsCallable(const ListNodeLabelBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeLabelBindingsOutcome()>>(
			[this, request]()
			{
			return this->listNodeLabelBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListNodeLabelsOutcome RetailcloudClient::listNodeLabels(const ListNodeLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeLabelsOutcome(ListNodeLabelsResult(outcome.result()));
	else
		return ListNodeLabelsOutcome(outcome.error());
}

void RetailcloudClient::listNodeLabelsAsync(const ListNodeLabelsRequest& request, const ListNodeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListNodeLabelsOutcomeCallable RetailcloudClient::listNodeLabelsCallable(const ListNodeLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeLabelsOutcome()>>(
			[this, request]()
			{
			return this->listNodeLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListPersistentVolumeOutcome RetailcloudClient::listPersistentVolume(const ListPersistentVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersistentVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersistentVolumeOutcome(ListPersistentVolumeResult(outcome.result()));
	else
		return ListPersistentVolumeOutcome(outcome.error());
}

void RetailcloudClient::listPersistentVolumeAsync(const ListPersistentVolumeRequest& request, const ListPersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersistentVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListPersistentVolumeOutcomeCallable RetailcloudClient::listPersistentVolumeCallable(const ListPersistentVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersistentVolumeOutcome()>>(
			[this, request]()
			{
			return this->listPersistentVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListPersistentVolumeClaimOutcome RetailcloudClient::listPersistentVolumeClaim(const ListPersistentVolumeClaimRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersistentVolumeClaimOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersistentVolumeClaimOutcome(ListPersistentVolumeClaimResult(outcome.result()));
	else
		return ListPersistentVolumeClaimOutcome(outcome.error());
}

void RetailcloudClient::listPersistentVolumeClaimAsync(const ListPersistentVolumeClaimRequest& request, const ListPersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersistentVolumeClaim(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListPersistentVolumeClaimOutcomeCallable RetailcloudClient::listPersistentVolumeClaimCallable(const ListPersistentVolumeClaimRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersistentVolumeClaimOutcome()>>(
			[this, request]()
			{
			return this->listPersistentVolumeClaim(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListPodsOutcome RetailcloudClient::listPods(const ListPodsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPodsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPodsOutcome(ListPodsResult(outcome.result()));
	else
		return ListPodsOutcome(outcome.error());
}

void RetailcloudClient::listPodsAsync(const ListPodsRequest& request, const ListPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPods(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListPodsOutcomeCallable RetailcloudClient::listPodsCallable(const ListPodsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPodsOutcome()>>(
			[this, request]()
			{
			return this->listPods(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListServicesOutcome RetailcloudClient::listServices(const ListServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServicesOutcome(ListServicesResult(outcome.result()));
	else
		return ListServicesOutcome(outcome.error());
}

void RetailcloudClient::listServicesAsync(const ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListServicesOutcomeCallable RetailcloudClient::listServicesCallable(const ListServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServicesOutcome()>>(
			[this, request]()
			{
			return this->listServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListSlbAPsOutcome RetailcloudClient::listSlbAPs(const ListSlbAPsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSlbAPsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSlbAPsOutcome(ListSlbAPsResult(outcome.result()));
	else
		return ListSlbAPsOutcome(outcome.error());
}

void RetailcloudClient::listSlbAPsAsync(const ListSlbAPsRequest& request, const ListSlbAPsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSlbAPs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListSlbAPsOutcomeCallable RetailcloudClient::listSlbAPsCallable(const ListSlbAPsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSlbAPsOutcome()>>(
			[this, request]()
			{
			return this->listSlbAPs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ListUsersOutcome RetailcloudClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void RetailcloudClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ListUsersOutcomeCallable RetailcloudClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ModifyServiceOutcome RetailcloudClient::modifyService(const ModifyServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyServiceOutcome(ModifyServiceResult(outcome.result()));
	else
		return ModifyServiceOutcome(outcome.error());
}

void RetailcloudClient::modifyServiceAsync(const ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ModifyServiceOutcomeCallable RetailcloudClient::modifyServiceCallable(const ModifyServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyServiceOutcome()>>(
			[this, request]()
			{
			return this->modifyService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ModifySlbAPOutcome RetailcloudClient::modifySlbAP(const ModifySlbAPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySlbAPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySlbAPOutcome(ModifySlbAPResult(outcome.result()));
	else
		return ModifySlbAPOutcome(outcome.error());
}

void RetailcloudClient::modifySlbAPAsync(const ModifySlbAPRequest& request, const ModifySlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySlbAP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ModifySlbAPOutcomeCallable RetailcloudClient::modifySlbAPCallable(const ModifySlbAPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySlbAPOutcome()>>(
			[this, request]()
			{
			return this->modifySlbAP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::QueryClusterDetailOutcome RetailcloudClient::queryClusterDetail(const QueryClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterDetailOutcome(QueryClusterDetailResult(outcome.result()));
	else
		return QueryClusterDetailOutcome(outcome.error());
}

void RetailcloudClient::queryClusterDetailAsync(const QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::QueryClusterDetailOutcomeCallable RetailcloudClient::queryClusterDetailCallable(const QueryClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->queryClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::RebuildAppInstanceOutcome RetailcloudClient::rebuildAppInstance(const RebuildAppInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildAppInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildAppInstanceOutcome(RebuildAppInstanceResult(outcome.result()));
	else
		return RebuildAppInstanceOutcome(outcome.error());
}

void RetailcloudClient::rebuildAppInstanceAsync(const RebuildAppInstanceRequest& request, const RebuildAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildAppInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::RebuildAppInstanceOutcomeCallable RetailcloudClient::rebuildAppInstanceCallable(const RebuildAppInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildAppInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebuildAppInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::RemoveClusterNodeOutcome RetailcloudClient::removeClusterNode(const RemoveClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveClusterNodeOutcome(RemoveClusterNodeResult(outcome.result()));
	else
		return RemoveClusterNodeOutcome(outcome.error());
}

void RetailcloudClient::removeClusterNodeAsync(const RemoveClusterNodeRequest& request, const RemoveClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::RemoveClusterNodeOutcomeCallable RetailcloudClient::removeClusterNodeCallable(const RemoveClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->removeClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ResetAccountPasswordOutcome RetailcloudClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountPasswordOutcome(ResetAccountPasswordResult(outcome.result()));
	else
		return ResetAccountPasswordOutcome(outcome.error());
}

void RetailcloudClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ResetAccountPasswordOutcomeCallable RetailcloudClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ResourceStatusNotifyOutcome RetailcloudClient::resourceStatusNotify(const ResourceStatusNotifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResourceStatusNotifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResourceStatusNotifyOutcome(ResourceStatusNotifyResult(outcome.result()));
	else
		return ResourceStatusNotifyOutcome(outcome.error());
}

void RetailcloudClient::resourceStatusNotifyAsync(const ResourceStatusNotifyRequest& request, const ResourceStatusNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resourceStatusNotify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ResourceStatusNotifyOutcomeCallable RetailcloudClient::resourceStatusNotifyCallable(const ResourceStatusNotifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResourceStatusNotifyOutcome()>>(
			[this, request]()
			{
			return this->resourceStatusNotify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ResumeDeployOutcome RetailcloudClient::resumeDeploy(const ResumeDeployRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeDeployOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeDeployOutcome(ResumeDeployResult(outcome.result()));
	else
		return ResumeDeployOutcome(outcome.error());
}

void RetailcloudClient::resumeDeployAsync(const ResumeDeployRequest& request, const ResumeDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeDeploy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ResumeDeployOutcomeCallable RetailcloudClient::resumeDeployCallable(const ResumeDeployRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeDeployOutcome()>>(
			[this, request]()
			{
			return this->resumeDeploy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::ScaleAppOutcome RetailcloudClient::scaleApp(const ScaleAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleAppOutcome(ScaleAppResult(outcome.result()));
	else
		return ScaleAppOutcome(outcome.error());
}

void RetailcloudClient::scaleAppAsync(const ScaleAppRequest& request, const ScaleAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::ScaleAppOutcomeCallable RetailcloudClient::scaleAppCallable(const ScaleAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleAppOutcome()>>(
			[this, request]()
			{
			return this->scaleApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::SetDeployPauseTypeOutcome RetailcloudClient::setDeployPauseType(const SetDeployPauseTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeployPauseTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeployPauseTypeOutcome(SetDeployPauseTypeResult(outcome.result()));
	else
		return SetDeployPauseTypeOutcome(outcome.error());
}

void RetailcloudClient::setDeployPauseTypeAsync(const SetDeployPauseTypeRequest& request, const SetDeployPauseTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeployPauseType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::SetDeployPauseTypeOutcomeCallable RetailcloudClient::setDeployPauseTypeCallable(const SetDeployPauseTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeployPauseTypeOutcome()>>(
			[this, request]()
			{
			return this->setDeployPauseType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::SubmitInfoOutcome RetailcloudClient::submitInfo(const SubmitInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitInfoOutcome(SubmitInfoResult(outcome.result()));
	else
		return SubmitInfoOutcome(outcome.error());
}

void RetailcloudClient::submitInfoAsync(const SubmitInfoRequest& request, const SubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::SubmitInfoOutcomeCallable RetailcloudClient::submitInfoCallable(const SubmitInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitInfoOutcome()>>(
			[this, request]()
			{
			return this->submitInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::SyncPodInfoOutcome RetailcloudClient::syncPodInfo(const SyncPodInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncPodInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncPodInfoOutcome(SyncPodInfoResult(outcome.result()));
	else
		return SyncPodInfoOutcome(outcome.error());
}

void RetailcloudClient::syncPodInfoAsync(const SyncPodInfoRequest& request, const SyncPodInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncPodInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::SyncPodInfoOutcomeCallable RetailcloudClient::syncPodInfoCallable(const SyncPodInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncPodInfoOutcome()>>(
			[this, request]()
			{
			return this->syncPodInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UnbindGroupOutcome RetailcloudClient::unbindGroup(const UnbindGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindGroupOutcome(UnbindGroupResult(outcome.result()));
	else
		return UnbindGroupOutcome(outcome.error());
}

void RetailcloudClient::unbindGroupAsync(const UnbindGroupRequest& request, const UnbindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UnbindGroupOutcomeCallable RetailcloudClient::unbindGroupCallable(const UnbindGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindGroupOutcome()>>(
			[this, request]()
			{
			return this->unbindGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UnbindNodeLabelOutcome RetailcloudClient::unbindNodeLabel(const UnbindNodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindNodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindNodeLabelOutcome(UnbindNodeLabelResult(outcome.result()));
	else
		return UnbindNodeLabelOutcome(outcome.error());
}

void RetailcloudClient::unbindNodeLabelAsync(const UnbindNodeLabelRequest& request, const UnbindNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindNodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UnbindNodeLabelOutcomeCallable RetailcloudClient::unbindNodeLabelCallable(const UnbindNodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindNodeLabelOutcome()>>(
			[this, request]()
			{
			return this->unbindNodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UpdateAppOutcome RetailcloudClient::updateApp(const UpdateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppOutcome(UpdateAppResult(outcome.result()));
	else
		return UpdateAppOutcome(outcome.error());
}

void RetailcloudClient::updateAppAsync(const UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UpdateAppOutcomeCallable RetailcloudClient::updateAppCallable(const UpdateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppOutcome()>>(
			[this, request]()
			{
			return this->updateApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UpdateAppMonitorsOutcome RetailcloudClient::updateAppMonitors(const UpdateAppMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppMonitorsOutcome(UpdateAppMonitorsResult(outcome.result()));
	else
		return UpdateAppMonitorsOutcome(outcome.error());
}

void RetailcloudClient::updateAppMonitorsAsync(const UpdateAppMonitorsRequest& request, const UpdateAppMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UpdateAppMonitorsOutcomeCallable RetailcloudClient::updateAppMonitorsCallable(const UpdateAppMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppMonitorsOutcome()>>(
			[this, request]()
			{
			return this->updateAppMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UpdateDeployConfigOutcome RetailcloudClient::updateDeployConfig(const UpdateDeployConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeployConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeployConfigOutcome(UpdateDeployConfigResult(outcome.result()));
	else
		return UpdateDeployConfigOutcome(outcome.error());
}

void RetailcloudClient::updateDeployConfigAsync(const UpdateDeployConfigRequest& request, const UpdateDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeployConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UpdateDeployConfigOutcomeCallable RetailcloudClient::updateDeployConfigCallable(const UpdateDeployConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeployConfigOutcome()>>(
			[this, request]()
			{
			return this->updateDeployConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RetailcloudClient::UpdateEnvironmentOutcome RetailcloudClient::updateEnvironment(const UpdateEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvironmentOutcome(UpdateEnvironmentResult(outcome.result()));
	else
		return UpdateEnvironmentOutcome(outcome.error());
}

void RetailcloudClient::updateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RetailcloudClient::UpdateEnvironmentOutcomeCallable RetailcloudClient::updateEnvironmentCallable(const UpdateEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->updateEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

