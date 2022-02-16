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

#include <alibabacloud/emr/EmrClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

namespace
{
	const std::string SERVICE_NAME = "Emr";
}

EmrClient::EmrClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::~EmrClient()
{}

EmrClient::AddApplicationOutcome EmrClient::addApplication(const AddApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApplicationOutcome(AddApplicationResult(outcome.result()));
	else
		return AddApplicationOutcome(outcome.error());
}

void EmrClient::addApplicationAsync(const AddApplicationRequest& request, const AddApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddApplicationOutcomeCallable EmrClient::addApplicationCallable(const AddApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApplicationOutcome()>>(
			[this, request]()
			{
			return this->addApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddApplicationsOutcome EmrClient::addApplications(const AddApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApplicationsOutcome(AddApplicationsResult(outcome.result()));
	else
		return AddApplicationsOutcome(outcome.error());
}

void EmrClient::addApplicationsAsync(const AddApplicationsRequest& request, const AddApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddApplicationsOutcomeCallable EmrClient::addApplicationsCallable(const AddApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApplicationsOutcome()>>(
			[this, request]()
			{
			return this->addApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CancelOperationOrdersOutcome EmrClient::cancelOperationOrders(const CancelOperationOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOperationOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOperationOrdersOutcome(CancelOperationOrdersResult(outcome.result()));
	else
		return CancelOperationOrdersOutcome(outcome.error());
}

void EmrClient::cancelOperationOrdersAsync(const CancelOperationOrdersRequest& request, const CancelOperationOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOperationOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CancelOperationOrdersOutcomeCallable EmrClient::cancelOperationOrdersCallable(const CancelOperationOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOperationOrdersOutcome()>>(
			[this, request]()
			{
			return this->cancelOperationOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateAutoScalingPolicyOutcome EmrClient::createAutoScalingPolicy(const CreateAutoScalingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoScalingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoScalingPolicyOutcome(CreateAutoScalingPolicyResult(outcome.result()));
	else
		return CreateAutoScalingPolicyOutcome(outcome.error());
}

void EmrClient::createAutoScalingPolicyAsync(const CreateAutoScalingPolicyRequest& request, const CreateAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoScalingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateAutoScalingPolicyOutcomeCallable EmrClient::createAutoScalingPolicyCallable(const CreateAutoScalingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoScalingPolicyOutcome()>>(
			[this, request]()
			{
			return this->createAutoScalingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateAutoScalingRuleOutcome EmrClient::createAutoScalingRule(const CreateAutoScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoScalingRuleOutcome(CreateAutoScalingRuleResult(outcome.result()));
	else
		return CreateAutoScalingRuleOutcome(outcome.error());
}

void EmrClient::createAutoScalingRuleAsync(const CreateAutoScalingRuleRequest& request, const CreateAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateAutoScalingRuleOutcomeCallable EmrClient::createAutoScalingRuleCallable(const CreateAutoScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createAutoScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterOutcome EmrClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void EmrClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterOutcomeCallable EmrClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterScriptOutcome EmrClient::createClusterScript(const CreateClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterScriptOutcome(CreateClusterScriptResult(outcome.result()));
	else
		return CreateClusterScriptOutcome(outcome.error());
}

void EmrClient::createClusterScriptAsync(const CreateClusterScriptRequest& request, const CreateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterScriptOutcomeCallable EmrClient::createClusterScriptCallable(const CreateClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->createClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateNodeGroupOutcome EmrClient::createNodeGroup(const CreateNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeGroupOutcome(CreateNodeGroupResult(outcome.result()));
	else
		return CreateNodeGroupOutcome(outcome.error());
}

void EmrClient::createNodeGroupAsync(const CreateNodeGroupRequest& request, const CreateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateNodeGroupOutcomeCallable EmrClient::createNodeGroupCallable(const CreateNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->createNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateOnAckClusterOutcome EmrClient::createOnAckCluster(const CreateOnAckClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOnAckClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOnAckClusterOutcome(CreateOnAckClusterResult(outcome.result()));
	else
		return CreateOnAckClusterOutcome(outcome.error());
}

void EmrClient::createOnAckClusterAsync(const CreateOnAckClusterRequest& request, const CreateOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOnAckCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateOnAckClusterOutcomeCallable EmrClient::createOnAckClusterCallable(const CreateOnAckClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOnAckClusterOutcome()>>(
			[this, request]()
			{
			return this->createOnAckCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateOnKubeClusterOutcome EmrClient::createOnKubeCluster(const CreateOnKubeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOnKubeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOnKubeClusterOutcome(CreateOnKubeClusterResult(outcome.result()));
	else
		return CreateOnKubeClusterOutcome(outcome.error());
}

void EmrClient::createOnKubeClusterAsync(const CreateOnKubeClusterRequest& request, const CreateOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOnKubeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateOnKubeClusterOutcomeCallable EmrClient::createOnKubeClusterCallable(const CreateOnKubeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOnKubeClusterOutcome()>>(
			[this, request]()
			{
			return this->createOnKubeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateScalingGroupOutcome EmrClient::createScalingGroup(const CreateScalingGroupRequest &request) const
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

void EmrClient::createScalingGroupAsync(const CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateScalingGroupOutcomeCallable EmrClient::createScalingGroupCallable(const CreateScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->createScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DecreaseNodesOutcome EmrClient::decreaseNodes(const DecreaseNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecreaseNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecreaseNodesOutcome(DecreaseNodesResult(outcome.result()));
	else
		return DecreaseNodesOutcome(outcome.error());
}

void EmrClient::decreaseNodesAsync(const DecreaseNodesRequest& request, const DecreaseNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decreaseNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DecreaseNodesOutcomeCallable EmrClient::decreaseNodesCallable(const DecreaseNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecreaseNodesOutcome()>>(
			[this, request]()
			{
			return this->decreaseNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteAutoScalingPolicyOutcome EmrClient::deleteAutoScalingPolicy(const DeleteAutoScalingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoScalingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoScalingPolicyOutcome(DeleteAutoScalingPolicyResult(outcome.result()));
	else
		return DeleteAutoScalingPolicyOutcome(outcome.error());
}

void EmrClient::deleteAutoScalingPolicyAsync(const DeleteAutoScalingPolicyRequest& request, const DeleteAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoScalingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteAutoScalingPolicyOutcomeCallable EmrClient::deleteAutoScalingPolicyCallable(const DeleteAutoScalingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoScalingPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoScalingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteAutoScalingRuleOutcome EmrClient::deleteAutoScalingRule(const DeleteAutoScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoScalingRuleOutcome(DeleteAutoScalingRuleResult(outcome.result()));
	else
		return DeleteAutoScalingRuleOutcome(outcome.error());
}

void EmrClient::deleteAutoScalingRuleAsync(const DeleteAutoScalingRuleRequest& request, const DeleteAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteAutoScalingRuleOutcomeCallable EmrClient::deleteAutoScalingRuleCallable(const DeleteAutoScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterOutcome EmrClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void EmrClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterOutcomeCallable EmrClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterScriptOutcome EmrClient::deleteClusterScript(const DeleteClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterScriptOutcome(DeleteClusterScriptResult(outcome.result()));
	else
		return DeleteClusterScriptOutcome(outcome.error());
}

void EmrClient::deleteClusterScriptAsync(const DeleteClusterScriptRequest& request, const DeleteClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterScriptOutcomeCallable EmrClient::deleteClusterScriptCallable(const DeleteClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteNodeGroupOutcome EmrClient::deleteNodeGroup(const DeleteNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodeGroupOutcome(DeleteNodeGroupResult(outcome.result()));
	else
		return DeleteNodeGroupOutcome(outcome.error());
}

void EmrClient::deleteNodeGroupAsync(const DeleteNodeGroupRequest& request, const DeleteNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteNodeGroupOutcomeCallable EmrClient::deleteNodeGroupCallable(const DeleteNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteOnAckClusterOutcome EmrClient::deleteOnAckCluster(const DeleteOnAckClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOnAckClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOnAckClusterOutcome(DeleteOnAckClusterResult(outcome.result()));
	else
		return DeleteOnAckClusterOutcome(outcome.error());
}

void EmrClient::deleteOnAckClusterAsync(const DeleteOnAckClusterRequest& request, const DeleteOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOnAckCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteOnAckClusterOutcomeCallable EmrClient::deleteOnAckClusterCallable(const DeleteOnAckClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOnAckClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteOnAckCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteScalingGroupOutcome EmrClient::deleteScalingGroup(const DeleteScalingGroupRequest &request) const
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

void EmrClient::deleteScalingGroupAsync(const DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteScalingGroupOutcomeCallable EmrClient::deleteScalingGroupCallable(const DeleteScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DisableAutoScalingPolicyOutcome EmrClient::disableAutoScalingPolicy(const DisableAutoScalingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAutoScalingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAutoScalingPolicyOutcome(DisableAutoScalingPolicyResult(outcome.result()));
	else
		return DisableAutoScalingPolicyOutcome(outcome.error());
}

void EmrClient::disableAutoScalingPolicyAsync(const DisableAutoScalingPolicyRequest& request, const DisableAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAutoScalingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DisableAutoScalingPolicyOutcomeCallable EmrClient::disableAutoScalingPolicyCallable(const DisableAutoScalingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAutoScalingPolicyOutcome()>>(
			[this, request]()
			{
			return this->disableAutoScalingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::EnableAutoScalingPolicyOutcome EmrClient::enableAutoScalingPolicy(const EnableAutoScalingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAutoScalingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAutoScalingPolicyOutcome(EnableAutoScalingPolicyResult(outcome.result()));
	else
		return EnableAutoScalingPolicyOutcome(outcome.error());
}

void EmrClient::enableAutoScalingPolicyAsync(const EnableAutoScalingPolicyRequest& request, const EnableAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAutoScalingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::EnableAutoScalingPolicyOutcomeCallable EmrClient::enableAutoScalingPolicyCallable(const EnableAutoScalingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAutoScalingPolicyOutcome()>>(
			[this, request]()
			{
			return this->enableAutoScalingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetApplicationOutcome EmrClient::getApplication(const GetApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationOutcome(GetApplicationResult(outcome.result()));
	else
		return GetApplicationOutcome(outcome.error());
}

void EmrClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetApplicationOutcomeCallable EmrClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetClusterOutcome EmrClient::getCluster(const GetClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterOutcome(GetClusterResult(outcome.result()));
	else
		return GetClusterOutcome(outcome.error());
}

void EmrClient::getClusterAsync(const GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetClusterOutcomeCallable EmrClient::getClusterCallable(const GetClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterOutcome()>>(
			[this, request]()
			{
			return this->getCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetClusterScriptExecutionResultOutcome EmrClient::getClusterScriptExecutionResult(const GetClusterScriptExecutionResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterScriptExecutionResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterScriptExecutionResultOutcome(GetClusterScriptExecutionResultResult(outcome.result()));
	else
		return GetClusterScriptExecutionResultOutcome(outcome.error());
}

void EmrClient::getClusterScriptExecutionResultAsync(const GetClusterScriptExecutionResultRequest& request, const GetClusterScriptExecutionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterScriptExecutionResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetClusterScriptExecutionResultOutcomeCallable EmrClient::getClusterScriptExecutionResultCallable(const GetClusterScriptExecutionResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterScriptExecutionResultOutcome()>>(
			[this, request]()
			{
			return this->getClusterScriptExecutionResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetNodeGroupOutcome EmrClient::getNodeGroup(const GetNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeGroupOutcome(GetNodeGroupResult(outcome.result()));
	else
		return GetNodeGroupOutcome(outcome.error());
}

void EmrClient::getNodeGroupAsync(const GetNodeGroupRequest& request, const GetNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetNodeGroupOutcomeCallable EmrClient::getNodeGroupCallable(const GetNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->getNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOnAckClusterOutcome EmrClient::getOnAckCluster(const GetOnAckClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnAckClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnAckClusterOutcome(GetOnAckClusterResult(outcome.result()));
	else
		return GetOnAckClusterOutcome(outcome.error());
}

void EmrClient::getOnAckClusterAsync(const GetOnAckClusterRequest& request, const GetOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnAckCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOnAckClusterOutcomeCallable EmrClient::getOnAckClusterCallable(const GetOnAckClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnAckClusterOutcome()>>(
			[this, request]()
			{
			return this->getOnAckCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOnKubeClusterOutcome EmrClient::getOnKubeCluster(const GetOnKubeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnKubeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnKubeClusterOutcome(GetOnKubeClusterResult(outcome.result()));
	else
		return GetOnKubeClusterOutcome(outcome.error());
}

void EmrClient::getOnKubeClusterAsync(const GetOnKubeClusterRequest& request, const GetOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnKubeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOnKubeClusterOutcomeCallable EmrClient::getOnKubeClusterCallable(const GetOnKubeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnKubeClusterOutcome()>>(
			[this, request]()
			{
			return this->getOnKubeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOnKubeClusterResourceQuotaOutcome EmrClient::getOnKubeClusterResourceQuota(const GetOnKubeClusterResourceQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnKubeClusterResourceQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnKubeClusterResourceQuotaOutcome(GetOnKubeClusterResourceQuotaResult(outcome.result()));
	else
		return GetOnKubeClusterResourceQuotaOutcome(outcome.error());
}

void EmrClient::getOnKubeClusterResourceQuotaAsync(const GetOnKubeClusterResourceQuotaRequest& request, const GetOnKubeClusterResourceQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnKubeClusterResourceQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOnKubeClusterResourceQuotaOutcomeCallable EmrClient::getOnKubeClusterResourceQuotaCallable(const GetOnKubeClusterResourceQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnKubeClusterResourceQuotaOutcome()>>(
			[this, request]()
			{
			return this->getOnKubeClusterResourceQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOnKubeClusterResourceUsageOutcome EmrClient::getOnKubeClusterResourceUsage(const GetOnKubeClusterResourceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnKubeClusterResourceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnKubeClusterResourceUsageOutcome(GetOnKubeClusterResourceUsageResult(outcome.result()));
	else
		return GetOnKubeClusterResourceUsageOutcome(outcome.error());
}

void EmrClient::getOnKubeClusterResourceUsageAsync(const GetOnKubeClusterResourceUsageRequest& request, const GetOnKubeClusterResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnKubeClusterResourceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOnKubeClusterResourceUsageOutcomeCallable EmrClient::getOnKubeClusterResourceUsageCallable(const GetOnKubeClusterResourceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnKubeClusterResourceUsageOutcome()>>(
			[this, request]()
			{
			return this->getOnKubeClusterResourceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOperationOutcome EmrClient::getOperation(const GetOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOperationOutcome(GetOperationResult(outcome.result()));
	else
		return GetOperationOutcome(outcome.error());
}

void EmrClient::getOperationAsync(const GetOperationRequest& request, const GetOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOperationOutcomeCallable EmrClient::getOperationCallable(const GetOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOperationOutcome()>>(
			[this, request]()
			{
			return this->getOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetScalingGroupOutcome EmrClient::getScalingGroup(const GetScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScalingGroupOutcome(GetScalingGroupResult(outcome.result()));
	else
		return GetScalingGroupOutcome(outcome.error());
}

void EmrClient::getScalingGroupAsync(const GetScalingGroupRequest& request, const GetScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetScalingGroupOutcomeCallable EmrClient::getScalingGroupCallable(const GetScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->getScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::IncreaseClusterDiskOutcome EmrClient::increaseClusterDisk(const IncreaseClusterDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IncreaseClusterDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IncreaseClusterDiskOutcome(IncreaseClusterDiskResult(outcome.result()));
	else
		return IncreaseClusterDiskOutcome(outcome.error());
}

void EmrClient::increaseClusterDiskAsync(const IncreaseClusterDiskRequest& request, const IncreaseClusterDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, increaseClusterDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::IncreaseClusterDiskOutcomeCallable EmrClient::increaseClusterDiskCallable(const IncreaseClusterDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IncreaseClusterDiskOutcome()>>(
			[this, request]()
			{
			return this->increaseClusterDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::IncreaseNodesOutcome EmrClient::increaseNodes(const IncreaseNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IncreaseNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IncreaseNodesOutcome(IncreaseNodesResult(outcome.result()));
	else
		return IncreaseNodesOutcome(outcome.error());
}

void EmrClient::increaseNodesAsync(const IncreaseNodesRequest& request, const IncreaseNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, increaseNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::IncreaseNodesOutcomeCallable EmrClient::increaseNodesCallable(const IncreaseNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IncreaseNodesOutcome()>>(
			[this, request]()
			{
			return this->increaseNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::JoinResourceGroupOutcome EmrClient::joinResourceGroup(const JoinResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinResourceGroupOutcome(JoinResourceGroupResult(outcome.result()));
	else
		return JoinResourceGroupOutcome(outcome.error());
}

void EmrClient::joinResourceGroupAsync(const JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::JoinResourceGroupOutcomeCallable EmrClient::joinResourceGroupCallable(const JoinResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->joinResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListApplicationConfigFilesOutcome EmrClient::listApplicationConfigFiles(const ListApplicationConfigFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationConfigFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationConfigFilesOutcome(ListApplicationConfigFilesResult(outcome.result()));
	else
		return ListApplicationConfigFilesOutcome(outcome.error());
}

void EmrClient::listApplicationConfigFilesAsync(const ListApplicationConfigFilesRequest& request, const ListApplicationConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationConfigFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListApplicationConfigFilesOutcomeCallable EmrClient::listApplicationConfigFilesCallable(const ListApplicationConfigFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationConfigFilesOutcome()>>(
			[this, request]()
			{
			return this->listApplicationConfigFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListApplicationConfigHistoryOutcome EmrClient::listApplicationConfigHistory(const ListApplicationConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationConfigHistoryOutcome(ListApplicationConfigHistoryResult(outcome.result()));
	else
		return ListApplicationConfigHistoryOutcome(outcome.error());
}

void EmrClient::listApplicationConfigHistoryAsync(const ListApplicationConfigHistoryRequest& request, const ListApplicationConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListApplicationConfigHistoryOutcomeCallable EmrClient::listApplicationConfigHistoryCallable(const ListApplicationConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->listApplicationConfigHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListApplicationConfigsOutcome EmrClient::listApplicationConfigs(const ListApplicationConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationConfigsOutcome(ListApplicationConfigsResult(outcome.result()));
	else
		return ListApplicationConfigsOutcome(outcome.error());
}

void EmrClient::listApplicationConfigsAsync(const ListApplicationConfigsRequest& request, const ListApplicationConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListApplicationConfigsOutcomeCallable EmrClient::listApplicationConfigsCallable(const ListApplicationConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationConfigsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListApplicationsOutcome EmrClient::listApplications(const ListApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsOutcome(ListApplicationsResult(outcome.result()));
	else
		return ListApplicationsOutcome(outcome.error());
}

void EmrClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListApplicationsOutcomeCallable EmrClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAutoScalingActivitiesOutcome EmrClient::listAutoScalingActivities(const ListAutoScalingActivitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutoScalingActivitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutoScalingActivitiesOutcome(ListAutoScalingActivitiesResult(outcome.result()));
	else
		return ListAutoScalingActivitiesOutcome(outcome.error());
}

void EmrClient::listAutoScalingActivitiesAsync(const ListAutoScalingActivitiesRequest& request, const ListAutoScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutoScalingActivities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAutoScalingActivitiesOutcomeCallable EmrClient::listAutoScalingActivitiesCallable(const ListAutoScalingActivitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutoScalingActivitiesOutcome()>>(
			[this, request]()
			{
			return this->listAutoScalingActivities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAutoScalingMetricsOutcome EmrClient::listAutoScalingMetrics(const ListAutoScalingMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutoScalingMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutoScalingMetricsOutcome(ListAutoScalingMetricsResult(outcome.result()));
	else
		return ListAutoScalingMetricsOutcome(outcome.error());
}

void EmrClient::listAutoScalingMetricsAsync(const ListAutoScalingMetricsRequest& request, const ListAutoScalingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutoScalingMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAutoScalingMetricsOutcomeCallable EmrClient::listAutoScalingMetricsCallable(const ListAutoScalingMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutoScalingMetricsOutcome()>>(
			[this, request]()
			{
			return this->listAutoScalingMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAutoScalingPoliciesOutcome EmrClient::listAutoScalingPolicies(const ListAutoScalingPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutoScalingPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutoScalingPoliciesOutcome(ListAutoScalingPoliciesResult(outcome.result()));
	else
		return ListAutoScalingPoliciesOutcome(outcome.error());
}

void EmrClient::listAutoScalingPoliciesAsync(const ListAutoScalingPoliciesRequest& request, const ListAutoScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutoScalingPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAutoScalingPoliciesOutcomeCallable EmrClient::listAutoScalingPoliciesCallable(const ListAutoScalingPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutoScalingPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listAutoScalingPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAutoScalingRulesOutcome EmrClient::listAutoScalingRules(const ListAutoScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutoScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutoScalingRulesOutcome(ListAutoScalingRulesResult(outcome.result()));
	else
		return ListAutoScalingRulesOutcome(outcome.error());
}

void EmrClient::listAutoScalingRulesAsync(const ListAutoScalingRulesRequest& request, const ListAutoScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutoScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAutoScalingRulesOutcomeCallable EmrClient::listAutoScalingRulesCallable(const ListAutoScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutoScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->listAutoScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterScriptsOutcome EmrClient::listClusterScripts(const ListClusterScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterScriptsOutcome(ListClusterScriptsResult(outcome.result()));
	else
		return ListClusterScriptsOutcome(outcome.error());
}

void EmrClient::listClusterScriptsAsync(const ListClusterScriptsRequest& request, const ListClusterScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterScriptsOutcomeCallable EmrClient::listClusterScriptsCallable(const ListClusterScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterScriptsOutcome()>>(
			[this, request]()
			{
			return this->listClusterScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClustersOutcome EmrClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void EmrClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClustersOutcomeCallable EmrClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusters2Outcome EmrClient::listClusters2(const ListClusters2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusters2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusters2Outcome(ListClusters2Result(outcome.result()));
	else
		return ListClusters2Outcome(outcome.error());
}

void EmrClient::listClusters2Async(const ListClusters2Request& request, const ListClusters2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusters2OutcomeCallable EmrClient::listClusters2Callable(const ListClusters2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusters2Outcome()>>(
			[this, request]()
			{
			return this->listClusters2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListComponentHealthOutcome EmrClient::listComponentHealth(const ListComponentHealthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListComponentHealthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListComponentHealthOutcome(ListComponentHealthResult(outcome.result()));
	else
		return ListComponentHealthOutcome(outcome.error());
}

void EmrClient::listComponentHealthAsync(const ListComponentHealthRequest& request, const ListComponentHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listComponentHealth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListComponentHealthOutcomeCallable EmrClient::listComponentHealthCallable(const ListComponentHealthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListComponentHealthOutcome()>>(
			[this, request]()
			{
			return this->listComponentHealth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListComponentInstancesOutcome EmrClient::listComponentInstances(const ListComponentInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListComponentInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListComponentInstancesOutcome(ListComponentInstancesResult(outcome.result()));
	else
		return ListComponentInstancesOutcome(outcome.error());
}

void EmrClient::listComponentInstancesAsync(const ListComponentInstancesRequest& request, const ListComponentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listComponentInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListComponentInstancesOutcomeCallable EmrClient::listComponentInstancesCallable(const ListComponentInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListComponentInstancesOutcome()>>(
			[this, request]()
			{
			return this->listComponentInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListComponentsOutcome EmrClient::listComponents(const ListComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListComponentsOutcome(ListComponentsResult(outcome.result()));
	else
		return ListComponentsOutcome(outcome.error());
}

void EmrClient::listComponentsAsync(const ListComponentsRequest& request, const ListComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListComponentsOutcomeCallable EmrClient::listComponentsCallable(const ListComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListComponentsOutcome()>>(
			[this, request]()
			{
			return this->listComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNodeGroupsOutcome EmrClient::listNodeGroups(const ListNodeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeGroupsOutcome(ListNodeGroupsResult(outcome.result()));
	else
		return ListNodeGroupsOutcome(outcome.error());
}

void EmrClient::listNodeGroupsAsync(const ListNodeGroupsRequest& request, const ListNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNodeGroupsOutcomeCallable EmrClient::listNodeGroupsCallable(const ListNodeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeGroupsOutcome()>>(
			[this, request]()
			{
			return this->listNodeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNodesOutcome EmrClient::listNodes(const ListNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesOutcome(ListNodesResult(outcome.result()));
	else
		return ListNodesOutcome(outcome.error());
}

void EmrClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNodesOutcomeCallable EmrClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNodesv3Outcome EmrClient::listNodesv3(const ListNodesv3Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesv3Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesv3Outcome(ListNodesv3Result(outcome.result()));
	else
		return ListNodesv3Outcome(outcome.error());
}

void EmrClient::listNodesv3Async(const ListNodesv3Request& request, const ListNodesv3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesv3(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNodesv3OutcomeCallable EmrClient::listNodesv3Callable(const ListNodesv3Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesv3Outcome()>>(
			[this, request]()
			{
			return this->listNodesv3(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnAckClustersOutcome EmrClient::listOnAckClusters(const ListOnAckClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnAckClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnAckClustersOutcome(ListOnAckClustersResult(outcome.result()));
	else
		return ListOnAckClustersOutcome(outcome.error());
}

void EmrClient::listOnAckClustersAsync(const ListOnAckClustersRequest& request, const ListOnAckClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnAckClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnAckClustersOutcomeCallable EmrClient::listOnAckClustersCallable(const ListOnAckClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnAckClustersOutcome()>>(
			[this, request]()
			{
			return this->listOnAckClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnAckComponentsOutcome EmrClient::listOnAckComponents(const ListOnAckComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnAckComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnAckComponentsOutcome(ListOnAckComponentsResult(outcome.result()));
	else
		return ListOnAckComponentsOutcome(outcome.error());
}

void EmrClient::listOnAckComponentsAsync(const ListOnAckComponentsRequest& request, const ListOnAckComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnAckComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnAckComponentsOutcomeCallable EmrClient::listOnAckComponentsCallable(const ListOnAckComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnAckComponentsOutcome()>>(
			[this, request]()
			{
			return this->listOnAckComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnKubeClusterDedicatedNodesOutcome EmrClient::listOnKubeClusterDedicatedNodes(const ListOnKubeClusterDedicatedNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnKubeClusterDedicatedNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnKubeClusterDedicatedNodesOutcome(ListOnKubeClusterDedicatedNodesResult(outcome.result()));
	else
		return ListOnKubeClusterDedicatedNodesOutcome(outcome.error());
}

void EmrClient::listOnKubeClusterDedicatedNodesAsync(const ListOnKubeClusterDedicatedNodesRequest& request, const ListOnKubeClusterDedicatedNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnKubeClusterDedicatedNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnKubeClusterDedicatedNodesOutcomeCallable EmrClient::listOnKubeClusterDedicatedNodesCallable(const ListOnKubeClusterDedicatedNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnKubeClusterDedicatedNodesOutcome()>>(
			[this, request]()
			{
			return this->listOnKubeClusterDedicatedNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnKubeClusterInspectionResultsOutcome EmrClient::listOnKubeClusterInspectionResults(const ListOnKubeClusterInspectionResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnKubeClusterInspectionResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnKubeClusterInspectionResultsOutcome(ListOnKubeClusterInspectionResultsResult(outcome.result()));
	else
		return ListOnKubeClusterInspectionResultsOutcome(outcome.error());
}

void EmrClient::listOnKubeClusterInspectionResultsAsync(const ListOnKubeClusterInspectionResultsRequest& request, const ListOnKubeClusterInspectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnKubeClusterInspectionResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnKubeClusterInspectionResultsOutcomeCallable EmrClient::listOnKubeClusterInspectionResultsCallable(const ListOnKubeClusterInspectionResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnKubeClusterInspectionResultsOutcome()>>(
			[this, request]()
			{
			return this->listOnKubeClusterInspectionResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnKubeClustersOutcome EmrClient::listOnKubeClusters(const ListOnKubeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnKubeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnKubeClustersOutcome(ListOnKubeClustersResult(outcome.result()));
	else
		return ListOnKubeClustersOutcome(outcome.error());
}

void EmrClient::listOnKubeClustersAsync(const ListOnKubeClustersRequest& request, const ListOnKubeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnKubeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnKubeClustersOutcomeCallable EmrClient::listOnKubeClustersCallable(const ListOnKubeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnKubeClustersOutcome()>>(
			[this, request]()
			{
			return this->listOnKubeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOnKubeComponentsOutcome EmrClient::listOnKubeComponents(const ListOnKubeComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnKubeComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnKubeComponentsOutcome(ListOnKubeComponentsResult(outcome.result()));
	else
		return ListOnKubeComponentsOutcome(outcome.error());
}

void EmrClient::listOnKubeComponentsAsync(const ListOnKubeComponentsRequest& request, const ListOnKubeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnKubeComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOnKubeComponentsOutcomeCallable EmrClient::listOnKubeComponentsCallable(const ListOnKubeComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnKubeComponentsOutcome()>>(
			[this, request]()
			{
			return this->listOnKubeComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListResourceHealthInspectionOutcome EmrClient::listResourceHealthInspection(const ListResourceHealthInspectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceHealthInspectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceHealthInspectionOutcome(ListResourceHealthInspectionResult(outcome.result()));
	else
		return ListResourceHealthInspectionOutcome(outcome.error());
}

void EmrClient::listResourceHealthInspectionAsync(const ListResourceHealthInspectionRequest& request, const ListResourceHealthInspectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceHealthInspection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListResourceHealthInspectionOutcomeCallable EmrClient::listResourceHealthInspectionCallable(const ListResourceHealthInspectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceHealthInspectionOutcome()>>(
			[this, request]()
			{
			return this->listResourceHealthInspection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingActivitiesOutcome EmrClient::listScalingActivities(const ListScalingActivitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingActivitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingActivitiesOutcome(ListScalingActivitiesResult(outcome.result()));
	else
		return ListScalingActivitiesOutcome(outcome.error());
}

void EmrClient::listScalingActivitiesAsync(const ListScalingActivitiesRequest& request, const ListScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingActivities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingActivitiesOutcomeCallable EmrClient::listScalingActivitiesCallable(const ListScalingActivitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingActivitiesOutcome()>>(
			[this, request]()
			{
			return this->listScalingActivities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingGroupsOutcome EmrClient::listScalingGroups(const ListScalingGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingGroupsOutcome(ListScalingGroupsResult(outcome.result()));
	else
		return ListScalingGroupsOutcome(outcome.error());
}

void EmrClient::listScalingGroupsAsync(const ListScalingGroupsRequest& request, const ListScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingGroupsOutcomeCallable EmrClient::listScalingGroupsCallable(const ListScalingGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingGroupsOutcome()>>(
			[this, request]()
			{
			return this->listScalingGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingMetricsOutcome EmrClient::listScalingMetrics(const ListScalingMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingMetricsOutcome(ListScalingMetricsResult(outcome.result()));
	else
		return ListScalingMetricsOutcome(outcome.error());
}

void EmrClient::listScalingMetricsAsync(const ListScalingMetricsRequest& request, const ListScalingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingMetricsOutcomeCallable EmrClient::listScalingMetricsCallable(const ListScalingMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingMetricsOutcome()>>(
			[this, request]()
			{
			return this->listScalingMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListTagResourcesOutcome EmrClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EmrClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListTagResourcesOutcomeCallable EmrClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseOnKubeClusterOutcome EmrClient::releaseOnKubeCluster(const ReleaseOnKubeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseOnKubeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseOnKubeClusterOutcome(ReleaseOnKubeClusterResult(outcome.result()));
	else
		return ReleaseOnKubeClusterOutcome(outcome.error());
}

void EmrClient::releaseOnKubeClusterAsync(const ReleaseOnKubeClusterRequest& request, const ReleaseOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseOnKubeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseOnKubeClusterOutcomeCallable EmrClient::releaseOnKubeClusterCallable(const ReleaseOnKubeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseOnKubeClusterOutcome()>>(
			[this, request]()
			{
			return this->releaseOnKubeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunApplicationActionOutcome EmrClient::runApplicationAction(const RunApplicationActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunApplicationActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunApplicationActionOutcome(RunApplicationActionResult(outcome.result()));
	else
		return RunApplicationActionOutcome(outcome.error());
}

void EmrClient::runApplicationActionAsync(const RunApplicationActionRequest& request, const RunApplicationActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runApplicationAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunApplicationActionOutcomeCallable EmrClient::runApplicationActionCallable(const RunApplicationActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunApplicationActionOutcome()>>(
			[this, request]()
			{
			return this->runApplicationAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunScalingActionOutcome EmrClient::runScalingAction(const RunScalingActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunScalingActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunScalingActionOutcome(RunScalingActionResult(outcome.result()));
	else
		return RunScalingActionOutcome(outcome.error());
}

void EmrClient::runScalingActionAsync(const RunScalingActionRequest& request, const RunScalingActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runScalingAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunScalingActionOutcomeCallable EmrClient::runScalingActionCallable(const RunScalingActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunScalingActionOutcome()>>(
			[this, request]()
			{
			return this->runScalingAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::TagResourcesOutcome EmrClient::tagResources(const TagResourcesRequest &request) const
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

void EmrClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TagResourcesOutcomeCallable EmrClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::TagResourcesSystemTagsOutcome EmrClient::tagResourcesSystemTags(const TagResourcesSystemTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesSystemTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesSystemTagsOutcome(TagResourcesSystemTagsResult(outcome.result()));
	else
		return TagResourcesSystemTagsOutcome(outcome.error());
}

void EmrClient::tagResourcesSystemTagsAsync(const TagResourcesSystemTagsRequest& request, const TagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResourcesSystemTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TagResourcesSystemTagsOutcomeCallable EmrClient::tagResourcesSystemTagsCallable(const TagResourcesSystemTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesSystemTagsOutcome()>>(
			[this, request]()
			{
			return this->tagResourcesSystemTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::TerminateOperationOutcome EmrClient::terminateOperation(const TerminateOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateOperationOutcome(TerminateOperationResult(outcome.result()));
	else
		return TerminateOperationOutcome(outcome.error());
}

void EmrClient::terminateOperationAsync(const TerminateOperationRequest& request, const TerminateOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TerminateOperationOutcomeCallable EmrClient::terminateOperationCallable(const TerminateOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateOperationOutcome()>>(
			[this, request]()
			{
			return this->terminateOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UntagResourcesOutcome EmrClient::untagResources(const UntagResourcesRequest &request) const
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

void EmrClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UntagResourcesOutcomeCallable EmrClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UntagResourcesSystemTagsOutcome EmrClient::untagResourcesSystemTags(const UntagResourcesSystemTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesSystemTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesSystemTagsOutcome(UntagResourcesSystemTagsResult(outcome.result()));
	else
		return UntagResourcesSystemTagsOutcome(outcome.error());
}

void EmrClient::untagResourcesSystemTagsAsync(const UntagResourcesSystemTagsRequest& request, const UntagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResourcesSystemTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UntagResourcesSystemTagsOutcomeCallable EmrClient::untagResourcesSystemTagsCallable(const UntagResourcesSystemTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesSystemTagsOutcome()>>(
			[this, request]()
			{
			return this->untagResourcesSystemTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateAckClusterNodePoolsOutcome EmrClient::updateAckClusterNodePools(const UpdateAckClusterNodePoolsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAckClusterNodePoolsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAckClusterNodePoolsOutcome(UpdateAckClusterNodePoolsResult(outcome.result()));
	else
		return UpdateAckClusterNodePoolsOutcome(outcome.error());
}

void EmrClient::updateAckClusterNodePoolsAsync(const UpdateAckClusterNodePoolsRequest& request, const UpdateAckClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAckClusterNodePools(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateAckClusterNodePoolsOutcomeCallable EmrClient::updateAckClusterNodePoolsCallable(const UpdateAckClusterNodePoolsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAckClusterNodePoolsOutcome()>>(
			[this, request]()
			{
			return this->updateAckClusterNodePools(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateAckClusterNodesOutcome EmrClient::updateAckClusterNodes(const UpdateAckClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAckClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAckClusterNodesOutcome(UpdateAckClusterNodesResult(outcome.result()));
	else
		return UpdateAckClusterNodesOutcome(outcome.error());
}

void EmrClient::updateAckClusterNodesAsync(const UpdateAckClusterNodesRequest& request, const UpdateAckClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAckClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateAckClusterNodesOutcomeCallable EmrClient::updateAckClusterNodesCallable(const UpdateAckClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAckClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->updateAckClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateApplicationConfigsOutcome EmrClient::updateApplicationConfigs(const UpdateApplicationConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationConfigsOutcome(UpdateApplicationConfigsResult(outcome.result()));
	else
		return UpdateApplicationConfigsOutcome(outcome.error());
}

void EmrClient::updateApplicationConfigsAsync(const UpdateApplicationConfigsRequest& request, const UpdateApplicationConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateApplicationConfigsOutcomeCallable EmrClient::updateApplicationConfigsCallable(const UpdateApplicationConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationConfigsOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateAutoScalingRuleOutcome EmrClient::updateAutoScalingRule(const UpdateAutoScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutoScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutoScalingRuleOutcome(UpdateAutoScalingRuleResult(outcome.result()));
	else
		return UpdateAutoScalingRuleOutcome(outcome.error());
}

void EmrClient::updateAutoScalingRuleAsync(const UpdateAutoScalingRuleRequest& request, const UpdateAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutoScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateAutoScalingRuleOutcomeCallable EmrClient::updateAutoScalingRuleCallable(const UpdateAutoScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutoScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAutoScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateClusterAttributeOutcome EmrClient::updateClusterAttribute(const UpdateClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterAttributeOutcome(UpdateClusterAttributeResult(outcome.result()));
	else
		return UpdateClusterAttributeOutcome(outcome.error());
}

void EmrClient::updateClusterAttributeAsync(const UpdateClusterAttributeRequest& request, const UpdateClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateClusterAttributeOutcomeCallable EmrClient::updateClusterAttributeCallable(const UpdateClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateClusterScriptOutcome EmrClient::updateClusterScript(const UpdateClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterScriptOutcome(UpdateClusterScriptResult(outcome.result()));
	else
		return UpdateClusterScriptOutcome(outcome.error());
}

void EmrClient::updateClusterScriptAsync(const UpdateClusterScriptRequest& request, const UpdateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateClusterScriptOutcomeCallable EmrClient::updateClusterScriptCallable(const UpdateClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->updateClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateOnKubeClusterDedicatedNodePoolsOutcome EmrClient::updateOnKubeClusterDedicatedNodePools(const UpdateOnKubeClusterDedicatedNodePoolsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOnKubeClusterDedicatedNodePoolsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOnKubeClusterDedicatedNodePoolsOutcome(UpdateOnKubeClusterDedicatedNodePoolsResult(outcome.result()));
	else
		return UpdateOnKubeClusterDedicatedNodePoolsOutcome(outcome.error());
}

void EmrClient::updateOnKubeClusterDedicatedNodePoolsAsync(const UpdateOnKubeClusterDedicatedNodePoolsRequest& request, const UpdateOnKubeClusterDedicatedNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOnKubeClusterDedicatedNodePools(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateOnKubeClusterDedicatedNodePoolsOutcomeCallable EmrClient::updateOnKubeClusterDedicatedNodePoolsCallable(const UpdateOnKubeClusterDedicatedNodePoolsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOnKubeClusterDedicatedNodePoolsOutcome()>>(
			[this, request]()
			{
			return this->updateOnKubeClusterDedicatedNodePools(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateOnKubeClusterDedicatedNodesOutcome EmrClient::updateOnKubeClusterDedicatedNodes(const UpdateOnKubeClusterDedicatedNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOnKubeClusterDedicatedNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOnKubeClusterDedicatedNodesOutcome(UpdateOnKubeClusterDedicatedNodesResult(outcome.result()));
	else
		return UpdateOnKubeClusterDedicatedNodesOutcome(outcome.error());
}

void EmrClient::updateOnKubeClusterDedicatedNodesAsync(const UpdateOnKubeClusterDedicatedNodesRequest& request, const UpdateOnKubeClusterDedicatedNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOnKubeClusterDedicatedNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateOnKubeClusterDedicatedNodesOutcomeCallable EmrClient::updateOnKubeClusterDedicatedNodesCallable(const UpdateOnKubeClusterDedicatedNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOnKubeClusterDedicatedNodesOutcome()>>(
			[this, request]()
			{
			return this->updateOnKubeClusterDedicatedNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateScalingGroupOutcome EmrClient::updateScalingGroup(const UpdateScalingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateScalingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateScalingGroupOutcome(UpdateScalingGroupResult(outcome.result()));
	else
		return UpdateScalingGroupOutcome(outcome.error());
}

void EmrClient::updateScalingGroupAsync(const UpdateScalingGroupRequest& request, const UpdateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateScalingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateScalingGroupOutcomeCallable EmrClient::updateScalingGroupCallable(const UpdateScalingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateScalingGroupOutcome()>>(
			[this, request]()
			{
			return this->updateScalingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

