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

#include <alibabacloud/adb/AdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

namespace
{
	const std::string SERVICE_NAME = "adb";
}

AdbClient::AdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::AdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::AdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::~AdbClient()
{}

AdbClient::AllocateClusterPublicConnectionOutcome AdbClient::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateClusterPublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateClusterPublicConnectionOutcome(AllocateClusterPublicConnectionResult(outcome.result()));
	else
		return AllocateClusterPublicConnectionOutcome(outcome.error());
}

void AdbClient::allocateClusterPublicConnectionAsync(const AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::AllocateClusterPublicConnectionOutcomeCallable AdbClient::allocateClusterPublicConnectionCallable(const AllocateClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateAccountOutcome AdbClient::createAccount(const CreateAccountRequest &request) const
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

void AdbClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateAccountOutcomeCallable AdbClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateDBClusterOutcome AdbClient::createDBCluster(const CreateDBClusterRequest &request) const
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

void AdbClient::createDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateDBClusterOutcomeCallable AdbClient::createDBClusterCallable(const CreateDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterOutcome()>>(
			[this, request]()
			{
			return this->createDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteAccountOutcome AdbClient::deleteAccount(const DeleteAccountRequest &request) const
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

void AdbClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteAccountOutcomeCallable AdbClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteDBClusterOutcome AdbClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
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

void AdbClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteDBClusterOutcomeCallable AdbClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAccountsOutcome AdbClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void AdbClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAccountsOutcomeCallable AdbClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAllDataSourceOutcome AdbClient::describeAllDataSource(const DescribeAllDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllDataSourceOutcome(DescribeAllDataSourceResult(outcome.result()));
	else
		return DescribeAllDataSourceOutcome(outcome.error());
}

void AdbClient::describeAllDataSourceAsync(const DescribeAllDataSourceRequest& request, const DescribeAllDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAllDataSourceOutcomeCallable AdbClient::describeAllDataSourceCallable(const DescribeAllDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllDataSourceOutcome()>>(
			[this, request]()
			{
			return this->describeAllDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAutoRenewAttributeOutcome AdbClient::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) const
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

void AdbClient::describeAutoRenewAttributeAsync(const DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAutoRenewAttributeOutcomeCallable AdbClient::describeAutoRenewAttributeCallable(const DescribeAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAvailableResourceOutcome AdbClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableResourceOutcome(DescribeAvailableResourceResult(outcome.result()));
	else
		return DescribeAvailableResourceOutcome(outcome.error());
}

void AdbClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAvailableResourceOutcomeCallable AdbClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeBackupPolicyOutcome AdbClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void AdbClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeBackupPolicyOutcomeCallable AdbClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeBackupsOutcome AdbClient::describeBackups(const DescribeBackupsRequest &request) const
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

void AdbClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeBackupsOutcomeCallable AdbClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeColumnsOutcome AdbClient::describeColumns(const DescribeColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColumnsOutcome(DescribeColumnsResult(outcome.result()));
	else
		return DescribeColumnsOutcome(outcome.error());
}

void AdbClient::describeColumnsAsync(const DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeColumnsOutcomeCallable AdbClient::describeColumnsCallable(const DescribeColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterAccessWhiteListOutcome AdbClient::describeDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAccessWhiteListOutcome(DescribeDBClusterAccessWhiteListResult(outcome.result()));
	else
		return DescribeDBClusterAccessWhiteListOutcome(outcome.error());
}

void AdbClient::describeDBClusterAccessWhiteListAsync(const DescribeDBClusterAccessWhiteListRequest& request, const DescribeDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterAccessWhiteListOutcomeCallable AdbClient::describeDBClusterAccessWhiteListCallable(const DescribeDBClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterAttributeOutcome AdbClient::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) const
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

void AdbClient::describeDBClusterAttributeAsync(const DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterAttributeOutcomeCallable AdbClient::describeDBClusterAttributeCallable(const DescribeDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterNetInfoOutcome AdbClient::describeDBClusterNetInfo(const DescribeDBClusterNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterNetInfoOutcome(DescribeDBClusterNetInfoResult(outcome.result()));
	else
		return DescribeDBClusterNetInfoOutcome(outcome.error());
}

void AdbClient::describeDBClusterNetInfoAsync(const DescribeDBClusterNetInfoRequest& request, const DescribeDBClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterNetInfoOutcomeCallable AdbClient::describeDBClusterNetInfoCallable(const DescribeDBClusterNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterPerformanceOutcome AdbClient::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterPerformanceOutcome(DescribeDBClusterPerformanceResult(outcome.result()));
	else
		return DescribeDBClusterPerformanceOutcome(outcome.error());
}

void AdbClient::describeDBClusterPerformanceAsync(const DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterPerformanceOutcomeCallable AdbClient::describeDBClusterPerformanceCallable(const DescribeDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClustersOutcome AdbClient::describeDBClusters(const DescribeDBClustersRequest &request) const
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

void AdbClient::describeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClustersOutcomeCallable AdbClient::describeDBClustersCallable(const DescribeDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeInclinedTablesOutcome AdbClient::describeInclinedTables(const DescribeInclinedTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInclinedTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInclinedTablesOutcome(DescribeInclinedTablesResult(outcome.result()));
	else
		return DescribeInclinedTablesOutcome(outcome.error());
}

void AdbClient::describeInclinedTablesAsync(const DescribeInclinedTablesRequest& request, const DescribeInclinedTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInclinedTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeInclinedTablesOutcomeCallable AdbClient::describeInclinedTablesCallable(const DescribeInclinedTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInclinedTablesOutcome()>>(
			[this, request]()
			{
			return this->describeInclinedTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeLogStoreKeysOutcome AdbClient::describeLogStoreKeys(const DescribeLogStoreKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogStoreKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogStoreKeysOutcome(DescribeLogStoreKeysResult(outcome.result()));
	else
		return DescribeLogStoreKeysOutcome(outcome.error());
}

void AdbClient::describeLogStoreKeysAsync(const DescribeLogStoreKeysRequest& request, const DescribeLogStoreKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogStoreKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeLogStoreKeysOutcomeCallable AdbClient::describeLogStoreKeysCallable(const DescribeLogStoreKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogStoreKeysOutcome()>>(
			[this, request]()
			{
			return this->describeLogStoreKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeLoghubDetailOutcome AdbClient::describeLoghubDetail(const DescribeLoghubDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoghubDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoghubDetailOutcome(DescribeLoghubDetailResult(outcome.result()));
	else
		return DescribeLoghubDetailOutcome(outcome.error());
}

void AdbClient::describeLoghubDetailAsync(const DescribeLoghubDetailRequest& request, const DescribeLoghubDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoghubDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeLoghubDetailOutcomeCallable AdbClient::describeLoghubDetailCallable(const DescribeLoghubDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoghubDetailOutcome()>>(
			[this, request]()
			{
			return this->describeLoghubDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeOperatorPermissionOutcome AdbClient::describeOperatorPermission(const DescribeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOperatorPermissionOutcome(DescribeOperatorPermissionResult(outcome.result()));
	else
		return DescribeOperatorPermissionOutcome(outcome.error());
}

void AdbClient::describeOperatorPermissionAsync(const DescribeOperatorPermissionRequest& request, const DescribeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeOperatorPermissionOutcomeCallable AdbClient::describeOperatorPermissionCallable(const DescribeOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->describeOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeProcessListOutcome AdbClient::describeProcessList(const DescribeProcessListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProcessListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProcessListOutcome(DescribeProcessListResult(outcome.result()));
	else
		return DescribeProcessListOutcome(outcome.error());
}

void AdbClient::describeProcessListAsync(const DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProcessList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeProcessListOutcomeCallable AdbClient::describeProcessListCallable(const DescribeProcessListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProcessListOutcome()>>(
			[this, request]()
			{
			return this->describeProcessList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeRegionsOutcome AdbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void AdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeRegionsOutcomeCallable AdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSchemasOutcome AdbClient::describeSchemas(const DescribeSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSchemasOutcome(DescribeSchemasResult(outcome.result()));
	else
		return DescribeSchemasOutcome(outcome.error());
}

void AdbClient::describeSchemasAsync(const DescribeSchemasRequest& request, const DescribeSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSchemasOutcomeCallable AdbClient::describeSchemasCallable(const DescribeSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSchemasOutcome()>>(
			[this, request]()
			{
			return this->describeSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSlowLogRecordsOutcome AdbClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(DescribeSlowLogRecordsResult(outcome.result()));
	else
		return DescribeSlowLogRecordsOutcome(outcome.error());
}

void AdbClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSlowLogRecordsOutcomeCallable AdbClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSlowLogTrendOutcome AdbClient::describeSlowLogTrend(const DescribeSlowLogTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogTrendOutcome(DescribeSlowLogTrendResult(outcome.result()));
	else
		return DescribeSlowLogTrendOutcome(outcome.error());
}

void AdbClient::describeSlowLogTrendAsync(const DescribeSlowLogTrendRequest& request, const DescribeSlowLogTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSlowLogTrendOutcomeCallable AdbClient::describeSlowLogTrendCallable(const DescribeSlowLogTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogTrendOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeTableDetailOutcome AdbClient::describeTableDetail(const DescribeTableDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTableDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTableDetailOutcome(DescribeTableDetailResult(outcome.result()));
	else
		return DescribeTableDetailOutcome(outcome.error());
}

void AdbClient::describeTableDetailAsync(const DescribeTableDetailRequest& request, const DescribeTableDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTableDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeTableDetailOutcomeCallable AdbClient::describeTableDetailCallable(const DescribeTableDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTableDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTableDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeTablesOutcome AdbClient::describeTables(const DescribeTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTablesOutcome(DescribeTablesResult(outcome.result()));
	else
		return DescribeTablesOutcome(outcome.error());
}

void AdbClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeTablesOutcomeCallable AdbClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeTaskInfoOutcome AdbClient::describeTaskInfo(const DescribeTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskInfoOutcome(DescribeTaskInfoResult(outcome.result()));
	else
		return DescribeTaskInfoOutcome(outcome.error());
}

void AdbClient::describeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeTaskInfoOutcomeCallable AdbClient::describeTaskInfoCallable(const DescribeTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->describeTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GrantOperatorPermissionOutcome AdbClient::grantOperatorPermission(const GrantOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantOperatorPermissionOutcome(GrantOperatorPermissionResult(outcome.result()));
	else
		return GrantOperatorPermissionOutcome(outcome.error());
}

void AdbClient::grantOperatorPermissionAsync(const GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GrantOperatorPermissionOutcomeCallable AdbClient::grantOperatorPermissionCallable(const GrantOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::KillProcessOutcome AdbClient::killProcess(const KillProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillProcessOutcome(KillProcessResult(outcome.result()));
	else
		return KillProcessOutcome(outcome.error());
}

void AdbClient::killProcessAsync(const KillProcessRequest& request, const KillProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::KillProcessOutcomeCallable AdbClient::killProcessCallable(const KillProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillProcessOutcome()>>(
			[this, request]()
			{
			return this->killProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ListTagResourcesOutcome AdbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void AdbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ListTagResourcesOutcomeCallable AdbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyAccountDescriptionOutcome AdbClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void AdbClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyAccountDescriptionOutcomeCallable AdbClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyAutoRenewAttributeOutcome AdbClient::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) const
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

void AdbClient::modifyAutoRenewAttributeAsync(const ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyAutoRenewAttributeOutcomeCallable AdbClient::modifyAutoRenewAttributeCallable(const ModifyAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyBackupPolicyOutcome AdbClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void AdbClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyBackupPolicyOutcomeCallable AdbClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyClusterConnectionStringOutcome AdbClient::modifyClusterConnectionString(const ModifyClusterConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterConnectionStringOutcome(ModifyClusterConnectionStringResult(outcome.result()));
	else
		return ModifyClusterConnectionStringOutcome(outcome.error());
}

void AdbClient::modifyClusterConnectionStringAsync(const ModifyClusterConnectionStringRequest& request, const ModifyClusterConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyClusterConnectionStringOutcomeCallable AdbClient::modifyClusterConnectionStringCallable(const ModifyClusterConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterOutcome AdbClient::modifyDBCluster(const ModifyDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterOutcome(ModifyDBClusterResult(outcome.result()));
	else
		return ModifyDBClusterOutcome(outcome.error());
}

void AdbClient::modifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterOutcomeCallable AdbClient::modifyDBClusterCallable(const ModifyDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterAccessWhiteListOutcome AdbClient::modifyDBClusterAccessWhiteList(const ModifyDBClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAccessWhiteListOutcome(ModifyDBClusterAccessWhiteListResult(outcome.result()));
	else
		return ModifyDBClusterAccessWhiteListOutcome(outcome.error());
}

void AdbClient::modifyDBClusterAccessWhiteListAsync(const ModifyDBClusterAccessWhiteListRequest& request, const ModifyDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterAccessWhiteListOutcomeCallable AdbClient::modifyDBClusterAccessWhiteListCallable(const ModifyDBClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterDescriptionOutcome AdbClient::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) const
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

void AdbClient::modifyDBClusterDescriptionAsync(const ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterDescriptionOutcomeCallable AdbClient::modifyDBClusterDescriptionCallable(const ModifyDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterMaintainTimeOutcome AdbClient::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) const
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

void AdbClient::modifyDBClusterMaintainTimeAsync(const ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterMaintainTimeOutcomeCallable AdbClient::modifyDBClusterMaintainTimeCallable(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyLogBackupPolicyOutcome AdbClient::modifyLogBackupPolicy(const ModifyLogBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogBackupPolicyOutcome(ModifyLogBackupPolicyResult(outcome.result()));
	else
		return ModifyLogBackupPolicyOutcome(outcome.error());
}

void AdbClient::modifyLogBackupPolicyAsync(const ModifyLogBackupPolicyRequest& request, const ModifyLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyLogBackupPolicyOutcomeCallable AdbClient::modifyLogBackupPolicyCallable(const ModifyLogBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyLogBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ReleaseClusterPublicConnectionOutcome AdbClient::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterPublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterPublicConnectionOutcome(ReleaseClusterPublicConnectionResult(outcome.result()));
	else
		return ReleaseClusterPublicConnectionOutcome(outcome.error());
}

void AdbClient::releaseClusterPublicConnectionAsync(const ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ReleaseClusterPublicConnectionOutcomeCallable AdbClient::releaseClusterPublicConnectionCallable(const ReleaseClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ResetAccountPasswordOutcome AdbClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountPasswordOutcome(ResetAccountPasswordResult(outcome.result()));
	else
		return ResetAccountPasswordOutcome(outcome.error());
}

void AdbClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ResetAccountPasswordOutcomeCallable AdbClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::RevokeOperatorPermissionOutcome AdbClient::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeOperatorPermissionOutcome(RevokeOperatorPermissionResult(outcome.result()));
	else
		return RevokeOperatorPermissionOutcome(outcome.error());
}

void AdbClient::revokeOperatorPermissionAsync(const RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::RevokeOperatorPermissionOutcomeCallable AdbClient::revokeOperatorPermissionCallable(const RevokeOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::TagResourcesOutcome AdbClient::tagResources(const TagResourcesRequest &request) const
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

void AdbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::TagResourcesOutcomeCallable AdbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::UntagResourcesOutcome AdbClient::untagResources(const UntagResourcesRequest &request) const
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

void AdbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::UntagResourcesOutcomeCallable AdbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

