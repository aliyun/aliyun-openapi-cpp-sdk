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

#include <alibabacloud/hbase/HBaseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

namespace
{
	const std::string SERVICE_NAME = "HBase";
}

HBaseClient::HBaseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HBaseClient::HBaseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HBaseClient::HBaseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HBaseClient::~HBaseClient()
{}

HBaseClient::AddUserHdfsInfoOutcome HBaseClient::addUserHdfsInfo(const AddUserHdfsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserHdfsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserHdfsInfoOutcome(AddUserHdfsInfoResult(outcome.result()));
	else
		return AddUserHdfsInfoOutcome(outcome.error());
}

void HBaseClient::addUserHdfsInfoAsync(const AddUserHdfsInfoRequest& request, const AddUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserHdfsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::AddUserHdfsInfoOutcomeCallable HBaseClient::addUserHdfsInfoCallable(const AddUserHdfsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserHdfsInfoOutcome()>>(
			[this, request]()
			{
			return this->addUserHdfsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ConvertInstanceOutcome HBaseClient::convertInstance(const ConvertInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertInstanceOutcome(ConvertInstanceResult(outcome.result()));
	else
		return ConvertInstanceOutcome(outcome.error());
}

void HBaseClient::convertInstanceAsync(const ConvertInstanceRequest& request, const ConvertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ConvertInstanceOutcomeCallable HBaseClient::convertInstanceCallable(const ConvertInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertInstanceOutcome()>>(
			[this, request]()
			{
			return this->convertInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateClusterOutcome HBaseClient::createCluster(const CreateClusterRequest &request) const
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

void HBaseClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateClusterOutcomeCallable HBaseClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateHbaseHaSlbOutcome HBaseClient::createHbaseHaSlb(const CreateHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHbaseHaSlbOutcome(CreateHbaseHaSlbResult(outcome.result()));
	else
		return CreateHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::createHbaseHaSlbAsync(const CreateHbaseHaSlbRequest& request, const CreateHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateHbaseHaSlbOutcomeCallable HBaseClient::createHbaseHaSlbCallable(const CreateHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->createHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateInstanceOutcome HBaseClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void HBaseClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateInstanceOutcomeCallable HBaseClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteHbaseHaSlbOutcome HBaseClient::deleteHbaseHaSlb(const DeleteHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHbaseHaSlbOutcome(DeleteHbaseHaSlbResult(outcome.result()));
	else
		return DeleteHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::deleteHbaseHaSlbAsync(const DeleteHbaseHaSlbRequest& request, const DeleteHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteHbaseHaSlbOutcomeCallable HBaseClient::deleteHbaseHaSlbCallable(const DeleteHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->deleteHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteInstanceOutcome HBaseClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void HBaseClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteInstanceOutcomeCallable HBaseClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteUserHdfsInfoOutcome HBaseClient::deleteUserHdfsInfo(const DeleteUserHdfsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserHdfsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserHdfsInfoOutcome(DeleteUserHdfsInfoResult(outcome.result()));
	else
		return DeleteUserHdfsInfoOutcome(outcome.error());
}

void HBaseClient::deleteUserHdfsInfoAsync(const DeleteUserHdfsInfoRequest& request, const DeleteUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserHdfsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteUserHdfsInfoOutcomeCallable HBaseClient::deleteUserHdfsInfoCallable(const DeleteUserHdfsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserHdfsInfoOutcome()>>(
			[this, request]()
			{
			return this->deleteUserHdfsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeDBInstanceUsageOutcome HBaseClient::describeDBInstanceUsage(const DescribeDBInstanceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceUsageOutcome(DescribeDBInstanceUsageResult(outcome.result()));
	else
		return DescribeDBInstanceUsageOutcome(outcome.error());
}

void HBaseClient::describeDBInstanceUsageAsync(const DescribeDBInstanceUsageRequest& request, const DescribeDBInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeDBInstanceUsageOutcomeCallable HBaseClient::describeDBInstanceUsageCallable(const DescribeDBInstanceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeEndpointsOutcome HBaseClient::describeEndpoints(const DescribeEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEndpointsOutcome(DescribeEndpointsResult(outcome.result()));
	else
		return DescribeEndpointsOutcome(outcome.error());
}

void HBaseClient::describeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeEndpointsOutcomeCallable HBaseClient::describeEndpointsCallable(const DescribeEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstanceOutcome HBaseClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void HBaseClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstanceOutcomeCallable HBaseClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstanceTypeOutcome HBaseClient::describeInstanceType(const DescribeInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTypeOutcome(DescribeInstanceTypeResult(outcome.result()));
	else
		return DescribeInstanceTypeOutcome(outcome.error());
}

void HBaseClient::describeInstanceTypeAsync(const DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstanceTypeOutcomeCallable HBaseClient::describeInstanceTypeCallable(const DescribeInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstancesOutcome HBaseClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void HBaseClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstancesOutcomeCallable HBaseClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeIpWhitelistOutcome HBaseClient::describeIpWhitelist(const DescribeIpWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpWhitelistOutcome(DescribeIpWhitelistResult(outcome.result()));
	else
		return DescribeIpWhitelistOutcome(outcome.error());
}

void HBaseClient::describeIpWhitelistAsync(const DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeIpWhitelistOutcomeCallable HBaseClient::describeIpWhitelistCallable(const DescribeIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRegionsOutcome HBaseClient::describeRegions(const DescribeRegionsRequest &request) const
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

void HBaseClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRegionsOutcomeCallable HBaseClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeSecurityGroupsOutcome HBaseClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupsOutcome(DescribeSecurityGroupsResult(outcome.result()));
	else
		return DescribeSecurityGroupsOutcome(outcome.error());
}

void HBaseClient::describeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeSecurityGroupsOutcomeCallable HBaseClient::describeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ListTagResourcesOutcome HBaseClient::listTagResources(const ListTagResourcesRequest &request) const
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

void HBaseClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ListTagResourcesOutcomeCallable HBaseClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ListTagsOutcome HBaseClient::listTags(const ListTagsRequest &request) const
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

void HBaseClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ListTagsOutcomeCallable HBaseClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyClusterDeletionProtectionOutcome HBaseClient::modifyClusterDeletionProtection(const ModifyClusterDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterDeletionProtectionOutcome(ModifyClusterDeletionProtectionResult(outcome.result()));
	else
		return ModifyClusterDeletionProtectionOutcome(outcome.error());
}

void HBaseClient::modifyClusterDeletionProtectionAsync(const ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyClusterDeletionProtectionOutcomeCallable HBaseClient::modifyClusterDeletionProtectionCallable(const ModifyClusterDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyInstanceMaintainTimeOutcome HBaseClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(ModifyInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyInstanceMaintainTimeOutcome(outcome.error());
}

void HBaseClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyInstanceMaintainTimeOutcomeCallable HBaseClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyInstanceNameOutcome HBaseClient::modifyInstanceName(const ModifyInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNameOutcome(ModifyInstanceNameResult(outcome.result()));
	else
		return ModifyInstanceNameOutcome(outcome.error());
}

void HBaseClient::modifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyInstanceNameOutcomeCallable HBaseClient::modifyInstanceNameCallable(const ModifyInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyIpWhitelistOutcome HBaseClient::modifyIpWhitelist(const ModifyIpWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpWhitelistOutcome(ModifyIpWhitelistResult(outcome.result()));
	else
		return ModifyIpWhitelistOutcome(outcome.error());
}

void HBaseClient::modifyIpWhitelistAsync(const ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyIpWhitelistOutcomeCallable HBaseClient::modifyIpWhitelistCallable(const ModifyIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifySecurityGroupsOutcome HBaseClient::modifySecurityGroups(const ModifySecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupsOutcome(ModifySecurityGroupsResult(outcome.result()));
	else
		return ModifySecurityGroupsOutcome(outcome.error());
}

void HBaseClient::modifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifySecurityGroupsOutcomeCallable HBaseClient::modifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyUIAccountPasswordOutcome HBaseClient::modifyUIAccountPassword(const ModifyUIAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUIAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUIAccountPasswordOutcome(ModifyUIAccountPasswordResult(outcome.result()));
	else
		return ModifyUIAccountPasswordOutcome(outcome.error());
}

void HBaseClient::modifyUIAccountPasswordAsync(const ModifyUIAccountPasswordRequest& request, const ModifyUIAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUIAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyUIAccountPasswordOutcomeCallable HBaseClient::modifyUIAccountPasswordCallable(const ModifyUIAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUIAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyUIAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::QueryHBaseHaDBOutcome HBaseClient::queryHBaseHaDB(const QueryHBaseHaDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryHBaseHaDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryHBaseHaDBOutcome(QueryHBaseHaDBResult(outcome.result()));
	else
		return QueryHBaseHaDBOutcome(outcome.error());
}

void HBaseClient::queryHBaseHaDBAsync(const QueryHBaseHaDBRequest& request, const QueryHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryHBaseHaDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::QueryHBaseHaDBOutcomeCallable HBaseClient::queryHBaseHaDBCallable(const QueryHBaseHaDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryHBaseHaDBOutcome()>>(
			[this, request]()
			{
			return this->queryHBaseHaDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::QueryXpackRelateDBOutcome HBaseClient::queryXpackRelateDB(const QueryXpackRelateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryXpackRelateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryXpackRelateDBOutcome(QueryXpackRelateDBResult(outcome.result()));
	else
		return QueryXpackRelateDBOutcome(outcome.error());
}

void HBaseClient::queryXpackRelateDBAsync(const QueryXpackRelateDBRequest& request, const QueryXpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryXpackRelateDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::QueryXpackRelateDBOutcomeCallable HBaseClient::queryXpackRelateDBCallable(const QueryXpackRelateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryXpackRelateDBOutcome()>>(
			[this, request]()
			{
			return this->queryXpackRelateDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::RenewInstanceOutcome HBaseClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void HBaseClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::RenewInstanceOutcomeCallable HBaseClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeDiskSizeOutcome HBaseClient::resizeDiskSize(const ResizeDiskSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDiskSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDiskSizeOutcome(ResizeDiskSizeResult(outcome.result()));
	else
		return ResizeDiskSizeOutcome(outcome.error());
}

void HBaseClient::resizeDiskSizeAsync(const ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDiskSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeDiskSizeOutcomeCallable HBaseClient::resizeDiskSizeCallable(const ResizeDiskSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDiskSizeOutcome()>>(
			[this, request]()
			{
			return this->resizeDiskSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeNodeCountOutcome HBaseClient::resizeNodeCount(const ResizeNodeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeNodeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeNodeCountOutcome(ResizeNodeCountResult(outcome.result()));
	else
		return ResizeNodeCountOutcome(outcome.error());
}

void HBaseClient::resizeNodeCountAsync(const ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeNodeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeNodeCountOutcomeCallable HBaseClient::resizeNodeCountCallable(const ResizeNodeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeNodeCountOutcome()>>(
			[this, request]()
			{
			return this->resizeNodeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::RestartInstanceOutcome HBaseClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void HBaseClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::RestartInstanceOutcomeCallable HBaseClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::SwitchHbaseHaSlbOutcome HBaseClient::switchHbaseHaSlb(const SwitchHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchHbaseHaSlbOutcome(SwitchHbaseHaSlbResult(outcome.result()));
	else
		return SwitchHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::switchHbaseHaSlbAsync(const SwitchHbaseHaSlbRequest& request, const SwitchHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::SwitchHbaseHaSlbOutcomeCallable HBaseClient::switchHbaseHaSlbCallable(const SwitchHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->switchHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::TagResourcesOutcome HBaseClient::tagResources(const TagResourcesRequest &request) const
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

void HBaseClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::TagResourcesOutcomeCallable HBaseClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::UnTagResourcesOutcome HBaseClient::unTagResources(const UnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagResourcesOutcome(UnTagResourcesResult(outcome.result()));
	else
		return UnTagResourcesOutcome(outcome.error());
}

void HBaseClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::UnTagResourcesOutcomeCallable HBaseClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::XpackRelateDBOutcome HBaseClient::xpackRelateDB(const XpackRelateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return XpackRelateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return XpackRelateDBOutcome(XpackRelateDBResult(outcome.result()));
	else
		return XpackRelateDBOutcome(outcome.error());
}

void HBaseClient::xpackRelateDBAsync(const XpackRelateDBRequest& request, const XpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, xpackRelateDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::XpackRelateDBOutcomeCallable HBaseClient::xpackRelateDBCallable(const XpackRelateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<XpackRelateDBOutcome()>>(
			[this, request]()
			{
			return this->xpackRelateDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

