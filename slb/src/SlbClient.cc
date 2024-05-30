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

#include <alibabacloud/slb/SlbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

namespace
{
	const std::string SERVICE_NAME = "Slb";
}

SlbClient::SlbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::SlbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::SlbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::~SlbClient()
{}

SlbClient::AddAccessControlListEntryOutcome SlbClient::addAccessControlListEntry(const AddAccessControlListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAccessControlListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAccessControlListEntryOutcome(AddAccessControlListEntryResult(outcome.result()));
	else
		return AddAccessControlListEntryOutcome(outcome.error());
}

void SlbClient::addAccessControlListEntryAsync(const AddAccessControlListEntryRequest& request, const AddAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAccessControlListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddAccessControlListEntryOutcomeCallable SlbClient::addAccessControlListEntryCallable(const AddAccessControlListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAccessControlListEntryOutcome()>>(
			[this, request]()
			{
			return this->addAccessControlListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::AddBackendServersOutcome SlbClient::addBackendServers(const AddBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBackendServersOutcome(AddBackendServersResult(outcome.result()));
	else
		return AddBackendServersOutcome(outcome.error());
}

void SlbClient::addBackendServersAsync(const AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddBackendServersOutcomeCallable SlbClient::addBackendServersCallable(const AddBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBackendServersOutcome()>>(
			[this, request]()
			{
			return this->addBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::AddListenerWhiteListItemOutcome SlbClient::addListenerWhiteListItem(const AddListenerWhiteListItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddListenerWhiteListItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddListenerWhiteListItemOutcome(AddListenerWhiteListItemResult(outcome.result()));
	else
		return AddListenerWhiteListItemOutcome(outcome.error());
}

void SlbClient::addListenerWhiteListItemAsync(const AddListenerWhiteListItemRequest& request, const AddListenerWhiteListItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addListenerWhiteListItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddListenerWhiteListItemOutcomeCallable SlbClient::addListenerWhiteListItemCallable(const AddListenerWhiteListItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddListenerWhiteListItemOutcome()>>(
			[this, request]()
			{
			return this->addListenerWhiteListItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::AddTagsOutcome SlbClient::addTags(const AddTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsOutcome(AddTagsResult(outcome.result()));
	else
		return AddTagsOutcome(outcome.error());
}

void SlbClient::addTagsAsync(const AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddTagsOutcomeCallable SlbClient::addTagsCallable(const AddTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsOutcome()>>(
			[this, request]()
			{
			return this->addTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::AddVServerGroupBackendServersOutcome SlbClient::addVServerGroupBackendServers(const AddVServerGroupBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVServerGroupBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVServerGroupBackendServersOutcome(AddVServerGroupBackendServersResult(outcome.result()));
	else
		return AddVServerGroupBackendServersOutcome(outcome.error());
}

void SlbClient::addVServerGroupBackendServersAsync(const AddVServerGroupBackendServersRequest& request, const AddVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVServerGroupBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddVServerGroupBackendServersOutcomeCallable SlbClient::addVServerGroupBackendServersCallable(const AddVServerGroupBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVServerGroupBackendServersOutcome()>>(
			[this, request]()
			{
			return this->addVServerGroupBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateAccessControlListOutcome SlbClient::createAccessControlList(const CreateAccessControlListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessControlListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessControlListOutcome(CreateAccessControlListResult(outcome.result()));
	else
		return CreateAccessControlListOutcome(outcome.error());
}

void SlbClient::createAccessControlListAsync(const CreateAccessControlListRequest& request, const CreateAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessControlList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateAccessControlListOutcomeCallable SlbClient::createAccessControlListCallable(const CreateAccessControlListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessControlListOutcome()>>(
			[this, request]()
			{
			return this->createAccessControlList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateDomainExtensionOutcome SlbClient::createDomainExtension(const CreateDomainExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainExtensionOutcome(CreateDomainExtensionResult(outcome.result()));
	else
		return CreateDomainExtensionOutcome(outcome.error());
}

void SlbClient::createDomainExtensionAsync(const CreateDomainExtensionRequest& request, const CreateDomainExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomainExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateDomainExtensionOutcomeCallable SlbClient::createDomainExtensionCallable(const CreateDomainExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainExtensionOutcome()>>(
			[this, request]()
			{
			return this->createDomainExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerOutcome SlbClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.result()));
	else
		return CreateLoadBalancerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerOutcomeCallable SlbClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerHTTPListenerOutcome SlbClient::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(CreateLoadBalancerHTTPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerHTTPListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerHTTPListenerAsync(const CreateLoadBalancerHTTPListenerRequest& request, const CreateLoadBalancerHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerHTTPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerHTTPListenerOutcomeCallable SlbClient::createLoadBalancerHTTPListenerCallable(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerHTTPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerHTTPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerHTTPSListenerOutcome SlbClient::createLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerHTTPSListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerHTTPSListenerOutcome(CreateLoadBalancerHTTPSListenerResult(outcome.result()));
	else
		return CreateLoadBalancerHTTPSListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerHTTPSListenerAsync(const CreateLoadBalancerHTTPSListenerRequest& request, const CreateLoadBalancerHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerHTTPSListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerHTTPSListenerOutcomeCallable SlbClient::createLoadBalancerHTTPSListenerCallable(const CreateLoadBalancerHTTPSListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerHTTPSListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerHTTPSListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerTCPListenerOutcome SlbClient::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(CreateLoadBalancerTCPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerTCPListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerTCPListenerAsync(const CreateLoadBalancerTCPListenerRequest& request, const CreateLoadBalancerTCPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerTCPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerTCPListenerOutcomeCallable SlbClient::createLoadBalancerTCPListenerCallable(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerTCPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerTCPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerUDPListenerOutcome SlbClient::createLoadBalancerUDPListener(const CreateLoadBalancerUDPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerUDPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerUDPListenerOutcome(CreateLoadBalancerUDPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerUDPListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerUDPListenerAsync(const CreateLoadBalancerUDPListenerRequest& request, const CreateLoadBalancerUDPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerUDPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerUDPListenerOutcomeCallable SlbClient::createLoadBalancerUDPListenerCallable(const CreateLoadBalancerUDPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerUDPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerUDPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateMasterSlaveServerGroupOutcome SlbClient::createMasterSlaveServerGroup(const CreateMasterSlaveServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMasterSlaveServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMasterSlaveServerGroupOutcome(CreateMasterSlaveServerGroupResult(outcome.result()));
	else
		return CreateMasterSlaveServerGroupOutcome(outcome.error());
}

void SlbClient::createMasterSlaveServerGroupAsync(const CreateMasterSlaveServerGroupRequest& request, const CreateMasterSlaveServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMasterSlaveServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateMasterSlaveServerGroupOutcomeCallable SlbClient::createMasterSlaveServerGroupCallable(const CreateMasterSlaveServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMasterSlaveServerGroupOutcome()>>(
			[this, request]()
			{
			return this->createMasterSlaveServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateRulesOutcome SlbClient::createRules(const CreateRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRulesOutcome(CreateRulesResult(outcome.result()));
	else
		return CreateRulesOutcome(outcome.error());
}

void SlbClient::createRulesAsync(const CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateRulesOutcomeCallable SlbClient::createRulesCallable(const CreateRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRulesOutcome()>>(
			[this, request]()
			{
			return this->createRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateTLSCipherPolicyOutcome SlbClient::createTLSCipherPolicy(const CreateTLSCipherPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTLSCipherPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTLSCipherPolicyOutcome(CreateTLSCipherPolicyResult(outcome.result()));
	else
		return CreateTLSCipherPolicyOutcome(outcome.error());
}

void SlbClient::createTLSCipherPolicyAsync(const CreateTLSCipherPolicyRequest& request, const CreateTLSCipherPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTLSCipherPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateTLSCipherPolicyOutcomeCallable SlbClient::createTLSCipherPolicyCallable(const CreateTLSCipherPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTLSCipherPolicyOutcome()>>(
			[this, request]()
			{
			return this->createTLSCipherPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateVServerGroupOutcome SlbClient::createVServerGroup(const CreateVServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVServerGroupOutcome(CreateVServerGroupResult(outcome.result()));
	else
		return CreateVServerGroupOutcome(outcome.error());
}

void SlbClient::createVServerGroupAsync(const CreateVServerGroupRequest& request, const CreateVServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateVServerGroupOutcomeCallable SlbClient::createVServerGroupCallable(const CreateVServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVServerGroupOutcome()>>(
			[this, request]()
			{
			return this->createVServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteAccessControlListOutcome SlbClient::deleteAccessControlList(const DeleteAccessControlListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessControlListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessControlListOutcome(DeleteAccessControlListResult(outcome.result()));
	else
		return DeleteAccessControlListOutcome(outcome.error());
}

void SlbClient::deleteAccessControlListAsync(const DeleteAccessControlListRequest& request, const DeleteAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessControlList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteAccessControlListOutcomeCallable SlbClient::deleteAccessControlListCallable(const DeleteAccessControlListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessControlListOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessControlList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteAccessLogsDownloadAttributeOutcome SlbClient::deleteAccessLogsDownloadAttribute(const DeleteAccessLogsDownloadAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessLogsDownloadAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessLogsDownloadAttributeOutcome(DeleteAccessLogsDownloadAttributeResult(outcome.result()));
	else
		return DeleteAccessLogsDownloadAttributeOutcome(outcome.error());
}

void SlbClient::deleteAccessLogsDownloadAttributeAsync(const DeleteAccessLogsDownloadAttributeRequest& request, const DeleteAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessLogsDownloadAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteAccessLogsDownloadAttributeOutcomeCallable SlbClient::deleteAccessLogsDownloadAttributeCallable(const DeleteAccessLogsDownloadAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessLogsDownloadAttributeOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessLogsDownloadAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteCACertificateOutcome SlbClient::deleteCACertificate(const DeleteCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCACertificateOutcome(DeleteCACertificateResult(outcome.result()));
	else
		return DeleteCACertificateOutcome(outcome.error());
}

void SlbClient::deleteCACertificateAsync(const DeleteCACertificateRequest& request, const DeleteCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteCACertificateOutcomeCallable SlbClient::deleteCACertificateCallable(const DeleteCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCACertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteDomainExtensionOutcome SlbClient::deleteDomainExtension(const DeleteDomainExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainExtensionOutcome(DeleteDomainExtensionResult(outcome.result()));
	else
		return DeleteDomainExtensionOutcome(outcome.error());
}

void SlbClient::deleteDomainExtensionAsync(const DeleteDomainExtensionRequest& request, const DeleteDomainExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteDomainExtensionOutcomeCallable SlbClient::deleteDomainExtensionCallable(const DeleteDomainExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainExtensionOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteLoadBalancerOutcome SlbClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.result()));
	else
		return DeleteLoadBalancerOutcome(outcome.error());
}

void SlbClient::deleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteLoadBalancerOutcomeCallable SlbClient::deleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteLoadBalancerListenerOutcome SlbClient::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(DeleteLoadBalancerListenerResult(outcome.result()));
	else
		return DeleteLoadBalancerListenerOutcome(outcome.error());
}

void SlbClient::deleteLoadBalancerListenerAsync(const DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteLoadBalancerListenerOutcomeCallable SlbClient::deleteLoadBalancerListenerCallable(const DeleteLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteMasterSlaveServerGroupOutcome SlbClient::deleteMasterSlaveServerGroup(const DeleteMasterSlaveServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMasterSlaveServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMasterSlaveServerGroupOutcome(DeleteMasterSlaveServerGroupResult(outcome.result()));
	else
		return DeleteMasterSlaveServerGroupOutcome(outcome.error());
}

void SlbClient::deleteMasterSlaveServerGroupAsync(const DeleteMasterSlaveServerGroupRequest& request, const DeleteMasterSlaveServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMasterSlaveServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteMasterSlaveServerGroupOutcomeCallable SlbClient::deleteMasterSlaveServerGroupCallable(const DeleteMasterSlaveServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMasterSlaveServerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteMasterSlaveServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteRulesOutcome SlbClient::deleteRules(const DeleteRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRulesOutcome(DeleteRulesResult(outcome.result()));
	else
		return DeleteRulesOutcome(outcome.error());
}

void SlbClient::deleteRulesAsync(const DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteRulesOutcomeCallable SlbClient::deleteRulesCallable(const DeleteRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteServerCertificateOutcome SlbClient::deleteServerCertificate(const DeleteServerCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServerCertificateOutcome(DeleteServerCertificateResult(outcome.result()));
	else
		return DeleteServerCertificateOutcome(outcome.error());
}

void SlbClient::deleteServerCertificateAsync(const DeleteServerCertificateRequest& request, const DeleteServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteServerCertificateOutcomeCallable SlbClient::deleteServerCertificateCallable(const DeleteServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteTLSCipherPolicyOutcome SlbClient::deleteTLSCipherPolicy(const DeleteTLSCipherPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTLSCipherPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTLSCipherPolicyOutcome(DeleteTLSCipherPolicyResult(outcome.result()));
	else
		return DeleteTLSCipherPolicyOutcome(outcome.error());
}

void SlbClient::deleteTLSCipherPolicyAsync(const DeleteTLSCipherPolicyRequest& request, const DeleteTLSCipherPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTLSCipherPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteTLSCipherPolicyOutcomeCallable SlbClient::deleteTLSCipherPolicyCallable(const DeleteTLSCipherPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTLSCipherPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteTLSCipherPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteVServerGroupOutcome SlbClient::deleteVServerGroup(const DeleteVServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVServerGroupOutcome(DeleteVServerGroupResult(outcome.result()));
	else
		return DeleteVServerGroupOutcome(outcome.error());
}

void SlbClient::deleteVServerGroupAsync(const DeleteVServerGroupRequest& request, const DeleteVServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteVServerGroupOutcomeCallable SlbClient::deleteVServerGroupCallable(const DeleteVServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVServerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteVServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeAccessControlListAttributeOutcome SlbClient::describeAccessControlListAttribute(const DescribeAccessControlListAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessControlListAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessControlListAttributeOutcome(DescribeAccessControlListAttributeResult(outcome.result()));
	else
		return DescribeAccessControlListAttributeOutcome(outcome.error());
}

void SlbClient::describeAccessControlListAttributeAsync(const DescribeAccessControlListAttributeRequest& request, const DescribeAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessControlListAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeAccessControlListAttributeOutcomeCallable SlbClient::describeAccessControlListAttributeCallable(const DescribeAccessControlListAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessControlListAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAccessControlListAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeAccessControlListsOutcome SlbClient::describeAccessControlLists(const DescribeAccessControlListsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessControlListsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessControlListsOutcome(DescribeAccessControlListsResult(outcome.result()));
	else
		return DescribeAccessControlListsOutcome(outcome.error());
}

void SlbClient::describeAccessControlListsAsync(const DescribeAccessControlListsRequest& request, const DescribeAccessControlListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessControlLists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeAccessControlListsOutcomeCallable SlbClient::describeAccessControlListsCallable(const DescribeAccessControlListsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessControlListsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessControlLists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeAccessLogsDownloadAttributeOutcome SlbClient::describeAccessLogsDownloadAttribute(const DescribeAccessLogsDownloadAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessLogsDownloadAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessLogsDownloadAttributeOutcome(DescribeAccessLogsDownloadAttributeResult(outcome.result()));
	else
		return DescribeAccessLogsDownloadAttributeOutcome(outcome.error());
}

void SlbClient::describeAccessLogsDownloadAttributeAsync(const DescribeAccessLogsDownloadAttributeRequest& request, const DescribeAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessLogsDownloadAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeAccessLogsDownloadAttributeOutcomeCallable SlbClient::describeAccessLogsDownloadAttributeCallable(const DescribeAccessLogsDownloadAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessLogsDownloadAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAccessLogsDownloadAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeAvailableResourceOutcome SlbClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
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

void SlbClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeAvailableResourceOutcomeCallable SlbClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeCACertificatesOutcome SlbClient::describeCACertificates(const DescribeCACertificatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCACertificatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCACertificatesOutcome(DescribeCACertificatesResult(outcome.result()));
	else
		return DescribeCACertificatesOutcome(outcome.error());
}

void SlbClient::describeCACertificatesAsync(const DescribeCACertificatesRequest& request, const DescribeCACertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCACertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeCACertificatesOutcomeCallable SlbClient::describeCACertificatesCallable(const DescribeCACertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCACertificatesOutcome()>>(
			[this, request]()
			{
			return this->describeCACertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeDomainExtensionAttributeOutcome SlbClient::describeDomainExtensionAttribute(const DescribeDomainExtensionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainExtensionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainExtensionAttributeOutcome(DescribeDomainExtensionAttributeResult(outcome.result()));
	else
		return DescribeDomainExtensionAttributeOutcome(outcome.error());
}

void SlbClient::describeDomainExtensionAttributeAsync(const DescribeDomainExtensionAttributeRequest& request, const DescribeDomainExtensionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainExtensionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeDomainExtensionAttributeOutcomeCallable SlbClient::describeDomainExtensionAttributeCallable(const DescribeDomainExtensionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainExtensionAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainExtensionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeDomainExtensionsOutcome SlbClient::describeDomainExtensions(const DescribeDomainExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainExtensionsOutcome(DescribeDomainExtensionsResult(outcome.result()));
	else
		return DescribeDomainExtensionsOutcome(outcome.error());
}

void SlbClient::describeDomainExtensionsAsync(const DescribeDomainExtensionsRequest& request, const DescribeDomainExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeDomainExtensionsOutcomeCallable SlbClient::describeDomainExtensionsCallable(const DescribeDomainExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainExtensionsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeHealthStatusOutcome SlbClient::describeHealthStatus(const DescribeHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthStatusOutcome(DescribeHealthStatusResult(outcome.result()));
	else
		return DescribeHealthStatusOutcome(outcome.error());
}

void SlbClient::describeHealthStatusAsync(const DescribeHealthStatusRequest& request, const DescribeHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeHealthStatusOutcomeCallable SlbClient::describeHealthStatusCallable(const DescribeHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeHighDefinationMonitorOutcome SlbClient::describeHighDefinationMonitor(const DescribeHighDefinationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHighDefinationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHighDefinationMonitorOutcome(DescribeHighDefinationMonitorResult(outcome.result()));
	else
		return DescribeHighDefinationMonitorOutcome(outcome.error());
}

void SlbClient::describeHighDefinationMonitorAsync(const DescribeHighDefinationMonitorRequest& request, const DescribeHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHighDefinationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeHighDefinationMonitorOutcomeCallable SlbClient::describeHighDefinationMonitorCallable(const DescribeHighDefinationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHighDefinationMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeHighDefinationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeListenerAccessControlAttributeOutcome SlbClient::describeListenerAccessControlAttribute(const DescribeListenerAccessControlAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeListenerAccessControlAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeListenerAccessControlAttributeOutcome(DescribeListenerAccessControlAttributeResult(outcome.result()));
	else
		return DescribeListenerAccessControlAttributeOutcome(outcome.error());
}

void SlbClient::describeListenerAccessControlAttributeAsync(const DescribeListenerAccessControlAttributeRequest& request, const DescribeListenerAccessControlAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeListenerAccessControlAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeListenerAccessControlAttributeOutcomeCallable SlbClient::describeListenerAccessControlAttributeCallable(const DescribeListenerAccessControlAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeListenerAccessControlAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeListenerAccessControlAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerAttributeOutcome SlbClient::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(DescribeLoadBalancerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerAttributeAsync(const DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerAttributeOutcomeCallable SlbClient::describeLoadBalancerAttributeCallable(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerHTTPListenerAttributeOutcome SlbClient::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(DescribeLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerHTTPListenerAttributeAsync(const DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerHTTPListenerAttributeCallable(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerHTTPSListenerAttributeOutcome SlbClient::describeLoadBalancerHTTPSListenerAttribute(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(DescribeLoadBalancerHTTPSListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerHTTPSListenerAttributeAsync(const DescribeLoadBalancerHTTPSListenerAttributeRequest& request, const DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerHTTPSListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerHTTPSListenerAttributeCallable(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerHTTPSListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerHTTPSListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerListenersOutcome SlbClient::describeLoadBalancerListeners(const DescribeLoadBalancerListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerListenersOutcome(DescribeLoadBalancerListenersResult(outcome.result()));
	else
		return DescribeLoadBalancerListenersOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerListenersAsync(const DescribeLoadBalancerListenersRequest& request, const DescribeLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerListenersOutcomeCallable SlbClient::describeLoadBalancerListenersCallable(const DescribeLoadBalancerListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerListenersOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerTCPListenerAttributeOutcome SlbClient::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(DescribeLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerTCPListenerAttributeAsync(const DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerTCPListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerTCPListenerAttributeCallable(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerUDPListenerAttributeOutcome SlbClient::describeLoadBalancerUDPListenerAttribute(const DescribeLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerUDPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerUDPListenerAttributeOutcome(DescribeLoadBalancerUDPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerUDPListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerUDPListenerAttributeAsync(const DescribeLoadBalancerUDPListenerAttributeRequest& request, const DescribeLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerUDPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerUDPListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerUDPListenerAttributeCallable(const DescribeLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerUDPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerUDPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancersOutcome SlbClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.result()));
	else
		return DescribeLoadBalancersOutcome(outcome.error());
}

void SlbClient::describeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancersOutcomeCallable SlbClient::describeLoadBalancersCallable(const DescribeLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeMasterSlaveServerGroupAttributeOutcome SlbClient::describeMasterSlaveServerGroupAttribute(const DescribeMasterSlaveServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMasterSlaveServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMasterSlaveServerGroupAttributeOutcome(DescribeMasterSlaveServerGroupAttributeResult(outcome.result()));
	else
		return DescribeMasterSlaveServerGroupAttributeOutcome(outcome.error());
}

void SlbClient::describeMasterSlaveServerGroupAttributeAsync(const DescribeMasterSlaveServerGroupAttributeRequest& request, const DescribeMasterSlaveServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMasterSlaveServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeMasterSlaveServerGroupAttributeOutcomeCallable SlbClient::describeMasterSlaveServerGroupAttributeCallable(const DescribeMasterSlaveServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMasterSlaveServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeMasterSlaveServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeMasterSlaveServerGroupsOutcome SlbClient::describeMasterSlaveServerGroups(const DescribeMasterSlaveServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMasterSlaveServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMasterSlaveServerGroupsOutcome(DescribeMasterSlaveServerGroupsResult(outcome.result()));
	else
		return DescribeMasterSlaveServerGroupsOutcome(outcome.error());
}

void SlbClient::describeMasterSlaveServerGroupsAsync(const DescribeMasterSlaveServerGroupsRequest& request, const DescribeMasterSlaveServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMasterSlaveServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeMasterSlaveServerGroupsOutcomeCallable SlbClient::describeMasterSlaveServerGroupsCallable(const DescribeMasterSlaveServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMasterSlaveServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeMasterSlaveServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeRegionsOutcome SlbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void SlbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeRegionsOutcomeCallable SlbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeRuleAttributeOutcome SlbClient::describeRuleAttribute(const DescribeRuleAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRuleAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRuleAttributeOutcome(DescribeRuleAttributeResult(outcome.result()));
	else
		return DescribeRuleAttributeOutcome(outcome.error());
}

void SlbClient::describeRuleAttributeAsync(const DescribeRuleAttributeRequest& request, const DescribeRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRuleAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeRuleAttributeOutcomeCallable SlbClient::describeRuleAttributeCallable(const DescribeRuleAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRuleAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeRuleAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeRulesOutcome SlbClient::describeRules(const DescribeRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRulesOutcome(DescribeRulesResult(outcome.result()));
	else
		return DescribeRulesOutcome(outcome.error());
}

void SlbClient::describeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeRulesOutcomeCallable SlbClient::describeRulesCallable(const DescribeRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
			[this, request]()
			{
			return this->describeRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeServerCertificatesOutcome SlbClient::describeServerCertificates(const DescribeServerCertificatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerCertificatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerCertificatesOutcome(DescribeServerCertificatesResult(outcome.result()));
	else
		return DescribeServerCertificatesOutcome(outcome.error());
}

void SlbClient::describeServerCertificatesAsync(const DescribeServerCertificatesRequest& request, const DescribeServerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerCertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeServerCertificatesOutcomeCallable SlbClient::describeServerCertificatesCallable(const DescribeServerCertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerCertificatesOutcome()>>(
			[this, request]()
			{
			return this->describeServerCertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeTagsOutcome SlbClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void SlbClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeTagsOutcomeCallable SlbClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeVServerGroupAttributeOutcome SlbClient::describeVServerGroupAttribute(const DescribeVServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVServerGroupAttributeOutcome(DescribeVServerGroupAttributeResult(outcome.result()));
	else
		return DescribeVServerGroupAttributeOutcome(outcome.error());
}

void SlbClient::describeVServerGroupAttributeAsync(const DescribeVServerGroupAttributeRequest& request, const DescribeVServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeVServerGroupAttributeOutcomeCallable SlbClient::describeVServerGroupAttributeCallable(const DescribeVServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeVServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeVServerGroupsOutcome SlbClient::describeVServerGroups(const DescribeVServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVServerGroupsOutcome(DescribeVServerGroupsResult(outcome.result()));
	else
		return DescribeVServerGroupsOutcome(outcome.error());
}

void SlbClient::describeVServerGroupsAsync(const DescribeVServerGroupsRequest& request, const DescribeVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeVServerGroupsOutcomeCallable SlbClient::describeVServerGroupsCallable(const DescribeVServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeVServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeZonesOutcome SlbClient::describeZones(const DescribeZonesRequest &request) const
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

void SlbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeZonesOutcomeCallable SlbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::EnableHighDefinationMonitorOutcome SlbClient::enableHighDefinationMonitor(const EnableHighDefinationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableHighDefinationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableHighDefinationMonitorOutcome(EnableHighDefinationMonitorResult(outcome.result()));
	else
		return EnableHighDefinationMonitorOutcome(outcome.error());
}

void SlbClient::enableHighDefinationMonitorAsync(const EnableHighDefinationMonitorRequest& request, const EnableHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableHighDefinationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::EnableHighDefinationMonitorOutcomeCallable SlbClient::enableHighDefinationMonitorCallable(const EnableHighDefinationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableHighDefinationMonitorOutcome()>>(
			[this, request]()
			{
			return this->enableHighDefinationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ListTLSCipherPoliciesOutcome SlbClient::listTLSCipherPolicies(const ListTLSCipherPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTLSCipherPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTLSCipherPoliciesOutcome(ListTLSCipherPoliciesResult(outcome.result()));
	else
		return ListTLSCipherPoliciesOutcome(outcome.error());
}

void SlbClient::listTLSCipherPoliciesAsync(const ListTLSCipherPoliciesRequest& request, const ListTLSCipherPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTLSCipherPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ListTLSCipherPoliciesOutcomeCallable SlbClient::listTLSCipherPoliciesCallable(const ListTLSCipherPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTLSCipherPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listTLSCipherPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ListTagResourcesOutcome SlbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void SlbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ListTagResourcesOutcomeCallable SlbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyHighDefinationMonitorOutcome SlbClient::modifyHighDefinationMonitor(const ModifyHighDefinationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHighDefinationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHighDefinationMonitorOutcome(ModifyHighDefinationMonitorResult(outcome.result()));
	else
		return ModifyHighDefinationMonitorOutcome(outcome.error());
}

void SlbClient::modifyHighDefinationMonitorAsync(const ModifyHighDefinationMonitorRequest& request, const ModifyHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHighDefinationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyHighDefinationMonitorOutcomeCallable SlbClient::modifyHighDefinationMonitorCallable(const ModifyHighDefinationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHighDefinationMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyHighDefinationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyLoadBalancerInstanceChargeTypeOutcome SlbClient::modifyLoadBalancerInstanceChargeType(const ModifyLoadBalancerInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoadBalancerInstanceChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoadBalancerInstanceChargeTypeOutcome(ModifyLoadBalancerInstanceChargeTypeResult(outcome.result()));
	else
		return ModifyLoadBalancerInstanceChargeTypeOutcome(outcome.error());
}

void SlbClient::modifyLoadBalancerInstanceChargeTypeAsync(const ModifyLoadBalancerInstanceChargeTypeRequest& request, const ModifyLoadBalancerInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoadBalancerInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyLoadBalancerInstanceChargeTypeOutcomeCallable SlbClient::modifyLoadBalancerInstanceChargeTypeCallable(const ModifyLoadBalancerInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyLoadBalancerInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyLoadBalancerInstanceSpecOutcome SlbClient::modifyLoadBalancerInstanceSpec(const ModifyLoadBalancerInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoadBalancerInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoadBalancerInstanceSpecOutcome(ModifyLoadBalancerInstanceSpecResult(outcome.result()));
	else
		return ModifyLoadBalancerInstanceSpecOutcome(outcome.error());
}

void SlbClient::modifyLoadBalancerInstanceSpecAsync(const ModifyLoadBalancerInstanceSpecRequest& request, const ModifyLoadBalancerInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoadBalancerInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyLoadBalancerInstanceSpecOutcomeCallable SlbClient::modifyLoadBalancerInstanceSpecCallable(const ModifyLoadBalancerInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyLoadBalancerInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyLoadBalancerInternetSpecOutcome SlbClient::modifyLoadBalancerInternetSpec(const ModifyLoadBalancerInternetSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoadBalancerInternetSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoadBalancerInternetSpecOutcome(ModifyLoadBalancerInternetSpecResult(outcome.result()));
	else
		return ModifyLoadBalancerInternetSpecOutcome(outcome.error());
}

void SlbClient::modifyLoadBalancerInternetSpecAsync(const ModifyLoadBalancerInternetSpecRequest& request, const ModifyLoadBalancerInternetSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoadBalancerInternetSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyLoadBalancerInternetSpecOutcomeCallable SlbClient::modifyLoadBalancerInternetSpecCallable(const ModifyLoadBalancerInternetSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerInternetSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyLoadBalancerInternetSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyLoadBalancerPayTypeOutcome SlbClient::modifyLoadBalancerPayType(const ModifyLoadBalancerPayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoadBalancerPayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoadBalancerPayTypeOutcome(ModifyLoadBalancerPayTypeResult(outcome.result()));
	else
		return ModifyLoadBalancerPayTypeOutcome(outcome.error());
}

void SlbClient::modifyLoadBalancerPayTypeAsync(const ModifyLoadBalancerPayTypeRequest& request, const ModifyLoadBalancerPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoadBalancerPayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyLoadBalancerPayTypeOutcomeCallable SlbClient::modifyLoadBalancerPayTypeCallable(const ModifyLoadBalancerPayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerPayTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyLoadBalancerPayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::ModifyVServerGroupBackendServersOutcome SlbClient::modifyVServerGroupBackendServers(const ModifyVServerGroupBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVServerGroupBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVServerGroupBackendServersOutcome(ModifyVServerGroupBackendServersResult(outcome.result()));
	else
		return ModifyVServerGroupBackendServersOutcome(outcome.error());
}

void SlbClient::modifyVServerGroupBackendServersAsync(const ModifyVServerGroupBackendServersRequest& request, const ModifyVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVServerGroupBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::ModifyVServerGroupBackendServersOutcomeCallable SlbClient::modifyVServerGroupBackendServersCallable(const ModifyVServerGroupBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVServerGroupBackendServersOutcome()>>(
			[this, request]()
			{
			return this->modifyVServerGroupBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::MoveResourceGroupOutcome SlbClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void SlbClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::MoveResourceGroupOutcomeCallable SlbClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveAccessControlListEntryOutcome SlbClient::removeAccessControlListEntry(const RemoveAccessControlListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAccessControlListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAccessControlListEntryOutcome(RemoveAccessControlListEntryResult(outcome.result()));
	else
		return RemoveAccessControlListEntryOutcome(outcome.error());
}

void SlbClient::removeAccessControlListEntryAsync(const RemoveAccessControlListEntryRequest& request, const RemoveAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAccessControlListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveAccessControlListEntryOutcomeCallable SlbClient::removeAccessControlListEntryCallable(const RemoveAccessControlListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAccessControlListEntryOutcome()>>(
			[this, request]()
			{
			return this->removeAccessControlListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveBackendServersOutcome SlbClient::removeBackendServers(const RemoveBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackendServersOutcome(RemoveBackendServersResult(outcome.result()));
	else
		return RemoveBackendServersOutcome(outcome.error());
}

void SlbClient::removeBackendServersAsync(const RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveBackendServersOutcomeCallable SlbClient::removeBackendServersCallable(const RemoveBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackendServersOutcome()>>(
			[this, request]()
			{
			return this->removeBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveListenerWhiteListItemOutcome SlbClient::removeListenerWhiteListItem(const RemoveListenerWhiteListItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveListenerWhiteListItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveListenerWhiteListItemOutcome(RemoveListenerWhiteListItemResult(outcome.result()));
	else
		return RemoveListenerWhiteListItemOutcome(outcome.error());
}

void SlbClient::removeListenerWhiteListItemAsync(const RemoveListenerWhiteListItemRequest& request, const RemoveListenerWhiteListItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeListenerWhiteListItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveListenerWhiteListItemOutcomeCallable SlbClient::removeListenerWhiteListItemCallable(const RemoveListenerWhiteListItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveListenerWhiteListItemOutcome()>>(
			[this, request]()
			{
			return this->removeListenerWhiteListItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveTagsOutcome SlbClient::removeTags(const RemoveTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsOutcome(RemoveTagsResult(outcome.result()));
	else
		return RemoveTagsOutcome(outcome.error());
}

void SlbClient::removeTagsAsync(const RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveTagsOutcomeCallable SlbClient::removeTagsCallable(const RemoveTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsOutcome()>>(
			[this, request]()
			{
			return this->removeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveVServerGroupBackendServersOutcome SlbClient::removeVServerGroupBackendServers(const RemoveVServerGroupBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveVServerGroupBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveVServerGroupBackendServersOutcome(RemoveVServerGroupBackendServersResult(outcome.result()));
	else
		return RemoveVServerGroupBackendServersOutcome(outcome.error());
}

void SlbClient::removeVServerGroupBackendServersAsync(const RemoveVServerGroupBackendServersRequest& request, const RemoveVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeVServerGroupBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveVServerGroupBackendServersOutcomeCallable SlbClient::removeVServerGroupBackendServersCallable(const RemoveVServerGroupBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveVServerGroupBackendServersOutcome()>>(
			[this, request]()
			{
			return this->removeVServerGroupBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetAccessControlListAttributeOutcome SlbClient::setAccessControlListAttribute(const SetAccessControlListAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAccessControlListAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAccessControlListAttributeOutcome(SetAccessControlListAttributeResult(outcome.result()));
	else
		return SetAccessControlListAttributeOutcome(outcome.error());
}

void SlbClient::setAccessControlListAttributeAsync(const SetAccessControlListAttributeRequest& request, const SetAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAccessControlListAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetAccessControlListAttributeOutcomeCallable SlbClient::setAccessControlListAttributeCallable(const SetAccessControlListAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAccessControlListAttributeOutcome()>>(
			[this, request]()
			{
			return this->setAccessControlListAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetAccessLogsDownloadAttributeOutcome SlbClient::setAccessLogsDownloadAttribute(const SetAccessLogsDownloadAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAccessLogsDownloadAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAccessLogsDownloadAttributeOutcome(SetAccessLogsDownloadAttributeResult(outcome.result()));
	else
		return SetAccessLogsDownloadAttributeOutcome(outcome.error());
}

void SlbClient::setAccessLogsDownloadAttributeAsync(const SetAccessLogsDownloadAttributeRequest& request, const SetAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAccessLogsDownloadAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetAccessLogsDownloadAttributeOutcomeCallable SlbClient::setAccessLogsDownloadAttributeCallable(const SetAccessLogsDownloadAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAccessLogsDownloadAttributeOutcome()>>(
			[this, request]()
			{
			return this->setAccessLogsDownloadAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetBackendServersOutcome SlbClient::setBackendServers(const SetBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetBackendServersOutcome(SetBackendServersResult(outcome.result()));
	else
		return SetBackendServersOutcome(outcome.error());
}

void SlbClient::setBackendServersAsync(const SetBackendServersRequest& request, const SetBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetBackendServersOutcomeCallable SlbClient::setBackendServersCallable(const SetBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetBackendServersOutcome()>>(
			[this, request]()
			{
			return this->setBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetCACertificateNameOutcome SlbClient::setCACertificateName(const SetCACertificateNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCACertificateNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCACertificateNameOutcome(SetCACertificateNameResult(outcome.result()));
	else
		return SetCACertificateNameOutcome(outcome.error());
}

void SlbClient::setCACertificateNameAsync(const SetCACertificateNameRequest& request, const SetCACertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCACertificateName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetCACertificateNameOutcomeCallable SlbClient::setCACertificateNameCallable(const SetCACertificateNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCACertificateNameOutcome()>>(
			[this, request]()
			{
			return this->setCACertificateName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetDomainExtensionAttributeOutcome SlbClient::setDomainExtensionAttribute(const SetDomainExtensionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainExtensionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainExtensionAttributeOutcome(SetDomainExtensionAttributeResult(outcome.result()));
	else
		return SetDomainExtensionAttributeOutcome(outcome.error());
}

void SlbClient::setDomainExtensionAttributeAsync(const SetDomainExtensionAttributeRequest& request, const SetDomainExtensionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainExtensionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetDomainExtensionAttributeOutcomeCallable SlbClient::setDomainExtensionAttributeCallable(const SetDomainExtensionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainExtensionAttributeOutcome()>>(
			[this, request]()
			{
			return this->setDomainExtensionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetListenerAccessControlStatusOutcome SlbClient::setListenerAccessControlStatus(const SetListenerAccessControlStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetListenerAccessControlStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetListenerAccessControlStatusOutcome(SetListenerAccessControlStatusResult(outcome.result()));
	else
		return SetListenerAccessControlStatusOutcome(outcome.error());
}

void SlbClient::setListenerAccessControlStatusAsync(const SetListenerAccessControlStatusRequest& request, const SetListenerAccessControlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setListenerAccessControlStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetListenerAccessControlStatusOutcomeCallable SlbClient::setListenerAccessControlStatusCallable(const SetListenerAccessControlStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetListenerAccessControlStatusOutcome()>>(
			[this, request]()
			{
			return this->setListenerAccessControlStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerDeleteProtectionOutcome SlbClient::setLoadBalancerDeleteProtection(const SetLoadBalancerDeleteProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerDeleteProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerDeleteProtectionOutcome(SetLoadBalancerDeleteProtectionResult(outcome.result()));
	else
		return SetLoadBalancerDeleteProtectionOutcome(outcome.error());
}

void SlbClient::setLoadBalancerDeleteProtectionAsync(const SetLoadBalancerDeleteProtectionRequest& request, const SetLoadBalancerDeleteProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerDeleteProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerDeleteProtectionOutcomeCallable SlbClient::setLoadBalancerDeleteProtectionCallable(const SetLoadBalancerDeleteProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerDeleteProtectionOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerDeleteProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerHTTPListenerAttributeOutcome SlbClient::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(SetLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerHTTPListenerAttributeAsync(const SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerHTTPListenerAttributeOutcomeCallable SlbClient::setLoadBalancerHTTPListenerAttributeCallable(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerHTTPSListenerAttributeOutcome SlbClient::setLoadBalancerHTTPSListenerAttribute(const SetLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerHTTPSListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerHTTPSListenerAttributeOutcome(SetLoadBalancerHTTPSListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerHTTPSListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerHTTPSListenerAttributeAsync(const SetLoadBalancerHTTPSListenerAttributeRequest& request, const SetLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerHTTPSListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerHTTPSListenerAttributeOutcomeCallable SlbClient::setLoadBalancerHTTPSListenerAttributeCallable(const SetLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerHTTPSListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerHTTPSListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerModificationProtectionOutcome SlbClient::setLoadBalancerModificationProtection(const SetLoadBalancerModificationProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerModificationProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerModificationProtectionOutcome(SetLoadBalancerModificationProtectionResult(outcome.result()));
	else
		return SetLoadBalancerModificationProtectionOutcome(outcome.error());
}

void SlbClient::setLoadBalancerModificationProtectionAsync(const SetLoadBalancerModificationProtectionRequest& request, const SetLoadBalancerModificationProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerModificationProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerModificationProtectionOutcomeCallable SlbClient::setLoadBalancerModificationProtectionCallable(const SetLoadBalancerModificationProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerModificationProtectionOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerModificationProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerNameOutcome SlbClient::setLoadBalancerName(const SetLoadBalancerNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerNameOutcome(SetLoadBalancerNameResult(outcome.result()));
	else
		return SetLoadBalancerNameOutcome(outcome.error());
}

void SlbClient::setLoadBalancerNameAsync(const SetLoadBalancerNameRequest& request, const SetLoadBalancerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerNameOutcomeCallable SlbClient::setLoadBalancerNameCallable(const SetLoadBalancerNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerNameOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerStatusOutcome SlbClient::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerStatusOutcome(SetLoadBalancerStatusResult(outcome.result()));
	else
		return SetLoadBalancerStatusOutcome(outcome.error());
}

void SlbClient::setLoadBalancerStatusAsync(const SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerStatusOutcomeCallable SlbClient::setLoadBalancerStatusCallable(const SetLoadBalancerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerStatusOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerTCPListenerAttributeOutcome SlbClient::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(SetLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerTCPListenerAttributeAsync(const SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerTCPListenerAttributeOutcomeCallable SlbClient::setLoadBalancerTCPListenerAttributeCallable(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerUDPListenerAttributeOutcome SlbClient::setLoadBalancerUDPListenerAttribute(const SetLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerUDPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerUDPListenerAttributeOutcome(SetLoadBalancerUDPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerUDPListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerUDPListenerAttributeAsync(const SetLoadBalancerUDPListenerAttributeRequest& request, const SetLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerUDPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerUDPListenerAttributeOutcomeCallable SlbClient::setLoadBalancerUDPListenerAttributeCallable(const SetLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerUDPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerUDPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetRuleOutcome SlbClient::setRule(const SetRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRuleOutcome(SetRuleResult(outcome.result()));
	else
		return SetRuleOutcome(outcome.error());
}

void SlbClient::setRuleAsync(const SetRuleRequest& request, const SetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetRuleOutcomeCallable SlbClient::setRuleCallable(const SetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRuleOutcome()>>(
			[this, request]()
			{
			return this->setRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetServerCertificateNameOutcome SlbClient::setServerCertificateName(const SetServerCertificateNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetServerCertificateNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetServerCertificateNameOutcome(SetServerCertificateNameResult(outcome.result()));
	else
		return SetServerCertificateNameOutcome(outcome.error());
}

void SlbClient::setServerCertificateNameAsync(const SetServerCertificateNameRequest& request, const SetServerCertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setServerCertificateName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetServerCertificateNameOutcomeCallable SlbClient::setServerCertificateNameCallable(const SetServerCertificateNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetServerCertificateNameOutcome()>>(
			[this, request]()
			{
			return this->setServerCertificateName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetTLSCipherPolicyAttributeOutcome SlbClient::setTLSCipherPolicyAttribute(const SetTLSCipherPolicyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetTLSCipherPolicyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetTLSCipherPolicyAttributeOutcome(SetTLSCipherPolicyAttributeResult(outcome.result()));
	else
		return SetTLSCipherPolicyAttributeOutcome(outcome.error());
}

void SlbClient::setTLSCipherPolicyAttributeAsync(const SetTLSCipherPolicyAttributeRequest& request, const SetTLSCipherPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setTLSCipherPolicyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetTLSCipherPolicyAttributeOutcomeCallable SlbClient::setTLSCipherPolicyAttributeCallable(const SetTLSCipherPolicyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetTLSCipherPolicyAttributeOutcome()>>(
			[this, request]()
			{
			return this->setTLSCipherPolicyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetVServerGroupAttributeOutcome SlbClient::setVServerGroupAttribute(const SetVServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVServerGroupAttributeOutcome(SetVServerGroupAttributeResult(outcome.result()));
	else
		return SetVServerGroupAttributeOutcome(outcome.error());
}

void SlbClient::setVServerGroupAttributeAsync(const SetVServerGroupAttributeRequest& request, const SetVServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetVServerGroupAttributeOutcomeCallable SlbClient::setVServerGroupAttributeCallable(const SetVServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->setVServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::StartLoadBalancerListenerOutcome SlbClient::startLoadBalancerListener(const StartLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLoadBalancerListenerOutcome(StartLoadBalancerListenerResult(outcome.result()));
	else
		return StartLoadBalancerListenerOutcome(outcome.error());
}

void SlbClient::startLoadBalancerListenerAsync(const StartLoadBalancerListenerRequest& request, const StartLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::StartLoadBalancerListenerOutcomeCallable SlbClient::startLoadBalancerListenerCallable(const StartLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->startLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::StopLoadBalancerListenerOutcome SlbClient::stopLoadBalancerListener(const StopLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLoadBalancerListenerOutcome(StopLoadBalancerListenerResult(outcome.result()));
	else
		return StopLoadBalancerListenerOutcome(outcome.error());
}

void SlbClient::stopLoadBalancerListenerAsync(const StopLoadBalancerListenerRequest& request, const StopLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::StopLoadBalancerListenerOutcomeCallable SlbClient::stopLoadBalancerListenerCallable(const StopLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->stopLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::TagResourcesOutcome SlbClient::tagResources(const TagResourcesRequest &request) const
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

void SlbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::TagResourcesOutcomeCallable SlbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::UntagResourcesOutcome SlbClient::untagResources(const UntagResourcesRequest &request) const
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

void SlbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::UntagResourcesOutcomeCallable SlbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::UploadCACertificateOutcome SlbClient::uploadCACertificate(const UploadCACertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCACertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCACertificateOutcome(UploadCACertificateResult(outcome.result()));
	else
		return UploadCACertificateOutcome(outcome.error());
}

void SlbClient::uploadCACertificateAsync(const UploadCACertificateRequest& request, const UploadCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCACertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::UploadCACertificateOutcomeCallable SlbClient::uploadCACertificateCallable(const UploadCACertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCACertificateOutcome()>>(
			[this, request]()
			{
			return this->uploadCACertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::UploadServerCertificateOutcome SlbClient::uploadServerCertificate(const UploadServerCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadServerCertificateOutcome(UploadServerCertificateResult(outcome.result()));
	else
		return UploadServerCertificateOutcome(outcome.error());
}

void SlbClient::uploadServerCertificateAsync(const UploadServerCertificateRequest& request, const UploadServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::UploadServerCertificateOutcomeCallable SlbClient::uploadServerCertificateCallable(const UploadServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->uploadServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

