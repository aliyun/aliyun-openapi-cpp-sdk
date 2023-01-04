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

#include <alibabacloud/computenestsupplier/ComputeNestSupplierClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

namespace
{
	const std::string SERVICE_NAME = "ComputeNestSupplier";
}

ComputeNestSupplierClient::ComputeNestSupplierClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ComputeNestSupplierClient::ComputeNestSupplierClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ComputeNestSupplierClient::ComputeNestSupplierClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ComputeNestSupplierClient::~ComputeNestSupplierClient()
{}

ComputeNestSupplierClient::CreateArtifactOutcome ComputeNestSupplierClient::createArtifact(const CreateArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateArtifactOutcome(CreateArtifactResult(outcome.result()));
	else
		return CreateArtifactOutcome(outcome.error());
}

void ComputeNestSupplierClient::createArtifactAsync(const CreateArtifactRequest& request, const CreateArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::CreateArtifactOutcomeCallable ComputeNestSupplierClient::createArtifactCallable(const CreateArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateArtifactOutcome()>>(
			[this, request]()
			{
			return this->createArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::DeleteArtifactOutcome ComputeNestSupplierClient::deleteArtifact(const DeleteArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteArtifactOutcome(DeleteArtifactResult(outcome.result()));
	else
		return DeleteArtifactOutcome(outcome.error());
}

void ComputeNestSupplierClient::deleteArtifactAsync(const DeleteArtifactRequest& request, const DeleteArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::DeleteArtifactOutcomeCallable ComputeNestSupplierClient::deleteArtifactCallable(const DeleteArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteArtifactOutcome()>>(
			[this, request]()
			{
			return this->deleteArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::GetArtifactOutcome ComputeNestSupplierClient::getArtifact(const GetArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetArtifactOutcome(GetArtifactResult(outcome.result()));
	else
		return GetArtifactOutcome(outcome.error());
}

void ComputeNestSupplierClient::getArtifactAsync(const GetArtifactRequest& request, const GetArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::GetArtifactOutcomeCallable ComputeNestSupplierClient::getArtifactCallable(const GetArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetArtifactOutcome()>>(
			[this, request]()
			{
			return this->getArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::GetArtifactRepositoryCredentialsOutcome ComputeNestSupplierClient::getArtifactRepositoryCredentials(const GetArtifactRepositoryCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetArtifactRepositoryCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetArtifactRepositoryCredentialsOutcome(GetArtifactRepositoryCredentialsResult(outcome.result()));
	else
		return GetArtifactRepositoryCredentialsOutcome(outcome.error());
}

void ComputeNestSupplierClient::getArtifactRepositoryCredentialsAsync(const GetArtifactRepositoryCredentialsRequest& request, const GetArtifactRepositoryCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getArtifactRepositoryCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::GetArtifactRepositoryCredentialsOutcomeCallable ComputeNestSupplierClient::getArtifactRepositoryCredentialsCallable(const GetArtifactRepositoryCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetArtifactRepositoryCredentialsOutcome()>>(
			[this, request]()
			{
			return this->getArtifactRepositoryCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::GetServiceInstanceOutcome ComputeNestSupplierClient::getServiceInstance(const GetServiceInstanceRequest &request) const
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

void ComputeNestSupplierClient::getServiceInstanceAsync(const GetServiceInstanceRequest& request, const GetServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::GetServiceInstanceOutcomeCallable ComputeNestSupplierClient::getServiceInstanceCallable(const GetServiceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceInstanceOutcome()>>(
			[this, request]()
			{
			return this->getServiceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::ListArtifactVersionsOutcome ComputeNestSupplierClient::listArtifactVersions(const ListArtifactVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListArtifactVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListArtifactVersionsOutcome(ListArtifactVersionsResult(outcome.result()));
	else
		return ListArtifactVersionsOutcome(outcome.error());
}

void ComputeNestSupplierClient::listArtifactVersionsAsync(const ListArtifactVersionsRequest& request, const ListArtifactVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listArtifactVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::ListArtifactVersionsOutcomeCallable ComputeNestSupplierClient::listArtifactVersionsCallable(const ListArtifactVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListArtifactVersionsOutcome()>>(
			[this, request]()
			{
			return this->listArtifactVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::ListArtifactsOutcome ComputeNestSupplierClient::listArtifacts(const ListArtifactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListArtifactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListArtifactsOutcome(ListArtifactsResult(outcome.result()));
	else
		return ListArtifactsOutcome(outcome.error());
}

void ComputeNestSupplierClient::listArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listArtifacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::ListArtifactsOutcomeCallable ComputeNestSupplierClient::listArtifactsCallable(const ListArtifactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListArtifactsOutcome()>>(
			[this, request]()
			{
			return this->listArtifacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::ListServiceInstancesOutcome ComputeNestSupplierClient::listServiceInstances(const ListServiceInstancesRequest &request) const
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

void ComputeNestSupplierClient::listServiceInstancesAsync(const ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::ListServiceInstancesOutcomeCallable ComputeNestSupplierClient::listServiceInstancesCallable(const ListServiceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceInstancesOutcome()>>(
			[this, request]()
			{
			return this->listServiceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::ReleaseArtifactOutcome ComputeNestSupplierClient::releaseArtifact(const ReleaseArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseArtifactOutcome(ReleaseArtifactResult(outcome.result()));
	else
		return ReleaseArtifactOutcome(outcome.error());
}

void ComputeNestSupplierClient::releaseArtifactAsync(const ReleaseArtifactRequest& request, const ReleaseArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::ReleaseArtifactOutcomeCallable ComputeNestSupplierClient::releaseArtifactCallable(const ReleaseArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseArtifactOutcome()>>(
			[this, request]()
			{
			return this->releaseArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ComputeNestSupplierClient::UpdateArtifactOutcome ComputeNestSupplierClient::updateArtifact(const UpdateArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateArtifactOutcome(UpdateArtifactResult(outcome.result()));
	else
		return UpdateArtifactOutcome(outcome.error());
}

void ComputeNestSupplierClient::updateArtifactAsync(const UpdateArtifactRequest& request, const UpdateArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ComputeNestSupplierClient::UpdateArtifactOutcomeCallable ComputeNestSupplierClient::updateArtifactCallable(const UpdateArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateArtifactOutcome()>>(
			[this, request]()
			{
			return this->updateArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

