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

#include <alibabacloud/ehpc/EHPCClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

namespace
{
	const std::string SERVICE_NAME = "EHPC";
}

EHPCClient::EHPCClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::EHPCClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::EHPCClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::~EHPCClient()
{}

EHPCClient::AddContainerAppOutcome EHPCClient::addContainerApp(const AddContainerAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddContainerAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddContainerAppOutcome(AddContainerAppResult(outcome.result()));
	else
		return AddContainerAppOutcome(outcome.error());
}

void EHPCClient::addContainerAppAsync(const AddContainerAppRequest& request, const AddContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addContainerApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddContainerAppOutcomeCallable EHPCClient::addContainerAppCallable(const AddContainerAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddContainerAppOutcome()>>(
			[this, request]()
			{
			return this->addContainerApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddExistedNodesOutcome EHPCClient::addExistedNodes(const AddExistedNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddExistedNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddExistedNodesOutcome(AddExistedNodesResult(outcome.result()));
	else
		return AddExistedNodesOutcome(outcome.error());
}

void EHPCClient::addExistedNodesAsync(const AddExistedNodesRequest& request, const AddExistedNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addExistedNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddExistedNodesOutcomeCallable EHPCClient::addExistedNodesCallable(const AddExistedNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddExistedNodesOutcome()>>(
			[this, request]()
			{
			return this->addExistedNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddLocalNodesOutcome EHPCClient::addLocalNodes(const AddLocalNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLocalNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLocalNodesOutcome(AddLocalNodesResult(outcome.result()));
	else
		return AddLocalNodesOutcome(outcome.error());
}

void EHPCClient::addLocalNodesAsync(const AddLocalNodesRequest& request, const AddLocalNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLocalNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddLocalNodesOutcomeCallable EHPCClient::addLocalNodesCallable(const AddLocalNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLocalNodesOutcome()>>(
			[this, request]()
			{
			return this->addLocalNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddNodesOutcome EHPCClient::addNodes(const AddNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNodesOutcome(AddNodesResult(outcome.result()));
	else
		return AddNodesOutcome(outcome.error());
}

void EHPCClient::addNodesAsync(const AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddNodesOutcomeCallable EHPCClient::addNodesCallable(const AddNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNodesOutcome()>>(
			[this, request]()
			{
			return this->addNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddQueueOutcome EHPCClient::addQueue(const AddQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddQueueOutcome(AddQueueResult(outcome.result()));
	else
		return AddQueueOutcome(outcome.error());
}

void EHPCClient::addQueueAsync(const AddQueueRequest& request, const AddQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddQueueOutcomeCallable EHPCClient::addQueueCallable(const AddQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddQueueOutcome()>>(
			[this, request]()
			{
			return this->addQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddSecurityGroupOutcome EHPCClient::addSecurityGroup(const AddSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSecurityGroupOutcome(AddSecurityGroupResult(outcome.result()));
	else
		return AddSecurityGroupOutcome(outcome.error());
}

void EHPCClient::addSecurityGroupAsync(const AddSecurityGroupRequest& request, const AddSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddSecurityGroupOutcomeCallable EHPCClient::addSecurityGroupCallable(const AddSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->addSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddUsersOutcome EHPCClient::addUsers(const AddUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUsersOutcome(AddUsersResult(outcome.result()));
	else
		return AddUsersOutcome(outcome.error());
}

void EHPCClient::addUsersAsync(const AddUsersRequest& request, const AddUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddUsersOutcomeCallable EHPCClient::addUsersCallable(const AddUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUsersOutcome()>>(
			[this, request]()
			{
			return this->addUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ApplyNodesOutcome EHPCClient::applyNodes(const ApplyNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyNodesOutcome(ApplyNodesResult(outcome.result()));
	else
		return ApplyNodesOutcome(outcome.error());
}

void EHPCClient::applyNodesAsync(const ApplyNodesRequest& request, const ApplyNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ApplyNodesOutcomeCallable EHPCClient::applyNodesCallable(const ApplyNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyNodesOutcome()>>(
			[this, request]()
			{
			return this->applyNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateClusterOutcome EHPCClient::createCluster(const CreateClusterRequest &request) const
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

void EHPCClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateClusterOutcomeCallable EHPCClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateGWSClusterOutcome EHPCClient::createGWSCluster(const CreateGWSClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGWSClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGWSClusterOutcome(CreateGWSClusterResult(outcome.result()));
	else
		return CreateGWSClusterOutcome(outcome.error());
}

void EHPCClient::createGWSClusterAsync(const CreateGWSClusterRequest& request, const CreateGWSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGWSCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateGWSClusterOutcomeCallable EHPCClient::createGWSClusterCallable(const CreateGWSClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGWSClusterOutcome()>>(
			[this, request]()
			{
			return this->createGWSCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateGWSImageOutcome EHPCClient::createGWSImage(const CreateGWSImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGWSImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGWSImageOutcome(CreateGWSImageResult(outcome.result()));
	else
		return CreateGWSImageOutcome(outcome.error());
}

void EHPCClient::createGWSImageAsync(const CreateGWSImageRequest& request, const CreateGWSImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGWSImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateGWSImageOutcomeCallable EHPCClient::createGWSImageCallable(const CreateGWSImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGWSImageOutcome()>>(
			[this, request]()
			{
			return this->createGWSImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateGWSInstanceOutcome EHPCClient::createGWSInstance(const CreateGWSInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGWSInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGWSInstanceOutcome(CreateGWSInstanceResult(outcome.result()));
	else
		return CreateGWSInstanceOutcome(outcome.error());
}

void EHPCClient::createGWSInstanceAsync(const CreateGWSInstanceRequest& request, const CreateGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGWSInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateGWSInstanceOutcomeCallable EHPCClient::createGWSInstanceCallable(const CreateGWSInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGWSInstanceOutcome()>>(
			[this, request]()
			{
			return this->createGWSInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateHybridClusterOutcome EHPCClient::createHybridCluster(const CreateHybridClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHybridClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHybridClusterOutcome(CreateHybridClusterResult(outcome.result()));
	else
		return CreateHybridClusterOutcome(outcome.error());
}

void EHPCClient::createHybridClusterAsync(const CreateHybridClusterRequest& request, const CreateHybridClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHybridCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateHybridClusterOutcomeCallable EHPCClient::createHybridClusterCallable(const CreateHybridClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHybridClusterOutcome()>>(
			[this, request]()
			{
			return this->createHybridCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateJobFileOutcome EHPCClient::createJobFile(const CreateJobFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobFileOutcome(CreateJobFileResult(outcome.result()));
	else
		return CreateJobFileOutcome(outcome.error());
}

void EHPCClient::createJobFileAsync(const CreateJobFileRequest& request, const CreateJobFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateJobFileOutcomeCallable EHPCClient::createJobFileCallable(const CreateJobFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobFileOutcome()>>(
			[this, request]()
			{
			return this->createJobFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateJobTemplateOutcome EHPCClient::createJobTemplate(const CreateJobTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobTemplateOutcome(CreateJobTemplateResult(outcome.result()));
	else
		return CreateJobTemplateOutcome(outcome.error());
}

void EHPCClient::createJobTemplateAsync(const CreateJobTemplateRequest& request, const CreateJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateJobTemplateOutcomeCallable EHPCClient::createJobTemplateCallable(const CreateJobTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobTemplateOutcome()>>(
			[this, request]()
			{
			return this->createJobTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteClusterOutcome EHPCClient::deleteCluster(const DeleteClusterRequest &request) const
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

void EHPCClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteClusterOutcomeCallable EHPCClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteContainerAppsOutcome EHPCClient::deleteContainerApps(const DeleteContainerAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContainerAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContainerAppsOutcome(DeleteContainerAppsResult(outcome.result()));
	else
		return DeleteContainerAppsOutcome(outcome.error());
}

void EHPCClient::deleteContainerAppsAsync(const DeleteContainerAppsRequest& request, const DeleteContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContainerApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteContainerAppsOutcomeCallable EHPCClient::deleteContainerAppsCallable(const DeleteContainerAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContainerAppsOutcome()>>(
			[this, request]()
			{
			return this->deleteContainerApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteGWSClusterOutcome EHPCClient::deleteGWSCluster(const DeleteGWSClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGWSClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGWSClusterOutcome(DeleteGWSClusterResult(outcome.result()));
	else
		return DeleteGWSClusterOutcome(outcome.error());
}

void EHPCClient::deleteGWSClusterAsync(const DeleteGWSClusterRequest& request, const DeleteGWSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGWSCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteGWSClusterOutcomeCallable EHPCClient::deleteGWSClusterCallable(const DeleteGWSClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGWSClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteGWSCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteGWSInstanceOutcome EHPCClient::deleteGWSInstance(const DeleteGWSInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGWSInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGWSInstanceOutcome(DeleteGWSInstanceResult(outcome.result()));
	else
		return DeleteGWSInstanceOutcome(outcome.error());
}

void EHPCClient::deleteGWSInstanceAsync(const DeleteGWSInstanceRequest& request, const DeleteGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGWSInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteGWSInstanceOutcomeCallable EHPCClient::deleteGWSInstanceCallable(const DeleteGWSInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGWSInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGWSInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteImageOutcome EHPCClient::deleteImage(const DeleteImageRequest &request) const
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

void EHPCClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteImageOutcomeCallable EHPCClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteJobTemplatesOutcome EHPCClient::deleteJobTemplates(const DeleteJobTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobTemplatesOutcome(DeleteJobTemplatesResult(outcome.result()));
	else
		return DeleteJobTemplatesOutcome(outcome.error());
}

void EHPCClient::deleteJobTemplatesAsync(const DeleteJobTemplatesRequest& request, const DeleteJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteJobTemplatesOutcomeCallable EHPCClient::deleteJobTemplatesCallable(const DeleteJobTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteJobTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteJobsOutcome EHPCClient::deleteJobs(const DeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobsOutcome(DeleteJobsResult(outcome.result()));
	else
		return DeleteJobsOutcome(outcome.error());
}

void EHPCClient::deleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteJobsOutcomeCallable EHPCClient::deleteJobsCallable(const DeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->deleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteLocalImageOutcome EHPCClient::deleteLocalImage(const DeleteLocalImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLocalImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLocalImageOutcome(DeleteLocalImageResult(outcome.result()));
	else
		return DeleteLocalImageOutcome(outcome.error());
}

void EHPCClient::deleteLocalImageAsync(const DeleteLocalImageRequest& request, const DeleteLocalImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLocalImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteLocalImageOutcomeCallable EHPCClient::deleteLocalImageCallable(const DeleteLocalImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLocalImageOutcome()>>(
			[this, request]()
			{
			return this->deleteLocalImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteNodesOutcome EHPCClient::deleteNodes(const DeleteNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodesOutcome(DeleteNodesResult(outcome.result()));
	else
		return DeleteNodesOutcome(outcome.error());
}

void EHPCClient::deleteNodesAsync(const DeleteNodesRequest& request, const DeleteNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteNodesOutcomeCallable EHPCClient::deleteNodesCallable(const DeleteNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteQueueOutcome EHPCClient::deleteQueue(const DeleteQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQueueOutcome(DeleteQueueResult(outcome.result()));
	else
		return DeleteQueueOutcome(outcome.error());
}

void EHPCClient::deleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteQueueOutcomeCallable EHPCClient::deleteQueueCallable(const DeleteQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteSecurityGroupOutcome EHPCClient::deleteSecurityGroup(const DeleteSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityGroupOutcome(DeleteSecurityGroupResult(outcome.result()));
	else
		return DeleteSecurityGroupOutcome(outcome.error());
}

void EHPCClient::deleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteSecurityGroupOutcomeCallable EHPCClient::deleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteUsersOutcome EHPCClient::deleteUsers(const DeleteUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUsersOutcome(DeleteUsersResult(outcome.result()));
	else
		return DeleteUsersOutcome(outcome.error());
}

void EHPCClient::deleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteUsersOutcomeCallable EHPCClient::deleteUsersCallable(const DeleteUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeAutoScaleConfigOutcome EHPCClient::describeAutoScaleConfig(const DescribeAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoScaleConfigOutcome(DescribeAutoScaleConfigResult(outcome.result()));
	else
		return DescribeAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::describeAutoScaleConfigAsync(const DescribeAutoScaleConfigRequest& request, const DescribeAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeAutoScaleConfigOutcomeCallable EHPCClient::describeAutoScaleConfigCallable(const DescribeAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeClusterOutcome EHPCClient::describeCluster(const DescribeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOutcome(DescribeClusterResult(outcome.result()));
	else
		return DescribeClusterOutcome(outcome.error());
}

void EHPCClient::describeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeClusterOutcomeCallable EHPCClient::describeClusterCallable(const DescribeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOutcome()>>(
			[this, request]()
			{
			return this->describeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeContainerAppOutcome EHPCClient::describeContainerApp(const DescribeContainerAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerAppOutcome(DescribeContainerAppResult(outcome.result()));
	else
		return DescribeContainerAppOutcome(outcome.error());
}

void EHPCClient::describeContainerAppAsync(const DescribeContainerAppRequest& request, const DescribeContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeContainerAppOutcomeCallable EHPCClient::describeContainerAppCallable(const DescribeContainerAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerAppOutcome()>>(
			[this, request]()
			{
			return this->describeContainerApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeEstackImageOutcome EHPCClient::describeEstackImage(const DescribeEstackImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEstackImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEstackImageOutcome(DescribeEstackImageResult(outcome.result()));
	else
		return DescribeEstackImageOutcome(outcome.error());
}

void EHPCClient::describeEstackImageAsync(const DescribeEstackImageRequest& request, const DescribeEstackImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEstackImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeEstackImageOutcomeCallable EHPCClient::describeEstackImageCallable(const DescribeEstackImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEstackImageOutcome()>>(
			[this, request]()
			{
			return this->describeEstackImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeGWSClusterPolicyOutcome EHPCClient::describeGWSClusterPolicy(const DescribeGWSClusterPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGWSClusterPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGWSClusterPolicyOutcome(DescribeGWSClusterPolicyResult(outcome.result()));
	else
		return DescribeGWSClusterPolicyOutcome(outcome.error());
}

void EHPCClient::describeGWSClusterPolicyAsync(const DescribeGWSClusterPolicyRequest& request, const DescribeGWSClusterPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGWSClusterPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeGWSClusterPolicyOutcomeCallable EHPCClient::describeGWSClusterPolicyCallable(const DescribeGWSClusterPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGWSClusterPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeGWSClusterPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeGWSClustersOutcome EHPCClient::describeGWSClusters(const DescribeGWSClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGWSClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGWSClustersOutcome(DescribeGWSClustersResult(outcome.result()));
	else
		return DescribeGWSClustersOutcome(outcome.error());
}

void EHPCClient::describeGWSClustersAsync(const DescribeGWSClustersRequest& request, const DescribeGWSClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGWSClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeGWSClustersOutcomeCallable EHPCClient::describeGWSClustersCallable(const DescribeGWSClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGWSClustersOutcome()>>(
			[this, request]()
			{
			return this->describeGWSClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeGWSImagesOutcome EHPCClient::describeGWSImages(const DescribeGWSImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGWSImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGWSImagesOutcome(DescribeGWSImagesResult(outcome.result()));
	else
		return DescribeGWSImagesOutcome(outcome.error());
}

void EHPCClient::describeGWSImagesAsync(const DescribeGWSImagesRequest& request, const DescribeGWSImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGWSImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeGWSImagesOutcomeCallable EHPCClient::describeGWSImagesCallable(const DescribeGWSImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGWSImagesOutcome()>>(
			[this, request]()
			{
			return this->describeGWSImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeGWSInstancesOutcome EHPCClient::describeGWSInstances(const DescribeGWSInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGWSInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGWSInstancesOutcome(DescribeGWSInstancesResult(outcome.result()));
	else
		return DescribeGWSInstancesOutcome(outcome.error());
}

void EHPCClient::describeGWSInstancesAsync(const DescribeGWSInstancesRequest& request, const DescribeGWSInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGWSInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeGWSInstancesOutcomeCallable EHPCClient::describeGWSInstancesCallable(const DescribeGWSInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGWSInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGWSInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeImageOutcome EHPCClient::describeImage(const DescribeImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageOutcome(DescribeImageResult(outcome.result()));
	else
		return DescribeImageOutcome(outcome.error());
}

void EHPCClient::describeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeImageOutcomeCallable EHPCClient::describeImageCallable(const DescribeImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
			[this, request]()
			{
			return this->describeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeImageGatewayConfigOutcome EHPCClient::describeImageGatewayConfig(const DescribeImageGatewayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageGatewayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageGatewayConfigOutcome(DescribeImageGatewayConfigResult(outcome.result()));
	else
		return DescribeImageGatewayConfigOutcome(outcome.error());
}

void EHPCClient::describeImageGatewayConfigAsync(const DescribeImageGatewayConfigRequest& request, const DescribeImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageGatewayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeImageGatewayConfigOutcomeCallable EHPCClient::describeImageGatewayConfigCallable(const DescribeImageGatewayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageGatewayConfigOutcome()>>(
			[this, request]()
			{
			return this->describeImageGatewayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeImagePriceOutcome EHPCClient::describeImagePrice(const DescribeImagePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagePriceOutcome(DescribeImagePriceResult(outcome.result()));
	else
		return DescribeImagePriceOutcome(outcome.error());
}

void EHPCClient::describeImagePriceAsync(const DescribeImagePriceRequest& request, const DescribeImagePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImagePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeImagePriceOutcomeCallable EHPCClient::describeImagePriceCallable(const DescribeImagePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagePriceOutcome()>>(
			[this, request]()
			{
			return this->describeImagePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeJobOutcome EHPCClient::describeJob(const DescribeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobOutcome(DescribeJobResult(outcome.result()));
	else
		return DescribeJobOutcome(outcome.error());
}

void EHPCClient::describeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeJobOutcomeCallable EHPCClient::describeJobCallable(const DescribeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
			[this, request]()
			{
			return this->describeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeNFSClientStatusOutcome EHPCClient::describeNFSClientStatus(const DescribeNFSClientStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNFSClientStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNFSClientStatusOutcome(DescribeNFSClientStatusResult(outcome.result()));
	else
		return DescribeNFSClientStatusOutcome(outcome.error());
}

void EHPCClient::describeNFSClientStatusAsync(const DescribeNFSClientStatusRequest& request, const DescribeNFSClientStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNFSClientStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeNFSClientStatusOutcomeCallable EHPCClient::describeNFSClientStatusCallable(const DescribeNFSClientStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNFSClientStatusOutcome()>>(
			[this, request]()
			{
			return this->describeNFSClientStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribePriceOutcome EHPCClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePriceOutcome(DescribePriceResult(outcome.result()));
	else
		return DescribePriceOutcome(outcome.error());
}

void EHPCClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribePriceOutcomeCallable EHPCClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeServerlessJobsOutcome EHPCClient::describeServerlessJobs(const DescribeServerlessJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerlessJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerlessJobsOutcome(DescribeServerlessJobsResult(outcome.result()));
	else
		return DescribeServerlessJobsOutcome(outcome.error());
}

void EHPCClient::describeServerlessJobsAsync(const DescribeServerlessJobsRequest& request, const DescribeServerlessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerlessJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeServerlessJobsOutcomeCallable EHPCClient::describeServerlessJobsCallable(const DescribeServerlessJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerlessJobsOutcome()>>(
			[this, request]()
			{
			return this->describeServerlessJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::EditJobTemplateOutcome EHPCClient::editJobTemplate(const EditJobTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditJobTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditJobTemplateOutcome(EditJobTemplateResult(outcome.result()));
	else
		return EditJobTemplateOutcome(outcome.error());
}

void EHPCClient::editJobTemplateAsync(const EditJobTemplateRequest& request, const EditJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editJobTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::EditJobTemplateOutcomeCallable EHPCClient::editJobTemplateCallable(const EditJobTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditJobTemplateOutcome()>>(
			[this, request]()
			{
			return this->editJobTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetAccountingReportOutcome EHPCClient::getAccountingReport(const GetAccountingReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountingReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountingReportOutcome(GetAccountingReportResult(outcome.result()));
	else
		return GetAccountingReportOutcome(outcome.error());
}

void EHPCClient::getAccountingReportAsync(const GetAccountingReportRequest& request, const GetAccountingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountingReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetAccountingReportOutcomeCallable EHPCClient::getAccountingReportCallable(const GetAccountingReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountingReportOutcome()>>(
			[this, request]()
			{
			return this->getAccountingReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetAutoScaleConfigOutcome EHPCClient::getAutoScaleConfig(const GetAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAutoScaleConfigOutcome(GetAutoScaleConfigResult(outcome.result()));
	else
		return GetAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::getAutoScaleConfigAsync(const GetAutoScaleConfigRequest& request, const GetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetAutoScaleConfigOutcomeCallable EHPCClient::getAutoScaleConfigCallable(const GetAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->getAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetCloudMetricLogsOutcome EHPCClient::getCloudMetricLogs(const GetCloudMetricLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudMetricLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudMetricLogsOutcome(GetCloudMetricLogsResult(outcome.result()));
	else
		return GetCloudMetricLogsOutcome(outcome.error());
}

void EHPCClient::getCloudMetricLogsAsync(const GetCloudMetricLogsRequest& request, const GetCloudMetricLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudMetricLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetCloudMetricLogsOutcomeCallable EHPCClient::getCloudMetricLogsCallable(const GetCloudMetricLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudMetricLogsOutcome()>>(
			[this, request]()
			{
			return this->getCloudMetricLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetCloudMetricProfilingOutcome EHPCClient::getCloudMetricProfiling(const GetCloudMetricProfilingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudMetricProfilingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudMetricProfilingOutcome(GetCloudMetricProfilingResult(outcome.result()));
	else
		return GetCloudMetricProfilingOutcome(outcome.error());
}

void EHPCClient::getCloudMetricProfilingAsync(const GetCloudMetricProfilingRequest& request, const GetCloudMetricProfilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudMetricProfiling(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetCloudMetricProfilingOutcomeCallable EHPCClient::getCloudMetricProfilingCallable(const GetCloudMetricProfilingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudMetricProfilingOutcome()>>(
			[this, request]()
			{
			return this->getCloudMetricProfiling(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetClusterVolumesOutcome EHPCClient::getClusterVolumes(const GetClusterVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterVolumesOutcome(GetClusterVolumesResult(outcome.result()));
	else
		return GetClusterVolumesOutcome(outcome.error());
}

void EHPCClient::getClusterVolumesAsync(const GetClusterVolumesRequest& request, const GetClusterVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetClusterVolumesOutcomeCallable EHPCClient::getClusterVolumesCallable(const GetClusterVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterVolumesOutcome()>>(
			[this, request]()
			{
			return this->getClusterVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetCommonImageOutcome EHPCClient::getCommonImage(const GetCommonImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCommonImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCommonImageOutcome(GetCommonImageResult(outcome.result()));
	else
		return GetCommonImageOutcome(outcome.error());
}

void EHPCClient::getCommonImageAsync(const GetCommonImageRequest& request, const GetCommonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCommonImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetCommonImageOutcomeCallable EHPCClient::getCommonImageCallable(const GetCommonImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCommonImageOutcome()>>(
			[this, request]()
			{
			return this->getCommonImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetGWSConnectTicketOutcome EHPCClient::getGWSConnectTicket(const GetGWSConnectTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGWSConnectTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGWSConnectTicketOutcome(GetGWSConnectTicketResult(outcome.result()));
	else
		return GetGWSConnectTicketOutcome(outcome.error());
}

void EHPCClient::getGWSConnectTicketAsync(const GetGWSConnectTicketRequest& request, const GetGWSConnectTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGWSConnectTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetGWSConnectTicketOutcomeCallable EHPCClient::getGWSConnectTicketCallable(const GetGWSConnectTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGWSConnectTicketOutcome()>>(
			[this, request]()
			{
			return this->getGWSConnectTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetHybridClusterConfigOutcome EHPCClient::getHybridClusterConfig(const GetHybridClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHybridClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHybridClusterConfigOutcome(GetHybridClusterConfigResult(outcome.result()));
	else
		return GetHybridClusterConfigOutcome(outcome.error());
}

void EHPCClient::getHybridClusterConfigAsync(const GetHybridClusterConfigRequest& request, const GetHybridClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHybridClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetHybridClusterConfigOutcomeCallable EHPCClient::getHybridClusterConfigCallable(const GetHybridClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHybridClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->getHybridClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetIfEcsTypeSupportHtConfigOutcome EHPCClient::getIfEcsTypeSupportHtConfig(const GetIfEcsTypeSupportHtConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIfEcsTypeSupportHtConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIfEcsTypeSupportHtConfigOutcome(GetIfEcsTypeSupportHtConfigResult(outcome.result()));
	else
		return GetIfEcsTypeSupportHtConfigOutcome(outcome.error());
}

void EHPCClient::getIfEcsTypeSupportHtConfigAsync(const GetIfEcsTypeSupportHtConfigRequest& request, const GetIfEcsTypeSupportHtConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIfEcsTypeSupportHtConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetIfEcsTypeSupportHtConfigOutcomeCallable EHPCClient::getIfEcsTypeSupportHtConfigCallable(const GetIfEcsTypeSupportHtConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIfEcsTypeSupportHtConfigOutcome()>>(
			[this, request]()
			{
			return this->getIfEcsTypeSupportHtConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetJobLogOutcome EHPCClient::getJobLog(const GetJobLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobLogOutcome(GetJobLogResult(outcome.result()));
	else
		return GetJobLogOutcome(outcome.error());
}

void EHPCClient::getJobLogAsync(const GetJobLogRequest& request, const GetJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetJobLogOutcomeCallable EHPCClient::getJobLogCallable(const GetJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobLogOutcome()>>(
			[this, request]()
			{
			return this->getJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetPostScriptsOutcome EHPCClient::getPostScripts(const GetPostScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPostScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPostScriptsOutcome(GetPostScriptsResult(outcome.result()));
	else
		return GetPostScriptsOutcome(outcome.error());
}

void EHPCClient::getPostScriptsAsync(const GetPostScriptsRequest& request, const GetPostScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPostScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetPostScriptsOutcomeCallable EHPCClient::getPostScriptsCallable(const GetPostScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPostScriptsOutcome()>>(
			[this, request]()
			{
			return this->getPostScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetSchedulerInfoOutcome EHPCClient::getSchedulerInfo(const GetSchedulerInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSchedulerInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSchedulerInfoOutcome(GetSchedulerInfoResult(outcome.result()));
	else
		return GetSchedulerInfoOutcome(outcome.error());
}

void EHPCClient::getSchedulerInfoAsync(const GetSchedulerInfoRequest& request, const GetSchedulerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSchedulerInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetSchedulerInfoOutcomeCallable EHPCClient::getSchedulerInfoCallable(const GetSchedulerInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSchedulerInfoOutcome()>>(
			[this, request]()
			{
			return this->getSchedulerInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetUserImageOutcome EHPCClient::getUserImage(const GetUserImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserImageOutcome(GetUserImageResult(outcome.result()));
	else
		return GetUserImageOutcome(outcome.error());
}

void EHPCClient::getUserImageAsync(const GetUserImageRequest& request, const GetUserImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetUserImageOutcomeCallable EHPCClient::getUserImageCallable(const GetUserImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserImageOutcome()>>(
			[this, request]()
			{
			return this->getUserImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetVisualServiceStatusOutcome EHPCClient::getVisualServiceStatus(const GetVisualServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVisualServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVisualServiceStatusOutcome(GetVisualServiceStatusResult(outcome.result()));
	else
		return GetVisualServiceStatusOutcome(outcome.error());
}

void EHPCClient::getVisualServiceStatusAsync(const GetVisualServiceStatusRequest& request, const GetVisualServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVisualServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetVisualServiceStatusOutcomeCallable EHPCClient::getVisualServiceStatusCallable(const GetVisualServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVisualServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getVisualServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::InitializeEHPCOutcome EHPCClient::initializeEHPC(const InitializeEHPCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeEHPCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeEHPCOutcome(InitializeEHPCResult(outcome.result()));
	else
		return InitializeEHPCOutcome(outcome.error());
}

void EHPCClient::initializeEHPCAsync(const InitializeEHPCRequest& request, const InitializeEHPCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeEHPC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::InitializeEHPCOutcomeCallable EHPCClient::initializeEHPCCallable(const InitializeEHPCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeEHPCOutcome()>>(
			[this, request]()
			{
			return this->initializeEHPC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::InspectImageOutcome EHPCClient::inspectImage(const InspectImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InspectImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InspectImageOutcome(InspectImageResult(outcome.result()));
	else
		return InspectImageOutcome(outcome.error());
}

void EHPCClient::inspectImageAsync(const InspectImageRequest& request, const InspectImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inspectImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::InspectImageOutcomeCallable EHPCClient::inspectImageCallable(const InspectImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InspectImageOutcome()>>(
			[this, request]()
			{
			return this->inspectImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::InstallSoftwareOutcome EHPCClient::installSoftware(const InstallSoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallSoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallSoftwareOutcome(InstallSoftwareResult(outcome.result()));
	else
		return InstallSoftwareOutcome(outcome.error());
}

void EHPCClient::installSoftwareAsync(const InstallSoftwareRequest& request, const InstallSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installSoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::InstallSoftwareOutcomeCallable EHPCClient::installSoftwareCallable(const InstallSoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallSoftwareOutcome()>>(
			[this, request]()
			{
			return this->installSoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::InvokeShellCommandOutcome EHPCClient::invokeShellCommand(const InvokeShellCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeShellCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeShellCommandOutcome(InvokeShellCommandResult(outcome.result()));
	else
		return InvokeShellCommandOutcome(outcome.error());
}

void EHPCClient::invokeShellCommandAsync(const InvokeShellCommandRequest& request, const InvokeShellCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeShellCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::InvokeShellCommandOutcomeCallable EHPCClient::invokeShellCommandCallable(const InvokeShellCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeShellCommandOutcome()>>(
			[this, request]()
			{
			return this->invokeShellCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListAvailableEcsTypesOutcome EHPCClient::listAvailableEcsTypes(const ListAvailableEcsTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableEcsTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableEcsTypesOutcome(ListAvailableEcsTypesResult(outcome.result()));
	else
		return ListAvailableEcsTypesOutcome(outcome.error());
}

void EHPCClient::listAvailableEcsTypesAsync(const ListAvailableEcsTypesRequest& request, const ListAvailableEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableEcsTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListAvailableEcsTypesOutcomeCallable EHPCClient::listAvailableEcsTypesCallable(const ListAvailableEcsTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableEcsTypesOutcome()>>(
			[this, request]()
			{
			return this->listAvailableEcsTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCloudMetricProfilingsOutcome EHPCClient::listCloudMetricProfilings(const ListCloudMetricProfilingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCloudMetricProfilingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCloudMetricProfilingsOutcome(ListCloudMetricProfilingsResult(outcome.result()));
	else
		return ListCloudMetricProfilingsOutcome(outcome.error());
}

void EHPCClient::listCloudMetricProfilingsAsync(const ListCloudMetricProfilingsRequest& request, const ListCloudMetricProfilingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCloudMetricProfilings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCloudMetricProfilingsOutcomeCallable EHPCClient::listCloudMetricProfilingsCallable(const ListCloudMetricProfilingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCloudMetricProfilingsOutcome()>>(
			[this, request]()
			{
			return this->listCloudMetricProfilings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListClusterLogsOutcome EHPCClient::listClusterLogs(const ListClusterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterLogsOutcome(ListClusterLogsResult(outcome.result()));
	else
		return ListClusterLogsOutcome(outcome.error());
}

void EHPCClient::listClusterLogsAsync(const ListClusterLogsRequest& request, const ListClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListClusterLogsOutcomeCallable EHPCClient::listClusterLogsCallable(const ListClusterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterLogsOutcome()>>(
			[this, request]()
			{
			return this->listClusterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListClustersOutcome EHPCClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void EHPCClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListClustersOutcomeCallable EHPCClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListClustersMetaOutcome EHPCClient::listClustersMeta(const ListClustersMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersMetaOutcome(ListClustersMetaResult(outcome.result()));
	else
		return ListClustersMetaOutcome(outcome.error());
}

void EHPCClient::listClustersMetaAsync(const ListClustersMetaRequest& request, const ListClustersMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClustersMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListClustersMetaOutcomeCallable EHPCClient::listClustersMetaCallable(const ListClustersMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersMetaOutcome()>>(
			[this, request]()
			{
			return this->listClustersMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCommandsOutcome EHPCClient::listCommands(const ListCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommandsOutcome(ListCommandsResult(outcome.result()));
	else
		return ListCommandsOutcome(outcome.error());
}

void EHPCClient::listCommandsAsync(const ListCommandsRequest& request, const ListCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCommandsOutcomeCallable EHPCClient::listCommandsCallable(const ListCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommandsOutcome()>>(
			[this, request]()
			{
			return this->listCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCommunityImagesOutcome EHPCClient::listCommunityImages(const ListCommunityImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommunityImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommunityImagesOutcome(ListCommunityImagesResult(outcome.result()));
	else
		return ListCommunityImagesOutcome(outcome.error());
}

void EHPCClient::listCommunityImagesAsync(const ListCommunityImagesRequest& request, const ListCommunityImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommunityImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCommunityImagesOutcomeCallable EHPCClient::listCommunityImagesCallable(const ListCommunityImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommunityImagesOutcome()>>(
			[this, request]()
			{
			return this->listCommunityImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListContainerAppsOutcome EHPCClient::listContainerApps(const ListContainerAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContainerAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContainerAppsOutcome(ListContainerAppsResult(outcome.result()));
	else
		return ListContainerAppsOutcome(outcome.error());
}

void EHPCClient::listContainerAppsAsync(const ListContainerAppsRequest& request, const ListContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContainerApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListContainerAppsOutcomeCallable EHPCClient::listContainerAppsCallable(const ListContainerAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContainerAppsOutcome()>>(
			[this, request]()
			{
			return this->listContainerApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListContainerImagesOutcome EHPCClient::listContainerImages(const ListContainerImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContainerImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContainerImagesOutcome(ListContainerImagesResult(outcome.result()));
	else
		return ListContainerImagesOutcome(outcome.error());
}

void EHPCClient::listContainerImagesAsync(const ListContainerImagesRequest& request, const ListContainerImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContainerImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListContainerImagesOutcomeCallable EHPCClient::listContainerImagesCallable(const ListContainerImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContainerImagesOutcome()>>(
			[this, request]()
			{
			return this->listContainerImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCpfsFileSystemsOutcome EHPCClient::listCpfsFileSystems(const ListCpfsFileSystemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCpfsFileSystemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCpfsFileSystemsOutcome(ListCpfsFileSystemsResult(outcome.result()));
	else
		return ListCpfsFileSystemsOutcome(outcome.error());
}

void EHPCClient::listCpfsFileSystemsAsync(const ListCpfsFileSystemsRequest& request, const ListCpfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCpfsFileSystems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCpfsFileSystemsOutcomeCallable EHPCClient::listCpfsFileSystemsCallable(const ListCpfsFileSystemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCpfsFileSystemsOutcome()>>(
			[this, request]()
			{
			return this->listCpfsFileSystems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCurrentClientVersionOutcome EHPCClient::listCurrentClientVersion(const ListCurrentClientVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCurrentClientVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCurrentClientVersionOutcome(ListCurrentClientVersionResult(outcome.result()));
	else
		return ListCurrentClientVersionOutcome(outcome.error());
}

void EHPCClient::listCurrentClientVersionAsync(const ListCurrentClientVersionRequest& request, const ListCurrentClientVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCurrentClientVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCurrentClientVersionOutcomeCallable EHPCClient::listCurrentClientVersionCallable(const ListCurrentClientVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCurrentClientVersionOutcome()>>(
			[this, request]()
			{
			return this->listCurrentClientVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCustomImagesOutcome EHPCClient::listCustomImages(const ListCustomImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomImagesOutcome(ListCustomImagesResult(outcome.result()));
	else
		return ListCustomImagesOutcome(outcome.error());
}

void EHPCClient::listCustomImagesAsync(const ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCustomImagesOutcomeCallable EHPCClient::listCustomImagesCallable(const ListCustomImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomImagesOutcome()>>(
			[this, request]()
			{
			return this->listCustomImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListFileSystemWithMountTargetsOutcome EHPCClient::listFileSystemWithMountTargets(const ListFileSystemWithMountTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFileSystemWithMountTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFileSystemWithMountTargetsOutcome(ListFileSystemWithMountTargetsResult(outcome.result()));
	else
		return ListFileSystemWithMountTargetsOutcome(outcome.error());
}

void EHPCClient::listFileSystemWithMountTargetsAsync(const ListFileSystemWithMountTargetsRequest& request, const ListFileSystemWithMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFileSystemWithMountTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListFileSystemWithMountTargetsOutcomeCallable EHPCClient::listFileSystemWithMountTargetsCallable(const ListFileSystemWithMountTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFileSystemWithMountTargetsOutcome()>>(
			[this, request]()
			{
			return this->listFileSystemWithMountTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListImagesOutcome EHPCClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void EHPCClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListImagesOutcomeCallable EHPCClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListInstalledSoftwareOutcome EHPCClient::listInstalledSoftware(const ListInstalledSoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstalledSoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstalledSoftwareOutcome(ListInstalledSoftwareResult(outcome.result()));
	else
		return ListInstalledSoftwareOutcome(outcome.error());
}

void EHPCClient::listInstalledSoftwareAsync(const ListInstalledSoftwareRequest& request, const ListInstalledSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstalledSoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListInstalledSoftwareOutcomeCallable EHPCClient::listInstalledSoftwareCallable(const ListInstalledSoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstalledSoftwareOutcome()>>(
			[this, request]()
			{
			return this->listInstalledSoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListInvocationResultsOutcome EHPCClient::listInvocationResults(const ListInvocationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInvocationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInvocationResultsOutcome(ListInvocationResultsResult(outcome.result()));
	else
		return ListInvocationResultsOutcome(outcome.error());
}

void EHPCClient::listInvocationResultsAsync(const ListInvocationResultsRequest& request, const ListInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInvocationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListInvocationResultsOutcomeCallable EHPCClient::listInvocationResultsCallable(const ListInvocationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInvocationResultsOutcome()>>(
			[this, request]()
			{
			return this->listInvocationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListInvocationStatusOutcome EHPCClient::listInvocationStatus(const ListInvocationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInvocationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInvocationStatusOutcome(ListInvocationStatusResult(outcome.result()));
	else
		return ListInvocationStatusOutcome(outcome.error());
}

void EHPCClient::listInvocationStatusAsync(const ListInvocationStatusRequest& request, const ListInvocationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInvocationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListInvocationStatusOutcomeCallable EHPCClient::listInvocationStatusCallable(const ListInvocationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInvocationStatusOutcome()>>(
			[this, request]()
			{
			return this->listInvocationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListJobTemplatesOutcome EHPCClient::listJobTemplates(const ListJobTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobTemplatesOutcome(ListJobTemplatesResult(outcome.result()));
	else
		return ListJobTemplatesOutcome(outcome.error());
}

void EHPCClient::listJobTemplatesAsync(const ListJobTemplatesRequest& request, const ListJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListJobTemplatesOutcomeCallable EHPCClient::listJobTemplatesCallable(const ListJobTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listJobTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListJobsOutcome EHPCClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void EHPCClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListJobsOutcomeCallable EHPCClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListJobsWithFiltersOutcome EHPCClient::listJobsWithFilters(const ListJobsWithFiltersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsWithFiltersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsWithFiltersOutcome(ListJobsWithFiltersResult(outcome.result()));
	else
		return ListJobsWithFiltersOutcome(outcome.error());
}

void EHPCClient::listJobsWithFiltersAsync(const ListJobsWithFiltersRequest& request, const ListJobsWithFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobsWithFilters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListJobsWithFiltersOutcomeCallable EHPCClient::listJobsWithFiltersCallable(const ListJobsWithFiltersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsWithFiltersOutcome()>>(
			[this, request]()
			{
			return this->listJobsWithFilters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListNodesOutcome EHPCClient::listNodes(const ListNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesOutcome(ListNodesResult(outcome.result()));
	else
		return ListNodesOutcome(outcome.error());
}

void EHPCClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListNodesOutcomeCallable EHPCClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListNodesByQueueOutcome EHPCClient::listNodesByQueue(const ListNodesByQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesByQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesByQueueOutcome(ListNodesByQueueResult(outcome.result()));
	else
		return ListNodesByQueueOutcome(outcome.error());
}

void EHPCClient::listNodesByQueueAsync(const ListNodesByQueueRequest& request, const ListNodesByQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesByQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListNodesByQueueOutcomeCallable EHPCClient::listNodesByQueueCallable(const ListNodesByQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesByQueueOutcome()>>(
			[this, request]()
			{
			return this->listNodesByQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListNodesNoPagingOutcome EHPCClient::listNodesNoPaging(const ListNodesNoPagingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesNoPagingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesNoPagingOutcome(ListNodesNoPagingResult(outcome.result()));
	else
		return ListNodesNoPagingOutcome(outcome.error());
}

void EHPCClient::listNodesNoPagingAsync(const ListNodesNoPagingRequest& request, const ListNodesNoPagingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesNoPaging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListNodesNoPagingOutcomeCallable EHPCClient::listNodesNoPagingCallable(const ListNodesNoPagingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesNoPagingOutcome()>>(
			[this, request]()
			{
			return this->listNodesNoPaging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListPreferredEcsTypesOutcome EHPCClient::listPreferredEcsTypes(const ListPreferredEcsTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPreferredEcsTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPreferredEcsTypesOutcome(ListPreferredEcsTypesResult(outcome.result()));
	else
		return ListPreferredEcsTypesOutcome(outcome.error());
}

void EHPCClient::listPreferredEcsTypesAsync(const ListPreferredEcsTypesRequest& request, const ListPreferredEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPreferredEcsTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListPreferredEcsTypesOutcomeCallable EHPCClient::listPreferredEcsTypesCallable(const ListPreferredEcsTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPreferredEcsTypesOutcome()>>(
			[this, request]()
			{
			return this->listPreferredEcsTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListQueuesOutcome EHPCClient::listQueues(const ListQueuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueuesOutcome(ListQueuesResult(outcome.result()));
	else
		return ListQueuesOutcome(outcome.error());
}

void EHPCClient::listQueuesAsync(const ListQueuesRequest& request, const ListQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListQueuesOutcomeCallable EHPCClient::listQueuesCallable(const ListQueuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueuesOutcome()>>(
			[this, request]()
			{
			return this->listQueues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListRegionsOutcome EHPCClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void EHPCClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListRegionsOutcomeCallable EHPCClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListSecurityGroupsOutcome EHPCClient::listSecurityGroups(const ListSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityGroupsOutcome(ListSecurityGroupsResult(outcome.result()));
	else
		return ListSecurityGroupsOutcome(outcome.error());
}

void EHPCClient::listSecurityGroupsAsync(const ListSecurityGroupsRequest& request, const ListSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListSecurityGroupsOutcomeCallable EHPCClient::listSecurityGroupsCallable(const ListSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->listSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListServerlessJobsOutcome EHPCClient::listServerlessJobs(const ListServerlessJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerlessJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerlessJobsOutcome(ListServerlessJobsResult(outcome.result()));
	else
		return ListServerlessJobsOutcome(outcome.error());
}

void EHPCClient::listServerlessJobsAsync(const ListServerlessJobsRequest& request, const ListServerlessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerlessJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListServerlessJobsOutcomeCallable EHPCClient::listServerlessJobsCallable(const ListServerlessJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerlessJobsOutcome()>>(
			[this, request]()
			{
			return this->listServerlessJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListSoftwaresOutcome EHPCClient::listSoftwares(const ListSoftwaresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSoftwaresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSoftwaresOutcome(ListSoftwaresResult(outcome.result()));
	else
		return ListSoftwaresOutcome(outcome.error());
}

void EHPCClient::listSoftwaresAsync(const ListSoftwaresRequest& request, const ListSoftwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSoftwares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListSoftwaresOutcomeCallable EHPCClient::listSoftwaresCallable(const ListSoftwaresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSoftwaresOutcome()>>(
			[this, request]()
			{
			return this->listSoftwares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListTagResourcesOutcome EHPCClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void EHPCClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListTagResourcesOutcomeCallable EHPCClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListTasksOutcome EHPCClient::listTasks(const ListTasksRequest &request) const
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

void EHPCClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListTasksOutcomeCallable EHPCClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListUpgradeClientsOutcome EHPCClient::listUpgradeClients(const ListUpgradeClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUpgradeClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUpgradeClientsOutcome(ListUpgradeClientsResult(outcome.result()));
	else
		return ListUpgradeClientsOutcome(outcome.error());
}

void EHPCClient::listUpgradeClientsAsync(const ListUpgradeClientsRequest& request, const ListUpgradeClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUpgradeClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListUpgradeClientsOutcomeCallable EHPCClient::listUpgradeClientsCallable(const ListUpgradeClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUpgradeClientsOutcome()>>(
			[this, request]()
			{
			return this->listUpgradeClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListUsersOutcome EHPCClient::listUsers(const ListUsersRequest &request) const
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

void EHPCClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListUsersOutcomeCallable EHPCClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListUsersAsyncOutcome EHPCClient::listUsersAsync(const ListUsersAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersAsyncOutcome(ListUsersAsyncResult(outcome.result()));
	else
		return ListUsersAsyncOutcome(outcome.error());
}

void EHPCClient::listUsersAsyncAsync(const ListUsersAsyncRequest& request, const ListUsersAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListUsersAsyncOutcomeCallable EHPCClient::listUsersAsyncCallable(const ListUsersAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersAsyncOutcome()>>(
			[this, request]()
			{
			return this->listUsersAsync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListVolumesOutcome EHPCClient::listVolumes(const ListVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVolumesOutcome(ListVolumesResult(outcome.result()));
	else
		return ListVolumesOutcome(outcome.error());
}

void EHPCClient::listVolumesAsync(const ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListVolumesOutcomeCallable EHPCClient::listVolumesCallable(const ListVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVolumesOutcome()>>(
			[this, request]()
			{
			return this->listVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyClusterAttributesOutcome EHPCClient::modifyClusterAttributes(const ModifyClusterAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterAttributesOutcome(ModifyClusterAttributesResult(outcome.result()));
	else
		return ModifyClusterAttributesOutcome(outcome.error());
}

void EHPCClient::modifyClusterAttributesAsync(const ModifyClusterAttributesRequest& request, const ModifyClusterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyClusterAttributesOutcomeCallable EHPCClient::modifyClusterAttributesCallable(const ModifyClusterAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyContainerAppAttributesOutcome EHPCClient::modifyContainerAppAttributes(const ModifyContainerAppAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyContainerAppAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyContainerAppAttributesOutcome(ModifyContainerAppAttributesResult(outcome.result()));
	else
		return ModifyContainerAppAttributesOutcome(outcome.error());
}

void EHPCClient::modifyContainerAppAttributesAsync(const ModifyContainerAppAttributesRequest& request, const ModifyContainerAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyContainerAppAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyContainerAppAttributesOutcomeCallable EHPCClient::modifyContainerAppAttributesCallable(const ModifyContainerAppAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyContainerAppAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyContainerAppAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyImageGatewayConfigOutcome EHPCClient::modifyImageGatewayConfig(const ModifyImageGatewayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageGatewayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageGatewayConfigOutcome(ModifyImageGatewayConfigResult(outcome.result()));
	else
		return ModifyImageGatewayConfigOutcome(outcome.error());
}

void EHPCClient::modifyImageGatewayConfigAsync(const ModifyImageGatewayConfigRequest& request, const ModifyImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageGatewayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyImageGatewayConfigOutcomeCallable EHPCClient::modifyImageGatewayConfigCallable(const ModifyImageGatewayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageGatewayConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyImageGatewayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyUserGroupsOutcome EHPCClient::modifyUserGroups(const ModifyUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserGroupsOutcome(ModifyUserGroupsResult(outcome.result()));
	else
		return ModifyUserGroupsOutcome(outcome.error());
}

void EHPCClient::modifyUserGroupsAsync(const ModifyUserGroupsRequest& request, const ModifyUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyUserGroupsOutcomeCallable EHPCClient::modifyUserGroupsCallable(const ModifyUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifyUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyUserPasswordsOutcome EHPCClient::modifyUserPasswords(const ModifyUserPasswordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserPasswordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserPasswordsOutcome(ModifyUserPasswordsResult(outcome.result()));
	else
		return ModifyUserPasswordsOutcome(outcome.error());
}

void EHPCClient::modifyUserPasswordsAsync(const ModifyUserPasswordsRequest& request, const ModifyUserPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserPasswords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyUserPasswordsOutcomeCallable EHPCClient::modifyUserPasswordsCallable(const ModifyUserPasswordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserPasswordsOutcome()>>(
			[this, request]()
			{
			return this->modifyUserPasswords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyVisualServicePasswdOutcome EHPCClient::modifyVisualServicePasswd(const ModifyVisualServicePasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVisualServicePasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVisualServicePasswdOutcome(ModifyVisualServicePasswdResult(outcome.result()));
	else
		return ModifyVisualServicePasswdOutcome(outcome.error());
}

void EHPCClient::modifyVisualServicePasswdAsync(const ModifyVisualServicePasswdRequest& request, const ModifyVisualServicePasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVisualServicePasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyVisualServicePasswdOutcomeCallable EHPCClient::modifyVisualServicePasswdCallable(const ModifyVisualServicePasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVisualServicePasswdOutcome()>>(
			[this, request]()
			{
			return this->modifyVisualServicePasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::MountNFSOutcome EHPCClient::mountNFS(const MountNFSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MountNFSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MountNFSOutcome(MountNFSResult(outcome.result()));
	else
		return MountNFSOutcome(outcome.error());
}

void EHPCClient::mountNFSAsync(const MountNFSRequest& request, const MountNFSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mountNFS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::MountNFSOutcomeCallable EHPCClient::mountNFSCallable(const MountNFSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MountNFSOutcome()>>(
			[this, request]()
			{
			return this->mountNFS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::PullImageOutcome EHPCClient::pullImage(const PullImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullImageOutcome(PullImageResult(outcome.result()));
	else
		return PullImageOutcome(outcome.error());
}

void EHPCClient::pullImageAsync(const PullImageRequest& request, const PullImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::PullImageOutcomeCallable EHPCClient::pullImageCallable(const PullImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullImageOutcome()>>(
			[this, request]()
			{
			return this->pullImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::QueryServicePackAndPriceOutcome EHPCClient::queryServicePackAndPrice(const QueryServicePackAndPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryServicePackAndPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryServicePackAndPriceOutcome(QueryServicePackAndPriceResult(outcome.result()));
	else
		return QueryServicePackAndPriceOutcome(outcome.error());
}

void EHPCClient::queryServicePackAndPriceAsync(const QueryServicePackAndPriceRequest& request, const QueryServicePackAndPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryServicePackAndPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::QueryServicePackAndPriceOutcomeCallable EHPCClient::queryServicePackAndPriceCallable(const QueryServicePackAndPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryServicePackAndPriceOutcome()>>(
			[this, request]()
			{
			return this->queryServicePackAndPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::RecoverClusterOutcome EHPCClient::recoverCluster(const RecoverClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverClusterOutcome(RecoverClusterResult(outcome.result()));
	else
		return RecoverClusterOutcome(outcome.error());
}

void EHPCClient::recoverClusterAsync(const RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::RecoverClusterOutcomeCallable EHPCClient::recoverClusterCallable(const RecoverClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverClusterOutcome()>>(
			[this, request]()
			{
			return this->recoverCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::RerunJobsOutcome EHPCClient::rerunJobs(const RerunJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunJobsOutcome(RerunJobsResult(outcome.result()));
	else
		return RerunJobsOutcome(outcome.error());
}

void EHPCClient::rerunJobsAsync(const RerunJobsRequest& request, const RerunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::RerunJobsOutcomeCallable EHPCClient::rerunJobsCallable(const RerunJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunJobsOutcome()>>(
			[this, request]()
			{
			return this->rerunJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ResetNodesOutcome EHPCClient::resetNodes(const ResetNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetNodesOutcome(ResetNodesResult(outcome.result()));
	else
		return ResetNodesOutcome(outcome.error());
}

void EHPCClient::resetNodesAsync(const ResetNodesRequest& request, const ResetNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ResetNodesOutcomeCallable EHPCClient::resetNodesCallable(const ResetNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetNodesOutcome()>>(
			[this, request]()
			{
			return this->resetNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::RunCloudMetricProfilingOutcome EHPCClient::runCloudMetricProfiling(const RunCloudMetricProfilingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCloudMetricProfilingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCloudMetricProfilingOutcome(RunCloudMetricProfilingResult(outcome.result()));
	else
		return RunCloudMetricProfilingOutcome(outcome.error());
}

void EHPCClient::runCloudMetricProfilingAsync(const RunCloudMetricProfilingRequest& request, const RunCloudMetricProfilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCloudMetricProfiling(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::RunCloudMetricProfilingOutcomeCallable EHPCClient::runCloudMetricProfilingCallable(const RunCloudMetricProfilingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCloudMetricProfilingOutcome()>>(
			[this, request]()
			{
			return this->runCloudMetricProfiling(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetAutoScaleConfigOutcome EHPCClient::setAutoScaleConfig(const SetAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAutoScaleConfigOutcome(SetAutoScaleConfigResult(outcome.result()));
	else
		return SetAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::setAutoScaleConfigAsync(const SetAutoScaleConfigRequest& request, const SetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetAutoScaleConfigOutcomeCallable EHPCClient::setAutoScaleConfigCallable(const SetAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->setAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetGWSClusterPolicyOutcome EHPCClient::setGWSClusterPolicy(const SetGWSClusterPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGWSClusterPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGWSClusterPolicyOutcome(SetGWSClusterPolicyResult(outcome.result()));
	else
		return SetGWSClusterPolicyOutcome(outcome.error());
}

void EHPCClient::setGWSClusterPolicyAsync(const SetGWSClusterPolicyRequest& request, const SetGWSClusterPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGWSClusterPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetGWSClusterPolicyOutcomeCallable EHPCClient::setGWSClusterPolicyCallable(const SetGWSClusterPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGWSClusterPolicyOutcome()>>(
			[this, request]()
			{
			return this->setGWSClusterPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetGWSInstanceNameOutcome EHPCClient::setGWSInstanceName(const SetGWSInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGWSInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGWSInstanceNameOutcome(SetGWSInstanceNameResult(outcome.result()));
	else
		return SetGWSInstanceNameOutcome(outcome.error());
}

void EHPCClient::setGWSInstanceNameAsync(const SetGWSInstanceNameRequest& request, const SetGWSInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGWSInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetGWSInstanceNameOutcomeCallable EHPCClient::setGWSInstanceNameCallable(const SetGWSInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGWSInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->setGWSInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetGWSInstanceUserOutcome EHPCClient::setGWSInstanceUser(const SetGWSInstanceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGWSInstanceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGWSInstanceUserOutcome(SetGWSInstanceUserResult(outcome.result()));
	else
		return SetGWSInstanceUserOutcome(outcome.error());
}

void EHPCClient::setGWSInstanceUserAsync(const SetGWSInstanceUserRequest& request, const SetGWSInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGWSInstanceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetGWSInstanceUserOutcomeCallable EHPCClient::setGWSInstanceUserCallable(const SetGWSInstanceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGWSInstanceUserOutcome()>>(
			[this, request]()
			{
			return this->setGWSInstanceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetPostScriptsOutcome EHPCClient::setPostScripts(const SetPostScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPostScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPostScriptsOutcome(SetPostScriptsResult(outcome.result()));
	else
		return SetPostScriptsOutcome(outcome.error());
}

void EHPCClient::setPostScriptsAsync(const SetPostScriptsRequest& request, const SetPostScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPostScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetPostScriptsOutcomeCallable EHPCClient::setPostScriptsCallable(const SetPostScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPostScriptsOutcome()>>(
			[this, request]()
			{
			return this->setPostScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetQueueOutcome EHPCClient::setQueue(const SetQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetQueueOutcome(SetQueueResult(outcome.result()));
	else
		return SetQueueOutcome(outcome.error());
}

void EHPCClient::setQueueAsync(const SetQueueRequest& request, const SetQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetQueueOutcomeCallable EHPCClient::setQueueCallable(const SetQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetQueueOutcome()>>(
			[this, request]()
			{
			return this->setQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetSchedulerInfoOutcome EHPCClient::setSchedulerInfo(const SetSchedulerInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSchedulerInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSchedulerInfoOutcome(SetSchedulerInfoResult(outcome.result()));
	else
		return SetSchedulerInfoOutcome(outcome.error());
}

void EHPCClient::setSchedulerInfoAsync(const SetSchedulerInfoRequest& request, const SetSchedulerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSchedulerInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetSchedulerInfoOutcomeCallable EHPCClient::setSchedulerInfoCallable(const SetSchedulerInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSchedulerInfoOutcome()>>(
			[this, request]()
			{
			return this->setSchedulerInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartClusterOutcome EHPCClient::startCluster(const StartClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartClusterOutcome(StartClusterResult(outcome.result()));
	else
		return StartClusterOutcome(outcome.error());
}

void EHPCClient::startClusterAsync(const StartClusterRequest& request, const StartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartClusterOutcomeCallable EHPCClient::startClusterCallable(const StartClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartClusterOutcome()>>(
			[this, request]()
			{
			return this->startCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartGWSInstanceOutcome EHPCClient::startGWSInstance(const StartGWSInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartGWSInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartGWSInstanceOutcome(StartGWSInstanceResult(outcome.result()));
	else
		return StartGWSInstanceOutcome(outcome.error());
}

void EHPCClient::startGWSInstanceAsync(const StartGWSInstanceRequest& request, const StartGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startGWSInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartGWSInstanceOutcomeCallable EHPCClient::startGWSInstanceCallable(const StartGWSInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartGWSInstanceOutcome()>>(
			[this, request]()
			{
			return this->startGWSInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartNodesOutcome EHPCClient::startNodes(const StartNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartNodesOutcome(StartNodesResult(outcome.result()));
	else
		return StartNodesOutcome(outcome.error());
}

void EHPCClient::startNodesAsync(const StartNodesRequest& request, const StartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartNodesOutcomeCallable EHPCClient::startNodesCallable(const StartNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartNodesOutcome()>>(
			[this, request]()
			{
			return this->startNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartVisualServiceOutcome EHPCClient::startVisualService(const StartVisualServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartVisualServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartVisualServiceOutcome(StartVisualServiceResult(outcome.result()));
	else
		return StartVisualServiceOutcome(outcome.error());
}

void EHPCClient::startVisualServiceAsync(const StartVisualServiceRequest& request, const StartVisualServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startVisualService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartVisualServiceOutcomeCallable EHPCClient::startVisualServiceCallable(const StartVisualServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartVisualServiceOutcome()>>(
			[this, request]()
			{
			return this->startVisualService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopClusterOutcome EHPCClient::stopCluster(const StopClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopClusterOutcome(StopClusterResult(outcome.result()));
	else
		return StopClusterOutcome(outcome.error());
}

void EHPCClient::stopClusterAsync(const StopClusterRequest& request, const StopClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopClusterOutcomeCallable EHPCClient::stopClusterCallable(const StopClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopClusterOutcome()>>(
			[this, request]()
			{
			return this->stopCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopGWSInstanceOutcome EHPCClient::stopGWSInstance(const StopGWSInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopGWSInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopGWSInstanceOutcome(StopGWSInstanceResult(outcome.result()));
	else
		return StopGWSInstanceOutcome(outcome.error());
}

void EHPCClient::stopGWSInstanceAsync(const StopGWSInstanceRequest& request, const StopGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopGWSInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopGWSInstanceOutcomeCallable EHPCClient::stopGWSInstanceCallable(const StopGWSInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopGWSInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopGWSInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopJobsOutcome EHPCClient::stopJobs(const StopJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopJobsOutcome(StopJobsResult(outcome.result()));
	else
		return StopJobsOutcome(outcome.error());
}

void EHPCClient::stopJobsAsync(const StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopJobsOutcomeCallable EHPCClient::stopJobsCallable(const StopJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopJobsOutcome()>>(
			[this, request]()
			{
			return this->stopJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopNodesOutcome EHPCClient::stopNodes(const StopNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopNodesOutcome(StopNodesResult(outcome.result()));
	else
		return StopNodesOutcome(outcome.error());
}

void EHPCClient::stopNodesAsync(const StopNodesRequest& request, const StopNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopNodesOutcomeCallable EHPCClient::stopNodesCallable(const StopNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopNodesOutcome()>>(
			[this, request]()
			{
			return this->stopNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopServerlessJobsOutcome EHPCClient::stopServerlessJobs(const StopServerlessJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopServerlessJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopServerlessJobsOutcome(StopServerlessJobsResult(outcome.result()));
	else
		return StopServerlessJobsOutcome(outcome.error());
}

void EHPCClient::stopServerlessJobsAsync(const StopServerlessJobsRequest& request, const StopServerlessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopServerlessJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopServerlessJobsOutcomeCallable EHPCClient::stopServerlessJobsCallable(const StopServerlessJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopServerlessJobsOutcome()>>(
			[this, request]()
			{
			return this->stopServerlessJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopVisualServiceOutcome EHPCClient::stopVisualService(const StopVisualServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopVisualServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopVisualServiceOutcome(StopVisualServiceResult(outcome.result()));
	else
		return StopVisualServiceOutcome(outcome.error());
}

void EHPCClient::stopVisualServiceAsync(const StopVisualServiceRequest& request, const StopVisualServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopVisualService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopVisualServiceOutcomeCallable EHPCClient::stopVisualServiceCallable(const StopVisualServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopVisualServiceOutcome()>>(
			[this, request]()
			{
			return this->stopVisualService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SubmitJobOutcome EHPCClient::submitJob(const SubmitJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitJobOutcome(SubmitJobResult(outcome.result()));
	else
		return SubmitJobOutcome(outcome.error());
}

void EHPCClient::submitJobAsync(const SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SubmitJobOutcomeCallable EHPCClient::submitJobCallable(const SubmitJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitJobOutcome()>>(
			[this, request]()
			{
			return this->submitJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SubmitServerlessJobOutcome EHPCClient::submitServerlessJob(const SubmitServerlessJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitServerlessJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitServerlessJobOutcome(SubmitServerlessJobResult(outcome.result()));
	else
		return SubmitServerlessJobOutcome(outcome.error());
}

void EHPCClient::submitServerlessJobAsync(const SubmitServerlessJobRequest& request, const SubmitServerlessJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitServerlessJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SubmitServerlessJobOutcomeCallable EHPCClient::submitServerlessJobCallable(const SubmitServerlessJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitServerlessJobOutcome()>>(
			[this, request]()
			{
			return this->submitServerlessJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SummaryImagesOutcome EHPCClient::summaryImages(const SummaryImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SummaryImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SummaryImagesOutcome(SummaryImagesResult(outcome.result()));
	else
		return SummaryImagesOutcome(outcome.error());
}

void EHPCClient::summaryImagesAsync(const SummaryImagesRequest& request, const SummaryImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, summaryImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SummaryImagesOutcomeCallable EHPCClient::summaryImagesCallable(const SummaryImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SummaryImagesOutcome()>>(
			[this, request]()
			{
			return this->summaryImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SummaryImagesInfoOutcome EHPCClient::summaryImagesInfo(const SummaryImagesInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SummaryImagesInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SummaryImagesInfoOutcome(SummaryImagesInfoResult(outcome.result()));
	else
		return SummaryImagesInfoOutcome(outcome.error());
}

void EHPCClient::summaryImagesInfoAsync(const SummaryImagesInfoRequest& request, const SummaryImagesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, summaryImagesInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SummaryImagesInfoOutcomeCallable EHPCClient::summaryImagesInfoCallable(const SummaryImagesInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SummaryImagesInfoOutcome()>>(
			[this, request]()
			{
			return this->summaryImagesInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SyncUsersOutcome EHPCClient::syncUsers(const SyncUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncUsersOutcome(SyncUsersResult(outcome.result()));
	else
		return SyncUsersOutcome(outcome.error());
}

void EHPCClient::syncUsersAsync(const SyncUsersRequest& request, const SyncUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SyncUsersOutcomeCallable EHPCClient::syncUsersCallable(const SyncUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncUsersOutcome()>>(
			[this, request]()
			{
			return this->syncUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::TagResourcesOutcome EHPCClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void EHPCClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::TagResourcesOutcomeCallable EHPCClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UnTagResourcesOutcome EHPCClient::unTagResources(const UnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagResourcesOutcome(UnTagResourcesResult(outcome.result()));
	else
		return UnTagResourcesOutcome(outcome.error());
}

void EHPCClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UnTagResourcesOutcomeCallable EHPCClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UninstallSoftwareOutcome EHPCClient::uninstallSoftware(const UninstallSoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallSoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallSoftwareOutcome(UninstallSoftwareResult(outcome.result()));
	else
		return UninstallSoftwareOutcome(outcome.error());
}

void EHPCClient::uninstallSoftwareAsync(const UninstallSoftwareRequest& request, const UninstallSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallSoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UninstallSoftwareOutcomeCallable EHPCClient::uninstallSoftwareCallable(const UninstallSoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallSoftwareOutcome()>>(
			[this, request]()
			{
			return this->uninstallSoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UpdateClusterVolumesOutcome EHPCClient::updateClusterVolumes(const UpdateClusterVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterVolumesOutcome(UpdateClusterVolumesResult(outcome.result()));
	else
		return UpdateClusterVolumesOutcome(outcome.error());
}

void EHPCClient::updateClusterVolumesAsync(const UpdateClusterVolumesRequest& request, const UpdateClusterVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClusterVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UpdateClusterVolumesOutcomeCallable EHPCClient::updateClusterVolumesCallable(const UpdateClusterVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterVolumesOutcome()>>(
			[this, request]()
			{
			return this->updateClusterVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UpdateQueueConfigOutcome EHPCClient::updateQueueConfig(const UpdateQueueConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQueueConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQueueConfigOutcome(UpdateQueueConfigResult(outcome.result()));
	else
		return UpdateQueueConfigOutcome(outcome.error());
}

void EHPCClient::updateQueueConfigAsync(const UpdateQueueConfigRequest& request, const UpdateQueueConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQueueConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UpdateQueueConfigOutcomeCallable EHPCClient::updateQueueConfigCallable(const UpdateQueueConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQueueConfigOutcome()>>(
			[this, request]()
			{
			return this->updateQueueConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UpgradeClientOutcome EHPCClient::upgradeClient(const UpgradeClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClientOutcome(UpgradeClientResult(outcome.result()));
	else
		return UpgradeClientOutcome(outcome.error());
}

void EHPCClient::upgradeClientAsync(const UpgradeClientRequest& request, const UpgradeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UpgradeClientOutcomeCallable EHPCClient::upgradeClientCallable(const UpgradeClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClientOutcome()>>(
			[this, request]()
			{
			return this->upgradeClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

