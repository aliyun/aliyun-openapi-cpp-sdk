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

#include <alibabacloud/ess/EssClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

namespace
{
	const std::string SERVICE_NAME = "Ess";
}

EssClient::EssClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ess");
}

EssClient::EssClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ess");
}

EssClient::EssClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ess");
}

EssClient::~EssClient()
{}

EssClient::AttachAlbServerGroupsOutcome EssClient::attachAlbServerGroups(const AttachAlbServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachAlbServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachAlbServerGroupsOutcome(AttachAlbServerGroupsResult(outcome.result()));
	else
		return AttachAlbServerGroupsOutcome(outcome.error());
}

void EssClient::attachAlbServerGroupsAsync(const AttachAlbServerGroupsRequest& request, const AttachAlbServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachAlbServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachAlbServerGroupsOutcomeCallable EssClient::attachAlbServerGroupsCallable(const AttachAlbServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachAlbServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->attachAlbServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::AttachDBInstancesOutcome EssClient::attachDBInstances(const AttachDBInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDBInstancesOutcome(AttachDBInstancesResult(outcome.result()));
	else
		return AttachDBInstancesOutcome(outcome.error());
}

void EssClient::attachDBInstancesAsync(const AttachDBInstancesRequest& request, const AttachDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachDBInstancesOutcomeCallable EssClient::attachDBInstancesCallable(const AttachDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::AttachInstancesOutcome EssClient::attachInstances(const AttachInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachInstancesOutcome(AttachInstancesResult(outcome.result()));
	else
		return AttachInstancesOutcome(outcome.error());
}

void EssClient::attachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachInstancesOutcomeCallable EssClient::attachInstancesCallable(const AttachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::AttachLoadBalancersOutcome EssClient::attachLoadBalancers(const AttachLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachLoadBalancersOutcome(AttachLoadBalancersResult(outcome.result()));
	else
		return AttachLoadBalancersOutcome(outcome.error());
}

void EssClient::attachLoadBalancersAsync(const AttachLoadBalancersRequest& request, const AttachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachLoadBalancersOutcomeCallable EssClient::attachLoadBalancersCallable(const AttachLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->attachLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::AttachServerGroupsOutcome EssClient::attachServerGroups(const AttachServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachServerGroupsOutcome(AttachServerGroupsResult(outcome.result()));
	else
		return AttachServerGroupsOutcome(outcome.error());
}

void EssClient::attachServerGroupsAsync(const AttachServerGroupsRequest& request, const AttachServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachServerGroupsOutcomeCallable EssClient::attachServerGroupsCallable(const AttachServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->attachServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::AttachVServerGroupsOutcome EssClient::attachVServerGroups(const AttachVServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachVServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachVServerGroupsOutcome(AttachVServerGroupsResult(outcome.result()));
	else
		return AttachVServerGroupsOutcome(outcome.error());
}

void EssClient::attachVServerGroupsAsync(const AttachVServerGroupsRequest& request, const AttachVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachVServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::AttachVServerGroupsOutcomeCallable EssClient::attachVServerGroupsCallable(const AttachVServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachVServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->attachVServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ChangeResourceGroupOutcome EssClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void EssClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ChangeResourceGroupOutcomeCallable EssClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CompleteLifecycleActionOutcome EssClient::completeLifecycleAction(const CompleteLifecycleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompleteLifecycleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompleteLifecycleActionOutcome(CompleteLifecycleActionResult(outcome.result()));
	else
		return CompleteLifecycleActionOutcome(outcome.error());
}

void EssClient::completeLifecycleActionAsync(const CompleteLifecycleActionRequest& request, const CompleteLifecycleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completeLifecycleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CompleteLifecycleActionOutcomeCallable EssClient::completeLifecycleActionCallable(const CompleteLifecycleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompleteLifecycleActionOutcome()>>(
			[this, request]()
			{
			return this->completeLifecycleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateAlarmOutcome EssClient::createAlarm(const CreateAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlarmOutcome(CreateAlarmResult(outcome.result()));
	else
		return CreateAlarmOutcome(outcome.error());
}

void EssClient::createAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateAlarmOutcomeCallable EssClient::createAlarmCallable(const CreateAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlarmOutcome()>>(
			[this, request]()
			{
			return this->createAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateEciScalingConfigurationOutcome EssClient::createEciScalingConfiguration(const CreateEciScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEciScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEciScalingConfigurationOutcome(CreateEciScalingConfigurationResult(outcome.result()));
	else
		return CreateEciScalingConfigurationOutcome(outcome.error());
}

void EssClient::createEciScalingConfigurationAsync(const CreateEciScalingConfigurationRequest& request, const CreateEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEciScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateEciScalingConfigurationOutcomeCallable EssClient::createEciScalingConfigurationCallable(const CreateEciScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEciScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createEciScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateLifecycleHookOutcome EssClient::createLifecycleHook(const CreateLifecycleHookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLifecycleHookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLifecycleHookOutcome(CreateLifecycleHookResult(outcome.result()));
	else
		return CreateLifecycleHookOutcome(outcome.error());
}

void EssClient::createLifecycleHookAsync(const CreateLifecycleHookRequest& request, const CreateLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLifecycleHook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateLifecycleHookOutcomeCallable EssClient::createLifecycleHookCallable(const CreateLifecycleHookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLifecycleHookOutcome()>>(
			[this, request]()
			{
			return this->createLifecycleHook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateNotificationConfigurationOutcome EssClient::createNotificationConfiguration(const CreateNotificationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNotificationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNotificationConfigurationOutcome(CreateNotificationConfigurationResult(outcome.result()));
	else
		return CreateNotificationConfigurationOutcome(outcome.error());
}

void EssClient::createNotificationConfigurationAsync(const CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNotificationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateNotificationConfigurationOutcomeCallable EssClient::createNotificationConfigurationCallable(const CreateNotificationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNotificationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createNotificationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingConfigurationOutcome EssClient::createScalingConfiguration(const CreateScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingConfigurationOutcome(CreateScalingConfigurationResult(outcome.result()));
	else
		return CreateScalingConfigurationOutcome(outcome.error());
}

void EssClient::createScalingConfigurationAsync(const CreateScalingConfigurationRequest& request, const CreateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingConfigurationOutcomeCallable EssClient::createScalingConfigurationCallable(const CreateScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingGroupOutcome EssClient::createScalingGroup(const CreateScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingGroupOutcome(CreateScalingGroupResult(outcome.result()));
	else
		return CreateScalingGroupOutcome(outcome.error());
}

void EssClient::createScalingGroupAsync(const CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingGroupOutcomeCallable EssClient::createScalingGroupCallable(const CreateScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->createScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScalingRuleOutcome EssClient::createScalingRule(const CreateScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingRuleOutcome(CreateScalingRuleResult(outcome.result()));
	else
		return CreateScalingRuleOutcome(outcome.error());
}

void EssClient::createScalingRuleAsync(const CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScalingRuleOutcomeCallable EssClient::createScalingRuleCallable(const CreateScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::CreateScheduledTaskOutcome EssClient::createScheduledTask(const CreateScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScheduledTaskOutcome(CreateScheduledTaskResult(outcome.result()));
	else
		return CreateScheduledTaskOutcome(outcome.error());
}

void EssClient::createScheduledTaskAsync(const CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::CreateScheduledTaskOutcomeCallable EssClient::createScheduledTaskCallable(const CreateScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->createScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeactivateScalingConfigurationOutcome EssClient::deactivateScalingConfiguration(const DeactivateScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateScalingConfigurationOutcome(DeactivateScalingConfigurationResult(outcome.result()));
	else
		return DeactivateScalingConfigurationOutcome(outcome.error());
}

void EssClient::deactivateScalingConfigurationAsync(const DeactivateScalingConfigurationRequest& request, const DeactivateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeactivateScalingConfigurationOutcomeCallable EssClient::deactivateScalingConfigurationCallable(const DeactivateScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deactivateScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteAlarmOutcome EssClient::deleteAlarm(const DeleteAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlarmOutcome(DeleteAlarmResult(outcome.result()));
	else
		return DeleteAlarmOutcome(outcome.error());
}

void EssClient::deleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteAlarmOutcomeCallable EssClient::deleteAlarmCallable(const DeleteAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlarmOutcome()>>(
			[this, request]()
			{
			return this->deleteAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteEciScalingConfigurationOutcome EssClient::deleteEciScalingConfiguration(const DeleteEciScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEciScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEciScalingConfigurationOutcome(DeleteEciScalingConfigurationResult(outcome.result()));
	else
		return DeleteEciScalingConfigurationOutcome(outcome.error());
}

void EssClient::deleteEciScalingConfigurationAsync(const DeleteEciScalingConfigurationRequest& request, const DeleteEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEciScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteEciScalingConfigurationOutcomeCallable EssClient::deleteEciScalingConfigurationCallable(const DeleteEciScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEciScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deleteEciScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteLifecycleHookOutcome EssClient::deleteLifecycleHook(const DeleteLifecycleHookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLifecycleHookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLifecycleHookOutcome(DeleteLifecycleHookResult(outcome.result()));
	else
		return DeleteLifecycleHookOutcome(outcome.error());
}

void EssClient::deleteLifecycleHookAsync(const DeleteLifecycleHookRequest& request, const DeleteLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLifecycleHook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteLifecycleHookOutcomeCallable EssClient::deleteLifecycleHookCallable(const DeleteLifecycleHookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLifecycleHookOutcome()>>(
			[this, request]()
			{
			return this->deleteLifecycleHook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteNotificationConfigurationOutcome EssClient::deleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNotificationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNotificationConfigurationOutcome(DeleteNotificationConfigurationResult(outcome.result()));
	else
		return DeleteNotificationConfigurationOutcome(outcome.error());
}

void EssClient::deleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNotificationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteNotificationConfigurationOutcomeCallable EssClient::deleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNotificationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deleteNotificationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingConfigurationOutcome EssClient::deleteScalingConfiguration(const DeleteScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingConfigurationOutcome(DeleteScalingConfigurationResult(outcome.result()));
	else
		return DeleteScalingConfigurationOutcome(outcome.error());
}

void EssClient::deleteScalingConfigurationAsync(const DeleteScalingConfigurationRequest& request, const DeleteScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingConfigurationOutcomeCallable EssClient::deleteScalingConfigurationCallable(const DeleteScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingGroupOutcome EssClient::deleteScalingGroup(const DeleteScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingGroupOutcome(DeleteScalingGroupResult(outcome.result()));
	else
		return DeleteScalingGroupOutcome(outcome.error());
}

void EssClient::deleteScalingGroupAsync(const DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingGroupOutcomeCallable EssClient::deleteScalingGroupCallable(const DeleteScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScalingRuleOutcome EssClient::deleteScalingRule(const DeleteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingRuleOutcome(DeleteScalingRuleResult(outcome.result()));
	else
		return DeleteScalingRuleOutcome(outcome.error());
}

void EssClient::deleteScalingRuleAsync(const DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScalingRuleOutcomeCallable EssClient::deleteScalingRuleCallable(const DeleteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DeleteScheduledTaskOutcome EssClient::deleteScheduledTask(const DeleteScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScheduledTaskOutcome(DeleteScheduledTaskResult(outcome.result()));
	else
		return DeleteScheduledTaskOutcome(outcome.error());
}

void EssClient::deleteScheduledTaskAsync(const DeleteScheduledTaskRequest& request, const DeleteScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DeleteScheduledTaskOutcomeCallable EssClient::deleteScheduledTaskCallable(const DeleteScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeAlarmsOutcome EssClient::describeAlarms(const DescribeAlarmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmsOutcome(DescribeAlarmsResult(outcome.result()));
	else
		return DescribeAlarmsOutcome(outcome.error());
}

void EssClient::describeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeAlarmsOutcomeCallable EssClient::describeAlarmsCallable(const DescribeAlarmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
			[this, request]()
			{
			return this->describeAlarms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeEciScalingConfigurationsOutcome EssClient::describeEciScalingConfigurations(const DescribeEciScalingConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEciScalingConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEciScalingConfigurationsOutcome(DescribeEciScalingConfigurationsResult(outcome.result()));
	else
		return DescribeEciScalingConfigurationsOutcome(outcome.error());
}

void EssClient::describeEciScalingConfigurationsAsync(const DescribeEciScalingConfigurationsRequest& request, const DescribeEciScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEciScalingConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeEciScalingConfigurationsOutcomeCallable EssClient::describeEciScalingConfigurationsCallable(const DescribeEciScalingConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEciScalingConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->describeEciScalingConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeElasticStrengthOutcome EssClient::describeElasticStrength(const DescribeElasticStrengthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticStrengthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticStrengthOutcome(DescribeElasticStrengthResult(outcome.result()));
	else
		return DescribeElasticStrengthOutcome(outcome.error());
}

void EssClient::describeElasticStrengthAsync(const DescribeElasticStrengthRequest& request, const DescribeElasticStrengthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticStrength(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeElasticStrengthOutcomeCallable EssClient::describeElasticStrengthCallable(const DescribeElasticStrengthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticStrengthOutcome()>>(
			[this, request]()
			{
			return this->describeElasticStrength(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeLifecycleActionsOutcome EssClient::describeLifecycleActions(const DescribeLifecycleActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLifecycleActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLifecycleActionsOutcome(DescribeLifecycleActionsResult(outcome.result()));
	else
		return DescribeLifecycleActionsOutcome(outcome.error());
}

void EssClient::describeLifecycleActionsAsync(const DescribeLifecycleActionsRequest& request, const DescribeLifecycleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLifecycleActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeLifecycleActionsOutcomeCallable EssClient::describeLifecycleActionsCallable(const DescribeLifecycleActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLifecycleActionsOutcome()>>(
			[this, request]()
			{
			return this->describeLifecycleActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeLifecycleHooksOutcome EssClient::describeLifecycleHooks(const DescribeLifecycleHooksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLifecycleHooksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLifecycleHooksOutcome(DescribeLifecycleHooksResult(outcome.result()));
	else
		return DescribeLifecycleHooksOutcome(outcome.error());
}

void EssClient::describeLifecycleHooksAsync(const DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLifecycleHooks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeLifecycleHooksOutcomeCallable EssClient::describeLifecycleHooksCallable(const DescribeLifecycleHooksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLifecycleHooksOutcome()>>(
			[this, request]()
			{
			return this->describeLifecycleHooks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeLimitationOutcome EssClient::describeLimitation(const DescribeLimitationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLimitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLimitationOutcome(DescribeLimitationResult(outcome.result()));
	else
		return DescribeLimitationOutcome(outcome.error());
}

void EssClient::describeLimitationAsync(const DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLimitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeLimitationOutcomeCallable EssClient::describeLimitationCallable(const DescribeLimitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLimitationOutcome()>>(
			[this, request]()
			{
			return this->describeLimitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeNotificationConfigurationsOutcome EssClient::describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNotificationConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNotificationConfigurationsOutcome(DescribeNotificationConfigurationsResult(outcome.result()));
	else
		return DescribeNotificationConfigurationsOutcome(outcome.error());
}

void EssClient::describeNotificationConfigurationsAsync(const DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNotificationConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeNotificationConfigurationsOutcomeCallable EssClient::describeNotificationConfigurationsCallable(const DescribeNotificationConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNotificationConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->describeNotificationConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeNotificationTypesOutcome EssClient::describeNotificationTypes(const DescribeNotificationTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNotificationTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNotificationTypesOutcome(DescribeNotificationTypesResult(outcome.result()));
	else
		return DescribeNotificationTypesOutcome(outcome.error());
}

void EssClient::describeNotificationTypesAsync(const DescribeNotificationTypesRequest& request, const DescribeNotificationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNotificationTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeNotificationTypesOutcomeCallable EssClient::describeNotificationTypesCallable(const DescribeNotificationTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNotificationTypesOutcome()>>(
			[this, request]()
			{
			return this->describeNotificationTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribePatternTypesOutcome EssClient::describePatternTypes(const DescribePatternTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePatternTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePatternTypesOutcome(DescribePatternTypesResult(outcome.result()));
	else
		return DescribePatternTypesOutcome(outcome.error());
}

void EssClient::describePatternTypesAsync(const DescribePatternTypesRequest& request, const DescribePatternTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePatternTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribePatternTypesOutcomeCallable EssClient::describePatternTypesCallable(const DescribePatternTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePatternTypesOutcome()>>(
			[this, request]()
			{
			return this->describePatternTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeRegionsOutcome EssClient::describeRegions(const DescribeRegionsRequest &request) const
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

void EssClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeRegionsOutcomeCallable EssClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingActivitiesOutcome EssClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivitiesOutcome(DescribeScalingActivitiesResult(outcome.result()));
	else
		return DescribeScalingActivitiesOutcome(outcome.error());
}

void EssClient::describeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingActivitiesOutcomeCallable EssClient::describeScalingActivitiesCallable(const DescribeScalingActivitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivitiesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingActivityDetailOutcome EssClient::describeScalingActivityDetail(const DescribeScalingActivityDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivityDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivityDetailOutcome(DescribeScalingActivityDetailResult(outcome.result()));
	else
		return DescribeScalingActivityDetailOutcome(outcome.error());
}

void EssClient::describeScalingActivityDetailAsync(const DescribeScalingActivityDetailRequest& request, const DescribeScalingActivityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivityDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingActivityDetailOutcomeCallable EssClient::describeScalingActivityDetailCallable(const DescribeScalingActivityDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivityDetailOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivityDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingConfigurationsOutcome EssClient::describeScalingConfigurations(const DescribeScalingConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingConfigurationsOutcome(DescribeScalingConfigurationsResult(outcome.result()));
	else
		return DescribeScalingConfigurationsOutcome(outcome.error());
}

void EssClient::describeScalingConfigurationsAsync(const DescribeScalingConfigurationsRequest& request, const DescribeScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingConfigurationsOutcomeCallable EssClient::describeScalingConfigurationsCallable(const DescribeScalingConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->describeScalingConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingGroupsOutcome EssClient::describeScalingGroups(const DescribeScalingGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingGroupsOutcome(DescribeScalingGroupsResult(outcome.result()));
	else
		return DescribeScalingGroupsOutcome(outcome.error());
}

void EssClient::describeScalingGroupsAsync(const DescribeScalingGroupsRequest& request, const DescribeScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingGroupsOutcomeCallable EssClient::describeScalingGroupsCallable(const DescribeScalingGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeScalingGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingInstancesOutcome EssClient::describeScalingInstances(const DescribeScalingInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingInstancesOutcome(DescribeScalingInstancesResult(outcome.result()));
	else
		return DescribeScalingInstancesOutcome(outcome.error());
}

void EssClient::describeScalingInstancesAsync(const DescribeScalingInstancesRequest& request, const DescribeScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingInstancesOutcomeCallable EssClient::describeScalingInstancesCallable(const DescribeScalingInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScalingRulesOutcome EssClient::describeScalingRules(const DescribeScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingRulesOutcome(DescribeScalingRulesResult(outcome.result()));
	else
		return DescribeScalingRulesOutcome(outcome.error());
}

void EssClient::describeScalingRulesAsync(const DescribeScalingRulesRequest& request, const DescribeScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScalingRulesOutcomeCallable EssClient::describeScalingRulesCallable(const DescribeScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DescribeScheduledTasksOutcome EssClient::describeScheduledTasks(const DescribeScheduledTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScheduledTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScheduledTasksOutcome(DescribeScheduledTasksResult(outcome.result()));
	else
		return DescribeScheduledTasksOutcome(outcome.error());
}

void EssClient::describeScheduledTasksAsync(const DescribeScheduledTasksRequest& request, const DescribeScheduledTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScheduledTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DescribeScheduledTasksOutcomeCallable EssClient::describeScheduledTasksCallable(const DescribeScheduledTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScheduledTasksOutcome()>>(
			[this, request]()
			{
			return this->describeScheduledTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachAlbServerGroupsOutcome EssClient::detachAlbServerGroups(const DetachAlbServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachAlbServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachAlbServerGroupsOutcome(DetachAlbServerGroupsResult(outcome.result()));
	else
		return DetachAlbServerGroupsOutcome(outcome.error());
}

void EssClient::detachAlbServerGroupsAsync(const DetachAlbServerGroupsRequest& request, const DetachAlbServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachAlbServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachAlbServerGroupsOutcomeCallable EssClient::detachAlbServerGroupsCallable(const DetachAlbServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachAlbServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->detachAlbServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachDBInstancesOutcome EssClient::detachDBInstances(const DetachDBInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDBInstancesOutcome(DetachDBInstancesResult(outcome.result()));
	else
		return DetachDBInstancesOutcome(outcome.error());
}

void EssClient::detachDBInstancesAsync(const DetachDBInstancesRequest& request, const DetachDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachDBInstancesOutcomeCallable EssClient::detachDBInstancesCallable(const DetachDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->detachDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachInstancesOutcome EssClient::detachInstances(const DetachInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachInstancesOutcome(DetachInstancesResult(outcome.result()));
	else
		return DetachInstancesOutcome(outcome.error());
}

void EssClient::detachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachInstancesOutcomeCallable EssClient::detachInstancesCallable(const DetachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachInstancesOutcome()>>(
			[this, request]()
			{
			return this->detachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachLoadBalancersOutcome EssClient::detachLoadBalancers(const DetachLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachLoadBalancersOutcome(DetachLoadBalancersResult(outcome.result()));
	else
		return DetachLoadBalancersOutcome(outcome.error());
}

void EssClient::detachLoadBalancersAsync(const DetachLoadBalancersRequest& request, const DetachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachLoadBalancersOutcomeCallable EssClient::detachLoadBalancersCallable(const DetachLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->detachLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachServerGroupsOutcome EssClient::detachServerGroups(const DetachServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachServerGroupsOutcome(DetachServerGroupsResult(outcome.result()));
	else
		return DetachServerGroupsOutcome(outcome.error());
}

void EssClient::detachServerGroupsAsync(const DetachServerGroupsRequest& request, const DetachServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachServerGroupsOutcomeCallable EssClient::detachServerGroupsCallable(const DetachServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->detachServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DetachVServerGroupsOutcome EssClient::detachVServerGroups(const DetachVServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachVServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachVServerGroupsOutcome(DetachVServerGroupsResult(outcome.result()));
	else
		return DetachVServerGroupsOutcome(outcome.error());
}

void EssClient::detachVServerGroupsAsync(const DetachVServerGroupsRequest& request, const DetachVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachVServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DetachVServerGroupsOutcomeCallable EssClient::detachVServerGroupsCallable(const DetachVServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachVServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->detachVServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DisableAlarmOutcome EssClient::disableAlarm(const DisableAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAlarmOutcome(DisableAlarmResult(outcome.result()));
	else
		return DisableAlarmOutcome(outcome.error());
}

void EssClient::disableAlarmAsync(const DisableAlarmRequest& request, const DisableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DisableAlarmOutcomeCallable EssClient::disableAlarmCallable(const DisableAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAlarmOutcome()>>(
			[this, request]()
			{
			return this->disableAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::DisableScalingGroupOutcome EssClient::disableScalingGroup(const DisableScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableScalingGroupOutcome(DisableScalingGroupResult(outcome.result()));
	else
		return DisableScalingGroupOutcome(outcome.error());
}

void EssClient::disableScalingGroupAsync(const DisableScalingGroupRequest& request, const DisableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::DisableScalingGroupOutcomeCallable EssClient::disableScalingGroupCallable(const DisableScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->disableScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::EnableAlarmOutcome EssClient::enableAlarm(const EnableAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAlarmOutcome(EnableAlarmResult(outcome.result()));
	else
		return EnableAlarmOutcome(outcome.error());
}

void EssClient::enableAlarmAsync(const EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::EnableAlarmOutcomeCallable EssClient::enableAlarmCallable(const EnableAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAlarmOutcome()>>(
			[this, request]()
			{
			return this->enableAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::EnableScalingGroupOutcome EssClient::enableScalingGroup(const EnableScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableScalingGroupOutcome(EnableScalingGroupResult(outcome.result()));
	else
		return EnableScalingGroupOutcome(outcome.error());
}

void EssClient::enableScalingGroupAsync(const EnableScalingGroupRequest& request, const EnableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::EnableScalingGroupOutcomeCallable EssClient::enableScalingGroupCallable(const EnableScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->enableScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::EnterStandbyOutcome EssClient::enterStandby(const EnterStandbyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnterStandbyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnterStandbyOutcome(EnterStandbyResult(outcome.result()));
	else
		return EnterStandbyOutcome(outcome.error());
}

void EssClient::enterStandbyAsync(const EnterStandbyRequest& request, const EnterStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enterStandby(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::EnterStandbyOutcomeCallable EssClient::enterStandbyCallable(const EnterStandbyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnterStandbyOutcome()>>(
			[this, request]()
			{
			return this->enterStandby(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ExecuteScalingRuleOutcome EssClient::executeScalingRule(const ExecuteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteScalingRuleOutcome(ExecuteScalingRuleResult(outcome.result()));
	else
		return ExecuteScalingRuleOutcome(outcome.error());
}

void EssClient::executeScalingRuleAsync(const ExecuteScalingRuleRequest& request, const ExecuteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ExecuteScalingRuleOutcomeCallable EssClient::executeScalingRuleCallable(const ExecuteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->executeScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ExitStandbyOutcome EssClient::exitStandby(const ExitStandbyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExitStandbyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExitStandbyOutcome(ExitStandbyResult(outcome.result()));
	else
		return ExitStandbyOutcome(outcome.error());
}

void EssClient::exitStandbyAsync(const ExitStandbyRequest& request, const ExitStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exitStandby(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ExitStandbyOutcomeCallable EssClient::exitStandbyCallable(const ExitStandbyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExitStandbyOutcome()>>(
			[this, request]()
			{
			return this->exitStandby(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ListTagKeysOutcome EssClient::listTagKeys(const ListTagKeysRequest &request) const
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

void EssClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ListTagKeysOutcomeCallable EssClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ListTagResourcesOutcome EssClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EssClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ListTagResourcesOutcomeCallable EssClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ListTagValuesOutcome EssClient::listTagValues(const ListTagValuesRequest &request) const
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

void EssClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ListTagValuesOutcomeCallable EssClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyAlarmOutcome EssClient::modifyAlarm(const ModifyAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAlarmOutcome(ModifyAlarmResult(outcome.result()));
	else
		return ModifyAlarmOutcome(outcome.error());
}

void EssClient::modifyAlarmAsync(const ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyAlarmOutcomeCallable EssClient::modifyAlarmCallable(const ModifyAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAlarmOutcome()>>(
			[this, request]()
			{
			return this->modifyAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyEciScalingConfigurationOutcome EssClient::modifyEciScalingConfiguration(const ModifyEciScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEciScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEciScalingConfigurationOutcome(ModifyEciScalingConfigurationResult(outcome.result()));
	else
		return ModifyEciScalingConfigurationOutcome(outcome.error());
}

void EssClient::modifyEciScalingConfigurationAsync(const ModifyEciScalingConfigurationRequest& request, const ModifyEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEciScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyEciScalingConfigurationOutcomeCallable EssClient::modifyEciScalingConfigurationCallable(const ModifyEciScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEciScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyEciScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyInstanceAttributeOutcome EssClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAttributeOutcome(ModifyInstanceAttributeResult(outcome.result()));
	else
		return ModifyInstanceAttributeOutcome(outcome.error());
}

void EssClient::modifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyInstanceAttributeOutcomeCallable EssClient::modifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyLifecycleHookOutcome EssClient::modifyLifecycleHook(const ModifyLifecycleHookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLifecycleHookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLifecycleHookOutcome(ModifyLifecycleHookResult(outcome.result()));
	else
		return ModifyLifecycleHookOutcome(outcome.error());
}

void EssClient::modifyLifecycleHookAsync(const ModifyLifecycleHookRequest& request, const ModifyLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLifecycleHook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyLifecycleHookOutcomeCallable EssClient::modifyLifecycleHookCallable(const ModifyLifecycleHookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLifecycleHookOutcome()>>(
			[this, request]()
			{
			return this->modifyLifecycleHook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyNotificationConfigurationOutcome EssClient::modifyNotificationConfiguration(const ModifyNotificationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNotificationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNotificationConfigurationOutcome(ModifyNotificationConfigurationResult(outcome.result()));
	else
		return ModifyNotificationConfigurationOutcome(outcome.error());
}

void EssClient::modifyNotificationConfigurationAsync(const ModifyNotificationConfigurationRequest& request, const ModifyNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNotificationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyNotificationConfigurationOutcomeCallable EssClient::modifyNotificationConfigurationCallable(const ModifyNotificationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNotificationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyNotificationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScalingConfigurationOutcome EssClient::modifyScalingConfiguration(const ModifyScalingConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingConfigurationOutcome(ModifyScalingConfigurationResult(outcome.result()));
	else
		return ModifyScalingConfigurationOutcome(outcome.error());
}

void EssClient::modifyScalingConfigurationAsync(const ModifyScalingConfigurationRequest& request, const ModifyScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScalingConfigurationOutcomeCallable EssClient::modifyScalingConfigurationCallable(const ModifyScalingConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScalingGroupOutcome EssClient::modifyScalingGroup(const ModifyScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingGroupOutcome(ModifyScalingGroupResult(outcome.result()));
	else
		return ModifyScalingGroupOutcome(outcome.error());
}

void EssClient::modifyScalingGroupAsync(const ModifyScalingGroupRequest& request, const ModifyScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScalingGroupOutcomeCallable EssClient::modifyScalingGroupCallable(const ModifyScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScalingRuleOutcome EssClient::modifyScalingRule(const ModifyScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingRuleOutcome(ModifyScalingRuleResult(outcome.result()));
	else
		return ModifyScalingRuleOutcome(outcome.error());
}

void EssClient::modifyScalingRuleAsync(const ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScalingRuleOutcomeCallable EssClient::modifyScalingRuleCallable(const ModifyScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ModifyScheduledTaskOutcome EssClient::modifyScheduledTask(const ModifyScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScheduledTaskOutcome(ModifyScheduledTaskResult(outcome.result()));
	else
		return ModifyScheduledTaskOutcome(outcome.error());
}

void EssClient::modifyScheduledTaskAsync(const ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ModifyScheduledTaskOutcomeCallable EssClient::modifyScheduledTaskCallable(const ModifyScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::RebalanceInstancesOutcome EssClient::rebalanceInstances(const RebalanceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebalanceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebalanceInstancesOutcome(RebalanceInstancesResult(outcome.result()));
	else
		return RebalanceInstancesOutcome(outcome.error());
}

void EssClient::rebalanceInstancesAsync(const RebalanceInstancesRequest& request, const RebalanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebalanceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::RebalanceInstancesOutcomeCallable EssClient::rebalanceInstancesCallable(const RebalanceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebalanceInstancesOutcome()>>(
			[this, request]()
			{
			return this->rebalanceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::RecordLifecycleActionHeartbeatOutcome EssClient::recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecordLifecycleActionHeartbeatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecordLifecycleActionHeartbeatOutcome(RecordLifecycleActionHeartbeatResult(outcome.result()));
	else
		return RecordLifecycleActionHeartbeatOutcome(outcome.error());
}

void EssClient::recordLifecycleActionHeartbeatAsync(const RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recordLifecycleActionHeartbeat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::RecordLifecycleActionHeartbeatOutcomeCallable EssClient::recordLifecycleActionHeartbeatCallable(const RecordLifecycleActionHeartbeatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecordLifecycleActionHeartbeatOutcome()>>(
			[this, request]()
			{
			return this->recordLifecycleActionHeartbeat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::RemoveInstancesOutcome EssClient::removeInstances(const RemoveInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveInstancesOutcome(RemoveInstancesResult(outcome.result()));
	else
		return RemoveInstancesOutcome(outcome.error());
}

void EssClient::removeInstancesAsync(const RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::RemoveInstancesOutcomeCallable EssClient::removeInstancesCallable(const RemoveInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveInstancesOutcome()>>(
			[this, request]()
			{
			return this->removeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ResumeProcessesOutcome EssClient::resumeProcesses(const ResumeProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeProcessesOutcome(ResumeProcessesResult(outcome.result()));
	else
		return ResumeProcessesOutcome(outcome.error());
}

void EssClient::resumeProcessesAsync(const ResumeProcessesRequest& request, const ResumeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ResumeProcessesOutcomeCallable EssClient::resumeProcessesCallable(const ResumeProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeProcessesOutcome()>>(
			[this, request]()
			{
			return this->resumeProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::ScaleWithAdjustmentOutcome EssClient::scaleWithAdjustment(const ScaleWithAdjustmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleWithAdjustmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleWithAdjustmentOutcome(ScaleWithAdjustmentResult(outcome.result()));
	else
		return ScaleWithAdjustmentOutcome(outcome.error());
}

void EssClient::scaleWithAdjustmentAsync(const ScaleWithAdjustmentRequest& request, const ScaleWithAdjustmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleWithAdjustment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::ScaleWithAdjustmentOutcomeCallable EssClient::scaleWithAdjustmentCallable(const ScaleWithAdjustmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleWithAdjustmentOutcome()>>(
			[this, request]()
			{
			return this->scaleWithAdjustment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::SetGroupDeletionProtectionOutcome EssClient::setGroupDeletionProtection(const SetGroupDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGroupDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGroupDeletionProtectionOutcome(SetGroupDeletionProtectionResult(outcome.result()));
	else
		return SetGroupDeletionProtectionOutcome(outcome.error());
}

void EssClient::setGroupDeletionProtectionAsync(const SetGroupDeletionProtectionRequest& request, const SetGroupDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGroupDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::SetGroupDeletionProtectionOutcomeCallable EssClient::setGroupDeletionProtectionCallable(const SetGroupDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGroupDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->setGroupDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::SetInstanceHealthOutcome EssClient::setInstanceHealth(const SetInstanceHealthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetInstanceHealthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetInstanceHealthOutcome(SetInstanceHealthResult(outcome.result()));
	else
		return SetInstanceHealthOutcome(outcome.error());
}

void EssClient::setInstanceHealthAsync(const SetInstanceHealthRequest& request, const SetInstanceHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setInstanceHealth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::SetInstanceHealthOutcomeCallable EssClient::setInstanceHealthCallable(const SetInstanceHealthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetInstanceHealthOutcome()>>(
			[this, request]()
			{
			return this->setInstanceHealth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::SetInstancesProtectionOutcome EssClient::setInstancesProtection(const SetInstancesProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetInstancesProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetInstancesProtectionOutcome(SetInstancesProtectionResult(outcome.result()));
	else
		return SetInstancesProtectionOutcome(outcome.error());
}

void EssClient::setInstancesProtectionAsync(const SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setInstancesProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::SetInstancesProtectionOutcomeCallable EssClient::setInstancesProtectionCallable(const SetInstancesProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetInstancesProtectionOutcome()>>(
			[this, request]()
			{
			return this->setInstancesProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::SuspendProcessesOutcome EssClient::suspendProcesses(const SuspendProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendProcessesOutcome(SuspendProcessesResult(outcome.result()));
	else
		return SuspendProcessesOutcome(outcome.error());
}

void EssClient::suspendProcessesAsync(const SuspendProcessesRequest& request, const SuspendProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::SuspendProcessesOutcomeCallable EssClient::suspendProcessesCallable(const SuspendProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendProcessesOutcome()>>(
			[this, request]()
			{
			return this->suspendProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::TagResourcesOutcome EssClient::tagResources(const TagResourcesRequest &request) const
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

void EssClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::TagResourcesOutcomeCallable EssClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::UntagResourcesOutcome EssClient::untagResources(const UntagResourcesRequest &request) const
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

void EssClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::UntagResourcesOutcomeCallable EssClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::VerifyAuthenticationOutcome EssClient::verifyAuthentication(const VerifyAuthenticationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyAuthenticationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyAuthenticationOutcome(VerifyAuthenticationResult(outcome.result()));
	else
		return VerifyAuthenticationOutcome(outcome.error());
}

void EssClient::verifyAuthenticationAsync(const VerifyAuthenticationRequest& request, const VerifyAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyAuthentication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::VerifyAuthenticationOutcomeCallable EssClient::verifyAuthenticationCallable(const VerifyAuthenticationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyAuthenticationOutcome()>>(
			[this, request]()
			{
			return this->verifyAuthentication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EssClient::VerifyUserOutcome EssClient::verifyUser(const VerifyUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyUserOutcome(VerifyUserResult(outcome.result()));
	else
		return VerifyUserOutcome(outcome.error());
}

void EssClient::verifyUserAsync(const VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EssClient::VerifyUserOutcomeCallable EssClient::verifyUserCallable(const VerifyUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyUserOutcome()>>(
			[this, request]()
			{
			return this->verifyUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

