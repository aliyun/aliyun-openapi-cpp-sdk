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

#include <alibabacloud/selectdb/SelectdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

namespace
{
	const std::string SERVICE_NAME = "selectdb";
}

SelectdbClient::SelectdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SelectdbClient::SelectdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SelectdbClient::SelectdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SelectdbClient::~SelectdbClient()
{}

SelectdbClient::AllocateInstancePublicConnectionOutcome SelectdbClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
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

void SelectdbClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::AllocateInstancePublicConnectionOutcomeCallable SelectdbClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CheckCreateDBInstanceOutcome SelectdbClient::checkCreateDBInstance(const CheckCreateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCreateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCreateDBInstanceOutcome(CheckCreateDBInstanceResult(outcome.result()));
	else
		return CheckCreateDBInstanceOutcome(outcome.error());
}

void SelectdbClient::checkCreateDBInstanceAsync(const CheckCreateDBInstanceRequest& request, const CheckCreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCreateDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CheckCreateDBInstanceOutcomeCallable SelectdbClient::checkCreateDBInstanceCallable(const CheckCreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->checkCreateDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CheckServiceLinkedRoleOutcome SelectdbClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(CheckServiceLinkedRoleResult(outcome.result()));
	else
		return CheckServiceLinkedRoleOutcome(outcome.error());
}

void SelectdbClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CheckServiceLinkedRoleOutcomeCallable SelectdbClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CreateDBClusterOutcome SelectdbClient::createDBCluster(const CreateDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterOutcome(CreateDBClusterResult(outcome.result()));
	else
		return CreateDBClusterOutcome(outcome.error());
}

void SelectdbClient::createDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CreateDBClusterOutcomeCallable SelectdbClient::createDBClusterCallable(const CreateDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterOutcome()>>(
			[this, request]()
			{
			return this->createDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CreateDBInstanceOutcome SelectdbClient::createDBInstance(const CreateDBInstanceRequest &request) const
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

void SelectdbClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CreateDBInstanceOutcomeCallable SelectdbClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CreateElasticRuleOutcome SelectdbClient::createElasticRule(const CreateElasticRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateElasticRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateElasticRuleOutcome(CreateElasticRuleResult(outcome.result()));
	else
		return CreateElasticRuleOutcome(outcome.error());
}

void SelectdbClient::createElasticRuleAsync(const CreateElasticRuleRequest& request, const CreateElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createElasticRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CreateElasticRuleOutcomeCallable SelectdbClient::createElasticRuleCallable(const CreateElasticRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateElasticRuleOutcome()>>(
			[this, request]()
			{
			return this->createElasticRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::CreateServiceLinkedRoleForSelectDBOutcome SelectdbClient::createServiceLinkedRoleForSelectDB(const CreateServiceLinkedRoleForSelectDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleForSelectDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleForSelectDBOutcome(CreateServiceLinkedRoleForSelectDBResult(outcome.result()));
	else
		return CreateServiceLinkedRoleForSelectDBOutcome(outcome.error());
}

void SelectdbClient::createServiceLinkedRoleForSelectDBAsync(const CreateServiceLinkedRoleForSelectDBRequest& request, const CreateServiceLinkedRoleForSelectDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRoleForSelectDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::CreateServiceLinkedRoleForSelectDBOutcomeCallable SelectdbClient::createServiceLinkedRoleForSelectDBCallable(const CreateServiceLinkedRoleForSelectDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleForSelectDBOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRoleForSelectDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DeleteDBClusterOutcome SelectdbClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterOutcome(DeleteDBClusterResult(outcome.result()));
	else
		return DeleteDBClusterOutcome(outcome.error());
}

void SelectdbClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DeleteDBClusterOutcomeCallable SelectdbClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DeleteDBInstanceOutcome SelectdbClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
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

void SelectdbClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DeleteDBInstanceOutcomeCallable SelectdbClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DeleteElasticRuleOutcome SelectdbClient::deleteElasticRule(const DeleteElasticRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteElasticRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteElasticRuleOutcome(DeleteElasticRuleResult(outcome.result()));
	else
		return DeleteElasticRuleOutcome(outcome.error());
}

void SelectdbClient::deleteElasticRuleAsync(const DeleteElasticRuleRequest& request, const DeleteElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteElasticRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DeleteElasticRuleOutcomeCallable SelectdbClient::deleteElasticRuleCallable(const DeleteElasticRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteElasticRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteElasticRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeAllDBInstanceClassOutcome SelectdbClient::describeAllDBInstanceClass(const DescribeAllDBInstanceClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllDBInstanceClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllDBInstanceClassOutcome(DescribeAllDBInstanceClassResult(outcome.result()));
	else
		return DescribeAllDBInstanceClassOutcome(outcome.error());
}

void SelectdbClient::describeAllDBInstanceClassAsync(const DescribeAllDBInstanceClassRequest& request, const DescribeAllDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllDBInstanceClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeAllDBInstanceClassOutcomeCallable SelectdbClient::describeAllDBInstanceClassCallable(const DescribeAllDBInstanceClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllDBInstanceClassOutcome()>>(
			[this, request]()
			{
			return this->describeAllDBInstanceClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeDBClusterConfigOutcome SelectdbClient::describeDBClusterConfig(const DescribeDBClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterConfigOutcome(DescribeDBClusterConfigResult(outcome.result()));
	else
		return DescribeDBClusterConfigOutcome(outcome.error());
}

void SelectdbClient::describeDBClusterConfigAsync(const DescribeDBClusterConfigRequest& request, const DescribeDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeDBClusterConfigOutcomeCallable SelectdbClient::describeDBClusterConfigCallable(const DescribeDBClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeDBClusterConfigChangeLogsOutcome SelectdbClient::describeDBClusterConfigChangeLogs(const DescribeDBClusterConfigChangeLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterConfigChangeLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterConfigChangeLogsOutcome(DescribeDBClusterConfigChangeLogsResult(outcome.result()));
	else
		return DescribeDBClusterConfigChangeLogsOutcome(outcome.error());
}

void SelectdbClient::describeDBClusterConfigChangeLogsAsync(const DescribeDBClusterConfigChangeLogsRequest& request, const DescribeDBClusterConfigChangeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterConfigChangeLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeDBClusterConfigChangeLogsOutcomeCallable SelectdbClient::describeDBClusterConfigChangeLogsCallable(const DescribeDBClusterConfigChangeLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterConfigChangeLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterConfigChangeLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeDBInstanceAttributeOutcome SelectdbClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
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

void SelectdbClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeDBInstanceAttributeOutcomeCallable SelectdbClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeDBInstanceNetInfoOutcome SelectdbClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(DescribeDBInstanceNetInfoResult(outcome.result()));
	else
		return DescribeDBInstanceNetInfoOutcome(outcome.error());
}

void SelectdbClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeDBInstanceNetInfoOutcomeCallable SelectdbClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeDBInstancesOutcome SelectdbClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
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

void SelectdbClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeDBInstancesOutcomeCallable SelectdbClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeElasticRulesOutcome SelectdbClient::describeElasticRules(const DescribeElasticRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticRulesOutcome(DescribeElasticRulesResult(outcome.result()));
	else
		return DescribeElasticRulesOutcome(outcome.error());
}

void SelectdbClient::describeElasticRulesAsync(const DescribeElasticRulesRequest& request, const DescribeElasticRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeElasticRulesOutcomeCallable SelectdbClient::describeElasticRulesCallable(const DescribeElasticRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticRulesOutcome()>>(
			[this, request]()
			{
			return this->describeElasticRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::DescribeSecurityIPListOutcome SelectdbClient::describeSecurityIPList(const DescribeSecurityIPListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityIPListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityIPListOutcome(DescribeSecurityIPListResult(outcome.result()));
	else
		return DescribeSecurityIPListOutcome(outcome.error());
}

void SelectdbClient::describeSecurityIPListAsync(const DescribeSecurityIPListRequest& request, const DescribeSecurityIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIPList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::DescribeSecurityIPListOutcomeCallable SelectdbClient::describeSecurityIPListCallable(const DescribeSecurityIPListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIPListOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIPList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::EnDisableScalingRulesOutcome SelectdbClient::enDisableScalingRules(const EnDisableScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnDisableScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnDisableScalingRulesOutcome(EnDisableScalingRulesResult(outcome.result()));
	else
		return EnDisableScalingRulesOutcome(outcome.error());
}

void SelectdbClient::enDisableScalingRulesAsync(const EnDisableScalingRulesRequest& request, const EnDisableScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enDisableScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::EnDisableScalingRulesOutcomeCallable SelectdbClient::enDisableScalingRulesCallable(const EnDisableScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnDisableScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->enDisableScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::GetCreateBEClusterInquiryOutcome SelectdbClient::getCreateBEClusterInquiry(const GetCreateBEClusterInquiryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreateBEClusterInquiryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreateBEClusterInquiryOutcome(GetCreateBEClusterInquiryResult(outcome.result()));
	else
		return GetCreateBEClusterInquiryOutcome(outcome.error());
}

void SelectdbClient::getCreateBEClusterInquiryAsync(const GetCreateBEClusterInquiryRequest& request, const GetCreateBEClusterInquiryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreateBEClusterInquiry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::GetCreateBEClusterInquiryOutcomeCallable SelectdbClient::getCreateBEClusterInquiryCallable(const GetCreateBEClusterInquiryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreateBEClusterInquiryOutcome()>>(
			[this, request]()
			{
			return this->getCreateBEClusterInquiry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::GetModifyBEClusterInquiryOutcome SelectdbClient::getModifyBEClusterInquiry(const GetModifyBEClusterInquiryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModifyBEClusterInquiryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModifyBEClusterInquiryOutcome(GetModifyBEClusterInquiryResult(outcome.result()));
	else
		return GetModifyBEClusterInquiryOutcome(outcome.error());
}

void SelectdbClient::getModifyBEClusterInquiryAsync(const GetModifyBEClusterInquiryRequest& request, const GetModifyBEClusterInquiryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModifyBEClusterInquiry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::GetModifyBEClusterInquiryOutcomeCallable SelectdbClient::getModifyBEClusterInquiryCallable(const GetModifyBEClusterInquiryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModifyBEClusterInquiryOutcome()>>(
			[this, request]()
			{
			return this->getModifyBEClusterInquiry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifyBEClusterAttributeOutcome SelectdbClient::modifyBEClusterAttribute(const ModifyBEClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBEClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBEClusterAttributeOutcome(ModifyBEClusterAttributeResult(outcome.result()));
	else
		return ModifyBEClusterAttributeOutcome(outcome.error());
}

void SelectdbClient::modifyBEClusterAttributeAsync(const ModifyBEClusterAttributeRequest& request, const ModifyBEClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBEClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifyBEClusterAttributeOutcomeCallable SelectdbClient::modifyBEClusterAttributeCallable(const ModifyBEClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBEClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBEClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifyDBClusterOutcome SelectdbClient::modifyDBCluster(const ModifyDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterOutcome(ModifyDBClusterResult(outcome.result()));
	else
		return ModifyDBClusterOutcome(outcome.error());
}

void SelectdbClient::modifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifyDBClusterOutcomeCallable SelectdbClient::modifyDBClusterCallable(const ModifyDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifyDBClusterConfigOutcome SelectdbClient::modifyDBClusterConfig(const ModifyDBClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterConfigOutcome(ModifyDBClusterConfigResult(outcome.result()));
	else
		return ModifyDBClusterConfigOutcome(outcome.error());
}

void SelectdbClient::modifyDBClusterConfigAsync(const ModifyDBClusterConfigRequest& request, const ModifyDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifyDBClusterConfigOutcomeCallable SelectdbClient::modifyDBClusterConfigCallable(const ModifyDBClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifyDBInstanceAttributeOutcome SelectdbClient::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceAttributeOutcome(ModifyDBInstanceAttributeResult(outcome.result()));
	else
		return ModifyDBInstanceAttributeOutcome(outcome.error());
}

void SelectdbClient::modifyDBInstanceAttributeAsync(const ModifyDBInstanceAttributeRequest& request, const ModifyDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifyDBInstanceAttributeOutcomeCallable SelectdbClient::modifyDBInstanceAttributeCallable(const ModifyDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifyElasticRuleOutcome SelectdbClient::modifyElasticRule(const ModifyElasticRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticRuleOutcome(ModifyElasticRuleResult(outcome.result()));
	else
		return ModifyElasticRuleOutcome(outcome.error());
}

void SelectdbClient::modifyElasticRuleAsync(const ModifyElasticRuleRequest& request, const ModifyElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifyElasticRuleOutcomeCallable SelectdbClient::modifyElasticRuleCallable(const ModifyElasticRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ModifySecurityIPListOutcome SelectdbClient::modifySecurityIPList(const ModifySecurityIPListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityIPListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityIPListOutcome(ModifySecurityIPListResult(outcome.result()));
	else
		return ModifySecurityIPListOutcome(outcome.error());
}

void SelectdbClient::modifySecurityIPListAsync(const ModifySecurityIPListRequest& request, const ModifySecurityIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIPList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ModifySecurityIPListOutcomeCallable SelectdbClient::modifySecurityIPListCallable(const ModifySecurityIPListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIPListOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIPList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ReleaseInstancePublicConnectionOutcome SelectdbClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
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

void SelectdbClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ReleaseInstancePublicConnectionOutcomeCallable SelectdbClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::ResetAccountPasswordOutcome SelectdbClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void SelectdbClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::ResetAccountPasswordOutcomeCallable SelectdbClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::RestartDBClusterOutcome SelectdbClient::restartDBCluster(const RestartDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBClusterOutcome(RestartDBClusterResult(outcome.result()));
	else
		return RestartDBClusterOutcome(outcome.error());
}

void SelectdbClient::restartDBClusterAsync(const RestartDBClusterRequest& request, const RestartDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::RestartDBClusterOutcomeCallable SelectdbClient::restartDBClusterCallable(const RestartDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBClusterOutcome()>>(
			[this, request]()
			{
			return this->restartDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::StartBEClusterOutcome SelectdbClient::startBECluster(const StartBEClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBEClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBEClusterOutcome(StartBEClusterResult(outcome.result()));
	else
		return StartBEClusterOutcome(outcome.error());
}

void SelectdbClient::startBEClusterAsync(const StartBEClusterRequest& request, const StartBEClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBECluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::StartBEClusterOutcomeCallable SelectdbClient::startBEClusterCallable(const StartBEClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBEClusterOutcome()>>(
			[this, request]()
			{
			return this->startBECluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::StopBEClusterOutcome SelectdbClient::stopBECluster(const StopBEClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopBEClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopBEClusterOutcome(StopBEClusterResult(outcome.result()));
	else
		return StopBEClusterOutcome(outcome.error());
}

void SelectdbClient::stopBEClusterAsync(const StopBEClusterRequest& request, const StopBEClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopBECluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::StopBEClusterOutcomeCallable SelectdbClient::stopBEClusterCallable(const StopBEClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopBEClusterOutcome()>>(
			[this, request]()
			{
			return this->stopBECluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SelectdbClient::UpgradeDBInstanceEngineVersionOutcome SelectdbClient::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(UpgradeDBInstanceEngineVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceEngineVersionOutcome(outcome.error());
}

void SelectdbClient::upgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SelectdbClient::UpgradeDBInstanceEngineVersionOutcomeCallable SelectdbClient::upgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

