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

#include <alibabacloud/adcp/AdcpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

namespace
{
	const std::string SERVICE_NAME = "adcp";
}

AdcpClient::AdcpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "adcp");
}

AdcpClient::AdcpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "adcp");
}

AdcpClient::AdcpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "adcp");
}

AdcpClient::~AdcpClient()
{}

AdcpClient::AttachClusterToHubOutcome AdcpClient::attachClusterToHub(const AttachClusterToHubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachClusterToHubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachClusterToHubOutcome(AttachClusterToHubResult(outcome.result()));
	else
		return AttachClusterToHubOutcome(outcome.error());
}

void AdcpClient::attachClusterToHubAsync(const AttachClusterToHubRequest& request, const AttachClusterToHubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachClusterToHub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::AttachClusterToHubOutcomeCallable AdcpClient::attachClusterToHubCallable(const AttachClusterToHubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachClusterToHubOutcome()>>(
			[this, request]()
			{
			return this->attachClusterToHub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::CreateHubClusterOutcome AdcpClient::createHubCluster(const CreateHubClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHubClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHubClusterOutcome(CreateHubClusterResult(outcome.result()));
	else
		return CreateHubClusterOutcome(outcome.error());
}

void AdcpClient::createHubClusterAsync(const CreateHubClusterRequest& request, const CreateHubClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHubCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::CreateHubClusterOutcomeCallable AdcpClient::createHubClusterCallable(const CreateHubClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHubClusterOutcome()>>(
			[this, request]()
			{
			return this->createHubCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DeleteHubClusterOutcome AdcpClient::deleteHubCluster(const DeleteHubClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHubClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHubClusterOutcome(DeleteHubClusterResult(outcome.result()));
	else
		return DeleteHubClusterOutcome(outcome.error());
}

void AdcpClient::deleteHubClusterAsync(const DeleteHubClusterRequest& request, const DeleteHubClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHubCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DeleteHubClusterOutcomeCallable AdcpClient::deleteHubClusterCallable(const DeleteHubClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHubClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteHubCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DeletePolicyInstanceOutcome AdcpClient::deletePolicyInstance(const DeletePolicyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyInstanceOutcome(DeletePolicyInstanceResult(outcome.result()));
	else
		return DeletePolicyInstanceOutcome(outcome.error());
}

void AdcpClient::deletePolicyInstanceAsync(const DeletePolicyInstanceRequest& request, const DeletePolicyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DeletePolicyInstanceOutcomeCallable AdcpClient::deletePolicyInstanceCallable(const DeletePolicyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyInstanceOutcome()>>(
			[this, request]()
			{
			return this->deletePolicyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DeleteUserPermissionOutcome AdcpClient::deleteUserPermission(const DeleteUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserPermissionOutcome(DeleteUserPermissionResult(outcome.result()));
	else
		return DeleteUserPermissionOutcome(outcome.error());
}

void AdcpClient::deleteUserPermissionAsync(const DeleteUserPermissionRequest& request, const DeleteUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DeleteUserPermissionOutcomeCallable AdcpClient::deleteUserPermissionCallable(const DeleteUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->deleteUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DeployPolicyInstanceOutcome AdcpClient::deployPolicyInstance(const DeployPolicyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployPolicyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployPolicyInstanceOutcome(DeployPolicyInstanceResult(outcome.result()));
	else
		return DeployPolicyInstanceOutcome(outcome.error());
}

void AdcpClient::deployPolicyInstanceAsync(const DeployPolicyInstanceRequest& request, const DeployPolicyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployPolicyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DeployPolicyInstanceOutcomeCallable AdcpClient::deployPolicyInstanceCallable(const DeployPolicyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployPolicyInstanceOutcome()>>(
			[this, request]()
			{
			return this->deployPolicyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeHubClusterDetailsOutcome AdcpClient::describeHubClusterDetails(const DescribeHubClusterDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHubClusterDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHubClusterDetailsOutcome(DescribeHubClusterDetailsResult(outcome.result()));
	else
		return DescribeHubClusterDetailsOutcome(outcome.error());
}

void AdcpClient::describeHubClusterDetailsAsync(const DescribeHubClusterDetailsRequest& request, const DescribeHubClusterDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHubClusterDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeHubClusterDetailsOutcomeCallable AdcpClient::describeHubClusterDetailsCallable(const DescribeHubClusterDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHubClusterDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeHubClusterDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeHubClusterKubeconfigOutcome AdcpClient::describeHubClusterKubeconfig(const DescribeHubClusterKubeconfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHubClusterKubeconfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHubClusterKubeconfigOutcome(DescribeHubClusterKubeconfigResult(outcome.result()));
	else
		return DescribeHubClusterKubeconfigOutcome(outcome.error());
}

void AdcpClient::describeHubClusterKubeconfigAsync(const DescribeHubClusterKubeconfigRequest& request, const DescribeHubClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHubClusterKubeconfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeHubClusterKubeconfigOutcomeCallable AdcpClient::describeHubClusterKubeconfigCallable(const DescribeHubClusterKubeconfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHubClusterKubeconfigOutcome()>>(
			[this, request]()
			{
			return this->describeHubClusterKubeconfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeHubClusterLogsOutcome AdcpClient::describeHubClusterLogs(const DescribeHubClusterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHubClusterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHubClusterLogsOutcome(DescribeHubClusterLogsResult(outcome.result()));
	else
		return DescribeHubClusterLogsOutcome(outcome.error());
}

void AdcpClient::describeHubClusterLogsAsync(const DescribeHubClusterLogsRequest& request, const DescribeHubClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHubClusterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeHubClusterLogsOutcomeCallable AdcpClient::describeHubClusterLogsCallable(const DescribeHubClusterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHubClusterLogsOutcome()>>(
			[this, request]()
			{
			return this->describeHubClusterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeHubClustersOutcome AdcpClient::describeHubClusters(const DescribeHubClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHubClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHubClustersOutcome(DescribeHubClustersResult(outcome.result()));
	else
		return DescribeHubClustersOutcome(outcome.error());
}

void AdcpClient::describeHubClustersAsync(const DescribeHubClustersRequest& request, const DescribeHubClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHubClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeHubClustersOutcomeCallable AdcpClient::describeHubClustersCallable(const DescribeHubClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHubClustersOutcome()>>(
			[this, request]()
			{
			return this->describeHubClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeManagedClustersOutcome AdcpClient::describeManagedClusters(const DescribeManagedClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeManagedClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeManagedClustersOutcome(DescribeManagedClustersResult(outcome.result()));
	else
		return DescribeManagedClustersOutcome(outcome.error());
}

void AdcpClient::describeManagedClustersAsync(const DescribeManagedClustersRequest& request, const DescribeManagedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeManagedClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeManagedClustersOutcomeCallable AdcpClient::describeManagedClustersCallable(const DescribeManagedClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeManagedClustersOutcome()>>(
			[this, request]()
			{
			return this->describeManagedClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribePoliciesOutcome AdcpClient::describePolicies(const DescribePoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePoliciesOutcome(DescribePoliciesResult(outcome.result()));
	else
		return DescribePoliciesOutcome(outcome.error());
}

void AdcpClient::describePoliciesAsync(const DescribePoliciesRequest& request, const DescribePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribePoliciesOutcomeCallable AdcpClient::describePoliciesCallable(const DescribePoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePoliciesOutcome()>>(
			[this, request]()
			{
			return this->describePolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribePolicyDetailsOutcome AdcpClient::describePolicyDetails(const DescribePolicyDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyDetailsOutcome(DescribePolicyDetailsResult(outcome.result()));
	else
		return DescribePolicyDetailsOutcome(outcome.error());
}

void AdcpClient::describePolicyDetailsAsync(const DescribePolicyDetailsRequest& request, const DescribePolicyDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicyDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribePolicyDetailsOutcomeCallable AdcpClient::describePolicyDetailsCallable(const DescribePolicyDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyDetailsOutcome()>>(
			[this, request]()
			{
			return this->describePolicyDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribePolicyGovernanceInClusterOutcome AdcpClient::describePolicyGovernanceInCluster(const DescribePolicyGovernanceInClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyGovernanceInClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyGovernanceInClusterOutcome(DescribePolicyGovernanceInClusterResult(outcome.result()));
	else
		return DescribePolicyGovernanceInClusterOutcome(outcome.error());
}

void AdcpClient::describePolicyGovernanceInClusterAsync(const DescribePolicyGovernanceInClusterRequest& request, const DescribePolicyGovernanceInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicyGovernanceInCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribePolicyGovernanceInClusterOutcomeCallable AdcpClient::describePolicyGovernanceInClusterCallable(const DescribePolicyGovernanceInClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyGovernanceInClusterOutcome()>>(
			[this, request]()
			{
			return this->describePolicyGovernanceInCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribePolicyInstancesOutcome AdcpClient::describePolicyInstances(const DescribePolicyInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyInstancesOutcome(DescribePolicyInstancesResult(outcome.result()));
	else
		return DescribePolicyInstancesOutcome(outcome.error());
}

void AdcpClient::describePolicyInstancesAsync(const DescribePolicyInstancesRequest& request, const DescribePolicyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicyInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribePolicyInstancesOutcomeCallable AdcpClient::describePolicyInstancesCallable(const DescribePolicyInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyInstancesOutcome()>>(
			[this, request]()
			{
			return this->describePolicyInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribePolicyInstancesStatusOutcome AdcpClient::describePolicyInstancesStatus(const DescribePolicyInstancesStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyInstancesStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyInstancesStatusOutcome(DescribePolicyInstancesStatusResult(outcome.result()));
	else
		return DescribePolicyInstancesStatusOutcome(outcome.error());
}

void AdcpClient::describePolicyInstancesStatusAsync(const DescribePolicyInstancesStatusRequest& request, const DescribePolicyInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicyInstancesStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribePolicyInstancesStatusOutcomeCallable AdcpClient::describePolicyInstancesStatusCallable(const DescribePolicyInstancesStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyInstancesStatusOutcome()>>(
			[this, request]()
			{
			return this->describePolicyInstancesStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeRegionsOutcome AdcpClient::describeRegions(const DescribeRegionsRequest &request) const
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

void AdcpClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeRegionsOutcomeCallable AdcpClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DescribeUserPermissionsOutcome AdcpClient::describeUserPermissions(const DescribeUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserPermissionsOutcome(DescribeUserPermissionsResult(outcome.result()));
	else
		return DescribeUserPermissionsOutcome(outcome.error());
}

void AdcpClient::describeUserPermissionsAsync(const DescribeUserPermissionsRequest& request, const DescribeUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DescribeUserPermissionsOutcomeCallable AdcpClient::describeUserPermissionsCallable(const DescribeUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->describeUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::DetachClusterFromHubOutcome AdcpClient::detachClusterFromHub(const DetachClusterFromHubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachClusterFromHubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachClusterFromHubOutcome(DetachClusterFromHubResult(outcome.result()));
	else
		return DetachClusterFromHubOutcome(outcome.error());
}

void AdcpClient::detachClusterFromHubAsync(const DetachClusterFromHubRequest& request, const DetachClusterFromHubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachClusterFromHub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::DetachClusterFromHubOutcomeCallable AdcpClient::detachClusterFromHubCallable(const DetachClusterFromHubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachClusterFromHubOutcome()>>(
			[this, request]()
			{
			return this->detachClusterFromHub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::GrantUserPermissionOutcome AdcpClient::grantUserPermission(const GrantUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantUserPermissionOutcome(GrantUserPermissionResult(outcome.result()));
	else
		return GrantUserPermissionOutcome(outcome.error());
}

void AdcpClient::grantUserPermissionAsync(const GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::GrantUserPermissionOutcomeCallable AdcpClient::grantUserPermissionCallable(const GrantUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::GrantUserPermissionsOutcome AdcpClient::grantUserPermissions(const GrantUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantUserPermissionsOutcome(GrantUserPermissionsResult(outcome.result()));
	else
		return GrantUserPermissionsOutcome(outcome.error());
}

void AdcpClient::grantUserPermissionsAsync(const GrantUserPermissionsRequest& request, const GrantUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::GrantUserPermissionsOutcomeCallable AdcpClient::grantUserPermissionsCallable(const GrantUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->grantUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::UpdateHubClusterFeatureOutcome AdcpClient::updateHubClusterFeature(const UpdateHubClusterFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHubClusterFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHubClusterFeatureOutcome(UpdateHubClusterFeatureResult(outcome.result()));
	else
		return UpdateHubClusterFeatureOutcome(outcome.error());
}

void AdcpClient::updateHubClusterFeatureAsync(const UpdateHubClusterFeatureRequest& request, const UpdateHubClusterFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHubClusterFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::UpdateHubClusterFeatureOutcomeCallable AdcpClient::updateHubClusterFeatureCallable(const UpdateHubClusterFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHubClusterFeatureOutcome()>>(
			[this, request]()
			{
			return this->updateHubClusterFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdcpClient::UpdateUserPermissionOutcome AdcpClient::updateUserPermission(const UpdateUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserPermissionOutcome(UpdateUserPermissionResult(outcome.result()));
	else
		return UpdateUserPermissionOutcome(outcome.error());
}

void AdcpClient::updateUserPermissionAsync(const UpdateUserPermissionRequest& request, const UpdateUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdcpClient::UpdateUserPermissionOutcomeCallable AdcpClient::updateUserPermissionCallable(const UpdateUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->updateUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

