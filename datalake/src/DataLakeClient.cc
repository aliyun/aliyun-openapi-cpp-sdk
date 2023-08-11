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

#include <alibabacloud/datalake/DataLakeClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

namespace
{
	const std::string SERVICE_NAME = "DataLake";
}

DataLakeClient::DataLakeClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dlf");
}

DataLakeClient::DataLakeClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dlf");
}

DataLakeClient::DataLakeClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dlf");
}

DataLakeClient::~DataLakeClient()
{}

DataLakeClient::AbortLockOutcome DataLakeClient::abortLock(const AbortLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortLockOutcome(AbortLockResult(outcome.result()));
	else
		return AbortLockOutcome(outcome.error());
}

void DataLakeClient::abortLockAsync(const AbortLockRequest& request, const AbortLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::AbortLockOutcomeCallable DataLakeClient::abortLockCallable(const AbortLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortLockOutcome()>>(
			[this, request]()
			{
			return this->abortLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchCreatePartitionsOutcome DataLakeClient::batchCreatePartitions(const BatchCreatePartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreatePartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreatePartitionsOutcome(BatchCreatePartitionsResult(outcome.result()));
	else
		return BatchCreatePartitionsOutcome(outcome.error());
}

void DataLakeClient::batchCreatePartitionsAsync(const BatchCreatePartitionsRequest& request, const BatchCreatePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreatePartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchCreatePartitionsOutcomeCallable DataLakeClient::batchCreatePartitionsCallable(const BatchCreatePartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreatePartitionsOutcome()>>(
			[this, request]()
			{
			return this->batchCreatePartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchCreateTablesOutcome DataLakeClient::batchCreateTables(const BatchCreateTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreateTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreateTablesOutcome(BatchCreateTablesResult(outcome.result()));
	else
		return BatchCreateTablesOutcome(outcome.error());
}

void DataLakeClient::batchCreateTablesAsync(const BatchCreateTablesRequest& request, const BatchCreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreateTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchCreateTablesOutcomeCallable DataLakeClient::batchCreateTablesCallable(const BatchCreateTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreateTablesOutcome()>>(
			[this, request]()
			{
			return this->batchCreateTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchDeletePartitionsOutcome DataLakeClient::batchDeletePartitions(const BatchDeletePartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeletePartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeletePartitionsOutcome(BatchDeletePartitionsResult(outcome.result()));
	else
		return BatchDeletePartitionsOutcome(outcome.error());
}

void DataLakeClient::batchDeletePartitionsAsync(const BatchDeletePartitionsRequest& request, const BatchDeletePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeletePartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchDeletePartitionsOutcomeCallable DataLakeClient::batchDeletePartitionsCallable(const BatchDeletePartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeletePartitionsOutcome()>>(
			[this, request]()
			{
			return this->batchDeletePartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchDeleteTableVersionsOutcome DataLakeClient::batchDeleteTableVersions(const BatchDeleteTableVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteTableVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteTableVersionsOutcome(BatchDeleteTableVersionsResult(outcome.result()));
	else
		return BatchDeleteTableVersionsOutcome(outcome.error());
}

void DataLakeClient::batchDeleteTableVersionsAsync(const BatchDeleteTableVersionsRequest& request, const BatchDeleteTableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteTableVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchDeleteTableVersionsOutcomeCallable DataLakeClient::batchDeleteTableVersionsCallable(const BatchDeleteTableVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteTableVersionsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteTableVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchDeleteTablesOutcome DataLakeClient::batchDeleteTables(const BatchDeleteTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteTablesOutcome(BatchDeleteTablesResult(outcome.result()));
	else
		return BatchDeleteTablesOutcome(outcome.error());
}

void DataLakeClient::batchDeleteTablesAsync(const BatchDeleteTablesRequest& request, const BatchDeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchDeleteTablesOutcomeCallable DataLakeClient::batchDeleteTablesCallable(const BatchDeleteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteTablesOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchGetPartitionColumnStatisticsOutcome DataLakeClient::batchGetPartitionColumnStatistics(const BatchGetPartitionColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetPartitionColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetPartitionColumnStatisticsOutcome(BatchGetPartitionColumnStatisticsResult(outcome.result()));
	else
		return BatchGetPartitionColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::batchGetPartitionColumnStatisticsAsync(const BatchGetPartitionColumnStatisticsRequest& request, const BatchGetPartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetPartitionColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchGetPartitionColumnStatisticsOutcomeCallable DataLakeClient::batchGetPartitionColumnStatisticsCallable(const BatchGetPartitionColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetPartitionColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->batchGetPartitionColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchGetPartitionsOutcome DataLakeClient::batchGetPartitions(const BatchGetPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetPartitionsOutcome(BatchGetPartitionsResult(outcome.result()));
	else
		return BatchGetPartitionsOutcome(outcome.error());
}

void DataLakeClient::batchGetPartitionsAsync(const BatchGetPartitionsRequest& request, const BatchGetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchGetPartitionsOutcomeCallable DataLakeClient::batchGetPartitionsCallable(const BatchGetPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetPartitionsOutcome()>>(
			[this, request]()
			{
			return this->batchGetPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchGetTablesOutcome DataLakeClient::batchGetTables(const BatchGetTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetTablesOutcome(BatchGetTablesResult(outcome.result()));
	else
		return BatchGetTablesOutcome(outcome.error());
}

void DataLakeClient::batchGetTablesAsync(const BatchGetTablesRequest& request, const BatchGetTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchGetTablesOutcomeCallable DataLakeClient::batchGetTablesCallable(const BatchGetTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetTablesOutcome()>>(
			[this, request]()
			{
			return this->batchGetTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchGrantPermissionsOutcome DataLakeClient::batchGrantPermissions(const BatchGrantPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGrantPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGrantPermissionsOutcome(BatchGrantPermissionsResult(outcome.result()));
	else
		return BatchGrantPermissionsOutcome(outcome.error());
}

void DataLakeClient::batchGrantPermissionsAsync(const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGrantPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchGrantPermissionsOutcomeCallable DataLakeClient::batchGrantPermissionsCallable(const BatchGrantPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGrantPermissionsOutcome()>>(
			[this, request]()
			{
			return this->batchGrantPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchRevokePermissionsOutcome DataLakeClient::batchRevokePermissions(const BatchRevokePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRevokePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRevokePermissionsOutcome(BatchRevokePermissionsResult(outcome.result()));
	else
		return BatchRevokePermissionsOutcome(outcome.error());
}

void DataLakeClient::batchRevokePermissionsAsync(const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRevokePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchRevokePermissionsOutcomeCallable DataLakeClient::batchRevokePermissionsCallable(const BatchRevokePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRevokePermissionsOutcome()>>(
			[this, request]()
			{
			return this->batchRevokePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchUpdatePartitionsOutcome DataLakeClient::batchUpdatePartitions(const BatchUpdatePartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdatePartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdatePartitionsOutcome(BatchUpdatePartitionsResult(outcome.result()));
	else
		return BatchUpdatePartitionsOutcome(outcome.error());
}

void DataLakeClient::batchUpdatePartitionsAsync(const BatchUpdatePartitionsRequest& request, const BatchUpdatePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdatePartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchUpdatePartitionsOutcomeCallable DataLakeClient::batchUpdatePartitionsCallable(const BatchUpdatePartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdatePartitionsOutcome()>>(
			[this, request]()
			{
			return this->batchUpdatePartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::BatchUpdateTablesOutcome DataLakeClient::batchUpdateTables(const BatchUpdateTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateTablesOutcome(BatchUpdateTablesResult(outcome.result()));
	else
		return BatchUpdateTablesOutcome(outcome.error());
}

void DataLakeClient::batchUpdateTablesAsync(const BatchUpdateTablesRequest& request, const BatchUpdateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::BatchUpdateTablesOutcomeCallable DataLakeClient::batchUpdateTablesCallable(const BatchUpdateTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateTablesOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CancelQueryOutcome DataLakeClient::cancelQuery(const CancelQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelQueryOutcome(CancelQueryResult(outcome.result()));
	else
		return CancelQueryOutcome(outcome.error());
}

void DataLakeClient::cancelQueryAsync(const CancelQueryRequest& request, const CancelQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CancelQueryOutcomeCallable DataLakeClient::cancelQueryCallable(const CancelQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelQueryOutcome()>>(
			[this, request]()
			{
			return this->cancelQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CheckPermissionsOutcome DataLakeClient::checkPermissions(const CheckPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckPermissionsOutcome(CheckPermissionsResult(outcome.result()));
	else
		return CheckPermissionsOutcome(outcome.error());
}

void DataLakeClient::checkPermissionsAsync(const CheckPermissionsRequest& request, const CheckPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CheckPermissionsOutcomeCallable DataLakeClient::checkPermissionsCallable(const CheckPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckPermissionsOutcome()>>(
			[this, request]()
			{
			return this->checkPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateCatalogOutcome DataLakeClient::createCatalog(const CreateCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCatalogOutcome(CreateCatalogResult(outcome.result()));
	else
		return CreateCatalogOutcome(outcome.error());
}

void DataLakeClient::createCatalogAsync(const CreateCatalogRequest& request, const CreateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateCatalogOutcomeCallable DataLakeClient::createCatalogCallable(const CreateCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCatalogOutcome()>>(
			[this, request]()
			{
			return this->createCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateDatabaseOutcome DataLakeClient::createDatabase(const CreateDatabaseRequest &request) const
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

void DataLakeClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateDatabaseOutcomeCallable DataLakeClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateFunctionOutcome DataLakeClient::createFunction(const CreateFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFunctionOutcome(CreateFunctionResult(outcome.result()));
	else
		return CreateFunctionOutcome(outcome.error());
}

void DataLakeClient::createFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateFunctionOutcomeCallable DataLakeClient::createFunctionCallable(const CreateFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFunctionOutcome()>>(
			[this, request]()
			{
			return this->createFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateLockOutcome DataLakeClient::createLock(const CreateLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLockOutcome(CreateLockResult(outcome.result()));
	else
		return CreateLockOutcome(outcome.error());
}

void DataLakeClient::createLockAsync(const CreateLockRequest& request, const CreateLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateLockOutcomeCallable DataLakeClient::createLockCallable(const CreateLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLockOutcome()>>(
			[this, request]()
			{
			return this->createLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreatePartitionOutcome DataLakeClient::createPartition(const CreatePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePartitionOutcome(CreatePartitionResult(outcome.result()));
	else
		return CreatePartitionOutcome(outcome.error());
}

void DataLakeClient::createPartitionAsync(const CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreatePartitionOutcomeCallable DataLakeClient::createPartitionCallable(const CreatePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePartitionOutcome()>>(
			[this, request]()
			{
			return this->createPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateRoleOutcome DataLakeClient::createRole(const CreateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRoleOutcome(CreateRoleResult(outcome.result()));
	else
		return CreateRoleOutcome(outcome.error());
}

void DataLakeClient::createRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateRoleOutcomeCallable DataLakeClient::createRoleCallable(const CreateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
			[this, request]()
			{
			return this->createRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::CreateTableOutcome DataLakeClient::createTable(const CreateTableRequest &request) const
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

void DataLakeClient::createTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::CreateTableOutcomeCallable DataLakeClient::createTableCallable(const CreateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
			[this, request]()
			{
			return this->createTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteCatalogOutcome DataLakeClient::deleteCatalog(const DeleteCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCatalogOutcome(DeleteCatalogResult(outcome.result()));
	else
		return DeleteCatalogOutcome(outcome.error());
}

void DataLakeClient::deleteCatalogAsync(const DeleteCatalogRequest& request, const DeleteCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteCatalogOutcomeCallable DataLakeClient::deleteCatalogCallable(const DeleteCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCatalogOutcome()>>(
			[this, request]()
			{
			return this->deleteCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteDatabaseOutcome DataLakeClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void DataLakeClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteDatabaseOutcomeCallable DataLakeClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteFunctionOutcome DataLakeClient::deleteFunction(const DeleteFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFunctionOutcome(DeleteFunctionResult(outcome.result()));
	else
		return DeleteFunctionOutcome(outcome.error());
}

void DataLakeClient::deleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteFunctionOutcomeCallable DataLakeClient::deleteFunctionCallable(const DeleteFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFunctionOutcome()>>(
			[this, request]()
			{
			return this->deleteFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeletePartitionOutcome DataLakeClient::deletePartition(const DeletePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePartitionOutcome(DeletePartitionResult(outcome.result()));
	else
		return DeletePartitionOutcome(outcome.error());
}

void DataLakeClient::deletePartitionAsync(const DeletePartitionRequest& request, const DeletePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeletePartitionOutcomeCallable DataLakeClient::deletePartitionCallable(const DeletePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePartitionOutcome()>>(
			[this, request]()
			{
			return this->deletePartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeletePartitionColumnStatisticsOutcome DataLakeClient::deletePartitionColumnStatistics(const DeletePartitionColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePartitionColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePartitionColumnStatisticsOutcome(DeletePartitionColumnStatisticsResult(outcome.result()));
	else
		return DeletePartitionColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::deletePartitionColumnStatisticsAsync(const DeletePartitionColumnStatisticsRequest& request, const DeletePartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePartitionColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeletePartitionColumnStatisticsOutcomeCallable DataLakeClient::deletePartitionColumnStatisticsCallable(const DeletePartitionColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePartitionColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->deletePartitionColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteRoleOutcome DataLakeClient::deleteRole(const DeleteRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoleOutcome(DeleteRoleResult(outcome.result()));
	else
		return DeleteRoleOutcome(outcome.error());
}

void DataLakeClient::deleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteRoleOutcomeCallable DataLakeClient::deleteRoleCallable(const DeleteRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteTableOutcome DataLakeClient::deleteTable(const DeleteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableOutcome(DeleteTableResult(outcome.result()));
	else
		return DeleteTableOutcome(outcome.error());
}

void DataLakeClient::deleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteTableOutcomeCallable DataLakeClient::deleteTableCallable(const DeleteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteTableColumnStatisticsOutcome DataLakeClient::deleteTableColumnStatistics(const DeleteTableColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableColumnStatisticsOutcome(DeleteTableColumnStatisticsResult(outcome.result()));
	else
		return DeleteTableColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::deleteTableColumnStatisticsAsync(const DeleteTableColumnStatisticsRequest& request, const DeleteTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTableColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteTableColumnStatisticsOutcomeCallable DataLakeClient::deleteTableColumnStatisticsCallable(const DeleteTableColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->deleteTableColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeleteTableVersionOutcome DataLakeClient::deleteTableVersion(const DeleteTableVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableVersionOutcome(DeleteTableVersionResult(outcome.result()));
	else
		return DeleteTableVersionOutcome(outcome.error());
}

void DataLakeClient::deleteTableVersionAsync(const DeleteTableVersionRequest& request, const DeleteTableVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTableVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeleteTableVersionOutcomeCallable DataLakeClient::deleteTableVersionCallable(const DeleteTableVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableVersionOutcome()>>(
			[this, request]()
			{
			return this->deleteTableVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DeregisterLocationOutcome DataLakeClient::deregisterLocation(const DeregisterLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterLocationOutcome(DeregisterLocationResult(outcome.result()));
	else
		return DeregisterLocationOutcome(outcome.error());
}

void DataLakeClient::deregisterLocationAsync(const DeregisterLocationRequest& request, const DeregisterLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DeregisterLocationOutcomeCallable DataLakeClient::deregisterLocationCallable(const DeregisterLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterLocationOutcome()>>(
			[this, request]()
			{
			return this->deregisterLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::DescribeRegionsOutcome DataLakeClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DataLakeClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::DescribeRegionsOutcomeCallable DataLakeClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetAsyncTaskStatusOutcome DataLakeClient::getAsyncTaskStatus(const GetAsyncTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncTaskStatusOutcome(GetAsyncTaskStatusResult(outcome.result()));
	else
		return GetAsyncTaskStatusOutcome(outcome.error());
}

void DataLakeClient::getAsyncTaskStatusAsync(const GetAsyncTaskStatusRequest& request, const GetAsyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetAsyncTaskStatusOutcomeCallable DataLakeClient::getAsyncTaskStatusCallable(const GetAsyncTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->getAsyncTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetCatalogOutcome DataLakeClient::getCatalog(const GetCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCatalogOutcome(GetCatalogResult(outcome.result()));
	else
		return GetCatalogOutcome(outcome.error());
}

void DataLakeClient::getCatalogAsync(const GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetCatalogOutcomeCallable DataLakeClient::getCatalogCallable(const GetCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCatalogOutcome()>>(
			[this, request]()
			{
			return this->getCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetCatalogSettingsOutcome DataLakeClient::getCatalogSettings(const GetCatalogSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCatalogSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCatalogSettingsOutcome(GetCatalogSettingsResult(outcome.result()));
	else
		return GetCatalogSettingsOutcome(outcome.error());
}

void DataLakeClient::getCatalogSettingsAsync(const GetCatalogSettingsRequest& request, const GetCatalogSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCatalogSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetCatalogSettingsOutcomeCallable DataLakeClient::getCatalogSettingsCallable(const GetCatalogSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCatalogSettingsOutcome()>>(
			[this, request]()
			{
			return this->getCatalogSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetDatabaseOutcome DataLakeClient::getDatabase(const GetDatabaseRequest &request) const
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

void DataLakeClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetDatabaseOutcomeCallable DataLakeClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetFunctionOutcome DataLakeClient::getFunction(const GetFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFunctionOutcome(GetFunctionResult(outcome.result()));
	else
		return GetFunctionOutcome(outcome.error());
}

void DataLakeClient::getFunctionAsync(const GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetFunctionOutcomeCallable DataLakeClient::getFunctionCallable(const GetFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFunctionOutcome()>>(
			[this, request]()
			{
			return this->getFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetLifecycleRuleOutcome DataLakeClient::getLifecycleRule(const GetLifecycleRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLifecycleRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLifecycleRuleOutcome(GetLifecycleRuleResult(outcome.result()));
	else
		return GetLifecycleRuleOutcome(outcome.error());
}

void DataLakeClient::getLifecycleRuleAsync(const GetLifecycleRuleRequest& request, const GetLifecycleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLifecycleRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetLifecycleRuleOutcomeCallable DataLakeClient::getLifecycleRuleCallable(const GetLifecycleRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLifecycleRuleOutcome()>>(
			[this, request]()
			{
			return this->getLifecycleRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetLockOutcome DataLakeClient::getLock(const GetLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLockOutcome(GetLockResult(outcome.result()));
	else
		return GetLockOutcome(outcome.error());
}

void DataLakeClient::getLockAsync(const GetLockRequest& request, const GetLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetLockOutcomeCallable DataLakeClient::getLockCallable(const GetLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLockOutcome()>>(
			[this, request]()
			{
			return this->getLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetPartitionOutcome DataLakeClient::getPartition(const GetPartitionRequest &request) const
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

void DataLakeClient::getPartitionAsync(const GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetPartitionOutcomeCallable DataLakeClient::getPartitionCallable(const GetPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionOutcome()>>(
			[this, request]()
			{
			return this->getPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetPartitionColumnStatisticsOutcome DataLakeClient::getPartitionColumnStatistics(const GetPartitionColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPartitionColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPartitionColumnStatisticsOutcome(GetPartitionColumnStatisticsResult(outcome.result()));
	else
		return GetPartitionColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::getPartitionColumnStatisticsAsync(const GetPartitionColumnStatisticsRequest& request, const GetPartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartitionColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetPartitionColumnStatisticsOutcomeCallable DataLakeClient::getPartitionColumnStatisticsCallable(const GetPartitionColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getPartitionColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetQueryResultOutcome DataLakeClient::getQueryResult(const GetQueryResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueryResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueryResultOutcome(GetQueryResultResult(outcome.result()));
	else
		return GetQueryResultOutcome(outcome.error());
}

void DataLakeClient::getQueryResultAsync(const GetQueryResultRequest& request, const GetQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueryResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetQueryResultOutcomeCallable DataLakeClient::getQueryResultCallable(const GetQueryResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueryResultOutcome()>>(
			[this, request]()
			{
			return this->getQueryResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetRegionStatusOutcome DataLakeClient::getRegionStatus(const GetRegionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionStatusOutcome(GetRegionStatusResult(outcome.result()));
	else
		return GetRegionStatusOutcome(outcome.error());
}

void DataLakeClient::getRegionStatusAsync(const GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetRegionStatusOutcomeCallable DataLakeClient::getRegionStatusCallable(const GetRegionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionStatusOutcome()>>(
			[this, request]()
			{
			return this->getRegionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetRoleOutcome DataLakeClient::getRole(const GetRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRoleOutcome(GetRoleResult(outcome.result()));
	else
		return GetRoleOutcome(outcome.error());
}

void DataLakeClient::getRoleAsync(const GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetRoleOutcomeCallable DataLakeClient::getRoleCallable(const GetRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRoleOutcome()>>(
			[this, request]()
			{
			return this->getRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetServiceStatusOutcome DataLakeClient::getServiceStatus(const GetServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceStatusOutcome(GetServiceStatusResult(outcome.result()));
	else
		return GetServiceStatusOutcome(outcome.error());
}

void DataLakeClient::getServiceStatusAsync(const GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetServiceStatusOutcomeCallable DataLakeClient::getServiceStatusCallable(const GetServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetTableOutcome DataLakeClient::getTable(const GetTableRequest &request) const
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

void DataLakeClient::getTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetTableOutcomeCallable DataLakeClient::getTableCallable(const GetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableOutcome()>>(
			[this, request]()
			{
			return this->getTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetTableColumnStatisticsOutcome DataLakeClient::getTableColumnStatistics(const GetTableColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableColumnStatisticsOutcome(GetTableColumnStatisticsResult(outcome.result()));
	else
		return GetTableColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::getTableColumnStatisticsAsync(const GetTableColumnStatisticsRequest& request, const GetTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetTableColumnStatisticsOutcomeCallable DataLakeClient::getTableColumnStatisticsCallable(const GetTableColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getTableColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetTableProfileOutcome DataLakeClient::getTableProfile(const GetTableProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableProfileOutcome(GetTableProfileResult(outcome.result()));
	else
		return GetTableProfileOutcome(outcome.error());
}

void DataLakeClient::getTableProfileAsync(const GetTableProfileRequest& request, const GetTableProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetTableProfileOutcomeCallable DataLakeClient::getTableProfileCallable(const GetTableProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableProfileOutcome()>>(
			[this, request]()
			{
			return this->getTableProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GetTableVersionOutcome DataLakeClient::getTableVersion(const GetTableVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableVersionOutcome(GetTableVersionResult(outcome.result()));
	else
		return GetTableVersionOutcome(outcome.error());
}

void DataLakeClient::getTableVersionAsync(const GetTableVersionRequest& request, const GetTableVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GetTableVersionOutcomeCallable DataLakeClient::getTableVersionCallable(const GetTableVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableVersionOutcome()>>(
			[this, request]()
			{
			return this->getTableVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GrantPermissionsOutcome DataLakeClient::grantPermissions(const GrantPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantPermissionsOutcome(GrantPermissionsResult(outcome.result()));
	else
		return GrantPermissionsOutcome(outcome.error());
}

void DataLakeClient::grantPermissionsAsync(const GrantPermissionsRequest& request, const GrantPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GrantPermissionsOutcomeCallable DataLakeClient::grantPermissionsCallable(const GrantPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantPermissionsOutcome()>>(
			[this, request]()
			{
			return this->grantPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GrantRoleToUsersOutcome DataLakeClient::grantRoleToUsers(const GrantRoleToUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantRoleToUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantRoleToUsersOutcome(GrantRoleToUsersResult(outcome.result()));
	else
		return GrantRoleToUsersOutcome(outcome.error());
}

void DataLakeClient::grantRoleToUsersAsync(const GrantRoleToUsersRequest& request, const GrantRoleToUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantRoleToUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GrantRoleToUsersOutcomeCallable DataLakeClient::grantRoleToUsersCallable(const GrantRoleToUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantRoleToUsersOutcome()>>(
			[this, request]()
			{
			return this->grantRoleToUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::GrantRolesToUserOutcome DataLakeClient::grantRolesToUser(const GrantRolesToUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantRolesToUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantRolesToUserOutcome(GrantRolesToUserResult(outcome.result()));
	else
		return GrantRolesToUserOutcome(outcome.error());
}

void DataLakeClient::grantRolesToUserAsync(const GrantRolesToUserRequest& request, const GrantRolesToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantRolesToUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::GrantRolesToUserOutcomeCallable DataLakeClient::grantRolesToUserCallable(const GrantRolesToUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantRolesToUserOutcome()>>(
			[this, request]()
			{
			return this->grantRolesToUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListCatalogsOutcome DataLakeClient::listCatalogs(const ListCatalogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCatalogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCatalogsOutcome(ListCatalogsResult(outcome.result()));
	else
		return ListCatalogsOutcome(outcome.error());
}

void DataLakeClient::listCatalogsAsync(const ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCatalogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListCatalogsOutcomeCallable DataLakeClient::listCatalogsCallable(const ListCatalogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCatalogsOutcome()>>(
			[this, request]()
			{
			return this->listCatalogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListDatabasesOutcome DataLakeClient::listDatabases(const ListDatabasesRequest &request) const
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

void DataLakeClient::listDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListDatabasesOutcomeCallable DataLakeClient::listDatabasesCallable(const ListDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListFunctionNamesOutcome DataLakeClient::listFunctionNames(const ListFunctionNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFunctionNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFunctionNamesOutcome(ListFunctionNamesResult(outcome.result()));
	else
		return ListFunctionNamesOutcome(outcome.error());
}

void DataLakeClient::listFunctionNamesAsync(const ListFunctionNamesRequest& request, const ListFunctionNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFunctionNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListFunctionNamesOutcomeCallable DataLakeClient::listFunctionNamesCallable(const ListFunctionNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFunctionNamesOutcome()>>(
			[this, request]()
			{
			return this->listFunctionNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListFunctionsOutcome DataLakeClient::listFunctions(const ListFunctionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFunctionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFunctionsOutcome(ListFunctionsResult(outcome.result()));
	else
		return ListFunctionsOutcome(outcome.error());
}

void DataLakeClient::listFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFunctions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListFunctionsOutcomeCallable DataLakeClient::listFunctionsCallable(const ListFunctionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFunctionsOutcome()>>(
			[this, request]()
			{
			return this->listFunctions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListPartitionNamesOutcome DataLakeClient::listPartitionNames(const ListPartitionNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPartitionNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPartitionNamesOutcome(ListPartitionNamesResult(outcome.result()));
	else
		return ListPartitionNamesOutcome(outcome.error());
}

void DataLakeClient::listPartitionNamesAsync(const ListPartitionNamesRequest& request, const ListPartitionNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPartitionNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListPartitionNamesOutcomeCallable DataLakeClient::listPartitionNamesCallable(const ListPartitionNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPartitionNamesOutcome()>>(
			[this, request]()
			{
			return this->listPartitionNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListPartitionsOutcome DataLakeClient::listPartitions(const ListPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPartitionsOutcome(ListPartitionsResult(outcome.result()));
	else
		return ListPartitionsOutcome(outcome.error());
}

void DataLakeClient::listPartitionsAsync(const ListPartitionsRequest& request, const ListPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListPartitionsOutcomeCallable DataLakeClient::listPartitionsCallable(const ListPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPartitionsOutcome()>>(
			[this, request]()
			{
			return this->listPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListPartitionsByExprOutcome DataLakeClient::listPartitionsByExpr(const ListPartitionsByExprRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPartitionsByExprOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPartitionsByExprOutcome(ListPartitionsByExprResult(outcome.result()));
	else
		return ListPartitionsByExprOutcome(outcome.error());
}

void DataLakeClient::listPartitionsByExprAsync(const ListPartitionsByExprRequest& request, const ListPartitionsByExprAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPartitionsByExpr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListPartitionsByExprOutcomeCallable DataLakeClient::listPartitionsByExprCallable(const ListPartitionsByExprRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPartitionsByExprOutcome()>>(
			[this, request]()
			{
			return this->listPartitionsByExpr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListPartitionsByFilterOutcome DataLakeClient::listPartitionsByFilter(const ListPartitionsByFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPartitionsByFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPartitionsByFilterOutcome(ListPartitionsByFilterResult(outcome.result()));
	else
		return ListPartitionsByFilterOutcome(outcome.error());
}

void DataLakeClient::listPartitionsByFilterAsync(const ListPartitionsByFilterRequest& request, const ListPartitionsByFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPartitionsByFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListPartitionsByFilterOutcomeCallable DataLakeClient::listPartitionsByFilterCallable(const ListPartitionsByFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPartitionsByFilterOutcome()>>(
			[this, request]()
			{
			return this->listPartitionsByFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListPermissionsOutcome DataLakeClient::listPermissions(const ListPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPermissionsOutcome(ListPermissionsResult(outcome.result()));
	else
		return ListPermissionsOutcome(outcome.error());
}

void DataLakeClient::listPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListPermissionsOutcomeCallable DataLakeClient::listPermissionsCallable(const ListPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListRoleUsersOutcome DataLakeClient::listRoleUsers(const ListRoleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRoleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRoleUsersOutcome(ListRoleUsersResult(outcome.result()));
	else
		return ListRoleUsersOutcome(outcome.error());
}

void DataLakeClient::listRoleUsersAsync(const ListRoleUsersRequest& request, const ListRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListRoleUsersOutcomeCallable DataLakeClient::listRoleUsersCallable(const ListRoleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRoleUsersOutcome()>>(
			[this, request]()
			{
			return this->listRoleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListRolesOutcome DataLakeClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void DataLakeClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListRolesOutcomeCallable DataLakeClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListTableNamesOutcome DataLakeClient::listTableNames(const ListTableNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTableNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTableNamesOutcome(ListTableNamesResult(outcome.result()));
	else
		return ListTableNamesOutcome(outcome.error());
}

void DataLakeClient::listTableNamesAsync(const ListTableNamesRequest& request, const ListTableNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTableNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListTableNamesOutcomeCallable DataLakeClient::listTableNamesCallable(const ListTableNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTableNamesOutcome()>>(
			[this, request]()
			{
			return this->listTableNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListTableVersionsOutcome DataLakeClient::listTableVersions(const ListTableVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTableVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTableVersionsOutcome(ListTableVersionsResult(outcome.result()));
	else
		return ListTableVersionsOutcome(outcome.error());
}

void DataLakeClient::listTableVersionsAsync(const ListTableVersionsRequest& request, const ListTableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTableVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListTableVersionsOutcomeCallable DataLakeClient::listTableVersionsCallable(const ListTableVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTableVersionsOutcome()>>(
			[this, request]()
			{
			return this->listTableVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListTablesOutcome DataLakeClient::listTables(const ListTablesRequest &request) const
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

void DataLakeClient::listTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListTablesOutcomeCallable DataLakeClient::listTablesCallable(const ListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablesOutcome()>>(
			[this, request]()
			{
			return this->listTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::ListUserRolesOutcome DataLakeClient::listUserRoles(const ListUserRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserRolesOutcome(ListUserRolesResult(outcome.result()));
	else
		return ListUserRolesOutcome(outcome.error());
}

void DataLakeClient::listUserRolesAsync(const ListUserRolesRequest& request, const ListUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::ListUserRolesOutcomeCallable DataLakeClient::listUserRolesCallable(const ListUserRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserRolesOutcome()>>(
			[this, request]()
			{
			return this->listUserRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RefreshLockOutcome DataLakeClient::refreshLock(const RefreshLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshLockOutcome(RefreshLockResult(outcome.result()));
	else
		return RefreshLockOutcome(outcome.error());
}

void DataLakeClient::refreshLockAsync(const RefreshLockRequest& request, const RefreshLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RefreshLockOutcomeCallable DataLakeClient::refreshLockCallable(const RefreshLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshLockOutcome()>>(
			[this, request]()
			{
			return this->refreshLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RegisterLocationOutcome DataLakeClient::registerLocation(const RegisterLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterLocationOutcome(RegisterLocationResult(outcome.result()));
	else
		return RegisterLocationOutcome(outcome.error());
}

void DataLakeClient::registerLocationAsync(const RegisterLocationRequest& request, const RegisterLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RegisterLocationOutcomeCallable DataLakeClient::registerLocationCallable(const RegisterLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterLocationOutcome()>>(
			[this, request]()
			{
			return this->registerLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RenamePartitionOutcome DataLakeClient::renamePartition(const RenamePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenamePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenamePartitionOutcome(RenamePartitionResult(outcome.result()));
	else
		return RenamePartitionOutcome(outcome.error());
}

void DataLakeClient::renamePartitionAsync(const RenamePartitionRequest& request, const RenamePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renamePartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RenamePartitionOutcomeCallable DataLakeClient::renamePartitionCallable(const RenamePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenamePartitionOutcome()>>(
			[this, request]()
			{
			return this->renamePartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RenameTableOutcome DataLakeClient::renameTable(const RenameTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenameTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenameTableOutcome(RenameTableResult(outcome.result()));
	else
		return RenameTableOutcome(outcome.error());
}

void DataLakeClient::renameTableAsync(const RenameTableRequest& request, const RenameTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renameTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RenameTableOutcomeCallable DataLakeClient::renameTableCallable(const RenameTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenameTableOutcome()>>(
			[this, request]()
			{
			return this->renameTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RevokePermissionsOutcome DataLakeClient::revokePermissions(const RevokePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokePermissionsOutcome(RevokePermissionsResult(outcome.result()));
	else
		return RevokePermissionsOutcome(outcome.error());
}

void DataLakeClient::revokePermissionsAsync(const RevokePermissionsRequest& request, const RevokePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RevokePermissionsOutcomeCallable DataLakeClient::revokePermissionsCallable(const RevokePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokePermissionsOutcome()>>(
			[this, request]()
			{
			return this->revokePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RevokeRoleFromUsersOutcome DataLakeClient::revokeRoleFromUsers(const RevokeRoleFromUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeRoleFromUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeRoleFromUsersOutcome(RevokeRoleFromUsersResult(outcome.result()));
	else
		return RevokeRoleFromUsersOutcome(outcome.error());
}

void DataLakeClient::revokeRoleFromUsersAsync(const RevokeRoleFromUsersRequest& request, const RevokeRoleFromUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeRoleFromUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RevokeRoleFromUsersOutcomeCallable DataLakeClient::revokeRoleFromUsersCallable(const RevokeRoleFromUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeRoleFromUsersOutcome()>>(
			[this, request]()
			{
			return this->revokeRoleFromUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RevokeRolesFromUserOutcome DataLakeClient::revokeRolesFromUser(const RevokeRolesFromUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeRolesFromUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeRolesFromUserOutcome(RevokeRolesFromUserResult(outcome.result()));
	else
		return RevokeRolesFromUserOutcome(outcome.error());
}

void DataLakeClient::revokeRolesFromUserAsync(const RevokeRolesFromUserRequest& request, const RevokeRolesFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeRolesFromUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RevokeRolesFromUserOutcomeCallable DataLakeClient::revokeRolesFromUserCallable(const RevokeRolesFromUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeRolesFromUserOutcome()>>(
			[this, request]()
			{
			return this->revokeRolesFromUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::RunMigrationWorkflowOutcome DataLakeClient::runMigrationWorkflow(const RunMigrationWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunMigrationWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunMigrationWorkflowOutcome(RunMigrationWorkflowResult(outcome.result()));
	else
		return RunMigrationWorkflowOutcome(outcome.error());
}

void DataLakeClient::runMigrationWorkflowAsync(const RunMigrationWorkflowRequest& request, const RunMigrationWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runMigrationWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::RunMigrationWorkflowOutcomeCallable DataLakeClient::runMigrationWorkflowCallable(const RunMigrationWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunMigrationWorkflowOutcome()>>(
			[this, request]()
			{
			return this->runMigrationWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::SearchOutcome DataLakeClient::search(const SearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchOutcome(SearchResult(outcome.result()));
	else
		return SearchOutcome(outcome.error());
}

void DataLakeClient::searchAsync(const SearchRequest& request, const SearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, search(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::SearchOutcomeCallable DataLakeClient::searchCallable(const SearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchOutcome()>>(
			[this, request]()
			{
			return this->search(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::SearchAcrossCatalogOutcome DataLakeClient::searchAcrossCatalog(const SearchAcrossCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAcrossCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAcrossCatalogOutcome(SearchAcrossCatalogResult(outcome.result()));
	else
		return SearchAcrossCatalogOutcome(outcome.error());
}

void DataLakeClient::searchAcrossCatalogAsync(const SearchAcrossCatalogRequest& request, const SearchAcrossCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAcrossCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::SearchAcrossCatalogOutcomeCallable DataLakeClient::searchAcrossCatalogCallable(const SearchAcrossCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAcrossCatalogOutcome()>>(
			[this, request]()
			{
			return this->searchAcrossCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::StopMigrationWorkflowOutcome DataLakeClient::stopMigrationWorkflow(const StopMigrationWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMigrationWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMigrationWorkflowOutcome(StopMigrationWorkflowResult(outcome.result()));
	else
		return StopMigrationWorkflowOutcome(outcome.error());
}

void DataLakeClient::stopMigrationWorkflowAsync(const StopMigrationWorkflowRequest& request, const StopMigrationWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMigrationWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::StopMigrationWorkflowOutcomeCallable DataLakeClient::stopMigrationWorkflowCallable(const StopMigrationWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMigrationWorkflowOutcome()>>(
			[this, request]()
			{
			return this->stopMigrationWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::SubmitQueryOutcome DataLakeClient::submitQuery(const SubmitQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitQueryOutcome(SubmitQueryResult(outcome.result()));
	else
		return SubmitQueryOutcome(outcome.error());
}

void DataLakeClient::submitQueryAsync(const SubmitQueryRequest& request, const SubmitQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::SubmitQueryOutcomeCallable DataLakeClient::submitQueryCallable(const SubmitQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitQueryOutcome()>>(
			[this, request]()
			{
			return this->submitQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UnLockOutcome DataLakeClient::unLock(const UnLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnLockOutcome(UnLockResult(outcome.result()));
	else
		return UnLockOutcome(outcome.error());
}

void DataLakeClient::unLockAsync(const UnLockRequest& request, const UnLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UnLockOutcomeCallable DataLakeClient::unLockCallable(const UnLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnLockOutcome()>>(
			[this, request]()
			{
			return this->unLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateCatalogOutcome DataLakeClient::updateCatalog(const UpdateCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCatalogOutcome(UpdateCatalogResult(outcome.result()));
	else
		return UpdateCatalogOutcome(outcome.error());
}

void DataLakeClient::updateCatalogAsync(const UpdateCatalogRequest& request, const UpdateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateCatalogOutcomeCallable DataLakeClient::updateCatalogCallable(const UpdateCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCatalogOutcome()>>(
			[this, request]()
			{
			return this->updateCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateCatalogSettingsOutcome DataLakeClient::updateCatalogSettings(const UpdateCatalogSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCatalogSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCatalogSettingsOutcome(UpdateCatalogSettingsResult(outcome.result()));
	else
		return UpdateCatalogSettingsOutcome(outcome.error());
}

void DataLakeClient::updateCatalogSettingsAsync(const UpdateCatalogSettingsRequest& request, const UpdateCatalogSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCatalogSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateCatalogSettingsOutcomeCallable DataLakeClient::updateCatalogSettingsCallable(const UpdateCatalogSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCatalogSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateCatalogSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateDatabaseOutcome DataLakeClient::updateDatabase(const UpdateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatabaseOutcome(UpdateDatabaseResult(outcome.result()));
	else
		return UpdateDatabaseOutcome(outcome.error());
}

void DataLakeClient::updateDatabaseAsync(const UpdateDatabaseRequest& request, const UpdateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateDatabaseOutcomeCallable DataLakeClient::updateDatabaseCallable(const UpdateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->updateDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateFunctionOutcome DataLakeClient::updateFunction(const UpdateFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFunctionOutcome(UpdateFunctionResult(outcome.result()));
	else
		return UpdateFunctionOutcome(outcome.error());
}

void DataLakeClient::updateFunctionAsync(const UpdateFunctionRequest& request, const UpdateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateFunctionOutcomeCallable DataLakeClient::updateFunctionCallable(const UpdateFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFunctionOutcome()>>(
			[this, request]()
			{
			return this->updateFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdatePartitionColumnStatisticsOutcome DataLakeClient::updatePartitionColumnStatistics(const UpdatePartitionColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePartitionColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePartitionColumnStatisticsOutcome(UpdatePartitionColumnStatisticsResult(outcome.result()));
	else
		return UpdatePartitionColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::updatePartitionColumnStatisticsAsync(const UpdatePartitionColumnStatisticsRequest& request, const UpdatePartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePartitionColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdatePartitionColumnStatisticsOutcomeCallable DataLakeClient::updatePartitionColumnStatisticsCallable(const UpdatePartitionColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePartitionColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->updatePartitionColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdatePermissionsOutcome DataLakeClient::updatePermissions(const UpdatePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePermissionsOutcome(UpdatePermissionsResult(outcome.result()));
	else
		return UpdatePermissionsOutcome(outcome.error());
}

void DataLakeClient::updatePermissionsAsync(const UpdatePermissionsRequest& request, const UpdatePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdatePermissionsOutcomeCallable DataLakeClient::updatePermissionsCallable(const UpdatePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePermissionsOutcome()>>(
			[this, request]()
			{
			return this->updatePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateRegisteredLocationOutcome DataLakeClient::updateRegisteredLocation(const UpdateRegisteredLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRegisteredLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRegisteredLocationOutcome(UpdateRegisteredLocationResult(outcome.result()));
	else
		return UpdateRegisteredLocationOutcome(outcome.error());
}

void DataLakeClient::updateRegisteredLocationAsync(const UpdateRegisteredLocationRequest& request, const UpdateRegisteredLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRegisteredLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateRegisteredLocationOutcomeCallable DataLakeClient::updateRegisteredLocationCallable(const UpdateRegisteredLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRegisteredLocationOutcome()>>(
			[this, request]()
			{
			return this->updateRegisteredLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateRoleOutcome DataLakeClient::updateRole(const UpdateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoleOutcome(UpdateRoleResult(outcome.result()));
	else
		return UpdateRoleOutcome(outcome.error());
}

void DataLakeClient::updateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateRoleOutcomeCallable DataLakeClient::updateRoleCallable(const UpdateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleOutcome()>>(
			[this, request]()
			{
			return this->updateRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateRoleUsersOutcome DataLakeClient::updateRoleUsers(const UpdateRoleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoleUsersOutcome(UpdateRoleUsersResult(outcome.result()));
	else
		return UpdateRoleUsersOutcome(outcome.error());
}

void DataLakeClient::updateRoleUsersAsync(const UpdateRoleUsersRequest& request, const UpdateRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRoleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateRoleUsersOutcomeCallable DataLakeClient::updateRoleUsersCallable(const UpdateRoleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleUsersOutcome()>>(
			[this, request]()
			{
			return this->updateRoleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateTableOutcome DataLakeClient::updateTable(const UpdateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableOutcome(UpdateTableResult(outcome.result()));
	else
		return UpdateTableOutcome(outcome.error());
}

void DataLakeClient::updateTableAsync(const UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateTableOutcomeCallable DataLakeClient::updateTableCallable(const UpdateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableOutcome()>>(
			[this, request]()
			{
			return this->updateTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DataLakeClient::UpdateTableColumnStatisticsOutcome DataLakeClient::updateTableColumnStatistics(const UpdateTableColumnStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableColumnStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableColumnStatisticsOutcome(UpdateTableColumnStatisticsResult(outcome.result()));
	else
		return UpdateTableColumnStatisticsOutcome(outcome.error());
}

void DataLakeClient::updateTableColumnStatisticsAsync(const UpdateTableColumnStatisticsRequest& request, const UpdateTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTableColumnStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DataLakeClient::UpdateTableColumnStatisticsOutcomeCallable DataLakeClient::updateTableColumnStatisticsCallable(const UpdateTableColumnStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableColumnStatisticsOutcome()>>(
			[this, request]()
			{
			return this->updateTableColumnStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

