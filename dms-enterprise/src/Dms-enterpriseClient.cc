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

#include <alibabacloud/dms-enterprise/Dms_enterpriseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

namespace
{
	const std::string SERVICE_NAME = "dms-enterprise";
}

Dms_enterpriseClient::Dms_enterpriseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::Dms_enterpriseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::Dms_enterpriseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dms-enterprise");
}

Dms_enterpriseClient::~Dms_enterpriseClient()
{}

Dms_enterpriseClient::AddAuthorityTemplateItemsOutcome Dms_enterpriseClient::addAuthorityTemplateItems(const AddAuthorityTemplateItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAuthorityTemplateItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAuthorityTemplateItemsOutcome(AddAuthorityTemplateItemsResult(outcome.result()));
	else
		return AddAuthorityTemplateItemsOutcome(outcome.error());
}

void Dms_enterpriseClient::addAuthorityTemplateItemsAsync(const AddAuthorityTemplateItemsRequest& request, const AddAuthorityTemplateItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAuthorityTemplateItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddAuthorityTemplateItemsOutcomeCallable Dms_enterpriseClient::addAuthorityTemplateItemsCallable(const AddAuthorityTemplateItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAuthorityTemplateItemsOutcome()>>(
			[this, request]()
			{
			return this->addAuthorityTemplateItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddDesensitizationRuleOutcome Dms_enterpriseClient::addDesensitizationRule(const AddDesensitizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDesensitizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDesensitizationRuleOutcome(AddDesensitizationRuleResult(outcome.result()));
	else
		return AddDesensitizationRuleOutcome(outcome.error());
}

void Dms_enterpriseClient::addDesensitizationRuleAsync(const AddDesensitizationRuleRequest& request, const AddDesensitizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDesensitizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddDesensitizationRuleOutcomeCallable Dms_enterpriseClient::addDesensitizationRuleCallable(const AddDesensitizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDesensitizationRuleOutcome()>>(
			[this, request]()
			{
			return this->addDesensitizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddInstanceOutcome Dms_enterpriseClient::addInstance(const AddInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddInstanceOutcome(AddInstanceResult(outcome.result()));
	else
		return AddInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::addInstanceAsync(const AddInstanceRequest& request, const AddInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddInstanceOutcomeCallable Dms_enterpriseClient::addInstanceCallable(const AddInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddInstanceOutcome()>>(
			[this, request]()
			{
			return this->addInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddLhMembersOutcome Dms_enterpriseClient::addLhMembers(const AddLhMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLhMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLhMembersOutcome(AddLhMembersResult(outcome.result()));
	else
		return AddLhMembersOutcome(outcome.error());
}

void Dms_enterpriseClient::addLhMembersAsync(const AddLhMembersRequest& request, const AddLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLhMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddLhMembersOutcomeCallable Dms_enterpriseClient::addLhMembersCallable(const AddLhMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLhMembersOutcome()>>(
			[this, request]()
			{
			return this->addLhMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddLogicTableRouteConfigOutcome Dms_enterpriseClient::addLogicTableRouteConfig(const AddLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLogicTableRouteConfigOutcome(AddLogicTableRouteConfigResult(outcome.result()));
	else
		return AddLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::addLogicTableRouteConfigAsync(const AddLogicTableRouteConfigRequest& request, const AddLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::addLogicTableRouteConfigCallable(const AddLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->addLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AddTaskFlowEdgesOutcome Dms_enterpriseClient::addTaskFlowEdges(const AddTaskFlowEdgesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTaskFlowEdgesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTaskFlowEdgesOutcome(AddTaskFlowEdgesResult(outcome.result()));
	else
		return AddTaskFlowEdgesOutcome(outcome.error());
}

void Dms_enterpriseClient::addTaskFlowEdgesAsync(const AddTaskFlowEdgesRequest& request, const AddTaskFlowEdgesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTaskFlowEdges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AddTaskFlowEdgesOutcomeCallable Dms_enterpriseClient::addTaskFlowEdgesCallable(const AddTaskFlowEdgesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTaskFlowEdgesOutcome()>>(
			[this, request]()
			{
			return this->addTaskFlowEdges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::AnalyzeSQLLineageOutcome Dms_enterpriseClient::analyzeSQLLineage(const AnalyzeSQLLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AnalyzeSQLLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AnalyzeSQLLineageOutcome(AnalyzeSQLLineageResult(outcome.result()));
	else
		return AnalyzeSQLLineageOutcome(outcome.error());
}

void Dms_enterpriseClient::analyzeSQLLineageAsync(const AnalyzeSQLLineageRequest& request, const AnalyzeSQLLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, analyzeSQLLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::AnalyzeSQLLineageOutcomeCallable Dms_enterpriseClient::analyzeSQLLineageCallable(const AnalyzeSQLLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AnalyzeSQLLineageOutcome()>>(
			[this, request]()
			{
			return this->analyzeSQLLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ApproveOrderOutcome Dms_enterpriseClient::approveOrder(const ApproveOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApproveOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApproveOrderOutcome(ApproveOrderResult(outcome.result()));
	else
		return ApproveOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::approveOrderAsync(const ApproveOrderRequest& request, const ApproveOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approveOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ApproveOrderOutcomeCallable Dms_enterpriseClient::approveOrderCallable(const ApproveOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApproveOrderOutcome()>>(
			[this, request]()
			{
			return this->approveOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::BackFillOutcome Dms_enterpriseClient::backFill(const BackFillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BackFillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BackFillOutcome(BackFillResult(outcome.result()));
	else
		return BackFillOutcome(outcome.error());
}

void Dms_enterpriseClient::backFillAsync(const BackFillRequest& request, const BackFillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, backFill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::BackFillOutcomeCallable Dms_enterpriseClient::backFillCallable(const BackFillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BackFillOutcome()>>(
			[this, request]()
			{
			return this->backFill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::BuyPayAsYouGoOrderOutcome Dms_enterpriseClient::buyPayAsYouGoOrder(const BuyPayAsYouGoOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BuyPayAsYouGoOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BuyPayAsYouGoOrderOutcome(BuyPayAsYouGoOrderResult(outcome.result()));
	else
		return BuyPayAsYouGoOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::buyPayAsYouGoOrderAsync(const BuyPayAsYouGoOrderRequest& request, const BuyPayAsYouGoOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, buyPayAsYouGoOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::BuyPayAsYouGoOrderOutcomeCallable Dms_enterpriseClient::buyPayAsYouGoOrderCallable(const BuyPayAsYouGoOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BuyPayAsYouGoOrderOutcome()>>(
			[this, request]()
			{
			return this->buyPayAsYouGoOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ChangeColumnSecLevelOutcome Dms_enterpriseClient::changeColumnSecLevel(const ChangeColumnSecLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeColumnSecLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeColumnSecLevelOutcome(ChangeColumnSecLevelResult(outcome.result()));
	else
		return ChangeColumnSecLevelOutcome(outcome.error());
}

void Dms_enterpriseClient::changeColumnSecLevelAsync(const ChangeColumnSecLevelRequest& request, const ChangeColumnSecLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeColumnSecLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ChangeColumnSecLevelOutcomeCallable Dms_enterpriseClient::changeColumnSecLevelCallable(const ChangeColumnSecLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeColumnSecLevelOutcome()>>(
			[this, request]()
			{
			return this->changeColumnSecLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ChangeColumnSecurityLevelOutcome Dms_enterpriseClient::changeColumnSecurityLevel(const ChangeColumnSecurityLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeColumnSecurityLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeColumnSecurityLevelOutcome(ChangeColumnSecurityLevelResult(outcome.result()));
	else
		return ChangeColumnSecurityLevelOutcome(outcome.error());
}

void Dms_enterpriseClient::changeColumnSecurityLevelAsync(const ChangeColumnSecurityLevelRequest& request, const ChangeColumnSecurityLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeColumnSecurityLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ChangeColumnSecurityLevelOutcomeCallable Dms_enterpriseClient::changeColumnSecurityLevelCallable(const ChangeColumnSecurityLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeColumnSecurityLevelOutcome()>>(
			[this, request]()
			{
			return this->changeColumnSecurityLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ChangeLhDagOwnerOutcome Dms_enterpriseClient::changeLhDagOwner(const ChangeLhDagOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeLhDagOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeLhDagOwnerOutcome(ChangeLhDagOwnerResult(outcome.result()));
	else
		return ChangeLhDagOwnerOutcome(outcome.error());
}

void Dms_enterpriseClient::changeLhDagOwnerAsync(const ChangeLhDagOwnerRequest& request, const ChangeLhDagOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeLhDagOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ChangeLhDagOwnerOutcomeCallable Dms_enterpriseClient::changeLhDagOwnerCallable(const ChangeLhDagOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeLhDagOwnerOutcome()>>(
			[this, request]()
			{
			return this->changeLhDagOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CloseOrderOutcome Dms_enterpriseClient::closeOrder(const CloseOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseOrderOutcome(CloseOrderResult(outcome.result()));
	else
		return CloseOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::closeOrderAsync(const CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CloseOrderOutcomeCallable Dms_enterpriseClient::closeOrderCallable(const CloseOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseOrderOutcome()>>(
			[this, request]()
			{
			return this->closeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateAbacAuthorizationOutcome Dms_enterpriseClient::createAbacAuthorization(const CreateAbacAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAbacAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAbacAuthorizationOutcome(CreateAbacAuthorizationResult(outcome.result()));
	else
		return CreateAbacAuthorizationOutcome(outcome.error());
}

void Dms_enterpriseClient::createAbacAuthorizationAsync(const CreateAbacAuthorizationRequest& request, const CreateAbacAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAbacAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateAbacAuthorizationOutcomeCallable Dms_enterpriseClient::createAbacAuthorizationCallable(const CreateAbacAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAbacAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->createAbacAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateAbacPolicyOutcome Dms_enterpriseClient::createAbacPolicy(const CreateAbacPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAbacPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAbacPolicyOutcome(CreateAbacPolicyResult(outcome.result()));
	else
		return CreateAbacPolicyOutcome(outcome.error());
}

void Dms_enterpriseClient::createAbacPolicyAsync(const CreateAbacPolicyRequest& request, const CreateAbacPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAbacPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateAbacPolicyOutcomeCallable Dms_enterpriseClient::createAbacPolicyCallable(const CreateAbacPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAbacPolicyOutcome()>>(
			[this, request]()
			{
			return this->createAbacPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateAuthorityTemplateOutcome Dms_enterpriseClient::createAuthorityTemplate(const CreateAuthorityTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuthorityTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuthorityTemplateOutcome(CreateAuthorityTemplateResult(outcome.result()));
	else
		return CreateAuthorityTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::createAuthorityTemplateAsync(const CreateAuthorityTemplateRequest& request, const CreateAuthorityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAuthorityTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateAuthorityTemplateOutcomeCallable Dms_enterpriseClient::createAuthorityTemplateCallable(const CreateAuthorityTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuthorityTemplateOutcome()>>(
			[this, request]()
			{
			return this->createAuthorityTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataArchiveOrderOutcome Dms_enterpriseClient::createDataArchiveOrder(const CreateDataArchiveOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataArchiveOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataArchiveOrderOutcome(CreateDataArchiveOrderResult(outcome.result()));
	else
		return CreateDataArchiveOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataArchiveOrderAsync(const CreateDataArchiveOrderRequest& request, const CreateDataArchiveOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataArchiveOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataArchiveOrderOutcomeCallable Dms_enterpriseClient::createDataArchiveOrderCallable(const CreateDataArchiveOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataArchiveOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataArchiveOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataCorrectOrderOutcome Dms_enterpriseClient::createDataCorrectOrder(const CreateDataCorrectOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCorrectOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCorrectOrderOutcome(CreateDataCorrectOrderResult(outcome.result()));
	else
		return CreateDataCorrectOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataCorrectOrderAsync(const CreateDataCorrectOrderRequest& request, const CreateDataCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCorrectOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataCorrectOrderOutcomeCallable Dms_enterpriseClient::createDataCorrectOrderCallable(const CreateDataCorrectOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCorrectOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataCorrectOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataCronClearOrderOutcome Dms_enterpriseClient::createDataCronClearOrder(const CreateDataCronClearOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCronClearOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCronClearOrderOutcome(CreateDataCronClearOrderResult(outcome.result()));
	else
		return CreateDataCronClearOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataCronClearOrderAsync(const CreateDataCronClearOrderRequest& request, const CreateDataCronClearOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCronClearOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataCronClearOrderOutcomeCallable Dms_enterpriseClient::createDataCronClearOrderCallable(const CreateDataCronClearOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCronClearOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataCronClearOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataExportOrderOutcome Dms_enterpriseClient::createDataExportOrder(const CreateDataExportOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataExportOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataExportOrderOutcome(CreateDataExportOrderResult(outcome.result()));
	else
		return CreateDataExportOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataExportOrderAsync(const CreateDataExportOrderRequest& request, const CreateDataExportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataExportOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataExportOrderOutcomeCallable Dms_enterpriseClient::createDataExportOrderCallable(const CreateDataExportOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataExportOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataExportOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataImportOrderOutcome Dms_enterpriseClient::createDataImportOrder(const CreateDataImportOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataImportOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataImportOrderOutcome(CreateDataImportOrderResult(outcome.result()));
	else
		return CreateDataImportOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataImportOrderAsync(const CreateDataImportOrderRequest& request, const CreateDataImportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataImportOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataImportOrderOutcomeCallable Dms_enterpriseClient::createDataImportOrderCallable(const CreateDataImportOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataImportOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataImportOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDataTrackOrderOutcome Dms_enterpriseClient::createDataTrackOrder(const CreateDataTrackOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataTrackOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataTrackOrderOutcome(CreateDataTrackOrderResult(outcome.result()));
	else
		return CreateDataTrackOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDataTrackOrderAsync(const CreateDataTrackOrderRequest& request, const CreateDataTrackOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataTrackOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDataTrackOrderOutcomeCallable Dms_enterpriseClient::createDataTrackOrderCallable(const CreateDataTrackOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataTrackOrderOutcome()>>(
			[this, request]()
			{
			return this->createDataTrackOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateDatabaseExportOrderOutcome Dms_enterpriseClient::createDatabaseExportOrder(const CreateDatabaseExportOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseExportOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseExportOrderOutcome(CreateDatabaseExportOrderResult(outcome.result()));
	else
		return CreateDatabaseExportOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createDatabaseExportOrderAsync(const CreateDatabaseExportOrderRequest& request, const CreateDatabaseExportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabaseExportOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateDatabaseExportOrderOutcomeCallable Dms_enterpriseClient::createDatabaseExportOrderCallable(const CreateDatabaseExportOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseExportOrderOutcome()>>(
			[this, request]()
			{
			return this->createDatabaseExportOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateFreeLockCorrectOrderOutcome Dms_enterpriseClient::createFreeLockCorrectOrder(const CreateFreeLockCorrectOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFreeLockCorrectOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFreeLockCorrectOrderOutcome(CreateFreeLockCorrectOrderResult(outcome.result()));
	else
		return CreateFreeLockCorrectOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createFreeLockCorrectOrderAsync(const CreateFreeLockCorrectOrderRequest& request, const CreateFreeLockCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFreeLockCorrectOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateFreeLockCorrectOrderOutcomeCallable Dms_enterpriseClient::createFreeLockCorrectOrderCallable(const CreateFreeLockCorrectOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFreeLockCorrectOrderOutcome()>>(
			[this, request]()
			{
			return this->createFreeLockCorrectOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateLakeHouseSpaceOutcome Dms_enterpriseClient::createLakeHouseSpace(const CreateLakeHouseSpaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLakeHouseSpaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLakeHouseSpaceOutcome(CreateLakeHouseSpaceResult(outcome.result()));
	else
		return CreateLakeHouseSpaceOutcome(outcome.error());
}

void Dms_enterpriseClient::createLakeHouseSpaceAsync(const CreateLakeHouseSpaceRequest& request, const CreateLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLakeHouseSpace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateLakeHouseSpaceOutcomeCallable Dms_enterpriseClient::createLakeHouseSpaceCallable(const CreateLakeHouseSpaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLakeHouseSpaceOutcome()>>(
			[this, request]()
			{
			return this->createLakeHouseSpace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateLogicDatabaseOutcome Dms_enterpriseClient::createLogicDatabase(const CreateLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogicDatabaseOutcome(CreateLogicDatabaseResult(outcome.result()));
	else
		return CreateLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::createLogicDatabaseAsync(const CreateLogicDatabaseRequest& request, const CreateLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateLogicDatabaseOutcomeCallable Dms_enterpriseClient::createLogicDatabaseCallable(const CreateLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateOrderOutcome Dms_enterpriseClient::createOrder(const CreateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderOutcome(CreateOrderResult(outcome.result()));
	else
		return CreateOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createOrderAsync(const CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateOrderOutcomeCallable Dms_enterpriseClient::createOrderCallable(const CreateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderOutcome()>>(
			[this, request]()
			{
			return this->createOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateProcCorrectOrderOutcome Dms_enterpriseClient::createProcCorrectOrder(const CreateProcCorrectOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProcCorrectOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProcCorrectOrderOutcome(CreateProcCorrectOrderResult(outcome.result()));
	else
		return CreateProcCorrectOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createProcCorrectOrderAsync(const CreateProcCorrectOrderRequest& request, const CreateProcCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProcCorrectOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateProcCorrectOrderOutcomeCallable Dms_enterpriseClient::createProcCorrectOrderCallable(const CreateProcCorrectOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProcCorrectOrderOutcome()>>(
			[this, request]()
			{
			return this->createProcCorrectOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateProxyOutcome Dms_enterpriseClient::createProxy(const CreateProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProxyOutcome(CreateProxyResult(outcome.result()));
	else
		return CreateProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::createProxyAsync(const CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateProxyOutcomeCallable Dms_enterpriseClient::createProxyCallable(const CreateProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProxyOutcome()>>(
			[this, request]()
			{
			return this->createProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateProxyAccessOutcome Dms_enterpriseClient::createProxyAccess(const CreateProxyAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProxyAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProxyAccessOutcome(CreateProxyAccessResult(outcome.result()));
	else
		return CreateProxyAccessOutcome(outcome.error());
}

void Dms_enterpriseClient::createProxyAccessAsync(const CreateProxyAccessRequest& request, const CreateProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProxyAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateProxyAccessOutcomeCallable Dms_enterpriseClient::createProxyAccessCallable(const CreateProxyAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProxyAccessOutcome()>>(
			[this, request]()
			{
			return this->createProxyAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreatePublishGroupTaskOutcome Dms_enterpriseClient::createPublishGroupTask(const CreatePublishGroupTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePublishGroupTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePublishGroupTaskOutcome(CreatePublishGroupTaskResult(outcome.result()));
	else
		return CreatePublishGroupTaskOutcome(outcome.error());
}

void Dms_enterpriseClient::createPublishGroupTaskAsync(const CreatePublishGroupTaskRequest& request, const CreatePublishGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPublishGroupTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreatePublishGroupTaskOutcomeCallable Dms_enterpriseClient::createPublishGroupTaskCallable(const CreatePublishGroupTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePublishGroupTaskOutcome()>>(
			[this, request]()
			{
			return this->createPublishGroupTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateSQLReviewOrderOutcome Dms_enterpriseClient::createSQLReviewOrder(const CreateSQLReviewOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSQLReviewOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSQLReviewOrderOutcome(CreateSQLReviewOrderResult(outcome.result()));
	else
		return CreateSQLReviewOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createSQLReviewOrderAsync(const CreateSQLReviewOrderRequest& request, const CreateSQLReviewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSQLReviewOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateSQLReviewOrderOutcomeCallable Dms_enterpriseClient::createSQLReviewOrderCallable(const CreateSQLReviewOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSQLReviewOrderOutcome()>>(
			[this, request]()
			{
			return this->createSQLReviewOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateScenarioOutcome Dms_enterpriseClient::createScenario(const CreateScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScenarioOutcome(CreateScenarioResult(outcome.result()));
	else
		return CreateScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::createScenarioAsync(const CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateScenarioOutcomeCallable Dms_enterpriseClient::createScenarioCallable(const CreateScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScenarioOutcome()>>(
			[this, request]()
			{
			return this->createScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateStandardGroupOutcome Dms_enterpriseClient::createStandardGroup(const CreateStandardGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStandardGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStandardGroupOutcome(CreateStandardGroupResult(outcome.result()));
	else
		return CreateStandardGroupOutcome(outcome.error());
}

void Dms_enterpriseClient::createStandardGroupAsync(const CreateStandardGroupRequest& request, const CreateStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStandardGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateStandardGroupOutcomeCallable Dms_enterpriseClient::createStandardGroupCallable(const CreateStandardGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStandardGroupOutcome()>>(
			[this, request]()
			{
			return this->createStandardGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateStructSyncOrderOutcome Dms_enterpriseClient::createStructSyncOrder(const CreateStructSyncOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStructSyncOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStructSyncOrderOutcome(CreateStructSyncOrderResult(outcome.result()));
	else
		return CreateStructSyncOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::createStructSyncOrderAsync(const CreateStructSyncOrderRequest& request, const CreateStructSyncOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStructSyncOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateStructSyncOrderOutcomeCallable Dms_enterpriseClient::createStructSyncOrderCallable(const CreateStructSyncOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStructSyncOrderOutcome()>>(
			[this, request]()
			{
			return this->createStructSyncOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateTaskOutcome Dms_enterpriseClient::createTask(const CreateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskOutcome(CreateTaskResult(outcome.result()));
	else
		return CreateTaskOutcome(outcome.error());
}

void Dms_enterpriseClient::createTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateTaskOutcomeCallable Dms_enterpriseClient::createTaskCallable(const CreateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
			[this, request]()
			{
			return this->createTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateTaskFlowOutcome Dms_enterpriseClient::createTaskFlow(const CreateTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskFlowOutcome(CreateTaskFlowResult(outcome.result()));
	else
		return CreateTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::createTaskFlowAsync(const CreateTaskFlowRequest& request, const CreateTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateTaskFlowOutcomeCallable Dms_enterpriseClient::createTaskFlowCallable(const CreateTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->createTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateUploadFileJobOutcome Dms_enterpriseClient::createUploadFileJob(const CreateUploadFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadFileJobOutcome(CreateUploadFileJobResult(outcome.result()));
	else
		return CreateUploadFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::createUploadFileJobAsync(const CreateUploadFileJobRequest& request, const CreateUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateUploadFileJobOutcomeCallable Dms_enterpriseClient::createUploadFileJobCallable(const CreateUploadFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadFileJobOutcome()>>(
			[this, request]()
			{
			return this->createUploadFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::CreateUploadOSSFileJobOutcome Dms_enterpriseClient::createUploadOSSFileJob(const CreateUploadOSSFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadOSSFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadOSSFileJobOutcome(CreateUploadOSSFileJobResult(outcome.result()));
	else
		return CreateUploadOSSFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::createUploadOSSFileJobAsync(const CreateUploadOSSFileJobRequest& request, const CreateUploadOSSFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadOSSFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::CreateUploadOSSFileJobOutcomeCallable Dms_enterpriseClient::createUploadOSSFileJobCallable(const CreateUploadOSSFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadOSSFileJobOutcome()>>(
			[this, request]()
			{
			return this->createUploadOSSFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteAbacAuthorizationOutcome Dms_enterpriseClient::deleteAbacAuthorization(const DeleteAbacAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAbacAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAbacAuthorizationOutcome(DeleteAbacAuthorizationResult(outcome.result()));
	else
		return DeleteAbacAuthorizationOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteAbacAuthorizationAsync(const DeleteAbacAuthorizationRequest& request, const DeleteAbacAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAbacAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteAbacAuthorizationOutcomeCallable Dms_enterpriseClient::deleteAbacAuthorizationCallable(const DeleteAbacAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAbacAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->deleteAbacAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteAbacPolicyOutcome Dms_enterpriseClient::deleteAbacPolicy(const DeleteAbacPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAbacPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAbacPolicyOutcome(DeleteAbacPolicyResult(outcome.result()));
	else
		return DeleteAbacPolicyOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteAbacPolicyAsync(const DeleteAbacPolicyRequest& request, const DeleteAbacPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAbacPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteAbacPolicyOutcomeCallable Dms_enterpriseClient::deleteAbacPolicyCallable(const DeleteAbacPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAbacPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteAbacPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteAuthorityTemplateOutcome Dms_enterpriseClient::deleteAuthorityTemplate(const DeleteAuthorityTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAuthorityTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAuthorityTemplateOutcome(DeleteAuthorityTemplateResult(outcome.result()));
	else
		return DeleteAuthorityTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteAuthorityTemplateAsync(const DeleteAuthorityTemplateRequest& request, const DeleteAuthorityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAuthorityTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteAuthorityTemplateOutcomeCallable Dms_enterpriseClient::deleteAuthorityTemplateCallable(const DeleteAuthorityTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAuthorityTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteAuthorityTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteInstanceOutcome Dms_enterpriseClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void Dms_enterpriseClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteInstanceOutcomeCallable Dms_enterpriseClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLakeHouseSpaceOutcome Dms_enterpriseClient::deleteLakeHouseSpace(const DeleteLakeHouseSpaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLakeHouseSpaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLakeHouseSpaceOutcome(DeleteLakeHouseSpaceResult(outcome.result()));
	else
		return DeleteLakeHouseSpaceOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLakeHouseSpaceAsync(const DeleteLakeHouseSpaceRequest& request, const DeleteLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLakeHouseSpace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLakeHouseSpaceOutcomeCallable Dms_enterpriseClient::deleteLakeHouseSpaceCallable(const DeleteLakeHouseSpaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLakeHouseSpaceOutcome()>>(
			[this, request]()
			{
			return this->deleteLakeHouseSpace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLhMembersOutcome Dms_enterpriseClient::deleteLhMembers(const DeleteLhMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLhMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLhMembersOutcome(DeleteLhMembersResult(outcome.result()));
	else
		return DeleteLhMembersOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLhMembersAsync(const DeleteLhMembersRequest& request, const DeleteLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLhMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLhMembersOutcomeCallable Dms_enterpriseClient::deleteLhMembersCallable(const DeleteLhMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLhMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteLhMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLogicDatabaseOutcome Dms_enterpriseClient::deleteLogicDatabase(const DeleteLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogicDatabaseOutcome(DeleteLogicDatabaseResult(outcome.result()));
	else
		return DeleteLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLogicDatabaseAsync(const DeleteLogicDatabaseRequest& request, const DeleteLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLogicDatabaseOutcomeCallable Dms_enterpriseClient::deleteLogicDatabaseCallable(const DeleteLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteLogicTableRouteConfigOutcome Dms_enterpriseClient::deleteLogicTableRouteConfig(const DeleteLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogicTableRouteConfigOutcome(DeleteLogicTableRouteConfigResult(outcome.result()));
	else
		return DeleteLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteLogicTableRouteConfigAsync(const DeleteLogicTableRouteConfigRequest& request, const DeleteLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::deleteLogicTableRouteConfigCallable(const DeleteLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteProxyOutcome Dms_enterpriseClient::deleteProxy(const DeleteProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProxyOutcome(DeleteProxyResult(outcome.result()));
	else
		return DeleteProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteProxyAsync(const DeleteProxyRequest& request, const DeleteProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteProxyOutcomeCallable Dms_enterpriseClient::deleteProxyCallable(const DeleteProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProxyOutcome()>>(
			[this, request]()
			{
			return this->deleteProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteProxyAccessOutcome Dms_enterpriseClient::deleteProxyAccess(const DeleteProxyAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProxyAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProxyAccessOutcome(DeleteProxyAccessResult(outcome.result()));
	else
		return DeleteProxyAccessOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteProxyAccessAsync(const DeleteProxyAccessRequest& request, const DeleteProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProxyAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteProxyAccessOutcomeCallable Dms_enterpriseClient::deleteProxyAccessCallable(const DeleteProxyAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProxyAccessOutcome()>>(
			[this, request]()
			{
			return this->deleteProxyAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteScenarioOutcome Dms_enterpriseClient::deleteScenario(const DeleteScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScenarioOutcome(DeleteScenarioResult(outcome.result()));
	else
		return DeleteScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteScenarioAsync(const DeleteScenarioRequest& request, const DeleteScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteScenarioOutcomeCallable Dms_enterpriseClient::deleteScenarioCallable(const DeleteScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScenarioOutcome()>>(
			[this, request]()
			{
			return this->deleteScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteStandardGroupOutcome Dms_enterpriseClient::deleteStandardGroup(const DeleteStandardGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStandardGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStandardGroupOutcome(DeleteStandardGroupResult(outcome.result()));
	else
		return DeleteStandardGroupOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteStandardGroupAsync(const DeleteStandardGroupRequest& request, const DeleteStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStandardGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteStandardGroupOutcomeCallable Dms_enterpriseClient::deleteStandardGroupCallable(const DeleteStandardGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStandardGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteStandardGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteTaskOutcome Dms_enterpriseClient::deleteTask(const DeleteTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskOutcome(DeleteTaskResult(outcome.result()));
	else
		return DeleteTaskOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteTaskOutcomeCallable Dms_enterpriseClient::deleteTaskCallable(const DeleteTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteTaskFlowOutcome Dms_enterpriseClient::deleteTaskFlow(const DeleteTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskFlowOutcome(DeleteTaskFlowResult(outcome.result()));
	else
		return DeleteTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteTaskFlowAsync(const DeleteTaskFlowRequest& request, const DeleteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteTaskFlowOutcomeCallable Dms_enterpriseClient::deleteTaskFlowCallable(const DeleteTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteTaskFlowEdgesByConditionOutcome Dms_enterpriseClient::deleteTaskFlowEdgesByCondition(const DeleteTaskFlowEdgesByConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskFlowEdgesByConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskFlowEdgesByConditionOutcome(DeleteTaskFlowEdgesByConditionResult(outcome.result()));
	else
		return DeleteTaskFlowEdgesByConditionOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteTaskFlowEdgesByConditionAsync(const DeleteTaskFlowEdgesByConditionRequest& request, const DeleteTaskFlowEdgesByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTaskFlowEdgesByCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteTaskFlowEdgesByConditionOutcomeCallable Dms_enterpriseClient::deleteTaskFlowEdgesByConditionCallable(const DeleteTaskFlowEdgesByConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskFlowEdgesByConditionOutcome()>>(
			[this, request]()
			{
			return this->deleteTaskFlowEdgesByCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DeleteUserOutcome Dms_enterpriseClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void Dms_enterpriseClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DeleteUserOutcomeCallable Dms_enterpriseClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DisableUserOutcome Dms_enterpriseClient::disableUser(const DisableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableUserOutcome(DisableUserResult(outcome.result()));
	else
		return DisableUserOutcome(outcome.error());
}

void Dms_enterpriseClient::disableUserAsync(const DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DisableUserOutcomeCallable Dms_enterpriseClient::disableUserCallable(const DisableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableUserOutcome()>>(
			[this, request]()
			{
			return this->disableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::DownloadDataTrackResultOutcome Dms_enterpriseClient::downloadDataTrackResult(const DownloadDataTrackResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadDataTrackResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadDataTrackResultOutcome(DownloadDataTrackResultResult(outcome.result()));
	else
		return DownloadDataTrackResultOutcome(outcome.error());
}

void Dms_enterpriseClient::downloadDataTrackResultAsync(const DownloadDataTrackResultRequest& request, const DownloadDataTrackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadDataTrackResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::DownloadDataTrackResultOutcomeCallable Dms_enterpriseClient::downloadDataTrackResultCallable(const DownloadDataTrackResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadDataTrackResultOutcome()>>(
			[this, request]()
			{
			return this->downloadDataTrackResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::EditLogicDatabaseOutcome Dms_enterpriseClient::editLogicDatabase(const EditLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditLogicDatabaseOutcome(EditLogicDatabaseResult(outcome.result()));
	else
		return EditLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::editLogicDatabaseAsync(const EditLogicDatabaseRequest& request, const EditLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::EditLogicDatabaseOutcomeCallable Dms_enterpriseClient::editLogicDatabaseCallable(const EditLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->editLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::EnableUserOutcome Dms_enterpriseClient::enableUser(const EnableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableUserOutcome(EnableUserResult(outcome.result()));
	else
		return EnableUserOutcome(outcome.error());
}

void Dms_enterpriseClient::enableUserAsync(const EnableUserRequest& request, const EnableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::EnableUserOutcomeCallable Dms_enterpriseClient::enableUserCallable(const EnableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableUserOutcome()>>(
			[this, request]()
			{
			return this->enableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteDataCorrectOutcome Dms_enterpriseClient::executeDataCorrect(const ExecuteDataCorrectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteDataCorrectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteDataCorrectOutcome(ExecuteDataCorrectResult(outcome.result()));
	else
		return ExecuteDataCorrectOutcome(outcome.error());
}

void Dms_enterpriseClient::executeDataCorrectAsync(const ExecuteDataCorrectRequest& request, const ExecuteDataCorrectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeDataCorrect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteDataCorrectOutcomeCallable Dms_enterpriseClient::executeDataCorrectCallable(const ExecuteDataCorrectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteDataCorrectOutcome()>>(
			[this, request]()
			{
			return this->executeDataCorrect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteDataExportOutcome Dms_enterpriseClient::executeDataExport(const ExecuteDataExportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteDataExportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteDataExportOutcome(ExecuteDataExportResult(outcome.result()));
	else
		return ExecuteDataExportOutcome(outcome.error());
}

void Dms_enterpriseClient::executeDataExportAsync(const ExecuteDataExportRequest& request, const ExecuteDataExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeDataExport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteDataExportOutcomeCallable Dms_enterpriseClient::executeDataExportCallable(const ExecuteDataExportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteDataExportOutcome()>>(
			[this, request]()
			{
			return this->executeDataExport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteScriptOutcome Dms_enterpriseClient::executeScript(const ExecuteScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteScriptOutcome(ExecuteScriptResult(outcome.result()));
	else
		return ExecuteScriptOutcome(outcome.error());
}

void Dms_enterpriseClient::executeScriptAsync(const ExecuteScriptRequest& request, const ExecuteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteScriptOutcomeCallable Dms_enterpriseClient::executeScriptCallable(const ExecuteScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteScriptOutcome()>>(
			[this, request]()
			{
			return this->executeScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ExecuteStructSyncOutcome Dms_enterpriseClient::executeStructSync(const ExecuteStructSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteStructSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteStructSyncOutcome(ExecuteStructSyncResult(outcome.result()));
	else
		return ExecuteStructSyncOutcome(outcome.error());
}

void Dms_enterpriseClient::executeStructSyncAsync(const ExecuteStructSyncRequest& request, const ExecuteStructSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeStructSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ExecuteStructSyncOutcomeCallable Dms_enterpriseClient::executeStructSyncCallable(const ExecuteStructSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteStructSyncOutcome()>>(
			[this, request]()
			{
			return this->executeStructSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetAbacPolicyOutcome Dms_enterpriseClient::getAbacPolicy(const GetAbacPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAbacPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAbacPolicyOutcome(GetAbacPolicyResult(outcome.result()));
	else
		return GetAbacPolicyOutcome(outcome.error());
}

void Dms_enterpriseClient::getAbacPolicyAsync(const GetAbacPolicyRequest& request, const GetAbacPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAbacPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetAbacPolicyOutcomeCallable Dms_enterpriseClient::getAbacPolicyCallable(const GetAbacPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAbacPolicyOutcome()>>(
			[this, request]()
			{
			return this->getAbacPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetApprovalDetailOutcome Dms_enterpriseClient::getApprovalDetail(const GetApprovalDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApprovalDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApprovalDetailOutcome(GetApprovalDetailResult(outcome.result()));
	else
		return GetApprovalDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getApprovalDetailAsync(const GetApprovalDetailRequest& request, const GetApprovalDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApprovalDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetApprovalDetailOutcomeCallable Dms_enterpriseClient::getApprovalDetailCallable(const GetApprovalDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApprovalDetailOutcome()>>(
			[this, request]()
			{
			return this->getApprovalDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetAuthorityTemplateOutcome Dms_enterpriseClient::getAuthorityTemplate(const GetAuthorityTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthorityTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthorityTemplateOutcome(GetAuthorityTemplateResult(outcome.result()));
	else
		return GetAuthorityTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::getAuthorityTemplateAsync(const GetAuthorityTemplateRequest& request, const GetAuthorityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthorityTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetAuthorityTemplateOutcomeCallable Dms_enterpriseClient::getAuthorityTemplateCallable(const GetAuthorityTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthorityTemplateOutcome()>>(
			[this, request]()
			{
			return this->getAuthorityTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetAuthorityTemplateItemOutcome Dms_enterpriseClient::getAuthorityTemplateItem(const GetAuthorityTemplateItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthorityTemplateItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthorityTemplateItemOutcome(GetAuthorityTemplateItemResult(outcome.result()));
	else
		return GetAuthorityTemplateItemOutcome(outcome.error());
}

void Dms_enterpriseClient::getAuthorityTemplateItemAsync(const GetAuthorityTemplateItemRequest& request, const GetAuthorityTemplateItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthorityTemplateItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetAuthorityTemplateItemOutcomeCallable Dms_enterpriseClient::getAuthorityTemplateItemCallable(const GetAuthorityTemplateItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthorityTemplateItemOutcome()>>(
			[this, request]()
			{
			return this->getAuthorityTemplateItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetClassificationTemplateOutcome Dms_enterpriseClient::getClassificationTemplate(const GetClassificationTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClassificationTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClassificationTemplateOutcome(GetClassificationTemplateResult(outcome.result()));
	else
		return GetClassificationTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::getClassificationTemplateAsync(const GetClassificationTemplateRequest& request, const GetClassificationTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClassificationTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetClassificationTemplateOutcomeCallable Dms_enterpriseClient::getClassificationTemplateCallable(const GetClassificationTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClassificationTemplateOutcome()>>(
			[this, request]()
			{
			return this->getClassificationTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDBTaskSQLJobLogOutcome Dms_enterpriseClient::getDBTaskSQLJobLog(const GetDBTaskSQLJobLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBTaskSQLJobLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBTaskSQLJobLogOutcome(GetDBTaskSQLJobLogResult(outcome.result()));
	else
		return GetDBTaskSQLJobLogOutcome(outcome.error());
}

void Dms_enterpriseClient::getDBTaskSQLJobLogAsync(const GetDBTaskSQLJobLogRequest& request, const GetDBTaskSQLJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBTaskSQLJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDBTaskSQLJobLogOutcomeCallable Dms_enterpriseClient::getDBTaskSQLJobLogCallable(const GetDBTaskSQLJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBTaskSQLJobLogOutcome()>>(
			[this, request]()
			{
			return this->getDBTaskSQLJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDBTopologyOutcome Dms_enterpriseClient::getDBTopology(const GetDBTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBTopologyOutcome(GetDBTopologyResult(outcome.result()));
	else
		return GetDBTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getDBTopologyAsync(const GetDBTopologyRequest& request, const GetDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDBTopologyOutcomeCallable Dms_enterpriseClient::getDBTopologyCallable(const GetDBTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBTopologyOutcome()>>(
			[this, request]()
			{
			return this->getDBTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataArchiveCountOutcome Dms_enterpriseClient::getDataArchiveCount(const GetDataArchiveCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataArchiveCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataArchiveCountOutcome(GetDataArchiveCountResult(outcome.result()));
	else
		return GetDataArchiveCountOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataArchiveCountAsync(const GetDataArchiveCountRequest& request, const GetDataArchiveCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataArchiveCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataArchiveCountOutcomeCallable Dms_enterpriseClient::getDataArchiveCountCallable(const GetDataArchiveCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataArchiveCountOutcome()>>(
			[this, request]()
			{
			return this->getDataArchiveCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataArchiveOrderDetailOutcome Dms_enterpriseClient::getDataArchiveOrderDetail(const GetDataArchiveOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataArchiveOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataArchiveOrderDetailOutcome(GetDataArchiveOrderDetailResult(outcome.result()));
	else
		return GetDataArchiveOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataArchiveOrderDetailAsync(const GetDataArchiveOrderDetailRequest& request, const GetDataArchiveOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataArchiveOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataArchiveOrderDetailOutcomeCallable Dms_enterpriseClient::getDataArchiveOrderDetailCallable(const GetDataArchiveOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataArchiveOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataArchiveOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectBackupFilesOutcome Dms_enterpriseClient::getDataCorrectBackupFiles(const GetDataCorrectBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectBackupFilesOutcome(GetDataCorrectBackupFilesResult(outcome.result()));
	else
		return GetDataCorrectBackupFilesOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectBackupFilesAsync(const GetDataCorrectBackupFilesRequest& request, const GetDataCorrectBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectBackupFilesOutcomeCallable Dms_enterpriseClient::getDataCorrectBackupFilesCallable(const GetDataCorrectBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectOrderDetailOutcome Dms_enterpriseClient::getDataCorrectOrderDetail(const GetDataCorrectOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectOrderDetailOutcome(GetDataCorrectOrderDetailResult(outcome.result()));
	else
		return GetDataCorrectOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectOrderDetailAsync(const GetDataCorrectOrderDetailRequest& request, const GetDataCorrectOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectOrderDetailOutcomeCallable Dms_enterpriseClient::getDataCorrectOrderDetailCallable(const GetDataCorrectOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectRollbackFileOutcome Dms_enterpriseClient::getDataCorrectRollbackFile(const GetDataCorrectRollbackFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectRollbackFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectRollbackFileOutcome(GetDataCorrectRollbackFileResult(outcome.result()));
	else
		return GetDataCorrectRollbackFileOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectRollbackFileAsync(const GetDataCorrectRollbackFileRequest& request, const GetDataCorrectRollbackFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectRollbackFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectRollbackFileOutcomeCallable Dms_enterpriseClient::getDataCorrectRollbackFileCallable(const GetDataCorrectRollbackFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectRollbackFileOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectRollbackFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectSQLFileOutcome Dms_enterpriseClient::getDataCorrectSQLFile(const GetDataCorrectSQLFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectSQLFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectSQLFileOutcome(GetDataCorrectSQLFileResult(outcome.result()));
	else
		return GetDataCorrectSQLFileOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectSQLFileAsync(const GetDataCorrectSQLFileRequest& request, const GetDataCorrectSQLFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectSQLFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectSQLFileOutcomeCallable Dms_enterpriseClient::getDataCorrectSQLFileCallable(const GetDataCorrectSQLFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectSQLFileOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectSQLFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCorrectTaskDetailOutcome Dms_enterpriseClient::getDataCorrectTaskDetail(const GetDataCorrectTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCorrectTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCorrectTaskDetailOutcome(GetDataCorrectTaskDetailResult(outcome.result()));
	else
		return GetDataCorrectTaskDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCorrectTaskDetailAsync(const GetDataCorrectTaskDetailRequest& request, const GetDataCorrectTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCorrectTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCorrectTaskDetailOutcomeCallable Dms_enterpriseClient::getDataCorrectTaskDetailCallable(const GetDataCorrectTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCorrectTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataCorrectTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCronClearConfigOutcome Dms_enterpriseClient::getDataCronClearConfig(const GetDataCronClearConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCronClearConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCronClearConfigOutcome(GetDataCronClearConfigResult(outcome.result()));
	else
		return GetDataCronClearConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCronClearConfigAsync(const GetDataCronClearConfigRequest& request, const GetDataCronClearConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCronClearConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCronClearConfigOutcomeCallable Dms_enterpriseClient::getDataCronClearConfigCallable(const GetDataCronClearConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCronClearConfigOutcome()>>(
			[this, request]()
			{
			return this->getDataCronClearConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataCronClearTaskDetailListOutcome Dms_enterpriseClient::getDataCronClearTaskDetailList(const GetDataCronClearTaskDetailListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataCronClearTaskDetailListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataCronClearTaskDetailListOutcome(GetDataCronClearTaskDetailListResult(outcome.result()));
	else
		return GetDataCronClearTaskDetailListOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataCronClearTaskDetailListAsync(const GetDataCronClearTaskDetailListRequest& request, const GetDataCronClearTaskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataCronClearTaskDetailList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataCronClearTaskDetailListOutcomeCallable Dms_enterpriseClient::getDataCronClearTaskDetailListCallable(const GetDataCronClearTaskDetailListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataCronClearTaskDetailListOutcome()>>(
			[this, request]()
			{
			return this->getDataCronClearTaskDetailList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataExportDownloadURLOutcome Dms_enterpriseClient::getDataExportDownloadURL(const GetDataExportDownloadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataExportDownloadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataExportDownloadURLOutcome(GetDataExportDownloadURLResult(outcome.result()));
	else
		return GetDataExportDownloadURLOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataExportDownloadURLAsync(const GetDataExportDownloadURLRequest& request, const GetDataExportDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataExportDownloadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataExportDownloadURLOutcomeCallable Dms_enterpriseClient::getDataExportDownloadURLCallable(const GetDataExportDownloadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataExportDownloadURLOutcome()>>(
			[this, request]()
			{
			return this->getDataExportDownloadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataExportOrderDetailOutcome Dms_enterpriseClient::getDataExportOrderDetail(const GetDataExportOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataExportOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataExportOrderDetailOutcome(GetDataExportOrderDetailResult(outcome.result()));
	else
		return GetDataExportOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataExportOrderDetailAsync(const GetDataExportOrderDetailRequest& request, const GetDataExportOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataExportOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataExportOrderDetailOutcomeCallable Dms_enterpriseClient::getDataExportOrderDetailCallable(const GetDataExportOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataExportOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataExportOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataExportPreCheckDetailOutcome Dms_enterpriseClient::getDataExportPreCheckDetail(const GetDataExportPreCheckDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataExportPreCheckDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataExportPreCheckDetailOutcome(GetDataExportPreCheckDetailResult(outcome.result()));
	else
		return GetDataExportPreCheckDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataExportPreCheckDetailAsync(const GetDataExportPreCheckDetailRequest& request, const GetDataExportPreCheckDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataExportPreCheckDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataExportPreCheckDetailOutcomeCallable Dms_enterpriseClient::getDataExportPreCheckDetailCallable(const GetDataExportPreCheckDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataExportPreCheckDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataExportPreCheckDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataImportSQLOutcome Dms_enterpriseClient::getDataImportSQL(const GetDataImportSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataImportSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataImportSQLOutcome(GetDataImportSQLResult(outcome.result()));
	else
		return GetDataImportSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataImportSQLAsync(const GetDataImportSQLRequest& request, const GetDataImportSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataImportSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataImportSQLOutcomeCallable Dms_enterpriseClient::getDataImportSQLCallable(const GetDataImportSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataImportSQLOutcome()>>(
			[this, request]()
			{
			return this->getDataImportSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataLakeCatalogOutcome Dms_enterpriseClient::getDataLakeCatalog(const GetDataLakeCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataLakeCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataLakeCatalogOutcome(GetDataLakeCatalogResult(outcome.result()));
	else
		return GetDataLakeCatalogOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataLakeCatalogAsync(const GetDataLakeCatalogRequest& request, const GetDataLakeCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataLakeCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataLakeCatalogOutcomeCallable Dms_enterpriseClient::getDataLakeCatalogCallable(const GetDataLakeCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataLakeCatalogOutcome()>>(
			[this, request]()
			{
			return this->getDataLakeCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataLakeDatabaseOutcome Dms_enterpriseClient::getDataLakeDatabase(const GetDataLakeDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataLakeDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataLakeDatabaseOutcome(GetDataLakeDatabaseResult(outcome.result()));
	else
		return GetDataLakeDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataLakeDatabaseAsync(const GetDataLakeDatabaseRequest& request, const GetDataLakeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataLakeDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataLakeDatabaseOutcomeCallable Dms_enterpriseClient::getDataLakeDatabaseCallable(const GetDataLakeDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataLakeDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDataLakeDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataLakeTableOutcome Dms_enterpriseClient::getDataLakeTable(const GetDataLakeTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataLakeTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataLakeTableOutcome(GetDataLakeTableResult(outcome.result()));
	else
		return GetDataLakeTableOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataLakeTableAsync(const GetDataLakeTableRequest& request, const GetDataLakeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataLakeTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataLakeTableOutcomeCallable Dms_enterpriseClient::getDataLakeTableCallable(const GetDataLakeTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataLakeTableOutcome()>>(
			[this, request]()
			{
			return this->getDataLakeTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataTrackJobDegreeOutcome Dms_enterpriseClient::getDataTrackJobDegree(const GetDataTrackJobDegreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataTrackJobDegreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataTrackJobDegreeOutcome(GetDataTrackJobDegreeResult(outcome.result()));
	else
		return GetDataTrackJobDegreeOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataTrackJobDegreeAsync(const GetDataTrackJobDegreeRequest& request, const GetDataTrackJobDegreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataTrackJobDegree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataTrackJobDegreeOutcomeCallable Dms_enterpriseClient::getDataTrackJobDegreeCallable(const GetDataTrackJobDegreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataTrackJobDegreeOutcome()>>(
			[this, request]()
			{
			return this->getDataTrackJobDegree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataTrackJobTableMetaOutcome Dms_enterpriseClient::getDataTrackJobTableMeta(const GetDataTrackJobTableMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataTrackJobTableMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataTrackJobTableMetaOutcome(GetDataTrackJobTableMetaResult(outcome.result()));
	else
		return GetDataTrackJobTableMetaOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataTrackJobTableMetaAsync(const GetDataTrackJobTableMetaRequest& request, const GetDataTrackJobTableMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataTrackJobTableMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataTrackJobTableMetaOutcomeCallable Dms_enterpriseClient::getDataTrackJobTableMetaCallable(const GetDataTrackJobTableMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataTrackJobTableMetaOutcome()>>(
			[this, request]()
			{
			return this->getDataTrackJobTableMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDataTrackOrderDetailOutcome Dms_enterpriseClient::getDataTrackOrderDetail(const GetDataTrackOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataTrackOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataTrackOrderDetailOutcome(GetDataTrackOrderDetailResult(outcome.result()));
	else
		return GetDataTrackOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDataTrackOrderDetailAsync(const GetDataTrackOrderDetailRequest& request, const GetDataTrackOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataTrackOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDataTrackOrderDetailOutcomeCallable Dms_enterpriseClient::getDataTrackOrderDetailCallable(const GetDataTrackOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataTrackOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDataTrackOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDatabaseOutcome Dms_enterpriseClient::getDatabase(const GetDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseOutcome(GetDatabaseResult(outcome.result()));
	else
		return GetDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDatabaseOutcomeCallable Dms_enterpriseClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDatabaseExportOrderDetailOutcome Dms_enterpriseClient::getDatabaseExportOrderDetail(const GetDatabaseExportOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseExportOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseExportOrderDetailOutcome(GetDatabaseExportOrderDetailResult(outcome.result()));
	else
		return GetDatabaseExportOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getDatabaseExportOrderDetailAsync(const GetDatabaseExportOrderDetailRequest& request, const GetDatabaseExportOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabaseExportOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDatabaseExportOrderDetailOutcomeCallable Dms_enterpriseClient::getDatabaseExportOrderDetailCallable(const GetDatabaseExportOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseExportOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getDatabaseExportOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetDbExportDownloadURLOutcome Dms_enterpriseClient::getDbExportDownloadURL(const GetDbExportDownloadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDbExportDownloadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDbExportDownloadURLOutcome(GetDbExportDownloadURLResult(outcome.result()));
	else
		return GetDbExportDownloadURLOutcome(outcome.error());
}

void Dms_enterpriseClient::getDbExportDownloadURLAsync(const GetDbExportDownloadURLRequest& request, const GetDbExportDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDbExportDownloadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetDbExportDownloadURLOutcomeCallable Dms_enterpriseClient::getDbExportDownloadURLCallable(const GetDbExportDownloadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDbExportDownloadURLOutcome()>>(
			[this, request]()
			{
			return this->getDbExportDownloadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetInstanceOutcome Dms_enterpriseClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetInstanceOutcomeCallable Dms_enterpriseClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetIntervalLimitOfSLAOutcome Dms_enterpriseClient::getIntervalLimitOfSLA(const GetIntervalLimitOfSLARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIntervalLimitOfSLAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIntervalLimitOfSLAOutcome(GetIntervalLimitOfSLAResult(outcome.result()));
	else
		return GetIntervalLimitOfSLAOutcome(outcome.error());
}

void Dms_enterpriseClient::getIntervalLimitOfSLAAsync(const GetIntervalLimitOfSLARequest& request, const GetIntervalLimitOfSLAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIntervalLimitOfSLA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetIntervalLimitOfSLAOutcomeCallable Dms_enterpriseClient::getIntervalLimitOfSLACallable(const GetIntervalLimitOfSLARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIntervalLimitOfSLAOutcome()>>(
			[this, request]()
			{
			return this->getIntervalLimitOfSLA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetLhSpaceByNameOutcome Dms_enterpriseClient::getLhSpaceByName(const GetLhSpaceByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLhSpaceByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLhSpaceByNameOutcome(GetLhSpaceByNameResult(outcome.result()));
	else
		return GetLhSpaceByNameOutcome(outcome.error());
}

void Dms_enterpriseClient::getLhSpaceByNameAsync(const GetLhSpaceByNameRequest& request, const GetLhSpaceByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLhSpaceByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetLhSpaceByNameOutcomeCallable Dms_enterpriseClient::getLhSpaceByNameCallable(const GetLhSpaceByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLhSpaceByNameOutcome()>>(
			[this, request]()
			{
			return this->getLhSpaceByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetLogicDatabaseOutcome Dms_enterpriseClient::getLogicDatabase(const GetLogicDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLogicDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLogicDatabaseOutcome(GetLogicDatabaseResult(outcome.result()));
	else
		return GetLogicDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getLogicDatabaseAsync(const GetLogicDatabaseRequest& request, const GetLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLogicDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetLogicDatabaseOutcomeCallable Dms_enterpriseClient::getLogicDatabaseCallable(const GetLogicDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogicDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getLogicDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetMetaTableColumnOutcome Dms_enterpriseClient::getMetaTableColumn(const GetMetaTableColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableColumnOutcome(GetMetaTableColumnResult(outcome.result()));
	else
		return GetMetaTableColumnOutcome(outcome.error());
}

void Dms_enterpriseClient::getMetaTableColumnAsync(const GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetMetaTableColumnOutcomeCallable Dms_enterpriseClient::getMetaTableColumnCallable(const GetMetaTableColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableColumnOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetMetaTableDetailInfoOutcome Dms_enterpriseClient::getMetaTableDetailInfo(const GetMetaTableDetailInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableDetailInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableDetailInfoOutcome(GetMetaTableDetailInfoResult(outcome.result()));
	else
		return GetMetaTableDetailInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::getMetaTableDetailInfoAsync(const GetMetaTableDetailInfoRequest& request, const GetMetaTableDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableDetailInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetMetaTableDetailInfoOutcomeCallable Dms_enterpriseClient::getMetaTableDetailInfoCallable(const GetMetaTableDetailInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableDetailInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableDetailInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOnlineDDLProgressOutcome Dms_enterpriseClient::getOnlineDDLProgress(const GetOnlineDDLProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnlineDDLProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnlineDDLProgressOutcome(GetOnlineDDLProgressResult(outcome.result()));
	else
		return GetOnlineDDLProgressOutcome(outcome.error());
}

void Dms_enterpriseClient::getOnlineDDLProgressAsync(const GetOnlineDDLProgressRequest& request, const GetOnlineDDLProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnlineDDLProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOnlineDDLProgressOutcomeCallable Dms_enterpriseClient::getOnlineDDLProgressCallable(const GetOnlineDDLProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnlineDDLProgressOutcome()>>(
			[this, request]()
			{
			return this->getOnlineDDLProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOpLogOutcome Dms_enterpriseClient::getOpLog(const GetOpLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpLogOutcome(GetOpLogResult(outcome.result()));
	else
		return GetOpLogOutcome(outcome.error());
}

void Dms_enterpriseClient::getOpLogAsync(const GetOpLogRequest& request, const GetOpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOpLogOutcomeCallable Dms_enterpriseClient::getOpLogCallable(const GetOpLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpLogOutcome()>>(
			[this, request]()
			{
			return this->getOpLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOrderAttachmentFileOutcome Dms_enterpriseClient::getOrderAttachmentFile(const GetOrderAttachmentFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrderAttachmentFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrderAttachmentFileOutcome(GetOrderAttachmentFileResult(outcome.result()));
	else
		return GetOrderAttachmentFileOutcome(outcome.error());
}

void Dms_enterpriseClient::getOrderAttachmentFileAsync(const GetOrderAttachmentFileRequest& request, const GetOrderAttachmentFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrderAttachmentFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOrderAttachmentFileOutcomeCallable Dms_enterpriseClient::getOrderAttachmentFileCallable(const GetOrderAttachmentFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrderAttachmentFileOutcome()>>(
			[this, request]()
			{
			return this->getOrderAttachmentFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOrderBaseInfoOutcome Dms_enterpriseClient::getOrderBaseInfo(const GetOrderBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrderBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrderBaseInfoOutcome(GetOrderBaseInfoResult(outcome.result()));
	else
		return GetOrderBaseInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::getOrderBaseInfoAsync(const GetOrderBaseInfoRequest& request, const GetOrderBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrderBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOrderBaseInfoOutcomeCallable Dms_enterpriseClient::getOrderBaseInfoCallable(const GetOrderBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrderBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->getOrderBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetOwnerApplyOrderDetailOutcome Dms_enterpriseClient::getOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOwnerApplyOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOwnerApplyOrderDetailOutcome(GetOwnerApplyOrderDetailResult(outcome.result()));
	else
		return GetOwnerApplyOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getOwnerApplyOrderDetailAsync(const GetOwnerApplyOrderDetailRequest& request, const GetOwnerApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOwnerApplyOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetOwnerApplyOrderDetailOutcomeCallable Dms_enterpriseClient::getOwnerApplyOrderDetailCallable(const GetOwnerApplyOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOwnerApplyOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getOwnerApplyOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetPagedInstanceOutcome Dms_enterpriseClient::getPagedInstance(const GetPagedInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPagedInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPagedInstanceOutcome(GetPagedInstanceResult(outcome.result()));
	else
		return GetPagedInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::getPagedInstanceAsync(const GetPagedInstanceRequest& request, const GetPagedInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPagedInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetPagedInstanceOutcomeCallable Dms_enterpriseClient::getPagedInstanceCallable(const GetPagedInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPagedInstanceOutcome()>>(
			[this, request]()
			{
			return this->getPagedInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetPermApplyOrderDetailOutcome Dms_enterpriseClient::getPermApplyOrderDetail(const GetPermApplyOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPermApplyOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPermApplyOrderDetailOutcome(GetPermApplyOrderDetailResult(outcome.result()));
	else
		return GetPermApplyOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getPermApplyOrderDetailAsync(const GetPermApplyOrderDetailRequest& request, const GetPermApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPermApplyOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetPermApplyOrderDetailOutcomeCallable Dms_enterpriseClient::getPermApplyOrderDetailCallable(const GetPermApplyOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPermApplyOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getPermApplyOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetPhysicalDatabaseOutcome Dms_enterpriseClient::getPhysicalDatabase(const GetPhysicalDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPhysicalDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPhysicalDatabaseOutcome(GetPhysicalDatabaseResult(outcome.result()));
	else
		return GetPhysicalDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::getPhysicalDatabaseAsync(const GetPhysicalDatabaseRequest& request, const GetPhysicalDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPhysicalDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetPhysicalDatabaseOutcomeCallable Dms_enterpriseClient::getPhysicalDatabaseCallable(const GetPhysicalDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPhysicalDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getPhysicalDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetProxyOutcome Dms_enterpriseClient::getProxy(const GetProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProxyOutcome(GetProxyResult(outcome.result()));
	else
		return GetProxyOutcome(outcome.error());
}

void Dms_enterpriseClient::getProxyAsync(const GetProxyRequest& request, const GetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetProxyOutcomeCallable Dms_enterpriseClient::getProxyCallable(const GetProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProxyOutcome()>>(
			[this, request]()
			{
			return this->getProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetProxyAccessOutcome Dms_enterpriseClient::getProxyAccess(const GetProxyAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProxyAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProxyAccessOutcome(GetProxyAccessResult(outcome.result()));
	else
		return GetProxyAccessOutcome(outcome.error());
}

void Dms_enterpriseClient::getProxyAccessAsync(const GetProxyAccessRequest& request, const GetProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProxyAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetProxyAccessOutcomeCallable Dms_enterpriseClient::getProxyAccessCallable(const GetProxyAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProxyAccessOutcome()>>(
			[this, request]()
			{
			return this->getProxyAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetRuleNumLimitOfSLAOutcome Dms_enterpriseClient::getRuleNumLimitOfSLA(const GetRuleNumLimitOfSLARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleNumLimitOfSLAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleNumLimitOfSLAOutcome(GetRuleNumLimitOfSLAResult(outcome.result()));
	else
		return GetRuleNumLimitOfSLAOutcome(outcome.error());
}

void Dms_enterpriseClient::getRuleNumLimitOfSLAAsync(const GetRuleNumLimitOfSLARequest& request, const GetRuleNumLimitOfSLAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRuleNumLimitOfSLA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetRuleNumLimitOfSLAOutcomeCallable Dms_enterpriseClient::getRuleNumLimitOfSLACallable(const GetRuleNumLimitOfSLARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleNumLimitOfSLAOutcome()>>(
			[this, request]()
			{
			return this->getRuleNumLimitOfSLA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetSQLReviewCheckResultStatusOutcome Dms_enterpriseClient::getSQLReviewCheckResultStatus(const GetSQLReviewCheckResultStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSQLReviewCheckResultStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSQLReviewCheckResultStatusOutcome(GetSQLReviewCheckResultStatusResult(outcome.result()));
	else
		return GetSQLReviewCheckResultStatusOutcome(outcome.error());
}

void Dms_enterpriseClient::getSQLReviewCheckResultStatusAsync(const GetSQLReviewCheckResultStatusRequest& request, const GetSQLReviewCheckResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSQLReviewCheckResultStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetSQLReviewCheckResultStatusOutcomeCallable Dms_enterpriseClient::getSQLReviewCheckResultStatusCallable(const GetSQLReviewCheckResultStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSQLReviewCheckResultStatusOutcome()>>(
			[this, request]()
			{
			return this->getSQLReviewCheckResultStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetSQLReviewOptimizeDetailOutcome Dms_enterpriseClient::getSQLReviewOptimizeDetail(const GetSQLReviewOptimizeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSQLReviewOptimizeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSQLReviewOptimizeDetailOutcome(GetSQLReviewOptimizeDetailResult(outcome.result()));
	else
		return GetSQLReviewOptimizeDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getSQLReviewOptimizeDetailAsync(const GetSQLReviewOptimizeDetailRequest& request, const GetSQLReviewOptimizeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSQLReviewOptimizeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetSQLReviewOptimizeDetailOutcomeCallable Dms_enterpriseClient::getSQLReviewOptimizeDetailCallable(const GetSQLReviewOptimizeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSQLReviewOptimizeDetailOutcome()>>(
			[this, request]()
			{
			return this->getSQLReviewOptimizeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStandardGroupOutcome Dms_enterpriseClient::getStandardGroup(const GetStandardGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStandardGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStandardGroupOutcome(GetStandardGroupResult(outcome.result()));
	else
		return GetStandardGroupOutcome(outcome.error());
}

void Dms_enterpriseClient::getStandardGroupAsync(const GetStandardGroupRequest& request, const GetStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStandardGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStandardGroupOutcomeCallable Dms_enterpriseClient::getStandardGroupCallable(const GetStandardGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStandardGroupOutcome()>>(
			[this, request]()
			{
			return this->getStandardGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncExecSqlDetailOutcome Dms_enterpriseClient::getStructSyncExecSqlDetail(const GetStructSyncExecSqlDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncExecSqlDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncExecSqlDetailOutcome(GetStructSyncExecSqlDetailResult(outcome.result()));
	else
		return GetStructSyncExecSqlDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncExecSqlDetailAsync(const GetStructSyncExecSqlDetailRequest& request, const GetStructSyncExecSqlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncExecSqlDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncExecSqlDetailOutcomeCallable Dms_enterpriseClient::getStructSyncExecSqlDetailCallable(const GetStructSyncExecSqlDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncExecSqlDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncExecSqlDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncJobAnalyzeResultOutcome Dms_enterpriseClient::getStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncJobAnalyzeResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncJobAnalyzeResultOutcome(GetStructSyncJobAnalyzeResultResult(outcome.result()));
	else
		return GetStructSyncJobAnalyzeResultOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncJobAnalyzeResultAsync(const GetStructSyncJobAnalyzeResultRequest& request, const GetStructSyncJobAnalyzeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncJobAnalyzeResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncJobAnalyzeResultOutcomeCallable Dms_enterpriseClient::getStructSyncJobAnalyzeResultCallable(const GetStructSyncJobAnalyzeResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncJobAnalyzeResultOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncJobAnalyzeResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncJobDetailOutcome Dms_enterpriseClient::getStructSyncJobDetail(const GetStructSyncJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncJobDetailOutcome(GetStructSyncJobDetailResult(outcome.result()));
	else
		return GetStructSyncJobDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncJobDetailAsync(const GetStructSyncJobDetailRequest& request, const GetStructSyncJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncJobDetailOutcomeCallable Dms_enterpriseClient::getStructSyncJobDetailCallable(const GetStructSyncJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncJobDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetStructSyncOrderDetailOutcome Dms_enterpriseClient::getStructSyncOrderDetail(const GetStructSyncOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStructSyncOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStructSyncOrderDetailOutcome(GetStructSyncOrderDetailResult(outcome.result()));
	else
		return GetStructSyncOrderDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::getStructSyncOrderDetailAsync(const GetStructSyncOrderDetailRequest& request, const GetStructSyncOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStructSyncOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetStructSyncOrderDetailOutcomeCallable Dms_enterpriseClient::getStructSyncOrderDetailCallable(const GetStructSyncOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStructSyncOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getStructSyncOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableDBTopologyOutcome Dms_enterpriseClient::getTableDBTopology(const GetTableDBTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableDBTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableDBTopologyOutcome(GetTableDBTopologyResult(outcome.result()));
	else
		return GetTableDBTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableDBTopologyAsync(const GetTableDBTopologyRequest& request, const GetTableDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableDBTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableDBTopologyOutcomeCallable Dms_enterpriseClient::getTableDBTopologyCallable(const GetTableDBTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableDBTopologyOutcome()>>(
			[this, request]()
			{
			return this->getTableDBTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableDesignProjectFlowOutcome Dms_enterpriseClient::getTableDesignProjectFlow(const GetTableDesignProjectFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableDesignProjectFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableDesignProjectFlowOutcome(GetTableDesignProjectFlowResult(outcome.result()));
	else
		return GetTableDesignProjectFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableDesignProjectFlowAsync(const GetTableDesignProjectFlowRequest& request, const GetTableDesignProjectFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableDesignProjectFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableDesignProjectFlowOutcomeCallable Dms_enterpriseClient::getTableDesignProjectFlowCallable(const GetTableDesignProjectFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableDesignProjectFlowOutcome()>>(
			[this, request]()
			{
			return this->getTableDesignProjectFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableDesignProjectInfoOutcome Dms_enterpriseClient::getTableDesignProjectInfo(const GetTableDesignProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableDesignProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableDesignProjectInfoOutcome(GetTableDesignProjectInfoResult(outcome.result()));
	else
		return GetTableDesignProjectInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableDesignProjectInfoAsync(const GetTableDesignProjectInfoRequest& request, const GetTableDesignProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableDesignProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableDesignProjectInfoOutcomeCallable Dms_enterpriseClient::getTableDesignProjectInfoCallable(const GetTableDesignProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableDesignProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->getTableDesignProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTableTopologyOutcome Dms_enterpriseClient::getTableTopology(const GetTableTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableTopologyOutcome(GetTableTopologyResult(outcome.result()));
	else
		return GetTableTopologyOutcome(outcome.error());
}

void Dms_enterpriseClient::getTableTopologyAsync(const GetTableTopologyRequest& request, const GetTableTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTableTopologyOutcomeCallable Dms_enterpriseClient::getTableTopologyCallable(const GetTableTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableTopologyOutcome()>>(
			[this, request]()
			{
			return this->getTableTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTaskOutcome Dms_enterpriseClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void Dms_enterpriseClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTaskOutcomeCallable Dms_enterpriseClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTaskFlowGraphOutcome Dms_enterpriseClient::getTaskFlowGraph(const GetTaskFlowGraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskFlowGraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskFlowGraphOutcome(GetTaskFlowGraphResult(outcome.result()));
	else
		return GetTaskFlowGraphOutcome(outcome.error());
}

void Dms_enterpriseClient::getTaskFlowGraphAsync(const GetTaskFlowGraphRequest& request, const GetTaskFlowGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskFlowGraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTaskFlowGraphOutcomeCallable Dms_enterpriseClient::getTaskFlowGraphCallable(const GetTaskFlowGraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskFlowGraphOutcome()>>(
			[this, request]()
			{
			return this->getTaskFlowGraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTaskFlowNotificationOutcome Dms_enterpriseClient::getTaskFlowNotification(const GetTaskFlowNotificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskFlowNotificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskFlowNotificationOutcome(GetTaskFlowNotificationResult(outcome.result()));
	else
		return GetTaskFlowNotificationOutcome(outcome.error());
}

void Dms_enterpriseClient::getTaskFlowNotificationAsync(const GetTaskFlowNotificationRequest& request, const GetTaskFlowNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskFlowNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTaskFlowNotificationOutcomeCallable Dms_enterpriseClient::getTaskFlowNotificationCallable(const GetTaskFlowNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskFlowNotificationOutcome()>>(
			[this, request]()
			{
			return this->getTaskFlowNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetTaskInstanceRelationOutcome Dms_enterpriseClient::getTaskInstanceRelation(const GetTaskInstanceRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskInstanceRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskInstanceRelationOutcome(GetTaskInstanceRelationResult(outcome.result()));
	else
		return GetTaskInstanceRelationOutcome(outcome.error());
}

void Dms_enterpriseClient::getTaskInstanceRelationAsync(const GetTaskInstanceRelationRequest& request, const GetTaskInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskInstanceRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetTaskInstanceRelationOutcomeCallable Dms_enterpriseClient::getTaskInstanceRelationCallable(const GetTaskInstanceRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskInstanceRelationOutcome()>>(
			[this, request]()
			{
			return this->getTaskInstanceRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserOutcome Dms_enterpriseClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void Dms_enterpriseClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserOutcomeCallable Dms_enterpriseClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserActiveTenantOutcome Dms_enterpriseClient::getUserActiveTenant(const GetUserActiveTenantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserActiveTenantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserActiveTenantOutcome(GetUserActiveTenantResult(outcome.result()));
	else
		return GetUserActiveTenantOutcome(outcome.error());
}

void Dms_enterpriseClient::getUserActiveTenantAsync(const GetUserActiveTenantRequest& request, const GetUserActiveTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserActiveTenant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserActiveTenantOutcomeCallable Dms_enterpriseClient::getUserActiveTenantCallable(const GetUserActiveTenantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserActiveTenantOutcome()>>(
			[this, request]()
			{
			return this->getUserActiveTenant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GetUserUploadFileJobOutcome Dms_enterpriseClient::getUserUploadFileJob(const GetUserUploadFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserUploadFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserUploadFileJobOutcome(GetUserUploadFileJobResult(outcome.result()));
	else
		return GetUserUploadFileJobOutcome(outcome.error());
}

void Dms_enterpriseClient::getUserUploadFileJobAsync(const GetUserUploadFileJobRequest& request, const GetUserUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserUploadFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GetUserUploadFileJobOutcomeCallable Dms_enterpriseClient::getUserUploadFileJobCallable(const GetUserUploadFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserUploadFileJobOutcome()>>(
			[this, request]()
			{
			return this->getUserUploadFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GrantTemplateAuthorityOutcome Dms_enterpriseClient::grantTemplateAuthority(const GrantTemplateAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantTemplateAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantTemplateAuthorityOutcome(GrantTemplateAuthorityResult(outcome.result()));
	else
		return GrantTemplateAuthorityOutcome(outcome.error());
}

void Dms_enterpriseClient::grantTemplateAuthorityAsync(const GrantTemplateAuthorityRequest& request, const GrantTemplateAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantTemplateAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GrantTemplateAuthorityOutcomeCallable Dms_enterpriseClient::grantTemplateAuthorityCallable(const GrantTemplateAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantTemplateAuthorityOutcome()>>(
			[this, request]()
			{
			return this->grantTemplateAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::GrantUserPermissionOutcome Dms_enterpriseClient::grantUserPermission(const GrantUserPermissionRequest &request) const
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

void Dms_enterpriseClient::grantUserPermissionAsync(const GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::GrantUserPermissionOutcomeCallable Dms_enterpriseClient::grantUserPermissionCallable(const GrantUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::InspectProxyAccessSecretOutcome Dms_enterpriseClient::inspectProxyAccessSecret(const InspectProxyAccessSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InspectProxyAccessSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InspectProxyAccessSecretOutcome(InspectProxyAccessSecretResult(outcome.result()));
	else
		return InspectProxyAccessSecretOutcome(outcome.error());
}

void Dms_enterpriseClient::inspectProxyAccessSecretAsync(const InspectProxyAccessSecretRequest& request, const InspectProxyAccessSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inspectProxyAccessSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::InspectProxyAccessSecretOutcomeCallable Dms_enterpriseClient::inspectProxyAccessSecretCallable(const InspectProxyAccessSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InspectProxyAccessSecretOutcome()>>(
			[this, request]()
			{
			return this->inspectProxyAccessSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAbacAuthorizationsOutcome Dms_enterpriseClient::listAbacAuthorizations(const ListAbacAuthorizationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAbacAuthorizationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAbacAuthorizationsOutcome(ListAbacAuthorizationsResult(outcome.result()));
	else
		return ListAbacAuthorizationsOutcome(outcome.error());
}

void Dms_enterpriseClient::listAbacAuthorizationsAsync(const ListAbacAuthorizationsRequest& request, const ListAbacAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAbacAuthorizations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAbacAuthorizationsOutcomeCallable Dms_enterpriseClient::listAbacAuthorizationsCallable(const ListAbacAuthorizationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAbacAuthorizationsOutcome()>>(
			[this, request]()
			{
			return this->listAbacAuthorizations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAbacPoliciesOutcome Dms_enterpriseClient::listAbacPolicies(const ListAbacPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAbacPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAbacPoliciesOutcome(ListAbacPoliciesResult(outcome.result()));
	else
		return ListAbacPoliciesOutcome(outcome.error());
}

void Dms_enterpriseClient::listAbacPoliciesAsync(const ListAbacPoliciesRequest& request, const ListAbacPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAbacPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAbacPoliciesOutcomeCallable Dms_enterpriseClient::listAbacPoliciesCallable(const ListAbacPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAbacPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listAbacPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAuthorityTemplateOutcome Dms_enterpriseClient::listAuthorityTemplate(const ListAuthorityTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorityTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorityTemplateOutcome(ListAuthorityTemplateResult(outcome.result()));
	else
		return ListAuthorityTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::listAuthorityTemplateAsync(const ListAuthorityTemplateRequest& request, const ListAuthorityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorityTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAuthorityTemplateOutcomeCallable Dms_enterpriseClient::listAuthorityTemplateCallable(const ListAuthorityTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorityTemplateOutcome()>>(
			[this, request]()
			{
			return this->listAuthorityTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAuthorizedDatabasesForUserOutcome Dms_enterpriseClient::listAuthorizedDatabasesForUser(const ListAuthorizedDatabasesForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorizedDatabasesForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorizedDatabasesForUserOutcome(ListAuthorizedDatabasesForUserResult(outcome.result()));
	else
		return ListAuthorizedDatabasesForUserOutcome(outcome.error());
}

void Dms_enterpriseClient::listAuthorizedDatabasesForUserAsync(const ListAuthorizedDatabasesForUserRequest& request, const ListAuthorizedDatabasesForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorizedDatabasesForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAuthorizedDatabasesForUserOutcomeCallable Dms_enterpriseClient::listAuthorizedDatabasesForUserCallable(const ListAuthorizedDatabasesForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorizedDatabasesForUserOutcome()>>(
			[this, request]()
			{
			return this->listAuthorizedDatabasesForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAuthorizedInstancesForUserOutcome Dms_enterpriseClient::listAuthorizedInstancesForUser(const ListAuthorizedInstancesForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorizedInstancesForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorizedInstancesForUserOutcome(ListAuthorizedInstancesForUserResult(outcome.result()));
	else
		return ListAuthorizedInstancesForUserOutcome(outcome.error());
}

void Dms_enterpriseClient::listAuthorizedInstancesForUserAsync(const ListAuthorizedInstancesForUserRequest& request, const ListAuthorizedInstancesForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorizedInstancesForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAuthorizedInstancesForUserOutcomeCallable Dms_enterpriseClient::listAuthorizedInstancesForUserCallable(const ListAuthorizedInstancesForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorizedInstancesForUserOutcome()>>(
			[this, request]()
			{
			return this->listAuthorizedInstancesForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAuthorizedUsersForDatabaseOutcome Dms_enterpriseClient::listAuthorizedUsersForDatabase(const ListAuthorizedUsersForDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorizedUsersForDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorizedUsersForDatabaseOutcome(ListAuthorizedUsersForDatabaseResult(outcome.result()));
	else
		return ListAuthorizedUsersForDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::listAuthorizedUsersForDatabaseAsync(const ListAuthorizedUsersForDatabaseRequest& request, const ListAuthorizedUsersForDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorizedUsersForDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAuthorizedUsersForDatabaseOutcomeCallable Dms_enterpriseClient::listAuthorizedUsersForDatabaseCallable(const ListAuthorizedUsersForDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorizedUsersForDatabaseOutcome()>>(
			[this, request]()
			{
			return this->listAuthorizedUsersForDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListAuthorizedUsersForInstanceOutcome Dms_enterpriseClient::listAuthorizedUsersForInstance(const ListAuthorizedUsersForInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorizedUsersForInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorizedUsersForInstanceOutcome(ListAuthorizedUsersForInstanceResult(outcome.result()));
	else
		return ListAuthorizedUsersForInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::listAuthorizedUsersForInstanceAsync(const ListAuthorizedUsersForInstanceRequest& request, const ListAuthorizedUsersForInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthorizedUsersForInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListAuthorizedUsersForInstanceOutcomeCallable Dms_enterpriseClient::listAuthorizedUsersForInstanceCallable(const ListAuthorizedUsersForInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorizedUsersForInstanceOutcome()>>(
			[this, request]()
			{
			return this->listAuthorizedUsersForInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListClassificationTemplatesOutcome Dms_enterpriseClient::listClassificationTemplates(const ListClassificationTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClassificationTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClassificationTemplatesOutcome(ListClassificationTemplatesResult(outcome.result()));
	else
		return ListClassificationTemplatesOutcome(outcome.error());
}

void Dms_enterpriseClient::listClassificationTemplatesAsync(const ListClassificationTemplatesRequest& request, const ListClassificationTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClassificationTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListClassificationTemplatesOutcomeCallable Dms_enterpriseClient::listClassificationTemplatesCallable(const ListClassificationTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClassificationTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listClassificationTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListColumnsOutcome Dms_enterpriseClient::listColumns(const ListColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListColumnsOutcome(ListColumnsResult(outcome.result()));
	else
		return ListColumnsOutcome(outcome.error());
}

void Dms_enterpriseClient::listColumnsAsync(const ListColumnsRequest& request, const ListColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListColumnsOutcomeCallable Dms_enterpriseClient::listColumnsCallable(const ListColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListColumnsOutcome()>>(
			[this, request]()
			{
			return this->listColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDAGVersionsOutcome Dms_enterpriseClient::listDAGVersions(const ListDAGVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDAGVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDAGVersionsOutcome(ListDAGVersionsResult(outcome.result()));
	else
		return ListDAGVersionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDAGVersionsAsync(const ListDAGVersionsRequest& request, const ListDAGVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDAGVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDAGVersionsOutcomeCallable Dms_enterpriseClient::listDAGVersionsCallable(const ListDAGVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDAGVersionsOutcome()>>(
			[this, request]()
			{
			return this->listDAGVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDBTaskSQLJobOutcome Dms_enterpriseClient::listDBTaskSQLJob(const ListDBTaskSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDBTaskSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDBTaskSQLJobOutcome(ListDBTaskSQLJobResult(outcome.result()));
	else
		return ListDBTaskSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::listDBTaskSQLJobAsync(const ListDBTaskSQLJobRequest& request, const ListDBTaskSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDBTaskSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDBTaskSQLJobOutcomeCallable Dms_enterpriseClient::listDBTaskSQLJobCallable(const ListDBTaskSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDBTaskSQLJobOutcome()>>(
			[this, request]()
			{
			return this->listDBTaskSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDBTaskSQLJobDetailOutcome Dms_enterpriseClient::listDBTaskSQLJobDetail(const ListDBTaskSQLJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDBTaskSQLJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDBTaskSQLJobDetailOutcome(ListDBTaskSQLJobDetailResult(outcome.result()));
	else
		return ListDBTaskSQLJobDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::listDBTaskSQLJobDetailAsync(const ListDBTaskSQLJobDetailRequest& request, const ListDBTaskSQLJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDBTaskSQLJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDBTaskSQLJobDetailOutcomeCallable Dms_enterpriseClient::listDBTaskSQLJobDetailCallable(const ListDBTaskSQLJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDBTaskSQLJobDetailOutcome()>>(
			[this, request]()
			{
			return this->listDBTaskSQLJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDDLPublishRecordsOutcome Dms_enterpriseClient::listDDLPublishRecords(const ListDDLPublishRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDDLPublishRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDDLPublishRecordsOutcome(ListDDLPublishRecordsResult(outcome.result()));
	else
		return ListDDLPublishRecordsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDDLPublishRecordsAsync(const ListDDLPublishRecordsRequest& request, const ListDDLPublishRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDDLPublishRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDDLPublishRecordsOutcomeCallable Dms_enterpriseClient::listDDLPublishRecordsCallable(const ListDDLPublishRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDDLPublishRecordsOutcome()>>(
			[this, request]()
			{
			return this->listDDLPublishRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataCorrectPreCheckDBOutcome Dms_enterpriseClient::listDataCorrectPreCheckDB(const ListDataCorrectPreCheckDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataCorrectPreCheckDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataCorrectPreCheckDBOutcome(ListDataCorrectPreCheckDBResult(outcome.result()));
	else
		return ListDataCorrectPreCheckDBOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataCorrectPreCheckDBAsync(const ListDataCorrectPreCheckDBRequest& request, const ListDataCorrectPreCheckDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataCorrectPreCheckDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataCorrectPreCheckDBOutcomeCallable Dms_enterpriseClient::listDataCorrectPreCheckDBCallable(const ListDataCorrectPreCheckDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataCorrectPreCheckDBOutcome()>>(
			[this, request]()
			{
			return this->listDataCorrectPreCheckDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataCorrectPreCheckSQLOutcome Dms_enterpriseClient::listDataCorrectPreCheckSQL(const ListDataCorrectPreCheckSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataCorrectPreCheckSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataCorrectPreCheckSQLOutcome(ListDataCorrectPreCheckSQLResult(outcome.result()));
	else
		return ListDataCorrectPreCheckSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataCorrectPreCheckSQLAsync(const ListDataCorrectPreCheckSQLRequest& request, const ListDataCorrectPreCheckSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataCorrectPreCheckSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataCorrectPreCheckSQLOutcomeCallable Dms_enterpriseClient::listDataCorrectPreCheckSQLCallable(const ListDataCorrectPreCheckSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataCorrectPreCheckSQLOutcome()>>(
			[this, request]()
			{
			return this->listDataCorrectPreCheckSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataImportSQLPreCheckDetailOutcome Dms_enterpriseClient::listDataImportSQLPreCheckDetail(const ListDataImportSQLPreCheckDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataImportSQLPreCheckDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataImportSQLPreCheckDetailOutcome(ListDataImportSQLPreCheckDetailResult(outcome.result()));
	else
		return ListDataImportSQLPreCheckDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataImportSQLPreCheckDetailAsync(const ListDataImportSQLPreCheckDetailRequest& request, const ListDataImportSQLPreCheckDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataImportSQLPreCheckDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataImportSQLPreCheckDetailOutcomeCallable Dms_enterpriseClient::listDataImportSQLPreCheckDetailCallable(const ListDataImportSQLPreCheckDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataImportSQLPreCheckDetailOutcome()>>(
			[this, request]()
			{
			return this->listDataImportSQLPreCheckDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataImportSQLTypeOutcome Dms_enterpriseClient::listDataImportSQLType(const ListDataImportSQLTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataImportSQLTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataImportSQLTypeOutcome(ListDataImportSQLTypeResult(outcome.result()));
	else
		return ListDataImportSQLTypeOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataImportSQLTypeAsync(const ListDataImportSQLTypeRequest& request, const ListDataImportSQLTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataImportSQLType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataImportSQLTypeOutcomeCallable Dms_enterpriseClient::listDataImportSQLTypeCallable(const ListDataImportSQLTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataImportSQLTypeOutcome()>>(
			[this, request]()
			{
			return this->listDataImportSQLType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataLakeCatalogOutcome Dms_enterpriseClient::listDataLakeCatalog(const ListDataLakeCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataLakeCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataLakeCatalogOutcome(ListDataLakeCatalogResult(outcome.result()));
	else
		return ListDataLakeCatalogOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataLakeCatalogAsync(const ListDataLakeCatalogRequest& request, const ListDataLakeCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataLakeCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataLakeCatalogOutcomeCallable Dms_enterpriseClient::listDataLakeCatalogCallable(const ListDataLakeCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataLakeCatalogOutcome()>>(
			[this, request]()
			{
			return this->listDataLakeCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataLakeDatabaseOutcome Dms_enterpriseClient::listDataLakeDatabase(const ListDataLakeDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataLakeDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataLakeDatabaseOutcome(ListDataLakeDatabaseResult(outcome.result()));
	else
		return ListDataLakeDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataLakeDatabaseAsync(const ListDataLakeDatabaseRequest& request, const ListDataLakeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataLakeDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataLakeDatabaseOutcomeCallable Dms_enterpriseClient::listDataLakeDatabaseCallable(const ListDataLakeDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataLakeDatabaseOutcome()>>(
			[this, request]()
			{
			return this->listDataLakeDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDataLakeTablebaseInfoOutcome Dms_enterpriseClient::listDataLakeTablebaseInfo(const ListDataLakeTablebaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataLakeTablebaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataLakeTablebaseInfoOutcome(ListDataLakeTablebaseInfoResult(outcome.result()));
	else
		return ListDataLakeTablebaseInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::listDataLakeTablebaseInfoAsync(const ListDataLakeTablebaseInfoRequest& request, const ListDataLakeTablebaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataLakeTablebaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDataLakeTablebaseInfoOutcomeCallable Dms_enterpriseClient::listDataLakeTablebaseInfoCallable(const ListDataLakeTablebaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataLakeTablebaseInfoOutcome()>>(
			[this, request]()
			{
			return this->listDataLakeTablebaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDatabaseUserPermssionsOutcome Dms_enterpriseClient::listDatabaseUserPermssions(const ListDatabaseUserPermssionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabaseUserPermssionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabaseUserPermssionsOutcome(ListDatabaseUserPermssionsResult(outcome.result()));
	else
		return ListDatabaseUserPermssionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listDatabaseUserPermssionsAsync(const ListDatabaseUserPermssionsRequest& request, const ListDatabaseUserPermssionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabaseUserPermssions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDatabaseUserPermssionsOutcomeCallable Dms_enterpriseClient::listDatabaseUserPermssionsCallable(const ListDatabaseUserPermssionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabaseUserPermssionsOutcome()>>(
			[this, request]()
			{
			return this->listDatabaseUserPermssions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDatabasesOutcome Dms_enterpriseClient::listDatabases(const ListDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabasesOutcome(ListDatabasesResult(outcome.result()));
	else
		return ListDatabasesOutcome(outcome.error());
}

void Dms_enterpriseClient::listDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDatabasesOutcomeCallable Dms_enterpriseClient::listDatabasesCallable(const ListDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDefaultSLARulesOutcome Dms_enterpriseClient::listDefaultSLARules(const ListDefaultSLARulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDefaultSLARulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDefaultSLARulesOutcome(ListDefaultSLARulesResult(outcome.result()));
	else
		return ListDefaultSLARulesOutcome(outcome.error());
}

void Dms_enterpriseClient::listDefaultSLARulesAsync(const ListDefaultSLARulesRequest& request, const ListDefaultSLARulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDefaultSLARules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDefaultSLARulesOutcomeCallable Dms_enterpriseClient::listDefaultSLARulesCallable(const ListDefaultSLARulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDefaultSLARulesOutcome()>>(
			[this, request]()
			{
			return this->listDefaultSLARules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListDesensitizationRuleOutcome Dms_enterpriseClient::listDesensitizationRule(const ListDesensitizationRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDesensitizationRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDesensitizationRuleOutcome(ListDesensitizationRuleResult(outcome.result()));
	else
		return ListDesensitizationRuleOutcome(outcome.error());
}

void Dms_enterpriseClient::listDesensitizationRuleAsync(const ListDesensitizationRuleRequest& request, const ListDesensitizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDesensitizationRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListDesensitizationRuleOutcomeCallable Dms_enterpriseClient::listDesensitizationRuleCallable(const ListDesensitizationRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDesensitizationRuleOutcome()>>(
			[this, request]()
			{
			return this->listDesensitizationRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListEffectiveOrdersOutcome Dms_enterpriseClient::listEffectiveOrders(const ListEffectiveOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEffectiveOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEffectiveOrdersOutcome(ListEffectiveOrdersResult(outcome.result()));
	else
		return ListEffectiveOrdersOutcome(outcome.error());
}

void Dms_enterpriseClient::listEffectiveOrdersAsync(const ListEffectiveOrdersRequest& request, const ListEffectiveOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEffectiveOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListEffectiveOrdersOutcomeCallable Dms_enterpriseClient::listEffectiveOrdersCallable(const ListEffectiveOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEffectiveOrdersOutcome()>>(
			[this, request]()
			{
			return this->listEffectiveOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListIndexesOutcome Dms_enterpriseClient::listIndexes(const ListIndexesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIndexesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIndexesOutcome(ListIndexesResult(outcome.result()));
	else
		return ListIndexesOutcome(outcome.error());
}

void Dms_enterpriseClient::listIndexesAsync(const ListIndexesRequest& request, const ListIndexesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIndexes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListIndexesOutcomeCallable Dms_enterpriseClient::listIndexesCallable(const ListIndexesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIndexesOutcome()>>(
			[this, request]()
			{
			return this->listIndexes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstanceLoginAuditLogOutcome Dms_enterpriseClient::listInstanceLoginAuditLog(const ListInstanceLoginAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceLoginAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceLoginAuditLogOutcome(ListInstanceLoginAuditLogResult(outcome.result()));
	else
		return ListInstanceLoginAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstanceLoginAuditLogAsync(const ListInstanceLoginAuditLogRequest& request, const ListInstanceLoginAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceLoginAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstanceLoginAuditLogOutcomeCallable Dms_enterpriseClient::listInstanceLoginAuditLogCallable(const ListInstanceLoginAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceLoginAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listInstanceLoginAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstanceUserPermissionsOutcome Dms_enterpriseClient::listInstanceUserPermissions(const ListInstanceUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceUserPermissionsOutcome(ListInstanceUserPermissionsResult(outcome.result()));
	else
		return ListInstanceUserPermissionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstanceUserPermissionsAsync(const ListInstanceUserPermissionsRequest& request, const ListInstanceUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstanceUserPermissionsOutcomeCallable Dms_enterpriseClient::listInstanceUserPermissionsCallable(const ListInstanceUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listInstanceUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListInstancesOutcome Dms_enterpriseClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void Dms_enterpriseClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListInstancesOutcomeCallable Dms_enterpriseClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLhTaskFlowAndScenarioOutcome Dms_enterpriseClient::listLhTaskFlowAndScenario(const ListLhTaskFlowAndScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLhTaskFlowAndScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLhTaskFlowAndScenarioOutcome(ListLhTaskFlowAndScenarioResult(outcome.result()));
	else
		return ListLhTaskFlowAndScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::listLhTaskFlowAndScenarioAsync(const ListLhTaskFlowAndScenarioRequest& request, const ListLhTaskFlowAndScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLhTaskFlowAndScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLhTaskFlowAndScenarioOutcomeCallable Dms_enterpriseClient::listLhTaskFlowAndScenarioCallable(const ListLhTaskFlowAndScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLhTaskFlowAndScenarioOutcome()>>(
			[this, request]()
			{
			return this->listLhTaskFlowAndScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicDatabasesOutcome Dms_enterpriseClient::listLogicDatabases(const ListLogicDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicDatabasesOutcome(ListLogicDatabasesResult(outcome.result()));
	else
		return ListLogicDatabasesOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicDatabasesAsync(const ListLogicDatabasesRequest& request, const ListLogicDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicDatabasesOutcomeCallable Dms_enterpriseClient::listLogicDatabasesCallable(const ListLogicDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listLogicDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicTableRouteConfigOutcome Dms_enterpriseClient::listLogicTableRouteConfig(const ListLogicTableRouteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicTableRouteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicTableRouteConfigOutcome(ListLogicTableRouteConfigResult(outcome.result()));
	else
		return ListLogicTableRouteConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicTableRouteConfigAsync(const ListLogicTableRouteConfigRequest& request, const ListLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicTableRouteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicTableRouteConfigOutcomeCallable Dms_enterpriseClient::listLogicTableRouteConfigCallable(const ListLogicTableRouteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicTableRouteConfigOutcome()>>(
			[this, request]()
			{
			return this->listLogicTableRouteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListLogicTablesOutcome Dms_enterpriseClient::listLogicTables(const ListLogicTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogicTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogicTablesOutcome(ListLogicTablesResult(outcome.result()));
	else
		return ListLogicTablesOutcome(outcome.error());
}

void Dms_enterpriseClient::listLogicTablesAsync(const ListLogicTablesRequest& request, const ListLogicTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogicTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListLogicTablesOutcomeCallable Dms_enterpriseClient::listLogicTablesCallable(const ListLogicTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogicTablesOutcome()>>(
			[this, request]()
			{
			return this->listLogicTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListOrdersOutcome Dms_enterpriseClient::listOrders(const ListOrdersRequest &request) const
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

void Dms_enterpriseClient::listOrdersAsync(const ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListOrdersOutcomeCallable Dms_enterpriseClient::listOrdersCallable(const ListOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrdersOutcome()>>(
			[this, request]()
			{
			return this->listOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxiesOutcome Dms_enterpriseClient::listProxies(const ListProxiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxiesOutcome(ListProxiesResult(outcome.result()));
	else
		return ListProxiesOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxiesAsync(const ListProxiesRequest& request, const ListProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxiesOutcomeCallable Dms_enterpriseClient::listProxiesCallable(const ListProxiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxiesOutcome()>>(
			[this, request]()
			{
			return this->listProxies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxyAccessesOutcome Dms_enterpriseClient::listProxyAccesses(const ListProxyAccessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxyAccessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxyAccessesOutcome(ListProxyAccessesResult(outcome.result()));
	else
		return ListProxyAccessesOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxyAccessesAsync(const ListProxyAccessesRequest& request, const ListProxyAccessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxyAccesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxyAccessesOutcomeCallable Dms_enterpriseClient::listProxyAccessesCallable(const ListProxyAccessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxyAccessesOutcome()>>(
			[this, request]()
			{
			return this->listProxyAccesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListProxySQLExecAuditLogOutcome Dms_enterpriseClient::listProxySQLExecAuditLog(const ListProxySQLExecAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProxySQLExecAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProxySQLExecAuditLogOutcome(ListProxySQLExecAuditLogResult(outcome.result()));
	else
		return ListProxySQLExecAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listProxySQLExecAuditLogAsync(const ListProxySQLExecAuditLogRequest& request, const ListProxySQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProxySQLExecAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListProxySQLExecAuditLogOutcomeCallable Dms_enterpriseClient::listProxySQLExecAuditLogCallable(const ListProxySQLExecAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProxySQLExecAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listProxySQLExecAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSLARulesOutcome Dms_enterpriseClient::listSLARules(const ListSLARulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSLARulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSLARulesOutcome(ListSLARulesResult(outcome.result()));
	else
		return ListSLARulesOutcome(outcome.error());
}

void Dms_enterpriseClient::listSLARulesAsync(const ListSLARulesRequest& request, const ListSLARulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSLARules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSLARulesOutcomeCallable Dms_enterpriseClient::listSLARulesCallable(const ListSLARulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSLARulesOutcome()>>(
			[this, request]()
			{
			return this->listSLARules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSQLExecAuditLogOutcome Dms_enterpriseClient::listSQLExecAuditLog(const ListSQLExecAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSQLExecAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSQLExecAuditLogOutcome(ListSQLExecAuditLogResult(outcome.result()));
	else
		return ListSQLExecAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listSQLExecAuditLogAsync(const ListSQLExecAuditLogRequest& request, const ListSQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSQLExecAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSQLExecAuditLogOutcomeCallable Dms_enterpriseClient::listSQLExecAuditLogCallable(const ListSQLExecAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSQLExecAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listSQLExecAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSQLReviewOriginSQLOutcome Dms_enterpriseClient::listSQLReviewOriginSQL(const ListSQLReviewOriginSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSQLReviewOriginSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSQLReviewOriginSQLOutcome(ListSQLReviewOriginSQLResult(outcome.result()));
	else
		return ListSQLReviewOriginSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::listSQLReviewOriginSQLAsync(const ListSQLReviewOriginSQLRequest& request, const ListSQLReviewOriginSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSQLReviewOriginSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSQLReviewOriginSQLOutcomeCallable Dms_enterpriseClient::listSQLReviewOriginSQLCallable(const ListSQLReviewOriginSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSQLReviewOriginSQLOutcome()>>(
			[this, request]()
			{
			return this->listSQLReviewOriginSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListScenariosOutcome Dms_enterpriseClient::listScenarios(const ListScenariosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenariosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenariosOutcome(ListScenariosResult(outcome.result()));
	else
		return ListScenariosOutcome(outcome.error());
}

void Dms_enterpriseClient::listScenariosAsync(const ListScenariosRequest& request, const ListScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListScenariosOutcomeCallable Dms_enterpriseClient::listScenariosCallable(const ListScenariosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenariosOutcome()>>(
			[this, request]()
			{
			return this->listScenarios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveColumnInfoOutcome Dms_enterpriseClient::listSensitiveColumnInfo(const ListSensitiveColumnInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveColumnInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveColumnInfoOutcome(ListSensitiveColumnInfoResult(outcome.result()));
	else
		return ListSensitiveColumnInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveColumnInfoAsync(const ListSensitiveColumnInfoRequest& request, const ListSensitiveColumnInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveColumnInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveColumnInfoOutcomeCallable Dms_enterpriseClient::listSensitiveColumnInfoCallable(const ListSensitiveColumnInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveColumnInfoOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveColumnInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveColumnsOutcome Dms_enterpriseClient::listSensitiveColumns(const ListSensitiveColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveColumnsOutcome(ListSensitiveColumnsResult(outcome.result()));
	else
		return ListSensitiveColumnsOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveColumnsAsync(const ListSensitiveColumnsRequest& request, const ListSensitiveColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveColumnsOutcomeCallable Dms_enterpriseClient::listSensitiveColumnsCallable(const ListSensitiveColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveColumnsOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveColumnsDetailOutcome Dms_enterpriseClient::listSensitiveColumnsDetail(const ListSensitiveColumnsDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveColumnsDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveColumnsDetailOutcome(ListSensitiveColumnsDetailResult(outcome.result()));
	else
		return ListSensitiveColumnsDetailOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveColumnsDetailAsync(const ListSensitiveColumnsDetailRequest& request, const ListSensitiveColumnsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveColumnsDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveColumnsDetailOutcomeCallable Dms_enterpriseClient::listSensitiveColumnsDetailCallable(const ListSensitiveColumnsDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveColumnsDetailOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveColumnsDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitiveDataAuditLogOutcome Dms_enterpriseClient::listSensitiveDataAuditLog(const ListSensitiveDataAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitiveDataAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitiveDataAuditLogOutcome(ListSensitiveDataAuditLogResult(outcome.result()));
	else
		return ListSensitiveDataAuditLogOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitiveDataAuditLogAsync(const ListSensitiveDataAuditLogRequest& request, const ListSensitiveDataAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitiveDataAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitiveDataAuditLogOutcomeCallable Dms_enterpriseClient::listSensitiveDataAuditLogCallable(const ListSensitiveDataAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitiveDataAuditLogOutcome()>>(
			[this, request]()
			{
			return this->listSensitiveDataAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListSensitivityLevelOutcome Dms_enterpriseClient::listSensitivityLevel(const ListSensitivityLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSensitivityLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSensitivityLevelOutcome(ListSensitivityLevelResult(outcome.result()));
	else
		return ListSensitivityLevelOutcome(outcome.error());
}

void Dms_enterpriseClient::listSensitivityLevelAsync(const ListSensitivityLevelRequest& request, const ListSensitivityLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSensitivityLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListSensitivityLevelOutcomeCallable Dms_enterpriseClient::listSensitivityLevelCallable(const ListSensitivityLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSensitivityLevelOutcome()>>(
			[this, request]()
			{
			return this->listSensitivityLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListStandardGroupsOutcome Dms_enterpriseClient::listStandardGroups(const ListStandardGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStandardGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStandardGroupsOutcome(ListStandardGroupsResult(outcome.result()));
	else
		return ListStandardGroupsOutcome(outcome.error());
}

void Dms_enterpriseClient::listStandardGroupsAsync(const ListStandardGroupsRequest& request, const ListStandardGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStandardGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListStandardGroupsOutcomeCallable Dms_enterpriseClient::listStandardGroupsCallable(const ListStandardGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStandardGroupsOutcome()>>(
			[this, request]()
			{
			return this->listStandardGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTablesOutcome Dms_enterpriseClient::listTables(const ListTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTablesOutcome(ListTablesResult(outcome.result()));
	else
		return ListTablesOutcome(outcome.error());
}

void Dms_enterpriseClient::listTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTablesOutcomeCallable Dms_enterpriseClient::listTablesCallable(const ListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablesOutcome()>>(
			[this, request]()
			{
			return this->listTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowOutcome Dms_enterpriseClient::listTaskFlow(const ListTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowOutcome(ListTaskFlowResult(outcome.result()));
	else
		return ListTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowAsync(const ListTaskFlowRequest& request, const ListTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowOutcomeCallable Dms_enterpriseClient::listTaskFlowCallable(const ListTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowConstantsOutcome Dms_enterpriseClient::listTaskFlowConstants(const ListTaskFlowConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowConstantsOutcome(ListTaskFlowConstantsResult(outcome.result()));
	else
		return ListTaskFlowConstantsOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowConstantsAsync(const ListTaskFlowConstantsRequest& request, const ListTaskFlowConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowConstantsOutcomeCallable Dms_enterpriseClient::listTaskFlowConstantsCallable(const ListTaskFlowConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowConstantsOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowCooperatorsOutcome Dms_enterpriseClient::listTaskFlowCooperators(const ListTaskFlowCooperatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowCooperatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowCooperatorsOutcome(ListTaskFlowCooperatorsResult(outcome.result()));
	else
		return ListTaskFlowCooperatorsOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowCooperatorsAsync(const ListTaskFlowCooperatorsRequest& request, const ListTaskFlowCooperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowCooperators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowCooperatorsOutcomeCallable Dms_enterpriseClient::listTaskFlowCooperatorsCallable(const ListTaskFlowCooperatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowCooperatorsOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowCooperators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowEdgesByConditionOutcome Dms_enterpriseClient::listTaskFlowEdgesByCondition(const ListTaskFlowEdgesByConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowEdgesByConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowEdgesByConditionOutcome(ListTaskFlowEdgesByConditionResult(outcome.result()));
	else
		return ListTaskFlowEdgesByConditionOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowEdgesByConditionAsync(const ListTaskFlowEdgesByConditionRequest& request, const ListTaskFlowEdgesByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowEdgesByCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowEdgesByConditionOutcomeCallable Dms_enterpriseClient::listTaskFlowEdgesByConditionCallable(const ListTaskFlowEdgesByConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowEdgesByConditionOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowEdgesByCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowInstanceOutcome Dms_enterpriseClient::listTaskFlowInstance(const ListTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowInstanceOutcome(ListTaskFlowInstanceResult(outcome.result()));
	else
		return ListTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowInstanceAsync(const ListTaskFlowInstanceRequest& request, const ListTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::listTaskFlowInstanceCallable(const ListTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowTimeVariablesOutcome Dms_enterpriseClient::listTaskFlowTimeVariables(const ListTaskFlowTimeVariablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowTimeVariablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowTimeVariablesOutcome(ListTaskFlowTimeVariablesResult(outcome.result()));
	else
		return ListTaskFlowTimeVariablesOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowTimeVariablesAsync(const ListTaskFlowTimeVariablesRequest& request, const ListTaskFlowTimeVariablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowTimeVariables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowTimeVariablesOutcomeCallable Dms_enterpriseClient::listTaskFlowTimeVariablesCallable(const ListTaskFlowTimeVariablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowTimeVariablesOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowTimeVariables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTaskFlowsByPageOutcome Dms_enterpriseClient::listTaskFlowsByPage(const ListTaskFlowsByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskFlowsByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskFlowsByPageOutcome(ListTaskFlowsByPageResult(outcome.result()));
	else
		return ListTaskFlowsByPageOutcome(outcome.error());
}

void Dms_enterpriseClient::listTaskFlowsByPageAsync(const ListTaskFlowsByPageRequest& request, const ListTaskFlowsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskFlowsByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTaskFlowsByPageOutcomeCallable Dms_enterpriseClient::listTaskFlowsByPageCallable(const ListTaskFlowsByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskFlowsByPageOutcome()>>(
			[this, request]()
			{
			return this->listTaskFlowsByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListTasksInTaskFlowOutcome Dms_enterpriseClient::listTasksInTaskFlow(const ListTasksInTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksInTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksInTaskFlowOutcome(ListTasksInTaskFlowResult(outcome.result()));
	else
		return ListTasksInTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::listTasksInTaskFlowAsync(const ListTasksInTaskFlowRequest& request, const ListTasksInTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasksInTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListTasksInTaskFlowOutcomeCallable Dms_enterpriseClient::listTasksInTaskFlowCallable(const ListTasksInTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksInTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->listTasksInTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUserPermissionsOutcome Dms_enterpriseClient::listUserPermissions(const ListUserPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserPermissionsOutcome(ListUserPermissionsResult(outcome.result()));
	else
		return ListUserPermissionsOutcome(outcome.error());
}

void Dms_enterpriseClient::listUserPermissionsAsync(const ListUserPermissionsRequest& request, const ListUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUserPermissionsOutcomeCallable Dms_enterpriseClient::listUserPermissionsCallable(const ListUserPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listUserPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUserTenantsOutcome Dms_enterpriseClient::listUserTenants(const ListUserTenantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserTenantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserTenantsOutcome(ListUserTenantsResult(outcome.result()));
	else
		return ListUserTenantsOutcome(outcome.error());
}

void Dms_enterpriseClient::listUserTenantsAsync(const ListUserTenantsRequest& request, const ListUserTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserTenants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUserTenantsOutcomeCallable Dms_enterpriseClient::listUserTenantsCallable(const ListUserTenantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserTenantsOutcome()>>(
			[this, request]()
			{
			return this->listUserTenants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListUsersOutcome Dms_enterpriseClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void Dms_enterpriseClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListUsersOutcomeCallable Dms_enterpriseClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListWorkFlowNodesOutcome Dms_enterpriseClient::listWorkFlowNodes(const ListWorkFlowNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkFlowNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkFlowNodesOutcome(ListWorkFlowNodesResult(outcome.result()));
	else
		return ListWorkFlowNodesOutcome(outcome.error());
}

void Dms_enterpriseClient::listWorkFlowNodesAsync(const ListWorkFlowNodesRequest& request, const ListWorkFlowNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkFlowNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListWorkFlowNodesOutcomeCallable Dms_enterpriseClient::listWorkFlowNodesCallable(const ListWorkFlowNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkFlowNodesOutcome()>>(
			[this, request]()
			{
			return this->listWorkFlowNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ListWorkFlowTemplatesOutcome Dms_enterpriseClient::listWorkFlowTemplates(const ListWorkFlowTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkFlowTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkFlowTemplatesOutcome(ListWorkFlowTemplatesResult(outcome.result()));
	else
		return ListWorkFlowTemplatesOutcome(outcome.error());
}

void Dms_enterpriseClient::listWorkFlowTemplatesAsync(const ListWorkFlowTemplatesRequest& request, const ListWorkFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkFlowTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ListWorkFlowTemplatesOutcomeCallable Dms_enterpriseClient::listWorkFlowTemplatesCallable(const ListWorkFlowTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkFlowTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listWorkFlowTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::MakeTaskFlowInstanceSuccessOutcome Dms_enterpriseClient::makeTaskFlowInstanceSuccess(const MakeTaskFlowInstanceSuccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MakeTaskFlowInstanceSuccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MakeTaskFlowInstanceSuccessOutcome(MakeTaskFlowInstanceSuccessResult(outcome.result()));
	else
		return MakeTaskFlowInstanceSuccessOutcome(outcome.error());
}

void Dms_enterpriseClient::makeTaskFlowInstanceSuccessAsync(const MakeTaskFlowInstanceSuccessRequest& request, const MakeTaskFlowInstanceSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, makeTaskFlowInstanceSuccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::MakeTaskFlowInstanceSuccessOutcomeCallable Dms_enterpriseClient::makeTaskFlowInstanceSuccessCallable(const MakeTaskFlowInstanceSuccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MakeTaskFlowInstanceSuccessOutcome()>>(
			[this, request]()
			{
			return this->makeTaskFlowInstanceSuccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ModifyDataCorrectExecSQLOutcome Dms_enterpriseClient::modifyDataCorrectExecSQL(const ModifyDataCorrectExecSQLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataCorrectExecSQLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataCorrectExecSQLOutcome(ModifyDataCorrectExecSQLResult(outcome.result()));
	else
		return ModifyDataCorrectExecSQLOutcome(outcome.error());
}

void Dms_enterpriseClient::modifyDataCorrectExecSQLAsync(const ModifyDataCorrectExecSQLRequest& request, const ModifyDataCorrectExecSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataCorrectExecSQL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ModifyDataCorrectExecSQLOutcomeCallable Dms_enterpriseClient::modifyDataCorrectExecSQLCallable(const ModifyDataCorrectExecSQLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataCorrectExecSQLOutcome()>>(
			[this, request]()
			{
			return this->modifyDataCorrectExecSQL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ModifyDesensitizationStrategyOutcome Dms_enterpriseClient::modifyDesensitizationStrategy(const ModifyDesensitizationStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesensitizationStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesensitizationStrategyOutcome(ModifyDesensitizationStrategyResult(outcome.result()));
	else
		return ModifyDesensitizationStrategyOutcome(outcome.error());
}

void Dms_enterpriseClient::modifyDesensitizationStrategyAsync(const ModifyDesensitizationStrategyRequest& request, const ModifyDesensitizationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesensitizationStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ModifyDesensitizationStrategyOutcomeCallable Dms_enterpriseClient::modifyDesensitizationStrategyCallable(const ModifyDesensitizationStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesensitizationStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyDesensitizationStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ModifyInstanceOutcome Dms_enterpriseClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ModifyInstanceOutcomeCallable Dms_enterpriseClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::MoveTaskFlowToScenarioOutcome Dms_enterpriseClient::moveTaskFlowToScenario(const MoveTaskFlowToScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveTaskFlowToScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveTaskFlowToScenarioOutcome(MoveTaskFlowToScenarioResult(outcome.result()));
	else
		return MoveTaskFlowToScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::moveTaskFlowToScenarioAsync(const MoveTaskFlowToScenarioRequest& request, const MoveTaskFlowToScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveTaskFlowToScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::MoveTaskFlowToScenarioOutcomeCallable Dms_enterpriseClient::moveTaskFlowToScenarioCallable(const MoveTaskFlowToScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveTaskFlowToScenarioOutcome()>>(
			[this, request]()
			{
			return this->moveTaskFlowToScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::OfflineTaskFlowOutcome Dms_enterpriseClient::offlineTaskFlow(const OfflineTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineTaskFlowOutcome(OfflineTaskFlowResult(outcome.result()));
	else
		return OfflineTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::offlineTaskFlowAsync(const OfflineTaskFlowRequest& request, const OfflineTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::OfflineTaskFlowOutcomeCallable Dms_enterpriseClient::offlineTaskFlowCallable(const OfflineTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->offlineTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::PauseDataCorrectSQLJobOutcome Dms_enterpriseClient::pauseDataCorrectSQLJob(const PauseDataCorrectSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseDataCorrectSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseDataCorrectSQLJobOutcome(PauseDataCorrectSQLJobResult(outcome.result()));
	else
		return PauseDataCorrectSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::pauseDataCorrectSQLJobAsync(const PauseDataCorrectSQLJobRequest& request, const PauseDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseDataCorrectSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::PauseDataCorrectSQLJobOutcomeCallable Dms_enterpriseClient::pauseDataCorrectSQLJobCallable(const PauseDataCorrectSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseDataCorrectSQLJobOutcome()>>(
			[this, request]()
			{
			return this->pauseDataCorrectSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::PauseDataExportJobOutcome Dms_enterpriseClient::pauseDataExportJob(const PauseDataExportJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseDataExportJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseDataExportJobOutcome(PauseDataExportJobResult(outcome.result()));
	else
		return PauseDataExportJobOutcome(outcome.error());
}

void Dms_enterpriseClient::pauseDataExportJobAsync(const PauseDataExportJobRequest& request, const PauseDataExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseDataExportJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::PauseDataExportJobOutcomeCallable Dms_enterpriseClient::pauseDataExportJobCallable(const PauseDataExportJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseDataExportJobOutcome()>>(
			[this, request]()
			{
			return this->pauseDataExportJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::PreviewWorkflowOutcome Dms_enterpriseClient::previewWorkflow(const PreviewWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewWorkflowOutcome(PreviewWorkflowResult(outcome.result()));
	else
		return PreviewWorkflowOutcome(outcome.error());
}

void Dms_enterpriseClient::previewWorkflowAsync(const PreviewWorkflowRequest& request, const PreviewWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::PreviewWorkflowOutcomeCallable Dms_enterpriseClient::previewWorkflowCallable(const PreviewWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewWorkflowOutcome()>>(
			[this, request]()
			{
			return this->previewWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::PublishAndDeployTaskFlowOutcome Dms_enterpriseClient::publishAndDeployTaskFlow(const PublishAndDeployTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishAndDeployTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishAndDeployTaskFlowOutcome(PublishAndDeployTaskFlowResult(outcome.result()));
	else
		return PublishAndDeployTaskFlowOutcome(outcome.error());
}

void Dms_enterpriseClient::publishAndDeployTaskFlowAsync(const PublishAndDeployTaskFlowRequest& request, const PublishAndDeployTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishAndDeployTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::PublishAndDeployTaskFlowOutcomeCallable Dms_enterpriseClient::publishAndDeployTaskFlowCallable(const PublishAndDeployTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishAndDeployTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->publishAndDeployTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::QueryDataTrackResultDownloadStatusOutcome Dms_enterpriseClient::queryDataTrackResultDownloadStatus(const QueryDataTrackResultDownloadStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataTrackResultDownloadStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataTrackResultDownloadStatusOutcome(QueryDataTrackResultDownloadStatusResult(outcome.result()));
	else
		return QueryDataTrackResultDownloadStatusOutcome(outcome.error());
}

void Dms_enterpriseClient::queryDataTrackResultDownloadStatusAsync(const QueryDataTrackResultDownloadStatusRequest& request, const QueryDataTrackResultDownloadStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataTrackResultDownloadStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::QueryDataTrackResultDownloadStatusOutcomeCallable Dms_enterpriseClient::queryDataTrackResultDownloadStatusCallable(const QueryDataTrackResultDownloadStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataTrackResultDownloadStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDataTrackResultDownloadStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ReDeployLhDagVersionOutcome Dms_enterpriseClient::reDeployLhDagVersion(const ReDeployLhDagVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReDeployLhDagVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReDeployLhDagVersionOutcome(ReDeployLhDagVersionResult(outcome.result()));
	else
		return ReDeployLhDagVersionOutcome(outcome.error());
}

void Dms_enterpriseClient::reDeployLhDagVersionAsync(const ReDeployLhDagVersionRequest& request, const ReDeployLhDagVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reDeployLhDagVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ReDeployLhDagVersionOutcomeCallable Dms_enterpriseClient::reDeployLhDagVersionCallable(const ReDeployLhDagVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReDeployLhDagVersionOutcome()>>(
			[this, request]()
			{
			return this->reDeployLhDagVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ReRunTaskFlowInstanceOutcome Dms_enterpriseClient::reRunTaskFlowInstance(const ReRunTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReRunTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReRunTaskFlowInstanceOutcome(ReRunTaskFlowInstanceResult(outcome.result()));
	else
		return ReRunTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::reRunTaskFlowInstanceAsync(const ReRunTaskFlowInstanceRequest& request, const ReRunTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reRunTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ReRunTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::reRunTaskFlowInstanceCallable(const ReRunTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReRunTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->reRunTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RefundPayAsYouGoOrderOutcome Dms_enterpriseClient::refundPayAsYouGoOrder(const RefundPayAsYouGoOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundPayAsYouGoOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundPayAsYouGoOrderOutcome(RefundPayAsYouGoOrderResult(outcome.result()));
	else
		return RefundPayAsYouGoOrderOutcome(outcome.error());
}

void Dms_enterpriseClient::refundPayAsYouGoOrderAsync(const RefundPayAsYouGoOrderRequest& request, const RefundPayAsYouGoOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundPayAsYouGoOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RefundPayAsYouGoOrderOutcomeCallable Dms_enterpriseClient::refundPayAsYouGoOrderCallable(const RefundPayAsYouGoOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundPayAsYouGoOrderOutcome()>>(
			[this, request]()
			{
			return this->refundPayAsYouGoOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RegisterInstanceOutcome Dms_enterpriseClient::registerInstance(const RegisterInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterInstanceOutcome(RegisterInstanceResult(outcome.result()));
	else
		return RegisterInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::registerInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RegisterInstanceOutcomeCallable Dms_enterpriseClient::registerInstanceCallable(const RegisterInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterInstanceOutcome()>>(
			[this, request]()
			{
			return this->registerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RegisterUserOutcome Dms_enterpriseClient::registerUser(const RegisterUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterUserOutcome(RegisterUserResult(outcome.result()));
	else
		return RegisterUserOutcome(outcome.error());
}

void Dms_enterpriseClient::registerUserAsync(const RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RegisterUserOutcomeCallable Dms_enterpriseClient::registerUserCallable(const RegisterUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterUserOutcome()>>(
			[this, request]()
			{
			return this->registerUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RemoveDataExportJobOutcome Dms_enterpriseClient::removeDataExportJob(const RemoveDataExportJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDataExportJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDataExportJobOutcome(RemoveDataExportJobResult(outcome.result()));
	else
		return RemoveDataExportJobOutcome(outcome.error());
}

void Dms_enterpriseClient::removeDataExportJobAsync(const RemoveDataExportJobRequest& request, const RemoveDataExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDataExportJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RemoveDataExportJobOutcomeCallable Dms_enterpriseClient::removeDataExportJobCallable(const RemoveDataExportJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDataExportJobOutcome()>>(
			[this, request]()
			{
			return this->removeDataExportJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RestartDataCorrectSQLJobOutcome Dms_enterpriseClient::restartDataCorrectSQLJob(const RestartDataCorrectSQLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDataCorrectSQLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDataCorrectSQLJobOutcome(RestartDataCorrectSQLJobResult(outcome.result()));
	else
		return RestartDataCorrectSQLJobOutcome(outcome.error());
}

void Dms_enterpriseClient::restartDataCorrectSQLJobAsync(const RestartDataCorrectSQLJobRequest& request, const RestartDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDataCorrectSQLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RestartDataCorrectSQLJobOutcomeCallable Dms_enterpriseClient::restartDataCorrectSQLJobCallable(const RestartDataCorrectSQLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDataCorrectSQLJobOutcome()>>(
			[this, request]()
			{
			return this->restartDataCorrectSQLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RestartDataExportJobOutcome Dms_enterpriseClient::restartDataExportJob(const RestartDataExportJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDataExportJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDataExportJobOutcome(RestartDataExportJobResult(outcome.result()));
	else
		return RestartDataExportJobOutcome(outcome.error());
}

void Dms_enterpriseClient::restartDataExportJobAsync(const RestartDataExportJobRequest& request, const RestartDataExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDataExportJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RestartDataExportJobOutcomeCallable Dms_enterpriseClient::restartDataExportJobCallable(const RestartDataExportJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDataExportJobOutcome()>>(
			[this, request]()
			{
			return this->restartDataExportJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::ResumeTaskFlowInstanceOutcome Dms_enterpriseClient::resumeTaskFlowInstance(const ResumeTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeTaskFlowInstanceOutcome(ResumeTaskFlowInstanceResult(outcome.result()));
	else
		return ResumeTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::resumeTaskFlowInstanceAsync(const ResumeTaskFlowInstanceRequest& request, const ResumeTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::ResumeTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::resumeTaskFlowInstanceCallable(const ResumeTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RetryDataCorrectPreCheckOutcome Dms_enterpriseClient::retryDataCorrectPreCheck(const RetryDataCorrectPreCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryDataCorrectPreCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryDataCorrectPreCheckOutcome(RetryDataCorrectPreCheckResult(outcome.result()));
	else
		return RetryDataCorrectPreCheckOutcome(outcome.error());
}

void Dms_enterpriseClient::retryDataCorrectPreCheckAsync(const RetryDataCorrectPreCheckRequest& request, const RetryDataCorrectPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryDataCorrectPreCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RetryDataCorrectPreCheckOutcomeCallable Dms_enterpriseClient::retryDataCorrectPreCheckCallable(const RetryDataCorrectPreCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryDataCorrectPreCheckOutcome()>>(
			[this, request]()
			{
			return this->retryDataCorrectPreCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RevokeTemplateAuthorityOutcome Dms_enterpriseClient::revokeTemplateAuthority(const RevokeTemplateAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeTemplateAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeTemplateAuthorityOutcome(RevokeTemplateAuthorityResult(outcome.result()));
	else
		return RevokeTemplateAuthorityOutcome(outcome.error());
}

void Dms_enterpriseClient::revokeTemplateAuthorityAsync(const RevokeTemplateAuthorityRequest& request, const RevokeTemplateAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeTemplateAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RevokeTemplateAuthorityOutcomeCallable Dms_enterpriseClient::revokeTemplateAuthorityCallable(const RevokeTemplateAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeTemplateAuthorityOutcome()>>(
			[this, request]()
			{
			return this->revokeTemplateAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::RevokeUserPermissionOutcome Dms_enterpriseClient::revokeUserPermission(const RevokeUserPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeUserPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeUserPermissionOutcome(RevokeUserPermissionResult(outcome.result()));
	else
		return RevokeUserPermissionOutcome(outcome.error());
}

void Dms_enterpriseClient::revokeUserPermissionAsync(const RevokeUserPermissionRequest& request, const RevokeUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeUserPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::RevokeUserPermissionOutcomeCallable Dms_enterpriseClient::revokeUserPermissionCallable(const RevokeUserPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeUserPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeUserPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SearchDataTrackResultOutcome Dms_enterpriseClient::searchDataTrackResult(const SearchDataTrackResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchDataTrackResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchDataTrackResultOutcome(SearchDataTrackResultResult(outcome.result()));
	else
		return SearchDataTrackResultOutcome(outcome.error());
}

void Dms_enterpriseClient::searchDataTrackResultAsync(const SearchDataTrackResultRequest& request, const SearchDataTrackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchDataTrackResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SearchDataTrackResultOutcomeCallable Dms_enterpriseClient::searchDataTrackResultCallable(const SearchDataTrackResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchDataTrackResultOutcome()>>(
			[this, request]()
			{
			return this->searchDataTrackResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SearchDatabaseOutcome Dms_enterpriseClient::searchDatabase(const SearchDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchDatabaseOutcome(SearchDatabaseResult(outcome.result()));
	else
		return SearchDatabaseOutcome(outcome.error());
}

void Dms_enterpriseClient::searchDatabaseAsync(const SearchDatabaseRequest& request, const SearchDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SearchDatabaseOutcomeCallable Dms_enterpriseClient::searchDatabaseCallable(const SearchDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchDatabaseOutcome()>>(
			[this, request]()
			{
			return this->searchDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SearchTableOutcome Dms_enterpriseClient::searchTable(const SearchTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTableOutcome(SearchTableResult(outcome.result()));
	else
		return SearchTableOutcome(outcome.error());
}

void Dms_enterpriseClient::searchTableAsync(const SearchTableRequest& request, const SearchTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SearchTableOutcomeCallable Dms_enterpriseClient::searchTableCallable(const SearchTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTableOutcome()>>(
			[this, request]()
			{
			return this->searchTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SetOwnersOutcome Dms_enterpriseClient::setOwners(const SetOwnersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetOwnersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOwnersOutcome(SetOwnersResult(outcome.result()));
	else
		return SetOwnersOutcome(outcome.error());
}

void Dms_enterpriseClient::setOwnersAsync(const SetOwnersRequest& request, const SetOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOwners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SetOwnersOutcomeCallable Dms_enterpriseClient::setOwnersCallable(const SetOwnersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOwnersOutcome()>>(
			[this, request]()
			{
			return this->setOwners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SetWorkflowExtraInfoOutcome Dms_enterpriseClient::setWorkflowExtraInfo(const SetWorkflowExtraInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetWorkflowExtraInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWorkflowExtraInfoOutcome(SetWorkflowExtraInfoResult(outcome.result()));
	else
		return SetWorkflowExtraInfoOutcome(outcome.error());
}

void Dms_enterpriseClient::setWorkflowExtraInfoAsync(const SetWorkflowExtraInfoRequest& request, const SetWorkflowExtraInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWorkflowExtraInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SetWorkflowExtraInfoOutcomeCallable Dms_enterpriseClient::setWorkflowExtraInfoCallable(const SetWorkflowExtraInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWorkflowExtraInfoOutcome()>>(
			[this, request]()
			{
			return this->setWorkflowExtraInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SkipDataCorrectRowCheckOutcome Dms_enterpriseClient::skipDataCorrectRowCheck(const SkipDataCorrectRowCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipDataCorrectRowCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipDataCorrectRowCheckOutcome(SkipDataCorrectRowCheckResult(outcome.result()));
	else
		return SkipDataCorrectRowCheckOutcome(outcome.error());
}

void Dms_enterpriseClient::skipDataCorrectRowCheckAsync(const SkipDataCorrectRowCheckRequest& request, const SkipDataCorrectRowCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipDataCorrectRowCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SkipDataCorrectRowCheckOutcomeCallable Dms_enterpriseClient::skipDataCorrectRowCheckCallable(const SkipDataCorrectRowCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipDataCorrectRowCheckOutcome()>>(
			[this, request]()
			{
			return this->skipDataCorrectRowCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::StopTaskFlowInstanceOutcome Dms_enterpriseClient::stopTaskFlowInstance(const StopTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTaskFlowInstanceOutcome(StopTaskFlowInstanceResult(outcome.result()));
	else
		return StopTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::stopTaskFlowInstanceAsync(const StopTaskFlowInstanceRequest& request, const StopTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::StopTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::stopTaskFlowInstanceCallable(const StopTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SubmitOrderApprovalOutcome Dms_enterpriseClient::submitOrderApproval(const SubmitOrderApprovalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitOrderApprovalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitOrderApprovalOutcome(SubmitOrderApprovalResult(outcome.result()));
	else
		return SubmitOrderApprovalOutcome(outcome.error());
}

void Dms_enterpriseClient::submitOrderApprovalAsync(const SubmitOrderApprovalRequest& request, const SubmitOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitOrderApproval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SubmitOrderApprovalOutcomeCallable Dms_enterpriseClient::submitOrderApprovalCallable(const SubmitOrderApprovalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitOrderApprovalOutcome()>>(
			[this, request]()
			{
			return this->submitOrderApproval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SubmitStructSyncOrderApprovalOutcome Dms_enterpriseClient::submitStructSyncOrderApproval(const SubmitStructSyncOrderApprovalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitStructSyncOrderApprovalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitStructSyncOrderApprovalOutcome(SubmitStructSyncOrderApprovalResult(outcome.result()));
	else
		return SubmitStructSyncOrderApprovalOutcome(outcome.error());
}

void Dms_enterpriseClient::submitStructSyncOrderApprovalAsync(const SubmitStructSyncOrderApprovalRequest& request, const SubmitStructSyncOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitStructSyncOrderApproval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SubmitStructSyncOrderApprovalOutcomeCallable Dms_enterpriseClient::submitStructSyncOrderApprovalCallable(const SubmitStructSyncOrderApprovalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitStructSyncOrderApprovalOutcome()>>(
			[this, request]()
			{
			return this->submitStructSyncOrderApproval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SuspendDataExportJobOutcome Dms_enterpriseClient::suspendDataExportJob(const SuspendDataExportJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendDataExportJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendDataExportJobOutcome(SuspendDataExportJobResult(outcome.result()));
	else
		return SuspendDataExportJobOutcome(outcome.error());
}

void Dms_enterpriseClient::suspendDataExportJobAsync(const SuspendDataExportJobRequest& request, const SuspendDataExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendDataExportJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SuspendDataExportJobOutcomeCallable Dms_enterpriseClient::suspendDataExportJobCallable(const SuspendDataExportJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendDataExportJobOutcome()>>(
			[this, request]()
			{
			return this->suspendDataExportJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SuspendTaskFlowInstanceOutcome Dms_enterpriseClient::suspendTaskFlowInstance(const SuspendTaskFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendTaskFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendTaskFlowInstanceOutcome(SuspendTaskFlowInstanceResult(outcome.result()));
	else
		return SuspendTaskFlowInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::suspendTaskFlowInstanceAsync(const SuspendTaskFlowInstanceRequest& request, const SuspendTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendTaskFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SuspendTaskFlowInstanceOutcomeCallable Dms_enterpriseClient::suspendTaskFlowInstanceCallable(const SuspendTaskFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendTaskFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->suspendTaskFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SyncDatabaseMetaOutcome Dms_enterpriseClient::syncDatabaseMeta(const SyncDatabaseMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDatabaseMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDatabaseMetaOutcome(SyncDatabaseMetaResult(outcome.result()));
	else
		return SyncDatabaseMetaOutcome(outcome.error());
}

void Dms_enterpriseClient::syncDatabaseMetaAsync(const SyncDatabaseMetaRequest& request, const SyncDatabaseMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDatabaseMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SyncDatabaseMetaOutcomeCallable Dms_enterpriseClient::syncDatabaseMetaCallable(const SyncDatabaseMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDatabaseMetaOutcome()>>(
			[this, request]()
			{
			return this->syncDatabaseMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::SyncInstanceMetaOutcome Dms_enterpriseClient::syncInstanceMeta(const SyncInstanceMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncInstanceMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncInstanceMetaOutcome(SyncInstanceMetaResult(outcome.result()));
	else
		return SyncInstanceMetaOutcome(outcome.error());
}

void Dms_enterpriseClient::syncInstanceMetaAsync(const SyncInstanceMetaRequest& request, const SyncInstanceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncInstanceMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::SyncInstanceMetaOutcomeCallable Dms_enterpriseClient::syncInstanceMetaCallable(const SyncInstanceMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncInstanceMetaOutcome()>>(
			[this, request]()
			{
			return this->syncInstanceMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateAbacPolicyOutcome Dms_enterpriseClient::updateAbacPolicy(const UpdateAbacPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAbacPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAbacPolicyOutcome(UpdateAbacPolicyResult(outcome.result()));
	else
		return UpdateAbacPolicyOutcome(outcome.error());
}

void Dms_enterpriseClient::updateAbacPolicyAsync(const UpdateAbacPolicyRequest& request, const UpdateAbacPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAbacPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateAbacPolicyOutcomeCallable Dms_enterpriseClient::updateAbacPolicyCallable(const UpdateAbacPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAbacPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateAbacPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateAuthorityTemplateOutcome Dms_enterpriseClient::updateAuthorityTemplate(const UpdateAuthorityTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuthorityTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuthorityTemplateOutcome(UpdateAuthorityTemplateResult(outcome.result()));
	else
		return UpdateAuthorityTemplateOutcome(outcome.error());
}

void Dms_enterpriseClient::updateAuthorityTemplateAsync(const UpdateAuthorityTemplateRequest& request, const UpdateAuthorityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuthorityTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateAuthorityTemplateOutcomeCallable Dms_enterpriseClient::updateAuthorityTemplateCallable(const UpdateAuthorityTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuthorityTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateAuthorityTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateInstanceOutcome Dms_enterpriseClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void Dms_enterpriseClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateInstanceOutcomeCallable Dms_enterpriseClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateSLARulesOutcome Dms_enterpriseClient::updateSLARules(const UpdateSLARulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSLARulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSLARulesOutcome(UpdateSLARulesResult(outcome.result()));
	else
		return UpdateSLARulesOutcome(outcome.error());
}

void Dms_enterpriseClient::updateSLARulesAsync(const UpdateSLARulesRequest& request, const UpdateSLARulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSLARules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateSLARulesOutcomeCallable Dms_enterpriseClient::updateSLARulesCallable(const UpdateSLARulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSLARulesOutcome()>>(
			[this, request]()
			{
			return this->updateSLARules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateScenarioOutcome Dms_enterpriseClient::updateScenario(const UpdateScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateScenarioOutcome(UpdateScenarioResult(outcome.result()));
	else
		return UpdateScenarioOutcome(outcome.error());
}

void Dms_enterpriseClient::updateScenarioAsync(const UpdateScenarioRequest& request, const UpdateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateScenarioOutcomeCallable Dms_enterpriseClient::updateScenarioCallable(const UpdateScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateScenarioOutcome()>>(
			[this, request]()
			{
			return this->updateScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateStandardGroupOutcome Dms_enterpriseClient::updateStandardGroup(const UpdateStandardGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStandardGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStandardGroupOutcome(UpdateStandardGroupResult(outcome.result()));
	else
		return UpdateStandardGroupOutcome(outcome.error());
}

void Dms_enterpriseClient::updateStandardGroupAsync(const UpdateStandardGroupRequest& request, const UpdateStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStandardGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateStandardGroupOutcomeCallable Dms_enterpriseClient::updateStandardGroupCallable(const UpdateStandardGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStandardGroupOutcome()>>(
			[this, request]()
			{
			return this->updateStandardGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskConfigOutcome Dms_enterpriseClient::updateTaskConfig(const UpdateTaskConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskConfigOutcome(UpdateTaskConfigResult(outcome.result()));
	else
		return UpdateTaskConfigOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskConfigAsync(const UpdateTaskConfigRequest& request, const UpdateTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskConfigOutcomeCallable Dms_enterpriseClient::updateTaskConfigCallable(const UpdateTaskConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskConfigOutcome()>>(
			[this, request]()
			{
			return this->updateTaskConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskContentOutcome Dms_enterpriseClient::updateTaskContent(const UpdateTaskContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskContentOutcome(UpdateTaskContentResult(outcome.result()));
	else
		return UpdateTaskContentOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskContentAsync(const UpdateTaskContentRequest& request, const UpdateTaskContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskContentOutcomeCallable Dms_enterpriseClient::updateTaskContentCallable(const UpdateTaskContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskContentOutcome()>>(
			[this, request]()
			{
			return this->updateTaskContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowConstantsOutcome Dms_enterpriseClient::updateTaskFlowConstants(const UpdateTaskFlowConstantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowConstantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowConstantsOutcome(UpdateTaskFlowConstantsResult(outcome.result()));
	else
		return UpdateTaskFlowConstantsOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowConstantsAsync(const UpdateTaskFlowConstantsRequest& request, const UpdateTaskFlowConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowConstants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowConstantsOutcomeCallable Dms_enterpriseClient::updateTaskFlowConstantsCallable(const UpdateTaskFlowConstantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowConstantsOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowConstants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowCooperatorsOutcome Dms_enterpriseClient::updateTaskFlowCooperators(const UpdateTaskFlowCooperatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowCooperatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowCooperatorsOutcome(UpdateTaskFlowCooperatorsResult(outcome.result()));
	else
		return UpdateTaskFlowCooperatorsOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowCooperatorsAsync(const UpdateTaskFlowCooperatorsRequest& request, const UpdateTaskFlowCooperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowCooperators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowCooperatorsOutcomeCallable Dms_enterpriseClient::updateTaskFlowCooperatorsCallable(const UpdateTaskFlowCooperatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowCooperatorsOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowCooperators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowEdgesOutcome Dms_enterpriseClient::updateTaskFlowEdges(const UpdateTaskFlowEdgesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowEdgesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowEdgesOutcome(UpdateTaskFlowEdgesResult(outcome.result()));
	else
		return UpdateTaskFlowEdgesOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowEdgesAsync(const UpdateTaskFlowEdgesRequest& request, const UpdateTaskFlowEdgesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowEdges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowEdgesOutcomeCallable Dms_enterpriseClient::updateTaskFlowEdgesCallable(const UpdateTaskFlowEdgesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowEdgesOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowEdges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowNameAndDescOutcome Dms_enterpriseClient::updateTaskFlowNameAndDesc(const UpdateTaskFlowNameAndDescRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowNameAndDescOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowNameAndDescOutcome(UpdateTaskFlowNameAndDescResult(outcome.result()));
	else
		return UpdateTaskFlowNameAndDescOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowNameAndDescAsync(const UpdateTaskFlowNameAndDescRequest& request, const UpdateTaskFlowNameAndDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowNameAndDesc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowNameAndDescOutcomeCallable Dms_enterpriseClient::updateTaskFlowNameAndDescCallable(const UpdateTaskFlowNameAndDescRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowNameAndDescOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowNameAndDesc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowNotificationOutcome Dms_enterpriseClient::updateTaskFlowNotification(const UpdateTaskFlowNotificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowNotificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowNotificationOutcome(UpdateTaskFlowNotificationResult(outcome.result()));
	else
		return UpdateTaskFlowNotificationOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowNotificationAsync(const UpdateTaskFlowNotificationRequest& request, const UpdateTaskFlowNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowNotificationOutcomeCallable Dms_enterpriseClient::updateTaskFlowNotificationCallable(const UpdateTaskFlowNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowNotificationOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowOwnerOutcome Dms_enterpriseClient::updateTaskFlowOwner(const UpdateTaskFlowOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowOwnerOutcome(UpdateTaskFlowOwnerResult(outcome.result()));
	else
		return UpdateTaskFlowOwnerOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowOwnerAsync(const UpdateTaskFlowOwnerRequest& request, const UpdateTaskFlowOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowOwnerOutcomeCallable Dms_enterpriseClient::updateTaskFlowOwnerCallable(const UpdateTaskFlowOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowOwnerOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowRelationsOutcome Dms_enterpriseClient::updateTaskFlowRelations(const UpdateTaskFlowRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowRelationsOutcome(UpdateTaskFlowRelationsResult(outcome.result()));
	else
		return UpdateTaskFlowRelationsOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowRelationsAsync(const UpdateTaskFlowRelationsRequest& request, const UpdateTaskFlowRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowRelationsOutcomeCallable Dms_enterpriseClient::updateTaskFlowRelationsCallable(const UpdateTaskFlowRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowRelationsOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowScheduleOutcome Dms_enterpriseClient::updateTaskFlowSchedule(const UpdateTaskFlowScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowScheduleOutcome(UpdateTaskFlowScheduleResult(outcome.result()));
	else
		return UpdateTaskFlowScheduleOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowScheduleAsync(const UpdateTaskFlowScheduleRequest& request, const UpdateTaskFlowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowScheduleOutcomeCallable Dms_enterpriseClient::updateTaskFlowScheduleCallable(const UpdateTaskFlowScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowScheduleOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskFlowTimeVariablesOutcome Dms_enterpriseClient::updateTaskFlowTimeVariables(const UpdateTaskFlowTimeVariablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskFlowTimeVariablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskFlowTimeVariablesOutcome(UpdateTaskFlowTimeVariablesResult(outcome.result()));
	else
		return UpdateTaskFlowTimeVariablesOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskFlowTimeVariablesAsync(const UpdateTaskFlowTimeVariablesRequest& request, const UpdateTaskFlowTimeVariablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskFlowTimeVariables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskFlowTimeVariablesOutcomeCallable Dms_enterpriseClient::updateTaskFlowTimeVariablesCallable(const UpdateTaskFlowTimeVariablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskFlowTimeVariablesOutcome()>>(
			[this, request]()
			{
			return this->updateTaskFlowTimeVariables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskNameOutcome Dms_enterpriseClient::updateTaskName(const UpdateTaskNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskNameOutcome(UpdateTaskNameResult(outcome.result()));
	else
		return UpdateTaskNameOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskNameAsync(const UpdateTaskNameRequest& request, const UpdateTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskNameOutcomeCallable Dms_enterpriseClient::updateTaskNameCallable(const UpdateTaskNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskNameOutcome()>>(
			[this, request]()
			{
			return this->updateTaskName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskOutputOutcome Dms_enterpriseClient::updateTaskOutput(const UpdateTaskOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskOutputOutcome(UpdateTaskOutputResult(outcome.result()));
	else
		return UpdateTaskOutputOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskOutputAsync(const UpdateTaskOutputRequest& request, const UpdateTaskOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskOutputOutcomeCallable Dms_enterpriseClient::updateTaskOutputCallable(const UpdateTaskOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskOutputOutcome()>>(
			[this, request]()
			{
			return this->updateTaskOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateTaskTimeVariablesOutcome Dms_enterpriseClient::updateTaskTimeVariables(const UpdateTaskTimeVariablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskTimeVariablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskTimeVariablesOutcome(UpdateTaskTimeVariablesResult(outcome.result()));
	else
		return UpdateTaskTimeVariablesOutcome(outcome.error());
}

void Dms_enterpriseClient::updateTaskTimeVariablesAsync(const UpdateTaskTimeVariablesRequest& request, const UpdateTaskTimeVariablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskTimeVariables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateTaskTimeVariablesOutcomeCallable Dms_enterpriseClient::updateTaskTimeVariablesCallable(const UpdateTaskTimeVariablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskTimeVariablesOutcome()>>(
			[this, request]()
			{
			return this->updateTaskTimeVariables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_enterpriseClient::UpdateUserOutcome Dms_enterpriseClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void Dms_enterpriseClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_enterpriseClient::UpdateUserOutcomeCallable Dms_enterpriseClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

