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

#include <alibabacloud/smc/SmcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Smc;
using namespace AlibabaCloud::Smc::Model;

namespace
{
	const std::string SERVICE_NAME = "smc";
}

SmcClient::SmcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smc");
}

SmcClient::SmcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smc");
}

SmcClient::SmcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smc");
}

SmcClient::~SmcClient()
{}

SmcClient::CreateReplicationJobOutcome SmcClient::createReplicationJob(const CreateReplicationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateReplicationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateReplicationJobOutcome(CreateReplicationJobResult(outcome.result()));
	else
		return CreateReplicationJobOutcome(outcome.error());
}

void SmcClient::createReplicationJobAsync(const CreateReplicationJobRequest& request, const CreateReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createReplicationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::CreateReplicationJobOutcomeCallable SmcClient::createReplicationJobCallable(const CreateReplicationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateReplicationJobOutcome()>>(
			[this, request]()
			{
			return this->createReplicationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::CutOverReplicationJobOutcome SmcClient::cutOverReplicationJob(const CutOverReplicationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CutOverReplicationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CutOverReplicationJobOutcome(CutOverReplicationJobResult(outcome.result()));
	else
		return CutOverReplicationJobOutcome(outcome.error());
}

void SmcClient::cutOverReplicationJobAsync(const CutOverReplicationJobRequest& request, const CutOverReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cutOverReplicationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::CutOverReplicationJobOutcomeCallable SmcClient::cutOverReplicationJobCallable(const CutOverReplicationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CutOverReplicationJobOutcome()>>(
			[this, request]()
			{
			return this->cutOverReplicationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::DeleteReplicationJobOutcome SmcClient::deleteReplicationJob(const DeleteReplicationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteReplicationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteReplicationJobOutcome(DeleteReplicationJobResult(outcome.result()));
	else
		return DeleteReplicationJobOutcome(outcome.error());
}

void SmcClient::deleteReplicationJobAsync(const DeleteReplicationJobRequest& request, const DeleteReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteReplicationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::DeleteReplicationJobOutcomeCallable SmcClient::deleteReplicationJobCallable(const DeleteReplicationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteReplicationJobOutcome()>>(
			[this, request]()
			{
			return this->deleteReplicationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::DeleteSourceServerOutcome SmcClient::deleteSourceServer(const DeleteSourceServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSourceServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSourceServerOutcome(DeleteSourceServerResult(outcome.result()));
	else
		return DeleteSourceServerOutcome(outcome.error());
}

void SmcClient::deleteSourceServerAsync(const DeleteSourceServerRequest& request, const DeleteSourceServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSourceServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::DeleteSourceServerOutcomeCallable SmcClient::deleteSourceServerCallable(const DeleteSourceServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSourceServerOutcome()>>(
			[this, request]()
			{
			return this->deleteSourceServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::DescribeReplicationJobsOutcome SmcClient::describeReplicationJobs(const DescribeReplicationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicationJobsOutcome(DescribeReplicationJobsResult(outcome.result()));
	else
		return DescribeReplicationJobsOutcome(outcome.error());
}

void SmcClient::describeReplicationJobsAsync(const DescribeReplicationJobsRequest& request, const DescribeReplicationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::DescribeReplicationJobsOutcomeCallable SmcClient::describeReplicationJobsCallable(const DescribeReplicationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicationJobsOutcome()>>(
			[this, request]()
			{
			return this->describeReplicationJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::DescribeSourceServersOutcome SmcClient::describeSourceServers(const DescribeSourceServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSourceServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSourceServersOutcome(DescribeSourceServersResult(outcome.result()));
	else
		return DescribeSourceServersOutcome(outcome.error());
}

void SmcClient::describeSourceServersAsync(const DescribeSourceServersRequest& request, const DescribeSourceServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSourceServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::DescribeSourceServersOutcomeCallable SmcClient::describeSourceServersCallable(const DescribeSourceServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSourceServersOutcome()>>(
			[this, request]()
			{
			return this->describeSourceServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::ListTagResourcesOutcome SmcClient::listTagResources(const ListTagResourcesRequest &request) const
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

void SmcClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::ListTagResourcesOutcomeCallable SmcClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::ModifyReplicationJobAttributeOutcome SmcClient::modifyReplicationJobAttribute(const ModifyReplicationJobAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicationJobAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicationJobAttributeOutcome(ModifyReplicationJobAttributeResult(outcome.result()));
	else
		return ModifyReplicationJobAttributeOutcome(outcome.error());
}

void SmcClient::modifyReplicationJobAttributeAsync(const ModifyReplicationJobAttributeRequest& request, const ModifyReplicationJobAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicationJobAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::ModifyReplicationJobAttributeOutcomeCallable SmcClient::modifyReplicationJobAttributeCallable(const ModifyReplicationJobAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicationJobAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicationJobAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::ModifySourceServerAttributeOutcome SmcClient::modifySourceServerAttribute(const ModifySourceServerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySourceServerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySourceServerAttributeOutcome(ModifySourceServerAttributeResult(outcome.result()));
	else
		return ModifySourceServerAttributeOutcome(outcome.error());
}

void SmcClient::modifySourceServerAttributeAsync(const ModifySourceServerAttributeRequest& request, const ModifySourceServerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySourceServerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::ModifySourceServerAttributeOutcomeCallable SmcClient::modifySourceServerAttributeCallable(const ModifySourceServerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySourceServerAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifySourceServerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::StartReplicationJobOutcome SmcClient::startReplicationJob(const StartReplicationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartReplicationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartReplicationJobOutcome(StartReplicationJobResult(outcome.result()));
	else
		return StartReplicationJobOutcome(outcome.error());
}

void SmcClient::startReplicationJobAsync(const StartReplicationJobRequest& request, const StartReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startReplicationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::StartReplicationJobOutcomeCallable SmcClient::startReplicationJobCallable(const StartReplicationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartReplicationJobOutcome()>>(
			[this, request]()
			{
			return this->startReplicationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::StopReplicationJobOutcome SmcClient::stopReplicationJob(const StopReplicationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopReplicationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopReplicationJobOutcome(StopReplicationJobResult(outcome.result()));
	else
		return StopReplicationJobOutcome(outcome.error());
}

void SmcClient::stopReplicationJobAsync(const StopReplicationJobRequest& request, const StopReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopReplicationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::StopReplicationJobOutcomeCallable SmcClient::stopReplicationJobCallable(const StopReplicationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopReplicationJobOutcome()>>(
			[this, request]()
			{
			return this->stopReplicationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::TagResourcesOutcome SmcClient::tagResources(const TagResourcesRequest &request) const
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

void SmcClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::TagResourcesOutcomeCallable SmcClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmcClient::UntagResourcesOutcome SmcClient::untagResources(const UntagResourcesRequest &request) const
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

void SmcClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmcClient::UntagResourcesOutcomeCallable SmcClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

