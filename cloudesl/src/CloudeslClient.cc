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

#include <alibabacloud/cloudesl/CloudeslClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

namespace
{
	const std::string SERVICE_NAME = "cloudesl";
}

CloudeslClient::CloudeslClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CloudeslClient::CloudeslClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CloudeslClient::CloudeslClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CloudeslClient::~CloudeslClient()
{}

CloudeslClient::ActivateApDeviceOutcome CloudeslClient::activateApDevice(const ActivateApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateApDeviceOutcome(ActivateApDeviceResult(outcome.result()));
	else
		return ActivateApDeviceOutcome(outcome.error());
}

void CloudeslClient::activateApDeviceAsync(const ActivateApDeviceRequest& request, const ActivateApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ActivateApDeviceOutcomeCallable CloudeslClient::activateApDeviceCallable(const ActivateApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateApDeviceOutcome()>>(
			[this, request]()
			{
			return this->activateApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddApDeviceOutcome CloudeslClient::addApDevice(const AddApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApDeviceOutcome(AddApDeviceResult(outcome.result()));
	else
		return AddApDeviceOutcome(outcome.error());
}

void CloudeslClient::addApDeviceAsync(const AddApDeviceRequest& request, const AddApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddApDeviceOutcomeCallable CloudeslClient::addApDeviceCallable(const AddApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApDeviceOutcome()>>(
			[this, request]()
			{
			return this->addApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddCompanyTemplateOutcome CloudeslClient::addCompanyTemplate(const AddCompanyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCompanyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCompanyTemplateOutcome(AddCompanyTemplateResult(outcome.result()));
	else
		return AddCompanyTemplateOutcome(outcome.error());
}

void CloudeslClient::addCompanyTemplateAsync(const AddCompanyTemplateRequest& request, const AddCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCompanyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddCompanyTemplateOutcomeCallable CloudeslClient::addCompanyTemplateCallable(const AddCompanyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCompanyTemplateOutcome()>>(
			[this, request]()
			{
			return this->addCompanyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddMaterialOutcome CloudeslClient::addMaterial(const AddMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMaterialOutcome(AddMaterialResult(outcome.result()));
	else
		return AddMaterialOutcome(outcome.error());
}

void CloudeslClient::addMaterialAsync(const AddMaterialRequest& request, const AddMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddMaterialOutcomeCallable CloudeslClient::addMaterialCallable(const AddMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMaterialOutcome()>>(
			[this, request]()
			{
			return this->addMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddUserOutcome CloudeslClient::addUser(const AddUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserOutcome(AddUserResult(outcome.result()));
	else
		return AddUserOutcome(outcome.error());
}

void CloudeslClient::addUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddUserOutcomeCallable CloudeslClient::addUserCallable(const AddUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserOutcome()>>(
			[this, request]()
			{
			return this->addUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::ApplyCompanyTemplateVersionToStoresOutcome CloudeslClient::applyCompanyTemplateVersionToStores(const ApplyCompanyTemplateVersionToStoresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyCompanyTemplateVersionToStoresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyCompanyTemplateVersionToStoresOutcome(ApplyCompanyTemplateVersionToStoresResult(outcome.result()));
	else
		return ApplyCompanyTemplateVersionToStoresOutcome(outcome.error());
}

void CloudeslClient::applyCompanyTemplateVersionToStoresAsync(const ApplyCompanyTemplateVersionToStoresRequest& request, const ApplyCompanyTemplateVersionToStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyCompanyTemplateVersionToStores(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ApplyCompanyTemplateVersionToStoresOutcomeCallable CloudeslClient::applyCompanyTemplateVersionToStoresCallable(const ApplyCompanyTemplateVersionToStoresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyCompanyTemplateVersionToStoresOutcome()>>(
			[this, request]()
			{
			return this->applyCompanyTemplateVersionToStores(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::ApplyImageDitheringOutcome CloudeslClient::applyImageDithering(const ApplyImageDitheringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyImageDitheringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyImageDitheringOutcome(ApplyImageDitheringResult(outcome.result()));
	else
		return ApplyImageDitheringOutcome(outcome.error());
}

void CloudeslClient::applyImageDitheringAsync(const ApplyImageDitheringRequest& request, const ApplyImageDitheringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyImageDithering(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ApplyImageDitheringOutcomeCallable CloudeslClient::applyImageDitheringCallable(const ApplyImageDitheringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyImageDitheringOutcome()>>(
			[this, request]()
			{
			return this->applyImageDithering(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AssignUserOutcome CloudeslClient::assignUser(const AssignUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignUserOutcome(AssignUserResult(outcome.result()));
	else
		return AssignUserOutcome(outcome.error());
}

void CloudeslClient::assignUserAsync(const AssignUserRequest& request, const AssignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AssignUserOutcomeCallable CloudeslClient::assignUserCallable(const AssignUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignUserOutcome()>>(
			[this, request]()
			{
			return this->assignUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BatchInsertItemsOutcome CloudeslClient::batchInsertItems(const BatchInsertItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchInsertItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchInsertItemsOutcome(BatchInsertItemsResult(outcome.result()));
	else
		return BatchInsertItemsOutcome(outcome.error());
}

void CloudeslClient::batchInsertItemsAsync(const BatchInsertItemsRequest& request, const BatchInsertItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchInsertItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BatchInsertItemsOutcomeCallable CloudeslClient::batchInsertItemsCallable(const BatchInsertItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchInsertItemsOutcome()>>(
			[this, request]()
			{
			return this->batchInsertItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BatchUpdateEventOutcome CloudeslClient::batchUpdateEvent(const BatchUpdateEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateEventOutcome(BatchUpdateEventResult(outcome.result()));
	else
		return BatchUpdateEventOutcome(outcome.error());
}

void CloudeslClient::batchUpdateEventAsync(const BatchUpdateEventRequest& request, const BatchUpdateEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BatchUpdateEventOutcomeCallable CloudeslClient::batchUpdateEventCallable(const BatchUpdateEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateEventOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BindDeviceLayoutOutcome CloudeslClient::bindDeviceLayout(const BindDeviceLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindDeviceLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindDeviceLayoutOutcome(BindDeviceLayoutResult(outcome.result()));
	else
		return BindDeviceLayoutOutcome(outcome.error());
}

void CloudeslClient::bindDeviceLayoutAsync(const BindDeviceLayoutRequest& request, const BindDeviceLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindDeviceLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BindDeviceLayoutOutcomeCallable CloudeslClient::bindDeviceLayoutCallable(const BindDeviceLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindDeviceLayoutOutcome()>>(
			[this, request]()
			{
			return this->bindDeviceLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BindEslDeviceOutcome CloudeslClient::bindEslDevice(const BindEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindEslDeviceOutcome(BindEslDeviceResult(outcome.result()));
	else
		return BindEslDeviceOutcome(outcome.error());
}

void CloudeslClient::bindEslDeviceAsync(const BindEslDeviceRequest& request, const BindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BindEslDeviceOutcomeCallable CloudeslClient::bindEslDeviceCallable(const BindEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindEslDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CheckServiceLinkedRoleForDeletingOutcome CloudeslClient::checkServiceLinkedRoleForDeleting(const CheckServiceLinkedRoleForDeletingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleForDeletingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleForDeletingOutcome(CheckServiceLinkedRoleForDeletingResult(outcome.result()));
	else
		return CheckServiceLinkedRoleForDeletingOutcome(outcome.error());
}

void CloudeslClient::checkServiceLinkedRoleForDeletingAsync(const CheckServiceLinkedRoleForDeletingRequest& request, const CheckServiceLinkedRoleForDeletingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRoleForDeleting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CheckServiceLinkedRoleForDeletingOutcomeCallable CloudeslClient::checkServiceLinkedRoleForDeletingCallable(const CheckServiceLinkedRoleForDeletingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleForDeletingOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRoleForDeleting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CopyCompanyTemplateViewOutcome CloudeslClient::copyCompanyTemplateView(const CopyCompanyTemplateViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyCompanyTemplateViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyCompanyTemplateViewOutcome(CopyCompanyTemplateViewResult(outcome.result()));
	else
		return CopyCompanyTemplateViewOutcome(outcome.error());
}

void CloudeslClient::copyCompanyTemplateViewAsync(const CopyCompanyTemplateViewRequest& request, const CopyCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyCompanyTemplateView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CopyCompanyTemplateViewOutcomeCallable CloudeslClient::copyCompanyTemplateViewCallable(const CopyCompanyTemplateViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyCompanyTemplateViewOutcome()>>(
			[this, request]()
			{
			return this->copyCompanyTemplateView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CopyLayoutOutcome CloudeslClient::copyLayout(const CopyLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyLayoutOutcome(CopyLayoutResult(outcome.result()));
	else
		return CopyLayoutOutcome(outcome.error());
}

void CloudeslClient::copyLayoutAsync(const CopyLayoutRequest& request, const CopyLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CopyLayoutOutcomeCallable CloudeslClient::copyLayoutCallable(const CopyLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyLayoutOutcome()>>(
			[this, request]()
			{
			return this->copyLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CopyTemplateGroupOutcome CloudeslClient::copyTemplateGroup(const CopyTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyTemplateGroupOutcome(CopyTemplateGroupResult(outcome.result()));
	else
		return CopyTemplateGroupOutcome(outcome.error());
}

void CloudeslClient::copyTemplateGroupAsync(const CopyTemplateGroupRequest& request, const CopyTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CopyTemplateGroupOutcomeCallable CloudeslClient::copyTemplateGroupCallable(const CopyTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->copyTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CreateStoreOutcome CloudeslClient::createStore(const CreateStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStoreOutcome(CreateStoreResult(outcome.result()));
	else
		return CreateStoreOutcome(outcome.error());
}

void CloudeslClient::createStoreAsync(const CreateStoreRequest& request, const CreateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CreateStoreOutcomeCallable CloudeslClient::createStoreCallable(const CreateStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStoreOutcome()>>(
			[this, request]()
			{
			return this->createStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteApDeviceOutcome CloudeslClient::deleteApDevice(const DeleteApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApDeviceOutcome(DeleteApDeviceResult(outcome.result()));
	else
		return DeleteApDeviceOutcome(outcome.error());
}

void CloudeslClient::deleteApDeviceAsync(const DeleteApDeviceRequest& request, const DeleteApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteApDeviceOutcomeCallable CloudeslClient::deleteApDeviceCallable(const DeleteApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteCompanyTemplateOutcome CloudeslClient::deleteCompanyTemplate(const DeleteCompanyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCompanyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCompanyTemplateOutcome(DeleteCompanyTemplateResult(outcome.result()));
	else
		return DeleteCompanyTemplateOutcome(outcome.error());
}

void CloudeslClient::deleteCompanyTemplateAsync(const DeleteCompanyTemplateRequest& request, const DeleteCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCompanyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteCompanyTemplateOutcomeCallable CloudeslClient::deleteCompanyTemplateCallable(const DeleteCompanyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCompanyTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteCompanyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteItemOutcome CloudeslClient::deleteItem(const DeleteItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteItemOutcome(DeleteItemResult(outcome.result()));
	else
		return DeleteItemOutcome(outcome.error());
}

void CloudeslClient::deleteItemAsync(const DeleteItemRequest& request, const DeleteItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteItemOutcomeCallable CloudeslClient::deleteItemCallable(const DeleteItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteItemOutcome()>>(
			[this, request]()
			{
			return this->deleteItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteLayoutOutcome CloudeslClient::deleteLayout(const DeleteLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLayoutOutcome(DeleteLayoutResult(outcome.result()));
	else
		return DeleteLayoutOutcome(outcome.error());
}

void CloudeslClient::deleteLayoutAsync(const DeleteLayoutRequest& request, const DeleteLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteLayoutOutcomeCallable CloudeslClient::deleteLayoutCallable(const DeleteLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLayoutOutcome()>>(
			[this, request]()
			{
			return this->deleteLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteMaterialOutcome CloudeslClient::deleteMaterial(const DeleteMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMaterialOutcome(DeleteMaterialResult(outcome.result()));
	else
		return DeleteMaterialOutcome(outcome.error());
}

void CloudeslClient::deleteMaterialAsync(const DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteMaterialOutcomeCallable CloudeslClient::deleteMaterialCallable(const DeleteMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMaterialOutcome()>>(
			[this, request]()
			{
			return this->deleteMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteStoreOutcome CloudeslClient::deleteStore(const DeleteStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStoreOutcome(DeleteStoreResult(outcome.result()));
	else
		return DeleteStoreOutcome(outcome.error());
}

void CloudeslClient::deleteStoreAsync(const DeleteStoreRequest& request, const DeleteStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteStoreOutcomeCallable CloudeslClient::deleteStoreCallable(const DeleteStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStoreOutcome()>>(
			[this, request]()
			{
			return this->deleteStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteTemplateGroupOutcome CloudeslClient::deleteTemplateGroup(const DeleteTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateGroupOutcome(DeleteTemplateGroupResult(outcome.result()));
	else
		return DeleteTemplateGroupOutcome(outcome.error());
}

void CloudeslClient::deleteTemplateGroupAsync(const DeleteTemplateGroupRequest& request, const DeleteTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteTemplateGroupOutcomeCallable CloudeslClient::deleteTemplateGroupCallable(const DeleteTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteUserOutcome CloudeslClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void CloudeslClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteUserOutcomeCallable CloudeslClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeApDevicesOutcome CloudeslClient::describeApDevices(const DescribeApDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApDevicesOutcome(DescribeApDevicesResult(outcome.result()));
	else
		return DescribeApDevicesOutcome(outcome.error());
}

void CloudeslClient::describeApDevicesAsync(const DescribeApDevicesRequest& request, const DescribeApDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeApDevicesOutcomeCallable CloudeslClient::describeApDevicesCallable(const DescribeApDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeApDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeAvailableEslModelsOutcome CloudeslClient::describeAvailableEslModels(const DescribeAvailableEslModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableEslModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableEslModelsOutcome(DescribeAvailableEslModelsResult(outcome.result()));
	else
		return DescribeAvailableEslModelsOutcome(outcome.error());
}

void CloudeslClient::describeAvailableEslModelsAsync(const DescribeAvailableEslModelsRequest& request, const DescribeAvailableEslModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableEslModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeAvailableEslModelsOutcomeCallable CloudeslClient::describeAvailableEslModelsCallable(const DescribeAvailableEslModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableEslModelsOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableEslModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeBindersOutcome CloudeslClient::describeBinders(const DescribeBindersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBindersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBindersOutcome(DescribeBindersResult(outcome.result()));
	else
		return DescribeBindersOutcome(outcome.error());
}

void CloudeslClient::describeBindersAsync(const DescribeBindersRequest& request, const DescribeBindersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBinders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeBindersOutcomeCallable CloudeslClient::describeBindersCallable(const DescribeBindersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBindersOutcome()>>(
			[this, request]()
			{
			return this->describeBinders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeCompanyTemplateAttributeOutcome CloudeslClient::describeCompanyTemplateAttribute(const DescribeCompanyTemplateAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCompanyTemplateAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCompanyTemplateAttributeOutcome(DescribeCompanyTemplateAttributeResult(outcome.result()));
	else
		return DescribeCompanyTemplateAttributeOutcome(outcome.error());
}

void CloudeslClient::describeCompanyTemplateAttributeAsync(const DescribeCompanyTemplateAttributeRequest& request, const DescribeCompanyTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCompanyTemplateAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeCompanyTemplateAttributeOutcomeCallable CloudeslClient::describeCompanyTemplateAttributeCallable(const DescribeCompanyTemplateAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCompanyTemplateAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeCompanyTemplateAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeCompanyTemplateVersionsOutcome CloudeslClient::describeCompanyTemplateVersions(const DescribeCompanyTemplateVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCompanyTemplateVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCompanyTemplateVersionsOutcome(DescribeCompanyTemplateVersionsResult(outcome.result()));
	else
		return DescribeCompanyTemplateVersionsOutcome(outcome.error());
}

void CloudeslClient::describeCompanyTemplateVersionsAsync(const DescribeCompanyTemplateVersionsRequest& request, const DescribeCompanyTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCompanyTemplateVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeCompanyTemplateVersionsOutcomeCallable CloudeslClient::describeCompanyTemplateVersionsCallable(const DescribeCompanyTemplateVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCompanyTemplateVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeCompanyTemplateVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeCompanyTemplateViewOutcome CloudeslClient::describeCompanyTemplateView(const DescribeCompanyTemplateViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCompanyTemplateViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCompanyTemplateViewOutcome(DescribeCompanyTemplateViewResult(outcome.result()));
	else
		return DescribeCompanyTemplateViewOutcome(outcome.error());
}

void CloudeslClient::describeCompanyTemplateViewAsync(const DescribeCompanyTemplateViewRequest& request, const DescribeCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCompanyTemplateView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeCompanyTemplateViewOutcomeCallable CloudeslClient::describeCompanyTemplateViewCallable(const DescribeCompanyTemplateViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCompanyTemplateViewOutcome()>>(
			[this, request]()
			{
			return this->describeCompanyTemplateView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEslDevicesOutcome CloudeslClient::describeEslDevices(const DescribeEslDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEslDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEslDevicesOutcome(DescribeEslDevicesResult(outcome.result()));
	else
		return DescribeEslDevicesOutcome(outcome.error());
}

void CloudeslClient::describeEslDevicesAsync(const DescribeEslDevicesRequest& request, const DescribeEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEslDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEslDevicesOutcomeCallable CloudeslClient::describeEslDevicesCallable(const DescribeEslDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEslDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeEslDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEslModelByTemplateVersionOutcome CloudeslClient::describeEslModelByTemplateVersion(const DescribeEslModelByTemplateVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEslModelByTemplateVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEslModelByTemplateVersionOutcome(DescribeEslModelByTemplateVersionResult(outcome.result()));
	else
		return DescribeEslModelByTemplateVersionOutcome(outcome.error());
}

void CloudeslClient::describeEslModelByTemplateVersionAsync(const DescribeEslModelByTemplateVersionRequest& request, const DescribeEslModelByTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEslModelByTemplateVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEslModelByTemplateVersionOutcomeCallable CloudeslClient::describeEslModelByTemplateVersionCallable(const DescribeEslModelByTemplateVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEslModelByTemplateVersionOutcome()>>(
			[this, request]()
			{
			return this->describeEslModelByTemplateVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEventReasonOutcome CloudeslClient::describeEventReason(const DescribeEventReasonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventReasonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventReasonOutcome(DescribeEventReasonResult(outcome.result()));
	else
		return DescribeEventReasonOutcome(outcome.error());
}

void CloudeslClient::describeEventReasonAsync(const DescribeEventReasonRequest& request, const DescribeEventReasonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventReason(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEventReasonOutcomeCallable CloudeslClient::describeEventReasonCallable(const DescribeEventReasonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventReasonOutcome()>>(
			[this, request]()
			{
			return this->describeEventReason(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEventsOutcome CloudeslClient::describeEvents(const DescribeEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventsOutcome(DescribeEventsResult(outcome.result()));
	else
		return DescribeEventsOutcome(outcome.error());
}

void CloudeslClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEventsOutcomeCallable CloudeslClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeItemMaterialsOutcome CloudeslClient::describeItemMaterials(const DescribeItemMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeItemMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeItemMaterialsOutcome(DescribeItemMaterialsResult(outcome.result()));
	else
		return DescribeItemMaterialsOutcome(outcome.error());
}

void CloudeslClient::describeItemMaterialsAsync(const DescribeItemMaterialsRequest& request, const DescribeItemMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeItemMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeItemMaterialsOutcomeCallable CloudeslClient::describeItemMaterialsCallable(const DescribeItemMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeItemMaterialsOutcome()>>(
			[this, request]()
			{
			return this->describeItemMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeItemsOutcome CloudeslClient::describeItems(const DescribeItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeItemsOutcome(DescribeItemsResult(outcome.result()));
	else
		return DescribeItemsOutcome(outcome.error());
}

void CloudeslClient::describeItemsAsync(const DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeItemsOutcomeCallable CloudeslClient::describeItemsCallable(const DescribeItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeItemsOutcome()>>(
			[this, request]()
			{
			return this->describeItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeMaterialsOutcome CloudeslClient::describeMaterials(const DescribeMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMaterialsOutcome(DescribeMaterialsResult(outcome.result()));
	else
		return DescribeMaterialsOutcome(outcome.error());
}

void CloudeslClient::describeMaterialsAsync(const DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeMaterialsOutcomeCallable CloudeslClient::describeMaterialsCallable(const DescribeMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMaterialsOutcome()>>(
			[this, request]()
			{
			return this->describeMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeNotificationConfigOutcome CloudeslClient::describeNotificationConfig(const DescribeNotificationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNotificationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNotificationConfigOutcome(DescribeNotificationConfigResult(outcome.result()));
	else
		return DescribeNotificationConfigOutcome(outcome.error());
}

void CloudeslClient::describeNotificationConfigAsync(const DescribeNotificationConfigRequest& request, const DescribeNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNotificationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeNotificationConfigOutcomeCallable CloudeslClient::describeNotificationConfigCallable(const DescribeNotificationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNotificationConfigOutcome()>>(
			[this, request]()
			{
			return this->describeNotificationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeStoreByTemplateVersionOutcome CloudeslClient::describeStoreByTemplateVersion(const DescribeStoreByTemplateVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoreByTemplateVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoreByTemplateVersionOutcome(DescribeStoreByTemplateVersionResult(outcome.result()));
	else
		return DescribeStoreByTemplateVersionOutcome(outcome.error());
}

void CloudeslClient::describeStoreByTemplateVersionAsync(const DescribeStoreByTemplateVersionRequest& request, const DescribeStoreByTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStoreByTemplateVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeStoreByTemplateVersionOutcomeCallable CloudeslClient::describeStoreByTemplateVersionCallable(const DescribeStoreByTemplateVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoreByTemplateVersionOutcome()>>(
			[this, request]()
			{
			return this->describeStoreByTemplateVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeStoreConfigOutcome CloudeslClient::describeStoreConfig(const DescribeStoreConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoreConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoreConfigOutcome(DescribeStoreConfigResult(outcome.result()));
	else
		return DescribeStoreConfigOutcome(outcome.error());
}

void CloudeslClient::describeStoreConfigAsync(const DescribeStoreConfigRequest& request, const DescribeStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStoreConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeStoreConfigOutcomeCallable CloudeslClient::describeStoreConfigCallable(const DescribeStoreConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoreConfigOutcome()>>(
			[this, request]()
			{
			return this->describeStoreConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeStoresOutcome CloudeslClient::describeStores(const DescribeStoresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoresOutcome(DescribeStoresResult(outcome.result()));
	else
		return DescribeStoresOutcome(outcome.error());
}

void CloudeslClient::describeStoresAsync(const DescribeStoresRequest& request, const DescribeStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStores(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeStoresOutcomeCallable CloudeslClient::describeStoresCallable(const DescribeStoresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoresOutcome()>>(
			[this, request]()
			{
			return this->describeStores(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeTemplateByModelOutcome CloudeslClient::describeTemplateByModel(const DescribeTemplateByModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplateByModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplateByModelOutcome(DescribeTemplateByModelResult(outcome.result()));
	else
		return DescribeTemplateByModelOutcome(outcome.error());
}

void CloudeslClient::describeTemplateByModelAsync(const DescribeTemplateByModelRequest& request, const DescribeTemplateByModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplateByModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeTemplateByModelOutcomeCallable CloudeslClient::describeTemplateByModelCallable(const DescribeTemplateByModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplateByModelOutcome()>>(
			[this, request]()
			{
			return this->describeTemplateByModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeUserLogOutcome CloudeslClient::describeUserLog(const DescribeUserLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserLogOutcome(DescribeUserLogResult(outcome.result()));
	else
		return DescribeUserLogOutcome(outcome.error());
}

void CloudeslClient::describeUserLogAsync(const DescribeUserLogRequest& request, const DescribeUserLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUserLogOutcomeCallable CloudeslClient::describeUserLogCallable(const DescribeUserLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserLogOutcome()>>(
			[this, request]()
			{
			return this->describeUserLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeUsersOutcome CloudeslClient::describeUsers(const DescribeUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUsersOutcome(DescribeUsersResult(outcome.result()));
	else
		return DescribeUsersOutcome(outcome.error());
}

void CloudeslClient::describeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUsersOutcomeCallable CloudeslClient::describeUsersCallable(const DescribeUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
			[this, request]()
			{
			return this->describeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::ExportEslDevicesOutcome CloudeslClient::exportEslDevices(const ExportEslDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportEslDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportEslDevicesOutcome(ExportEslDevicesResult(outcome.result()));
	else
		return ExportEslDevicesOutcome(outcome.error());
}

void CloudeslClient::exportEslDevicesAsync(const ExportEslDevicesRequest& request, const ExportEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportEslDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ExportEslDevicesOutcomeCallable CloudeslClient::exportEslDevicesCallable(const ExportEslDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportEslDevicesOutcome()>>(
			[this, request]()
			{
			return this->exportEslDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetAddMaterialStatusOutcome CloudeslClient::getAddMaterialStatus(const GetAddMaterialStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddMaterialStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddMaterialStatusOutcome(GetAddMaterialStatusResult(outcome.result()));
	else
		return GetAddMaterialStatusOutcome(outcome.error());
}

void CloudeslClient::getAddMaterialStatusAsync(const GetAddMaterialStatusRequest& request, const GetAddMaterialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddMaterialStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetAddMaterialStatusOutcomeCallable CloudeslClient::getAddMaterialStatusCallable(const GetAddMaterialStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddMaterialStatusOutcome()>>(
			[this, request]()
			{
			return this->getAddMaterialStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetCompanyTemplatePictureOutcome CloudeslClient::getCompanyTemplatePicture(const GetCompanyTemplatePictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompanyTemplatePictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompanyTemplatePictureOutcome(GetCompanyTemplatePictureResult(outcome.result()));
	else
		return GetCompanyTemplatePictureOutcome(outcome.error());
}

void CloudeslClient::getCompanyTemplatePictureAsync(const GetCompanyTemplatePictureRequest& request, const GetCompanyTemplatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompanyTemplatePicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetCompanyTemplatePictureOutcomeCallable CloudeslClient::getCompanyTemplatePictureCallable(const GetCompanyTemplatePictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompanyTemplatePictureOutcome()>>(
			[this, request]()
			{
			return this->getCompanyTemplatePicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetCompanyTemplatePictureByJobOutcome CloudeslClient::getCompanyTemplatePictureByJob(const GetCompanyTemplatePictureByJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompanyTemplatePictureByJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompanyTemplatePictureByJobOutcome(GetCompanyTemplatePictureByJobResult(outcome.result()));
	else
		return GetCompanyTemplatePictureByJobOutcome(outcome.error());
}

void CloudeslClient::getCompanyTemplatePictureByJobAsync(const GetCompanyTemplatePictureByJobRequest& request, const GetCompanyTemplatePictureByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompanyTemplatePictureByJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetCompanyTemplatePictureByJobOutcomeCallable CloudeslClient::getCompanyTemplatePictureByJobCallable(const GetCompanyTemplatePictureByJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompanyTemplatePictureByJobOutcome()>>(
			[this, request]()
			{
			return this->getCompanyTemplatePictureByJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetCompanyTemplatePictureNewOutcome CloudeslClient::getCompanyTemplatePictureNew(const GetCompanyTemplatePictureNewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompanyTemplatePictureNewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompanyTemplatePictureNewOutcome(GetCompanyTemplatePictureNewResult(outcome.result()));
	else
		return GetCompanyTemplatePictureNewOutcome(outcome.error());
}

void CloudeslClient::getCompanyTemplatePictureNewAsync(const GetCompanyTemplatePictureNewRequest& request, const GetCompanyTemplatePictureNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompanyTemplatePictureNew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetCompanyTemplatePictureNewOutcomeCallable CloudeslClient::getCompanyTemplatePictureNewCallable(const GetCompanyTemplatePictureNewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompanyTemplatePictureNewOutcome()>>(
			[this, request]()
			{
			return this->getCompanyTemplatePictureNew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetEslDevicesOutcome CloudeslClient::getEslDevices(const GetEslDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEslDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEslDevicesOutcome(GetEslDevicesResult(outcome.result()));
	else
		return GetEslDevicesOutcome(outcome.error());
}

void CloudeslClient::getEslDevicesAsync(const GetEslDevicesRequest& request, const GetEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEslDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetEslDevicesOutcomeCallable CloudeslClient::getEslDevicesCallable(const GetEslDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEslDevicesOutcome()>>(
			[this, request]()
			{
			return this->getEslDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetItemMaterialOutcome CloudeslClient::getItemMaterial(const GetItemMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetItemMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetItemMaterialOutcome(GetItemMaterialResult(outcome.result()));
	else
		return GetItemMaterialOutcome(outcome.error());
}

void CloudeslClient::getItemMaterialAsync(const GetItemMaterialRequest& request, const GetItemMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getItemMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetItemMaterialOutcomeCallable CloudeslClient::getItemMaterialCallable(const GetItemMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetItemMaterialOutcome()>>(
			[this, request]()
			{
			return this->getItemMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetUserOutcome CloudeslClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void CloudeslClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetUserOutcomeCallable CloudeslClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::QueryContainerListOutcome CloudeslClient::queryContainerList(const QueryContainerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryContainerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryContainerListOutcome(QueryContainerListResult(outcome.result()));
	else
		return QueryContainerListOutcome(outcome.error());
}

void CloudeslClient::queryContainerListAsync(const QueryContainerListRequest& request, const QueryContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryContainerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::QueryContainerListOutcomeCallable CloudeslClient::queryContainerListCallable(const QueryContainerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryContainerListOutcome()>>(
			[this, request]()
			{
			return this->queryContainerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::QueryLayoutByDeviceOutcome CloudeslClient::queryLayoutByDevice(const QueryLayoutByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLayoutByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLayoutByDeviceOutcome(QueryLayoutByDeviceResult(outcome.result()));
	else
		return QueryLayoutByDeviceOutcome(outcome.error());
}

void CloudeslClient::queryLayoutByDeviceAsync(const QueryLayoutByDeviceRequest& request, const QueryLayoutByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLayoutByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::QueryLayoutByDeviceOutcomeCallable CloudeslClient::queryLayoutByDeviceCallable(const QueryLayoutByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLayoutByDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryLayoutByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::QueryLayoutDetailOutcome CloudeslClient::queryLayoutDetail(const QueryLayoutDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLayoutDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLayoutDetailOutcome(QueryLayoutDetailResult(outcome.result()));
	else
		return QueryLayoutDetailOutcome(outcome.error());
}

void CloudeslClient::queryLayoutDetailAsync(const QueryLayoutDetailRequest& request, const QueryLayoutDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLayoutDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::QueryLayoutDetailOutcomeCallable CloudeslClient::queryLayoutDetailCallable(const QueryLayoutDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLayoutDetailOutcome()>>(
			[this, request]()
			{
			return this->queryLayoutDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::QueryTemplateGroupListOutcome CloudeslClient::queryTemplateGroupList(const QueryTemplateGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTemplateGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTemplateGroupListOutcome(QueryTemplateGroupListResult(outcome.result()));
	else
		return QueryTemplateGroupListOutcome(outcome.error());
}

void CloudeslClient::queryTemplateGroupListAsync(const QueryTemplateGroupListRequest& request, const QueryTemplateGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTemplateGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::QueryTemplateGroupListOutcomeCallable CloudeslClient::queryTemplateGroupListCallable(const QueryTemplateGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTemplateGroupListOutcome()>>(
			[this, request]()
			{
			return this->queryTemplateGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::QueryTemplateListByGroupIdOutcome CloudeslClient::queryTemplateListByGroupId(const QueryTemplateListByGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTemplateListByGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTemplateListByGroupIdOutcome(QueryTemplateListByGroupIdResult(outcome.result()));
	else
		return QueryTemplateListByGroupIdOutcome(outcome.error());
}

void CloudeslClient::queryTemplateListByGroupIdAsync(const QueryTemplateListByGroupIdRequest& request, const QueryTemplateListByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTemplateListByGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::QueryTemplateListByGroupIdOutcomeCallable CloudeslClient::queryTemplateListByGroupIdCallable(const QueryTemplateListByGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTemplateListByGroupIdOutcome()>>(
			[this, request]()
			{
			return this->queryTemplateListByGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::SaveLayoutOutcome CloudeslClient::saveLayout(const SaveLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveLayoutOutcome(SaveLayoutResult(outcome.result()));
	else
		return SaveLayoutOutcome(outcome.error());
}

void CloudeslClient::saveLayoutAsync(const SaveLayoutRequest& request, const SaveLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::SaveLayoutOutcomeCallable CloudeslClient::saveLayoutCallable(const SaveLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveLayoutOutcome()>>(
			[this, request]()
			{
			return this->saveLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::SaveTemplateGroupOutcome CloudeslClient::saveTemplateGroup(const SaveTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTemplateGroupOutcome(SaveTemplateGroupResult(outcome.result()));
	else
		return SaveTemplateGroupOutcome(outcome.error());
}

void CloudeslClient::saveTemplateGroupAsync(const SaveTemplateGroupRequest& request, const SaveTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::SaveTemplateGroupOutcomeCallable CloudeslClient::saveTemplateGroupCallable(const SaveTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->saveTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::SyncAddMaterialOutcome CloudeslClient::syncAddMaterial(const SyncAddMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncAddMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncAddMaterialOutcome(SyncAddMaterialResult(outcome.result()));
	else
		return SyncAddMaterialOutcome(outcome.error());
}

void CloudeslClient::syncAddMaterialAsync(const SyncAddMaterialRequest& request, const SyncAddMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncAddMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::SyncAddMaterialOutcomeCallable CloudeslClient::syncAddMaterialCallable(const SyncAddMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncAddMaterialOutcome()>>(
			[this, request]()
			{
			return this->syncAddMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UnassignUserOutcome CloudeslClient::unassignUser(const UnassignUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassignUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassignUserOutcome(UnassignUserResult(outcome.result()));
	else
		return UnassignUserOutcome(outcome.error());
}

void CloudeslClient::unassignUserAsync(const UnassignUserRequest& request, const UnassignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UnassignUserOutcomeCallable CloudeslClient::unassignUserCallable(const UnassignUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignUserOutcome()>>(
			[this, request]()
			{
			return this->unassignUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UnbindEslDeviceOutcome CloudeslClient::unbindEslDevice(const UnbindEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindEslDeviceOutcome(UnbindEslDeviceResult(outcome.result()));
	else
		return UnbindEslDeviceOutcome(outcome.error());
}

void CloudeslClient::unbindEslDeviceAsync(const UnbindEslDeviceRequest& request, const UnbindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UnbindEslDeviceOutcomeCallable CloudeslClient::unbindEslDeviceCallable(const UnbindEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindEslDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateCompanyTemplateOutcome CloudeslClient::updateCompanyTemplate(const UpdateCompanyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCompanyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCompanyTemplateOutcome(UpdateCompanyTemplateResult(outcome.result()));
	else
		return UpdateCompanyTemplateOutcome(outcome.error());
}

void CloudeslClient::updateCompanyTemplateAsync(const UpdateCompanyTemplateRequest& request, const UpdateCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCompanyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateCompanyTemplateOutcomeCallable CloudeslClient::updateCompanyTemplateCallable(const UpdateCompanyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCompanyTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateCompanyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateCompanyTemplateViewOutcome CloudeslClient::updateCompanyTemplateView(const UpdateCompanyTemplateViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCompanyTemplateViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCompanyTemplateViewOutcome(UpdateCompanyTemplateViewResult(outcome.result()));
	else
		return UpdateCompanyTemplateViewOutcome(outcome.error());
}

void CloudeslClient::updateCompanyTemplateViewAsync(const UpdateCompanyTemplateViewRequest& request, const UpdateCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCompanyTemplateView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateCompanyTemplateViewOutcomeCallable CloudeslClient::updateCompanyTemplateViewCallable(const UpdateCompanyTemplateViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCompanyTemplateViewOutcome()>>(
			[this, request]()
			{
			return this->updateCompanyTemplateView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateEslDeviceLightOutcome CloudeslClient::updateEslDeviceLight(const UpdateEslDeviceLightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEslDeviceLightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEslDeviceLightOutcome(UpdateEslDeviceLightResult(outcome.result()));
	else
		return UpdateEslDeviceLightOutcome(outcome.error());
}

void CloudeslClient::updateEslDeviceLightAsync(const UpdateEslDeviceLightRequest& request, const UpdateEslDeviceLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEslDeviceLight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateEslDeviceLightOutcomeCallable CloudeslClient::updateEslDeviceLightCallable(const UpdateEslDeviceLightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEslDeviceLightOutcome()>>(
			[this, request]()
			{
			return this->updateEslDeviceLight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateItemMaterialOutcome CloudeslClient::updateItemMaterial(const UpdateItemMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateItemMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateItemMaterialOutcome(UpdateItemMaterialResult(outcome.result()));
	else
		return UpdateItemMaterialOutcome(outcome.error());
}

void CloudeslClient::updateItemMaterialAsync(const UpdateItemMaterialRequest& request, const UpdateItemMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateItemMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateItemMaterialOutcomeCallable CloudeslClient::updateItemMaterialCallable(const UpdateItemMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateItemMaterialOutcome()>>(
			[this, request]()
			{
			return this->updateItemMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateNotificationConfigOutcome CloudeslClient::updateNotificationConfig(const UpdateNotificationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNotificationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNotificationConfigOutcome(UpdateNotificationConfigResult(outcome.result()));
	else
		return UpdateNotificationConfigOutcome(outcome.error());
}

void CloudeslClient::updateNotificationConfigAsync(const UpdateNotificationConfigRequest& request, const UpdateNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNotificationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateNotificationConfigOutcomeCallable CloudeslClient::updateNotificationConfigCallable(const UpdateNotificationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNotificationConfigOutcome()>>(
			[this, request]()
			{
			return this->updateNotificationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateStoreOutcome CloudeslClient::updateStore(const UpdateStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStoreOutcome(UpdateStoreResult(outcome.result()));
	else
		return UpdateStoreOutcome(outcome.error());
}

void CloudeslClient::updateStoreAsync(const UpdateStoreRequest& request, const UpdateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateStoreOutcomeCallable CloudeslClient::updateStoreCallable(const UpdateStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStoreOutcome()>>(
			[this, request]()
			{
			return this->updateStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateStoreConfigOutcome CloudeslClient::updateStoreConfig(const UpdateStoreConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStoreConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStoreConfigOutcome(UpdateStoreConfigResult(outcome.result()));
	else
		return UpdateStoreConfigOutcome(outcome.error());
}

void CloudeslClient::updateStoreConfigAsync(const UpdateStoreConfigRequest& request, const UpdateStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStoreConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateStoreConfigOutcomeCallable CloudeslClient::updateStoreConfigCallable(const UpdateStoreConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStoreConfigOutcome()>>(
			[this, request]()
			{
			return this->updateStoreConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::VerifyNotificationConfigOutcome CloudeslClient::verifyNotificationConfig(const VerifyNotificationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyNotificationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyNotificationConfigOutcome(VerifyNotificationConfigResult(outcome.result()));
	else
		return VerifyNotificationConfigOutcome(outcome.error());
}

void CloudeslClient::verifyNotificationConfigAsync(const VerifyNotificationConfigRequest& request, const VerifyNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyNotificationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::VerifyNotificationConfigOutcomeCallable CloudeslClient::verifyNotificationConfigCallable(const VerifyNotificationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyNotificationConfigOutcome()>>(
			[this, request]()
			{
			return this->verifyNotificationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

