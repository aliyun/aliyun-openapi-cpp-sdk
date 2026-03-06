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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dataworks-public");
}

Dataworks_publicClient::Dataworks_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dataworks-public");
}

Dataworks_publicClient::Dataworks_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dataworks-public");
}

Dataworks_publicClient::~Dataworks_publicClient()
{}

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

Dataworks_publicClient::GetDataServiceApiAuthMapContextOutcome Dataworks_publicClient::getDataServiceApiAuthMapContext(const GetDataServiceApiAuthMapContextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApiAuthMapContextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApiAuthMapContextOutcome(GetDataServiceApiAuthMapContextResult(outcome.result()));
	else
		return GetDataServiceApiAuthMapContextOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApiAuthMapContextAsync(const GetDataServiceApiAuthMapContextRequest& request, const GetDataServiceApiAuthMapContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApiAuthMapContext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApiAuthMapContextOutcomeCallable Dataworks_publicClient::getDataServiceApiAuthMapContextCallable(const GetDataServiceApiAuthMapContextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApiAuthMapContextOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApiAuthMapContext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApiContextOutcome Dataworks_publicClient::getDataServiceApiContext(const GetDataServiceApiContextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApiContextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApiContextOutcome(GetDataServiceApiContextResult(outcome.result()));
	else
		return GetDataServiceApiContextOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApiContextAsync(const GetDataServiceApiContextRequest& request, const GetDataServiceApiContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApiContext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApiContextOutcomeCallable Dataworks_publicClient::getDataServiceApiContextCallable(const GetDataServiceApiContextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApiContextOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApiContext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceConfigOutcome Dataworks_publicClient::getDataServiceConfig(const GetDataServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceConfigOutcome(GetDataServiceConfigResult(outcome.result()));
	else
		return GetDataServiceConfigOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceConfigAsync(const GetDataServiceConfigRequest& request, const GetDataServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceConfigOutcomeCallable Dataworks_publicClient::getDataServiceConfigCallable(const GetDataServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceConnectionOutcome Dataworks_publicClient::getDataServiceConnection(const GetDataServiceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceConnectionOutcome(GetDataServiceConnectionResult(outcome.result()));
	else
		return GetDataServiceConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceConnectionAsync(const GetDataServiceConnectionRequest& request, const GetDataServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceConnectionOutcomeCallable Dataworks_publicClient::getDataServiceConnectionCallable(const GetDataServiceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceConnectionOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceContextUpdateEventOutcome Dataworks_publicClient::getDataServiceContextUpdateEvent(const GetDataServiceContextUpdateEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceContextUpdateEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceContextUpdateEventOutcome(GetDataServiceContextUpdateEventResult(outcome.result()));
	else
		return GetDataServiceContextUpdateEventOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceContextUpdateEventAsync(const GetDataServiceContextUpdateEventRequest& request, const GetDataServiceContextUpdateEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceContextUpdateEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceContextUpdateEventOutcomeCallable Dataworks_publicClient::getDataServiceContextUpdateEventCallable(const GetDataServiceContextUpdateEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceContextUpdateEventOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceContextUpdateEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceFunctionOutcome Dataworks_publicClient::getDataServiceFunction(const GetDataServiceFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceFunctionOutcome(GetDataServiceFunctionResult(outcome.result()));
	else
		return GetDataServiceFunctionOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceFunctionAsync(const GetDataServiceFunctionRequest& request, const GetDataServiceFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceFunctionOutcomeCallable Dataworks_publicClient::getDataServiceFunctionCallable(const GetDataServiceFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceFunctionOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetSwitchValueOutcome Dataworks_publicClient::getSwitchValue(const GetSwitchValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSwitchValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSwitchValueOutcome(GetSwitchValueResult(outcome.result()));
	else
		return GetSwitchValueOutcome(outcome.error());
}

void Dataworks_publicClient::getSwitchValueAsync(const GetSwitchValueRequest& request, const GetSwitchValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSwitchValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetSwitchValueOutcomeCallable Dataworks_publicClient::getSwitchValueCallable(const GetSwitchValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSwitchValueOutcome()>>(
			[this, request]()
			{
			return this->getSwitchValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetTimeMachineTaskOutcome Dataworks_publicClient::getTimeMachineTask(const GetTimeMachineTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTimeMachineTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTimeMachineTaskOutcome(GetTimeMachineTaskResult(outcome.result()));
	else
		return GetTimeMachineTaskOutcome(outcome.error());
}

void Dataworks_publicClient::getTimeMachineTaskAsync(const GetTimeMachineTaskRequest& request, const GetTimeMachineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTimeMachineTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetTimeMachineTaskOutcomeCallable Dataworks_publicClient::getTimeMachineTaskCallable(const GetTimeMachineTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTimeMachineTaskOutcome()>>(
			[this, request]()
			{
			return this->getTimeMachineTask(request);
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

Dataworks_publicClient::ListGovernanceIssueDataServiceAPIsOutcome Dataworks_publicClient::listGovernanceIssueDataServiceAPIs(const ListGovernanceIssueDataServiceAPIsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGovernanceIssueDataServiceAPIsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGovernanceIssueDataServiceAPIsOutcome(ListGovernanceIssueDataServiceAPIsResult(outcome.result()));
	else
		return ListGovernanceIssueDataServiceAPIsOutcome(outcome.error());
}

void Dataworks_publicClient::listGovernanceIssueDataServiceAPIsAsync(const ListGovernanceIssueDataServiceAPIsRequest& request, const ListGovernanceIssueDataServiceAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGovernanceIssueDataServiceAPIs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListGovernanceIssueDataServiceAPIsOutcomeCallable Dataworks_publicClient::listGovernanceIssueDataServiceAPIsCallable(const ListGovernanceIssueDataServiceAPIsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGovernanceIssueDataServiceAPIsOutcome()>>(
			[this, request]()
			{
			return this->listGovernanceIssueDataServiceAPIs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListGovernanceIssueTablesOutcome Dataworks_publicClient::listGovernanceIssueTables(const ListGovernanceIssueTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGovernanceIssueTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGovernanceIssueTablesOutcome(ListGovernanceIssueTablesResult(outcome.result()));
	else
		return ListGovernanceIssueTablesOutcome(outcome.error());
}

void Dataworks_publicClient::listGovernanceIssueTablesAsync(const ListGovernanceIssueTablesRequest& request, const ListGovernanceIssueTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGovernanceIssueTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListGovernanceIssueTablesOutcomeCallable Dataworks_publicClient::listGovernanceIssueTablesCallable(const ListGovernanceIssueTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGovernanceIssueTablesOutcome()>>(
			[this, request]()
			{
			return this->listGovernanceIssueTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListGovernanceIssueTasksOutcome Dataworks_publicClient::listGovernanceIssueTasks(const ListGovernanceIssueTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGovernanceIssueTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGovernanceIssueTasksOutcome(ListGovernanceIssueTasksResult(outcome.result()));
	else
		return ListGovernanceIssueTasksOutcome(outcome.error());
}

void Dataworks_publicClient::listGovernanceIssueTasksAsync(const ListGovernanceIssueTasksRequest& request, const ListGovernanceIssueTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGovernanceIssueTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListGovernanceIssueTasksOutcomeCallable Dataworks_publicClient::listGovernanceIssueTasksCallable(const ListGovernanceIssueTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGovernanceIssueTasksOutcome()>>(
			[this, request]()
			{
			return this->listGovernanceIssueTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListGovernanceRulesOutcome Dataworks_publicClient::listGovernanceRules(const ListGovernanceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGovernanceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGovernanceRulesOutcome(ListGovernanceRulesResult(outcome.result()));
	else
		return ListGovernanceRulesOutcome(outcome.error());
}

void Dataworks_publicClient::listGovernanceRulesAsync(const ListGovernanceRulesRequest& request, const ListGovernanceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGovernanceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListGovernanceRulesOutcomeCallable Dataworks_publicClient::listGovernanceRulesCallable(const ListGovernanceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGovernanceRulesOutcome()>>(
			[this, request]()
			{
			return this->listGovernanceRules(request);
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

Dataworks_publicClient::SendTaskMetaCallbackOutcome Dataworks_publicClient::sendTaskMetaCallback(const SendTaskMetaCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendTaskMetaCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendTaskMetaCallbackOutcome(SendTaskMetaCallbackResult(outcome.result()));
	else
		return SendTaskMetaCallbackOutcome(outcome.error());
}

void Dataworks_publicClient::sendTaskMetaCallbackAsync(const SendTaskMetaCallbackRequest& request, const SendTaskMetaCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendTaskMetaCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SendTaskMetaCallbackOutcomeCallable Dataworks_publicClient::sendTaskMetaCallbackCallable(const SendTaskMetaCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendTaskMetaCallbackOutcome()>>(
			[this, request]()
			{
			return this->sendTaskMetaCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SetSwitchValueOutcome Dataworks_publicClient::setSwitchValue(const SetSwitchValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSwitchValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSwitchValueOutcome(SetSwitchValueResult(outcome.result()));
	else
		return SetSwitchValueOutcome(outcome.error());
}

void Dataworks_publicClient::setSwitchValueAsync(const SetSwitchValueRequest& request, const SetSwitchValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSwitchValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SetSwitchValueOutcomeCallable Dataworks_publicClient::setSwitchValueCallable(const SetSwitchValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSwitchValueOutcome()>>(
			[this, request]()
			{
			return this->setSwitchValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TriggerDataLoaderOutcome Dataworks_publicClient::triggerDataLoader(const TriggerDataLoaderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerDataLoaderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerDataLoaderOutcome(TriggerDataLoaderResult(outcome.result()));
	else
		return TriggerDataLoaderOutcome(outcome.error());
}

void Dataworks_publicClient::triggerDataLoaderAsync(const TriggerDataLoaderRequest& request, const TriggerDataLoaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerDataLoader(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TriggerDataLoaderOutcomeCallable Dataworks_publicClient::triggerDataLoaderCallable(const TriggerDataLoaderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerDataLoaderOutcome()>>(
			[this, request]()
			{
			return this->triggerDataLoader(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TriggerTimeMachineTaskOutcome Dataworks_publicClient::triggerTimeMachineTask(const TriggerTimeMachineTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerTimeMachineTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerTimeMachineTaskOutcome(TriggerTimeMachineTaskResult(outcome.result()));
	else
		return TriggerTimeMachineTaskOutcome(outcome.error());
}

void Dataworks_publicClient::triggerTimeMachineTaskAsync(const TriggerTimeMachineTaskRequest& request, const TriggerTimeMachineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerTimeMachineTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TriggerTimeMachineTaskOutcomeCallable Dataworks_publicClient::triggerTimeMachineTaskCallable(const TriggerTimeMachineTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerTimeMachineTaskOutcome()>>(
			[this, request]()
			{
			return this->triggerTimeMachineTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

