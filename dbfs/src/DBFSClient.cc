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

#include <alibabacloud/dbfs/DBFSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

namespace
{
	const std::string SERVICE_NAME = "DBFS";
}

DBFSClient::DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::DBFSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::DBFSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DBFSClient::~DBFSClient()
{}

DBFSClient::AddTagsBatchOutcome DBFSClient::addTagsBatch(const AddTagsBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsBatchOutcome(AddTagsBatchResult(outcome.result()));
	else
		return AddTagsBatchOutcome(outcome.error());
}

void DBFSClient::addTagsBatchAsync(const AddTagsBatchRequest& request, const AddTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagsBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::AddTagsBatchOutcomeCallable DBFSClient::addTagsBatchCallable(const AddTagsBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsBatchOutcome()>>(
			[this, request]()
			{
			return this->addTagsBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::AttachDbfsOutcome DBFSClient::attachDbfs(const AttachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDbfsOutcome(AttachDbfsResult(outcome.result()));
	else
		return AttachDbfsOutcome(outcome.error());
}

void DBFSClient::attachDbfsAsync(const AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::AttachDbfsOutcomeCallable DBFSClient::attachDbfsCallable(const AttachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDbfsOutcome()>>(
			[this, request]()
			{
			return this->attachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateConstantsOutcome DBFSClient::createConstants(const CreateConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConstantsOutcome(CreateConstantsResult(outcome.result()));
	else
		return CreateConstantsOutcome(outcome.error());
}

void DBFSClient::createConstantsAsync(const CreateConstantsRequest& request, const CreateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateConstantsOutcomeCallable DBFSClient::createConstantsCallable(const CreateConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConstantsOutcome()>>(
			[this, request]()
			{
			return this->createConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateDbfsOutcome DBFSClient::createDbfs(const CreateDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDbfsOutcome(CreateDbfsResult(outcome.result()));
	else
		return CreateDbfsOutcome(outcome.error());
}

void DBFSClient::createDbfsAsync(const CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateDbfsOutcomeCallable DBFSClient::createDbfsCallable(const CreateDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDbfsOutcome()>>(
			[this, request]()
			{
			return this->createDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateServiceLinkedRoleOutcome DBFSClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void DBFSClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateServiceLinkedRoleOutcomeCallable DBFSClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateSnapshotOutcome DBFSClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void DBFSClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateSnapshotOutcomeCallable DBFSClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DbfsRecordOutcome DBFSClient::dbfsRecord(const DbfsRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DbfsRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DbfsRecordOutcome(DbfsRecordResult(outcome.result()));
	else
		return DbfsRecordOutcome(outcome.error());
}

void DBFSClient::dbfsRecordAsync(const DbfsRecordRequest& request, const DbfsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dbfsRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DbfsRecordOutcomeCallable DBFSClient::dbfsRecordCallable(const DbfsRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DbfsRecordOutcome()>>(
			[this, request]()
			{
			return this->dbfsRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteConstantsOutcome DBFSClient::deleteConstants(const DeleteConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConstantsOutcome(DeleteConstantsResult(outcome.result()));
	else
		return DeleteConstantsOutcome(outcome.error());
}

void DBFSClient::deleteConstantsAsync(const DeleteConstantsRequest& request, const DeleteConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteConstantsOutcomeCallable DBFSClient::deleteConstantsCallable(const DeleteConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConstantsOutcome()>>(
			[this, request]()
			{
			return this->deleteConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteDbfsOutcome DBFSClient::deleteDbfs(const DeleteDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDbfsOutcome(DeleteDbfsResult(outcome.result()));
	else
		return DeleteDbfsOutcome(outcome.error());
}

void DBFSClient::deleteDbfsAsync(const DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteDbfsOutcomeCallable DBFSClient::deleteDbfsCallable(const DeleteDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDbfsOutcome()>>(
			[this, request]()
			{
			return this->deleteDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteSnapshotOutcome DBFSClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void DBFSClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteSnapshotOutcomeCallable DBFSClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteTagsBatchOutcome DBFSClient::deleteTagsBatch(const DeleteTagsBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagsBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagsBatchOutcome(DeleteTagsBatchResult(outcome.result()));
	else
		return DeleteTagsBatchOutcome(outcome.error());
}

void DBFSClient::deleteTagsBatchAsync(const DeleteTagsBatchRequest& request, const DeleteTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagsBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteTagsBatchOutcomeCallable DBFSClient::deleteTagsBatchCallable(const DeleteTagsBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagsBatchOutcome()>>(
			[this, request]()
			{
			return this->deleteTagsBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DetachDbfsOutcome DBFSClient::detachDbfs(const DetachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDbfsOutcome(DetachDbfsResult(outcome.result()));
	else
		return DetachDbfsOutcome(outcome.error());
}

void DBFSClient::detachDbfsAsync(const DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DetachDbfsOutcomeCallable DBFSClient::detachDbfsCallable(const DetachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDbfsOutcome()>>(
			[this, request]()
			{
			return this->detachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GenerateUpgradeRecordOutcome DBFSClient::generateUpgradeRecord(const GenerateUpgradeRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateUpgradeRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateUpgradeRecordOutcome(GenerateUpgradeRecordResult(outcome.result()));
	else
		return GenerateUpgradeRecordOutcome(outcome.error());
}

void DBFSClient::generateUpgradeRecordAsync(const GenerateUpgradeRecordRequest& request, const GenerateUpgradeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUpgradeRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GenerateUpgradeRecordOutcomeCallable DBFSClient::generateUpgradeRecordCallable(const GenerateUpgradeRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUpgradeRecordOutcome()>>(
			[this, request]()
			{
			return this->generateUpgradeRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetDbfsOutcome DBFSClient::getDbfs(const GetDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDbfsOutcome(GetDbfsResult(outcome.result()));
	else
		return GetDbfsOutcome(outcome.error());
}

void DBFSClient::getDbfsAsync(const GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetDbfsOutcomeCallable DBFSClient::getDbfsCallable(const GetDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDbfsOutcome()>>(
			[this, request]()
			{
			return this->getDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetServiceLinkedRoleOutcome DBFSClient::getServiceLinkedRole(const GetServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceLinkedRoleOutcome(GetServiceLinkedRoleResult(outcome.result()));
	else
		return GetServiceLinkedRoleOutcome(outcome.error());
}

void DBFSClient::getServiceLinkedRoleAsync(const GetServiceLinkedRoleRequest& request, const GetServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetServiceLinkedRoleOutcomeCallable DBFSClient::getServiceLinkedRoleCallable(const GetServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->getServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetSynchronizConstantsOutcome DBFSClient::getSynchronizConstants(const GetSynchronizConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSynchronizConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSynchronizConstantsOutcome(GetSynchronizConstantsResult(outcome.result()));
	else
		return GetSynchronizConstantsOutcome(outcome.error());
}

void DBFSClient::getSynchronizConstantsAsync(const GetSynchronizConstantsRequest& request, const GetSynchronizConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSynchronizConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetSynchronizConstantsOutcomeCallable DBFSClient::getSynchronizConstantsCallable(const GetSynchronizConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSynchronizConstantsOutcome()>>(
			[this, request]()
			{
			return this->getSynchronizConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::InsertSynchronizConstantsOutcome DBFSClient::insertSynchronizConstants(const InsertSynchronizConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertSynchronizConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertSynchronizConstantsOutcome(InsertSynchronizConstantsResult(outcome.result()));
	else
		return InsertSynchronizConstantsOutcome(outcome.error());
}

void DBFSClient::insertSynchronizConstantsAsync(const InsertSynchronizConstantsRequest& request, const InsertSynchronizConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertSynchronizConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::InsertSynchronizConstantsOutcomeCallable DBFSClient::insertSynchronizConstantsCallable(const InsertSynchronizConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertSynchronizConstantsOutcome()>>(
			[this, request]()
			{
			return this->insertSynchronizConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListConstantsOutcome DBFSClient::listConstants(const ListConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConstantsOutcome(ListConstantsResult(outcome.result()));
	else
		return ListConstantsOutcome(outcome.error());
}

void DBFSClient::listConstantsAsync(const ListConstantsRequest& request, const ListConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListConstantsOutcomeCallable DBFSClient::listConstantsCallable(const ListConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConstantsOutcome()>>(
			[this, request]()
			{
			return this->listConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListDbfsOutcome DBFSClient::listDbfs(const ListDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDbfsOutcome(ListDbfsResult(outcome.result()));
	else
		return ListDbfsOutcome(outcome.error());
}

void DBFSClient::listDbfsAsync(const ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListDbfsOutcomeCallable DBFSClient::listDbfsCallable(const ListDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDbfsOutcome()>>(
			[this, request]()
			{
			return this->listDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListSnapshotOutcome DBFSClient::listSnapshot(const ListSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotOutcome(ListSnapshotResult(outcome.result()));
	else
		return ListSnapshotOutcome(outcome.error());
}

void DBFSClient::listSnapshotAsync(const ListSnapshotRequest& request, const ListSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListSnapshotOutcomeCallable DBFSClient::listSnapshotCallable(const ListSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotOutcome()>>(
			[this, request]()
			{
			return this->listSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListTagKeysOutcome DBFSClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void DBFSClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListTagKeysOutcomeCallable DBFSClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListTagValuesOutcome DBFSClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void DBFSClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListTagValuesOutcomeCallable DBFSClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListTaskOutcome DBFSClient::listTask(const ListTaskRequest &request) const
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

void DBFSClient::listTaskAsync(const ListTaskRequest& request, const ListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListTaskOutcomeCallable DBFSClient::listTaskCallable(const ListTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskOutcome()>>(
			[this, request]()
			{
			return this->listTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::OpreateConstantsOutcome DBFSClient::opreateConstants(const OpreateConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpreateConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpreateConstantsOutcome(OpreateConstantsResult(outcome.result()));
	else
		return OpreateConstantsOutcome(outcome.error());
}

void DBFSClient::opreateConstantsAsync(const OpreateConstantsRequest& request, const OpreateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opreateConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::OpreateConstantsOutcomeCallable DBFSClient::opreateConstantsCallable(const OpreateConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpreateConstantsOutcome()>>(
			[this, request]()
			{
			return this->opreateConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::PublishUpgradeTaskOutcome DBFSClient::publishUpgradeTask(const PublishUpgradeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishUpgradeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishUpgradeTaskOutcome(PublishUpgradeTaskResult(outcome.result()));
	else
		return PublishUpgradeTaskOutcome(outcome.error());
}

void DBFSClient::publishUpgradeTaskAsync(const PublishUpgradeTaskRequest& request, const PublishUpgradeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishUpgradeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::PublishUpgradeTaskOutcomeCallable DBFSClient::publishUpgradeTaskCallable(const PublishUpgradeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishUpgradeTaskOutcome()>>(
			[this, request]()
			{
			return this->publishUpgradeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::RenameDbfsOutcome DBFSClient::renameDbfs(const RenameDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenameDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenameDbfsOutcome(RenameDbfsResult(outcome.result()));
	else
		return RenameDbfsOutcome(outcome.error());
}

void DBFSClient::renameDbfsAsync(const RenameDbfsRequest& request, const RenameDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renameDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::RenameDbfsOutcomeCallable DBFSClient::renameDbfsCallable(const RenameDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenameDbfsOutcome()>>(
			[this, request]()
			{
			return this->renameDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ResetDbfsOutcome DBFSClient::resetDbfs(const ResetDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDbfsOutcome(ResetDbfsResult(outcome.result()));
	else
		return ResetDbfsOutcome(outcome.error());
}

void DBFSClient::resetDbfsAsync(const ResetDbfsRequest& request, const ResetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ResetDbfsOutcomeCallable DBFSClient::resetDbfsCallable(const ResetDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDbfsOutcome()>>(
			[this, request]()
			{
			return this->resetDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ResizeDbfsOutcome DBFSClient::resizeDbfs(const ResizeDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDbfsOutcome(ResizeDbfsResult(outcome.result()));
	else
		return ResizeDbfsOutcome(outcome.error());
}

void DBFSClient::resizeDbfsAsync(const ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ResizeDbfsOutcomeCallable DBFSClient::resizeDbfsCallable(const ResizeDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDbfsOutcome()>>(
			[this, request]()
			{
			return this->resizeDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::StopUpgradeTaskOutcome DBFSClient::stopUpgradeTask(const StopUpgradeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopUpgradeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopUpgradeTaskOutcome(StopUpgradeTaskResult(outcome.result()));
	else
		return StopUpgradeTaskOutcome(outcome.error());
}

void DBFSClient::stopUpgradeTaskAsync(const StopUpgradeTaskRequest& request, const StopUpgradeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopUpgradeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::StopUpgradeTaskOutcomeCallable DBFSClient::stopUpgradeTaskCallable(const StopUpgradeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopUpgradeTaskOutcome()>>(
			[this, request]()
			{
			return this->stopUpgradeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::TagDbfsOutcome DBFSClient::tagDbfs(const TagDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagDbfsOutcome(TagDbfsResult(outcome.result()));
	else
		return TagDbfsOutcome(outcome.error());
}

void DBFSClient::tagDbfsAsync(const TagDbfsRequest& request, const TagDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::TagDbfsOutcomeCallable DBFSClient::tagDbfsCallable(const TagDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagDbfsOutcome()>>(
			[this, request]()
			{
			return this->tagDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::UpdateConstantsOutcome DBFSClient::updateConstants(const UpdateConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConstantsOutcome(UpdateConstantsResult(outcome.result()));
	else
		return UpdateConstantsOutcome(outcome.error());
}

void DBFSClient::updateConstantsAsync(const UpdateConstantsRequest& request, const UpdateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::UpdateConstantsOutcomeCallable DBFSClient::updateConstantsCallable(const UpdateConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConstantsOutcome()>>(
			[this, request]()
			{
			return this->updateConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::UpdateTaskOutcome DBFSClient::updateTask(const UpdateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskOutcome(UpdateTaskResult(outcome.result()));
	else
		return UpdateTaskOutcome(outcome.error());
}

void DBFSClient::updateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::UpdateTaskOutcomeCallable DBFSClient::updateTaskCallable(const UpdateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskOutcome()>>(
			[this, request]()
			{
			return this->updateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

