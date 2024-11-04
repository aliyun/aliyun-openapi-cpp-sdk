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

#include <alibabacloud/alb/AlbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

namespace
{
	const std::string SERVICE_NAME = "Alb";
}

AlbClient::AlbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alb");
}

AlbClient::AlbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alb");
}

AlbClient::AlbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alb");
}

AlbClient::~AlbClient()
{}

AlbClient::AddEntriesToAclOutcome AlbClient::addEntriesToAcl(const AddEntriesToAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEntriesToAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEntriesToAclOutcome(AddEntriesToAclResult(outcome.result()));
	else
		return AddEntriesToAclOutcome(outcome.error());
}

void AlbClient::addEntriesToAclAsync(const AddEntriesToAclRequest& request, const AddEntriesToAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEntriesToAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::AddEntriesToAclOutcomeCallable AlbClient::addEntriesToAclCallable(const AddEntriesToAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEntriesToAclOutcome()>>(
			[this, request]()
			{
			return this->addEntriesToAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::AddServersToServerGroupOutcome AlbClient::addServersToServerGroup(const AddServersToServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServersToServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServersToServerGroupOutcome(AddServersToServerGroupResult(outcome.result()));
	else
		return AddServersToServerGroupOutcome(outcome.error());
}

void AlbClient::addServersToServerGroupAsync(const AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServersToServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::AddServersToServerGroupOutcomeCallable AlbClient::addServersToServerGroupCallable(const AddServersToServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServersToServerGroupOutcome()>>(
			[this, request]()
			{
			return this->addServersToServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ApplyHealthCheckTemplateToServerGroupOutcome AlbClient::applyHealthCheckTemplateToServerGroup(const ApplyHealthCheckTemplateToServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyHealthCheckTemplateToServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyHealthCheckTemplateToServerGroupOutcome(ApplyHealthCheckTemplateToServerGroupResult(outcome.result()));
	else
		return ApplyHealthCheckTemplateToServerGroupOutcome(outcome.error());
}

void AlbClient::applyHealthCheckTemplateToServerGroupAsync(const ApplyHealthCheckTemplateToServerGroupRequest& request, const ApplyHealthCheckTemplateToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyHealthCheckTemplateToServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ApplyHealthCheckTemplateToServerGroupOutcomeCallable AlbClient::applyHealthCheckTemplateToServerGroupCallable(const ApplyHealthCheckTemplateToServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyHealthCheckTemplateToServerGroupOutcome()>>(
			[this, request]()
			{
			return this->applyHealthCheckTemplateToServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::AssociateAclsWithListenerOutcome AlbClient::associateAclsWithListener(const AssociateAclsWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateAclsWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateAclsWithListenerOutcome(AssociateAclsWithListenerResult(outcome.result()));
	else
		return AssociateAclsWithListenerOutcome(outcome.error());
}

void AlbClient::associateAclsWithListenerAsync(const AssociateAclsWithListenerRequest& request, const AssociateAclsWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAclsWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::AssociateAclsWithListenerOutcomeCallable AlbClient::associateAclsWithListenerCallable(const AssociateAclsWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAclsWithListenerOutcome()>>(
			[this, request]()
			{
			return this->associateAclsWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::AssociateAdditionalCertificatesWithListenerOutcome AlbClient::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateAdditionalCertificatesWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateAdditionalCertificatesWithListenerOutcome(AssociateAdditionalCertificatesWithListenerResult(outcome.result()));
	else
		return AssociateAdditionalCertificatesWithListenerOutcome(outcome.error());
}

void AlbClient::associateAdditionalCertificatesWithListenerAsync(const AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAdditionalCertificatesWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::AssociateAdditionalCertificatesWithListenerOutcomeCallable AlbClient::associateAdditionalCertificatesWithListenerCallable(const AssociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAdditionalCertificatesWithListenerOutcome()>>(
			[this, request]()
			{
			return this->associateAdditionalCertificatesWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::AttachCommonBandwidthPackageToLoadBalancerOutcome AlbClient::attachCommonBandwidthPackageToLoadBalancer(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(AttachCommonBandwidthPackageToLoadBalancerResult(outcome.result()));
	else
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(outcome.error());
}

void AlbClient::attachCommonBandwidthPackageToLoadBalancerAsync(const AttachCommonBandwidthPackageToLoadBalancerRequest& request, const AttachCommonBandwidthPackageToLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachCommonBandwidthPackageToLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable AlbClient::attachCommonBandwidthPackageToLoadBalancerCallable(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachCommonBandwidthPackageToLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->attachCommonBandwidthPackageToLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CancelShiftLoadBalancerZonesOutcome AlbClient::cancelShiftLoadBalancerZones(const CancelShiftLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelShiftLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelShiftLoadBalancerZonesOutcome(CancelShiftLoadBalancerZonesResult(outcome.result()));
	else
		return CancelShiftLoadBalancerZonesOutcome(outcome.error());
}

void AlbClient::cancelShiftLoadBalancerZonesAsync(const CancelShiftLoadBalancerZonesRequest& request, const CancelShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelShiftLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CancelShiftLoadBalancerZonesOutcomeCallable AlbClient::cancelShiftLoadBalancerZonesCallable(const CancelShiftLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelShiftLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->cancelShiftLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateAScriptsOutcome AlbClient::createAScripts(const CreateAScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAScriptsOutcome(CreateAScriptsResult(outcome.result()));
	else
		return CreateAScriptsOutcome(outcome.error());
}

void AlbClient::createAScriptsAsync(const CreateAScriptsRequest& request, const CreateAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateAScriptsOutcomeCallable AlbClient::createAScriptsCallable(const CreateAScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAScriptsOutcome()>>(
			[this, request]()
			{
			return this->createAScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateAclOutcome AlbClient::createAcl(const CreateAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAclOutcome(CreateAclResult(outcome.result()));
	else
		return CreateAclOutcome(outcome.error());
}

void AlbClient::createAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateAclOutcomeCallable AlbClient::createAclCallable(const CreateAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAclOutcome()>>(
			[this, request]()
			{
			return this->createAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateHealthCheckTemplateOutcome AlbClient::createHealthCheckTemplate(const CreateHealthCheckTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHealthCheckTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHealthCheckTemplateOutcome(CreateHealthCheckTemplateResult(outcome.result()));
	else
		return CreateHealthCheckTemplateOutcome(outcome.error());
}

void AlbClient::createHealthCheckTemplateAsync(const CreateHealthCheckTemplateRequest& request, const CreateHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHealthCheckTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateHealthCheckTemplateOutcomeCallable AlbClient::createHealthCheckTemplateCallable(const CreateHealthCheckTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHealthCheckTemplateOutcome()>>(
			[this, request]()
			{
			return this->createHealthCheckTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateListenerOutcome AlbClient::createListener(const CreateListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateListenerOutcome(CreateListenerResult(outcome.result()));
	else
		return CreateListenerOutcome(outcome.error());
}

void AlbClient::createListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateListenerOutcomeCallable AlbClient::createListenerCallable(const CreateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
			[this, request]()
			{
			return this->createListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateLoadBalancerOutcome AlbClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
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

void AlbClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateLoadBalancerOutcomeCallable AlbClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateRuleOutcome AlbClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void AlbClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateRuleOutcomeCallable AlbClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateRulesOutcome AlbClient::createRules(const CreateRulesRequest &request) const
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

void AlbClient::createRulesAsync(const CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateRulesOutcomeCallable AlbClient::createRulesCallable(const CreateRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRulesOutcome()>>(
			[this, request]()
			{
			return this->createRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateSecurityPolicyOutcome AlbClient::createSecurityPolicy(const CreateSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecurityPolicyOutcome(CreateSecurityPolicyResult(outcome.result()));
	else
		return CreateSecurityPolicyOutcome(outcome.error());
}

void AlbClient::createSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateSecurityPolicyOutcomeCallable AlbClient::createSecurityPolicyCallable(const CreateSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->createSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::CreateServerGroupOutcome AlbClient::createServerGroup(const CreateServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerGroupOutcome(CreateServerGroupResult(outcome.result()));
	else
		return CreateServerGroupOutcome(outcome.error());
}

void AlbClient::createServerGroupAsync(const CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::CreateServerGroupOutcomeCallable AlbClient::createServerGroupCallable(const CreateServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerGroupOutcome()>>(
			[this, request]()
			{
			return this->createServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteAScriptsOutcome AlbClient::deleteAScripts(const DeleteAScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAScriptsOutcome(DeleteAScriptsResult(outcome.result()));
	else
		return DeleteAScriptsOutcome(outcome.error());
}

void AlbClient::deleteAScriptsAsync(const DeleteAScriptsRequest& request, const DeleteAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteAScriptsOutcomeCallable AlbClient::deleteAScriptsCallable(const DeleteAScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAScriptsOutcome()>>(
			[this, request]()
			{
			return this->deleteAScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteAclOutcome AlbClient::deleteAcl(const DeleteAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAclOutcome(DeleteAclResult(outcome.result()));
	else
		return DeleteAclOutcome(outcome.error());
}

void AlbClient::deleteAclAsync(const DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteAclOutcomeCallable AlbClient::deleteAclCallable(const DeleteAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAclOutcome()>>(
			[this, request]()
			{
			return this->deleteAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteHealthCheckTemplatesOutcome AlbClient::deleteHealthCheckTemplates(const DeleteHealthCheckTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHealthCheckTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHealthCheckTemplatesOutcome(DeleteHealthCheckTemplatesResult(outcome.result()));
	else
		return DeleteHealthCheckTemplatesOutcome(outcome.error());
}

void AlbClient::deleteHealthCheckTemplatesAsync(const DeleteHealthCheckTemplatesRequest& request, const DeleteHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHealthCheckTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteHealthCheckTemplatesOutcomeCallable AlbClient::deleteHealthCheckTemplatesCallable(const DeleteHealthCheckTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHealthCheckTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteHealthCheckTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteListenerOutcome AlbClient::deleteListener(const DeleteListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteListenerOutcome(DeleteListenerResult(outcome.result()));
	else
		return DeleteListenerOutcome(outcome.error());
}

void AlbClient::deleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteListenerOutcomeCallable AlbClient::deleteListenerCallable(const DeleteListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteLoadBalancerOutcome AlbClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) const
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

void AlbClient::deleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteLoadBalancerOutcomeCallable AlbClient::deleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteRuleOutcome AlbClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void AlbClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteRuleOutcomeCallable AlbClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteRulesOutcome AlbClient::deleteRules(const DeleteRulesRequest &request) const
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

void AlbClient::deleteRulesAsync(const DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteRulesOutcomeCallable AlbClient::deleteRulesCallable(const DeleteRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteSecurityPolicyOutcome AlbClient::deleteSecurityPolicy(const DeleteSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityPolicyOutcome(DeleteSecurityPolicyResult(outcome.result()));
	else
		return DeleteSecurityPolicyOutcome(outcome.error());
}

void AlbClient::deleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteSecurityPolicyOutcomeCallable AlbClient::deleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DeleteServerGroupOutcome AlbClient::deleteServerGroup(const DeleteServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServerGroupOutcome(DeleteServerGroupResult(outcome.result()));
	else
		return DeleteServerGroupOutcome(outcome.error());
}

void AlbClient::deleteServerGroupAsync(const DeleteServerGroupRequest& request, const DeleteServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DeleteServerGroupOutcomeCallable AlbClient::deleteServerGroupCallable(const DeleteServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DescribeRegionsOutcome AlbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void AlbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DescribeRegionsOutcomeCallable AlbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DescribeZonesOutcome AlbClient::describeZones(const DescribeZonesRequest &request) const
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

void AlbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DescribeZonesOutcomeCallable AlbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DetachCommonBandwidthPackageFromLoadBalancerOutcome AlbClient::detachCommonBandwidthPackageFromLoadBalancer(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(DetachCommonBandwidthPackageFromLoadBalancerResult(outcome.result()));
	else
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(outcome.error());
}

void AlbClient::detachCommonBandwidthPackageFromLoadBalancerAsync(const DetachCommonBandwidthPackageFromLoadBalancerRequest& request, const DetachCommonBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachCommonBandwidthPackageFromLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DetachCommonBandwidthPackageFromLoadBalancerOutcomeCallable AlbClient::detachCommonBandwidthPackageFromLoadBalancerCallable(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachCommonBandwidthPackageFromLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->detachCommonBandwidthPackageFromLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DisableDeletionProtectionOutcome AlbClient::disableDeletionProtection(const DisableDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDeletionProtectionOutcome(DisableDeletionProtectionResult(outcome.result()));
	else
		return DisableDeletionProtectionOutcome(outcome.error());
}

void AlbClient::disableDeletionProtectionAsync(const DisableDeletionProtectionRequest& request, const DisableDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DisableDeletionProtectionOutcomeCallable AlbClient::disableDeletionProtectionCallable(const DisableDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->disableDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DisableLoadBalancerAccessLogOutcome AlbClient::disableLoadBalancerAccessLog(const DisableLoadBalancerAccessLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLoadBalancerAccessLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLoadBalancerAccessLogOutcome(DisableLoadBalancerAccessLogResult(outcome.result()));
	else
		return DisableLoadBalancerAccessLogOutcome(outcome.error());
}

void AlbClient::disableLoadBalancerAccessLogAsync(const DisableLoadBalancerAccessLogRequest& request, const DisableLoadBalancerAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLoadBalancerAccessLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DisableLoadBalancerAccessLogOutcomeCallable AlbClient::disableLoadBalancerAccessLogCallable(const DisableLoadBalancerAccessLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLoadBalancerAccessLogOutcome()>>(
			[this, request]()
			{
			return this->disableLoadBalancerAccessLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DisableLoadBalancerIpv6InternetOutcome AlbClient::disableLoadBalancerIpv6Internet(const DisableLoadBalancerIpv6InternetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLoadBalancerIpv6InternetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLoadBalancerIpv6InternetOutcome(DisableLoadBalancerIpv6InternetResult(outcome.result()));
	else
		return DisableLoadBalancerIpv6InternetOutcome(outcome.error());
}

void AlbClient::disableLoadBalancerIpv6InternetAsync(const DisableLoadBalancerIpv6InternetRequest& request, const DisableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLoadBalancerIpv6Internet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DisableLoadBalancerIpv6InternetOutcomeCallable AlbClient::disableLoadBalancerIpv6InternetCallable(const DisableLoadBalancerIpv6InternetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLoadBalancerIpv6InternetOutcome()>>(
			[this, request]()
			{
			return this->disableLoadBalancerIpv6Internet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DissociateAclsFromListenerOutcome AlbClient::dissociateAclsFromListener(const DissociateAclsFromListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateAclsFromListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateAclsFromListenerOutcome(DissociateAclsFromListenerResult(outcome.result()));
	else
		return DissociateAclsFromListenerOutcome(outcome.error());
}

void AlbClient::dissociateAclsFromListenerAsync(const DissociateAclsFromListenerRequest& request, const DissociateAclsFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateAclsFromListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DissociateAclsFromListenerOutcomeCallable AlbClient::dissociateAclsFromListenerCallable(const DissociateAclsFromListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateAclsFromListenerOutcome()>>(
			[this, request]()
			{
			return this->dissociateAclsFromListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::DissociateAdditionalCertificatesFromListenerOutcome AlbClient::dissociateAdditionalCertificatesFromListener(const DissociateAdditionalCertificatesFromListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateAdditionalCertificatesFromListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateAdditionalCertificatesFromListenerOutcome(DissociateAdditionalCertificatesFromListenerResult(outcome.result()));
	else
		return DissociateAdditionalCertificatesFromListenerOutcome(outcome.error());
}

void AlbClient::dissociateAdditionalCertificatesFromListenerAsync(const DissociateAdditionalCertificatesFromListenerRequest& request, const DissociateAdditionalCertificatesFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateAdditionalCertificatesFromListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::DissociateAdditionalCertificatesFromListenerOutcomeCallable AlbClient::dissociateAdditionalCertificatesFromListenerCallable(const DissociateAdditionalCertificatesFromListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateAdditionalCertificatesFromListenerOutcome()>>(
			[this, request]()
			{
			return this->dissociateAdditionalCertificatesFromListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::EnableDeletionProtectionOutcome AlbClient::enableDeletionProtection(const EnableDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeletionProtectionOutcome(EnableDeletionProtectionResult(outcome.result()));
	else
		return EnableDeletionProtectionOutcome(outcome.error());
}

void AlbClient::enableDeletionProtectionAsync(const EnableDeletionProtectionRequest& request, const EnableDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::EnableDeletionProtectionOutcomeCallable AlbClient::enableDeletionProtectionCallable(const EnableDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->enableDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::EnableLoadBalancerAccessLogOutcome AlbClient::enableLoadBalancerAccessLog(const EnableLoadBalancerAccessLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLoadBalancerAccessLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLoadBalancerAccessLogOutcome(EnableLoadBalancerAccessLogResult(outcome.result()));
	else
		return EnableLoadBalancerAccessLogOutcome(outcome.error());
}

void AlbClient::enableLoadBalancerAccessLogAsync(const EnableLoadBalancerAccessLogRequest& request, const EnableLoadBalancerAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLoadBalancerAccessLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::EnableLoadBalancerAccessLogOutcomeCallable AlbClient::enableLoadBalancerAccessLogCallable(const EnableLoadBalancerAccessLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLoadBalancerAccessLogOutcome()>>(
			[this, request]()
			{
			return this->enableLoadBalancerAccessLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::EnableLoadBalancerIpv6InternetOutcome AlbClient::enableLoadBalancerIpv6Internet(const EnableLoadBalancerIpv6InternetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLoadBalancerIpv6InternetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLoadBalancerIpv6InternetOutcome(EnableLoadBalancerIpv6InternetResult(outcome.result()));
	else
		return EnableLoadBalancerIpv6InternetOutcome(outcome.error());
}

void AlbClient::enableLoadBalancerIpv6InternetAsync(const EnableLoadBalancerIpv6InternetRequest& request, const EnableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLoadBalancerIpv6Internet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::EnableLoadBalancerIpv6InternetOutcomeCallable AlbClient::enableLoadBalancerIpv6InternetCallable(const EnableLoadBalancerIpv6InternetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLoadBalancerIpv6InternetOutcome()>>(
			[this, request]()
			{
			return this->enableLoadBalancerIpv6Internet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::GetHealthCheckTemplateAttributeOutcome AlbClient::getHealthCheckTemplateAttribute(const GetHealthCheckTemplateAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHealthCheckTemplateAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHealthCheckTemplateAttributeOutcome(GetHealthCheckTemplateAttributeResult(outcome.result()));
	else
		return GetHealthCheckTemplateAttributeOutcome(outcome.error());
}

void AlbClient::getHealthCheckTemplateAttributeAsync(const GetHealthCheckTemplateAttributeRequest& request, const GetHealthCheckTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHealthCheckTemplateAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::GetHealthCheckTemplateAttributeOutcomeCallable AlbClient::getHealthCheckTemplateAttributeCallable(const GetHealthCheckTemplateAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHealthCheckTemplateAttributeOutcome()>>(
			[this, request]()
			{
			return this->getHealthCheckTemplateAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::GetListenerAttributeOutcome AlbClient::getListenerAttribute(const GetListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerAttributeOutcome(GetListenerAttributeResult(outcome.result()));
	else
		return GetListenerAttributeOutcome(outcome.error());
}

void AlbClient::getListenerAttributeAsync(const GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::GetListenerAttributeOutcomeCallable AlbClient::getListenerAttributeCallable(const GetListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::GetListenerHealthStatusOutcome AlbClient::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerHealthStatusOutcome(GetListenerHealthStatusResult(outcome.result()));
	else
		return GetListenerHealthStatusOutcome(outcome.error());
}

void AlbClient::getListenerHealthStatusAsync(const GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::GetListenerHealthStatusOutcomeCallable AlbClient::getListenerHealthStatusCallable(const GetListenerHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->getListenerHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::GetLoadBalancerAttributeOutcome AlbClient::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(GetLoadBalancerAttributeResult(outcome.result()));
	else
		return GetLoadBalancerAttributeOutcome(outcome.error());
}

void AlbClient::getLoadBalancerAttributeAsync(const GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::GetLoadBalancerAttributeOutcomeCallable AlbClient::getLoadBalancerAttributeCallable(const GetLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListAScriptsOutcome AlbClient::listAScripts(const ListAScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAScriptsOutcome(ListAScriptsResult(outcome.result()));
	else
		return ListAScriptsOutcome(outcome.error());
}

void AlbClient::listAScriptsAsync(const ListAScriptsRequest& request, const ListAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListAScriptsOutcomeCallable AlbClient::listAScriptsCallable(const ListAScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAScriptsOutcome()>>(
			[this, request]()
			{
			return this->listAScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListAclEntriesOutcome AlbClient::listAclEntries(const ListAclEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAclEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAclEntriesOutcome(ListAclEntriesResult(outcome.result()));
	else
		return ListAclEntriesOutcome(outcome.error());
}

void AlbClient::listAclEntriesAsync(const ListAclEntriesRequest& request, const ListAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAclEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListAclEntriesOutcomeCallable AlbClient::listAclEntriesCallable(const ListAclEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAclEntriesOutcome()>>(
			[this, request]()
			{
			return this->listAclEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListAclRelationsOutcome AlbClient::listAclRelations(const ListAclRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAclRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAclRelationsOutcome(ListAclRelationsResult(outcome.result()));
	else
		return ListAclRelationsOutcome(outcome.error());
}

void AlbClient::listAclRelationsAsync(const ListAclRelationsRequest& request, const ListAclRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAclRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListAclRelationsOutcomeCallable AlbClient::listAclRelationsCallable(const ListAclRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAclRelationsOutcome()>>(
			[this, request]()
			{
			return this->listAclRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListAclsOutcome AlbClient::listAcls(const ListAclsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAclsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAclsOutcome(ListAclsResult(outcome.result()));
	else
		return ListAclsOutcome(outcome.error());
}

void AlbClient::listAclsAsync(const ListAclsRequest& request, const ListAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAcls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListAclsOutcomeCallable AlbClient::listAclsCallable(const ListAclsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAclsOutcome()>>(
			[this, request]()
			{
			return this->listAcls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListAsynJobsOutcome AlbClient::listAsynJobs(const ListAsynJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAsynJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAsynJobsOutcome(ListAsynJobsResult(outcome.result()));
	else
		return ListAsynJobsOutcome(outcome.error());
}

void AlbClient::listAsynJobsAsync(const ListAsynJobsRequest& request, const ListAsynJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAsynJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListAsynJobsOutcomeCallable AlbClient::listAsynJobsCallable(const ListAsynJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAsynJobsOutcome()>>(
			[this, request]()
			{
			return this->listAsynJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListHealthCheckTemplatesOutcome AlbClient::listHealthCheckTemplates(const ListHealthCheckTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHealthCheckTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHealthCheckTemplatesOutcome(ListHealthCheckTemplatesResult(outcome.result()));
	else
		return ListHealthCheckTemplatesOutcome(outcome.error());
}

void AlbClient::listHealthCheckTemplatesAsync(const ListHealthCheckTemplatesRequest& request, const ListHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHealthCheckTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListHealthCheckTemplatesOutcomeCallable AlbClient::listHealthCheckTemplatesCallable(const ListHealthCheckTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHealthCheckTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listHealthCheckTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListListenerCertificatesOutcome AlbClient::listListenerCertificates(const ListListenerCertificatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenerCertificatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenerCertificatesOutcome(ListListenerCertificatesResult(outcome.result()));
	else
		return ListListenerCertificatesOutcome(outcome.error());
}

void AlbClient::listListenerCertificatesAsync(const ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenerCertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListListenerCertificatesOutcomeCallable AlbClient::listListenerCertificatesCallable(const ListListenerCertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenerCertificatesOutcome()>>(
			[this, request]()
			{
			return this->listListenerCertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListListenersOutcome AlbClient::listListeners(const ListListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersOutcome(ListListenersResult(outcome.result()));
	else
		return ListListenersOutcome(outcome.error());
}

void AlbClient::listListenersAsync(const ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListListenersOutcomeCallable AlbClient::listListenersCallable(const ListListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersOutcome()>>(
			[this, request]()
			{
			return this->listListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListLoadBalancersOutcome AlbClient::listLoadBalancers(const ListLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLoadBalancersOutcome(ListLoadBalancersResult(outcome.result()));
	else
		return ListLoadBalancersOutcome(outcome.error());
}

void AlbClient::listLoadBalancersAsync(const ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListLoadBalancersOutcomeCallable AlbClient::listLoadBalancersCallable(const ListLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->listLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListRulesOutcome AlbClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void AlbClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListRulesOutcomeCallable AlbClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListSecurityPoliciesOutcome AlbClient::listSecurityPolicies(const ListSecurityPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityPoliciesOutcome(ListSecurityPoliciesResult(outcome.result()));
	else
		return ListSecurityPoliciesOutcome(outcome.error());
}

void AlbClient::listSecurityPoliciesAsync(const ListSecurityPoliciesRequest& request, const ListSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListSecurityPoliciesOutcomeCallable AlbClient::listSecurityPoliciesCallable(const ListSecurityPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listSecurityPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListSecurityPolicyRelationsOutcome AlbClient::listSecurityPolicyRelations(const ListSecurityPolicyRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityPolicyRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityPolicyRelationsOutcome(ListSecurityPolicyRelationsResult(outcome.result()));
	else
		return ListSecurityPolicyRelationsOutcome(outcome.error());
}

void AlbClient::listSecurityPolicyRelationsAsync(const ListSecurityPolicyRelationsRequest& request, const ListSecurityPolicyRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityPolicyRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListSecurityPolicyRelationsOutcomeCallable AlbClient::listSecurityPolicyRelationsCallable(const ListSecurityPolicyRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityPolicyRelationsOutcome()>>(
			[this, request]()
			{
			return this->listSecurityPolicyRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListServerGroupServersOutcome AlbClient::listServerGroupServers(const ListServerGroupServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupServersOutcome(ListServerGroupServersResult(outcome.result()));
	else
		return ListServerGroupServersOutcome(outcome.error());
}

void AlbClient::listServerGroupServersAsync(const ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroupServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListServerGroupServersOutcomeCallable AlbClient::listServerGroupServersCallable(const ListServerGroupServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupServersOutcome()>>(
			[this, request]()
			{
			return this->listServerGroupServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListServerGroupsOutcome AlbClient::listServerGroups(const ListServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupsOutcome(ListServerGroupsResult(outcome.result()));
	else
		return ListServerGroupsOutcome(outcome.error());
}

void AlbClient::listServerGroupsAsync(const ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListServerGroupsOutcomeCallable AlbClient::listServerGroupsCallable(const ListServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->listServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListSystemSecurityPoliciesOutcome AlbClient::listSystemSecurityPolicies(const ListSystemSecurityPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemSecurityPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemSecurityPoliciesOutcome(ListSystemSecurityPoliciesResult(outcome.result()));
	else
		return ListSystemSecurityPoliciesOutcome(outcome.error());
}

void AlbClient::listSystemSecurityPoliciesAsync(const ListSystemSecurityPoliciesRequest& request, const ListSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemSecurityPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListSystemSecurityPoliciesOutcomeCallable AlbClient::listSystemSecurityPoliciesCallable(const ListSystemSecurityPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemSecurityPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listSystemSecurityPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListTagKeysOutcome AlbClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void AlbClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListTagKeysOutcomeCallable AlbClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListTagResourcesOutcome AlbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void AlbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListTagResourcesOutcomeCallable AlbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ListTagValuesOutcome AlbClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void AlbClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ListTagValuesOutcomeCallable AlbClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::LoadBalancerJoinSecurityGroupOutcome AlbClient::loadBalancerJoinSecurityGroup(const LoadBalancerJoinSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoadBalancerJoinSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoadBalancerJoinSecurityGroupOutcome(LoadBalancerJoinSecurityGroupResult(outcome.result()));
	else
		return LoadBalancerJoinSecurityGroupOutcome(outcome.error());
}

void AlbClient::loadBalancerJoinSecurityGroupAsync(const LoadBalancerJoinSecurityGroupRequest& request, const LoadBalancerJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loadBalancerJoinSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::LoadBalancerJoinSecurityGroupOutcomeCallable AlbClient::loadBalancerJoinSecurityGroupCallable(const LoadBalancerJoinSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoadBalancerJoinSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->loadBalancerJoinSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::LoadBalancerLeaveSecurityGroupOutcome AlbClient::loadBalancerLeaveSecurityGroup(const LoadBalancerLeaveSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoadBalancerLeaveSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoadBalancerLeaveSecurityGroupOutcome(LoadBalancerLeaveSecurityGroupResult(outcome.result()));
	else
		return LoadBalancerLeaveSecurityGroupOutcome(outcome.error());
}

void AlbClient::loadBalancerLeaveSecurityGroupAsync(const LoadBalancerLeaveSecurityGroupRequest& request, const LoadBalancerLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loadBalancerLeaveSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::LoadBalancerLeaveSecurityGroupOutcomeCallable AlbClient::loadBalancerLeaveSecurityGroupCallable(const LoadBalancerLeaveSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoadBalancerLeaveSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->loadBalancerLeaveSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::MoveResourceGroupOutcome AlbClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
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

void AlbClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::MoveResourceGroupOutcomeCallable AlbClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::RemoveEntriesFromAclOutcome AlbClient::removeEntriesFromAcl(const RemoveEntriesFromAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEntriesFromAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEntriesFromAclOutcome(RemoveEntriesFromAclResult(outcome.result()));
	else
		return RemoveEntriesFromAclOutcome(outcome.error());
}

void AlbClient::removeEntriesFromAclAsync(const RemoveEntriesFromAclRequest& request, const RemoveEntriesFromAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEntriesFromAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::RemoveEntriesFromAclOutcomeCallable AlbClient::removeEntriesFromAclCallable(const RemoveEntriesFromAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEntriesFromAclOutcome()>>(
			[this, request]()
			{
			return this->removeEntriesFromAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::RemoveServersFromServerGroupOutcome AlbClient::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(RemoveServersFromServerGroupResult(outcome.result()));
	else
		return RemoveServersFromServerGroupOutcome(outcome.error());
}

void AlbClient::removeServersFromServerGroupAsync(const RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeServersFromServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::RemoveServersFromServerGroupOutcomeCallable AlbClient::removeServersFromServerGroupCallable(const RemoveServersFromServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveServersFromServerGroupOutcome()>>(
			[this, request]()
			{
			return this->removeServersFromServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::ReplaceServersInServerGroupOutcome AlbClient::replaceServersInServerGroup(const ReplaceServersInServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceServersInServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceServersInServerGroupOutcome(ReplaceServersInServerGroupResult(outcome.result()));
	else
		return ReplaceServersInServerGroupOutcome(outcome.error());
}

void AlbClient::replaceServersInServerGroupAsync(const ReplaceServersInServerGroupRequest& request, const ReplaceServersInServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceServersInServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::ReplaceServersInServerGroupOutcomeCallable AlbClient::replaceServersInServerGroupCallable(const ReplaceServersInServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceServersInServerGroupOutcome()>>(
			[this, request]()
			{
			return this->replaceServersInServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::StartListenerOutcome AlbClient::startListener(const StartListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartListenerOutcome(StartListenerResult(outcome.result()));
	else
		return StartListenerOutcome(outcome.error());
}

void AlbClient::startListenerAsync(const StartListenerRequest& request, const StartListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::StartListenerOutcomeCallable AlbClient::startListenerCallable(const StartListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartListenerOutcome()>>(
			[this, request]()
			{
			return this->startListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::StartShiftLoadBalancerZonesOutcome AlbClient::startShiftLoadBalancerZones(const StartShiftLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartShiftLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartShiftLoadBalancerZonesOutcome(StartShiftLoadBalancerZonesResult(outcome.result()));
	else
		return StartShiftLoadBalancerZonesOutcome(outcome.error());
}

void AlbClient::startShiftLoadBalancerZonesAsync(const StartShiftLoadBalancerZonesRequest& request, const StartShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startShiftLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::StartShiftLoadBalancerZonesOutcomeCallable AlbClient::startShiftLoadBalancerZonesCallable(const StartShiftLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartShiftLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->startShiftLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::StopListenerOutcome AlbClient::stopListener(const StopListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopListenerOutcome(StopListenerResult(outcome.result()));
	else
		return StopListenerOutcome(outcome.error());
}

void AlbClient::stopListenerAsync(const StopListenerRequest& request, const StopListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::StopListenerOutcomeCallable AlbClient::stopListenerCallable(const StopListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopListenerOutcome()>>(
			[this, request]()
			{
			return this->stopListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::TagResourcesOutcome AlbClient::tagResources(const TagResourcesRequest &request) const
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

void AlbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::TagResourcesOutcomeCallable AlbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UnTagResourcesOutcome AlbClient::unTagResources(const UnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagResourcesOutcome(UnTagResourcesResult(outcome.result()));
	else
		return UnTagResourcesOutcome(outcome.error());
}

void AlbClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UnTagResourcesOutcomeCallable AlbClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateAScriptsOutcome AlbClient::updateAScripts(const UpdateAScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAScriptsOutcome(UpdateAScriptsResult(outcome.result()));
	else
		return UpdateAScriptsOutcome(outcome.error());
}

void AlbClient::updateAScriptsAsync(const UpdateAScriptsRequest& request, const UpdateAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateAScriptsOutcomeCallable AlbClient::updateAScriptsCallable(const UpdateAScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAScriptsOutcome()>>(
			[this, request]()
			{
			return this->updateAScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateAclAttributeOutcome AlbClient::updateAclAttribute(const UpdateAclAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAclAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAclAttributeOutcome(UpdateAclAttributeResult(outcome.result()));
	else
		return UpdateAclAttributeOutcome(outcome.error());
}

void AlbClient::updateAclAttributeAsync(const UpdateAclAttributeRequest& request, const UpdateAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAclAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateAclAttributeOutcomeCallable AlbClient::updateAclAttributeCallable(const UpdateAclAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAclAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateAclAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateHealthCheckTemplateAttributeOutcome AlbClient::updateHealthCheckTemplateAttribute(const UpdateHealthCheckTemplateAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHealthCheckTemplateAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHealthCheckTemplateAttributeOutcome(UpdateHealthCheckTemplateAttributeResult(outcome.result()));
	else
		return UpdateHealthCheckTemplateAttributeOutcome(outcome.error());
}

void AlbClient::updateHealthCheckTemplateAttributeAsync(const UpdateHealthCheckTemplateAttributeRequest& request, const UpdateHealthCheckTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHealthCheckTemplateAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateHealthCheckTemplateAttributeOutcomeCallable AlbClient::updateHealthCheckTemplateAttributeCallable(const UpdateHealthCheckTemplateAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHealthCheckTemplateAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateHealthCheckTemplateAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateListenerAttributeOutcome AlbClient::updateListenerAttribute(const UpdateListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerAttributeOutcome(UpdateListenerAttributeResult(outcome.result()));
	else
		return UpdateListenerAttributeOutcome(outcome.error());
}

void AlbClient::updateListenerAttributeAsync(const UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateListenerAttributeOutcomeCallable AlbClient::updateListenerAttributeCallable(const UpdateListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateListenerLogConfigOutcome AlbClient::updateListenerLogConfig(const UpdateListenerLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerLogConfigOutcome(UpdateListenerLogConfigResult(outcome.result()));
	else
		return UpdateListenerLogConfigOutcome(outcome.error());
}

void AlbClient::updateListenerLogConfigAsync(const UpdateListenerLogConfigRequest& request, const UpdateListenerLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListenerLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateListenerLogConfigOutcomeCallable AlbClient::updateListenerLogConfigCallable(const UpdateListenerLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerLogConfigOutcome()>>(
			[this, request]()
			{
			return this->updateListenerLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateLoadBalancerAddressTypeConfigOutcome AlbClient::updateLoadBalancerAddressTypeConfig(const UpdateLoadBalancerAddressTypeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerAddressTypeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerAddressTypeConfigOutcome(UpdateLoadBalancerAddressTypeConfigResult(outcome.result()));
	else
		return UpdateLoadBalancerAddressTypeConfigOutcome(outcome.error());
}

void AlbClient::updateLoadBalancerAddressTypeConfigAsync(const UpdateLoadBalancerAddressTypeConfigRequest& request, const UpdateLoadBalancerAddressTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerAddressTypeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateLoadBalancerAddressTypeConfigOutcomeCallable AlbClient::updateLoadBalancerAddressTypeConfigCallable(const UpdateLoadBalancerAddressTypeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerAddressTypeConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerAddressTypeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateLoadBalancerAttributeOutcome AlbClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(UpdateLoadBalancerAttributeResult(outcome.result()));
	else
		return UpdateLoadBalancerAttributeOutcome(outcome.error());
}

void AlbClient::updateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateLoadBalancerAttributeOutcomeCallable AlbClient::updateLoadBalancerAttributeCallable(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateLoadBalancerEditionOutcome AlbClient::updateLoadBalancerEdition(const UpdateLoadBalancerEditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerEditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerEditionOutcome(UpdateLoadBalancerEditionResult(outcome.result()));
	else
		return UpdateLoadBalancerEditionOutcome(outcome.error());
}

void AlbClient::updateLoadBalancerEditionAsync(const UpdateLoadBalancerEditionRequest& request, const UpdateLoadBalancerEditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerEdition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateLoadBalancerEditionOutcomeCallable AlbClient::updateLoadBalancerEditionCallable(const UpdateLoadBalancerEditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerEditionOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerEdition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateLoadBalancerZonesOutcome AlbClient::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(UpdateLoadBalancerZonesResult(outcome.result()));
	else
		return UpdateLoadBalancerZonesOutcome(outcome.error());
}

void AlbClient::updateLoadBalancerZonesAsync(const UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateLoadBalancerZonesOutcomeCallable AlbClient::updateLoadBalancerZonesCallable(const UpdateLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateRuleAttributeOutcome AlbClient::updateRuleAttribute(const UpdateRuleAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleAttributeOutcome(UpdateRuleAttributeResult(outcome.result()));
	else
		return UpdateRuleAttributeOutcome(outcome.error());
}

void AlbClient::updateRuleAttributeAsync(const UpdateRuleAttributeRequest& request, const UpdateRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRuleAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateRuleAttributeOutcomeCallable AlbClient::updateRuleAttributeCallable(const UpdateRuleAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateRuleAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateRulesAttributeOutcome AlbClient::updateRulesAttribute(const UpdateRulesAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRulesAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRulesAttributeOutcome(UpdateRulesAttributeResult(outcome.result()));
	else
		return UpdateRulesAttributeOutcome(outcome.error());
}

void AlbClient::updateRulesAttributeAsync(const UpdateRulesAttributeRequest& request, const UpdateRulesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRulesAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateRulesAttributeOutcomeCallable AlbClient::updateRulesAttributeCallable(const UpdateRulesAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRulesAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateRulesAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateSecurityPolicyAttributeOutcome AlbClient::updateSecurityPolicyAttribute(const UpdateSecurityPolicyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecurityPolicyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecurityPolicyAttributeOutcome(UpdateSecurityPolicyAttributeResult(outcome.result()));
	else
		return UpdateSecurityPolicyAttributeOutcome(outcome.error());
}

void AlbClient::updateSecurityPolicyAttributeAsync(const UpdateSecurityPolicyAttributeRequest& request, const UpdateSecurityPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecurityPolicyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateSecurityPolicyAttributeOutcomeCallable AlbClient::updateSecurityPolicyAttributeCallable(const UpdateSecurityPolicyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecurityPolicyAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateSecurityPolicyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateServerGroupAttributeOutcome AlbClient::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(UpdateServerGroupAttributeResult(outcome.result()));
	else
		return UpdateServerGroupAttributeOutcome(outcome.error());
}

void AlbClient::updateServerGroupAttributeAsync(const UpdateServerGroupAttributeRequest& request, const UpdateServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateServerGroupAttributeOutcomeCallable AlbClient::updateServerGroupAttributeCallable(const UpdateServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlbClient::UpdateServerGroupServersAttributeOutcome AlbClient::updateServerGroupServersAttribute(const UpdateServerGroupServersAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServerGroupServersAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServerGroupServersAttributeOutcome(UpdateServerGroupServersAttributeResult(outcome.result()));
	else
		return UpdateServerGroupServersAttributeOutcome(outcome.error());
}

void AlbClient::updateServerGroupServersAttributeAsync(const UpdateServerGroupServersAttributeRequest& request, const UpdateServerGroupServersAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServerGroupServersAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlbClient::UpdateServerGroupServersAttributeOutcomeCallable AlbClient::updateServerGroupServersAttributeCallable(const UpdateServerGroupServersAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServerGroupServersAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateServerGroupServersAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

