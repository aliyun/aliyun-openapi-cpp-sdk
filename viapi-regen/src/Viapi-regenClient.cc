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

#include <alibabacloud/viapi-regen/Viapi_regenClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

namespace
{
	const std::string SERVICE_NAME = "viapi-regen";
}

Viapi_regenClient::Viapi_regenClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "selflearning");
}

Viapi_regenClient::Viapi_regenClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "selflearning");
}

Viapi_regenClient::Viapi_regenClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "selflearning");
}

Viapi_regenClient::~Viapi_regenClient()
{}

Viapi_regenClient::CheckDatasetOssBucketCORSOutcome Viapi_regenClient::checkDatasetOssBucketCORS(const CheckDatasetOssBucketCORSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDatasetOssBucketCORSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDatasetOssBucketCORSOutcome(CheckDatasetOssBucketCORSResult(outcome.result()));
	else
		return CheckDatasetOssBucketCORSOutcome(outcome.error());
}

void Viapi_regenClient::checkDatasetOssBucketCORSAsync(const CheckDatasetOssBucketCORSRequest& request, const CheckDatasetOssBucketCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDatasetOssBucketCORS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CheckDatasetOssBucketCORSOutcomeCallable Viapi_regenClient::checkDatasetOssBucketCORSCallable(const CheckDatasetOssBucketCORSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDatasetOssBucketCORSOutcome()>>(
			[this, request]()
			{
			return this->checkDatasetOssBucketCORS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateDatasetOutcome Viapi_regenClient::createDataset(const CreateDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasetOutcome(CreateDatasetResult(outcome.result()));
	else
		return CreateDatasetOutcome(outcome.error());
}

void Viapi_regenClient::createDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateDatasetOutcomeCallable Viapi_regenClient::createDatasetCallable(const CreateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
			[this, request]()
			{
			return this->createDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateLabelsetOutcome Viapi_regenClient::createLabelset(const CreateLabelsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLabelsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLabelsetOutcome(CreateLabelsetResult(outcome.result()));
	else
		return CreateLabelsetOutcome(outcome.error());
}

void Viapi_regenClient::createLabelsetAsync(const CreateLabelsetRequest& request, const CreateLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLabelset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateLabelsetOutcomeCallable Viapi_regenClient::createLabelsetCallable(const CreateLabelsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLabelsetOutcome()>>(
			[this, request]()
			{
			return this->createLabelset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateServiceOutcome Viapi_regenClient::createService(const CreateServiceRequest &request) const
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

void Viapi_regenClient::createServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateServiceOutcomeCallable Viapi_regenClient::createServiceCallable(const CreateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
			[this, request]()
			{
			return this->createService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateTagTaskOutcome Viapi_regenClient::createTagTask(const CreateTagTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagTaskOutcome(CreateTagTaskResult(outcome.result()));
	else
		return CreateTagTaskOutcome(outcome.error());
}

void Viapi_regenClient::createTagTaskAsync(const CreateTagTaskRequest& request, const CreateTagTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTagTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateTagTaskOutcomeCallable Viapi_regenClient::createTagTaskCallable(const CreateTagTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagTaskOutcome()>>(
			[this, request]()
			{
			return this->createTagTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateTrainTaskOutcome Viapi_regenClient::createTrainTask(const CreateTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainTaskOutcome(CreateTrainTaskResult(outcome.result()));
	else
		return CreateTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::createTrainTaskAsync(const CreateTrainTaskRequest& request, const CreateTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateTrainTaskOutcomeCallable Viapi_regenClient::createTrainTaskCallable(const CreateTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->createTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CreateWorkspaceOutcome Viapi_regenClient::createWorkspace(const CreateWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkspaceOutcome(CreateWorkspaceResult(outcome.result()));
	else
		return CreateWorkspaceOutcome(outcome.error());
}

void Viapi_regenClient::createWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CreateWorkspaceOutcomeCallable Viapi_regenClient::createWorkspaceCallable(const CreateWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->createWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CustomizeClassifyImageOutcome Viapi_regenClient::customizeClassifyImage(const CustomizeClassifyImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CustomizeClassifyImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CustomizeClassifyImageOutcome(CustomizeClassifyImageResult(outcome.result()));
	else
		return CustomizeClassifyImageOutcome(outcome.error());
}

void Viapi_regenClient::customizeClassifyImageAsync(const CustomizeClassifyImageRequest& request, const CustomizeClassifyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, customizeClassifyImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CustomizeClassifyImageOutcomeCallable Viapi_regenClient::customizeClassifyImageCallable(const CustomizeClassifyImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CustomizeClassifyImageOutcome()>>(
			[this, request]()
			{
			return this->customizeClassifyImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CustomizeDetectImageOutcome Viapi_regenClient::customizeDetectImage(const CustomizeDetectImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CustomizeDetectImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CustomizeDetectImageOutcome(CustomizeDetectImageResult(outcome.result()));
	else
		return CustomizeDetectImageOutcome(outcome.error());
}

void Viapi_regenClient::customizeDetectImageAsync(const CustomizeDetectImageRequest& request, const CustomizeDetectImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, customizeDetectImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CustomizeDetectImageOutcomeCallable Viapi_regenClient::customizeDetectImageCallable(const CustomizeDetectImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CustomizeDetectImageOutcome()>>(
			[this, request]()
			{
			return this->customizeDetectImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::CustomizeInstanceSegmentImageOutcome Viapi_regenClient::customizeInstanceSegmentImage(const CustomizeInstanceSegmentImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CustomizeInstanceSegmentImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CustomizeInstanceSegmentImageOutcome(CustomizeInstanceSegmentImageResult(outcome.result()));
	else
		return CustomizeInstanceSegmentImageOutcome(outcome.error());
}

void Viapi_regenClient::customizeInstanceSegmentImageAsync(const CustomizeInstanceSegmentImageRequest& request, const CustomizeInstanceSegmentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, customizeInstanceSegmentImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::CustomizeInstanceSegmentImageOutcomeCallable Viapi_regenClient::customizeInstanceSegmentImageCallable(const CustomizeInstanceSegmentImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CustomizeInstanceSegmentImageOutcome()>>(
			[this, request]()
			{
			return this->customizeInstanceSegmentImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DebugServiceOutcome Viapi_regenClient::debugService(const DebugServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugServiceOutcome(DebugServiceResult(outcome.result()));
	else
		return DebugServiceOutcome(outcome.error());
}

void Viapi_regenClient::debugServiceAsync(const DebugServiceRequest& request, const DebugServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DebugServiceOutcomeCallable Viapi_regenClient::debugServiceCallable(const DebugServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugServiceOutcome()>>(
			[this, request]()
			{
			return this->debugService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteDataReflowDataOutcome Viapi_regenClient::deleteDataReflowData(const DeleteDataReflowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataReflowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataReflowDataOutcome(DeleteDataReflowDataResult(outcome.result()));
	else
		return DeleteDataReflowDataOutcome(outcome.error());
}

void Viapi_regenClient::deleteDataReflowDataAsync(const DeleteDataReflowDataRequest& request, const DeleteDataReflowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataReflowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteDataReflowDataOutcomeCallable Viapi_regenClient::deleteDataReflowDataCallable(const DeleteDataReflowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataReflowDataOutcome()>>(
			[this, request]()
			{
			return this->deleteDataReflowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteDatasetOutcome Viapi_regenClient::deleteDataset(const DeleteDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasetOutcome(DeleteDatasetResult(outcome.result()));
	else
		return DeleteDatasetOutcome(outcome.error());
}

void Viapi_regenClient::deleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteDatasetOutcomeCallable Viapi_regenClient::deleteDatasetCallable(const DeleteDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteLabelsetOutcome Viapi_regenClient::deleteLabelset(const DeleteLabelsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelsetOutcome(DeleteLabelsetResult(outcome.result()));
	else
		return DeleteLabelsetOutcome(outcome.error());
}

void Viapi_regenClient::deleteLabelsetAsync(const DeleteLabelsetRequest& request, const DeleteLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabelset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteLabelsetOutcomeCallable Viapi_regenClient::deleteLabelsetCallable(const DeleteLabelsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelsetOutcome()>>(
			[this, request]()
			{
			return this->deleteLabelset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteLabelsetDataOutcome Viapi_regenClient::deleteLabelsetData(const DeleteLabelsetDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelsetDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelsetDataOutcome(DeleteLabelsetDataResult(outcome.result()));
	else
		return DeleteLabelsetDataOutcome(outcome.error());
}

void Viapi_regenClient::deleteLabelsetDataAsync(const DeleteLabelsetDataRequest& request, const DeleteLabelsetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabelsetData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteLabelsetDataOutcomeCallable Viapi_regenClient::deleteLabelsetDataCallable(const DeleteLabelsetDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelsetDataOutcome()>>(
			[this, request]()
			{
			return this->deleteLabelsetData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteServiceOutcome Viapi_regenClient::deleteService(const DeleteServiceRequest &request) const
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

void Viapi_regenClient::deleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteServiceOutcomeCallable Viapi_regenClient::deleteServiceCallable(const DeleteServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteTrainTaskOutcome Viapi_regenClient::deleteTrainTask(const DeleteTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrainTaskOutcome(DeleteTrainTaskResult(outcome.result()));
	else
		return DeleteTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::deleteTrainTaskAsync(const DeleteTrainTaskRequest& request, const DeleteTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteTrainTaskOutcomeCallable Viapi_regenClient::deleteTrainTaskCallable(const DeleteTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DeleteWorkspaceOutcome Viapi_regenClient::deleteWorkspace(const DeleteWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkspaceOutcome(DeleteWorkspaceResult(outcome.result()));
	else
		return DeleteWorkspaceOutcome(outcome.error());
}

void Viapi_regenClient::deleteWorkspaceAsync(const DeleteWorkspaceRequest& request, const DeleteWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DeleteWorkspaceOutcomeCallable Viapi_regenClient::deleteWorkspaceCallable(const DeleteWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DisableDataReflowOutcome Viapi_regenClient::disableDataReflow(const DisableDataReflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDataReflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDataReflowOutcome(DisableDataReflowResult(outcome.result()));
	else
		return DisableDataReflowOutcome(outcome.error());
}

void Viapi_regenClient::disableDataReflowAsync(const DisableDataReflowRequest& request, const DisableDataReflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDataReflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DisableDataReflowOutcomeCallable Viapi_regenClient::disableDataReflowCallable(const DisableDataReflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDataReflowOutcome()>>(
			[this, request]()
			{
			return this->disableDataReflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DownloadDatasetOutcome Viapi_regenClient::downloadDataset(const DownloadDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadDatasetOutcome(DownloadDatasetResult(outcome.result()));
	else
		return DownloadDatasetOutcome(outcome.error());
}

void Viapi_regenClient::downloadDatasetAsync(const DownloadDatasetRequest& request, const DownloadDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DownloadDatasetOutcomeCallable Viapi_regenClient::downloadDatasetCallable(const DownloadDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadDatasetOutcome()>>(
			[this, request]()
			{
			return this->downloadDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DownloadFileNameListOutcome Viapi_regenClient::downloadFileNameList(const DownloadFileNameListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadFileNameListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadFileNameListOutcome(DownloadFileNameListResult(outcome.result()));
	else
		return DownloadFileNameListOutcome(outcome.error());
}

void Viapi_regenClient::downloadFileNameListAsync(const DownloadFileNameListRequest& request, const DownloadFileNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadFileNameList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DownloadFileNameListOutcomeCallable Viapi_regenClient::downloadFileNameListCallable(const DownloadFileNameListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadFileNameListOutcome()>>(
			[this, request]()
			{
			return this->downloadFileNameList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::DownloadLabelFileOutcome Viapi_regenClient::downloadLabelFile(const DownloadLabelFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadLabelFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadLabelFileOutcome(DownloadLabelFileResult(outcome.result()));
	else
		return DownloadLabelFileOutcome(outcome.error());
}

void Viapi_regenClient::downloadLabelFileAsync(const DownloadLabelFileRequest& request, const DownloadLabelFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadLabelFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::DownloadLabelFileOutcomeCallable Viapi_regenClient::downloadLabelFileCallable(const DownloadLabelFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadLabelFileOutcome()>>(
			[this, request]()
			{
			return this->downloadLabelFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::EnableDataReflowOutcome Viapi_regenClient::enableDataReflow(const EnableDataReflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDataReflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDataReflowOutcome(EnableDataReflowResult(outcome.result()));
	else
		return EnableDataReflowOutcome(outcome.error());
}

void Viapi_regenClient::enableDataReflowAsync(const EnableDataReflowRequest& request, const EnableDataReflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDataReflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::EnableDataReflowOutcomeCallable Viapi_regenClient::enableDataReflowCallable(const EnableDataReflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDataReflowOutcome()>>(
			[this, request]()
			{
			return this->enableDataReflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ExportDataReflowDataListOutcome Viapi_regenClient::exportDataReflowDataList(const ExportDataReflowDataListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDataReflowDataListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDataReflowDataListOutcome(ExportDataReflowDataListResult(outcome.result()));
	else
		return ExportDataReflowDataListOutcome(outcome.error());
}

void Viapi_regenClient::exportDataReflowDataListAsync(const ExportDataReflowDataListRequest& request, const ExportDataReflowDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDataReflowDataList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ExportDataReflowDataListOutcomeCallable Viapi_regenClient::exportDataReflowDataListCallable(const ExportDataReflowDataListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDataReflowDataListOutcome()>>(
			[this, request]()
			{
			return this->exportDataReflowDataList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetDatasetOutcome Viapi_regenClient::getDataset(const GetDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasetOutcome(GetDatasetResult(outcome.result()));
	else
		return GetDatasetOutcome(outcome.error());
}

void Viapi_regenClient::getDatasetAsync(const GetDatasetRequest& request, const GetDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetDatasetOutcomeCallable Viapi_regenClient::getDatasetCallable(const GetDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasetOutcome()>>(
			[this, request]()
			{
			return this->getDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetDiffCountLabelsetAndDatasetOutcome Viapi_regenClient::getDiffCountLabelsetAndDataset(const GetDiffCountLabelsetAndDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiffCountLabelsetAndDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiffCountLabelsetAndDatasetOutcome(GetDiffCountLabelsetAndDatasetResult(outcome.result()));
	else
		return GetDiffCountLabelsetAndDatasetOutcome(outcome.error());
}

void Viapi_regenClient::getDiffCountLabelsetAndDatasetAsync(const GetDiffCountLabelsetAndDatasetRequest& request, const GetDiffCountLabelsetAndDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiffCountLabelsetAndDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetDiffCountLabelsetAndDatasetOutcomeCallable Viapi_regenClient::getDiffCountLabelsetAndDatasetCallable(const GetDiffCountLabelsetAndDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiffCountLabelsetAndDatasetOutcome()>>(
			[this, request]()
			{
			return this->getDiffCountLabelsetAndDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetLabelDetailOutcome Viapi_regenClient::getLabelDetail(const GetLabelDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLabelDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLabelDetailOutcome(GetLabelDetailResult(outcome.result()));
	else
		return GetLabelDetailOutcome(outcome.error());
}

void Viapi_regenClient::getLabelDetailAsync(const GetLabelDetailRequest& request, const GetLabelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLabelDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetLabelDetailOutcomeCallable Viapi_regenClient::getLabelDetailCallable(const GetLabelDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLabelDetailOutcome()>>(
			[this, request]()
			{
			return this->getLabelDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetLabelsetOutcome Viapi_regenClient::getLabelset(const GetLabelsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLabelsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLabelsetOutcome(GetLabelsetResult(outcome.result()));
	else
		return GetLabelsetOutcome(outcome.error());
}

void Viapi_regenClient::getLabelsetAsync(const GetLabelsetRequest& request, const GetLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLabelset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetLabelsetOutcomeCallable Viapi_regenClient::getLabelsetCallable(const GetLabelsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLabelsetOutcome()>>(
			[this, request]()
			{
			return this->getLabelset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetServiceOutcome Viapi_regenClient::getService(const GetServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceOutcome(GetServiceResult(outcome.result()));
	else
		return GetServiceOutcome(outcome.error());
}

void Viapi_regenClient::getServiceAsync(const GetServiceRequest& request, const GetServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetServiceOutcomeCallable Viapi_regenClient::getServiceCallable(const GetServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceOutcome()>>(
			[this, request]()
			{
			return this->getService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetServiceInvokeOutcome Viapi_regenClient::getServiceInvoke(const GetServiceInvokeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceInvokeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceInvokeOutcome(GetServiceInvokeResult(outcome.result()));
	else
		return GetServiceInvokeOutcome(outcome.error());
}

void Viapi_regenClient::getServiceInvokeAsync(const GetServiceInvokeRequest& request, const GetServiceInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceInvoke(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetServiceInvokeOutcomeCallable Viapi_regenClient::getServiceInvokeCallable(const GetServiceInvokeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceInvokeOutcome()>>(
			[this, request]()
			{
			return this->getServiceInvoke(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetServiceQpsOutcome Viapi_regenClient::getServiceQps(const GetServiceQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceQpsOutcome(GetServiceQpsResult(outcome.result()));
	else
		return GetServiceQpsOutcome(outcome.error());
}

void Viapi_regenClient::getServiceQpsAsync(const GetServiceQpsRequest& request, const GetServiceQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetServiceQpsOutcomeCallable Viapi_regenClient::getServiceQpsCallable(const GetServiceQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceQpsOutcome()>>(
			[this, request]()
			{
			return this->getServiceQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetTrainModelOutcome Viapi_regenClient::getTrainModel(const GetTrainModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTrainModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTrainModelOutcome(GetTrainModelResult(outcome.result()));
	else
		return GetTrainModelOutcome(outcome.error());
}

void Viapi_regenClient::getTrainModelAsync(const GetTrainModelRequest& request, const GetTrainModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrainModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetTrainModelOutcomeCallable Viapi_regenClient::getTrainModelCallable(const GetTrainModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTrainModelOutcome()>>(
			[this, request]()
			{
			return this->getTrainModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetTrainTaskOutcome Viapi_regenClient::getTrainTask(const GetTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTrainTaskOutcome(GetTrainTaskResult(outcome.result()));
	else
		return GetTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::getTrainTaskAsync(const GetTrainTaskRequest& request, const GetTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetTrainTaskOutcomeCallable Viapi_regenClient::getTrainTaskCallable(const GetTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->getTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetTrainTaskEstimatedTimeOutcome Viapi_regenClient::getTrainTaskEstimatedTime(const GetTrainTaskEstimatedTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTrainTaskEstimatedTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTrainTaskEstimatedTimeOutcome(GetTrainTaskEstimatedTimeResult(outcome.result()));
	else
		return GetTrainTaskEstimatedTimeOutcome(outcome.error());
}

void Viapi_regenClient::getTrainTaskEstimatedTimeAsync(const GetTrainTaskEstimatedTimeRequest& request, const GetTrainTaskEstimatedTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrainTaskEstimatedTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetTrainTaskEstimatedTimeOutcomeCallable Viapi_regenClient::getTrainTaskEstimatedTimeCallable(const GetTrainTaskEstimatedTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTrainTaskEstimatedTimeOutcome()>>(
			[this, request]()
			{
			return this->getTrainTaskEstimatedTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetUploadPolicyOutcome Viapi_regenClient::getUploadPolicy(const GetUploadPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUploadPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUploadPolicyOutcome(GetUploadPolicyResult(outcome.result()));
	else
		return GetUploadPolicyOutcome(outcome.error());
}

void Viapi_regenClient::getUploadPolicyAsync(const GetUploadPolicyRequest& request, const GetUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUploadPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetUploadPolicyOutcomeCallable Viapi_regenClient::getUploadPolicyCallable(const GetUploadPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUploadPolicyOutcome()>>(
			[this, request]()
			{
			return this->getUploadPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetUserInfoOutcome Viapi_regenClient::getUserInfo(const GetUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInfoOutcome(GetUserInfoResult(outcome.result()));
	else
		return GetUserInfoOutcome(outcome.error());
}

void Viapi_regenClient::getUserInfoAsync(const GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetUserInfoOutcomeCallable Viapi_regenClient::getUserInfoCallable(const GetUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::GetWorkspaceOutcome Viapi_regenClient::getWorkspace(const GetWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkspaceOutcome(GetWorkspaceResult(outcome.result()));
	else
		return GetWorkspaceOutcome(outcome.error());
}

void Viapi_regenClient::getWorkspaceAsync(const GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::GetWorkspaceOutcomeCallable Viapi_regenClient::getWorkspaceCallable(const GetWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->getWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListDataReflowDatasOutcome Viapi_regenClient::listDataReflowDatas(const ListDataReflowDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataReflowDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataReflowDatasOutcome(ListDataReflowDatasResult(outcome.result()));
	else
		return ListDataReflowDatasOutcome(outcome.error());
}

void Viapi_regenClient::listDataReflowDatasAsync(const ListDataReflowDatasRequest& request, const ListDataReflowDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataReflowDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListDataReflowDatasOutcomeCallable Viapi_regenClient::listDataReflowDatasCallable(const ListDataReflowDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataReflowDatasOutcome()>>(
			[this, request]()
			{
			return this->listDataReflowDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListDatasetDatasOutcome Viapi_regenClient::listDatasetDatas(const ListDatasetDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasetDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasetDatasOutcome(ListDatasetDatasResult(outcome.result()));
	else
		return ListDatasetDatasOutcome(outcome.error());
}

void Viapi_regenClient::listDatasetDatasAsync(const ListDatasetDatasRequest& request, const ListDatasetDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasetDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListDatasetDatasOutcomeCallable Viapi_regenClient::listDatasetDatasCallable(const ListDatasetDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasetDatasOutcome()>>(
			[this, request]()
			{
			return this->listDatasetDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListDatasetsOutcome Viapi_regenClient::listDatasets(const ListDatasetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasetsOutcome(ListDatasetsResult(outcome.result()));
	else
		return ListDatasetsOutcome(outcome.error());
}

void Viapi_regenClient::listDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListDatasetsOutcomeCallable Viapi_regenClient::listDatasetsCallable(const ListDatasetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasetsOutcome()>>(
			[this, request]()
			{
			return this->listDatasets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListLabelsetDatasOutcome Viapi_regenClient::listLabelsetDatas(const ListLabelsetDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLabelsetDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLabelsetDatasOutcome(ListLabelsetDatasResult(outcome.result()));
	else
		return ListLabelsetDatasOutcome(outcome.error());
}

void Viapi_regenClient::listLabelsetDatasAsync(const ListLabelsetDatasRequest& request, const ListLabelsetDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLabelsetDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListLabelsetDatasOutcomeCallable Viapi_regenClient::listLabelsetDatasCallable(const ListLabelsetDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLabelsetDatasOutcome()>>(
			[this, request]()
			{
			return this->listLabelsetDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListLabelsetsOutcome Viapi_regenClient::listLabelsets(const ListLabelsetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLabelsetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLabelsetsOutcome(ListLabelsetsResult(outcome.result()));
	else
		return ListLabelsetsOutcome(outcome.error());
}

void Viapi_regenClient::listLabelsetsAsync(const ListLabelsetsRequest& request, const ListLabelsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLabelsets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListLabelsetsOutcomeCallable Viapi_regenClient::listLabelsetsCallable(const ListLabelsetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLabelsetsOutcome()>>(
			[this, request]()
			{
			return this->listLabelsets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListServicesOutcome Viapi_regenClient::listServices(const ListServicesRequest &request) const
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

void Viapi_regenClient::listServicesAsync(const ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListServicesOutcomeCallable Viapi_regenClient::listServicesCallable(const ListServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServicesOutcome()>>(
			[this, request]()
			{
			return this->listServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListTrainTasksOutcome Viapi_regenClient::listTrainTasks(const ListTrainTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTrainTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTrainTasksOutcome(ListTrainTasksResult(outcome.result()));
	else
		return ListTrainTasksOutcome(outcome.error());
}

void Viapi_regenClient::listTrainTasksAsync(const ListTrainTasksRequest& request, const ListTrainTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTrainTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListTrainTasksOutcomeCallable Viapi_regenClient::listTrainTasksCallable(const ListTrainTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTrainTasksOutcome()>>(
			[this, request]()
			{
			return this->listTrainTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::ListWorkspacesOutcome Viapi_regenClient::listWorkspaces(const ListWorkspacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkspacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkspacesOutcome(ListWorkspacesResult(outcome.result()));
	else
		return ListWorkspacesOutcome(outcome.error());
}

void Viapi_regenClient::listWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkspaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::ListWorkspacesOutcomeCallable Viapi_regenClient::listWorkspacesCallable(const ListWorkspacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkspacesOutcome()>>(
			[this, request]()
			{
			return this->listWorkspaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::SetDatasetUserOssPathOutcome Viapi_regenClient::setDatasetUserOssPath(const SetDatasetUserOssPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDatasetUserOssPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDatasetUserOssPathOutcome(SetDatasetUserOssPathResult(outcome.result()));
	else
		return SetDatasetUserOssPathOutcome(outcome.error());
}

void Viapi_regenClient::setDatasetUserOssPathAsync(const SetDatasetUserOssPathRequest& request, const SetDatasetUserOssPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDatasetUserOssPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::SetDatasetUserOssPathOutcomeCallable Viapi_regenClient::setDatasetUserOssPathCallable(const SetDatasetUserOssPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDatasetUserOssPathOutcome()>>(
			[this, request]()
			{
			return this->setDatasetUserOssPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::StartServiceOutcome Viapi_regenClient::startService(const StartServiceRequest &request) const
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

void Viapi_regenClient::startServiceAsync(const StartServiceRequest& request, const StartServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::StartServiceOutcomeCallable Viapi_regenClient::startServiceCallable(const StartServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartServiceOutcome()>>(
			[this, request]()
			{
			return this->startService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::StartTrainTaskOutcome Viapi_regenClient::startTrainTask(const StartTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTrainTaskOutcome(StartTrainTaskResult(outcome.result()));
	else
		return StartTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::startTrainTaskAsync(const StartTrainTaskRequest& request, const StartTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::StartTrainTaskOutcomeCallable Viapi_regenClient::startTrainTaskCallable(const StartTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->startTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::StopServiceOutcome Viapi_regenClient::stopService(const StopServiceRequest &request) const
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

void Viapi_regenClient::stopServiceAsync(const StopServiceRequest& request, const StopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::StopServiceOutcomeCallable Viapi_regenClient::stopServiceCallable(const StopServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopServiceOutcome()>>(
			[this, request]()
			{
			return this->stopService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::StopTrainTaskOutcome Viapi_regenClient::stopTrainTask(const StopTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTrainTaskOutcome(StopTrainTaskResult(outcome.result()));
	else
		return StopTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::stopTrainTaskAsync(const StopTrainTaskRequest& request, const StopTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::StopTrainTaskOutcomeCallable Viapi_regenClient::stopTrainTaskCallable(const StopTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->stopTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::UpdateDatasetOutcome Viapi_regenClient::updateDataset(const UpdateDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatasetOutcome(UpdateDatasetResult(outcome.result()));
	else
		return UpdateDatasetOutcome(outcome.error());
}

void Viapi_regenClient::updateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::UpdateDatasetOutcomeCallable Viapi_regenClient::updateDatasetCallable(const UpdateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatasetOutcome()>>(
			[this, request]()
			{
			return this->updateDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::UpdateLabelsetOutcome Viapi_regenClient::updateLabelset(const UpdateLabelsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLabelsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLabelsetOutcome(UpdateLabelsetResult(outcome.result()));
	else
		return UpdateLabelsetOutcome(outcome.error());
}

void Viapi_regenClient::updateLabelsetAsync(const UpdateLabelsetRequest& request, const UpdateLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLabelset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::UpdateLabelsetOutcomeCallable Viapi_regenClient::updateLabelsetCallable(const UpdateLabelsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLabelsetOutcome()>>(
			[this, request]()
			{
			return this->updateLabelset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::UpdateServiceOutcome Viapi_regenClient::updateService(const UpdateServiceRequest &request) const
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

void Viapi_regenClient::updateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::UpdateServiceOutcomeCallable Viapi_regenClient::updateServiceCallable(const UpdateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
			[this, request]()
			{
			return this->updateService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::UpdateTrainTaskOutcome Viapi_regenClient::updateTrainTask(const UpdateTrainTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTrainTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTrainTaskOutcome(UpdateTrainTaskResult(outcome.result()));
	else
		return UpdateTrainTaskOutcome(outcome.error());
}

void Viapi_regenClient::updateTrainTaskAsync(const UpdateTrainTaskRequest& request, const UpdateTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTrainTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::UpdateTrainTaskOutcomeCallable Viapi_regenClient::updateTrainTaskCallable(const UpdateTrainTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTrainTaskOutcome()>>(
			[this, request]()
			{
			return this->updateTrainTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Viapi_regenClient::UpdateWorkspaceOutcome Viapi_regenClient::updateWorkspace(const UpdateWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkspaceOutcome(UpdateWorkspaceResult(outcome.result()));
	else
		return UpdateWorkspaceOutcome(outcome.error());
}

void Viapi_regenClient::updateWorkspaceAsync(const UpdateWorkspaceRequest& request, const UpdateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Viapi_regenClient::UpdateWorkspaceOutcomeCallable Viapi_regenClient::updateWorkspaceCallable(const UpdateWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->updateWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

