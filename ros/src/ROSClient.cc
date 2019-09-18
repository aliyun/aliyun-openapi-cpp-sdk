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
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ros");
}

ROSClient::ROSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ros");
}

ROSClient::ROSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ros");
}

ROSClient::~ROSClient()
{}

ROSClient::AbandonStackOutcome ROSClient::abandonStack(const AbandonStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbandonStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbandonStackOutcome(AbandonStackResult(outcome.result()));
	else
		return AbandonStackOutcome(outcome.error());
}

void ROSClient::abandonStackAsync(const AbandonStackRequest& request, const AbandonStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abandonStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::AbandonStackOutcomeCallable ROSClient::abandonStackCallable(const AbandonStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbandonStackOutcome()>>(
			[this, request]()
			{
			return this->abandonStack(request);
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

ROSClient::CreateStacksOutcome ROSClient::createStacks(const CreateStacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStacksOutcome(CreateStacksResult(outcome.result()));
	else
		return CreateStacksOutcome(outcome.error());
}

void ROSClient::createStacksAsync(const CreateStacksRequest& request, const CreateStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::CreateStacksOutcomeCallable ROSClient::createStacksCallable(const CreateStacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStacksOutcome()>>(
			[this, request]()
			{
			return this->createStacks(request);
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

ROSClient::DescribeChangeSetDetailOutcome ROSClient::describeChangeSetDetail(const DescribeChangeSetDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChangeSetDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChangeSetDetailOutcome(DescribeChangeSetDetailResult(outcome.result()));
	else
		return DescribeChangeSetDetailOutcome(outcome.error());
}

void ROSClient::describeChangeSetDetailAsync(const DescribeChangeSetDetailRequest& request, const DescribeChangeSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChangeSetDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeChangeSetDetailOutcomeCallable ROSClient::describeChangeSetDetailCallable(const DescribeChangeSetDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChangeSetDetailOutcome()>>(
			[this, request]()
			{
			return this->describeChangeSetDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeChangeSetsOutcome ROSClient::describeChangeSets(const DescribeChangeSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChangeSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChangeSetsOutcome(DescribeChangeSetsResult(outcome.result()));
	else
		return DescribeChangeSetsOutcome(outcome.error());
}

void ROSClient::describeChangeSetsAsync(const DescribeChangeSetsRequest& request, const DescribeChangeSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChangeSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeChangeSetsOutcomeCallable ROSClient::describeChangeSetsCallable(const DescribeChangeSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChangeSetsOutcome()>>(
			[this, request]()
			{
			return this->describeChangeSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeEventsOutcome ROSClient::describeEvents(const DescribeEventsRequest &request) const
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

void ROSClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeEventsOutcomeCallable ROSClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
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

ROSClient::DescribeResourceDetailOutcome ROSClient::describeResourceDetail(const DescribeResourceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceDetailOutcome(DescribeResourceDetailResult(outcome.result()));
	else
		return DescribeResourceDetailOutcome(outcome.error());
}

void ROSClient::describeResourceDetailAsync(const DescribeResourceDetailRequest& request, const DescribeResourceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeResourceDetailOutcomeCallable ROSClient::describeResourceDetailCallable(const DescribeResourceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceDetailOutcome()>>(
			[this, request]()
			{
			return this->describeResourceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeResourceTypeDetailOutcome ROSClient::describeResourceTypeDetail(const DescribeResourceTypeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceTypeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceTypeDetailOutcome(DescribeResourceTypeDetailResult(outcome.result()));
	else
		return DescribeResourceTypeDetailOutcome(outcome.error());
}

void ROSClient::describeResourceTypeDetailAsync(const DescribeResourceTypeDetailRequest& request, const DescribeResourceTypeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceTypeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeResourceTypeDetailOutcomeCallable ROSClient::describeResourceTypeDetailCallable(const DescribeResourceTypeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceTypeDetailOutcome()>>(
			[this, request]()
			{
			return this->describeResourceTypeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeResourceTypeTemplateOutcome ROSClient::describeResourceTypeTemplate(const DescribeResourceTypeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceTypeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceTypeTemplateOutcome(DescribeResourceTypeTemplateResult(outcome.result()));
	else
		return DescribeResourceTypeTemplateOutcome(outcome.error());
}

void ROSClient::describeResourceTypeTemplateAsync(const DescribeResourceTypeTemplateRequest& request, const DescribeResourceTypeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceTypeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeResourceTypeTemplateOutcomeCallable ROSClient::describeResourceTypeTemplateCallable(const DescribeResourceTypeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceTypeTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeResourceTypeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeResourceTypesOutcome ROSClient::describeResourceTypes(const DescribeResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceTypesOutcome(DescribeResourceTypesResult(outcome.result()));
	else
		return DescribeResourceTypesOutcome(outcome.error());
}

void ROSClient::describeResourceTypesAsync(const DescribeResourceTypesRequest& request, const DescribeResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeResourceTypesOutcomeCallable ROSClient::describeResourceTypesCallable(const DescribeResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeResourcesOutcome ROSClient::describeResources(const DescribeResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourcesOutcome(DescribeResourcesResult(outcome.result()));
	else
		return DescribeResourcesOutcome(outcome.error());
}

void ROSClient::describeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeResourcesOutcomeCallable ROSClient::describeResourcesCallable(const DescribeResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeStackDetailOutcome ROSClient::describeStackDetail(const DescribeStackDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStackDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStackDetailOutcome(DescribeStackDetailResult(outcome.result()));
	else
		return DescribeStackDetailOutcome(outcome.error());
}

void ROSClient::describeStackDetailAsync(const DescribeStackDetailRequest& request, const DescribeStackDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStackDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeStackDetailOutcomeCallable ROSClient::describeStackDetailCallable(const DescribeStackDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStackDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStackDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeStacksOutcome ROSClient::describeStacks(const DescribeStacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStacksOutcome(DescribeStacksResult(outcome.result()));
	else
		return DescribeStacksOutcome(outcome.error());
}

void ROSClient::describeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeStacksOutcomeCallable ROSClient::describeStacksCallable(const DescribeStacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStacksOutcome()>>(
			[this, request]()
			{
			return this->describeStacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DescribeTemplateOutcome ROSClient::describeTemplate(const DescribeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplateOutcome(DescribeTemplateResult(outcome.result()));
	else
		return DescribeTemplateOutcome(outcome.error());
}

void ROSClient::describeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DescribeTemplateOutcomeCallable ROSClient::describeTemplateCallable(const DescribeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ROSClient::DoActionsOutcome ROSClient::doActions(const DoActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DoActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DoActionsOutcome(DoActionsResult(outcome.result()));
	else
		return DoActionsOutcome(outcome.error());
}

void ROSClient::doActionsAsync(const DoActionsRequest& request, const DoActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, doActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::DoActionsOutcomeCallable ROSClient::doActionsCallable(const DoActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DoActionsOutcome()>>(
			[this, request]()
			{
			return this->doActions(request);
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

ROSClient::InquiryStackOutcome ROSClient::inquiryStack(const InquiryStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InquiryStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InquiryStackOutcome(InquiryStackResult(outcome.result()));
	else
		return InquiryStackOutcome(outcome.error());
}

void ROSClient::inquiryStackAsync(const InquiryStackRequest& request, const InquiryStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inquiryStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::InquiryStackOutcomeCallable ROSClient::inquiryStackCallable(const InquiryStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InquiryStackOutcome()>>(
			[this, request]()
			{
			return this->inquiryStack(request);
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

ROSClient::WaitConditionsOutcome ROSClient::waitConditions(const WaitConditionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WaitConditionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WaitConditionsOutcome(WaitConditionsResult(outcome.result()));
	else
		return WaitConditionsOutcome(outcome.error());
}

void ROSClient::waitConditionsAsync(const WaitConditionsRequest& request, const WaitConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, waitConditions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ROSClient::WaitConditionsOutcomeCallable ROSClient::waitConditionsCallable(const WaitConditionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WaitConditionsOutcome()>>(
			[this, request]()
			{
			return this->waitConditions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

