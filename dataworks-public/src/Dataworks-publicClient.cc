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

#include <alibabacloud/dataworks-public/Dataworks_publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

namespace
{
	const std::string SERVICE_NAME = "dataworks-public";
}

Dataworks_publicClient::Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::Dataworks_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::Dataworks_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::~Dataworks_publicClient()
{}

Dataworks_publicClient::CheckCallbackOutcome Dataworks_publicClient::checkCallback(const CheckCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCallbackOutcome(CheckCallbackResult(outcome.result()));
	else
		return CheckCallbackOutcome(outcome.error());
}

void Dataworks_publicClient::checkCallbackAsync(const CheckCallbackRequest& request, const CheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckCallbackOutcomeCallable Dataworks_publicClient::checkCallbackCallable(const CheckCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCallbackOutcome()>>(
			[this, request]()
			{
			return this->checkCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateManualDagOutcome Dataworks_publicClient::createManualDag(const CreateManualDagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateManualDagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateManualDagOutcome(CreateManualDagResult(outcome.result()));
	else
		return CreateManualDagOutcome(outcome.error());
}

void Dataworks_publicClient::createManualDagAsync(const CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createManualDag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateManualDagOutcomeCallable Dataworks_publicClient::createManualDagCallable(const CreateManualDagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateManualDagOutcome()>>(
			[this, request]()
			{
			return this->createManualDag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateRealTimeProcessOutcome Dataworks_publicClient::createRealTimeProcess(const CreateRealTimeProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRealTimeProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRealTimeProcessOutcome(CreateRealTimeProcessResult(outcome.result()));
	else
		return CreateRealTimeProcessOutcome(outcome.error());
}

void Dataworks_publicClient::createRealTimeProcessAsync(const CreateRealTimeProcessRequest& request, const CreateRealTimeProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRealTimeProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateRealTimeProcessOutcomeCallable Dataworks_publicClient::createRealTimeProcessCallable(const CreateRealTimeProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRealTimeProcessOutcome()>>(
			[this, request]()
			{
			return this->createRealTimeProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFileOutcome Dataworks_publicClient::deleteFile(const DeleteFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileOutcome(DeleteFileResult(outcome.result()));
	else
		return DeleteFileOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFileOutcomeCallable Dataworks_publicClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DescribeEmrHiveTableOutcome Dataworks_publicClient::describeEmrHiveTable(const DescribeEmrHiveTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmrHiveTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmrHiveTableOutcome(DescribeEmrHiveTableResult(outcome.result()));
	else
		return DescribeEmrHiveTableOutcome(outcome.error());
}

void Dataworks_publicClient::describeEmrHiveTableAsync(const DescribeEmrHiveTableRequest& request, const DescribeEmrHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmrHiveTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DescribeEmrHiveTableOutcomeCallable Dataworks_publicClient::describeEmrHiveTableCallable(const DescribeEmrHiveTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmrHiveTableOutcome()>>(
			[this, request]()
			{
			return this->describeEmrHiveTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEmrHiveAuditLogsOutcome Dataworks_publicClient::listEmrHiveAuditLogs(const ListEmrHiveAuditLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrHiveAuditLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrHiveAuditLogsOutcome(ListEmrHiveAuditLogsResult(outcome.result()));
	else
		return ListEmrHiveAuditLogsOutcome(outcome.error());
}

void Dataworks_publicClient::listEmrHiveAuditLogsAsync(const ListEmrHiveAuditLogsRequest& request, const ListEmrHiveAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrHiveAuditLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEmrHiveAuditLogsOutcomeCallable Dataworks_publicClient::listEmrHiveAuditLogsCallable(const ListEmrHiveAuditLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrHiveAuditLogsOutcome()>>(
			[this, request]()
			{
			return this->listEmrHiveAuditLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEmrHiveDatabasesOutcome Dataworks_publicClient::listEmrHiveDatabases(const ListEmrHiveDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrHiveDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrHiveDatabasesOutcome(ListEmrHiveDatabasesResult(outcome.result()));
	else
		return ListEmrHiveDatabasesOutcome(outcome.error());
}

void Dataworks_publicClient::listEmrHiveDatabasesAsync(const ListEmrHiveDatabasesRequest& request, const ListEmrHiveDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrHiveDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEmrHiveDatabasesOutcomeCallable Dataworks_publicClient::listEmrHiveDatabasesCallable(const ListEmrHiveDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrHiveDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listEmrHiveDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEmrHiveTablesOutcome Dataworks_publicClient::listEmrHiveTables(const ListEmrHiveTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrHiveTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrHiveTablesOutcome(ListEmrHiveTablesResult(outcome.result()));
	else
		return ListEmrHiveTablesOutcome(outcome.error());
}

void Dataworks_publicClient::listEmrHiveTablesAsync(const ListEmrHiveTablesRequest& request, const ListEmrHiveTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrHiveTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEmrHiveTablesOutcomeCallable Dataworks_publicClient::listEmrHiveTablesCallable(const ListEmrHiveTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrHiveTablesOutcome()>>(
			[this, request]()
			{
			return this->listEmrHiveTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListHiveColumnLineagesOutcome Dataworks_publicClient::listHiveColumnLineages(const ListHiveColumnLineagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHiveColumnLineagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHiveColumnLineagesOutcome(ListHiveColumnLineagesResult(outcome.result()));
	else
		return ListHiveColumnLineagesOutcome(outcome.error());
}

void Dataworks_publicClient::listHiveColumnLineagesAsync(const ListHiveColumnLineagesRequest& request, const ListHiveColumnLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHiveColumnLineages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListHiveColumnLineagesOutcomeCallable Dataworks_publicClient::listHiveColumnLineagesCallable(const ListHiveColumnLineagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHiveColumnLineagesOutcome()>>(
			[this, request]()
			{
			return this->listHiveColumnLineages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListHiveTableLineagesOutcome Dataworks_publicClient::listHiveTableLineages(const ListHiveTableLineagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHiveTableLineagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHiveTableLineagesOutcome(ListHiveTableLineagesResult(outcome.result()));
	else
		return ListHiveTableLineagesOutcome(outcome.error());
}

void Dataworks_publicClient::listHiveTableLineagesAsync(const ListHiveTableLineagesRequest& request, const ListHiveTableLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHiveTableLineages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListHiveTableLineagesOutcomeCallable Dataworks_publicClient::listHiveTableLineagesCallable(const ListHiveTableLineagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHiveTableLineagesOutcome()>>(
			[this, request]()
			{
			return this->listHiveTableLineages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTablePartitionsOutcome Dataworks_publicClient::listTablePartitions(const ListTablePartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTablePartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTablePartitionsOutcome(ListTablePartitionsResult(outcome.result()));
	else
		return ListTablePartitionsOutcome(outcome.error());
}

void Dataworks_publicClient::listTablePartitionsAsync(const ListTablePartitionsRequest& request, const ListTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTablePartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTablePartitionsOutcomeCallable Dataworks_publicClient::listTablePartitionsCallable(const ListTablePartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablePartitionsOutcome()>>(
			[this, request]()
			{
			return this->listTablePartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::OpenDataWorksStandardServiceOutcome Dataworks_publicClient::openDataWorksStandardService(const OpenDataWorksStandardServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDataWorksStandardServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDataWorksStandardServiceOutcome(OpenDataWorksStandardServiceResult(outcome.result()));
	else
		return OpenDataWorksStandardServiceOutcome(outcome.error());
}

void Dataworks_publicClient::openDataWorksStandardServiceAsync(const OpenDataWorksStandardServiceRequest& request, const OpenDataWorksStandardServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDataWorksStandardService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::OpenDataWorksStandardServiceOutcomeCallable Dataworks_publicClient::openDataWorksStandardServiceCallable(const OpenDataWorksStandardServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDataWorksStandardServiceOutcome()>>(
			[this, request]()
			{
			return this->openDataWorksStandardService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryRealTimeProcessStatusOutcome Dataworks_publicClient::queryRealTimeProcessStatus(const QueryRealTimeProcessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRealTimeProcessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRealTimeProcessStatusOutcome(QueryRealTimeProcessStatusResult(outcome.result()));
	else
		return QueryRealTimeProcessStatusOutcome(outcome.error());
}

void Dataworks_publicClient::queryRealTimeProcessStatusAsync(const QueryRealTimeProcessStatusRequest& request, const QueryRealTimeProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRealTimeProcessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryRealTimeProcessStatusOutcomeCallable Dataworks_publicClient::queryRealTimeProcessStatusCallable(const QueryRealTimeProcessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRealTimeProcessStatusOutcome()>>(
			[this, request]()
			{
			return this->queryRealTimeProcessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SearchManualDagNodeInstanceOutcome Dataworks_publicClient::searchManualDagNodeInstance(const SearchManualDagNodeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchManualDagNodeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchManualDagNodeInstanceOutcome(SearchManualDagNodeInstanceResult(outcome.result()));
	else
		return SearchManualDagNodeInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::searchManualDagNodeInstanceAsync(const SearchManualDagNodeInstanceRequest& request, const SearchManualDagNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchManualDagNodeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SearchManualDagNodeInstanceOutcomeCallable Dataworks_publicClient::searchManualDagNodeInstanceCallable(const SearchManualDagNodeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchManualDagNodeInstanceOutcome()>>(
			[this, request]()
			{
			return this->searchManualDagNodeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

