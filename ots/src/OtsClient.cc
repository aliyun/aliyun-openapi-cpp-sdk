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

#include <alibabacloud/ots/OtsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

namespace
{
	const std::string SERVICE_NAME = "Ots";
}

OtsClient::OtsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ots");
}

OtsClient::OtsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ots");
}

OtsClient::OtsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ots");
}

OtsClient::~OtsClient()
{}

OtsClient::BindInstance2VpcOutcome OtsClient::bindInstance2Vpc(const BindInstance2VpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindInstance2VpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindInstance2VpcOutcome(BindInstance2VpcResult(outcome.result()));
	else
		return BindInstance2VpcOutcome(outcome.error());
}

void OtsClient::bindInstance2VpcAsync(const BindInstance2VpcRequest& request, const BindInstance2VpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindInstance2Vpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::BindInstance2VpcOutcomeCallable OtsClient::bindInstance2VpcCallable(const BindInstance2VpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindInstance2VpcOutcome()>>(
			[this, request]()
			{
			return this->bindInstance2Vpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::DeleteInstanceOutcome OtsClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void OtsClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::DeleteInstanceOutcomeCallable OtsClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::DeleteTagsOutcome OtsClient::deleteTags(const DeleteTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagsOutcome(DeleteTagsResult(outcome.result()));
	else
		return DeleteTagsOutcome(outcome.error());
}

void OtsClient::deleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::DeleteTagsOutcomeCallable OtsClient::deleteTagsCallable(const DeleteTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagsOutcome()>>(
			[this, request]()
			{
			return this->deleteTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::GetInstanceOutcome OtsClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void OtsClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::GetInstanceOutcomeCallable OtsClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::InsertInstanceOutcome OtsClient::insertInstance(const InsertInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertInstanceOutcome(InsertInstanceResult(outcome.result()));
	else
		return InsertInstanceOutcome(outcome.error());
}

void OtsClient::insertInstanceAsync(const InsertInstanceRequest& request, const InsertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::InsertInstanceOutcomeCallable OtsClient::insertInstanceCallable(const InsertInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertInstanceOutcome()>>(
			[this, request]()
			{
			return this->insertInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::InsertTagsOutcome OtsClient::insertTags(const InsertTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertTagsOutcome(InsertTagsResult(outcome.result()));
	else
		return InsertTagsOutcome(outcome.error());
}

void OtsClient::insertTagsAsync(const InsertTagsRequest& request, const InsertTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::InsertTagsOutcomeCallable OtsClient::insertTagsCallable(const InsertTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertTagsOutcome()>>(
			[this, request]()
			{
			return this->insertTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::ListClusterTypeOutcome OtsClient::listClusterType(const ListClusterTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTypeOutcome(ListClusterTypeResult(outcome.result()));
	else
		return ListClusterTypeOutcome(outcome.error());
}

void OtsClient::listClusterTypeAsync(const ListClusterTypeRequest& request, const ListClusterTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::ListClusterTypeOutcomeCallable OtsClient::listClusterTypeCallable(const ListClusterTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTypeOutcome()>>(
			[this, request]()
			{
			return this->listClusterType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::ListInstanceOutcome OtsClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void OtsClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::ListInstanceOutcomeCallable OtsClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::ListTagsOutcome OtsClient::listTags(const ListTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsOutcome(ListTagsResult(outcome.result()));
	else
		return ListTagsOutcome(outcome.error());
}

void OtsClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::ListTagsOutcomeCallable OtsClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::ListVpcInfoByInstanceOutcome OtsClient::listVpcInfoByInstance(const ListVpcInfoByInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcInfoByInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcInfoByInstanceOutcome(ListVpcInfoByInstanceResult(outcome.result()));
	else
		return ListVpcInfoByInstanceOutcome(outcome.error());
}

void OtsClient::listVpcInfoByInstanceAsync(const ListVpcInfoByInstanceRequest& request, const ListVpcInfoByInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcInfoByInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::ListVpcInfoByInstanceOutcomeCallable OtsClient::listVpcInfoByInstanceCallable(const ListVpcInfoByInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcInfoByInstanceOutcome()>>(
			[this, request]()
			{
			return this->listVpcInfoByInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::ListVpcInfoByVpcOutcome OtsClient::listVpcInfoByVpc(const ListVpcInfoByVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcInfoByVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcInfoByVpcOutcome(ListVpcInfoByVpcResult(outcome.result()));
	else
		return ListVpcInfoByVpcOutcome(outcome.error());
}

void OtsClient::listVpcInfoByVpcAsync(const ListVpcInfoByVpcRequest& request, const ListVpcInfoByVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcInfoByVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::ListVpcInfoByVpcOutcomeCallable OtsClient::listVpcInfoByVpcCallable(const ListVpcInfoByVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcInfoByVpcOutcome()>>(
			[this, request]()
			{
			return this->listVpcInfoByVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::UnbindInstance2VpcOutcome OtsClient::unbindInstance2Vpc(const UnbindInstance2VpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindInstance2VpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindInstance2VpcOutcome(UnbindInstance2VpcResult(outcome.result()));
	else
		return UnbindInstance2VpcOutcome(outcome.error());
}

void OtsClient::unbindInstance2VpcAsync(const UnbindInstance2VpcRequest& request, const UnbindInstance2VpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindInstance2Vpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::UnbindInstance2VpcOutcomeCallable OtsClient::unbindInstance2VpcCallable(const UnbindInstance2VpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindInstance2VpcOutcome()>>(
			[this, request]()
			{
			return this->unbindInstance2Vpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OtsClient::UpdateInstanceOutcome OtsClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void OtsClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OtsClient::UpdateInstanceOutcomeCallable OtsClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

