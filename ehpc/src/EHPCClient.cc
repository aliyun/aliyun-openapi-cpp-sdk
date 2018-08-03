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

#include <alibabacloud/ehpc/EHPCClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

namespace
{
	const std::string SERVICE_NAME = "EHPC";
}

EHPCClient::EHPCClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::EHPCClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::EHPCClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ehs");
}

EHPCClient::~EHPCClient()
{}

EHPCClient::DeleteImageOutcome EHPCClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void EHPCClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteImageOutcomeCallable EHPCClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteUsersOutcome EHPCClient::deleteUsers(const DeleteUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUsersOutcome(DeleteUsersResult(outcome.result()));
	else
		return DeleteUsersOutcome(outcome.error());
}

void EHPCClient::deleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteUsersOutcomeCallable EHPCClient::deleteUsersCallable(const DeleteUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeClusterOutcome EHPCClient::describeCluster(const DescribeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOutcome(DescribeClusterResult(outcome.result()));
	else
		return DescribeClusterOutcome(outcome.error());
}

void EHPCClient::describeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeClusterOutcomeCallable EHPCClient::describeClusterCallable(const DescribeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOutcome()>>(
			[this, request]()
			{
			return this->describeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListUsersOutcome EHPCClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void EHPCClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListUsersOutcomeCallable EHPCClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopNodesOutcome EHPCClient::stopNodes(const StopNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopNodesOutcome(StopNodesResult(outcome.result()));
	else
		return StopNodesOutcome(outcome.error());
}

void EHPCClient::stopNodesAsync(const StopNodesRequest& request, const StopNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopNodesOutcomeCallable EHPCClient::stopNodesCallable(const StopNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopNodesOutcome()>>(
			[this, request]()
			{
			return this->stopNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::PullImageOutcome EHPCClient::pullImage(const PullImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullImageOutcome(PullImageResult(outcome.result()));
	else
		return PullImageOutcome(outcome.error());
}

void EHPCClient::pullImageAsync(const PullImageRequest& request, const PullImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::PullImageOutcomeCallable EHPCClient::pullImageCallable(const PullImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullImageOutcome()>>(
			[this, request]()
			{
			return this->pullImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeContainerAppOutcome EHPCClient::describeContainerApp(const DescribeContainerAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerAppOutcome(DescribeContainerAppResult(outcome.result()));
	else
		return DescribeContainerAppOutcome(outcome.error());
}

void EHPCClient::describeContainerAppAsync(const DescribeContainerAppRequest& request, const DescribeContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeContainerAppOutcomeCallable EHPCClient::describeContainerAppCallable(const DescribeContainerAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerAppOutcome()>>(
			[this, request]()
			{
			return this->describeContainerApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCurrentClientVersionOutcome EHPCClient::listCurrentClientVersion(const ListCurrentClientVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCurrentClientVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCurrentClientVersionOutcome(ListCurrentClientVersionResult(outcome.result()));
	else
		return ListCurrentClientVersionOutcome(outcome.error());
}

void EHPCClient::listCurrentClientVersionAsync(const ListCurrentClientVersionRequest& request, const ListCurrentClientVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCurrentClientVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCurrentClientVersionOutcomeCallable EHPCClient::listCurrentClientVersionCallable(const ListCurrentClientVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCurrentClientVersionOutcome()>>(
			[this, request]()
			{
			return this->listCurrentClientVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyContainerAppAttributesOutcome EHPCClient::modifyContainerAppAttributes(const ModifyContainerAppAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyContainerAppAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyContainerAppAttributesOutcome(ModifyContainerAppAttributesResult(outcome.result()));
	else
		return ModifyContainerAppAttributesOutcome(outcome.error());
}

void EHPCClient::modifyContainerAppAttributesAsync(const ModifyContainerAppAttributesRequest& request, const ModifyContainerAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyContainerAppAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyContainerAppAttributesOutcomeCallable EHPCClient::modifyContainerAppAttributesCallable(const ModifyContainerAppAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyContainerAppAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyContainerAppAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetAutoScaleConfigOutcome EHPCClient::setAutoScaleConfig(const SetAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAutoScaleConfigOutcome(SetAutoScaleConfigResult(outcome.result()));
	else
		return SetAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::setAutoScaleConfigAsync(const SetAutoScaleConfigRequest& request, const SetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetAutoScaleConfigOutcomeCallable EHPCClient::setAutoScaleConfigCallable(const SetAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->setAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListInvocationResultsOutcome EHPCClient::listInvocationResults(const ListInvocationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInvocationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInvocationResultsOutcome(ListInvocationResultsResult(outcome.result()));
	else
		return ListInvocationResultsOutcome(outcome.error());
}

void EHPCClient::listInvocationResultsAsync(const ListInvocationResultsRequest& request, const ListInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInvocationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListInvocationResultsOutcomeCallable EHPCClient::listInvocationResultsCallable(const ListInvocationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInvocationResultsOutcome()>>(
			[this, request]()
			{
			return this->listInvocationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddNodesOutcome EHPCClient::addNodes(const AddNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNodesOutcome(AddNodesResult(outcome.result()));
	else
		return AddNodesOutcome(outcome.error());
}

void EHPCClient::addNodesAsync(const AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddNodesOutcomeCallable EHPCClient::addNodesCallable(const AddNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNodesOutcome()>>(
			[this, request]()
			{
			return this->addNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListSoftwaresOutcome EHPCClient::listSoftwares(const ListSoftwaresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSoftwaresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSoftwaresOutcome(ListSoftwaresResult(outcome.result()));
	else
		return ListSoftwaresOutcome(outcome.error());
}

void EHPCClient::listSoftwaresAsync(const ListSoftwaresRequest& request, const ListSoftwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSoftwares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListSoftwaresOutcomeCallable EHPCClient::listSoftwaresCallable(const ListSoftwaresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSoftwaresOutcome()>>(
			[this, request]()
			{
			return this->listSoftwares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopJobsOutcome EHPCClient::stopJobs(const StopJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopJobsOutcome(StopJobsResult(outcome.result()));
	else
		return StopJobsOutcome(outcome.error());
}

void EHPCClient::stopJobsAsync(const StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopJobsOutcomeCallable EHPCClient::stopJobsCallable(const StopJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopJobsOutcome()>>(
			[this, request]()
			{
			return this->stopJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartNodesOutcome EHPCClient::startNodes(const StartNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartNodesOutcome(StartNodesResult(outcome.result()));
	else
		return StartNodesOutcome(outcome.error());
}

void EHPCClient::startNodesAsync(const StartNodesRequest& request, const StartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartNodesOutcomeCallable EHPCClient::startNodesCallable(const StartNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartNodesOutcome()>>(
			[this, request]()
			{
			return this->startNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetAutoScaleConfigOutcome EHPCClient::getAutoScaleConfig(const GetAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAutoScaleConfigOutcome(GetAutoScaleConfigResult(outcome.result()));
	else
		return GetAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::getAutoScaleConfigAsync(const GetAutoScaleConfigRequest& request, const GetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetAutoScaleConfigOutcomeCallable EHPCClient::getAutoScaleConfigCallable(const GetAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->getAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListNodesOutcome EHPCClient::listNodes(const ListNodesRequest &request) const
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

void EHPCClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListNodesOutcomeCallable EHPCClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyUserGroupsOutcome EHPCClient::modifyUserGroups(const ModifyUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserGroupsOutcome(ModifyUserGroupsResult(outcome.result()));
	else
		return ModifyUserGroupsOutcome(outcome.error());
}

void EHPCClient::modifyUserGroupsAsync(const ModifyUserGroupsRequest& request, const ModifyUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyUserGroupsOutcomeCallable EHPCClient::modifyUserGroupsCallable(const ModifyUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifyUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StartClusterOutcome EHPCClient::startCluster(const StartClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartClusterOutcome(StartClusterResult(outcome.result()));
	else
		return StartClusterOutcome(outcome.error());
}

void EHPCClient::startClusterAsync(const StartClusterRequest& request, const StartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StartClusterOutcomeCallable EHPCClient::startClusterCallable(const StartClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartClusterOutcome()>>(
			[this, request]()
			{
			return this->startCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCommandsOutcome EHPCClient::listCommands(const ListCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommandsOutcome(ListCommandsResult(outcome.result()));
	else
		return ListCommandsOutcome(outcome.error());
}

void EHPCClient::listCommandsAsync(const ListCommandsRequest& request, const ListCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCommandsOutcomeCallable EHPCClient::listCommandsCallable(const ListCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommandsOutcome()>>(
			[this, request]()
			{
			return this->listCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListCustomImagesOutcome EHPCClient::listCustomImages(const ListCustomImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomImagesOutcome(ListCustomImagesResult(outcome.result()));
	else
		return ListCustomImagesOutcome(outcome.error());
}

void EHPCClient::listCustomImagesAsync(const ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListCustomImagesOutcomeCallable EHPCClient::listCustomImagesCallable(const ListCustomImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomImagesOutcome()>>(
			[this, request]()
			{
			return this->listCustomImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::InvokeShellCommandOutcome EHPCClient::invokeShellCommand(const InvokeShellCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeShellCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeShellCommandOutcome(InvokeShellCommandResult(outcome.result()));
	else
		return InvokeShellCommandOutcome(outcome.error());
}

void EHPCClient::invokeShellCommandAsync(const InvokeShellCommandRequest& request, const InvokeShellCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeShellCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::InvokeShellCommandOutcomeCallable EHPCClient::invokeShellCommandCallable(const InvokeShellCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeShellCommandOutcome()>>(
			[this, request]()
			{
			return this->invokeShellCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddUsersOutcome EHPCClient::addUsers(const AddUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUsersOutcome(AddUsersResult(outcome.result()));
	else
		return AddUsersOutcome(outcome.error());
}

void EHPCClient::addUsersAsync(const AddUsersRequest& request, const AddUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddUsersOutcomeCallable EHPCClient::addUsersCallable(const AddUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUsersOutcome()>>(
			[this, request]()
			{
			return this->addUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListJobTemplatesOutcome EHPCClient::listJobTemplates(const ListJobTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobTemplatesOutcome(ListJobTemplatesResult(outcome.result()));
	else
		return ListJobTemplatesOutcome(outcome.error());
}

void EHPCClient::listJobTemplatesAsync(const ListJobTemplatesRequest& request, const ListJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListJobTemplatesOutcomeCallable EHPCClient::listJobTemplatesCallable(const ListJobTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listJobTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyClusterAttributesOutcome EHPCClient::modifyClusterAttributes(const ModifyClusterAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterAttributesOutcome(ModifyClusterAttributesResult(outcome.result()));
	else
		return ModifyClusterAttributesOutcome(outcome.error());
}

void EHPCClient::modifyClusterAttributesAsync(const ModifyClusterAttributesRequest& request, const ModifyClusterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyClusterAttributesOutcomeCallable EHPCClient::modifyClusterAttributesCallable(const ModifyClusterAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeImageGatewayConfigOutcome EHPCClient::describeImageGatewayConfig(const DescribeImageGatewayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageGatewayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageGatewayConfigOutcome(DescribeImageGatewayConfigResult(outcome.result()));
	else
		return DescribeImageGatewayConfigOutcome(outcome.error());
}

void EHPCClient::describeImageGatewayConfigAsync(const DescribeImageGatewayConfigRequest& request, const DescribeImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageGatewayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeImageGatewayConfigOutcomeCallable EHPCClient::describeImageGatewayConfigCallable(const DescribeImageGatewayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageGatewayConfigOutcome()>>(
			[this, request]()
			{
			return this->describeImageGatewayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteJobTemplatesOutcome EHPCClient::deleteJobTemplates(const DeleteJobTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobTemplatesOutcome(DeleteJobTemplatesResult(outcome.result()));
	else
		return DeleteJobTemplatesOutcome(outcome.error());
}

void EHPCClient::deleteJobTemplatesAsync(const DeleteJobTemplatesRequest& request, const DeleteJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteJobTemplatesOutcomeCallable EHPCClient::deleteJobTemplatesCallable(const DeleteJobTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteJobTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::StopClusterOutcome EHPCClient::stopCluster(const StopClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopClusterOutcome(StopClusterResult(outcome.result()));
	else
		return StopClusterOutcome(outcome.error());
}

void EHPCClient::stopClusterAsync(const StopClusterRequest& request, const StopClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::StopClusterOutcomeCallable EHPCClient::stopClusterCallable(const StopClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopClusterOutcome()>>(
			[this, request]()
			{
			return this->stopCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListNodesNoPagingOutcome EHPCClient::listNodesNoPaging(const ListNodesNoPagingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesNoPagingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesNoPagingOutcome(ListNodesNoPagingResult(outcome.result()));
	else
		return ListNodesNoPagingOutcome(outcome.error());
}

void EHPCClient::listNodesNoPagingAsync(const ListNodesNoPagingRequest& request, const ListNodesNoPagingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesNoPaging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListNodesNoPagingOutcomeCallable EHPCClient::listNodesNoPagingCallable(const ListNodesNoPagingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesNoPagingOutcome()>>(
			[this, request]()
			{
			return this->listNodesNoPaging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetCloudMetricLogsOutcome EHPCClient::getCloudMetricLogs(const GetCloudMetricLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudMetricLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudMetricLogsOutcome(GetCloudMetricLogsResult(outcome.result()));
	else
		return GetCloudMetricLogsOutcome(outcome.error());
}

void EHPCClient::getCloudMetricLogsAsync(const GetCloudMetricLogsRequest& request, const GetCloudMetricLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudMetricLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetCloudMetricLogsOutcomeCallable EHPCClient::getCloudMetricLogsCallable(const GetCloudMetricLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudMetricLogsOutcome()>>(
			[this, request]()
			{
			return this->getCloudMetricLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::GetHybridClusterConfigOutcome EHPCClient::getHybridClusterConfig(const GetHybridClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHybridClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHybridClusterConfigOutcome(GetHybridClusterConfigResult(outcome.result()));
	else
		return GetHybridClusterConfigOutcome(outcome.error());
}

void EHPCClient::getHybridClusterConfigAsync(const GetHybridClusterConfigRequest& request, const GetHybridClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHybridClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::GetHybridClusterConfigOutcomeCallable EHPCClient::getHybridClusterConfigCallable(const GetHybridClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHybridClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->getHybridClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateJobTemplateOutcome EHPCClient::createJobTemplate(const CreateJobTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobTemplateOutcome(CreateJobTemplateResult(outcome.result()));
	else
		return CreateJobTemplateOutcome(outcome.error());
}

void EHPCClient::createJobTemplateAsync(const CreateJobTemplateRequest& request, const CreateJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateJobTemplateOutcomeCallable EHPCClient::createJobTemplateCallable(const CreateJobTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobTemplateOutcome()>>(
			[this, request]()
			{
			return this->createJobTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ResetNodesOutcome EHPCClient::resetNodes(const ResetNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetNodesOutcome(ResetNodesResult(outcome.result()));
	else
		return ResetNodesOutcome(outcome.error());
}

void EHPCClient::resetNodesAsync(const ResetNodesRequest& request, const ResetNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ResetNodesOutcomeCallable EHPCClient::resetNodesCallable(const ResetNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetNodesOutcome()>>(
			[this, request]()
			{
			return this->resetNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateHybridClusterOutcome EHPCClient::createHybridCluster(const CreateHybridClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHybridClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHybridClusterOutcome(CreateHybridClusterResult(outcome.result()));
	else
		return CreateHybridClusterOutcome(outcome.error());
}

void EHPCClient::createHybridClusterAsync(const CreateHybridClusterRequest& request, const CreateHybridClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHybridCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateHybridClusterOutcomeCallable EHPCClient::createHybridClusterCallable(const CreateHybridClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHybridClusterOutcome()>>(
			[this, request]()
			{
			return this->createHybridCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListContainerImagesOutcome EHPCClient::listContainerImages(const ListContainerImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContainerImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContainerImagesOutcome(ListContainerImagesResult(outcome.result()));
	else
		return ListContainerImagesOutcome(outcome.error());
}

void EHPCClient::listContainerImagesAsync(const ListContainerImagesRequest& request, const ListContainerImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContainerImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListContainerImagesOutcomeCallable EHPCClient::listContainerImagesCallable(const ListContainerImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContainerImagesOutcome()>>(
			[this, request]()
			{
			return this->listContainerImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteJobsOutcome EHPCClient::deleteJobs(const DeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobsOutcome(DeleteJobsResult(outcome.result()));
	else
		return DeleteJobsOutcome(outcome.error());
}

void EHPCClient::deleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteJobsOutcomeCallable EHPCClient::deleteJobsCallable(const DeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->deleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteNodesOutcome EHPCClient::deleteNodes(const DeleteNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodesOutcome(DeleteNodesResult(outcome.result()));
	else
		return DeleteNodesOutcome(outcome.error());
}

void EHPCClient::deleteNodesAsync(const DeleteNodesRequest& request, const DeleteNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteNodesOutcomeCallable EHPCClient::deleteNodesCallable(const DeleteNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListJobsOutcome EHPCClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void EHPCClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListJobsOutcomeCallable EHPCClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::CreateClusterOutcome EHPCClient::createCluster(const CreateClusterRequest &request) const
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

void EHPCClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::CreateClusterOutcomeCallable EHPCClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeImageOutcome EHPCClient::describeImage(const DescribeImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageOutcome(DescribeImageResult(outcome.result()));
	else
		return DescribeImageOutcome(outcome.error());
}

void EHPCClient::describeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeImageOutcomeCallable EHPCClient::describeImageCallable(const DescribeImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
			[this, request]()
			{
			return this->describeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyUserPasswordsOutcome EHPCClient::modifyUserPasswords(const ModifyUserPasswordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserPasswordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserPasswordsOutcome(ModifyUserPasswordsResult(outcome.result()));
	else
		return ModifyUserPasswordsOutcome(outcome.error());
}

void EHPCClient::modifyUserPasswordsAsync(const ModifyUserPasswordsRequest& request, const ModifyUserPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserPasswords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyUserPasswordsOutcomeCallable EHPCClient::modifyUserPasswordsCallable(const ModifyUserPasswordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserPasswordsOutcome()>>(
			[this, request]()
			{
			return this->modifyUserPasswords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::UpgradeClientOutcome EHPCClient::upgradeClient(const UpgradeClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClientOutcome(UpgradeClientResult(outcome.result()));
	else
		return UpgradeClientOutcome(outcome.error());
}

void EHPCClient::upgradeClientAsync(const UpgradeClientRequest& request, const UpgradeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::UpgradeClientOutcomeCallable EHPCClient::upgradeClientCallable(const UpgradeClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClientOutcome()>>(
			[this, request]()
			{
			return this->upgradeClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteClusterOutcome EHPCClient::deleteCluster(const DeleteClusterRequest &request) const
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

void EHPCClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteClusterOutcomeCallable EHPCClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListImagesOutcome EHPCClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void EHPCClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListImagesOutcomeCallable EHPCClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListVolumesOutcome EHPCClient::listVolumes(const ListVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVolumesOutcome(ListVolumesResult(outcome.result()));
	else
		return ListVolumesOutcome(outcome.error());
}

void EHPCClient::listVolumesAsync(const ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListVolumesOutcomeCallable EHPCClient::listVolumesCallable(const ListVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVolumesOutcome()>>(
			[this, request]()
			{
			return this->listVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DeleteContainerAppsOutcome EHPCClient::deleteContainerApps(const DeleteContainerAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContainerAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContainerAppsOutcome(DeleteContainerAppsResult(outcome.result()));
	else
		return DeleteContainerAppsOutcome(outcome.error());
}

void EHPCClient::deleteContainerAppsAsync(const DeleteContainerAppsRequest& request, const DeleteContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContainerApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DeleteContainerAppsOutcomeCallable EHPCClient::deleteContainerAppsCallable(const DeleteContainerAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContainerAppsOutcome()>>(
			[this, request]()
			{
			return this->deleteContainerApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListInvocationStatusOutcome EHPCClient::listInvocationStatus(const ListInvocationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInvocationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInvocationStatusOutcome(ListInvocationStatusResult(outcome.result()));
	else
		return ListInvocationStatusOutcome(outcome.error());
}

void EHPCClient::listInvocationStatusAsync(const ListInvocationStatusRequest& request, const ListInvocationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInvocationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListInvocationStatusOutcomeCallable EHPCClient::listInvocationStatusCallable(const ListInvocationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInvocationStatusOutcome()>>(
			[this, request]()
			{
			return this->listInvocationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ModifyImageGatewayConfigOutcome EHPCClient::modifyImageGatewayConfig(const ModifyImageGatewayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageGatewayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageGatewayConfigOutcome(ModifyImageGatewayConfigResult(outcome.result()));
	else
		return ModifyImageGatewayConfigOutcome(outcome.error());
}

void EHPCClient::modifyImageGatewayConfigAsync(const ModifyImageGatewayConfigRequest& request, const ModifyImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageGatewayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ModifyImageGatewayConfigOutcomeCallable EHPCClient::modifyImageGatewayConfigCallable(const ModifyImageGatewayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageGatewayConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyImageGatewayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListContainerAppsOutcome EHPCClient::listContainerApps(const ListContainerAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContainerAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContainerAppsOutcome(ListContainerAppsResult(outcome.result()));
	else
		return ListContainerAppsOutcome(outcome.error());
}

void EHPCClient::listContainerAppsAsync(const ListContainerAppsRequest& request, const ListContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContainerApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListContainerAppsOutcomeCallable EHPCClient::listContainerAppsCallable(const ListContainerAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContainerAppsOutcome()>>(
			[this, request]()
			{
			return this->listContainerApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SetJobUserOutcome EHPCClient::setJobUser(const SetJobUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetJobUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetJobUserOutcome(SetJobUserResult(outcome.result()));
	else
		return SetJobUserOutcome(outcome.error());
}

void EHPCClient::setJobUserAsync(const SetJobUserRequest& request, const SetJobUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setJobUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SetJobUserOutcomeCallable EHPCClient::setJobUserCallable(const SetJobUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetJobUserOutcome()>>(
			[this, request]()
			{
			return this->setJobUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListClustersOutcome EHPCClient::listClusters(const ListClustersRequest &request) const
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

void EHPCClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListClustersOutcomeCallable EHPCClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::SubmitJobOutcome EHPCClient::submitJob(const SubmitJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitJobOutcome(SubmitJobResult(outcome.result()));
	else
		return SubmitJobOutcome(outcome.error());
}

void EHPCClient::submitJobAsync(const SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::SubmitJobOutcomeCallable EHPCClient::submitJobCallable(const SubmitJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitJobOutcome()>>(
			[this, request]()
			{
			return this->submitJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListRegionsOutcome EHPCClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void EHPCClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListRegionsOutcomeCallable EHPCClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::DescribeAutoScaleConfigOutcome EHPCClient::describeAutoScaleConfig(const DescribeAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoScaleConfigOutcome(DescribeAutoScaleConfigResult(outcome.result()));
	else
		return DescribeAutoScaleConfigOutcome(outcome.error());
}

void EHPCClient::describeAutoScaleConfigAsync(const DescribeAutoScaleConfigRequest& request, const DescribeAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::DescribeAutoScaleConfigOutcomeCallable EHPCClient::describeAutoScaleConfigCallable(const DescribeAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::RerunJobsOutcome EHPCClient::rerunJobs(const RerunJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunJobsOutcome(RerunJobsResult(outcome.result()));
	else
		return RerunJobsOutcome(outcome.error());
}

void EHPCClient::rerunJobsAsync(const RerunJobsRequest& request, const RerunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::RerunJobsOutcomeCallable EHPCClient::rerunJobsCallable(const RerunJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunJobsOutcome()>>(
			[this, request]()
			{
			return this->rerunJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::EditJobTemplateOutcome EHPCClient::editJobTemplate(const EditJobTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditJobTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditJobTemplateOutcome(EditJobTemplateResult(outcome.result()));
	else
		return EditJobTemplateOutcome(outcome.error());
}

void EHPCClient::editJobTemplateAsync(const EditJobTemplateRequest& request, const EditJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editJobTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::EditJobTemplateOutcomeCallable EHPCClient::editJobTemplateCallable(const EditJobTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditJobTemplateOutcome()>>(
			[this, request]()
			{
			return this->editJobTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddLocalNodesOutcome EHPCClient::addLocalNodes(const AddLocalNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLocalNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLocalNodesOutcome(AddLocalNodesResult(outcome.result()));
	else
		return AddLocalNodesOutcome(outcome.error());
}

void EHPCClient::addLocalNodesAsync(const AddLocalNodesRequest& request, const AddLocalNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLocalNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddLocalNodesOutcomeCallable EHPCClient::addLocalNodesCallable(const AddLocalNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLocalNodesOutcome()>>(
			[this, request]()
			{
			return this->addLocalNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListPreferredEcsTypesOutcome EHPCClient::listPreferredEcsTypes(const ListPreferredEcsTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPreferredEcsTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPreferredEcsTypesOutcome(ListPreferredEcsTypesResult(outcome.result()));
	else
		return ListPreferredEcsTypesOutcome(outcome.error());
}

void EHPCClient::listPreferredEcsTypesAsync(const ListPreferredEcsTypesRequest& request, const ListPreferredEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPreferredEcsTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListPreferredEcsTypesOutcomeCallable EHPCClient::listPreferredEcsTypesCallable(const ListPreferredEcsTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPreferredEcsTypesOutcome()>>(
			[this, request]()
			{
			return this->listPreferredEcsTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::AddContainerAppOutcome EHPCClient::addContainerApp(const AddContainerAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddContainerAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddContainerAppOutcome(AddContainerAppResult(outcome.result()));
	else
		return AddContainerAppOutcome(outcome.error());
}

void EHPCClient::addContainerAppAsync(const AddContainerAppRequest& request, const AddContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addContainerApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::AddContainerAppOutcomeCallable EHPCClient::addContainerAppCallable(const AddContainerAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddContainerAppOutcome()>>(
			[this, request]()
			{
			return this->addContainerApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::ListClusterLogsOutcome EHPCClient::listClusterLogs(const ListClusterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterLogsOutcome(ListClusterLogsResult(outcome.result()));
	else
		return ListClusterLogsOutcome(outcome.error());
}

void EHPCClient::listClusterLogsAsync(const ListClusterLogsRequest& request, const ListClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::ListClusterLogsOutcomeCallable EHPCClient::listClusterLogsCallable(const ListClusterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterLogsOutcome()>>(
			[this, request]()
			{
			return this->listClusterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EHPCClient::RecoverClusterOutcome EHPCClient::recoverCluster(const RecoverClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverClusterOutcome(RecoverClusterResult(outcome.result()));
	else
		return RecoverClusterOutcome(outcome.error());
}

void EHPCClient::recoverClusterAsync(const RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EHPCClient::RecoverClusterOutcomeCallable EHPCClient::recoverClusterCallable(const RecoverClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverClusterOutcome()>>(
			[this, request]()
			{
			return this->recoverCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

