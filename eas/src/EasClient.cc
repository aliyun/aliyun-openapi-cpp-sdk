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

#include <alibabacloud/eas/EasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

namespace
{
	const std::string SERVICE_NAME = "eas";
}

EasClient::EasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eas");
}

EasClient::EasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eas");
}

EasClient::EasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eas");
}

EasClient::~EasClient()
{}

EasClient::CommitServiceOutcome EasClient::commitService(const CommitServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitServiceOutcome(CommitServiceResult(outcome.result()));
	else
		return CommitServiceOutcome(outcome.error());
}

void EasClient::commitServiceAsync(const CommitServiceRequest& request, const CommitServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CommitServiceOutcomeCallable EasClient::commitServiceCallable(const CommitServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitServiceOutcome()>>(
			[this, request]()
			{
			return this->commitService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateBenchmarkTaskOutcome EasClient::createBenchmarkTask(const CreateBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBenchmarkTaskOutcome(CreateBenchmarkTaskResult(outcome.result()));
	else
		return CreateBenchmarkTaskOutcome(outcome.error());
}

void EasClient::createBenchmarkTaskAsync(const CreateBenchmarkTaskRequest& request, const CreateBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateBenchmarkTaskOutcomeCallable EasClient::createBenchmarkTaskCallable(const CreateBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->createBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateResourceOutcome EasClient::createResource(const CreateResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceOutcome(CreateResourceResult(outcome.result()));
	else
		return CreateResourceOutcome(outcome.error());
}

void EasClient::createResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateResourceOutcomeCallable EasClient::createResourceCallable(const CreateResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceOutcome()>>(
			[this, request]()
			{
			return this->createResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateResourceInstancesOutcome EasClient::createResourceInstances(const CreateResourceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceInstancesOutcome(CreateResourceInstancesResult(outcome.result()));
	else
		return CreateResourceInstancesOutcome(outcome.error());
}

void EasClient::createResourceInstancesAsync(const CreateResourceInstancesRequest& request, const CreateResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateResourceInstancesOutcomeCallable EasClient::createResourceInstancesCallable(const CreateResourceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceInstancesOutcome()>>(
			[this, request]()
			{
			return this->createResourceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateResourceLogOutcome EasClient::createResourceLog(const CreateResourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceLogOutcome(CreateResourceLogResult(outcome.result()));
	else
		return CreateResourceLogOutcome(outcome.error());
}

void EasClient::createResourceLogAsync(const CreateResourceLogRequest& request, const CreateResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateResourceLogOutcomeCallable EasClient::createResourceLogCallable(const CreateResourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceLogOutcome()>>(
			[this, request]()
			{
			return this->createResourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateServiceOutcome EasClient::createService(const CreateServiceRequest &request) const
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

void EasClient::createServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateServiceOutcomeCallable EasClient::createServiceCallable(const CreateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
			[this, request]()
			{
			return this->createService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateServiceAutoScalerOutcome EasClient::createServiceAutoScaler(const CreateServiceAutoScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceAutoScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceAutoScalerOutcome(CreateServiceAutoScalerResult(outcome.result()));
	else
		return CreateServiceAutoScalerOutcome(outcome.error());
}

void EasClient::createServiceAutoScalerAsync(const CreateServiceAutoScalerRequest& request, const CreateServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceAutoScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateServiceAutoScalerOutcomeCallable EasClient::createServiceAutoScalerCallable(const CreateServiceAutoScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceAutoScalerOutcome()>>(
			[this, request]()
			{
			return this->createServiceAutoScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateServiceCronScalerOutcome EasClient::createServiceCronScaler(const CreateServiceCronScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceCronScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceCronScalerOutcome(CreateServiceCronScalerResult(outcome.result()));
	else
		return CreateServiceCronScalerOutcome(outcome.error());
}

void EasClient::createServiceCronScalerAsync(const CreateServiceCronScalerRequest& request, const CreateServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceCronScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateServiceCronScalerOutcomeCallable EasClient::createServiceCronScalerCallable(const CreateServiceCronScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceCronScalerOutcome()>>(
			[this, request]()
			{
			return this->createServiceCronScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::CreateServiceMirrorOutcome EasClient::createServiceMirror(const CreateServiceMirrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceMirrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceMirrorOutcome(CreateServiceMirrorResult(outcome.result()));
	else
		return CreateServiceMirrorOutcome(outcome.error());
}

void EasClient::createServiceMirrorAsync(const CreateServiceMirrorRequest& request, const CreateServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceMirror(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::CreateServiceMirrorOutcomeCallable EasClient::createServiceMirrorCallable(const CreateServiceMirrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceMirrorOutcome()>>(
			[this, request]()
			{
			return this->createServiceMirror(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteBenchmarkTaskOutcome EasClient::deleteBenchmarkTask(const DeleteBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBenchmarkTaskOutcome(DeleteBenchmarkTaskResult(outcome.result()));
	else
		return DeleteBenchmarkTaskOutcome(outcome.error());
}

void EasClient::deleteBenchmarkTaskAsync(const DeleteBenchmarkTaskRequest& request, const DeleteBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteBenchmarkTaskOutcomeCallable EasClient::deleteBenchmarkTaskCallable(const DeleteBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteResourceOutcome EasClient::deleteResource(const DeleteResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceOutcome(DeleteResourceResult(outcome.result()));
	else
		return DeleteResourceOutcome(outcome.error());
}

void EasClient::deleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteResourceOutcomeCallable EasClient::deleteResourceCallable(const DeleteResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteResourceDLinkOutcome EasClient::deleteResourceDLink(const DeleteResourceDLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceDLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceDLinkOutcome(DeleteResourceDLinkResult(outcome.result()));
	else
		return DeleteResourceDLinkOutcome(outcome.error());
}

void EasClient::deleteResourceDLinkAsync(const DeleteResourceDLinkRequest& request, const DeleteResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceDLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteResourceDLinkOutcomeCallable EasClient::deleteResourceDLinkCallable(const DeleteResourceDLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceDLinkOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceDLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteResourceInstancesOutcome EasClient::deleteResourceInstances(const DeleteResourceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceInstancesOutcome(DeleteResourceInstancesResult(outcome.result()));
	else
		return DeleteResourceInstancesOutcome(outcome.error());
}

void EasClient::deleteResourceInstancesAsync(const DeleteResourceInstancesRequest& request, const DeleteResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteResourceInstancesOutcomeCallable EasClient::deleteResourceInstancesCallable(const DeleteResourceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteResourceLogOutcome EasClient::deleteResourceLog(const DeleteResourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceLogOutcome(DeleteResourceLogResult(outcome.result()));
	else
		return DeleteResourceLogOutcome(outcome.error());
}

void EasClient::deleteResourceLogAsync(const DeleteResourceLogRequest& request, const DeleteResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteResourceLogOutcomeCallable EasClient::deleteResourceLogCallable(const DeleteResourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceLogOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceOutcome EasClient::deleteService(const DeleteServiceRequest &request) const
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

void EasClient::deleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceOutcomeCallable EasClient::deleteServiceCallable(const DeleteServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceAutoScalerOutcome EasClient::deleteServiceAutoScaler(const DeleteServiceAutoScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceAutoScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceAutoScalerOutcome(DeleteServiceAutoScalerResult(outcome.result()));
	else
		return DeleteServiceAutoScalerOutcome(outcome.error());
}

void EasClient::deleteServiceAutoScalerAsync(const DeleteServiceAutoScalerRequest& request, const DeleteServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceAutoScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceAutoScalerOutcomeCallable EasClient::deleteServiceAutoScalerCallable(const DeleteServiceAutoScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceAutoScalerOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceAutoScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceCronScalerOutcome EasClient::deleteServiceCronScaler(const DeleteServiceCronScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceCronScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceCronScalerOutcome(DeleteServiceCronScalerResult(outcome.result()));
	else
		return DeleteServiceCronScalerOutcome(outcome.error());
}

void EasClient::deleteServiceCronScalerAsync(const DeleteServiceCronScalerRequest& request, const DeleteServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceCronScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceCronScalerOutcomeCallable EasClient::deleteServiceCronScalerCallable(const DeleteServiceCronScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceCronScalerOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceCronScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceInstancesOutcome EasClient::deleteServiceInstances(const DeleteServiceInstancesRequest &request) const
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

void EasClient::deleteServiceInstancesAsync(const DeleteServiceInstancesRequest& request, const DeleteServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceInstancesOutcomeCallable EasClient::deleteServiceInstancesCallable(const DeleteServiceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceLabelOutcome EasClient::deleteServiceLabel(const DeleteServiceLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceLabelOutcome(DeleteServiceLabelResult(outcome.result()));
	else
		return DeleteServiceLabelOutcome(outcome.error());
}

void EasClient::deleteServiceLabelAsync(const DeleteServiceLabelRequest& request, const DeleteServiceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceLabelOutcomeCallable EasClient::deleteServiceLabelCallable(const DeleteServiceLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DeleteServiceMirrorOutcome EasClient::deleteServiceMirror(const DeleteServiceMirrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceMirrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceMirrorOutcome(DeleteServiceMirrorResult(outcome.result()));
	else
		return DeleteServiceMirrorOutcome(outcome.error());
}

void EasClient::deleteServiceMirrorAsync(const DeleteServiceMirrorRequest& request, const DeleteServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceMirror(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DeleteServiceMirrorOutcomeCallable EasClient::deleteServiceMirrorCallable(const DeleteServiceMirrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceMirrorOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceMirror(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeBenchmarkTaskOutcome EasClient::describeBenchmarkTask(const DescribeBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBenchmarkTaskOutcome(DescribeBenchmarkTaskResult(outcome.result()));
	else
		return DescribeBenchmarkTaskOutcome(outcome.error());
}

void EasClient::describeBenchmarkTaskAsync(const DescribeBenchmarkTaskRequest& request, const DescribeBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeBenchmarkTaskOutcomeCallable EasClient::describeBenchmarkTaskCallable(const DescribeBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->describeBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeBenchmarkTaskReportOutcome EasClient::describeBenchmarkTaskReport(const DescribeBenchmarkTaskReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBenchmarkTaskReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBenchmarkTaskReportOutcome(DescribeBenchmarkTaskReportResult(outcome.result()));
	else
		return DescribeBenchmarkTaskReportOutcome(outcome.error());
}

void EasClient::describeBenchmarkTaskReportAsync(const DescribeBenchmarkTaskReportRequest& request, const DescribeBenchmarkTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBenchmarkTaskReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeBenchmarkTaskReportOutcomeCallable EasClient::describeBenchmarkTaskReportCallable(const DescribeBenchmarkTaskReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBenchmarkTaskReportOutcome()>>(
			[this, request]()
			{
			return this->describeBenchmarkTaskReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeGroupOutcome EasClient::describeGroup(const DescribeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupOutcome(DescribeGroupResult(outcome.result()));
	else
		return DescribeGroupOutcome(outcome.error());
}

void EasClient::describeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeGroupOutcomeCallable EasClient::describeGroupCallable(const DescribeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupOutcome()>>(
			[this, request]()
			{
			return this->describeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeResourceOutcome EasClient::describeResource(const DescribeResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceOutcome(DescribeResourceResult(outcome.result()));
	else
		return DescribeResourceOutcome(outcome.error());
}

void EasClient::describeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeResourceOutcomeCallable EasClient::describeResourceCallable(const DescribeResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceOutcome()>>(
			[this, request]()
			{
			return this->describeResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeResourceDLinkOutcome EasClient::describeResourceDLink(const DescribeResourceDLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceDLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceDLinkOutcome(DescribeResourceDLinkResult(outcome.result()));
	else
		return DescribeResourceDLinkOutcome(outcome.error());
}

void EasClient::describeResourceDLinkAsync(const DescribeResourceDLinkRequest& request, const DescribeResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceDLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeResourceDLinkOutcomeCallable EasClient::describeResourceDLinkCallable(const DescribeResourceDLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceDLinkOutcome()>>(
			[this, request]()
			{
			return this->describeResourceDLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeResourceLogOutcome EasClient::describeResourceLog(const DescribeResourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceLogOutcome(DescribeResourceLogResult(outcome.result()));
	else
		return DescribeResourceLogOutcome(outcome.error());
}

void EasClient::describeResourceLogAsync(const DescribeResourceLogRequest& request, const DescribeResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeResourceLogOutcomeCallable EasClient::describeResourceLogCallable(const DescribeResourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceLogOutcome()>>(
			[this, request]()
			{
			return this->describeResourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceOutcome EasClient::describeService(const DescribeServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceOutcome(DescribeServiceResult(outcome.result()));
	else
		return DescribeServiceOutcome(outcome.error());
}

void EasClient::describeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceOutcomeCallable EasClient::describeServiceCallable(const DescribeServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceOutcome()>>(
			[this, request]()
			{
			return this->describeService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceAutoScalerOutcome EasClient::describeServiceAutoScaler(const DescribeServiceAutoScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceAutoScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceAutoScalerOutcome(DescribeServiceAutoScalerResult(outcome.result()));
	else
		return DescribeServiceAutoScalerOutcome(outcome.error());
}

void EasClient::describeServiceAutoScalerAsync(const DescribeServiceAutoScalerRequest& request, const DescribeServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceAutoScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceAutoScalerOutcomeCallable EasClient::describeServiceAutoScalerCallable(const DescribeServiceAutoScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceAutoScalerOutcome()>>(
			[this, request]()
			{
			return this->describeServiceAutoScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceCronScalerOutcome EasClient::describeServiceCronScaler(const DescribeServiceCronScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceCronScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceCronScalerOutcome(DescribeServiceCronScalerResult(outcome.result()));
	else
		return DescribeServiceCronScalerOutcome(outcome.error());
}

void EasClient::describeServiceCronScalerAsync(const DescribeServiceCronScalerRequest& request, const DescribeServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceCronScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceCronScalerOutcomeCallable EasClient::describeServiceCronScalerCallable(const DescribeServiceCronScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceCronScalerOutcome()>>(
			[this, request]()
			{
			return this->describeServiceCronScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceEventOutcome EasClient::describeServiceEvent(const DescribeServiceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceEventOutcome(DescribeServiceEventResult(outcome.result()));
	else
		return DescribeServiceEventOutcome(outcome.error());
}

void EasClient::describeServiceEventAsync(const DescribeServiceEventRequest& request, const DescribeServiceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceEventOutcomeCallable EasClient::describeServiceEventCallable(const DescribeServiceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceEventOutcome()>>(
			[this, request]()
			{
			return this->describeServiceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceLogOutcome EasClient::describeServiceLog(const DescribeServiceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceLogOutcome(DescribeServiceLogResult(outcome.result()));
	else
		return DescribeServiceLogOutcome(outcome.error());
}

void EasClient::describeServiceLogAsync(const DescribeServiceLogRequest& request, const DescribeServiceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceLogOutcomeCallable EasClient::describeServiceLogCallable(const DescribeServiceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceLogOutcome()>>(
			[this, request]()
			{
			return this->describeServiceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DescribeServiceMirrorOutcome EasClient::describeServiceMirror(const DescribeServiceMirrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceMirrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceMirrorOutcome(DescribeServiceMirrorResult(outcome.result()));
	else
		return DescribeServiceMirrorOutcome(outcome.error());
}

void EasClient::describeServiceMirrorAsync(const DescribeServiceMirrorRequest& request, const DescribeServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceMirror(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DescribeServiceMirrorOutcomeCallable EasClient::describeServiceMirrorCallable(const DescribeServiceMirrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceMirrorOutcome()>>(
			[this, request]()
			{
			return this->describeServiceMirror(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::DevelopServiceOutcome EasClient::developService(const DevelopServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DevelopServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DevelopServiceOutcome(DevelopServiceResult(outcome.result()));
	else
		return DevelopServiceOutcome(outcome.error());
}

void EasClient::developServiceAsync(const DevelopServiceRequest& request, const DevelopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, developService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::DevelopServiceOutcomeCallable EasClient::developServiceCallable(const DevelopServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DevelopServiceOutcome()>>(
			[this, request]()
			{
			return this->developService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListBenchmarkTaskOutcome EasClient::listBenchmarkTask(const ListBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBenchmarkTaskOutcome(ListBenchmarkTaskResult(outcome.result()));
	else
		return ListBenchmarkTaskOutcome(outcome.error());
}

void EasClient::listBenchmarkTaskAsync(const ListBenchmarkTaskRequest& request, const ListBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListBenchmarkTaskOutcomeCallable EasClient::listBenchmarkTaskCallable(const ListBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->listBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListGroupsOutcome EasClient::listGroups(const ListGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsOutcome(ListGroupsResult(outcome.result()));
	else
		return ListGroupsOutcome(outcome.error());
}

void EasClient::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListGroupsOutcomeCallable EasClient::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListResourceInstanceWorkerOutcome EasClient::listResourceInstanceWorker(const ListResourceInstanceWorkerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceInstanceWorkerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceInstanceWorkerOutcome(ListResourceInstanceWorkerResult(outcome.result()));
	else
		return ListResourceInstanceWorkerOutcome(outcome.error());
}

void EasClient::listResourceInstanceWorkerAsync(const ListResourceInstanceWorkerRequest& request, const ListResourceInstanceWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceInstanceWorker(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListResourceInstanceWorkerOutcomeCallable EasClient::listResourceInstanceWorkerCallable(const ListResourceInstanceWorkerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceInstanceWorkerOutcome()>>(
			[this, request]()
			{
			return this->listResourceInstanceWorker(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListResourceInstancesOutcome EasClient::listResourceInstances(const ListResourceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceInstancesOutcome(ListResourceInstancesResult(outcome.result()));
	else
		return ListResourceInstancesOutcome(outcome.error());
}

void EasClient::listResourceInstancesAsync(const ListResourceInstancesRequest& request, const ListResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListResourceInstancesOutcomeCallable EasClient::listResourceInstancesCallable(const ListResourceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceInstancesOutcome()>>(
			[this, request]()
			{
			return this->listResourceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListResourceServicesOutcome EasClient::listResourceServices(const ListResourceServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceServicesOutcome(ListResourceServicesResult(outcome.result()));
	else
		return ListResourceServicesOutcome(outcome.error());
}

void EasClient::listResourceServicesAsync(const ListResourceServicesRequest& request, const ListResourceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListResourceServicesOutcomeCallable EasClient::listResourceServicesCallable(const ListResourceServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceServicesOutcome()>>(
			[this, request]()
			{
			return this->listResourceServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListResourcesOutcome EasClient::listResources(const ListResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcesOutcome(ListResourcesResult(outcome.result()));
	else
		return ListResourcesOutcome(outcome.error());
}

void EasClient::listResourcesAsync(const ListResourcesRequest& request, const ListResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListResourcesOutcomeCallable EasClient::listResourcesCallable(const ListResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcesOutcome()>>(
			[this, request]()
			{
			return this->listResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListServiceInstancesOutcome EasClient::listServiceInstances(const ListServiceInstancesRequest &request) const
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

void EasClient::listServiceInstancesAsync(const ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListServiceInstancesOutcomeCallable EasClient::listServiceInstancesCallable(const ListServiceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceInstancesOutcome()>>(
			[this, request]()
			{
			return this->listServiceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListServiceVersionsOutcome EasClient::listServiceVersions(const ListServiceVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceVersionsOutcome(ListServiceVersionsResult(outcome.result()));
	else
		return ListServiceVersionsOutcome(outcome.error());
}

void EasClient::listServiceVersionsAsync(const ListServiceVersionsRequest& request, const ListServiceVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListServiceVersionsOutcomeCallable EasClient::listServiceVersionsCallable(const ListServiceVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceVersionsOutcome()>>(
			[this, request]()
			{
			return this->listServiceVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ListServicesOutcome EasClient::listServices(const ListServicesRequest &request) const
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

void EasClient::listServicesAsync(const ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ListServicesOutcomeCallable EasClient::listServicesCallable(const ListServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServicesOutcome()>>(
			[this, request]()
			{
			return this->listServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::ReleaseServiceOutcome EasClient::releaseService(const ReleaseServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseServiceOutcome(ReleaseServiceResult(outcome.result()));
	else
		return ReleaseServiceOutcome(outcome.error());
}

void EasClient::releaseServiceAsync(const ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::ReleaseServiceOutcomeCallable EasClient::releaseServiceCallable(const ReleaseServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseServiceOutcome()>>(
			[this, request]()
			{
			return this->releaseService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::StartBenchmarkTaskOutcome EasClient::startBenchmarkTask(const StartBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBenchmarkTaskOutcome(StartBenchmarkTaskResult(outcome.result()));
	else
		return StartBenchmarkTaskOutcome(outcome.error());
}

void EasClient::startBenchmarkTaskAsync(const StartBenchmarkTaskRequest& request, const StartBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::StartBenchmarkTaskOutcomeCallable EasClient::startBenchmarkTaskCallable(const StartBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->startBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::StartServiceOutcome EasClient::startService(const StartServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartServiceOutcome(StartServiceResult(outcome.result()));
	else
		return StartServiceOutcome(outcome.error());
}

void EasClient::startServiceAsync(const StartServiceRequest& request, const StartServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::StartServiceOutcomeCallable EasClient::startServiceCallable(const StartServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartServiceOutcome()>>(
			[this, request]()
			{
			return this->startService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::StopBenchmarkTaskOutcome EasClient::stopBenchmarkTask(const StopBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopBenchmarkTaskOutcome(StopBenchmarkTaskResult(outcome.result()));
	else
		return StopBenchmarkTaskOutcome(outcome.error());
}

void EasClient::stopBenchmarkTaskAsync(const StopBenchmarkTaskRequest& request, const StopBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::StopBenchmarkTaskOutcomeCallable EasClient::stopBenchmarkTaskCallable(const StopBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->stopBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::StopServiceOutcome EasClient::stopService(const StopServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopServiceOutcome(StopServiceResult(outcome.result()));
	else
		return StopServiceOutcome(outcome.error());
}

void EasClient::stopServiceAsync(const StopServiceRequest& request, const StopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::StopServiceOutcomeCallable EasClient::stopServiceCallable(const StopServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopServiceOutcome()>>(
			[this, request]()
			{
			return this->stopService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateBenchmarkTaskOutcome EasClient::updateBenchmarkTask(const UpdateBenchmarkTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBenchmarkTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBenchmarkTaskOutcome(UpdateBenchmarkTaskResult(outcome.result()));
	else
		return UpdateBenchmarkTaskOutcome(outcome.error());
}

void EasClient::updateBenchmarkTaskAsync(const UpdateBenchmarkTaskRequest& request, const UpdateBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBenchmarkTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateBenchmarkTaskOutcomeCallable EasClient::updateBenchmarkTaskCallable(const UpdateBenchmarkTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBenchmarkTaskOutcome()>>(
			[this, request]()
			{
			return this->updateBenchmarkTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateResourceOutcome EasClient::updateResource(const UpdateResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceOutcome(UpdateResourceResult(outcome.result()));
	else
		return UpdateResourceOutcome(outcome.error());
}

void EasClient::updateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateResourceOutcomeCallable EasClient::updateResourceCallable(const UpdateResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceOutcome()>>(
			[this, request]()
			{
			return this->updateResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateResourceDLinkOutcome EasClient::updateResourceDLink(const UpdateResourceDLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceDLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceDLinkOutcome(UpdateResourceDLinkResult(outcome.result()));
	else
		return UpdateResourceDLinkOutcome(outcome.error());
}

void EasClient::updateResourceDLinkAsync(const UpdateResourceDLinkRequest& request, const UpdateResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceDLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateResourceDLinkOutcomeCallable EasClient::updateResourceDLinkCallable(const UpdateResourceDLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceDLinkOutcome()>>(
			[this, request]()
			{
			return this->updateResourceDLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateResourceInstanceOutcome EasClient::updateResourceInstance(const UpdateResourceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceInstanceOutcome(UpdateResourceInstanceResult(outcome.result()));
	else
		return UpdateResourceInstanceOutcome(outcome.error());
}

void EasClient::updateResourceInstanceAsync(const UpdateResourceInstanceRequest& request, const UpdateResourceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateResourceInstanceOutcomeCallable EasClient::updateResourceInstanceCallable(const UpdateResourceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateResourceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceOutcome EasClient::updateService(const UpdateServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceOutcome(UpdateServiceResult(outcome.result()));
	else
		return UpdateServiceOutcome(outcome.error());
}

void EasClient::updateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceOutcomeCallable EasClient::updateServiceCallable(const UpdateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
			[this, request]()
			{
			return this->updateService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceAutoScalerOutcome EasClient::updateServiceAutoScaler(const UpdateServiceAutoScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceAutoScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceAutoScalerOutcome(UpdateServiceAutoScalerResult(outcome.result()));
	else
		return UpdateServiceAutoScalerOutcome(outcome.error());
}

void EasClient::updateServiceAutoScalerAsync(const UpdateServiceAutoScalerRequest& request, const UpdateServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceAutoScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceAutoScalerOutcomeCallable EasClient::updateServiceAutoScalerCallable(const UpdateServiceAutoScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceAutoScalerOutcome()>>(
			[this, request]()
			{
			return this->updateServiceAutoScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceCronScalerOutcome EasClient::updateServiceCronScaler(const UpdateServiceCronScalerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceCronScalerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceCronScalerOutcome(UpdateServiceCronScalerResult(outcome.result()));
	else
		return UpdateServiceCronScalerOutcome(outcome.error());
}

void EasClient::updateServiceCronScalerAsync(const UpdateServiceCronScalerRequest& request, const UpdateServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceCronScaler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceCronScalerOutcomeCallable EasClient::updateServiceCronScalerCallable(const UpdateServiceCronScalerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceCronScalerOutcome()>>(
			[this, request]()
			{
			return this->updateServiceCronScaler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceLabelOutcome EasClient::updateServiceLabel(const UpdateServiceLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceLabelOutcome(UpdateServiceLabelResult(outcome.result()));
	else
		return UpdateServiceLabelOutcome(outcome.error());
}

void EasClient::updateServiceLabelAsync(const UpdateServiceLabelRequest& request, const UpdateServiceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceLabelOutcomeCallable EasClient::updateServiceLabelCallable(const UpdateServiceLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceLabelOutcome()>>(
			[this, request]()
			{
			return this->updateServiceLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceMirrorOutcome EasClient::updateServiceMirror(const UpdateServiceMirrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceMirrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceMirrorOutcome(UpdateServiceMirrorResult(outcome.result()));
	else
		return UpdateServiceMirrorOutcome(outcome.error());
}

void EasClient::updateServiceMirrorAsync(const UpdateServiceMirrorRequest& request, const UpdateServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceMirror(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceMirrorOutcomeCallable EasClient::updateServiceMirrorCallable(const UpdateServiceMirrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceMirrorOutcome()>>(
			[this, request]()
			{
			return this->updateServiceMirror(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceSafetyLockOutcome EasClient::updateServiceSafetyLock(const UpdateServiceSafetyLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceSafetyLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceSafetyLockOutcome(UpdateServiceSafetyLockResult(outcome.result()));
	else
		return UpdateServiceSafetyLockOutcome(outcome.error());
}

void EasClient::updateServiceSafetyLockAsync(const UpdateServiceSafetyLockRequest& request, const UpdateServiceSafetyLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceSafetyLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceSafetyLockOutcomeCallable EasClient::updateServiceSafetyLockCallable(const UpdateServiceSafetyLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceSafetyLockOutcome()>>(
			[this, request]()
			{
			return this->updateServiceSafetyLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EasClient::UpdateServiceVersionOutcome EasClient::updateServiceVersion(const UpdateServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceVersionOutcome(UpdateServiceVersionResult(outcome.result()));
	else
		return UpdateServiceVersionOutcome(outcome.error());
}

void EasClient::updateServiceVersionAsync(const UpdateServiceVersionRequest& request, const UpdateServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EasClient::UpdateServiceVersionOutcomeCallable EasClient::updateServiceVersionCallable(const UpdateServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->updateServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

