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

#include <alibabacloud/polardb/PolardbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

namespace
{
	const std::string SERVICE_NAME = "polardb";
}

PolardbClient::PolardbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::PolardbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::PolardbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::~PolardbClient()
{}

PolardbClient::ListTagResourcesOutcome PolardbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void PolardbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ListTagResourcesOutcomeCallable PolardbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteBackupOutcome PolardbClient::deleteBackup(const DeleteBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupOutcome(DeleteBackupResult(outcome.result()));
	else
		return DeleteBackupOutcome(outcome.error());
}

void PolardbClient::deleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteBackupOutcomeCallable PolardbClient::deleteBackupCallable(const DeleteBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupOutcome()>>(
			[this, request]()
			{
			return this->deleteBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDatabasesOutcome PolardbClient::describeDatabases(const DescribeDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabasesOutcome(DescribeDatabasesResult(outcome.result()));
	else
		return DescribeDatabasesOutcome(outcome.error());
}

void PolardbClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDatabasesOutcomeCallable PolardbClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterMigrationOutcome PolardbClient::describeDBClusterMigration(const DescribeDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterMigrationOutcome(DescribeDBClusterMigrationResult(outcome.result()));
	else
		return DescribeDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::describeDBClusterMigrationAsync(const DescribeDBClusterMigrationRequest& request, const DescribeDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterMigrationOutcomeCallable PolardbClient::describeDBClusterMigrationCallable(const DescribeDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::UntagResourcesOutcome PolardbClient::untagResources(const UntagResourcesRequest &request) const
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

void PolardbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UntagResourcesOutcomeCallable PolardbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAccountDescriptionOutcome PolardbClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionOutcome(ModifyAccountDescriptionResult(outcome.result()));
	else
		return ModifyAccountDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountDescriptionOutcomeCallable PolardbClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RevokeAccountPrivilegeOutcome PolardbClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(RevokeAccountPrivilegeResult(outcome.result()));
	else
		return RevokeAccountPrivilegeOutcome(outcome.error());
}

void PolardbClient::revokeAccountPrivilegeAsync(const RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RevokeAccountPrivilegeOutcomeCallable PolardbClient::revokeAccountPrivilegeCallable(const RevokeAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAutoRenewAttributeOutcome PolardbClient::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoRenewAttributeOutcome(ModifyAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyAutoRenewAttributeOutcome(outcome.error());
}

void PolardbClient::modifyAutoRenewAttributeAsync(const ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAutoRenewAttributeOutcomeCallable PolardbClient::modifyAutoRenewAttributeCallable(const ModifyAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::UnlockDBClusterDeletionOutcome PolardbClient::unlockDBClusterDeletion(const UnlockDBClusterDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockDBClusterDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockDBClusterDeletionOutcome(UnlockDBClusterDeletionResult(outcome.result()));
	else
		return UnlockDBClusterDeletionOutcome(outcome.error());
}

void PolardbClient::unlockDBClusterDeletionAsync(const UnlockDBClusterDeletionRequest& request, const UnlockDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockDBClusterDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UnlockDBClusterDeletionOutcomeCallable PolardbClient::unlockDBClusterDeletionCallable(const UnlockDBClusterDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockDBClusterDeletionOutcome()>>(
			[this, request]()
			{
			return this->unlockDBClusterDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterParametersOutcome PolardbClient::modifyDBClusterParameters(const ModifyDBClusterParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterParametersOutcome(ModifyDBClusterParametersResult(outcome.result()));
	else
		return ModifyDBClusterParametersOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterParametersAsync(const ModifyDBClusterParametersRequest& request, const ModifyDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterParametersOutcomeCallable PolardbClient::modifyDBClusterParametersCallable(const ModifyDBClusterParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodeClassOutcome PolardbClient::modifyDBNodeClass(const ModifyDBNodeClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeClassOutcome(ModifyDBNodeClassResult(outcome.result()));
	else
		return ModifyDBNodeClassOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeClassAsync(const ModifyDBNodeClassRequest& request, const ModifyDBNodeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeClassOutcomeCallable PolardbClient::modifyDBNodeClassCallable(const ModifyDBNodeClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeClassOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBClusterOutcome PolardbClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterOutcome(DeleteDBClusterResult(outcome.result()));
	else
		return DeleteDBClusterOutcome(outcome.error());
}

void PolardbClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBClusterOutcomeCallable PolardbClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBNodesOutcome PolardbClient::createDBNodes(const CreateDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBNodesOutcome(CreateDBNodesResult(outcome.result()));
	else
		return CreateDBNodesOutcome(outcome.error());
}

void PolardbClient::createDBNodesAsync(const CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBNodesOutcomeCallable PolardbClient::createDBNodesCallable(const CreateDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBNodesOutcome()>>(
			[this, request]()
			{
			return this->createDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RestartDBNodeOutcome PolardbClient::restartDBNode(const RestartDBNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBNodeOutcome(RestartDBNodeResult(outcome.result()));
	else
		return RestartDBNodeOutcome(outcome.error());
}

void PolardbClient::restartDBNodeAsync(const RestartDBNodeRequest& request, const RestartDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RestartDBNodeOutcomeCallable PolardbClient::restartDBNodeCallable(const RestartDBNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBNodeOutcome()>>(
			[this, request]()
			{
			return this->restartDBNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBClusterEndpointOutcome PolardbClient::createDBClusterEndpoint(const CreateDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterEndpointOutcome(CreateDBClusterEndpointResult(outcome.result()));
	else
		return CreateDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::createDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBClusterEndpointOutcomeCallable PolardbClient::createDBClusterEndpointCallable(const CreateDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->createDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateAccountOutcome PolardbClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void PolardbClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateAccountOutcomeCallable PolardbClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAccessWhitelistOutcome PolardbClient::describeDBClusterAccessWhitelist(const DescribeDBClusterAccessWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAccessWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAccessWhitelistOutcome(DescribeDBClusterAccessWhitelistResult(outcome.result()));
	else
		return DescribeDBClusterAccessWhitelistOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAccessWhitelistAsync(const DescribeDBClusterAccessWhitelistRequest& request, const DescribeDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAccessWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAccessWhitelistOutcomeCallable PolardbClient::describeDBClusterAccessWhitelistCallable(const DescribeDBClusterAccessWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAccessWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAccessWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBDescriptionOutcome PolardbClient::modifyDBDescription(const ModifyDBDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBDescriptionOutcome(ModifyDBDescriptionResult(outcome.result()));
	else
		return ModifyDBDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyDBDescriptionAsync(const ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBDescriptionOutcomeCallable PolardbClient::modifyDBDescriptionCallable(const ModifyDBDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBEndpointAddressOutcome PolardbClient::createDBEndpointAddress(const CreateDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBEndpointAddressOutcome(CreateDBEndpointAddressResult(outcome.result()));
	else
		return CreateDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::createDBEndpointAddressAsync(const CreateDBEndpointAddressRequest& request, const CreateDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBEndpointAddressOutcomeCallable PolardbClient::createDBEndpointAddressCallable(const CreateDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->createDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyBackupPolicyOutcome PolardbClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyOutcome(ModifyBackupPolicyResult(outcome.result()));
	else
		return ModifyBackupPolicyOutcome(outcome.error());
}

void PolardbClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyBackupPolicyOutcomeCallable PolardbClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBClusterOutcome PolardbClient::createDBCluster(const CreateDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterOutcome(CreateDBClusterResult(outcome.result()));
	else
		return CreateDBClusterOutcome(outcome.error());
}

void PolardbClient::createDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBClusterOutcomeCallable PolardbClient::createDBClusterCallable(const CreateDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterOutcome()>>(
			[this, request]()
			{
			return this->createDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::LockDBClusterDeletionOutcome PolardbClient::lockDBClusterDeletion(const LockDBClusterDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockDBClusterDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockDBClusterDeletionOutcome(LockDBClusterDeletionResult(outcome.result()));
	else
		return LockDBClusterDeletionOutcome(outcome.error());
}

void PolardbClient::lockDBClusterDeletionAsync(const LockDBClusterDeletionRequest& request, const LockDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockDBClusterDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::LockDBClusterDeletionOutcomeCallable PolardbClient::lockDBClusterDeletionCallable(const LockDBClusterDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockDBClusterDeletionOutcome()>>(
			[this, request]()
			{
			return this->lockDBClusterDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateBackupOutcome PolardbClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void PolardbClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateBackupOutcomeCallable PolardbClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAttributeOutcome PolardbClient::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAttributeOutcome(DescribeDBClusterAttributeResult(outcome.result()));
	else
		return DescribeDBClusterAttributeOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAttributeAsync(const DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAttributeOutcomeCallable PolardbClient::describeDBClusterAttributeCallable(const DescribeDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ContinueDBClusterMigrationOutcome PolardbClient::continueDBClusterMigration(const ContinueDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinueDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinueDBClusterMigrationOutcome(ContinueDBClusterMigrationResult(outcome.result()));
	else
		return ContinueDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::continueDBClusterMigrationAsync(const ContinueDBClusterMigrationRequest& request, const ContinueDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continueDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ContinueDBClusterMigrationOutcomeCallable PolardbClient::continueDBClusterMigrationCallable(const ContinueDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinueDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->continueDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClustersOutcome PolardbClient::describeDBClusters(const DescribeDBClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClustersOutcome(DescribeDBClustersResult(outcome.result()));
	else
		return DescribeDBClustersOutcome(outcome.error());
}

void PolardbClient::describeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClustersOutcomeCallable PolardbClient::describeDBClustersCallable(const DescribeDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBClusterEndpointOutcome PolardbClient::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterEndpointOutcome(DeleteDBClusterEndpointResult(outcome.result()));
	else
		return DeleteDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::deleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBClusterEndpointOutcomeCallable PolardbClient::deleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterEndpointOutcome PolardbClient::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterEndpointOutcome(ModifyDBClusterEndpointResult(outcome.result()));
	else
		return ModifyDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterEndpointOutcomeCallable PolardbClient::modifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ResetAccountOutcome PolardbClient::resetAccount(const ResetAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountOutcome(ResetAccountResult(outcome.result()));
	else
		return ResetAccountOutcome(outcome.error());
}

void PolardbClient::resetAccountAsync(const ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ResetAccountOutcomeCallable PolardbClient::resetAccountCallable(const ResetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountOutcome()>>(
			[this, request]()
			{
			return this->resetAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBNodesOutcome PolardbClient::deleteDBNodes(const DeleteDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBNodesOutcome(DeleteDBNodesResult(outcome.result()));
	else
		return DeleteDBNodesOutcome(outcome.error());
}

void PolardbClient::deleteDBNodesAsync(const DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBNodesOutcomeCallable PolardbClient::deleteDBNodesCallable(const DeleteDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterMaintainTimeOutcome PolardbClient::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMaintainTimeOutcome(ModifyDBClusterMaintainTimeResult(outcome.result()));
	else
		return ModifyDBClusterMaintainTimeOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMaintainTimeAsync(const ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMaintainTimeOutcomeCallable PolardbClient::modifyDBClusterMaintainTimeCallable(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CloseDBClusterMigrationOutcome PolardbClient::closeDBClusterMigration(const CloseDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDBClusterMigrationOutcome(CloseDBClusterMigrationResult(outcome.result()));
	else
		return CloseDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::closeDBClusterMigrationAsync(const CloseDBClusterMigrationRequest& request, const CloseDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CloseDBClusterMigrationOutcomeCallable PolardbClient::closeDBClusterMigrationCallable(const CloseDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->closeDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupsOutcome PolardbClient::describeBackups(const DescribeBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupsOutcome(DescribeBackupsResult(outcome.result()));
	else
		return DescribeBackupsOutcome(outcome.error());
}

void PolardbClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupsOutcomeCallable PolardbClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAutoRenewAttributeOutcome PolardbClient::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoRenewAttributeOutcome(DescribeAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeAutoRenewAttributeOutcome(outcome.error());
}

void PolardbClient::describeAutoRenewAttributeAsync(const DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAutoRenewAttributeOutcomeCallable PolardbClient::describeAutoRenewAttributeCallable(const DescribeAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeRegionsOutcome PolardbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void PolardbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeRegionsOutcomeCallable PolardbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterDescriptionOutcome PolardbClient::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterDescriptionOutcome(ModifyDBClusterDescriptionResult(outcome.result()));
	else
		return ModifyDBClusterDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterDescriptionAsync(const ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterDescriptionOutcomeCallable PolardbClient::modifyDBClusterDescriptionCallable(const ModifyDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDatabaseOutcome PolardbClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseOutcome(CreateDatabaseResult(outcome.result()));
	else
		return CreateDatabaseOutcome(outcome.error());
}

void PolardbClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDatabaseOutcomeCallable PolardbClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::AbortDBClusterMigrationOutcome PolardbClient::abortDBClusterMigration(const AbortDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortDBClusterMigrationOutcome(AbortDBClusterMigrationResult(outcome.result()));
	else
		return AbortDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::abortDBClusterMigrationAsync(const AbortDBClusterMigrationRequest& request, const AbortDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AbortDBClusterMigrationOutcomeCallable PolardbClient::abortDBClusterMigrationCallable(const AbortDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->abortDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteAccountOutcome PolardbClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void PolardbClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteAccountOutcomeCallable PolardbClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBEndpointAddressOutcome PolardbClient::modifyDBEndpointAddress(const ModifyDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBEndpointAddressOutcome(ModifyDBEndpointAddressResult(outcome.result()));
	else
		return ModifyDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::modifyDBEndpointAddressAsync(const ModifyDBEndpointAddressRequest& request, const ModifyDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBEndpointAddressOutcomeCallable PolardbClient::modifyDBEndpointAddressCallable(const ModifyDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->modifyDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterMigrationOutcome PolardbClient::modifyDBClusterMigration(const ModifyDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMigrationOutcome(ModifyDBClusterMigrationResult(outcome.result()));
	else
		return ModifyDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMigrationAsync(const ModifyDBClusterMigrationRequest& request, const ModifyDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMigrationOutcomeCallable PolardbClient::modifyDBClusterMigrationCallable(const ModifyDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAccountsOutcome PolardbClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsOutcome(DescribeAccountsResult(outcome.result()));
	else
		return DescribeAccountsOutcome(outcome.error());
}

void PolardbClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAccountsOutcomeCallable PolardbClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterAccessWhitelistOutcome PolardbClient::modifyDBClusterAccessWhitelist(const ModifyDBClusterAccessWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAccessWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAccessWhitelistOutcome(ModifyDBClusterAccessWhitelistResult(outcome.result()));
	else
		return ModifyDBClusterAccessWhitelistOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterAccessWhitelistAsync(const ModifyDBClusterAccessWhitelistRequest& request, const ModifyDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAccessWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterAccessWhitelistOutcomeCallable PolardbClient::modifyDBClusterAccessWhitelistCallable(const ModifyDBClusterAccessWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAccessWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAccessWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterEndpointsOutcome PolardbClient::describeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterEndpointsOutcome(DescribeDBClusterEndpointsResult(outcome.result()));
	else
		return DescribeDBClusterEndpointsOutcome(outcome.error());
}

void PolardbClient::describeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterEndpointsOutcomeCallable PolardbClient::describeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::GrantAccountPrivilegeOutcome PolardbClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantAccountPrivilegeOutcome(GrantAccountPrivilegeResult(outcome.result()));
	else
		return GrantAccountPrivilegeOutcome(outcome.error());
}

void PolardbClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::GrantAccountPrivilegeOutcomeCallable PolardbClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::TagResourcesOutcome PolardbClient::tagResources(const TagResourcesRequest &request) const
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

void PolardbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::TagResourcesOutcomeCallable PolardbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDatabaseOutcome PolardbClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void PolardbClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDatabaseOutcomeCallable PolardbClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAccountPasswordOutcome PolardbClient::modifyAccountPassword(const ModifyAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountPasswordOutcome(ModifyAccountPasswordResult(outcome.result()));
	else
		return ModifyAccountPasswordOutcome(outcome.error());
}

void PolardbClient::modifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountPasswordOutcomeCallable PolardbClient::modifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupPolicyOutcome PolardbClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void PolardbClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupPolicyOutcomeCallable PolardbClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBEndpointAddressOutcome PolardbClient::deleteDBEndpointAddress(const DeleteDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBEndpointAddressOutcome(DeleteDBEndpointAddressResult(outcome.result()));
	else
		return DeleteDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::deleteDBEndpointAddressAsync(const DeleteDBEndpointAddressRequest& request, const DeleteDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBEndpointAddressOutcomeCallable PolardbClient::deleteDBEndpointAddressCallable(const DeleteDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->deleteDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterParametersOutcome PolardbClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterParametersOutcome(DescribeDBClusterParametersResult(outcome.result()));
	else
		return DescribeDBClusterParametersOutcome(outcome.error());
}

void PolardbClient::describeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterParametersOutcomeCallable PolardbClient::describeDBClusterParametersCallable(const DescribeDBClusterParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

