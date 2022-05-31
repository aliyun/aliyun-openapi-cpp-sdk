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

#include <alibabacloud/config/ConfigClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

namespace
{
	const std::string SERVICE_NAME = "Config";
}

ConfigClient::ConfigClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ConfigClient::ConfigClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ConfigClient::ConfigClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ConfigClient::~ConfigClient()
{}

ConfigClient::ActiveAggregateConfigRulesOutcome ConfigClient::activeAggregateConfigRules(const ActiveAggregateConfigRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActiveAggregateConfigRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActiveAggregateConfigRulesOutcome(ActiveAggregateConfigRulesResult(outcome.result()));
	else
		return ActiveAggregateConfigRulesOutcome(outcome.error());
}

void ConfigClient::activeAggregateConfigRulesAsync(const ActiveAggregateConfigRulesRequest& request, const ActiveAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeAggregateConfigRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ActiveAggregateConfigRulesOutcomeCallable ConfigClient::activeAggregateConfigRulesCallable(const ActiveAggregateConfigRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveAggregateConfigRulesOutcome()>>(
			[this, request]()
			{
			return this->activeAggregateConfigRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::AttachAggregateConfigRuleToCompliancePackOutcome ConfigClient::attachAggregateConfigRuleToCompliancePack(const AttachAggregateConfigRuleToCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachAggregateConfigRuleToCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachAggregateConfigRuleToCompliancePackOutcome(AttachAggregateConfigRuleToCompliancePackResult(outcome.result()));
	else
		return AttachAggregateConfigRuleToCompliancePackOutcome(outcome.error());
}

void ConfigClient::attachAggregateConfigRuleToCompliancePackAsync(const AttachAggregateConfigRuleToCompliancePackRequest& request, const AttachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachAggregateConfigRuleToCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::AttachAggregateConfigRuleToCompliancePackOutcomeCallable ConfigClient::attachAggregateConfigRuleToCompliancePackCallable(const AttachAggregateConfigRuleToCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachAggregateConfigRuleToCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->attachAggregateConfigRuleToCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::AttachConfigRuleToCompliancePackOutcome ConfigClient::attachConfigRuleToCompliancePack(const AttachConfigRuleToCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachConfigRuleToCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachConfigRuleToCompliancePackOutcome(AttachConfigRuleToCompliancePackResult(outcome.result()));
	else
		return AttachConfigRuleToCompliancePackOutcome(outcome.error());
}

void ConfigClient::attachConfigRuleToCompliancePackAsync(const AttachConfigRuleToCompliancePackRequest& request, const AttachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachConfigRuleToCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::AttachConfigRuleToCompliancePackOutcomeCallable ConfigClient::attachConfigRuleToCompliancePackCallable(const AttachConfigRuleToCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachConfigRuleToCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->attachConfigRuleToCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateAggregateCompliancePackOutcome ConfigClient::createAggregateCompliancePack(const CreateAggregateCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAggregateCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAggregateCompliancePackOutcome(CreateAggregateCompliancePackResult(outcome.result()));
	else
		return CreateAggregateCompliancePackOutcome(outcome.error());
}

void ConfigClient::createAggregateCompliancePackAsync(const CreateAggregateCompliancePackRequest& request, const CreateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAggregateCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateAggregateCompliancePackOutcomeCallable ConfigClient::createAggregateCompliancePackCallable(const CreateAggregateCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAggregateCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->createAggregateCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateAggregateConfigDeliveryChannelOutcome ConfigClient::createAggregateConfigDeliveryChannel(const CreateAggregateConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAggregateConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAggregateConfigDeliveryChannelOutcome(CreateAggregateConfigDeliveryChannelResult(outcome.result()));
	else
		return CreateAggregateConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::createAggregateConfigDeliveryChannelAsync(const CreateAggregateConfigDeliveryChannelRequest& request, const CreateAggregateConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAggregateConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateAggregateConfigDeliveryChannelOutcomeCallable ConfigClient::createAggregateConfigDeliveryChannelCallable(const CreateAggregateConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAggregateConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->createAggregateConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateAggregateConfigRuleOutcome ConfigClient::createAggregateConfigRule(const CreateAggregateConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAggregateConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAggregateConfigRuleOutcome(CreateAggregateConfigRuleResult(outcome.result()));
	else
		return CreateAggregateConfigRuleOutcome(outcome.error());
}

void ConfigClient::createAggregateConfigRuleAsync(const CreateAggregateConfigRuleRequest& request, const CreateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAggregateConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateAggregateConfigRuleOutcomeCallable ConfigClient::createAggregateConfigRuleCallable(const CreateAggregateConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAggregateConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->createAggregateConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateAggregateRemediationOutcome ConfigClient::createAggregateRemediation(const CreateAggregateRemediationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAggregateRemediationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAggregateRemediationOutcome(CreateAggregateRemediationResult(outcome.result()));
	else
		return CreateAggregateRemediationOutcome(outcome.error());
}

void ConfigClient::createAggregateRemediationAsync(const CreateAggregateRemediationRequest& request, const CreateAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAggregateRemediation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateAggregateRemediationOutcomeCallable ConfigClient::createAggregateRemediationCallable(const CreateAggregateRemediationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAggregateRemediationOutcome()>>(
			[this, request]()
			{
			return this->createAggregateRemediation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateAggregatorOutcome ConfigClient::createAggregator(const CreateAggregatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAggregatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAggregatorOutcome(CreateAggregatorResult(outcome.result()));
	else
		return CreateAggregatorOutcome(outcome.error());
}

void ConfigClient::createAggregatorAsync(const CreateAggregatorRequest& request, const CreateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAggregator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateAggregatorOutcomeCallable ConfigClient::createAggregatorCallable(const CreateAggregatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAggregatorOutcome()>>(
			[this, request]()
			{
			return this->createAggregator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateCompliancePackOutcome ConfigClient::createCompliancePack(const CreateCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCompliancePackOutcome(CreateCompliancePackResult(outcome.result()));
	else
		return CreateCompliancePackOutcome(outcome.error());
}

void ConfigClient::createCompliancePackAsync(const CreateCompliancePackRequest& request, const CreateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateCompliancePackOutcomeCallable ConfigClient::createCompliancePackCallable(const CreateCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->createCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateConfigDeliveryChannelOutcome ConfigClient::createConfigDeliveryChannel(const CreateConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigDeliveryChannelOutcome(CreateConfigDeliveryChannelResult(outcome.result()));
	else
		return CreateConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::createConfigDeliveryChannelAsync(const CreateConfigDeliveryChannelRequest& request, const CreateConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateConfigDeliveryChannelOutcomeCallable ConfigClient::createConfigDeliveryChannelCallable(const CreateConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->createConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateConfigRuleOutcome ConfigClient::createConfigRule(const CreateConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigRuleOutcome(CreateConfigRuleResult(outcome.result()));
	else
		return CreateConfigRuleOutcome(outcome.error());
}

void ConfigClient::createConfigRuleAsync(const CreateConfigRuleRequest& request, const CreateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateConfigRuleOutcomeCallable ConfigClient::createConfigRuleCallable(const CreateConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->createConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::CreateRemediationOutcome ConfigClient::createRemediation(const CreateRemediationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRemediationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRemediationOutcome(CreateRemediationResult(outcome.result()));
	else
		return CreateRemediationOutcome(outcome.error());
}

void ConfigClient::createRemediationAsync(const CreateRemediationRequest& request, const CreateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRemediation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::CreateRemediationOutcomeCallable ConfigClient::createRemediationCallable(const CreateRemediationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRemediationOutcome()>>(
			[this, request]()
			{
			return this->createRemediation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeactiveAggregateConfigRulesOutcome ConfigClient::deactiveAggregateConfigRules(const DeactiveAggregateConfigRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactiveAggregateConfigRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactiveAggregateConfigRulesOutcome(DeactiveAggregateConfigRulesResult(outcome.result()));
	else
		return DeactiveAggregateConfigRulesOutcome(outcome.error());
}

void ConfigClient::deactiveAggregateConfigRulesAsync(const DeactiveAggregateConfigRulesRequest& request, const DeactiveAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactiveAggregateConfigRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeactiveAggregateConfigRulesOutcomeCallable ConfigClient::deactiveAggregateConfigRulesCallable(const DeactiveAggregateConfigRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactiveAggregateConfigRulesOutcome()>>(
			[this, request]()
			{
			return this->deactiveAggregateConfigRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeactiveConfigRulesOutcome ConfigClient::deactiveConfigRules(const DeactiveConfigRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactiveConfigRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactiveConfigRulesOutcome(DeactiveConfigRulesResult(outcome.result()));
	else
		return DeactiveConfigRulesOutcome(outcome.error());
}

void ConfigClient::deactiveConfigRulesAsync(const DeactiveConfigRulesRequest& request, const DeactiveConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactiveConfigRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeactiveConfigRulesOutcomeCallable ConfigClient::deactiveConfigRulesCallable(const DeactiveConfigRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactiveConfigRulesOutcome()>>(
			[this, request]()
			{
			return this->deactiveConfigRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteAggregateCompliancePacksOutcome ConfigClient::deleteAggregateCompliancePacks(const DeleteAggregateCompliancePacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAggregateCompliancePacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAggregateCompliancePacksOutcome(DeleteAggregateCompliancePacksResult(outcome.result()));
	else
		return DeleteAggregateCompliancePacksOutcome(outcome.error());
}

void ConfigClient::deleteAggregateCompliancePacksAsync(const DeleteAggregateCompliancePacksRequest& request, const DeleteAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAggregateCompliancePacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteAggregateCompliancePacksOutcomeCallable ConfigClient::deleteAggregateCompliancePacksCallable(const DeleteAggregateCompliancePacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAggregateCompliancePacksOutcome()>>(
			[this, request]()
			{
			return this->deleteAggregateCompliancePacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteAggregateConfigRulesOutcome ConfigClient::deleteAggregateConfigRules(const DeleteAggregateConfigRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAggregateConfigRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAggregateConfigRulesOutcome(DeleteAggregateConfigRulesResult(outcome.result()));
	else
		return DeleteAggregateConfigRulesOutcome(outcome.error());
}

void ConfigClient::deleteAggregateConfigRulesAsync(const DeleteAggregateConfigRulesRequest& request, const DeleteAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAggregateConfigRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteAggregateConfigRulesOutcomeCallable ConfigClient::deleteAggregateConfigRulesCallable(const DeleteAggregateConfigRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAggregateConfigRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteAggregateConfigRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteAggregateRemediationsOutcome ConfigClient::deleteAggregateRemediations(const DeleteAggregateRemediationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAggregateRemediationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAggregateRemediationsOutcome(DeleteAggregateRemediationsResult(outcome.result()));
	else
		return DeleteAggregateRemediationsOutcome(outcome.error());
}

void ConfigClient::deleteAggregateRemediationsAsync(const DeleteAggregateRemediationsRequest& request, const DeleteAggregateRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAggregateRemediations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteAggregateRemediationsOutcomeCallable ConfigClient::deleteAggregateRemediationsCallable(const DeleteAggregateRemediationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAggregateRemediationsOutcome()>>(
			[this, request]()
			{
			return this->deleteAggregateRemediations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteAggregatorsOutcome ConfigClient::deleteAggregators(const DeleteAggregatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAggregatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAggregatorsOutcome(DeleteAggregatorsResult(outcome.result()));
	else
		return DeleteAggregatorsOutcome(outcome.error());
}

void ConfigClient::deleteAggregatorsAsync(const DeleteAggregatorsRequest& request, const DeleteAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAggregators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteAggregatorsOutcomeCallable ConfigClient::deleteAggregatorsCallable(const DeleteAggregatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAggregatorsOutcome()>>(
			[this, request]()
			{
			return this->deleteAggregators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteCompliancePacksOutcome ConfigClient::deleteCompliancePacks(const DeleteCompliancePacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCompliancePacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCompliancePacksOutcome(DeleteCompliancePacksResult(outcome.result()));
	else
		return DeleteCompliancePacksOutcome(outcome.error());
}

void ConfigClient::deleteCompliancePacksAsync(const DeleteCompliancePacksRequest& request, const DeleteCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCompliancePacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteCompliancePacksOutcomeCallable ConfigClient::deleteCompliancePacksCallable(const DeleteCompliancePacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCompliancePacksOutcome()>>(
			[this, request]()
			{
			return this->deleteCompliancePacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DeleteRemediationsOutcome ConfigClient::deleteRemediations(const DeleteRemediationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRemediationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRemediationsOutcome(DeleteRemediationsResult(outcome.result()));
	else
		return DeleteRemediationsOutcome(outcome.error());
}

void ConfigClient::deleteRemediationsAsync(const DeleteRemediationsRequest& request, const DeleteRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRemediations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DeleteRemediationsOutcomeCallable ConfigClient::deleteRemediationsCallable(const DeleteRemediationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRemediationsOutcome()>>(
			[this, request]()
			{
			return this->deleteRemediations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DetachAggregateConfigRuleToCompliancePackOutcome ConfigClient::detachAggregateConfigRuleToCompliancePack(const DetachAggregateConfigRuleToCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachAggregateConfigRuleToCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachAggregateConfigRuleToCompliancePackOutcome(DetachAggregateConfigRuleToCompliancePackResult(outcome.result()));
	else
		return DetachAggregateConfigRuleToCompliancePackOutcome(outcome.error());
}

void ConfigClient::detachAggregateConfigRuleToCompliancePackAsync(const DetachAggregateConfigRuleToCompliancePackRequest& request, const DetachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachAggregateConfigRuleToCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DetachAggregateConfigRuleToCompliancePackOutcomeCallable ConfigClient::detachAggregateConfigRuleToCompliancePackCallable(const DetachAggregateConfigRuleToCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachAggregateConfigRuleToCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->detachAggregateConfigRuleToCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::DetachConfigRuleToCompliancePackOutcome ConfigClient::detachConfigRuleToCompliancePack(const DetachConfigRuleToCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachConfigRuleToCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachConfigRuleToCompliancePackOutcome(DetachConfigRuleToCompliancePackResult(outcome.result()));
	else
		return DetachConfigRuleToCompliancePackOutcome(outcome.error());
}

void ConfigClient::detachConfigRuleToCompliancePackAsync(const DetachConfigRuleToCompliancePackRequest& request, const DetachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachConfigRuleToCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::DetachConfigRuleToCompliancePackOutcomeCallable ConfigClient::detachConfigRuleToCompliancePackCallable(const DetachConfigRuleToCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachConfigRuleToCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->detachConfigRuleToCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GenerateAggregateCompliancePackReportOutcome ConfigClient::generateAggregateCompliancePackReport(const GenerateAggregateCompliancePackReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAggregateCompliancePackReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAggregateCompliancePackReportOutcome(GenerateAggregateCompliancePackReportResult(outcome.result()));
	else
		return GenerateAggregateCompliancePackReportOutcome(outcome.error());
}

void ConfigClient::generateAggregateCompliancePackReportAsync(const GenerateAggregateCompliancePackReportRequest& request, const GenerateAggregateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAggregateCompliancePackReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GenerateAggregateCompliancePackReportOutcomeCallable ConfigClient::generateAggregateCompliancePackReportCallable(const GenerateAggregateCompliancePackReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAggregateCompliancePackReportOutcome()>>(
			[this, request]()
			{
			return this->generateAggregateCompliancePackReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GenerateAggregateConfigRulesReportOutcome ConfigClient::generateAggregateConfigRulesReport(const GenerateAggregateConfigRulesReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAggregateConfigRulesReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAggregateConfigRulesReportOutcome(GenerateAggregateConfigRulesReportResult(outcome.result()));
	else
		return GenerateAggregateConfigRulesReportOutcome(outcome.error());
}

void ConfigClient::generateAggregateConfigRulesReportAsync(const GenerateAggregateConfigRulesReportRequest& request, const GenerateAggregateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAggregateConfigRulesReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GenerateAggregateConfigRulesReportOutcomeCallable ConfigClient::generateAggregateConfigRulesReportCallable(const GenerateAggregateConfigRulesReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAggregateConfigRulesReportOutcome()>>(
			[this, request]()
			{
			return this->generateAggregateConfigRulesReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GenerateCompliancePackReportOutcome ConfigClient::generateCompliancePackReport(const GenerateCompliancePackReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateCompliancePackReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateCompliancePackReportOutcome(GenerateCompliancePackReportResult(outcome.result()));
	else
		return GenerateCompliancePackReportOutcome(outcome.error());
}

void ConfigClient::generateCompliancePackReportAsync(const GenerateCompliancePackReportRequest& request, const GenerateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateCompliancePackReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GenerateCompliancePackReportOutcomeCallable ConfigClient::generateCompliancePackReportCallable(const GenerateCompliancePackReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateCompliancePackReportOutcome()>>(
			[this, request]()
			{
			return this->generateCompliancePackReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GenerateConfigRulesReportOutcome ConfigClient::generateConfigRulesReport(const GenerateConfigRulesReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateConfigRulesReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateConfigRulesReportOutcome(GenerateConfigRulesReportResult(outcome.result()));
	else
		return GenerateConfigRulesReportOutcome(outcome.error());
}

void ConfigClient::generateConfigRulesReportAsync(const GenerateConfigRulesReportRequest& request, const GenerateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateConfigRulesReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GenerateConfigRulesReportOutcomeCallable ConfigClient::generateConfigRulesReportCallable(const GenerateConfigRulesReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateConfigRulesReportOutcome()>>(
			[this, request]()
			{
			return this->generateConfigRulesReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateAccountComplianceByPackOutcome ConfigClient::getAggregateAccountComplianceByPack(const GetAggregateAccountComplianceByPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateAccountComplianceByPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateAccountComplianceByPackOutcome(GetAggregateAccountComplianceByPackResult(outcome.result()));
	else
		return GetAggregateAccountComplianceByPackOutcome(outcome.error());
}

void ConfigClient::getAggregateAccountComplianceByPackAsync(const GetAggregateAccountComplianceByPackRequest& request, const GetAggregateAccountComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateAccountComplianceByPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateAccountComplianceByPackOutcomeCallable ConfigClient::getAggregateAccountComplianceByPackCallable(const GetAggregateAccountComplianceByPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateAccountComplianceByPackOutcome()>>(
			[this, request]()
			{
			return this->getAggregateAccountComplianceByPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateCompliancePackOutcome ConfigClient::getAggregateCompliancePack(const GetAggregateCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateCompliancePackOutcome(GetAggregateCompliancePackResult(outcome.result()));
	else
		return GetAggregateCompliancePackOutcome(outcome.error());
}

void ConfigClient::getAggregateCompliancePackAsync(const GetAggregateCompliancePackRequest& request, const GetAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateCompliancePackOutcomeCallable ConfigClient::getAggregateCompliancePackCallable(const GetAggregateCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->getAggregateCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateCompliancePackReportOutcome ConfigClient::getAggregateCompliancePackReport(const GetAggregateCompliancePackReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateCompliancePackReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateCompliancePackReportOutcome(GetAggregateCompliancePackReportResult(outcome.result()));
	else
		return GetAggregateCompliancePackReportOutcome(outcome.error());
}

void ConfigClient::getAggregateCompliancePackReportAsync(const GetAggregateCompliancePackReportRequest& request, const GetAggregateCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateCompliancePackReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateCompliancePackReportOutcomeCallable ConfigClient::getAggregateCompliancePackReportCallable(const GetAggregateCompliancePackReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateCompliancePackReportOutcome()>>(
			[this, request]()
			{
			return this->getAggregateCompliancePackReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateConfigDeliveryChannelOutcome ConfigClient::getAggregateConfigDeliveryChannel(const GetAggregateConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateConfigDeliveryChannelOutcome(GetAggregateConfigDeliveryChannelResult(outcome.result()));
	else
		return GetAggregateConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::getAggregateConfigDeliveryChannelAsync(const GetAggregateConfigDeliveryChannelRequest& request, const GetAggregateConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateConfigDeliveryChannelOutcomeCallable ConfigClient::getAggregateConfigDeliveryChannelCallable(const GetAggregateConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->getAggregateConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateConfigRuleOutcome ConfigClient::getAggregateConfigRule(const GetAggregateConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateConfigRuleOutcome(GetAggregateConfigRuleResult(outcome.result()));
	else
		return GetAggregateConfigRuleOutcome(outcome.error());
}

void ConfigClient::getAggregateConfigRuleAsync(const GetAggregateConfigRuleRequest& request, const GetAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateConfigRuleOutcomeCallable ConfigClient::getAggregateConfigRuleCallable(const GetAggregateConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->getAggregateConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateConfigRuleComplianceByPackOutcome ConfigClient::getAggregateConfigRuleComplianceByPack(const GetAggregateConfigRuleComplianceByPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateConfigRuleComplianceByPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateConfigRuleComplianceByPackOutcome(GetAggregateConfigRuleComplianceByPackResult(outcome.result()));
	else
		return GetAggregateConfigRuleComplianceByPackOutcome(outcome.error());
}

void ConfigClient::getAggregateConfigRuleComplianceByPackAsync(const GetAggregateConfigRuleComplianceByPackRequest& request, const GetAggregateConfigRuleComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateConfigRuleComplianceByPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateConfigRuleComplianceByPackOutcomeCallable ConfigClient::getAggregateConfigRuleComplianceByPackCallable(const GetAggregateConfigRuleComplianceByPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateConfigRuleComplianceByPackOutcome()>>(
			[this, request]()
			{
			return this->getAggregateConfigRuleComplianceByPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateConfigRuleSummaryByRiskLevelOutcome ConfigClient::getAggregateConfigRuleSummaryByRiskLevel(const GetAggregateConfigRuleSummaryByRiskLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateConfigRuleSummaryByRiskLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateConfigRuleSummaryByRiskLevelOutcome(GetAggregateConfigRuleSummaryByRiskLevelResult(outcome.result()));
	else
		return GetAggregateConfigRuleSummaryByRiskLevelOutcome(outcome.error());
}

void ConfigClient::getAggregateConfigRuleSummaryByRiskLevelAsync(const GetAggregateConfigRuleSummaryByRiskLevelRequest& request, const GetAggregateConfigRuleSummaryByRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateConfigRuleSummaryByRiskLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateConfigRuleSummaryByRiskLevelOutcomeCallable ConfigClient::getAggregateConfigRuleSummaryByRiskLevelCallable(const GetAggregateConfigRuleSummaryByRiskLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateConfigRuleSummaryByRiskLevelOutcome()>>(
			[this, request]()
			{
			return this->getAggregateConfigRuleSummaryByRiskLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateConfigRulesReportOutcome ConfigClient::getAggregateConfigRulesReport(const GetAggregateConfigRulesReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateConfigRulesReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateConfigRulesReportOutcome(GetAggregateConfigRulesReportResult(outcome.result()));
	else
		return GetAggregateConfigRulesReportOutcome(outcome.error());
}

void ConfigClient::getAggregateConfigRulesReportAsync(const GetAggregateConfigRulesReportRequest& request, const GetAggregateConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateConfigRulesReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateConfigRulesReportOutcomeCallable ConfigClient::getAggregateConfigRulesReportCallable(const GetAggregateConfigRulesReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateConfigRulesReportOutcome()>>(
			[this, request]()
			{
			return this->getAggregateConfigRulesReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateDiscoveredResourceOutcome ConfigClient::getAggregateDiscoveredResource(const GetAggregateDiscoveredResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateDiscoveredResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateDiscoveredResourceOutcome(GetAggregateDiscoveredResourceResult(outcome.result()));
	else
		return GetAggregateDiscoveredResourceOutcome(outcome.error());
}

void ConfigClient::getAggregateDiscoveredResourceAsync(const GetAggregateDiscoveredResourceRequest& request, const GetAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateDiscoveredResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateDiscoveredResourceOutcomeCallable ConfigClient::getAggregateDiscoveredResourceCallable(const GetAggregateDiscoveredResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateDiscoveredResourceOutcome()>>(
			[this, request]()
			{
			return this->getAggregateDiscoveredResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceComplianceByConfigRuleOutcome ConfigClient::getAggregateResourceComplianceByConfigRule(const GetAggregateResourceComplianceByConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceComplianceByConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceComplianceByConfigRuleOutcome(GetAggregateResourceComplianceByConfigRuleResult(outcome.result()));
	else
		return GetAggregateResourceComplianceByConfigRuleOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceComplianceByConfigRuleAsync(const GetAggregateResourceComplianceByConfigRuleRequest& request, const GetAggregateResourceComplianceByConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceComplianceByConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceComplianceByConfigRuleOutcomeCallable ConfigClient::getAggregateResourceComplianceByConfigRuleCallable(const GetAggregateResourceComplianceByConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceComplianceByConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceComplianceByConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceComplianceByPackOutcome ConfigClient::getAggregateResourceComplianceByPack(const GetAggregateResourceComplianceByPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceComplianceByPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceComplianceByPackOutcome(GetAggregateResourceComplianceByPackResult(outcome.result()));
	else
		return GetAggregateResourceComplianceByPackOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceComplianceByPackAsync(const GetAggregateResourceComplianceByPackRequest& request, const GetAggregateResourceComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceComplianceByPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceComplianceByPackOutcomeCallable ConfigClient::getAggregateResourceComplianceByPackCallable(const GetAggregateResourceComplianceByPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceComplianceByPackOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceComplianceByPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceComplianceGroupByRegionOutcome ConfigClient::getAggregateResourceComplianceGroupByRegion(const GetAggregateResourceComplianceGroupByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceComplianceGroupByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceComplianceGroupByRegionOutcome(GetAggregateResourceComplianceGroupByRegionResult(outcome.result()));
	else
		return GetAggregateResourceComplianceGroupByRegionOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceComplianceGroupByRegionAsync(const GetAggregateResourceComplianceGroupByRegionRequest& request, const GetAggregateResourceComplianceGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceComplianceGroupByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceComplianceGroupByRegionOutcomeCallable ConfigClient::getAggregateResourceComplianceGroupByRegionCallable(const GetAggregateResourceComplianceGroupByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceComplianceGroupByRegionOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceComplianceGroupByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceComplianceGroupByResourceTypeOutcome ConfigClient::getAggregateResourceComplianceGroupByResourceType(const GetAggregateResourceComplianceGroupByResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceComplianceGroupByResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceComplianceGroupByResourceTypeOutcome(GetAggregateResourceComplianceGroupByResourceTypeResult(outcome.result()));
	else
		return GetAggregateResourceComplianceGroupByResourceTypeOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceComplianceGroupByResourceTypeAsync(const GetAggregateResourceComplianceGroupByResourceTypeRequest& request, const GetAggregateResourceComplianceGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceComplianceGroupByResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceComplianceGroupByResourceTypeOutcomeCallable ConfigClient::getAggregateResourceComplianceGroupByResourceTypeCallable(const GetAggregateResourceComplianceGroupByResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceComplianceGroupByResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceComplianceGroupByResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceComplianceTimelineOutcome ConfigClient::getAggregateResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceComplianceTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceComplianceTimelineOutcome(GetAggregateResourceComplianceTimelineResult(outcome.result()));
	else
		return GetAggregateResourceComplianceTimelineOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceComplianceTimelineAsync(const GetAggregateResourceComplianceTimelineRequest& request, const GetAggregateResourceComplianceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceComplianceTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceComplianceTimelineOutcomeCallable ConfigClient::getAggregateResourceComplianceTimelineCallable(const GetAggregateResourceComplianceTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceComplianceTimelineOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceComplianceTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceConfigurationTimelineOutcome ConfigClient::getAggregateResourceConfigurationTimeline(const GetAggregateResourceConfigurationTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceConfigurationTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceConfigurationTimelineOutcome(GetAggregateResourceConfigurationTimelineResult(outcome.result()));
	else
		return GetAggregateResourceConfigurationTimelineOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceConfigurationTimelineAsync(const GetAggregateResourceConfigurationTimelineRequest& request, const GetAggregateResourceConfigurationTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceConfigurationTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceConfigurationTimelineOutcomeCallable ConfigClient::getAggregateResourceConfigurationTimelineCallable(const GetAggregateResourceConfigurationTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceConfigurationTimelineOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceConfigurationTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceCountsGroupByRegionOutcome ConfigClient::getAggregateResourceCountsGroupByRegion(const GetAggregateResourceCountsGroupByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceCountsGroupByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceCountsGroupByRegionOutcome(GetAggregateResourceCountsGroupByRegionResult(outcome.result()));
	else
		return GetAggregateResourceCountsGroupByRegionOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceCountsGroupByRegionAsync(const GetAggregateResourceCountsGroupByRegionRequest& request, const GetAggregateResourceCountsGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceCountsGroupByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceCountsGroupByRegionOutcomeCallable ConfigClient::getAggregateResourceCountsGroupByRegionCallable(const GetAggregateResourceCountsGroupByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceCountsGroupByRegionOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceCountsGroupByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregateResourceCountsGroupByResourceTypeOutcome ConfigClient::getAggregateResourceCountsGroupByResourceType(const GetAggregateResourceCountsGroupByResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregateResourceCountsGroupByResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregateResourceCountsGroupByResourceTypeOutcome(GetAggregateResourceCountsGroupByResourceTypeResult(outcome.result()));
	else
		return GetAggregateResourceCountsGroupByResourceTypeOutcome(outcome.error());
}

void ConfigClient::getAggregateResourceCountsGroupByResourceTypeAsync(const GetAggregateResourceCountsGroupByResourceTypeRequest& request, const GetAggregateResourceCountsGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregateResourceCountsGroupByResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregateResourceCountsGroupByResourceTypeOutcomeCallable ConfigClient::getAggregateResourceCountsGroupByResourceTypeCallable(const GetAggregateResourceCountsGroupByResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregateResourceCountsGroupByResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->getAggregateResourceCountsGroupByResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetAggregatorOutcome ConfigClient::getAggregator(const GetAggregatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAggregatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAggregatorOutcome(GetAggregatorResult(outcome.result()));
	else
		return GetAggregatorOutcome(outcome.error());
}

void ConfigClient::getAggregatorAsync(const GetAggregatorRequest& request, const GetAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAggregator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetAggregatorOutcomeCallable ConfigClient::getAggregatorCallable(const GetAggregatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAggregatorOutcome()>>(
			[this, request]()
			{
			return this->getAggregator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetCompliancePackOutcome ConfigClient::getCompliancePack(const GetCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompliancePackOutcome(GetCompliancePackResult(outcome.result()));
	else
		return GetCompliancePackOutcome(outcome.error());
}

void ConfigClient::getCompliancePackAsync(const GetCompliancePackRequest& request, const GetCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetCompliancePackOutcomeCallable ConfigClient::getCompliancePackCallable(const GetCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->getCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetCompliancePackReportOutcome ConfigClient::getCompliancePackReport(const GetCompliancePackReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompliancePackReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompliancePackReportOutcome(GetCompliancePackReportResult(outcome.result()));
	else
		return GetCompliancePackReportOutcome(outcome.error());
}

void ConfigClient::getCompliancePackReportAsync(const GetCompliancePackReportRequest& request, const GetCompliancePackReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompliancePackReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetCompliancePackReportOutcomeCallable ConfigClient::getCompliancePackReportCallable(const GetCompliancePackReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompliancePackReportOutcome()>>(
			[this, request]()
			{
			return this->getCompliancePackReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetConfigDeliveryChannelOutcome ConfigClient::getConfigDeliveryChannel(const GetConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigDeliveryChannelOutcome(GetConfigDeliveryChannelResult(outcome.result()));
	else
		return GetConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::getConfigDeliveryChannelAsync(const GetConfigDeliveryChannelRequest& request, const GetConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetConfigDeliveryChannelOutcomeCallable ConfigClient::getConfigDeliveryChannelCallable(const GetConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->getConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetConfigRuleOutcome ConfigClient::getConfigRule(const GetConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigRuleOutcome(GetConfigRuleResult(outcome.result()));
	else
		return GetConfigRuleOutcome(outcome.error());
}

void ConfigClient::getConfigRuleAsync(const GetConfigRuleRequest& request, const GetConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetConfigRuleOutcomeCallable ConfigClient::getConfigRuleCallable(const GetConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->getConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetConfigRuleComplianceByPackOutcome ConfigClient::getConfigRuleComplianceByPack(const GetConfigRuleComplianceByPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigRuleComplianceByPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigRuleComplianceByPackOutcome(GetConfigRuleComplianceByPackResult(outcome.result()));
	else
		return GetConfigRuleComplianceByPackOutcome(outcome.error());
}

void ConfigClient::getConfigRuleComplianceByPackAsync(const GetConfigRuleComplianceByPackRequest& request, const GetConfigRuleComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigRuleComplianceByPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetConfigRuleComplianceByPackOutcomeCallable ConfigClient::getConfigRuleComplianceByPackCallable(const GetConfigRuleComplianceByPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigRuleComplianceByPackOutcome()>>(
			[this, request]()
			{
			return this->getConfigRuleComplianceByPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetConfigRuleSummaryByRiskLevelOutcome ConfigClient::getConfigRuleSummaryByRiskLevel(const GetConfigRuleSummaryByRiskLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigRuleSummaryByRiskLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigRuleSummaryByRiskLevelOutcome(GetConfigRuleSummaryByRiskLevelResult(outcome.result()));
	else
		return GetConfigRuleSummaryByRiskLevelOutcome(outcome.error());
}

void ConfigClient::getConfigRuleSummaryByRiskLevelAsync(const GetConfigRuleSummaryByRiskLevelRequest& request, const GetConfigRuleSummaryByRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigRuleSummaryByRiskLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetConfigRuleSummaryByRiskLevelOutcomeCallable ConfigClient::getConfigRuleSummaryByRiskLevelCallable(const GetConfigRuleSummaryByRiskLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigRuleSummaryByRiskLevelOutcome()>>(
			[this, request]()
			{
			return this->getConfigRuleSummaryByRiskLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetConfigRulesReportOutcome ConfigClient::getConfigRulesReport(const GetConfigRulesReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigRulesReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigRulesReportOutcome(GetConfigRulesReportResult(outcome.result()));
	else
		return GetConfigRulesReportOutcome(outcome.error());
}

void ConfigClient::getConfigRulesReportAsync(const GetConfigRulesReportRequest& request, const GetConfigRulesReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigRulesReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetConfigRulesReportOutcomeCallable ConfigClient::getConfigRulesReportCallable(const GetConfigRulesReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigRulesReportOutcome()>>(
			[this, request]()
			{
			return this->getConfigRulesReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetDiscoveredResourceOutcome ConfigClient::getDiscoveredResource(const GetDiscoveredResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiscoveredResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiscoveredResourceOutcome(GetDiscoveredResourceResult(outcome.result()));
	else
		return GetDiscoveredResourceOutcome(outcome.error());
}

void ConfigClient::getDiscoveredResourceAsync(const GetDiscoveredResourceRequest& request, const GetDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiscoveredResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetDiscoveredResourceOutcomeCallable ConfigClient::getDiscoveredResourceCallable(const GetDiscoveredResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiscoveredResourceOutcome()>>(
			[this, request]()
			{
			return this->getDiscoveredResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetDiscoveredResourceCountsGroupByRegionOutcome ConfigClient::getDiscoveredResourceCountsGroupByRegion(const GetDiscoveredResourceCountsGroupByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiscoveredResourceCountsGroupByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiscoveredResourceCountsGroupByRegionOutcome(GetDiscoveredResourceCountsGroupByRegionResult(outcome.result()));
	else
		return GetDiscoveredResourceCountsGroupByRegionOutcome(outcome.error());
}

void ConfigClient::getDiscoveredResourceCountsGroupByRegionAsync(const GetDiscoveredResourceCountsGroupByRegionRequest& request, const GetDiscoveredResourceCountsGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiscoveredResourceCountsGroupByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetDiscoveredResourceCountsGroupByRegionOutcomeCallable ConfigClient::getDiscoveredResourceCountsGroupByRegionCallable(const GetDiscoveredResourceCountsGroupByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiscoveredResourceCountsGroupByRegionOutcome()>>(
			[this, request]()
			{
			return this->getDiscoveredResourceCountsGroupByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetDiscoveredResourceCountsGroupByResourceTypeOutcome ConfigClient::getDiscoveredResourceCountsGroupByResourceType(const GetDiscoveredResourceCountsGroupByResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiscoveredResourceCountsGroupByResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiscoveredResourceCountsGroupByResourceTypeOutcome(GetDiscoveredResourceCountsGroupByResourceTypeResult(outcome.result()));
	else
		return GetDiscoveredResourceCountsGroupByResourceTypeOutcome(outcome.error());
}

void ConfigClient::getDiscoveredResourceCountsGroupByResourceTypeAsync(const GetDiscoveredResourceCountsGroupByResourceTypeRequest& request, const GetDiscoveredResourceCountsGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiscoveredResourceCountsGroupByResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetDiscoveredResourceCountsGroupByResourceTypeOutcomeCallable ConfigClient::getDiscoveredResourceCountsGroupByResourceTypeCallable(const GetDiscoveredResourceCountsGroupByResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiscoveredResourceCountsGroupByResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->getDiscoveredResourceCountsGroupByResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetManagedRuleOutcome ConfigClient::getManagedRule(const GetManagedRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetManagedRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetManagedRuleOutcome(GetManagedRuleResult(outcome.result()));
	else
		return GetManagedRuleOutcome(outcome.error());
}

void ConfigClient::getManagedRuleAsync(const GetManagedRuleRequest& request, const GetManagedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getManagedRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetManagedRuleOutcomeCallable ConfigClient::getManagedRuleCallable(const GetManagedRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetManagedRuleOutcome()>>(
			[this, request]()
			{
			return this->getManagedRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceComplianceByConfigRuleOutcome ConfigClient::getResourceComplianceByConfigRule(const GetResourceComplianceByConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceComplianceByConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceComplianceByConfigRuleOutcome(GetResourceComplianceByConfigRuleResult(outcome.result()));
	else
		return GetResourceComplianceByConfigRuleOutcome(outcome.error());
}

void ConfigClient::getResourceComplianceByConfigRuleAsync(const GetResourceComplianceByConfigRuleRequest& request, const GetResourceComplianceByConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceComplianceByConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceComplianceByConfigRuleOutcomeCallable ConfigClient::getResourceComplianceByConfigRuleCallable(const GetResourceComplianceByConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceComplianceByConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->getResourceComplianceByConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceComplianceByPackOutcome ConfigClient::getResourceComplianceByPack(const GetResourceComplianceByPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceComplianceByPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceComplianceByPackOutcome(GetResourceComplianceByPackResult(outcome.result()));
	else
		return GetResourceComplianceByPackOutcome(outcome.error());
}

void ConfigClient::getResourceComplianceByPackAsync(const GetResourceComplianceByPackRequest& request, const GetResourceComplianceByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceComplianceByPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceComplianceByPackOutcomeCallable ConfigClient::getResourceComplianceByPackCallable(const GetResourceComplianceByPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceComplianceByPackOutcome()>>(
			[this, request]()
			{
			return this->getResourceComplianceByPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceComplianceGroupByRegionOutcome ConfigClient::getResourceComplianceGroupByRegion(const GetResourceComplianceGroupByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceComplianceGroupByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceComplianceGroupByRegionOutcome(GetResourceComplianceGroupByRegionResult(outcome.result()));
	else
		return GetResourceComplianceGroupByRegionOutcome(outcome.error());
}

void ConfigClient::getResourceComplianceGroupByRegionAsync(const GetResourceComplianceGroupByRegionRequest& request, const GetResourceComplianceGroupByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceComplianceGroupByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceComplianceGroupByRegionOutcomeCallable ConfigClient::getResourceComplianceGroupByRegionCallable(const GetResourceComplianceGroupByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceComplianceGroupByRegionOutcome()>>(
			[this, request]()
			{
			return this->getResourceComplianceGroupByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceComplianceGroupByResourceTypeOutcome ConfigClient::getResourceComplianceGroupByResourceType(const GetResourceComplianceGroupByResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceComplianceGroupByResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceComplianceGroupByResourceTypeOutcome(GetResourceComplianceGroupByResourceTypeResult(outcome.result()));
	else
		return GetResourceComplianceGroupByResourceTypeOutcome(outcome.error());
}

void ConfigClient::getResourceComplianceGroupByResourceTypeAsync(const GetResourceComplianceGroupByResourceTypeRequest& request, const GetResourceComplianceGroupByResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceComplianceGroupByResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceComplianceGroupByResourceTypeOutcomeCallable ConfigClient::getResourceComplianceGroupByResourceTypeCallable(const GetResourceComplianceGroupByResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceComplianceGroupByResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->getResourceComplianceGroupByResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceComplianceTimelineOutcome ConfigClient::getResourceComplianceTimeline(const GetResourceComplianceTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceComplianceTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceComplianceTimelineOutcome(GetResourceComplianceTimelineResult(outcome.result()));
	else
		return GetResourceComplianceTimelineOutcome(outcome.error());
}

void ConfigClient::getResourceComplianceTimelineAsync(const GetResourceComplianceTimelineRequest& request, const GetResourceComplianceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceComplianceTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceComplianceTimelineOutcomeCallable ConfigClient::getResourceComplianceTimelineCallable(const GetResourceComplianceTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceComplianceTimelineOutcome()>>(
			[this, request]()
			{
			return this->getResourceComplianceTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::GetResourceConfigurationTimelineOutcome ConfigClient::getResourceConfigurationTimeline(const GetResourceConfigurationTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceConfigurationTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceConfigurationTimelineOutcome(GetResourceConfigurationTimelineResult(outcome.result()));
	else
		return GetResourceConfigurationTimelineOutcome(outcome.error());
}

void ConfigClient::getResourceConfigurationTimelineAsync(const GetResourceConfigurationTimelineRequest& request, const GetResourceConfigurationTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceConfigurationTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::GetResourceConfigurationTimelineOutcomeCallable ConfigClient::getResourceConfigurationTimelineCallable(const GetResourceConfigurationTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceConfigurationTimelineOutcome()>>(
			[this, request]()
			{
			return this->getResourceConfigurationTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::IgnoreAggregateEvaluationResultsOutcome ConfigClient::ignoreAggregateEvaluationResults(const IgnoreAggregateEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IgnoreAggregateEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IgnoreAggregateEvaluationResultsOutcome(IgnoreAggregateEvaluationResultsResult(outcome.result()));
	else
		return IgnoreAggregateEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::ignoreAggregateEvaluationResultsAsync(const IgnoreAggregateEvaluationResultsRequest& request, const IgnoreAggregateEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ignoreAggregateEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::IgnoreAggregateEvaluationResultsOutcomeCallable ConfigClient::ignoreAggregateEvaluationResultsCallable(const IgnoreAggregateEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IgnoreAggregateEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->ignoreAggregateEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::IgnoreEvaluationResultsOutcome ConfigClient::ignoreEvaluationResults(const IgnoreEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IgnoreEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IgnoreEvaluationResultsOutcome(IgnoreEvaluationResultsResult(outcome.result()));
	else
		return IgnoreEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::ignoreEvaluationResultsAsync(const IgnoreEvaluationResultsRequest& request, const IgnoreEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ignoreEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::IgnoreEvaluationResultsOutcomeCallable ConfigClient::ignoreEvaluationResultsCallable(const IgnoreEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IgnoreEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->ignoreEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateCompliancePacksOutcome ConfigClient::listAggregateCompliancePacks(const ListAggregateCompliancePacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateCompliancePacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateCompliancePacksOutcome(ListAggregateCompliancePacksResult(outcome.result()));
	else
		return ListAggregateCompliancePacksOutcome(outcome.error());
}

void ConfigClient::listAggregateCompliancePacksAsync(const ListAggregateCompliancePacksRequest& request, const ListAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateCompliancePacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateCompliancePacksOutcomeCallable ConfigClient::listAggregateCompliancePacksCallable(const ListAggregateCompliancePacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateCompliancePacksOutcome()>>(
			[this, request]()
			{
			return this->listAggregateCompliancePacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateConfigDeliveryChannelsOutcome ConfigClient::listAggregateConfigDeliveryChannels(const ListAggregateConfigDeliveryChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateConfigDeliveryChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateConfigDeliveryChannelsOutcome(ListAggregateConfigDeliveryChannelsResult(outcome.result()));
	else
		return ListAggregateConfigDeliveryChannelsOutcome(outcome.error());
}

void ConfigClient::listAggregateConfigDeliveryChannelsAsync(const ListAggregateConfigDeliveryChannelsRequest& request, const ListAggregateConfigDeliveryChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateConfigDeliveryChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateConfigDeliveryChannelsOutcomeCallable ConfigClient::listAggregateConfigDeliveryChannelsCallable(const ListAggregateConfigDeliveryChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateConfigDeliveryChannelsOutcome()>>(
			[this, request]()
			{
			return this->listAggregateConfigDeliveryChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateConfigRuleEvaluationResultsOutcome ConfigClient::listAggregateConfigRuleEvaluationResults(const ListAggregateConfigRuleEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateConfigRuleEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateConfigRuleEvaluationResultsOutcome(ListAggregateConfigRuleEvaluationResultsResult(outcome.result()));
	else
		return ListAggregateConfigRuleEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::listAggregateConfigRuleEvaluationResultsAsync(const ListAggregateConfigRuleEvaluationResultsRequest& request, const ListAggregateConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateConfigRuleEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateConfigRuleEvaluationResultsOutcomeCallable ConfigClient::listAggregateConfigRuleEvaluationResultsCallable(const ListAggregateConfigRuleEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateConfigRuleEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->listAggregateConfigRuleEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateConfigRulesOutcome ConfigClient::listAggregateConfigRules(const ListAggregateConfigRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateConfigRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateConfigRulesOutcome(ListAggregateConfigRulesResult(outcome.result()));
	else
		return ListAggregateConfigRulesOutcome(outcome.error());
}

void ConfigClient::listAggregateConfigRulesAsync(const ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateConfigRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateConfigRulesOutcomeCallable ConfigClient::listAggregateConfigRulesCallable(const ListAggregateConfigRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateConfigRulesOutcome()>>(
			[this, request]()
			{
			return this->listAggregateConfigRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateDiscoveredResourcesOutcome ConfigClient::listAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateDiscoveredResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateDiscoveredResourcesOutcome(ListAggregateDiscoveredResourcesResult(outcome.result()));
	else
		return ListAggregateDiscoveredResourcesOutcome(outcome.error());
}

void ConfigClient::listAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateDiscoveredResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateDiscoveredResourcesOutcomeCallable ConfigClient::listAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateDiscoveredResourcesOutcome()>>(
			[this, request]()
			{
			return this->listAggregateDiscoveredResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateRemediationsOutcome ConfigClient::listAggregateRemediations(const ListAggregateRemediationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateRemediationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateRemediationsOutcome(ListAggregateRemediationsResult(outcome.result()));
	else
		return ListAggregateRemediationsOutcome(outcome.error());
}

void ConfigClient::listAggregateRemediationsAsync(const ListAggregateRemediationsRequest& request, const ListAggregateRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateRemediations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateRemediationsOutcomeCallable ConfigClient::listAggregateRemediationsCallable(const ListAggregateRemediationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateRemediationsOutcome()>>(
			[this, request]()
			{
			return this->listAggregateRemediations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregateResourceEvaluationResultsOutcome ConfigClient::listAggregateResourceEvaluationResults(const ListAggregateResourceEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregateResourceEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregateResourceEvaluationResultsOutcome(ListAggregateResourceEvaluationResultsResult(outcome.result()));
	else
		return ListAggregateResourceEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::listAggregateResourceEvaluationResultsAsync(const ListAggregateResourceEvaluationResultsRequest& request, const ListAggregateResourceEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregateResourceEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregateResourceEvaluationResultsOutcomeCallable ConfigClient::listAggregateResourceEvaluationResultsCallable(const ListAggregateResourceEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregateResourceEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->listAggregateResourceEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListAggregatorsOutcome ConfigClient::listAggregators(const ListAggregatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAggregatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAggregatorsOutcome(ListAggregatorsResult(outcome.result()));
	else
		return ListAggregatorsOutcome(outcome.error());
}

void ConfigClient::listAggregatorsAsync(const ListAggregatorsRequest& request, const ListAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAggregators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListAggregatorsOutcomeCallable ConfigClient::listAggregatorsCallable(const ListAggregatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAggregatorsOutcome()>>(
			[this, request]()
			{
			return this->listAggregators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListCompliancePackTemplatesOutcome ConfigClient::listCompliancePackTemplates(const ListCompliancePackTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompliancePackTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompliancePackTemplatesOutcome(ListCompliancePackTemplatesResult(outcome.result()));
	else
		return ListCompliancePackTemplatesOutcome(outcome.error());
}

void ConfigClient::listCompliancePackTemplatesAsync(const ListCompliancePackTemplatesRequest& request, const ListCompliancePackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompliancePackTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListCompliancePackTemplatesOutcomeCallable ConfigClient::listCompliancePackTemplatesCallable(const ListCompliancePackTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompliancePackTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listCompliancePackTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListCompliancePacksOutcome ConfigClient::listCompliancePacks(const ListCompliancePacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompliancePacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompliancePacksOutcome(ListCompliancePacksResult(outcome.result()));
	else
		return ListCompliancePacksOutcome(outcome.error());
}

void ConfigClient::listCompliancePacksAsync(const ListCompliancePacksRequest& request, const ListCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompliancePacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListCompliancePacksOutcomeCallable ConfigClient::listCompliancePacksCallable(const ListCompliancePacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompliancePacksOutcome()>>(
			[this, request]()
			{
			return this->listCompliancePacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListConfigDeliveryChannelsOutcome ConfigClient::listConfigDeliveryChannels(const ListConfigDeliveryChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigDeliveryChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigDeliveryChannelsOutcome(ListConfigDeliveryChannelsResult(outcome.result()));
	else
		return ListConfigDeliveryChannelsOutcome(outcome.error());
}

void ConfigClient::listConfigDeliveryChannelsAsync(const ListConfigDeliveryChannelsRequest& request, const ListConfigDeliveryChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigDeliveryChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListConfigDeliveryChannelsOutcomeCallable ConfigClient::listConfigDeliveryChannelsCallable(const ListConfigDeliveryChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigDeliveryChannelsOutcome()>>(
			[this, request]()
			{
			return this->listConfigDeliveryChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListConfigRuleEvaluationResultsOutcome ConfigClient::listConfigRuleEvaluationResults(const ListConfigRuleEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigRuleEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigRuleEvaluationResultsOutcome(ListConfigRuleEvaluationResultsResult(outcome.result()));
	else
		return ListConfigRuleEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::listConfigRuleEvaluationResultsAsync(const ListConfigRuleEvaluationResultsRequest& request, const ListConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigRuleEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListConfigRuleEvaluationResultsOutcomeCallable ConfigClient::listConfigRuleEvaluationResultsCallable(const ListConfigRuleEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigRuleEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->listConfigRuleEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListDiscoveredResourcesOutcome ConfigClient::listDiscoveredResources(const ListDiscoveredResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiscoveredResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiscoveredResourcesOutcome(ListDiscoveredResourcesResult(outcome.result()));
	else
		return ListDiscoveredResourcesOutcome(outcome.error());
}

void ConfigClient::listDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiscoveredResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListDiscoveredResourcesOutcomeCallable ConfigClient::listDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiscoveredResourcesOutcome()>>(
			[this, request]()
			{
			return this->listDiscoveredResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListManagedRulesOutcome ConfigClient::listManagedRules(const ListManagedRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListManagedRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListManagedRulesOutcome(ListManagedRulesResult(outcome.result()));
	else
		return ListManagedRulesOutcome(outcome.error());
}

void ConfigClient::listManagedRulesAsync(const ListManagedRulesRequest& request, const ListManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listManagedRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListManagedRulesOutcomeCallable ConfigClient::listManagedRulesCallable(const ListManagedRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListManagedRulesOutcome()>>(
			[this, request]()
			{
			return this->listManagedRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListRemediationTemplatesOutcome ConfigClient::listRemediationTemplates(const ListRemediationTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRemediationTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRemediationTemplatesOutcome(ListRemediationTemplatesResult(outcome.result()));
	else
		return ListRemediationTemplatesOutcome(outcome.error());
}

void ConfigClient::listRemediationTemplatesAsync(const ListRemediationTemplatesRequest& request, const ListRemediationTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRemediationTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListRemediationTemplatesOutcomeCallable ConfigClient::listRemediationTemplatesCallable(const ListRemediationTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRemediationTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listRemediationTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListRemediationsOutcome ConfigClient::listRemediations(const ListRemediationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRemediationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRemediationsOutcome(ListRemediationsResult(outcome.result()));
	else
		return ListRemediationsOutcome(outcome.error());
}

void ConfigClient::listRemediationsAsync(const ListRemediationsRequest& request, const ListRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRemediations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListRemediationsOutcomeCallable ConfigClient::listRemediationsCallable(const ListRemediationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRemediationsOutcome()>>(
			[this, request]()
			{
			return this->listRemediations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListResourceEvaluationResultsOutcome ConfigClient::listResourceEvaluationResults(const ListResourceEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceEvaluationResultsOutcome(ListResourceEvaluationResultsResult(outcome.result()));
	else
		return ListResourceEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::listResourceEvaluationResultsAsync(const ListResourceEvaluationResultsRequest& request, const ListResourceEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListResourceEvaluationResultsOutcomeCallable ConfigClient::listResourceEvaluationResultsCallable(const ListResourceEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->listResourceEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::ListTagResourcesOutcome ConfigClient::listTagResources(const ListTagResourcesRequest &request) const
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

void ConfigClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::ListTagResourcesOutcomeCallable ConfigClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::RevertAggregateEvaluationResultsOutcome ConfigClient::revertAggregateEvaluationResults(const RevertAggregateEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevertAggregateEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevertAggregateEvaluationResultsOutcome(RevertAggregateEvaluationResultsResult(outcome.result()));
	else
		return RevertAggregateEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::revertAggregateEvaluationResultsAsync(const RevertAggregateEvaluationResultsRequest& request, const RevertAggregateEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revertAggregateEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::RevertAggregateEvaluationResultsOutcomeCallable ConfigClient::revertAggregateEvaluationResultsCallable(const RevertAggregateEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevertAggregateEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->revertAggregateEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::RevertEvaluationResultsOutcome ConfigClient::revertEvaluationResults(const RevertEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevertEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevertEvaluationResultsOutcome(RevertEvaluationResultsResult(outcome.result()));
	else
		return RevertEvaluationResultsOutcome(outcome.error());
}

void ConfigClient::revertEvaluationResultsAsync(const RevertEvaluationResultsRequest& request, const RevertEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revertEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::RevertEvaluationResultsOutcomeCallable ConfigClient::revertEvaluationResultsCallable(const RevertEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevertEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->revertEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::StartAggregateConfigRuleEvaluationOutcome ConfigClient::startAggregateConfigRuleEvaluation(const StartAggregateConfigRuleEvaluationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartAggregateConfigRuleEvaluationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartAggregateConfigRuleEvaluationOutcome(StartAggregateConfigRuleEvaluationResult(outcome.result()));
	else
		return StartAggregateConfigRuleEvaluationOutcome(outcome.error());
}

void ConfigClient::startAggregateConfigRuleEvaluationAsync(const StartAggregateConfigRuleEvaluationRequest& request, const StartAggregateConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startAggregateConfigRuleEvaluation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::StartAggregateConfigRuleEvaluationOutcomeCallable ConfigClient::startAggregateConfigRuleEvaluationCallable(const StartAggregateConfigRuleEvaluationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartAggregateConfigRuleEvaluationOutcome()>>(
			[this, request]()
			{
			return this->startAggregateConfigRuleEvaluation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::StartAggregateRemediationOutcome ConfigClient::startAggregateRemediation(const StartAggregateRemediationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartAggregateRemediationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartAggregateRemediationOutcome(StartAggregateRemediationResult(outcome.result()));
	else
		return StartAggregateRemediationOutcome(outcome.error());
}

void ConfigClient::startAggregateRemediationAsync(const StartAggregateRemediationRequest& request, const StartAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startAggregateRemediation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::StartAggregateRemediationOutcomeCallable ConfigClient::startAggregateRemediationCallable(const StartAggregateRemediationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartAggregateRemediationOutcome()>>(
			[this, request]()
			{
			return this->startAggregateRemediation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::StartRemediationOutcome ConfigClient::startRemediation(const StartRemediationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRemediationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRemediationOutcome(StartRemediationResult(outcome.result()));
	else
		return StartRemediationOutcome(outcome.error());
}

void ConfigClient::startRemediationAsync(const StartRemediationRequest& request, const StartRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRemediation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::StartRemediationOutcomeCallable ConfigClient::startRemediationCallable(const StartRemediationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRemediationOutcome()>>(
			[this, request]()
			{
			return this->startRemediation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::TagResourcesOutcome ConfigClient::tagResources(const TagResourcesRequest &request) const
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

void ConfigClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::TagResourcesOutcomeCallable ConfigClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UntagResourcesOutcome ConfigClient::untagResources(const UntagResourcesRequest &request) const
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

void ConfigClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UntagResourcesOutcomeCallable ConfigClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateAggregateCompliancePackOutcome ConfigClient::updateAggregateCompliancePack(const UpdateAggregateCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAggregateCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAggregateCompliancePackOutcome(UpdateAggregateCompliancePackResult(outcome.result()));
	else
		return UpdateAggregateCompliancePackOutcome(outcome.error());
}

void ConfigClient::updateAggregateCompliancePackAsync(const UpdateAggregateCompliancePackRequest& request, const UpdateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAggregateCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateAggregateCompliancePackOutcomeCallable ConfigClient::updateAggregateCompliancePackCallable(const UpdateAggregateCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAggregateCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->updateAggregateCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateAggregateConfigDeliveryChannelOutcome ConfigClient::updateAggregateConfigDeliveryChannel(const UpdateAggregateConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAggregateConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAggregateConfigDeliveryChannelOutcome(UpdateAggregateConfigDeliveryChannelResult(outcome.result()));
	else
		return UpdateAggregateConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::updateAggregateConfigDeliveryChannelAsync(const UpdateAggregateConfigDeliveryChannelRequest& request, const UpdateAggregateConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAggregateConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateAggregateConfigDeliveryChannelOutcomeCallable ConfigClient::updateAggregateConfigDeliveryChannelCallable(const UpdateAggregateConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAggregateConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->updateAggregateConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateAggregateConfigRuleOutcome ConfigClient::updateAggregateConfigRule(const UpdateAggregateConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAggregateConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAggregateConfigRuleOutcome(UpdateAggregateConfigRuleResult(outcome.result()));
	else
		return UpdateAggregateConfigRuleOutcome(outcome.error());
}

void ConfigClient::updateAggregateConfigRuleAsync(const UpdateAggregateConfigRuleRequest& request, const UpdateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAggregateConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateAggregateConfigRuleOutcomeCallable ConfigClient::updateAggregateConfigRuleCallable(const UpdateAggregateConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAggregateConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAggregateConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateAggregateRemediationOutcome ConfigClient::updateAggregateRemediation(const UpdateAggregateRemediationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAggregateRemediationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAggregateRemediationOutcome(UpdateAggregateRemediationResult(outcome.result()));
	else
		return UpdateAggregateRemediationOutcome(outcome.error());
}

void ConfigClient::updateAggregateRemediationAsync(const UpdateAggregateRemediationRequest& request, const UpdateAggregateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAggregateRemediation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateAggregateRemediationOutcomeCallable ConfigClient::updateAggregateRemediationCallable(const UpdateAggregateRemediationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAggregateRemediationOutcome()>>(
			[this, request]()
			{
			return this->updateAggregateRemediation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateAggregatorOutcome ConfigClient::updateAggregator(const UpdateAggregatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAggregatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAggregatorOutcome(UpdateAggregatorResult(outcome.result()));
	else
		return UpdateAggregatorOutcome(outcome.error());
}

void ConfigClient::updateAggregatorAsync(const UpdateAggregatorRequest& request, const UpdateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAggregator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateAggregatorOutcomeCallable ConfigClient::updateAggregatorCallable(const UpdateAggregatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAggregatorOutcome()>>(
			[this, request]()
			{
			return this->updateAggregator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateCompliancePackOutcome ConfigClient::updateCompliancePack(const UpdateCompliancePackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCompliancePackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCompliancePackOutcome(UpdateCompliancePackResult(outcome.result()));
	else
		return UpdateCompliancePackOutcome(outcome.error());
}

void ConfigClient::updateCompliancePackAsync(const UpdateCompliancePackRequest& request, const UpdateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCompliancePack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateCompliancePackOutcomeCallable ConfigClient::updateCompliancePackCallable(const UpdateCompliancePackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCompliancePackOutcome()>>(
			[this, request]()
			{
			return this->updateCompliancePack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateConfigDeliveryChannelOutcome ConfigClient::updateConfigDeliveryChannel(const UpdateConfigDeliveryChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigDeliveryChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigDeliveryChannelOutcome(UpdateConfigDeliveryChannelResult(outcome.result()));
	else
		return UpdateConfigDeliveryChannelOutcome(outcome.error());
}

void ConfigClient::updateConfigDeliveryChannelAsync(const UpdateConfigDeliveryChannelRequest& request, const UpdateConfigDeliveryChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfigDeliveryChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateConfigDeliveryChannelOutcomeCallable ConfigClient::updateConfigDeliveryChannelCallable(const UpdateConfigDeliveryChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigDeliveryChannelOutcome()>>(
			[this, request]()
			{
			return this->updateConfigDeliveryChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ConfigClient::UpdateConfigRuleOutcome ConfigClient::updateConfigRule(const UpdateConfigRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigRuleOutcome(UpdateConfigRuleResult(outcome.result()));
	else
		return UpdateConfigRuleOutcome(outcome.error());
}

void ConfigClient::updateConfigRuleAsync(const UpdateConfigRuleRequest& request, const UpdateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfigRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ConfigClient::UpdateConfigRuleOutcomeCallable ConfigClient::updateConfigRuleCallable(const UpdateConfigRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigRuleOutcome()>>(
			[this, request]()
			{
			return this->updateConfigRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

