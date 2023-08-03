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

#include <alibabacloud/rds-data/Rds_dataClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Rds_data;
using namespace AlibabaCloud::Rds_data::Model;

namespace
{
	const std::string SERVICE_NAME = "rds-data";
}

Rds_dataClient::Rds_dataClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Rds_dataClient::Rds_dataClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Rds_dataClient::Rds_dataClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Rds_dataClient::~Rds_dataClient()
{}

Rds_dataClient::BatchExecuteStatementOutcome Rds_dataClient::batchExecuteStatement(const BatchExecuteStatementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchExecuteStatementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchExecuteStatementOutcome(BatchExecuteStatementResult(outcome.result()));
	else
		return BatchExecuteStatementOutcome(outcome.error());
}

void Rds_dataClient::batchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchExecuteStatement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::BatchExecuteStatementOutcomeCallable Rds_dataClient::batchExecuteStatementCallable(const BatchExecuteStatementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchExecuteStatementOutcome()>>(
			[this, request]()
			{
			return this->batchExecuteStatement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::BeginTransactionOutcome Rds_dataClient::beginTransaction(const BeginTransactionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeginTransactionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeginTransactionOutcome(BeginTransactionResult(outcome.result()));
	else
		return BeginTransactionOutcome(outcome.error());
}

void Rds_dataClient::beginTransactionAsync(const BeginTransactionRequest& request, const BeginTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beginTransaction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::BeginTransactionOutcomeCallable Rds_dataClient::beginTransactionCallable(const BeginTransactionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeginTransactionOutcome()>>(
			[this, request]()
			{
			return this->beginTransaction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::CommitTransactionOutcome Rds_dataClient::commitTransaction(const CommitTransactionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitTransactionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitTransactionOutcome(CommitTransactionResult(outcome.result()));
	else
		return CommitTransactionOutcome(outcome.error());
}

void Rds_dataClient::commitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitTransaction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::CommitTransactionOutcomeCallable Rds_dataClient::commitTransactionCallable(const CommitTransactionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitTransactionOutcome()>>(
			[this, request]()
			{
			return this->commitTransaction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::DeleteOutcome Rds_dataClient::delete(const DeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOutcome(DeleteResult(outcome.result()));
	else
		return DeleteOutcome(outcome.error());
}

void Rds_dataClient::deleteAsync(const DeleteRequest& request, const DeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::DeleteOutcomeCallable Rds_dataClient::deleteCallable(const DeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOutcome()>>(
			[this, request]()
			{
			return this->delete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::ExecuteStatementOutcome Rds_dataClient::executeStatement(const ExecuteStatementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteStatementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteStatementOutcome(ExecuteStatementResult(outcome.result()));
	else
		return ExecuteStatementOutcome(outcome.error());
}

void Rds_dataClient::executeStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeStatement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::ExecuteStatementOutcomeCallable Rds_dataClient::executeStatementCallable(const ExecuteStatementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteStatementOutcome()>>(
			[this, request]()
			{
			return this->executeStatement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::InsertOutcome Rds_dataClient::insert(const InsertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertOutcome(InsertResult(outcome.result()));
	else
		return InsertOutcome(outcome.error());
}

void Rds_dataClient::insertAsync(const InsertRequest& request, const InsertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::InsertOutcomeCallable Rds_dataClient::insertCallable(const InsertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertOutcome()>>(
			[this, request]()
			{
			return this->insert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::InsertListOutcome Rds_dataClient::insertList(const InsertListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertListOutcome(InsertListResult(outcome.result()));
	else
		return InsertListOutcome(outcome.error());
}

void Rds_dataClient::insertListAsync(const InsertListRequest& request, const InsertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::InsertListOutcomeCallable Rds_dataClient::insertListCallable(const InsertListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertListOutcome()>>(
			[this, request]()
			{
			return this->insertList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::RollbackTransactionOutcome Rds_dataClient::rollbackTransaction(const RollbackTransactionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackTransactionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackTransactionOutcome(RollbackTransactionResult(outcome.result()));
	else
		return RollbackTransactionOutcome(outcome.error());
}

void Rds_dataClient::rollbackTransactionAsync(const RollbackTransactionRequest& request, const RollbackTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackTransaction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::RollbackTransactionOutcomeCallable Rds_dataClient::rollbackTransactionCallable(const RollbackTransactionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackTransactionOutcome()>>(
			[this, request]()
			{
			return this->rollbackTransaction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::SelectOutcome Rds_dataClient::select(const SelectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SelectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SelectOutcome(SelectResult(outcome.result()));
	else
		return SelectOutcome(outcome.error());
}

void Rds_dataClient::selectAsync(const SelectRequest& request, const SelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, select(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::SelectOutcomeCallable Rds_dataClient::selectCallable(const SelectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SelectOutcome()>>(
			[this, request]()
			{
			return this->select(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Rds_dataClient::UpdateOutcome Rds_dataClient::update(const UpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOutcome(UpdateResult(outcome.result()));
	else
		return UpdateOutcome(outcome.error());
}

void Rds_dataClient::updateAsync(const UpdateRequest& request, const UpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, update(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Rds_dataClient::UpdateOutcomeCallable Rds_dataClient::updateCallable(const UpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOutcome()>>(
			[this, request]()
			{
			return this->update(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

