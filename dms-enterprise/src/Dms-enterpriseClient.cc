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

#include <alibabacloud/dms-enterprise/Dms_enterpriseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

namespace
{
	const std::string SERVICE_NAME = "dms-enterprise";
}

Dms_enterpriseClient::Dms_enterpriseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::Dms_enterpriseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::Dms_enterpriseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::~Dms_enterpriseClient()
{}

Dms_enterpriseClient::AddLhMembersOutcome Dms_enterpriseClient::addLhMembers(const AddLhMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLhMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLhMembersOutcome(AddLhMembersResult(outcome.result()));
	else
		return AddLhMembersOutcome(outcome.error());
}

void Dms_enterpriseClient::addLhMembersAsync(const AddLhMembersRequest& request, const AddLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLhMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddLhMembersOutcomeCallable Dms_enterpriseClient::addLhMembersCallable(const AddLhMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLhMembersOutcome()>>(
			[this, request]()
			{
			return this->addLhMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddLogicTableRouteConfigOutcome Dms_enterpriseClient::addLogicTableRouteConfig(const AddLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLogicTableRouteConfigOutcome(AddLogicTableRouteConfigResult(outcome.result()));
	else
		return AddLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::addLogicTableRouteConfigAsync(const AddLogicTableRouteConfigRequest& request, const AddLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::addLogicTableRouteConfigCallable(const AddLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->addLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ApproveOrderOutcome Dms_enterpriseClient::approveOrder(const ApproveOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApproveOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApproveOrderOutcome(ApproveOrderResult(outcome.result()));
	else
		return ApproveOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::approveOrderAsync(const ApproveOrderRequest& request, const ApproveOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approveOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ApproveOrderOutcomeCallable Dms_enterpriseClient::approveOrderCallable(const ApproveOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApproveOrderOutcome()>>(
			[this, request]()
			{
			return this->approveOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ChangeColumnSecLevelOutcome Dms_enterpriseClient::changeColumnSecLevel(const ChangeColumnSecLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeColumnSecLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeColumnSecLevelOutcome(ChangeColumnSecLevelResult(outcome.result()));
	else
		return ChangeColumnSecLevelOutcome(outcome.error());
}

void Dms_enterpriseClient::changeColumnSecLevelAsync(const ChangeColumnSecLevelRequest& request, const ChangeColumnSecLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeColumnSecLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ChangeColumnSecLevelOutcomeCallable Dms_enterpriseClient::changeColumnSecLevelCallable(const ChangeColumnSecLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeColumnSecLevelOutcome()>>(
			[this, request]()
			{
			return this->changeColumnSecLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ChangeLhDagOwnerOutcome Dms_enterpriseClient::changeLhDagOwner(const ChangeLhDagOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeLhDagOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeLhDagOwnerOutcome(ChangeLhDagOwnerResult(outcome.result()));
	else
		return ChangeLhDagOwnerOutcome(outcome.error());
}

void Dms_enterpriseClient::changeLhDagOwnerAsync(const ChangeLhDagOwnerRequest& request, const ChangeLhDagOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeLhDagOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ChangeLhDagOwnerOutcomeCallable Dms_enterpriseClient::changeLhDagOwnerCallable(const ChangeLhDagOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeLhDagOwnerOutcome()>>(
			[this, request]()
			{
			return this->changeLhDagOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CloseOrderOutcome Dms_enterpriseClient::closeOrder(const CloseOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseOrderOutcome(CloseOrderResult(outcome.result()));
	else
		return CloseOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::closeOrderAsync(const CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CloseOrderOutcomeCallable Dms_enterpriseClient::closeOrderCallable(const CloseOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseOrderOutcome()>>(
			[this, request]()
			{
			return this->closeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataCorrectOrderOutcome Dms_enterpriseClient::createDataCorrectOrder(const CreateDataCorrectOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCorrectOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCorrectOrderOutcome(CreateDataCorrectOrderResult(outcome.result()));
	else
		return CreateDataCorrectOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataCorrectOrderAsync(const CreateDataCorrectOrderRequest& request, const CreateDataCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCorrectOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataCorrectOrderOutcomeCallable Dms_enterpriseClient::createDataCorrectOrderCallable(const CreateDataCorrectOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCorrectOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataCorrectOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataCronClearOrderOutcome Dms_enterpriseClient::createDataCronClearOrder(const CreateDataCronClearOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCronClearOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCronClearOrderOutcome(CreateDataCronClearOrderResult(outcome.result()));
	else
		return CreateDataCronClearOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataCronClearOrderAsync(const CreateDataCronClearOrderRequest& request, const CreateDataCronClearOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCronClearOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataCronClearOrderOutcomeCallable Dms_enterpriseClient::createDataCronClearOrderCallable(const CreateDataCronClearOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCronClearOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataCronClearOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataImportOrderOutcome Dms_enterpriseClient::createDataImportOrder(const CreateDataImportOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataImportOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataImportOrderOutcome(CreateDataImportOrderResult(outcome.result()));
	else
		return CreateDataImportOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataImportOrderAsync(const CreateDataImportOrderRequest& request, const CreateDataImportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataImportOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataImportOrderOutcomeCallable Dms_enterpriseClient::createDataImportOrderCallable(const CreateDataImportOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataImportOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataImportOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateFreeLockCorrectOrderOutcome Dms_enterpriseClient::createFreeLockCorrectOrder(const CreateFreeLockCorrectOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFreeLockCorrectOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFreeLockCorrectOrderOutcome(CreateFreeLockCorrectOrderResult(outcome.result()));
	else
		return CreateFreeLockCorrectOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createFreeLockCorrectOrderAsync(const CreateFreeLockCorrectOrderRequest& request, const CreateFreeLockCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFreeLockCorrectOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateFreeLockCorrectOrderOutcomeCallable Dms_enterpriseClient::createFreeLockCorrectOrderCallable(const CreateFreeLockCorrectOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFreeLockCorrectOrderOutcome()>>(
			[this, request]()
			{
			return this->createFreeLockCorrectOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateLakeHouseSpaceOutcome Dms_enterpriseClient::createLakeHouseSpace(const CreateLakeHouseSpaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLakeHouseSpaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLakeHouseSpaceOutcome(CreateLakeHouseSpaceResult(outcome.result()));
	else
		return CreateLakeHouseSpaceOutcome(outcome.error());
}

void Dms_enterpriseClient::createLakeHouseSpaceAsync(const CreateLakeHouseSpaceRequest& request, const CreateLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLakeHouseSpace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateLakeHouseSpaceOutcomeCallable Dms_enterpriseClient::createLakeHouseSpaceCallable(const CreateLakeHouseSpaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLakeHouseSpaceOutcome()>>(
			[this, request]()
			{
			return this->createLakeHouseSpace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateLogicDatabaseOutcome Dms_enterpriseClient::createLogicDatabase(const CreateLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogicDatabaseOutcome(CreateLogicDatabaseResult(outcome.result()));
	else
		return CreateLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::createLogicDatabaseAsync(const CreateLogicDatabaseRequest& request, const CreateLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateLogicDatabaseOutcomeCallable Dms_enterpriseClient::createLogicDatabaseCallable(const CreateLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateOrderOutcome Dms_enterpriseClient::createOrder(const CreateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderOutcome(CreateOrderResult(outcome.result()));
	else
		return CreateOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createOrderAsync(const CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateOrderOutcomeCallable Dms_enterpriseClient::createOrderCallable(const CreateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderOutcome()>>(
			[this, request]()
			{
			return this->createOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateProxyOutcome Dms_enterpriseClient::createProxy(const CreateProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProxyOutcome(CreateProxyResult(outcome.result()));
	else
		return CreateProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::createProxyAsync(const CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateProxyOutcomeCallable Dms_enterpriseClient::createProxyCallable(const CreateProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProxyOutcome()>>(
			[this, request]()
			{
			return this->createProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateProxyAccessOutcome Dms_enterpriseClient::createProxyAccess(const CreateProxyAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProxyAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProxyAccessOutcome(CreateProxyAccessResult(outcome.result()));
	else
		return CreateProxyAccessOutcome(outcome.error());
}

void Dms_enterpriseClient::createProxyAccessAsync(const CreateProxyAccessRequest& request, const CreateProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProxyAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateProxyAccessOutcomeCallable Dms_enterpriseClient::createProxyAccessCallable(const CreateProxyAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProxyAccessOutcome()>>(
			[this, request]()
			{
			return this->createProxyAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreatePublishGroupTaskOutcome Dms_enterpriseClient::createPublishGroupTask(const CreatePublishGroupTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePublishGroupTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePublishGroupTaskOutcome(CreatePublishGroupTaskResult(outcome.result()));
	else
		return CreatePublishGroupTaskOutcome(outcome.error());
}

void Dms_enterpriseClient::createPublishGroupTaskAsync(const CreatePublishGroupTaskRequest& request, const CreatePublishGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPublishGroupTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreatePublishGroupTaskOutcomeCallable Dms_enterpriseClient::createPublishGroupTaskCallable(const CreatePublishGroupTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePublishGroupTaskOutcome()>>(
			[this, request]()
			{
			return this->createPublishGroupTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateSQLReviewOrderOutcome Dms_enterpriseClient::createSQLReviewOrder(const CreateSQLReviewOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSQLReviewOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSQLReviewOrderOutcome(CreateSQLReviewOrderResult(outcome.result()));
	else
		return CreateSQLReviewOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createSQLReviewOrderAsync(const CreateSQLReviewOrderRequest& request, const CreateSQLReviewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSQLReviewOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateSQLReviewOrderOutcomeCallable Dms_enterpriseClient::createSQLReviewOrderCallable(const CreateSQLReviewOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSQLReviewOrderOutcome()>>(
			[this, request]()
			{
			return this->createSQLReviewOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateStandardGroupOutcome Dms_enterpriseClient::createStandardGroup(const CreateStandardGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStandardGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStandardGroupOutcome(CreateStandardGroupResult(outcome.result()));
	else
		return CreateStandardGroupOutcome(outcome.error());
}

void Dms_enterpriseClient::createStandardGroupAsync(const CreateStandardGroupRequest& request, const CreateStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStandardGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateStandardGroupOutcomeCallable Dms_enterpriseClient::createStandardGroupCallable(const CreateStandardGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStandardGroupOutcome()>>(
			[this, request]()
			{
			return this->createStandardGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateStructSyncOrderOutcome Dms_enterpriseClient::createStructSyncOrder(const CreateStructSyncOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStructSyncOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStructSyncOrderOutcome(CreateStructSyncOrderResult(outcome.result()));
	else
		return CreateStructSyncOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createStructSyncOrderAsync(const CreateStructSyncOrderRequest& request, const CreateStructSyncOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStructSyncOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateStructSyncOrderOutcomeCallable Dms_enterpriseClient::createStructSyncOrderCallable(const CreateStructSyncOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStructSyncOrderOutcome()>>(
			[this, request]()
			{
			return this->createStructSyncOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateUploadFileJobOutcome Dms_enterpriseClient::createUploadFileJob(const CreateUploadFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadFileJobOutcome(CreateUploadFileJobResult(outcome.result()));
	else
		return CreateUploadFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::createUploadFileJobAsync(const CreateUploadFileJobRequest& request, const CreateUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateUploadFileJobOutcomeCallable Dms_enterpriseClient::createUploadFileJobCallable(const CreateUploadFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadFileJobOutcome()>>(
			[this, request]()
			{
			return this->createUploadFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateUploadOSSFileJobOutcome Dms_enterpriseClient::createUploadOSSFileJob(const CreateUploadOSSFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadOSSFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadOSSFileJobOutcome(CreateUploadOSSFileJobResult(outcome.result()));
	else
		return CreateUploadOSSFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::createUploadOSSFileJobAsync(const CreateUploadOSSFileJobRequest& request, const CreateUploadOSSFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadOSSFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateUploadOSSFileJobOutcomeCallable Dms_enterpriseClient::createUploadOSSFileJobCallable(const CreateUploadOSSFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadOSSFileJobOutcome()>>(
			[this, request]()
			{
			return this->createUploadOSSFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteInstanceOutcome Dms_enterpriseClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteInstanceOutcomeCallable Dms_enterpriseClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLakeHouseSpaceOutcome Dms_enterpriseClient::deleteLakeHouseSpace(const DeleteLakeHouseSpaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLakeHouseSpaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLakeHouseSpaceOutcome(DeleteLakeHouseSpaceResult(outcome.result()));
	else
		return DeleteLakeHouseSpaceOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLakeHouseSpaceAsync(const DeleteLakeHouseSpaceRequest& request, const DeleteLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLakeHouseSpace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLakeHouseSpaceOutcomeCallable Dms_enterpriseClient::deleteLakeHouseSpaceCallable(const DeleteLakeHouseSpaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLakeHouseSpaceOutcome()>>(
			[this, request]()
			{
			return this->deleteLakeHouseSpace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLhMembersOutcome Dms_enterpriseClient::deleteLhMembers(const DeleteLhMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLhMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLhMembersOutcome(DeleteLhMembersResult(outcome.result()));
	else
		return DeleteLhMembersOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLhMembersAsync(const DeleteLhMembersRequest& request, const DeleteLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLhMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLhMembersOutcomeCallable Dms_enterpriseClient::deleteLhMembersCallable(const DeleteLhMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLhMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteLhMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLogicDatabaseOutcome Dms_enterpriseClient::deleteLogicDatabase(const DeleteLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogicDatabaseOutcome(DeleteLogicDatabaseResult(outcome.result()));
	else
		return DeleteLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLogicDatabaseAsync(const DeleteLogicDatabaseRequest& request, const DeleteLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLogicDatabaseOutcomeCallable Dms_enterpriseClient::deleteLogicDatabaseCallable(const DeleteLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLogicTableRouteConfigOutcome Dms_enterpriseClient::deleteLogicTableRouteConfig(const DeleteLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogicTableRouteConfigOutcome(DeleteLogicTableRouteConfigResult(outcome.result()));
	else
		return DeleteLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLogicTableRouteConfigAsync(const DeleteLogicTableRouteConfigRequest& request, const DeleteLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::deleteLogicTableRouteConfigCallable(const DeleteLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteProxyOutcome Dms_enterpriseClient::deleteProxy(const DeleteProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProxyOutcome(DeleteProxyResult(outcome.result()));
	else
		return DeleteProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteProxyAsync(const DeleteProxyRequest& request, const DeleteProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteProxyOutcomeCallable Dms_enterpriseClient::deleteProxyCallable(const DeleteProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProxyOutcome()>>(
			[this, request]()
			{
			return this->deleteProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteProxyAccessOutcome Dms_enterpriseClient::deleteProxyAccess(const DeleteProxyAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProxyAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProxyAccessOutcome(DeleteProxyAccessResult(outcome.result()));
	else
		return DeleteProxyAccessOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteProxyAccessAsync(const DeleteProxyAccessRequest& request, const DeleteProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProxyAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteProxyAccessOutcomeCallable Dms_enterpriseClient::deleteProxyAccessCallable(const DeleteProxyAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProxyAccessOutcome()>>(
			[this, request]()
			{
			return this->deleteProxyAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteTaskFlowOutcome Dms_enterpriseClient::deleteTaskFlow(const DeleteTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskFlowOutcome(DeleteTaskFlowResult(outcome.result()));
	else
		return DeleteTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteTaskFlowAsync(const DeleteTaskFlowRequest& request, const DeleteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteTaskFlowOutcomeCallable Dms_enterpriseClient::deleteTaskFlowCallable(const DeleteTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteUserOutcome Dms_enterpriseClient::deleteUser(const DeleteUserRequest &request) const
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

void Dms_enterpriseClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteUserOutcomeCallable Dms_enterpriseClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DisableUserOutcome Dms_enterpriseClient::disableUser(const DisableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableUserOutcome(DisableUserResult(outcome.result()));
	else
		return DisableUserOutcome(outcome.error());
}

void Dms_enterpriseClient::disableUserAsync(const DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DisableUserOutcomeCallable Dms_enterpriseClient::disableUserCallable(const DisableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableUserOutcome()>>(
			[this, request]()
			{
			return this->disableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::EditLogicDatabaseOutcome Dms_enterpriseClient::editLogicDatabase(const EditLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditLogicDatabaseOutcome(EditLogicDatabaseResult(outcome.result()));
	else
		return EditLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::editLogicDatabaseAsync(const EditLogicDatabaseRequest& request, const EditLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::EditLogicDatabaseOutcomeCallable Dms_enterpriseClient::editLogicDatabaseCallable(const EditLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->editLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::EnableUserOutcome Dms_enterpriseClient::enableUser(const EnableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableUserOutcome(EnableUserResult(outcome.result()));
	else
		return EnableUserOutcome(outcome.error());
}

void Dms_enterpriseClient::enableUserAsync(const EnableUserRequest& request, const EnableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::EnableUserOutcomeCallable Dms_enterpriseClient::enableUserCallable(const EnableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableUserOutcome()>>(
			[this, request]()
			{
			return this->enableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteDataCorrectOutcome Dms_enterpriseClient::executeDataCorrect(const ExecuteDataCorrectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteDataCorrectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteDataCorrectOutcome(ExecuteDataCorrectResult(outcome.result()));
	else
		return ExecuteDataCorrectOutcome(outcome.error());
}

void Dms_enterpriseClient::executeDataCorrectAsync(const ExecuteDataCorrectRequest& request, const ExecuteDataCorrectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeDataCorrect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteDataCorrectOutcomeCallable Dms_enterpriseClient::executeDataCorrectCallable(const ExecuteDataCorrectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteDataCorrectOutcome()>>(
			[this, request]()
			{
			return this->executeDataCorrect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteDataExportOutcome Dms_enterpriseClient::executeDataExport(const ExecuteDataExportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteDataExportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteDataExportOutcome(ExecuteDataExportResult(outcome.result()));
	else
		return ExecuteDataExportOutcome(outcome.error());
}

void Dms_enterpriseClient::executeDataExportAsync(const ExecuteDataExportRequest& request, const ExecuteDataExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeDataExport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteDataExportOutcomeCallable Dms_enterpriseClient::executeDataExportCallable(const ExecuteDataExportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteDataExportOutcome()>>(
			[this, request]()
			{
			return this->executeDataExport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteScriptOutcome Dms_enterpriseClient::executeScript(const ExecuteScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteScriptOutcome(ExecuteScriptResult(outcome.result()));
	else
		return ExecuteScriptOutcome(outcome.error());
}

void Dms_enterpriseClient::executeScriptAsync(const ExecuteScriptRequest& request, const ExecuteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteScriptOutcomeCallable Dms_enterpriseClient::executeScriptCallable(const ExecuteScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteScriptOutcome()>>(
			[this, request]()
			{
			return this->executeScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteStructSyncOutcome Dms_enterpriseClient::executeStructSync(const ExecuteStructSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteStructSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteStructSyncOutcome(ExecuteStructSyncResult(outcome.result()));
	else
		return ExecuteStructSyncOutcome(outcome.error());
}

void Dms_enterpriseClient::executeStructSyncAsync(const ExecuteStructSyncRequest& request, const ExecuteStructSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeStructSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteStructSyncOutcomeCallable Dms_enterpriseClient::executeStructSyncCallable(const ExecuteStructSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteStructSyncOutcome()>>(
			[this, request]()
			{
			return this->executeStructSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetApprovalDetailOutcome Dms_enterpriseClient::getApprovalDetail(const GetApprovalDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApprovalDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApprovalDetailOutcome(GetApprovalDetailResult(outcome.result()));
	else
		return GetApprovalDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getApprovalDetailAsync(const GetApprovalDetailRequest& request, const GetApprovalDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApprovalDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetApprovalDetailOutcomeCallable Dms_enterpriseClient::getApprovalDetailCallable(const GetApprovalDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApprovalDetailOutcome()>>(
			[this, request]()
			{
			return this->getApprovalDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDBTaskSQLJobLogOutcome Dms_enterpriseClient::getDBTaskSQLJobLog(const GetDBTaskSQLJobLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBTaskSQLJobLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBTaskSQLJobLogOutcome(GetDBTaskSQLJobLogResult(outcome.result()));
	else
		return GetDBTaskSQLJobLogOutcome(outcome.error());
}

void Dms_enterpriseClient::getDBTaskSQLJobLogAsync(const GetDBTaskSQLJobLogRequest& request, const GetDBTaskSQLJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBTaskSQLJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDBTaskSQLJobLogOutcomeCallable Dms_enterpriseClient::getDBTaskSQLJobLogCallable(const GetDBTaskSQLJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBTaskSQLJobLogOutcome()>>(
			[this, request]()
			{
			return this->getDBTaskSQLJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDBTopologyOutcome Dms_enterpriseClient::getDBTopology(const GetDBTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBTopologyOutcome(GetDBTopologyResult(outcome.result()));
	else
		return GetDBTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getDBTopologyAsync(const GetDBTopologyRequest& request, const GetDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDBTopologyOutcomeCallable Dms_enterpriseClient::getDBTopologyCallable(const GetDBTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBTopologyOutcome()>>(
			[this, request]()
			{
			return this->getDBTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectBackupFilesOutcome Dms_enterpriseClient::getDataCorrectBackupFiles(const GetDataCorrectBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectBackupFilesOutcome(GetDataCorrectBackupFilesResult(outcome.result()));
	else
		return GetDataCorrectBackupFilesOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectBackupFilesAsync(const GetDataCorrectBackupFilesRequest& request, const GetDataCorrectBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectBackupFilesOutcomeCallable Dms_enterpriseClient::getDataCorrectBackupFilesCallable(const GetDataCorrectBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectOrderDetailOutcome Dms_enterpriseClient::getDataCorrectOrderDetail(const GetDataCorrectOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectOrderDetailOutcome(GetDataCorrectOrderDetailResult(outcome.result()));
	else
		return GetDataCorrectOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectOrderDetailAsync(const GetDataCorrectOrderDetailRequest& request, const GetDataCorrectOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectOrderDetailOutcomeCallable Dms_enterpriseClient::getDataCorrectOrderDetailCallable(const GetDataCorrectOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectSQLFileOutcome Dms_enterpriseClient::getDataCorrectSQLFile(const GetDataCorrectSQLFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectSQLFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectSQLFileOutcome(GetDataCorrectSQLFileResult(outcome.result()));
	else
		return GetDataCorrectSQLFileOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectSQLFileAsync(const GetDataCorrectSQLFileRequest& request, const GetDataCorrectSQLFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectSQLFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectSQLFileOutcomeCallable Dms_enterpriseClient::getDataCorrectSQLFileCallable(const GetDataCorrectSQLFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectSQLFileOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectSQLFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectTaskDetailOutcome Dms_enterpriseClient::getDataCorrectTaskDetail(const GetDataCorrectTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectTaskDetailOutcome(GetDataCorrectTaskDetailResult(outcome.result()));
	else
		return GetDataCorrectTaskDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectTaskDetailAsync(const GetDataCorrectTaskDetailRequest& request, const GetDataCorrectTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectTaskDetailOutcomeCallable Dms_enterpriseClient::getDataCorrectTaskDetailCallable(const GetDataCorrectTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCronClearTaskDetailListOutcome Dms_enterpriseClient::getDataCronClearTaskDetailList(const GetDataCronClearTaskDetailListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCronClearTaskDetailListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCronClearTaskDetailListOutcome(GetDataCronClearTaskDetailListResult(outcome.result()));
	else
		return GetDataCronClearTaskDetailListOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCronClearTaskDetailListAsync(const GetDataCronClearTaskDetailListRequest& request, const GetDataCronClearTaskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCronClearTaskDetailList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCronClearTaskDetailListOutcomeCallable Dms_enterpriseClient::getDataCronClearTaskDetailListCallable(const GetDataCronClearTaskDetailListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCronClearTaskDetailListOutcome()>>(
			[this, request]()
			{
			return this->getDataCronClearTaskDetailList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataExportDownloadURLOutcome Dms_enterpriseClient::getDataExportDownloadURL(const GetDataExportDownloadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataExportDownloadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataExportDownloadURLOutcome(GetDataExportDownloadURLResult(outcome.result()));
	else
		return GetDataExportDownloadURLOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataExportDownloadURLAsync(const GetDataExportDownloadURLRequest& request, const GetDataExportDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataExportDownloadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataExportDownloadURLOutcomeCallable Dms_enterpriseClient::getDataExportDownloadURLCallable(const GetDataExportDownloadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataExportDownloadURLOutcome()>>(
			[this, request]()
			{
			return this->getDataExportDownloadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataExportOrderDetailOutcome Dms_enterpriseClient::getDataExportOrderDetail(const GetDataExportOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataExportOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataExportOrderDetailOutcome(GetDataExportOrderDetailResult(outcome.result()));
	else
		return GetDataExportOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataExportOrderDetailAsync(const GetDataExportOrderDetailRequest& request, const GetDataExportOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataExportOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataExportOrderDetailOutcomeCallable Dms_enterpriseClient::getDataExportOrderDetailCallable(const GetDataExportOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataExportOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataExportOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDatabaseOutcome Dms_enterpriseClient::getDatabase(const GetDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseOutcome(GetDatabaseResult(outcome.result()));
	else
		return GetDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDatabaseOutcomeCallable Dms_enterpriseClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetInstanceOutcome Dms_enterpriseClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetInstanceOutcomeCallable Dms_enterpriseClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetLhSpaceByNameOutcome Dms_enterpriseClient::getLhSpaceByName(const GetLhSpaceByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLhSpaceByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLhSpaceByNameOutcome(GetLhSpaceByNameResult(outcome.result()));
	else
		return GetLhSpaceByNameOutcome(outcome.error());
}

void Dms_enterpriseClient::getLhSpaceByNameAsync(const GetLhSpaceByNameRequest& request, const GetLhSpaceByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLhSpaceByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetLhSpaceByNameOutcomeCallable Dms_enterpriseClient::getLhSpaceByNameCallable(const GetLhSpaceByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLhSpaceByNameOutcome()>>(
			[this, request]()
			{
			return this->getLhSpaceByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetLogicDatabaseOutcome Dms_enterpriseClient::getLogicDatabase(const GetLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLogicDatabaseOutcome(GetLogicDatabaseResult(outcome.result()));
	else
		return GetLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getLogicDatabaseAsync(const GetLogicDatabaseRequest& request, const GetLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetLogicDatabaseOutcomeCallable Dms_enterpriseClient::getLogicDatabaseCallable(const GetLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetMetaTableColumnOutcome Dms_enterpriseClient::getMetaTableColumn(const GetMetaTableColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableColumnOutcome(GetMetaTableColumnResult(outcome.result()));
	else
		return GetMetaTableColumnOutcome(outcome.error());
}

void Dms_enterpriseClient::getMetaTableColumnAsync(const GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetMetaTableColumnOutcomeCallable Dms_enterpriseClient::getMetaTableColumnCallable(const GetMetaTableColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableColumnOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetMetaTableDetailInfoOutcome Dms_enterpriseClient::getMetaTableDetailInfo(const GetMetaTableDetailInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableDetailInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableDetailInfoOutcome(GetMetaTableDetailInfoResult(outcome.result()));
	else
		return GetMetaTableDetailInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::getMetaTableDetailInfoAsync(const GetMetaTableDetailInfoRequest& request, const GetMetaTableDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableDetailInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetMetaTableDetailInfoOutcomeCallable Dms_enterpriseClient::getMetaTableDetailInfoCallable(const GetMetaTableDetailInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableDetailInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableDetailInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOpLogOutcome Dms_enterpriseClient::getOpLog(const GetOpLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpLogOutcome(GetOpLogResult(outcome.result()));
	else
		return GetOpLogOutcome(outcome.error());
}

void Dms_enterpriseClient::getOpLogAsync(const GetOpLogRequest& request, const GetOpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOpLogOutcomeCallable Dms_enterpriseClient::getOpLogCallable(const GetOpLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpLogOutcome()>>(
			[this, request]()
			{
			return this->getOpLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOrderBaseInfoOutcome Dms_enterpriseClient::getOrderBaseInfo(const GetOrderBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrderBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrderBaseInfoOutcome(GetOrderBaseInfoResult(outcome.result()));
	else
		return GetOrderBaseInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::getOrderBaseInfoAsync(const GetOrderBaseInfoRequest& request, const GetOrderBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrderBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOrderBaseInfoOutcomeCallable Dms_enterpriseClient::getOrderBaseInfoCallable(const GetOrderBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrderBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->getOrderBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOwnerApplyOrderDetailOutcome Dms_enterpriseClient::getOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOwnerApplyOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOwnerApplyOrderDetailOutcome(GetOwnerApplyOrderDetailResult(outcome.result()));
	else
		return GetOwnerApplyOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getOwnerApplyOrderDetailAsync(const GetOwnerApplyOrderDetailRequest& request, const GetOwnerApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOwnerApplyOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOwnerApplyOrderDetailOutcomeCallable Dms_enterpriseClient::getOwnerApplyOrderDetailCallable(const GetOwnerApplyOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOwnerApplyOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getOwnerApplyOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetPermApplyOrderDetailOutcome Dms_enterpriseClient::getPermApplyOrderDetail(const GetPermApplyOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPermApplyOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPermApplyOrderDetailOutcome(GetPermApplyOrderDetailResult(outcome.result()));
	else
		return GetPermApplyOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getPermApplyOrderDetailAsync(const GetPermApplyOrderDetailRequest& request, const GetPermApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPermApplyOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetPermApplyOrderDetailOutcomeCallable Dms_enterpriseClient::getPermApplyOrderDetailCallable(const GetPermApplyOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPermApplyOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getPermApplyOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetPhysicalDatabaseOutcome Dms_enterpriseClient::getPhysicalDatabase(const GetPhysicalDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPhysicalDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPhysicalDatabaseOutcome(GetPhysicalDatabaseResult(outcome.result()));
	else
		return GetPhysicalDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getPhysicalDatabaseAsync(const GetPhysicalDatabaseRequest& request, const GetPhysicalDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPhysicalDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetPhysicalDatabaseOutcomeCallable Dms_enterpriseClient::getPhysicalDatabaseCallable(const GetPhysicalDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPhysicalDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getPhysicalDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetProxyOutcome Dms_enterpriseClient::getProxy(const GetProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProxyOutcome(GetProxyResult(outcome.result()));
	else
		return GetProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::getProxyAsync(const GetProxyRequest& request, const GetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetProxyOutcomeCallable Dms_enterpriseClient::getProxyCallable(const GetProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProxyOutcome()>>(
			[this, request]()
			{
			return this->getProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetSQLReviewCheckResultStatusOutcome Dms_enterpriseClient::getSQLReviewCheckResultStatus(const GetSQLReviewCheckResultStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSQLReviewCheckResultStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSQLReviewCheckResultStatusOutcome(GetSQLReviewCheckResultStatusResult(outcome.result()));
	else
		return GetSQLReviewCheckResultStatusOutcome(outcome.error());
}

void Dms_enterpriseClient::getSQLReviewCheckResultStatusAsync(const GetSQLReviewCheckResultStatusRequest& request, const GetSQLReviewCheckResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSQLReviewCheckResultStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetSQLReviewCheckResultStatusOutcomeCallable Dms_enterpriseClient::getSQLReviewCheckResultStatusCallable(const GetSQLReviewCheckResultStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSQLReviewCheckResultStatusOutcome()>>(
			[this, request]()
			{
			return this->getSQLReviewCheckResultStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetSQLReviewOptimizeDetailOutcome Dms_enterpriseClient::getSQLReviewOptimizeDetail(const GetSQLReviewOptimizeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSQLReviewOptimizeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSQLReviewOptimizeDetailOutcome(GetSQLReviewOptimizeDetailResult(outcome.result()));
	else
		return GetSQLReviewOptimizeDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getSQLReviewOptimizeDetailAsync(const GetSQLReviewOptimizeDetailRequest& request, const GetSQLReviewOptimizeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSQLReviewOptimizeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetSQLReviewOptimizeDetailOutcomeCallable Dms_enterpriseClient::getSQLReviewOptimizeDetailCallable(const GetSQLReviewOptimizeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSQLReviewOptimizeDetailOutcome()>>(
			[this, request]()
			{
			return this->getSQLReviewOptimizeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncExecSqlDetailOutcome Dms_enterpriseClient::getStructSyncExecSqlDetail(const GetStructSyncExecSqlDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncExecSqlDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncExecSqlDetailOutcome(GetStructSyncExecSqlDetailResult(outcome.result()));
	else
		return GetStructSyncExecSqlDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncExecSqlDetailAsync(const GetStructSyncExecSqlDetailRequest& request, const GetStructSyncExecSqlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncExecSqlDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncExecSqlDetailOutcomeCallable Dms_enterpriseClient::getStructSyncExecSqlDetailCallable(const GetStructSyncExecSqlDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncExecSqlDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncExecSqlDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncJobAnalyzeResultOutcome Dms_enterpriseClient::getStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncJobAnalyzeResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncJobAnalyzeResultOutcome(GetStructSyncJobAnalyzeResultResult(outcome.result()));
	else
		return GetStructSyncJobAnalyzeResultOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncJobAnalyzeResultAsync(const GetStructSyncJobAnalyzeResultRequest& request, const GetStructSyncJobAnalyzeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncJobAnalyzeResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncJobAnalyzeResultOutcomeCallable Dms_enterpriseClient::getStructSyncJobAnalyzeResultCallable(const GetStructSyncJobAnalyzeResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncJobAnalyzeResultOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncJobAnalyzeResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncJobDetailOutcome Dms_enterpriseClient::getStructSyncJobDetail(const GetStructSyncJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncJobDetailOutcome(GetStructSyncJobDetailResult(outcome.result()));
	else
		return GetStructSyncJobDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncJobDetailAsync(const GetStructSyncJobDetailRequest& request, const GetStructSyncJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncJobDetailOutcomeCallable Dms_enterpriseClient::getStructSyncJobDetailCallable(const GetStructSyncJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncJobDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncOrderDetailOutcome Dms_enterpriseClient::getStructSyncOrderDetail(const GetStructSyncOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncOrderDetailOutcome(GetStructSyncOrderDetailResult(outcome.result()));
	else
		return GetStructSyncOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncOrderDetailAsync(const GetStructSyncOrderDetailRequest& request, const GetStructSyncOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncOrderDetailOutcomeCallable Dms_enterpriseClient::getStructSyncOrderDetailCallable(const GetStructSyncOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableDBTopologyOutcome Dms_enterpriseClient::getTableDBTopology(const GetTableDBTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableDBTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableDBTopologyOutcome(GetTableDBTopologyResult(outcome.result()));
	else
		return GetTableDBTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableDBTopologyAsync(const GetTableDBTopologyRequest& request, const GetTableDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableDBTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableDBTopologyOutcomeCallable Dms_enterpriseClient::getTableDBTopologyCallable(const GetTableDBTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableDBTopologyOutcome()>>(
			[this, request]()
			{
			return this->getTableDBTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableTopologyOutcome Dms_enterpriseClient::getTableTopology(const GetTableTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableTopologyOutcome(GetTableTopologyResult(outcome.result()));
	else
		return GetTableTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableTopologyAsync(const GetTableTopologyRequest& request, const GetTableTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableTopologyOutcomeCallable Dms_enterpriseClient::getTableTopologyCallable(const GetTableTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableTopologyOutcome()>>(
			[this, request]()
			{
			return this->getTableTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTaskInstanceRelationOutcome Dms_enterpriseClient::getTaskInstanceRelation(const GetTaskInstanceRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskInstanceRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskInstanceRelationOutcome(GetTaskInstanceRelationResult(outcome.result()));
	else
		return GetTaskInstanceRelationOutcome(outcome.error());
}

void Dms_enterpriseClient::getTaskInstanceRelationAsync(const GetTaskInstanceRelationRequest& request, const GetTaskInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskInstanceRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTaskInstanceRelationOutcomeCallable Dms_enterpriseClient::getTaskInstanceRelationCallable(const GetTaskInstanceRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskInstanceRelationOutcome()>>(
			[this, request]()
			{
			return this->getTaskInstanceRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserOutcome Dms_enterpriseClient::getUser(const GetUserRequest &request) const
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

void Dms_enterpriseClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserOutcomeCallable Dms_enterpriseClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserActiveTenantOutcome Dms_enterpriseClient::getUserActiveTenant(const GetUserActiveTenantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserActiveTenantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserActiveTenantOutcome(GetUserActiveTenantResult(outcome.result()));
	else
		return GetUserActiveTenantOutcome(outcome.error());
}

void Dms_enterpriseClient::getUserActiveTenantAsync(const GetUserActiveTenantRequest& request, const GetUserActiveTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserActiveTenant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserActiveTenantOutcomeCallable Dms_enterpriseClient::getUserActiveTenantCallable(const GetUserActiveTenantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserActiveTenantOutcome()>>(
			[this, request]()
			{
			return this->getUserActiveTenant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserUploadFileJobOutcome Dms_enterpriseClient::getUserUploadFileJob(const GetUserUploadFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserUploadFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserUploadFileJobOutcome(GetUserUploadFileJobResult(outcome.result()));
	else
		return GetUserUploadFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::getUserUploadFileJobAsync(const GetUserUploadFileJobRequest& request, const GetUserUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserUploadFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserUploadFileJobOutcomeCallable Dms_enterpriseClient::getUserUploadFileJobCallable(const GetUserUploadFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserUploadFileJobOutcome()>>(
			[this, request]()
			{
			return this->getUserUploadFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GrantUserPermissionOutcome Dms_enterpriseClient::grantUserPermission(const GrantUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantUserPermissionOutcome(GrantUserPermissionResult(outcome.result()));
	else
		return GrantUserPermissionOutcome(outcome.error());
}

void Dms_enterpriseClient::grantUserPermissionAsync(const GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GrantUserPermissionOutcomeCallable Dms_enterpriseClient::grantUserPermissionCallable(const GrantUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::InspectProxyAccessSecretOutcome Dms_enterpriseClient::inspectProxyAccessSecret(const InspectProxyAccessSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InspectProxyAccessSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InspectProxyAccessSecretOutcome(InspectProxyAccessSecretResult(outcome.result()));
	else
		return InspectProxyAccessSecretOutcome(outcome.error());
}

void Dms_enterpriseClient::inspectProxyAccessSecretAsync(const InspectProxyAccessSecretRequest& request, const InspectProxyAccessSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inspectProxyAccessSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::InspectProxyAccessSecretOutcomeCallable Dms_enterpriseClient::inspectProxyAccessSecretCallable(const InspectProxyAccessSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InspectProxyAccessSecretOutcome()>>(
			[this, request]()
			{
			return this->inspectProxyAccessSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListColumnsOutcome Dms_enterpriseClient::listColumns(const ListColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListColumnsOutcome(ListColumnsResult(outcome.result()));
	else
		return ListColumnsOutcome(outcome.error());
}

void Dms_enterpriseClient::listColumnsAsync(const ListColumnsRequest& request, const ListColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListColumnsOutcomeCallable Dms_enterpriseClient::listColumnsCallable(const ListColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListColumnsOutcome()>>(
			[this, request]()
			{
			return this->listColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDAGVersionsOutcome Dms_enterpriseClient::listDAGVersions(const ListDAGVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDAGVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDAGVersionsOutcome(ListDAGVersionsResult(outcome.result()));
	else
		return ListDAGVersionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDAGVersionsAsync(const ListDAGVersionsRequest& request, const ListDAGVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDAGVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDAGVersionsOutcomeCallable Dms_enterpriseClient::listDAGVersionsCallable(const ListDAGVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDAGVersionsOutcome()>>(
			[this, request]()
			{
			return this->listDAGVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDBTaskSQLJobOutcome Dms_enterpriseClient::listDBTaskSQLJob(const ListDBTaskSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDBTaskSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDBTaskSQLJobOutcome(ListDBTaskSQLJobResult(outcome.result()));
	else
		return ListDBTaskSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::listDBTaskSQLJobAsync(const ListDBTaskSQLJobRequest& request, const ListDBTaskSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDBTaskSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDBTaskSQLJobOutcomeCallable Dms_enterpriseClient::listDBTaskSQLJobCallable(const ListDBTaskSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDBTaskSQLJobOutcome()>>(
			[this, request]()
			{
			return this->listDBTaskSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDBTaskSQLJobDetailOutcome Dms_enterpriseClient::listDBTaskSQLJobDetail(const ListDBTaskSQLJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDBTaskSQLJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDBTaskSQLJobDetailOutcome(ListDBTaskSQLJobDetailResult(outcome.result()));
	else
		return ListDBTaskSQLJobDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::listDBTaskSQLJobDetailAsync(const ListDBTaskSQLJobDetailRequest& request, const ListDBTaskSQLJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDBTaskSQLJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDBTaskSQLJobDetailOutcomeCallable Dms_enterpriseClient::listDBTaskSQLJobDetailCallable(const ListDBTaskSQLJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDBTaskSQLJobDetailOutcome()>>(
			[this, request]()
			{
			return this->listDBTaskSQLJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDDLPublishRecordsOutcome Dms_enterpriseClient::listDDLPublishRecords(const ListDDLPublishRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDDLPublishRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDDLPublishRecordsOutcome(ListDDLPublishRecordsResult(outcome.result()));
	else
		return ListDDLPublishRecordsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDDLPublishRecordsAsync(const ListDDLPublishRecordsRequest& request, const ListDDLPublishRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDDLPublishRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDDLPublishRecordsOutcomeCallable Dms_enterpriseClient::listDDLPublishRecordsCallable(const ListDDLPublishRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDDLPublishRecordsOutcome()>>(
			[this, request]()
			{
			return this->listDDLPublishRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataCorrectPreCheckDBOutcome Dms_enterpriseClient::listDataCorrectPreCheckDB(const ListDataCorrectPreCheckDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataCorrectPreCheckDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataCorrectPreCheckDBOutcome(ListDataCorrectPreCheckDBResult(outcome.result()));
	else
		return ListDataCorrectPreCheckDBOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataCorrectPreCheckDBAsync(const ListDataCorrectPreCheckDBRequest& request, const ListDataCorrectPreCheckDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataCorrectPreCheckDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataCorrectPreCheckDBOutcomeCallable Dms_enterpriseClient::listDataCorrectPreCheckDBCallable(const ListDataCorrectPreCheckDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataCorrectPreCheckDBOutcome()>>(
			[this, request]()
			{
			return this->listDataCorrectPreCheckDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataCorrectPreCheckSQLOutcome Dms_enterpriseClient::listDataCorrectPreCheckSQL(const ListDataCorrectPreCheckSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataCorrectPreCheckSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataCorrectPreCheckSQLOutcome(ListDataCorrectPreCheckSQLResult(outcome.result()));
	else
		return ListDataCorrectPreCheckSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataCorrectPreCheckSQLAsync(const ListDataCorrectPreCheckSQLRequest& request, const ListDataCorrectPreCheckSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataCorrectPreCheckSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataCorrectPreCheckSQLOutcomeCallable Dms_enterpriseClient::listDataCorrectPreCheckSQLCallable(const ListDataCorrectPreCheckSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataCorrectPreCheckSQLOutcome()>>(
			[this, request]()
			{
			return this->listDataCorrectPreCheckSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDatabaseUserPermssionsOutcome Dms_enterpriseClient::listDatabaseUserPermssions(const ListDatabaseUserPermssionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabaseUserPermssionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabaseUserPermssionsOutcome(ListDatabaseUserPermssionsResult(outcome.result()));
	else
		return ListDatabaseUserPermssionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDatabaseUserPermssionsAsync(const ListDatabaseUserPermssionsRequest& request, const ListDatabaseUserPermssionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabaseUserPermssions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDatabaseUserPermssionsOutcomeCallable Dms_enterpriseClient::listDatabaseUserPermssionsCallable(const ListDatabaseUserPermssionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabaseUserPermssionsOutcome()>>(
			[this, request]()
			{
			return this->listDatabaseUserPermssions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDatabasesOutcome Dms_enterpriseClient::listDatabases(const ListDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabasesOutcome(ListDatabasesResult(outcome.result()));
	else
		return ListDatabasesOutcome(outcome.error());
}

void Dms_enterpriseClient::listDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDatabasesOutcomeCallable Dms_enterpriseClient::listDatabasesCallable(const ListDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListIndexesOutcome Dms_enterpriseClient::listIndexes(const ListIndexesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIndexesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIndexesOutcome(ListIndexesResult(outcome.result()));
	else
		return ListIndexesOutcome(outcome.error());
}

void Dms_enterpriseClient::listIndexesAsync(const ListIndexesRequest& request, const ListIndexesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIndexes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListIndexesOutcomeCallable Dms_enterpriseClient::listIndexesCallable(const ListIndexesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIndexesOutcome()>>(
			[this, request]()
			{
			return this->listIndexes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstanceLoginAuditLogOutcome Dms_enterpriseClient::listInstanceLoginAuditLog(const ListInstanceLoginAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceLoginAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceLoginAuditLogOutcome(ListInstanceLoginAuditLogResult(outcome.result()));
	else
		return ListInstanceLoginAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstanceLoginAuditLogAsync(const ListInstanceLoginAuditLogRequest& request, const ListInstanceLoginAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceLoginAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstanceLoginAuditLogOutcomeCallable Dms_enterpriseClient::listInstanceLoginAuditLogCallable(const ListInstanceLoginAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceLoginAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listInstanceLoginAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstanceUserPermissionsOutcome Dms_enterpriseClient::listInstanceUserPermissions(const ListInstanceUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceUserPermissionsOutcome(ListInstanceUserPermissionsResult(outcome.result()));
	else
		return ListInstanceUserPermissionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstanceUserPermissionsAsync(const ListInstanceUserPermissionsRequest& request, const ListInstanceUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstanceUserPermissionsOutcomeCallable Dms_enterpriseClient::listInstanceUserPermissionsCallable(const ListInstanceUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listInstanceUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstancesOutcome Dms_enterpriseClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstancesOutcomeCallable Dms_enterpriseClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLhTaskFlowAndScenarioOutcome Dms_enterpriseClient::listLhTaskFlowAndScenario(const ListLhTaskFlowAndScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLhTaskFlowAndScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLhTaskFlowAndScenarioOutcome(ListLhTaskFlowAndScenarioResult(outcome.result()));
	else
		return ListLhTaskFlowAndScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::listLhTaskFlowAndScenarioAsync(const ListLhTaskFlowAndScenarioRequest& request, const ListLhTaskFlowAndScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLhTaskFlowAndScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLhTaskFlowAndScenarioOutcomeCallable Dms_enterpriseClient::listLhTaskFlowAndScenarioCallable(const ListLhTaskFlowAndScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLhTaskFlowAndScenarioOutcome()>>(
			[this, request]()
			{
			return this->listLhTaskFlowAndScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicDatabasesOutcome Dms_enterpriseClient::listLogicDatabases(const ListLogicDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicDatabasesOutcome(ListLogicDatabasesResult(outcome.result()));
	else
		return ListLogicDatabasesOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicDatabasesAsync(const ListLogicDatabasesRequest& request, const ListLogicDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicDatabasesOutcomeCallable Dms_enterpriseClient::listLogicDatabasesCallable(const ListLogicDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listLogicDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicTableRouteConfigOutcome Dms_enterpriseClient::listLogicTableRouteConfig(const ListLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicTableRouteConfigOutcome(ListLogicTableRouteConfigResult(outcome.result()));
	else
		return ListLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicTableRouteConfigAsync(const ListLogicTableRouteConfigRequest& request, const ListLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::listLogicTableRouteConfigCallable(const ListLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->listLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicTablesOutcome Dms_enterpriseClient::listLogicTables(const ListLogicTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicTablesOutcome(ListLogicTablesResult(outcome.result()));
	else
		return ListLogicTablesOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicTablesAsync(const ListLogicTablesRequest& request, const ListLogicTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicTablesOutcomeCallable Dms_enterpriseClient::listLogicTablesCallable(const ListLogicTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicTablesOutcome()>>(
			[this, request]()
			{
			return this->listLogicTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListOrdersOutcome Dms_enterpriseClient::listOrders(const ListOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrdersOutcome(ListOrdersResult(outcome.result()));
	else
		return ListOrdersOutcome(outcome.error());
}

void Dms_enterpriseClient::listOrdersAsync(const ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListOrdersOutcomeCallable Dms_enterpriseClient::listOrdersCallable(const ListOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrdersOutcome()>>(
			[this, request]()
			{
			return this->listOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxiesOutcome Dms_enterpriseClient::listProxies(const ListProxiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxiesOutcome(ListProxiesResult(outcome.result()));
	else
		return ListProxiesOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxiesAsync(const ListProxiesRequest& request, const ListProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxiesOutcomeCallable Dms_enterpriseClient::listProxiesCallable(const ListProxiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxiesOutcome()>>(
			[this, request]()
			{
			return this->listProxies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxyAccessesOutcome Dms_enterpriseClient::listProxyAccesses(const ListProxyAccessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxyAccessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxyAccessesOutcome(ListProxyAccessesResult(outcome.result()));
	else
		return ListProxyAccessesOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxyAccessesAsync(const ListProxyAccessesRequest& request, const ListProxyAccessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxyAccesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxyAccessesOutcomeCallable Dms_enterpriseClient::listProxyAccessesCallable(const ListProxyAccessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxyAccessesOutcome()>>(
			[this, request]()
			{
			return this->listProxyAccesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxySQLExecAuditLogOutcome Dms_enterpriseClient::listProxySQLExecAuditLog(const ListProxySQLExecAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxySQLExecAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxySQLExecAuditLogOutcome(ListProxySQLExecAuditLogResult(outcome.result()));
	else
		return ListProxySQLExecAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxySQLExecAuditLogAsync(const ListProxySQLExecAuditLogRequest& request, const ListProxySQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxySQLExecAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxySQLExecAuditLogOutcomeCallable Dms_enterpriseClient::listProxySQLExecAuditLogCallable(const ListProxySQLExecAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxySQLExecAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listProxySQLExecAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSQLExecAuditLogOutcome Dms_enterpriseClient::listSQLExecAuditLog(const ListSQLExecAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSQLExecAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSQLExecAuditLogOutcome(ListSQLExecAuditLogResult(outcome.result()));
	else
		return ListSQLExecAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listSQLExecAuditLogAsync(const ListSQLExecAuditLogRequest& request, const ListSQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSQLExecAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSQLExecAuditLogOutcomeCallable Dms_enterpriseClient::listSQLExecAuditLogCallable(const ListSQLExecAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSQLExecAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listSQLExecAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSQLReviewOriginSQLOutcome Dms_enterpriseClient::listSQLReviewOriginSQL(const ListSQLReviewOriginSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSQLReviewOriginSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSQLReviewOriginSQLOutcome(ListSQLReviewOriginSQLResult(outcome.result()));
	else
		return ListSQLReviewOriginSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::listSQLReviewOriginSQLAsync(const ListSQLReviewOriginSQLRequest& request, const ListSQLReviewOriginSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSQLReviewOriginSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSQLReviewOriginSQLOutcomeCallable Dms_enterpriseClient::listSQLReviewOriginSQLCallable(const ListSQLReviewOriginSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSQLReviewOriginSQLOutcome()>>(
			[this, request]()
			{
			return this->listSQLReviewOriginSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveColumnsOutcome Dms_enterpriseClient::listSensitiveColumns(const ListSensitiveColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveColumnsOutcome(ListSensitiveColumnsResult(outcome.result()));
	else
		return ListSensitiveColumnsOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveColumnsAsync(const ListSensitiveColumnsRequest& request, const ListSensitiveColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveColumnsOutcomeCallable Dms_enterpriseClient::listSensitiveColumnsCallable(const ListSensitiveColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveColumnsOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveColumnsDetailOutcome Dms_enterpriseClient::listSensitiveColumnsDetail(const ListSensitiveColumnsDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveColumnsDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveColumnsDetailOutcome(ListSensitiveColumnsDetailResult(outcome.result()));
	else
		return ListSensitiveColumnsDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveColumnsDetailAsync(const ListSensitiveColumnsDetailRequest& request, const ListSensitiveColumnsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveColumnsDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveColumnsDetailOutcomeCallable Dms_enterpriseClient::listSensitiveColumnsDetailCallable(const ListSensitiveColumnsDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveColumnsDetailOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveColumnsDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListStandardGroupsOutcome Dms_enterpriseClient::listStandardGroups(const ListStandardGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStandardGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStandardGroupsOutcome(ListStandardGroupsResult(outcome.result()));
	else
		return ListStandardGroupsOutcome(outcome.error());
}

void Dms_enterpriseClient::listStandardGroupsAsync(const ListStandardGroupsRequest& request, const ListStandardGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStandardGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListStandardGroupsOutcomeCallable Dms_enterpriseClient::listStandardGroupsCallable(const ListStandardGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStandardGroupsOutcome()>>(
			[this, request]()
			{
			return this->listStandardGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTablesOutcome Dms_enterpriseClient::listTables(const ListTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTablesOutcome(ListTablesResult(outcome.result()));
	else
		return ListTablesOutcome(outcome.error());
}

void Dms_enterpriseClient::listTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTablesOutcomeCallable Dms_enterpriseClient::listTablesCallable(const ListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablesOutcome()>>(
			[this, request]()
			{
			return this->listTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowOutcome Dms_enterpriseClient::listTaskFlow(const ListTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowOutcome(ListTaskFlowResult(outcome.result()));
	else
		return ListTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowAsync(const ListTaskFlowRequest& request, const ListTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowOutcomeCallable Dms_enterpriseClient::listTaskFlowCallable(const ListTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowInstanceOutcome Dms_enterpriseClient::listTaskFlowInstance(const ListTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowInstanceOutcome(ListTaskFlowInstanceResult(outcome.result()));
	else
		return ListTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowInstanceAsync(const ListTaskFlowInstanceRequest& request, const ListTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::listTaskFlowInstanceCallable(const ListTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUserPermissionsOutcome Dms_enterpriseClient::listUserPermissions(const ListUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserPermissionsOutcome(ListUserPermissionsResult(outcome.result()));
	else
		return ListUserPermissionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listUserPermissionsAsync(const ListUserPermissionsRequest& request, const ListUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUserPermissionsOutcomeCallable Dms_enterpriseClient::listUserPermissionsCallable(const ListUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUserTenantsOutcome Dms_enterpriseClient::listUserTenants(const ListUserTenantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserTenantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserTenantsOutcome(ListUserTenantsResult(outcome.result()));
	else
		return ListUserTenantsOutcome(outcome.error());
}

void Dms_enterpriseClient::listUserTenantsAsync(const ListUserTenantsRequest& request, const ListUserTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserTenants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUserTenantsOutcomeCallable Dms_enterpriseClient::listUserTenantsCallable(const ListUserTenantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserTenantsOutcome()>>(
			[this, request]()
			{
			return this->listUserTenants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUsersOutcome Dms_enterpriseClient::listUsers(const ListUsersRequest &request) const
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

void Dms_enterpriseClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUsersOutcomeCallable Dms_enterpriseClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListWorkFlowNodesOutcome Dms_enterpriseClient::listWorkFlowNodes(const ListWorkFlowNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkFlowNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkFlowNodesOutcome(ListWorkFlowNodesResult(outcome.result()));
	else
		return ListWorkFlowNodesOutcome(outcome.error());
}

void Dms_enterpriseClient::listWorkFlowNodesAsync(const ListWorkFlowNodesRequest& request, const ListWorkFlowNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkFlowNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListWorkFlowNodesOutcomeCallable Dms_enterpriseClient::listWorkFlowNodesCallable(const ListWorkFlowNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkFlowNodesOutcome()>>(
			[this, request]()
			{
			return this->listWorkFlowNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListWorkFlowTemplatesOutcome Dms_enterpriseClient::listWorkFlowTemplates(const ListWorkFlowTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkFlowTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkFlowTemplatesOutcome(ListWorkFlowTemplatesResult(outcome.result()));
	else
		return ListWorkFlowTemplatesOutcome(outcome.error());
}

void Dms_enterpriseClient::listWorkFlowTemplatesAsync(const ListWorkFlowTemplatesRequest& request, const ListWorkFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkFlowTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListWorkFlowTemplatesOutcomeCallable Dms_enterpriseClient::listWorkFlowTemplatesCallable(const ListWorkFlowTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkFlowTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listWorkFlowTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ModifyDataCorrectExecSQLOutcome Dms_enterpriseClient::modifyDataCorrectExecSQL(const ModifyDataCorrectExecSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataCorrectExecSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataCorrectExecSQLOutcome(ModifyDataCorrectExecSQLResult(outcome.result()));
	else
		return ModifyDataCorrectExecSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::modifyDataCorrectExecSQLAsync(const ModifyDataCorrectExecSQLRequest& request, const ModifyDataCorrectExecSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataCorrectExecSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ModifyDataCorrectExecSQLOutcomeCallable Dms_enterpriseClient::modifyDataCorrectExecSQLCallable(const ModifyDataCorrectExecSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataCorrectExecSQLOutcome()>>(
			[this, request]()
			{
			return this->modifyDataCorrectExecSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::OfflineTaskFlowOutcome Dms_enterpriseClient::offlineTaskFlow(const OfflineTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineTaskFlowOutcome(OfflineTaskFlowResult(outcome.result()));
	else
		return OfflineTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::offlineTaskFlowAsync(const OfflineTaskFlowRequest& request, const OfflineTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::OfflineTaskFlowOutcomeCallable Dms_enterpriseClient::offlineTaskFlowCallable(const OfflineTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->offlineTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::PauseDataCorrectSQLJobOutcome Dms_enterpriseClient::pauseDataCorrectSQLJob(const PauseDataCorrectSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseDataCorrectSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseDataCorrectSQLJobOutcome(PauseDataCorrectSQLJobResult(outcome.result()));
	else
		return PauseDataCorrectSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::pauseDataCorrectSQLJobAsync(const PauseDataCorrectSQLJobRequest& request, const PauseDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseDataCorrectSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::PauseDataCorrectSQLJobOutcomeCallable Dms_enterpriseClient::pauseDataCorrectSQLJobCallable(const PauseDataCorrectSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseDataCorrectSQLJobOutcome()>>(
			[this, request]()
			{
			return this->pauseDataCorrectSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ReDeployLhDagVersionOutcome Dms_enterpriseClient::reDeployLhDagVersion(const ReDeployLhDagVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReDeployLhDagVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReDeployLhDagVersionOutcome(ReDeployLhDagVersionResult(outcome.result()));
	else
		return ReDeployLhDagVersionOutcome(outcome.error());
}

void Dms_enterpriseClient::reDeployLhDagVersionAsync(const ReDeployLhDagVersionRequest& request, const ReDeployLhDagVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reDeployLhDagVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ReDeployLhDagVersionOutcomeCallable Dms_enterpriseClient::reDeployLhDagVersionCallable(const ReDeployLhDagVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReDeployLhDagVersionOutcome()>>(
			[this, request]()
			{
			return this->reDeployLhDagVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RegisterInstanceOutcome Dms_enterpriseClient::registerInstance(const RegisterInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterInstanceOutcome(RegisterInstanceResult(outcome.result()));
	else
		return RegisterInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::registerInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RegisterInstanceOutcomeCallable Dms_enterpriseClient::registerInstanceCallable(const RegisterInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterInstanceOutcome()>>(
			[this, request]()
			{
			return this->registerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RegisterUserOutcome Dms_enterpriseClient::registerUser(const RegisterUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterUserOutcome(RegisterUserResult(outcome.result()));
	else
		return RegisterUserOutcome(outcome.error());
}

void Dms_enterpriseClient::registerUserAsync(const RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RegisterUserOutcomeCallable Dms_enterpriseClient::registerUserCallable(const RegisterUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterUserOutcome()>>(
			[this, request]()
			{
			return this->registerUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RestartDataCorrectSQLJobOutcome Dms_enterpriseClient::restartDataCorrectSQLJob(const RestartDataCorrectSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDataCorrectSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDataCorrectSQLJobOutcome(RestartDataCorrectSQLJobResult(outcome.result()));
	else
		return RestartDataCorrectSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::restartDataCorrectSQLJobAsync(const RestartDataCorrectSQLJobRequest& request, const RestartDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDataCorrectSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RestartDataCorrectSQLJobOutcomeCallable Dms_enterpriseClient::restartDataCorrectSQLJobCallable(const RestartDataCorrectSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDataCorrectSQLJobOutcome()>>(
			[this, request]()
			{
			return this->restartDataCorrectSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RetryDataCorrectPreCheckOutcome Dms_enterpriseClient::retryDataCorrectPreCheck(const RetryDataCorrectPreCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryDataCorrectPreCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryDataCorrectPreCheckOutcome(RetryDataCorrectPreCheckResult(outcome.result()));
	else
		return RetryDataCorrectPreCheckOutcome(outcome.error());
}

void Dms_enterpriseClient::retryDataCorrectPreCheckAsync(const RetryDataCorrectPreCheckRequest& request, const RetryDataCorrectPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryDataCorrectPreCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RetryDataCorrectPreCheckOutcomeCallable Dms_enterpriseClient::retryDataCorrectPreCheckCallable(const RetryDataCorrectPreCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryDataCorrectPreCheckOutcome()>>(
			[this, request]()
			{
			return this->retryDataCorrectPreCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RevokeUserPermissionOutcome Dms_enterpriseClient::revokeUserPermission(const RevokeUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeUserPermissionOutcome(RevokeUserPermissionResult(outcome.result()));
	else
		return RevokeUserPermissionOutcome(outcome.error());
}

void Dms_enterpriseClient::revokeUserPermissionAsync(const RevokeUserPermissionRequest& request, const RevokeUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RevokeUserPermissionOutcomeCallable Dms_enterpriseClient::revokeUserPermissionCallable(const RevokeUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SearchDatabaseOutcome Dms_enterpriseClient::searchDatabase(const SearchDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchDatabaseOutcome(SearchDatabaseResult(outcome.result()));
	else
		return SearchDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::searchDatabaseAsync(const SearchDatabaseRequest& request, const SearchDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SearchDatabaseOutcomeCallable Dms_enterpriseClient::searchDatabaseCallable(const SearchDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchDatabaseOutcome()>>(
			[this, request]()
			{
			return this->searchDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SearchTableOutcome Dms_enterpriseClient::searchTable(const SearchTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTableOutcome(SearchTableResult(outcome.result()));
	else
		return SearchTableOutcome(outcome.error());
}

void Dms_enterpriseClient::searchTableAsync(const SearchTableRequest& request, const SearchTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SearchTableOutcomeCallable Dms_enterpriseClient::searchTableCallable(const SearchTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTableOutcome()>>(
			[this, request]()
			{
			return this->searchTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SetOwnersOutcome Dms_enterpriseClient::setOwners(const SetOwnersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetOwnersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOwnersOutcome(SetOwnersResult(outcome.result()));
	else
		return SetOwnersOutcome(outcome.error());
}

void Dms_enterpriseClient::setOwnersAsync(const SetOwnersRequest& request, const SetOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOwners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SetOwnersOutcomeCallable Dms_enterpriseClient::setOwnersCallable(const SetOwnersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOwnersOutcome()>>(
			[this, request]()
			{
			return this->setOwners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SubmitOrderApprovalOutcome Dms_enterpriseClient::submitOrderApproval(const SubmitOrderApprovalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitOrderApprovalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitOrderApprovalOutcome(SubmitOrderApprovalResult(outcome.result()));
	else
		return SubmitOrderApprovalOutcome(outcome.error());
}

void Dms_enterpriseClient::submitOrderApprovalAsync(const SubmitOrderApprovalRequest& request, const SubmitOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitOrderApproval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SubmitOrderApprovalOutcomeCallable Dms_enterpriseClient::submitOrderApprovalCallable(const SubmitOrderApprovalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitOrderApprovalOutcome()>>(
			[this, request]()
			{
			return this->submitOrderApproval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SubmitStructSyncOrderApprovalOutcome Dms_enterpriseClient::submitStructSyncOrderApproval(const SubmitStructSyncOrderApprovalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitStructSyncOrderApprovalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitStructSyncOrderApprovalOutcome(SubmitStructSyncOrderApprovalResult(outcome.result()));
	else
		return SubmitStructSyncOrderApprovalOutcome(outcome.error());
}

void Dms_enterpriseClient::submitStructSyncOrderApprovalAsync(const SubmitStructSyncOrderApprovalRequest& request, const SubmitStructSyncOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitStructSyncOrderApproval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SubmitStructSyncOrderApprovalOutcomeCallable Dms_enterpriseClient::submitStructSyncOrderApprovalCallable(const SubmitStructSyncOrderApprovalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitStructSyncOrderApprovalOutcome()>>(
			[this, request]()
			{
			return this->submitStructSyncOrderApproval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SyncDatabaseMetaOutcome Dms_enterpriseClient::syncDatabaseMeta(const SyncDatabaseMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDatabaseMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDatabaseMetaOutcome(SyncDatabaseMetaResult(outcome.result()));
	else
		return SyncDatabaseMetaOutcome(outcome.error());
}

void Dms_enterpriseClient::syncDatabaseMetaAsync(const SyncDatabaseMetaRequest& request, const SyncDatabaseMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDatabaseMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SyncDatabaseMetaOutcomeCallable Dms_enterpriseClient::syncDatabaseMetaCallable(const SyncDatabaseMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDatabaseMetaOutcome()>>(
			[this, request]()
			{
			return this->syncDatabaseMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SyncInstanceMetaOutcome Dms_enterpriseClient::syncInstanceMeta(const SyncInstanceMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncInstanceMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncInstanceMetaOutcome(SyncInstanceMetaResult(outcome.result()));
	else
		return SyncInstanceMetaOutcome(outcome.error());
}

void Dms_enterpriseClient::syncInstanceMetaAsync(const SyncInstanceMetaRequest& request, const SyncInstanceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncInstanceMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SyncInstanceMetaOutcomeCallable Dms_enterpriseClient::syncInstanceMetaCallable(const SyncInstanceMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncInstanceMetaOutcome()>>(
			[this, request]()
			{
			return this->syncInstanceMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateInstanceOutcome Dms_enterpriseClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateInstanceOutcomeCallable Dms_enterpriseClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateUserOutcome Dms_enterpriseClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void Dms_enterpriseClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateUserOutcomeCallable Dms_enterpriseClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

