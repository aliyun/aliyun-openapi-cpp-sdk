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

#include <alibabacloud/hitsdb/HitsdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

namespace
{
	const std::string SERVICE_NAME = "hitsdb";
}

HitsdbClient::HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::HitsdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::HitsdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::~HitsdbClient()
{}

HitsdbClient::CreateHiTSDBInstanceOutcome HitsdbClient::createHiTSDBInstance(const CreateHiTSDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHiTSDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHiTSDBInstanceOutcome(CreateHiTSDBInstanceResult(outcome.result()));
	else
		return CreateHiTSDBInstanceOutcome(outcome.error());
}

void HitsdbClient::createHiTSDBInstanceAsync(const CreateHiTSDBInstanceRequest& request, const CreateHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHiTSDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::CreateHiTSDBInstanceOutcomeCallable HitsdbClient::createHiTSDBInstanceCallable(const CreateHiTSDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHiTSDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createHiTSDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DeleteHiTSDBInstanceOutcome HitsdbClient::deleteHiTSDBInstance(const DeleteHiTSDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHiTSDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHiTSDBInstanceOutcome(DeleteHiTSDBInstanceResult(outcome.result()));
	else
		return DeleteHiTSDBInstanceOutcome(outcome.error());
}

void HitsdbClient::deleteHiTSDBInstanceAsync(const DeleteHiTSDBInstanceRequest& request, const DeleteHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHiTSDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DeleteHiTSDBInstanceOutcomeCallable HitsdbClient::deleteHiTSDBInstanceCallable(const DeleteHiTSDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHiTSDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteHiTSDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeHiTSDBInstanceOutcome HitsdbClient::describeHiTSDBInstance(const DescribeHiTSDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHiTSDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHiTSDBInstanceOutcome(DescribeHiTSDBInstanceResult(outcome.result()));
	else
		return DescribeHiTSDBInstanceOutcome(outcome.error());
}

void HitsdbClient::describeHiTSDBInstanceAsync(const DescribeHiTSDBInstanceRequest& request, const DescribeHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHiTSDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeHiTSDBInstanceOutcomeCallable HitsdbClient::describeHiTSDBInstanceCallable(const DescribeHiTSDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHiTSDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeHiTSDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeHiTSDBInstanceListOutcome HitsdbClient::describeHiTSDBInstanceList(const DescribeHiTSDBInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHiTSDBInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHiTSDBInstanceListOutcome(DescribeHiTSDBInstanceListResult(outcome.result()));
	else
		return DescribeHiTSDBInstanceListOutcome(outcome.error());
}

void HitsdbClient::describeHiTSDBInstanceListAsync(const DescribeHiTSDBInstanceListRequest& request, const DescribeHiTSDBInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHiTSDBInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeHiTSDBInstanceListOutcomeCallable HitsdbClient::describeHiTSDBInstanceListCallable(const DescribeHiTSDBInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHiTSDBInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeHiTSDBInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeHiTSDBInstanceSecurityIpListOutcome HitsdbClient::describeHiTSDBInstanceSecurityIpList(const DescribeHiTSDBInstanceSecurityIpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHiTSDBInstanceSecurityIpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHiTSDBInstanceSecurityIpListOutcome(DescribeHiTSDBInstanceSecurityIpListResult(outcome.result()));
	else
		return DescribeHiTSDBInstanceSecurityIpListOutcome(outcome.error());
}

void HitsdbClient::describeHiTSDBInstanceSecurityIpListAsync(const DescribeHiTSDBInstanceSecurityIpListRequest& request, const DescribeHiTSDBInstanceSecurityIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHiTSDBInstanceSecurityIpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeHiTSDBInstanceSecurityIpListOutcomeCallable HitsdbClient::describeHiTSDBInstanceSecurityIpListCallable(const DescribeHiTSDBInstanceSecurityIpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHiTSDBInstanceSecurityIpListOutcome()>>(
			[this, request]()
			{
			return this->describeHiTSDBInstanceSecurityIpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeRegionsOutcome HitsdbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void HitsdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeRegionsOutcomeCallable HitsdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeZonesOutcome HitsdbClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void HitsdbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeZonesOutcomeCallable HitsdbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::ModifyHiTSDBInstanceClassOutcome HitsdbClient::modifyHiTSDBInstanceClass(const ModifyHiTSDBInstanceClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHiTSDBInstanceClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHiTSDBInstanceClassOutcome(ModifyHiTSDBInstanceClassResult(outcome.result()));
	else
		return ModifyHiTSDBInstanceClassOutcome(outcome.error());
}

void HitsdbClient::modifyHiTSDBInstanceClassAsync(const ModifyHiTSDBInstanceClassRequest& request, const ModifyHiTSDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHiTSDBInstanceClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::ModifyHiTSDBInstanceClassOutcomeCallable HitsdbClient::modifyHiTSDBInstanceClassCallable(const ModifyHiTSDBInstanceClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHiTSDBInstanceClassOutcome()>>(
			[this, request]()
			{
			return this->modifyHiTSDBInstanceClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::ModifyHiTSDBInstanceSecurityIpListOutcome HitsdbClient::modifyHiTSDBInstanceSecurityIpList(const ModifyHiTSDBInstanceSecurityIpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHiTSDBInstanceSecurityIpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHiTSDBInstanceSecurityIpListOutcome(ModifyHiTSDBInstanceSecurityIpListResult(outcome.result()));
	else
		return ModifyHiTSDBInstanceSecurityIpListOutcome(outcome.error());
}

void HitsdbClient::modifyHiTSDBInstanceSecurityIpListAsync(const ModifyHiTSDBInstanceSecurityIpListRequest& request, const ModifyHiTSDBInstanceSecurityIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHiTSDBInstanceSecurityIpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::ModifyHiTSDBInstanceSecurityIpListOutcomeCallable HitsdbClient::modifyHiTSDBInstanceSecurityIpListCallable(const ModifyHiTSDBInstanceSecurityIpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHiTSDBInstanceSecurityIpListOutcome()>>(
			[this, request]()
			{
			return this->modifyHiTSDBInstanceSecurityIpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::RenameHiTSDBInstanceAliasOutcome HitsdbClient::renameHiTSDBInstanceAlias(const RenameHiTSDBInstanceAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenameHiTSDBInstanceAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenameHiTSDBInstanceAliasOutcome(RenameHiTSDBInstanceAliasResult(outcome.result()));
	else
		return RenameHiTSDBInstanceAliasOutcome(outcome.error());
}

void HitsdbClient::renameHiTSDBInstanceAliasAsync(const RenameHiTSDBInstanceAliasRequest& request, const RenameHiTSDBInstanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renameHiTSDBInstanceAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::RenameHiTSDBInstanceAliasOutcomeCallable HitsdbClient::renameHiTSDBInstanceAliasCallable(const RenameHiTSDBInstanceAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenameHiTSDBInstanceAliasOutcome()>>(
			[this, request]()
			{
			return this->renameHiTSDBInstanceAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::RenewTSDBInstanceOutcome HitsdbClient::renewTSDBInstance(const RenewTSDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewTSDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewTSDBInstanceOutcome(RenewTSDBInstanceResult(outcome.result()));
	else
		return RenewTSDBInstanceOutcome(outcome.error());
}

void HitsdbClient::renewTSDBInstanceAsync(const RenewTSDBInstanceRequest& request, const RenewTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewTSDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::RenewTSDBInstanceOutcomeCallable HitsdbClient::renewTSDBInstanceCallable(const RenewTSDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewTSDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewTSDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::RestartHiTSDBInstanceOutcome HitsdbClient::restartHiTSDBInstance(const RestartHiTSDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartHiTSDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartHiTSDBInstanceOutcome(RestartHiTSDBInstanceResult(outcome.result()));
	else
		return RestartHiTSDBInstanceOutcome(outcome.error());
}

void HitsdbClient::restartHiTSDBInstanceAsync(const RestartHiTSDBInstanceRequest& request, const RestartHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartHiTSDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::RestartHiTSDBInstanceOutcomeCallable HitsdbClient::restartHiTSDBInstanceCallable(const RestartHiTSDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartHiTSDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartHiTSDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::SwitchHiTSDBInstancePublicNetOutcome HitsdbClient::switchHiTSDBInstancePublicNet(const SwitchHiTSDBInstancePublicNetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchHiTSDBInstancePublicNetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchHiTSDBInstancePublicNetOutcome(SwitchHiTSDBInstancePublicNetResult(outcome.result()));
	else
		return SwitchHiTSDBInstancePublicNetOutcome(outcome.error());
}

void HitsdbClient::switchHiTSDBInstancePublicNetAsync(const SwitchHiTSDBInstancePublicNetRequest& request, const SwitchHiTSDBInstancePublicNetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchHiTSDBInstancePublicNet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::SwitchHiTSDBInstancePublicNetOutcomeCallable HitsdbClient::switchHiTSDBInstancePublicNetCallable(const SwitchHiTSDBInstancePublicNetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchHiTSDBInstancePublicNetOutcome()>>(
			[this, request]()
			{
			return this->switchHiTSDBInstancePublicNet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

