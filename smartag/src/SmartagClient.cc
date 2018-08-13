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

#include <alibabacloud/smartag/SmartagClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

namespace
{
	const std::string SERVICE_NAME = "Smartag";
}

SmartagClient::SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::SmartagClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::SmartagClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::~SmartagClient()
{}

SmartagClient::DescribeSmartAccessGatewaysOutcome SmartagClient::describeSmartAccessGateways(const DescribeSmartAccessGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewaysOutcome(DescribeSmartAccessGatewaysResult(outcome.result()));
	else
		return DescribeSmartAccessGatewaysOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewaysAsync(const DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewaysOutcomeCallable SmartagClient::describeSmartAccessGatewaysCallable(const DescribeSmartAccessGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::SwitchCloudBoxHaStateOutcome SmartagClient::switchCloudBoxHaState(const SwitchCloudBoxHaStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchCloudBoxHaStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchCloudBoxHaStateOutcome(SwitchCloudBoxHaStateResult(outcome.result()));
	else
		return SwitchCloudBoxHaStateOutcome(outcome.error());
}

void SmartagClient::switchCloudBoxHaStateAsync(const SwitchCloudBoxHaStateRequest& request, const SwitchCloudBoxHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchCloudBoxHaState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::SwitchCloudBoxHaStateOutcomeCallable SmartagClient::switchCloudBoxHaStateCallable(const SwitchCloudBoxHaStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchCloudBoxHaStateOutcome()>>(
			[this, request]()
			{
			return this->switchCloudBoxHaState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnbindSmartAccessGatewayOutcome SmartagClient::unbindSmartAccessGateway(const UnbindSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSmartAccessGatewayOutcome(UnbindSmartAccessGatewayResult(outcome.result()));
	else
		return UnbindSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::unbindSmartAccessGatewayAsync(const UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnbindSmartAccessGatewayOutcomeCallable SmartagClient::unbindSmartAccessGatewayCallable(const UnbindSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->unbindSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSmartAccessGatewayOutcome SmartagClient::createSmartAccessGateway(const CreateSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewayOutcome(CreateSmartAccessGatewayResult(outcome.result()));
	else
		return CreateSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewayAsync(const CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewayOutcomeCallable SmartagClient::createSmartAccessGatewayCallable(const CreateSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteDedicatedLineBackupOutcome SmartagClient::deleteDedicatedLineBackup(const DeleteDedicatedLineBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDedicatedLineBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDedicatedLineBackupOutcome(DeleteDedicatedLineBackupResult(outcome.result()));
	else
		return DeleteDedicatedLineBackupOutcome(outcome.error());
}

void SmartagClient::deleteDedicatedLineBackupAsync(const DeleteDedicatedLineBackupRequest& request, const DeleteDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDedicatedLineBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteDedicatedLineBackupOutcomeCallable SmartagClient::deleteDedicatedLineBackupCallable(const DeleteDedicatedLineBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDedicatedLineBackupOutcome()>>(
			[this, request]()
			{
			return this->deleteDedicatedLineBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnlockSmartAccessGatewayOutcome SmartagClient::unlockSmartAccessGateway(const UnlockSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockSmartAccessGatewayOutcome(UnlockSmartAccessGatewayResult(outcome.result()));
	else
		return UnlockSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::unlockSmartAccessGatewayAsync(const UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnlockSmartAccessGatewayOutcomeCallable SmartagClient::unlockSmartAccessGatewayCallable(const UnlockSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->unlockSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ActivateSmartAccessGatewayOutcome SmartagClient::activateSmartAccessGateway(const ActivateSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateSmartAccessGatewayOutcome(ActivateSmartAccessGatewayResult(outcome.result()));
	else
		return ActivateSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::activateSmartAccessGatewayAsync(const ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ActivateSmartAccessGatewayOutcomeCallable SmartagClient::activateSmartAccessGatewayCallable(const ActivateSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->activateSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateDedicatedLineBackupOutcome SmartagClient::createDedicatedLineBackup(const CreateDedicatedLineBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedLineBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedLineBackupOutcome(CreateDedicatedLineBackupResult(outcome.result()));
	else
		return CreateDedicatedLineBackupOutcome(outcome.error());
}

void SmartagClient::createDedicatedLineBackupAsync(const CreateDedicatedLineBackupRequest& request, const CreateDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedLineBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateDedicatedLineBackupOutcomeCallable SmartagClient::createDedicatedLineBackupCallable(const CreateDedicatedLineBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedLineBackupOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedLineBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayHaOutcome SmartagClient::describeSmartAccessGatewayHa(const DescribeSmartAccessGatewayHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayHaOutcome(DescribeSmartAccessGatewayHaResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayHaOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayHaAsync(const DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayHaOutcomeCallable SmartagClient::describeSmartAccessGatewayHaCallable(const DescribeSmartAccessGatewayHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayHaOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayHa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyCloudConnectNetworkOutcome SmartagClient::modifyCloudConnectNetwork(const ModifyCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCloudConnectNetworkOutcome(ModifyCloudConnectNetworkResult(outcome.result()));
	else
		return ModifyCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::modifyCloudConnectNetworkAsync(const ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyCloudConnectNetworkOutcomeCallable SmartagClient::modifyCloudConnectNetworkCallable(const ModifyCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->modifyCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteCloudConnectNetworkOutcome SmartagClient::deleteCloudConnectNetwork(const DeleteCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCloudConnectNetworkOutcome(DeleteCloudConnectNetworkResult(outcome.result()));
	else
		return DeleteCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::deleteCloudConnectNetworkAsync(const DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteCloudConnectNetworkOutcomeCallable SmartagClient::deleteCloudConnectNetworkCallable(const DeleteCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateCloudConnectNetworkOutcome SmartagClient::createCloudConnectNetwork(const CreateCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCloudConnectNetworkOutcome(CreateCloudConnectNetworkResult(outcome.result()));
	else
		return CreateCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::createCloudConnectNetworkAsync(const CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateCloudConnectNetworkOutcomeCallable SmartagClient::createCloudConnectNetworkCallable(const CreateCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->createCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RebootSmartAccessGatewayOutcome SmartagClient::rebootSmartAccessGateway(const RebootSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootSmartAccessGatewayOutcome(RebootSmartAccessGatewayResult(outcome.result()));
	else
		return RebootSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::rebootSmartAccessGatewayAsync(const RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RebootSmartAccessGatewayOutcomeCallable SmartagClient::rebootSmartAccessGatewayCallable(const RebootSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->rebootSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::BindSmartAccessGatewayOutcome SmartagClient::bindSmartAccessGateway(const BindSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSmartAccessGatewayOutcome(BindSmartAccessGatewayResult(outcome.result()));
	else
		return BindSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::bindSmartAccessGatewayAsync(const BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::BindSmartAccessGatewayOutcomeCallable SmartagClient::bindSmartAccessGatewayCallable(const BindSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->bindSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeRegionsOutcome SmartagClient::describeRegions(const DescribeRegionsRequest &request) const
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

void SmartagClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeRegionsOutcomeCallable SmartagClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetSmartAccessGatewayUseLimitOutcome SmartagClient::getSmartAccessGatewayUseLimit(const GetSmartAccessGatewayUseLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmartAccessGatewayUseLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmartAccessGatewayUseLimitOutcome(GetSmartAccessGatewayUseLimitResult(outcome.result()));
	else
		return GetSmartAccessGatewayUseLimitOutcome(outcome.error());
}

void SmartagClient::getSmartAccessGatewayUseLimitAsync(const GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmartAccessGatewayUseLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetSmartAccessGatewayUseLimitOutcomeCallable SmartagClient::getSmartAccessGatewayUseLimitCallable(const GetSmartAccessGatewayUseLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmartAccessGatewayUseLimitOutcome()>>(
			[this, request]()
			{
			return this->getSmartAccessGatewayUseLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySmartAccessGatewayOutcome SmartagClient::modifySmartAccessGateway(const ModifySmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmartAccessGatewayOutcome(ModifySmartAccessGatewayResult(outcome.result()));
	else
		return ModifySmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::modifySmartAccessGatewayAsync(const ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySmartAccessGatewayOutcomeCallable SmartagClient::modifySmartAccessGatewayCallable(const ModifySmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->modifySmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeCloudConnectNetworksOutcome SmartagClient::describeCloudConnectNetworks(const DescribeCloudConnectNetworksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudConnectNetworksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudConnectNetworksOutcome(DescribeCloudConnectNetworksResult(outcome.result()));
	else
		return DescribeCloudConnectNetworksOutcome(outcome.error());
}

void SmartagClient::describeCloudConnectNetworksAsync(const DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudConnectNetworks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeCloudConnectNetworksOutcomeCallable SmartagClient::describeCloudConnectNetworksCallable(const DescribeCloudConnectNetworksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudConnectNetworksOutcome()>>(
			[this, request]()
			{
			return this->describeCloudConnectNetworks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayVersionsOutcome SmartagClient::describeSmartAccessGatewayVersions(const DescribeSmartAccessGatewayVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayVersionsOutcome(DescribeSmartAccessGatewayVersionsResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayVersionsOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayVersionsAsync(const DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayVersionsOutcomeCallable SmartagClient::describeSmartAccessGatewayVersionsCallable(const DescribeSmartAccessGatewayVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateSmartAccessGatewayVersionOutcome SmartagClient::updateSmartAccessGatewayVersion(const UpdateSmartAccessGatewayVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartAccessGatewayVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartAccessGatewayVersionOutcome(UpdateSmartAccessGatewayVersionResult(outcome.result()));
	else
		return UpdateSmartAccessGatewayVersionOutcome(outcome.error());
}

void SmartagClient::updateSmartAccessGatewayVersionAsync(const UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartAccessGatewayVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateSmartAccessGatewayVersionOutcomeCallable SmartagClient::updateSmartAccessGatewayVersionCallable(const UpdateSmartAccessGatewayVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartAccessGatewayVersionOutcome()>>(
			[this, request]()
			{
			return this->updateSmartAccessGatewayVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetCloudConnectNetworkUseLimitOutcome SmartagClient::getCloudConnectNetworkUseLimit(const GetCloudConnectNetworkUseLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudConnectNetworkUseLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudConnectNetworkUseLimitOutcome(GetCloudConnectNetworkUseLimitResult(outcome.result()));
	else
		return GetCloudConnectNetworkUseLimitOutcome(outcome.error());
}

void SmartagClient::getCloudConnectNetworkUseLimitAsync(const GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudConnectNetworkUseLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetCloudConnectNetworkUseLimitOutcomeCallable SmartagClient::getCloudConnectNetworkUseLimitCallable(const GetCloudConnectNetworkUseLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudConnectNetworkUseLimitOutcome()>>(
			[this, request]()
			{
			return this->getCloudConnectNetworkUseLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

