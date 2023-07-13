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

#include <alibabacloud/mse/MseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

namespace
{
	const std::string SERVICE_NAME = "mse";
}

MseClient::MseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mse");
}

MseClient::MseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mse");
}

MseClient::MseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mse");
}

MseClient::~MseClient()
{}

MseClient::AddAuthPolicyOutcome MseClient::addAuthPolicy(const AddAuthPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAuthPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAuthPolicyOutcome(AddAuthPolicyResult(outcome.result()));
	else
		return AddAuthPolicyOutcome(outcome.error());
}

void MseClient::addAuthPolicyAsync(const AddAuthPolicyRequest& request, const AddAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAuthPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddAuthPolicyOutcomeCallable MseClient::addAuthPolicyCallable(const AddAuthPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAuthPolicyOutcome()>>(
			[this, request]()
			{
			return this->addAuthPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddAuthResourceOutcome MseClient::addAuthResource(const AddAuthResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAuthResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAuthResourceOutcome(AddAuthResourceResult(outcome.result()));
	else
		return AddAuthResourceOutcome(outcome.error());
}

void MseClient::addAuthResourceAsync(const AddAuthResourceRequest& request, const AddAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAuthResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddAuthResourceOutcomeCallable MseClient::addAuthResourceCallable(const AddAuthResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAuthResourceOutcome()>>(
			[this, request]()
			{
			return this->addAuthResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddBlackWhiteListOutcome MseClient::addBlackWhiteList(const AddBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBlackWhiteListOutcome(AddBlackWhiteListResult(outcome.result()));
	else
		return AddBlackWhiteListOutcome(outcome.error());
}

void MseClient::addBlackWhiteListAsync(const AddBlackWhiteListRequest& request, const AddBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddBlackWhiteListOutcomeCallable MseClient::addBlackWhiteListCallable(const AddBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayOutcome MseClient::addGateway(const AddGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayOutcome(AddGatewayResult(outcome.result()));
	else
		return AddGatewayOutcome(outcome.error());
}

void MseClient::addGatewayAsync(const AddGatewayRequest& request, const AddGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayOutcomeCallable MseClient::addGatewayCallable(const AddGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayOutcome()>>(
			[this, request]()
			{
			return this->addGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayAuthConsumerOutcome MseClient::addGatewayAuthConsumer(const AddGatewayAuthConsumerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayAuthConsumerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayAuthConsumerOutcome(AddGatewayAuthConsumerResult(outcome.result()));
	else
		return AddGatewayAuthConsumerOutcome(outcome.error());
}

void MseClient::addGatewayAuthConsumerAsync(const AddGatewayAuthConsumerRequest& request, const AddGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayAuthConsumer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayAuthConsumerOutcomeCallable MseClient::addGatewayAuthConsumerCallable(const AddGatewayAuthConsumerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayAuthConsumerOutcome()>>(
			[this, request]()
			{
			return this->addGatewayAuthConsumer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayDomainOutcome MseClient::addGatewayDomain(const AddGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayDomainOutcome(AddGatewayDomainResult(outcome.result()));
	else
		return AddGatewayDomainOutcome(outcome.error());
}

void MseClient::addGatewayDomainAsync(const AddGatewayDomainRequest& request, const AddGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayDomainOutcomeCallable MseClient::addGatewayDomainCallable(const AddGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->addGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayRouteOutcome MseClient::addGatewayRoute(const AddGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayRouteOutcome(AddGatewayRouteResult(outcome.result()));
	else
		return AddGatewayRouteOutcome(outcome.error());
}

void MseClient::addGatewayRouteAsync(const AddGatewayRouteRequest& request, const AddGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayRouteOutcomeCallable MseClient::addGatewayRouteCallable(const AddGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->addGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayServiceVersionOutcome MseClient::addGatewayServiceVersion(const AddGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayServiceVersionOutcome(AddGatewayServiceVersionResult(outcome.result()));
	else
		return AddGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::addGatewayServiceVersionAsync(const AddGatewayServiceVersionRequest& request, const AddGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayServiceVersionOutcomeCallable MseClient::addGatewayServiceVersionCallable(const AddGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->addGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewaySlbOutcome MseClient::addGatewaySlb(const AddGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewaySlbOutcome(AddGatewaySlbResult(outcome.result()));
	else
		return AddGatewaySlbOutcome(outcome.error());
}

void MseClient::addGatewaySlbAsync(const AddGatewaySlbRequest& request, const AddGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewaySlbOutcomeCallable MseClient::addGatewaySlbCallable(const AddGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->addGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddMigrationTaskOutcome MseClient::addMigrationTask(const AddMigrationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMigrationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMigrationTaskOutcome(AddMigrationTaskResult(outcome.result()));
	else
		return AddMigrationTaskOutcome(outcome.error());
}

void MseClient::addMigrationTaskAsync(const AddMigrationTaskRequest& request, const AddMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMigrationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddMigrationTaskOutcomeCallable MseClient::addMigrationTaskCallable(const AddMigrationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMigrationTaskOutcome()>>(
			[this, request]()
			{
			return this->addMigrationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddMockRuleOutcome MseClient::addMockRule(const AddMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMockRuleOutcome(AddMockRuleResult(outcome.result()));
	else
		return AddMockRuleOutcome(outcome.error());
}

void MseClient::addMockRuleAsync(const AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddMockRuleOutcomeCallable MseClient::addMockRuleCallable(const AddMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMockRuleOutcome()>>(
			[this, request]()
			{
			return this->addMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddSSLCertOutcome MseClient::addSSLCert(const AddSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSSLCertOutcome(AddSSLCertResult(outcome.result()));
	else
		return AddSSLCertOutcome(outcome.error());
}

void MseClient::addSSLCertAsync(const AddSSLCertRequest& request, const AddSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddSSLCertOutcomeCallable MseClient::addSSLCertCallable(const AddSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSSLCertOutcome()>>(
			[this, request]()
			{
			return this->addSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddSecurityGroupRuleOutcome MseClient::addSecurityGroupRule(const AddSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSecurityGroupRuleOutcome(AddSecurityGroupRuleResult(outcome.result()));
	else
		return AddSecurityGroupRuleOutcome(outcome.error());
}

void MseClient::addSecurityGroupRuleAsync(const AddSecurityGroupRuleRequest& request, const AddSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddSecurityGroupRuleOutcomeCallable MseClient::addSecurityGroupRuleCallable(const AddSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->addSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddServiceSourceOutcome MseClient::addServiceSource(const AddServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServiceSourceOutcome(AddServiceSourceResult(outcome.result()));
	else
		return AddServiceSourceOutcome(outcome.error());
}

void MseClient::addServiceSourceAsync(const AddServiceSourceRequest& request, const AddServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddServiceSourceOutcomeCallable MseClient::addServiceSourceCallable(const AddServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->addServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ApplyGatewayRouteOutcome MseClient::applyGatewayRoute(const ApplyGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyGatewayRouteOutcome(ApplyGatewayRouteResult(outcome.result()));
	else
		return ApplyGatewayRouteOutcome(outcome.error());
}

void MseClient::applyGatewayRouteAsync(const ApplyGatewayRouteRequest& request, const ApplyGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ApplyGatewayRouteOutcomeCallable MseClient::applyGatewayRouteCallable(const ApplyGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->applyGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ApplyTagPoliciesOutcome MseClient::applyTagPolicies(const ApplyTagPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyTagPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyTagPoliciesOutcome(ApplyTagPoliciesResult(outcome.result()));
	else
		return ApplyTagPoliciesOutcome(outcome.error());
}

void MseClient::applyTagPoliciesAsync(const ApplyTagPoliciesRequest& request, const ApplyTagPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyTagPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ApplyTagPoliciesOutcomeCallable MseClient::applyTagPoliciesCallable(const ApplyTagPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyTagPoliciesOutcome()>>(
			[this, request]()
			{
			return this->applyTagPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CloneNacosConfigOutcome MseClient::cloneNacosConfig(const CloneNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneNacosConfigOutcome(CloneNacosConfigResult(outcome.result()));
	else
		return CloneNacosConfigOutcome(outcome.error());
}

void MseClient::cloneNacosConfigAsync(const CloneNacosConfigRequest& request, const CloneNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CloneNacosConfigOutcomeCallable MseClient::cloneNacosConfigCallable(const CloneNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->cloneNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateApplicationOutcome MseClient::createApplication(const CreateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationOutcome(CreateApplicationResult(outcome.result()));
	else
		return CreateApplicationOutcome(outcome.error());
}

void MseClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateApplicationOutcomeCallable MseClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateCircuitBreakerRuleOutcome MseClient::createCircuitBreakerRule(const CreateCircuitBreakerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCircuitBreakerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCircuitBreakerRuleOutcome(CreateCircuitBreakerRuleResult(outcome.result()));
	else
		return CreateCircuitBreakerRuleOutcome(outcome.error());
}

void MseClient::createCircuitBreakerRuleAsync(const CreateCircuitBreakerRuleRequest& request, const CreateCircuitBreakerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCircuitBreakerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateCircuitBreakerRuleOutcomeCallable MseClient::createCircuitBreakerRuleCallable(const CreateCircuitBreakerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCircuitBreakerRuleOutcome()>>(
			[this, request]()
			{
			return this->createCircuitBreakerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateClusterOutcome MseClient::createCluster(const CreateClusterRequest &request) const
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

void MseClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateClusterOutcomeCallable MseClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateEngineNamespaceOutcome MseClient::createEngineNamespace(const CreateEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEngineNamespaceOutcome(CreateEngineNamespaceResult(outcome.result()));
	else
		return CreateEngineNamespaceOutcome(outcome.error());
}

void MseClient::createEngineNamespaceAsync(const CreateEngineNamespaceRequest& request, const CreateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateEngineNamespaceOutcomeCallable MseClient::createEngineNamespaceCallable(const CreateEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateFlowRuleOutcome MseClient::createFlowRule(const CreateFlowRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowRuleOutcome(CreateFlowRuleResult(outcome.result()));
	else
		return CreateFlowRuleOutcome(outcome.error());
}

void MseClient::createFlowRuleAsync(const CreateFlowRuleRequest& request, const CreateFlowRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateFlowRuleOutcomeCallable MseClient::createFlowRuleCallable(const CreateFlowRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowRuleOutcome()>>(
			[this, request]()
			{
			return this->createFlowRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateMseServiceApplicationOutcome MseClient::createMseServiceApplication(const CreateMseServiceApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMseServiceApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMseServiceApplicationOutcome(CreateMseServiceApplicationResult(outcome.result()));
	else
		return CreateMseServiceApplicationOutcome(outcome.error());
}

void MseClient::createMseServiceApplicationAsync(const CreateMseServiceApplicationRequest& request, const CreateMseServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMseServiceApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateMseServiceApplicationOutcomeCallable MseClient::createMseServiceApplicationCallable(const CreateMseServiceApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMseServiceApplicationOutcome()>>(
			[this, request]()
			{
			return this->createMseServiceApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosConfigOutcome MseClient::createNacosConfig(const CreateNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosConfigOutcome(CreateNacosConfigResult(outcome.result()));
	else
		return CreateNacosConfigOutcome(outcome.error());
}

void MseClient::createNacosConfigAsync(const CreateNacosConfigRequest& request, const CreateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosConfigOutcomeCallable MseClient::createNacosConfigCallable(const CreateNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->createNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosInstanceOutcome MseClient::createNacosInstance(const CreateNacosInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosInstanceOutcome(CreateNacosInstanceResult(outcome.result()));
	else
		return CreateNacosInstanceOutcome(outcome.error());
}

void MseClient::createNacosInstanceAsync(const CreateNacosInstanceRequest& request, const CreateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosInstanceOutcomeCallable MseClient::createNacosInstanceCallable(const CreateNacosInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosInstanceOutcome()>>(
			[this, request]()
			{
			return this->createNacosInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosServiceOutcome MseClient::createNacosService(const CreateNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosServiceOutcome(CreateNacosServiceResult(outcome.result()));
	else
		return CreateNacosServiceOutcome(outcome.error());
}

void MseClient::createNacosServiceAsync(const CreateNacosServiceRequest& request, const CreateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosServiceOutcomeCallable MseClient::createNacosServiceCallable(const CreateNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->createNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateOrUpdateSwimmingLaneOutcome MseClient::createOrUpdateSwimmingLane(const CreateOrUpdateSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateSwimmingLaneOutcome(CreateOrUpdateSwimmingLaneResult(outcome.result()));
	else
		return CreateOrUpdateSwimmingLaneOutcome(outcome.error());
}

void MseClient::createOrUpdateSwimmingLaneAsync(const CreateOrUpdateSwimmingLaneRequest& request, const CreateOrUpdateSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateOrUpdateSwimmingLaneOutcomeCallable MseClient::createOrUpdateSwimmingLaneCallable(const CreateOrUpdateSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateOrUpdateSwimmingLaneGroupOutcome MseClient::createOrUpdateSwimmingLaneGroup(const CreateOrUpdateSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateSwimmingLaneGroupOutcome(CreateOrUpdateSwimmingLaneGroupResult(outcome.result()));
	else
		return CreateOrUpdateSwimmingLaneGroupOutcome(outcome.error());
}

void MseClient::createOrUpdateSwimmingLaneGroupAsync(const CreateOrUpdateSwimmingLaneGroupRequest& request, const CreateOrUpdateSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateOrUpdateSwimmingLaneGroupOutcomeCallable MseClient::createOrUpdateSwimmingLaneGroupCallable(const CreateOrUpdateSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateZnodeOutcome MseClient::createZnode(const CreateZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateZnodeOutcome(CreateZnodeResult(outcome.result()));
	else
		return CreateZnodeOutcome(outcome.error());
}

void MseClient::createZnodeAsync(const CreateZnodeRequest& request, const CreateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateZnodeOutcomeCallable MseClient::createZnodeCallable(const CreateZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateZnodeOutcome()>>(
			[this, request]()
			{
			return this->createZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteAuthResourceOutcome MseClient::deleteAuthResource(const DeleteAuthResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAuthResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAuthResourceOutcome(DeleteAuthResourceResult(outcome.result()));
	else
		return DeleteAuthResourceOutcome(outcome.error());
}

void MseClient::deleteAuthResourceAsync(const DeleteAuthResourceRequest& request, const DeleteAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAuthResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteAuthResourceOutcomeCallable MseClient::deleteAuthResourceCallable(const DeleteAuthResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAuthResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteAuthResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteCircuitBreakerRulesOutcome MseClient::deleteCircuitBreakerRules(const DeleteCircuitBreakerRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCircuitBreakerRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCircuitBreakerRulesOutcome(DeleteCircuitBreakerRulesResult(outcome.result()));
	else
		return DeleteCircuitBreakerRulesOutcome(outcome.error());
}

void MseClient::deleteCircuitBreakerRulesAsync(const DeleteCircuitBreakerRulesRequest& request, const DeleteCircuitBreakerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCircuitBreakerRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteCircuitBreakerRulesOutcomeCallable MseClient::deleteCircuitBreakerRulesCallable(const DeleteCircuitBreakerRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCircuitBreakerRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteCircuitBreakerRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteClusterOutcome MseClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void MseClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteClusterOutcomeCallable MseClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteEngineNamespaceOutcome MseClient::deleteEngineNamespace(const DeleteEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEngineNamespaceOutcome(DeleteEngineNamespaceResult(outcome.result()));
	else
		return DeleteEngineNamespaceOutcome(outcome.error());
}

void MseClient::deleteEngineNamespaceAsync(const DeleteEngineNamespaceRequest& request, const DeleteEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteEngineNamespaceOutcomeCallable MseClient::deleteEngineNamespaceCallable(const DeleteEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteFlowRulesOutcome MseClient::deleteFlowRules(const DeleteFlowRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowRulesOutcome(DeleteFlowRulesResult(outcome.result()));
	else
		return DeleteFlowRulesOutcome(outcome.error());
}

void MseClient::deleteFlowRulesAsync(const DeleteFlowRulesRequest& request, const DeleteFlowRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteFlowRulesOutcomeCallable MseClient::deleteFlowRulesCallable(const DeleteFlowRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayOutcome MseClient::deleteGateway(const DeleteGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayOutcome(DeleteGatewayResult(outcome.result()));
	else
		return DeleteGatewayOutcome(outcome.error());
}

void MseClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayOutcomeCallable MseClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayAuthConsumerOutcome MseClient::deleteGatewayAuthConsumer(const DeleteGatewayAuthConsumerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayAuthConsumerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayAuthConsumerOutcome(DeleteGatewayAuthConsumerResult(outcome.result()));
	else
		return DeleteGatewayAuthConsumerOutcome(outcome.error());
}

void MseClient::deleteGatewayAuthConsumerAsync(const DeleteGatewayAuthConsumerRequest& request, const DeleteGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayAuthConsumer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayAuthConsumerOutcomeCallable MseClient::deleteGatewayAuthConsumerCallable(const DeleteGatewayAuthConsumerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayAuthConsumerOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayAuthConsumer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayAuthConsumerResourceOutcome MseClient::deleteGatewayAuthConsumerResource(const DeleteGatewayAuthConsumerResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayAuthConsumerResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayAuthConsumerResourceOutcome(DeleteGatewayAuthConsumerResourceResult(outcome.result()));
	else
		return DeleteGatewayAuthConsumerResourceOutcome(outcome.error());
}

void MseClient::deleteGatewayAuthConsumerResourceAsync(const DeleteGatewayAuthConsumerResourceRequest& request, const DeleteGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayAuthConsumerResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayAuthConsumerResourceOutcomeCallable MseClient::deleteGatewayAuthConsumerResourceCallable(const DeleteGatewayAuthConsumerResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayAuthConsumerResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayAuthConsumerResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayDomainOutcome MseClient::deleteGatewayDomain(const DeleteGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayDomainOutcome(DeleteGatewayDomainResult(outcome.result()));
	else
		return DeleteGatewayDomainOutcome(outcome.error());
}

void MseClient::deleteGatewayDomainAsync(const DeleteGatewayDomainRequest& request, const DeleteGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayDomainOutcomeCallable MseClient::deleteGatewayDomainCallable(const DeleteGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayRouteOutcome MseClient::deleteGatewayRoute(const DeleteGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayRouteOutcome(DeleteGatewayRouteResult(outcome.result()));
	else
		return DeleteGatewayRouteOutcome(outcome.error());
}

void MseClient::deleteGatewayRouteAsync(const DeleteGatewayRouteRequest& request, const DeleteGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayRouteOutcomeCallable MseClient::deleteGatewayRouteCallable(const DeleteGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayServiceOutcome MseClient::deleteGatewayService(const DeleteGatewayServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayServiceOutcome(DeleteGatewayServiceResult(outcome.result()));
	else
		return DeleteGatewayServiceOutcome(outcome.error());
}

void MseClient::deleteGatewayServiceAsync(const DeleteGatewayServiceRequest& request, const DeleteGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayServiceOutcomeCallable MseClient::deleteGatewayServiceCallable(const DeleteGatewayServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayServiceVersionOutcome MseClient::deleteGatewayServiceVersion(const DeleteGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayServiceVersionOutcome(DeleteGatewayServiceVersionResult(outcome.result()));
	else
		return DeleteGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::deleteGatewayServiceVersionAsync(const DeleteGatewayServiceVersionRequest& request, const DeleteGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayServiceVersionOutcomeCallable MseClient::deleteGatewayServiceVersionCallable(const DeleteGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewaySlbOutcome MseClient::deleteGatewaySlb(const DeleteGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewaySlbOutcome(DeleteGatewaySlbResult(outcome.result()));
	else
		return DeleteGatewaySlbOutcome(outcome.error());
}

void MseClient::deleteGatewaySlbAsync(const DeleteGatewaySlbRequest& request, const DeleteGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewaySlbOutcomeCallable MseClient::deleteGatewaySlbCallable(const DeleteGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteMigrationTaskOutcome MseClient::deleteMigrationTask(const DeleteMigrationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMigrationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMigrationTaskOutcome(DeleteMigrationTaskResult(outcome.result()));
	else
		return DeleteMigrationTaskOutcome(outcome.error());
}

void MseClient::deleteMigrationTaskAsync(const DeleteMigrationTaskRequest& request, const DeleteMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMigrationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteMigrationTaskOutcomeCallable MseClient::deleteMigrationTaskCallable(const DeleteMigrationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMigrationTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteMigrationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosConfigOutcome MseClient::deleteNacosConfig(const DeleteNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosConfigOutcome(DeleteNacosConfigResult(outcome.result()));
	else
		return DeleteNacosConfigOutcome(outcome.error());
}

void MseClient::deleteNacosConfigAsync(const DeleteNacosConfigRequest& request, const DeleteNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosConfigOutcomeCallable MseClient::deleteNacosConfigCallable(const DeleteNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosConfigsOutcome MseClient::deleteNacosConfigs(const DeleteNacosConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosConfigsOutcome(DeleteNacosConfigsResult(outcome.result()));
	else
		return DeleteNacosConfigsOutcome(outcome.error());
}

void MseClient::deleteNacosConfigsAsync(const DeleteNacosConfigsRequest& request, const DeleteNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosConfigsOutcomeCallable MseClient::deleteNacosConfigsCallable(const DeleteNacosConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosConfigsOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosInstanceOutcome MseClient::deleteNacosInstance(const DeleteNacosInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosInstanceOutcome(DeleteNacosInstanceResult(outcome.result()));
	else
		return DeleteNacosInstanceOutcome(outcome.error());
}

void MseClient::deleteNacosInstanceAsync(const DeleteNacosInstanceRequest& request, const DeleteNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosInstanceOutcomeCallable MseClient::deleteNacosInstanceCallable(const DeleteNacosInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosServiceOutcome MseClient::deleteNacosService(const DeleteNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosServiceOutcome(DeleteNacosServiceResult(outcome.result()));
	else
		return DeleteNacosServiceOutcome(outcome.error());
}

void MseClient::deleteNacosServiceAsync(const DeleteNacosServiceRequest& request, const DeleteNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosServiceOutcomeCallable MseClient::deleteNacosServiceCallable(const DeleteNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNamespaceOutcome MseClient::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void MseClient::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNamespaceOutcomeCallable MseClient::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteSecurityGroupRuleOutcome MseClient::deleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityGroupRuleOutcome(DeleteSecurityGroupRuleResult(outcome.result()));
	else
		return DeleteSecurityGroupRuleOutcome(outcome.error());
}

void MseClient::deleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteSecurityGroupRuleOutcomeCallable MseClient::deleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteServiceSourceOutcome MseClient::deleteServiceSource(const DeleteServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceSourceOutcome(DeleteServiceSourceResult(outcome.result()));
	else
		return DeleteServiceSourceOutcome(outcome.error());
}

void MseClient::deleteServiceSourceAsync(const DeleteServiceSourceRequest& request, const DeleteServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteServiceSourceOutcomeCallable MseClient::deleteServiceSourceCallable(const DeleteServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteSwimmingLaneOutcome MseClient::deleteSwimmingLane(const DeleteSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSwimmingLaneOutcome(DeleteSwimmingLaneResult(outcome.result()));
	else
		return DeleteSwimmingLaneOutcome(outcome.error());
}

void MseClient::deleteSwimmingLaneAsync(const DeleteSwimmingLaneRequest& request, const DeleteSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteSwimmingLaneOutcomeCallable MseClient::deleteSwimmingLaneCallable(const DeleteSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->deleteSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteSwimmingLaneGroupOutcome MseClient::deleteSwimmingLaneGroup(const DeleteSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSwimmingLaneGroupOutcome(DeleteSwimmingLaneGroupResult(outcome.result()));
	else
		return DeleteSwimmingLaneGroupOutcome(outcome.error());
}

void MseClient::deleteSwimmingLaneGroupAsync(const DeleteSwimmingLaneGroupRequest& request, const DeleteSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteSwimmingLaneGroupOutcomeCallable MseClient::deleteSwimmingLaneGroupCallable(const DeleteSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteZnodeOutcome MseClient::deleteZnode(const DeleteZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteZnodeOutcome(DeleteZnodeResult(outcome.result()));
	else
		return DeleteZnodeOutcome(outcome.error());
}

void MseClient::deleteZnodeAsync(const DeleteZnodeRequest& request, const DeleteZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteZnodeOutcomeCallable MseClient::deleteZnodeCallable(const DeleteZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteZnodeOutcome()>>(
			[this, request]()
			{
			return this->deleteZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ExportNacosConfigOutcome MseClient::exportNacosConfig(const ExportNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportNacosConfigOutcome(ExportNacosConfigResult(outcome.result()));
	else
		return ExportNacosConfigOutcome(outcome.error());
}

void MseClient::exportNacosConfigAsync(const ExportNacosConfigRequest& request, const ExportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ExportNacosConfigOutcomeCallable MseClient::exportNacosConfigCallable(const ExportNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->exportNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ExportZookeeperDataOutcome MseClient::exportZookeeperData(const ExportZookeeperDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportZookeeperDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportZookeeperDataOutcome(ExportZookeeperDataResult(outcome.result()));
	else
		return ExportZookeeperDataOutcome(outcome.error());
}

void MseClient::exportZookeeperDataAsync(const ExportZookeeperDataRequest& request, const ExportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportZookeeperData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ExportZookeeperDataOutcomeCallable MseClient::exportZookeeperDataCallable(const ExportZookeeperDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportZookeeperDataOutcome()>>(
			[this, request]()
			{
			return this->exportZookeeperData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::FetchLosslessRuleListOutcome MseClient::fetchLosslessRuleList(const FetchLosslessRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FetchLosslessRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FetchLosslessRuleListOutcome(FetchLosslessRuleListResult(outcome.result()));
	else
		return FetchLosslessRuleListOutcome(outcome.error());
}

void MseClient::fetchLosslessRuleListAsync(const FetchLosslessRuleListRequest& request, const FetchLosslessRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fetchLosslessRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::FetchLosslessRuleListOutcomeCallable MseClient::fetchLosslessRuleListCallable(const FetchLosslessRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FetchLosslessRuleListOutcome()>>(
			[this, request]()
			{
			return this->fetchLosslessRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetAppMessageQueueRouteOutcome MseClient::getAppMessageQueueRoute(const GetAppMessageQueueRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppMessageQueueRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppMessageQueueRouteOutcome(GetAppMessageQueueRouteResult(outcome.result()));
	else
		return GetAppMessageQueueRouteOutcome(outcome.error());
}

void MseClient::getAppMessageQueueRouteAsync(const GetAppMessageQueueRouteRequest& request, const GetAppMessageQueueRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppMessageQueueRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetAppMessageQueueRouteOutcomeCallable MseClient::getAppMessageQueueRouteCallable(const GetAppMessageQueueRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppMessageQueueRouteOutcome()>>(
			[this, request]()
			{
			return this->getAppMessageQueueRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetApplicationListOutcome MseClient::getApplicationList(const GetApplicationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationListOutcome(GetApplicationListResult(outcome.result()));
	else
		return GetApplicationListOutcome(outcome.error());
}

void MseClient::getApplicationListAsync(const GetApplicationListRequest& request, const GetApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetApplicationListOutcomeCallable MseClient::getApplicationListCallable(const GetApplicationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationListOutcome()>>(
			[this, request]()
			{
			return this->getApplicationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetApplicationListWithMetircsOutcome MseClient::getApplicationListWithMetircs(const GetApplicationListWithMetircsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationListWithMetircsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationListWithMetircsOutcome(GetApplicationListWithMetircsResult(outcome.result()));
	else
		return GetApplicationListWithMetircsOutcome(outcome.error());
}

void MseClient::getApplicationListWithMetircsAsync(const GetApplicationListWithMetircsRequest& request, const GetApplicationListWithMetircsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationListWithMetircs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetApplicationListWithMetircsOutcomeCallable MseClient::getApplicationListWithMetircsCallable(const GetApplicationListWithMetircsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationListWithMetircsOutcome()>>(
			[this, request]()
			{
			return this->getApplicationListWithMetircs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetBlackWhiteListOutcome MseClient::getBlackWhiteList(const GetBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBlackWhiteListOutcome(GetBlackWhiteListResult(outcome.result()));
	else
		return GetBlackWhiteListOutcome(outcome.error());
}

void MseClient::getBlackWhiteListAsync(const GetBlackWhiteListRequest& request, const GetBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetBlackWhiteListOutcomeCallable MseClient::getBlackWhiteListCallable(const GetBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->getBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetEngineNamepaceOutcome MseClient::getEngineNamepace(const GetEngineNamepaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEngineNamepaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEngineNamepaceOutcome(GetEngineNamepaceResult(outcome.result()));
	else
		return GetEngineNamepaceOutcome(outcome.error());
}

void MseClient::getEngineNamepaceAsync(const GetEngineNamepaceRequest& request, const GetEngineNamepaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEngineNamepace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetEngineNamepaceOutcomeCallable MseClient::getEngineNamepaceCallable(const GetEngineNamepaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEngineNamepaceOutcome()>>(
			[this, request]()
			{
			return this->getEngineNamepace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayOutcome MseClient::getGateway(const GetGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayOutcome(GetGatewayResult(outcome.result()));
	else
		return GetGatewayOutcome(outcome.error());
}

void MseClient::getGatewayAsync(const GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayOutcomeCallable MseClient::getGatewayCallable(const GetGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayOutcome()>>(
			[this, request]()
			{
			return this->getGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayAuthConsumerDetailOutcome MseClient::getGatewayAuthConsumerDetail(const GetGatewayAuthConsumerDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayAuthConsumerDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayAuthConsumerDetailOutcome(GetGatewayAuthConsumerDetailResult(outcome.result()));
	else
		return GetGatewayAuthConsumerDetailOutcome(outcome.error());
}

void MseClient::getGatewayAuthConsumerDetailAsync(const GetGatewayAuthConsumerDetailRequest& request, const GetGatewayAuthConsumerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayAuthConsumerDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayAuthConsumerDetailOutcomeCallable MseClient::getGatewayAuthConsumerDetailCallable(const GetGatewayAuthConsumerDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayAuthConsumerDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayAuthConsumerDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayDomainDetailOutcome MseClient::getGatewayDomainDetail(const GetGatewayDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayDomainDetailOutcome(GetGatewayDomainDetailResult(outcome.result()));
	else
		return GetGatewayDomainDetailOutcome(outcome.error());
}

void MseClient::getGatewayDomainDetailAsync(const GetGatewayDomainDetailRequest& request, const GetGatewayDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayDomainDetailOutcomeCallable MseClient::getGatewayDomainDetailCallable(const GetGatewayDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayOptionOutcome MseClient::getGatewayOption(const GetGatewayOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayOptionOutcome(GetGatewayOptionResult(outcome.result()));
	else
		return GetGatewayOptionOutcome(outcome.error());
}

void MseClient::getGatewayOptionAsync(const GetGatewayOptionRequest& request, const GetGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayOptionOutcomeCallable MseClient::getGatewayOptionCallable(const GetGatewayOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayOptionOutcome()>>(
			[this, request]()
			{
			return this->getGatewayOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayRouteDetailOutcome MseClient::getGatewayRouteDetail(const GetGatewayRouteDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayRouteDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayRouteDetailOutcome(GetGatewayRouteDetailResult(outcome.result()));
	else
		return GetGatewayRouteDetailOutcome(outcome.error());
}

void MseClient::getGatewayRouteDetailAsync(const GetGatewayRouteDetailRequest& request, const GetGatewayRouteDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayRouteDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayRouteDetailOutcomeCallable MseClient::getGatewayRouteDetailCallable(const GetGatewayRouteDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayRouteDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayRouteDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayServiceDetailOutcome MseClient::getGatewayServiceDetail(const GetGatewayServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayServiceDetailOutcome(GetGatewayServiceDetailResult(outcome.result()));
	else
		return GetGatewayServiceDetailOutcome(outcome.error());
}

void MseClient::getGatewayServiceDetailAsync(const GetGatewayServiceDetailRequest& request, const GetGatewayServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayServiceDetailOutcomeCallable MseClient::getGatewayServiceDetailCallable(const GetGatewayServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGovernanceKubernetesClusterOutcome MseClient::getGovernanceKubernetesCluster(const GetGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGovernanceKubernetesClusterOutcome(GetGovernanceKubernetesClusterResult(outcome.result()));
	else
		return GetGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::getGovernanceKubernetesClusterAsync(const GetGovernanceKubernetesClusterRequest& request, const GetGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGovernanceKubernetesClusterOutcomeCallable MseClient::getGovernanceKubernetesClusterCallable(const GetGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->getGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetImageOutcome MseClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void MseClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetImageOutcomeCallable MseClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetImportFileUrlOutcome MseClient::getImportFileUrl(const GetImportFileUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImportFileUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImportFileUrlOutcome(GetImportFileUrlResult(outcome.result()));
	else
		return GetImportFileUrlOutcome(outcome.error());
}

void MseClient::getImportFileUrlAsync(const GetImportFileUrlRequest& request, const GetImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImportFileUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetImportFileUrlOutcomeCallable MseClient::getImportFileUrlCallable(const GetImportFileUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImportFileUrlOutcome()>>(
			[this, request]()
			{
			return this->getImportFileUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetKubernetesSourceOutcome MseClient::getKubernetesSource(const GetKubernetesSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKubernetesSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKubernetesSourceOutcome(GetKubernetesSourceResult(outcome.result()));
	else
		return GetKubernetesSourceOutcome(outcome.error());
}

void MseClient::getKubernetesSourceAsync(const GetKubernetesSourceRequest& request, const GetKubernetesSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKubernetesSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetKubernetesSourceOutcomeCallable MseClient::getKubernetesSourceCallable(const GetKubernetesSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKubernetesSourceOutcome()>>(
			[this, request]()
			{
			return this->getKubernetesSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetLosslessRuleByAppOutcome MseClient::getLosslessRuleByApp(const GetLosslessRuleByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLosslessRuleByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLosslessRuleByAppOutcome(GetLosslessRuleByAppResult(outcome.result()));
	else
		return GetLosslessRuleByAppOutcome(outcome.error());
}

void MseClient::getLosslessRuleByAppAsync(const GetLosslessRuleByAppRequest& request, const GetLosslessRuleByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLosslessRuleByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetLosslessRuleByAppOutcomeCallable MseClient::getLosslessRuleByAppCallable(const GetLosslessRuleByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLosslessRuleByAppOutcome()>>(
			[this, request]()
			{
			return this->getLosslessRuleByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetMseFeatureSwitchOutcome MseClient::getMseFeatureSwitch(const GetMseFeatureSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMseFeatureSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMseFeatureSwitchOutcome(GetMseFeatureSwitchResult(outcome.result()));
	else
		return GetMseFeatureSwitchOutcome(outcome.error());
}

void MseClient::getMseFeatureSwitchAsync(const GetMseFeatureSwitchRequest& request, const GetMseFeatureSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMseFeatureSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetMseFeatureSwitchOutcomeCallable MseClient::getMseFeatureSwitchCallable(const GetMseFeatureSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMseFeatureSwitchOutcome()>>(
			[this, request]()
			{
			return this->getMseFeatureSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetMseSourceOutcome MseClient::getMseSource(const GetMseSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMseSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMseSourceOutcome(GetMseSourceResult(outcome.result()));
	else
		return GetMseSourceOutcome(outcome.error());
}

void MseClient::getMseSourceAsync(const GetMseSourceRequest& request, const GetMseSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMseSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetMseSourceOutcomeCallable MseClient::getMseSourceCallable(const GetMseSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMseSourceOutcome()>>(
			[this, request]()
			{
			return this->getMseSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetNacosConfigOutcome MseClient::getNacosConfig(const GetNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNacosConfigOutcome(GetNacosConfigResult(outcome.result()));
	else
		return GetNacosConfigOutcome(outcome.error());
}

void MseClient::getNacosConfigAsync(const GetNacosConfigRequest& request, const GetNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetNacosConfigOutcomeCallable MseClient::getNacosConfigCallable(const GetNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->getNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetNacosHistoryConfigOutcome MseClient::getNacosHistoryConfig(const GetNacosHistoryConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNacosHistoryConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNacosHistoryConfigOutcome(GetNacosHistoryConfigResult(outcome.result()));
	else
		return GetNacosHistoryConfigOutcome(outcome.error());
}

void MseClient::getNacosHistoryConfigAsync(const GetNacosHistoryConfigRequest& request, const GetNacosHistoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNacosHistoryConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetNacosHistoryConfigOutcomeCallable MseClient::getNacosHistoryConfigCallable(const GetNacosHistoryConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNacosHistoryConfigOutcome()>>(
			[this, request]()
			{
			return this->getNacosHistoryConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetOverviewOutcome MseClient::getOverview(const GetOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOverviewOutcome(GetOverviewResult(outcome.result()));
	else
		return GetOverviewOutcome(outcome.error());
}

void MseClient::getOverviewAsync(const GetOverviewRequest& request, const GetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetOverviewOutcomeCallable MseClient::getOverviewCallable(const GetOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOverviewOutcome()>>(
			[this, request]()
			{
			return this->getOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetPluginConfigOutcome MseClient::getPluginConfig(const GetPluginConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPluginConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPluginConfigOutcome(GetPluginConfigResult(outcome.result()));
	else
		return GetPluginConfigOutcome(outcome.error());
}

void MseClient::getPluginConfigAsync(const GetPluginConfigRequest& request, const GetPluginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPluginConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetPluginConfigOutcomeCallable MseClient::getPluginConfigCallable(const GetPluginConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPluginConfigOutcome()>>(
			[this, request]()
			{
			return this->getPluginConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetPluginsOutcome MseClient::getPlugins(const GetPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPluginsOutcome(GetPluginsResult(outcome.result()));
	else
		return GetPluginsOutcome(outcome.error());
}

void MseClient::getPluginsAsync(const GetPluginsRequest& request, const GetPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetPluginsOutcomeCallable MseClient::getPluginsCallable(const GetPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPluginsOutcome()>>(
			[this, request]()
			{
			return this->getPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetServiceListOutcome MseClient::getServiceList(const GetServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceListOutcome(GetServiceListResult(outcome.result()));
	else
		return GetServiceListOutcome(outcome.error());
}

void MseClient::getServiceListAsync(const GetServiceListRequest& request, const GetServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetServiceListOutcomeCallable MseClient::getServiceListCallable(const GetServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceListOutcome()>>(
			[this, request]()
			{
			return this->getServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetServiceListPageOutcome MseClient::getServiceListPage(const GetServiceListPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceListPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceListPageOutcome(GetServiceListPageResult(outcome.result()));
	else
		return GetServiceListPageOutcome(outcome.error());
}

void MseClient::getServiceListPageAsync(const GetServiceListPageRequest& request, const GetServiceListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceListPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetServiceListPageOutcomeCallable MseClient::getServiceListPageCallable(const GetServiceListPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceListPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceListPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetServiceListenersOutcome MseClient::getServiceListeners(const GetServiceListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceListenersOutcome(GetServiceListenersResult(outcome.result()));
	else
		return GetServiceListenersOutcome(outcome.error());
}

void MseClient::getServiceListenersAsync(const GetServiceListenersRequest& request, const GetServiceListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetServiceListenersOutcomeCallable MseClient::getServiceListenersCallable(const GetServiceListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceListenersOutcome()>>(
			[this, request]()
			{
			return this->getServiceListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetServiceMethodPageOutcome MseClient::getServiceMethodPage(const GetServiceMethodPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceMethodPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceMethodPageOutcome(GetServiceMethodPageResult(outcome.result()));
	else
		return GetServiceMethodPageOutcome(outcome.error());
}

void MseClient::getServiceMethodPageAsync(const GetServiceMethodPageRequest& request, const GetServiceMethodPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceMethodPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetServiceMethodPageOutcomeCallable MseClient::getServiceMethodPageCallable(const GetServiceMethodPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceMethodPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceMethodPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetTagsBySwimmingLaneGroupIdOutcome MseClient::getTagsBySwimmingLaneGroupId(const GetTagsBySwimmingLaneGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagsBySwimmingLaneGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagsBySwimmingLaneGroupIdOutcome(GetTagsBySwimmingLaneGroupIdResult(outcome.result()));
	else
		return GetTagsBySwimmingLaneGroupIdOutcome(outcome.error());
}

void MseClient::getTagsBySwimmingLaneGroupIdAsync(const GetTagsBySwimmingLaneGroupIdRequest& request, const GetTagsBySwimmingLaneGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagsBySwimmingLaneGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetTagsBySwimmingLaneGroupIdOutcomeCallable MseClient::getTagsBySwimmingLaneGroupIdCallable(const GetTagsBySwimmingLaneGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagsBySwimmingLaneGroupIdOutcome()>>(
			[this, request]()
			{
			return this->getTagsBySwimmingLaneGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetZookeeperDataImportUrlOutcome MseClient::getZookeeperDataImportUrl(const GetZookeeperDataImportUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetZookeeperDataImportUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetZookeeperDataImportUrlOutcome(GetZookeeperDataImportUrlResult(outcome.result()));
	else
		return GetZookeeperDataImportUrlOutcome(outcome.error());
}

void MseClient::getZookeeperDataImportUrlAsync(const GetZookeeperDataImportUrlRequest& request, const GetZookeeperDataImportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getZookeeperDataImportUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetZookeeperDataImportUrlOutcomeCallable MseClient::getZookeeperDataImportUrlCallable(const GetZookeeperDataImportUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetZookeeperDataImportUrlOutcome()>>(
			[this, request]()
			{
			return this->getZookeeperDataImportUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ImportNacosConfigOutcome MseClient::importNacosConfig(const ImportNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportNacosConfigOutcome(ImportNacosConfigResult(outcome.result()));
	else
		return ImportNacosConfigOutcome(outcome.error());
}

void MseClient::importNacosConfigAsync(const ImportNacosConfigRequest& request, const ImportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ImportNacosConfigOutcomeCallable MseClient::importNacosConfigCallable(const ImportNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->importNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ImportServicesOutcome MseClient::importServices(const ImportServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportServicesOutcome(ImportServicesResult(outcome.result()));
	else
		return ImportServicesOutcome(outcome.error());
}

void MseClient::importServicesAsync(const ImportServicesRequest& request, const ImportServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ImportServicesOutcomeCallable MseClient::importServicesCallable(const ImportServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportServicesOutcome()>>(
			[this, request]()
			{
			return this->importServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ImportZookeeperDataOutcome MseClient::importZookeeperData(const ImportZookeeperDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportZookeeperDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportZookeeperDataOutcome(ImportZookeeperDataResult(outcome.result()));
	else
		return ImportZookeeperDataOutcome(outcome.error());
}

void MseClient::importZookeeperDataAsync(const ImportZookeeperDataRequest& request, const ImportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importZookeeperData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ImportZookeeperDataOutcomeCallable MseClient::importZookeeperDataCallable(const ImportZookeeperDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportZookeeperDataOutcome()>>(
			[this, request]()
			{
			return this->importZookeeperData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsInstancesOutcome MseClient::listAnsInstances(const ListAnsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsInstancesOutcome(ListAnsInstancesResult(outcome.result()));
	else
		return ListAnsInstancesOutcome(outcome.error());
}

void MseClient::listAnsInstancesAsync(const ListAnsInstancesRequest& request, const ListAnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsInstancesOutcomeCallable MseClient::listAnsInstancesCallable(const ListAnsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listAnsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsServiceClustersOutcome MseClient::listAnsServiceClusters(const ListAnsServiceClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsServiceClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsServiceClustersOutcome(ListAnsServiceClustersResult(outcome.result()));
	else
		return ListAnsServiceClustersOutcome(outcome.error());
}

void MseClient::listAnsServiceClustersAsync(const ListAnsServiceClustersRequest& request, const ListAnsServiceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsServiceClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsServiceClustersOutcomeCallable MseClient::listAnsServiceClustersCallable(const ListAnsServiceClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsServiceClustersOutcome()>>(
			[this, request]()
			{
			return this->listAnsServiceClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsServicesOutcome MseClient::listAnsServices(const ListAnsServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsServicesOutcome(ListAnsServicesResult(outcome.result()));
	else
		return ListAnsServicesOutcome(outcome.error());
}

void MseClient::listAnsServicesAsync(const ListAnsServicesRequest& request, const ListAnsServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsServicesOutcomeCallable MseClient::listAnsServicesCallable(const ListAnsServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsServicesOutcome()>>(
			[this, request]()
			{
			return this->listAnsServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAppBySwimmingLaneGroupTagOutcome MseClient::listAppBySwimmingLaneGroupTag(const ListAppBySwimmingLaneGroupTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppBySwimmingLaneGroupTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppBySwimmingLaneGroupTagOutcome(ListAppBySwimmingLaneGroupTagResult(outcome.result()));
	else
		return ListAppBySwimmingLaneGroupTagOutcome(outcome.error());
}

void MseClient::listAppBySwimmingLaneGroupTagAsync(const ListAppBySwimmingLaneGroupTagRequest& request, const ListAppBySwimmingLaneGroupTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppBySwimmingLaneGroupTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAppBySwimmingLaneGroupTagOutcomeCallable MseClient::listAppBySwimmingLaneGroupTagCallable(const ListAppBySwimmingLaneGroupTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppBySwimmingLaneGroupTagOutcome()>>(
			[this, request]()
			{
			return this->listAppBySwimmingLaneGroupTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListApplicationsWithTagRulesOutcome MseClient::listApplicationsWithTagRules(const ListApplicationsWithTagRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsWithTagRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsWithTagRulesOutcome(ListApplicationsWithTagRulesResult(outcome.result()));
	else
		return ListApplicationsWithTagRulesOutcome(outcome.error());
}

void MseClient::listApplicationsWithTagRulesAsync(const ListApplicationsWithTagRulesRequest& request, const ListApplicationsWithTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsWithTagRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListApplicationsWithTagRulesOutcomeCallable MseClient::listApplicationsWithTagRulesCallable(const ListApplicationsWithTagRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsWithTagRulesOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsWithTagRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAuthPolicyOutcome MseClient::listAuthPolicy(const ListAuthPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthPolicyOutcome(ListAuthPolicyResult(outcome.result()));
	else
		return ListAuthPolicyOutcome(outcome.error());
}

void MseClient::listAuthPolicyAsync(const ListAuthPolicyRequest& request, const ListAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAuthPolicyOutcomeCallable MseClient::listAuthPolicyCallable(const ListAuthPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthPolicyOutcome()>>(
			[this, request]()
			{
			return this->listAuthPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListCircuitBreakerRulesOutcome MseClient::listCircuitBreakerRules(const ListCircuitBreakerRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCircuitBreakerRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCircuitBreakerRulesOutcome(ListCircuitBreakerRulesResult(outcome.result()));
	else
		return ListCircuitBreakerRulesOutcome(outcome.error());
}

void MseClient::listCircuitBreakerRulesAsync(const ListCircuitBreakerRulesRequest& request, const ListCircuitBreakerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCircuitBreakerRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListCircuitBreakerRulesOutcomeCallable MseClient::listCircuitBreakerRulesCallable(const ListCircuitBreakerRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCircuitBreakerRulesOutcome()>>(
			[this, request]()
			{
			return this->listCircuitBreakerRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterConnectionTypesOutcome MseClient::listClusterConnectionTypes(const ListClusterConnectionTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterConnectionTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterConnectionTypesOutcome(ListClusterConnectionTypesResult(outcome.result()));
	else
		return ListClusterConnectionTypesOutcome(outcome.error());
}

void MseClient::listClusterConnectionTypesAsync(const ListClusterConnectionTypesRequest& request, const ListClusterConnectionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterConnectionTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterConnectionTypesOutcomeCallable MseClient::listClusterConnectionTypesCallable(const ListClusterConnectionTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterConnectionTypesOutcome()>>(
			[this, request]()
			{
			return this->listClusterConnectionTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterHealthCheckTaskOutcome MseClient::listClusterHealthCheckTask(const ListClusterHealthCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHealthCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHealthCheckTaskOutcome(ListClusterHealthCheckTaskResult(outcome.result()));
	else
		return ListClusterHealthCheckTaskOutcome(outcome.error());
}

void MseClient::listClusterHealthCheckTaskAsync(const ListClusterHealthCheckTaskRequest& request, const ListClusterHealthCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHealthCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterHealthCheckTaskOutcomeCallable MseClient::listClusterHealthCheckTaskCallable(const ListClusterHealthCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHealthCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->listClusterHealthCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterTypesOutcome MseClient::listClusterTypes(const ListClusterTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTypesOutcome(ListClusterTypesResult(outcome.result()));
	else
		return ListClusterTypesOutcome(outcome.error());
}

void MseClient::listClusterTypesAsync(const ListClusterTypesRequest& request, const ListClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterTypesOutcomeCallable MseClient::listClusterTypesCallable(const ListClusterTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTypesOutcome()>>(
			[this, request]()
			{
			return this->listClusterTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterVersionsOutcome MseClient::listClusterVersions(const ListClusterVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterVersionsOutcome(ListClusterVersionsResult(outcome.result()));
	else
		return ListClusterVersionsOutcome(outcome.error());
}

void MseClient::listClusterVersionsAsync(const ListClusterVersionsRequest& request, const ListClusterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterVersionsOutcomeCallable MseClient::listClusterVersionsCallable(const ListClusterVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterVersionsOutcome()>>(
			[this, request]()
			{
			return this->listClusterVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClustersOutcome MseClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void MseClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClustersOutcomeCallable MseClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListConfigTrackOutcome MseClient::listConfigTrack(const ListConfigTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigTrackOutcome(ListConfigTrackResult(outcome.result()));
	else
		return ListConfigTrackOutcome(outcome.error());
}

void MseClient::listConfigTrackAsync(const ListConfigTrackRequest& request, const ListConfigTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListConfigTrackOutcomeCallable MseClient::listConfigTrackCallable(const ListConfigTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigTrackOutcome()>>(
			[this, request]()
			{
			return this->listConfigTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEngineNamespacesOutcome MseClient::listEngineNamespaces(const ListEngineNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEngineNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEngineNamespacesOutcome(ListEngineNamespacesResult(outcome.result()));
	else
		return ListEngineNamespacesOutcome(outcome.error());
}

void MseClient::listEngineNamespacesAsync(const ListEngineNamespacesRequest& request, const ListEngineNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEngineNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEngineNamespacesOutcomeCallable MseClient::listEngineNamespacesCallable(const ListEngineNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEngineNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listEngineNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEurekaInstancesOutcome MseClient::listEurekaInstances(const ListEurekaInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEurekaInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEurekaInstancesOutcome(ListEurekaInstancesResult(outcome.result()));
	else
		return ListEurekaInstancesOutcome(outcome.error());
}

void MseClient::listEurekaInstancesAsync(const ListEurekaInstancesRequest& request, const ListEurekaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEurekaInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEurekaInstancesOutcomeCallable MseClient::listEurekaInstancesCallable(const ListEurekaInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEurekaInstancesOutcome()>>(
			[this, request]()
			{
			return this->listEurekaInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEurekaServicesOutcome MseClient::listEurekaServices(const ListEurekaServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEurekaServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEurekaServicesOutcome(ListEurekaServicesResult(outcome.result()));
	else
		return ListEurekaServicesOutcome(outcome.error());
}

void MseClient::listEurekaServicesAsync(const ListEurekaServicesRequest& request, const ListEurekaServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEurekaServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEurekaServicesOutcomeCallable MseClient::listEurekaServicesCallable(const ListEurekaServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEurekaServicesOutcome()>>(
			[this, request]()
			{
			return this->listEurekaServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListExportZookeeperDataOutcome MseClient::listExportZookeeperData(const ListExportZookeeperDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExportZookeeperDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExportZookeeperDataOutcome(ListExportZookeeperDataResult(outcome.result()));
	else
		return ListExportZookeeperDataOutcome(outcome.error());
}

void MseClient::listExportZookeeperDataAsync(const ListExportZookeeperDataRequest& request, const ListExportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExportZookeeperData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListExportZookeeperDataOutcomeCallable MseClient::listExportZookeeperDataCallable(const ListExportZookeeperDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExportZookeeperDataOutcome()>>(
			[this, request]()
			{
			return this->listExportZookeeperData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListFlowRulesOutcome MseClient::listFlowRules(const ListFlowRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowRulesOutcome(ListFlowRulesResult(outcome.result()));
	else
		return ListFlowRulesOutcome(outcome.error());
}

void MseClient::listFlowRulesAsync(const ListFlowRulesRequest& request, const ListFlowRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListFlowRulesOutcomeCallable MseClient::listFlowRulesCallable(const ListFlowRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowRulesOutcome()>>(
			[this, request]()
			{
			return this->listFlowRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayOutcome MseClient::listGateway(const ListGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayOutcome(ListGatewayResult(outcome.result()));
	else
		return ListGatewayOutcome(outcome.error());
}

void MseClient::listGatewayAsync(const ListGatewayRequest& request, const ListGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayOutcomeCallable MseClient::listGatewayCallable(const ListGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayOutcome()>>(
			[this, request]()
			{
			return this->listGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayAuthConsumerOutcome MseClient::listGatewayAuthConsumer(const ListGatewayAuthConsumerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayAuthConsumerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayAuthConsumerOutcome(ListGatewayAuthConsumerResult(outcome.result()));
	else
		return ListGatewayAuthConsumerOutcome(outcome.error());
}

void MseClient::listGatewayAuthConsumerAsync(const ListGatewayAuthConsumerRequest& request, const ListGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayAuthConsumer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayAuthConsumerOutcomeCallable MseClient::listGatewayAuthConsumerCallable(const ListGatewayAuthConsumerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayAuthConsumerOutcome()>>(
			[this, request]()
			{
			return this->listGatewayAuthConsumer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayAuthConsumerResourceOutcome MseClient::listGatewayAuthConsumerResource(const ListGatewayAuthConsumerResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayAuthConsumerResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayAuthConsumerResourceOutcome(ListGatewayAuthConsumerResourceResult(outcome.result()));
	else
		return ListGatewayAuthConsumerResourceOutcome(outcome.error());
}

void MseClient::listGatewayAuthConsumerResourceAsync(const ListGatewayAuthConsumerResourceRequest& request, const ListGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayAuthConsumerResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayAuthConsumerResourceOutcomeCallable MseClient::listGatewayAuthConsumerResourceCallable(const ListGatewayAuthConsumerResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayAuthConsumerResourceOutcome()>>(
			[this, request]()
			{
			return this->listGatewayAuthConsumerResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayDomainOutcome MseClient::listGatewayDomain(const ListGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayDomainOutcome(ListGatewayDomainResult(outcome.result()));
	else
		return ListGatewayDomainOutcome(outcome.error());
}

void MseClient::listGatewayDomainAsync(const ListGatewayDomainRequest& request, const ListGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayDomainOutcomeCallable MseClient::listGatewayDomainCallable(const ListGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->listGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayRouteOutcome MseClient::listGatewayRoute(const ListGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayRouteOutcome(ListGatewayRouteResult(outcome.result()));
	else
		return ListGatewayRouteOutcome(outcome.error());
}

void MseClient::listGatewayRouteAsync(const ListGatewayRouteRequest& request, const ListGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayRouteOutcomeCallable MseClient::listGatewayRouteCallable(const ListGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->listGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayRouteOnAuthOutcome MseClient::listGatewayRouteOnAuth(const ListGatewayRouteOnAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayRouteOnAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayRouteOnAuthOutcome(ListGatewayRouteOnAuthResult(outcome.result()));
	else
		return ListGatewayRouteOnAuthOutcome(outcome.error());
}

void MseClient::listGatewayRouteOnAuthAsync(const ListGatewayRouteOnAuthRequest& request, const ListGatewayRouteOnAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayRouteOnAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayRouteOnAuthOutcomeCallable MseClient::listGatewayRouteOnAuthCallable(const ListGatewayRouteOnAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayRouteOnAuthOutcome()>>(
			[this, request]()
			{
			return this->listGatewayRouteOnAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayServiceOutcome MseClient::listGatewayService(const ListGatewayServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayServiceOutcome(ListGatewayServiceResult(outcome.result()));
	else
		return ListGatewayServiceOutcome(outcome.error());
}

void MseClient::listGatewayServiceAsync(const ListGatewayServiceRequest& request, const ListGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayServiceOutcomeCallable MseClient::listGatewayServiceCallable(const ListGatewayServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayServiceOutcome()>>(
			[this, request]()
			{
			return this->listGatewayService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewaySlbOutcome MseClient::listGatewaySlb(const ListGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewaySlbOutcome(ListGatewaySlbResult(outcome.result()));
	else
		return ListGatewaySlbOutcome(outcome.error());
}

void MseClient::listGatewaySlbAsync(const ListGatewaySlbRequest& request, const ListGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewaySlbOutcomeCallable MseClient::listGatewaySlbCallable(const ListGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->listGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListInstanceCountOutcome MseClient::listInstanceCount(const ListInstanceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceCountOutcome(ListInstanceCountResult(outcome.result()));
	else
		return ListInstanceCountOutcome(outcome.error());
}

void MseClient::listInstanceCountAsync(const ListInstanceCountRequest& request, const ListInstanceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListInstanceCountOutcomeCallable MseClient::listInstanceCountCallable(const ListInstanceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceCountOutcome()>>(
			[this, request]()
			{
			return this->listInstanceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListListenersByConfigOutcome MseClient::listListenersByConfig(const ListListenersByConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersByConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersByConfigOutcome(ListListenersByConfigResult(outcome.result()));
	else
		return ListListenersByConfigOutcome(outcome.error());
}

void MseClient::listListenersByConfigAsync(const ListListenersByConfigRequest& request, const ListListenersByConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenersByConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListListenersByConfigOutcomeCallable MseClient::listListenersByConfigCallable(const ListListenersByConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersByConfigOutcome()>>(
			[this, request]()
			{
			return this->listListenersByConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListListenersByIpOutcome MseClient::listListenersByIp(const ListListenersByIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersByIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersByIpOutcome(ListListenersByIpResult(outcome.result()));
	else
		return ListListenersByIpOutcome(outcome.error());
}

void MseClient::listListenersByIpAsync(const ListListenersByIpRequest& request, const ListListenersByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenersByIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListListenersByIpOutcomeCallable MseClient::listListenersByIpCallable(const ListListenersByIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersByIpOutcome()>>(
			[this, request]()
			{
			return this->listListenersByIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListMigrationTaskOutcome MseClient::listMigrationTask(const ListMigrationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMigrationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMigrationTaskOutcome(ListMigrationTaskResult(outcome.result()));
	else
		return ListMigrationTaskOutcome(outcome.error());
}

void MseClient::listMigrationTaskAsync(const ListMigrationTaskRequest& request, const ListMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMigrationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListMigrationTaskOutcomeCallable MseClient::listMigrationTaskCallable(const ListMigrationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMigrationTaskOutcome()>>(
			[this, request]()
			{
			return this->listMigrationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListNacosConfigsOutcome MseClient::listNacosConfigs(const ListNacosConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNacosConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNacosConfigsOutcome(ListNacosConfigsResult(outcome.result()));
	else
		return ListNacosConfigsOutcome(outcome.error());
}

void MseClient::listNacosConfigsAsync(const ListNacosConfigsRequest& request, const ListNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNacosConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListNacosConfigsOutcomeCallable MseClient::listNacosConfigsCallable(const ListNacosConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNacosConfigsOutcome()>>(
			[this, request]()
			{
			return this->listNacosConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListNacosHistoryConfigsOutcome MseClient::listNacosHistoryConfigs(const ListNacosHistoryConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNacosHistoryConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNacosHistoryConfigsOutcome(ListNacosHistoryConfigsResult(outcome.result()));
	else
		return ListNacosHistoryConfigsOutcome(outcome.error());
}

void MseClient::listNacosHistoryConfigsAsync(const ListNacosHistoryConfigsRequest& request, const ListNacosHistoryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNacosHistoryConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListNacosHistoryConfigsOutcomeCallable MseClient::listNacosHistoryConfigsCallable(const ListNacosHistoryConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNacosHistoryConfigsOutcome()>>(
			[this, request]()
			{
			return this->listNacosHistoryConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListNamingTrackOutcome MseClient::listNamingTrack(const ListNamingTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamingTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamingTrackOutcome(ListNamingTrackResult(outcome.result()));
	else
		return ListNamingTrackOutcome(outcome.error());
}

void MseClient::listNamingTrackAsync(const ListNamingTrackRequest& request, const ListNamingTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamingTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListNamingTrackOutcomeCallable MseClient::listNamingTrackCallable(const ListNamingTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamingTrackOutcome()>>(
			[this, request]()
			{
			return this->listNamingTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListSSLCertOutcome MseClient::listSSLCert(const ListSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSSLCertOutcome(ListSSLCertResult(outcome.result()));
	else
		return ListSSLCertOutcome(outcome.error());
}

void MseClient::listSSLCertAsync(const ListSSLCertRequest& request, const ListSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListSSLCertOutcomeCallable MseClient::listSSLCertCallable(const ListSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSSLCertOutcome()>>(
			[this, request]()
			{
			return this->listSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListSecurityGroupOutcome MseClient::listSecurityGroup(const ListSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityGroupOutcome(ListSecurityGroupResult(outcome.result()));
	else
		return ListSecurityGroupOutcome(outcome.error());
}

void MseClient::listSecurityGroupAsync(const ListSecurityGroupRequest& request, const ListSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListSecurityGroupOutcomeCallable MseClient::listSecurityGroupCallable(const ListSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->listSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListSecurityGroupRuleOutcome MseClient::listSecurityGroupRule(const ListSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityGroupRuleOutcome(ListSecurityGroupRuleResult(outcome.result()));
	else
		return ListSecurityGroupRuleOutcome(outcome.error());
}

void MseClient::listSecurityGroupRuleAsync(const ListSecurityGroupRuleRequest& request, const ListSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListSecurityGroupRuleOutcomeCallable MseClient::listSecurityGroupRuleCallable(const ListSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->listSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListServiceSourceOutcome MseClient::listServiceSource(const ListServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceSourceOutcome(ListServiceSourceResult(outcome.result()));
	else
		return ListServiceSourceOutcome(outcome.error());
}

void MseClient::listServiceSourceAsync(const ListServiceSourceRequest& request, const ListServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListServiceSourceOutcomeCallable MseClient::listServiceSourceCallable(const ListServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->listServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListTagResourcesOutcome MseClient::listTagResources(const ListTagResourcesRequest &request) const
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

void MseClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListTagResourcesOutcomeCallable MseClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListZkTrackOutcome MseClient::listZkTrack(const ListZkTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListZkTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListZkTrackOutcome(ListZkTrackResult(outcome.result()));
	else
		return ListZkTrackOutcome(outcome.error());
}

void MseClient::listZkTrackAsync(const ListZkTrackRequest& request, const ListZkTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listZkTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListZkTrackOutcomeCallable MseClient::listZkTrackCallable(const ListZkTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListZkTrackOutcome()>>(
			[this, request]()
			{
			return this->listZkTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListZnodeChildrenOutcome MseClient::listZnodeChildren(const ListZnodeChildrenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListZnodeChildrenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListZnodeChildrenOutcome(ListZnodeChildrenResult(outcome.result()));
	else
		return ListZnodeChildrenOutcome(outcome.error());
}

void MseClient::listZnodeChildrenAsync(const ListZnodeChildrenRequest& request, const ListZnodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listZnodeChildren(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListZnodeChildrenOutcomeCallable MseClient::listZnodeChildrenCallable(const ListZnodeChildrenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListZnodeChildrenOutcome()>>(
			[this, request]()
			{
			return this->listZnodeChildren(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ModifyGovernanceKubernetesClusterOutcome MseClient::modifyGovernanceKubernetesCluster(const ModifyGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGovernanceKubernetesClusterOutcome(ModifyGovernanceKubernetesClusterResult(outcome.result()));
	else
		return ModifyGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::modifyGovernanceKubernetesClusterAsync(const ModifyGovernanceKubernetesClusterRequest& request, const ModifyGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ModifyGovernanceKubernetesClusterOutcomeCallable MseClient::modifyGovernanceKubernetesClusterCallable(const ModifyGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ModifyLosslessRuleOutcome MseClient::modifyLosslessRule(const ModifyLosslessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLosslessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLosslessRuleOutcome(ModifyLosslessRuleResult(outcome.result()));
	else
		return ModifyLosslessRuleOutcome(outcome.error());
}

void MseClient::modifyLosslessRuleAsync(const ModifyLosslessRuleRequest& request, const ModifyLosslessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLosslessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ModifyLosslessRuleOutcomeCallable MseClient::modifyLosslessRuleCallable(const ModifyLosslessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLosslessRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyLosslessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::OfflineGatewayRouteOutcome MseClient::offlineGatewayRoute(const OfflineGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineGatewayRouteOutcome(OfflineGatewayRouteResult(outcome.result()));
	else
		return OfflineGatewayRouteOutcome(outcome.error());
}

void MseClient::offlineGatewayRouteAsync(const OfflineGatewayRouteRequest& request, const OfflineGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::OfflineGatewayRouteOutcomeCallable MseClient::offlineGatewayRouteCallable(const OfflineGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->offlineGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::OrderClusterHealthCheckRiskNoticeOutcome MseClient::orderClusterHealthCheckRiskNotice(const OrderClusterHealthCheckRiskNoticeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OrderClusterHealthCheckRiskNoticeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OrderClusterHealthCheckRiskNoticeOutcome(OrderClusterHealthCheckRiskNoticeResult(outcome.result()));
	else
		return OrderClusterHealthCheckRiskNoticeOutcome(outcome.error());
}

void MseClient::orderClusterHealthCheckRiskNoticeAsync(const OrderClusterHealthCheckRiskNoticeRequest& request, const OrderClusterHealthCheckRiskNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, orderClusterHealthCheckRiskNotice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::OrderClusterHealthCheckRiskNoticeOutcomeCallable MseClient::orderClusterHealthCheckRiskNoticeCallable(const OrderClusterHealthCheckRiskNoticeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OrderClusterHealthCheckRiskNoticeOutcome()>>(
			[this, request]()
			{
			return this->orderClusterHealthCheckRiskNotice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::PullServicesOutcome MseClient::pullServices(const PullServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullServicesOutcome(PullServicesResult(outcome.result()));
	else
		return PullServicesOutcome(outcome.error());
}

void MseClient::pullServicesAsync(const PullServicesRequest& request, const PullServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::PullServicesOutcomeCallable MseClient::pullServicesCallable(const PullServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullServicesOutcome()>>(
			[this, request]()
			{
			return this->pullServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::PutClusterHealthCheckTaskOutcome MseClient::putClusterHealthCheckTask(const PutClusterHealthCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutClusterHealthCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutClusterHealthCheckTaskOutcome(PutClusterHealthCheckTaskResult(outcome.result()));
	else
		return PutClusterHealthCheckTaskOutcome(outcome.error());
}

void MseClient::putClusterHealthCheckTaskAsync(const PutClusterHealthCheckTaskRequest& request, const PutClusterHealthCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putClusterHealthCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::PutClusterHealthCheckTaskOutcomeCallable MseClient::putClusterHealthCheckTaskCallable(const PutClusterHealthCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutClusterHealthCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->putClusterHealthCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryAllSwimmingLaneOutcome MseClient::queryAllSwimmingLane(const QueryAllSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAllSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAllSwimmingLaneOutcome(QueryAllSwimmingLaneResult(outcome.result()));
	else
		return QueryAllSwimmingLaneOutcome(outcome.error());
}

void MseClient::queryAllSwimmingLaneAsync(const QueryAllSwimmingLaneRequest& request, const QueryAllSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAllSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryAllSwimmingLaneOutcomeCallable MseClient::queryAllSwimmingLaneCallable(const QueryAllSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAllSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->queryAllSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryAllSwimmingLaneGroupOutcome MseClient::queryAllSwimmingLaneGroup(const QueryAllSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAllSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAllSwimmingLaneGroupOutcome(QueryAllSwimmingLaneGroupResult(outcome.result()));
	else
		return QueryAllSwimmingLaneGroupOutcome(outcome.error());
}

void MseClient::queryAllSwimmingLaneGroupAsync(const QueryAllSwimmingLaneGroupRequest& request, const QueryAllSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAllSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryAllSwimmingLaneGroupOutcomeCallable MseClient::queryAllSwimmingLaneGroupCallable(const QueryAllSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAllSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->queryAllSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryBusinessLocationsOutcome MseClient::queryBusinessLocations(const QueryBusinessLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBusinessLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBusinessLocationsOutcome(QueryBusinessLocationsResult(outcome.result()));
	else
		return QueryBusinessLocationsOutcome(outcome.error());
}

void MseClient::queryBusinessLocationsAsync(const QueryBusinessLocationsRequest& request, const QueryBusinessLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBusinessLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryBusinessLocationsOutcomeCallable MseClient::queryBusinessLocationsCallable(const QueryBusinessLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBusinessLocationsOutcome()>>(
			[this, request]()
			{
			return this->queryBusinessLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterDetailOutcome MseClient::queryClusterDetail(const QueryClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterDetailOutcome(QueryClusterDetailResult(outcome.result()));
	else
		return QueryClusterDetailOutcome(outcome.error());
}

void MseClient::queryClusterDetailAsync(const QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterDetailOutcomeCallable MseClient::queryClusterDetailCallable(const QueryClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->queryClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterDiskSpecificationOutcome MseClient::queryClusterDiskSpecification(const QueryClusterDiskSpecificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterDiskSpecificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterDiskSpecificationOutcome(QueryClusterDiskSpecificationResult(outcome.result()));
	else
		return QueryClusterDiskSpecificationOutcome(outcome.error());
}

void MseClient::queryClusterDiskSpecificationAsync(const QueryClusterDiskSpecificationRequest& request, const QueryClusterDiskSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterDiskSpecification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterDiskSpecificationOutcomeCallable MseClient::queryClusterDiskSpecificationCallable(const QueryClusterDiskSpecificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterDiskSpecificationOutcome()>>(
			[this, request]()
			{
			return this->queryClusterDiskSpecification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterInfoOutcome MseClient::queryClusterInfo(const QueryClusterInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterInfoOutcome(QueryClusterInfoResult(outcome.result()));
	else
		return QueryClusterInfoOutcome(outcome.error());
}

void MseClient::queryClusterInfoAsync(const QueryClusterInfoRequest& request, const QueryClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterInfoOutcomeCallable MseClient::queryClusterInfoCallable(const QueryClusterInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterInfoOutcome()>>(
			[this, request]()
			{
			return this->queryClusterInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterSpecificationOutcome MseClient::queryClusterSpecification(const QueryClusterSpecificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterSpecificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterSpecificationOutcome(QueryClusterSpecificationResult(outcome.result()));
	else
		return QueryClusterSpecificationOutcome(outcome.error());
}

void MseClient::queryClusterSpecificationAsync(const QueryClusterSpecificationRequest& request, const QueryClusterSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterSpecification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterSpecificationOutcomeCallable MseClient::queryClusterSpecificationCallable(const QueryClusterSpecificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterSpecificationOutcome()>>(
			[this, request]()
			{
			return this->queryClusterSpecification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryConfigOutcome MseClient::queryConfig(const QueryConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConfigOutcome(QueryConfigResult(outcome.result()));
	else
		return QueryConfigOutcome(outcome.error());
}

void MseClient::queryConfigAsync(const QueryConfigRequest& request, const QueryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryConfigOutcomeCallable MseClient::queryConfigCallable(const QueryConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConfigOutcome()>>(
			[this, request]()
			{
			return this->queryConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGatewayRegionOutcome MseClient::queryGatewayRegion(const QueryGatewayRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGatewayRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGatewayRegionOutcome(QueryGatewayRegionResult(outcome.result()));
	else
		return QueryGatewayRegionOutcome(outcome.error());
}

void MseClient::queryGatewayRegionAsync(const QueryGatewayRegionRequest& request, const QueryGatewayRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGatewayRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGatewayRegionOutcomeCallable MseClient::queryGatewayRegionCallable(const QueryGatewayRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGatewayRegionOutcome()>>(
			[this, request]()
			{
			return this->queryGatewayRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGatewayTypeOutcome MseClient::queryGatewayType(const QueryGatewayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGatewayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGatewayTypeOutcome(QueryGatewayTypeResult(outcome.result()));
	else
		return QueryGatewayTypeOutcome(outcome.error());
}

void MseClient::queryGatewayTypeAsync(const QueryGatewayTypeRequest& request, const QueryGatewayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGatewayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGatewayTypeOutcomeCallable MseClient::queryGatewayTypeCallable(const QueryGatewayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGatewayTypeOutcome()>>(
			[this, request]()
			{
			return this->queryGatewayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGovernanceKubernetesClusterOutcome MseClient::queryGovernanceKubernetesCluster(const QueryGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGovernanceKubernetesClusterOutcome(QueryGovernanceKubernetesClusterResult(outcome.result()));
	else
		return QueryGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::queryGovernanceKubernetesClusterAsync(const QueryGovernanceKubernetesClusterRequest& request, const QueryGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGovernanceKubernetesClusterOutcomeCallable MseClient::queryGovernanceKubernetesClusterCallable(const QueryGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->queryGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryInstancesInfoOutcome MseClient::queryInstancesInfo(const QueryInstancesInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstancesInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstancesInfoOutcome(QueryInstancesInfoResult(outcome.result()));
	else
		return QueryInstancesInfoOutcome(outcome.error());
}

void MseClient::queryInstancesInfoAsync(const QueryInstancesInfoRequest& request, const QueryInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstancesInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryInstancesInfoOutcomeCallable MseClient::queryInstancesInfoCallable(const QueryInstancesInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstancesInfoOutcome()>>(
			[this, request]()
			{
			return this->queryInstancesInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryMonitorOutcome MseClient::queryMonitor(const QueryMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonitorOutcome(QueryMonitorResult(outcome.result()));
	else
		return QueryMonitorOutcome(outcome.error());
}

void MseClient::queryMonitorAsync(const QueryMonitorRequest& request, const QueryMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryMonitorOutcomeCallable MseClient::queryMonitorCallable(const QueryMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonitorOutcome()>>(
			[this, request]()
			{
			return this->queryMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryNamespaceOutcome MseClient::queryNamespace(const QueryNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryNamespaceOutcome(QueryNamespaceResult(outcome.result()));
	else
		return QueryNamespaceOutcome(outcome.error());
}

void MseClient::queryNamespaceAsync(const QueryNamespaceRequest& request, const QueryNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryNamespaceOutcomeCallable MseClient::queryNamespaceCallable(const QueryNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryNamespaceOutcome()>>(
			[this, request]()
			{
			return this->queryNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QuerySlbSpecOutcome MseClient::querySlbSpec(const QuerySlbSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySlbSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySlbSpecOutcome(QuerySlbSpecResult(outcome.result()));
	else
		return QuerySlbSpecOutcome(outcome.error());
}

void MseClient::querySlbSpecAsync(const QuerySlbSpecRequest& request, const QuerySlbSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySlbSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QuerySlbSpecOutcomeCallable MseClient::querySlbSpecCallable(const QuerySlbSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySlbSpecOutcome()>>(
			[this, request]()
			{
			return this->querySlbSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QuerySwimmingLaneByIdOutcome MseClient::querySwimmingLaneById(const QuerySwimmingLaneByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySwimmingLaneByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySwimmingLaneByIdOutcome(QuerySwimmingLaneByIdResult(outcome.result()));
	else
		return QuerySwimmingLaneByIdOutcome(outcome.error());
}

void MseClient::querySwimmingLaneByIdAsync(const QuerySwimmingLaneByIdRequest& request, const QuerySwimmingLaneByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySwimmingLaneById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QuerySwimmingLaneByIdOutcomeCallable MseClient::querySwimmingLaneByIdCallable(const QuerySwimmingLaneByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySwimmingLaneByIdOutcome()>>(
			[this, request]()
			{
			return this->querySwimmingLaneById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryZnodeDetailOutcome MseClient::queryZnodeDetail(const QueryZnodeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryZnodeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryZnodeDetailOutcome(QueryZnodeDetailResult(outcome.result()));
	else
		return QueryZnodeDetailOutcome(outcome.error());
}

void MseClient::queryZnodeDetailAsync(const QueryZnodeDetailRequest& request, const QueryZnodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryZnodeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryZnodeDetailOutcomeCallable MseClient::queryZnodeDetailCallable(const QueryZnodeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryZnodeDetailOutcome()>>(
			[this, request]()
			{
			return this->queryZnodeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RemoveApplicationOutcome MseClient::removeApplication(const RemoveApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveApplicationOutcome(RemoveApplicationResult(outcome.result()));
	else
		return RemoveApplicationOutcome(outcome.error());
}

void MseClient::removeApplicationAsync(const RemoveApplicationRequest& request, const RemoveApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RemoveApplicationOutcomeCallable MseClient::removeApplicationCallable(const RemoveApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveApplicationOutcome()>>(
			[this, request]()
			{
			return this->removeApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RemoveAuthPolicyOutcome MseClient::removeAuthPolicy(const RemoveAuthPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAuthPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAuthPolicyOutcome(RemoveAuthPolicyResult(outcome.result()));
	else
		return RemoveAuthPolicyOutcome(outcome.error());
}

void MseClient::removeAuthPolicyAsync(const RemoveAuthPolicyRequest& request, const RemoveAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAuthPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RemoveAuthPolicyOutcomeCallable MseClient::removeAuthPolicyCallable(const RemoveAuthPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAuthPolicyOutcome()>>(
			[this, request]()
			{
			return this->removeAuthPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RestartClusterOutcome MseClient::restartCluster(const RestartClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartClusterOutcome(RestartClusterResult(outcome.result()));
	else
		return RestartClusterOutcome(outcome.error());
}

void MseClient::restartClusterAsync(const RestartClusterRequest& request, const RestartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RestartClusterOutcomeCallable MseClient::restartClusterCallable(const RestartClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartClusterOutcome()>>(
			[this, request]()
			{
			return this->restartCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RetryClusterOutcome MseClient::retryCluster(const RetryClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryClusterOutcome(RetryClusterResult(outcome.result()));
	else
		return RetryClusterOutcome(outcome.error());
}

void MseClient::retryClusterAsync(const RetryClusterRequest& request, const RetryClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RetryClusterOutcomeCallable MseClient::retryClusterCallable(const RetryClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryClusterOutcome()>>(
			[this, request]()
			{
			return this->retryCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::SelectGatewaySlbOutcome MseClient::selectGatewaySlb(const SelectGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SelectGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SelectGatewaySlbOutcome(SelectGatewaySlbResult(outcome.result()));
	else
		return SelectGatewaySlbOutcome(outcome.error());
}

void MseClient::selectGatewaySlbAsync(const SelectGatewaySlbRequest& request, const SelectGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, selectGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::SelectGatewaySlbOutcomeCallable MseClient::selectGatewaySlbCallable(const SelectGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SelectGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->selectGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::TagResourcesOutcome MseClient::tagResources(const TagResourcesRequest &request) const
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

void MseClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::TagResourcesOutcomeCallable MseClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UntagResourcesOutcome MseClient::untagResources(const UntagResourcesRequest &request) const
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

void MseClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UntagResourcesOutcomeCallable MseClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateAclOutcome MseClient::updateAcl(const UpdateAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAclOutcome(UpdateAclResult(outcome.result()));
	else
		return UpdateAclOutcome(outcome.error());
}

void MseClient::updateAclAsync(const UpdateAclRequest& request, const UpdateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateAclOutcomeCallable MseClient::updateAclCallable(const UpdateAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAclOutcome()>>(
			[this, request]()
			{
			return this->updateAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateAuthPolicyOutcome MseClient::updateAuthPolicy(const UpdateAuthPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuthPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuthPolicyOutcome(UpdateAuthPolicyResult(outcome.result()));
	else
		return UpdateAuthPolicyOutcome(outcome.error());
}

void MseClient::updateAuthPolicyAsync(const UpdateAuthPolicyRequest& request, const UpdateAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuthPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateAuthPolicyOutcomeCallable MseClient::updateAuthPolicyCallable(const UpdateAuthPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuthPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateAuthPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateBlackWhiteListOutcome MseClient::updateBlackWhiteList(const UpdateBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBlackWhiteListOutcome(UpdateBlackWhiteListResult(outcome.result()));
	else
		return UpdateBlackWhiteListOutcome(outcome.error());
}

void MseClient::updateBlackWhiteListAsync(const UpdateBlackWhiteListRequest& request, const UpdateBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateBlackWhiteListOutcomeCallable MseClient::updateBlackWhiteListCallable(const UpdateBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->updateBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateCircuitBreakerRuleOutcome MseClient::updateCircuitBreakerRule(const UpdateCircuitBreakerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCircuitBreakerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCircuitBreakerRuleOutcome(UpdateCircuitBreakerRuleResult(outcome.result()));
	else
		return UpdateCircuitBreakerRuleOutcome(outcome.error());
}

void MseClient::updateCircuitBreakerRuleAsync(const UpdateCircuitBreakerRuleRequest& request, const UpdateCircuitBreakerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCircuitBreakerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateCircuitBreakerRuleOutcomeCallable MseClient::updateCircuitBreakerRuleCallable(const UpdateCircuitBreakerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCircuitBreakerRuleOutcome()>>(
			[this, request]()
			{
			return this->updateCircuitBreakerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateClusterOutcome MseClient::updateCluster(const UpdateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterOutcome(UpdateClusterResult(outcome.result()));
	else
		return UpdateClusterOutcome(outcome.error());
}

void MseClient::updateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateClusterOutcomeCallable MseClient::updateClusterCallable(const UpdateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterOutcome()>>(
			[this, request]()
			{
			return this->updateCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateClusterSpecOutcome MseClient::updateClusterSpec(const UpdateClusterSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterSpecOutcome(UpdateClusterSpecResult(outcome.result()));
	else
		return UpdateClusterSpecOutcome(outcome.error());
}

void MseClient::updateClusterSpecAsync(const UpdateClusterSpecRequest& request, const UpdateClusterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClusterSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateClusterSpecOutcomeCallable MseClient::updateClusterSpecCallable(const UpdateClusterSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterSpecOutcome()>>(
			[this, request]()
			{
			return this->updateClusterSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateConfigOutcome MseClient::updateConfig(const UpdateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigOutcome(UpdateConfigResult(outcome.result()));
	else
		return UpdateConfigOutcome(outcome.error());
}

void MseClient::updateConfigAsync(const UpdateConfigRequest& request, const UpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateConfigOutcomeCallable MseClient::updateConfigCallable(const UpdateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigOutcome()>>(
			[this, request]()
			{
			return this->updateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateEngineNamespaceOutcome MseClient::updateEngineNamespace(const UpdateEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEngineNamespaceOutcome(UpdateEngineNamespaceResult(outcome.result()));
	else
		return UpdateEngineNamespaceOutcome(outcome.error());
}

void MseClient::updateEngineNamespaceAsync(const UpdateEngineNamespaceRequest& request, const UpdateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateEngineNamespaceOutcomeCallable MseClient::updateEngineNamespaceCallable(const UpdateEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateFlowRuleOutcome MseClient::updateFlowRule(const UpdateFlowRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFlowRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFlowRuleOutcome(UpdateFlowRuleResult(outcome.result()));
	else
		return UpdateFlowRuleOutcome(outcome.error());
}

void MseClient::updateFlowRuleAsync(const UpdateFlowRuleRequest& request, const UpdateFlowRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFlowRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateFlowRuleOutcomeCallable MseClient::updateFlowRuleCallable(const UpdateFlowRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFlowRuleOutcome()>>(
			[this, request]()
			{
			return this->updateFlowRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayAuthConsumerOutcome MseClient::updateGatewayAuthConsumer(const UpdateGatewayAuthConsumerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayAuthConsumerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayAuthConsumerOutcome(UpdateGatewayAuthConsumerResult(outcome.result()));
	else
		return UpdateGatewayAuthConsumerOutcome(outcome.error());
}

void MseClient::updateGatewayAuthConsumerAsync(const UpdateGatewayAuthConsumerRequest& request, const UpdateGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayAuthConsumer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayAuthConsumerOutcomeCallable MseClient::updateGatewayAuthConsumerCallable(const UpdateGatewayAuthConsumerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayAuthConsumerOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayAuthConsumer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayAuthConsumerResourceOutcome MseClient::updateGatewayAuthConsumerResource(const UpdateGatewayAuthConsumerResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayAuthConsumerResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayAuthConsumerResourceOutcome(UpdateGatewayAuthConsumerResourceResult(outcome.result()));
	else
		return UpdateGatewayAuthConsumerResourceOutcome(outcome.error());
}

void MseClient::updateGatewayAuthConsumerResourceAsync(const UpdateGatewayAuthConsumerResourceRequest& request, const UpdateGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayAuthConsumerResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayAuthConsumerResourceOutcomeCallable MseClient::updateGatewayAuthConsumerResourceCallable(const UpdateGatewayAuthConsumerResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayAuthConsumerResourceOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayAuthConsumerResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayAuthConsumerResourceStatusOutcome MseClient::updateGatewayAuthConsumerResourceStatus(const UpdateGatewayAuthConsumerResourceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayAuthConsumerResourceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayAuthConsumerResourceStatusOutcome(UpdateGatewayAuthConsumerResourceStatusResult(outcome.result()));
	else
		return UpdateGatewayAuthConsumerResourceStatusOutcome(outcome.error());
}

void MseClient::updateGatewayAuthConsumerResourceStatusAsync(const UpdateGatewayAuthConsumerResourceStatusRequest& request, const UpdateGatewayAuthConsumerResourceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayAuthConsumerResourceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayAuthConsumerResourceStatusOutcomeCallable MseClient::updateGatewayAuthConsumerResourceStatusCallable(const UpdateGatewayAuthConsumerResourceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayAuthConsumerResourceStatusOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayAuthConsumerResourceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayAuthConsumerStatusOutcome MseClient::updateGatewayAuthConsumerStatus(const UpdateGatewayAuthConsumerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayAuthConsumerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayAuthConsumerStatusOutcome(UpdateGatewayAuthConsumerStatusResult(outcome.result()));
	else
		return UpdateGatewayAuthConsumerStatusOutcome(outcome.error());
}

void MseClient::updateGatewayAuthConsumerStatusAsync(const UpdateGatewayAuthConsumerStatusRequest& request, const UpdateGatewayAuthConsumerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayAuthConsumerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayAuthConsumerStatusOutcomeCallable MseClient::updateGatewayAuthConsumerStatusCallable(const UpdateGatewayAuthConsumerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayAuthConsumerStatusOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayAuthConsumerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayDomainOutcome MseClient::updateGatewayDomain(const UpdateGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayDomainOutcome(UpdateGatewayDomainResult(outcome.result()));
	else
		return UpdateGatewayDomainOutcome(outcome.error());
}

void MseClient::updateGatewayDomainAsync(const UpdateGatewayDomainRequest& request, const UpdateGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayDomainOutcomeCallable MseClient::updateGatewayDomainCallable(const UpdateGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayNameOutcome MseClient::updateGatewayName(const UpdateGatewayNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayNameOutcome(UpdateGatewayNameResult(outcome.result()));
	else
		return UpdateGatewayNameOutcome(outcome.error());
}

void MseClient::updateGatewayNameAsync(const UpdateGatewayNameRequest& request, const UpdateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayNameOutcomeCallable MseClient::updateGatewayNameCallable(const UpdateGatewayNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayNameOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayOptionOutcome MseClient::updateGatewayOption(const UpdateGatewayOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayOptionOutcome(UpdateGatewayOptionResult(outcome.result()));
	else
		return UpdateGatewayOptionOutcome(outcome.error());
}

void MseClient::updateGatewayOptionAsync(const UpdateGatewayOptionRequest& request, const UpdateGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayOptionOutcomeCallable MseClient::updateGatewayOptionCallable(const UpdateGatewayOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayOptionOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteOutcome MseClient::updateGatewayRoute(const UpdateGatewayRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteOutcome(UpdateGatewayRouteResult(outcome.result()));
	else
		return UpdateGatewayRouteOutcome(outcome.error());
}

void MseClient::updateGatewayRouteAsync(const UpdateGatewayRouteRequest& request, const UpdateGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteOutcomeCallable MseClient::updateGatewayRouteCallable(const UpdateGatewayRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteAuthOutcome MseClient::updateGatewayRouteAuth(const UpdateGatewayRouteAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteAuthOutcome(UpdateGatewayRouteAuthResult(outcome.result()));
	else
		return UpdateGatewayRouteAuthOutcome(outcome.error());
}

void MseClient::updateGatewayRouteAuthAsync(const UpdateGatewayRouteAuthRequest& request, const UpdateGatewayRouteAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteAuthOutcomeCallable MseClient::updateGatewayRouteAuthCallable(const UpdateGatewayRouteAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteAuthOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteCORSOutcome MseClient::updateGatewayRouteCORS(const UpdateGatewayRouteCORSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteCORSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteCORSOutcome(UpdateGatewayRouteCORSResult(outcome.result()));
	else
		return UpdateGatewayRouteCORSOutcome(outcome.error());
}

void MseClient::updateGatewayRouteCORSAsync(const UpdateGatewayRouteCORSRequest& request, const UpdateGatewayRouteCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteCORS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteCORSOutcomeCallable MseClient::updateGatewayRouteCORSCallable(const UpdateGatewayRouteCORSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteCORSOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteCORS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteHTTPRewriteOutcome MseClient::updateGatewayRouteHTTPRewrite(const UpdateGatewayRouteHTTPRewriteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteHTTPRewriteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteHTTPRewriteOutcome(UpdateGatewayRouteHTTPRewriteResult(outcome.result()));
	else
		return UpdateGatewayRouteHTTPRewriteOutcome(outcome.error());
}

void MseClient::updateGatewayRouteHTTPRewriteAsync(const UpdateGatewayRouteHTTPRewriteRequest& request, const UpdateGatewayRouteHTTPRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteHTTPRewrite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteHTTPRewriteOutcomeCallable MseClient::updateGatewayRouteHTTPRewriteCallable(const UpdateGatewayRouteHTTPRewriteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteHTTPRewriteOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteHTTPRewrite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteHeaderOpOutcome MseClient::updateGatewayRouteHeaderOp(const UpdateGatewayRouteHeaderOpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteHeaderOpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteHeaderOpOutcome(UpdateGatewayRouteHeaderOpResult(outcome.result()));
	else
		return UpdateGatewayRouteHeaderOpOutcome(outcome.error());
}

void MseClient::updateGatewayRouteHeaderOpAsync(const UpdateGatewayRouteHeaderOpRequest& request, const UpdateGatewayRouteHeaderOpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteHeaderOp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteHeaderOpOutcomeCallable MseClient::updateGatewayRouteHeaderOpCallable(const UpdateGatewayRouteHeaderOpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteHeaderOpOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteHeaderOp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteRetryOutcome MseClient::updateGatewayRouteRetry(const UpdateGatewayRouteRetryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteRetryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteRetryOutcome(UpdateGatewayRouteRetryResult(outcome.result()));
	else
		return UpdateGatewayRouteRetryOutcome(outcome.error());
}

void MseClient::updateGatewayRouteRetryAsync(const UpdateGatewayRouteRetryRequest& request, const UpdateGatewayRouteRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteRetry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteRetryOutcomeCallable MseClient::updateGatewayRouteRetryCallable(const UpdateGatewayRouteRetryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteRetryOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteRetry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteTimeoutOutcome MseClient::updateGatewayRouteTimeout(const UpdateGatewayRouteTimeoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteTimeoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteTimeoutOutcome(UpdateGatewayRouteTimeoutResult(outcome.result()));
	else
		return UpdateGatewayRouteTimeoutOutcome(outcome.error());
}

void MseClient::updateGatewayRouteTimeoutAsync(const UpdateGatewayRouteTimeoutRequest& request, const UpdateGatewayRouteTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteTimeout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteTimeoutOutcomeCallable MseClient::updateGatewayRouteTimeoutCallable(const UpdateGatewayRouteTimeoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteTimeoutOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteTimeout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteWafStatusOutcome MseClient::updateGatewayRouteWafStatus(const UpdateGatewayRouteWafStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteWafStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteWafStatusOutcome(UpdateGatewayRouteWafStatusResult(outcome.result()));
	else
		return UpdateGatewayRouteWafStatusOutcome(outcome.error());
}

void MseClient::updateGatewayRouteWafStatusAsync(const UpdateGatewayRouteWafStatusRequest& request, const UpdateGatewayRouteWafStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteWafStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteWafStatusOutcomeCallable MseClient::updateGatewayRouteWafStatusCallable(const UpdateGatewayRouteWafStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteWafStatusOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteWafStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayServiceTrafficPolicyOutcome MseClient::updateGatewayServiceTrafficPolicy(const UpdateGatewayServiceTrafficPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayServiceTrafficPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayServiceTrafficPolicyOutcome(UpdateGatewayServiceTrafficPolicyResult(outcome.result()));
	else
		return UpdateGatewayServiceTrafficPolicyOutcome(outcome.error());
}

void MseClient::updateGatewayServiceTrafficPolicyAsync(const UpdateGatewayServiceTrafficPolicyRequest& request, const UpdateGatewayServiceTrafficPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayServiceTrafficPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayServiceTrafficPolicyOutcomeCallable MseClient::updateGatewayServiceTrafficPolicyCallable(const UpdateGatewayServiceTrafficPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayServiceTrafficPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayServiceTrafficPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayServiceVersionOutcome MseClient::updateGatewayServiceVersion(const UpdateGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayServiceVersionOutcome(UpdateGatewayServiceVersionResult(outcome.result()));
	else
		return UpdateGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::updateGatewayServiceVersionAsync(const UpdateGatewayServiceVersionRequest& request, const UpdateGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayServiceVersionOutcomeCallable MseClient::updateGatewayServiceVersionCallable(const UpdateGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewaySpecOutcome MseClient::updateGatewaySpec(const UpdateGatewaySpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewaySpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewaySpecOutcome(UpdateGatewaySpecResult(outcome.result()));
	else
		return UpdateGatewaySpecOutcome(outcome.error());
}

void MseClient::updateGatewaySpecAsync(const UpdateGatewaySpecRequest& request, const UpdateGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewaySpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewaySpecOutcomeCallable MseClient::updateGatewaySpecCallable(const UpdateGatewaySpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewaySpecOutcome()>>(
			[this, request]()
			{
			return this->updateGatewaySpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateImageOutcome MseClient::updateImage(const UpdateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageOutcome(UpdateImageResult(outcome.result()));
	else
		return UpdateImageOutcome(outcome.error());
}

void MseClient::updateImageAsync(const UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateImageOutcomeCallable MseClient::updateImageCallable(const UpdateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageOutcome()>>(
			[this, request]()
			{
			return this->updateImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateMessageQueueRouteOutcome MseClient::updateMessageQueueRoute(const UpdateMessageQueueRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMessageQueueRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMessageQueueRouteOutcome(UpdateMessageQueueRouteResult(outcome.result()));
	else
		return UpdateMessageQueueRouteOutcome(outcome.error());
}

void MseClient::updateMessageQueueRouteAsync(const UpdateMessageQueueRouteRequest& request, const UpdateMessageQueueRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMessageQueueRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateMessageQueueRouteOutcomeCallable MseClient::updateMessageQueueRouteCallable(const UpdateMessageQueueRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMessageQueueRouteOutcome()>>(
			[this, request]()
			{
			return this->updateMessageQueueRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateMigrationTaskOutcome MseClient::updateMigrationTask(const UpdateMigrationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMigrationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMigrationTaskOutcome(UpdateMigrationTaskResult(outcome.result()));
	else
		return UpdateMigrationTaskOutcome(outcome.error());
}

void MseClient::updateMigrationTaskAsync(const UpdateMigrationTaskRequest& request, const UpdateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMigrationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateMigrationTaskOutcomeCallable MseClient::updateMigrationTaskCallable(const UpdateMigrationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMigrationTaskOutcome()>>(
			[this, request]()
			{
			return this->updateMigrationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosClusterOutcome MseClient::updateNacosCluster(const UpdateNacosClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosClusterOutcome(UpdateNacosClusterResult(outcome.result()));
	else
		return UpdateNacosClusterOutcome(outcome.error());
}

void MseClient::updateNacosClusterAsync(const UpdateNacosClusterRequest& request, const UpdateNacosClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosClusterOutcomeCallable MseClient::updateNacosClusterCallable(const UpdateNacosClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosClusterOutcome()>>(
			[this, request]()
			{
			return this->updateNacosCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosConfigOutcome MseClient::updateNacosConfig(const UpdateNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosConfigOutcome(UpdateNacosConfigResult(outcome.result()));
	else
		return UpdateNacosConfigOutcome(outcome.error());
}

void MseClient::updateNacosConfigAsync(const UpdateNacosConfigRequest& request, const UpdateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosConfigOutcomeCallable MseClient::updateNacosConfigCallable(const UpdateNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->updateNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosInstanceOutcome MseClient::updateNacosInstance(const UpdateNacosInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosInstanceOutcome(UpdateNacosInstanceResult(outcome.result()));
	else
		return UpdateNacosInstanceOutcome(outcome.error());
}

void MseClient::updateNacosInstanceAsync(const UpdateNacosInstanceRequest& request, const UpdateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosInstanceOutcomeCallable MseClient::updateNacosInstanceCallable(const UpdateNacosInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateNacosInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosServiceOutcome MseClient::updateNacosService(const UpdateNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosServiceOutcome(UpdateNacosServiceResult(outcome.result()));
	else
		return UpdateNacosServiceOutcome(outcome.error());
}

void MseClient::updateNacosServiceAsync(const UpdateNacosServiceRequest& request, const UpdateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosServiceOutcomeCallable MseClient::updateNacosServiceCallable(const UpdateNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->updateNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdatePluginConfigOutcome MseClient::updatePluginConfig(const UpdatePluginConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePluginConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePluginConfigOutcome(UpdatePluginConfigResult(outcome.result()));
	else
		return UpdatePluginConfigOutcome(outcome.error());
}

void MseClient::updatePluginConfigAsync(const UpdatePluginConfigRequest& request, const UpdatePluginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePluginConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdatePluginConfigOutcomeCallable MseClient::updatePluginConfigCallable(const UpdatePluginConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePluginConfigOutcome()>>(
			[this, request]()
			{
			return this->updatePluginConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateSSLCertOutcome MseClient::updateSSLCert(const UpdateSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSSLCertOutcome(UpdateSSLCertResult(outcome.result()));
	else
		return UpdateSSLCertOutcome(outcome.error());
}

void MseClient::updateSSLCertAsync(const UpdateSSLCertRequest& request, const UpdateSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateSSLCertOutcomeCallable MseClient::updateSSLCertCallable(const UpdateSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSSLCertOutcome()>>(
			[this, request]()
			{
			return this->updateSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateServiceSourceOutcome MseClient::updateServiceSource(const UpdateServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceSourceOutcome(UpdateServiceSourceResult(outcome.result()));
	else
		return UpdateServiceSourceOutcome(outcome.error());
}

void MseClient::updateServiceSourceAsync(const UpdateServiceSourceRequest& request, const UpdateServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateServiceSourceOutcomeCallable MseClient::updateServiceSourceCallable(const UpdateServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->updateServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateZnodeOutcome MseClient::updateZnode(const UpdateZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateZnodeOutcome(UpdateZnodeResult(outcome.result()));
	else
		return UpdateZnodeOutcome(outcome.error());
}

void MseClient::updateZnodeAsync(const UpdateZnodeRequest& request, const UpdateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateZnodeOutcomeCallable MseClient::updateZnodeCallable(const UpdateZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateZnodeOutcome()>>(
			[this, request]()
			{
			return this->updateZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpgradeClusterOutcome MseClient::upgradeCluster(const UpgradeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterOutcome(UpgradeClusterResult(outcome.result()));
	else
		return UpgradeClusterOutcome(outcome.error());
}

void MseClient::upgradeClusterAsync(const UpgradeClusterRequest& request, const UpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpgradeClusterOutcomeCallable MseClient::upgradeClusterCallable(const UpgradeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterOutcome()>>(
			[this, request]()
			{
			return this->upgradeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

