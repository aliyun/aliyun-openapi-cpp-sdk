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

#include <alibabacloud/cs/CSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

namespace
{
	const std::string SERVICE_NAME = "CS";
}

CSClient::CSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cs");
}

CSClient::CSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cs");
}

CSClient::CSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cs");
}

CSClient::~CSClient()
{}

CSClient::AttachInstancesOutcome CSClient::attachInstances(const AttachInstancesRequest &request) const
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

void CSClient::attachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::AttachInstancesOutcomeCallable CSClient::attachInstancesCallable(const AttachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CheckAliyunCSServiceRoleOutcome CSClient::checkAliyunCSServiceRole(const CheckAliyunCSServiceRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAliyunCSServiceRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAliyunCSServiceRoleOutcome(CheckAliyunCSServiceRoleResult(outcome.result()));
	else
		return CheckAliyunCSServiceRoleOutcome(outcome.error());
}

void CSClient::checkAliyunCSServiceRoleAsync(const CheckAliyunCSServiceRoleRequest& request, const CheckAliyunCSServiceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAliyunCSServiceRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CheckAliyunCSServiceRoleOutcomeCallable CSClient::checkAliyunCSServiceRoleCallable(const CheckAliyunCSServiceRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAliyunCSServiceRoleOutcome()>>(
			[this, request]()
			{
			return this->checkAliyunCSServiceRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateClusterOutcome CSClient::createCluster(const CreateClusterRequest &request) const
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

void CSClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateClusterOutcomeCallable CSClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateClusterByResourcesGroupOutcome CSClient::createClusterByResourcesGroup(const CreateClusterByResourcesGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterByResourcesGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterByResourcesGroupOutcome(CreateClusterByResourcesGroupResult(outcome.result()));
	else
		return CreateClusterByResourcesGroupOutcome(outcome.error());
}

void CSClient::createClusterByResourcesGroupAsync(const CreateClusterByResourcesGroupRequest& request, const CreateClusterByResourcesGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterByResourcesGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateClusterByResourcesGroupOutcomeCallable CSClient::createClusterByResourcesGroupCallable(const CreateClusterByResourcesGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterByResourcesGroupOutcome()>>(
			[this, request]()
			{
			return this->createClusterByResourcesGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterOutcome CSClient::deleteCluster(const DeleteClusterRequest &request) const
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

void CSClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterOutcomeCallable CSClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterNodeOutcome CSClient::deleteClusterNode(const DeleteClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterNodeOutcome(DeleteClusterNodeResult(outcome.result()));
	else
		return DeleteClusterNodeOutcome(outcome.error());
}

void CSClient::deleteClusterNodeAsync(const DeleteClusterNodeRequest& request, const DeleteClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterNodeOutcomeCallable CSClient::deleteClusterNodeCallable(const DeleteClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterNodesOutcome CSClient::deleteClusterNodes(const DeleteClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterNodesOutcome(DeleteClusterNodesResult(outcome.result()));
	else
		return DeleteClusterNodesOutcome(outcome.error());
}

void CSClient::deleteClusterNodesAsync(const DeleteClusterNodesRequest& request, const DeleteClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterNodesOutcomeCallable CSClient::deleteClusterNodesCallable(const DeleteClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeApiVersionOutcome CSClient::describeApiVersion(const DescribeApiVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiVersionOutcome(DescribeApiVersionResult(outcome.result()));
	else
		return DescribeApiVersionOutcome(outcome.error());
}

void CSClient::describeApiVersionAsync(const DescribeApiVersionRequest& request, const DescribeApiVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeApiVersionOutcomeCallable CSClient::describeApiVersionCallable(const DescribeApiVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiVersionOutcome()>>(
			[this, request]()
			{
			return this->describeApiVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterAttachScriptsOutcome CSClient::describeClusterAttachScripts(const DescribeClusterAttachScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAttachScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAttachScriptsOutcome(DescribeClusterAttachScriptsResult(outcome.result()));
	else
		return DescribeClusterAttachScriptsOutcome(outcome.error());
}

void CSClient::describeClusterAttachScriptsAsync(const DescribeClusterAttachScriptsRequest& request, const DescribeClusterAttachScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAttachScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterAttachScriptsOutcomeCallable CSClient::describeClusterAttachScriptsCallable(const DescribeClusterAttachScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAttachScriptsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAttachScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterCertsOutcome CSClient::describeClusterCerts(const DescribeClusterCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterCertsOutcome(DescribeClusterCertsResult(outcome.result()));
	else
		return DescribeClusterCertsOutcome(outcome.error());
}

void CSClient::describeClusterCertsAsync(const DescribeClusterCertsRequest& request, const DescribeClusterCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterCertsOutcomeCallable CSClient::describeClusterCertsCallable(const DescribeClusterCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterCertsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterDetailOutcome CSClient::describeClusterDetail(const DescribeClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterDetailOutcome(DescribeClusterDetailResult(outcome.result()));
	else
		return DescribeClusterDetailOutcome(outcome.error());
}

void CSClient::describeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterDetailOutcomeCallable CSClient::describeClusterDetailCallable(const DescribeClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->describeClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterEndpointsOutcome CSClient::describeClusterEndpoints(const DescribeClusterEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterEndpointsOutcome(DescribeClusterEndpointsResult(outcome.result()));
	else
		return DescribeClusterEndpointsOutcome(outcome.error());
}

void CSClient::describeClusterEndpointsAsync(const DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterEndpointsOutcomeCallable CSClient::describeClusterEndpointsCallable(const DescribeClusterEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterLogsOutcome CSClient::describeClusterLogs(const DescribeClusterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterLogsOutcome(DescribeClusterLogsResult(outcome.result()));
	else
		return DescribeClusterLogsOutcome(outcome.error());
}

void CSClient::describeClusterLogsAsync(const DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterLogsOutcomeCallable CSClient::describeClusterLogsCallable(const DescribeClusterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterLogsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterNodesOutcome CSClient::describeClusterNodes(const DescribeClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNodesOutcome(DescribeClusterNodesResult(outcome.result()));
	else
		return DescribeClusterNodesOutcome(outcome.error());
}

void CSClient::describeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterNodesOutcomeCallable CSClient::describeClusterNodesCallable(const DescribeClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterUserKubeconfigOutcome CSClient::describeClusterUserKubeconfig(const DescribeClusterUserKubeconfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterUserKubeconfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterUserKubeconfigOutcome(DescribeClusterUserKubeconfigResult(outcome.result()));
	else
		return DescribeClusterUserKubeconfigOutcome(outcome.error());
}

void CSClient::describeClusterUserKubeconfigAsync(const DescribeClusterUserKubeconfigRequest& request, const DescribeClusterUserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterUserKubeconfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterUserKubeconfigOutcomeCallable CSClient::describeClusterUserKubeconfigCallable(const DescribeClusterUserKubeconfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterUserKubeconfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterUserKubeconfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterV2UserKubeconfigOutcome CSClient::describeClusterV2UserKubeconfig(const DescribeClusterV2UserKubeconfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterV2UserKubeconfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterV2UserKubeconfigOutcome(DescribeClusterV2UserKubeconfigResult(outcome.result()));
	else
		return DescribeClusterV2UserKubeconfigOutcome(outcome.error());
}

void CSClient::describeClusterV2UserKubeconfigAsync(const DescribeClusterV2UserKubeconfigRequest& request, const DescribeClusterV2UserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterV2UserKubeconfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterV2UserKubeconfigOutcomeCallable CSClient::describeClusterV2UserKubeconfigCallable(const DescribeClusterV2UserKubeconfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterV2UserKubeconfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterV2UserKubeconfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClustersOutcome CSClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersOutcome(DescribeClustersResult(outcome.result()));
	else
		return DescribeClustersOutcome(outcome.error());
}

void CSClient::describeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClustersOutcomeCallable CSClient::describeClustersCallable(const DescribeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
			[this, request]()
			{
			return this->describeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DownloadClusterNodeCertsOutcome CSClient::downloadClusterNodeCerts(const DownloadClusterNodeCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadClusterNodeCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadClusterNodeCertsOutcome(DownloadClusterNodeCertsResult(outcome.result()));
	else
		return DownloadClusterNodeCertsOutcome(outcome.error());
}

void CSClient::downloadClusterNodeCertsAsync(const DownloadClusterNodeCertsRequest& request, const DownloadClusterNodeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadClusterNodeCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DownloadClusterNodeCertsOutcomeCallable CSClient::downloadClusterNodeCertsCallable(const DownloadClusterNodeCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadClusterNodeCertsOutcome()>>(
			[this, request]()
			{
			return this->downloadClusterNodeCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ModifyClusterOutcome CSClient::modifyCluster(const ModifyClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterOutcome(ModifyClusterResult(outcome.result()));
	else
		return ModifyClusterOutcome(outcome.error());
}

void CSClient::modifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ModifyClusterOutcomeCallable CSClient::modifyClusterCallable(const ModifyClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ResetClusterNodeOutcome CSClient::resetClusterNode(const ResetClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetClusterNodeOutcome(ResetClusterNodeResult(outcome.result()));
	else
		return ResetClusterNodeOutcome(outcome.error());
}

void CSClient::resetClusterNodeAsync(const ResetClusterNodeRequest& request, const ResetClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ResetClusterNodeOutcomeCallable CSClient::resetClusterNodeCallable(const ResetClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->resetClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::RevokeClusterTokenOutcome CSClient::revokeClusterToken(const RevokeClusterTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeClusterTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeClusterTokenOutcome(RevokeClusterTokenResult(outcome.result()));
	else
		return RevokeClusterTokenOutcome(outcome.error());
}

void CSClient::revokeClusterTokenAsync(const RevokeClusterTokenRequest& request, const RevokeClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeClusterToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::RevokeClusterTokenOutcomeCallable CSClient::revokeClusterTokenCallable(const RevokeClusterTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeClusterTokenOutcome()>>(
			[this, request]()
			{
			return this->revokeClusterToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ScaleClusterOutcome CSClient::scaleCluster(const ScaleClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleClusterOutcome(ScaleClusterResult(outcome.result()));
	else
		return ScaleClusterOutcome(outcome.error());
}

void CSClient::scaleClusterAsync(const ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ScaleClusterOutcomeCallable CSClient::scaleClusterCallable(const ScaleClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleClusterOutcome()>>(
			[this, request]()
			{
			return this->scaleCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ScaleOutClusterOutcome CSClient::scaleOutCluster(const ScaleOutClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleOutClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleOutClusterOutcome(ScaleOutClusterResult(outcome.result()));
	else
		return ScaleOutClusterOutcome(outcome.error());
}

void CSClient::scaleOutClusterAsync(const ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleOutCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ScaleOutClusterOutcomeCallable CSClient::scaleOutClusterCallable(const ScaleOutClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleOutClusterOutcome()>>(
			[this, request]()
			{
			return this->scaleOutCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpdateK8sClusterUserConfigExpireOutcome CSClient::updateK8sClusterUserConfigExpire(const UpdateK8sClusterUserConfigExpireRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sClusterUserConfigExpireOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sClusterUserConfigExpireOutcome(UpdateK8sClusterUserConfigExpireResult(outcome.result()));
	else
		return UpdateK8sClusterUserConfigExpireOutcome(outcome.error());
}

void CSClient::updateK8sClusterUserConfigExpireAsync(const UpdateK8sClusterUserConfigExpireRequest& request, const UpdateK8sClusterUserConfigExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sClusterUserConfigExpire(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpdateK8sClusterUserConfigExpireOutcomeCallable CSClient::updateK8sClusterUserConfigExpireCallable(const UpdateK8sClusterUserConfigExpireRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sClusterUserConfigExpireOutcome()>>(
			[this, request]()
			{
			return this->updateK8sClusterUserConfigExpire(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

