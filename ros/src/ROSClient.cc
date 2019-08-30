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

#include <alibabacloud/ros/ROSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

namespace
{
	const std::string SERVICE_NAME = "ROS";
}

ROSClient::ROSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ROS");
}

ROSClient::ROSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ROS");
}

ROSClient::ROSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ROS");
}

ROSClient::~ROSClient()
{}

ROSClient::ListStacksOutcome ROSClient::listStacks(const ListStacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStacksOutcome(ListStacksResult(outcome.result()));
	else
		return ListStacksOutcome(outcome.error());
}

void ROSClient::listStacksAsync(const ListStacksRequest& request, const ListStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ListStacksOutcomeCallable ROSClient::listStacksCallable(const ListStacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStacksOutcome()>>(
			[this, request]()
			{
			return this->listStacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetChangeSetOutcome ROSClient::getChangeSet(const GetChangeSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChangeSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChangeSetOutcome(GetChangeSetResult(outcome.result()));
	else
		return GetChangeSetOutcome(outcome.error());
}

void ROSClient::getChangeSetAsync(const GetChangeSetRequest& request, const GetChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChangeSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetChangeSetOutcomeCallable ROSClient::getChangeSetCallable(const GetChangeSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChangeSetOutcome()>>(
			[this, request]()
			{
			return this->getChangeSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ValidateTemplateOutcome ROSClient::validateTemplate(const ValidateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateTemplateOutcome(ValidateTemplateResult(outcome.result()));
	else
		return ValidateTemplateOutcome(outcome.error());
}

void ROSClient::validateTemplateAsync(const ValidateTemplateRequest& request, const ValidateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ValidateTemplateOutcomeCallable ROSClient::validateTemplateCallable(const ValidateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateTemplateOutcome()>>(
			[this, request]()
			{
			return this->validateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::UpdateStackOutcome ROSClient::updateStack(const UpdateStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStackOutcome(UpdateStackResult(outcome.result()));
	else
		return UpdateStackOutcome(outcome.error());
}

void ROSClient::updateStackAsync(const UpdateStackRequest& request, const UpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::UpdateStackOutcomeCallable ROSClient::updateStackCallable(const UpdateStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStackOutcome()>>(
			[this, request]()
			{
			return this->updateStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetStackResourceOutcome ROSClient::getStackResource(const GetStackResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStackResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStackResourceOutcome(GetStackResourceResult(outcome.result()));
	else
		return GetStackResourceOutcome(outcome.error());
}

void ROSClient::getStackResourceAsync(const GetStackResourceRequest& request, const GetStackResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStackResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetStackResourceOutcomeCallable ROSClient::getStackResourceCallable(const GetStackResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStackResourceOutcome()>>(
			[this, request]()
			{
			return this->getStackResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ListResourceTypesOutcome ROSClient::listResourceTypes(const ListResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTypesOutcome(ListResourceTypesResult(outcome.result()));
	else
		return ListResourceTypesOutcome(outcome.error());
}

void ROSClient::listResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ListResourceTypesOutcomeCallable ROSClient::listResourceTypesCallable(const ListResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeRegionsOutcome ROSClient::describeRegions(const DescribeRegionsRequest &request) const
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

void ROSClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeRegionsOutcomeCallable ROSClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetResourceTypeTemplateOutcome ROSClient::getResourceTypeTemplate(const GetResourceTypeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceTypeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceTypeTemplateOutcome(GetResourceTypeTemplateResult(outcome.result()));
	else
		return GetResourceTypeTemplateOutcome(outcome.error());
}

void ROSClient::getResourceTypeTemplateAsync(const GetResourceTypeTemplateRequest& request, const GetResourceTypeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceTypeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetResourceTypeTemplateOutcomeCallable ROSClient::getResourceTypeTemplateCallable(const GetResourceTypeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceTypeTemplateOutcome()>>(
			[this, request]()
			{
			return this->getResourceTypeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::CreateStackOutcome ROSClient::createStack(const CreateStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStackOutcome(CreateStackResult(outcome.result()));
	else
		return CreateStackOutcome(outcome.error());
}

void ROSClient::createStackAsync(const CreateStackRequest& request, const CreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::CreateStackOutcomeCallable ROSClient::createStackCallable(const CreateStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStackOutcome()>>(
			[this, request]()
			{
			return this->createStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DeleteStackOutcome ROSClient::deleteStack(const DeleteStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStackOutcome(DeleteStackResult(outcome.result()));
	else
		return DeleteStackOutcome(outcome.error());
}

void ROSClient::deleteStackAsync(const DeleteStackRequest& request, const DeleteStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DeleteStackOutcomeCallable ROSClient::deleteStackCallable(const DeleteStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStackOutcome()>>(
			[this, request]()
			{
			return this->deleteStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetTemplateEstimateCostOutcome ROSClient::getTemplateEstimateCost(const GetTemplateEstimateCostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateEstimateCostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateEstimateCostOutcome(GetTemplateEstimateCostResult(outcome.result()));
	else
		return GetTemplateEstimateCostOutcome(outcome.error());
}

void ROSClient::getTemplateEstimateCostAsync(const GetTemplateEstimateCostRequest& request, const GetTemplateEstimateCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplateEstimateCost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetTemplateEstimateCostOutcomeCallable ROSClient::getTemplateEstimateCostCallable(const GetTemplateEstimateCostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateEstimateCostOutcome()>>(
			[this, request]()
			{
			return this->getTemplateEstimateCost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ContinueCreateStackOutcome ROSClient::continueCreateStack(const ContinueCreateStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinueCreateStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinueCreateStackOutcome(ContinueCreateStackResult(outcome.result()));
	else
		return ContinueCreateStackOutcome(outcome.error());
}

void ROSClient::continueCreateStackAsync(const ContinueCreateStackRequest& request, const ContinueCreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continueCreateStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ContinueCreateStackOutcomeCallable ROSClient::continueCreateStackCallable(const ContinueCreateStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinueCreateStackOutcome()>>(
			[this, request]()
			{
			return this->continueCreateStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetResourceTypeOutcome ROSClient::getResourceType(const GetResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceTypeOutcome(GetResourceTypeResult(outcome.result()));
	else
		return GetResourceTypeOutcome(outcome.error());
}

void ROSClient::getResourceTypeAsync(const GetResourceTypeRequest& request, const GetResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetResourceTypeOutcomeCallable ROSClient::getResourceTypeCallable(const GetResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->getResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DeleteChangeSetOutcome ROSClient::deleteChangeSet(const DeleteChangeSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteChangeSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteChangeSetOutcome(DeleteChangeSetResult(outcome.result()));
	else
		return DeleteChangeSetOutcome(outcome.error());
}

void ROSClient::deleteChangeSetAsync(const DeleteChangeSetRequest& request, const DeleteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteChangeSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DeleteChangeSetOutcomeCallable ROSClient::deleteChangeSetCallable(const DeleteChangeSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteChangeSetOutcome()>>(
			[this, request]()
			{
			return this->deleteChangeSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::PreviewStackOutcome ROSClient::previewStack(const PreviewStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewStackOutcome(PreviewStackResult(outcome.result()));
	else
		return PreviewStackOutcome(outcome.error());
}

void ROSClient::previewStackAsync(const PreviewStackRequest& request, const PreviewStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::PreviewStackOutcomeCallable ROSClient::previewStackCallable(const PreviewStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewStackOutcome()>>(
			[this, request]()
			{
			return this->previewStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::SignalResourceOutcome ROSClient::signalResource(const SignalResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignalResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignalResourceOutcome(SignalResourceResult(outcome.result()));
	else
		return SignalResourceOutcome(outcome.error());
}

void ROSClient::signalResourceAsync(const SignalResourceRequest& request, const SignalResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signalResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::SignalResourceOutcomeCallable ROSClient::signalResourceCallable(const SignalResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignalResourceOutcome()>>(
			[this, request]()
			{
			return this->signalResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ExecuteChangeSetOutcome ROSClient::executeChangeSet(const ExecuteChangeSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteChangeSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteChangeSetOutcome(ExecuteChangeSetResult(outcome.result()));
	else
		return ExecuteChangeSetOutcome(outcome.error());
}

void ROSClient::executeChangeSetAsync(const ExecuteChangeSetRequest& request, const ExecuteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeChangeSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ExecuteChangeSetOutcomeCallable ROSClient::executeChangeSetCallable(const ExecuteChangeSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteChangeSetOutcome()>>(
			[this, request]()
			{
			return this->executeChangeSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::SetStackPolicyOutcome ROSClient::setStackPolicy(const SetStackPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetStackPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetStackPolicyOutcome(SetStackPolicyResult(outcome.result()));
	else
		return SetStackPolicyOutcome(outcome.error());
}

void ROSClient::setStackPolicyAsync(const SetStackPolicyRequest& request, const SetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setStackPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::SetStackPolicyOutcomeCallable ROSClient::setStackPolicyCallable(const SetStackPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetStackPolicyOutcome()>>(
			[this, request]()
			{
			return this->setStackPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::CreateChangeSetOutcome ROSClient::createChangeSet(const CreateChangeSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateChangeSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateChangeSetOutcome(CreateChangeSetResult(outcome.result()));
	else
		return CreateChangeSetOutcome(outcome.error());
}

void ROSClient::createChangeSetAsync(const CreateChangeSetRequest& request, const CreateChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createChangeSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::CreateChangeSetOutcomeCallable ROSClient::createChangeSetCallable(const CreateChangeSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateChangeSetOutcome()>>(
			[this, request]()
			{
			return this->createChangeSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetTemplateOutcome ROSClient::getTemplate(const GetTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateOutcome(GetTemplateResult(outcome.result()));
	else
		return GetTemplateOutcome(outcome.error());
}

void ROSClient::getTemplateAsync(const GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetTemplateOutcomeCallable ROSClient::getTemplateCallable(const GetTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateOutcome()>>(
			[this, request]()
			{
			return this->getTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ListStackEventsOutcome ROSClient::listStackEvents(const ListStackEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStackEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStackEventsOutcome(ListStackEventsResult(outcome.result()));
	else
		return ListStackEventsOutcome(outcome.error());
}

void ROSClient::listStackEventsAsync(const ListStackEventsRequest& request, const ListStackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStackEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ListStackEventsOutcomeCallable ROSClient::listStackEventsCallable(const ListStackEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStackEventsOutcome()>>(
			[this, request]()
			{
			return this->listStackEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetStackOutcome ROSClient::getStack(const GetStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStackOutcome(GetStackResult(outcome.result()));
	else
		return GetStackOutcome(outcome.error());
}

void ROSClient::getStackAsync(const GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetStackOutcomeCallable ROSClient::getStackCallable(const GetStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStackOutcome()>>(
			[this, request]()
			{
			return this->getStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::GetStackPolicyOutcome ROSClient::getStackPolicy(const GetStackPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStackPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStackPolicyOutcome(GetStackPolicyResult(outcome.result()));
	else
		return GetStackPolicyOutcome(outcome.error());
}

void ROSClient::getStackPolicyAsync(const GetStackPolicyRequest& request, const GetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStackPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::GetStackPolicyOutcomeCallable ROSClient::getStackPolicyCallable(const GetStackPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStackPolicyOutcome()>>(
			[this, request]()
			{
			return this->getStackPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::CancelUpdateStackOutcome ROSClient::cancelUpdateStack(const CancelUpdateStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelUpdateStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelUpdateStackOutcome(CancelUpdateStackResult(outcome.result()));
	else
		return CancelUpdateStackOutcome(outcome.error());
}

void ROSClient::cancelUpdateStackAsync(const CancelUpdateStackRequest& request, const CancelUpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelUpdateStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::CancelUpdateStackOutcomeCallable ROSClient::cancelUpdateStackCallable(const CancelUpdateStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelUpdateStackOutcome()>>(
			[this, request]()
			{
			return this->cancelUpdateStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ListStackResourcesOutcome ROSClient::listStackResources(const ListStackResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStackResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStackResourcesOutcome(ListStackResourcesResult(outcome.result()));
	else
		return ListStackResourcesOutcome(outcome.error());
}

void ROSClient::listStackResourcesAsync(const ListStackResourcesRequest& request, const ListStackResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStackResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ListStackResourcesOutcomeCallable ROSClient::listStackResourcesCallable(const ListStackResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStackResourcesOutcome()>>(
			[this, request]()
			{
			return this->listStackResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::ListChangeSetsOutcome ROSClient::listChangeSets(const ListChangeSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChangeSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChangeSetsOutcome(ListChangeSetsResult(outcome.result()));
	else
		return ListChangeSetsOutcome(outcome.error());
}

void ROSClient::listChangeSetsAsync(const ListChangeSetsRequest& request, const ListChangeSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChangeSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::ListChangeSetsOutcomeCallable ROSClient::listChangeSetsCallable(const ListChangeSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChangeSetsOutcome()>>(
			[this, request]()
			{
			return this->listChangeSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

