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

#include <alibabacloud/drds/DrdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

namespace
{
	const std::string SERVICE_NAME = "Drds";
}

DrdsClient::DrdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::DrdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::DrdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::~DrdsClient()
{}

DrdsClient::ChangeAccountPasswordOutcome DrdsClient::changeAccountPassword(const ChangeAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeAccountPasswordOutcome(ChangeAccountPasswordResult(outcome.result()));
	else
		return ChangeAccountPasswordOutcome(outcome.error());
}

void DrdsClient::changeAccountPasswordAsync(const ChangeAccountPasswordRequest& request, const ChangeAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ChangeAccountPasswordOutcomeCallable DrdsClient::changeAccountPasswordCallable(const ChangeAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->changeAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ChangeInstanceAzoneOutcome DrdsClient::changeInstanceAzone(const ChangeInstanceAzoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeInstanceAzoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeInstanceAzoneOutcome(ChangeInstanceAzoneResult(outcome.result()));
	else
		return ChangeInstanceAzoneOutcome(outcome.error());
}

void DrdsClient::changeInstanceAzoneAsync(const ChangeInstanceAzoneRequest& request, const ChangeInstanceAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeInstanceAzone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ChangeInstanceAzoneOutcomeCallable DrdsClient::changeInstanceAzoneCallable(const ChangeInstanceAzoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeInstanceAzoneOutcome()>>(
			[this, request]()
			{
			return this->changeInstanceAzone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CheckDrdsDbNameOutcome DrdsClient::checkDrdsDbName(const CheckDrdsDbNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDrdsDbNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDrdsDbNameOutcome(CheckDrdsDbNameResult(outcome.result()));
	else
		return CheckDrdsDbNameOutcome(outcome.error());
}

void DrdsClient::checkDrdsDbNameAsync(const CheckDrdsDbNameRequest& request, const CheckDrdsDbNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDrdsDbName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CheckDrdsDbNameOutcomeCallable DrdsClient::checkDrdsDbNameCallable(const CheckDrdsDbNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDrdsDbNameOutcome()>>(
			[this, request]()
			{
			return this->checkDrdsDbName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CheckExpandStatusOutcome DrdsClient::checkExpandStatus(const CheckExpandStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckExpandStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckExpandStatusOutcome(CheckExpandStatusResult(outcome.result()));
	else
		return CheckExpandStatusOutcome(outcome.error());
}

void DrdsClient::checkExpandStatusAsync(const CheckExpandStatusRequest& request, const CheckExpandStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkExpandStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CheckExpandStatusOutcomeCallable DrdsClient::checkExpandStatusCallable(const CheckExpandStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckExpandStatusOutcome()>>(
			[this, request]()
			{
			return this->checkExpandStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CheckSqlAuditEnableStatusOutcome DrdsClient::checkSqlAuditEnableStatus(const CheckSqlAuditEnableStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSqlAuditEnableStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSqlAuditEnableStatusOutcome(CheckSqlAuditEnableStatusResult(outcome.result()));
	else
		return CheckSqlAuditEnableStatusOutcome(outcome.error());
}

void DrdsClient::checkSqlAuditEnableStatusAsync(const CheckSqlAuditEnableStatusRequest& request, const CheckSqlAuditEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSqlAuditEnableStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CheckSqlAuditEnableStatusOutcomeCallable DrdsClient::checkSqlAuditEnableStatusCallable(const CheckSqlAuditEnableStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSqlAuditEnableStatusOutcome()>>(
			[this, request]()
			{
			return this->checkSqlAuditEnableStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateDrdsDBOutcome DrdsClient::createDrdsDB(const CreateDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDrdsDBOutcome(CreateDrdsDBResult(outcome.result()));
	else
		return CreateDrdsDBOutcome(outcome.error());
}

void DrdsClient::createDrdsDBAsync(const CreateDrdsDBRequest& request, const CreateDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateDrdsDBOutcomeCallable DrdsClient::createDrdsDBCallable(const CreateDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->createDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateDrdsInstanceOutcome DrdsClient::createDrdsInstance(const CreateDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDrdsInstanceOutcome(CreateDrdsInstanceResult(outcome.result()));
	else
		return CreateDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::createDrdsInstanceAsync(const CreateDrdsInstanceRequest& request, const CreateDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateDrdsInstanceOutcomeCallable DrdsClient::createDrdsInstanceCallable(const CreateDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateInstanceAccountOutcome DrdsClient::createInstanceAccount(const CreateInstanceAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceAccountOutcome(CreateInstanceAccountResult(outcome.result()));
	else
		return CreateInstanceAccountOutcome(outcome.error());
}

void DrdsClient::createInstanceAccountAsync(const CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstanceAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateInstanceAccountOutcomeCallable DrdsClient::createInstanceAccountCallable(const CreateInstanceAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceAccountOutcome()>>(
			[this, request]()
			{
			return this->createInstanceAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateInstanceInternetAddressOutcome DrdsClient::createInstanceInternetAddress(const CreateInstanceInternetAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceInternetAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceInternetAddressOutcome(CreateInstanceInternetAddressResult(outcome.result()));
	else
		return CreateInstanceInternetAddressOutcome(outcome.error());
}

void DrdsClient::createInstanceInternetAddressAsync(const CreateInstanceInternetAddressRequest& request, const CreateInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstanceInternetAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateInstanceInternetAddressOutcomeCallable DrdsClient::createInstanceInternetAddressCallable(const CreateInstanceInternetAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceInternetAddressOutcome()>>(
			[this, request]()
			{
			return this->createInstanceInternetAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateOrderForRdsOutcome DrdsClient::createOrderForRds(const CreateOrderForRdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderForRdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderForRdsOutcome(CreateOrderForRdsResult(outcome.result()));
	else
		return CreateOrderForRdsOutcome(outcome.error());
}

void DrdsClient::createOrderForRdsAsync(const CreateOrderForRdsRequest& request, const CreateOrderForRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderForRds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateOrderForRdsOutcomeCallable DrdsClient::createOrderForRdsCallable(const CreateOrderForRdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderForRdsOutcome()>>(
			[this, request]()
			{
			return this->createOrderForRds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateShardTaskOutcome DrdsClient::createShardTask(const CreateShardTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateShardTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateShardTaskOutcome(CreateShardTaskResult(outcome.result()));
	else
		return CreateShardTaskOutcome(outcome.error());
}

void DrdsClient::createShardTaskAsync(const CreateShardTaskRequest& request, const CreateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createShardTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateShardTaskOutcomeCallable DrdsClient::createShardTaskCallable(const CreateShardTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateShardTaskOutcome()>>(
			[this, request]()
			{
			return this->createShardTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackMenuOutcome DrdsClient::describeBackMenu(const DescribeBackMenuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackMenuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackMenuOutcome(DescribeBackMenuResult(outcome.result()));
	else
		return DescribeBackMenuOutcome(outcome.error());
}

void DrdsClient::describeBackMenuAsync(const DescribeBackMenuRequest& request, const DescribeBackMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackMenu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackMenuOutcomeCallable DrdsClient::describeBackMenuCallable(const DescribeBackMenuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackMenuOutcome()>>(
			[this, request]()
			{
			return this->describeBackMenu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackupDbsOutcome DrdsClient::describeBackupDbs(const DescribeBackupDbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupDbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupDbsOutcome(DescribeBackupDbsResult(outcome.result()));
	else
		return DescribeBackupDbsOutcome(outcome.error());
}

void DrdsClient::describeBackupDbsAsync(const DescribeBackupDbsRequest& request, const DescribeBackupDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupDbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackupDbsOutcomeCallable DrdsClient::describeBackupDbsCallable(const DescribeBackupDbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupDbsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupDbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackupLocalOutcome DrdsClient::describeBackupLocal(const DescribeBackupLocalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupLocalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupLocalOutcome(DescribeBackupLocalResult(outcome.result()));
	else
		return DescribeBackupLocalOutcome(outcome.error());
}

void DrdsClient::describeBackupLocalAsync(const DescribeBackupLocalRequest& request, const DescribeBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupLocal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackupLocalOutcomeCallable DrdsClient::describeBackupLocalCallable(const DescribeBackupLocalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupLocalOutcome()>>(
			[this, request]()
			{
			return this->describeBackupLocal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackupPolicyOutcome DrdsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void DrdsClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackupPolicyOutcomeCallable DrdsClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackupSetsOutcome DrdsClient::describeBackupSets(const DescribeBackupSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetsOutcome(DescribeBackupSetsResult(outcome.result()));
	else
		return DescribeBackupSetsOutcome(outcome.error());
}

void DrdsClient::describeBackupSetsAsync(const DescribeBackupSetsRequest& request, const DescribeBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackupSetsOutcomeCallable DrdsClient::describeBackupSetsCallable(const DescribeBackupSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBackupTimesOutcome DrdsClient::describeBackupTimes(const DescribeBackupTimesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupTimesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupTimesOutcome(DescribeBackupTimesResult(outcome.result()));
	else
		return DescribeBackupTimesOutcome(outcome.error());
}

void DrdsClient::describeBackupTimesAsync(const DescribeBackupTimesRequest& request, const DescribeBackupTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTimes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBackupTimesOutcomeCallable DrdsClient::describeBackupTimesCallable(const DescribeBackupTimesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTimesOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTimes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeBroadcastTablesOutcome DrdsClient::describeBroadcastTables(const DescribeBroadcastTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBroadcastTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBroadcastTablesOutcome(DescribeBroadcastTablesResult(outcome.result()));
	else
		return DescribeBroadcastTablesOutcome(outcome.error());
}

void DrdsClient::describeBroadcastTablesAsync(const DescribeBroadcastTablesRequest& request, const DescribeBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBroadcastTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeBroadcastTablesOutcomeCallable DrdsClient::describeBroadcastTablesCallable(const DescribeBroadcastTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBroadcastTablesOutcome()>>(
			[this, request]()
			{
			return this->describeBroadcastTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDbInstanceDbsOutcome DrdsClient::describeDbInstanceDbs(const DescribeDbInstanceDbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbInstanceDbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbInstanceDbsOutcome(DescribeDbInstanceDbsResult(outcome.result()));
	else
		return DescribeDbInstanceDbsOutcome(outcome.error());
}

void DrdsClient::describeDbInstanceDbsAsync(const DescribeDbInstanceDbsRequest& request, const DescribeDbInstanceDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbInstanceDbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDbInstanceDbsOutcomeCallable DrdsClient::describeDbInstanceDbsCallable(const DescribeDbInstanceDbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbInstanceDbsOutcome()>>(
			[this, request]()
			{
			return this->describeDbInstanceDbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDbInstancesOutcome DrdsClient::describeDbInstances(const DescribeDbInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbInstancesOutcome(DescribeDbInstancesResult(outcome.result()));
	else
		return DescribeDbInstancesOutcome(outcome.error());
}

void DrdsClient::describeDbInstancesAsync(const DescribeDbInstancesRequest& request, const DescribeDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDbInstancesOutcomeCallable DrdsClient::describeDbInstancesCallable(const DescribeDbInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDbInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBOutcome DrdsClient::describeDrdsDB(const DescribeDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBOutcome(DescribeDrdsDBResult(outcome.result()));
	else
		return DescribeDrdsDBOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBAsync(const DescribeDrdsDBRequest& request, const DescribeDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBOutcomeCallable DrdsClient::describeDrdsDBCallable(const DescribeDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBClusterOutcome DrdsClient::describeDrdsDBCluster(const DescribeDrdsDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBClusterOutcome(DescribeDrdsDBClusterResult(outcome.result()));
	else
		return DescribeDrdsDBClusterOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBClusterAsync(const DescribeDrdsDBClusterRequest& request, const DescribeDrdsDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBClusterOutcomeCallable DrdsClient::describeDrdsDBClusterCallable(const DescribeDrdsDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBClusterOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBIpWhiteListOutcome DrdsClient::describeDrdsDBIpWhiteList(const DescribeDrdsDBIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBIpWhiteListOutcome(DescribeDrdsDBIpWhiteListResult(outcome.result()));
	else
		return DescribeDrdsDBIpWhiteListOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBIpWhiteListAsync(const DescribeDrdsDBIpWhiteListRequest& request, const DescribeDrdsDBIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDBIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBIpWhiteListOutcomeCallable DrdsClient::describeDrdsDBIpWhiteListCallable(const DescribeDrdsDBIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDBIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBsOutcome DrdsClient::describeDrdsDBs(const DescribeDrdsDBsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBsOutcome(DescribeDrdsDBsResult(outcome.result()));
	else
		return DescribeDrdsDBsOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBsAsync(const DescribeDrdsDBsRequest& request, const DescribeDrdsDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDBs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBsOutcomeCallable DrdsClient::describeDrdsDBsCallable(const DescribeDrdsDBsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBsOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDBs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDbInstanceOutcome DrdsClient::describeDrdsDbInstance(const DescribeDrdsDbInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDbInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDbInstanceOutcome(DescribeDrdsDbInstanceResult(outcome.result()));
	else
		return DescribeDrdsDbInstanceOutcome(outcome.error());
}

void DrdsClient::describeDrdsDbInstanceAsync(const DescribeDrdsDbInstanceRequest& request, const DescribeDrdsDbInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDbInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDbInstanceOutcomeCallable DrdsClient::describeDrdsDbInstanceCallable(const DescribeDrdsDbInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDbInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDbInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDbInstancesOutcome DrdsClient::describeDrdsDbInstances(const DescribeDrdsDbInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDbInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDbInstancesOutcome(DescribeDrdsDbInstancesResult(outcome.result()));
	else
		return DescribeDrdsDbInstancesOutcome(outcome.error());
}

void DrdsClient::describeDrdsDbInstancesAsync(const DescribeDrdsDbInstancesRequest& request, const DescribeDrdsDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDbInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDbInstancesOutcomeCallable DrdsClient::describeDrdsDbInstancesCallable(const DescribeDrdsDbInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDbInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDbInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDbRdsNameListOutcome DrdsClient::describeDrdsDbRdsNameList(const DescribeDrdsDbRdsNameListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDbRdsNameListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDbRdsNameListOutcome(DescribeDrdsDbRdsNameListResult(outcome.result()));
	else
		return DescribeDrdsDbRdsNameListOutcome(outcome.error());
}

void DrdsClient::describeDrdsDbRdsNameListAsync(const DescribeDrdsDbRdsNameListRequest& request, const DescribeDrdsDbRdsNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDbRdsNameList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDbRdsNameListOutcomeCallable DrdsClient::describeDrdsDbRdsNameListCallable(const DescribeDrdsDbRdsNameListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDbRdsNameListOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDbRdsNameList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceOutcome DrdsClient::describeDrdsInstance(const DescribeDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceOutcome(DescribeDrdsInstanceResult(outcome.result()));
	else
		return DescribeDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceAsync(const DescribeDrdsInstanceRequest& request, const DescribeDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceOutcomeCallable DrdsClient::describeDrdsInstanceCallable(const DescribeDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceDbMonitorOutcome DrdsClient::describeDrdsInstanceDbMonitor(const DescribeDrdsInstanceDbMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceDbMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceDbMonitorOutcome(DescribeDrdsInstanceDbMonitorResult(outcome.result()));
	else
		return DescribeDrdsInstanceDbMonitorOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceDbMonitorAsync(const DescribeDrdsInstanceDbMonitorRequest& request, const DescribeDrdsInstanceDbMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceDbMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceDbMonitorOutcomeCallable DrdsClient::describeDrdsInstanceDbMonitorCallable(const DescribeDrdsInstanceDbMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceDbMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceDbMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceLevelTasksOutcome DrdsClient::describeDrdsInstanceLevelTasks(const DescribeDrdsInstanceLevelTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceLevelTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceLevelTasksOutcome(DescribeDrdsInstanceLevelTasksResult(outcome.result()));
	else
		return DescribeDrdsInstanceLevelTasksOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceLevelTasksAsync(const DescribeDrdsInstanceLevelTasksRequest& request, const DescribeDrdsInstanceLevelTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceLevelTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceLevelTasksOutcomeCallable DrdsClient::describeDrdsInstanceLevelTasksCallable(const DescribeDrdsInstanceLevelTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceLevelTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceLevelTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceMonitorOutcome DrdsClient::describeDrdsInstanceMonitor(const DescribeDrdsInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceMonitorOutcome(DescribeDrdsInstanceMonitorResult(outcome.result()));
	else
		return DescribeDrdsInstanceMonitorOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceMonitorAsync(const DescribeDrdsInstanceMonitorRequest& request, const DescribeDrdsInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceMonitorOutcomeCallable DrdsClient::describeDrdsInstanceMonitorCallable(const DescribeDrdsInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceVersionOutcome DrdsClient::describeDrdsInstanceVersion(const DescribeDrdsInstanceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceVersionOutcome(DescribeDrdsInstanceVersionResult(outcome.result()));
	else
		return DescribeDrdsInstanceVersionOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceVersionAsync(const DescribeDrdsInstanceVersionRequest& request, const DescribeDrdsInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceVersionOutcomeCallable DrdsClient::describeDrdsInstanceVersionCallable(const DescribeDrdsInstanceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceVersionOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstancesOutcome DrdsClient::describeDrdsInstances(const DescribeDrdsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstancesOutcome(DescribeDrdsInstancesResult(outcome.result()));
	else
		return DescribeDrdsInstancesOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstancesAsync(const DescribeDrdsInstancesRequest& request, const DescribeDrdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstancesOutcomeCallable DrdsClient::describeDrdsInstancesCallable(const DescribeDrdsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsParamsOutcome DrdsClient::describeDrdsParams(const DescribeDrdsParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsParamsOutcome(DescribeDrdsParamsResult(outcome.result()));
	else
		return DescribeDrdsParamsOutcome(outcome.error());
}

void DrdsClient::describeDrdsParamsAsync(const DescribeDrdsParamsRequest& request, const DescribeDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsParamsOutcomeCallable DrdsClient::describeDrdsParamsCallable(const DescribeDrdsParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsParamsOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsRdsInstancesOutcome DrdsClient::describeDrdsRdsInstances(const DescribeDrdsRdsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsRdsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsRdsInstancesOutcome(DescribeDrdsRdsInstancesResult(outcome.result()));
	else
		return DescribeDrdsRdsInstancesOutcome(outcome.error());
}

void DrdsClient::describeDrdsRdsInstancesAsync(const DescribeDrdsRdsInstancesRequest& request, const DescribeDrdsRdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsRdsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsRdsInstancesOutcomeCallable DrdsClient::describeDrdsRdsInstancesCallable(const DescribeDrdsRdsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsRdsInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsRdsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsShardingDbsOutcome DrdsClient::describeDrdsShardingDbs(const DescribeDrdsShardingDbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsShardingDbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsShardingDbsOutcome(DescribeDrdsShardingDbsResult(outcome.result()));
	else
		return DescribeDrdsShardingDbsOutcome(outcome.error());
}

void DrdsClient::describeDrdsShardingDbsAsync(const DescribeDrdsShardingDbsRequest& request, const DescribeDrdsShardingDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsShardingDbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsShardingDbsOutcomeCallable DrdsClient::describeDrdsShardingDbsCallable(const DescribeDrdsShardingDbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsShardingDbsOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsShardingDbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsSlowSqlsOutcome DrdsClient::describeDrdsSlowSqls(const DescribeDrdsSlowSqlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsSlowSqlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsSlowSqlsOutcome(DescribeDrdsSlowSqlsResult(outcome.result()));
	else
		return DescribeDrdsSlowSqlsOutcome(outcome.error());
}

void DrdsClient::describeDrdsSlowSqlsAsync(const DescribeDrdsSlowSqlsRequest& request, const DescribeDrdsSlowSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsSlowSqls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsSlowSqlsOutcomeCallable DrdsClient::describeDrdsSlowSqlsCallable(const DescribeDrdsSlowSqlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsSlowSqlsOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsSlowSqls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsSqlAuditStatusOutcome DrdsClient::describeDrdsSqlAuditStatus(const DescribeDrdsSqlAuditStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsSqlAuditStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsSqlAuditStatusOutcome(DescribeDrdsSqlAuditStatusResult(outcome.result()));
	else
		return DescribeDrdsSqlAuditStatusOutcome(outcome.error());
}

void DrdsClient::describeDrdsSqlAuditStatusAsync(const DescribeDrdsSqlAuditStatusRequest& request, const DescribeDrdsSqlAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsSqlAuditStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsSqlAuditStatusOutcomeCallable DrdsClient::describeDrdsSqlAuditStatusCallable(const DescribeDrdsSqlAuditStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsSqlAuditStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsSqlAuditStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsTasksOutcome DrdsClient::describeDrdsTasks(const DescribeDrdsTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsTasksOutcome(DescribeDrdsTasksResult(outcome.result()));
	else
		return DescribeDrdsTasksOutcome(outcome.error());
}

void DrdsClient::describeDrdsTasksAsync(const DescribeDrdsTasksRequest& request, const DescribeDrdsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsTasksOutcomeCallable DrdsClient::describeDrdsTasksCallable(const DescribeDrdsTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeExpandLogicTableInfoListOutcome DrdsClient::describeExpandLogicTableInfoList(const DescribeExpandLogicTableInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpandLogicTableInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpandLogicTableInfoListOutcome(DescribeExpandLogicTableInfoListResult(outcome.result()));
	else
		return DescribeExpandLogicTableInfoListOutcome(outcome.error());
}

void DrdsClient::describeExpandLogicTableInfoListAsync(const DescribeExpandLogicTableInfoListRequest& request, const DescribeExpandLogicTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpandLogicTableInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeExpandLogicTableInfoListOutcomeCallable DrdsClient::describeExpandLogicTableInfoListCallable(const DescribeExpandLogicTableInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpandLogicTableInfoListOutcome()>>(
			[this, request]()
			{
			return this->describeExpandLogicTableInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeHotDbListOutcome DrdsClient::describeHotDbList(const DescribeHotDbListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHotDbListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHotDbListOutcome(DescribeHotDbListResult(outcome.result()));
	else
		return DescribeHotDbListOutcome(outcome.error());
}

void DrdsClient::describeHotDbListAsync(const DescribeHotDbListRequest& request, const DescribeHotDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHotDbList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeHotDbListOutcomeCallable DrdsClient::describeHotDbListCallable(const DescribeHotDbListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHotDbListOutcome()>>(
			[this, request]()
			{
			return this->describeHotDbList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeInstDbLogInfoOutcome DrdsClient::describeInstDbLogInfo(const DescribeInstDbLogInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstDbLogInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstDbLogInfoOutcome(DescribeInstDbLogInfoResult(outcome.result()));
	else
		return DescribeInstDbLogInfoOutcome(outcome.error());
}

void DrdsClient::describeInstDbLogInfoAsync(const DescribeInstDbLogInfoRequest& request, const DescribeInstDbLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstDbLogInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeInstDbLogInfoOutcomeCallable DrdsClient::describeInstDbLogInfoCallable(const DescribeInstDbLogInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstDbLogInfoOutcome()>>(
			[this, request]()
			{
			return this->describeInstDbLogInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeInstDbSlsInfoOutcome DrdsClient::describeInstDbSlsInfo(const DescribeInstDbSlsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstDbSlsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstDbSlsInfoOutcome(DescribeInstDbSlsInfoResult(outcome.result()));
	else
		return DescribeInstDbSlsInfoOutcome(outcome.error());
}

void DrdsClient::describeInstDbSlsInfoAsync(const DescribeInstDbSlsInfoRequest& request, const DescribeInstDbSlsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstDbSlsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeInstDbSlsInfoOutcomeCallable DrdsClient::describeInstDbSlsInfoCallable(const DescribeInstDbSlsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstDbSlsInfoOutcome()>>(
			[this, request]()
			{
			return this->describeInstDbSlsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeInstanceAccountsOutcome DrdsClient::describeInstanceAccounts(const DescribeInstanceAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAccountsOutcome(DescribeInstanceAccountsResult(outcome.result()));
	else
		return DescribeInstanceAccountsOutcome(outcome.error());
}

void DrdsClient::describeInstanceAccountsAsync(const DescribeInstanceAccountsRequest& request, const DescribeInstanceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeInstanceAccountsOutcomeCallable DrdsClient::describeInstanceAccountsCallable(const DescribeInstanceAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeInstanceSwitchAzoneOutcome DrdsClient::describeInstanceSwitchAzone(const DescribeInstanceSwitchAzoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSwitchAzoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSwitchAzoneOutcome(DescribeInstanceSwitchAzoneResult(outcome.result()));
	else
		return DescribeInstanceSwitchAzoneOutcome(outcome.error());
}

void DrdsClient::describeInstanceSwitchAzoneAsync(const DescribeInstanceSwitchAzoneRequest& request, const DescribeInstanceSwitchAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSwitchAzone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeInstanceSwitchAzoneOutcomeCallable DrdsClient::describeInstanceSwitchAzoneCallable(const DescribeInstanceSwitchAzoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSwitchAzoneOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSwitchAzone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeInstanceSwitchNetworkOutcome DrdsClient::describeInstanceSwitchNetwork(const DescribeInstanceSwitchNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSwitchNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSwitchNetworkOutcome(DescribeInstanceSwitchNetworkResult(outcome.result()));
	else
		return DescribeInstanceSwitchNetworkOutcome(outcome.error());
}

void DrdsClient::describeInstanceSwitchNetworkAsync(const DescribeInstanceSwitchNetworkRequest& request, const DescribeInstanceSwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSwitchNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeInstanceSwitchNetworkOutcomeCallable DrdsClient::describeInstanceSwitchNetworkCallable(const DescribeInstanceSwitchNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSwitchNetworkOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSwitchNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribePreCheckResultOutcome DrdsClient::describePreCheckResult(const DescribePreCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePreCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePreCheckResultOutcome(DescribePreCheckResultResult(outcome.result()));
	else
		return DescribePreCheckResultOutcome(outcome.error());
}

void DrdsClient::describePreCheckResultAsync(const DescribePreCheckResultRequest& request, const DescribePreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePreCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribePreCheckResultOutcomeCallable DrdsClient::describePreCheckResultCallable(const DescribePreCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePreCheckResultOutcome()>>(
			[this, request]()
			{
			return this->describePreCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRDSPerformanceOutcome DrdsClient::describeRDSPerformance(const DescribeRDSPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRDSPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRDSPerformanceOutcome(DescribeRDSPerformanceResult(outcome.result()));
	else
		return DescribeRDSPerformanceOutcome(outcome.error());
}

void DrdsClient::describeRDSPerformanceAsync(const DescribeRDSPerformanceRequest& request, const DescribeRDSPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRDSPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRDSPerformanceOutcomeCallable DrdsClient::describeRDSPerformanceCallable(const DescribeRDSPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRDSPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeRDSPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRdsCommodityOutcome DrdsClient::describeRdsCommodity(const DescribeRdsCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsCommodityOutcome(DescribeRdsCommodityResult(outcome.result()));
	else
		return DescribeRdsCommodityOutcome(outcome.error());
}

void DrdsClient::describeRdsCommodityAsync(const DescribeRdsCommodityRequest& request, const DescribeRdsCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRdsCommodityOutcomeCallable DrdsClient::describeRdsCommodityCallable(const DescribeRdsCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsCommodityOutcome()>>(
			[this, request]()
			{
			return this->describeRdsCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRdsPerformanceSummaryOutcome DrdsClient::describeRdsPerformanceSummary(const DescribeRdsPerformanceSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsPerformanceSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsPerformanceSummaryOutcome(DescribeRdsPerformanceSummaryResult(outcome.result()));
	else
		return DescribeRdsPerformanceSummaryOutcome(outcome.error());
}

void DrdsClient::describeRdsPerformanceSummaryAsync(const DescribeRdsPerformanceSummaryRequest& request, const DescribeRdsPerformanceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsPerformanceSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRdsPerformanceSummaryOutcomeCallable DrdsClient::describeRdsPerformanceSummaryCallable(const DescribeRdsPerformanceSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsPerformanceSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRdsPerformanceSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRdsSuperAccountInstancesOutcome DrdsClient::describeRdsSuperAccountInstances(const DescribeRdsSuperAccountInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsSuperAccountInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsSuperAccountInstancesOutcome(DescribeRdsSuperAccountInstancesResult(outcome.result()));
	else
		return DescribeRdsSuperAccountInstancesOutcome(outcome.error());
}

void DrdsClient::describeRdsSuperAccountInstancesAsync(const DescribeRdsSuperAccountInstancesRequest& request, const DescribeRdsSuperAccountInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsSuperAccountInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRdsSuperAccountInstancesOutcomeCallable DrdsClient::describeRdsSuperAccountInstancesCallable(const DescribeRdsSuperAccountInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsSuperAccountInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeRdsSuperAccountInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRecycleBinStatusOutcome DrdsClient::describeRecycleBinStatus(const DescribeRecycleBinStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecycleBinStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecycleBinStatusOutcome(DescribeRecycleBinStatusResult(outcome.result()));
	else
		return DescribeRecycleBinStatusOutcome(outcome.error());
}

void DrdsClient::describeRecycleBinStatusAsync(const DescribeRecycleBinStatusRequest& request, const DescribeRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecycleBinStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRecycleBinStatusOutcomeCallable DrdsClient::describeRecycleBinStatusCallable(const DescribeRecycleBinStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecycleBinStatusOutcome()>>(
			[this, request]()
			{
			return this->describeRecycleBinStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRecycleBinTablesOutcome DrdsClient::describeRecycleBinTables(const DescribeRecycleBinTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecycleBinTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecycleBinTablesOutcome(DescribeRecycleBinTablesResult(outcome.result()));
	else
		return DescribeRecycleBinTablesOutcome(outcome.error());
}

void DrdsClient::describeRecycleBinTablesAsync(const DescribeRecycleBinTablesRequest& request, const DescribeRecycleBinTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecycleBinTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRecycleBinTablesOutcomeCallable DrdsClient::describeRecycleBinTablesCallable(const DescribeRecycleBinTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecycleBinTablesOutcome()>>(
			[this, request]()
			{
			return this->describeRecycleBinTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRestoreOrderOutcome DrdsClient::describeRestoreOrder(const DescribeRestoreOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreOrderOutcome(DescribeRestoreOrderResult(outcome.result()));
	else
		return DescribeRestoreOrderOutcome(outcome.error());
}

void DrdsClient::describeRestoreOrderAsync(const DescribeRestoreOrderRequest& request, const DescribeRestoreOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRestoreOrderOutcomeCallable DrdsClient::describeRestoreOrderCallable(const DescribeRestoreOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreOrderOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeShardTaskInfoOutcome DrdsClient::describeShardTaskInfo(const DescribeShardTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeShardTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeShardTaskInfoOutcome(DescribeShardTaskInfoResult(outcome.result()));
	else
		return DescribeShardTaskInfoOutcome(outcome.error());
}

void DrdsClient::describeShardTaskInfoAsync(const DescribeShardTaskInfoRequest& request, const DescribeShardTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeShardTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeShardTaskInfoOutcomeCallable DrdsClient::describeShardTaskInfoCallable(const DescribeShardTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeShardTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->describeShardTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeSqlFlashbakTaskOutcome DrdsClient::describeSqlFlashbakTask(const DescribeSqlFlashbakTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSqlFlashbakTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSqlFlashbakTaskOutcome(DescribeSqlFlashbakTaskResult(outcome.result()));
	else
		return DescribeSqlFlashbakTaskOutcome(outcome.error());
}

void DrdsClient::describeSqlFlashbakTaskAsync(const DescribeSqlFlashbakTaskRequest& request, const DescribeSqlFlashbakTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSqlFlashbakTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeSqlFlashbakTaskOutcomeCallable DrdsClient::describeSqlFlashbakTaskCallable(const DescribeSqlFlashbakTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSqlFlashbakTaskOutcome()>>(
			[this, request]()
			{
			return this->describeSqlFlashbakTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeTableOutcome DrdsClient::describeTable(const DescribeTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTableOutcome(DescribeTableResult(outcome.result()));
	else
		return DescribeTableOutcome(outcome.error());
}

void DrdsClient::describeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeTableOutcomeCallable DrdsClient::describeTableCallable(const DescribeTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTableOutcome()>>(
			[this, request]()
			{
			return this->describeTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeTableListByTypeOutcome DrdsClient::describeTableListByType(const DescribeTableListByTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTableListByTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTableListByTypeOutcome(DescribeTableListByTypeResult(outcome.result()));
	else
		return DescribeTableListByTypeOutcome(outcome.error());
}

void DrdsClient::describeTableListByTypeAsync(const DescribeTableListByTypeRequest& request, const DescribeTableListByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTableListByType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeTableListByTypeOutcomeCallable DrdsClient::describeTableListByTypeCallable(const DescribeTableListByTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTableListByTypeOutcome()>>(
			[this, request]()
			{
			return this->describeTableListByType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeTablesOutcome DrdsClient::describeTables(const DescribeTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTablesOutcome(DescribeTablesResult(outcome.result()));
	else
		return DescribeTablesOutcome(outcome.error());
}

void DrdsClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeTablesOutcomeCallable DrdsClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DisableSqlAuditOutcome DrdsClient::disableSqlAudit(const DisableSqlAuditRequest &request) const
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

void DrdsClient::disableSqlAuditAsync(const DisableSqlAuditRequest& request, const DisableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSqlAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DisableSqlAuditOutcomeCallable DrdsClient::disableSqlAuditCallable(const DisableSqlAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSqlAuditOutcome()>>(
			[this, request]()
			{
			return this->disableSqlAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::EnableInstanceIpv6AddressOutcome DrdsClient::enableInstanceIpv6Address(const EnableInstanceIpv6AddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableInstanceIpv6AddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableInstanceIpv6AddressOutcome(EnableInstanceIpv6AddressResult(outcome.result()));
	else
		return EnableInstanceIpv6AddressOutcome(outcome.error());
}

void DrdsClient::enableInstanceIpv6AddressAsync(const EnableInstanceIpv6AddressRequest& request, const EnableInstanceIpv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableInstanceIpv6Address(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::EnableInstanceIpv6AddressOutcomeCallable DrdsClient::enableInstanceIpv6AddressCallable(const EnableInstanceIpv6AddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableInstanceIpv6AddressOutcome()>>(
			[this, request]()
			{
			return this->enableInstanceIpv6Address(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::EnableSqlAuditOutcome DrdsClient::enableSqlAudit(const EnableSqlAuditRequest &request) const
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

void DrdsClient::enableSqlAuditAsync(const EnableSqlAuditRequest& request, const EnableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSqlAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::EnableSqlAuditOutcomeCallable DrdsClient::enableSqlAuditCallable(const EnableSqlAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSqlAuditOutcome()>>(
			[this, request]()
			{
			return this->enableSqlAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::EnableSqlFlashbackMatchSwitchOutcome DrdsClient::enableSqlFlashbackMatchSwitch(const EnableSqlFlashbackMatchSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSqlFlashbackMatchSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSqlFlashbackMatchSwitchOutcome(EnableSqlFlashbackMatchSwitchResult(outcome.result()));
	else
		return EnableSqlFlashbackMatchSwitchOutcome(outcome.error());
}

void DrdsClient::enableSqlFlashbackMatchSwitchAsync(const EnableSqlFlashbackMatchSwitchRequest& request, const EnableSqlFlashbackMatchSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSqlFlashbackMatchSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::EnableSqlFlashbackMatchSwitchOutcomeCallable DrdsClient::enableSqlFlashbackMatchSwitchCallable(const EnableSqlFlashbackMatchSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSqlFlashbackMatchSwitchOutcome()>>(
			[this, request]()
			{
			return this->enableSqlFlashbackMatchSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::FlashbackRecycleBinTableOutcome DrdsClient::flashbackRecycleBinTable(const FlashbackRecycleBinTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FlashbackRecycleBinTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FlashbackRecycleBinTableOutcome(FlashbackRecycleBinTableResult(outcome.result()));
	else
		return FlashbackRecycleBinTableOutcome(outcome.error());
}

void DrdsClient::flashbackRecycleBinTableAsync(const FlashbackRecycleBinTableRequest& request, const FlashbackRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, flashbackRecycleBinTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::FlashbackRecycleBinTableOutcomeCallable DrdsClient::flashbackRecycleBinTableCallable(const FlashbackRecycleBinTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FlashbackRecycleBinTableOutcome()>>(
			[this, request]()
			{
			return this->flashbackRecycleBinTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::GetDrdsDbRdsRelationInfoOutcome DrdsClient::getDrdsDbRdsRelationInfo(const GetDrdsDbRdsRelationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDrdsDbRdsRelationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDrdsDbRdsRelationInfoOutcome(GetDrdsDbRdsRelationInfoResult(outcome.result()));
	else
		return GetDrdsDbRdsRelationInfoOutcome(outcome.error());
}

void DrdsClient::getDrdsDbRdsRelationInfoAsync(const GetDrdsDbRdsRelationInfoRequest& request, const GetDrdsDbRdsRelationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDrdsDbRdsRelationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::GetDrdsDbRdsRelationInfoOutcomeCallable DrdsClient::getDrdsDbRdsRelationInfoCallable(const GetDrdsDbRdsRelationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDrdsDbRdsRelationInfoOutcome()>>(
			[this, request]()
			{
			return this->getDrdsDbRdsRelationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ListTagResourcesOutcome DrdsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void DrdsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ListTagResourcesOutcomeCallable DrdsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ManagePrivateRdsOutcome DrdsClient::managePrivateRds(const ManagePrivateRdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManagePrivateRdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManagePrivateRdsOutcome(ManagePrivateRdsResult(outcome.result()));
	else
		return ManagePrivateRdsOutcome(outcome.error());
}

void DrdsClient::managePrivateRdsAsync(const ManagePrivateRdsRequest& request, const ManagePrivateRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, managePrivateRds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ManagePrivateRdsOutcomeCallable DrdsClient::managePrivateRdsCallable(const ManagePrivateRdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManagePrivateRdsOutcome()>>(
			[this, request]()
			{
			return this->managePrivateRds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyAccountDescriptionOutcome DrdsClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void DrdsClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyAccountDescriptionOutcomeCallable DrdsClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyAccountPrivilegeOutcome DrdsClient::modifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request) const
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

void DrdsClient::modifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyAccountPrivilegeOutcomeCallable DrdsClient::modifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyDrdsInstanceDescriptionOutcome DrdsClient::modifyDrdsInstanceDescription(const ModifyDrdsInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDrdsInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDrdsInstanceDescriptionOutcome(ModifyDrdsInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDrdsInstanceDescriptionOutcome(outcome.error());
}

void DrdsClient::modifyDrdsInstanceDescriptionAsync(const ModifyDrdsInstanceDescriptionRequest& request, const ModifyDrdsInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDrdsInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyDrdsInstanceDescriptionOutcomeCallable DrdsClient::modifyDrdsInstanceDescriptionCallable(const ModifyDrdsInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDrdsInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDrdsInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyDrdsIpWhiteListOutcome DrdsClient::modifyDrdsIpWhiteList(const ModifyDrdsIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDrdsIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDrdsIpWhiteListOutcome(ModifyDrdsIpWhiteListResult(outcome.result()));
	else
		return ModifyDrdsIpWhiteListOutcome(outcome.error());
}

void DrdsClient::modifyDrdsIpWhiteListAsync(const ModifyDrdsIpWhiteListRequest& request, const ModifyDrdsIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDrdsIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyDrdsIpWhiteListOutcomeCallable DrdsClient::modifyDrdsIpWhiteListCallable(const ModifyDrdsIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDrdsIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->modifyDrdsIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyPolarDbReadWeightOutcome DrdsClient::modifyPolarDbReadWeight(const ModifyPolarDbReadWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPolarDbReadWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPolarDbReadWeightOutcome(ModifyPolarDbReadWeightResult(outcome.result()));
	else
		return ModifyPolarDbReadWeightOutcome(outcome.error());
}

void DrdsClient::modifyPolarDbReadWeightAsync(const ModifyPolarDbReadWeightRequest& request, const ModifyPolarDbReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPolarDbReadWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyPolarDbReadWeightOutcomeCallable DrdsClient::modifyPolarDbReadWeightCallable(const ModifyPolarDbReadWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPolarDbReadWeightOutcome()>>(
			[this, request]()
			{
			return this->modifyPolarDbReadWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyRdsReadWeightOutcome DrdsClient::modifyRdsReadWeight(const ModifyRdsReadWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRdsReadWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRdsReadWeightOutcome(ModifyRdsReadWeightResult(outcome.result()));
	else
		return ModifyRdsReadWeightOutcome(outcome.error());
}

void DrdsClient::modifyRdsReadWeightAsync(const ModifyRdsReadWeightRequest& request, const ModifyRdsReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRdsReadWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyRdsReadWeightOutcomeCallable DrdsClient::modifyRdsReadWeightCallable(const ModifyRdsReadWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRdsReadWeightOutcome()>>(
			[this, request]()
			{
			return this->modifyRdsReadWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::PutStartBackupOutcome DrdsClient::putStartBackup(const PutStartBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutStartBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutStartBackupOutcome(PutStartBackupResult(outcome.result()));
	else
		return PutStartBackupOutcome(outcome.error());
}

void DrdsClient::putStartBackupAsync(const PutStartBackupRequest& request, const PutStartBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putStartBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::PutStartBackupOutcomeCallable DrdsClient::putStartBackupCallable(const PutStartBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutStartBackupOutcome()>>(
			[this, request]()
			{
			return this->putStartBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RefreshDrdsAtomUrlOutcome DrdsClient::refreshDrdsAtomUrl(const RefreshDrdsAtomUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshDrdsAtomUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshDrdsAtomUrlOutcome(RefreshDrdsAtomUrlResult(outcome.result()));
	else
		return RefreshDrdsAtomUrlOutcome(outcome.error());
}

void DrdsClient::refreshDrdsAtomUrlAsync(const RefreshDrdsAtomUrlRequest& request, const RefreshDrdsAtomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshDrdsAtomUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RefreshDrdsAtomUrlOutcomeCallable DrdsClient::refreshDrdsAtomUrlCallable(const RefreshDrdsAtomUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshDrdsAtomUrlOutcome()>>(
			[this, request]()
			{
			return this->refreshDrdsAtomUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ReleaseInstanceInternetAddressOutcome DrdsClient::releaseInstanceInternetAddress(const ReleaseInstanceInternetAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceInternetAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceInternetAddressOutcome(ReleaseInstanceInternetAddressResult(outcome.result()));
	else
		return ReleaseInstanceInternetAddressOutcome(outcome.error());
}

void DrdsClient::releaseInstanceInternetAddressAsync(const ReleaseInstanceInternetAddressRequest& request, const ReleaseInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstanceInternetAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ReleaseInstanceInternetAddressOutcomeCallable DrdsClient::releaseInstanceInternetAddressCallable(const ReleaseInstanceInternetAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceInternetAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseInstanceInternetAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveBackupsSetOutcome DrdsClient::removeBackupsSet(const RemoveBackupsSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackupsSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackupsSetOutcome(RemoveBackupsSetResult(outcome.result()));
	else
		return RemoveBackupsSetOutcome(outcome.error());
}

void DrdsClient::removeBackupsSetAsync(const RemoveBackupsSetRequest& request, const RemoveBackupsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackupsSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveBackupsSetOutcomeCallable DrdsClient::removeBackupsSetCallable(const RemoveBackupsSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackupsSetOutcome()>>(
			[this, request]()
			{
			return this->removeBackupsSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveDrdsDbOutcome DrdsClient::removeDrdsDb(const RemoveDrdsDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDrdsDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDrdsDbOutcome(RemoveDrdsDbResult(outcome.result()));
	else
		return RemoveDrdsDbOutcome(outcome.error());
}

void DrdsClient::removeDrdsDbAsync(const RemoveDrdsDbRequest& request, const RemoveDrdsDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDrdsDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveDrdsDbOutcomeCallable DrdsClient::removeDrdsDbCallable(const RemoveDrdsDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDrdsDbOutcome()>>(
			[this, request]()
			{
			return this->removeDrdsDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveDrdsDbFailedRecordOutcome DrdsClient::removeDrdsDbFailedRecord(const RemoveDrdsDbFailedRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDrdsDbFailedRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDrdsDbFailedRecordOutcome(RemoveDrdsDbFailedRecordResult(outcome.result()));
	else
		return RemoveDrdsDbFailedRecordOutcome(outcome.error());
}

void DrdsClient::removeDrdsDbFailedRecordAsync(const RemoveDrdsDbFailedRecordRequest& request, const RemoveDrdsDbFailedRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDrdsDbFailedRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveDrdsDbFailedRecordOutcomeCallable DrdsClient::removeDrdsDbFailedRecordCallable(const RemoveDrdsDbFailedRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDrdsDbFailedRecordOutcome()>>(
			[this, request]()
			{
			return this->removeDrdsDbFailedRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveDrdsInstanceOutcome DrdsClient::removeDrdsInstance(const RemoveDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDrdsInstanceOutcome(RemoveDrdsInstanceResult(outcome.result()));
	else
		return RemoveDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::removeDrdsInstanceAsync(const RemoveDrdsInstanceRequest& request, const RemoveDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveDrdsInstanceOutcomeCallable DrdsClient::removeDrdsInstanceCallable(const RemoveDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->removeDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveInstanceAccountOutcome DrdsClient::removeInstanceAccount(const RemoveInstanceAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveInstanceAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveInstanceAccountOutcome(RemoveInstanceAccountResult(outcome.result()));
	else
		return RemoveInstanceAccountOutcome(outcome.error());
}

void DrdsClient::removeInstanceAccountAsync(const RemoveInstanceAccountRequest& request, const RemoveInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeInstanceAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveInstanceAccountOutcomeCallable DrdsClient::removeInstanceAccountCallable(const RemoveInstanceAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveInstanceAccountOutcome()>>(
			[this, request]()
			{
			return this->removeInstanceAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveRecycleBinTableOutcome DrdsClient::removeRecycleBinTable(const RemoveRecycleBinTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveRecycleBinTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveRecycleBinTableOutcome(RemoveRecycleBinTableResult(outcome.result()));
	else
		return RemoveRecycleBinTableOutcome(outcome.error());
}

void DrdsClient::removeRecycleBinTableAsync(const RemoveRecycleBinTableRequest& request, const RemoveRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeRecycleBinTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveRecycleBinTableOutcomeCallable DrdsClient::removeRecycleBinTableCallable(const RemoveRecycleBinTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveRecycleBinTableOutcome()>>(
			[this, request]()
			{
			return this->removeRecycleBinTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RestartDrdsInstanceOutcome DrdsClient::restartDrdsInstance(const RestartDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDrdsInstanceOutcome(RestartDrdsInstanceResult(outcome.result()));
	else
		return RestartDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::restartDrdsInstanceAsync(const RestartDrdsInstanceRequest& request, const RestartDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RestartDrdsInstanceOutcomeCallable DrdsClient::restartDrdsInstanceCallable(const RestartDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RollbackInstanceVersionOutcome DrdsClient::rollbackInstanceVersion(const RollbackInstanceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackInstanceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackInstanceVersionOutcome(RollbackInstanceVersionResult(outcome.result()));
	else
		return RollbackInstanceVersionOutcome(outcome.error());
}

void DrdsClient::rollbackInstanceVersionAsync(const RollbackInstanceVersionRequest& request, const RollbackInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackInstanceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RollbackInstanceVersionOutcomeCallable DrdsClient::rollbackInstanceVersionCallable(const RollbackInstanceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackInstanceVersionOutcome()>>(
			[this, request]()
			{
			return this->rollbackInstanceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetBackupLocalOutcome DrdsClient::setBackupLocal(const SetBackupLocalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetBackupLocalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetBackupLocalOutcome(SetBackupLocalResult(outcome.result()));
	else
		return SetBackupLocalOutcome(outcome.error());
}

void DrdsClient::setBackupLocalAsync(const SetBackupLocalRequest& request, const SetBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setBackupLocal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetBackupLocalOutcomeCallable DrdsClient::setBackupLocalCallable(const SetBackupLocalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetBackupLocalOutcome()>>(
			[this, request]()
			{
			return this->setBackupLocal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetBackupPolicyOutcome DrdsClient::setBackupPolicy(const SetBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetBackupPolicyOutcome(SetBackupPolicyResult(outcome.result()));
	else
		return SetBackupPolicyOutcome(outcome.error());
}

void DrdsClient::setBackupPolicyAsync(const SetBackupPolicyRequest& request, const SetBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetBackupPolicyOutcomeCallable DrdsClient::setBackupPolicyCallable(const SetBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->setBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetupBroadcastTablesOutcome DrdsClient::setupBroadcastTables(const SetupBroadcastTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupBroadcastTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupBroadcastTablesOutcome(SetupBroadcastTablesResult(outcome.result()));
	else
		return SetupBroadcastTablesOutcome(outcome.error());
}

void DrdsClient::setupBroadcastTablesAsync(const SetupBroadcastTablesRequest& request, const SetupBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupBroadcastTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetupBroadcastTablesOutcomeCallable DrdsClient::setupBroadcastTablesCallable(const SetupBroadcastTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupBroadcastTablesOutcome()>>(
			[this, request]()
			{
			return this->setupBroadcastTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetupDrdsParamsOutcome DrdsClient::setupDrdsParams(const SetupDrdsParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupDrdsParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupDrdsParamsOutcome(SetupDrdsParamsResult(outcome.result()));
	else
		return SetupDrdsParamsOutcome(outcome.error());
}

void DrdsClient::setupDrdsParamsAsync(const SetupDrdsParamsRequest& request, const SetupDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupDrdsParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetupDrdsParamsOutcomeCallable DrdsClient::setupDrdsParamsCallable(const SetupDrdsParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupDrdsParamsOutcome()>>(
			[this, request]()
			{
			return this->setupDrdsParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetupRecycleBinStatusOutcome DrdsClient::setupRecycleBinStatus(const SetupRecycleBinStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupRecycleBinStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupRecycleBinStatusOutcome(SetupRecycleBinStatusResult(outcome.result()));
	else
		return SetupRecycleBinStatusOutcome(outcome.error());
}

void DrdsClient::setupRecycleBinStatusAsync(const SetupRecycleBinStatusRequest& request, const SetupRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupRecycleBinStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetupRecycleBinStatusOutcomeCallable DrdsClient::setupRecycleBinStatusCallable(const SetupRecycleBinStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupRecycleBinStatusOutcome()>>(
			[this, request]()
			{
			return this->setupRecycleBinStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SetupTableOutcome DrdsClient::setupTable(const SetupTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupTableOutcome(SetupTableResult(outcome.result()));
	else
		return SetupTableOutcome(outcome.error());
}

void DrdsClient::setupTableAsync(const SetupTableRequest& request, const SetupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SetupTableOutcomeCallable DrdsClient::setupTableCallable(const SetupTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupTableOutcome()>>(
			[this, request]()
			{
			return this->setupTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::StartRestoreOutcome DrdsClient::startRestore(const StartRestoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRestoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRestoreOutcome(StartRestoreResult(outcome.result()));
	else
		return StartRestoreOutcome(outcome.error());
}

void DrdsClient::startRestoreAsync(const StartRestoreRequest& request, const StartRestoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRestore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::StartRestoreOutcomeCallable DrdsClient::startRestoreCallable(const StartRestoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRestoreOutcome()>>(
			[this, request]()
			{
			return this->startRestore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitCleanTaskOutcome DrdsClient::submitCleanTask(const SubmitCleanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCleanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCleanTaskOutcome(SubmitCleanTaskResult(outcome.result()));
	else
		return SubmitCleanTaskOutcome(outcome.error());
}

void DrdsClient::submitCleanTaskAsync(const SubmitCleanTaskRequest& request, const SubmitCleanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCleanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitCleanTaskOutcomeCallable DrdsClient::submitCleanTaskCallable(const SubmitCleanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCleanTaskOutcome()>>(
			[this, request]()
			{
			return this->submitCleanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitHotExpandPreCheckTaskOutcome DrdsClient::submitHotExpandPreCheckTask(const SubmitHotExpandPreCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitHotExpandPreCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitHotExpandPreCheckTaskOutcome(SubmitHotExpandPreCheckTaskResult(outcome.result()));
	else
		return SubmitHotExpandPreCheckTaskOutcome(outcome.error());
}

void DrdsClient::submitHotExpandPreCheckTaskAsync(const SubmitHotExpandPreCheckTaskRequest& request, const SubmitHotExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitHotExpandPreCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitHotExpandPreCheckTaskOutcomeCallable DrdsClient::submitHotExpandPreCheckTaskCallable(const SubmitHotExpandPreCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitHotExpandPreCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->submitHotExpandPreCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitHotExpandTaskOutcome DrdsClient::submitHotExpandTask(const SubmitHotExpandTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitHotExpandTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitHotExpandTaskOutcome(SubmitHotExpandTaskResult(outcome.result()));
	else
		return SubmitHotExpandTaskOutcome(outcome.error());
}

void DrdsClient::submitHotExpandTaskAsync(const SubmitHotExpandTaskRequest& request, const SubmitHotExpandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitHotExpandTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitHotExpandTaskOutcomeCallable DrdsClient::submitHotExpandTaskCallable(const SubmitHotExpandTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitHotExpandTaskOutcome()>>(
			[this, request]()
			{
			return this->submitHotExpandTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitSmoothExpandPreCheckOutcome DrdsClient::submitSmoothExpandPreCheck(const SubmitSmoothExpandPreCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSmoothExpandPreCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSmoothExpandPreCheckOutcome(SubmitSmoothExpandPreCheckResult(outcome.result()));
	else
		return SubmitSmoothExpandPreCheckOutcome(outcome.error());
}

void DrdsClient::submitSmoothExpandPreCheckAsync(const SubmitSmoothExpandPreCheckRequest& request, const SubmitSmoothExpandPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSmoothExpandPreCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitSmoothExpandPreCheckOutcomeCallable DrdsClient::submitSmoothExpandPreCheckCallable(const SubmitSmoothExpandPreCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSmoothExpandPreCheckOutcome()>>(
			[this, request]()
			{
			return this->submitSmoothExpandPreCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitSmoothExpandPreCheckTaskOutcome DrdsClient::submitSmoothExpandPreCheckTask(const SubmitSmoothExpandPreCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSmoothExpandPreCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSmoothExpandPreCheckTaskOutcome(SubmitSmoothExpandPreCheckTaskResult(outcome.result()));
	else
		return SubmitSmoothExpandPreCheckTaskOutcome(outcome.error());
}

void DrdsClient::submitSmoothExpandPreCheckTaskAsync(const SubmitSmoothExpandPreCheckTaskRequest& request, const SubmitSmoothExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSmoothExpandPreCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitSmoothExpandPreCheckTaskOutcomeCallable DrdsClient::submitSmoothExpandPreCheckTaskCallable(const SubmitSmoothExpandPreCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSmoothExpandPreCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->submitSmoothExpandPreCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SubmitSqlFlashbackTaskOutcome DrdsClient::submitSqlFlashbackTask(const SubmitSqlFlashbackTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSqlFlashbackTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSqlFlashbackTaskOutcome(SubmitSqlFlashbackTaskResult(outcome.result()));
	else
		return SubmitSqlFlashbackTaskOutcome(outcome.error());
}

void DrdsClient::submitSqlFlashbackTaskAsync(const SubmitSqlFlashbackTaskRequest& request, const SubmitSqlFlashbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSqlFlashbackTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SubmitSqlFlashbackTaskOutcomeCallable DrdsClient::submitSqlFlashbackTaskCallable(const SubmitSqlFlashbackTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSqlFlashbackTaskOutcome()>>(
			[this, request]()
			{
			return this->submitSqlFlashbackTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::SwitchGlobalBroadcastTypeOutcome DrdsClient::switchGlobalBroadcastType(const SwitchGlobalBroadcastTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchGlobalBroadcastTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchGlobalBroadcastTypeOutcome(SwitchGlobalBroadcastTypeResult(outcome.result()));
	else
		return SwitchGlobalBroadcastTypeOutcome(outcome.error());
}

void DrdsClient::switchGlobalBroadcastTypeAsync(const SwitchGlobalBroadcastTypeRequest& request, const SwitchGlobalBroadcastTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchGlobalBroadcastType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::SwitchGlobalBroadcastTypeOutcomeCallable DrdsClient::switchGlobalBroadcastTypeCallable(const SwitchGlobalBroadcastTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchGlobalBroadcastTypeOutcome()>>(
			[this, request]()
			{
			return this->switchGlobalBroadcastType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::TagResourcesOutcome DrdsClient::tagResources(const TagResourcesRequest &request) const
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

void DrdsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::TagResourcesOutcomeCallable DrdsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UntagResourcesOutcome DrdsClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void DrdsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UntagResourcesOutcomeCallable DrdsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UpdateInstanceNetworkOutcome DrdsClient::updateInstanceNetwork(const UpdateInstanceNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceNetworkOutcome(UpdateInstanceNetworkResult(outcome.result()));
	else
		return UpdateInstanceNetworkOutcome(outcome.error());
}

void DrdsClient::updateInstanceNetworkAsync(const UpdateInstanceNetworkRequest& request, const UpdateInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UpdateInstanceNetworkOutcomeCallable DrdsClient::updateInstanceNetworkCallable(const UpdateInstanceNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceNetworkOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UpdatePrivateRdsClassOutcome DrdsClient::updatePrivateRdsClass(const UpdatePrivateRdsClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivateRdsClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivateRdsClassOutcome(UpdatePrivateRdsClassResult(outcome.result()));
	else
		return UpdatePrivateRdsClassOutcome(outcome.error());
}

void DrdsClient::updatePrivateRdsClassAsync(const UpdatePrivateRdsClassRequest& request, const UpdatePrivateRdsClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivateRdsClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UpdatePrivateRdsClassOutcomeCallable DrdsClient::updatePrivateRdsClassCallable(const UpdatePrivateRdsClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivateRdsClassOutcome()>>(
			[this, request]()
			{
			return this->updatePrivateRdsClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UpdateResourceGroupAttributeOutcome DrdsClient::updateResourceGroupAttribute(const UpdateResourceGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceGroupAttributeOutcome(UpdateResourceGroupAttributeResult(outcome.result()));
	else
		return UpdateResourceGroupAttributeOutcome(outcome.error());
}

void DrdsClient::updateResourceGroupAttributeAsync(const UpdateResourceGroupAttributeRequest& request, const UpdateResourceGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UpdateResourceGroupAttributeOutcomeCallable DrdsClient::updateResourceGroupAttributeCallable(const UpdateResourceGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateResourceGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UpgradeHiStoreInstanceOutcome DrdsClient::upgradeHiStoreInstance(const UpgradeHiStoreInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeHiStoreInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeHiStoreInstanceOutcome(UpgradeHiStoreInstanceResult(outcome.result()));
	else
		return UpgradeHiStoreInstanceOutcome(outcome.error());
}

void DrdsClient::upgradeHiStoreInstanceAsync(const UpgradeHiStoreInstanceRequest& request, const UpgradeHiStoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeHiStoreInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UpgradeHiStoreInstanceOutcomeCallable DrdsClient::upgradeHiStoreInstanceCallable(const UpgradeHiStoreInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeHiStoreInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeHiStoreInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::UpgradeInstanceVersionOutcome DrdsClient::upgradeInstanceVersion(const UpgradeInstanceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceVersionOutcome(UpgradeInstanceVersionResult(outcome.result()));
	else
		return UpgradeInstanceVersionOutcome(outcome.error());
}

void DrdsClient::upgradeInstanceVersionAsync(const UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstanceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::UpgradeInstanceVersionOutcomeCallable DrdsClient::upgradeInstanceVersionCallable(const UpgradeInstanceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstanceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ValidateShardTaskOutcome DrdsClient::validateShardTask(const ValidateShardTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateShardTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateShardTaskOutcome(ValidateShardTaskResult(outcome.result()));
	else
		return ValidateShardTaskOutcome(outcome.error());
}

void DrdsClient::validateShardTaskAsync(const ValidateShardTaskRequest& request, const ValidateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateShardTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ValidateShardTaskOutcomeCallable DrdsClient::validateShardTaskCallable(const ValidateShardTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateShardTaskOutcome()>>(
			[this, request]()
			{
			return this->validateShardTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

