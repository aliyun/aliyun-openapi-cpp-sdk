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

#include <alibabacloud/cc5g/CC5GClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

namespace
{
	const std::string SERVICE_NAME = "CC5G";
}

CC5GClient::CC5GClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fivegcc");
}

CC5GClient::CC5GClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fivegcc");
}

CC5GClient::CC5GClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fivegcc");
}

CC5GClient::~CC5GClient()
{}

CC5GClient::AddDNSAuthorizationRuleOutcome CC5GClient::addDNSAuthorizationRule(const AddDNSAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDNSAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDNSAuthorizationRuleOutcome(AddDNSAuthorizationRuleResult(outcome.result()));
	else
		return AddDNSAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::addDNSAuthorizationRuleAsync(const AddDNSAuthorizationRuleRequest& request, const AddDNSAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDNSAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::AddDNSAuthorizationRuleOutcomeCallable CC5GClient::addDNSAuthorizationRuleCallable(const AddDNSAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDNSAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->addDNSAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::AddGroupDnsAuthorizationRuleOutcome CC5GClient::addGroupDnsAuthorizationRule(const AddGroupDnsAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGroupDnsAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGroupDnsAuthorizationRuleOutcome(AddGroupDnsAuthorizationRuleResult(outcome.result()));
	else
		return AddGroupDnsAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::addGroupDnsAuthorizationRuleAsync(const AddGroupDnsAuthorizationRuleRequest& request, const AddGroupDnsAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGroupDnsAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::AddGroupDnsAuthorizationRuleOutcomeCallable CC5GClient::addGroupDnsAuthorizationRuleCallable(const AddGroupDnsAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGroupDnsAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->addGroupDnsAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::AddWirelessCloudConnectorToGroupOutcome CC5GClient::addWirelessCloudConnectorToGroup(const AddWirelessCloudConnectorToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddWirelessCloudConnectorToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddWirelessCloudConnectorToGroupOutcome(AddWirelessCloudConnectorToGroupResult(outcome.result()));
	else
		return AddWirelessCloudConnectorToGroupOutcome(outcome.error());
}

void CC5GClient::addWirelessCloudConnectorToGroupAsync(const AddWirelessCloudConnectorToGroupRequest& request, const AddWirelessCloudConnectorToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWirelessCloudConnectorToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::AddWirelessCloudConnectorToGroupOutcomeCallable CC5GClient::addWirelessCloudConnectorToGroupCallable(const AddWirelessCloudConnectorToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWirelessCloudConnectorToGroupOutcome()>>(
			[this, request]()
			{
			return this->addWirelessCloudConnectorToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::AttachVpcToNetLinkOutcome CC5GClient::attachVpcToNetLink(const AttachVpcToNetLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachVpcToNetLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachVpcToNetLinkOutcome(AttachVpcToNetLinkResult(outcome.result()));
	else
		return AttachVpcToNetLinkOutcome(outcome.error());
}

void CC5GClient::attachVpcToNetLinkAsync(const AttachVpcToNetLinkRequest& request, const AttachVpcToNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachVpcToNetLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::AttachVpcToNetLinkOutcomeCallable CC5GClient::attachVpcToNetLinkCallable(const AttachVpcToNetLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachVpcToNetLinkOutcome()>>(
			[this, request]()
			{
			return this->attachVpcToNetLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateAuthorizationRuleOutcome CC5GClient::createAuthorizationRule(const CreateAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuthorizationRuleOutcome(CreateAuthorizationRuleResult(outcome.result()));
	else
		return CreateAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::createAuthorizationRuleAsync(const CreateAuthorizationRuleRequest& request, const CreateAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateAuthorizationRuleOutcomeCallable CC5GClient::createAuthorizationRuleCallable(const CreateAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->createAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateBatchOperateCardsTaskOutcome CC5GClient::createBatchOperateCardsTask(const CreateBatchOperateCardsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBatchOperateCardsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBatchOperateCardsTaskOutcome(CreateBatchOperateCardsTaskResult(outcome.result()));
	else
		return CreateBatchOperateCardsTaskOutcome(outcome.error());
}

void CC5GClient::createBatchOperateCardsTaskAsync(const CreateBatchOperateCardsTaskRequest& request, const CreateBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchOperateCardsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateBatchOperateCardsTaskOutcomeCallable CC5GClient::createBatchOperateCardsTaskCallable(const CreateBatchOperateCardsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchOperateCardsTaskOutcome()>>(
			[this, request]()
			{
			return this->createBatchOperateCardsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateGroupAuthorizationRuleOutcome CC5GClient::createGroupAuthorizationRule(const CreateGroupAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupAuthorizationRuleOutcome(CreateGroupAuthorizationRuleResult(outcome.result()));
	else
		return CreateGroupAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::createGroupAuthorizationRuleAsync(const CreateGroupAuthorizationRuleRequest& request, const CreateGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateGroupAuthorizationRuleOutcomeCallable CC5GClient::createGroupAuthorizationRuleCallable(const CreateGroupAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->createGroupAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateIoTCloudConnectorBackhaulRouteOutcome CC5GClient::createIoTCloudConnectorBackhaulRoute(const CreateIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIoTCloudConnectorBackhaulRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIoTCloudConnectorBackhaulRouteOutcome(CreateIoTCloudConnectorBackhaulRouteResult(outcome.result()));
	else
		return CreateIoTCloudConnectorBackhaulRouteOutcome(outcome.error());
}

void CC5GClient::createIoTCloudConnectorBackhaulRouteAsync(const CreateIoTCloudConnectorBackhaulRouteRequest& request, const CreateIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIoTCloudConnectorBackhaulRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateIoTCloudConnectorBackhaulRouteOutcomeCallable CC5GClient::createIoTCloudConnectorBackhaulRouteCallable(const CreateIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIoTCloudConnectorBackhaulRouteOutcome()>>(
			[this, request]()
			{
			return this->createIoTCloudConnectorBackhaulRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateWirelessCloudConnectorOutcome CC5GClient::createWirelessCloudConnector(const CreateWirelessCloudConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWirelessCloudConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWirelessCloudConnectorOutcome(CreateWirelessCloudConnectorResult(outcome.result()));
	else
		return CreateWirelessCloudConnectorOutcome(outcome.error());
}

void CC5GClient::createWirelessCloudConnectorAsync(const CreateWirelessCloudConnectorRequest& request, const CreateWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWirelessCloudConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateWirelessCloudConnectorOutcomeCallable CC5GClient::createWirelessCloudConnectorCallable(const CreateWirelessCloudConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWirelessCloudConnectorOutcome()>>(
			[this, request]()
			{
			return this->createWirelessCloudConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::CreateWirelessCloudConnectorGroupOutcome CC5GClient::createWirelessCloudConnectorGroup(const CreateWirelessCloudConnectorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWirelessCloudConnectorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWirelessCloudConnectorGroupOutcome(CreateWirelessCloudConnectorGroupResult(outcome.result()));
	else
		return CreateWirelessCloudConnectorGroupOutcome(outcome.error());
}

void CC5GClient::createWirelessCloudConnectorGroupAsync(const CreateWirelessCloudConnectorGroupRequest& request, const CreateWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWirelessCloudConnectorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::CreateWirelessCloudConnectorGroupOutcomeCallable CC5GClient::createWirelessCloudConnectorGroupCallable(const CreateWirelessCloudConnectorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWirelessCloudConnectorGroupOutcome()>>(
			[this, request]()
			{
			return this->createWirelessCloudConnectorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteAuthorizationRuleOutcome CC5GClient::deleteAuthorizationRule(const DeleteAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAuthorizationRuleOutcome(DeleteAuthorizationRuleResult(outcome.result()));
	else
		return DeleteAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::deleteAuthorizationRuleAsync(const DeleteAuthorizationRuleRequest& request, const DeleteAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteAuthorizationRuleOutcomeCallable CC5GClient::deleteAuthorizationRuleCallable(const DeleteAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteBatchOperateCardsTaskOutcome CC5GClient::deleteBatchOperateCardsTask(const DeleteBatchOperateCardsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBatchOperateCardsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBatchOperateCardsTaskOutcome(DeleteBatchOperateCardsTaskResult(outcome.result()));
	else
		return DeleteBatchOperateCardsTaskOutcome(outcome.error());
}

void CC5GClient::deleteBatchOperateCardsTaskAsync(const DeleteBatchOperateCardsTaskRequest& request, const DeleteBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBatchOperateCardsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteBatchOperateCardsTaskOutcomeCallable CC5GClient::deleteBatchOperateCardsTaskCallable(const DeleteBatchOperateCardsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBatchOperateCardsTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteBatchOperateCardsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteGroupAuthorizationRuleOutcome CC5GClient::deleteGroupAuthorizationRule(const DeleteGroupAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupAuthorizationRuleOutcome(DeleteGroupAuthorizationRuleResult(outcome.result()));
	else
		return DeleteGroupAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::deleteGroupAuthorizationRuleAsync(const DeleteGroupAuthorizationRuleRequest& request, const DeleteGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteGroupAuthorizationRuleOutcomeCallable CC5GClient::deleteGroupAuthorizationRuleCallable(const DeleteGroupAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteIoTCloudConnectorBackhaulRouteOutcome CC5GClient::deleteIoTCloudConnectorBackhaulRoute(const DeleteIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIoTCloudConnectorBackhaulRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIoTCloudConnectorBackhaulRouteOutcome(DeleteIoTCloudConnectorBackhaulRouteResult(outcome.result()));
	else
		return DeleteIoTCloudConnectorBackhaulRouteOutcome(outcome.error());
}

void CC5GClient::deleteIoTCloudConnectorBackhaulRouteAsync(const DeleteIoTCloudConnectorBackhaulRouteRequest& request, const DeleteIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIoTCloudConnectorBackhaulRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteIoTCloudConnectorBackhaulRouteOutcomeCallable CC5GClient::deleteIoTCloudConnectorBackhaulRouteCallable(const DeleteIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIoTCloudConnectorBackhaulRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteIoTCloudConnectorBackhaulRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteWirelessCloudConnectorOutcome CC5GClient::deleteWirelessCloudConnector(const DeleteWirelessCloudConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWirelessCloudConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWirelessCloudConnectorOutcome(DeleteWirelessCloudConnectorResult(outcome.result()));
	else
		return DeleteWirelessCloudConnectorOutcome(outcome.error());
}

void CC5GClient::deleteWirelessCloudConnectorAsync(const DeleteWirelessCloudConnectorRequest& request, const DeleteWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWirelessCloudConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteWirelessCloudConnectorOutcomeCallable CC5GClient::deleteWirelessCloudConnectorCallable(const DeleteWirelessCloudConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWirelessCloudConnectorOutcome()>>(
			[this, request]()
			{
			return this->deleteWirelessCloudConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DeleteWirelessCloudConnectorGroupOutcome CC5GClient::deleteWirelessCloudConnectorGroup(const DeleteWirelessCloudConnectorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWirelessCloudConnectorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWirelessCloudConnectorGroupOutcome(DeleteWirelessCloudConnectorGroupResult(outcome.result()));
	else
		return DeleteWirelessCloudConnectorGroupOutcome(outcome.error());
}

void CC5GClient::deleteWirelessCloudConnectorGroupAsync(const DeleteWirelessCloudConnectorGroupRequest& request, const DeleteWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWirelessCloudConnectorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DeleteWirelessCloudConnectorGroupOutcomeCallable CC5GClient::deleteWirelessCloudConnectorGroupCallable(const DeleteWirelessCloudConnectorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWirelessCloudConnectorGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteWirelessCloudConnectorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::DetachVpcFromNetLinkOutcome CC5GClient::detachVpcFromNetLink(const DetachVpcFromNetLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachVpcFromNetLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachVpcFromNetLinkOutcome(DetachVpcFromNetLinkResult(outcome.result()));
	else
		return DetachVpcFromNetLinkOutcome(outcome.error());
}

void CC5GClient::detachVpcFromNetLinkAsync(const DetachVpcFromNetLinkRequest& request, const DetachVpcFromNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachVpcFromNetLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::DetachVpcFromNetLinkOutcomeCallable CC5GClient::detachVpcFromNetLinkCallable(const DetachVpcFromNetLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachVpcFromNetLinkOutcome()>>(
			[this, request]()
			{
			return this->detachVpcFromNetLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::FailCardsOutcome CC5GClient::failCards(const FailCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FailCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FailCardsOutcome(FailCardsResult(outcome.result()));
	else
		return FailCardsOutcome(outcome.error());
}

void CC5GClient::failCardsAsync(const FailCardsRequest& request, const FailCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, failCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::FailCardsOutcomeCallable CC5GClient::failCardsCallable(const FailCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FailCardsOutcome()>>(
			[this, request]()
			{
			return this->failCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GetCardOutcome CC5GClient::getCard(const GetCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCardOutcome(GetCardResult(outcome.result()));
	else
		return GetCardOutcome(outcome.error());
}

void CC5GClient::getCardAsync(const GetCardRequest& request, const GetCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GetCardOutcomeCallable CC5GClient::getCardCallable(const GetCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCardOutcome()>>(
			[this, request]()
			{
			return this->getCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GetCardLockReasonOutcome CC5GClient::getCardLockReason(const GetCardLockReasonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCardLockReasonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCardLockReasonOutcome(GetCardLockReasonResult(outcome.result()));
	else
		return GetCardLockReasonOutcome(outcome.error());
}

void CC5GClient::getCardLockReasonAsync(const GetCardLockReasonRequest& request, const GetCardLockReasonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCardLockReason(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GetCardLockReasonOutcomeCallable CC5GClient::getCardLockReasonCallable(const GetCardLockReasonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCardLockReasonOutcome()>>(
			[this, request]()
			{
			return this->getCardLockReason(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GetCreateCustomerInformationOutcome CC5GClient::getCreateCustomerInformation(const GetCreateCustomerInformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreateCustomerInformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreateCustomerInformationOutcome(GetCreateCustomerInformationResult(outcome.result()));
	else
		return GetCreateCustomerInformationOutcome(outcome.error());
}

void CC5GClient::getCreateCustomerInformationAsync(const GetCreateCustomerInformationRequest& request, const GetCreateCustomerInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreateCustomerInformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GetCreateCustomerInformationOutcomeCallable CC5GClient::getCreateCustomerInformationCallable(const GetCreateCustomerInformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreateCustomerInformationOutcome()>>(
			[this, request]()
			{
			return this->getCreateCustomerInformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GetDiagnoseResultForSingleCardOutcome CC5GClient::getDiagnoseResultForSingleCard(const GetDiagnoseResultForSingleCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiagnoseResultForSingleCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiagnoseResultForSingleCardOutcome(GetDiagnoseResultForSingleCardResult(outcome.result()));
	else
		return GetDiagnoseResultForSingleCardOutcome(outcome.error());
}

void CC5GClient::getDiagnoseResultForSingleCardAsync(const GetDiagnoseResultForSingleCardRequest& request, const GetDiagnoseResultForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiagnoseResultForSingleCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GetDiagnoseResultForSingleCardOutcomeCallable CC5GClient::getDiagnoseResultForSingleCardCallable(const GetDiagnoseResultForSingleCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiagnoseResultForSingleCardOutcome()>>(
			[this, request]()
			{
			return this->getDiagnoseResultForSingleCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GetWirelessCloudConnectorOutcome CC5GClient::getWirelessCloudConnector(const GetWirelessCloudConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWirelessCloudConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWirelessCloudConnectorOutcome(GetWirelessCloudConnectorResult(outcome.result()));
	else
		return GetWirelessCloudConnectorOutcome(outcome.error());
}

void CC5GClient::getWirelessCloudConnectorAsync(const GetWirelessCloudConnectorRequest& request, const GetWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWirelessCloudConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GetWirelessCloudConnectorOutcomeCallable CC5GClient::getWirelessCloudConnectorCallable(const GetWirelessCloudConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWirelessCloudConnectorOutcome()>>(
			[this, request]()
			{
			return this->getWirelessCloudConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::GrantNetLinkOutcome CC5GClient::grantNetLink(const GrantNetLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantNetLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantNetLinkOutcome(GrantNetLinkResult(outcome.result()));
	else
		return GrantNetLinkOutcome(outcome.error());
}

void CC5GClient::grantNetLinkAsync(const GrantNetLinkRequest& request, const GrantNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantNetLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::GrantNetLinkOutcomeCallable CC5GClient::grantNetLinkCallable(const GrantNetLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantNetLinkOutcome()>>(
			[this, request]()
			{
			return this->grantNetLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListAPNsOutcome CC5GClient::listAPNs(const ListAPNsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAPNsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAPNsOutcome(ListAPNsResult(outcome.result()));
	else
		return ListAPNsOutcome(outcome.error());
}

void CC5GClient::listAPNsAsync(const ListAPNsRequest& request, const ListAPNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAPNs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListAPNsOutcomeCallable CC5GClient::listAPNsCallable(const ListAPNsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAPNsOutcome()>>(
			[this, request]()
			{
			return this->listAPNs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListAuthorizationRulesOutcome CC5GClient::listAuthorizationRules(const ListAuthorizationRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorizationRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorizationRulesOutcome(ListAuthorizationRulesResult(outcome.result()));
	else
		return ListAuthorizationRulesOutcome(outcome.error());
}

void CC5GClient::listAuthorizationRulesAsync(const ListAuthorizationRulesRequest& request, const ListAuthorizationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorizationRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListAuthorizationRulesOutcomeCallable CC5GClient::listAuthorizationRulesCallable(const ListAuthorizationRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorizationRulesOutcome()>>(
			[this, request]()
			{
			return this->listAuthorizationRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListBatchOperateCardsTasksOutcome CC5GClient::listBatchOperateCardsTasks(const ListBatchOperateCardsTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBatchOperateCardsTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBatchOperateCardsTasksOutcome(ListBatchOperateCardsTasksResult(outcome.result()));
	else
		return ListBatchOperateCardsTasksOutcome(outcome.error());
}

void CC5GClient::listBatchOperateCardsTasksAsync(const ListBatchOperateCardsTasksRequest& request, const ListBatchOperateCardsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBatchOperateCardsTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListBatchOperateCardsTasksOutcomeCallable CC5GClient::listBatchOperateCardsTasksCallable(const ListBatchOperateCardsTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBatchOperateCardsTasksOutcome()>>(
			[this, request]()
			{
			return this->listBatchOperateCardsTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListCardDayUsagesOutcome CC5GClient::listCardDayUsages(const ListCardDayUsagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCardDayUsagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCardDayUsagesOutcome(ListCardDayUsagesResult(outcome.result()));
	else
		return ListCardDayUsagesOutcome(outcome.error());
}

void CC5GClient::listCardDayUsagesAsync(const ListCardDayUsagesRequest& request, const ListCardDayUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCardDayUsages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListCardDayUsagesOutcomeCallable CC5GClient::listCardDayUsagesCallable(const ListCardDayUsagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCardDayUsagesOutcome()>>(
			[this, request]()
			{
			return this->listCardDayUsages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListCardUsagesOutcome CC5GClient::listCardUsages(const ListCardUsagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCardUsagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCardUsagesOutcome(ListCardUsagesResult(outcome.result()));
	else
		return ListCardUsagesOutcome(outcome.error());
}

void CC5GClient::listCardUsagesAsync(const ListCardUsagesRequest& request, const ListCardUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCardUsages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListCardUsagesOutcomeCallable CC5GClient::listCardUsagesCallable(const ListCardUsagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCardUsagesOutcome()>>(
			[this, request]()
			{
			return this->listCardUsages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListCardsOutcome CC5GClient::listCards(const ListCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCardsOutcome(ListCardsResult(outcome.result()));
	else
		return ListCardsOutcome(outcome.error());
}

void CC5GClient::listCardsAsync(const ListCardsRequest& request, const ListCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListCardsOutcomeCallable CC5GClient::listCardsCallable(const ListCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCardsOutcome()>>(
			[this, request]()
			{
			return this->listCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListDataPackagesOutcome CC5GClient::listDataPackages(const ListDataPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataPackagesOutcome(ListDataPackagesResult(outcome.result()));
	else
		return ListDataPackagesOutcome(outcome.error());
}

void CC5GClient::listDataPackagesAsync(const ListDataPackagesRequest& request, const ListDataPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListDataPackagesOutcomeCallable CC5GClient::listDataPackagesCallable(const ListDataPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataPackagesOutcome()>>(
			[this, request]()
			{
			return this->listDataPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListDiagnoseInfoForSingleCardOutcome CC5GClient::listDiagnoseInfoForSingleCard(const ListDiagnoseInfoForSingleCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiagnoseInfoForSingleCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiagnoseInfoForSingleCardOutcome(ListDiagnoseInfoForSingleCardResult(outcome.result()));
	else
		return ListDiagnoseInfoForSingleCardOutcome(outcome.error());
}

void CC5GClient::listDiagnoseInfoForSingleCardAsync(const ListDiagnoseInfoForSingleCardRequest& request, const ListDiagnoseInfoForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiagnoseInfoForSingleCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListDiagnoseInfoForSingleCardOutcomeCallable CC5GClient::listDiagnoseInfoForSingleCardCallable(const ListDiagnoseInfoForSingleCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiagnoseInfoForSingleCardOutcome()>>(
			[this, request]()
			{
			return this->listDiagnoseInfoForSingleCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListGroupAuthorizationRulesOutcome CC5GClient::listGroupAuthorizationRules(const ListGroupAuthorizationRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupAuthorizationRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupAuthorizationRulesOutcome(ListGroupAuthorizationRulesResult(outcome.result()));
	else
		return ListGroupAuthorizationRulesOutcome(outcome.error());
}

void CC5GClient::listGroupAuthorizationRulesAsync(const ListGroupAuthorizationRulesRequest& request, const ListGroupAuthorizationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupAuthorizationRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListGroupAuthorizationRulesOutcomeCallable CC5GClient::listGroupAuthorizationRulesCallable(const ListGroupAuthorizationRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupAuthorizationRulesOutcome()>>(
			[this, request]()
			{
			return this->listGroupAuthorizationRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListIoTCloudConnectorBackhaulRouteOutcome CC5GClient::listIoTCloudConnectorBackhaulRoute(const ListIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIoTCloudConnectorBackhaulRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIoTCloudConnectorBackhaulRouteOutcome(ListIoTCloudConnectorBackhaulRouteResult(outcome.result()));
	else
		return ListIoTCloudConnectorBackhaulRouteOutcome(outcome.error());
}

void CC5GClient::listIoTCloudConnectorBackhaulRouteAsync(const ListIoTCloudConnectorBackhaulRouteRequest& request, const ListIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIoTCloudConnectorBackhaulRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListIoTCloudConnectorBackhaulRouteOutcomeCallable CC5GClient::listIoTCloudConnectorBackhaulRouteCallable(const ListIoTCloudConnectorBackhaulRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIoTCloudConnectorBackhaulRouteOutcome()>>(
			[this, request]()
			{
			return this->listIoTCloudConnectorBackhaulRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListOrdersOutcome CC5GClient::listOrders(const ListOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrdersOutcome(ListOrdersResult(outcome.result()));
	else
		return ListOrdersOutcome(outcome.error());
}

void CC5GClient::listOrdersAsync(const ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListOrdersOutcomeCallable CC5GClient::listOrdersCallable(const ListOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrdersOutcome()>>(
			[this, request]()
			{
			return this->listOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListRegionsOutcome CC5GClient::listRegions(const ListRegionsRequest &request) const
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

void CC5GClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListRegionsOutcomeCallable CC5GClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListWirelessCloudConnectorGroupsOutcome CC5GClient::listWirelessCloudConnectorGroups(const ListWirelessCloudConnectorGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWirelessCloudConnectorGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWirelessCloudConnectorGroupsOutcome(ListWirelessCloudConnectorGroupsResult(outcome.result()));
	else
		return ListWirelessCloudConnectorGroupsOutcome(outcome.error());
}

void CC5GClient::listWirelessCloudConnectorGroupsAsync(const ListWirelessCloudConnectorGroupsRequest& request, const ListWirelessCloudConnectorGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWirelessCloudConnectorGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListWirelessCloudConnectorGroupsOutcomeCallable CC5GClient::listWirelessCloudConnectorGroupsCallable(const ListWirelessCloudConnectorGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWirelessCloudConnectorGroupsOutcome()>>(
			[this, request]()
			{
			return this->listWirelessCloudConnectorGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListWirelessCloudConnectorsOutcome CC5GClient::listWirelessCloudConnectors(const ListWirelessCloudConnectorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWirelessCloudConnectorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWirelessCloudConnectorsOutcome(ListWirelessCloudConnectorsResult(outcome.result()));
	else
		return ListWirelessCloudConnectorsOutcome(outcome.error());
}

void CC5GClient::listWirelessCloudConnectorsAsync(const ListWirelessCloudConnectorsRequest& request, const ListWirelessCloudConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWirelessCloudConnectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListWirelessCloudConnectorsOutcomeCallable CC5GClient::listWirelessCloudConnectorsCallable(const ListWirelessCloudConnectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWirelessCloudConnectorsOutcome()>>(
			[this, request]()
			{
			return this->listWirelessCloudConnectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ListZonesOutcome CC5GClient::listZones(const ListZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListZonesOutcome(ListZonesResult(outcome.result()));
	else
		return ListZonesOutcome(outcome.error());
}

void CC5GClient::listZonesAsync(const ListZonesRequest& request, const ListZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ListZonesOutcomeCallable CC5GClient::listZonesCallable(const ListZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListZonesOutcome()>>(
			[this, request]()
			{
			return this->listZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::LockCardsOutcome CC5GClient::lockCards(const LockCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockCardsOutcome(LockCardsResult(outcome.result()));
	else
		return LockCardsOutcome(outcome.error());
}

void CC5GClient::lockCardsAsync(const LockCardsRequest& request, const LockCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::LockCardsOutcomeCallable CC5GClient::lockCardsCallable(const LockCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockCardsOutcome()>>(
			[this, request]()
			{
			return this->lockCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ModifyWirelessCloudConnectorFeatureOutcome CC5GClient::modifyWirelessCloudConnectorFeature(const ModifyWirelessCloudConnectorFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWirelessCloudConnectorFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWirelessCloudConnectorFeatureOutcome(ModifyWirelessCloudConnectorFeatureResult(outcome.result()));
	else
		return ModifyWirelessCloudConnectorFeatureOutcome(outcome.error());
}

void CC5GClient::modifyWirelessCloudConnectorFeatureAsync(const ModifyWirelessCloudConnectorFeatureRequest& request, const ModifyWirelessCloudConnectorFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWirelessCloudConnectorFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ModifyWirelessCloudConnectorFeatureOutcomeCallable CC5GClient::modifyWirelessCloudConnectorFeatureCallable(const ModifyWirelessCloudConnectorFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWirelessCloudConnectorFeatureOutcome()>>(
			[this, request]()
			{
			return this->modifyWirelessCloudConnectorFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::OpenCc5gServiceOutcome CC5GClient::openCc5gService(const OpenCc5gServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenCc5gServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenCc5gServiceOutcome(OpenCc5gServiceResult(outcome.result()));
	else
		return OpenCc5gServiceOutcome(outcome.error());
}

void CC5GClient::openCc5gServiceAsync(const OpenCc5gServiceRequest& request, const OpenCc5gServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openCc5gService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::OpenCc5gServiceOutcomeCallable CC5GClient::openCc5gServiceCallable(const OpenCc5gServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenCc5gServiceOutcome()>>(
			[this, request]()
			{
			return this->openCc5gService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::RebindCardsOutcome CC5GClient::rebindCards(const RebindCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebindCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebindCardsOutcome(RebindCardsResult(outcome.result()));
	else
		return RebindCardsOutcome(outcome.error());
}

void CC5GClient::rebindCardsAsync(const RebindCardsRequest& request, const RebindCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebindCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::RebindCardsOutcomeCallable CC5GClient::rebindCardsCallable(const RebindCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebindCardsOutcome()>>(
			[this, request]()
			{
			return this->rebindCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::RemoveWirelessCloudConnectorFromGroupOutcome CC5GClient::removeWirelessCloudConnectorFromGroup(const RemoveWirelessCloudConnectorFromGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveWirelessCloudConnectorFromGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveWirelessCloudConnectorFromGroupOutcome(RemoveWirelessCloudConnectorFromGroupResult(outcome.result()));
	else
		return RemoveWirelessCloudConnectorFromGroupOutcome(outcome.error());
}

void CC5GClient::removeWirelessCloudConnectorFromGroupAsync(const RemoveWirelessCloudConnectorFromGroupRequest& request, const RemoveWirelessCloudConnectorFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeWirelessCloudConnectorFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::RemoveWirelessCloudConnectorFromGroupOutcomeCallable CC5GClient::removeWirelessCloudConnectorFromGroupCallable(const RemoveWirelessCloudConnectorFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveWirelessCloudConnectorFromGroupOutcome()>>(
			[this, request]()
			{
			return this->removeWirelessCloudConnectorFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::ResumeCardsOutcome CC5GClient::resumeCards(const ResumeCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeCardsOutcome(ResumeCardsResult(outcome.result()));
	else
		return ResumeCardsOutcome(outcome.error());
}

void CC5GClient::resumeCardsAsync(const ResumeCardsRequest& request, const ResumeCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::ResumeCardsOutcomeCallable CC5GClient::resumeCardsCallable(const ResumeCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeCardsOutcome()>>(
			[this, request]()
			{
			return this->resumeCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::RevokeNetLinkOutcome CC5GClient::revokeNetLink(const RevokeNetLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeNetLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeNetLinkOutcome(RevokeNetLinkResult(outcome.result()));
	else
		return RevokeNetLinkOutcome(outcome.error());
}

void CC5GClient::revokeNetLinkAsync(const RevokeNetLinkRequest& request, const RevokeNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeNetLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::RevokeNetLinkOutcomeCallable CC5GClient::revokeNetLinkCallable(const RevokeNetLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeNetLinkOutcome()>>(
			[this, request]()
			{
			return this->revokeNetLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::StopCardsOutcome CC5GClient::stopCards(const StopCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCardsOutcome(StopCardsResult(outcome.result()));
	else
		return StopCardsOutcome(outcome.error());
}

void CC5GClient::stopCardsAsync(const StopCardsRequest& request, const StopCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::StopCardsOutcomeCallable CC5GClient::stopCardsCallable(const StopCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCardsOutcome()>>(
			[this, request]()
			{
			return this->stopCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::SubmitDiagnoseTaskForSingleCardOutcome CC5GClient::submitDiagnoseTaskForSingleCard(const SubmitDiagnoseTaskForSingleCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDiagnoseTaskForSingleCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDiagnoseTaskForSingleCardOutcome(SubmitDiagnoseTaskForSingleCardResult(outcome.result()));
	else
		return SubmitDiagnoseTaskForSingleCardOutcome(outcome.error());
}

void CC5GClient::submitDiagnoseTaskForSingleCardAsync(const SubmitDiagnoseTaskForSingleCardRequest& request, const SubmitDiagnoseTaskForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDiagnoseTaskForSingleCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::SubmitDiagnoseTaskForSingleCardOutcomeCallable CC5GClient::submitDiagnoseTaskForSingleCardCallable(const SubmitDiagnoseTaskForSingleCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDiagnoseTaskForSingleCardOutcome()>>(
			[this, request]()
			{
			return this->submitDiagnoseTaskForSingleCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::SwitchWirelessCloudConnectorToBusinessOutcome CC5GClient::switchWirelessCloudConnectorToBusiness(const SwitchWirelessCloudConnectorToBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchWirelessCloudConnectorToBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchWirelessCloudConnectorToBusinessOutcome(SwitchWirelessCloudConnectorToBusinessResult(outcome.result()));
	else
		return SwitchWirelessCloudConnectorToBusinessOutcome(outcome.error());
}

void CC5GClient::switchWirelessCloudConnectorToBusinessAsync(const SwitchWirelessCloudConnectorToBusinessRequest& request, const SwitchWirelessCloudConnectorToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchWirelessCloudConnectorToBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::SwitchWirelessCloudConnectorToBusinessOutcomeCallable CC5GClient::switchWirelessCloudConnectorToBusinessCallable(const SwitchWirelessCloudConnectorToBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchWirelessCloudConnectorToBusinessOutcome()>>(
			[this, request]()
			{
			return this->switchWirelessCloudConnectorToBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UnlockCardsOutcome CC5GClient::unlockCards(const UnlockCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockCardsOutcome(UnlockCardsResult(outcome.result()));
	else
		return UnlockCardsOutcome(outcome.error());
}

void CC5GClient::unlockCardsAsync(const UnlockCardsRequest& request, const UnlockCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UnlockCardsOutcomeCallable CC5GClient::unlockCardsCallable(const UnlockCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockCardsOutcome()>>(
			[this, request]()
			{
			return this->unlockCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateAuthorizationRuleOutcome CC5GClient::updateAuthorizationRule(const UpdateAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuthorizationRuleOutcome(UpdateAuthorizationRuleResult(outcome.result()));
	else
		return UpdateAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::updateAuthorizationRuleAsync(const UpdateAuthorizationRuleRequest& request, const UpdateAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateAuthorizationRuleOutcomeCallable CC5GClient::updateAuthorizationRuleCallable(const UpdateAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateBatchOperateCardsTaskOutcome CC5GClient::updateBatchOperateCardsTask(const UpdateBatchOperateCardsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBatchOperateCardsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBatchOperateCardsTaskOutcome(UpdateBatchOperateCardsTaskResult(outcome.result()));
	else
		return UpdateBatchOperateCardsTaskOutcome(outcome.error());
}

void CC5GClient::updateBatchOperateCardsTaskAsync(const UpdateBatchOperateCardsTaskRequest& request, const UpdateBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBatchOperateCardsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateBatchOperateCardsTaskOutcomeCallable CC5GClient::updateBatchOperateCardsTaskCallable(const UpdateBatchOperateCardsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBatchOperateCardsTaskOutcome()>>(
			[this, request]()
			{
			return this->updateBatchOperateCardsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateCardOutcome CC5GClient::updateCard(const UpdateCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCardOutcome(UpdateCardResult(outcome.result()));
	else
		return UpdateCardOutcome(outcome.error());
}

void CC5GClient::updateCardAsync(const UpdateCardRequest& request, const UpdateCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateCardOutcomeCallable CC5GClient::updateCardCallable(const UpdateCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCardOutcome()>>(
			[this, request]()
			{
			return this->updateCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateDNSAuthorizationRuleOutcome CC5GClient::updateDNSAuthorizationRule(const UpdateDNSAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDNSAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDNSAuthorizationRuleOutcome(UpdateDNSAuthorizationRuleResult(outcome.result()));
	else
		return UpdateDNSAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::updateDNSAuthorizationRuleAsync(const UpdateDNSAuthorizationRuleRequest& request, const UpdateDNSAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDNSAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateDNSAuthorizationRuleOutcomeCallable CC5GClient::updateDNSAuthorizationRuleCallable(const UpdateDNSAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDNSAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->updateDNSAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateGroupAuthorizationRuleOutcome CC5GClient::updateGroupAuthorizationRule(const UpdateGroupAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupAuthorizationRuleOutcome(UpdateGroupAuthorizationRuleResult(outcome.result()));
	else
		return UpdateGroupAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::updateGroupAuthorizationRuleAsync(const UpdateGroupAuthorizationRuleRequest& request, const UpdateGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroupAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateGroupAuthorizationRuleOutcomeCallable CC5GClient::updateGroupAuthorizationRuleCallable(const UpdateGroupAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->updateGroupAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateGroupDnsAuthorizationRuleOutcome CC5GClient::updateGroupDnsAuthorizationRule(const UpdateGroupDnsAuthorizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupDnsAuthorizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupDnsAuthorizationRuleOutcome(UpdateGroupDnsAuthorizationRuleResult(outcome.result()));
	else
		return UpdateGroupDnsAuthorizationRuleOutcome(outcome.error());
}

void CC5GClient::updateGroupDnsAuthorizationRuleAsync(const UpdateGroupDnsAuthorizationRuleRequest& request, const UpdateGroupDnsAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroupDnsAuthorizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateGroupDnsAuthorizationRuleOutcomeCallable CC5GClient::updateGroupDnsAuthorizationRuleCallable(const UpdateGroupDnsAuthorizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupDnsAuthorizationRuleOutcome()>>(
			[this, request]()
			{
			return this->updateGroupDnsAuthorizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateWirelessCloudConnectorOutcome CC5GClient::updateWirelessCloudConnector(const UpdateWirelessCloudConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWirelessCloudConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWirelessCloudConnectorOutcome(UpdateWirelessCloudConnectorResult(outcome.result()));
	else
		return UpdateWirelessCloudConnectorOutcome(outcome.error());
}

void CC5GClient::updateWirelessCloudConnectorAsync(const UpdateWirelessCloudConnectorRequest& request, const UpdateWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWirelessCloudConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateWirelessCloudConnectorOutcomeCallable CC5GClient::updateWirelessCloudConnectorCallable(const UpdateWirelessCloudConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWirelessCloudConnectorOutcome()>>(
			[this, request]()
			{
			return this->updateWirelessCloudConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CC5GClient::UpdateWirelessCloudConnectorGroupOutcome CC5GClient::updateWirelessCloudConnectorGroup(const UpdateWirelessCloudConnectorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWirelessCloudConnectorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWirelessCloudConnectorGroupOutcome(UpdateWirelessCloudConnectorGroupResult(outcome.result()));
	else
		return UpdateWirelessCloudConnectorGroupOutcome(outcome.error());
}

void CC5GClient::updateWirelessCloudConnectorGroupAsync(const UpdateWirelessCloudConnectorGroupRequest& request, const UpdateWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWirelessCloudConnectorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CC5GClient::UpdateWirelessCloudConnectorGroupOutcomeCallable CC5GClient::updateWirelessCloudConnectorGroupCallable(const UpdateWirelessCloudConnectorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWirelessCloudConnectorGroupOutcome()>>(
			[this, request]()
			{
			return this->updateWirelessCloudConnectorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

