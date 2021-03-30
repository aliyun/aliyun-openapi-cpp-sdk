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

#include <alibabacloud/openanalytics-open/Openanalytics_openClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

namespace
{
	const std::string SERVICE_NAME = "openanalytics-open";
}

Openanalytics_openClient::Openanalytics_openClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::Openanalytics_openClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::Openanalytics_openClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::~Openanalytics_openClient()
{}

Openanalytics_openClient::AddAccountOutcome Openanalytics_openClient::addAccount(const AddAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAccountOutcome(AddAccountResult(outcome.result()));
	else
		return AddAccountOutcome(outcome.error());
}

void Openanalytics_openClient::addAccountAsync(const AddAccountRequest& request, const AddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddAccountOutcomeCallable Openanalytics_openClient::addAccountCallable(const AddAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAccountOutcome()>>(
			[this, request]()
			{
			return this->addAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AddEndPointOutcome Openanalytics_openClient::addEndPoint(const AddEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEndPointOutcome(AddEndPointResult(outcome.result()));
	else
		return AddEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::addEndPointAsync(const AddEndPointRequest& request, const AddEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddEndPointOutcomeCallable Openanalytics_openClient::addEndPointCallable(const AddEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEndPointOutcome()>>(
			[this, request]()
			{
			return this->addEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AddPartitionsOutcome Openanalytics_openClient::addPartitions(const AddPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPartitionsOutcome(AddPartitionsResult(outcome.result()));
	else
		return AddPartitionsOutcome(outcome.error());
}

void Openanalytics_openClient::addPartitionsAsync(const AddPartitionsRequest& request, const AddPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddPartitionsOutcomeCallable Openanalytics_openClient::addPartitionsCallable(const AddPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPartitionsOutcome()>>(
			[this, request]()
			{
			return this->addPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AlterDatabaseOutcome Openanalytics_openClient::alterDatabase(const AlterDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AlterDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AlterDatabaseOutcome(AlterDatabaseResult(outcome.result()));
	else
		return AlterDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::alterDatabaseAsync(const AlterDatabaseRequest& request, const AlterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, alterDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AlterDatabaseOutcomeCallable Openanalytics_openClient::alterDatabaseCallable(const AlterDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AlterDatabaseOutcome()>>(
			[this, request]()
			{
			return this->alterDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AlterTableOutcome Openanalytics_openClient::alterTable(const AlterTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AlterTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AlterTableOutcome(AlterTableResult(outcome.result()));
	else
		return AlterTableOutcome(outcome.error());
}

void Openanalytics_openClient::alterTableAsync(const AlterTableRequest& request, const AlterTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, alterTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AlterTableOutcomeCallable Openanalytics_openClient::alterTableCallable(const AlterTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AlterTableOutcome()>>(
			[this, request]()
			{
			return this->alterTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CancelQueryByExecuteIdOutcome Openanalytics_openClient::cancelQueryByExecuteId(const CancelQueryByExecuteIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelQueryByExecuteIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelQueryByExecuteIdOutcome(CancelQueryByExecuteIdResult(outcome.result()));
	else
		return CancelQueryByExecuteIdOutcome(outcome.error());
}

void Openanalytics_openClient::cancelQueryByExecuteIdAsync(const CancelQueryByExecuteIdRequest& request, const CancelQueryByExecuteIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelQueryByExecuteId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CancelQueryByExecuteIdOutcomeCallable Openanalytics_openClient::cancelQueryByExecuteIdCallable(const CancelQueryByExecuteIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelQueryByExecuteIdOutcome()>>(
			[this, request]()
			{
			return this->cancelQueryByExecuteId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CancelQueryByIdOutcome Openanalytics_openClient::cancelQueryById(const CancelQueryByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelQueryByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelQueryByIdOutcome(CancelQueryByIdResult(outcome.result()));
	else
		return CancelQueryByIdOutcome(outcome.error());
}

void Openanalytics_openClient::cancelQueryByIdAsync(const CancelQueryByIdRequest& request, const CancelQueryByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelQueryById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CancelQueryByIdOutcomeCallable Openanalytics_openClient::cancelQueryByIdCallable(const CancelQueryByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelQueryByIdOutcome()>>(
			[this, request]()
			{
			return this->cancelQueryById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateDatabaseOutcome Openanalytics_openClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseOutcome(CreateDatabaseResult(outcome.result()));
	else
		return CreateDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateDatabaseOutcomeCallable Openanalytics_openClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateInstanceOutcome Openanalytics_openClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void Openanalytics_openClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateInstanceOutcomeCallable Openanalytics_openClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateTableOutcome Openanalytics_openClient::createTable(const CreateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTableOutcome(CreateTableResult(outcome.result()));
	else
		return CreateTableOutcome(outcome.error());
}

void Openanalytics_openClient::createTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateTableOutcomeCallable Openanalytics_openClient::createTableCallable(const CreateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
			[this, request]()
			{
			return this->createTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DeleteAccountOutcome Openanalytics_openClient::deleteAccount(const DeleteAccountRequest &request) const
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

void Openanalytics_openClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DeleteAccountOutcomeCallable Openanalytics_openClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeTagsOutcome Openanalytics_openClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void Openanalytics_openClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeTagsOutcomeCallable Openanalytics_openClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropDatabaseOutcome Openanalytics_openClient::dropDatabase(const DropDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropDatabaseOutcome(DropDatabaseResult(outcome.result()));
	else
		return DropDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::dropDatabaseAsync(const DropDatabaseRequest& request, const DropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropDatabaseOutcomeCallable Openanalytics_openClient::dropDatabaseCallable(const DropDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropDatabaseOutcome()>>(
			[this, request]()
			{
			return this->dropDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropPartitionOutcome Openanalytics_openClient::dropPartition(const DropPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropPartitionOutcome(DropPartitionResult(outcome.result()));
	else
		return DropPartitionOutcome(outcome.error());
}

void Openanalytics_openClient::dropPartitionAsync(const DropPartitionRequest& request, const DropPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropPartitionOutcomeCallable Openanalytics_openClient::dropPartitionCallable(const DropPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropPartitionOutcome()>>(
			[this, request]()
			{
			return this->dropPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropTableOutcome Openanalytics_openClient::dropTable(const DropTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropTableOutcome(DropTableResult(outcome.result()));
	else
		return DropTableOutcome(outcome.error());
}

void Openanalytics_openClient::dropTableAsync(const DropTableRequest& request, const DropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropTableOutcomeCallable Openanalytics_openClient::dropTableCallable(const DropTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropTableOutcome()>>(
			[this, request]()
			{
			return this->dropTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllDatabasesOutcome Openanalytics_openClient::getAllDatabases(const GetAllDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllDatabasesOutcome(GetAllDatabasesResult(outcome.result()));
	else
		return GetAllDatabasesOutcome(outcome.error());
}

void Openanalytics_openClient::getAllDatabasesAsync(const GetAllDatabasesRequest& request, const GetAllDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllDatabasesOutcomeCallable Openanalytics_openClient::getAllDatabasesCallable(const GetAllDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllDatabasesOutcome()>>(
			[this, request]()
			{
			return this->getAllDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllTablesOutcome Openanalytics_openClient::getAllTables(const GetAllTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllTablesOutcome(GetAllTablesResult(outcome.result()));
	else
		return GetAllTablesOutcome(outcome.error());
}

void Openanalytics_openClient::getAllTablesAsync(const GetAllTablesRequest& request, const GetAllTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllTablesOutcomeCallable Openanalytics_openClient::getAllTablesCallable(const GetAllTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllTablesOutcome()>>(
			[this, request]()
			{
			return this->getAllTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllowIPOutcome Openanalytics_openClient::getAllowIP(const GetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllowIPOutcome(GetAllowIPResult(outcome.result()));
	else
		return GetAllowIPOutcome(outcome.error());
}

void Openanalytics_openClient::getAllowIPAsync(const GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllowIPOutcomeCallable Openanalytics_openClient::getAllowIPCallable(const GetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->getAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetDatabaseOutcome Openanalytics_openClient::getDatabase(const GetDatabaseRequest &request) const
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

void Openanalytics_openClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetDatabaseOutcomeCallable Openanalytics_openClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetEndPointOutcome Openanalytics_openClient::getEndPoint(const GetEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEndPointOutcome(GetEndPointResult(outcome.result()));
	else
		return GetEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::getEndPointAsync(const GetEndPointRequest& request, const GetEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetEndPointOutcomeCallable Openanalytics_openClient::getEndPointCallable(const GetEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEndPointOutcome()>>(
			[this, request]()
			{
			return this->getEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetEndPointByDomainOutcome Openanalytics_openClient::getEndPointByDomain(const GetEndPointByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEndPointByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEndPointByDomainOutcome(GetEndPointByDomainResult(outcome.result()));
	else
		return GetEndPointByDomainOutcome(outcome.error());
}

void Openanalytics_openClient::getEndPointByDomainAsync(const GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEndPointByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetEndPointByDomainOutcomeCallable Openanalytics_openClient::getEndPointByDomainCallable(const GetEndPointByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEndPointByDomainOutcome()>>(
			[this, request]()
			{
			return this->getEndPointByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobDetailOutcome Openanalytics_openClient::getJobDetail(const GetJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobDetailOutcome(GetJobDetailResult(outcome.result()));
	else
		return GetJobDetailOutcome(outcome.error());
}

void Openanalytics_openClient::getJobDetailAsync(const GetJobDetailRequest& request, const GetJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobDetailOutcomeCallable Openanalytics_openClient::getJobDetailCallable(const GetJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobDetailOutcome()>>(
			[this, request]()
			{
			return this->getJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobLogOutcome Openanalytics_openClient::getJobLog(const GetJobLogRequest &request) const
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

void Openanalytics_openClient::getJobLogAsync(const GetJobLogRequest& request, const GetJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobLogOutcomeCallable Openanalytics_openClient::getJobLogCallable(const GetJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobLogOutcome()>>(
			[this, request]()
			{
			return this->getJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobStatusOutcome Openanalytics_openClient::getJobStatus(const GetJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusOutcome(GetJobStatusResult(outcome.result()));
	else
		return GetJobStatusOutcome(outcome.error());
}

void Openanalytics_openClient::getJobStatusAsync(const GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobStatusOutcomeCallable Openanalytics_openClient::getJobStatusCallable(const GetJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetPartitionOutcome Openanalytics_openClient::getPartition(const GetPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPartitionOutcome(GetPartitionResult(outcome.result()));
	else
		return GetPartitionOutcome(outcome.error());
}

void Openanalytics_openClient::getPartitionAsync(const GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetPartitionOutcomeCallable Openanalytics_openClient::getPartitionCallable(const GetPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionOutcome()>>(
			[this, request]()
			{
			return this->getPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetPartitionsOutcome Openanalytics_openClient::getPartitions(const GetPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPartitionsOutcome(GetPartitionsResult(outcome.result()));
	else
		return GetPartitionsOutcome(outcome.error());
}

void Openanalytics_openClient::getPartitionsAsync(const GetPartitionsRequest& request, const GetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetPartitionsOutcomeCallable Openanalytics_openClient::getPartitionsCallable(const GetPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionsOutcome()>>(
			[this, request]()
			{
			return this->getPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetTableOutcome Openanalytics_openClient::getTable(const GetTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableOutcome(GetTableResult(outcome.result()));
	else
		return GetTableOutcome(outcome.error());
}

void Openanalytics_openClient::getTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetTableOutcomeCallable Openanalytics_openClient::getTableCallable(const GetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableOutcome()>>(
			[this, request]()
			{
			return this->getTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GrantPrivilegesOutcome Openanalytics_openClient::grantPrivileges(const GrantPrivilegesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantPrivilegesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantPrivilegesOutcome(GrantPrivilegesResult(outcome.result()));
	else
		return GrantPrivilegesOutcome(outcome.error());
}

void Openanalytics_openClient::grantPrivilegesAsync(const GrantPrivilegesRequest& request, const GrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantPrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GrantPrivilegesOutcomeCallable Openanalytics_openClient::grantPrivilegesCallable(const GrantPrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantPrivilegesOutcome()>>(
			[this, request]()
			{
			return this->grantPrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::KillSparkJobOutcome Openanalytics_openClient::killSparkJob(const KillSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillSparkJobOutcome(KillSparkJobResult(outcome.result()));
	else
		return KillSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::killSparkJobAsync(const KillSparkJobRequest& request, const KillSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::KillSparkJobOutcomeCallable Openanalytics_openClient::killSparkJobCallable(const KillSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillSparkJobOutcome()>>(
			[this, request]()
			{
			return this->killSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListSparkJobOutcome Openanalytics_openClient::listSparkJob(const ListSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkJobOutcome(ListSparkJobResult(outcome.result()));
	else
		return ListSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::listSparkJobAsync(const ListSparkJobRequest& request, const ListSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListSparkJobOutcomeCallable Openanalytics_openClient::listSparkJobCallable(const ListSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkJobOutcome()>>(
			[this, request]()
			{
			return this->listSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListTagResourcesOutcome Openanalytics_openClient::listTagResources(const ListTagResourcesRequest &request) const
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

void Openanalytics_openClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListTagResourcesOutcomeCallable Openanalytics_openClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryAccountListOutcome Openanalytics_openClient::queryAccountList(const QueryAccountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountListOutcome(QueryAccountListResult(outcome.result()));
	else
		return QueryAccountListOutcome(outcome.error());
}

void Openanalytics_openClient::queryAccountListAsync(const QueryAccountListRequest& request, const QueryAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryAccountListOutcomeCallable Openanalytics_openClient::queryAccountListCallable(const QueryAccountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountListOutcome()>>(
			[this, request]()
			{
			return this->queryAccountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryEndPointListOutcome Openanalytics_openClient::queryEndPointList(const QueryEndPointListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEndPointListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEndPointListOutcome(QueryEndPointListResult(outcome.result()));
	else
		return QueryEndPointListOutcome(outcome.error());
}

void Openanalytics_openClient::queryEndPointListAsync(const QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEndPointList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryEndPointListOutcomeCallable Openanalytics_openClient::queryEndPointListCallable(const QueryEndPointListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEndPointListOutcome()>>(
			[this, request]()
			{
			return this->queryEndPointList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ReleaseInstanceOutcome Openanalytics_openClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void Openanalytics_openClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ReleaseInstanceOutcomeCallable Openanalytics_openClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::RemoveEndPointOutcome Openanalytics_openClient::removeEndPoint(const RemoveEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEndPointOutcome(RemoveEndPointResult(outcome.result()));
	else
		return RemoveEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::removeEndPointAsync(const RemoveEndPointRequest& request, const RemoveEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::RemoveEndPointOutcomeCallable Openanalytics_openClient::removeEndPointCallable(const RemoveEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEndPointOutcome()>>(
			[this, request]()
			{
			return this->removeEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ResetMainPasswordOutcome Openanalytics_openClient::resetMainPassword(const ResetMainPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetMainPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetMainPasswordOutcome(ResetMainPasswordResult(outcome.result()));
	else
		return ResetMainPasswordOutcome(outcome.error());
}

void Openanalytics_openClient::resetMainPasswordAsync(const ResetMainPasswordRequest& request, const ResetMainPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetMainPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ResetMainPasswordOutcomeCallable Openanalytics_openClient::resetMainPasswordCallable(const ResetMainPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetMainPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetMainPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::RevokePrivilegesOutcome Openanalytics_openClient::revokePrivileges(const RevokePrivilegesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokePrivilegesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokePrivilegesOutcome(RevokePrivilegesResult(outcome.result()));
	else
		return RevokePrivilegesOutcome(outcome.error());
}

void Openanalytics_openClient::revokePrivilegesAsync(const RevokePrivilegesRequest& request, const RevokePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokePrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::RevokePrivilegesOutcomeCallable Openanalytics_openClient::revokePrivilegesCallable(const RevokePrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokePrivilegesOutcome()>>(
			[this, request]()
			{
			return this->revokePrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SetAllowIPOutcome Openanalytics_openClient::setAllowIP(const SetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAllowIPOutcome(SetAllowIPResult(outcome.result()));
	else
		return SetAllowIPOutcome(outcome.error());
}

void Openanalytics_openClient::setAllowIPAsync(const SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SetAllowIPOutcomeCallable Openanalytics_openClient::setAllowIPCallable(const SetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->setAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SubmitSparkJobOutcome Openanalytics_openClient::submitSparkJob(const SubmitSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSparkJobOutcome(SubmitSparkJobResult(outcome.result()));
	else
		return SubmitSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::submitSparkJobAsync(const SubmitSparkJobRequest& request, const SubmitSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SubmitSparkJobOutcomeCallable Openanalytics_openClient::submitSparkJobCallable(const SubmitSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSparkJobOutcome()>>(
			[this, request]()
			{
			return this->submitSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::TagResourcesOutcome Openanalytics_openClient::tagResources(const TagResourcesRequest &request) const
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

void Openanalytics_openClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::TagResourcesOutcomeCallable Openanalytics_openClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UnSubscribeRegionOutcome Openanalytics_openClient::unSubscribeRegion(const UnSubscribeRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnSubscribeRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnSubscribeRegionOutcome(UnSubscribeRegionResult(outcome.result()));
	else
		return UnSubscribeRegionOutcome(outcome.error());
}

void Openanalytics_openClient::unSubscribeRegionAsync(const UnSubscribeRegionRequest& request, const UnSubscribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unSubscribeRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UnSubscribeRegionOutcomeCallable Openanalytics_openClient::unSubscribeRegionCallable(const UnSubscribeRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnSubscribeRegionOutcome()>>(
			[this, request]()
			{
			return this->unSubscribeRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UntagResourcesOutcome Openanalytics_openClient::untagResources(const UntagResourcesRequest &request) const
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

void Openanalytics_openClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UntagResourcesOutcomeCallable Openanalytics_openClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UpdateAccountPasswordOutcome Openanalytics_openClient::updateAccountPassword(const UpdateAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountPasswordOutcome(UpdateAccountPasswordResult(outcome.result()));
	else
		return UpdateAccountPasswordOutcome(outcome.error());
}

void Openanalytics_openClient::updateAccountPasswordAsync(const UpdateAccountPasswordRequest& request, const UpdateAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UpdateAccountPasswordOutcomeCallable Openanalytics_openClient::updateAccountPasswordCallable(const UpdateAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UpgradeInstanceOutcome Openanalytics_openClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void Openanalytics_openClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UpgradeInstanceOutcomeCallable Openanalytics_openClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ValidateVirtualClusterNameOutcome Openanalytics_openClient::validateVirtualClusterName(const ValidateVirtualClusterNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateVirtualClusterNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateVirtualClusterNameOutcome(ValidateVirtualClusterNameResult(outcome.result()));
	else
		return ValidateVirtualClusterNameOutcome(outcome.error());
}

void Openanalytics_openClient::validateVirtualClusterNameAsync(const ValidateVirtualClusterNameRequest& request, const ValidateVirtualClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateVirtualClusterName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ValidateVirtualClusterNameOutcomeCallable Openanalytics_openClient::validateVirtualClusterNameCallable(const ValidateVirtualClusterNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateVirtualClusterNameOutcome()>>(
			[this, request]()
			{
			return this->validateVirtualClusterName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

