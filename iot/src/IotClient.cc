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

#include <alibabacloud/iot/IotClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

namespace
{
	const std::string SERVICE_NAME = "Iot";
}

IotClient::IotClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iot");
}

IotClient::IotClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iot");
}

IotClient::IotClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iot");
}

IotClient::~IotClient()
{}

IotClient::AddDataForApiSourceOutcome IotClient::addDataForApiSource(const AddDataForApiSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataForApiSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataForApiSourceOutcome(AddDataForApiSourceResult(outcome.result()));
	else
		return AddDataForApiSourceOutcome(outcome.error());
}

void IotClient::addDataForApiSourceAsync(const AddDataForApiSourceRequest& request, const AddDataForApiSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataForApiSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AddDataForApiSourceOutcomeCallable IotClient::addDataForApiSourceCallable(const AddDataForApiSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataForApiSourceOutcome()>>(
			[this, request]()
			{
			return this->addDataForApiSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AddDeviceToSharePromotionOutcome IotClient::addDeviceToSharePromotion(const AddDeviceToSharePromotionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDeviceToSharePromotionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDeviceToSharePromotionOutcome(AddDeviceToSharePromotionResult(outcome.result()));
	else
		return AddDeviceToSharePromotionOutcome(outcome.error());
}

void IotClient::addDeviceToSharePromotionAsync(const AddDeviceToSharePromotionRequest& request, const AddDeviceToSharePromotionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDeviceToSharePromotion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AddDeviceToSharePromotionOutcomeCallable IotClient::addDeviceToSharePromotionCallable(const AddDeviceToSharePromotionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDeviceToSharePromotionOutcome()>>(
			[this, request]()
			{
			return this->addDeviceToSharePromotion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AddPowerStationOutcome IotClient::addPowerStation(const AddPowerStationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPowerStationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPowerStationOutcome(AddPowerStationResult(outcome.result()));
	else
		return AddPowerStationOutcome(outcome.error());
}

void IotClient::addPowerStationAsync(const AddPowerStationRequest& request, const AddPowerStationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPowerStation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AddPowerStationOutcomeCallable IotClient::addPowerStationCallable(const AddPowerStationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPowerStationOutcome()>>(
			[this, request]()
			{
			return this->addPowerStation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AddShareTaskDeviceOutcome IotClient::addShareTaskDevice(const AddShareTaskDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddShareTaskDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddShareTaskDeviceOutcome(AddShareTaskDeviceResult(outcome.result()));
	else
		return AddShareTaskDeviceOutcome(outcome.error());
}

void IotClient::addShareTaskDeviceAsync(const AddShareTaskDeviceRequest& request, const AddShareTaskDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addShareTaskDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AddShareTaskDeviceOutcomeCallable IotClient::addShareTaskDeviceCallable(const AddShareTaskDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddShareTaskDeviceOutcome()>>(
			[this, request]()
			{
			return this->addShareTaskDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AsyncRRpcOutcome IotClient::asyncRRpc(const AsyncRRpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsyncRRpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsyncRRpcOutcome(AsyncRRpcResult(outcome.result()));
	else
		return AsyncRRpcOutcome(outcome.error());
}

void IotClient::asyncRRpcAsync(const AsyncRRpcRequest& request, const AsyncRRpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asyncRRpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AsyncRRpcOutcomeCallable IotClient::asyncRRpcCallable(const AsyncRRpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsyncRRpcOutcome()>>(
			[this, request]()
			{
			return this->asyncRRpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AttachDestinationOutcome IotClient::attachDestination(const AttachDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDestinationOutcome(AttachDestinationResult(outcome.result()));
	else
		return AttachDestinationOutcome(outcome.error());
}

void IotClient::attachDestinationAsync(const AttachDestinationRequest& request, const AttachDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AttachDestinationOutcomeCallable IotClient::attachDestinationCallable(const AttachDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDestinationOutcome()>>(
			[this, request]()
			{
			return this->attachDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::AttachParserDataSourceOutcome IotClient::attachParserDataSource(const AttachParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachParserDataSourceOutcome(AttachParserDataSourceResult(outcome.result()));
	else
		return AttachParserDataSourceOutcome(outcome.error());
}

void IotClient::attachParserDataSourceAsync(const AttachParserDataSourceRequest& request, const AttachParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::AttachParserDataSourceOutcomeCallable IotClient::attachParserDataSourceCallable(const AttachParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->attachParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchAddDataForApiSourceOutcome IotClient::batchAddDataForApiSource(const BatchAddDataForApiSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddDataForApiSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddDataForApiSourceOutcome(BatchAddDataForApiSourceResult(outcome.result()));
	else
		return BatchAddDataForApiSourceOutcome(outcome.error());
}

void IotClient::batchAddDataForApiSourceAsync(const BatchAddDataForApiSourceRequest& request, const BatchAddDataForApiSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddDataForApiSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchAddDataForApiSourceOutcomeCallable IotClient::batchAddDataForApiSourceCallable(const BatchAddDataForApiSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddDataForApiSourceOutcome()>>(
			[this, request]()
			{
			return this->batchAddDataForApiSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchAddDeviceGroupRelationsOutcome IotClient::batchAddDeviceGroupRelations(const BatchAddDeviceGroupRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddDeviceGroupRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddDeviceGroupRelationsOutcome(BatchAddDeviceGroupRelationsResult(outcome.result()));
	else
		return BatchAddDeviceGroupRelationsOutcome(outcome.error());
}

void IotClient::batchAddDeviceGroupRelationsAsync(const BatchAddDeviceGroupRelationsRequest& request, const BatchAddDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddDeviceGroupRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchAddDeviceGroupRelationsOutcomeCallable IotClient::batchAddDeviceGroupRelationsCallable(const BatchAddDeviceGroupRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddDeviceGroupRelationsOutcome()>>(
			[this, request]()
			{
			return this->batchAddDeviceGroupRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchAddThingTopoOutcome IotClient::batchAddThingTopo(const BatchAddThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddThingTopoOutcome(BatchAddThingTopoResult(outcome.result()));
	else
		return BatchAddThingTopoOutcome(outcome.error());
}

void IotClient::batchAddThingTopoAsync(const BatchAddThingTopoRequest& request, const BatchAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchAddThingTopoOutcomeCallable IotClient::batchAddThingTopoCallable(const BatchAddThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddThingTopoOutcome()>>(
			[this, request]()
			{
			return this->batchAddThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchBindDeviceToEdgeInstanceWithDriverOutcome IotClient::batchBindDeviceToEdgeInstanceWithDriver(const BatchBindDeviceToEdgeInstanceWithDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindDeviceToEdgeInstanceWithDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindDeviceToEdgeInstanceWithDriverOutcome(BatchBindDeviceToEdgeInstanceWithDriverResult(outcome.result()));
	else
		return BatchBindDeviceToEdgeInstanceWithDriverOutcome(outcome.error());
}

void IotClient::batchBindDeviceToEdgeInstanceWithDriverAsync(const BatchBindDeviceToEdgeInstanceWithDriverRequest& request, const BatchBindDeviceToEdgeInstanceWithDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindDeviceToEdgeInstanceWithDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchBindDeviceToEdgeInstanceWithDriverOutcomeCallable IotClient::batchBindDeviceToEdgeInstanceWithDriverCallable(const BatchBindDeviceToEdgeInstanceWithDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindDeviceToEdgeInstanceWithDriverOutcome()>>(
			[this, request]()
			{
			return this->batchBindDeviceToEdgeInstanceWithDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchBindDevicesIntoProjectOutcome IotClient::batchBindDevicesIntoProject(const BatchBindDevicesIntoProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindDevicesIntoProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindDevicesIntoProjectOutcome(BatchBindDevicesIntoProjectResult(outcome.result()));
	else
		return BatchBindDevicesIntoProjectOutcome(outcome.error());
}

void IotClient::batchBindDevicesIntoProjectAsync(const BatchBindDevicesIntoProjectRequest& request, const BatchBindDevicesIntoProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindDevicesIntoProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchBindDevicesIntoProjectOutcomeCallable IotClient::batchBindDevicesIntoProjectCallable(const BatchBindDevicesIntoProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindDevicesIntoProjectOutcome()>>(
			[this, request]()
			{
			return this->batchBindDevicesIntoProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchBindProductsIntoProjectOutcome IotClient::batchBindProductsIntoProject(const BatchBindProductsIntoProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindProductsIntoProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindProductsIntoProjectOutcome(BatchBindProductsIntoProjectResult(outcome.result()));
	else
		return BatchBindProductsIntoProjectOutcome(outcome.error());
}

void IotClient::batchBindProductsIntoProjectAsync(const BatchBindProductsIntoProjectRequest& request, const BatchBindProductsIntoProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindProductsIntoProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchBindProductsIntoProjectOutcomeCallable IotClient::batchBindProductsIntoProjectCallable(const BatchBindProductsIntoProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindProductsIntoProjectOutcome()>>(
			[this, request]()
			{
			return this->batchBindProductsIntoProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCheckDeviceNamesOutcome IotClient::batchCheckDeviceNames(const BatchCheckDeviceNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCheckDeviceNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCheckDeviceNamesOutcome(BatchCheckDeviceNamesResult(outcome.result()));
	else
		return BatchCheckDeviceNamesOutcome(outcome.error());
}

void IotClient::batchCheckDeviceNamesAsync(const BatchCheckDeviceNamesRequest& request, const BatchCheckDeviceNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCheckDeviceNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCheckDeviceNamesOutcomeCallable IotClient::batchCheckDeviceNamesCallable(const BatchCheckDeviceNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCheckDeviceNamesOutcome()>>(
			[this, request]()
			{
			return this->batchCheckDeviceNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCheckImportDeviceOutcome IotClient::batchCheckImportDevice(const BatchCheckImportDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCheckImportDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCheckImportDeviceOutcome(BatchCheckImportDeviceResult(outcome.result()));
	else
		return BatchCheckImportDeviceOutcome(outcome.error());
}

void IotClient::batchCheckImportDeviceAsync(const BatchCheckImportDeviceRequest& request, const BatchCheckImportDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCheckImportDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCheckImportDeviceOutcomeCallable IotClient::batchCheckImportDeviceCallable(const BatchCheckImportDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCheckImportDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchCheckImportDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCheckVehicleDeviceOutcome IotClient::batchCheckVehicleDevice(const BatchCheckVehicleDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCheckVehicleDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCheckVehicleDeviceOutcome(BatchCheckVehicleDeviceResult(outcome.result()));
	else
		return BatchCheckVehicleDeviceOutcome(outcome.error());
}

void IotClient::batchCheckVehicleDeviceAsync(const BatchCheckVehicleDeviceRequest& request, const BatchCheckVehicleDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCheckVehicleDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCheckVehicleDeviceOutcomeCallable IotClient::batchCheckVehicleDeviceCallable(const BatchCheckVehicleDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCheckVehicleDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchCheckVehicleDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchClearEdgeInstanceDeviceConfigOutcome IotClient::batchClearEdgeInstanceDeviceConfig(const BatchClearEdgeInstanceDeviceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchClearEdgeInstanceDeviceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchClearEdgeInstanceDeviceConfigOutcome(BatchClearEdgeInstanceDeviceConfigResult(outcome.result()));
	else
		return BatchClearEdgeInstanceDeviceConfigOutcome(outcome.error());
}

void IotClient::batchClearEdgeInstanceDeviceConfigAsync(const BatchClearEdgeInstanceDeviceConfigRequest& request, const BatchClearEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchClearEdgeInstanceDeviceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchClearEdgeInstanceDeviceConfigOutcomeCallable IotClient::batchClearEdgeInstanceDeviceConfigCallable(const BatchClearEdgeInstanceDeviceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchClearEdgeInstanceDeviceConfigOutcome()>>(
			[this, request]()
			{
			return this->batchClearEdgeInstanceDeviceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCreateSoundCodeLabelOutcome IotClient::batchCreateSoundCodeLabel(const BatchCreateSoundCodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreateSoundCodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreateSoundCodeLabelOutcome(BatchCreateSoundCodeLabelResult(outcome.result()));
	else
		return BatchCreateSoundCodeLabelOutcome(outcome.error());
}

void IotClient::batchCreateSoundCodeLabelAsync(const BatchCreateSoundCodeLabelRequest& request, const BatchCreateSoundCodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreateSoundCodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCreateSoundCodeLabelOutcomeCallable IotClient::batchCreateSoundCodeLabelCallable(const BatchCreateSoundCodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreateSoundCodeLabelOutcome()>>(
			[this, request]()
			{
			return this->batchCreateSoundCodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCreateSoundCodeLabelWithLabelsOutcome IotClient::batchCreateSoundCodeLabelWithLabels(const BatchCreateSoundCodeLabelWithLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreateSoundCodeLabelWithLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreateSoundCodeLabelWithLabelsOutcome(BatchCreateSoundCodeLabelWithLabelsResult(outcome.result()));
	else
		return BatchCreateSoundCodeLabelWithLabelsOutcome(outcome.error());
}

void IotClient::batchCreateSoundCodeLabelWithLabelsAsync(const BatchCreateSoundCodeLabelWithLabelsRequest& request, const BatchCreateSoundCodeLabelWithLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreateSoundCodeLabelWithLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCreateSoundCodeLabelWithLabelsOutcomeCallable IotClient::batchCreateSoundCodeLabelWithLabelsCallable(const BatchCreateSoundCodeLabelWithLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreateSoundCodeLabelWithLabelsOutcome()>>(
			[this, request]()
			{
			return this->batchCreateSoundCodeLabelWithLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchDeleteDeviceGroupRelationsOutcome IotClient::batchDeleteDeviceGroupRelations(const BatchDeleteDeviceGroupRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDeviceGroupRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDeviceGroupRelationsOutcome(BatchDeleteDeviceGroupRelationsResult(outcome.result()));
	else
		return BatchDeleteDeviceGroupRelationsOutcome(outcome.error());
}

void IotClient::batchDeleteDeviceGroupRelationsAsync(const BatchDeleteDeviceGroupRelationsRequest& request, const BatchDeleteDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDeviceGroupRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchDeleteDeviceGroupRelationsOutcomeCallable IotClient::batchDeleteDeviceGroupRelationsCallable(const BatchDeleteDeviceGroupRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDeviceGroupRelationsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDeviceGroupRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchDeleteEdgeInstanceChannelOutcome IotClient::batchDeleteEdgeInstanceChannel(const BatchDeleteEdgeInstanceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteEdgeInstanceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteEdgeInstanceChannelOutcome(BatchDeleteEdgeInstanceChannelResult(outcome.result()));
	else
		return BatchDeleteEdgeInstanceChannelOutcome(outcome.error());
}

void IotClient::batchDeleteEdgeInstanceChannelAsync(const BatchDeleteEdgeInstanceChannelRequest& request, const BatchDeleteEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteEdgeInstanceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchDeleteEdgeInstanceChannelOutcomeCallable IotClient::batchDeleteEdgeInstanceChannelCallable(const BatchDeleteEdgeInstanceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteEdgeInstanceChannelOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteEdgeInstanceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetDeviceBindStatusOutcome IotClient::batchGetDeviceBindStatus(const BatchGetDeviceBindStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetDeviceBindStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetDeviceBindStatusOutcome(BatchGetDeviceBindStatusResult(outcome.result()));
	else
		return BatchGetDeviceBindStatusOutcome(outcome.error());
}

void IotClient::batchGetDeviceBindStatusAsync(const BatchGetDeviceBindStatusRequest& request, const BatchGetDeviceBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetDeviceBindStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetDeviceBindStatusOutcomeCallable IotClient::batchGetDeviceBindStatusCallable(const BatchGetDeviceBindStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetDeviceBindStatusOutcome()>>(
			[this, request]()
			{
			return this->batchGetDeviceBindStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetDeviceStateOutcome IotClient::batchGetDeviceState(const BatchGetDeviceStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetDeviceStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetDeviceStateOutcome(BatchGetDeviceStateResult(outcome.result()));
	else
		return BatchGetDeviceStateOutcome(outcome.error());
}

void IotClient::batchGetDeviceStateAsync(const BatchGetDeviceStateRequest& request, const BatchGetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetDeviceState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetDeviceStateOutcomeCallable IotClient::batchGetDeviceStateCallable(const BatchGetDeviceStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetDeviceStateOutcome()>>(
			[this, request]()
			{
			return this->batchGetDeviceState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeDriverOutcome IotClient::batchGetEdgeDriver(const BatchGetEdgeDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeDriverOutcome(BatchGetEdgeDriverResult(outcome.result()));
	else
		return BatchGetEdgeDriverOutcome(outcome.error());
}

void IotClient::batchGetEdgeDriverAsync(const BatchGetEdgeDriverRequest& request, const BatchGetEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeDriverOutcomeCallable IotClient::batchGetEdgeDriverCallable(const BatchGetEdgeDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeDriverOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeInstanceChannelOutcome IotClient::batchGetEdgeInstanceChannel(const BatchGetEdgeInstanceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeInstanceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeInstanceChannelOutcome(BatchGetEdgeInstanceChannelResult(outcome.result()));
	else
		return BatchGetEdgeInstanceChannelOutcome(outcome.error());
}

void IotClient::batchGetEdgeInstanceChannelAsync(const BatchGetEdgeInstanceChannelRequest& request, const BatchGetEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeInstanceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeInstanceChannelOutcomeCallable IotClient::batchGetEdgeInstanceChannelCallable(const BatchGetEdgeInstanceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeInstanceChannelOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeInstanceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeInstanceDeviceChannelOutcome IotClient::batchGetEdgeInstanceDeviceChannel(const BatchGetEdgeInstanceDeviceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeInstanceDeviceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeInstanceDeviceChannelOutcome(BatchGetEdgeInstanceDeviceChannelResult(outcome.result()));
	else
		return BatchGetEdgeInstanceDeviceChannelOutcome(outcome.error());
}

void IotClient::batchGetEdgeInstanceDeviceChannelAsync(const BatchGetEdgeInstanceDeviceChannelRequest& request, const BatchGetEdgeInstanceDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeInstanceDeviceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeInstanceDeviceChannelOutcomeCallable IotClient::batchGetEdgeInstanceDeviceChannelCallable(const BatchGetEdgeInstanceDeviceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeInstanceDeviceChannelOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeInstanceDeviceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeInstanceDeviceConfigOutcome IotClient::batchGetEdgeInstanceDeviceConfig(const BatchGetEdgeInstanceDeviceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeInstanceDeviceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeInstanceDeviceConfigOutcome(BatchGetEdgeInstanceDeviceConfigResult(outcome.result()));
	else
		return BatchGetEdgeInstanceDeviceConfigOutcome(outcome.error());
}

void IotClient::batchGetEdgeInstanceDeviceConfigAsync(const BatchGetEdgeInstanceDeviceConfigRequest& request, const BatchGetEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeInstanceDeviceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeInstanceDeviceConfigOutcomeCallable IotClient::batchGetEdgeInstanceDeviceConfigCallable(const BatchGetEdgeInstanceDeviceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeInstanceDeviceConfigOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeInstanceDeviceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeInstanceDeviceDriverOutcome IotClient::batchGetEdgeInstanceDeviceDriver(const BatchGetEdgeInstanceDeviceDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeInstanceDeviceDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeInstanceDeviceDriverOutcome(BatchGetEdgeInstanceDeviceDriverResult(outcome.result()));
	else
		return BatchGetEdgeInstanceDeviceDriverOutcome(outcome.error());
}

void IotClient::batchGetEdgeInstanceDeviceDriverAsync(const BatchGetEdgeInstanceDeviceDriverRequest& request, const BatchGetEdgeInstanceDeviceDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeInstanceDeviceDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeInstanceDeviceDriverOutcomeCallable IotClient::batchGetEdgeInstanceDeviceDriverCallable(const BatchGetEdgeInstanceDeviceDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeInstanceDeviceDriverOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeInstanceDeviceDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetEdgeInstanceDriverConfigsOutcome IotClient::batchGetEdgeInstanceDriverConfigs(const BatchGetEdgeInstanceDriverConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetEdgeInstanceDriverConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetEdgeInstanceDriverConfigsOutcome(BatchGetEdgeInstanceDriverConfigsResult(outcome.result()));
	else
		return BatchGetEdgeInstanceDriverConfigsOutcome(outcome.error());
}

void IotClient::batchGetEdgeInstanceDriverConfigsAsync(const BatchGetEdgeInstanceDriverConfigsRequest& request, const BatchGetEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetEdgeInstanceDriverConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetEdgeInstanceDriverConfigsOutcomeCallable IotClient::batchGetEdgeInstanceDriverConfigsCallable(const BatchGetEdgeInstanceDriverConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetEdgeInstanceDriverConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchGetEdgeInstanceDriverConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGrayMigrationDeviceOutcome IotClient::batchGrayMigrationDevice(const BatchGrayMigrationDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGrayMigrationDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGrayMigrationDeviceOutcome(BatchGrayMigrationDeviceResult(outcome.result()));
	else
		return BatchGrayMigrationDeviceOutcome(outcome.error());
}

void IotClient::batchGrayMigrationDeviceAsync(const BatchGrayMigrationDeviceRequest& request, const BatchGrayMigrationDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGrayMigrationDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGrayMigrationDeviceOutcomeCallable IotClient::batchGrayMigrationDeviceCallable(const BatchGrayMigrationDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGrayMigrationDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchGrayMigrationDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchImportDeviceOutcome IotClient::batchImportDevice(const BatchImportDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchImportDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchImportDeviceOutcome(BatchImportDeviceResult(outcome.result()));
	else
		return BatchImportDeviceOutcome(outcome.error());
}

void IotClient::batchImportDeviceAsync(const BatchImportDeviceRequest& request, const BatchImportDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchImportDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchImportDeviceOutcomeCallable IotClient::batchImportDeviceCallable(const BatchImportDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchImportDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchImportDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchImportVehicleDeviceOutcome IotClient::batchImportVehicleDevice(const BatchImportVehicleDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchImportVehicleDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchImportVehicleDeviceOutcome(BatchImportVehicleDeviceResult(outcome.result()));
	else
		return BatchImportVehicleDeviceOutcome(outcome.error());
}

void IotClient::batchImportVehicleDeviceAsync(const BatchImportVehicleDeviceRequest& request, const BatchImportVehicleDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchImportVehicleDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchImportVehicleDeviceOutcomeCallable IotClient::batchImportVehicleDeviceCallable(const BatchImportVehicleDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchImportVehicleDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchImportVehicleDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchPubOutcome IotClient::batchPub(const BatchPubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchPubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchPubOutcome(BatchPubResult(outcome.result()));
	else
		return BatchPubOutcome(outcome.error());
}

void IotClient::batchPubAsync(const BatchPubRequest& request, const BatchPubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchPub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchPubOutcomeCallable IotClient::batchPubCallable(const BatchPubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchPubOutcome()>>(
			[this, request]()
			{
			return this->batchPub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchQueryDeviceDetailOutcome IotClient::batchQueryDeviceDetail(const BatchQueryDeviceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchQueryDeviceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchQueryDeviceDetailOutcome(BatchQueryDeviceDetailResult(outcome.result()));
	else
		return BatchQueryDeviceDetailOutcome(outcome.error());
}

void IotClient::batchQueryDeviceDetailAsync(const BatchQueryDeviceDetailRequest& request, const BatchQueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchQueryDeviceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchQueryDeviceDetailOutcomeCallable IotClient::batchQueryDeviceDetailCallable(const BatchQueryDeviceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchQueryDeviceDetailOutcome()>>(
			[this, request]()
			{
			return this->batchQueryDeviceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchRegisterDeviceOutcome IotClient::batchRegisterDevice(const BatchRegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRegisterDeviceOutcome(BatchRegisterDeviceResult(outcome.result()));
	else
		return BatchRegisterDeviceOutcome(outcome.error());
}

void IotClient::batchRegisterDeviceAsync(const BatchRegisterDeviceRequest& request, const BatchRegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRegisterDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchRegisterDeviceOutcomeCallable IotClient::batchRegisterDeviceCallable(const BatchRegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchRegisterDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchRegisterDeviceWithApplyIdOutcome IotClient::batchRegisterDeviceWithApplyId(const BatchRegisterDeviceWithApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRegisterDeviceWithApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRegisterDeviceWithApplyIdOutcome(BatchRegisterDeviceWithApplyIdResult(outcome.result()));
	else
		return BatchRegisterDeviceWithApplyIdOutcome(outcome.error());
}

void IotClient::batchRegisterDeviceWithApplyIdAsync(const BatchRegisterDeviceWithApplyIdRequest& request, const BatchRegisterDeviceWithApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRegisterDeviceWithApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchRegisterDeviceWithApplyIdOutcomeCallable IotClient::batchRegisterDeviceWithApplyIdCallable(const BatchRegisterDeviceWithApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRegisterDeviceWithApplyIdOutcome()>>(
			[this, request]()
			{
			return this->batchRegisterDeviceWithApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchSetEdgeInstanceDeviceChannelOutcome IotClient::batchSetEdgeInstanceDeviceChannel(const BatchSetEdgeInstanceDeviceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetEdgeInstanceDeviceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetEdgeInstanceDeviceChannelOutcome(BatchSetEdgeInstanceDeviceChannelResult(outcome.result()));
	else
		return BatchSetEdgeInstanceDeviceChannelOutcome(outcome.error());
}

void IotClient::batchSetEdgeInstanceDeviceChannelAsync(const BatchSetEdgeInstanceDeviceChannelRequest& request, const BatchSetEdgeInstanceDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetEdgeInstanceDeviceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchSetEdgeInstanceDeviceChannelOutcomeCallable IotClient::batchSetEdgeInstanceDeviceChannelCallable(const BatchSetEdgeInstanceDeviceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetEdgeInstanceDeviceChannelOutcome()>>(
			[this, request]()
			{
			return this->batchSetEdgeInstanceDeviceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchSetEdgeInstanceDeviceConfigOutcome IotClient::batchSetEdgeInstanceDeviceConfig(const BatchSetEdgeInstanceDeviceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetEdgeInstanceDeviceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetEdgeInstanceDeviceConfigOutcome(BatchSetEdgeInstanceDeviceConfigResult(outcome.result()));
	else
		return BatchSetEdgeInstanceDeviceConfigOutcome(outcome.error());
}

void IotClient::batchSetEdgeInstanceDeviceConfigAsync(const BatchSetEdgeInstanceDeviceConfigRequest& request, const BatchSetEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetEdgeInstanceDeviceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchSetEdgeInstanceDeviceConfigOutcomeCallable IotClient::batchSetEdgeInstanceDeviceConfigCallable(const BatchSetEdgeInstanceDeviceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetEdgeInstanceDeviceConfigOutcome()>>(
			[this, request]()
			{
			return this->batchSetEdgeInstanceDeviceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchUnbindDeviceFromEdgeInstanceOutcome IotClient::batchUnbindDeviceFromEdgeInstance(const BatchUnbindDeviceFromEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindDeviceFromEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindDeviceFromEdgeInstanceOutcome(BatchUnbindDeviceFromEdgeInstanceResult(outcome.result()));
	else
		return BatchUnbindDeviceFromEdgeInstanceOutcome(outcome.error());
}

void IotClient::batchUnbindDeviceFromEdgeInstanceAsync(const BatchUnbindDeviceFromEdgeInstanceRequest& request, const BatchUnbindDeviceFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindDeviceFromEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchUnbindDeviceFromEdgeInstanceOutcomeCallable IotClient::batchUnbindDeviceFromEdgeInstanceCallable(const BatchUnbindDeviceFromEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindDeviceFromEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindDeviceFromEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchUnbindProjectDevicesOutcome IotClient::batchUnbindProjectDevices(const BatchUnbindProjectDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindProjectDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindProjectDevicesOutcome(BatchUnbindProjectDevicesResult(outcome.result()));
	else
		return BatchUnbindProjectDevicesOutcome(outcome.error());
}

void IotClient::batchUnbindProjectDevicesAsync(const BatchUnbindProjectDevicesRequest& request, const BatchUnbindProjectDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindProjectDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchUnbindProjectDevicesOutcomeCallable IotClient::batchUnbindProjectDevicesCallable(const BatchUnbindProjectDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindProjectDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindProjectDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchUnbindProjectProductsOutcome IotClient::batchUnbindProjectProducts(const BatchUnbindProjectProductsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindProjectProductsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindProjectProductsOutcome(BatchUnbindProjectProductsResult(outcome.result()));
	else
		return BatchUnbindProjectProductsOutcome(outcome.error());
}

void IotClient::batchUnbindProjectProductsAsync(const BatchUnbindProjectProductsRequest& request, const BatchUnbindProjectProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindProjectProducts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchUnbindProjectProductsOutcomeCallable IotClient::batchUnbindProjectProductsCallable(const BatchUnbindProjectProductsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindProjectProductsOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindProjectProducts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchUpdateDeviceNicknameOutcome IotClient::batchUpdateDeviceNickname(const BatchUpdateDeviceNicknameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateDeviceNicknameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateDeviceNicknameOutcome(BatchUpdateDeviceNicknameResult(outcome.result()));
	else
		return BatchUpdateDeviceNicknameOutcome(outcome.error());
}

void IotClient::batchUpdateDeviceNicknameAsync(const BatchUpdateDeviceNicknameRequest& request, const BatchUpdateDeviceNicknameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateDeviceNickname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchUpdateDeviceNicknameOutcomeCallable IotClient::batchUpdateDeviceNicknameCallable(const BatchUpdateDeviceNicknameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateDeviceNicknameOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateDeviceNickname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindApplicationToEdgeInstanceOutcome IotClient::bindApplicationToEdgeInstance(const BindApplicationToEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindApplicationToEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindApplicationToEdgeInstanceOutcome(BindApplicationToEdgeInstanceResult(outcome.result()));
	else
		return BindApplicationToEdgeInstanceOutcome(outcome.error());
}

void IotClient::bindApplicationToEdgeInstanceAsync(const BindApplicationToEdgeInstanceRequest& request, const BindApplicationToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindApplicationToEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindApplicationToEdgeInstanceOutcomeCallable IotClient::bindApplicationToEdgeInstanceCallable(const BindApplicationToEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindApplicationToEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindApplicationToEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindDriverToEdgeInstanceOutcome IotClient::bindDriverToEdgeInstance(const BindDriverToEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindDriverToEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindDriverToEdgeInstanceOutcome(BindDriverToEdgeInstanceResult(outcome.result()));
	else
		return BindDriverToEdgeInstanceOutcome(outcome.error());
}

void IotClient::bindDriverToEdgeInstanceAsync(const BindDriverToEdgeInstanceRequest& request, const BindDriverToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindDriverToEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindDriverToEdgeInstanceOutcomeCallable IotClient::bindDriverToEdgeInstanceCallable(const BindDriverToEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindDriverToEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindDriverToEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindGatewayToEdgeInstanceOutcome IotClient::bindGatewayToEdgeInstance(const BindGatewayToEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindGatewayToEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindGatewayToEdgeInstanceOutcome(BindGatewayToEdgeInstanceResult(outcome.result()));
	else
		return BindGatewayToEdgeInstanceOutcome(outcome.error());
}

void IotClient::bindGatewayToEdgeInstanceAsync(const BindGatewayToEdgeInstanceRequest& request, const BindGatewayToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindGatewayToEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindGatewayToEdgeInstanceOutcomeCallable IotClient::bindGatewayToEdgeInstanceCallable(const BindGatewayToEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindGatewayToEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindGatewayToEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindLicenseDeviceOutcome IotClient::bindLicenseDevice(const BindLicenseDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindLicenseDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindLicenseDeviceOutcome(BindLicenseDeviceResult(outcome.result()));
	else
		return BindLicenseDeviceOutcome(outcome.error());
}

void IotClient::bindLicenseDeviceAsync(const BindLicenseDeviceRequest& request, const BindLicenseDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindLicenseDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindLicenseDeviceOutcomeCallable IotClient::bindLicenseDeviceCallable(const BindLicenseDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindLicenseDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindLicenseDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindLicenseProductOutcome IotClient::bindLicenseProduct(const BindLicenseProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindLicenseProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindLicenseProductOutcome(BindLicenseProductResult(outcome.result()));
	else
		return BindLicenseProductOutcome(outcome.error());
}

void IotClient::bindLicenseProductAsync(const BindLicenseProductRequest& request, const BindLicenseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindLicenseProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindLicenseProductOutcomeCallable IotClient::bindLicenseProductCallable(const BindLicenseProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindLicenseProductOutcome()>>(
			[this, request]()
			{
			return this->bindLicenseProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindRoleToEdgeInstanceOutcome IotClient::bindRoleToEdgeInstance(const BindRoleToEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindRoleToEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindRoleToEdgeInstanceOutcome(BindRoleToEdgeInstanceResult(outcome.result()));
	else
		return BindRoleToEdgeInstanceOutcome(outcome.error());
}

void IotClient::bindRoleToEdgeInstanceAsync(const BindRoleToEdgeInstanceRequest& request, const BindRoleToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindRoleToEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindRoleToEdgeInstanceOutcomeCallable IotClient::bindRoleToEdgeInstanceCallable(const BindRoleToEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindRoleToEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindRoleToEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BindSceneRuleToEdgeInstanceOutcome IotClient::bindSceneRuleToEdgeInstance(const BindSceneRuleToEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSceneRuleToEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSceneRuleToEdgeInstanceOutcome(BindSceneRuleToEdgeInstanceResult(outcome.result()));
	else
		return BindSceneRuleToEdgeInstanceOutcome(outcome.error());
}

void IotClient::bindSceneRuleToEdgeInstanceAsync(const BindSceneRuleToEdgeInstanceRequest& request, const BindSceneRuleToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSceneRuleToEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BindSceneRuleToEdgeInstanceOutcomeCallable IotClient::bindSceneRuleToEdgeInstanceCallable(const BindSceneRuleToEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSceneRuleToEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindSceneRuleToEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CancelJobOutcome IotClient::cancelJob(const CancelJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelJobOutcome(CancelJobResult(outcome.result()));
	else
		return CancelJobOutcome(outcome.error());
}

void IotClient::cancelJobAsync(const CancelJobRequest& request, const CancelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CancelJobOutcomeCallable IotClient::cancelJobCallable(const CancelJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJobOutcome()>>(
			[this, request]()
			{
			return this->cancelJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CancelOTAStrategyByJobOutcome IotClient::cancelOTAStrategyByJob(const CancelOTAStrategyByJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOTAStrategyByJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOTAStrategyByJobOutcome(CancelOTAStrategyByJobResult(outcome.result()));
	else
		return CancelOTAStrategyByJobOutcome(outcome.error());
}

void IotClient::cancelOTAStrategyByJobAsync(const CancelOTAStrategyByJobRequest& request, const CancelOTAStrategyByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOTAStrategyByJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CancelOTAStrategyByJobOutcomeCallable IotClient::cancelOTAStrategyByJobCallable(const CancelOTAStrategyByJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOTAStrategyByJobOutcome()>>(
			[this, request]()
			{
			return this->cancelOTAStrategyByJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CancelOTATaskByDeviceOutcome IotClient::cancelOTATaskByDevice(const CancelOTATaskByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOTATaskByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOTATaskByDeviceOutcome(CancelOTATaskByDeviceResult(outcome.result()));
	else
		return CancelOTATaskByDeviceOutcome(outcome.error());
}

void IotClient::cancelOTATaskByDeviceAsync(const CancelOTATaskByDeviceRequest& request, const CancelOTATaskByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOTATaskByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CancelOTATaskByDeviceOutcomeCallable IotClient::cancelOTATaskByDeviceCallable(const CancelOTATaskByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOTATaskByDeviceOutcome()>>(
			[this, request]()
			{
			return this->cancelOTATaskByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CancelOTATaskByJobOutcome IotClient::cancelOTATaskByJob(const CancelOTATaskByJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOTATaskByJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOTATaskByJobOutcome(CancelOTATaskByJobResult(outcome.result()));
	else
		return CancelOTATaskByJobOutcome(outcome.error());
}

void IotClient::cancelOTATaskByJobAsync(const CancelOTATaskByJobRequest& request, const CancelOTATaskByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOTATaskByJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CancelOTATaskByJobOutcomeCallable IotClient::cancelOTATaskByJobCallable(const CancelOTATaskByJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOTATaskByJobOutcome()>>(
			[this, request]()
			{
			return this->cancelOTATaskByJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CancelReleaseProductOutcome IotClient::cancelReleaseProduct(const CancelReleaseProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelReleaseProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelReleaseProductOutcome(CancelReleaseProductResult(outcome.result()));
	else
		return CancelReleaseProductOutcome(outcome.error());
}

void IotClient::cancelReleaseProductAsync(const CancelReleaseProductRequest& request, const CancelReleaseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelReleaseProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CancelReleaseProductOutcomeCallable IotClient::cancelReleaseProductCallable(const CancelReleaseProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelReleaseProductOutcome()>>(
			[this, request]()
			{
			return this->cancelReleaseProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CheckBindLicenseDeviceProgressOutcome IotClient::checkBindLicenseDeviceProgress(const CheckBindLicenseDeviceProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckBindLicenseDeviceProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckBindLicenseDeviceProgressOutcome(CheckBindLicenseDeviceProgressResult(outcome.result()));
	else
		return CheckBindLicenseDeviceProgressOutcome(outcome.error());
}

void IotClient::checkBindLicenseDeviceProgressAsync(const CheckBindLicenseDeviceProgressRequest& request, const CheckBindLicenseDeviceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkBindLicenseDeviceProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CheckBindLicenseDeviceProgressOutcomeCallable IotClient::checkBindLicenseDeviceProgressCallable(const CheckBindLicenseDeviceProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckBindLicenseDeviceProgressOutcome()>>(
			[this, request]()
			{
			return this->checkBindLicenseDeviceProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ClearDeviceDesiredPropertyOutcome IotClient::clearDeviceDesiredProperty(const ClearDeviceDesiredPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearDeviceDesiredPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearDeviceDesiredPropertyOutcome(ClearDeviceDesiredPropertyResult(outcome.result()));
	else
		return ClearDeviceDesiredPropertyOutcome(outcome.error());
}

void IotClient::clearDeviceDesiredPropertyAsync(const ClearDeviceDesiredPropertyRequest& request, const ClearDeviceDesiredPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearDeviceDesiredProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ClearDeviceDesiredPropertyOutcomeCallable IotClient::clearDeviceDesiredPropertyCallable(const ClearDeviceDesiredPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearDeviceDesiredPropertyOutcome()>>(
			[this, request]()
			{
			return this->clearDeviceDesiredProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ClearEdgeInstanceDriverConfigsOutcome IotClient::clearEdgeInstanceDriverConfigs(const ClearEdgeInstanceDriverConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearEdgeInstanceDriverConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearEdgeInstanceDriverConfigsOutcome(ClearEdgeInstanceDriverConfigsResult(outcome.result()));
	else
		return ClearEdgeInstanceDriverConfigsOutcome(outcome.error());
}

void IotClient::clearEdgeInstanceDriverConfigsAsync(const ClearEdgeInstanceDriverConfigsRequest& request, const ClearEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearEdgeInstanceDriverConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ClearEdgeInstanceDriverConfigsOutcomeCallable IotClient::clearEdgeInstanceDriverConfigsCallable(const ClearEdgeInstanceDriverConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearEdgeInstanceDriverConfigsOutcome()>>(
			[this, request]()
			{
			return this->clearEdgeInstanceDriverConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CloseDeviceTunnelOutcome IotClient::closeDeviceTunnel(const CloseDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDeviceTunnelOutcome(CloseDeviceTunnelResult(outcome.result()));
	else
		return CloseDeviceTunnelOutcome(outcome.error());
}

void IotClient::closeDeviceTunnelAsync(const CloseDeviceTunnelRequest& request, const CloseDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CloseDeviceTunnelOutcomeCallable IotClient::closeDeviceTunnelCallable(const CloseDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->closeDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CloseEdgeInstanceDeploymentOutcome IotClient::closeEdgeInstanceDeployment(const CloseEdgeInstanceDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseEdgeInstanceDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseEdgeInstanceDeploymentOutcome(CloseEdgeInstanceDeploymentResult(outcome.result()));
	else
		return CloseEdgeInstanceDeploymentOutcome(outcome.error());
}

void IotClient::closeEdgeInstanceDeploymentAsync(const CloseEdgeInstanceDeploymentRequest& request, const CloseEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeEdgeInstanceDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CloseEdgeInstanceDeploymentOutcomeCallable IotClient::closeEdgeInstanceDeploymentCallable(const CloseEdgeInstanceDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseEdgeInstanceDeploymentOutcome()>>(
			[this, request]()
			{
			return this->closeEdgeInstanceDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ConfirmOTATaskOutcome IotClient::confirmOTATask(const ConfirmOTATaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmOTATaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmOTATaskOutcome(ConfirmOTATaskResult(outcome.result()));
	else
		return ConfirmOTATaskOutcome(outcome.error());
}

void IotClient::confirmOTATaskAsync(const ConfirmOTATaskRequest& request, const ConfirmOTATaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmOTATask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ConfirmOTATaskOutcomeCallable IotClient::confirmOTATaskCallable(const ConfirmOTATaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmOTATaskOutcome()>>(
			[this, request]()
			{
			return this->confirmOTATask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CopyThingModelOutcome IotClient::copyThingModel(const CopyThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyThingModelOutcome(CopyThingModelResult(outcome.result()));
	else
		return CopyThingModelOutcome(outcome.error());
}

void IotClient::copyThingModelAsync(const CopyThingModelRequest& request, const CopyThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CopyThingModelOutcomeCallable IotClient::copyThingModelCallable(const CopyThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyThingModelOutcome()>>(
			[this, request]()
			{
			return this->copyThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CopyThingModelAsyncOutcome IotClient::copyThingModelAsync(const CopyThingModelAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyThingModelAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyThingModelAsyncOutcome(CopyThingModelAsyncResult(outcome.result()));
	else
		return CopyThingModelAsyncOutcome(outcome.error());
}

void IotClient::copyThingModelAsyncAsync(const CopyThingModelAsyncRequest& request, const CopyThingModelAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyThingModelAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CopyThingModelAsyncOutcomeCallable IotClient::copyThingModelAsyncCallable(const CopyThingModelAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyThingModelAsyncOutcome()>>(
			[this, request]()
			{
			return this->copyThingModelAsync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CountSpeechBroadcastHourOutcome IotClient::countSpeechBroadcastHour(const CountSpeechBroadcastHourRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountSpeechBroadcastHourOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountSpeechBroadcastHourOutcome(CountSpeechBroadcastHourResult(outcome.result()));
	else
		return CountSpeechBroadcastHourOutcome(outcome.error());
}

void IotClient::countSpeechBroadcastHourAsync(const CountSpeechBroadcastHourRequest& request, const CountSpeechBroadcastHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countSpeechBroadcastHour(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CountSpeechBroadcastHourOutcomeCallable IotClient::countSpeechBroadcastHourCallable(const CountSpeechBroadcastHourRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountSpeechBroadcastHourOutcome()>>(
			[this, request]()
			{
			return this->countSpeechBroadcastHour(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateConsumerGroupOutcome IotClient::createConsumerGroup(const CreateConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConsumerGroupOutcome(CreateConsumerGroupResult(outcome.result()));
	else
		return CreateConsumerGroupOutcome(outcome.error());
}

void IotClient::createConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateConsumerGroupOutcomeCallable IotClient::createConsumerGroupCallable(const CreateConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->createConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateConsumerGroupSubscribeRelationOutcome IotClient::createConsumerGroupSubscribeRelation(const CreateConsumerGroupSubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConsumerGroupSubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConsumerGroupSubscribeRelationOutcome(CreateConsumerGroupSubscribeRelationResult(outcome.result()));
	else
		return CreateConsumerGroupSubscribeRelationOutcome(outcome.error());
}

void IotClient::createConsumerGroupSubscribeRelationAsync(const CreateConsumerGroupSubscribeRelationRequest& request, const CreateConsumerGroupSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConsumerGroupSubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateConsumerGroupSubscribeRelationOutcomeCallable IotClient::createConsumerGroupSubscribeRelationCallable(const CreateConsumerGroupSubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConsumerGroupSubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->createConsumerGroupSubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDataAPIServiceOutcome IotClient::createDataAPIService(const CreateDataAPIServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataAPIServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataAPIServiceOutcome(CreateDataAPIServiceResult(outcome.result()));
	else
		return CreateDataAPIServiceOutcome(outcome.error());
}

void IotClient::createDataAPIServiceAsync(const CreateDataAPIServiceRequest& request, const CreateDataAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataAPIService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDataAPIServiceOutcomeCallable IotClient::createDataAPIServiceCallable(const CreateDataAPIServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataAPIServiceOutcome()>>(
			[this, request]()
			{
			return this->createDataAPIService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDataSourceItemOutcome IotClient::createDataSourceItem(const CreateDataSourceItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataSourceItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataSourceItemOutcome(CreateDataSourceItemResult(outcome.result()));
	else
		return CreateDataSourceItemOutcome(outcome.error());
}

void IotClient::createDataSourceItemAsync(const CreateDataSourceItemRequest& request, const CreateDataSourceItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataSourceItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDataSourceItemOutcomeCallable IotClient::createDataSourceItemCallable(const CreateDataSourceItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataSourceItemOutcome()>>(
			[this, request]()
			{
			return this->createDataSourceItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDestinationOutcome IotClient::createDestination(const CreateDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDestinationOutcome(CreateDestinationResult(outcome.result()));
	else
		return CreateDestinationOutcome(outcome.error());
}

void IotClient::createDestinationAsync(const CreateDestinationRequest& request, const CreateDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDestinationOutcomeCallable IotClient::createDestinationCallable(const CreateDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDestinationOutcome()>>(
			[this, request]()
			{
			return this->createDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDeviceDistributeJobOutcome IotClient::createDeviceDistributeJob(const CreateDeviceDistributeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceDistributeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceDistributeJobOutcome(CreateDeviceDistributeJobResult(outcome.result()));
	else
		return CreateDeviceDistributeJobOutcome(outcome.error());
}

void IotClient::createDeviceDistributeJobAsync(const CreateDeviceDistributeJobRequest& request, const CreateDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceDistributeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDeviceDistributeJobOutcomeCallable IotClient::createDeviceDistributeJobCallable(const CreateDeviceDistributeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceDistributeJobOutcome()>>(
			[this, request]()
			{
			return this->createDeviceDistributeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDeviceDynamicGroupOutcome IotClient::createDeviceDynamicGroup(const CreateDeviceDynamicGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceDynamicGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceDynamicGroupOutcome(CreateDeviceDynamicGroupResult(outcome.result()));
	else
		return CreateDeviceDynamicGroupOutcome(outcome.error());
}

void IotClient::createDeviceDynamicGroupAsync(const CreateDeviceDynamicGroupRequest& request, const CreateDeviceDynamicGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceDynamicGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDeviceDynamicGroupOutcomeCallable IotClient::createDeviceDynamicGroupCallable(const CreateDeviceDynamicGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceDynamicGroupOutcome()>>(
			[this, request]()
			{
			return this->createDeviceDynamicGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDeviceGroupOutcome IotClient::createDeviceGroup(const CreateDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceGroupOutcome(CreateDeviceGroupResult(outcome.result()));
	else
		return CreateDeviceGroupOutcome(outcome.error());
}

void IotClient::createDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDeviceGroupOutcomeCallable IotClient::createDeviceGroupCallable(const CreateDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->createDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDeviceTunnelOutcome IotClient::createDeviceTunnel(const CreateDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceTunnelOutcome(CreateDeviceTunnelResult(outcome.result()));
	else
		return CreateDeviceTunnelOutcome(outcome.error());
}

void IotClient::createDeviceTunnelAsync(const CreateDeviceTunnelRequest& request, const CreateDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDeviceTunnelOutcomeCallable IotClient::createDeviceTunnelCallable(const CreateDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->createDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateDownloadDataJobOutcome IotClient::createDownloadDataJob(const CreateDownloadDataJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDownloadDataJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDownloadDataJobOutcome(CreateDownloadDataJobResult(outcome.result()));
	else
		return CreateDownloadDataJobOutcome(outcome.error());
}

void IotClient::createDownloadDataJobAsync(const CreateDownloadDataJobRequest& request, const CreateDownloadDataJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDownloadDataJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateDownloadDataJobOutcomeCallable IotClient::createDownloadDataJobCallable(const CreateDownloadDataJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDownloadDataJobOutcome()>>(
			[this, request]()
			{
			return this->createDownloadDataJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeDriverOutcome IotClient::createEdgeDriver(const CreateEdgeDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeDriverOutcome(CreateEdgeDriverResult(outcome.result()));
	else
		return CreateEdgeDriverOutcome(outcome.error());
}

void IotClient::createEdgeDriverAsync(const CreateEdgeDriverRequest& request, const CreateEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeDriverOutcomeCallable IotClient::createEdgeDriverCallable(const CreateEdgeDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeDriverOutcome()>>(
			[this, request]()
			{
			return this->createEdgeDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeDriverVersionOutcome IotClient::createEdgeDriverVersion(const CreateEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeDriverVersionOutcome(CreateEdgeDriverVersionResult(outcome.result()));
	else
		return CreateEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::createEdgeDriverVersionAsync(const CreateEdgeDriverVersionRequest& request, const CreateEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeDriverVersionOutcomeCallable IotClient::createEdgeDriverVersionCallable(const CreateEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->createEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeInstanceOutcome IotClient::createEdgeInstance(const CreateEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeInstanceOutcome(CreateEdgeInstanceResult(outcome.result()));
	else
		return CreateEdgeInstanceOutcome(outcome.error());
}

void IotClient::createEdgeInstanceAsync(const CreateEdgeInstanceRequest& request, const CreateEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeInstanceOutcomeCallable IotClient::createEdgeInstanceCallable(const CreateEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->createEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeInstanceChannelOutcome IotClient::createEdgeInstanceChannel(const CreateEdgeInstanceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeInstanceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeInstanceChannelOutcome(CreateEdgeInstanceChannelResult(outcome.result()));
	else
		return CreateEdgeInstanceChannelOutcome(outcome.error());
}

void IotClient::createEdgeInstanceChannelAsync(const CreateEdgeInstanceChannelRequest& request, const CreateEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeInstanceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeInstanceChannelOutcomeCallable IotClient::createEdgeInstanceChannelCallable(const CreateEdgeInstanceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeInstanceChannelOutcome()>>(
			[this, request]()
			{
			return this->createEdgeInstanceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeInstanceDeploymentOutcome IotClient::createEdgeInstanceDeployment(const CreateEdgeInstanceDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeInstanceDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeInstanceDeploymentOutcome(CreateEdgeInstanceDeploymentResult(outcome.result()));
	else
		return CreateEdgeInstanceDeploymentOutcome(outcome.error());
}

void IotClient::createEdgeInstanceDeploymentAsync(const CreateEdgeInstanceDeploymentRequest& request, const CreateEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeInstanceDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeInstanceDeploymentOutcomeCallable IotClient::createEdgeInstanceDeploymentCallable(const CreateEdgeInstanceDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeInstanceDeploymentOutcome()>>(
			[this, request]()
			{
			return this->createEdgeInstanceDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeInstanceMessageRoutingOutcome IotClient::createEdgeInstanceMessageRouting(const CreateEdgeInstanceMessageRoutingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeInstanceMessageRoutingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeInstanceMessageRoutingOutcome(CreateEdgeInstanceMessageRoutingResult(outcome.result()));
	else
		return CreateEdgeInstanceMessageRoutingOutcome(outcome.error());
}

void IotClient::createEdgeInstanceMessageRoutingAsync(const CreateEdgeInstanceMessageRoutingRequest& request, const CreateEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeInstanceMessageRouting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeInstanceMessageRoutingOutcomeCallable IotClient::createEdgeInstanceMessageRoutingCallable(const CreateEdgeInstanceMessageRoutingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeInstanceMessageRoutingOutcome()>>(
			[this, request]()
			{
			return this->createEdgeInstanceMessageRouting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateEdgeOssPreSignedAddressOutcome IotClient::createEdgeOssPreSignedAddress(const CreateEdgeOssPreSignedAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeOssPreSignedAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeOssPreSignedAddressOutcome(CreateEdgeOssPreSignedAddressResult(outcome.result()));
	else
		return CreateEdgeOssPreSignedAddressOutcome(outcome.error());
}

void IotClient::createEdgeOssPreSignedAddressAsync(const CreateEdgeOssPreSignedAddressRequest& request, const CreateEdgeOssPreSignedAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeOssPreSignedAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateEdgeOssPreSignedAddressOutcomeCallable IotClient::createEdgeOssPreSignedAddressCallable(const CreateEdgeOssPreSignedAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeOssPreSignedAddressOutcome()>>(
			[this, request]()
			{
			return this->createEdgeOssPreSignedAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateJobOutcome IotClient::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void IotClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateJobOutcomeCallable IotClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateLoRaNodesTaskOutcome IotClient::createLoRaNodesTask(const CreateLoRaNodesTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoRaNodesTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoRaNodesTaskOutcome(CreateLoRaNodesTaskResult(outcome.result()));
	else
		return CreateLoRaNodesTaskOutcome(outcome.error());
}

void IotClient::createLoRaNodesTaskAsync(const CreateLoRaNodesTaskRequest& request, const CreateLoRaNodesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoRaNodesTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateLoRaNodesTaskOutcomeCallable IotClient::createLoRaNodesTaskCallable(const CreateLoRaNodesTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoRaNodesTaskOutcome()>>(
			[this, request]()
			{
			return this->createLoRaNodesTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateOTADynamicUpgradeJobOutcome IotClient::createOTADynamicUpgradeJob(const CreateOTADynamicUpgradeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOTADynamicUpgradeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOTADynamicUpgradeJobOutcome(CreateOTADynamicUpgradeJobResult(outcome.result()));
	else
		return CreateOTADynamicUpgradeJobOutcome(outcome.error());
}

void IotClient::createOTADynamicUpgradeJobAsync(const CreateOTADynamicUpgradeJobRequest& request, const CreateOTADynamicUpgradeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOTADynamicUpgradeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateOTADynamicUpgradeJobOutcomeCallable IotClient::createOTADynamicUpgradeJobCallable(const CreateOTADynamicUpgradeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOTADynamicUpgradeJobOutcome()>>(
			[this, request]()
			{
			return this->createOTADynamicUpgradeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateOTAFirmwareOutcome IotClient::createOTAFirmware(const CreateOTAFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOTAFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOTAFirmwareOutcome(CreateOTAFirmwareResult(outcome.result()));
	else
		return CreateOTAFirmwareOutcome(outcome.error());
}

void IotClient::createOTAFirmwareAsync(const CreateOTAFirmwareRequest& request, const CreateOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOTAFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateOTAFirmwareOutcomeCallable IotClient::createOTAFirmwareCallable(const CreateOTAFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOTAFirmwareOutcome()>>(
			[this, request]()
			{
			return this->createOTAFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateOTAModuleOutcome IotClient::createOTAModule(const CreateOTAModuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOTAModuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOTAModuleOutcome(CreateOTAModuleResult(outcome.result()));
	else
		return CreateOTAModuleOutcome(outcome.error());
}

void IotClient::createOTAModuleAsync(const CreateOTAModuleRequest& request, const CreateOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOTAModule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateOTAModuleOutcomeCallable IotClient::createOTAModuleCallable(const CreateOTAModuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOTAModuleOutcome()>>(
			[this, request]()
			{
			return this->createOTAModule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateOTAStaticUpgradeJobOutcome IotClient::createOTAStaticUpgradeJob(const CreateOTAStaticUpgradeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOTAStaticUpgradeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOTAStaticUpgradeJobOutcome(CreateOTAStaticUpgradeJobResult(outcome.result()));
	else
		return CreateOTAStaticUpgradeJobOutcome(outcome.error());
}

void IotClient::createOTAStaticUpgradeJobAsync(const CreateOTAStaticUpgradeJobRequest& request, const CreateOTAStaticUpgradeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOTAStaticUpgradeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateOTAStaticUpgradeJobOutcomeCallable IotClient::createOTAStaticUpgradeJobCallable(const CreateOTAStaticUpgradeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOTAStaticUpgradeJobOutcome()>>(
			[this, request]()
			{
			return this->createOTAStaticUpgradeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateOTAVerifyJobOutcome IotClient::createOTAVerifyJob(const CreateOTAVerifyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOTAVerifyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOTAVerifyJobOutcome(CreateOTAVerifyJobResult(outcome.result()));
	else
		return CreateOTAVerifyJobOutcome(outcome.error());
}

void IotClient::createOTAVerifyJobAsync(const CreateOTAVerifyJobRequest& request, const CreateOTAVerifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOTAVerifyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateOTAVerifyJobOutcomeCallable IotClient::createOTAVerifyJobCallable(const CreateOTAVerifyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOTAVerifyJobOutcome()>>(
			[this, request]()
			{
			return this->createOTAVerifyJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateParserOutcome IotClient::createParser(const CreateParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParserOutcome(CreateParserResult(outcome.result()));
	else
		return CreateParserOutcome(outcome.error());
}

void IotClient::createParserAsync(const CreateParserRequest& request, const CreateParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateParserOutcomeCallable IotClient::createParserCallable(const CreateParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParserOutcome()>>(
			[this, request]()
			{
			return this->createParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateParserDataSourceOutcome IotClient::createParserDataSource(const CreateParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParserDataSourceOutcome(CreateParserDataSourceResult(outcome.result()));
	else
		return CreateParserDataSourceOutcome(outcome.error());
}

void IotClient::createParserDataSourceAsync(const CreateParserDataSourceRequest& request, const CreateParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateParserDataSourceOutcomeCallable IotClient::createParserDataSourceCallable(const CreateParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductOutcome IotClient::createProduct(const CreateProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductOutcome(CreateProductResult(outcome.result()));
	else
		return CreateProductOutcome(outcome.error());
}

void IotClient::createProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductOutcomeCallable IotClient::createProductCallable(const CreateProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
			[this, request]()
			{
			return this->createProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductDistributeJobOutcome IotClient::createProductDistributeJob(const CreateProductDistributeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductDistributeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductDistributeJobOutcome(CreateProductDistributeJobResult(outcome.result()));
	else
		return CreateProductDistributeJobOutcome(outcome.error());
}

void IotClient::createProductDistributeJobAsync(const CreateProductDistributeJobRequest& request, const CreateProductDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProductDistributeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductDistributeJobOutcomeCallable IotClient::createProductDistributeJobCallable(const CreateProductDistributeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductDistributeJobOutcome()>>(
			[this, request]()
			{
			return this->createProductDistributeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductTagsOutcome IotClient::createProductTags(const CreateProductTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductTagsOutcome(CreateProductTagsResult(outcome.result()));
	else
		return CreateProductTagsOutcome(outcome.error());
}

void IotClient::createProductTagsAsync(const CreateProductTagsRequest& request, const CreateProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProductTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductTagsOutcomeCallable IotClient::createProductTagsCallable(const CreateProductTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductTagsOutcome()>>(
			[this, request]()
			{
			return this->createProductTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductTopicOutcome IotClient::createProductTopic(const CreateProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductTopicOutcome(CreateProductTopicResult(outcome.result()));
	else
		return CreateProductTopicOutcome(outcome.error());
}

void IotClient::createProductTopicAsync(const CreateProductTopicRequest& request, const CreateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductTopicOutcomeCallable IotClient::createProductTopicCallable(const CreateProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductTopicOutcome()>>(
			[this, request]()
			{
			return this->createProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateRuleOutcome IotClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void IotClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateRuleOutcomeCallable IotClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateRuleActionOutcome IotClient::createRuleAction(const CreateRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleActionOutcome(CreateRuleActionResult(outcome.result()));
	else
		return CreateRuleActionOutcome(outcome.error());
}

void IotClient::createRuleActionAsync(const CreateRuleActionRequest& request, const CreateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateRuleActionOutcomeCallable IotClient::createRuleActionCallable(const CreateRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleActionOutcome()>>(
			[this, request]()
			{
			return this->createRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSceneRuleOutcome IotClient::createSceneRule(const CreateSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSceneRuleOutcome(CreateSceneRuleResult(outcome.result()));
	else
		return CreateSceneRuleOutcome(outcome.error());
}

void IotClient::createSceneRuleAsync(const CreateSceneRuleRequest& request, const CreateSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSceneRuleOutcomeCallable IotClient::createSceneRuleCallable(const CreateSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->createSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSchedulePeriodOutcome IotClient::createSchedulePeriod(const CreateSchedulePeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSchedulePeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSchedulePeriodOutcome(CreateSchedulePeriodResult(outcome.result()));
	else
		return CreateSchedulePeriodOutcome(outcome.error());
}

void IotClient::createSchedulePeriodAsync(const CreateSchedulePeriodRequest& request, const CreateSchedulePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSchedulePeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSchedulePeriodOutcomeCallable IotClient::createSchedulePeriodCallable(const CreateSchedulePeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSchedulePeriodOutcome()>>(
			[this, request]()
			{
			return this->createSchedulePeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSharePromotionActivityOutcome IotClient::createSharePromotionActivity(const CreateSharePromotionActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSharePromotionActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSharePromotionActivityOutcome(CreateSharePromotionActivityResult(outcome.result()));
	else
		return CreateSharePromotionActivityOutcome(outcome.error());
}

void IotClient::createSharePromotionActivityAsync(const CreateSharePromotionActivityRequest& request, const CreateSharePromotionActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSharePromotionActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSharePromotionActivityOutcomeCallable IotClient::createSharePromotionActivityCallable(const CreateSharePromotionActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSharePromotionActivityOutcome()>>(
			[this, request]()
			{
			return this->createSharePromotionActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSharePromotionSpeechModelOutcome IotClient::createSharePromotionSpeechModel(const CreateSharePromotionSpeechModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSharePromotionSpeechModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSharePromotionSpeechModelOutcome(CreateSharePromotionSpeechModelResult(outcome.result()));
	else
		return CreateSharePromotionSpeechModelOutcome(outcome.error());
}

void IotClient::createSharePromotionSpeechModelAsync(const CreateSharePromotionSpeechModelRequest& request, const CreateSharePromotionSpeechModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSharePromotionSpeechModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSharePromotionSpeechModelOutcomeCallable IotClient::createSharePromotionSpeechModelCallable(const CreateSharePromotionSpeechModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSharePromotionSpeechModelOutcome()>>(
			[this, request]()
			{
			return this->createSharePromotionSpeechModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSoundCodeOutcome IotClient::createSoundCode(const CreateSoundCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSoundCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSoundCodeOutcome(CreateSoundCodeResult(outcome.result()));
	else
		return CreateSoundCodeOutcome(outcome.error());
}

void IotClient::createSoundCodeAsync(const CreateSoundCodeRequest& request, const CreateSoundCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSoundCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSoundCodeOutcomeCallable IotClient::createSoundCodeCallable(const CreateSoundCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSoundCodeOutcome()>>(
			[this, request]()
			{
			return this->createSoundCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSoundCodeLabelOutcome IotClient::createSoundCodeLabel(const CreateSoundCodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSoundCodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSoundCodeLabelOutcome(CreateSoundCodeLabelResult(outcome.result()));
	else
		return CreateSoundCodeLabelOutcome(outcome.error());
}

void IotClient::createSoundCodeLabelAsync(const CreateSoundCodeLabelRequest& request, const CreateSoundCodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSoundCodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSoundCodeLabelOutcomeCallable IotClient::createSoundCodeLabelCallable(const CreateSoundCodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSoundCodeLabelOutcome()>>(
			[this, request]()
			{
			return this->createSoundCodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSoundCodeScheduleOutcome IotClient::createSoundCodeSchedule(const CreateSoundCodeScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSoundCodeScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSoundCodeScheduleOutcome(CreateSoundCodeScheduleResult(outcome.result()));
	else
		return CreateSoundCodeScheduleOutcome(outcome.error());
}

void IotClient::createSoundCodeScheduleAsync(const CreateSoundCodeScheduleRequest& request, const CreateSoundCodeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSoundCodeSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSoundCodeScheduleOutcomeCallable IotClient::createSoundCodeScheduleCallable(const CreateSoundCodeScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSoundCodeScheduleOutcome()>>(
			[this, request]()
			{
			return this->createSoundCodeSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSpeechOutcome IotClient::createSpeech(const CreateSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSpeechOutcome(CreateSpeechResult(outcome.result()));
	else
		return CreateSpeechOutcome(outcome.error());
}

void IotClient::createSpeechAsync(const CreateSpeechRequest& request, const CreateSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSpeechOutcomeCallable IotClient::createSpeechCallable(const CreateSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSpeechOutcome()>>(
			[this, request]()
			{
			return this->createSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateStudioAppDomainOpenOutcome IotClient::createStudioAppDomainOpen(const CreateStudioAppDomainOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStudioAppDomainOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStudioAppDomainOpenOutcome(CreateStudioAppDomainOpenResult(outcome.result()));
	else
		return CreateStudioAppDomainOpenOutcome(outcome.error());
}

void IotClient::createStudioAppDomainOpenAsync(const CreateStudioAppDomainOpenRequest& request, const CreateStudioAppDomainOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStudioAppDomainOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateStudioAppDomainOpenOutcomeCallable IotClient::createStudioAppDomainOpenCallable(const CreateStudioAppDomainOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStudioAppDomainOpenOutcome()>>(
			[this, request]()
			{
			return this->createStudioAppDomainOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateSubscribeRelationOutcome IotClient::createSubscribeRelation(const CreateSubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubscribeRelationOutcome(CreateSubscribeRelationResult(outcome.result()));
	else
		return CreateSubscribeRelationOutcome(outcome.error());
}

void IotClient::createSubscribeRelationAsync(const CreateSubscribeRelationRequest& request, const CreateSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateSubscribeRelationOutcomeCallable IotClient::createSubscribeRelationCallable(const CreateSubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->createSubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateThingModelOutcome IotClient::createThingModel(const CreateThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateThingModelOutcome(CreateThingModelResult(outcome.result()));
	else
		return CreateThingModelOutcome(outcome.error());
}

void IotClient::createThingModelAsync(const CreateThingModelRequest& request, const CreateThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateThingModelOutcomeCallable IotClient::createThingModelCallable(const CreateThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateThingModelOutcome()>>(
			[this, request]()
			{
			return this->createThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateThingScriptOutcome IotClient::createThingScript(const CreateThingScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateThingScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateThingScriptOutcome(CreateThingScriptResult(outcome.result()));
	else
		return CreateThingScriptOutcome(outcome.error());
}

void IotClient::createThingScriptAsync(const CreateThingScriptRequest& request, const CreateThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createThingScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateThingScriptOutcomeCallable IotClient::createThingScriptCallable(const CreateThingScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateThingScriptOutcome()>>(
			[this, request]()
			{
			return this->createThingScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateTopicConfigOutcome IotClient::createTopicConfig(const CreateTopicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTopicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTopicConfigOutcome(CreateTopicConfigResult(outcome.result()));
	else
		return CreateTopicConfigOutcome(outcome.error());
}

void IotClient::createTopicConfigAsync(const CreateTopicConfigRequest& request, const CreateTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTopicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateTopicConfigOutcomeCallable IotClient::createTopicConfigCallable(const CreateTopicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTopicConfigOutcome()>>(
			[this, request]()
			{
			return this->createTopicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateTopicRouteTableOutcome IotClient::createTopicRouteTable(const CreateTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTopicRouteTableOutcome(CreateTopicRouteTableResult(outcome.result()));
	else
		return CreateTopicRouteTableOutcome(outcome.error());
}

void IotClient::createTopicRouteTableAsync(const CreateTopicRouteTableRequest& request, const CreateTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateTopicRouteTableOutcomeCallable IotClient::createTopicRouteTableCallable(const CreateTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->createTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteClientIdsOutcome IotClient::deleteClientIds(const DeleteClientIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClientIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClientIdsOutcome(DeleteClientIdsResult(outcome.result()));
	else
		return DeleteClientIdsOutcome(outcome.error());
}

void IotClient::deleteClientIdsAsync(const DeleteClientIdsRequest& request, const DeleteClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClientIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteClientIdsOutcomeCallable IotClient::deleteClientIdsCallable(const DeleteClientIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClientIdsOutcome()>>(
			[this, request]()
			{
			return this->deleteClientIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteConsumerGroupOutcome IotClient::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConsumerGroupOutcome(DeleteConsumerGroupResult(outcome.result()));
	else
		return DeleteConsumerGroupOutcome(outcome.error());
}

void IotClient::deleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteConsumerGroupOutcomeCallable IotClient::deleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteConsumerGroupSubscribeRelationOutcome IotClient::deleteConsumerGroupSubscribeRelation(const DeleteConsumerGroupSubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConsumerGroupSubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConsumerGroupSubscribeRelationOutcome(DeleteConsumerGroupSubscribeRelationResult(outcome.result()));
	else
		return DeleteConsumerGroupSubscribeRelationOutcome(outcome.error());
}

void IotClient::deleteConsumerGroupSubscribeRelationAsync(const DeleteConsumerGroupSubscribeRelationRequest& request, const DeleteConsumerGroupSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConsumerGroupSubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteConsumerGroupSubscribeRelationOutcomeCallable IotClient::deleteConsumerGroupSubscribeRelationCallable(const DeleteConsumerGroupSubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupSubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteConsumerGroupSubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDataSourceItemOutcome IotClient::deleteDataSourceItem(const DeleteDataSourceItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceItemOutcome(DeleteDataSourceItemResult(outcome.result()));
	else
		return DeleteDataSourceItemOutcome(outcome.error());
}

void IotClient::deleteDataSourceItemAsync(const DeleteDataSourceItemRequest& request, const DeleteDataSourceItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSourceItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDataSourceItemOutcomeCallable IotClient::deleteDataSourceItemCallable(const DeleteDataSourceItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceItemOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSourceItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDestinationOutcome IotClient::deleteDestination(const DeleteDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDestinationOutcome(DeleteDestinationResult(outcome.result()));
	else
		return DeleteDestinationOutcome(outcome.error());
}

void IotClient::deleteDestinationAsync(const DeleteDestinationRequest& request, const DeleteDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDestinationOutcomeCallable IotClient::deleteDestinationCallable(const DeleteDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDestinationOutcome()>>(
			[this, request]()
			{
			return this->deleteDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceOutcome IotClient::deleteDevice(const DeleteDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceOutcome(DeleteDeviceResult(outcome.result()));
	else
		return DeleteDeviceOutcome(outcome.error());
}

void IotClient::deleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceOutcomeCallable IotClient::deleteDeviceCallable(const DeleteDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceDistributeJobOutcome IotClient::deleteDeviceDistributeJob(const DeleteDeviceDistributeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceDistributeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceDistributeJobOutcome(DeleteDeviceDistributeJobResult(outcome.result()));
	else
		return DeleteDeviceDistributeJobOutcome(outcome.error());
}

void IotClient::deleteDeviceDistributeJobAsync(const DeleteDeviceDistributeJobRequest& request, const DeleteDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceDistributeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceDistributeJobOutcomeCallable IotClient::deleteDeviceDistributeJobCallable(const DeleteDeviceDistributeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceDistributeJobOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceDistributeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceDynamicGroupOutcome IotClient::deleteDeviceDynamicGroup(const DeleteDeviceDynamicGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceDynamicGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceDynamicGroupOutcome(DeleteDeviceDynamicGroupResult(outcome.result()));
	else
		return DeleteDeviceDynamicGroupOutcome(outcome.error());
}

void IotClient::deleteDeviceDynamicGroupAsync(const DeleteDeviceDynamicGroupRequest& request, const DeleteDeviceDynamicGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceDynamicGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceDynamicGroupOutcomeCallable IotClient::deleteDeviceDynamicGroupCallable(const DeleteDeviceDynamicGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceDynamicGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceDynamicGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceFileOutcome IotClient::deleteDeviceFile(const DeleteDeviceFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceFileOutcome(DeleteDeviceFileResult(outcome.result()));
	else
		return DeleteDeviceFileOutcome(outcome.error());
}

void IotClient::deleteDeviceFileAsync(const DeleteDeviceFileRequest& request, const DeleteDeviceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceFileOutcomeCallable IotClient::deleteDeviceFileCallable(const DeleteDeviceFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceFileOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceGroupOutcome IotClient::deleteDeviceGroup(const DeleteDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceGroupOutcome(DeleteDeviceGroupResult(outcome.result()));
	else
		return DeleteDeviceGroupOutcome(outcome.error());
}

void IotClient::deleteDeviceGroupAsync(const DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceGroupOutcomeCallable IotClient::deleteDeviceGroupCallable(const DeleteDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDevicePropOutcome IotClient::deleteDeviceProp(const DeleteDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevicePropOutcome(DeleteDevicePropResult(outcome.result()));
	else
		return DeleteDevicePropOutcome(outcome.error());
}

void IotClient::deleteDevicePropAsync(const DeleteDevicePropRequest& request, const DeleteDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDevicePropOutcomeCallable IotClient::deleteDevicePropCallable(const DeleteDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevicePropOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceSpeechOutcome IotClient::deleteDeviceSpeech(const DeleteDeviceSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceSpeechOutcome(DeleteDeviceSpeechResult(outcome.result()));
	else
		return DeleteDeviceSpeechOutcome(outcome.error());
}

void IotClient::deleteDeviceSpeechAsync(const DeleteDeviceSpeechRequest& request, const DeleteDeviceSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceSpeechOutcomeCallable IotClient::deleteDeviceSpeechCallable(const DeleteDeviceSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceSpeechOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceTunnelOutcome IotClient::deleteDeviceTunnel(const DeleteDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceTunnelOutcome(DeleteDeviceTunnelResult(outcome.result()));
	else
		return DeleteDeviceTunnelOutcome(outcome.error());
}

void IotClient::deleteDeviceTunnelAsync(const DeleteDeviceTunnelRequest& request, const DeleteDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceTunnelOutcomeCallable IotClient::deleteDeviceTunnelCallable(const DeleteDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteEdgeDriverOutcome IotClient::deleteEdgeDriver(const DeleteEdgeDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEdgeDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEdgeDriverOutcome(DeleteEdgeDriverResult(outcome.result()));
	else
		return DeleteEdgeDriverOutcome(outcome.error());
}

void IotClient::deleteEdgeDriverAsync(const DeleteEdgeDriverRequest& request, const DeleteEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEdgeDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteEdgeDriverOutcomeCallable IotClient::deleteEdgeDriverCallable(const DeleteEdgeDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEdgeDriverOutcome()>>(
			[this, request]()
			{
			return this->deleteEdgeDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteEdgeDriverVersionOutcome IotClient::deleteEdgeDriverVersion(const DeleteEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEdgeDriverVersionOutcome(DeleteEdgeDriverVersionResult(outcome.result()));
	else
		return DeleteEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::deleteEdgeDriverVersionAsync(const DeleteEdgeDriverVersionRequest& request, const DeleteEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteEdgeDriverVersionOutcomeCallable IotClient::deleteEdgeDriverVersionCallable(const DeleteEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->deleteEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteEdgeInstanceOutcome IotClient::deleteEdgeInstance(const DeleteEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEdgeInstanceOutcome(DeleteEdgeInstanceResult(outcome.result()));
	else
		return DeleteEdgeInstanceOutcome(outcome.error());
}

void IotClient::deleteEdgeInstanceAsync(const DeleteEdgeInstanceRequest& request, const DeleteEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteEdgeInstanceOutcomeCallable IotClient::deleteEdgeInstanceCallable(const DeleteEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteEdgeInstanceMessageRoutingOutcome IotClient::deleteEdgeInstanceMessageRouting(const DeleteEdgeInstanceMessageRoutingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEdgeInstanceMessageRoutingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEdgeInstanceMessageRoutingOutcome(DeleteEdgeInstanceMessageRoutingResult(outcome.result()));
	else
		return DeleteEdgeInstanceMessageRoutingOutcome(outcome.error());
}

void IotClient::deleteEdgeInstanceMessageRoutingAsync(const DeleteEdgeInstanceMessageRoutingRequest& request, const DeleteEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEdgeInstanceMessageRouting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteEdgeInstanceMessageRoutingOutcomeCallable IotClient::deleteEdgeInstanceMessageRoutingCallable(const DeleteEdgeInstanceMessageRoutingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEdgeInstanceMessageRoutingOutcome()>>(
			[this, request]()
			{
			return this->deleteEdgeInstanceMessageRouting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteJobOutcome IotClient::deleteJob(const DeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobOutcome(DeleteJobResult(outcome.result()));
	else
		return DeleteJobOutcome(outcome.error());
}

void IotClient::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteJobOutcomeCallable IotClient::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteOTAFirmwareOutcome IotClient::deleteOTAFirmware(const DeleteOTAFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOTAFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOTAFirmwareOutcome(DeleteOTAFirmwareResult(outcome.result()));
	else
		return DeleteOTAFirmwareOutcome(outcome.error());
}

void IotClient::deleteOTAFirmwareAsync(const DeleteOTAFirmwareRequest& request, const DeleteOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOTAFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteOTAFirmwareOutcomeCallable IotClient::deleteOTAFirmwareCallable(const DeleteOTAFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOTAFirmwareOutcome()>>(
			[this, request]()
			{
			return this->deleteOTAFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteOTAModuleOutcome IotClient::deleteOTAModule(const DeleteOTAModuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOTAModuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOTAModuleOutcome(DeleteOTAModuleResult(outcome.result()));
	else
		return DeleteOTAModuleOutcome(outcome.error());
}

void IotClient::deleteOTAModuleAsync(const DeleteOTAModuleRequest& request, const DeleteOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOTAModule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteOTAModuleOutcomeCallable IotClient::deleteOTAModuleCallable(const DeleteOTAModuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOTAModuleOutcome()>>(
			[this, request]()
			{
			return this->deleteOTAModule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteParserOutcome IotClient::deleteParser(const DeleteParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParserOutcome(DeleteParserResult(outcome.result()));
	else
		return DeleteParserOutcome(outcome.error());
}

void IotClient::deleteParserAsync(const DeleteParserRequest& request, const DeleteParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteParserOutcomeCallable IotClient::deleteParserCallable(const DeleteParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParserOutcome()>>(
			[this, request]()
			{
			return this->deleteParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteParserDataSourceOutcome IotClient::deleteParserDataSource(const DeleteParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParserDataSourceOutcome(DeleteParserDataSourceResult(outcome.result()));
	else
		return DeleteParserDataSourceOutcome(outcome.error());
}

void IotClient::deleteParserDataSourceAsync(const DeleteParserDataSourceRequest& request, const DeleteParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteParserDataSourceOutcomeCallable IotClient::deleteParserDataSourceCallable(const DeleteParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeletePowerStationOutcome IotClient::deletePowerStation(const DeletePowerStationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePowerStationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePowerStationOutcome(DeletePowerStationResult(outcome.result()));
	else
		return DeletePowerStationOutcome(outcome.error());
}

void IotClient::deletePowerStationAsync(const DeletePowerStationRequest& request, const DeletePowerStationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePowerStation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeletePowerStationOutcomeCallable IotClient::deletePowerStationCallable(const DeletePowerStationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePowerStationOutcome()>>(
			[this, request]()
			{
			return this->deletePowerStation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteProductOutcome IotClient::deleteProduct(const DeleteProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProductOutcome(DeleteProductResult(outcome.result()));
	else
		return DeleteProductOutcome(outcome.error());
}

void IotClient::deleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteProductOutcomeCallable IotClient::deleteProductCallable(const DeleteProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProductOutcome()>>(
			[this, request]()
			{
			return this->deleteProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteProductTagsOutcome IotClient::deleteProductTags(const DeleteProductTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProductTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProductTagsOutcome(DeleteProductTagsResult(outcome.result()));
	else
		return DeleteProductTagsOutcome(outcome.error());
}

void IotClient::deleteProductTagsAsync(const DeleteProductTagsRequest& request, const DeleteProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProductTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteProductTagsOutcomeCallable IotClient::deleteProductTagsCallable(const DeleteProductTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProductTagsOutcome()>>(
			[this, request]()
			{
			return this->deleteProductTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteProductTopicOutcome IotClient::deleteProductTopic(const DeleteProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProductTopicOutcome(DeleteProductTopicResult(outcome.result()));
	else
		return DeleteProductTopicOutcome(outcome.error());
}

void IotClient::deleteProductTopicAsync(const DeleteProductTopicRequest& request, const DeleteProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteProductTopicOutcomeCallable IotClient::deleteProductTopicCallable(const DeleteProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProductTopicOutcome()>>(
			[this, request]()
			{
			return this->deleteProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteRuleOutcome IotClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void IotClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteRuleOutcomeCallable IotClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteRuleActionOutcome IotClient::deleteRuleAction(const DeleteRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleActionOutcome(DeleteRuleActionResult(outcome.result()));
	else
		return DeleteRuleActionOutcome(outcome.error());
}

void IotClient::deleteRuleActionAsync(const DeleteRuleActionRequest& request, const DeleteRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteRuleActionOutcomeCallable IotClient::deleteRuleActionCallable(const DeleteRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleActionOutcome()>>(
			[this, request]()
			{
			return this->deleteRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSceneRuleOutcome IotClient::deleteSceneRule(const DeleteSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSceneRuleOutcome(DeleteSceneRuleResult(outcome.result()));
	else
		return DeleteSceneRuleOutcome(outcome.error());
}

void IotClient::deleteSceneRuleAsync(const DeleteSceneRuleRequest& request, const DeleteSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSceneRuleOutcomeCallable IotClient::deleteSceneRuleCallable(const DeleteSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSchedulePeriodOutcome IotClient::deleteSchedulePeriod(const DeleteSchedulePeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSchedulePeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSchedulePeriodOutcome(DeleteSchedulePeriodResult(outcome.result()));
	else
		return DeleteSchedulePeriodOutcome(outcome.error());
}

void IotClient::deleteSchedulePeriodAsync(const DeleteSchedulePeriodRequest& request, const DeleteSchedulePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSchedulePeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSchedulePeriodOutcomeCallable IotClient::deleteSchedulePeriodCallable(const DeleteSchedulePeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSchedulePeriodOutcome()>>(
			[this, request]()
			{
			return this->deleteSchedulePeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteShareTaskDeviceOutcome IotClient::deleteShareTaskDevice(const DeleteShareTaskDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteShareTaskDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteShareTaskDeviceOutcome(DeleteShareTaskDeviceResult(outcome.result()));
	else
		return DeleteShareTaskDeviceOutcome(outcome.error());
}

void IotClient::deleteShareTaskDeviceAsync(const DeleteShareTaskDeviceRequest& request, const DeleteShareTaskDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteShareTaskDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteShareTaskDeviceOutcomeCallable IotClient::deleteShareTaskDeviceCallable(const DeleteShareTaskDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteShareTaskDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteShareTaskDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSoundCodeOutcome IotClient::deleteSoundCode(const DeleteSoundCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSoundCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSoundCodeOutcome(DeleteSoundCodeResult(outcome.result()));
	else
		return DeleteSoundCodeOutcome(outcome.error());
}

void IotClient::deleteSoundCodeAsync(const DeleteSoundCodeRequest& request, const DeleteSoundCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSoundCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSoundCodeOutcomeCallable IotClient::deleteSoundCodeCallable(const DeleteSoundCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSoundCodeOutcome()>>(
			[this, request]()
			{
			return this->deleteSoundCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSoundCodeLabelOutcome IotClient::deleteSoundCodeLabel(const DeleteSoundCodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSoundCodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSoundCodeLabelOutcome(DeleteSoundCodeLabelResult(outcome.result()));
	else
		return DeleteSoundCodeLabelOutcome(outcome.error());
}

void IotClient::deleteSoundCodeLabelAsync(const DeleteSoundCodeLabelRequest& request, const DeleteSoundCodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSoundCodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSoundCodeLabelOutcomeCallable IotClient::deleteSoundCodeLabelCallable(const DeleteSoundCodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSoundCodeLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteSoundCodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSoundCodeScheduleOutcome IotClient::deleteSoundCodeSchedule(const DeleteSoundCodeScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSoundCodeScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSoundCodeScheduleOutcome(DeleteSoundCodeScheduleResult(outcome.result()));
	else
		return DeleteSoundCodeScheduleOutcome(outcome.error());
}

void IotClient::deleteSoundCodeScheduleAsync(const DeleteSoundCodeScheduleRequest& request, const DeleteSoundCodeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSoundCodeSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSoundCodeScheduleOutcomeCallable IotClient::deleteSoundCodeScheduleCallable(const DeleteSoundCodeScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSoundCodeScheduleOutcome()>>(
			[this, request]()
			{
			return this->deleteSoundCodeSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSpeechOutcome IotClient::deleteSpeech(const DeleteSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSpeechOutcome(DeleteSpeechResult(outcome.result()));
	else
		return DeleteSpeechOutcome(outcome.error());
}

void IotClient::deleteSpeechAsync(const DeleteSpeechRequest& request, const DeleteSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSpeechOutcomeCallable IotClient::deleteSpeechCallable(const DeleteSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSpeechOutcome()>>(
			[this, request]()
			{
			return this->deleteSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteStudioAppDomainOpenOutcome IotClient::deleteStudioAppDomainOpen(const DeleteStudioAppDomainOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStudioAppDomainOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStudioAppDomainOpenOutcome(DeleteStudioAppDomainOpenResult(outcome.result()));
	else
		return DeleteStudioAppDomainOpenOutcome(outcome.error());
}

void IotClient::deleteStudioAppDomainOpenAsync(const DeleteStudioAppDomainOpenRequest& request, const DeleteStudioAppDomainOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStudioAppDomainOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteStudioAppDomainOpenOutcomeCallable IotClient::deleteStudioAppDomainOpenCallable(const DeleteStudioAppDomainOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStudioAppDomainOpenOutcome()>>(
			[this, request]()
			{
			return this->deleteStudioAppDomainOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteSubscribeRelationOutcome IotClient::deleteSubscribeRelation(const DeleteSubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubscribeRelationOutcome(DeleteSubscribeRelationResult(outcome.result()));
	else
		return DeleteSubscribeRelationOutcome(outcome.error());
}

void IotClient::deleteSubscribeRelationAsync(const DeleteSubscribeRelationRequest& request, const DeleteSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteSubscribeRelationOutcomeCallable IotClient::deleteSubscribeRelationCallable(const DeleteSubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteSubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteThingModelOutcome IotClient::deleteThingModel(const DeleteThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteThingModelOutcome(DeleteThingModelResult(outcome.result()));
	else
		return DeleteThingModelOutcome(outcome.error());
}

void IotClient::deleteThingModelAsync(const DeleteThingModelRequest& request, const DeleteThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteThingModelOutcomeCallable IotClient::deleteThingModelCallable(const DeleteThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteThingModelOutcome()>>(
			[this, request]()
			{
			return this->deleteThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteTopicConfigOutcome IotClient::deleteTopicConfig(const DeleteTopicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTopicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTopicConfigOutcome(DeleteTopicConfigResult(outcome.result()));
	else
		return DeleteTopicConfigOutcome(outcome.error());
}

void IotClient::deleteTopicConfigAsync(const DeleteTopicConfigRequest& request, const DeleteTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTopicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteTopicConfigOutcomeCallable IotClient::deleteTopicConfigCallable(const DeleteTopicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTopicConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteTopicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteTopicRouteTableOutcome IotClient::deleteTopicRouteTable(const DeleteTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTopicRouteTableOutcome(DeleteTopicRouteTableResult(outcome.result()));
	else
		return DeleteTopicRouteTableOutcome(outcome.error());
}

void IotClient::deleteTopicRouteTableAsync(const DeleteTopicRouteTableRequest& request, const DeleteTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteTopicRouteTableOutcomeCallable IotClient::deleteTopicRouteTableCallable(const DeleteTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteUserDefineTableDataByPrimaryKeyOutcome IotClient::deleteUserDefineTableDataByPrimaryKey(const DeleteUserDefineTableDataByPrimaryKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserDefineTableDataByPrimaryKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserDefineTableDataByPrimaryKeyOutcome(DeleteUserDefineTableDataByPrimaryKeyResult(outcome.result()));
	else
		return DeleteUserDefineTableDataByPrimaryKeyOutcome(outcome.error());
}

void IotClient::deleteUserDefineTableDataByPrimaryKeyAsync(const DeleteUserDefineTableDataByPrimaryKeyRequest& request, const DeleteUserDefineTableDataByPrimaryKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserDefineTableDataByPrimaryKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteUserDefineTableDataByPrimaryKeyOutcomeCallable IotClient::deleteUserDefineTableDataByPrimaryKeyCallable(const DeleteUserDefineTableDataByPrimaryKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserDefineTableDataByPrimaryKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteUserDefineTableDataByPrimaryKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DetachDestinationOutcome IotClient::detachDestination(const DetachDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDestinationOutcome(DetachDestinationResult(outcome.result()));
	else
		return DetachDestinationOutcome(outcome.error());
}

void IotClient::detachDestinationAsync(const DetachDestinationRequest& request, const DetachDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DetachDestinationOutcomeCallable IotClient::detachDestinationCallable(const DetachDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDestinationOutcome()>>(
			[this, request]()
			{
			return this->detachDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DetachParserDataSourceOutcome IotClient::detachParserDataSource(const DetachParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachParserDataSourceOutcome(DetachParserDataSourceResult(outcome.result()));
	else
		return DetachParserDataSourceOutcome(outcome.error());
}

void IotClient::detachParserDataSourceAsync(const DetachParserDataSourceRequest& request, const DetachParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DetachParserDataSourceOutcomeCallable IotClient::detachParserDataSourceCallable(const DetachParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->detachParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DisableDeviceTunnelOutcome IotClient::disableDeviceTunnel(const DisableDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDeviceTunnelOutcome(DisableDeviceTunnelResult(outcome.result()));
	else
		return DisableDeviceTunnelOutcome(outcome.error());
}

void IotClient::disableDeviceTunnelAsync(const DisableDeviceTunnelRequest& request, const DisableDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DisableDeviceTunnelOutcomeCallable IotClient::disableDeviceTunnelCallable(const DisableDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->disableDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DisableDeviceTunnelShareOutcome IotClient::disableDeviceTunnelShare(const DisableDeviceTunnelShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDeviceTunnelShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDeviceTunnelShareOutcome(DisableDeviceTunnelShareResult(outcome.result()));
	else
		return DisableDeviceTunnelShareOutcome(outcome.error());
}

void IotClient::disableDeviceTunnelShareAsync(const DisableDeviceTunnelShareRequest& request, const DisableDeviceTunnelShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDeviceTunnelShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DisableDeviceTunnelShareOutcomeCallable IotClient::disableDeviceTunnelShareCallable(const DisableDeviceTunnelShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDeviceTunnelShareOutcome()>>(
			[this, request]()
			{
			return this->disableDeviceTunnelShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DisableSceneRuleOutcome IotClient::disableSceneRule(const DisableSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSceneRuleOutcome(DisableSceneRuleResult(outcome.result()));
	else
		return DisableSceneRuleOutcome(outcome.error());
}

void IotClient::disableSceneRuleAsync(const DisableSceneRuleRequest& request, const DisableSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DisableSceneRuleOutcomeCallable IotClient::disableSceneRuleCallable(const DisableSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->disableSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DisableThingOutcome IotClient::disableThing(const DisableThingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableThingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableThingOutcome(DisableThingResult(outcome.result()));
	else
		return DisableThingOutcome(outcome.error());
}

void IotClient::disableThingAsync(const DisableThingRequest& request, const DisableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableThing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DisableThingOutcomeCallable IotClient::disableThingCallable(const DisableThingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableThingOutcome()>>(
			[this, request]()
			{
			return this->disableThing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::EnableDeviceTunnelOutcome IotClient::enableDeviceTunnel(const EnableDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeviceTunnelOutcome(EnableDeviceTunnelResult(outcome.result()));
	else
		return EnableDeviceTunnelOutcome(outcome.error());
}

void IotClient::enableDeviceTunnelAsync(const EnableDeviceTunnelRequest& request, const EnableDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::EnableDeviceTunnelOutcomeCallable IotClient::enableDeviceTunnelCallable(const EnableDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->enableDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::EnableDeviceTunnelShareOutcome IotClient::enableDeviceTunnelShare(const EnableDeviceTunnelShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeviceTunnelShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeviceTunnelShareOutcome(EnableDeviceTunnelShareResult(outcome.result()));
	else
		return EnableDeviceTunnelShareOutcome(outcome.error());
}

void IotClient::enableDeviceTunnelShareAsync(const EnableDeviceTunnelShareRequest& request, const EnableDeviceTunnelShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDeviceTunnelShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::EnableDeviceTunnelShareOutcomeCallable IotClient::enableDeviceTunnelShareCallable(const EnableDeviceTunnelShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeviceTunnelShareOutcome()>>(
			[this, request]()
			{
			return this->enableDeviceTunnelShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::EnableSceneRuleOutcome IotClient::enableSceneRule(const EnableSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSceneRuleOutcome(EnableSceneRuleResult(outcome.result()));
	else
		return EnableSceneRuleOutcome(outcome.error());
}

void IotClient::enableSceneRuleAsync(const EnableSceneRuleRequest& request, const EnableSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::EnableSceneRuleOutcomeCallable IotClient::enableSceneRuleCallable(const EnableSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->enableSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::EnableThingOutcome IotClient::enableThing(const EnableThingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableThingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableThingOutcome(EnableThingResult(outcome.result()));
	else
		return EnableThingOutcome(outcome.error());
}

void IotClient::enableThingAsync(const EnableThingRequest& request, const EnableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableThing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::EnableThingOutcomeCallable IotClient::enableThingCallable(const EnableThingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableThingOutcome()>>(
			[this, request]()
			{
			return this->enableThing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GenerateDeviceNameListURLOutcome IotClient::generateDeviceNameListURL(const GenerateDeviceNameListURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDeviceNameListURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDeviceNameListURLOutcome(GenerateDeviceNameListURLResult(outcome.result()));
	else
		return GenerateDeviceNameListURLOutcome(outcome.error());
}

void IotClient::generateDeviceNameListURLAsync(const GenerateDeviceNameListURLRequest& request, const GenerateDeviceNameListURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDeviceNameListURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GenerateDeviceNameListURLOutcomeCallable IotClient::generateDeviceNameListURLCallable(const GenerateDeviceNameListURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDeviceNameListURLOutcome()>>(
			[this, request]()
			{
			return this->generateDeviceNameListURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GenerateFileUploadURLOutcome IotClient::generateFileUploadURL(const GenerateFileUploadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateFileUploadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateFileUploadURLOutcome(GenerateFileUploadURLResult(outcome.result()));
	else
		return GenerateFileUploadURLOutcome(outcome.error());
}

void IotClient::generateFileUploadURLAsync(const GenerateFileUploadURLRequest& request, const GenerateFileUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateFileUploadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GenerateFileUploadURLOutcomeCallable IotClient::generateFileUploadURLCallable(const GenerateFileUploadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateFileUploadURLOutcome()>>(
			[this, request]()
			{
			return this->generateFileUploadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GenerateOTAUploadURLOutcome IotClient::generateOTAUploadURL(const GenerateOTAUploadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateOTAUploadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateOTAUploadURLOutcome(GenerateOTAUploadURLResult(outcome.result()));
	else
		return GenerateOTAUploadURLOutcome(outcome.error());
}

void IotClient::generateOTAUploadURLAsync(const GenerateOTAUploadURLRequest& request, const GenerateOTAUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateOTAUploadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GenerateOTAUploadURLOutcomeCallable IotClient::generateOTAUploadURLCallable(const GenerateOTAUploadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateOTAUploadURLOutcome()>>(
			[this, request]()
			{
			return this->generateOTAUploadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDataAPIServiceDetailOutcome IotClient::getDataAPIServiceDetail(const GetDataAPIServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataAPIServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataAPIServiceDetailOutcome(GetDataAPIServiceDetailResult(outcome.result()));
	else
		return GetDataAPIServiceDetailOutcome(outcome.error());
}

void IotClient::getDataAPIServiceDetailAsync(const GetDataAPIServiceDetailRequest& request, const GetDataAPIServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataAPIServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDataAPIServiceDetailOutcomeCallable IotClient::getDataAPIServiceDetailCallable(const GetDataAPIServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataAPIServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataAPIServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDestinationOutcome IotClient::getDestination(const GetDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDestinationOutcome(GetDestinationResult(outcome.result()));
	else
		return GetDestinationOutcome(outcome.error());
}

void IotClient::getDestinationAsync(const GetDestinationRequest& request, const GetDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDestinationOutcomeCallable IotClient::getDestinationCallable(const GetDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDestinationOutcome()>>(
			[this, request]()
			{
			return this->getDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceShadowOutcome IotClient::getDeviceShadow(const GetDeviceShadowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceShadowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceShadowOutcome(GetDeviceShadowResult(outcome.result()));
	else
		return GetDeviceShadowOutcome(outcome.error());
}

void IotClient::getDeviceShadowAsync(const GetDeviceShadowRequest& request, const GetDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceShadow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceShadowOutcomeCallable IotClient::getDeviceShadowCallable(const GetDeviceShadowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceShadowOutcome()>>(
			[this, request]()
			{
			return this->getDeviceShadow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceStatusOutcome IotClient::getDeviceStatus(const GetDeviceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceStatusOutcome(GetDeviceStatusResult(outcome.result()));
	else
		return GetDeviceStatusOutcome(outcome.error());
}

void IotClient::getDeviceStatusAsync(const GetDeviceStatusRequest& request, const GetDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceStatusOutcomeCallable IotClient::getDeviceStatusCallable(const GetDeviceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceStatusOutcome()>>(
			[this, request]()
			{
			return this->getDeviceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceTunnelShareStatusOutcome IotClient::getDeviceTunnelShareStatus(const GetDeviceTunnelShareStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceTunnelShareStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceTunnelShareStatusOutcome(GetDeviceTunnelShareStatusResult(outcome.result()));
	else
		return GetDeviceTunnelShareStatusOutcome(outcome.error());
}

void IotClient::getDeviceTunnelShareStatusAsync(const GetDeviceTunnelShareStatusRequest& request, const GetDeviceTunnelShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceTunnelShareStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceTunnelShareStatusOutcomeCallable IotClient::getDeviceTunnelShareStatusCallable(const GetDeviceTunnelShareStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceTunnelShareStatusOutcome()>>(
			[this, request]()
			{
			return this->getDeviceTunnelShareStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceTunnelStatusOutcome IotClient::getDeviceTunnelStatus(const GetDeviceTunnelStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceTunnelStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceTunnelStatusOutcome(GetDeviceTunnelStatusResult(outcome.result()));
	else
		return GetDeviceTunnelStatusOutcome(outcome.error());
}

void IotClient::getDeviceTunnelStatusAsync(const GetDeviceTunnelStatusRequest& request, const GetDeviceTunnelStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceTunnelStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceTunnelStatusOutcomeCallable IotClient::getDeviceTunnelStatusCallable(const GetDeviceTunnelStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceTunnelStatusOutcome()>>(
			[this, request]()
			{
			return this->getDeviceTunnelStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDownloadFileOutcome IotClient::getDownloadFile(const GetDownloadFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDownloadFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDownloadFileOutcome(GetDownloadFileResult(outcome.result()));
	else
		return GetDownloadFileOutcome(outcome.error());
}

void IotClient::getDownloadFileAsync(const GetDownloadFileRequest& request, const GetDownloadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDownloadFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDownloadFileOutcomeCallable IotClient::getDownloadFileCallable(const GetDownloadFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDownloadFileOutcome()>>(
			[this, request]()
			{
			return this->getDownloadFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetEdgeDriverVersionOutcome IotClient::getEdgeDriverVersion(const GetEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeDriverVersionOutcome(GetEdgeDriverVersionResult(outcome.result()));
	else
		return GetEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::getEdgeDriverVersionAsync(const GetEdgeDriverVersionRequest& request, const GetEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetEdgeDriverVersionOutcomeCallable IotClient::getEdgeDriverVersionCallable(const GetEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->getEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetEdgeInstanceOutcome IotClient::getEdgeInstance(const GetEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeInstanceOutcome(GetEdgeInstanceResult(outcome.result()));
	else
		return GetEdgeInstanceOutcome(outcome.error());
}

void IotClient::getEdgeInstanceAsync(const GetEdgeInstanceRequest& request, const GetEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetEdgeInstanceOutcomeCallable IotClient::getEdgeInstanceCallable(const GetEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->getEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetEdgeInstanceDeploymentOutcome IotClient::getEdgeInstanceDeployment(const GetEdgeInstanceDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeInstanceDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeInstanceDeploymentOutcome(GetEdgeInstanceDeploymentResult(outcome.result()));
	else
		return GetEdgeInstanceDeploymentOutcome(outcome.error());
}

void IotClient::getEdgeInstanceDeploymentAsync(const GetEdgeInstanceDeploymentRequest& request, const GetEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeInstanceDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetEdgeInstanceDeploymentOutcomeCallable IotClient::getEdgeInstanceDeploymentCallable(const GetEdgeInstanceDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeInstanceDeploymentOutcome()>>(
			[this, request]()
			{
			return this->getEdgeInstanceDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetEdgeInstanceMessageRoutingOutcome IotClient::getEdgeInstanceMessageRouting(const GetEdgeInstanceMessageRoutingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeInstanceMessageRoutingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeInstanceMessageRoutingOutcome(GetEdgeInstanceMessageRoutingResult(outcome.result()));
	else
		return GetEdgeInstanceMessageRoutingOutcome(outcome.error());
}

void IotClient::getEdgeInstanceMessageRoutingAsync(const GetEdgeInstanceMessageRoutingRequest& request, const GetEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeInstanceMessageRouting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetEdgeInstanceMessageRoutingOutcomeCallable IotClient::getEdgeInstanceMessageRoutingCallable(const GetEdgeInstanceMessageRoutingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeInstanceMessageRoutingOutcome()>>(
			[this, request]()
			{
			return this->getEdgeInstanceMessageRouting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetGatewayBySubDeviceOutcome IotClient::getGatewayBySubDevice(const GetGatewayBySubDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayBySubDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayBySubDeviceOutcome(GetGatewayBySubDeviceResult(outcome.result()));
	else
		return GetGatewayBySubDeviceOutcome(outcome.error());
}

void IotClient::getGatewayBySubDeviceAsync(const GetGatewayBySubDeviceRequest& request, const GetGatewayBySubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayBySubDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetGatewayBySubDeviceOutcomeCallable IotClient::getGatewayBySubDeviceCallable(const GetGatewayBySubDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayBySubDeviceOutcome()>>(
			[this, request]()
			{
			return this->getGatewayBySubDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetLoraNodesTaskOutcome IotClient::getLoraNodesTask(const GetLoraNodesTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoraNodesTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoraNodesTaskOutcome(GetLoraNodesTaskResult(outcome.result()));
	else
		return GetLoraNodesTaskOutcome(outcome.error());
}

void IotClient::getLoraNodesTaskAsync(const GetLoraNodesTaskRequest& request, const GetLoraNodesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoraNodesTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetLoraNodesTaskOutcomeCallable IotClient::getLoraNodesTaskCallable(const GetLoraNodesTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoraNodesTaskOutcome()>>(
			[this, request]()
			{
			return this->getLoraNodesTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetParserOutcome IotClient::getParser(const GetParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParserOutcome(GetParserResult(outcome.result()));
	else
		return GetParserOutcome(outcome.error());
}

void IotClient::getParserAsync(const GetParserRequest& request, const GetParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetParserOutcomeCallable IotClient::getParserCallable(const GetParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParserOutcome()>>(
			[this, request]()
			{
			return this->getParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetParserDataSourceOutcome IotClient::getParserDataSource(const GetParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParserDataSourceOutcome(GetParserDataSourceResult(outcome.result()));
	else
		return GetParserDataSourceOutcome(outcome.error());
}

void IotClient::getParserDataSourceAsync(const GetParserDataSourceRequest& request, const GetParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetParserDataSourceOutcomeCallable IotClient::getParserDataSourceCallable(const GetParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->getParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetRuleOutcome IotClient::getRule(const GetRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleOutcome(GetRuleResult(outcome.result()));
	else
		return GetRuleOutcome(outcome.error());
}

void IotClient::getRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetRuleOutcomeCallable IotClient::getRuleCallable(const GetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
			[this, request]()
			{
			return this->getRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetRuleActionOutcome IotClient::getRuleAction(const GetRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleActionOutcome(GetRuleActionResult(outcome.result()));
	else
		return GetRuleActionOutcome(outcome.error());
}

void IotClient::getRuleActionAsync(const GetRuleActionRequest& request, const GetRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetRuleActionOutcomeCallable IotClient::getRuleActionCallable(const GetRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleActionOutcome()>>(
			[this, request]()
			{
			return this->getRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSceneRuleOutcome IotClient::getSceneRule(const GetSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSceneRuleOutcome(GetSceneRuleResult(outcome.result()));
	else
		return GetSceneRuleOutcome(outcome.error());
}

void IotClient::getSceneRuleAsync(const GetSceneRuleRequest& request, const GetSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSceneRuleOutcomeCallable IotClient::getSceneRuleCallable(const GetSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->getSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetShareSpeechModelAudioOutcome IotClient::getShareSpeechModelAudio(const GetShareSpeechModelAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetShareSpeechModelAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetShareSpeechModelAudioOutcome(GetShareSpeechModelAudioResult(outcome.result()));
	else
		return GetShareSpeechModelAudioOutcome(outcome.error());
}

void IotClient::getShareSpeechModelAudioAsync(const GetShareSpeechModelAudioRequest& request, const GetShareSpeechModelAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getShareSpeechModelAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetShareSpeechModelAudioOutcomeCallable IotClient::getShareSpeechModelAudioCallable(const GetShareSpeechModelAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetShareSpeechModelAudioOutcome()>>(
			[this, request]()
			{
			return this->getShareSpeechModelAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetShareTaskByDeviceOpenOutcome IotClient::getShareTaskByDeviceOpen(const GetShareTaskByDeviceOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetShareTaskByDeviceOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetShareTaskByDeviceOpenOutcome(GetShareTaskByDeviceOpenResult(outcome.result()));
	else
		return GetShareTaskByDeviceOpenOutcome(outcome.error());
}

void IotClient::getShareTaskByDeviceOpenAsync(const GetShareTaskByDeviceOpenRequest& request, const GetShareTaskByDeviceOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getShareTaskByDeviceOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetShareTaskByDeviceOpenOutcomeCallable IotClient::getShareTaskByDeviceOpenCallable(const GetShareTaskByDeviceOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetShareTaskByDeviceOpenOutcome()>>(
			[this, request]()
			{
			return this->getShareTaskByDeviceOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSoundCodeAudioOutcome IotClient::getSoundCodeAudio(const GetSoundCodeAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSoundCodeAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSoundCodeAudioOutcome(GetSoundCodeAudioResult(outcome.result()));
	else
		return GetSoundCodeAudioOutcome(outcome.error());
}

void IotClient::getSoundCodeAudioAsync(const GetSoundCodeAudioRequest& request, const GetSoundCodeAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSoundCodeAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSoundCodeAudioOutcomeCallable IotClient::getSoundCodeAudioCallable(const GetSoundCodeAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSoundCodeAudioOutcome()>>(
			[this, request]()
			{
			return this->getSoundCodeAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSoundCodeScheduleOutcome IotClient::getSoundCodeSchedule(const GetSoundCodeScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSoundCodeScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSoundCodeScheduleOutcome(GetSoundCodeScheduleResult(outcome.result()));
	else
		return GetSoundCodeScheduleOutcome(outcome.error());
}

void IotClient::getSoundCodeScheduleAsync(const GetSoundCodeScheduleRequest& request, const GetSoundCodeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSoundCodeSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSoundCodeScheduleOutcomeCallable IotClient::getSoundCodeScheduleCallable(const GetSoundCodeScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSoundCodeScheduleOutcome()>>(
			[this, request]()
			{
			return this->getSoundCodeSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSpeechDeviceDetailOutcome IotClient::getSpeechDeviceDetail(const GetSpeechDeviceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpeechDeviceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpeechDeviceDetailOutcome(GetSpeechDeviceDetailResult(outcome.result()));
	else
		return GetSpeechDeviceDetailOutcome(outcome.error());
}

void IotClient::getSpeechDeviceDetailAsync(const GetSpeechDeviceDetailRequest& request, const GetSpeechDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpeechDeviceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSpeechDeviceDetailOutcomeCallable IotClient::getSpeechDeviceDetailCallable(const GetSpeechDeviceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpeechDeviceDetailOutcome()>>(
			[this, request]()
			{
			return this->getSpeechDeviceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSpeechLicenseDeviceStatisticsOutcome IotClient::getSpeechLicenseDeviceStatistics(const GetSpeechLicenseDeviceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpeechLicenseDeviceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpeechLicenseDeviceStatisticsOutcome(GetSpeechLicenseDeviceStatisticsResult(outcome.result()));
	else
		return GetSpeechLicenseDeviceStatisticsOutcome(outcome.error());
}

void IotClient::getSpeechLicenseDeviceStatisticsAsync(const GetSpeechLicenseDeviceStatisticsRequest& request, const GetSpeechLicenseDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpeechLicenseDeviceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSpeechLicenseDeviceStatisticsOutcomeCallable IotClient::getSpeechLicenseDeviceStatisticsCallable(const GetSpeechLicenseDeviceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpeechLicenseDeviceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getSpeechLicenseDeviceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetSpeechVoiceOutcome IotClient::getSpeechVoice(const GetSpeechVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpeechVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpeechVoiceOutcome(GetSpeechVoiceResult(outcome.result()));
	else
		return GetSpeechVoiceOutcome(outcome.error());
}

void IotClient::getSpeechVoiceAsync(const GetSpeechVoiceRequest& request, const GetSpeechVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpeechVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetSpeechVoiceOutcomeCallable IotClient::getSpeechVoiceCallable(const GetSpeechVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpeechVoiceOutcome()>>(
			[this, request]()
			{
			return this->getSpeechVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetStudioAppTokenOpenOutcome IotClient::getStudioAppTokenOpen(const GetStudioAppTokenOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStudioAppTokenOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStudioAppTokenOpenOutcome(GetStudioAppTokenOpenResult(outcome.result()));
	else
		return GetStudioAppTokenOpenOutcome(outcome.error());
}

void IotClient::getStudioAppTokenOpenAsync(const GetStudioAppTokenOpenRequest& request, const GetStudioAppTokenOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStudioAppTokenOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetStudioAppTokenOpenOutcomeCallable IotClient::getStudioAppTokenOpenCallable(const GetStudioAppTokenOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStudioAppTokenOpenOutcome()>>(
			[this, request]()
			{
			return this->getStudioAppTokenOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingModelStatusInnerOutcome IotClient::getThingModelStatusInner(const GetThingModelStatusInnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingModelStatusInnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingModelStatusInnerOutcome(GetThingModelStatusInnerResult(outcome.result()));
	else
		return GetThingModelStatusInnerOutcome(outcome.error());
}

void IotClient::getThingModelStatusInnerAsync(const GetThingModelStatusInnerRequest& request, const GetThingModelStatusInnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingModelStatusInner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingModelStatusInnerOutcomeCallable IotClient::getThingModelStatusInnerCallable(const GetThingModelStatusInnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingModelStatusInnerOutcome()>>(
			[this, request]()
			{
			return this->getThingModelStatusInner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingModelTslOutcome IotClient::getThingModelTsl(const GetThingModelTslRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingModelTslOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingModelTslOutcome(GetThingModelTslResult(outcome.result()));
	else
		return GetThingModelTslOutcome(outcome.error());
}

void IotClient::getThingModelTslAsync(const GetThingModelTslRequest& request, const GetThingModelTslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingModelTsl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingModelTslOutcomeCallable IotClient::getThingModelTslCallable(const GetThingModelTslRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingModelTslOutcome()>>(
			[this, request]()
			{
			return this->getThingModelTsl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingModelTslPublishedOutcome IotClient::getThingModelTslPublished(const GetThingModelTslPublishedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingModelTslPublishedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingModelTslPublishedOutcome(GetThingModelTslPublishedResult(outcome.result()));
	else
		return GetThingModelTslPublishedOutcome(outcome.error());
}

void IotClient::getThingModelTslPublishedAsync(const GetThingModelTslPublishedRequest& request, const GetThingModelTslPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingModelTslPublished(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingModelTslPublishedOutcomeCallable IotClient::getThingModelTslPublishedCallable(const GetThingModelTslPublishedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingModelTslPublishedOutcome()>>(
			[this, request]()
			{
			return this->getThingModelTslPublished(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingScriptOutcome IotClient::getThingScript(const GetThingScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingScriptOutcome(GetThingScriptResult(outcome.result()));
	else
		return GetThingScriptOutcome(outcome.error());
}

void IotClient::getThingScriptAsync(const GetThingScriptRequest& request, const GetThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingScriptOutcomeCallable IotClient::getThingScriptCallable(const GetThingScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingScriptOutcome()>>(
			[this, request]()
			{
			return this->getThingScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingTemplateOutcome IotClient::getThingTemplate(const GetThingTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingTemplateOutcome(GetThingTemplateResult(outcome.result()));
	else
		return GetThingTemplateOutcome(outcome.error());
}

void IotClient::getThingTemplateAsync(const GetThingTemplateRequest& request, const GetThingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingTemplateOutcomeCallable IotClient::getThingTemplateCallable(const GetThingTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingTemplateOutcome()>>(
			[this, request]()
			{
			return this->getThingTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingTopoOutcome IotClient::getThingTopo(const GetThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingTopoOutcome(GetThingTopoResult(outcome.result()));
	else
		return GetThingTopoOutcome(outcome.error());
}

void IotClient::getThingTopoAsync(const GetThingTopoRequest& request, const GetThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingTopoOutcomeCallable IotClient::getThingTopoCallable(const GetThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingTopoOutcome()>>(
			[this, request]()
			{
			return this->getThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GisQueryDeviceLocationOutcome IotClient::gisQueryDeviceLocation(const GisQueryDeviceLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GisQueryDeviceLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GisQueryDeviceLocationOutcome(GisQueryDeviceLocationResult(outcome.result()));
	else
		return GisQueryDeviceLocationOutcome(outcome.error());
}

void IotClient::gisQueryDeviceLocationAsync(const GisQueryDeviceLocationRequest& request, const GisQueryDeviceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, gisQueryDeviceLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GisQueryDeviceLocationOutcomeCallable IotClient::gisQueryDeviceLocationCallable(const GisQueryDeviceLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GisQueryDeviceLocationOutcome()>>(
			[this, request]()
			{
			return this->gisQueryDeviceLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GisSearchDeviceTraceOutcome IotClient::gisSearchDeviceTrace(const GisSearchDeviceTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GisSearchDeviceTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GisSearchDeviceTraceOutcome(GisSearchDeviceTraceResult(outcome.result()));
	else
		return GisSearchDeviceTraceOutcome(outcome.error());
}

void IotClient::gisSearchDeviceTraceAsync(const GisSearchDeviceTraceRequest& request, const GisSearchDeviceTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, gisSearchDeviceTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GisSearchDeviceTraceOutcomeCallable IotClient::gisSearchDeviceTraceCallable(const GisSearchDeviceTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GisSearchDeviceTraceOutcome()>>(
			[this, request]()
			{
			return this->gisSearchDeviceTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ImportDTDataOutcome IotClient::importDTData(const ImportDTDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDTDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDTDataOutcome(ImportDTDataResult(outcome.result()));
	else
		return ImportDTDataOutcome(outcome.error());
}

void IotClient::importDTDataAsync(const ImportDTDataRequest& request, const ImportDTDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDTData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ImportDTDataOutcomeCallable IotClient::importDTDataCallable(const ImportDTDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDTDataOutcome()>>(
			[this, request]()
			{
			return this->importDTData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ImportDeviceOutcome IotClient::importDevice(const ImportDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDeviceOutcome(ImportDeviceResult(outcome.result()));
	else
		return ImportDeviceOutcome(outcome.error());
}

void IotClient::importDeviceAsync(const ImportDeviceRequest& request, const ImportDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ImportDeviceOutcomeCallable IotClient::importDeviceCallable(const ImportDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDeviceOutcome()>>(
			[this, request]()
			{
			return this->importDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ImportThingModelTslOutcome IotClient::importThingModelTsl(const ImportThingModelTslRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportThingModelTslOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportThingModelTslOutcome(ImportThingModelTslResult(outcome.result()));
	else
		return ImportThingModelTslOutcome(outcome.error());
}

void IotClient::importThingModelTslAsync(const ImportThingModelTslRequest& request, const ImportThingModelTslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importThingModelTsl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ImportThingModelTslOutcomeCallable IotClient::importThingModelTslCallable(const ImportThingModelTslRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportThingModelTslOutcome()>>(
			[this, request]()
			{
			return this->importThingModelTsl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::InvokeDataAPIServiceOutcome IotClient::invokeDataAPIService(const InvokeDataAPIServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeDataAPIServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeDataAPIServiceOutcome(InvokeDataAPIServiceResult(outcome.result()));
	else
		return InvokeDataAPIServiceOutcome(outcome.error());
}

void IotClient::invokeDataAPIServiceAsync(const InvokeDataAPIServiceRequest& request, const InvokeDataAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeDataAPIService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::InvokeDataAPIServiceOutcomeCallable IotClient::invokeDataAPIServiceCallable(const InvokeDataAPIServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeDataAPIServiceOutcome()>>(
			[this, request]()
			{
			return this->invokeDataAPIService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::InvokeThingServiceOutcome IotClient::invokeThingService(const InvokeThingServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeThingServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeThingServiceOutcome(InvokeThingServiceResult(outcome.result()));
	else
		return InvokeThingServiceOutcome(outcome.error());
}

void IotClient::invokeThingServiceAsync(const InvokeThingServiceRequest& request, const InvokeThingServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeThingService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::InvokeThingServiceOutcomeCallable IotClient::invokeThingServiceCallable(const InvokeThingServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeThingServiceOutcome()>>(
			[this, request]()
			{
			return this->invokeThingService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::InvokeThingsServiceOutcome IotClient::invokeThingsService(const InvokeThingsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeThingsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeThingsServiceOutcome(InvokeThingsServiceResult(outcome.result()));
	else
		return InvokeThingsServiceOutcome(outcome.error());
}

void IotClient::invokeThingsServiceAsync(const InvokeThingsServiceRequest& request, const InvokeThingsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeThingsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::InvokeThingsServiceOutcomeCallable IotClient::invokeThingsServiceCallable(const InvokeThingsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeThingsServiceOutcome()>>(
			[this, request]()
			{
			return this->invokeThingsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListAnalyticsDataOutcome IotClient::listAnalyticsData(const ListAnalyticsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnalyticsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnalyticsDataOutcome(ListAnalyticsDataResult(outcome.result()));
	else
		return ListAnalyticsDataOutcome(outcome.error());
}

void IotClient::listAnalyticsDataAsync(const ListAnalyticsDataRequest& request, const ListAnalyticsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnalyticsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListAnalyticsDataOutcomeCallable IotClient::listAnalyticsDataCallable(const ListAnalyticsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnalyticsDataOutcome()>>(
			[this, request]()
			{
			return this->listAnalyticsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListDataSourceItemOutcome IotClient::listDataSourceItem(const ListDataSourceItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceItemOutcome(ListDataSourceItemResult(outcome.result()));
	else
		return ListDataSourceItemOutcome(outcome.error());
}

void IotClient::listDataSourceItemAsync(const ListDataSourceItemRequest& request, const ListDataSourceItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSourceItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListDataSourceItemOutcomeCallable IotClient::listDataSourceItemCallable(const ListDataSourceItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceItemOutcome()>>(
			[this, request]()
			{
			return this->listDataSourceItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListDestinationOutcome IotClient::listDestination(const ListDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDestinationOutcome(ListDestinationResult(outcome.result()));
	else
		return ListDestinationOutcome(outcome.error());
}

void IotClient::listDestinationAsync(const ListDestinationRequest& request, const ListDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListDestinationOutcomeCallable IotClient::listDestinationCallable(const ListDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDestinationOutcome()>>(
			[this, request]()
			{
			return this->listDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListDeviceDistributeJobOutcome IotClient::listDeviceDistributeJob(const ListDeviceDistributeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceDistributeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceDistributeJobOutcome(ListDeviceDistributeJobResult(outcome.result()));
	else
		return ListDeviceDistributeJobOutcome(outcome.error());
}

void IotClient::listDeviceDistributeJobAsync(const ListDeviceDistributeJobRequest& request, const ListDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceDistributeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListDeviceDistributeJobOutcomeCallable IotClient::listDeviceDistributeJobCallable(const ListDeviceDistributeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceDistributeJobOutcome()>>(
			[this, request]()
			{
			return this->listDeviceDistributeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListDistributedDeviceOutcome IotClient::listDistributedDevice(const ListDistributedDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDistributedDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDistributedDeviceOutcome(ListDistributedDeviceResult(outcome.result()));
	else
		return ListDistributedDeviceOutcome(outcome.error());
}

void IotClient::listDistributedDeviceAsync(const ListDistributedDeviceRequest& request, const ListDistributedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDistributedDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListDistributedDeviceOutcomeCallable IotClient::listDistributedDeviceCallable(const ListDistributedDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDistributedDeviceOutcome()>>(
			[this, request]()
			{
			return this->listDistributedDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListDistributedProductOutcome IotClient::listDistributedProduct(const ListDistributedProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDistributedProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDistributedProductOutcome(ListDistributedProductResult(outcome.result()));
	else
		return ListDistributedProductOutcome(outcome.error());
}

void IotClient::listDistributedProductAsync(const ListDistributedProductRequest& request, const ListDistributedProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDistributedProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListDistributedProductOutcomeCallable IotClient::listDistributedProductCallable(const ListDistributedProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDistributedProductOutcome()>>(
			[this, request]()
			{
			return this->listDistributedProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListJobOutcome IotClient::listJob(const ListJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobOutcome(ListJobResult(outcome.result()));
	else
		return ListJobOutcome(outcome.error());
}

void IotClient::listJobAsync(const ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListJobOutcomeCallable IotClient::listJobCallable(const ListJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobOutcome()>>(
			[this, request]()
			{
			return this->listJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAFirmwareOutcome IotClient::listOTAFirmware(const ListOTAFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAFirmwareOutcome(ListOTAFirmwareResult(outcome.result()));
	else
		return ListOTAFirmwareOutcome(outcome.error());
}

void IotClient::listOTAFirmwareAsync(const ListOTAFirmwareRequest& request, const ListOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAFirmwareOutcomeCallable IotClient::listOTAFirmwareCallable(const ListOTAFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAFirmwareOutcome()>>(
			[this, request]()
			{
			return this->listOTAFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAJobByDeviceOutcome IotClient::listOTAJobByDevice(const ListOTAJobByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAJobByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAJobByDeviceOutcome(ListOTAJobByDeviceResult(outcome.result()));
	else
		return ListOTAJobByDeviceOutcome(outcome.error());
}

void IotClient::listOTAJobByDeviceAsync(const ListOTAJobByDeviceRequest& request, const ListOTAJobByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAJobByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAJobByDeviceOutcomeCallable IotClient::listOTAJobByDeviceCallable(const ListOTAJobByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAJobByDeviceOutcome()>>(
			[this, request]()
			{
			return this->listOTAJobByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAJobByFirmwareOutcome IotClient::listOTAJobByFirmware(const ListOTAJobByFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAJobByFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAJobByFirmwareOutcome(ListOTAJobByFirmwareResult(outcome.result()));
	else
		return ListOTAJobByFirmwareOutcome(outcome.error());
}

void IotClient::listOTAJobByFirmwareAsync(const ListOTAJobByFirmwareRequest& request, const ListOTAJobByFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAJobByFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAJobByFirmwareOutcomeCallable IotClient::listOTAJobByFirmwareCallable(const ListOTAJobByFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAJobByFirmwareOutcome()>>(
			[this, request]()
			{
			return this->listOTAJobByFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAModuleByProductOutcome IotClient::listOTAModuleByProduct(const ListOTAModuleByProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAModuleByProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAModuleByProductOutcome(ListOTAModuleByProductResult(outcome.result()));
	else
		return ListOTAModuleByProductOutcome(outcome.error());
}

void IotClient::listOTAModuleByProductAsync(const ListOTAModuleByProductRequest& request, const ListOTAModuleByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAModuleByProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAModuleByProductOutcomeCallable IotClient::listOTAModuleByProductCallable(const ListOTAModuleByProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAModuleByProductOutcome()>>(
			[this, request]()
			{
			return this->listOTAModuleByProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAModuleVersionsByDeviceOutcome IotClient::listOTAModuleVersionsByDevice(const ListOTAModuleVersionsByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAModuleVersionsByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAModuleVersionsByDeviceOutcome(ListOTAModuleVersionsByDeviceResult(outcome.result()));
	else
		return ListOTAModuleVersionsByDeviceOutcome(outcome.error());
}

void IotClient::listOTAModuleVersionsByDeviceAsync(const ListOTAModuleVersionsByDeviceRequest& request, const ListOTAModuleVersionsByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAModuleVersionsByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAModuleVersionsByDeviceOutcomeCallable IotClient::listOTAModuleVersionsByDeviceCallable(const ListOTAModuleVersionsByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAModuleVersionsByDeviceOutcome()>>(
			[this, request]()
			{
			return this->listOTAModuleVersionsByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTATaskByJobOutcome IotClient::listOTATaskByJob(const ListOTATaskByJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTATaskByJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTATaskByJobOutcome(ListOTATaskByJobResult(outcome.result()));
	else
		return ListOTATaskByJobOutcome(outcome.error());
}

void IotClient::listOTATaskByJobAsync(const ListOTATaskByJobRequest& request, const ListOTATaskByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTATaskByJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTATaskByJobOutcomeCallable IotClient::listOTATaskByJobCallable(const ListOTATaskByJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTATaskByJobOutcome()>>(
			[this, request]()
			{
			return this->listOTATaskByJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListOTAUnfinishedTaskByDeviceOutcome IotClient::listOTAUnfinishedTaskByDevice(const ListOTAUnfinishedTaskByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOTAUnfinishedTaskByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOTAUnfinishedTaskByDeviceOutcome(ListOTAUnfinishedTaskByDeviceResult(outcome.result()));
	else
		return ListOTAUnfinishedTaskByDeviceOutcome(outcome.error());
}

void IotClient::listOTAUnfinishedTaskByDeviceAsync(const ListOTAUnfinishedTaskByDeviceRequest& request, const ListOTAUnfinishedTaskByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOTAUnfinishedTaskByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListOTAUnfinishedTaskByDeviceOutcomeCallable IotClient::listOTAUnfinishedTaskByDeviceCallable(const ListOTAUnfinishedTaskByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOTAUnfinishedTaskByDeviceOutcome()>>(
			[this, request]()
			{
			return this->listOTAUnfinishedTaskByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListParserOutcome IotClient::listParser(const ListParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListParserOutcome(ListParserResult(outcome.result()));
	else
		return ListParserOutcome(outcome.error());
}

void IotClient::listParserAsync(const ListParserRequest& request, const ListParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListParserOutcomeCallable IotClient::listParserCallable(const ListParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListParserOutcome()>>(
			[this, request]()
			{
			return this->listParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListParserDataSourceOutcome IotClient::listParserDataSource(const ListParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListParserDataSourceOutcome(ListParserDataSourceResult(outcome.result()));
	else
		return ListParserDataSourceOutcome(outcome.error());
}

void IotClient::listParserDataSourceAsync(const ListParserDataSourceRequest& request, const ListParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListParserDataSourceOutcomeCallable IotClient::listParserDataSourceCallable(const ListParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListParserDestinationOutcome IotClient::listParserDestination(const ListParserDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListParserDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListParserDestinationOutcome(ListParserDestinationResult(outcome.result()));
	else
		return ListParserDestinationOutcome(outcome.error());
}

void IotClient::listParserDestinationAsync(const ListParserDestinationRequest& request, const ListParserDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listParserDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListParserDestinationOutcomeCallable IotClient::listParserDestinationCallable(const ListParserDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListParserDestinationOutcome()>>(
			[this, request]()
			{
			return this->listParserDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListPowerStationOutcome IotClient::listPowerStation(const ListPowerStationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPowerStationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPowerStationOutcome(ListPowerStationResult(outcome.result()));
	else
		return ListPowerStationOutcome(outcome.error());
}

void IotClient::listPowerStationAsync(const ListPowerStationRequest& request, const ListPowerStationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPowerStation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListPowerStationOutcomeCallable IotClient::listPowerStationCallable(const ListPowerStationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPowerStationOutcome()>>(
			[this, request]()
			{
			return this->listPowerStation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListProductByTagsOutcome IotClient::listProductByTags(const ListProductByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductByTagsOutcome(ListProductByTagsResult(outcome.result()));
	else
		return ListProductByTagsOutcome(outcome.error());
}

void IotClient::listProductByTagsAsync(const ListProductByTagsRequest& request, const ListProductByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListProductByTagsOutcomeCallable IotClient::listProductByTagsCallable(const ListProductByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductByTagsOutcome()>>(
			[this, request]()
			{
			return this->listProductByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListProductTagsOutcome IotClient::listProductTags(const ListProductTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductTagsOutcome(ListProductTagsResult(outcome.result()));
	else
		return ListProductTagsOutcome(outcome.error());
}

void IotClient::listProductTagsAsync(const ListProductTagsRequest& request, const ListProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListProductTagsOutcomeCallable IotClient::listProductTagsCallable(const ListProductTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductTagsOutcome()>>(
			[this, request]()
			{
			return this->listProductTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListRuleOutcome IotClient::listRule(const ListRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleOutcome(ListRuleResult(outcome.result()));
	else
		return ListRuleOutcome(outcome.error());
}

void IotClient::listRuleAsync(const ListRuleRequest& request, const ListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListRuleOutcomeCallable IotClient::listRuleCallable(const ListRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleOutcome()>>(
			[this, request]()
			{
			return this->listRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListRuleActionsOutcome IotClient::listRuleActions(const ListRuleActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleActionsOutcome(ListRuleActionsResult(outcome.result()));
	else
		return ListRuleActionsOutcome(outcome.error());
}

void IotClient::listRuleActionsAsync(const ListRuleActionsRequest& request, const ListRuleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListRuleActionsOutcomeCallable IotClient::listRuleActionsCallable(const ListRuleActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleActionsOutcome()>>(
			[this, request]()
			{
			return this->listRuleActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListTaskOutcome IotClient::listTask(const ListTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskOutcome(ListTaskResult(outcome.result()));
	else
		return ListTaskOutcome(outcome.error());
}

void IotClient::listTaskAsync(const ListTaskRequest& request, const ListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListTaskOutcomeCallable IotClient::listTaskCallable(const ListTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskOutcome()>>(
			[this, request]()
			{
			return this->listTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListThingModelVersionOutcome IotClient::listThingModelVersion(const ListThingModelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListThingModelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListThingModelVersionOutcome(ListThingModelVersionResult(outcome.result()));
	else
		return ListThingModelVersionOutcome(outcome.error());
}

void IotClient::listThingModelVersionAsync(const ListThingModelVersionRequest& request, const ListThingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listThingModelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListThingModelVersionOutcomeCallable IotClient::listThingModelVersionCallable(const ListThingModelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListThingModelVersionOutcome()>>(
			[this, request]()
			{
			return this->listThingModelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListThingTemplatesOutcome IotClient::listThingTemplates(const ListThingTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListThingTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListThingTemplatesOutcome(ListThingTemplatesResult(outcome.result()));
	else
		return ListThingTemplatesOutcome(outcome.error());
}

void IotClient::listThingTemplatesAsync(const ListThingTemplatesRequest& request, const ListThingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listThingTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListThingTemplatesOutcomeCallable IotClient::listThingTemplatesCallable(const ListThingTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListThingTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listThingTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ModifyOTAFirmwareOutcome IotClient::modifyOTAFirmware(const ModifyOTAFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOTAFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOTAFirmwareOutcome(ModifyOTAFirmwareResult(outcome.result()));
	else
		return ModifyOTAFirmwareOutcome(outcome.error());
}

void IotClient::modifyOTAFirmwareAsync(const ModifyOTAFirmwareRequest& request, const ModifyOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOTAFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ModifyOTAFirmwareOutcomeCallable IotClient::modifyOTAFirmwareCallable(const ModifyOTAFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOTAFirmwareOutcome()>>(
			[this, request]()
			{
			return this->modifyOTAFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ModifyPowerStationOutcome IotClient::modifyPowerStation(const ModifyPowerStationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPowerStationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPowerStationOutcome(ModifyPowerStationResult(outcome.result()));
	else
		return ModifyPowerStationOutcome(outcome.error());
}

void IotClient::modifyPowerStationAsync(const ModifyPowerStationRequest& request, const ModifyPowerStationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPowerStation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ModifyPowerStationOutcomeCallable IotClient::modifyPowerStationCallable(const ModifyPowerStationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPowerStationOutcome()>>(
			[this, request]()
			{
			return this->modifyPowerStation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::NotifyAddThingTopoOutcome IotClient::notifyAddThingTopo(const NotifyAddThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyAddThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyAddThingTopoOutcome(NotifyAddThingTopoResult(outcome.result()));
	else
		return NotifyAddThingTopoOutcome(outcome.error());
}

void IotClient::notifyAddThingTopoAsync(const NotifyAddThingTopoRequest& request, const NotifyAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyAddThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::NotifyAddThingTopoOutcomeCallable IotClient::notifyAddThingTopoCallable(const NotifyAddThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyAddThingTopoOutcome()>>(
			[this, request]()
			{
			return this->notifyAddThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::OpenIotServiceOutcome IotClient::openIotService(const OpenIotServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenIotServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenIotServiceOutcome(OpenIotServiceResult(outcome.result()));
	else
		return OpenIotServiceOutcome(outcome.error());
}

void IotClient::openIotServiceAsync(const OpenIotServiceRequest& request, const OpenIotServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openIotService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::OpenIotServiceOutcomeCallable IotClient::openIotServiceCallable(const OpenIotServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenIotServiceOutcome()>>(
			[this, request]()
			{
			return this->openIotService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PackageSoundCodeLabelBatchAudioOutcome IotClient::packageSoundCodeLabelBatchAudio(const PackageSoundCodeLabelBatchAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PackageSoundCodeLabelBatchAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PackageSoundCodeLabelBatchAudioOutcome(PackageSoundCodeLabelBatchAudioResult(outcome.result()));
	else
		return PackageSoundCodeLabelBatchAudioOutcome(outcome.error());
}

void IotClient::packageSoundCodeLabelBatchAudioAsync(const PackageSoundCodeLabelBatchAudioRequest& request, const PackageSoundCodeLabelBatchAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, packageSoundCodeLabelBatchAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PackageSoundCodeLabelBatchAudioOutcomeCallable IotClient::packageSoundCodeLabelBatchAudioCallable(const PackageSoundCodeLabelBatchAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PackageSoundCodeLabelBatchAudioOutcome()>>(
			[this, request]()
			{
			return this->packageSoundCodeLabelBatchAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PageQuerySharedSpeechOpenOutcome IotClient::pageQuerySharedSpeechOpen(const PageQuerySharedSpeechOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageQuerySharedSpeechOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageQuerySharedSpeechOpenOutcome(PageQuerySharedSpeechOpenResult(outcome.result()));
	else
		return PageQuerySharedSpeechOpenOutcome(outcome.error());
}

void IotClient::pageQuerySharedSpeechOpenAsync(const PageQuerySharedSpeechOpenRequest& request, const PageQuerySharedSpeechOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageQuerySharedSpeechOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PageQuerySharedSpeechOpenOutcomeCallable IotClient::pageQuerySharedSpeechOpenCallable(const PageQuerySharedSpeechOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageQuerySharedSpeechOpenOutcome()>>(
			[this, request]()
			{
			return this->pageQuerySharedSpeechOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PageQuerySpeechBroadcastHourOutcome IotClient::pageQuerySpeechBroadcastHour(const PageQuerySpeechBroadcastHourRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageQuerySpeechBroadcastHourOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageQuerySpeechBroadcastHourOutcome(PageQuerySpeechBroadcastHourResult(outcome.result()));
	else
		return PageQuerySpeechBroadcastHourOutcome(outcome.error());
}

void IotClient::pageQuerySpeechBroadcastHourAsync(const PageQuerySpeechBroadcastHourRequest& request, const PageQuerySpeechBroadcastHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageQuerySpeechBroadcastHour(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PageQuerySpeechBroadcastHourOutcomeCallable IotClient::pageQuerySpeechBroadcastHourCallable(const PageQuerySpeechBroadcastHourRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageQuerySpeechBroadcastHourOutcome()>>(
			[this, request]()
			{
			return this->pageQuerySpeechBroadcastHour(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PrintByTemplateOutcome IotClient::printByTemplate(const PrintByTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PrintByTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PrintByTemplateOutcome(PrintByTemplateResult(outcome.result()));
	else
		return PrintByTemplateOutcome(outcome.error());
}

void IotClient::printByTemplateAsync(const PrintByTemplateRequest& request, const PrintByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, printByTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PrintByTemplateOutcomeCallable IotClient::printByTemplateCallable(const PrintByTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PrintByTemplateOutcome()>>(
			[this, request]()
			{
			return this->printByTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PubOutcome IotClient::pub(const PubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PubOutcome(PubResult(outcome.result()));
	else
		return PubOutcome(outcome.error());
}

void IotClient::pubAsync(const PubRequest& request, const PubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PubOutcomeCallable IotClient::pubCallable(const PubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PubOutcome()>>(
			[this, request]()
			{
			return this->pub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PubBroadcastOutcome IotClient::pubBroadcast(const PubBroadcastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PubBroadcastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PubBroadcastOutcome(PubBroadcastResult(outcome.result()));
	else
		return PubBroadcastOutcome(outcome.error());
}

void IotClient::pubBroadcastAsync(const PubBroadcastRequest& request, const PubBroadcastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pubBroadcast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PubBroadcastOutcomeCallable IotClient::pubBroadcastCallable(const PubBroadcastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PubBroadcastOutcome()>>(
			[this, request]()
			{
			return this->pubBroadcast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PublishScriptOutcome IotClient::publishScript(const PublishScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishScriptOutcome(PublishScriptResult(outcome.result()));
	else
		return PublishScriptOutcome(outcome.error());
}

void IotClient::publishScriptAsync(const PublishScriptRequest& request, const PublishScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PublishScriptOutcomeCallable IotClient::publishScriptCallable(const PublishScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishScriptOutcome()>>(
			[this, request]()
			{
			return this->publishScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PublishStudioAppOutcome IotClient::publishStudioApp(const PublishStudioAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishStudioAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishStudioAppOutcome(PublishStudioAppResult(outcome.result()));
	else
		return PublishStudioAppOutcome(outcome.error());
}

void IotClient::publishStudioAppAsync(const PublishStudioAppRequest& request, const PublishStudioAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishStudioApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PublishStudioAppOutcomeCallable IotClient::publishStudioAppCallable(const PublishStudioAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishStudioAppOutcome()>>(
			[this, request]()
			{
			return this->publishStudioApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PublishThingModelOutcome IotClient::publishThingModel(const PublishThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishThingModelOutcome(PublishThingModelResult(outcome.result()));
	else
		return PublishThingModelOutcome(outcome.error());
}

void IotClient::publishThingModelAsync(const PublishThingModelRequest& request, const PublishThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PublishThingModelOutcomeCallable IotClient::publishThingModelCallable(const PublishThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishThingModelOutcome()>>(
			[this, request]()
			{
			return this->publishThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PublishThingModelAsyncOutcome IotClient::publishThingModelAsync(const PublishThingModelAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishThingModelAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishThingModelAsyncOutcome(PublishThingModelAsyncResult(outcome.result()));
	else
		return PublishThingModelAsyncOutcome(outcome.error());
}

void IotClient::publishThingModelAsyncAsync(const PublishThingModelAsyncRequest& request, const PublishThingModelAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishThingModelAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PublishThingModelAsyncOutcomeCallable IotClient::publishThingModelAsyncCallable(const PublishThingModelAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishThingModelAsyncOutcome()>>(
			[this, request]()
			{
			return this->publishThingModelAsync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PublishThingModelAsyncInnerOutcome IotClient::publishThingModelAsyncInner(const PublishThingModelAsyncInnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishThingModelAsyncInnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishThingModelAsyncInnerOutcome(PublishThingModelAsyncInnerResult(outcome.result()));
	else
		return PublishThingModelAsyncInnerOutcome(outcome.error());
}

void IotClient::publishThingModelAsyncInnerAsync(const PublishThingModelAsyncInnerRequest& request, const PublishThingModelAsyncInnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishThingModelAsyncInner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PublishThingModelAsyncInnerOutcomeCallable IotClient::publishThingModelAsyncInnerCallable(const PublishThingModelAsyncInnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishThingModelAsyncInnerOutcome()>>(
			[this, request]()
			{
			return this->publishThingModelAsyncInner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PushSpeechOutcome IotClient::pushSpeech(const PushSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushSpeechOutcome(PushSpeechResult(outcome.result()));
	else
		return PushSpeechOutcome(outcome.error());
}

void IotClient::pushSpeechAsync(const PushSpeechRequest& request, const PushSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PushSpeechOutcomeCallable IotClient::pushSpeechCallable(const PushSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushSpeechOutcome()>>(
			[this, request]()
			{
			return this->pushSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryBatchRegisterDeviceStatusOutcome IotClient::queryBatchRegisterDeviceStatus(const QueryBatchRegisterDeviceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBatchRegisterDeviceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBatchRegisterDeviceStatusOutcome(QueryBatchRegisterDeviceStatusResult(outcome.result()));
	else
		return QueryBatchRegisterDeviceStatusOutcome(outcome.error());
}

void IotClient::queryBatchRegisterDeviceStatusAsync(const QueryBatchRegisterDeviceStatusRequest& request, const QueryBatchRegisterDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBatchRegisterDeviceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryBatchRegisterDeviceStatusOutcomeCallable IotClient::queryBatchRegisterDeviceStatusCallable(const QueryBatchRegisterDeviceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBatchRegisterDeviceStatusOutcome()>>(
			[this, request]()
			{
			return this->queryBatchRegisterDeviceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryCertUrlByApplyIdOutcome IotClient::queryCertUrlByApplyId(const QueryCertUrlByApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCertUrlByApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCertUrlByApplyIdOutcome(QueryCertUrlByApplyIdResult(outcome.result()));
	else
		return QueryCertUrlByApplyIdOutcome(outcome.error());
}

void IotClient::queryCertUrlByApplyIdAsync(const QueryCertUrlByApplyIdRequest& request, const QueryCertUrlByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCertUrlByApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryCertUrlByApplyIdOutcomeCallable IotClient::queryCertUrlByApplyIdCallable(const QueryCertUrlByApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCertUrlByApplyIdOutcome()>>(
			[this, request]()
			{
			return this->queryCertUrlByApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryClientIdsOutcome IotClient::queryClientIds(const QueryClientIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClientIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClientIdsOutcome(QueryClientIdsResult(outcome.result()));
	else
		return QueryClientIdsOutcome(outcome.error());
}

void IotClient::queryClientIdsAsync(const QueryClientIdsRequest& request, const QueryClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClientIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryClientIdsOutcomeCallable IotClient::queryClientIdsCallable(const QueryClientIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClientIdsOutcome()>>(
			[this, request]()
			{
			return this->queryClientIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryConsumerGroupByGroupIdOutcome IotClient::queryConsumerGroupByGroupId(const QueryConsumerGroupByGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConsumerGroupByGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConsumerGroupByGroupIdOutcome(QueryConsumerGroupByGroupIdResult(outcome.result()));
	else
		return QueryConsumerGroupByGroupIdOutcome(outcome.error());
}

void IotClient::queryConsumerGroupByGroupIdAsync(const QueryConsumerGroupByGroupIdRequest& request, const QueryConsumerGroupByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConsumerGroupByGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryConsumerGroupByGroupIdOutcomeCallable IotClient::queryConsumerGroupByGroupIdCallable(const QueryConsumerGroupByGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConsumerGroupByGroupIdOutcome()>>(
			[this, request]()
			{
			return this->queryConsumerGroupByGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryConsumerGroupListOutcome IotClient::queryConsumerGroupList(const QueryConsumerGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConsumerGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConsumerGroupListOutcome(QueryConsumerGroupListResult(outcome.result()));
	else
		return QueryConsumerGroupListOutcome(outcome.error());
}

void IotClient::queryConsumerGroupListAsync(const QueryConsumerGroupListRequest& request, const QueryConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConsumerGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryConsumerGroupListOutcomeCallable IotClient::queryConsumerGroupListCallable(const QueryConsumerGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConsumerGroupListOutcome()>>(
			[this, request]()
			{
			return this->queryConsumerGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryConsumerGroupStatusOutcome IotClient::queryConsumerGroupStatus(const QueryConsumerGroupStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConsumerGroupStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConsumerGroupStatusOutcome(QueryConsumerGroupStatusResult(outcome.result()));
	else
		return QueryConsumerGroupStatusOutcome(outcome.error());
}

void IotClient::queryConsumerGroupStatusAsync(const QueryConsumerGroupStatusRequest& request, const QueryConsumerGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConsumerGroupStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryConsumerGroupStatusOutcomeCallable IotClient::queryConsumerGroupStatusCallable(const QueryConsumerGroupStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConsumerGroupStatusOutcome()>>(
			[this, request]()
			{
			return this->queryConsumerGroupStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryCustomTimelineTableStatusOutcome IotClient::queryCustomTimelineTableStatus(const QueryCustomTimelineTableStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomTimelineTableStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomTimelineTableStatusOutcome(QueryCustomTimelineTableStatusResult(outcome.result()));
	else
		return QueryCustomTimelineTableStatusOutcome(outcome.error());
}

void IotClient::queryCustomTimelineTableStatusAsync(const QueryCustomTimelineTableStatusRequest& request, const QueryCustomTimelineTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomTimelineTableStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryCustomTimelineTableStatusOutcomeCallable IotClient::queryCustomTimelineTableStatusCallable(const QueryCustomTimelineTableStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomTimelineTableStatusOutcome()>>(
			[this, request]()
			{
			return this->queryCustomTimelineTableStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDetailSceneRuleLogOutcome IotClient::queryDetailSceneRuleLog(const QueryDetailSceneRuleLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDetailSceneRuleLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDetailSceneRuleLogOutcome(QueryDetailSceneRuleLogResult(outcome.result()));
	else
		return QueryDetailSceneRuleLogOutcome(outcome.error());
}

void IotClient::queryDetailSceneRuleLogAsync(const QueryDetailSceneRuleLogRequest& request, const QueryDetailSceneRuleLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDetailSceneRuleLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDetailSceneRuleLogOutcomeCallable IotClient::queryDetailSceneRuleLogCallable(const QueryDetailSceneRuleLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDetailSceneRuleLogOutcome()>>(
			[this, request]()
			{
			return this->queryDetailSceneRuleLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOutcome IotClient::queryDevice(const QueryDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOutcome(QueryDeviceResult(outcome.result()));
	else
		return QueryDeviceOutcome(outcome.error());
}

void IotClient::queryDeviceAsync(const QueryDeviceRequest& request, const QueryDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOutcomeCallable IotClient::queryDeviceCallable(const QueryDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceBySQLOutcome IotClient::queryDeviceBySQL(const QueryDeviceBySQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceBySQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceBySQLOutcome(QueryDeviceBySQLResult(outcome.result()));
	else
		return QueryDeviceBySQLOutcome(outcome.error());
}

void IotClient::queryDeviceBySQLAsync(const QueryDeviceBySQLRequest& request, const QueryDeviceBySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceBySQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceBySQLOutcomeCallable IotClient::queryDeviceBySQLCallable(const QueryDeviceBySQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceBySQLOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceBySQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceByStatusOutcome IotClient::queryDeviceByStatus(const QueryDeviceByStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceByStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceByStatusOutcome(QueryDeviceByStatusResult(outcome.result()));
	else
		return QueryDeviceByStatusOutcome(outcome.error());
}

void IotClient::queryDeviceByStatusAsync(const QueryDeviceByStatusRequest& request, const QueryDeviceByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceByStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceByStatusOutcomeCallable IotClient::queryDeviceByStatusCallable(const QueryDeviceByStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceByStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceByStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceByTagsOutcome IotClient::queryDeviceByTags(const QueryDeviceByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceByTagsOutcome(QueryDeviceByTagsResult(outcome.result()));
	else
		return QueryDeviceByTagsOutcome(outcome.error());
}

void IotClient::queryDeviceByTagsAsync(const QueryDeviceByTagsRequest& request, const QueryDeviceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceByTagsOutcomeCallable IotClient::queryDeviceByTagsCallable(const QueryDeviceByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceByTagsOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceCertOutcome IotClient::queryDeviceCert(const QueryDeviceCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceCertOutcome(QueryDeviceCertResult(outcome.result()));
	else
		return QueryDeviceCertOutcome(outcome.error());
}

void IotClient::queryDeviceCertAsync(const QueryDeviceCertRequest& request, const QueryDeviceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceCertOutcomeCallable IotClient::queryDeviceCertCallable(const QueryDeviceCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceCertOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceDesiredPropertyOutcome IotClient::queryDeviceDesiredProperty(const QueryDeviceDesiredPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceDesiredPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceDesiredPropertyOutcome(QueryDeviceDesiredPropertyResult(outcome.result()));
	else
		return QueryDeviceDesiredPropertyOutcome(outcome.error());
}

void IotClient::queryDeviceDesiredPropertyAsync(const QueryDeviceDesiredPropertyRequest& request, const QueryDeviceDesiredPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceDesiredProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceDesiredPropertyOutcomeCallable IotClient::queryDeviceDesiredPropertyCallable(const QueryDeviceDesiredPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceDesiredPropertyOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceDesiredProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceDetailOutcome IotClient::queryDeviceDetail(const QueryDeviceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceDetailOutcome(QueryDeviceDetailResult(outcome.result()));
	else
		return QueryDeviceDetailOutcome(outcome.error());
}

void IotClient::queryDeviceDetailAsync(const QueryDeviceDetailRequest& request, const QueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceDetailOutcomeCallable IotClient::queryDeviceDetailCallable(const QueryDeviceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceDetailOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceDistributeDetailOutcome IotClient::queryDeviceDistributeDetail(const QueryDeviceDistributeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceDistributeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceDistributeDetailOutcome(QueryDeviceDistributeDetailResult(outcome.result()));
	else
		return QueryDeviceDistributeDetailOutcome(outcome.error());
}

void IotClient::queryDeviceDistributeDetailAsync(const QueryDeviceDistributeDetailRequest& request, const QueryDeviceDistributeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceDistributeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceDistributeDetailOutcomeCallable IotClient::queryDeviceDistributeDetailCallable(const QueryDeviceDistributeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceDistributeDetailOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceDistributeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceDistributeJobOutcome IotClient::queryDeviceDistributeJob(const QueryDeviceDistributeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceDistributeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceDistributeJobOutcome(QueryDeviceDistributeJobResult(outcome.result()));
	else
		return QueryDeviceDistributeJobOutcome(outcome.error());
}

void IotClient::queryDeviceDistributeJobAsync(const QueryDeviceDistributeJobRequest& request, const QueryDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceDistributeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceDistributeJobOutcomeCallable IotClient::queryDeviceDistributeJobCallable(const QueryDeviceDistributeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceDistributeJobOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceDistributeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceEventDataOutcome IotClient::queryDeviceEventData(const QueryDeviceEventDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceEventDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceEventDataOutcome(QueryDeviceEventDataResult(outcome.result()));
	else
		return QueryDeviceEventDataOutcome(outcome.error());
}

void IotClient::queryDeviceEventDataAsync(const QueryDeviceEventDataRequest& request, const QueryDeviceEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceEventData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceEventDataOutcomeCallable IotClient::queryDeviceEventDataCallable(const QueryDeviceEventDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceEventDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceEventData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceFileOutcome IotClient::queryDeviceFile(const QueryDeviceFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceFileOutcome(QueryDeviceFileResult(outcome.result()));
	else
		return QueryDeviceFileOutcome(outcome.error());
}

void IotClient::queryDeviceFileAsync(const QueryDeviceFileRequest& request, const QueryDeviceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceFileOutcomeCallable IotClient::queryDeviceFileCallable(const QueryDeviceFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceFileOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceFileListOutcome IotClient::queryDeviceFileList(const QueryDeviceFileListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceFileListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceFileListOutcome(QueryDeviceFileListResult(outcome.result()));
	else
		return QueryDeviceFileListOutcome(outcome.error());
}

void IotClient::queryDeviceFileListAsync(const QueryDeviceFileListRequest& request, const QueryDeviceFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceFileList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceFileListOutcomeCallable IotClient::queryDeviceFileListCallable(const QueryDeviceFileListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceFileListOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceFileList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceGroupByDeviceOutcome IotClient::queryDeviceGroupByDevice(const QueryDeviceGroupByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceGroupByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceGroupByDeviceOutcome(QueryDeviceGroupByDeviceResult(outcome.result()));
	else
		return QueryDeviceGroupByDeviceOutcome(outcome.error());
}

void IotClient::queryDeviceGroupByDeviceAsync(const QueryDeviceGroupByDeviceRequest& request, const QueryDeviceGroupByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceGroupByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceGroupByDeviceOutcomeCallable IotClient::queryDeviceGroupByDeviceCallable(const QueryDeviceGroupByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceGroupByDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceGroupByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceGroupByTagsOutcome IotClient::queryDeviceGroupByTags(const QueryDeviceGroupByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceGroupByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceGroupByTagsOutcome(QueryDeviceGroupByTagsResult(outcome.result()));
	else
		return QueryDeviceGroupByTagsOutcome(outcome.error());
}

void IotClient::queryDeviceGroupByTagsAsync(const QueryDeviceGroupByTagsRequest& request, const QueryDeviceGroupByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceGroupByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceGroupByTagsOutcomeCallable IotClient::queryDeviceGroupByTagsCallable(const QueryDeviceGroupByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceGroupByTagsOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceGroupByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceGroupInfoOutcome IotClient::queryDeviceGroupInfo(const QueryDeviceGroupInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceGroupInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceGroupInfoOutcome(QueryDeviceGroupInfoResult(outcome.result()));
	else
		return QueryDeviceGroupInfoOutcome(outcome.error());
}

void IotClient::queryDeviceGroupInfoAsync(const QueryDeviceGroupInfoRequest& request, const QueryDeviceGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceGroupInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceGroupInfoOutcomeCallable IotClient::queryDeviceGroupInfoCallable(const QueryDeviceGroupInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceGroupInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceGroupInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceGroupListOutcome IotClient::queryDeviceGroupList(const QueryDeviceGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceGroupListOutcome(QueryDeviceGroupListResult(outcome.result()));
	else
		return QueryDeviceGroupListOutcome(outcome.error());
}

void IotClient::queryDeviceGroupListAsync(const QueryDeviceGroupListRequest& request, const QueryDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceGroupListOutcomeCallable IotClient::queryDeviceGroupListCallable(const QueryDeviceGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceGroupListOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceGroupTagListOutcome IotClient::queryDeviceGroupTagList(const QueryDeviceGroupTagListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceGroupTagListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceGroupTagListOutcome(QueryDeviceGroupTagListResult(outcome.result()));
	else
		return QueryDeviceGroupTagListOutcome(outcome.error());
}

void IotClient::queryDeviceGroupTagListAsync(const QueryDeviceGroupTagListRequest& request, const QueryDeviceGroupTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceGroupTagList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceGroupTagListOutcomeCallable IotClient::queryDeviceGroupTagListCallable(const QueryDeviceGroupTagListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceGroupTagListOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceGroupTagList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceInfoOutcome IotClient::queryDeviceInfo(const QueryDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceInfoOutcome(QueryDeviceInfoResult(outcome.result()));
	else
		return QueryDeviceInfoOutcome(outcome.error());
}

void IotClient::queryDeviceInfoAsync(const QueryDeviceInfoRequest& request, const QueryDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceInfoOutcomeCallable IotClient::queryDeviceInfoCallable(const QueryDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceListByDeviceGroupOutcome IotClient::queryDeviceListByDeviceGroup(const QueryDeviceListByDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceListByDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceListByDeviceGroupOutcome(QueryDeviceListByDeviceGroupResult(outcome.result()));
	else
		return QueryDeviceListByDeviceGroupOutcome(outcome.error());
}

void IotClient::queryDeviceListByDeviceGroupAsync(const QueryDeviceListByDeviceGroupRequest& request, const QueryDeviceListByDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceListByDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceListByDeviceGroupOutcomeCallable IotClient::queryDeviceListByDeviceGroupCallable(const QueryDeviceListByDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceListByDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceListByDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOriginalEventDataOutcome IotClient::queryDeviceOriginalEventData(const QueryDeviceOriginalEventDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOriginalEventDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOriginalEventDataOutcome(QueryDeviceOriginalEventDataResult(outcome.result()));
	else
		return QueryDeviceOriginalEventDataOutcome(outcome.error());
}

void IotClient::queryDeviceOriginalEventDataAsync(const QueryDeviceOriginalEventDataRequest& request, const QueryDeviceOriginalEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceOriginalEventData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOriginalEventDataOutcomeCallable IotClient::queryDeviceOriginalEventDataCallable(const QueryDeviceOriginalEventDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOriginalEventDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceOriginalEventData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOriginalPropertyDataOutcome IotClient::queryDeviceOriginalPropertyData(const QueryDeviceOriginalPropertyDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOriginalPropertyDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOriginalPropertyDataOutcome(QueryDeviceOriginalPropertyDataResult(outcome.result()));
	else
		return QueryDeviceOriginalPropertyDataOutcome(outcome.error());
}

void IotClient::queryDeviceOriginalPropertyDataAsync(const QueryDeviceOriginalPropertyDataRequest& request, const QueryDeviceOriginalPropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceOriginalPropertyData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOriginalPropertyDataOutcomeCallable IotClient::queryDeviceOriginalPropertyDataCallable(const QueryDeviceOriginalPropertyDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOriginalPropertyDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceOriginalPropertyData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOriginalPropertyStatusOutcome IotClient::queryDeviceOriginalPropertyStatus(const QueryDeviceOriginalPropertyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOriginalPropertyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOriginalPropertyStatusOutcome(QueryDeviceOriginalPropertyStatusResult(outcome.result()));
	else
		return QueryDeviceOriginalPropertyStatusOutcome(outcome.error());
}

void IotClient::queryDeviceOriginalPropertyStatusAsync(const QueryDeviceOriginalPropertyStatusRequest& request, const QueryDeviceOriginalPropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceOriginalPropertyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOriginalPropertyStatusOutcomeCallable IotClient::queryDeviceOriginalPropertyStatusCallable(const QueryDeviceOriginalPropertyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOriginalPropertyStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceOriginalPropertyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOriginalServiceDataOutcome IotClient::queryDeviceOriginalServiceData(const QueryDeviceOriginalServiceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOriginalServiceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOriginalServiceDataOutcome(QueryDeviceOriginalServiceDataResult(outcome.result()));
	else
		return QueryDeviceOriginalServiceDataOutcome(outcome.error());
}

void IotClient::queryDeviceOriginalServiceDataAsync(const QueryDeviceOriginalServiceDataRequest& request, const QueryDeviceOriginalServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceOriginalServiceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOriginalServiceDataOutcomeCallable IotClient::queryDeviceOriginalServiceDataCallable(const QueryDeviceOriginalServiceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOriginalServiceDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceOriginalServiceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropOutcome IotClient::queryDeviceProp(const QueryDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropOutcome(QueryDevicePropResult(outcome.result()));
	else
		return QueryDevicePropOutcome(outcome.error());
}

void IotClient::queryDevicePropAsync(const QueryDevicePropRequest& request, const QueryDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropOutcomeCallable IotClient::queryDevicePropCallable(const QueryDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropertiesDataOutcome IotClient::queryDevicePropertiesData(const QueryDevicePropertiesDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropertiesDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropertiesDataOutcome(QueryDevicePropertiesDataResult(outcome.result()));
	else
		return QueryDevicePropertiesDataOutcome(outcome.error());
}

void IotClient::queryDevicePropertiesDataAsync(const QueryDevicePropertiesDataRequest& request, const QueryDevicePropertiesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePropertiesData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropertiesDataOutcomeCallable IotClient::queryDevicePropertiesDataCallable(const QueryDevicePropertiesDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropertiesDataOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePropertiesData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropertyDataOutcome IotClient::queryDevicePropertyData(const QueryDevicePropertyDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropertyDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropertyDataOutcome(QueryDevicePropertyDataResult(outcome.result()));
	else
		return QueryDevicePropertyDataOutcome(outcome.error());
}

void IotClient::queryDevicePropertyDataAsync(const QueryDevicePropertyDataRequest& request, const QueryDevicePropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePropertyData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropertyDataOutcomeCallable IotClient::queryDevicePropertyDataCallable(const QueryDevicePropertyDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropertyDataOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePropertyData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropertyStatusOutcome IotClient::queryDevicePropertyStatus(const QueryDevicePropertyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropertyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropertyStatusOutcome(QueryDevicePropertyStatusResult(outcome.result()));
	else
		return QueryDevicePropertyStatusOutcome(outcome.error());
}

void IotClient::queryDevicePropertyStatusAsync(const QueryDevicePropertyStatusRequest& request, const QueryDevicePropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePropertyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropertyStatusOutcomeCallable IotClient::queryDevicePropertyStatusCallable(const QueryDevicePropertyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropertyStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePropertyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceProvisioningOutcome IotClient::queryDeviceProvisioning(const QueryDeviceProvisioningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceProvisioningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceProvisioningOutcome(QueryDeviceProvisioningResult(outcome.result()));
	else
		return QueryDeviceProvisioningOutcome(outcome.error());
}

void IotClient::queryDeviceProvisioningAsync(const QueryDeviceProvisioningRequest& request, const QueryDeviceProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceProvisioning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceProvisioningOutcomeCallable IotClient::queryDeviceProvisioningCallable(const QueryDeviceProvisioningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceProvisioningOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceProvisioning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceServiceDataOutcome IotClient::queryDeviceServiceData(const QueryDeviceServiceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceServiceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceServiceDataOutcome(QueryDeviceServiceDataResult(outcome.result()));
	else
		return QueryDeviceServiceDataOutcome(outcome.error());
}

void IotClient::queryDeviceServiceDataAsync(const QueryDeviceServiceDataRequest& request, const QueryDeviceServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceServiceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceServiceDataOutcomeCallable IotClient::queryDeviceServiceDataCallable(const QueryDeviceServiceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceServiceDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceServiceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceSpeechOutcome IotClient::queryDeviceSpeech(const QueryDeviceSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceSpeechOutcome(QueryDeviceSpeechResult(outcome.result()));
	else
		return QueryDeviceSpeechOutcome(outcome.error());
}

void IotClient::queryDeviceSpeechAsync(const QueryDeviceSpeechRequest& request, const QueryDeviceSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceSpeechOutcomeCallable IotClient::queryDeviceSpeechCallable(const QueryDeviceSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceSpeechOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceStatisticsOutcome IotClient::queryDeviceStatistics(const QueryDeviceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceStatisticsOutcome(QueryDeviceStatisticsResult(outcome.result()));
	else
		return QueryDeviceStatisticsOutcome(outcome.error());
}

void IotClient::queryDeviceStatisticsAsync(const QueryDeviceStatisticsRequest& request, const QueryDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceStatisticsOutcomeCallable IotClient::queryDeviceStatisticsCallable(const QueryDeviceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceSubTopicOutcome IotClient::queryDeviceSubTopic(const QueryDeviceSubTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceSubTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceSubTopicOutcome(QueryDeviceSubTopicResult(outcome.result()));
	else
		return QueryDeviceSubTopicOutcome(outcome.error());
}

void IotClient::queryDeviceSubTopicAsync(const QueryDeviceSubTopicRequest& request, const QueryDeviceSubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceSubTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceSubTopicOutcomeCallable IotClient::queryDeviceSubTopicCallable(const QueryDeviceSubTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceSubTopicOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceSubTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceTunnelOutcome IotClient::queryDeviceTunnel(const QueryDeviceTunnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceTunnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceTunnelOutcome(QueryDeviceTunnelResult(outcome.result()));
	else
		return QueryDeviceTunnelOutcome(outcome.error());
}

void IotClient::queryDeviceTunnelAsync(const QueryDeviceTunnelRequest& request, const QueryDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceTunnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceTunnelOutcomeCallable IotClient::queryDeviceTunnelCallable(const QueryDeviceTunnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceTunnelOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceTunnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicesHotStorageDataOutcome IotClient::queryDevicesHotStorageData(const QueryDevicesHotStorageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicesHotStorageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicesHotStorageDataOutcome(QueryDevicesHotStorageDataResult(outcome.result()));
	else
		return QueryDevicesHotStorageDataOutcome(outcome.error());
}

void IotClient::queryDevicesHotStorageDataAsync(const QueryDevicesHotStorageDataRequest& request, const QueryDevicesHotStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicesHotStorageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicesHotStorageDataOutcomeCallable IotClient::queryDevicesHotStorageDataCallable(const QueryDevicesHotStorageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicesHotStorageDataOutcome()>>(
			[this, request]()
			{
			return this->queryDevicesHotStorageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicesHotStorageDataStatusOutcome IotClient::queryDevicesHotStorageDataStatus(const QueryDevicesHotStorageDataStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicesHotStorageDataStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicesHotStorageDataStatusOutcome(QueryDevicesHotStorageDataStatusResult(outcome.result()));
	else
		return QueryDevicesHotStorageDataStatusOutcome(outcome.error());
}

void IotClient::queryDevicesHotStorageDataStatusAsync(const QueryDevicesHotStorageDataStatusRequest& request, const QueryDevicesHotStorageDataStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicesHotStorageDataStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicesHotStorageDataStatusOutcomeCallable IotClient::queryDevicesHotStorageDataStatusCallable(const QueryDevicesHotStorageDataStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicesHotStorageDataStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDevicesHotStorageDataStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDynamicGroupDevicesOutcome IotClient::queryDynamicGroupDevices(const QueryDynamicGroupDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDynamicGroupDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDynamicGroupDevicesOutcome(QueryDynamicGroupDevicesResult(outcome.result()));
	else
		return QueryDynamicGroupDevicesOutcome(outcome.error());
}

void IotClient::queryDynamicGroupDevicesAsync(const QueryDynamicGroupDevicesRequest& request, const QueryDynamicGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDynamicGroupDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDynamicGroupDevicesOutcomeCallable IotClient::queryDynamicGroupDevicesCallable(const QueryDynamicGroupDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDynamicGroupDevicesOutcome()>>(
			[this, request]()
			{
			return this->queryDynamicGroupDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeDriverOutcome IotClient::queryEdgeDriver(const QueryEdgeDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeDriverOutcome(QueryEdgeDriverResult(outcome.result()));
	else
		return QueryEdgeDriverOutcome(outcome.error());
}

void IotClient::queryEdgeDriverAsync(const QueryEdgeDriverRequest& request, const QueryEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeDriverOutcomeCallable IotClient::queryEdgeDriverCallable(const QueryEdgeDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeDriverOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeDriverVersionOutcome IotClient::queryEdgeDriverVersion(const QueryEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeDriverVersionOutcome(QueryEdgeDriverVersionResult(outcome.result()));
	else
		return QueryEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::queryEdgeDriverVersionAsync(const QueryEdgeDriverVersionRequest& request, const QueryEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeDriverVersionOutcomeCallable IotClient::queryEdgeDriverVersionCallable(const QueryEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceOutcome IotClient::queryEdgeInstance(const QueryEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceOutcome(QueryEdgeInstanceResult(outcome.result()));
	else
		return QueryEdgeInstanceOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceAsync(const QueryEdgeInstanceRequest& request, const QueryEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceOutcomeCallable IotClient::queryEdgeInstanceCallable(const QueryEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceChannelOutcome IotClient::queryEdgeInstanceChannel(const QueryEdgeInstanceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceChannelOutcome(QueryEdgeInstanceChannelResult(outcome.result()));
	else
		return QueryEdgeInstanceChannelOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceChannelAsync(const QueryEdgeInstanceChannelRequest& request, const QueryEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceChannelOutcomeCallable IotClient::queryEdgeInstanceChannelCallable(const QueryEdgeInstanceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceChannelOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceDeviceOutcome IotClient::queryEdgeInstanceDevice(const QueryEdgeInstanceDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceDeviceOutcome(QueryEdgeInstanceDeviceResult(outcome.result()));
	else
		return QueryEdgeInstanceDeviceOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceDeviceAsync(const QueryEdgeInstanceDeviceRequest& request, const QueryEdgeInstanceDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceDeviceOutcomeCallable IotClient::queryEdgeInstanceDeviceCallable(const QueryEdgeInstanceDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceDeviceByDriverOutcome IotClient::queryEdgeInstanceDeviceByDriver(const QueryEdgeInstanceDeviceByDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceDeviceByDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceDeviceByDriverOutcome(QueryEdgeInstanceDeviceByDriverResult(outcome.result()));
	else
		return QueryEdgeInstanceDeviceByDriverOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceDeviceByDriverAsync(const QueryEdgeInstanceDeviceByDriverRequest& request, const QueryEdgeInstanceDeviceByDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceDeviceByDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceDeviceByDriverOutcomeCallable IotClient::queryEdgeInstanceDeviceByDriverCallable(const QueryEdgeInstanceDeviceByDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceDeviceByDriverOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceDeviceByDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceDriverOutcome IotClient::queryEdgeInstanceDriver(const QueryEdgeInstanceDriverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceDriverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceDriverOutcome(QueryEdgeInstanceDriverResult(outcome.result()));
	else
		return QueryEdgeInstanceDriverOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceDriverAsync(const QueryEdgeInstanceDriverRequest& request, const QueryEdgeInstanceDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceDriver(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceDriverOutcomeCallable IotClient::queryEdgeInstanceDriverCallable(const QueryEdgeInstanceDriverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceDriverOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceDriver(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceGatewayOutcome IotClient::queryEdgeInstanceGateway(const QueryEdgeInstanceGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceGatewayOutcome(QueryEdgeInstanceGatewayResult(outcome.result()));
	else
		return QueryEdgeInstanceGatewayOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceGatewayAsync(const QueryEdgeInstanceGatewayRequest& request, const QueryEdgeInstanceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceGatewayOutcomeCallable IotClient::queryEdgeInstanceGatewayCallable(const QueryEdgeInstanceGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceGatewayOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceHistoricDeploymentOutcome IotClient::queryEdgeInstanceHistoricDeployment(const QueryEdgeInstanceHistoricDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceHistoricDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceHistoricDeploymentOutcome(QueryEdgeInstanceHistoricDeploymentResult(outcome.result()));
	else
		return QueryEdgeInstanceHistoricDeploymentOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceHistoricDeploymentAsync(const QueryEdgeInstanceHistoricDeploymentRequest& request, const QueryEdgeInstanceHistoricDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceHistoricDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceHistoricDeploymentOutcomeCallable IotClient::queryEdgeInstanceHistoricDeploymentCallable(const QueryEdgeInstanceHistoricDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceHistoricDeploymentOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceHistoricDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceMessageRoutingOutcome IotClient::queryEdgeInstanceMessageRouting(const QueryEdgeInstanceMessageRoutingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceMessageRoutingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceMessageRoutingOutcome(QueryEdgeInstanceMessageRoutingResult(outcome.result()));
	else
		return QueryEdgeInstanceMessageRoutingOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceMessageRoutingAsync(const QueryEdgeInstanceMessageRoutingRequest& request, const QueryEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceMessageRouting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceMessageRoutingOutcomeCallable IotClient::queryEdgeInstanceMessageRoutingCallable(const QueryEdgeInstanceMessageRoutingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceMessageRoutingOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceMessageRouting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryEdgeInstanceSceneRuleOutcome IotClient::queryEdgeInstanceSceneRule(const QueryEdgeInstanceSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEdgeInstanceSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEdgeInstanceSceneRuleOutcome(QueryEdgeInstanceSceneRuleResult(outcome.result()));
	else
		return QueryEdgeInstanceSceneRuleOutcome(outcome.error());
}

void IotClient::queryEdgeInstanceSceneRuleAsync(const QueryEdgeInstanceSceneRuleRequest& request, const QueryEdgeInstanceSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEdgeInstanceSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryEdgeInstanceSceneRuleOutcomeCallable IotClient::queryEdgeInstanceSceneRuleCallable(const QueryEdgeInstanceSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEdgeInstanceSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->queryEdgeInstanceSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryImportedDeviceByApplyIdOutcome IotClient::queryImportedDeviceByApplyId(const QueryImportedDeviceByApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryImportedDeviceByApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryImportedDeviceByApplyIdOutcome(QueryImportedDeviceByApplyIdResult(outcome.result()));
	else
		return QueryImportedDeviceByApplyIdOutcome(outcome.error());
}

void IotClient::queryImportedDeviceByApplyIdAsync(const QueryImportedDeviceByApplyIdRequest& request, const QueryImportedDeviceByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryImportedDeviceByApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryImportedDeviceByApplyIdOutcomeCallable IotClient::queryImportedDeviceByApplyIdCallable(const QueryImportedDeviceByApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryImportedDeviceByApplyIdOutcome()>>(
			[this, request]()
			{
			return this->queryImportedDeviceByApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryJobOutcome IotClient::queryJob(const QueryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJobOutcome(QueryJobResult(outcome.result()));
	else
		return QueryJobOutcome(outcome.error());
}

void IotClient::queryJobAsync(const QueryJobRequest& request, const QueryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryJobOutcomeCallable IotClient::queryJobCallable(const QueryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJobOutcome()>>(
			[this, request]()
			{
			return this->queryJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryJobStatisticsOutcome IotClient::queryJobStatistics(const QueryJobStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJobStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJobStatisticsOutcome(QueryJobStatisticsResult(outcome.result()));
	else
		return QueryJobStatisticsOutcome(outcome.error());
}

void IotClient::queryJobStatisticsAsync(const QueryJobStatisticsRequest& request, const QueryJobStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJobStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryJobStatisticsOutcomeCallable IotClient::queryJobStatisticsCallable(const QueryJobStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJobStatisticsOutcome()>>(
			[this, request]()
			{
			return this->queryJobStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryLicenseDeviceListOutcome IotClient::queryLicenseDeviceList(const QueryLicenseDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLicenseDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLicenseDeviceListOutcome(QueryLicenseDeviceListResult(outcome.result()));
	else
		return QueryLicenseDeviceListOutcome(outcome.error());
}

void IotClient::queryLicenseDeviceListAsync(const QueryLicenseDeviceListRequest& request, const QueryLicenseDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLicenseDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryLicenseDeviceListOutcomeCallable IotClient::queryLicenseDeviceListCallable(const QueryLicenseDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLicenseDeviceListOutcome()>>(
			[this, request]()
			{
			return this->queryLicenseDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryLoRaJoinPermissionsOutcome IotClient::queryLoRaJoinPermissions(const QueryLoRaJoinPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLoRaJoinPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLoRaJoinPermissionsOutcome(QueryLoRaJoinPermissionsResult(outcome.result()));
	else
		return QueryLoRaJoinPermissionsOutcome(outcome.error());
}

void IotClient::queryLoRaJoinPermissionsAsync(const QueryLoRaJoinPermissionsRequest& request, const QueryLoRaJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLoRaJoinPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryLoRaJoinPermissionsOutcomeCallable IotClient::queryLoRaJoinPermissionsCallable(const QueryLoRaJoinPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLoRaJoinPermissionsOutcome()>>(
			[this, request]()
			{
			return this->queryLoRaJoinPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryMessageInfoOutcome IotClient::queryMessageInfo(const QueryMessageInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMessageInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMessageInfoOutcome(QueryMessageInfoResult(outcome.result()));
	else
		return QueryMessageInfoOutcome(outcome.error());
}

void IotClient::queryMessageInfoAsync(const QueryMessageInfoRequest& request, const QueryMessageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMessageInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryMessageInfoOutcomeCallable IotClient::queryMessageInfoCallable(const QueryMessageInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMessageInfoOutcome()>>(
			[this, request]()
			{
			return this->queryMessageInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryOTAFirmwareOutcome IotClient::queryOTAFirmware(const QueryOTAFirmwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOTAFirmwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOTAFirmwareOutcome(QueryOTAFirmwareResult(outcome.result()));
	else
		return QueryOTAFirmwareOutcome(outcome.error());
}

void IotClient::queryOTAFirmwareAsync(const QueryOTAFirmwareRequest& request, const QueryOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOTAFirmware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryOTAFirmwareOutcomeCallable IotClient::queryOTAFirmwareCallable(const QueryOTAFirmwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOTAFirmwareOutcome()>>(
			[this, request]()
			{
			return this->queryOTAFirmware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryOTAJobOutcome IotClient::queryOTAJob(const QueryOTAJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOTAJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOTAJobOutcome(QueryOTAJobResult(outcome.result()));
	else
		return QueryOTAJobOutcome(outcome.error());
}

void IotClient::queryOTAJobAsync(const QueryOTAJobRequest& request, const QueryOTAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOTAJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryOTAJobOutcomeCallable IotClient::queryOTAJobCallable(const QueryOTAJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOTAJobOutcome()>>(
			[this, request]()
			{
			return this->queryOTAJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryPageByApplyIdOutcome IotClient::queryPageByApplyId(const QueryPageByApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPageByApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPageByApplyIdOutcome(QueryPageByApplyIdResult(outcome.result()));
	else
		return QueryPageByApplyIdOutcome(outcome.error());
}

void IotClient::queryPageByApplyIdAsync(const QueryPageByApplyIdRequest& request, const QueryPageByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPageByApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryPageByApplyIdOutcomeCallable IotClient::queryPageByApplyIdCallable(const QueryPageByApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPageByApplyIdOutcome()>>(
			[this, request]()
			{
			return this->queryPageByApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductOutcome IotClient::queryProduct(const QueryProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductOutcome(QueryProductResult(outcome.result()));
	else
		return QueryProductOutcome(outcome.error());
}

void IotClient::queryProductAsync(const QueryProductRequest& request, const QueryProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductOutcomeCallable IotClient::queryProductCallable(const QueryProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductOutcome()>>(
			[this, request]()
			{
			return this->queryProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductCertInfoOutcome IotClient::queryProductCertInfo(const QueryProductCertInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductCertInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductCertInfoOutcome(QueryProductCertInfoResult(outcome.result()));
	else
		return QueryProductCertInfoOutcome(outcome.error());
}

void IotClient::queryProductCertInfoAsync(const QueryProductCertInfoRequest& request, const QueryProductCertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductCertInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductCertInfoOutcomeCallable IotClient::queryProductCertInfoCallable(const QueryProductCertInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductCertInfoOutcome()>>(
			[this, request]()
			{
			return this->queryProductCertInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductListOutcome IotClient::queryProductList(const QueryProductListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductListOutcome(QueryProductListResult(outcome.result()));
	else
		return QueryProductListOutcome(outcome.error());
}

void IotClient::queryProductListAsync(const QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductListOutcomeCallable IotClient::queryProductListCallable(const QueryProductListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductListOutcome()>>(
			[this, request]()
			{
			return this->queryProductList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductTopicOutcome IotClient::queryProductTopic(const QueryProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductTopicOutcome(QueryProductTopicResult(outcome.result()));
	else
		return QueryProductTopicOutcome(outcome.error());
}

void IotClient::queryProductTopicAsync(const QueryProductTopicRequest& request, const QueryProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductTopicOutcomeCallable IotClient::queryProductTopicCallable(const QueryProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductTopicOutcome()>>(
			[this, request]()
			{
			return this->queryProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProjectShareDeviceListOutcome IotClient::queryProjectShareDeviceList(const QueryProjectShareDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProjectShareDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProjectShareDeviceListOutcome(QueryProjectShareDeviceListResult(outcome.result()));
	else
		return QueryProjectShareDeviceListOutcome(outcome.error());
}

void IotClient::queryProjectShareDeviceListAsync(const QueryProjectShareDeviceListRequest& request, const QueryProjectShareDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProjectShareDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProjectShareDeviceListOutcomeCallable IotClient::queryProjectShareDeviceListCallable(const QueryProjectShareDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProjectShareDeviceListOutcome()>>(
			[this, request]()
			{
			return this->queryProjectShareDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySceneRuleOutcome IotClient::querySceneRule(const QuerySceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySceneRuleOutcome(QuerySceneRuleResult(outcome.result()));
	else
		return QuerySceneRuleOutcome(outcome.error());
}

void IotClient::querySceneRuleAsync(const QuerySceneRuleRequest& request, const QuerySceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySceneRuleOutcomeCallable IotClient::querySceneRuleCallable(const QuerySceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySceneRuleOutcome()>>(
			[this, request]()
			{
			return this->querySceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySchedulePeriodListOutcome IotClient::querySchedulePeriodList(const QuerySchedulePeriodListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySchedulePeriodListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySchedulePeriodListOutcome(QuerySchedulePeriodListResult(outcome.result()));
	else
		return QuerySchedulePeriodListOutcome(outcome.error());
}

void IotClient::querySchedulePeriodListAsync(const QuerySchedulePeriodListRequest& request, const QuerySchedulePeriodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySchedulePeriodList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySchedulePeriodListOutcomeCallable IotClient::querySchedulePeriodListCallable(const QuerySchedulePeriodListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySchedulePeriodListOutcome()>>(
			[this, request]()
			{
			return this->querySchedulePeriodList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryShareProductNameByProductKeyOutcome IotClient::queryShareProductNameByProductKey(const QueryShareProductNameByProductKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryShareProductNameByProductKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryShareProductNameByProductKeyOutcome(QueryShareProductNameByProductKeyResult(outcome.result()));
	else
		return QueryShareProductNameByProductKeyOutcome(outcome.error());
}

void IotClient::queryShareProductNameByProductKeyAsync(const QueryShareProductNameByProductKeyRequest& request, const QueryShareProductNameByProductKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryShareProductNameByProductKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryShareProductNameByProductKeyOutcomeCallable IotClient::queryShareProductNameByProductKeyCallable(const QueryShareProductNameByProductKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryShareProductNameByProductKeyOutcome()>>(
			[this, request]()
			{
			return this->queryShareProductNameByProductKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySharePromotionActivityAuditResultOutcome IotClient::querySharePromotionActivityAuditResult(const QuerySharePromotionActivityAuditResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySharePromotionActivityAuditResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySharePromotionActivityAuditResultOutcome(QuerySharePromotionActivityAuditResultResult(outcome.result()));
	else
		return QuerySharePromotionActivityAuditResultOutcome(outcome.error());
}

void IotClient::querySharePromotionActivityAuditResultAsync(const QuerySharePromotionActivityAuditResultRequest& request, const QuerySharePromotionActivityAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySharePromotionActivityAuditResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySharePromotionActivityAuditResultOutcomeCallable IotClient::querySharePromotionActivityAuditResultCallable(const QuerySharePromotionActivityAuditResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySharePromotionActivityAuditResultOutcome()>>(
			[this, request]()
			{
			return this->querySharePromotionActivityAuditResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryShareTaskDeviceListOutcome IotClient::queryShareTaskDeviceList(const QueryShareTaskDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryShareTaskDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryShareTaskDeviceListOutcome(QueryShareTaskDeviceListResult(outcome.result()));
	else
		return QueryShareTaskDeviceListOutcome(outcome.error());
}

void IotClient::queryShareTaskDeviceListAsync(const QueryShareTaskDeviceListRequest& request, const QueryShareTaskDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryShareTaskDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryShareTaskDeviceListOutcomeCallable IotClient::queryShareTaskDeviceListCallable(const QueryShareTaskDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryShareTaskDeviceListOutcome()>>(
			[this, request]()
			{
			return this->queryShareTaskDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySolutionDeviceGroupPageOutcome IotClient::querySolutionDeviceGroupPage(const QuerySolutionDeviceGroupPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySolutionDeviceGroupPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySolutionDeviceGroupPageOutcome(QuerySolutionDeviceGroupPageResult(outcome.result()));
	else
		return QuerySolutionDeviceGroupPageOutcome(outcome.error());
}

void IotClient::querySolutionDeviceGroupPageAsync(const QuerySolutionDeviceGroupPageRequest& request, const QuerySolutionDeviceGroupPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySolutionDeviceGroupPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySolutionDeviceGroupPageOutcomeCallable IotClient::querySolutionDeviceGroupPageCallable(const QuerySolutionDeviceGroupPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySolutionDeviceGroupPageOutcome()>>(
			[this, request]()
			{
			return this->querySolutionDeviceGroupPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySoundCodeLabelBatchFailedResultOutcome IotClient::querySoundCodeLabelBatchFailedResult(const QuerySoundCodeLabelBatchFailedResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySoundCodeLabelBatchFailedResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySoundCodeLabelBatchFailedResultOutcome(QuerySoundCodeLabelBatchFailedResultResult(outcome.result()));
	else
		return QuerySoundCodeLabelBatchFailedResultOutcome(outcome.error());
}

void IotClient::querySoundCodeLabelBatchFailedResultAsync(const QuerySoundCodeLabelBatchFailedResultRequest& request, const QuerySoundCodeLabelBatchFailedResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySoundCodeLabelBatchFailedResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySoundCodeLabelBatchFailedResultOutcomeCallable IotClient::querySoundCodeLabelBatchFailedResultCallable(const QuerySoundCodeLabelBatchFailedResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySoundCodeLabelBatchFailedResultOutcome()>>(
			[this, request]()
			{
			return this->querySoundCodeLabelBatchFailedResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySoundCodeLabelBatchListOutcome IotClient::querySoundCodeLabelBatchList(const QuerySoundCodeLabelBatchListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySoundCodeLabelBatchListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySoundCodeLabelBatchListOutcome(QuerySoundCodeLabelBatchListResult(outcome.result()));
	else
		return QuerySoundCodeLabelBatchListOutcome(outcome.error());
}

void IotClient::querySoundCodeLabelBatchListAsync(const QuerySoundCodeLabelBatchListRequest& request, const QuerySoundCodeLabelBatchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySoundCodeLabelBatchList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySoundCodeLabelBatchListOutcomeCallable IotClient::querySoundCodeLabelBatchListCallable(const QuerySoundCodeLabelBatchListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySoundCodeLabelBatchListOutcome()>>(
			[this, request]()
			{
			return this->querySoundCodeLabelBatchList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySoundCodeLabelListOutcome IotClient::querySoundCodeLabelList(const QuerySoundCodeLabelListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySoundCodeLabelListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySoundCodeLabelListOutcome(QuerySoundCodeLabelListResult(outcome.result()));
	else
		return QuerySoundCodeLabelListOutcome(outcome.error());
}

void IotClient::querySoundCodeLabelListAsync(const QuerySoundCodeLabelListRequest& request, const QuerySoundCodeLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySoundCodeLabelList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySoundCodeLabelListOutcomeCallable IotClient::querySoundCodeLabelListCallable(const QuerySoundCodeLabelListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySoundCodeLabelListOutcome()>>(
			[this, request]()
			{
			return this->querySoundCodeLabelList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySoundCodeListOutcome IotClient::querySoundCodeList(const QuerySoundCodeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySoundCodeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySoundCodeListOutcome(QuerySoundCodeListResult(outcome.result()));
	else
		return QuerySoundCodeListOutcome(outcome.error());
}

void IotClient::querySoundCodeListAsync(const QuerySoundCodeListRequest& request, const QuerySoundCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySoundCodeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySoundCodeListOutcomeCallable IotClient::querySoundCodeListCallable(const QuerySoundCodeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySoundCodeListOutcome()>>(
			[this, request]()
			{
			return this->querySoundCodeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySoundCodeScheduleListOutcome IotClient::querySoundCodeScheduleList(const QuerySoundCodeScheduleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySoundCodeScheduleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySoundCodeScheduleListOutcome(QuerySoundCodeScheduleListResult(outcome.result()));
	else
		return QuerySoundCodeScheduleListOutcome(outcome.error());
}

void IotClient::querySoundCodeScheduleListAsync(const QuerySoundCodeScheduleListRequest& request, const QuerySoundCodeScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySoundCodeScheduleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySoundCodeScheduleListOutcomeCallable IotClient::querySoundCodeScheduleListCallable(const QuerySoundCodeScheduleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySoundCodeScheduleListOutcome()>>(
			[this, request]()
			{
			return this->querySoundCodeScheduleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechOutcome IotClient::querySpeech(const QuerySpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechOutcome(QuerySpeechResult(outcome.result()));
	else
		return QuerySpeechOutcome(outcome.error());
}

void IotClient::querySpeechAsync(const QuerySpeechRequest& request, const QuerySpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechOutcomeCallable IotClient::querySpeechCallable(const QuerySpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechOutcome()>>(
			[this, request]()
			{
			return this->querySpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechDeviceOutcome IotClient::querySpeechDevice(const QuerySpeechDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechDeviceOutcome(QuerySpeechDeviceResult(outcome.result()));
	else
		return QuerySpeechDeviceOutcome(outcome.error());
}

void IotClient::querySpeechDeviceAsync(const QuerySpeechDeviceRequest& request, const QuerySpeechDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechDeviceOutcomeCallable IotClient::querySpeechDeviceCallable(const QuerySpeechDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechDeviceOutcome()>>(
			[this, request]()
			{
			return this->querySpeechDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechLicenseAvailableQuotaOutcome IotClient::querySpeechLicenseAvailableQuota(const QuerySpeechLicenseAvailableQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechLicenseAvailableQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechLicenseAvailableQuotaOutcome(QuerySpeechLicenseAvailableQuotaResult(outcome.result()));
	else
		return QuerySpeechLicenseAvailableQuotaOutcome(outcome.error());
}

void IotClient::querySpeechLicenseAvailableQuotaAsync(const QuerySpeechLicenseAvailableQuotaRequest& request, const QuerySpeechLicenseAvailableQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechLicenseAvailableQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechLicenseAvailableQuotaOutcomeCallable IotClient::querySpeechLicenseAvailableQuotaCallable(const QuerySpeechLicenseAvailableQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechLicenseAvailableQuotaOutcome()>>(
			[this, request]()
			{
			return this->querySpeechLicenseAvailableQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechLicenseDeviceListOutcome IotClient::querySpeechLicenseDeviceList(const QuerySpeechLicenseDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechLicenseDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechLicenseDeviceListOutcome(QuerySpeechLicenseDeviceListResult(outcome.result()));
	else
		return QuerySpeechLicenseDeviceListOutcome(outcome.error());
}

void IotClient::querySpeechLicenseDeviceListAsync(const QuerySpeechLicenseDeviceListRequest& request, const QuerySpeechLicenseDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechLicenseDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechLicenseDeviceListOutcomeCallable IotClient::querySpeechLicenseDeviceListCallable(const QuerySpeechLicenseDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechLicenseDeviceListOutcome()>>(
			[this, request]()
			{
			return this->querySpeechLicenseDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechListOutcome IotClient::querySpeechList(const QuerySpeechListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechListOutcome(QuerySpeechListResult(outcome.result()));
	else
		return QuerySpeechListOutcome(outcome.error());
}

void IotClient::querySpeechListAsync(const QuerySpeechListRequest& request, const QuerySpeechListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechListOutcomeCallable IotClient::querySpeechListCallable(const QuerySpeechListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechListOutcome()>>(
			[this, request]()
			{
			return this->querySpeechList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechPushJobOutcome IotClient::querySpeechPushJob(const QuerySpeechPushJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechPushJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechPushJobOutcome(QuerySpeechPushJobResult(outcome.result()));
	else
		return QuerySpeechPushJobOutcome(outcome.error());
}

void IotClient::querySpeechPushJobAsync(const QuerySpeechPushJobRequest& request, const QuerySpeechPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechPushJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechPushJobOutcomeCallable IotClient::querySpeechPushJobCallable(const QuerySpeechPushJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechPushJobOutcome()>>(
			[this, request]()
			{
			return this->querySpeechPushJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechPushJobDeviceOutcome IotClient::querySpeechPushJobDevice(const QuerySpeechPushJobDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechPushJobDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechPushJobDeviceOutcome(QuerySpeechPushJobDeviceResult(outcome.result()));
	else
		return QuerySpeechPushJobDeviceOutcome(outcome.error());
}

void IotClient::querySpeechPushJobDeviceAsync(const QuerySpeechPushJobDeviceRequest& request, const QuerySpeechPushJobDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechPushJobDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechPushJobDeviceOutcomeCallable IotClient::querySpeechPushJobDeviceCallable(const QuerySpeechPushJobDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechPushJobDeviceOutcome()>>(
			[this, request]()
			{
			return this->querySpeechPushJobDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySpeechPushJobSpeechOutcome IotClient::querySpeechPushJobSpeech(const QuerySpeechPushJobSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySpeechPushJobSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySpeechPushJobSpeechOutcome(QuerySpeechPushJobSpeechResult(outcome.result()));
	else
		return QuerySpeechPushJobSpeechOutcome(outcome.error());
}

void IotClient::querySpeechPushJobSpeechAsync(const QuerySpeechPushJobSpeechRequest& request, const QuerySpeechPushJobSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySpeechPushJobSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySpeechPushJobSpeechOutcomeCallable IotClient::querySpeechPushJobSpeechCallable(const QuerySpeechPushJobSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySpeechPushJobSpeechOutcome()>>(
			[this, request]()
			{
			return this->querySpeechPushJobSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryStudioAppDomainListOpenOutcome IotClient::queryStudioAppDomainListOpen(const QueryStudioAppDomainListOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStudioAppDomainListOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStudioAppDomainListOpenOutcome(QueryStudioAppDomainListOpenResult(outcome.result()));
	else
		return QueryStudioAppDomainListOpenOutcome(outcome.error());
}

void IotClient::queryStudioAppDomainListOpenAsync(const QueryStudioAppDomainListOpenRequest& request, const QueryStudioAppDomainListOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStudioAppDomainListOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryStudioAppDomainListOpenOutcomeCallable IotClient::queryStudioAppDomainListOpenCallable(const QueryStudioAppDomainListOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStudioAppDomainListOpenOutcome()>>(
			[this, request]()
			{
			return this->queryStudioAppDomainListOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryStudioAppListOutcome IotClient::queryStudioAppList(const QueryStudioAppListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStudioAppListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStudioAppListOutcome(QueryStudioAppListResult(outcome.result()));
	else
		return QueryStudioAppListOutcome(outcome.error());
}

void IotClient::queryStudioAppListAsync(const QueryStudioAppListRequest& request, const QueryStudioAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStudioAppList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryStudioAppListOutcomeCallable IotClient::queryStudioAppListCallable(const QueryStudioAppListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStudioAppListOutcome()>>(
			[this, request]()
			{
			return this->queryStudioAppList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryStudioAppPageListOpenOutcome IotClient::queryStudioAppPageListOpen(const QueryStudioAppPageListOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStudioAppPageListOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStudioAppPageListOpenOutcome(QueryStudioAppPageListOpenResult(outcome.result()));
	else
		return QueryStudioAppPageListOpenOutcome(outcome.error());
}

void IotClient::queryStudioAppPageListOpenAsync(const QueryStudioAppPageListOpenRequest& request, const QueryStudioAppPageListOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStudioAppPageListOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryStudioAppPageListOpenOutcomeCallable IotClient::queryStudioAppPageListOpenCallable(const QueryStudioAppPageListOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStudioAppPageListOpenOutcome()>>(
			[this, request]()
			{
			return this->queryStudioAppPageListOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryStudioProjectListOutcome IotClient::queryStudioProjectList(const QueryStudioProjectListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStudioProjectListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStudioProjectListOutcome(QueryStudioProjectListResult(outcome.result()));
	else
		return QueryStudioProjectListOutcome(outcome.error());
}

void IotClient::queryStudioProjectListAsync(const QueryStudioProjectListRequest& request, const QueryStudioProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStudioProjectList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryStudioProjectListOutcomeCallable IotClient::queryStudioProjectListCallable(const QueryStudioProjectListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStudioProjectListOutcome()>>(
			[this, request]()
			{
			return this->queryStudioProjectList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySubscribeRelationOutcome IotClient::querySubscribeRelation(const QuerySubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySubscribeRelationOutcome(QuerySubscribeRelationResult(outcome.result()));
	else
		return QuerySubscribeRelationOutcome(outcome.error());
}

void IotClient::querySubscribeRelationAsync(const QuerySubscribeRelationRequest& request, const QuerySubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySubscribeRelationOutcomeCallable IotClient::querySubscribeRelationCallable(const QuerySubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->querySubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySummarySceneRuleLogOutcome IotClient::querySummarySceneRuleLog(const QuerySummarySceneRuleLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySummarySceneRuleLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySummarySceneRuleLogOutcome(QuerySummarySceneRuleLogResult(outcome.result()));
	else
		return QuerySummarySceneRuleLogOutcome(outcome.error());
}

void IotClient::querySummarySceneRuleLogAsync(const QuerySummarySceneRuleLogRequest& request, const QuerySummarySceneRuleLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySummarySceneRuleLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySummarySceneRuleLogOutcomeCallable IotClient::querySummarySceneRuleLogCallable(const QuerySummarySceneRuleLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySummarySceneRuleLogOutcome()>>(
			[this, request]()
			{
			return this->querySummarySceneRuleLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QuerySuperDeviceGroupOutcome IotClient::querySuperDeviceGroup(const QuerySuperDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySuperDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySuperDeviceGroupOutcome(QuerySuperDeviceGroupResult(outcome.result()));
	else
		return QuerySuperDeviceGroupOutcome(outcome.error());
}

void IotClient::querySuperDeviceGroupAsync(const QuerySuperDeviceGroupRequest& request, const QuerySuperDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySuperDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QuerySuperDeviceGroupOutcomeCallable IotClient::querySuperDeviceGroupCallable(const QuerySuperDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySuperDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->querySuperDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTaskOutcome IotClient::queryTask(const QueryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskOutcome(QueryTaskResult(outcome.result()));
	else
		return QueryTaskOutcome(outcome.error());
}

void IotClient::queryTaskAsync(const QueryTaskRequest& request, const QueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTaskOutcomeCallable IotClient::queryTaskCallable(const QueryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskOutcome()>>(
			[this, request]()
			{
			return this->queryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryThingModelOutcome IotClient::queryThingModel(const QueryThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryThingModelOutcome(QueryThingModelResult(outcome.result()));
	else
		return QueryThingModelOutcome(outcome.error());
}

void IotClient::queryThingModelAsync(const QueryThingModelRequest& request, const QueryThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryThingModelOutcomeCallable IotClient::queryThingModelCallable(const QueryThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryThingModelOutcome()>>(
			[this, request]()
			{
			return this->queryThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryThingModelExtendConfigOutcome IotClient::queryThingModelExtendConfig(const QueryThingModelExtendConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryThingModelExtendConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryThingModelExtendConfigOutcome(QueryThingModelExtendConfigResult(outcome.result()));
	else
		return QueryThingModelExtendConfigOutcome(outcome.error());
}

void IotClient::queryThingModelExtendConfigAsync(const QueryThingModelExtendConfigRequest& request, const QueryThingModelExtendConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryThingModelExtendConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryThingModelExtendConfigOutcomeCallable IotClient::queryThingModelExtendConfigCallable(const QueryThingModelExtendConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryThingModelExtendConfigOutcome()>>(
			[this, request]()
			{
			return this->queryThingModelExtendConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryThingModelExtendConfigPublishedOutcome IotClient::queryThingModelExtendConfigPublished(const QueryThingModelExtendConfigPublishedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryThingModelExtendConfigPublishedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryThingModelExtendConfigPublishedOutcome(QueryThingModelExtendConfigPublishedResult(outcome.result()));
	else
		return QueryThingModelExtendConfigPublishedOutcome(outcome.error());
}

void IotClient::queryThingModelExtendConfigPublishedAsync(const QueryThingModelExtendConfigPublishedRequest& request, const QueryThingModelExtendConfigPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryThingModelExtendConfigPublished(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryThingModelExtendConfigPublishedOutcomeCallable IotClient::queryThingModelExtendConfigPublishedCallable(const QueryThingModelExtendConfigPublishedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryThingModelExtendConfigPublishedOutcome()>>(
			[this, request]()
			{
			return this->queryThingModelExtendConfigPublished(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryThingModelPublishedOutcome IotClient::queryThingModelPublished(const QueryThingModelPublishedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryThingModelPublishedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryThingModelPublishedOutcome(QueryThingModelPublishedResult(outcome.result()));
	else
		return QueryThingModelPublishedOutcome(outcome.error());
}

void IotClient::queryThingModelPublishedAsync(const QueryThingModelPublishedRequest& request, const QueryThingModelPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryThingModelPublished(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryThingModelPublishedOutcomeCallable IotClient::queryThingModelPublishedCallable(const QueryThingModelPublishedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryThingModelPublishedOutcome()>>(
			[this, request]()
			{
			return this->queryThingModelPublished(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTopicConfigOutcome IotClient::queryTopicConfig(const QueryTopicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopicConfigOutcome(QueryTopicConfigResult(outcome.result()));
	else
		return QueryTopicConfigOutcome(outcome.error());
}

void IotClient::queryTopicConfigAsync(const QueryTopicConfigRequest& request, const QueryTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTopicConfigOutcomeCallable IotClient::queryTopicConfigCallable(const QueryTopicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopicConfigOutcome()>>(
			[this, request]()
			{
			return this->queryTopicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTopicReverseRouteTableOutcome IotClient::queryTopicReverseRouteTable(const QueryTopicReverseRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopicReverseRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopicReverseRouteTableOutcome(QueryTopicReverseRouteTableResult(outcome.result()));
	else
		return QueryTopicReverseRouteTableOutcome(outcome.error());
}

void IotClient::queryTopicReverseRouteTableAsync(const QueryTopicReverseRouteTableRequest& request, const QueryTopicReverseRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopicReverseRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTopicReverseRouteTableOutcomeCallable IotClient::queryTopicReverseRouteTableCallable(const QueryTopicReverseRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopicReverseRouteTableOutcome()>>(
			[this, request]()
			{
			return this->queryTopicReverseRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTopicRouteTableOutcome IotClient::queryTopicRouteTable(const QueryTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopicRouteTableOutcome(QueryTopicRouteTableResult(outcome.result()));
	else
		return QueryTopicRouteTableOutcome(outcome.error());
}

void IotClient::queryTopicRouteTableAsync(const QueryTopicRouteTableRequest& request, const QueryTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTopicRouteTableOutcomeCallable IotClient::queryTopicRouteTableCallable(const QueryTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->queryTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryVehicleDeviceOutcome IotClient::queryVehicleDevice(const QueryVehicleDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVehicleDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVehicleDeviceOutcome(QueryVehicleDeviceResult(outcome.result()));
	else
		return QueryVehicleDeviceOutcome(outcome.error());
}

void IotClient::queryVehicleDeviceAsync(const QueryVehicleDeviceRequest& request, const QueryVehicleDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVehicleDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryVehicleDeviceOutcomeCallable IotClient::queryVehicleDeviceCallable(const QueryVehicleDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVehicleDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryVehicleDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RRpcOutcome IotClient::rRpc(const RRpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RRpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RRpcOutcome(RRpcResult(outcome.result()));
	else
		return RRpcOutcome(outcome.error());
}

void IotClient::rRpcAsync(const RRpcRequest& request, const RRpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rRpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RRpcOutcomeCallable IotClient::rRpcCallable(const RRpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RRpcOutcome()>>(
			[this, request]()
			{
			return this->rRpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ReBindLicenseDeviceOutcome IotClient::reBindLicenseDevice(const ReBindLicenseDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReBindLicenseDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReBindLicenseDeviceOutcome(ReBindLicenseDeviceResult(outcome.result()));
	else
		return ReBindLicenseDeviceOutcome(outcome.error());
}

void IotClient::reBindLicenseDeviceAsync(const ReBindLicenseDeviceRequest& request, const ReBindLicenseDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reBindLicenseDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ReBindLicenseDeviceOutcomeCallable IotClient::reBindLicenseDeviceCallable(const ReBindLicenseDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReBindLicenseDeviceOutcome()>>(
			[this, request]()
			{
			return this->reBindLicenseDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RecognizeCarNumOutcome IotClient::recognizeCarNum(const RecognizeCarNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeCarNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeCarNumOutcome(RecognizeCarNumResult(outcome.result()));
	else
		return RecognizeCarNumOutcome(outcome.error());
}

void IotClient::recognizeCarNumAsync(const RecognizeCarNumRequest& request, const RecognizeCarNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeCarNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RecognizeCarNumOutcomeCallable IotClient::recognizeCarNumCallable(const RecognizeCarNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeCarNumOutcome()>>(
			[this, request]()
			{
			return this->recognizeCarNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RecognizePictureGeneralOutcome IotClient::recognizePictureGeneral(const RecognizePictureGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizePictureGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizePictureGeneralOutcome(RecognizePictureGeneralResult(outcome.result()));
	else
		return RecognizePictureGeneralOutcome(outcome.error());
}

void IotClient::recognizePictureGeneralAsync(const RecognizePictureGeneralRequest& request, const RecognizePictureGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizePictureGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RecognizePictureGeneralOutcomeCallable IotClient::recognizePictureGeneralCallable(const RecognizePictureGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizePictureGeneralOutcome()>>(
			[this, request]()
			{
			return this->recognizePictureGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RefreshDeviceTunnelSharePasswordOutcome IotClient::refreshDeviceTunnelSharePassword(const RefreshDeviceTunnelSharePasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshDeviceTunnelSharePasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshDeviceTunnelSharePasswordOutcome(RefreshDeviceTunnelSharePasswordResult(outcome.result()));
	else
		return RefreshDeviceTunnelSharePasswordOutcome(outcome.error());
}

void IotClient::refreshDeviceTunnelSharePasswordAsync(const RefreshDeviceTunnelSharePasswordRequest& request, const RefreshDeviceTunnelSharePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshDeviceTunnelSharePassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RefreshDeviceTunnelSharePasswordOutcomeCallable IotClient::refreshDeviceTunnelSharePasswordCallable(const RefreshDeviceTunnelSharePasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshDeviceTunnelSharePasswordOutcome()>>(
			[this, request]()
			{
			return this->refreshDeviceTunnelSharePassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RefreshStudioAppTokenOpenOutcome IotClient::refreshStudioAppTokenOpen(const RefreshStudioAppTokenOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshStudioAppTokenOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshStudioAppTokenOpenOutcome(RefreshStudioAppTokenOpenResult(outcome.result()));
	else
		return RefreshStudioAppTokenOpenOutcome(outcome.error());
}

void IotClient::refreshStudioAppTokenOpenAsync(const RefreshStudioAppTokenOpenRequest& request, const RefreshStudioAppTokenOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshStudioAppTokenOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RefreshStudioAppTokenOpenOutcomeCallable IotClient::refreshStudioAppTokenOpenCallable(const RefreshStudioAppTokenOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshStudioAppTokenOpenOutcome()>>(
			[this, request]()
			{
			return this->refreshStudioAppTokenOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RegisterDeviceOutcome IotClient::registerDevice(const RegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDeviceOutcome(RegisterDeviceResult(outcome.result()));
	else
		return RegisterDeviceOutcome(outcome.error());
}

void IotClient::registerDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RegisterDeviceOutcomeCallable IotClient::registerDeviceCallable(const RegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->registerDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ReleaseEdgeDriverVersionOutcome IotClient::releaseEdgeDriverVersion(const ReleaseEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseEdgeDriverVersionOutcome(ReleaseEdgeDriverVersionResult(outcome.result()));
	else
		return ReleaseEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::releaseEdgeDriverVersionAsync(const ReleaseEdgeDriverVersionRequest& request, const ReleaseEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ReleaseEdgeDriverVersionOutcomeCallable IotClient::releaseEdgeDriverVersionCallable(const ReleaseEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->releaseEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ReleaseProductOutcome IotClient::releaseProduct(const ReleaseProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseProductOutcome(ReleaseProductResult(outcome.result()));
	else
		return ReleaseProductOutcome(outcome.error());
}

void IotClient::releaseProductAsync(const ReleaseProductRequest& request, const ReleaseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ReleaseProductOutcomeCallable IotClient::releaseProductCallable(const ReleaseProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseProductOutcome()>>(
			[this, request]()
			{
			return this->releaseProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RemoveThingTopoOutcome IotClient::removeThingTopo(const RemoveThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveThingTopoOutcome(RemoveThingTopoResult(outcome.result()));
	else
		return RemoveThingTopoOutcome(outcome.error());
}

void IotClient::removeThingTopoAsync(const RemoveThingTopoRequest& request, const RemoveThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RemoveThingTopoOutcomeCallable IotClient::removeThingTopoCallable(const RemoveThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveThingTopoOutcome()>>(
			[this, request]()
			{
			return this->removeThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ReplaceEdgeInstanceGatewayOutcome IotClient::replaceEdgeInstanceGateway(const ReplaceEdgeInstanceGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceEdgeInstanceGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceEdgeInstanceGatewayOutcome(ReplaceEdgeInstanceGatewayResult(outcome.result()));
	else
		return ReplaceEdgeInstanceGatewayOutcome(outcome.error());
}

void IotClient::replaceEdgeInstanceGatewayAsync(const ReplaceEdgeInstanceGatewayRequest& request, const ReplaceEdgeInstanceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceEdgeInstanceGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ReplaceEdgeInstanceGatewayOutcomeCallable IotClient::replaceEdgeInstanceGatewayCallable(const ReplaceEdgeInstanceGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceEdgeInstanceGatewayOutcome()>>(
			[this, request]()
			{
			return this->replaceEdgeInstanceGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RerunJobOutcome IotClient::rerunJob(const RerunJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunJobOutcome(RerunJobResult(outcome.result()));
	else
		return RerunJobOutcome(outcome.error());
}

void IotClient::rerunJobAsync(const RerunJobRequest& request, const RerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RerunJobOutcomeCallable IotClient::rerunJobCallable(const RerunJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunJobOutcome()>>(
			[this, request]()
			{
			return this->rerunJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ResetConsumerGroupPositionOutcome IotClient::resetConsumerGroupPosition(const ResetConsumerGroupPositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetConsumerGroupPositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetConsumerGroupPositionOutcome(ResetConsumerGroupPositionResult(outcome.result()));
	else
		return ResetConsumerGroupPositionOutcome(outcome.error());
}

void IotClient::resetConsumerGroupPositionAsync(const ResetConsumerGroupPositionRequest& request, const ResetConsumerGroupPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetConsumerGroupPosition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ResetConsumerGroupPositionOutcomeCallable IotClient::resetConsumerGroupPositionCallable(const ResetConsumerGroupPositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetConsumerGroupPositionOutcome()>>(
			[this, request]()
			{
			return this->resetConsumerGroupPosition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ResetDeviceTimelineOutcome IotClient::resetDeviceTimeline(const ResetDeviceTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDeviceTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDeviceTimelineOutcome(ResetDeviceTimelineResult(outcome.result()));
	else
		return ResetDeviceTimelineOutcome(outcome.error());
}

void IotClient::resetDeviceTimelineAsync(const ResetDeviceTimelineRequest& request, const ResetDeviceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDeviceTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ResetDeviceTimelineOutcomeCallable IotClient::resetDeviceTimelineCallable(const ResetDeviceTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDeviceTimelineOutcome()>>(
			[this, request]()
			{
			return this->resetDeviceTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ResetThingOutcome IotClient::resetThing(const ResetThingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetThingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetThingOutcome(ResetThingResult(outcome.result()));
	else
		return ResetThingOutcome(outcome.error());
}

void IotClient::resetThingAsync(const ResetThingRequest& request, const ResetThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetThing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ResetThingOutcomeCallable IotClient::resetThingCallable(const ResetThingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetThingOutcome()>>(
			[this, request]()
			{
			return this->resetThing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RetrySoundCodeLabelBatchOutcome IotClient::retrySoundCodeLabelBatch(const RetrySoundCodeLabelBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetrySoundCodeLabelBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetrySoundCodeLabelBatchOutcome(RetrySoundCodeLabelBatchResult(outcome.result()));
	else
		return RetrySoundCodeLabelBatchOutcome(outcome.error());
}

void IotClient::retrySoundCodeLabelBatchAsync(const RetrySoundCodeLabelBatchRequest& request, const RetrySoundCodeLabelBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retrySoundCodeLabelBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RetrySoundCodeLabelBatchOutcomeCallable IotClient::retrySoundCodeLabelBatchCallable(const RetrySoundCodeLabelBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetrySoundCodeLabelBatchOutcome()>>(
			[this, request]()
			{
			return this->retrySoundCodeLabelBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ReupgradeOTATaskOutcome IotClient::reupgradeOTATask(const ReupgradeOTATaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReupgradeOTATaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReupgradeOTATaskOutcome(ReupgradeOTATaskResult(outcome.result()));
	else
		return ReupgradeOTATaskOutcome(outcome.error());
}

void IotClient::reupgradeOTATaskAsync(const ReupgradeOTATaskRequest& request, const ReupgradeOTATaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reupgradeOTATask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ReupgradeOTATaskOutcomeCallable IotClient::reupgradeOTATaskCallable(const ReupgradeOTATaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReupgradeOTATaskOutcome()>>(
			[this, request]()
			{
			return this->reupgradeOTATask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SaveDevicePropOutcome IotClient::saveDeviceProp(const SaveDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveDevicePropOutcome(SaveDevicePropResult(outcome.result()));
	else
		return SaveDevicePropOutcome(outcome.error());
}

void IotClient::saveDevicePropAsync(const SaveDevicePropRequest& request, const SaveDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SaveDevicePropOutcomeCallable IotClient::saveDevicePropCallable(const SaveDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveDevicePropOutcome()>>(
			[this, request]()
			{
			return this->saveDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SaveScriptOutcome IotClient::saveScript(const SaveScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveScriptOutcome(SaveScriptResult(outcome.result()));
	else
		return SaveScriptOutcome(outcome.error());
}

void IotClient::saveScriptAsync(const SaveScriptRequest& request, const SaveScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SaveScriptOutcomeCallable IotClient::saveScriptCallable(const SaveScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveScriptOutcome()>>(
			[this, request]()
			{
			return this->saveScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetDeviceDesiredPropertyOutcome IotClient::setDeviceDesiredProperty(const SetDeviceDesiredPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeviceDesiredPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeviceDesiredPropertyOutcome(SetDeviceDesiredPropertyResult(outcome.result()));
	else
		return SetDeviceDesiredPropertyOutcome(outcome.error());
}

void IotClient::setDeviceDesiredPropertyAsync(const SetDeviceDesiredPropertyRequest& request, const SetDeviceDesiredPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeviceDesiredProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetDeviceDesiredPropertyOutcomeCallable IotClient::setDeviceDesiredPropertyCallable(const SetDeviceDesiredPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeviceDesiredPropertyOutcome()>>(
			[this, request]()
			{
			return this->setDeviceDesiredProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetDeviceGroupTagsOutcome IotClient::setDeviceGroupTags(const SetDeviceGroupTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeviceGroupTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeviceGroupTagsOutcome(SetDeviceGroupTagsResult(outcome.result()));
	else
		return SetDeviceGroupTagsOutcome(outcome.error());
}

void IotClient::setDeviceGroupTagsAsync(const SetDeviceGroupTagsRequest& request, const SetDeviceGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeviceGroupTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetDeviceGroupTagsOutcomeCallable IotClient::setDeviceGroupTagsCallable(const SetDeviceGroupTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeviceGroupTagsOutcome()>>(
			[this, request]()
			{
			return this->setDeviceGroupTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetDevicePropertyOutcome IotClient::setDeviceProperty(const SetDevicePropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDevicePropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDevicePropertyOutcome(SetDevicePropertyResult(outcome.result()));
	else
		return SetDevicePropertyOutcome(outcome.error());
}

void IotClient::setDevicePropertyAsync(const SetDevicePropertyRequest& request, const SetDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeviceProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetDevicePropertyOutcomeCallable IotClient::setDevicePropertyCallable(const SetDevicePropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDevicePropertyOutcome()>>(
			[this, request]()
			{
			return this->setDeviceProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetDevicesPropertyOutcome IotClient::setDevicesProperty(const SetDevicesPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDevicesPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDevicesPropertyOutcome(SetDevicesPropertyResult(outcome.result()));
	else
		return SetDevicesPropertyOutcome(outcome.error());
}

void IotClient::setDevicesPropertyAsync(const SetDevicesPropertyRequest& request, const SetDevicesPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDevicesProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetDevicesPropertyOutcomeCallable IotClient::setDevicesPropertyCallable(const SetDevicesPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDevicesPropertyOutcome()>>(
			[this, request]()
			{
			return this->setDevicesProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetEdgeInstanceDriverConfigsOutcome IotClient::setEdgeInstanceDriverConfigs(const SetEdgeInstanceDriverConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEdgeInstanceDriverConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEdgeInstanceDriverConfigsOutcome(SetEdgeInstanceDriverConfigsResult(outcome.result()));
	else
		return SetEdgeInstanceDriverConfigsOutcome(outcome.error());
}

void IotClient::setEdgeInstanceDriverConfigsAsync(const SetEdgeInstanceDriverConfigsRequest& request, const SetEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEdgeInstanceDriverConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetEdgeInstanceDriverConfigsOutcomeCallable IotClient::setEdgeInstanceDriverConfigsCallable(const SetEdgeInstanceDriverConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEdgeInstanceDriverConfigsOutcome()>>(
			[this, request]()
			{
			return this->setEdgeInstanceDriverConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetProductCertInfoOutcome IotClient::setProductCertInfo(const SetProductCertInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetProductCertInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetProductCertInfoOutcome(SetProductCertInfoResult(outcome.result()));
	else
		return SetProductCertInfoOutcome(outcome.error());
}

void IotClient::setProductCertInfoAsync(const SetProductCertInfoRequest& request, const SetProductCertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setProductCertInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetProductCertInfoOutcomeCallable IotClient::setProductCertInfoCallable(const SetProductCertInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetProductCertInfoOutcome()>>(
			[this, request]()
			{
			return this->setProductCertInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetStudioProjectCooperationOutcome IotClient::setStudioProjectCooperation(const SetStudioProjectCooperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetStudioProjectCooperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetStudioProjectCooperationOutcome(SetStudioProjectCooperationResult(outcome.result()));
	else
		return SetStudioProjectCooperationOutcome(outcome.error());
}

void IotClient::setStudioProjectCooperationAsync(const SetStudioProjectCooperationRequest& request, const SetStudioProjectCooperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setStudioProjectCooperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetStudioProjectCooperationOutcomeCallable IotClient::setStudioProjectCooperationCallable(const SetStudioProjectCooperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetStudioProjectCooperationOutcome()>>(
			[this, request]()
			{
			return this->setStudioProjectCooperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetupStudioAppAuthModeOpenOutcome IotClient::setupStudioAppAuthModeOpen(const SetupStudioAppAuthModeOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupStudioAppAuthModeOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupStudioAppAuthModeOpenOutcome(SetupStudioAppAuthModeOpenResult(outcome.result()));
	else
		return SetupStudioAppAuthModeOpenOutcome(outcome.error());
}

void IotClient::setupStudioAppAuthModeOpenAsync(const SetupStudioAppAuthModeOpenRequest& request, const SetupStudioAppAuthModeOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupStudioAppAuthModeOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetupStudioAppAuthModeOpenOutcomeCallable IotClient::setupStudioAppAuthModeOpenCallable(const SetupStudioAppAuthModeOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupStudioAppAuthModeOpenOutcome()>>(
			[this, request]()
			{
			return this->setupStudioAppAuthModeOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ShareSpeechByCombinationOutcome IotClient::shareSpeechByCombination(const ShareSpeechByCombinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShareSpeechByCombinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShareSpeechByCombinationOutcome(ShareSpeechByCombinationResult(outcome.result()));
	else
		return ShareSpeechByCombinationOutcome(outcome.error());
}

void IotClient::shareSpeechByCombinationAsync(const ShareSpeechByCombinationRequest& request, const ShareSpeechByCombinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shareSpeechByCombination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ShareSpeechByCombinationOutcomeCallable IotClient::shareSpeechByCombinationCallable(const ShareSpeechByCombinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShareSpeechByCombinationOutcome()>>(
			[this, request]()
			{
			return this->shareSpeechByCombination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SpeechByCombinationOutcome IotClient::speechByCombination(const SpeechByCombinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SpeechByCombinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SpeechByCombinationOutcome(SpeechByCombinationResult(outcome.result()));
	else
		return SpeechByCombinationOutcome(outcome.error());
}

void IotClient::speechByCombinationAsync(const SpeechByCombinationRequest& request, const SpeechByCombinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, speechByCombination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SpeechByCombinationOutcomeCallable IotClient::speechByCombinationCallable(const SpeechByCombinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SpeechByCombinationOutcome()>>(
			[this, request]()
			{
			return this->speechByCombination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SpeechBySynthesisOutcome IotClient::speechBySynthesis(const SpeechBySynthesisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SpeechBySynthesisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SpeechBySynthesisOutcome(SpeechBySynthesisResult(outcome.result()));
	else
		return SpeechBySynthesisOutcome(outcome.error());
}

void IotClient::speechBySynthesisAsync(const SpeechBySynthesisRequest& request, const SpeechBySynthesisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, speechBySynthesis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SpeechBySynthesisOutcomeCallable IotClient::speechBySynthesisCallable(const SpeechBySynthesisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SpeechBySynthesisOutcome()>>(
			[this, request]()
			{
			return this->speechBySynthesis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StartPTDetectionOutcome IotClient::startPTDetection(const StartPTDetectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPTDetectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPTDetectionOutcome(StartPTDetectionResult(outcome.result()));
	else
		return StartPTDetectionOutcome(outcome.error());
}

void IotClient::startPTDetectionAsync(const StartPTDetectionRequest& request, const StartPTDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPTDetection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StartPTDetectionOutcomeCallable IotClient::startPTDetectionCallable(const StartPTDetectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPTDetectionOutcome()>>(
			[this, request]()
			{
			return this->startPTDetection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StartParserOutcome IotClient::startParser(const StartParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartParserOutcome(StartParserResult(outcome.result()));
	else
		return StartParserOutcome(outcome.error());
}

void IotClient::startParserAsync(const StartParserRequest& request, const StartParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StartParserOutcomeCallable IotClient::startParserCallable(const StartParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartParserOutcome()>>(
			[this, request]()
			{
			return this->startParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StartRuleOutcome IotClient::startRule(const StartRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRuleOutcome(StartRuleResult(outcome.result()));
	else
		return StartRuleOutcome(outcome.error());
}

void IotClient::startRuleAsync(const StartRuleRequest& request, const StartRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StartRuleOutcomeCallable IotClient::startRuleCallable(const StartRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRuleOutcome()>>(
			[this, request]()
			{
			return this->startRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StopParserOutcome IotClient::stopParser(const StopParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopParserOutcome(StopParserResult(outcome.result()));
	else
		return StopParserOutcome(outcome.error());
}

void IotClient::stopParserAsync(const StopParserRequest& request, const StopParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StopParserOutcomeCallable IotClient::stopParserCallable(const StopParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopParserOutcome()>>(
			[this, request]()
			{
			return this->stopParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StopRuleOutcome IotClient::stopRule(const StopRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRuleOutcome(StopRuleResult(outcome.result()));
	else
		return StopRuleOutcome(outcome.error());
}

void IotClient::stopRuleAsync(const StopRuleRequest& request, const StopRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StopRuleOutcomeCallable IotClient::stopRuleCallable(const StopRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRuleOutcome()>>(
			[this, request]()
			{
			return this->stopRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SubscribeTopicOutcome IotClient::subscribeTopic(const SubscribeTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeTopicOutcome(SubscribeTopicResult(outcome.result()));
	else
		return SubscribeTopicOutcome(outcome.error());
}

void IotClient::subscribeTopicAsync(const SubscribeTopicRequest& request, const SubscribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SubscribeTopicOutcomeCallable IotClient::subscribeTopicCallable(const SubscribeTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeTopicOutcome()>>(
			[this, request]()
			{
			return this->subscribeTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SyncSpeechByCombinationOutcome IotClient::syncSpeechByCombination(const SyncSpeechByCombinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncSpeechByCombinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncSpeechByCombinationOutcome(SyncSpeechByCombinationResult(outcome.result()));
	else
		return SyncSpeechByCombinationOutcome(outcome.error());
}

void IotClient::syncSpeechByCombinationAsync(const SyncSpeechByCombinationRequest& request, const SyncSpeechByCombinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncSpeechByCombination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SyncSpeechByCombinationOutcomeCallable IotClient::syncSpeechByCombinationCallable(const SyncSpeechByCombinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncSpeechByCombinationOutcome()>>(
			[this, request]()
			{
			return this->syncSpeechByCombination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::TestSpeechOutcome IotClient::testSpeech(const TestSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestSpeechOutcome(TestSpeechResult(outcome.result()));
	else
		return TestSpeechOutcome(outcome.error());
}

void IotClient::testSpeechAsync(const TestSpeechRequest& request, const TestSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::TestSpeechOutcomeCallable IotClient::testSpeechCallable(const TestSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestSpeechOutcome()>>(
			[this, request]()
			{
			return this->testSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::TestSwitchOutcome IotClient::testSwitch(const TestSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestSwitchOutcome(TestSwitchResult(outcome.result()));
	else
		return TestSwitchOutcome(outcome.error());
}

void IotClient::testSwitchAsync(const TestSwitchRequest& request, const TestSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::TestSwitchOutcomeCallable IotClient::testSwitchCallable(const TestSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestSwitchOutcome()>>(
			[this, request]()
			{
			return this->testSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::TransformClientIdOutcome IotClient::transformClientId(const TransformClientIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformClientIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformClientIdOutcome(TransformClientIdResult(outcome.result()));
	else
		return TransformClientIdOutcome(outcome.error());
}

void IotClient::transformClientIdAsync(const TransformClientIdRequest& request, const TransformClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformClientId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::TransformClientIdOutcomeCallable IotClient::transformClientIdCallable(const TransformClientIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformClientIdOutcome()>>(
			[this, request]()
			{
			return this->transformClientId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::TriggerSceneRuleOutcome IotClient::triggerSceneRule(const TriggerSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerSceneRuleOutcome(TriggerSceneRuleResult(outcome.result()));
	else
		return TriggerSceneRuleOutcome(outcome.error());
}

void IotClient::triggerSceneRuleAsync(const TriggerSceneRuleRequest& request, const TriggerSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::TriggerSceneRuleOutcomeCallable IotClient::triggerSceneRuleCallable(const TriggerSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->triggerSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnbindApplicationFromEdgeInstanceOutcome IotClient::unbindApplicationFromEdgeInstance(const UnbindApplicationFromEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindApplicationFromEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindApplicationFromEdgeInstanceOutcome(UnbindApplicationFromEdgeInstanceResult(outcome.result()));
	else
		return UnbindApplicationFromEdgeInstanceOutcome(outcome.error());
}

void IotClient::unbindApplicationFromEdgeInstanceAsync(const UnbindApplicationFromEdgeInstanceRequest& request, const UnbindApplicationFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindApplicationFromEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnbindApplicationFromEdgeInstanceOutcomeCallable IotClient::unbindApplicationFromEdgeInstanceCallable(const UnbindApplicationFromEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindApplicationFromEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->unbindApplicationFromEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnbindDriverFromEdgeInstanceOutcome IotClient::unbindDriverFromEdgeInstance(const UnbindDriverFromEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindDriverFromEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindDriverFromEdgeInstanceOutcome(UnbindDriverFromEdgeInstanceResult(outcome.result()));
	else
		return UnbindDriverFromEdgeInstanceOutcome(outcome.error());
}

void IotClient::unbindDriverFromEdgeInstanceAsync(const UnbindDriverFromEdgeInstanceRequest& request, const UnbindDriverFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindDriverFromEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnbindDriverFromEdgeInstanceOutcomeCallable IotClient::unbindDriverFromEdgeInstanceCallable(const UnbindDriverFromEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindDriverFromEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->unbindDriverFromEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnbindLicenseProductOutcome IotClient::unbindLicenseProduct(const UnbindLicenseProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindLicenseProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindLicenseProductOutcome(UnbindLicenseProductResult(outcome.result()));
	else
		return UnbindLicenseProductOutcome(outcome.error());
}

void IotClient::unbindLicenseProductAsync(const UnbindLicenseProductRequest& request, const UnbindLicenseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindLicenseProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnbindLicenseProductOutcomeCallable IotClient::unbindLicenseProductCallable(const UnbindLicenseProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindLicenseProductOutcome()>>(
			[this, request]()
			{
			return this->unbindLicenseProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnbindRoleFromEdgeInstanceOutcome IotClient::unbindRoleFromEdgeInstance(const UnbindRoleFromEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindRoleFromEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindRoleFromEdgeInstanceOutcome(UnbindRoleFromEdgeInstanceResult(outcome.result()));
	else
		return UnbindRoleFromEdgeInstanceOutcome(outcome.error());
}

void IotClient::unbindRoleFromEdgeInstanceAsync(const UnbindRoleFromEdgeInstanceRequest& request, const UnbindRoleFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindRoleFromEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnbindRoleFromEdgeInstanceOutcomeCallable IotClient::unbindRoleFromEdgeInstanceCallable(const UnbindRoleFromEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindRoleFromEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->unbindRoleFromEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnbindSceneRuleFromEdgeInstanceOutcome IotClient::unbindSceneRuleFromEdgeInstance(const UnbindSceneRuleFromEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSceneRuleFromEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSceneRuleFromEdgeInstanceOutcome(UnbindSceneRuleFromEdgeInstanceResult(outcome.result()));
	else
		return UnbindSceneRuleFromEdgeInstanceOutcome(outcome.error());
}

void IotClient::unbindSceneRuleFromEdgeInstanceAsync(const UnbindSceneRuleFromEdgeInstanceRequest& request, const UnbindSceneRuleFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSceneRuleFromEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnbindSceneRuleFromEdgeInstanceOutcomeCallable IotClient::unbindSceneRuleFromEdgeInstanceCallable(const UnbindSceneRuleFromEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSceneRuleFromEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->unbindSceneRuleFromEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UnsubscribeTopicOutcome IotClient::unsubscribeTopic(const UnsubscribeTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeTopicOutcome(UnsubscribeTopicResult(outcome.result()));
	else
		return UnsubscribeTopicOutcome(outcome.error());
}

void IotClient::unsubscribeTopicAsync(const UnsubscribeTopicRequest& request, const UnsubscribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribeTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UnsubscribeTopicOutcomeCallable IotClient::unsubscribeTopicCallable(const UnsubscribeTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeTopicOutcome()>>(
			[this, request]()
			{
			return this->unsubscribeTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateConsumerGroupOutcome IotClient::updateConsumerGroup(const UpdateConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConsumerGroupOutcome(UpdateConsumerGroupResult(outcome.result()));
	else
		return UpdateConsumerGroupOutcome(outcome.error());
}

void IotClient::updateConsumerGroupAsync(const UpdateConsumerGroupRequest& request, const UpdateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateConsumerGroupOutcomeCallable IotClient::updateConsumerGroupCallable(const UpdateConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->updateConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateDestinationOutcome IotClient::updateDestination(const UpdateDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDestinationOutcome(UpdateDestinationResult(outcome.result()));
	else
		return UpdateDestinationOutcome(outcome.error());
}

void IotClient::updateDestinationAsync(const UpdateDestinationRequest& request, const UpdateDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateDestinationOutcomeCallable IotClient::updateDestinationCallable(const UpdateDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDestinationOutcome()>>(
			[this, request]()
			{
			return this->updateDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateDeviceGroupOutcome IotClient::updateDeviceGroup(const UpdateDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeviceGroupOutcome(UpdateDeviceGroupResult(outcome.result()));
	else
		return UpdateDeviceGroupOutcome(outcome.error());
}

void IotClient::updateDeviceGroupAsync(const UpdateDeviceGroupRequest& request, const UpdateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateDeviceGroupOutcomeCallable IotClient::updateDeviceGroupCallable(const UpdateDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->updateDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateDeviceShadowOutcome IotClient::updateDeviceShadow(const UpdateDeviceShadowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeviceShadowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeviceShadowOutcome(UpdateDeviceShadowResult(outcome.result()));
	else
		return UpdateDeviceShadowOutcome(outcome.error());
}

void IotClient::updateDeviceShadowAsync(const UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeviceShadow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateDeviceShadowOutcomeCallable IotClient::updateDeviceShadowCallable(const UpdateDeviceShadowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeviceShadowOutcome()>>(
			[this, request]()
			{
			return this->updateDeviceShadow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateEdgeDriverVersionOutcome IotClient::updateEdgeDriverVersion(const UpdateEdgeDriverVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEdgeDriverVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEdgeDriverVersionOutcome(UpdateEdgeDriverVersionResult(outcome.result()));
	else
		return UpdateEdgeDriverVersionOutcome(outcome.error());
}

void IotClient::updateEdgeDriverVersionAsync(const UpdateEdgeDriverVersionRequest& request, const UpdateEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEdgeDriverVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateEdgeDriverVersionOutcomeCallable IotClient::updateEdgeDriverVersionCallable(const UpdateEdgeDriverVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEdgeDriverVersionOutcome()>>(
			[this, request]()
			{
			return this->updateEdgeDriverVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateEdgeInstanceOutcome IotClient::updateEdgeInstance(const UpdateEdgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEdgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEdgeInstanceOutcome(UpdateEdgeInstanceResult(outcome.result()));
	else
		return UpdateEdgeInstanceOutcome(outcome.error());
}

void IotClient::updateEdgeInstanceAsync(const UpdateEdgeInstanceRequest& request, const UpdateEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEdgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateEdgeInstanceOutcomeCallable IotClient::updateEdgeInstanceCallable(const UpdateEdgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEdgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateEdgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateEdgeInstanceChannelOutcome IotClient::updateEdgeInstanceChannel(const UpdateEdgeInstanceChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEdgeInstanceChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEdgeInstanceChannelOutcome(UpdateEdgeInstanceChannelResult(outcome.result()));
	else
		return UpdateEdgeInstanceChannelOutcome(outcome.error());
}

void IotClient::updateEdgeInstanceChannelAsync(const UpdateEdgeInstanceChannelRequest& request, const UpdateEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEdgeInstanceChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateEdgeInstanceChannelOutcomeCallable IotClient::updateEdgeInstanceChannelCallable(const UpdateEdgeInstanceChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEdgeInstanceChannelOutcome()>>(
			[this, request]()
			{
			return this->updateEdgeInstanceChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateEdgeInstanceMessageRoutingOutcome IotClient::updateEdgeInstanceMessageRouting(const UpdateEdgeInstanceMessageRoutingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEdgeInstanceMessageRoutingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEdgeInstanceMessageRoutingOutcome(UpdateEdgeInstanceMessageRoutingResult(outcome.result()));
	else
		return UpdateEdgeInstanceMessageRoutingOutcome(outcome.error());
}

void IotClient::updateEdgeInstanceMessageRoutingAsync(const UpdateEdgeInstanceMessageRoutingRequest& request, const UpdateEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEdgeInstanceMessageRouting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateEdgeInstanceMessageRoutingOutcomeCallable IotClient::updateEdgeInstanceMessageRoutingCallable(const UpdateEdgeInstanceMessageRoutingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEdgeInstanceMessageRoutingOutcome()>>(
			[this, request]()
			{
			return this->updateEdgeInstanceMessageRouting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateJobOutcome IotClient::updateJob(const UpdateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJobOutcome(UpdateJobResult(outcome.result()));
	else
		return UpdateJobOutcome(outcome.error());
}

void IotClient::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateJobOutcomeCallable IotClient::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateOTAJobOutcome IotClient::updateOTAJob(const UpdateOTAJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOTAJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOTAJobOutcome(UpdateOTAJobResult(outcome.result()));
	else
		return UpdateOTAJobOutcome(outcome.error());
}

void IotClient::updateOTAJobAsync(const UpdateOTAJobRequest& request, const UpdateOTAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOTAJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateOTAJobOutcomeCallable IotClient::updateOTAJobCallable(const UpdateOTAJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOTAJobOutcome()>>(
			[this, request]()
			{
			return this->updateOTAJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateOTAModuleOutcome IotClient::updateOTAModule(const UpdateOTAModuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOTAModuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOTAModuleOutcome(UpdateOTAModuleResult(outcome.result()));
	else
		return UpdateOTAModuleOutcome(outcome.error());
}

void IotClient::updateOTAModuleAsync(const UpdateOTAModuleRequest& request, const UpdateOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOTAModule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateOTAModuleOutcomeCallable IotClient::updateOTAModuleCallable(const UpdateOTAModuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOTAModuleOutcome()>>(
			[this, request]()
			{
			return this->updateOTAModule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateParserOutcome IotClient::updateParser(const UpdateParserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateParserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateParserOutcome(UpdateParserResult(outcome.result()));
	else
		return UpdateParserOutcome(outcome.error());
}

void IotClient::updateParserAsync(const UpdateParserRequest& request, const UpdateParserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateParser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateParserOutcomeCallable IotClient::updateParserCallable(const UpdateParserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateParserOutcome()>>(
			[this, request]()
			{
			return this->updateParser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateParserDataSourceOutcome IotClient::updateParserDataSource(const UpdateParserDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateParserDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateParserDataSourceOutcome(UpdateParserDataSourceResult(outcome.result()));
	else
		return UpdateParserDataSourceOutcome(outcome.error());
}

void IotClient::updateParserDataSourceAsync(const UpdateParserDataSourceRequest& request, const UpdateParserDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateParserDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateParserDataSourceOutcomeCallable IotClient::updateParserDataSourceCallable(const UpdateParserDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateParserDataSourceOutcome()>>(
			[this, request]()
			{
			return this->updateParserDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductOutcome IotClient::updateProduct(const UpdateProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductOutcome(UpdateProductResult(outcome.result()));
	else
		return UpdateProductOutcome(outcome.error());
}

void IotClient::updateProductAsync(const UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductOutcomeCallable IotClient::updateProductCallable(const UpdateProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductOutcome()>>(
			[this, request]()
			{
			return this->updateProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductFilterConfigOutcome IotClient::updateProductFilterConfig(const UpdateProductFilterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductFilterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductFilterConfigOutcome(UpdateProductFilterConfigResult(outcome.result()));
	else
		return UpdateProductFilterConfigOutcome(outcome.error());
}

void IotClient::updateProductFilterConfigAsync(const UpdateProductFilterConfigRequest& request, const UpdateProductFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProductFilterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductFilterConfigOutcomeCallable IotClient::updateProductFilterConfigCallable(const UpdateProductFilterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductFilterConfigOutcome()>>(
			[this, request]()
			{
			return this->updateProductFilterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductTagsOutcome IotClient::updateProductTags(const UpdateProductTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductTagsOutcome(UpdateProductTagsResult(outcome.result()));
	else
		return UpdateProductTagsOutcome(outcome.error());
}

void IotClient::updateProductTagsAsync(const UpdateProductTagsRequest& request, const UpdateProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProductTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductTagsOutcomeCallable IotClient::updateProductTagsCallable(const UpdateProductTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductTagsOutcome()>>(
			[this, request]()
			{
			return this->updateProductTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductTopicOutcome IotClient::updateProductTopic(const UpdateProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductTopicOutcome(UpdateProductTopicResult(outcome.result()));
	else
		return UpdateProductTopicOutcome(outcome.error());
}

void IotClient::updateProductTopicAsync(const UpdateProductTopicRequest& request, const UpdateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductTopicOutcomeCallable IotClient::updateProductTopicCallable(const UpdateProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductTopicOutcome()>>(
			[this, request]()
			{
			return this->updateProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateRuleOutcome IotClient::updateRule(const UpdateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleOutcome(UpdateRuleResult(outcome.result()));
	else
		return UpdateRuleOutcome(outcome.error());
}

void IotClient::updateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateRuleOutcomeCallable IotClient::updateRuleCallable(const UpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateRuleActionOutcome IotClient::updateRuleAction(const UpdateRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleActionOutcome(UpdateRuleActionResult(outcome.result()));
	else
		return UpdateRuleActionOutcome(outcome.error());
}

void IotClient::updateRuleActionAsync(const UpdateRuleActionRequest& request, const UpdateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateRuleActionOutcomeCallable IotClient::updateRuleActionCallable(const UpdateRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleActionOutcome()>>(
			[this, request]()
			{
			return this->updateRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSceneRuleOutcome IotClient::updateSceneRule(const UpdateSceneRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSceneRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSceneRuleOutcome(UpdateSceneRuleResult(outcome.result()));
	else
		return UpdateSceneRuleOutcome(outcome.error());
}

void IotClient::updateSceneRuleAsync(const UpdateSceneRuleRequest& request, const UpdateSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSceneRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSceneRuleOutcomeCallable IotClient::updateSceneRuleCallable(const UpdateSceneRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSceneRuleOutcome()>>(
			[this, request]()
			{
			return this->updateSceneRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSchedulePeriodOutcome IotClient::updateSchedulePeriod(const UpdateSchedulePeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSchedulePeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSchedulePeriodOutcome(UpdateSchedulePeriodResult(outcome.result()));
	else
		return UpdateSchedulePeriodOutcome(outcome.error());
}

void IotClient::updateSchedulePeriodAsync(const UpdateSchedulePeriodRequest& request, const UpdateSchedulePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSchedulePeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSchedulePeriodOutcomeCallable IotClient::updateSchedulePeriodCallable(const UpdateSchedulePeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSchedulePeriodOutcome()>>(
			[this, request]()
			{
			return this->updateSchedulePeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSoundCodeOutcome IotClient::updateSoundCode(const UpdateSoundCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSoundCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSoundCodeOutcome(UpdateSoundCodeResult(outcome.result()));
	else
		return UpdateSoundCodeOutcome(outcome.error());
}

void IotClient::updateSoundCodeAsync(const UpdateSoundCodeRequest& request, const UpdateSoundCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSoundCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSoundCodeOutcomeCallable IotClient::updateSoundCodeCallable(const UpdateSoundCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSoundCodeOutcome()>>(
			[this, request]()
			{
			return this->updateSoundCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSoundCodeLabelOutcome IotClient::updateSoundCodeLabel(const UpdateSoundCodeLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSoundCodeLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSoundCodeLabelOutcome(UpdateSoundCodeLabelResult(outcome.result()));
	else
		return UpdateSoundCodeLabelOutcome(outcome.error());
}

void IotClient::updateSoundCodeLabelAsync(const UpdateSoundCodeLabelRequest& request, const UpdateSoundCodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSoundCodeLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSoundCodeLabelOutcomeCallable IotClient::updateSoundCodeLabelCallable(const UpdateSoundCodeLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSoundCodeLabelOutcome()>>(
			[this, request]()
			{
			return this->updateSoundCodeLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSoundCodeScheduleOutcome IotClient::updateSoundCodeSchedule(const UpdateSoundCodeScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSoundCodeScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSoundCodeScheduleOutcome(UpdateSoundCodeScheduleResult(outcome.result()));
	else
		return UpdateSoundCodeScheduleOutcome(outcome.error());
}

void IotClient::updateSoundCodeScheduleAsync(const UpdateSoundCodeScheduleRequest& request, const UpdateSoundCodeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSoundCodeSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSoundCodeScheduleOutcomeCallable IotClient::updateSoundCodeScheduleCallable(const UpdateSoundCodeScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSoundCodeScheduleOutcome()>>(
			[this, request]()
			{
			return this->updateSoundCodeSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSpeechOutcome IotClient::updateSpeech(const UpdateSpeechRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSpeechOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSpeechOutcome(UpdateSpeechResult(outcome.result()));
	else
		return UpdateSpeechOutcome(outcome.error());
}

void IotClient::updateSpeechAsync(const UpdateSpeechRequest& request, const UpdateSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSpeech(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSpeechOutcomeCallable IotClient::updateSpeechCallable(const UpdateSpeechRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSpeechOutcome()>>(
			[this, request]()
			{
			return this->updateSpeech(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateSubscribeRelationOutcome IotClient::updateSubscribeRelation(const UpdateSubscribeRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubscribeRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubscribeRelationOutcome(UpdateSubscribeRelationResult(outcome.result()));
	else
		return UpdateSubscribeRelationOutcome(outcome.error());
}

void IotClient::updateSubscribeRelationAsync(const UpdateSubscribeRelationRequest& request, const UpdateSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubscribeRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateSubscribeRelationOutcomeCallable IotClient::updateSubscribeRelationCallable(const UpdateSubscribeRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubscribeRelationOutcome()>>(
			[this, request]()
			{
			return this->updateSubscribeRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateThingModelOutcome IotClient::updateThingModel(const UpdateThingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateThingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateThingModelOutcome(UpdateThingModelResult(outcome.result()));
	else
		return UpdateThingModelOutcome(outcome.error());
}

void IotClient::updateThingModelAsync(const UpdateThingModelRequest& request, const UpdateThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateThingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateThingModelOutcomeCallable IotClient::updateThingModelCallable(const UpdateThingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateThingModelOutcome()>>(
			[this, request]()
			{
			return this->updateThingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateThingScriptOutcome IotClient::updateThingScript(const UpdateThingScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateThingScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateThingScriptOutcome(UpdateThingScriptResult(outcome.result()));
	else
		return UpdateThingScriptOutcome(outcome.error());
}

void IotClient::updateThingScriptAsync(const UpdateThingScriptRequest& request, const UpdateThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateThingScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateThingScriptOutcomeCallable IotClient::updateThingScriptCallable(const UpdateThingScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateThingScriptOutcome()>>(
			[this, request]()
			{
			return this->updateThingScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateTopicConfigOutcome IotClient::updateTopicConfig(const UpdateTopicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTopicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTopicConfigOutcome(UpdateTopicConfigResult(outcome.result()));
	else
		return UpdateTopicConfigOutcome(outcome.error());
}

void IotClient::updateTopicConfigAsync(const UpdateTopicConfigRequest& request, const UpdateTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTopicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateTopicConfigOutcomeCallable IotClient::updateTopicConfigCallable(const UpdateTopicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTopicConfigOutcome()>>(
			[this, request]()
			{
			return this->updateTopicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::WriteDevicesHotStorageDataOutcome IotClient::writeDevicesHotStorageData(const WriteDevicesHotStorageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteDevicesHotStorageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteDevicesHotStorageDataOutcome(WriteDevicesHotStorageDataResult(outcome.result()));
	else
		return WriteDevicesHotStorageDataOutcome(outcome.error());
}

void IotClient::writeDevicesHotStorageDataAsync(const WriteDevicesHotStorageDataRequest& request, const WriteDevicesHotStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeDevicesHotStorageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::WriteDevicesHotStorageDataOutcomeCallable IotClient::writeDevicesHotStorageDataCallable(const WriteDevicesHotStorageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteDevicesHotStorageDataOutcome()>>(
			[this, request]()
			{
			return this->writeDevicesHotStorageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

