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

#include <alibabacloud/sddp/SddpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

namespace
{
	const std::string SERVICE_NAME = "Sddp";
}

SddpClient::SddpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::SddpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::SddpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::~SddpClient()
{}

SddpClient::DescribeOssObjectDetailOutcome SddpClient::describeOssObjectDetail(const DescribeOssObjectDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssObjectDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssObjectDetailOutcome(DescribeOssObjectDetailResult(outcome.result()));
	else
		return DescribeOssObjectDetailOutcome(outcome.error());
}

void SddpClient::describeOssObjectDetailAsync(const DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjectDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeOssObjectDetailOutcomeCallable SddpClient::describeOssObjectDetailCallable(const DescribeOssObjectDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectDetailOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjectDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateConfigOutcome SddpClient::createConfig(const CreateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigOutcome(CreateConfigResult(outcome.result()));
	else
		return CreateConfigOutcome(outcome.error());
}

void SddpClient::createConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateConfigOutcomeCallable SddpClient::createConfigCallable(const CreateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
			[this, request]()
			{
			return this->createConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventTypesOutcome SddpClient::describeEventTypes(const DescribeEventTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventTypesOutcome(DescribeEventTypesResult(outcome.result()));
	else
		return DescribeEventTypesOutcome(outcome.error());
}

void SddpClient::describeEventTypesAsync(const DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventTypesOutcomeCallable SddpClient::describeEventTypesCallable(const DescribeEventTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventTypesOutcome()>>(
			[this, request]()
			{
			return this->describeEventTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyEventStatusOutcome SddpClient::modifyEventStatus(const ModifyEventStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEventStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEventStatusOutcome(ModifyEventStatusResult(outcome.result()));
	else
		return ModifyEventStatusOutcome(outcome.error());
}

void SddpClient::modifyEventStatusAsync(const ModifyEventStatusRequest& request, const ModifyEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyEventStatusOutcomeCallable SddpClient::modifyEventStatusCallable(const ModifyEventStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribePackagesOutcome SddpClient::describePackages(const DescribePackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackagesOutcome(DescribePackagesResult(outcome.result()));
	else
		return DescribePackagesOutcome(outcome.error());
}

void SddpClient::describePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribePackagesOutcomeCallable SddpClient::describePackagesCallable(const DescribePackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackagesOutcome()>>(
			[this, request]()
			{
			return this->describePackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeConfigsOutcome SddpClient::describeConfigs(const DescribeConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigsOutcome(DescribeConfigsResult(outcome.result()));
	else
		return DescribeConfigsOutcome(outcome.error());
}

void SddpClient::describeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeConfigsOutcomeCallable SddpClient::describeConfigsCallable(const DescribeConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeAuthAccountsOutcome SddpClient::describeAuthAccounts(const DescribeAuthAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuthAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuthAccountsOutcome(DescribeAuthAccountsResult(outcome.result()));
	else
		return DescribeAuthAccountsOutcome(outcome.error());
}

void SddpClient::describeAuthAccountsAsync(const DescribeAuthAccountsRequest& request, const DescribeAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuthAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeAuthAccountsOutcomeCallable SddpClient::describeAuthAccountsCallable(const DescribeAuthAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuthAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAuthAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ValidateConnectorOutcome SddpClient::validateConnector(const ValidateConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateConnectorOutcome(ValidateConnectorResult(outcome.result()));
	else
		return ValidateConnectorOutcome(outcome.error());
}

void SddpClient::validateConnectorAsync(const ValidateConnectorRequest& request, const ValidateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ValidateConnectorOutcomeCallable SddpClient::validateConnectorCallable(const ValidateConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateConnectorOutcome()>>(
			[this, request]()
			{
			return this->validateConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataAssetsOutcome SddpClient::describeDataAssets(const DescribeDataAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataAssetsOutcome(DescribeDataAssetsResult(outcome.result()));
	else
		return DescribeDataAssetsOutcome(outcome.error());
}

void SddpClient::describeDataAssetsAsync(const DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataAssetsOutcomeCallable SddpClient::describeDataAssetsCallable(const DescribeDataAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeDataAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeCloudDatabasesOutcome SddpClient::describeCloudDatabases(const DescribeCloudDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDatabasesOutcome(DescribeCloudDatabasesResult(outcome.result()));
	else
		return DescribeCloudDatabasesOutcome(outcome.error());
}

void SddpClient::describeCloudDatabasesAsync(const DescribeCloudDatabasesRequest& request, const DescribeCloudDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeCloudDatabasesOutcomeCallable SddpClient::describeCloudDatabasesCallable(const DescribeCloudDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateRuleOutcome SddpClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void SddpClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateRuleOutcomeCallable SddpClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateUserAuthOutcome SddpClient::createUserAuth(const CreateUserAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserAuthOutcome(CreateUserAuthResult(outcome.result()));
	else
		return CreateUserAuthOutcome(outcome.error());
}

void SddpClient::createUserAuthAsync(const CreateUserAuthRequest& request, const CreateUserAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateUserAuthOutcomeCallable SddpClient::createUserAuthCallable(const CreateUserAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserAuthOutcome()>>(
			[this, request]()
			{
			return this->createUserAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DeleteRuleOutcome SddpClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void SddpClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DeleteRuleOutcomeCallable SddpClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataHubConnectorsOutcome SddpClient::describeDataHubConnectors(const DescribeDataHubConnectorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataHubConnectorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataHubConnectorsOutcome(DescribeDataHubConnectorsResult(outcome.result()));
	else
		return DescribeDataHubConnectorsOutcome(outcome.error());
}

void SddpClient::describeDataHubConnectorsAsync(const DescribeDataHubConnectorsRequest& request, const DescribeDataHubConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubConnectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataHubConnectorsOutcomeCallable SddpClient::describeDataHubConnectorsCallable(const DescribeDataHubConnectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubConnectorsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubConnectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeColumnsOutcome SddpClient::describeColumns(const DescribeColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColumnsOutcome(DescribeColumnsResult(outcome.result()));
	else
		return DescribeColumnsOutcome(outcome.error());
}

void SddpClient::describeColumnsAsync(const DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeColumnsOutcomeCallable SddpClient::describeColumnsCallable(const DescribeColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataLimitDetailOutcome SddpClient::describeDataLimitDetail(const DescribeDataLimitDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitDetailOutcome(DescribeDataLimitDetailResult(outcome.result()));
	else
		return DescribeDataLimitDetailOutcome(outcome.error());
}

void SddpClient::describeDataLimitDetailAsync(const DescribeDataLimitDetailRequest& request, const DescribeDataLimitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimitDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataLimitDetailOutcomeCallable SddpClient::describeDataLimitDetailCallable(const DescribeDataLimitDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimitDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeRulesOutcome SddpClient::describeRules(const DescribeRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRulesOutcome(DescribeRulesResult(outcome.result()));
	else
		return DescribeRulesOutcome(outcome.error());
}

void SddpClient::describeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeRulesOutcomeCallable SddpClient::describeRulesCallable(const DescribeRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
			[this, request]()
			{
			return this->describeRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DeleteDataLimitOutcome SddpClient::deleteDataLimit(const DeleteDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataLimitOutcome(DeleteDataLimitResult(outcome.result()));
	else
		return DeleteDataLimitOutcome(outcome.error());
}

void SddpClient::deleteDataLimitAsync(const DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DeleteDataLimitOutcomeCallable SddpClient::deleteDataLimitCallable(const DeleteDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataLimitOutcome()>>(
			[this, request]()
			{
			return this->deleteDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyRuleStatusOutcome SddpClient::modifyRuleStatus(const ModifyRuleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRuleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRuleStatusOutcome(ModifyRuleStatusResult(outcome.result()));
	else
		return ModifyRuleStatusOutcome(outcome.error());
}

void SddpClient::modifyRuleStatusAsync(const ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyRuleStatusOutcomeCallable SddpClient::modifyRuleStatusCallable(const ModifyRuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeAccountDetailOutcome SddpClient::describeAccountDetail(const DescribeAccountDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountDetailOutcome(DescribeAccountDetailResult(outcome.result()));
	else
		return DescribeAccountDetailOutcome(outcome.error());
}

void SddpClient::describeAccountDetailAsync(const DescribeAccountDetailRequest& request, const DescribeAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeAccountDetailOutcomeCallable SddpClient::describeAccountDetailCallable(const DescribeAccountDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAccountDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDepartsOutcome SddpClient::describeDeparts(const DescribeDepartsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDepartsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDepartsOutcome(DescribeDepartsResult(outcome.result()));
	else
		return DescribeDepartsOutcome(outcome.error());
}

void SddpClient::describeDepartsAsync(const DescribeDepartsRequest& request, const DescribeDepartsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeparts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDepartsOutcomeCallable SddpClient::describeDepartsCallable(const DescribeDepartsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDepartsOutcome()>>(
			[this, request]()
			{
			return this->describeDeparts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataHubSubscriptionsOutcome SddpClient::describeDataHubSubscriptions(const DescribeDataHubSubscriptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataHubSubscriptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataHubSubscriptionsOutcome(DescribeDataHubSubscriptionsResult(outcome.result()));
	else
		return DescribeDataHubSubscriptionsOutcome(outcome.error());
}

void SddpClient::describeDataHubSubscriptionsAsync(const DescribeDataHubSubscriptionsRequest& request, const DescribeDataHubSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubSubscriptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataHubSubscriptionsOutcomeCallable SddpClient::describeDataHubSubscriptionsCallable(const DescribeDataHubSubscriptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubSubscriptionsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubSubscriptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataHubTopicsOutcome SddpClient::describeDataHubTopics(const DescribeDataHubTopicsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataHubTopicsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataHubTopicsOutcome(DescribeDataHubTopicsResult(outcome.result()));
	else
		return DescribeDataHubTopicsOutcome(outcome.error());
}

void SddpClient::describeDataHubTopicsAsync(const DescribeDataHubTopicsRequest& request, const DescribeDataHubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubTopics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataHubTopicsOutcomeCallable SddpClient::describeDataHubTopicsCallable(const DescribeDataHubTopicsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubTopicsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubTopics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeCloudInstancesOutcome SddpClient::describeCloudInstances(const DescribeCloudInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudInstancesOutcome(DescribeCloudInstancesResult(outcome.result()));
	else
		return DescribeCloudInstancesOutcome(outcome.error());
}

void SddpClient::describeCloudInstancesAsync(const DescribeCloudInstancesRequest& request, const DescribeCloudInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeCloudInstancesOutcomeCallable SddpClient::describeCloudInstancesCallable(const DescribeCloudInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeAccountsOutcome SddpClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsOutcome(DescribeAccountsResult(outcome.result()));
	else
		return DescribeAccountsOutcome(outcome.error());
}

void SddpClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeAccountsOutcomeCallable SddpClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeOssObjectsOutcome SddpClient::describeOssObjects(const DescribeOssObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssObjectsOutcome(DescribeOssObjectsResult(outcome.result()));
	else
		return DescribeOssObjectsOutcome(outcome.error());
}

void SddpClient::describeOssObjectsAsync(const DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeOssObjectsOutcomeCallable SddpClient::describeOssObjectsCallable(const DescribeOssObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectsOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataLimitsOutcome SddpClient::describeDataLimits(const DescribeDataLimitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitsOutcome(DescribeDataLimitsResult(outcome.result()));
	else
		return DescribeDataLimitsOutcome(outcome.error());
}

void SddpClient::describeDataLimitsAsync(const DescribeDataLimitsRequest& request, const DescribeDataLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataLimitsOutcomeCallable SddpClient::describeDataLimitsCallable(const DescribeDataLimitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitsOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventsOutcome SddpClient::describeEvents(const DescribeEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventsOutcome(DescribeEventsResult(outcome.result()));
	else
		return DescribeEventsOutcome(outcome.error());
}

void SddpClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventsOutcomeCallable SddpClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateDataLimitOutcome SddpClient::createDataLimit(const CreateDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataLimitOutcome(CreateDataLimitResult(outcome.result()));
	else
		return CreateDataLimitOutcome(outcome.error());
}

void SddpClient::createDataLimitAsync(const CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateDataLimitOutcomeCallable SddpClient::createDataLimitCallable(const CreateDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataLimitOutcome()>>(
			[this, request]()
			{
			return this->createDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyRuleOutcome SddpClient::modifyRule(const ModifyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRuleOutcome(ModifyRuleResult(outcome.result()));
	else
		return ModifyRuleOutcome(outcome.error());
}

void SddpClient::modifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyRuleOutcomeCallable SddpClient::modifyRuleCallable(const ModifyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventDetailOutcome SddpClient::describeEventDetail(const DescribeEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventDetailOutcome(DescribeEventDetailResult(outcome.result()));
	else
		return DescribeEventDetailOutcome(outcome.error());
}

void SddpClient::describeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventDetailOutcomeCallable SddpClient::describeEventDetailCallable(const DescribeEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyDataLimitOutcome SddpClient::modifyDataLimit(const ModifyDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataLimitOutcome(ModifyDataLimitResult(outcome.result()));
	else
		return ModifyDataLimitOutcome(outcome.error());
}

void SddpClient::modifyDataLimitAsync(const ModifyDataLimitRequest& request, const ModifyDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyDataLimitOutcomeCallable SddpClient::modifyDataLimitCallable(const ModifyDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataLimitOutcome()>>(
			[this, request]()
			{
			return this->modifyDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeTablesOutcome SddpClient::describeTables(const DescribeTablesRequest &request) const
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

void SddpClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeTablesOutcomeCallable SddpClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribePrivilegesOutcome SddpClient::describePrivileges(const DescribePrivilegesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrivilegesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrivilegesOutcome(DescribePrivilegesResult(outcome.result()));
	else
		return DescribePrivilegesOutcome(outcome.error());
}

void SddpClient::describePrivilegesAsync(const DescribePrivilegesRequest& request, const DescribePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribePrivilegesOutcomeCallable SddpClient::describePrivilegesCallable(const DescribePrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrivilegesOutcome()>>(
			[this, request]()
			{
			return this->describePrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataHubProjectsOutcome SddpClient::describeDataHubProjects(const DescribeDataHubProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataHubProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataHubProjectsOutcome(DescribeDataHubProjectsResult(outcome.result()));
	else
		return DescribeDataHubProjectsOutcome(outcome.error());
}

void SddpClient::describeDataHubProjectsAsync(const DescribeDataHubProjectsRequest& request, const DescribeDataHubProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataHubProjectsOutcomeCallable SddpClient::describeDataHubProjectsCallable(const DescribeDataHubProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubProjectsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeInstancesOutcome SddpClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void SddpClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeInstancesOutcomeCallable SddpClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyEventTypeStatusOutcome SddpClient::modifyEventTypeStatus(const ModifyEventTypeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEventTypeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEventTypeStatusOutcome(ModifyEventTypeStatusResult(outcome.result()));
	else
		return ModifyEventTypeStatusOutcome(outcome.error());
}

void SddpClient::modifyEventTypeStatusAsync(const ModifyEventTypeStatusRequest& request, const ModifyEventTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventTypeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyEventTypeStatusOutcomeCallable SddpClient::modifyEventTypeStatusCallable(const ModifyEventTypeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventTypeStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventTypeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyDefaultLevelOutcome SddpClient::modifyDefaultLevel(const ModifyDefaultLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDefaultLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDefaultLevelOutcome(ModifyDefaultLevelResult(outcome.result()));
	else
		return ModifyDefaultLevelOutcome(outcome.error());
}

void SddpClient::modifyDefaultLevelAsync(const ModifyDefaultLevelRequest& request, const ModifyDefaultLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDefaultLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyDefaultLevelOutcomeCallable SddpClient::modifyDefaultLevelCallable(const ModifyDefaultLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDefaultLevelOutcome()>>(
			[this, request]()
			{
			return this->modifyDefaultLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeUserStatusOutcome SddpClient::describeUserStatus(const DescribeUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserStatusOutcome(DescribeUserStatusResult(outcome.result()));
	else
		return DescribeUserStatusOutcome(outcome.error());
}

void SddpClient::describeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeUserStatusOutcomeCallable SddpClient::describeUserStatusCallable(const DescribeUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

