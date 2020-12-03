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

#include <alibabacloud/polardbx/PolardbxClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

namespace
{
	const std::string SERVICE_NAME = "polardbx";
}

PolardbxClient::PolardbxClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::PolardbxClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::PolardbxClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::~PolardbxClient()
{}

PolardbxClient::AllocateInstancePublicConnectionOutcome PolardbxClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(AllocateInstancePublicConnectionResult(outcome.result()));
	else
		return AllocateInstancePublicConnectionOutcome(outcome.error());
}

void PolardbxClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::AllocateInstancePublicConnectionOutcomeCallable PolardbxClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CancelPolarxOrderOutcome PolardbxClient::cancelPolarxOrder(const CancelPolarxOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPolarxOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPolarxOrderOutcome(CancelPolarxOrderResult(outcome.result()));
	else
		return CancelPolarxOrderOutcome(outcome.error());
}

void PolardbxClient::cancelPolarxOrderAsync(const CancelPolarxOrderRequest& request, const CancelPolarxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPolarxOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CancelPolarxOrderOutcomeCallable PolardbxClient::cancelPolarxOrderCallable(const CancelPolarxOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPolarxOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelPolarxOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CheckHealthOutcome PolardbxClient::checkHealth(const CheckHealthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckHealthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckHealthOutcome(CheckHealthResult(outcome.result()));
	else
		return CheckHealthOutcome(outcome.error());
}

void PolardbxClient::checkHealthAsync(const CheckHealthRequest& request, const CheckHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkHealth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CheckHealthOutcomeCallable PolardbxClient::checkHealthCallable(const CheckHealthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckHealthOutcome()>>(
			[this, request]()
			{
			return this->checkHealth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateAccountOutcome PolardbxClient::createAccount(const CreateAccountRequest &request) const
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

void PolardbxClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateAccountOutcomeCallable PolardbxClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateDBOutcome PolardbxClient::createDB(const CreateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBOutcome(CreateDBResult(outcome.result()));
	else
		return CreateDBOutcome(outcome.error());
}

void PolardbxClient::createDBAsync(const CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateDBOutcomeCallable PolardbxClient::createDBCallable(const CreateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBOutcome()>>(
			[this, request]()
			{
			return this->createDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateDBInstanceOutcome PolardbxClient::createDBInstance(const CreateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceOutcome(CreateDBInstanceResult(outcome.result()));
	else
		return CreateDBInstanceOutcome(outcome.error());
}

void PolardbxClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateDBInstanceOutcomeCallable PolardbxClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreatePolarxInstanceOutcome PolardbxClient::createPolarxInstance(const CreatePolarxInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolarxInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolarxInstanceOutcome(CreatePolarxInstanceResult(outcome.result()));
	else
		return CreatePolarxInstanceOutcome(outcome.error());
}

void PolardbxClient::createPolarxInstanceAsync(const CreatePolarxInstanceRequest& request, const CreatePolarxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolarxInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreatePolarxInstanceOutcomeCallable PolardbxClient::createPolarxInstanceCallable(const CreatePolarxInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolarxInstanceOutcome()>>(
			[this, request]()
			{
			return this->createPolarxInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreatePolarxOrderOutcome PolardbxClient::createPolarxOrder(const CreatePolarxOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolarxOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolarxOrderOutcome(CreatePolarxOrderResult(outcome.result()));
	else
		return CreatePolarxOrderOutcome(outcome.error());
}

void PolardbxClient::createPolarxOrderAsync(const CreatePolarxOrderRequest& request, const CreatePolarxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolarxOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreatePolarxOrderOutcomeCallable PolardbxClient::createPolarxOrderCallable(const CreatePolarxOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolarxOrderOutcome()>>(
			[this, request]()
			{
			return this->createPolarxOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateSuperAccountOutcome PolardbxClient::createSuperAccount(const CreateSuperAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSuperAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSuperAccountOutcome(CreateSuperAccountResult(outcome.result()));
	else
		return CreateSuperAccountOutcome(outcome.error());
}

void PolardbxClient::createSuperAccountAsync(const CreateSuperAccountRequest& request, const CreateSuperAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSuperAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateSuperAccountOutcomeCallable PolardbxClient::createSuperAccountCallable(const CreateSuperAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSuperAccountOutcome()>>(
			[this, request]()
			{
			return this->createSuperAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteAccountOutcome PolardbxClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void PolardbxClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteAccountOutcomeCallable PolardbxClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteDBOutcome PolardbxClient::deleteDB(const DeleteDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBOutcome(DeleteDBResult(outcome.result()));
	else
		return DeleteDBOutcome(outcome.error());
}

void PolardbxClient::deleteDBAsync(const DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteDBOutcomeCallable PolardbxClient::deleteDBCallable(const DeleteDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBOutcome()>>(
			[this, request]()
			{
			return this->deleteDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteDBInstanceOutcome PolardbxClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceOutcome(DeleteDBInstanceResult(outcome.result()));
	else
		return DeleteDBInstanceOutcome(outcome.error());
}

void PolardbxClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteDBInstanceOutcomeCallable PolardbxClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeAccountListOutcome PolardbxClient::describeAccountList(const DescribeAccountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountListOutcome(DescribeAccountListResult(outcome.result()));
	else
		return DescribeAccountListOutcome(outcome.error());
}

void PolardbxClient::describeAccountListAsync(const DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeAccountListOutcomeCallable PolardbxClient::describeAccountListCallable(const DescribeAccountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountListOutcome()>>(
			[this, request]()
			{
			return this->describeAccountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeCharacterSetOutcome PolardbxClient::describeCharacterSet(const DescribeCharacterSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCharacterSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCharacterSetOutcome(DescribeCharacterSetResult(outcome.result()));
	else
		return DescribeCharacterSetOutcome(outcome.error());
}

void PolardbxClient::describeCharacterSetAsync(const DescribeCharacterSetRequest& request, const DescribeCharacterSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharacterSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeCharacterSetOutcomeCallable PolardbxClient::describeCharacterSetCallable(const DescribeCharacterSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharacterSetOutcome()>>(
			[this, request]()
			{
			return this->describeCharacterSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceAttributeOutcome PolardbxClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(DescribeDBInstanceAttributeResult(outcome.result()));
	else
		return DescribeDBInstanceAttributeOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceAttributeOutcomeCallable PolardbxClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceConfigOutcome PolardbxClient::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceConfigOutcome(DescribeDBInstanceConfigResult(outcome.result()));
	else
		return DescribeDBInstanceConfigOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceConfigAsync(const DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceConfigOutcomeCallable PolardbxClient::describeDBInstanceConfigCallable(const DescribeDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstancesOutcome PolardbxClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesOutcome(DescribeDBInstancesResult(outcome.result()));
	else
		return DescribeDBInstancesOutcome(outcome.error());
}

void PolardbxClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstancesOutcomeCallable PolardbxClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDbListOutcome PolardbxClient::describeDbList(const DescribeDbListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbListOutcome(DescribeDbListResult(outcome.result()));
	else
		return DescribeDbListOutcome(outcome.error());
}

void PolardbxClient::describeDbListAsync(const DescribeDbListRequest& request, const DescribeDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDbListOutcomeCallable PolardbxClient::describeDbListCallable(const DescribeDbListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbListOutcome()>>(
			[this, request]()
			{
			return this->describeDbList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDistributeTableListOutcome PolardbxClient::describeDistributeTableList(const DescribeDistributeTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDistributeTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDistributeTableListOutcome(DescribeDistributeTableListResult(outcome.result()));
	else
		return DescribeDistributeTableListOutcome(outcome.error());
}

void PolardbxClient::describeDistributeTableListAsync(const DescribeDistributeTableListRequest& request, const DescribeDistributeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDistributeTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDistributeTableListOutcomeCallable PolardbxClient::describeDistributeTableListCallable(const DescribeDistributeTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDistributeTableListOutcome()>>(
			[this, request]()
			{
			return this->describeDistributeTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeInstanceDbPerformanceOutcome PolardbxClient::describeInstanceDbPerformance(const DescribeInstanceDbPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDbPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDbPerformanceOutcome(DescribeInstanceDbPerformanceResult(outcome.result()));
	else
		return DescribeInstanceDbPerformanceOutcome(outcome.error());
}

void PolardbxClient::describeInstanceDbPerformanceAsync(const DescribeInstanceDbPerformanceRequest& request, const DescribeInstanceDbPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDbPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeInstanceDbPerformanceOutcomeCallable PolardbxClient::describeInstanceDbPerformanceCallable(const DescribeInstanceDbPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDbPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDbPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeInstancePerformanceOutcome PolardbxClient::describeInstancePerformance(const DescribeInstancePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancePerformanceOutcome(DescribeInstancePerformanceResult(outcome.result()));
	else
		return DescribeInstancePerformanceOutcome(outcome.error());
}

void PolardbxClient::describeInstancePerformanceAsync(const DescribeInstancePerformanceRequest& request, const DescribeInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeInstancePerformanceOutcomeCallable PolardbxClient::describeInstancePerformanceCallable(const DescribeInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstancePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeInstanceStoragePerformanceOutcome PolardbxClient::describeInstanceStoragePerformance(const DescribeInstanceStoragePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStoragePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStoragePerformanceOutcome(DescribeInstanceStoragePerformanceResult(outcome.result()));
	else
		return DescribeInstanceStoragePerformanceOutcome(outcome.error());
}

void PolardbxClient::describeInstanceStoragePerformanceAsync(const DescribeInstanceStoragePerformanceRequest& request, const DescribeInstanceStoragePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStoragePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeInstanceStoragePerformanceOutcomeCallable PolardbxClient::describeInstanceStoragePerformanceCallable(const DescribeInstanceStoragePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStoragePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStoragePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeModifyParameterLogOutcome PolardbxClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModifyParameterLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModifyParameterLogOutcome(DescribeModifyParameterLogResult(outcome.result()));
	else
		return DescribeModifyParameterLogOutcome(outcome.error());
}

void PolardbxClient::describeModifyParameterLogAsync(const DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyParameterLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeModifyParameterLogOutcomeCallable PolardbxClient::describeModifyParameterLogCallable(const DescribeModifyParameterLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyParameterLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyParameterLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeParameterTemplatesOutcome PolardbxClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterTemplatesOutcome(DescribeParameterTemplatesResult(outcome.result()));
	else
		return DescribeParameterTemplatesOutcome(outcome.error());
}

void PolardbxClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeParameterTemplatesOutcomeCallable PolardbxClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeParametersOutcome PolardbxClient::describeParameters(const DescribeParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParametersOutcome(DescribeParametersResult(outcome.result()));
	else
		return DescribeParametersOutcome(outcome.error());
}

void PolardbxClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeParametersOutcomeCallable PolardbxClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribePolarxDbInstancesOutcome PolardbxClient::describePolarxDbInstances(const DescribePolarxDbInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolarxDbInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolarxDbInstancesOutcome(DescribePolarxDbInstancesResult(outcome.result()));
	else
		return DescribePolarxDbInstancesOutcome(outcome.error());
}

void PolardbxClient::describePolarxDbInstancesAsync(const DescribePolarxDbInstancesRequest& request, const DescribePolarxDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolarxDbInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribePolarxDbInstancesOutcomeCallable PolardbxClient::describePolarxDbInstancesCallable(const DescribePolarxDbInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolarxDbInstancesOutcome()>>(
			[this, request]()
			{
			return this->describePolarxDbInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeRegionsOutcome PolardbxClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void PolardbxClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeRegionsOutcomeCallable PolardbxClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeScaleOutMigrateTaskListOutcome PolardbxClient::describeScaleOutMigrateTaskList(const DescribeScaleOutMigrateTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScaleOutMigrateTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScaleOutMigrateTaskListOutcome(DescribeScaleOutMigrateTaskListResult(outcome.result()));
	else
		return DescribeScaleOutMigrateTaskListOutcome(outcome.error());
}

void PolardbxClient::describeScaleOutMigrateTaskListAsync(const DescribeScaleOutMigrateTaskListRequest& request, const DescribeScaleOutMigrateTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScaleOutMigrateTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeScaleOutMigrateTaskListOutcomeCallable PolardbxClient::describeScaleOutMigrateTaskListCallable(const DescribeScaleOutMigrateTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScaleOutMigrateTaskListOutcome()>>(
			[this, request]()
			{
			return this->describeScaleOutMigrateTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeSecurityIpsOutcome PolardbxClient::describeSecurityIps(const DescribeSecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityIpsOutcome(DescribeSecurityIpsResult(outcome.result()));
	else
		return DescribeSecurityIpsOutcome(outcome.error());
}

void PolardbxClient::describeSecurityIpsAsync(const DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeSecurityIpsOutcomeCallable PolardbxClient::describeSecurityIpsCallable(const DescribeSecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeSqlAuditInfoOutcome PolardbxClient::describeSqlAuditInfo(const DescribeSqlAuditInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSqlAuditInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSqlAuditInfoOutcome(DescribeSqlAuditInfoResult(outcome.result()));
	else
		return DescribeSqlAuditInfoOutcome(outcome.error());
}

void PolardbxClient::describeSqlAuditInfoAsync(const DescribeSqlAuditInfoRequest& request, const DescribeSqlAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSqlAuditInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeSqlAuditInfoOutcomeCallable PolardbxClient::describeSqlAuditInfoCallable(const DescribeSqlAuditInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSqlAuditInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSqlAuditInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeTableDetailOutcome PolardbxClient::describeTableDetail(const DescribeTableDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTableDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTableDetailOutcome(DescribeTableDetailResult(outcome.result()));
	else
		return DescribeTableDetailOutcome(outcome.error());
}

void PolardbxClient::describeTableDetailAsync(const DescribeTableDetailRequest& request, const DescribeTableDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTableDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeTableDetailOutcomeCallable PolardbxClient::describeTableDetailCallable(const DescribeTableDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTableDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTableDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeTasksOutcome PolardbxClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void PolardbxClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeTasksOutcomeCallable PolardbxClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DisableSqlAuditOutcome PolardbxClient::disableSqlAudit(const DisableSqlAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSqlAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSqlAuditOutcome(DisableSqlAuditResult(outcome.result()));
	else
		return DisableSqlAuditOutcome(outcome.error());
}

void PolardbxClient::disableSqlAuditAsync(const DisableSqlAuditRequest& request, const DisableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSqlAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DisableSqlAuditOutcomeCallable PolardbxClient::disableSqlAuditCallable(const DisableSqlAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSqlAuditOutcome()>>(
			[this, request]()
			{
			return this->disableSqlAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::EnableSqlAuditOutcome PolardbxClient::enableSqlAudit(const EnableSqlAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSqlAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSqlAuditOutcome(EnableSqlAuditResult(outcome.result()));
	else
		return EnableSqlAuditOutcome(outcome.error());
}

void PolardbxClient::enableSqlAuditAsync(const EnableSqlAuditRequest& request, const EnableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSqlAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::EnableSqlAuditOutcomeCallable PolardbxClient::enableSqlAuditCallable(const EnableSqlAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSqlAuditOutcome()>>(
			[this, request]()
			{
			return this->enableSqlAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::GetPolarXPriceOutcome PolardbxClient::getPolarXPrice(const GetPolarXPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolarXPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolarXPriceOutcome(GetPolarXPriceResult(outcome.result()));
	else
		return GetPolarXPriceOutcome(outcome.error());
}

void PolardbxClient::getPolarXPriceAsync(const GetPolarXPriceRequest& request, const GetPolarXPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolarXPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::GetPolarXPriceOutcomeCallable PolardbxClient::getPolarXPriceCallable(const GetPolarXPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolarXPriceOutcome()>>(
			[this, request]()
			{
			return this->getPolarXPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::GetPolarxCommodityOutcome PolardbxClient::getPolarxCommodity(const GetPolarxCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolarxCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolarxCommodityOutcome(GetPolarxCommodityResult(outcome.result()));
	else
		return GetPolarxCommodityOutcome(outcome.error());
}

void PolardbxClient::getPolarxCommodityAsync(const GetPolarxCommodityRequest& request, const GetPolarxCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolarxCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::GetPolarxCommodityOutcomeCallable PolardbxClient::getPolarxCommodityCallable(const GetPolarxCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolarxCommodityOutcome()>>(
			[this, request]()
			{
			return this->getPolarxCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyAccountDescriptionOutcome PolardbxClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionOutcome(ModifyAccountDescriptionResult(outcome.result()));
	else
		return ModifyAccountDescriptionOutcome(outcome.error());
}

void PolardbxClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyAccountDescriptionOutcomeCallable PolardbxClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyAccountPrivilegeOutcome PolardbxClient::modifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountPrivilegeOutcome(ModifyAccountPrivilegeResult(outcome.result()));
	else
		return ModifyAccountPrivilegeOutcome(outcome.error());
}

void PolardbxClient::modifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyAccountPrivilegeOutcomeCallable PolardbxClient::modifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceClassOutcome PolardbxClient::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceClassOutcome(ModifyDBInstanceClassResult(outcome.result()));
	else
		return ModifyDBInstanceClassOutcome(outcome.error());
}

void PolardbxClient::modifyDBInstanceClassAsync(const ModifyDBInstanceClassRequest& request, const ModifyDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceClassOutcomeCallable PolardbxClient::modifyDBInstanceClassCallable(const ModifyDBInstanceClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceClassOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceConfigOutcome PolardbxClient::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(ModifyDBInstanceConfigResult(outcome.result()));
	else
		return ModifyDBInstanceConfigOutcome(outcome.error());
}

void PolardbxClient::modifyDBInstanceConfigAsync(const ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceConfigOutcomeCallable PolardbxClient::modifyDBInstanceConfigCallable(const ModifyDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceDescriptionOutcome PolardbxClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(ModifyDBInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDBInstanceDescriptionOutcome(outcome.error());
}

void PolardbxClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceDescriptionOutcomeCallable PolardbxClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceMaintainTimeOutcome PolardbxClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(ModifyDBInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyDBInstanceMaintainTimeOutcome(outcome.error());
}

void PolardbxClient::modifyDBInstanceMaintainTimeAsync(const ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceMaintainTimeOutcomeCallable PolardbxClient::modifyDBInstanceMaintainTimeCallable(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDatabaseDescriptionOutcome PolardbxClient::modifyDatabaseDescription(const ModifyDatabaseDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseDescriptionOutcome(ModifyDatabaseDescriptionResult(outcome.result()));
	else
		return ModifyDatabaseDescriptionOutcome(outcome.error());
}

void PolardbxClient::modifyDatabaseDescriptionAsync(const ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDatabaseDescriptionOutcomeCallable PolardbxClient::modifyDatabaseDescriptionCallable(const ModifyDatabaseDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyParameterOutcome PolardbxClient::modifyParameter(const ModifyParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParameterOutcome(ModifyParameterResult(outcome.result()));
	else
		return ModifyParameterOutcome(outcome.error());
}

void PolardbxClient::modifyParameterAsync(const ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyParameterOutcomeCallable PolardbxClient::modifyParameterCallable(const ModifyParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifySecurityIpsOutcome PolardbxClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityIpsOutcome(ModifySecurityIpsResult(outcome.result()));
	else
		return ModifySecurityIpsOutcome(outcome.error());
}

void PolardbxClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifySecurityIpsOutcomeCallable PolardbxClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ReleaseInstancePublicConnectionOutcome PolardbxClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(ReleaseInstancePublicConnectionResult(outcome.result()));
	else
		return ReleaseInstancePublicConnectionOutcome(outcome.error());
}

void PolardbxClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ReleaseInstancePublicConnectionOutcomeCallable PolardbxClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ResetAccountPasswordOutcome PolardbxClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void PolardbxClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ResetAccountPasswordOutcomeCallable PolardbxClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ResetPolarxPgAccountPasswordOutcome PolardbxClient::resetPolarxPgAccountPassword(const ResetPolarxPgAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetPolarxPgAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetPolarxPgAccountPasswordOutcome(ResetPolarxPgAccountPasswordResult(outcome.result()));
	else
		return ResetPolarxPgAccountPasswordOutcome(outcome.error());
}

void PolardbxClient::resetPolarxPgAccountPasswordAsync(const ResetPolarxPgAccountPasswordRequest& request, const ResetPolarxPgAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetPolarxPgAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ResetPolarxPgAccountPasswordOutcomeCallable PolardbxClient::resetPolarxPgAccountPasswordCallable(const ResetPolarxPgAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetPolarxPgAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetPolarxPgAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::RestartDBInstanceOutcome PolardbxClient::restartDBInstance(const RestartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBInstanceOutcome(RestartDBInstanceResult(outcome.result()));
	else
		return RestartDBInstanceOutcome(outcome.error());
}

void PolardbxClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::RestartDBInstanceOutcomeCallable PolardbxClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::RetryPolarxOrderOutcome PolardbxClient::retryPolarxOrder(const RetryPolarxOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryPolarxOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryPolarxOrderOutcome(RetryPolarxOrderResult(outcome.result()));
	else
		return RetryPolarxOrderOutcome(outcome.error());
}

void PolardbxClient::retryPolarxOrderAsync(const RetryPolarxOrderRequest& request, const RetryPolarxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryPolarxOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::RetryPolarxOrderOutcomeCallable PolardbxClient::retryPolarxOrderCallable(const RetryPolarxOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryPolarxOrderOutcome()>>(
			[this, request]()
			{
			return this->retryPolarxOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpdatePolarDBXInstanceNodeOutcome PolardbxClient::updatePolarDBXInstanceNode(const UpdatePolarDBXInstanceNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePolarDBXInstanceNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePolarDBXInstanceNodeOutcome(UpdatePolarDBXInstanceNodeResult(outcome.result()));
	else
		return UpdatePolarDBXInstanceNodeOutcome(outcome.error());
}

void PolardbxClient::updatePolarDBXInstanceNodeAsync(const UpdatePolarDBXInstanceNodeRequest& request, const UpdatePolarDBXInstanceNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePolarDBXInstanceNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpdatePolarDBXInstanceNodeOutcomeCallable PolardbxClient::updatePolarDBXInstanceNodeCallable(const UpdatePolarDBXInstanceNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePolarDBXInstanceNodeOutcome()>>(
			[this, request]()
			{
			return this->updatePolarDBXInstanceNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpgradeDBInstanceKernelVersionOutcome PolardbxClient::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(UpgradeDBInstanceKernelVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceKernelVersionOutcome(outcome.error());
}

void PolardbxClient::upgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpgradeDBInstanceKernelVersionOutcomeCallable PolardbxClient::upgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

