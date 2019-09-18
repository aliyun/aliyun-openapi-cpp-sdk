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

#include <alibabacloud/yundun-ds/Yundun_dsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

namespace
{
	const std::string SERVICE_NAME = "Yundun-ds";
}

Yundun_dsClient::Yundun_dsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun-ds");
}

Yundun_dsClient::Yundun_dsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun-ds");
}

Yundun_dsClient::Yundun_dsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun-ds");
}

Yundun_dsClient::~Yundun_dsClient()
{}

Yundun_dsClient::CreateConfigOutcome Yundun_dsClient::createConfig(const CreateConfigRequest &request) const
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

void Yundun_dsClient::createConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::CreateConfigOutcomeCallable Yundun_dsClient::createConfigCallable(const CreateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
			[this, request]()
			{
			return this->createConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::CreateDataLimitOutcome Yundun_dsClient::createDataLimit(const CreateDataLimitRequest &request) const
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

void Yundun_dsClient::createDataLimitAsync(const CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::CreateDataLimitOutcomeCallable Yundun_dsClient::createDataLimitCallable(const CreateDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataLimitOutcome()>>(
			[this, request]()
			{
			return this->createDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::CreateRuleOutcome Yundun_dsClient::createRule(const CreateRuleRequest &request) const
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

void Yundun_dsClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::CreateRuleOutcomeCallable Yundun_dsClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::CreateUserAuthOutcome Yundun_dsClient::createUserAuth(const CreateUserAuthRequest &request) const
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

void Yundun_dsClient::createUserAuthAsync(const CreateUserAuthRequest& request, const CreateUserAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::CreateUserAuthOutcomeCallable Yundun_dsClient::createUserAuthCallable(const CreateUserAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserAuthOutcome()>>(
			[this, request]()
			{
			return this->createUserAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DeleteDataLimitOutcome Yundun_dsClient::deleteDataLimit(const DeleteDataLimitRequest &request) const
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

void Yundun_dsClient::deleteDataLimitAsync(const DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DeleteDataLimitOutcomeCallable Yundun_dsClient::deleteDataLimitCallable(const DeleteDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataLimitOutcome()>>(
			[this, request]()
			{
			return this->deleteDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DeleteRuleOutcome Yundun_dsClient::deleteRule(const DeleteRuleRequest &request) const
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

void Yundun_dsClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DeleteRuleOutcomeCallable Yundun_dsClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeAccountDetailOutcome Yundun_dsClient::describeAccountDetail(const DescribeAccountDetailRequest &request) const
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

void Yundun_dsClient::describeAccountDetailAsync(const DescribeAccountDetailRequest& request, const DescribeAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeAccountDetailOutcomeCallable Yundun_dsClient::describeAccountDetailCallable(const DescribeAccountDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAccountDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeAccountsOutcome Yundun_dsClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void Yundun_dsClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeAccountsOutcomeCallable Yundun_dsClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeAuthAccountsOutcome Yundun_dsClient::describeAuthAccounts(const DescribeAuthAccountsRequest &request) const
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

void Yundun_dsClient::describeAuthAccountsAsync(const DescribeAuthAccountsRequest& request, const DescribeAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuthAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeAuthAccountsOutcomeCallable Yundun_dsClient::describeAuthAccountsCallable(const DescribeAuthAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuthAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAuthAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeColumnsOutcome Yundun_dsClient::describeColumns(const DescribeColumnsRequest &request) const
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

void Yundun_dsClient::describeColumnsAsync(const DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeColumnsOutcomeCallable Yundun_dsClient::describeColumnsCallable(const DescribeColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeConditionsOutcome Yundun_dsClient::describeConditions(const DescribeConditionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConditionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConditionsOutcome(DescribeConditionsResult(outcome.result()));
	else
		return DescribeConditionsOutcome(outcome.error());
}

void Yundun_dsClient::describeConditionsAsync(const DescribeConditionsRequest& request, const DescribeConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConditions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeConditionsOutcomeCallable Yundun_dsClient::describeConditionsCallable(const DescribeConditionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConditionsOutcome()>>(
			[this, request]()
			{
			return this->describeConditions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeConfigsOutcome Yundun_dsClient::describeConfigs(const DescribeConfigsRequest &request) const
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

void Yundun_dsClient::describeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeConfigsOutcomeCallable Yundun_dsClient::describeConfigsCallable(const DescribeConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataAssetsOutcome Yundun_dsClient::describeDataAssets(const DescribeDataAssetsRequest &request) const
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

void Yundun_dsClient::describeDataAssetsAsync(const DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataAssetsOutcomeCallable Yundun_dsClient::describeDataAssetsCallable(const DescribeDataAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeDataAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataCountsOutcome Yundun_dsClient::describeDataCounts(const DescribeDataCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataCountsOutcome(DescribeDataCountsResult(outcome.result()));
	else
		return DescribeDataCountsOutcome(outcome.error());
}

void Yundun_dsClient::describeDataCountsAsync(const DescribeDataCountsRequest& request, const DescribeDataCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataCountsOutcomeCallable Yundun_dsClient::describeDataCountsCallable(const DescribeDataCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataCountsOutcome()>>(
			[this, request]()
			{
			return this->describeDataCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataHubConnectorsOutcome Yundun_dsClient::describeDataHubConnectors(const DescribeDataHubConnectorsRequest &request) const
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

void Yundun_dsClient::describeDataHubConnectorsAsync(const DescribeDataHubConnectorsRequest& request, const DescribeDataHubConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubConnectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataHubConnectorsOutcomeCallable Yundun_dsClient::describeDataHubConnectorsCallable(const DescribeDataHubConnectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubConnectorsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubConnectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataHubProjectsOutcome Yundun_dsClient::describeDataHubProjects(const DescribeDataHubProjectsRequest &request) const
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

void Yundun_dsClient::describeDataHubProjectsAsync(const DescribeDataHubProjectsRequest& request, const DescribeDataHubProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataHubProjectsOutcomeCallable Yundun_dsClient::describeDataHubProjectsCallable(const DescribeDataHubProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubProjectsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataHubSubscriptionsOutcome Yundun_dsClient::describeDataHubSubscriptions(const DescribeDataHubSubscriptionsRequest &request) const
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

void Yundun_dsClient::describeDataHubSubscriptionsAsync(const DescribeDataHubSubscriptionsRequest& request, const DescribeDataHubSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubSubscriptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataHubSubscriptionsOutcomeCallable Yundun_dsClient::describeDataHubSubscriptionsCallable(const DescribeDataHubSubscriptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubSubscriptionsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubSubscriptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataHubTopicsOutcome Yundun_dsClient::describeDataHubTopics(const DescribeDataHubTopicsRequest &request) const
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

void Yundun_dsClient::describeDataHubTopicsAsync(const DescribeDataHubTopicsRequest& request, const DescribeDataHubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataHubTopics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataHubTopicsOutcomeCallable Yundun_dsClient::describeDataHubTopicsCallable(const DescribeDataHubTopicsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataHubTopicsOutcome()>>(
			[this, request]()
			{
			return this->describeDataHubTopics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataLimitSetOutcome Yundun_dsClient::describeDataLimitSet(const DescribeDataLimitSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitSetOutcome(DescribeDataLimitSetResult(outcome.result()));
	else
		return DescribeDataLimitSetOutcome(outcome.error());
}

void Yundun_dsClient::describeDataLimitSetAsync(const DescribeDataLimitSetRequest& request, const DescribeDataLimitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimitSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataLimitSetOutcomeCallable Yundun_dsClient::describeDataLimitSetCallable(const DescribeDataLimitSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitSetOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimitSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDataTotalCountOutcome Yundun_dsClient::describeDataTotalCount(const DescribeDataTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataTotalCountOutcome(DescribeDataTotalCountResult(outcome.result()));
	else
		return DescribeDataTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeDataTotalCountAsync(const DescribeDataTotalCountRequest& request, const DescribeDataTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDataTotalCountOutcomeCallable Yundun_dsClient::describeDataTotalCountCallable(const DescribeDataTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeDataTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDepartCountsOutcome Yundun_dsClient::describeDepartCounts(const DescribeDepartCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDepartCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDepartCountsOutcome(DescribeDepartCountsResult(outcome.result()));
	else
		return DescribeDepartCountsOutcome(outcome.error());
}

void Yundun_dsClient::describeDepartCountsAsync(const DescribeDepartCountsRequest& request, const DescribeDepartCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDepartCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDepartCountsOutcomeCallable Yundun_dsClient::describeDepartCountsCallable(const DescribeDepartCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDepartCountsOutcome()>>(
			[this, request]()
			{
			return this->describeDepartCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDepartTotalCountOutcome Yundun_dsClient::describeDepartTotalCount(const DescribeDepartTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDepartTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDepartTotalCountOutcome(DescribeDepartTotalCountResult(outcome.result()));
	else
		return DescribeDepartTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeDepartTotalCountAsync(const DescribeDepartTotalCountRequest& request, const DescribeDepartTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDepartTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDepartTotalCountOutcomeCallable Yundun_dsClient::describeDepartTotalCountCallable(const DescribeDepartTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDepartTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeDepartTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeDepartsOutcome Yundun_dsClient::describeDeparts(const DescribeDepartsRequest &request) const
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

void Yundun_dsClient::describeDepartsAsync(const DescribeDepartsRequest& request, const DescribeDepartsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeparts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeDepartsOutcomeCallable Yundun_dsClient::describeDepartsCallable(const DescribeDepartsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDepartsOutcome()>>(
			[this, request]()
			{
			return this->describeDeparts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeEventCountsOutcome Yundun_dsClient::describeEventCounts(const DescribeEventCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventCountsOutcome(DescribeEventCountsResult(outcome.result()));
	else
		return DescribeEventCountsOutcome(outcome.error());
}

void Yundun_dsClient::describeEventCountsAsync(const DescribeEventCountsRequest& request, const DescribeEventCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeEventCountsOutcomeCallable Yundun_dsClient::describeEventCountsCallable(const DescribeEventCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventCountsOutcome()>>(
			[this, request]()
			{
			return this->describeEventCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeEventDetailOutcome Yundun_dsClient::describeEventDetail(const DescribeEventDetailRequest &request) const
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

void Yundun_dsClient::describeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeEventDetailOutcomeCallable Yundun_dsClient::describeEventDetailCallable(const DescribeEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeEventTotalCountOutcome Yundun_dsClient::describeEventTotalCount(const DescribeEventTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventTotalCountOutcome(DescribeEventTotalCountResult(outcome.result()));
	else
		return DescribeEventTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeEventTotalCountAsync(const DescribeEventTotalCountRequest& request, const DescribeEventTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeEventTotalCountOutcomeCallable Yundun_dsClient::describeEventTotalCountCallable(const DescribeEventTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeEventTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeEventTypesOutcome Yundun_dsClient::describeEventTypes(const DescribeEventTypesRequest &request) const
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

void Yundun_dsClient::describeEventTypesAsync(const DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeEventTypesOutcomeCallable Yundun_dsClient::describeEventTypesCallable(const DescribeEventTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventTypesOutcome()>>(
			[this, request]()
			{
			return this->describeEventTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeEventsOutcome Yundun_dsClient::describeEvents(const DescribeEventsRequest &request) const
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

void Yundun_dsClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeEventsOutcomeCallable Yundun_dsClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeFlowTotalCountOutcome Yundun_dsClient::describeFlowTotalCount(const DescribeFlowTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowTotalCountOutcome(DescribeFlowTotalCountResult(outcome.result()));
	else
		return DescribeFlowTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeFlowTotalCountAsync(const DescribeFlowTotalCountRequest& request, const DescribeFlowTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeFlowTotalCountOutcomeCallable Yundun_dsClient::describeFlowTotalCountCallable(const DescribeFlowTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeFlowTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeInstancesOutcome Yundun_dsClient::describeInstances(const DescribeInstancesRequest &request) const
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

void Yundun_dsClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeInstancesOutcomeCallable Yundun_dsClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeOssObjectDetailOutcome Yundun_dsClient::describeOssObjectDetail(const DescribeOssObjectDetailRequest &request) const
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

void Yundun_dsClient::describeOssObjectDetailAsync(const DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjectDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeOssObjectDetailOutcomeCallable Yundun_dsClient::describeOssObjectDetailCallable(const DescribeOssObjectDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectDetailOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjectDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeOssObjectsOutcome Yundun_dsClient::describeOssObjects(const DescribeOssObjectsRequest &request) const
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

void Yundun_dsClient::describeOssObjectsAsync(const DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeOssObjectsOutcomeCallable Yundun_dsClient::describeOssObjectsCallable(const DescribeOssObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectsOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribePackagesOutcome Yundun_dsClient::describePackages(const DescribePackagesRequest &request) const
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

void Yundun_dsClient::describePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribePackagesOutcomeCallable Yundun_dsClient::describePackagesCallable(const DescribePackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackagesOutcome()>>(
			[this, request]()
			{
			return this->describePackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribePrivilegesOutcome Yundun_dsClient::describePrivileges(const DescribePrivilegesRequest &request) const
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

void Yundun_dsClient::describePrivilegesAsync(const DescribePrivilegesRequest& request, const DescribePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribePrivilegesOutcomeCallable Yundun_dsClient::describePrivilegesCallable(const DescribePrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrivilegesOutcome()>>(
			[this, request]()
			{
			return this->describePrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeRuleTotalCountOutcome Yundun_dsClient::describeRuleTotalCount(const DescribeRuleTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRuleTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRuleTotalCountOutcome(DescribeRuleTotalCountResult(outcome.result()));
	else
		return DescribeRuleTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeRuleTotalCountAsync(const DescribeRuleTotalCountRequest& request, const DescribeRuleTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRuleTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeRuleTotalCountOutcomeCallable Yundun_dsClient::describeRuleTotalCountCallable(const DescribeRuleTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRuleTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeRuleTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeRulesOutcome Yundun_dsClient::describeRules(const DescribeRulesRequest &request) const
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

void Yundun_dsClient::describeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeRulesOutcomeCallable Yundun_dsClient::describeRulesCallable(const DescribeRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
			[this, request]()
			{
			return this->describeRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeTablesOutcome Yundun_dsClient::describeTables(const DescribeTablesRequest &request) const
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

void Yundun_dsClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeTablesOutcomeCallable Yundun_dsClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeTotalCountOutcome Yundun_dsClient::describeTotalCount(const DescribeTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTotalCountOutcome(DescribeTotalCountResult(outcome.result()));
	else
		return DescribeTotalCountOutcome(outcome.error());
}

void Yundun_dsClient::describeTotalCountAsync(const DescribeTotalCountRequest& request, const DescribeTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeTotalCountOutcomeCallable Yundun_dsClient::describeTotalCountCallable(const DescribeTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeTransferEventCountsOutcome Yundun_dsClient::describeTransferEventCounts(const DescribeTransferEventCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTransferEventCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTransferEventCountsOutcome(DescribeTransferEventCountsResult(outcome.result()));
	else
		return DescribeTransferEventCountsOutcome(outcome.error());
}

void Yundun_dsClient::describeTransferEventCountsAsync(const DescribeTransferEventCountsRequest& request, const DescribeTransferEventCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTransferEventCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeTransferEventCountsOutcomeCallable Yundun_dsClient::describeTransferEventCountsCallable(const DescribeTransferEventCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTransferEventCountsOutcome()>>(
			[this, request]()
			{
			return this->describeTransferEventCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::DescribeUserStatusOutcome Yundun_dsClient::describeUserStatus(const DescribeUserStatusRequest &request) const
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

void Yundun_dsClient::describeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::DescribeUserStatusOutcomeCallable Yundun_dsClient::describeUserStatusCallable(const DescribeUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ModifyDefaultLevelOutcome Yundun_dsClient::modifyDefaultLevel(const ModifyDefaultLevelRequest &request) const
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

void Yundun_dsClient::modifyDefaultLevelAsync(const ModifyDefaultLevelRequest& request, const ModifyDefaultLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDefaultLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ModifyDefaultLevelOutcomeCallable Yundun_dsClient::modifyDefaultLevelCallable(const ModifyDefaultLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDefaultLevelOutcome()>>(
			[this, request]()
			{
			return this->modifyDefaultLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ModifyEventStatusOutcome Yundun_dsClient::modifyEventStatus(const ModifyEventStatusRequest &request) const
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

void Yundun_dsClient::modifyEventStatusAsync(const ModifyEventStatusRequest& request, const ModifyEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ModifyEventStatusOutcomeCallable Yundun_dsClient::modifyEventStatusCallable(const ModifyEventStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ModifyEventTypeStatusOutcome Yundun_dsClient::modifyEventTypeStatus(const ModifyEventTypeStatusRequest &request) const
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

void Yundun_dsClient::modifyEventTypeStatusAsync(const ModifyEventTypeStatusRequest& request, const ModifyEventTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventTypeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ModifyEventTypeStatusOutcomeCallable Yundun_dsClient::modifyEventTypeStatusCallable(const ModifyEventTypeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventTypeStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventTypeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ModifyRuleOutcome Yundun_dsClient::modifyRule(const ModifyRuleRequest &request) const
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

void Yundun_dsClient::modifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ModifyRuleOutcomeCallable Yundun_dsClient::modifyRuleCallable(const ModifyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ModifyRuleStatusOutcome Yundun_dsClient::modifyRuleStatus(const ModifyRuleStatusRequest &request) const
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

void Yundun_dsClient::modifyRuleStatusAsync(const ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ModifyRuleStatusOutcomeCallable Yundun_dsClient::modifyRuleStatusCallable(const ModifyRuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Yundun_dsClient::ValidateConnectorOutcome Yundun_dsClient::validateConnector(const ValidateConnectorRequest &request) const
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

void Yundun_dsClient::validateConnectorAsync(const ValidateConnectorRequest& request, const ValidateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Yundun_dsClient::ValidateConnectorOutcomeCallable Yundun_dsClient::validateConnectorCallable(const ValidateConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateConnectorOutcome()>>(
			[this, request]()
			{
			return this->validateConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

