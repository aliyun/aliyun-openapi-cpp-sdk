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

SmartagClient::GrantInstanceToCbnOutcome SmartagClient::grantInstanceToCbn(const GrantInstanceToCbnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantInstanceToCbnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantInstanceToCbnOutcome(GrantInstanceToCbnResult(outcome.result()));
	else
		return GrantInstanceToCbnOutcome(outcome.error());
}

void SmartagClient::grantInstanceToCbnAsync(const GrantInstanceToCbnRequest& request, const GrantInstanceToCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantInstanceToCbn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GrantInstanceToCbnOutcomeCallable SmartagClient::grantInstanceToCbnCallable(const GrantInstanceToCbnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantInstanceToCbnOutcome()>>(
			[this, request]()
			{
			return this->grantInstanceToCbn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteNetworkOptimizationOutcome SmartagClient::deleteNetworkOptimization(const DeleteNetworkOptimizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkOptimizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkOptimizationOutcome(DeleteNetworkOptimizationResult(outcome.result()));
	else
		return DeleteNetworkOptimizationOutcome(outcome.error());
}

void SmartagClient::deleteNetworkOptimizationAsync(const DeleteNetworkOptimizationRequest& request, const DeleteNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkOptimization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteNetworkOptimizationOutcomeCallable SmartagClient::deleteNetworkOptimizationCallable(const DeleteNetworkOptimizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkOptimizationOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkOptimization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AddNetworkOptimizationSettingOutcome SmartagClient::addNetworkOptimizationSetting(const AddNetworkOptimizationSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNetworkOptimizationSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNetworkOptimizationSettingOutcome(AddNetworkOptimizationSettingResult(outcome.result()));
	else
		return AddNetworkOptimizationSettingOutcome(outcome.error());
}

void SmartagClient::addNetworkOptimizationSettingAsync(const AddNetworkOptimizationSettingRequest& request, const AddNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNetworkOptimizationSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AddNetworkOptimizationSettingOutcomeCallable SmartagClient::addNetworkOptimizationSettingCallable(const AddNetworkOptimizationSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNetworkOptimizationSettingOutcome()>>(
			[this, request]()
			{
			return this->addNetworkOptimizationSetting(request);
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

SmartagClient::DeleteACLRuleOutcome SmartagClient::deleteACLRule(const DeleteACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteACLRuleOutcome(DeleteACLRuleResult(outcome.result()));
	else
		return DeleteACLRuleOutcome(outcome.error());
}

void SmartagClient::deleteACLRuleAsync(const DeleteACLRuleRequest& request, const DeleteACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteACLRuleOutcomeCallable SmartagClient::deleteACLRuleCallable(const DeleteACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteACLRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyNetworkOptimizationOutcome SmartagClient::modifyNetworkOptimization(const ModifyNetworkOptimizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkOptimizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkOptimizationOutcome(ModifyNetworkOptimizationResult(outcome.result()));
	else
		return ModifyNetworkOptimizationOutcome(outcome.error());
}

void SmartagClient::modifyNetworkOptimizationAsync(const ModifyNetworkOptimizationRequest& request, const ModifyNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkOptimization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyNetworkOptimizationOutcomeCallable SmartagClient::modifyNetworkOptimizationCallable(const ModifyNetworkOptimizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkOptimizationOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkOptimization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSmartAccessGatewayClientUserOutcome SmartagClient::createSmartAccessGatewayClientUser(const CreateSmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewayClientUserOutcome(CreateSmartAccessGatewayClientUserResult(outcome.result()));
	else
		return CreateSmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewayClientUserAsync(const CreateSmartAccessGatewayClientUserRequest& request, const CreateSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewayClientUserOutcomeCallable SmartagClient::createSmartAccessGatewayClientUserCallable(const CreateSmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnicomSignConfirmOutcome SmartagClient::unicomSignConfirm(const UnicomSignConfirmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnicomSignConfirmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnicomSignConfirmOutcome(UnicomSignConfirmResult(outcome.result()));
	else
		return UnicomSignConfirmOutcome(outcome.error());
}

void SmartagClient::unicomSignConfirmAsync(const UnicomSignConfirmRequest& request, const UnicomSignConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unicomSignConfirm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnicomSignConfirmOutcomeCallable SmartagClient::unicomSignConfirmCallable(const UnicomSignConfirmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnicomSignConfirmOutcome()>>(
			[this, request]()
			{
			return this->unicomSignConfirm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AddACLRuleOutcome SmartagClient::addACLRule(const AddACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddACLRuleOutcome(AddACLRuleResult(outcome.result()));
	else
		return AddACLRuleOutcome(outcome.error());
}

void SmartagClient::addACLRuleAsync(const AddACLRuleRequest& request, const AddACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AddACLRuleOutcomeCallable SmartagClient::addACLRuleCallable(const AddACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddACLRuleOutcome()>>(
			[this, request]()
			{
			return this->addACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisassociateACLOutcome SmartagClient::disassociateACL(const DisassociateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateACLOutcome(DisassociateACLResult(outcome.result()));
	else
		return DisassociateACLOutcome(outcome.error());
}

void SmartagClient::disassociateACLAsync(const DisassociateACLRequest& request, const DisassociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisassociateACLOutcomeCallable SmartagClient::disassociateACLCallable(const DisassociateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateACLOutcome()>>(
			[this, request]()
			{
			return this->disassociateACL(request);
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

SmartagClient::CreateNetworkOptimizationOutcome SmartagClient::createNetworkOptimization(const CreateNetworkOptimizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkOptimizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkOptimizationOutcome(CreateNetworkOptimizationResult(outcome.result()));
	else
		return CreateNetworkOptimizationOutcome(outcome.error());
}

void SmartagClient::createNetworkOptimizationAsync(const CreateNetworkOptimizationRequest& request, const CreateNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkOptimization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateNetworkOptimizationOutcomeCallable SmartagClient::createNetworkOptimizationCallable(const CreateNetworkOptimizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkOptimizationOutcome()>>(
			[this, request]()
			{
			return this->createNetworkOptimization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSAGLinkLevelHaOutcome SmartagClient::deleteSAGLinkLevelHa(const DeleteSAGLinkLevelHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSAGLinkLevelHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSAGLinkLevelHaOutcome(DeleteSAGLinkLevelHaResult(outcome.result()));
	else
		return DeleteSAGLinkLevelHaOutcome(outcome.error());
}

void SmartagClient::deleteSAGLinkLevelHaAsync(const DeleteSAGLinkLevelHaRequest& request, const DeleteSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSAGLinkLevelHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSAGLinkLevelHaOutcomeCallable SmartagClient::deleteSAGLinkLevelHaCallable(const DeleteSAGLinkLevelHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSAGLinkLevelHaOutcome()>>(
			[this, request]()
			{
			return this->deleteSAGLinkLevelHa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSmartAccessGatewayClientUserOutcome SmartagClient::deleteSmartAccessGatewayClientUser(const DeleteSmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmartAccessGatewayClientUserOutcome(DeleteSmartAccessGatewayClientUserResult(outcome.result()));
	else
		return DeleteSmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::deleteSmartAccessGatewayClientUserAsync(const DeleteSmartAccessGatewayClientUserRequest& request, const DeleteSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSmartAccessGatewayClientUserOutcomeCallable SmartagClient::deleteSmartAccessGatewayClientUserCallable(const DeleteSmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->deleteSmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::KickOutClientsOutcome SmartagClient::kickOutClients(const KickOutClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KickOutClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KickOutClientsOutcome(KickOutClientsResult(outcome.result()));
	else
		return KickOutClientsOutcome(outcome.error());
}

void SmartagClient::kickOutClientsAsync(const KickOutClientsRequest& request, const KickOutClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, kickOutClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::KickOutClientsOutcomeCallable SmartagClient::kickOutClientsCallable(const KickOutClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KickOutClientsOutcome()>>(
			[this, request]()
			{
			return this->kickOutClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::SwitchSAGHaStateOutcome SmartagClient::switchSAGHaState(const SwitchSAGHaStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchSAGHaStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchSAGHaStateOutcome(SwitchSAGHaStateResult(outcome.result()));
	else
		return SwitchSAGHaStateOutcome(outcome.error());
}

void SmartagClient::switchSAGHaStateAsync(const SwitchSAGHaStateRequest& request, const SwitchSAGHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchSAGHaState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::SwitchSAGHaStateOutcomeCallable SmartagClient::switchSAGHaStateCallable(const SwitchSAGHaStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchSAGHaStateOutcome()>>(
			[this, request]()
			{
			return this->switchSAGHaState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagRouteableAddressOutcome SmartagClient::describeSagRouteableAddress(const DescribeSagRouteableAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagRouteableAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagRouteableAddressOutcome(DescribeSagRouteableAddressResult(outcome.result()));
	else
		return DescribeSagRouteableAddressOutcome(outcome.error());
}

void SmartagClient::describeSagRouteableAddressAsync(const DescribeSagRouteableAddressRequest& request, const DescribeSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagRouteableAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagRouteableAddressOutcomeCallable SmartagClient::describeSagRouteableAddressCallable(const DescribeSagRouteableAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagRouteableAddressOutcome()>>(
			[this, request]()
			{
			return this->describeSagRouteableAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeGrantRulesOutcome SmartagClient::describeGrantRules(const DescribeGrantRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantRulesOutcome(DescribeGrantRulesResult(outcome.result()));
	else
		return DescribeGrantRulesOutcome(outcome.error());
}

void SmartagClient::describeGrantRulesAsync(const DescribeGrantRulesRequest& request, const DescribeGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeGrantRulesOutcomeCallable SmartagClient::describeGrantRulesCallable(const DescribeGrantRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantRulesOutcome()>>(
			[this, request]()
			{
			return this->describeGrantRules(request);
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

SmartagClient::AttachNetworkOptimizationSagsOutcome SmartagClient::attachNetworkOptimizationSags(const AttachNetworkOptimizationSagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachNetworkOptimizationSagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachNetworkOptimizationSagsOutcome(AttachNetworkOptimizationSagsResult(outcome.result()));
	else
		return AttachNetworkOptimizationSagsOutcome(outcome.error());
}

void SmartagClient::attachNetworkOptimizationSagsAsync(const AttachNetworkOptimizationSagsRequest& request, const AttachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachNetworkOptimizationSags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AttachNetworkOptimizationSagsOutcomeCallable SmartagClient::attachNetworkOptimizationSagsCallable(const AttachNetworkOptimizationSagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachNetworkOptimizationSagsOutcome()>>(
			[this, request]()
			{
			return this->attachNetworkOptimizationSags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ClearSagRouteableAddressOutcome SmartagClient::clearSagRouteableAddress(const ClearSagRouteableAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearSagRouteableAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearSagRouteableAddressOutcome(ClearSagRouteableAddressResult(outcome.result()));
	else
		return ClearSagRouteableAddressOutcome(outcome.error());
}

void SmartagClient::clearSagRouteableAddressAsync(const ClearSagRouteableAddressRequest& request, const ClearSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearSagRouteableAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ClearSagRouteableAddressOutcomeCallable SmartagClient::clearSagRouteableAddressCallable(const ClearSagRouteableAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearSagRouteableAddressOutcome()>>(
			[this, request]()
			{
			return this->clearSagRouteableAddress(request);
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

SmartagClient::DeleteACLOutcome SmartagClient::deleteACL(const DeleteACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteACLOutcome(DeleteACLResult(outcome.result()));
	else
		return DeleteACLOutcome(outcome.error());
}

void SmartagClient::deleteACLAsync(const DeleteACLRequest& request, const DeleteACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteACLOutcomeCallable SmartagClient::deleteACLCallable(const DeleteACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteACLOutcome()>>(
			[this, request]()
			{
			return this->deleteACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagOnlineClientStatisticsOutcome SmartagClient::describeSagOnlineClientStatistics(const DescribeSagOnlineClientStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagOnlineClientStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagOnlineClientStatisticsOutcome(DescribeSagOnlineClientStatisticsResult(outcome.result()));
	else
		return DescribeSagOnlineClientStatisticsOutcome(outcome.error());
}

void SmartagClient::describeSagOnlineClientStatisticsAsync(const DescribeSagOnlineClientStatisticsRequest& request, const DescribeSagOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagOnlineClientStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagOnlineClientStatisticsOutcomeCallable SmartagClient::describeSagOnlineClientStatisticsCallable(const DescribeSagOnlineClientStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagOnlineClientStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSagOnlineClientStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DowngradeSmartAccessGatewayOutcome SmartagClient::downgradeSmartAccessGateway(const DowngradeSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DowngradeSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DowngradeSmartAccessGatewayOutcome(DowngradeSmartAccessGatewayResult(outcome.result()));
	else
		return DowngradeSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::downgradeSmartAccessGatewayAsync(const DowngradeSmartAccessGatewayRequest& request, const DowngradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downgradeSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DowngradeSmartAccessGatewayOutcomeCallable SmartagClient::downgradeSmartAccessGatewayCallable(const DowngradeSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DowngradeSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->downgradeSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AssociateACLOutcome SmartagClient::associateACL(const AssociateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateACLOutcome(AssociateACLResult(outcome.result()));
	else
		return AssociateACLOutcome(outcome.error());
}

void SmartagClient::associateACLAsync(const AssociateACLRequest& request, const AssociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AssociateACLOutcomeCallable SmartagClient::associateACLCallable(const AssociateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateACLOutcome()>>(
			[this, request]()
			{
			return this->associateACL(request);
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

SmartagClient::RevokeInstanceFromCbnOutcome SmartagClient::revokeInstanceFromCbn(const RevokeInstanceFromCbnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeInstanceFromCbnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeInstanceFromCbnOutcome(RevokeInstanceFromCbnResult(outcome.result()));
	else
		return RevokeInstanceFromCbnOutcome(outcome.error());
}

void SmartagClient::revokeInstanceFromCbnAsync(const RevokeInstanceFromCbnRequest& request, const RevokeInstanceFromCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeInstanceFromCbn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RevokeInstanceFromCbnOutcomeCallable SmartagClient::revokeInstanceFromCbnCallable(const RevokeInstanceFromCbnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeInstanceFromCbnOutcome()>>(
			[this, request]()
			{
			return this->revokeInstanceFromCbn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySerialNumberOutcome SmartagClient::modifySerialNumber(const ModifySerialNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySerialNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySerialNumberOutcome(ModifySerialNumberResult(outcome.result()));
	else
		return ModifySerialNumberOutcome(outcome.error());
}

void SmartagClient::modifySerialNumberAsync(const ModifySerialNumberRequest& request, const ModifySerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySerialNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySerialNumberOutcomeCallable SmartagClient::modifySerialNumberCallable(const ModifySerialNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySerialNumberOutcome()>>(
			[this, request]()
			{
			return this->modifySerialNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeACLAttributeOutcome SmartagClient::describeACLAttribute(const DescribeACLAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeACLAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeACLAttributeOutcome(DescribeACLAttributeResult(outcome.result()));
	else
		return DescribeACLAttributeOutcome(outcome.error());
}

void SmartagClient::describeACLAttributeAsync(const DescribeACLAttributeRequest& request, const DescribeACLAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeACLAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeACLAttributeOutcomeCallable SmartagClient::describeACLAttributeCallable(const DescribeACLAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeACLAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeACLAttribute(request);
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

SmartagClient::ResetSmartAccessGatewayClientUserPasswordOutcome SmartagClient::resetSmartAccessGatewayClientUserPassword(const ResetSmartAccessGatewayClientUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSmartAccessGatewayClientUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSmartAccessGatewayClientUserPasswordOutcome(ResetSmartAccessGatewayClientUserPasswordResult(outcome.result()));
	else
		return ResetSmartAccessGatewayClientUserPasswordOutcome(outcome.error());
}

void SmartagClient::resetSmartAccessGatewayClientUserPasswordAsync(const ResetSmartAccessGatewayClientUserPasswordRequest& request, const ResetSmartAccessGatewayClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSmartAccessGatewayClientUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ResetSmartAccessGatewayClientUserPasswordOutcomeCallable SmartagClient::resetSmartAccessGatewayClientUserPasswordCallable(const ResetSmartAccessGatewayClientUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSmartAccessGatewayClientUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetSmartAccessGatewayClientUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeACLsOutcome SmartagClient::describeACLs(const DescribeACLsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeACLsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeACLsOutcome(DescribeACLsResult(outcome.result()));
	else
		return DescribeACLsOutcome(outcome.error());
}

void SmartagClient::describeACLsAsync(const DescribeACLsRequest& request, const DescribeACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeACLs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeACLsOutcomeCallable SmartagClient::describeACLsCallable(const DescribeACLsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeACLsOutcome()>>(
			[this, request]()
			{
			return this->describeACLs(request);
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

SmartagClient::CreateSAGLinkLevelHaOutcome SmartagClient::createSAGLinkLevelHa(const CreateSAGLinkLevelHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSAGLinkLevelHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSAGLinkLevelHaOutcome(CreateSAGLinkLevelHaResult(outcome.result()));
	else
		return CreateSAGLinkLevelHaOutcome(outcome.error());
}

void SmartagClient::createSAGLinkLevelHaAsync(const CreateSAGLinkLevelHaRequest& request, const CreateSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSAGLinkLevelHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSAGLinkLevelHaOutcomeCallable SmartagClient::createSAGLinkLevelHaCallable(const CreateSAGLinkLevelHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSAGLinkLevelHaOutcome()>>(
			[this, request]()
			{
			return this->createSAGLinkLevelHa(request);
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

SmartagClient::CreateSmartAccessGatewaySoftwareOutcome SmartagClient::createSmartAccessGatewaySoftware(const CreateSmartAccessGatewaySoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewaySoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewaySoftwareOutcome(CreateSmartAccessGatewaySoftwareResult(outcome.result()));
	else
		return CreateSmartAccessGatewaySoftwareOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewaySoftwareAsync(const CreateSmartAccessGatewaySoftwareRequest& request, const CreateSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGatewaySoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewaySoftwareOutcomeCallable SmartagClient::createSmartAccessGatewaySoftwareCallable(const CreateSmartAccessGatewaySoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewaySoftwareOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGatewaySoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeNetworkOptimizationSettingsOutcome SmartagClient::describeNetworkOptimizationSettings(const DescribeNetworkOptimizationSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkOptimizationSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkOptimizationSettingsOutcome(DescribeNetworkOptimizationSettingsResult(outcome.result()));
	else
		return DescribeNetworkOptimizationSettingsOutcome(outcome.error());
}

void SmartagClient::describeNetworkOptimizationSettingsAsync(const DescribeNetworkOptimizationSettingsRequest& request, const DescribeNetworkOptimizationSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkOptimizationSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeNetworkOptimizationSettingsOutcomeCallable SmartagClient::describeNetworkOptimizationSettingsCallable(const DescribeNetworkOptimizationSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkOptimizationSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkOptimizationSettings(request);
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

SmartagClient::CreateACLOutcome SmartagClient::createACL(const CreateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateACLOutcome(CreateACLResult(outcome.result()));
	else
		return CreateACLOutcome(outcome.error());
}

void SmartagClient::createACLAsync(const CreateACLRequest& request, const CreateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateACLOutcomeCallable SmartagClient::createACLCallable(const CreateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateACLOutcome()>>(
			[this, request]()
			{
			return this->createACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeNetworkOptimizationSagsOutcome SmartagClient::describeNetworkOptimizationSags(const DescribeNetworkOptimizationSagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkOptimizationSagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkOptimizationSagsOutcome(DescribeNetworkOptimizationSagsResult(outcome.result()));
	else
		return DescribeNetworkOptimizationSagsOutcome(outcome.error());
}

void SmartagClient::describeNetworkOptimizationSagsAsync(const DescribeNetworkOptimizationSagsRequest& request, const DescribeNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkOptimizationSags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeNetworkOptimizationSagsOutcomeCallable SmartagClient::describeNetworkOptimizationSagsCallable(const DescribeNetworkOptimizationSagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkOptimizationSagsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkOptimizationSags(request);
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

SmartagClient::ModifyACLRuleOutcome SmartagClient::modifyACLRule(const ModifyACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyACLRuleOutcome(ModifyACLRuleResult(outcome.result()));
	else
		return ModifyACLRuleOutcome(outcome.error());
}

void SmartagClient::modifyACLRuleAsync(const ModifyACLRuleRequest& request, const ModifyACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyACLRuleOutcomeCallable SmartagClient::modifyACLRuleCallable(const ModifyACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyACLRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySmartAccessGatewayClientUserOutcome SmartagClient::modifySmartAccessGatewayClientUser(const ModifySmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmartAccessGatewayClientUserOutcome(ModifySmartAccessGatewayClientUserResult(outcome.result()));
	else
		return ModifySmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::modifySmartAccessGatewayClientUserAsync(const ModifySmartAccessGatewayClientUserRequest& request, const ModifySmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySmartAccessGatewayClientUserOutcomeCallable SmartagClient::modifySmartAccessGatewayClientUserCallable(const ModifySmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->modifySmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteNetworkOptimizationSettingOutcome SmartagClient::deleteNetworkOptimizationSetting(const DeleteNetworkOptimizationSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkOptimizationSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkOptimizationSettingOutcome(DeleteNetworkOptimizationSettingResult(outcome.result()));
	else
		return DeleteNetworkOptimizationSettingOutcome(outcome.error());
}

void SmartagClient::deleteNetworkOptimizationSettingAsync(const DeleteNetworkOptimizationSettingRequest& request, const DeleteNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkOptimizationSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteNetworkOptimizationSettingOutcomeCallable SmartagClient::deleteNetworkOptimizationSettingCallable(const DeleteNetworkOptimizationSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkOptimizationSettingOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkOptimizationSetting(request);
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

SmartagClient::UpgradeSmartAccessGatewayOutcome SmartagClient::upgradeSmartAccessGateway(const UpgradeSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeSmartAccessGatewayOutcome(UpgradeSmartAccessGatewayResult(outcome.result()));
	else
		return UpgradeSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::upgradeSmartAccessGatewayAsync(const UpgradeSmartAccessGatewayRequest& request, const UpgradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpgradeSmartAccessGatewayOutcomeCallable SmartagClient::upgradeSmartAccessGatewayCallable(const UpgradeSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->upgradeSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUserOnlineClientsOutcome SmartagClient::describeUserOnlineClients(const DescribeUserOnlineClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOnlineClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOnlineClientsOutcome(DescribeUserOnlineClientsResult(outcome.result()));
	else
		return DescribeUserOnlineClientsOutcome(outcome.error());
}

void SmartagClient::describeUserOnlineClientsAsync(const DescribeUserOnlineClientsRequest& request, const DescribeUserOnlineClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserOnlineClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserOnlineClientsOutcomeCallable SmartagClient::describeUserOnlineClientsCallable(const DescribeUserOnlineClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOnlineClientsOutcome()>>(
			[this, request]()
			{
			return this->describeUserOnlineClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DetachNetworkOptimizationSagsOutcome SmartagClient::detachNetworkOptimizationSags(const DetachNetworkOptimizationSagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachNetworkOptimizationSagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachNetworkOptimizationSagsOutcome(DetachNetworkOptimizationSagsResult(outcome.result()));
	else
		return DetachNetworkOptimizationSagsOutcome(outcome.error());
}

void SmartagClient::detachNetworkOptimizationSagsAsync(const DetachNetworkOptimizationSagsRequest& request, const DetachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachNetworkOptimizationSags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DetachNetworkOptimizationSagsOutcomeCallable SmartagClient::detachNetworkOptimizationSagsCallable(const DetachNetworkOptimizationSagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachNetworkOptimizationSagsOutcome()>>(
			[this, request]()
			{
			return this->detachNetworkOptimizationSags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUserOnlineClientStatisticsOutcome SmartagClient::describeUserOnlineClientStatistics(const DescribeUserOnlineClientStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOnlineClientStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOnlineClientStatisticsOutcome(DescribeUserOnlineClientStatisticsResult(outcome.result()));
	else
		return DescribeUserOnlineClientStatisticsOutcome(outcome.error());
}

void SmartagClient::describeUserOnlineClientStatisticsAsync(const DescribeUserOnlineClientStatisticsRequest& request, const DescribeUserOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserOnlineClientStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserOnlineClientStatisticsOutcomeCallable SmartagClient::describeUserOnlineClientStatisticsCallable(const DescribeUserOnlineClientStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOnlineClientStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeUserOnlineClientStatistics(request);
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

SmartagClient::DescribeUserFlowStatisticsOutcome SmartagClient::describeUserFlowStatistics(const DescribeUserFlowStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserFlowStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserFlowStatisticsOutcome(DescribeUserFlowStatisticsResult(outcome.result()));
	else
		return DescribeUserFlowStatisticsOutcome(outcome.error());
}

void SmartagClient::describeUserFlowStatisticsAsync(const DescribeUserFlowStatisticsRequest& request, const DescribeUserFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserFlowStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserFlowStatisticsOutcomeCallable SmartagClient::describeUserFlowStatisticsCallable(const DescribeUserFlowStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserFlowStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeUserFlowStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::SetSagRouteableAddressOutcome SmartagClient::setSagRouteableAddress(const SetSagRouteableAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSagRouteableAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSagRouteableAddressOutcome(SetSagRouteableAddressResult(outcome.result()));
	else
		return SetSagRouteableAddressOutcome(outcome.error());
}

void SmartagClient::setSagRouteableAddressAsync(const SetSagRouteableAddressRequest& request, const SetSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSagRouteableAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::SetSagRouteableAddressOutcomeCallable SmartagClient::setSagRouteableAddressCallable(const SetSagRouteableAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSagRouteableAddressOutcome()>>(
			[this, request]()
			{
			return this->setSagRouteableAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyACLOutcome SmartagClient::modifyACL(const ModifyACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyACLOutcome(ModifyACLResult(outcome.result()));
	else
		return ModifyACLOutcome(outcome.error());
}

void SmartagClient::modifyACLAsync(const ModifyACLRequest& request, const ModifyACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyACLOutcomeCallable SmartagClient::modifyACLCallable(const ModifyACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyACLOutcome()>>(
			[this, request]()
			{
			return this->modifyACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayClientUsersOutcome SmartagClient::describeSmartAccessGatewayClientUsers(const DescribeSmartAccessGatewayClientUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayClientUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayClientUsersOutcome(DescribeSmartAccessGatewayClientUsersResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayClientUsersOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayClientUsersAsync(const DescribeSmartAccessGatewayClientUsersRequest& request, const DescribeSmartAccessGatewayClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayClientUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayClientUsersOutcomeCallable SmartagClient::describeSmartAccessGatewayClientUsersCallable(const DescribeSmartAccessGatewayClientUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayClientUsersOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayClientUsers(request);
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

SmartagClient::UnicomOrderConfirmOutcome SmartagClient::unicomOrderConfirm(const UnicomOrderConfirmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnicomOrderConfirmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnicomOrderConfirmOutcome(UnicomOrderConfirmResult(outcome.result()));
	else
		return UnicomOrderConfirmOutcome(outcome.error());
}

void SmartagClient::unicomOrderConfirmAsync(const UnicomOrderConfirmRequest& request, const UnicomOrderConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unicomOrderConfirm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnicomOrderConfirmOutcomeCallable SmartagClient::unicomOrderConfirmCallable(const UnicomOrderConfirmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnicomOrderConfirmOutcome()>>(
			[this, request]()
			{
			return this->unicomOrderConfirm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeNetworkOptimizationsOutcome SmartagClient::describeNetworkOptimizations(const DescribeNetworkOptimizationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkOptimizationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkOptimizationsOutcome(DescribeNetworkOptimizationsResult(outcome.result()));
	else
		return DescribeNetworkOptimizationsOutcome(outcome.error());
}

void SmartagClient::describeNetworkOptimizationsAsync(const DescribeNetworkOptimizationsRequest& request, const DescribeNetworkOptimizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkOptimizations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeNetworkOptimizationsOutcomeCallable SmartagClient::describeNetworkOptimizationsCallable(const DescribeNetworkOptimizationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkOptimizationsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkOptimizations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

