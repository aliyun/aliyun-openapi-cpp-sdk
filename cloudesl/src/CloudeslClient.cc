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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::CloudeslClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::CloudeslClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::~CloudeslClient()
{}

CloudeslClient::ActivateApServiceOutcome CloudeslClient::activateApService(const ActivateApServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateApServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateApServiceOutcome(ActivateApServiceResult(outcome.result()));
	else
		return ActivateApServiceOutcome(outcome.error());
}

void CloudeslClient::activateApServiceAsync(const ActivateApServiceRequest& request, const ActivateApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateApService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ActivateApServiceOutcomeCallable CloudeslClient::activateApServiceCallable(const ActivateApServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateApServiceOutcome()>>(
			[this, request]()
			{
			return this->activateApService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::ActivateApService2Outcome CloudeslClient::activateApService2(const ActivateApService2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateApService2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateApService2Outcome(ActivateApService2Result(outcome.result()));
	else
		return ActivateApService2Outcome(outcome.error());
}

void CloudeslClient::activateApService2Async(const ActivateApService2Request& request, const ActivateApService2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateApService2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ActivateApService2OutcomeCallable CloudeslClient::activateApService2Callable(const ActivateApService2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateApService2Outcome()>>(
			[this, request]()
			{
			return this->activateApService2(request);
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

CloudeslClient::BindApStoreServiceOutcome CloudeslClient::bindApStoreService(const BindApStoreServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindApStoreServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindApStoreServiceOutcome(BindApStoreServiceResult(outcome.result()));
	else
		return BindApStoreServiceOutcome(outcome.error());
}

void CloudeslClient::bindApStoreServiceAsync(const BindApStoreServiceRequest& request, const BindApStoreServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindApStoreService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BindApStoreServiceOutcomeCallable CloudeslClient::bindApStoreServiceCallable(const BindApStoreServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindApStoreServiceOutcome()>>(
			[this, request]()
			{
			return this->bindApStoreService(request);
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

CloudeslClient::BindEslDeviceShelfOutcome CloudeslClient::bindEslDeviceShelf(const BindEslDeviceShelfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindEslDeviceShelfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindEslDeviceShelfOutcome(BindEslDeviceShelfResult(outcome.result()));
	else
		return BindEslDeviceShelfOutcome(outcome.error());
}

void CloudeslClient::bindEslDeviceShelfAsync(const BindEslDeviceShelfRequest& request, const BindEslDeviceShelfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindEslDeviceShelf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BindEslDeviceShelfOutcomeCallable CloudeslClient::bindEslDeviceShelfCallable(const BindEslDeviceShelfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindEslDeviceShelfOutcome()>>(
			[this, request]()
			{
			return this->bindEslDeviceShelf(request);
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

CloudeslClient::DeleteApServiceOutcome CloudeslClient::deleteApService(const DeleteApServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApServiceOutcome(DeleteApServiceResult(outcome.result()));
	else
		return DeleteApServiceOutcome(outcome.error());
}

void CloudeslClient::deleteApServiceAsync(const DeleteApServiceRequest& request, const DeleteApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteApServiceOutcomeCallable CloudeslClient::deleteApServiceCallable(const DeleteApServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteApService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteEslDeviceOutcome CloudeslClient::deleteEslDevice(const DeleteEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEslDeviceOutcome(DeleteEslDeviceResult(outcome.result()));
	else
		return DeleteEslDeviceOutcome(outcome.error());
}

void CloudeslClient::deleteEslDeviceAsync(const DeleteEslDeviceRequest& request, const DeleteEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteEslDeviceOutcomeCallable CloudeslClient::deleteEslDeviceCallable(const DeleteEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteEslDevice(request);
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

CloudeslClient::DeleteItemBySkuIdOutcome CloudeslClient::deleteItemBySkuId(const DeleteItemBySkuIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteItemBySkuIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteItemBySkuIdOutcome(DeleteItemBySkuIdResult(outcome.result()));
	else
		return DeleteItemBySkuIdOutcome(outcome.error());
}

void CloudeslClient::deleteItemBySkuIdAsync(const DeleteItemBySkuIdRequest& request, const DeleteItemBySkuIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteItemBySkuId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteItemBySkuIdOutcomeCallable CloudeslClient::deleteItemBySkuIdCallable(const DeleteItemBySkuIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteItemBySkuIdOutcome()>>(
			[this, request]()
			{
			return this->deleteItemBySkuId(request);
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

CloudeslClient::DescribeAlarmsOutcome CloudeslClient::describeAlarms(const DescribeAlarmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmsOutcome(DescribeAlarmsResult(outcome.result()));
	else
		return DescribeAlarmsOutcome(outcome.error());
}

void CloudeslClient::describeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeAlarmsOutcomeCallable CloudeslClient::describeAlarmsCallable(const DescribeAlarmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
			[this, request]()
			{
			return this->describeAlarms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeCompanyOutcome CloudeslClient::describeCompany(const DescribeCompanyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCompanyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCompanyOutcome(DescribeCompanyResult(outcome.result()));
	else
		return DescribeCompanyOutcome(outcome.error());
}

void CloudeslClient::describeCompanyAsync(const DescribeCompanyRequest& request, const DescribeCompanyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCompany(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeCompanyOutcomeCallable CloudeslClient::describeCompanyCallable(const DescribeCompanyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCompanyOutcome()>>(
			[this, request]()
			{
			return this->describeCompany(request);
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

CloudeslClient::DescribeUserOperationLogOutcome CloudeslClient::describeUserOperationLog(const DescribeUserOperationLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOperationLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOperationLogOutcome(DescribeUserOperationLogResult(outcome.result()));
	else
		return DescribeUserOperationLogOutcome(outcome.error());
}

void CloudeslClient::describeUserOperationLogAsync(const DescribeUserOperationLogRequest& request, const DescribeUserOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserOperationLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUserOperationLogOutcomeCallable CloudeslClient::describeUserOperationLogCallable(const DescribeUserOperationLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOperationLogOutcome()>>(
			[this, request]()
			{
			return this->describeUserOperationLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeUserRamPolicyOutcome CloudeslClient::describeUserRamPolicy(const DescribeUserRamPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserRamPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserRamPolicyOutcome(DescribeUserRamPolicyResult(outcome.result()));
	else
		return DescribeUserRamPolicyOutcome(outcome.error());
}

void CloudeslClient::describeUserRamPolicyAsync(const DescribeUserRamPolicyRequest& request, const DescribeUserRamPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserRamPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUserRamPolicyOutcomeCallable CloudeslClient::describeUserRamPolicyCallable(const DescribeUserRamPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserRamPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeUserRamPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::SearchApServiceOutcome CloudeslClient::searchApService(const SearchApServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchApServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchApServiceOutcome(SearchApServiceResult(outcome.result()));
	else
		return SearchApServiceOutcome(outcome.error());
}

void CloudeslClient::searchApServiceAsync(const SearchApServiceRequest& request, const SearchApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchApService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::SearchApServiceOutcomeCallable CloudeslClient::searchApServiceCallable(const SearchApServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchApServiceOutcome()>>(
			[this, request]()
			{
			return this->searchApService(request);
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

CloudeslClient::UnbindEslDeviceShelfOutcome CloudeslClient::unbindEslDeviceShelf(const UnbindEslDeviceShelfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindEslDeviceShelfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindEslDeviceShelfOutcome(UnbindEslDeviceShelfResult(outcome.result()));
	else
		return UnbindEslDeviceShelfOutcome(outcome.error());
}

void CloudeslClient::unbindEslDeviceShelfAsync(const UnbindEslDeviceShelfRequest& request, const UnbindEslDeviceShelfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindEslDeviceShelf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UnbindEslDeviceShelfOutcomeCallable CloudeslClient::unbindEslDeviceShelfCallable(const UnbindEslDeviceShelfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindEslDeviceShelfOutcome()>>(
			[this, request]()
			{
			return this->unbindEslDeviceShelf(request);
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

