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

#include <alibabacloud/ddoscoo/DdoscooClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

namespace
{
	const std::string SERVICE_NAME = "ddoscoo";
}

DdoscooClient::DdoscooClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddoscoo");
}

DdoscooClient::DdoscooClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddoscoo");
}

DdoscooClient::DdoscooClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddoscoo");
}

DdoscooClient::~DdoscooClient()
{}

DdoscooClient::AddAutoCcBlacklistOutcome DdoscooClient::addAutoCcBlacklist(const AddAutoCcBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAutoCcBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAutoCcBlacklistOutcome(AddAutoCcBlacklistResult(outcome.result()));
	else
		return AddAutoCcBlacklistOutcome(outcome.error());
}

void DdoscooClient::addAutoCcBlacklistAsync(const AddAutoCcBlacklistRequest& request, const AddAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAutoCcBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::AddAutoCcBlacklistOutcomeCallable DdoscooClient::addAutoCcBlacklistCallable(const AddAutoCcBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAutoCcBlacklistOutcome()>>(
			[this, request]()
			{
			return this->addAutoCcBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::AddAutoCcWhitelistOutcome DdoscooClient::addAutoCcWhitelist(const AddAutoCcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAutoCcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAutoCcWhitelistOutcome(AddAutoCcWhitelistResult(outcome.result()));
	else
		return AddAutoCcWhitelistOutcome(outcome.error());
}

void DdoscooClient::addAutoCcWhitelistAsync(const AddAutoCcWhitelistRequest& request, const AddAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAutoCcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::AddAutoCcWhitelistOutcomeCallable DdoscooClient::addAutoCcWhitelistCallable(const AddAutoCcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAutoCcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->addAutoCcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::AssociateWebCertOutcome DdoscooClient::associateWebCert(const AssociateWebCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateWebCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateWebCertOutcome(AssociateWebCertResult(outcome.result()));
	else
		return AssociateWebCertOutcome(outcome.error());
}

void DdoscooClient::associateWebCertAsync(const AssociateWebCertRequest& request, const AssociateWebCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateWebCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::AssociateWebCertOutcomeCallable DdoscooClient::associateWebCertCallable(const AssociateWebCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateWebCertOutcome()>>(
			[this, request]()
			{
			return this->associateWebCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::AttachSceneDefenseObjectOutcome DdoscooClient::attachSceneDefenseObject(const AttachSceneDefenseObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachSceneDefenseObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachSceneDefenseObjectOutcome(AttachSceneDefenseObjectResult(outcome.result()));
	else
		return AttachSceneDefenseObjectOutcome(outcome.error());
}

void DdoscooClient::attachSceneDefenseObjectAsync(const AttachSceneDefenseObjectRequest& request, const AttachSceneDefenseObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachSceneDefenseObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::AttachSceneDefenseObjectOutcomeCallable DdoscooClient::attachSceneDefenseObjectCallable(const AttachSceneDefenseObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachSceneDefenseObjectOutcome()>>(
			[this, request]()
			{
			return this->attachSceneDefenseObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigL7RsPolicyOutcome DdoscooClient::configL7RsPolicy(const ConfigL7RsPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigL7RsPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigL7RsPolicyOutcome(ConfigL7RsPolicyResult(outcome.result()));
	else
		return ConfigL7RsPolicyOutcome(outcome.error());
}

void DdoscooClient::configL7RsPolicyAsync(const ConfigL7RsPolicyRequest& request, const ConfigL7RsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configL7RsPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigL7RsPolicyOutcomeCallable DdoscooClient::configL7RsPolicyCallable(const ConfigL7RsPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigL7RsPolicyOutcome()>>(
			[this, request]()
			{
			return this->configL7RsPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RealLimitOutcome DdoscooClient::configLayer4RealLimit(const ConfigLayer4RealLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RealLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RealLimitOutcome(ConfigLayer4RealLimitResult(outcome.result()));
	else
		return ConfigLayer4RealLimitOutcome(outcome.error());
}

void DdoscooClient::configLayer4RealLimitAsync(const ConfigLayer4RealLimitRequest& request, const ConfigLayer4RealLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4RealLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RealLimitOutcomeCallable DdoscooClient::configLayer4RealLimitCallable(const ConfigLayer4RealLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RealLimitOutcome()>>(
			[this, request]()
			{
			return this->configLayer4RealLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RemarkOutcome DdoscooClient::configLayer4Remark(const ConfigLayer4RemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RemarkOutcome(ConfigLayer4RemarkResult(outcome.result()));
	else
		return ConfigLayer4RemarkOutcome(outcome.error());
}

void DdoscooClient::configLayer4RemarkAsync(const ConfigLayer4RemarkRequest& request, const ConfigLayer4RemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4Remark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RemarkOutcomeCallable DdoscooClient::configLayer4RemarkCallable(const ConfigLayer4RemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RemarkOutcome()>>(
			[this, request]()
			{
			return this->configLayer4Remark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RuleBakModeOutcome DdoscooClient::configLayer4RuleBakMode(const ConfigLayer4RuleBakModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RuleBakModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RuleBakModeOutcome(ConfigLayer4RuleBakModeResult(outcome.result()));
	else
		return ConfigLayer4RuleBakModeOutcome(outcome.error());
}

void DdoscooClient::configLayer4RuleBakModeAsync(const ConfigLayer4RuleBakModeRequest& request, const ConfigLayer4RuleBakModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4RuleBakMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RuleBakModeOutcomeCallable DdoscooClient::configLayer4RuleBakModeCallable(const ConfigLayer4RuleBakModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RuleBakModeOutcome()>>(
			[this, request]()
			{
			return this->configLayer4RuleBakMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RulePolicyOutcome DdoscooClient::configLayer4RulePolicy(const ConfigLayer4RulePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RulePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RulePolicyOutcome(ConfigLayer4RulePolicyResult(outcome.result()));
	else
		return ConfigLayer4RulePolicyOutcome(outcome.error());
}

void DdoscooClient::configLayer4RulePolicyAsync(const ConfigLayer4RulePolicyRequest& request, const ConfigLayer4RulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4RulePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RulePolicyOutcomeCallable DdoscooClient::configLayer4RulePolicyCallable(const ConfigLayer4RulePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RulePolicyOutcome()>>(
			[this, request]()
			{
			return this->configLayer4RulePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigNetworkRegionBlockOutcome DdoscooClient::configNetworkRegionBlock(const ConfigNetworkRegionBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigNetworkRegionBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigNetworkRegionBlockOutcome(ConfigNetworkRegionBlockResult(outcome.result()));
	else
		return ConfigNetworkRegionBlockOutcome(outcome.error());
}

void DdoscooClient::configNetworkRegionBlockAsync(const ConfigNetworkRegionBlockRequest& request, const ConfigNetworkRegionBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configNetworkRegionBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigNetworkRegionBlockOutcomeCallable DdoscooClient::configNetworkRegionBlockCallable(const ConfigNetworkRegionBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigNetworkRegionBlockOutcome()>>(
			[this, request]()
			{
			return this->configNetworkRegionBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigNetworkRulesOutcome DdoscooClient::configNetworkRules(const ConfigNetworkRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigNetworkRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigNetworkRulesOutcome(ConfigNetworkRulesResult(outcome.result()));
	else
		return ConfigNetworkRulesOutcome(outcome.error());
}

void DdoscooClient::configNetworkRulesAsync(const ConfigNetworkRulesRequest& request, const ConfigNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configNetworkRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigNetworkRulesOutcomeCallable DdoscooClient::configNetworkRulesCallable(const ConfigNetworkRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigNetworkRulesOutcome()>>(
			[this, request]()
			{
			return this->configNetworkRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigUdpReflectOutcome DdoscooClient::configUdpReflect(const ConfigUdpReflectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigUdpReflectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigUdpReflectOutcome(ConfigUdpReflectResult(outcome.result()));
	else
		return ConfigUdpReflectOutcome(outcome.error());
}

void DdoscooClient::configUdpReflectAsync(const ConfigUdpReflectRequest& request, const ConfigUdpReflectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configUdpReflect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigUdpReflectOutcomeCallable DdoscooClient::configUdpReflectCallable(const ConfigUdpReflectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigUdpReflectOutcome()>>(
			[this, request]()
			{
			return this->configUdpReflect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigWebCCTemplateOutcome DdoscooClient::configWebCCTemplate(const ConfigWebCCTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigWebCCTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigWebCCTemplateOutcome(ConfigWebCCTemplateResult(outcome.result()));
	else
		return ConfigWebCCTemplateOutcome(outcome.error());
}

void DdoscooClient::configWebCCTemplateAsync(const ConfigWebCCTemplateRequest& request, const ConfigWebCCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configWebCCTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigWebCCTemplateOutcomeCallable DdoscooClient::configWebCCTemplateCallable(const ConfigWebCCTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigWebCCTemplateOutcome()>>(
			[this, request]()
			{
			return this->configWebCCTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigWebIpSetOutcome DdoscooClient::configWebIpSet(const ConfigWebIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigWebIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigWebIpSetOutcome(ConfigWebIpSetResult(outcome.result()));
	else
		return ConfigWebIpSetOutcome(outcome.error());
}

void DdoscooClient::configWebIpSetAsync(const ConfigWebIpSetRequest& request, const ConfigWebIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configWebIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigWebIpSetOutcomeCallable DdoscooClient::configWebIpSetCallable(const ConfigWebIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigWebIpSetOutcome()>>(
			[this, request]()
			{
			return this->configWebIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateAsyncTaskOutcome DdoscooClient::createAsyncTask(const CreateAsyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAsyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAsyncTaskOutcome(CreateAsyncTaskResult(outcome.result()));
	else
		return CreateAsyncTaskOutcome(outcome.error());
}

void DdoscooClient::createAsyncTaskAsync(const CreateAsyncTaskRequest& request, const CreateAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAsyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateAsyncTaskOutcomeCallable DdoscooClient::createAsyncTaskCallable(const CreateAsyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAsyncTaskOutcome()>>(
			[this, request]()
			{
			return this->createAsyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateDomainResourceOutcome DdoscooClient::createDomainResource(const CreateDomainResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainResourceOutcome(CreateDomainResourceResult(outcome.result()));
	else
		return CreateDomainResourceOutcome(outcome.error());
}

void DdoscooClient::createDomainResourceAsync(const CreateDomainResourceRequest& request, const CreateDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomainResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateDomainResourceOutcomeCallable DdoscooClient::createDomainResourceCallable(const CreateDomainResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainResourceOutcome()>>(
			[this, request]()
			{
			return this->createDomainResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateNetworkRulesOutcome DdoscooClient::createNetworkRules(const CreateNetworkRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkRulesOutcome(CreateNetworkRulesResult(outcome.result()));
	else
		return CreateNetworkRulesOutcome(outcome.error());
}

void DdoscooClient::createNetworkRulesAsync(const CreateNetworkRulesRequest& request, const CreateNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateNetworkRulesOutcomeCallable DdoscooClient::createNetworkRulesCallable(const CreateNetworkRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkRulesOutcome()>>(
			[this, request]()
			{
			return this->createNetworkRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreatePortOutcome DdoscooClient::createPort(const CreatePortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePortOutcome(CreatePortResult(outcome.result()));
	else
		return CreatePortOutcome(outcome.error());
}

void DdoscooClient::createPortAsync(const CreatePortRequest& request, const CreatePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreatePortOutcomeCallable DdoscooClient::createPortCallable(const CreatePortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePortOutcome()>>(
			[this, request]()
			{
			return this->createPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateSceneDefensePolicyOutcome DdoscooClient::createSceneDefensePolicy(const CreateSceneDefensePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSceneDefensePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSceneDefensePolicyOutcome(CreateSceneDefensePolicyResult(outcome.result()));
	else
		return CreateSceneDefensePolicyOutcome(outcome.error());
}

void DdoscooClient::createSceneDefensePolicyAsync(const CreateSceneDefensePolicyRequest& request, const CreateSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSceneDefensePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateSceneDefensePolicyOutcomeCallable DdoscooClient::createSceneDefensePolicyCallable(const CreateSceneDefensePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSceneDefensePolicyOutcome()>>(
			[this, request]()
			{
			return this->createSceneDefensePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateSchedulerRuleOutcome DdoscooClient::createSchedulerRule(const CreateSchedulerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSchedulerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSchedulerRuleOutcome(CreateSchedulerRuleResult(outcome.result()));
	else
		return CreateSchedulerRuleOutcome(outcome.error());
}

void DdoscooClient::createSchedulerRuleAsync(const CreateSchedulerRuleRequest& request, const CreateSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSchedulerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateSchedulerRuleOutcomeCallable DdoscooClient::createSchedulerRuleCallable(const CreateSchedulerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSchedulerRuleOutcome()>>(
			[this, request]()
			{
			return this->createSchedulerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateTagResourcesOutcome DdoscooClient::createTagResources(const CreateTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagResourcesOutcome(CreateTagResourcesResult(outcome.result()));
	else
		return CreateTagResourcesOutcome(outcome.error());
}

void DdoscooClient::createTagResourcesAsync(const CreateTagResourcesRequest& request, const CreateTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateTagResourcesOutcomeCallable DdoscooClient::createTagResourcesCallable(const CreateTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->createTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateWebCCRuleOutcome DdoscooClient::createWebCCRule(const CreateWebCCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebCCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebCCRuleOutcome(CreateWebCCRuleResult(outcome.result()));
	else
		return CreateWebCCRuleOutcome(outcome.error());
}

void DdoscooClient::createWebCCRuleAsync(const CreateWebCCRuleRequest& request, const CreateWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebCCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateWebCCRuleOutcomeCallable DdoscooClient::createWebCCRuleCallable(const CreateWebCCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebCCRuleOutcome()>>(
			[this, request]()
			{
			return this->createWebCCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateWebRuleOutcome DdoscooClient::createWebRule(const CreateWebRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebRuleOutcome(CreateWebRuleResult(outcome.result()));
	else
		return CreateWebRuleOutcome(outcome.error());
}

void DdoscooClient::createWebRuleAsync(const CreateWebRuleRequest& request, const CreateWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateWebRuleOutcomeCallable DdoscooClient::createWebRuleCallable(const CreateWebRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebRuleOutcome()>>(
			[this, request]()
			{
			return this->createWebRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteAsyncTaskOutcome DdoscooClient::deleteAsyncTask(const DeleteAsyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAsyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAsyncTaskOutcome(DeleteAsyncTaskResult(outcome.result()));
	else
		return DeleteAsyncTaskOutcome(outcome.error());
}

void DdoscooClient::deleteAsyncTaskAsync(const DeleteAsyncTaskRequest& request, const DeleteAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAsyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteAsyncTaskOutcomeCallable DdoscooClient::deleteAsyncTaskCallable(const DeleteAsyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAsyncTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteAsyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteAutoCcBlacklistOutcome DdoscooClient::deleteAutoCcBlacklist(const DeleteAutoCcBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoCcBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoCcBlacklistOutcome(DeleteAutoCcBlacklistResult(outcome.result()));
	else
		return DeleteAutoCcBlacklistOutcome(outcome.error());
}

void DdoscooClient::deleteAutoCcBlacklistAsync(const DeleteAutoCcBlacklistRequest& request, const DeleteAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoCcBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteAutoCcBlacklistOutcomeCallable DdoscooClient::deleteAutoCcBlacklistCallable(const DeleteAutoCcBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoCcBlacklistOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoCcBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteAutoCcWhitelistOutcome DdoscooClient::deleteAutoCcWhitelist(const DeleteAutoCcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoCcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoCcWhitelistOutcome(DeleteAutoCcWhitelistResult(outcome.result()));
	else
		return DeleteAutoCcWhitelistOutcome(outcome.error());
}

void DdoscooClient::deleteAutoCcWhitelistAsync(const DeleteAutoCcWhitelistRequest& request, const DeleteAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoCcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteAutoCcWhitelistOutcomeCallable DdoscooClient::deleteAutoCcWhitelistCallable(const DeleteAutoCcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoCcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoCcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteDomainResourceOutcome DdoscooClient::deleteDomainResource(const DeleteDomainResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainResourceOutcome(DeleteDomainResourceResult(outcome.result()));
	else
		return DeleteDomainResourceOutcome(outcome.error());
}

void DdoscooClient::deleteDomainResourceAsync(const DeleteDomainResourceRequest& request, const DeleteDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteDomainResourceOutcomeCallable DdoscooClient::deleteDomainResourceCallable(const DeleteDomainResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteNetworkRuleOutcome DdoscooClient::deleteNetworkRule(const DeleteNetworkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkRuleOutcome(DeleteNetworkRuleResult(outcome.result()));
	else
		return DeleteNetworkRuleOutcome(outcome.error());
}

void DdoscooClient::deleteNetworkRuleAsync(const DeleteNetworkRuleRequest& request, const DeleteNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteNetworkRuleOutcomeCallable DdoscooClient::deleteNetworkRuleCallable(const DeleteNetworkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeletePortOutcome DdoscooClient::deletePort(const DeletePortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePortOutcome(DeletePortResult(outcome.result()));
	else
		return DeletePortOutcome(outcome.error());
}

void DdoscooClient::deletePortAsync(const DeletePortRequest& request, const DeletePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeletePortOutcomeCallable DdoscooClient::deletePortCallable(const DeletePortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePortOutcome()>>(
			[this, request]()
			{
			return this->deletePort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteSceneDefensePolicyOutcome DdoscooClient::deleteSceneDefensePolicy(const DeleteSceneDefensePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSceneDefensePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSceneDefensePolicyOutcome(DeleteSceneDefensePolicyResult(outcome.result()));
	else
		return DeleteSceneDefensePolicyOutcome(outcome.error());
}

void DdoscooClient::deleteSceneDefensePolicyAsync(const DeleteSceneDefensePolicyRequest& request, const DeleteSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSceneDefensePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteSceneDefensePolicyOutcomeCallable DdoscooClient::deleteSceneDefensePolicyCallable(const DeleteSceneDefensePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSceneDefensePolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteSceneDefensePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteSchedulerRuleOutcome DdoscooClient::deleteSchedulerRule(const DeleteSchedulerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSchedulerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSchedulerRuleOutcome(DeleteSchedulerRuleResult(outcome.result()));
	else
		return DeleteSchedulerRuleOutcome(outcome.error());
}

void DdoscooClient::deleteSchedulerRuleAsync(const DeleteSchedulerRuleRequest& request, const DeleteSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSchedulerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteSchedulerRuleOutcomeCallable DdoscooClient::deleteSchedulerRuleCallable(const DeleteSchedulerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSchedulerRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteSchedulerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteTagResourcesOutcome DdoscooClient::deleteTagResources(const DeleteTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagResourcesOutcome(DeleteTagResourcesResult(outcome.result()));
	else
		return DeleteTagResourcesOutcome(outcome.error());
}

void DdoscooClient::deleteTagResourcesAsync(const DeleteTagResourcesRequest& request, const DeleteTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteTagResourcesOutcomeCallable DdoscooClient::deleteTagResourcesCallable(const DeleteTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->deleteTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteWebCCRuleOutcome DdoscooClient::deleteWebCCRule(const DeleteWebCCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWebCCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWebCCRuleOutcome(DeleteWebCCRuleResult(outcome.result()));
	else
		return DeleteWebCCRuleOutcome(outcome.error());
}

void DdoscooClient::deleteWebCCRuleAsync(const DeleteWebCCRuleRequest& request, const DeleteWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWebCCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteWebCCRuleOutcomeCallable DdoscooClient::deleteWebCCRuleCallable(const DeleteWebCCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWebCCRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteWebCCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteWebCacheCustomRuleOutcome DdoscooClient::deleteWebCacheCustomRule(const DeleteWebCacheCustomRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWebCacheCustomRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWebCacheCustomRuleOutcome(DeleteWebCacheCustomRuleResult(outcome.result()));
	else
		return DeleteWebCacheCustomRuleOutcome(outcome.error());
}

void DdoscooClient::deleteWebCacheCustomRuleAsync(const DeleteWebCacheCustomRuleRequest& request, const DeleteWebCacheCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWebCacheCustomRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteWebCacheCustomRuleOutcomeCallable DdoscooClient::deleteWebCacheCustomRuleCallable(const DeleteWebCacheCustomRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWebCacheCustomRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteWebCacheCustomRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteWebPreciseAccessRuleOutcome DdoscooClient::deleteWebPreciseAccessRule(const DeleteWebPreciseAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWebPreciseAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWebPreciseAccessRuleOutcome(DeleteWebPreciseAccessRuleResult(outcome.result()));
	else
		return DeleteWebPreciseAccessRuleOutcome(outcome.error());
}

void DdoscooClient::deleteWebPreciseAccessRuleAsync(const DeleteWebPreciseAccessRuleRequest& request, const DeleteWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWebPreciseAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteWebPreciseAccessRuleOutcomeCallable DdoscooClient::deleteWebPreciseAccessRuleCallable(const DeleteWebPreciseAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWebPreciseAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteWebPreciseAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteWebRuleOutcome DdoscooClient::deleteWebRule(const DeleteWebRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWebRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWebRuleOutcome(DeleteWebRuleResult(outcome.result()));
	else
		return DeleteWebRuleOutcome(outcome.error());
}

void DdoscooClient::deleteWebRuleAsync(const DeleteWebRuleRequest& request, const DeleteWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWebRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteWebRuleOutcomeCallable DdoscooClient::deleteWebRuleCallable(const DeleteWebRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWebRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteWebRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeAsyncTasksOutcome DdoscooClient::describeAsyncTasks(const DescribeAsyncTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAsyncTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAsyncTasksOutcome(DescribeAsyncTasksResult(outcome.result()));
	else
		return DescribeAsyncTasksOutcome(outcome.error());
}

void DdoscooClient::describeAsyncTasksAsync(const DescribeAsyncTasksRequest& request, const DescribeAsyncTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAsyncTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeAsyncTasksOutcomeCallable DdoscooClient::describeAsyncTasksCallable(const DescribeAsyncTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAsyncTasksOutcome()>>(
			[this, request]()
			{
			return this->describeAsyncTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeAttackAnalysisMaxQpsOutcome DdoscooClient::describeAttackAnalysisMaxQps(const DescribeAttackAnalysisMaxQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAttackAnalysisMaxQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAttackAnalysisMaxQpsOutcome(DescribeAttackAnalysisMaxQpsResult(outcome.result()));
	else
		return DescribeAttackAnalysisMaxQpsOutcome(outcome.error());
}

void DdoscooClient::describeAttackAnalysisMaxQpsAsync(const DescribeAttackAnalysisMaxQpsRequest& request, const DescribeAttackAnalysisMaxQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAttackAnalysisMaxQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeAttackAnalysisMaxQpsOutcomeCallable DdoscooClient::describeAttackAnalysisMaxQpsCallable(const DescribeAttackAnalysisMaxQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAttackAnalysisMaxQpsOutcome()>>(
			[this, request]()
			{
			return this->describeAttackAnalysisMaxQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeAutoCcBlacklistOutcome DdoscooClient::describeAutoCcBlacklist(const DescribeAutoCcBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoCcBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoCcBlacklistOutcome(DescribeAutoCcBlacklistResult(outcome.result()));
	else
		return DescribeAutoCcBlacklistOutcome(outcome.error());
}

void DdoscooClient::describeAutoCcBlacklistAsync(const DescribeAutoCcBlacklistRequest& request, const DescribeAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoCcBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeAutoCcBlacklistOutcomeCallable DdoscooClient::describeAutoCcBlacklistCallable(const DescribeAutoCcBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoCcBlacklistOutcome()>>(
			[this, request]()
			{
			return this->describeAutoCcBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeAutoCcListCountOutcome DdoscooClient::describeAutoCcListCount(const DescribeAutoCcListCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoCcListCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoCcListCountOutcome(DescribeAutoCcListCountResult(outcome.result()));
	else
		return DescribeAutoCcListCountOutcome(outcome.error());
}

void DdoscooClient::describeAutoCcListCountAsync(const DescribeAutoCcListCountRequest& request, const DescribeAutoCcListCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoCcListCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeAutoCcListCountOutcomeCallable DdoscooClient::describeAutoCcListCountCallable(const DescribeAutoCcListCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoCcListCountOutcome()>>(
			[this, request]()
			{
			return this->describeAutoCcListCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeAutoCcWhitelistOutcome DdoscooClient::describeAutoCcWhitelist(const DescribeAutoCcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoCcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoCcWhitelistOutcome(DescribeAutoCcWhitelistResult(outcome.result()));
	else
		return DescribeAutoCcWhitelistOutcome(outcome.error());
}

void DdoscooClient::describeAutoCcWhitelistAsync(const DescribeAutoCcWhitelistRequest& request, const DescribeAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoCcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeAutoCcWhitelistOutcomeCallable DdoscooClient::describeAutoCcWhitelistCallable(const DescribeAutoCcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoCcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeAutoCcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeBackSourceCidrOutcome DdoscooClient::describeBackSourceCidr(const DescribeBackSourceCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackSourceCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackSourceCidrOutcome(DescribeBackSourceCidrResult(outcome.result()));
	else
		return DescribeBackSourceCidrOutcome(outcome.error());
}

void DdoscooClient::describeBackSourceCidrAsync(const DescribeBackSourceCidrRequest& request, const DescribeBackSourceCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackSourceCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeBackSourceCidrOutcomeCallable DdoscooClient::describeBackSourceCidrCallable(const DescribeBackSourceCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackSourceCidrOutcome()>>(
			[this, request]()
			{
			return this->describeBackSourceCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeBlackholeStatusOutcome DdoscooClient::describeBlackholeStatus(const DescribeBlackholeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBlackholeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBlackholeStatusOutcome(DescribeBlackholeStatusResult(outcome.result()));
	else
		return DescribeBlackholeStatusOutcome(outcome.error());
}

void DdoscooClient::describeBlackholeStatusAsync(const DescribeBlackholeStatusRequest& request, const DescribeBlackholeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBlackholeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeBlackholeStatusOutcomeCallable DdoscooClient::describeBlackholeStatusCallable(const DescribeBlackholeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBlackholeStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBlackholeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeBlockStatusOutcome DdoscooClient::describeBlockStatus(const DescribeBlockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBlockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBlockStatusOutcome(DescribeBlockStatusResult(outcome.result()));
	else
		return DescribeBlockStatusOutcome(outcome.error());
}

void DdoscooClient::describeBlockStatusAsync(const DescribeBlockStatusRequest& request, const DescribeBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBlockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeBlockStatusOutcomeCallable DdoscooClient::describeBlockStatusCallable(const DescribeBlockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBlockStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBlockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeCertsOutcome DdoscooClient::describeCerts(const DescribeCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertsOutcome(DescribeCertsResult(outcome.result()));
	else
		return DescribeCertsOutcome(outcome.error());
}

void DdoscooClient::describeCertsAsync(const DescribeCertsRequest& request, const DescribeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeCertsOutcomeCallable DdoscooClient::describeCertsCallable(const DescribeCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertsOutcome()>>(
			[this, request]()
			{
			return this->describeCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeCnameReusesOutcome DdoscooClient::describeCnameReuses(const DescribeCnameReusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCnameReusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCnameReusesOutcome(DescribeCnameReusesResult(outcome.result()));
	else
		return DescribeCnameReusesOutcome(outcome.error());
}

void DdoscooClient::describeCnameReusesAsync(const DescribeCnameReusesRequest& request, const DescribeCnameReusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCnameReuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeCnameReusesOutcomeCallable DdoscooClient::describeCnameReusesCallable(const DescribeCnameReusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCnameReusesOutcome()>>(
			[this, request]()
			{
			return this->describeCnameReuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDoSEventsOutcome DdoscooClient::describeDDoSEvents(const DescribeDDoSEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDoSEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDoSEventsOutcome(DescribeDDoSEventsResult(outcome.result()));
	else
		return DescribeDDoSEventsOutcome(outcome.error());
}

void DdoscooClient::describeDDoSEventsAsync(const DescribeDDoSEventsRequest& request, const DescribeDDoSEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDoSEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDoSEventsOutcomeCallable DdoscooClient::describeDDoSEventsCallable(const DescribeDDoSEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDoSEventsOutcome()>>(
			[this, request]()
			{
			return this->describeDDoSEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosAllEventListOutcome DdoscooClient::describeDDosAllEventList(const DescribeDDosAllEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosAllEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosAllEventListOutcome(DescribeDDosAllEventListResult(outcome.result()));
	else
		return DescribeDDosAllEventListOutcome(outcome.error());
}

void DdoscooClient::describeDDosAllEventListAsync(const DescribeDDosAllEventListRequest& request, const DescribeDDosAllEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosAllEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosAllEventListOutcomeCallable DdoscooClient::describeDDosAllEventListCallable(const DescribeDDosAllEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosAllEventListOutcome()>>(
			[this, request]()
			{
			return this->describeDDosAllEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosEventAreaOutcome DdoscooClient::describeDDosEventArea(const DescribeDDosEventAreaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosEventAreaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosEventAreaOutcome(DescribeDDosEventAreaResult(outcome.result()));
	else
		return DescribeDDosEventAreaOutcome(outcome.error());
}

void DdoscooClient::describeDDosEventAreaAsync(const DescribeDDosEventAreaRequest& request, const DescribeDDosEventAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosEventArea(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosEventAreaOutcomeCallable DdoscooClient::describeDDosEventAreaCallable(const DescribeDDosEventAreaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosEventAreaOutcome()>>(
			[this, request]()
			{
			return this->describeDDosEventArea(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosEventAttackTypeOutcome DdoscooClient::describeDDosEventAttackType(const DescribeDDosEventAttackTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosEventAttackTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosEventAttackTypeOutcome(DescribeDDosEventAttackTypeResult(outcome.result()));
	else
		return DescribeDDosEventAttackTypeOutcome(outcome.error());
}

void DdoscooClient::describeDDosEventAttackTypeAsync(const DescribeDDosEventAttackTypeRequest& request, const DescribeDDosEventAttackTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosEventAttackType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosEventAttackTypeOutcomeCallable DdoscooClient::describeDDosEventAttackTypeCallable(const DescribeDDosEventAttackTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosEventAttackTypeOutcome()>>(
			[this, request]()
			{
			return this->describeDDosEventAttackType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosEventIspOutcome DdoscooClient::describeDDosEventIsp(const DescribeDDosEventIspRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosEventIspOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosEventIspOutcome(DescribeDDosEventIspResult(outcome.result()));
	else
		return DescribeDDosEventIspOutcome(outcome.error());
}

void DdoscooClient::describeDDosEventIspAsync(const DescribeDDosEventIspRequest& request, const DescribeDDosEventIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosEventIsp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosEventIspOutcomeCallable DdoscooClient::describeDDosEventIspCallable(const DescribeDDosEventIspRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosEventIspOutcome()>>(
			[this, request]()
			{
			return this->describeDDosEventIsp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosEventMaxOutcome DdoscooClient::describeDDosEventMax(const DescribeDDosEventMaxRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosEventMaxOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosEventMaxOutcome(DescribeDDosEventMaxResult(outcome.result()));
	else
		return DescribeDDosEventMaxOutcome(outcome.error());
}

void DdoscooClient::describeDDosEventMaxAsync(const DescribeDDosEventMaxRequest& request, const DescribeDDosEventMaxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosEventMax(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosEventMaxOutcomeCallable DdoscooClient::describeDDosEventMaxCallable(const DescribeDDosEventMaxRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosEventMaxOutcome()>>(
			[this, request]()
			{
			return this->describeDDosEventMax(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDosEventSrcIpOutcome DdoscooClient::describeDDosEventSrcIp(const DescribeDDosEventSrcIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDosEventSrcIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDosEventSrcIpOutcome(DescribeDDosEventSrcIpResult(outcome.result()));
	else
		return DescribeDDosEventSrcIpOutcome(outcome.error());
}

void DdoscooClient::describeDDosEventSrcIpAsync(const DescribeDDosEventSrcIpRequest& request, const DescribeDDosEventSrcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDosEventSrcIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDosEventSrcIpOutcomeCallable DdoscooClient::describeDDosEventSrcIpCallable(const DescribeDDosEventSrcIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDosEventSrcIpOutcome()>>(
			[this, request]()
			{
			return this->describeDDosEventSrcIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDefenseCountStatisticsOutcome DdoscooClient::describeDefenseCountStatistics(const DescribeDefenseCountStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDefenseCountStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDefenseCountStatisticsOutcome(DescribeDefenseCountStatisticsResult(outcome.result()));
	else
		return DescribeDefenseCountStatisticsOutcome(outcome.error());
}

void DdoscooClient::describeDefenseCountStatisticsAsync(const DescribeDefenseCountStatisticsRequest& request, const DescribeDefenseCountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDefenseCountStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDefenseCountStatisticsOutcomeCallable DdoscooClient::describeDefenseCountStatisticsCallable(const DescribeDefenseCountStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDefenseCountStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDefenseCountStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDefenseRecordsOutcome DdoscooClient::describeDefenseRecords(const DescribeDefenseRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDefenseRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDefenseRecordsOutcome(DescribeDefenseRecordsResult(outcome.result()));
	else
		return DescribeDefenseRecordsOutcome(outcome.error());
}

void DdoscooClient::describeDefenseRecordsAsync(const DescribeDefenseRecordsRequest& request, const DescribeDefenseRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDefenseRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDefenseRecordsOutcomeCallable DdoscooClient::describeDefenseRecordsCallable(const DescribeDefenseRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDefenseRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDefenseRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainAttackEventsOutcome DdoscooClient::describeDomainAttackEvents(const DescribeDomainAttackEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAttackEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAttackEventsOutcome(DescribeDomainAttackEventsResult(outcome.result()));
	else
		return DescribeDomainAttackEventsOutcome(outcome.error());
}

void DdoscooClient::describeDomainAttackEventsAsync(const DescribeDomainAttackEventsRequest& request, const DescribeDomainAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAttackEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainAttackEventsOutcomeCallable DdoscooClient::describeDomainAttackEventsCallable(const DescribeDomainAttackEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAttackEventsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAttackEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainOverviewOutcome DdoscooClient::describeDomainOverview(const DescribeDomainOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainOverviewOutcome(DescribeDomainOverviewResult(outcome.result()));
	else
		return DescribeDomainOverviewOutcome(outcome.error());
}

void DdoscooClient::describeDomainOverviewAsync(const DescribeDomainOverviewRequest& request, const DescribeDomainOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainOverviewOutcomeCallable DdoscooClient::describeDomainOverviewCallable(const DescribeDomainOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeDomainOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainQPSListOutcome DdoscooClient::describeDomainQPSList(const DescribeDomainQPSListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQPSListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQPSListOutcome(DescribeDomainQPSListResult(outcome.result()));
	else
		return DescribeDomainQPSListOutcome(outcome.error());
}

void DdoscooClient::describeDomainQPSListAsync(const DescribeDomainQPSListRequest& request, const DescribeDomainQPSListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQPSList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainQPSListOutcomeCallable DdoscooClient::describeDomainQPSListCallable(const DescribeDomainQPSListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQPSListOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQPSList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainResourceOutcome DdoscooClient::describeDomainResource(const DescribeDomainResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainResourceOutcome(DescribeDomainResourceResult(outcome.result()));
	else
		return DescribeDomainResourceOutcome(outcome.error());
}

void DdoscooClient::describeDomainResourceAsync(const DescribeDomainResourceRequest& request, const DescribeDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainResourceOutcomeCallable DdoscooClient::describeDomainResourceCallable(const DescribeDomainResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainResourceOutcome()>>(
			[this, request]()
			{
			return this->describeDomainResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainSecurityProfileOutcome DdoscooClient::describeDomainSecurityProfile(const DescribeDomainSecurityProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSecurityProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSecurityProfileOutcome(DescribeDomainSecurityProfileResult(outcome.result()));
	else
		return DescribeDomainSecurityProfileOutcome(outcome.error());
}

void DdoscooClient::describeDomainSecurityProfileAsync(const DescribeDomainSecurityProfileRequest& request, const DescribeDomainSecurityProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSecurityProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainSecurityProfileOutcomeCallable DdoscooClient::describeDomainSecurityProfileCallable(const DescribeDomainSecurityProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSecurityProfileOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSecurityProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainStatusCodeCountOutcome DdoscooClient::describeDomainStatusCodeCount(const DescribeDomainStatusCodeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainStatusCodeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainStatusCodeCountOutcome(DescribeDomainStatusCodeCountResult(outcome.result()));
	else
		return DescribeDomainStatusCodeCountOutcome(outcome.error());
}

void DdoscooClient::describeDomainStatusCodeCountAsync(const DescribeDomainStatusCodeCountRequest& request, const DescribeDomainStatusCodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainStatusCodeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainStatusCodeCountOutcomeCallable DdoscooClient::describeDomainStatusCodeCountCallable(const DescribeDomainStatusCodeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainStatusCodeCountOutcome()>>(
			[this, request]()
			{
			return this->describeDomainStatusCodeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainStatusCodeListOutcome DdoscooClient::describeDomainStatusCodeList(const DescribeDomainStatusCodeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainStatusCodeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainStatusCodeListOutcome(DescribeDomainStatusCodeListResult(outcome.result()));
	else
		return DescribeDomainStatusCodeListOutcome(outcome.error());
}

void DdoscooClient::describeDomainStatusCodeListAsync(const DescribeDomainStatusCodeListRequest& request, const DescribeDomainStatusCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainStatusCodeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainStatusCodeListOutcomeCallable DdoscooClient::describeDomainStatusCodeListCallable(const DescribeDomainStatusCodeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainStatusCodeListOutcome()>>(
			[this, request]()
			{
			return this->describeDomainStatusCodeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainTopAttackListOutcome DdoscooClient::describeDomainTopAttackList(const DescribeDomainTopAttackListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTopAttackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTopAttackListOutcome(DescribeDomainTopAttackListResult(outcome.result()));
	else
		return DescribeDomainTopAttackListOutcome(outcome.error());
}

void DdoscooClient::describeDomainTopAttackListAsync(const DescribeDomainTopAttackListRequest& request, const DescribeDomainTopAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTopAttackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainTopAttackListOutcomeCallable DdoscooClient::describeDomainTopAttackListCallable(const DescribeDomainTopAttackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTopAttackListOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTopAttackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainViewSourceCountriesOutcome DdoscooClient::describeDomainViewSourceCountries(const DescribeDomainViewSourceCountriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainViewSourceCountriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainViewSourceCountriesOutcome(DescribeDomainViewSourceCountriesResult(outcome.result()));
	else
		return DescribeDomainViewSourceCountriesOutcome(outcome.error());
}

void DdoscooClient::describeDomainViewSourceCountriesAsync(const DescribeDomainViewSourceCountriesRequest& request, const DescribeDomainViewSourceCountriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainViewSourceCountries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainViewSourceCountriesOutcomeCallable DdoscooClient::describeDomainViewSourceCountriesCallable(const DescribeDomainViewSourceCountriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainViewSourceCountriesOutcome()>>(
			[this, request]()
			{
			return this->describeDomainViewSourceCountries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainViewSourceProvincesOutcome DdoscooClient::describeDomainViewSourceProvinces(const DescribeDomainViewSourceProvincesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainViewSourceProvincesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainViewSourceProvincesOutcome(DescribeDomainViewSourceProvincesResult(outcome.result()));
	else
		return DescribeDomainViewSourceProvincesOutcome(outcome.error());
}

void DdoscooClient::describeDomainViewSourceProvincesAsync(const DescribeDomainViewSourceProvincesRequest& request, const DescribeDomainViewSourceProvincesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainViewSourceProvinces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainViewSourceProvincesOutcomeCallable DdoscooClient::describeDomainViewSourceProvincesCallable(const DescribeDomainViewSourceProvincesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainViewSourceProvincesOutcome()>>(
			[this, request]()
			{
			return this->describeDomainViewSourceProvinces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainViewTopCostTimeOutcome DdoscooClient::describeDomainViewTopCostTime(const DescribeDomainViewTopCostTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainViewTopCostTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainViewTopCostTimeOutcome(DescribeDomainViewTopCostTimeResult(outcome.result()));
	else
		return DescribeDomainViewTopCostTimeOutcome(outcome.error());
}

void DdoscooClient::describeDomainViewTopCostTimeAsync(const DescribeDomainViewTopCostTimeRequest& request, const DescribeDomainViewTopCostTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainViewTopCostTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainViewTopCostTimeOutcomeCallable DdoscooClient::describeDomainViewTopCostTimeCallable(const DescribeDomainViewTopCostTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainViewTopCostTimeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainViewTopCostTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainViewTopUrlOutcome DdoscooClient::describeDomainViewTopUrl(const DescribeDomainViewTopUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainViewTopUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainViewTopUrlOutcome(DescribeDomainViewTopUrlResult(outcome.result()));
	else
		return DescribeDomainViewTopUrlOutcome(outcome.error());
}

void DdoscooClient::describeDomainViewTopUrlAsync(const DescribeDomainViewTopUrlRequest& request, const DescribeDomainViewTopUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainViewTopUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainViewTopUrlOutcomeCallable DdoscooClient::describeDomainViewTopUrlCallable(const DescribeDomainViewTopUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainViewTopUrlOutcome()>>(
			[this, request]()
			{
			return this->describeDomainViewTopUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainsOutcome DdoscooClient::describeDomains(const DescribeDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsOutcome(DescribeDomainsResult(outcome.result()));
	else
		return DescribeDomainsOutcome(outcome.error());
}

void DdoscooClient::describeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainsOutcomeCallable DdoscooClient::describeDomainsCallable(const DescribeDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeElasticBandwidthSpecOutcome DdoscooClient::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticBandwidthSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticBandwidthSpecOutcome(DescribeElasticBandwidthSpecResult(outcome.result()));
	else
		return DescribeElasticBandwidthSpecOutcome(outcome.error());
}

void DdoscooClient::describeElasticBandwidthSpecAsync(const DescribeElasticBandwidthSpecRequest& request, const DescribeElasticBandwidthSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticBandwidthSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeElasticBandwidthSpecOutcomeCallable DdoscooClient::describeElasticBandwidthSpecCallable(const DescribeElasticBandwidthSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticBandwidthSpecOutcome()>>(
			[this, request]()
			{
			return this->describeElasticBandwidthSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeElasticQpsOutcome DdoscooClient::describeElasticQps(const DescribeElasticQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticQpsOutcome(DescribeElasticQpsResult(outcome.result()));
	else
		return DescribeElasticQpsOutcome(outcome.error());
}

void DdoscooClient::describeElasticQpsAsync(const DescribeElasticQpsRequest& request, const DescribeElasticQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeElasticQpsOutcomeCallable DdoscooClient::describeElasticQpsCallable(const DescribeElasticQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticQpsOutcome()>>(
			[this, request]()
			{
			return this->describeElasticQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeElasticQpsRecordOutcome DdoscooClient::describeElasticQpsRecord(const DescribeElasticQpsRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticQpsRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticQpsRecordOutcome(DescribeElasticQpsRecordResult(outcome.result()));
	else
		return DescribeElasticQpsRecordOutcome(outcome.error());
}

void DdoscooClient::describeElasticQpsRecordAsync(const DescribeElasticQpsRecordRequest& request, const DescribeElasticQpsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticQpsRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeElasticQpsRecordOutcomeCallable DdoscooClient::describeElasticQpsRecordCallable(const DescribeElasticQpsRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticQpsRecordOutcome()>>(
			[this, request]()
			{
			return this->describeElasticQpsRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeHeadersOutcome DdoscooClient::describeHeaders(const DescribeHeadersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHeadersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHeadersOutcome(DescribeHeadersResult(outcome.result()));
	else
		return DescribeHeadersOutcome(outcome.error());
}

void DdoscooClient::describeHeadersAsync(const DescribeHeadersRequest& request, const DescribeHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHeaders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeHeadersOutcomeCallable DdoscooClient::describeHeadersCallable(const DescribeHeadersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHeadersOutcome()>>(
			[this, request]()
			{
			return this->describeHeaders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeHealthCheckListOutcome DdoscooClient::describeHealthCheckList(const DescribeHealthCheckListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthCheckListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthCheckListOutcome(DescribeHealthCheckListResult(outcome.result()));
	else
		return DescribeHealthCheckListOutcome(outcome.error());
}

void DdoscooClient::describeHealthCheckListAsync(const DescribeHealthCheckListRequest& request, const DescribeHealthCheckListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthCheckList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeHealthCheckListOutcomeCallable DdoscooClient::describeHealthCheckListCallable(const DescribeHealthCheckListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthCheckListOutcome()>>(
			[this, request]()
			{
			return this->describeHealthCheckList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeHealthCheckStatusOutcome DdoscooClient::describeHealthCheckStatus(const DescribeHealthCheckStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthCheckStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthCheckStatusOutcome(DescribeHealthCheckStatusResult(outcome.result()));
	else
		return DescribeHealthCheckStatusOutcome(outcome.error());
}

void DdoscooClient::describeHealthCheckStatusAsync(const DescribeHealthCheckStatusRequest& request, const DescribeHealthCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthCheckStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeHealthCheckStatusOutcomeCallable DdoscooClient::describeHealthCheckStatusCallable(const DescribeHealthCheckStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthCheckStatusOutcome()>>(
			[this, request]()
			{
			return this->describeHealthCheckStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceDetailsOutcome DdoscooClient::describeInstanceDetails(const DescribeInstanceDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDetailsOutcome(DescribeInstanceDetailsResult(outcome.result()));
	else
		return DescribeInstanceDetailsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceDetailsAsync(const DescribeInstanceDetailsRequest& request, const DescribeInstanceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceDetailsOutcomeCallable DdoscooClient::describeInstanceDetailsCallable(const DescribeInstanceDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceExtOutcome DdoscooClient::describeInstanceExt(const DescribeInstanceExtRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceExtOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceExtOutcome(DescribeInstanceExtResult(outcome.result()));
	else
		return DescribeInstanceExtOutcome(outcome.error());
}

void DdoscooClient::describeInstanceExtAsync(const DescribeInstanceExtRequest& request, const DescribeInstanceExtAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceExt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceExtOutcomeCallable DdoscooClient::describeInstanceExtCallable(const DescribeInstanceExtRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceExtOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceExt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceIdsOutcome DdoscooClient::describeInstanceIds(const DescribeInstanceIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceIdsOutcome(DescribeInstanceIdsResult(outcome.result()));
	else
		return DescribeInstanceIdsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceIdsAsync(const DescribeInstanceIdsRequest& request, const DescribeInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceIdsOutcomeCallable DdoscooClient::describeInstanceIdsCallable(const DescribeInstanceIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceIdsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceSpecsOutcome DdoscooClient::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecsOutcome(DescribeInstanceSpecsResult(outcome.result()));
	else
		return DescribeInstanceSpecsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpecs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceSpecsOutcomeCallable DdoscooClient::describeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpecs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceStatisticsOutcome DdoscooClient::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(DescribeInstanceStatisticsResult(outcome.result()));
	else
		return DescribeInstanceStatisticsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceStatisticsAsync(const DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceStatisticsOutcomeCallable DdoscooClient::describeInstanceStatisticsCallable(const DescribeInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceStatusOutcome DdoscooClient::describeInstanceStatus(const DescribeInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStatusOutcome(DescribeInstanceStatusResult(outcome.result()));
	else
		return DescribeInstanceStatusOutcome(outcome.error());
}

void DdoscooClient::describeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceStatusOutcomeCallable DdoscooClient::describeInstanceStatusCallable(const DescribeInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstancesOutcome DdoscooClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void DdoscooClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstancesOutcomeCallable DdoscooClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeL7RsPolicyOutcome DdoscooClient::describeL7RsPolicy(const DescribeL7RsPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeL7RsPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeL7RsPolicyOutcome(DescribeL7RsPolicyResult(outcome.result()));
	else
		return DescribeL7RsPolicyOutcome(outcome.error());
}

void DdoscooClient::describeL7RsPolicyAsync(const DescribeL7RsPolicyRequest& request, const DescribeL7RsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeL7RsPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeL7RsPolicyOutcomeCallable DdoscooClient::describeL7RsPolicyCallable(const DescribeL7RsPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeL7RsPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeL7RsPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLayer4RulePolicyOutcome DdoscooClient::describeLayer4RulePolicy(const DescribeLayer4RulePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLayer4RulePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLayer4RulePolicyOutcome(DescribeLayer4RulePolicyResult(outcome.result()));
	else
		return DescribeLayer4RulePolicyOutcome(outcome.error());
}

void DdoscooClient::describeLayer4RulePolicyAsync(const DescribeLayer4RulePolicyRequest& request, const DescribeLayer4RulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLayer4RulePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLayer4RulePolicyOutcomeCallable DdoscooClient::describeLayer4RulePolicyCallable(const DescribeLayer4RulePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLayer4RulePolicyOutcome()>>(
			[this, request]()
			{
			return this->describeLayer4RulePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLogStoreExistStatusOutcome DdoscooClient::describeLogStoreExistStatus(const DescribeLogStoreExistStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogStoreExistStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogStoreExistStatusOutcome(DescribeLogStoreExistStatusResult(outcome.result()));
	else
		return DescribeLogStoreExistStatusOutcome(outcome.error());
}

void DdoscooClient::describeLogStoreExistStatusAsync(const DescribeLogStoreExistStatusRequest& request, const DescribeLogStoreExistStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogStoreExistStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLogStoreExistStatusOutcomeCallable DdoscooClient::describeLogStoreExistStatusCallable(const DescribeLogStoreExistStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogStoreExistStatusOutcome()>>(
			[this, request]()
			{
			return this->describeLogStoreExistStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeNetworkRegionBlockOutcome DdoscooClient::describeNetworkRegionBlock(const DescribeNetworkRegionBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkRegionBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkRegionBlockOutcome(DescribeNetworkRegionBlockResult(outcome.result()));
	else
		return DescribeNetworkRegionBlockOutcome(outcome.error());
}

void DdoscooClient::describeNetworkRegionBlockAsync(const DescribeNetworkRegionBlockRequest& request, const DescribeNetworkRegionBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkRegionBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeNetworkRegionBlockOutcomeCallable DdoscooClient::describeNetworkRegionBlockCallable(const DescribeNetworkRegionBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkRegionBlockOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkRegionBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeNetworkRuleAttributesOutcome DdoscooClient::describeNetworkRuleAttributes(const DescribeNetworkRuleAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkRuleAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkRuleAttributesOutcome(DescribeNetworkRuleAttributesResult(outcome.result()));
	else
		return DescribeNetworkRuleAttributesOutcome(outcome.error());
}

void DdoscooClient::describeNetworkRuleAttributesAsync(const DescribeNetworkRuleAttributesRequest& request, const DescribeNetworkRuleAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkRuleAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeNetworkRuleAttributesOutcomeCallable DdoscooClient::describeNetworkRuleAttributesCallable(const DescribeNetworkRuleAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkRuleAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkRuleAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeNetworkRulesOutcome DdoscooClient::describeNetworkRules(const DescribeNetworkRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkRulesOutcome(DescribeNetworkRulesResult(outcome.result()));
	else
		return DescribeNetworkRulesOutcome(outcome.error());
}

void DdoscooClient::describeNetworkRulesAsync(const DescribeNetworkRulesRequest& request, const DescribeNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeNetworkRulesOutcomeCallable DdoscooClient::describeNetworkRulesCallable(const DescribeNetworkRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkRulesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeOpEntitiesOutcome DdoscooClient::describeOpEntities(const DescribeOpEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOpEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOpEntitiesOutcome(DescribeOpEntitiesResult(outcome.result()));
	else
		return DescribeOpEntitiesOutcome(outcome.error());
}

void DdoscooClient::describeOpEntitiesAsync(const DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOpEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeOpEntitiesOutcomeCallable DdoscooClient::describeOpEntitiesCallable(const DescribeOpEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOpEntitiesOutcome()>>(
			[this, request]()
			{
			return this->describeOpEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortOutcome DdoscooClient::describePort(const DescribePortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortOutcome(DescribePortResult(outcome.result()));
	else
		return DescribePortOutcome(outcome.error());
}

void DdoscooClient::describePortAsync(const DescribePortRequest& request, const DescribePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortOutcomeCallable DdoscooClient::describePortCallable(const DescribePortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortOutcome()>>(
			[this, request]()
			{
			return this->describePort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortAttackMaxFlowOutcome DdoscooClient::describePortAttackMaxFlow(const DescribePortAttackMaxFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortAttackMaxFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortAttackMaxFlowOutcome(DescribePortAttackMaxFlowResult(outcome.result()));
	else
		return DescribePortAttackMaxFlowOutcome(outcome.error());
}

void DdoscooClient::describePortAttackMaxFlowAsync(const DescribePortAttackMaxFlowRequest& request, const DescribePortAttackMaxFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortAttackMaxFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortAttackMaxFlowOutcomeCallable DdoscooClient::describePortAttackMaxFlowCallable(const DescribePortAttackMaxFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortAttackMaxFlowOutcome()>>(
			[this, request]()
			{
			return this->describePortAttackMaxFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortAutoCcStatusOutcome DdoscooClient::describePortAutoCcStatus(const DescribePortAutoCcStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortAutoCcStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortAutoCcStatusOutcome(DescribePortAutoCcStatusResult(outcome.result()));
	else
		return DescribePortAutoCcStatusOutcome(outcome.error());
}

void DdoscooClient::describePortAutoCcStatusAsync(const DescribePortAutoCcStatusRequest& request, const DescribePortAutoCcStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortAutoCcStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortAutoCcStatusOutcomeCallable DdoscooClient::describePortAutoCcStatusCallable(const DescribePortAutoCcStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortAutoCcStatusOutcome()>>(
			[this, request]()
			{
			return this->describePortAutoCcStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortCcAttackTopIPOutcome DdoscooClient::describePortCcAttackTopIP(const DescribePortCcAttackTopIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortCcAttackTopIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortCcAttackTopIPOutcome(DescribePortCcAttackTopIPResult(outcome.result()));
	else
		return DescribePortCcAttackTopIPOutcome(outcome.error());
}

void DdoscooClient::describePortCcAttackTopIPAsync(const DescribePortCcAttackTopIPRequest& request, const DescribePortCcAttackTopIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortCcAttackTopIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortCcAttackTopIPOutcomeCallable DdoscooClient::describePortCcAttackTopIPCallable(const DescribePortCcAttackTopIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortCcAttackTopIPOutcome()>>(
			[this, request]()
			{
			return this->describePortCcAttackTopIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortConnsCountOutcome DdoscooClient::describePortConnsCount(const DescribePortConnsCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortConnsCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortConnsCountOutcome(DescribePortConnsCountResult(outcome.result()));
	else
		return DescribePortConnsCountOutcome(outcome.error());
}

void DdoscooClient::describePortConnsCountAsync(const DescribePortConnsCountRequest& request, const DescribePortConnsCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortConnsCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortConnsCountOutcomeCallable DdoscooClient::describePortConnsCountCallable(const DescribePortConnsCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortConnsCountOutcome()>>(
			[this, request]()
			{
			return this->describePortConnsCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortConnsListOutcome DdoscooClient::describePortConnsList(const DescribePortConnsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortConnsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortConnsListOutcome(DescribePortConnsListResult(outcome.result()));
	else
		return DescribePortConnsListOutcome(outcome.error());
}

void DdoscooClient::describePortConnsListAsync(const DescribePortConnsListRequest& request, const DescribePortConnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortConnsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortConnsListOutcomeCallable DdoscooClient::describePortConnsListCallable(const DescribePortConnsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortConnsListOutcome()>>(
			[this, request]()
			{
			return this->describePortConnsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortFlowListOutcome DdoscooClient::describePortFlowList(const DescribePortFlowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortFlowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortFlowListOutcome(DescribePortFlowListResult(outcome.result()));
	else
		return DescribePortFlowListOutcome(outcome.error());
}

void DdoscooClient::describePortFlowListAsync(const DescribePortFlowListRequest& request, const DescribePortFlowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortFlowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortFlowListOutcomeCallable DdoscooClient::describePortFlowListCallable(const DescribePortFlowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortFlowListOutcome()>>(
			[this, request]()
			{
			return this->describePortFlowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortMaxConnsOutcome DdoscooClient::describePortMaxConns(const DescribePortMaxConnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortMaxConnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortMaxConnsOutcome(DescribePortMaxConnsResult(outcome.result()));
	else
		return DescribePortMaxConnsOutcome(outcome.error());
}

void DdoscooClient::describePortMaxConnsAsync(const DescribePortMaxConnsRequest& request, const DescribePortMaxConnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortMaxConns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortMaxConnsOutcomeCallable DdoscooClient::describePortMaxConnsCallable(const DescribePortMaxConnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortMaxConnsOutcome()>>(
			[this, request]()
			{
			return this->describePortMaxConns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortViewSourceCountriesOutcome DdoscooClient::describePortViewSourceCountries(const DescribePortViewSourceCountriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortViewSourceCountriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortViewSourceCountriesOutcome(DescribePortViewSourceCountriesResult(outcome.result()));
	else
		return DescribePortViewSourceCountriesOutcome(outcome.error());
}

void DdoscooClient::describePortViewSourceCountriesAsync(const DescribePortViewSourceCountriesRequest& request, const DescribePortViewSourceCountriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortViewSourceCountries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortViewSourceCountriesOutcomeCallable DdoscooClient::describePortViewSourceCountriesCallable(const DescribePortViewSourceCountriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortViewSourceCountriesOutcome()>>(
			[this, request]()
			{
			return this->describePortViewSourceCountries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortViewSourceIspsOutcome DdoscooClient::describePortViewSourceIsps(const DescribePortViewSourceIspsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortViewSourceIspsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortViewSourceIspsOutcome(DescribePortViewSourceIspsResult(outcome.result()));
	else
		return DescribePortViewSourceIspsOutcome(outcome.error());
}

void DdoscooClient::describePortViewSourceIspsAsync(const DescribePortViewSourceIspsRequest& request, const DescribePortViewSourceIspsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortViewSourceIsps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortViewSourceIspsOutcomeCallable DdoscooClient::describePortViewSourceIspsCallable(const DescribePortViewSourceIspsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortViewSourceIspsOutcome()>>(
			[this, request]()
			{
			return this->describePortViewSourceIsps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribePortViewSourceProvincesOutcome DdoscooClient::describePortViewSourceProvinces(const DescribePortViewSourceProvincesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortViewSourceProvincesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortViewSourceProvincesOutcome(DescribePortViewSourceProvincesResult(outcome.result()));
	else
		return DescribePortViewSourceProvincesOutcome(outcome.error());
}

void DdoscooClient::describePortViewSourceProvincesAsync(const DescribePortViewSourceProvincesRequest& request, const DescribePortViewSourceProvincesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortViewSourceProvinces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribePortViewSourceProvincesOutcomeCallable DdoscooClient::describePortViewSourceProvincesCallable(const DescribePortViewSourceProvincesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortViewSourceProvincesOutcome()>>(
			[this, request]()
			{
			return this->describePortViewSourceProvinces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSceneDefenseObjectsOutcome DdoscooClient::describeSceneDefenseObjects(const DescribeSceneDefenseObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneDefenseObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneDefenseObjectsOutcome(DescribeSceneDefenseObjectsResult(outcome.result()));
	else
		return DescribeSceneDefenseObjectsOutcome(outcome.error());
}

void DdoscooClient::describeSceneDefenseObjectsAsync(const DescribeSceneDefenseObjectsRequest& request, const DescribeSceneDefenseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSceneDefenseObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSceneDefenseObjectsOutcomeCallable DdoscooClient::describeSceneDefenseObjectsCallable(const DescribeSceneDefenseObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneDefenseObjectsOutcome()>>(
			[this, request]()
			{
			return this->describeSceneDefenseObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSceneDefensePoliciesOutcome DdoscooClient::describeSceneDefensePolicies(const DescribeSceneDefensePoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneDefensePoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneDefensePoliciesOutcome(DescribeSceneDefensePoliciesResult(outcome.result()));
	else
		return DescribeSceneDefensePoliciesOutcome(outcome.error());
}

void DdoscooClient::describeSceneDefensePoliciesAsync(const DescribeSceneDefensePoliciesRequest& request, const DescribeSceneDefensePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSceneDefensePolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSceneDefensePoliciesOutcomeCallable DdoscooClient::describeSceneDefensePoliciesCallable(const DescribeSceneDefensePoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneDefensePoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeSceneDefensePolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSchedulerRulesOutcome DdoscooClient::describeSchedulerRules(const DescribeSchedulerRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSchedulerRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSchedulerRulesOutcome(DescribeSchedulerRulesResult(outcome.result()));
	else
		return DescribeSchedulerRulesOutcome(outcome.error());
}

void DdoscooClient::describeSchedulerRulesAsync(const DescribeSchedulerRulesRequest& request, const DescribeSchedulerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSchedulerRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSchedulerRulesOutcomeCallable DdoscooClient::describeSchedulerRulesCallable(const DescribeSchedulerRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSchedulerRulesOutcome()>>(
			[this, request]()
			{
			return this->describeSchedulerRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlaEventListOutcome DdoscooClient::describeSlaEventList(const DescribeSlaEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlaEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlaEventListOutcome(DescribeSlaEventListResult(outcome.result()));
	else
		return DescribeSlaEventListOutcome(outcome.error());
}

void DdoscooClient::describeSlaEventListAsync(const DescribeSlaEventListRequest& request, const DescribeSlaEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlaEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlaEventListOutcomeCallable DdoscooClient::describeSlaEventListCallable(const DescribeSlaEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlaEventListOutcome()>>(
			[this, request]()
			{
			return this->describeSlaEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsAuthStatusOutcome DdoscooClient::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsAuthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsAuthStatusOutcome(DescribeSlsAuthStatusResult(outcome.result()));
	else
		return DescribeSlsAuthStatusOutcome(outcome.error());
}

void DdoscooClient::describeSlsAuthStatusAsync(const DescribeSlsAuthStatusRequest& request, const DescribeSlsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsAuthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsAuthStatusOutcomeCallable DdoscooClient::describeSlsAuthStatusCallable(const DescribeSlsAuthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsAuthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSlsAuthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsLogstoreInfoOutcome DdoscooClient::describeSlsLogstoreInfo(const DescribeSlsLogstoreInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsLogstoreInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsLogstoreInfoOutcome(DescribeSlsLogstoreInfoResult(outcome.result()));
	else
		return DescribeSlsLogstoreInfoOutcome(outcome.error());
}

void DdoscooClient::describeSlsLogstoreInfoAsync(const DescribeSlsLogstoreInfoRequest& request, const DescribeSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsLogstoreInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsLogstoreInfoOutcomeCallable DdoscooClient::describeSlsLogstoreInfoCallable(const DescribeSlsLogstoreInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsLogstoreInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSlsLogstoreInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsOpenStatusOutcome DdoscooClient::describeSlsOpenStatus(const DescribeSlsOpenStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsOpenStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsOpenStatusOutcome(DescribeSlsOpenStatusResult(outcome.result()));
	else
		return DescribeSlsOpenStatusOutcome(outcome.error());
}

void DdoscooClient::describeSlsOpenStatusAsync(const DescribeSlsOpenStatusRequest& request, const DescribeSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsOpenStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsOpenStatusOutcomeCallable DdoscooClient::describeSlsOpenStatusCallable(const DescribeSlsOpenStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsOpenStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSlsOpenStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeStsGrantStatusOutcome DdoscooClient::describeStsGrantStatus(const DescribeStsGrantStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStsGrantStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStsGrantStatusOutcome(DescribeStsGrantStatusResult(outcome.result()));
	else
		return DescribeStsGrantStatusOutcome(outcome.error());
}

void DdoscooClient::describeStsGrantStatusAsync(const DescribeStsGrantStatusRequest& request, const DescribeStsGrantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStsGrantStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeStsGrantStatusOutcomeCallable DdoscooClient::describeStsGrantStatusCallable(const DescribeStsGrantStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStsGrantStatusOutcome()>>(
			[this, request]()
			{
			return this->describeStsGrantStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSystemLogOutcome DdoscooClient::describeSystemLog(const DescribeSystemLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemLogOutcome(DescribeSystemLogResult(outcome.result()));
	else
		return DescribeSystemLogOutcome(outcome.error());
}

void DdoscooClient::describeSystemLogAsync(const DescribeSystemLogRequest& request, const DescribeSystemLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSystemLogOutcomeCallable DdoscooClient::describeSystemLogCallable(const DescribeSystemLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemLogOutcome()>>(
			[this, request]()
			{
			return this->describeSystemLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeTagKeysOutcome DdoscooClient::describeTagKeys(const DescribeTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagKeysOutcome(DescribeTagKeysResult(outcome.result()));
	else
		return DescribeTagKeysOutcome(outcome.error());
}

void DdoscooClient::describeTagKeysAsync(const DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeTagKeysOutcomeCallable DdoscooClient::describeTagKeysCallable(const DescribeTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagKeysOutcome()>>(
			[this, request]()
			{
			return this->describeTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeTagResourcesOutcome DdoscooClient::describeTagResources(const DescribeTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagResourcesOutcome(DescribeTagResourcesResult(outcome.result()));
	else
		return DescribeTagResourcesOutcome(outcome.error());
}

void DdoscooClient::describeTagResourcesAsync(const DescribeTagResourcesRequest& request, const DescribeTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeTagResourcesOutcomeCallable DdoscooClient::describeTagResourcesCallable(const DescribeTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeTotalAttackMaxFlowOutcome DdoscooClient::describeTotalAttackMaxFlow(const DescribeTotalAttackMaxFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTotalAttackMaxFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTotalAttackMaxFlowOutcome(DescribeTotalAttackMaxFlowResult(outcome.result()));
	else
		return DescribeTotalAttackMaxFlowOutcome(outcome.error());
}

void DdoscooClient::describeTotalAttackMaxFlowAsync(const DescribeTotalAttackMaxFlowRequest& request, const DescribeTotalAttackMaxFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalAttackMaxFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeTotalAttackMaxFlowOutcomeCallable DdoscooClient::describeTotalAttackMaxFlowCallable(const DescribeTotalAttackMaxFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalAttackMaxFlowOutcome()>>(
			[this, request]()
			{
			return this->describeTotalAttackMaxFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeUdpReflectOutcome DdoscooClient::describeUdpReflect(const DescribeUdpReflectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUdpReflectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUdpReflectOutcome(DescribeUdpReflectResult(outcome.result()));
	else
		return DescribeUdpReflectOutcome(outcome.error());
}

void DdoscooClient::describeUdpReflectAsync(const DescribeUdpReflectRequest& request, const DescribeUdpReflectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUdpReflect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeUdpReflectOutcomeCallable DdoscooClient::describeUdpReflectCallable(const DescribeUdpReflectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUdpReflectOutcome()>>(
			[this, request]()
			{
			return this->describeUdpReflect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeUnBlackholeCountOutcome DdoscooClient::describeUnBlackholeCount(const DescribeUnBlackholeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUnBlackholeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUnBlackholeCountOutcome(DescribeUnBlackholeCountResult(outcome.result()));
	else
		return DescribeUnBlackholeCountOutcome(outcome.error());
}

void DdoscooClient::describeUnBlackholeCountAsync(const DescribeUnBlackholeCountRequest& request, const DescribeUnBlackholeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUnBlackholeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeUnBlackholeCountOutcomeCallable DdoscooClient::describeUnBlackholeCountCallable(const DescribeUnBlackholeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUnBlackholeCountOutcome()>>(
			[this, request]()
			{
			return this->describeUnBlackholeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeUnBlockCountOutcome DdoscooClient::describeUnBlockCount(const DescribeUnBlockCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUnBlockCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUnBlockCountOutcome(DescribeUnBlockCountResult(outcome.result()));
	else
		return DescribeUnBlockCountOutcome(outcome.error());
}

void DdoscooClient::describeUnBlockCountAsync(const DescribeUnBlockCountRequest& request, const DescribeUnBlockCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUnBlockCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeUnBlockCountOutcomeCallable DdoscooClient::describeUnBlockCountCallable(const DescribeUnBlockCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUnBlockCountOutcome()>>(
			[this, request]()
			{
			return this->describeUnBlockCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebAccessLogDispatchStatusOutcome DdoscooClient::describeWebAccessLogDispatchStatus(const DescribeWebAccessLogDispatchStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebAccessLogDispatchStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebAccessLogDispatchStatusOutcome(DescribeWebAccessLogDispatchStatusResult(outcome.result()));
	else
		return DescribeWebAccessLogDispatchStatusOutcome(outcome.error());
}

void DdoscooClient::describeWebAccessLogDispatchStatusAsync(const DescribeWebAccessLogDispatchStatusRequest& request, const DescribeWebAccessLogDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebAccessLogDispatchStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebAccessLogDispatchStatusOutcomeCallable DdoscooClient::describeWebAccessLogDispatchStatusCallable(const DescribeWebAccessLogDispatchStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebAccessLogDispatchStatusOutcome()>>(
			[this, request]()
			{
			return this->describeWebAccessLogDispatchStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebAccessLogEmptyCountOutcome DdoscooClient::describeWebAccessLogEmptyCount(const DescribeWebAccessLogEmptyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebAccessLogEmptyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebAccessLogEmptyCountOutcome(DescribeWebAccessLogEmptyCountResult(outcome.result()));
	else
		return DescribeWebAccessLogEmptyCountOutcome(outcome.error());
}

void DdoscooClient::describeWebAccessLogEmptyCountAsync(const DescribeWebAccessLogEmptyCountRequest& request, const DescribeWebAccessLogEmptyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebAccessLogEmptyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebAccessLogEmptyCountOutcomeCallable DdoscooClient::describeWebAccessLogEmptyCountCallable(const DescribeWebAccessLogEmptyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebAccessLogEmptyCountOutcome()>>(
			[this, request]()
			{
			return this->describeWebAccessLogEmptyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebAccessLogStatusOutcome DdoscooClient::describeWebAccessLogStatus(const DescribeWebAccessLogStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebAccessLogStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebAccessLogStatusOutcome(DescribeWebAccessLogStatusResult(outcome.result()));
	else
		return DescribeWebAccessLogStatusOutcome(outcome.error());
}

void DdoscooClient::describeWebAccessLogStatusAsync(const DescribeWebAccessLogStatusRequest& request, const DescribeWebAccessLogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebAccessLogStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebAccessLogStatusOutcomeCallable DdoscooClient::describeWebAccessLogStatusCallable(const DescribeWebAccessLogStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebAccessLogStatusOutcome()>>(
			[this, request]()
			{
			return this->describeWebAccessLogStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebAccessModeOutcome DdoscooClient::describeWebAccessMode(const DescribeWebAccessModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebAccessModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebAccessModeOutcome(DescribeWebAccessModeResult(outcome.result()));
	else
		return DescribeWebAccessModeOutcome(outcome.error());
}

void DdoscooClient::describeWebAccessModeAsync(const DescribeWebAccessModeRequest& request, const DescribeWebAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebAccessMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebAccessModeOutcomeCallable DdoscooClient::describeWebAccessModeCallable(const DescribeWebAccessModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebAccessModeOutcome()>>(
			[this, request]()
			{
			return this->describeWebAccessMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebAreaBlockConfigsOutcome DdoscooClient::describeWebAreaBlockConfigs(const DescribeWebAreaBlockConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebAreaBlockConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebAreaBlockConfigsOutcome(DescribeWebAreaBlockConfigsResult(outcome.result()));
	else
		return DescribeWebAreaBlockConfigsOutcome(outcome.error());
}

void DdoscooClient::describeWebAreaBlockConfigsAsync(const DescribeWebAreaBlockConfigsRequest& request, const DescribeWebAreaBlockConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebAreaBlockConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebAreaBlockConfigsOutcomeCallable DdoscooClient::describeWebAreaBlockConfigsCallable(const DescribeWebAreaBlockConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebAreaBlockConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeWebAreaBlockConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebCCRulesOutcome DdoscooClient::describeWebCCRules(const DescribeWebCCRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebCCRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebCCRulesOutcome(DescribeWebCCRulesResult(outcome.result()));
	else
		return DescribeWebCCRulesOutcome(outcome.error());
}

void DdoscooClient::describeWebCCRulesAsync(const DescribeWebCCRulesRequest& request, const DescribeWebCCRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebCCRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebCCRulesOutcomeCallable DdoscooClient::describeWebCCRulesCallable(const DescribeWebCCRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebCCRulesOutcome()>>(
			[this, request]()
			{
			return this->describeWebCCRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebCacheConfigsOutcome DdoscooClient::describeWebCacheConfigs(const DescribeWebCacheConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebCacheConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebCacheConfigsOutcome(DescribeWebCacheConfigsResult(outcome.result()));
	else
		return DescribeWebCacheConfigsOutcome(outcome.error());
}

void DdoscooClient::describeWebCacheConfigsAsync(const DescribeWebCacheConfigsRequest& request, const DescribeWebCacheConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebCacheConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebCacheConfigsOutcomeCallable DdoscooClient::describeWebCacheConfigsCallable(const DescribeWebCacheConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebCacheConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeWebCacheConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebCcProtectSwitchOutcome DdoscooClient::describeWebCcProtectSwitch(const DescribeWebCcProtectSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebCcProtectSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebCcProtectSwitchOutcome(DescribeWebCcProtectSwitchResult(outcome.result()));
	else
		return DescribeWebCcProtectSwitchOutcome(outcome.error());
}

void DdoscooClient::describeWebCcProtectSwitchAsync(const DescribeWebCcProtectSwitchRequest& request, const DescribeWebCcProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebCcProtectSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebCcProtectSwitchOutcomeCallable DdoscooClient::describeWebCcProtectSwitchCallable(const DescribeWebCcProtectSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebCcProtectSwitchOutcome()>>(
			[this, request]()
			{
			return this->describeWebCcProtectSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebCustomPortsOutcome DdoscooClient::describeWebCustomPorts(const DescribeWebCustomPortsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebCustomPortsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebCustomPortsOutcome(DescribeWebCustomPortsResult(outcome.result()));
	else
		return DescribeWebCustomPortsOutcome(outcome.error());
}

void DdoscooClient::describeWebCustomPortsAsync(const DescribeWebCustomPortsRequest& request, const DescribeWebCustomPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebCustomPorts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebCustomPortsOutcomeCallable DdoscooClient::describeWebCustomPortsCallable(const DescribeWebCustomPortsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebCustomPortsOutcome()>>(
			[this, request]()
			{
			return this->describeWebCustomPorts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebInstanceRelationsOutcome DdoscooClient::describeWebInstanceRelations(const DescribeWebInstanceRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebInstanceRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebInstanceRelationsOutcome(DescribeWebInstanceRelationsResult(outcome.result()));
	else
		return DescribeWebInstanceRelationsOutcome(outcome.error());
}

void DdoscooClient::describeWebInstanceRelationsAsync(const DescribeWebInstanceRelationsRequest& request, const DescribeWebInstanceRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebInstanceRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebInstanceRelationsOutcomeCallable DdoscooClient::describeWebInstanceRelationsCallable(const DescribeWebInstanceRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebInstanceRelationsOutcome()>>(
			[this, request]()
			{
			return this->describeWebInstanceRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebPreciseAccessRuleOutcome DdoscooClient::describeWebPreciseAccessRule(const DescribeWebPreciseAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebPreciseAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebPreciseAccessRuleOutcome(DescribeWebPreciseAccessRuleResult(outcome.result()));
	else
		return DescribeWebPreciseAccessRuleOutcome(outcome.error());
}

void DdoscooClient::describeWebPreciseAccessRuleAsync(const DescribeWebPreciseAccessRuleRequest& request, const DescribeWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebPreciseAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebPreciseAccessRuleOutcomeCallable DdoscooClient::describeWebPreciseAccessRuleCallable(const DescribeWebPreciseAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebPreciseAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->describeWebPreciseAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebReportTopIpOutcome DdoscooClient::describeWebReportTopIp(const DescribeWebReportTopIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebReportTopIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebReportTopIpOutcome(DescribeWebReportTopIpResult(outcome.result()));
	else
		return DescribeWebReportTopIpOutcome(outcome.error());
}

void DdoscooClient::describeWebReportTopIpAsync(const DescribeWebReportTopIpRequest& request, const DescribeWebReportTopIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebReportTopIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebReportTopIpOutcomeCallable DdoscooClient::describeWebReportTopIpCallable(const DescribeWebReportTopIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebReportTopIpOutcome()>>(
			[this, request]()
			{
			return this->describeWebReportTopIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeWebRulesOutcome DdoscooClient::describeWebRules(const DescribeWebRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebRulesOutcome(DescribeWebRulesResult(outcome.result()));
	else
		return DescribeWebRulesOutcome(outcome.error());
}

void DdoscooClient::describeWebRulesAsync(const DescribeWebRulesRequest& request, const DescribeWebRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeWebRulesOutcomeCallable DdoscooClient::describeWebRulesCallable(const DescribeWebRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebRulesOutcome()>>(
			[this, request]()
			{
			return this->describeWebRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DetachSceneDefenseObjectOutcome DdoscooClient::detachSceneDefenseObject(const DetachSceneDefenseObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachSceneDefenseObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachSceneDefenseObjectOutcome(DetachSceneDefenseObjectResult(outcome.result()));
	else
		return DetachSceneDefenseObjectOutcome(outcome.error());
}

void DdoscooClient::detachSceneDefenseObjectAsync(const DetachSceneDefenseObjectRequest& request, const DetachSceneDefenseObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachSceneDefenseObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DetachSceneDefenseObjectOutcomeCallable DdoscooClient::detachSceneDefenseObjectCallable(const DetachSceneDefenseObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachSceneDefenseObjectOutcome()>>(
			[this, request]()
			{
			return this->detachSceneDefenseObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableSceneDefensePolicyOutcome DdoscooClient::disableSceneDefensePolicy(const DisableSceneDefensePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSceneDefensePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSceneDefensePolicyOutcome(DisableSceneDefensePolicyResult(outcome.result()));
	else
		return DisableSceneDefensePolicyOutcome(outcome.error());
}

void DdoscooClient::disableSceneDefensePolicyAsync(const DisableSceneDefensePolicyRequest& request, const DisableSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSceneDefensePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableSceneDefensePolicyOutcomeCallable DdoscooClient::disableSceneDefensePolicyCallable(const DisableSceneDefensePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSceneDefensePolicyOutcome()>>(
			[this, request]()
			{
			return this->disableSceneDefensePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableWebAccessLogConfigOutcome DdoscooClient::disableWebAccessLogConfig(const DisableWebAccessLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableWebAccessLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableWebAccessLogConfigOutcome(DisableWebAccessLogConfigResult(outcome.result()));
	else
		return DisableWebAccessLogConfigOutcome(outcome.error());
}

void DdoscooClient::disableWebAccessLogConfigAsync(const DisableWebAccessLogConfigRequest& request, const DisableWebAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableWebAccessLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableWebAccessLogConfigOutcomeCallable DdoscooClient::disableWebAccessLogConfigCallable(const DisableWebAccessLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableWebAccessLogConfigOutcome()>>(
			[this, request]()
			{
			return this->disableWebAccessLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableWebCCOutcome DdoscooClient::disableWebCC(const DisableWebCCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableWebCCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableWebCCOutcome(DisableWebCCResult(outcome.result()));
	else
		return DisableWebCCOutcome(outcome.error());
}

void DdoscooClient::disableWebCCAsync(const DisableWebCCRequest& request, const DisableWebCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableWebCC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableWebCCOutcomeCallable DdoscooClient::disableWebCCCallable(const DisableWebCCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableWebCCOutcome()>>(
			[this, request]()
			{
			return this->disableWebCC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableWebCCRuleOutcome DdoscooClient::disableWebCCRule(const DisableWebCCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableWebCCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableWebCCRuleOutcome(DisableWebCCRuleResult(outcome.result()));
	else
		return DisableWebCCRuleOutcome(outcome.error());
}

void DdoscooClient::disableWebCCRuleAsync(const DisableWebCCRuleRequest& request, const DisableWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableWebCCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableWebCCRuleOutcomeCallable DdoscooClient::disableWebCCRuleCallable(const DisableWebCCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableWebCCRuleOutcome()>>(
			[this, request]()
			{
			return this->disableWebCCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EmptyAutoCcBlacklistOutcome DdoscooClient::emptyAutoCcBlacklist(const EmptyAutoCcBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EmptyAutoCcBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EmptyAutoCcBlacklistOutcome(EmptyAutoCcBlacklistResult(outcome.result()));
	else
		return EmptyAutoCcBlacklistOutcome(outcome.error());
}

void DdoscooClient::emptyAutoCcBlacklistAsync(const EmptyAutoCcBlacklistRequest& request, const EmptyAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, emptyAutoCcBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EmptyAutoCcBlacklistOutcomeCallable DdoscooClient::emptyAutoCcBlacklistCallable(const EmptyAutoCcBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EmptyAutoCcBlacklistOutcome()>>(
			[this, request]()
			{
			return this->emptyAutoCcBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EmptyAutoCcWhitelistOutcome DdoscooClient::emptyAutoCcWhitelist(const EmptyAutoCcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EmptyAutoCcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EmptyAutoCcWhitelistOutcome(EmptyAutoCcWhitelistResult(outcome.result()));
	else
		return EmptyAutoCcWhitelistOutcome(outcome.error());
}

void DdoscooClient::emptyAutoCcWhitelistAsync(const EmptyAutoCcWhitelistRequest& request, const EmptyAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, emptyAutoCcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EmptyAutoCcWhitelistOutcomeCallable DdoscooClient::emptyAutoCcWhitelistCallable(const EmptyAutoCcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EmptyAutoCcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->emptyAutoCcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EmptySlsLogstoreOutcome DdoscooClient::emptySlsLogstore(const EmptySlsLogstoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EmptySlsLogstoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EmptySlsLogstoreOutcome(EmptySlsLogstoreResult(outcome.result()));
	else
		return EmptySlsLogstoreOutcome(outcome.error());
}

void DdoscooClient::emptySlsLogstoreAsync(const EmptySlsLogstoreRequest& request, const EmptySlsLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, emptySlsLogstore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EmptySlsLogstoreOutcomeCallable DdoscooClient::emptySlsLogstoreCallable(const EmptySlsLogstoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EmptySlsLogstoreOutcome()>>(
			[this, request]()
			{
			return this->emptySlsLogstore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableSceneDefensePolicyOutcome DdoscooClient::enableSceneDefensePolicy(const EnableSceneDefensePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSceneDefensePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSceneDefensePolicyOutcome(EnableSceneDefensePolicyResult(outcome.result()));
	else
		return EnableSceneDefensePolicyOutcome(outcome.error());
}

void DdoscooClient::enableSceneDefensePolicyAsync(const EnableSceneDefensePolicyRequest& request, const EnableSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSceneDefensePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableSceneDefensePolicyOutcomeCallable DdoscooClient::enableSceneDefensePolicyCallable(const EnableSceneDefensePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSceneDefensePolicyOutcome()>>(
			[this, request]()
			{
			return this->enableSceneDefensePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableWebAccessLogConfigOutcome DdoscooClient::enableWebAccessLogConfig(const EnableWebAccessLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWebAccessLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWebAccessLogConfigOutcome(EnableWebAccessLogConfigResult(outcome.result()));
	else
		return EnableWebAccessLogConfigOutcome(outcome.error());
}

void DdoscooClient::enableWebAccessLogConfigAsync(const EnableWebAccessLogConfigRequest& request, const EnableWebAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWebAccessLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableWebAccessLogConfigOutcomeCallable DdoscooClient::enableWebAccessLogConfigCallable(const EnableWebAccessLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWebAccessLogConfigOutcome()>>(
			[this, request]()
			{
			return this->enableWebAccessLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableWebCCOutcome DdoscooClient::enableWebCC(const EnableWebCCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWebCCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWebCCOutcome(EnableWebCCResult(outcome.result()));
	else
		return EnableWebCCOutcome(outcome.error());
}

void DdoscooClient::enableWebCCAsync(const EnableWebCCRequest& request, const EnableWebCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWebCC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableWebCCOutcomeCallable DdoscooClient::enableWebCCCallable(const EnableWebCCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWebCCOutcome()>>(
			[this, request]()
			{
			return this->enableWebCC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableWebCCRuleOutcome DdoscooClient::enableWebCCRule(const EnableWebCCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWebCCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWebCCRuleOutcome(EnableWebCCRuleResult(outcome.result()));
	else
		return EnableWebCCRuleOutcome(outcome.error());
}

void DdoscooClient::enableWebCCRuleAsync(const EnableWebCCRuleRequest& request, const EnableWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWebCCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableWebCCRuleOutcomeCallable DdoscooClient::enableWebCCRuleCallable(const EnableWebCCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWebCCRuleOutcome()>>(
			[this, request]()
			{
			return this->enableWebCCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyBizBandWidthModeOutcome DdoscooClient::modifyBizBandWidthMode(const ModifyBizBandWidthModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBizBandWidthModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBizBandWidthModeOutcome(ModifyBizBandWidthModeResult(outcome.result()));
	else
		return ModifyBizBandWidthModeOutcome(outcome.error());
}

void DdoscooClient::modifyBizBandWidthModeAsync(const ModifyBizBandWidthModeRequest& request, const ModifyBizBandWidthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBizBandWidthMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyBizBandWidthModeOutcomeCallable DdoscooClient::modifyBizBandWidthModeCallable(const ModifyBizBandWidthModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBizBandWidthModeOutcome()>>(
			[this, request]()
			{
			return this->modifyBizBandWidthMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyBlackholeStatusOutcome DdoscooClient::modifyBlackholeStatus(const ModifyBlackholeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBlackholeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBlackholeStatusOutcome(ModifyBlackholeStatusResult(outcome.result()));
	else
		return ModifyBlackholeStatusOutcome(outcome.error());
}

void DdoscooClient::modifyBlackholeStatusAsync(const ModifyBlackholeStatusRequest& request, const ModifyBlackholeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBlackholeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyBlackholeStatusOutcomeCallable DdoscooClient::modifyBlackholeStatusCallable(const ModifyBlackholeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBlackholeStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyBlackholeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyBlockStatusOutcome DdoscooClient::modifyBlockStatus(const ModifyBlockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBlockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBlockStatusOutcome(ModifyBlockStatusResult(outcome.result()));
	else
		return ModifyBlockStatusOutcome(outcome.error());
}

void DdoscooClient::modifyBlockStatusAsync(const ModifyBlockStatusRequest& request, const ModifyBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBlockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyBlockStatusOutcomeCallable DdoscooClient::modifyBlockStatusCallable(const ModifyBlockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBlockStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyBlockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyCnameReuseOutcome DdoscooClient::modifyCnameReuse(const ModifyCnameReuseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCnameReuseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCnameReuseOutcome(ModifyCnameReuseResult(outcome.result()));
	else
		return ModifyCnameReuseOutcome(outcome.error());
}

void DdoscooClient::modifyCnameReuseAsync(const ModifyCnameReuseRequest& request, const ModifyCnameReuseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCnameReuse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyCnameReuseOutcomeCallable DdoscooClient::modifyCnameReuseCallable(const ModifyCnameReuseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCnameReuseOutcome()>>(
			[this, request]()
			{
			return this->modifyCnameReuse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyDomainResourceOutcome DdoscooClient::modifyDomainResource(const ModifyDomainResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDomainResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDomainResourceOutcome(ModifyDomainResourceResult(outcome.result()));
	else
		return ModifyDomainResourceOutcome(outcome.error());
}

void DdoscooClient::modifyDomainResourceAsync(const ModifyDomainResourceRequest& request, const ModifyDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDomainResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyDomainResourceOutcomeCallable DdoscooClient::modifyDomainResourceCallable(const ModifyDomainResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDomainResourceOutcome()>>(
			[this, request]()
			{
			return this->modifyDomainResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyElasticBandWidthOutcome DdoscooClient::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticBandWidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticBandWidthOutcome(ModifyElasticBandWidthResult(outcome.result()));
	else
		return ModifyElasticBandWidthOutcome(outcome.error());
}

void DdoscooClient::modifyElasticBandWidthAsync(const ModifyElasticBandWidthRequest& request, const ModifyElasticBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticBandWidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyElasticBandWidthOutcomeCallable DdoscooClient::modifyElasticBandWidthCallable(const ModifyElasticBandWidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticBandWidthOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticBandWidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyElasticBizBandWidthOutcome DdoscooClient::modifyElasticBizBandWidth(const ModifyElasticBizBandWidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticBizBandWidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticBizBandWidthOutcome(ModifyElasticBizBandWidthResult(outcome.result()));
	else
		return ModifyElasticBizBandWidthOutcome(outcome.error());
}

void DdoscooClient::modifyElasticBizBandWidthAsync(const ModifyElasticBizBandWidthRequest& request, const ModifyElasticBizBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticBizBandWidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyElasticBizBandWidthOutcomeCallable DdoscooClient::modifyElasticBizBandWidthCallable(const ModifyElasticBizBandWidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticBizBandWidthOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticBizBandWidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyElasticBizQpsOutcome DdoscooClient::modifyElasticBizQps(const ModifyElasticBizQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticBizQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticBizQpsOutcome(ModifyElasticBizQpsResult(outcome.result()));
	else
		return ModifyElasticBizQpsOutcome(outcome.error());
}

void DdoscooClient::modifyElasticBizQpsAsync(const ModifyElasticBizQpsRequest& request, const ModifyElasticBizQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticBizQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyElasticBizQpsOutcomeCallable DdoscooClient::modifyElasticBizQpsCallable(const ModifyElasticBizQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticBizQpsOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticBizQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyFullLogTtlOutcome DdoscooClient::modifyFullLogTtl(const ModifyFullLogTtlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFullLogTtlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFullLogTtlOutcome(ModifyFullLogTtlResult(outcome.result()));
	else
		return ModifyFullLogTtlOutcome(outcome.error());
}

void DdoscooClient::modifyFullLogTtlAsync(const ModifyFullLogTtlRequest& request, const ModifyFullLogTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFullLogTtl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyFullLogTtlOutcomeCallable DdoscooClient::modifyFullLogTtlCallable(const ModifyFullLogTtlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFullLogTtlOutcome()>>(
			[this, request]()
			{
			return this->modifyFullLogTtl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyHeadersOutcome DdoscooClient::modifyHeaders(const ModifyHeadersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHeadersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHeadersOutcome(ModifyHeadersResult(outcome.result()));
	else
		return ModifyHeadersOutcome(outcome.error());
}

void DdoscooClient::modifyHeadersAsync(const ModifyHeadersRequest& request, const ModifyHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHeaders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyHeadersOutcomeCallable DdoscooClient::modifyHeadersCallable(const ModifyHeadersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHeadersOutcome()>>(
			[this, request]()
			{
			return this->modifyHeaders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyHealthCheckConfigOutcome DdoscooClient::modifyHealthCheckConfig(const ModifyHealthCheckConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHealthCheckConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHealthCheckConfigOutcome(ModifyHealthCheckConfigResult(outcome.result()));
	else
		return ModifyHealthCheckConfigOutcome(outcome.error());
}

void DdoscooClient::modifyHealthCheckConfigAsync(const ModifyHealthCheckConfigRequest& request, const ModifyHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHealthCheckConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyHealthCheckConfigOutcomeCallable DdoscooClient::modifyHealthCheckConfigCallable(const ModifyHealthCheckConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHealthCheckConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHealthCheckConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyHttp2EnableOutcome DdoscooClient::modifyHttp2Enable(const ModifyHttp2EnableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHttp2EnableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHttp2EnableOutcome(ModifyHttp2EnableResult(outcome.result()));
	else
		return ModifyHttp2EnableOutcome(outcome.error());
}

void DdoscooClient::modifyHttp2EnableAsync(const ModifyHttp2EnableRequest& request, const ModifyHttp2EnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHttp2Enable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyHttp2EnableOutcomeCallable DdoscooClient::modifyHttp2EnableCallable(const ModifyHttp2EnableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHttp2EnableOutcome()>>(
			[this, request]()
			{
			return this->modifyHttp2Enable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyInstanceRemarkOutcome DdoscooClient::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceRemarkOutcome(ModifyInstanceRemarkResult(outcome.result()));
	else
		return ModifyInstanceRemarkOutcome(outcome.error());
}

void DdoscooClient::modifyInstanceRemarkAsync(const ModifyInstanceRemarkRequest& request, const ModifyInstanceRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyInstanceRemarkOutcomeCallable DdoscooClient::modifyInstanceRemarkCallable(const ModifyInstanceRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceRemarkOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyNetworkRuleAttributeOutcome DdoscooClient::modifyNetworkRuleAttribute(const ModifyNetworkRuleAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkRuleAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkRuleAttributeOutcome(ModifyNetworkRuleAttributeResult(outcome.result()));
	else
		return ModifyNetworkRuleAttributeOutcome(outcome.error());
}

void DdoscooClient::modifyNetworkRuleAttributeAsync(const ModifyNetworkRuleAttributeRequest& request, const ModifyNetworkRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkRuleAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyNetworkRuleAttributeOutcomeCallable DdoscooClient::modifyNetworkRuleAttributeCallable(const ModifyNetworkRuleAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkRuleAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkRuleAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyOcspStatusOutcome DdoscooClient::modifyOcspStatus(const ModifyOcspStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOcspStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOcspStatusOutcome(ModifyOcspStatusResult(outcome.result()));
	else
		return ModifyOcspStatusOutcome(outcome.error());
}

void DdoscooClient::modifyOcspStatusAsync(const ModifyOcspStatusRequest& request, const ModifyOcspStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOcspStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyOcspStatusOutcomeCallable DdoscooClient::modifyOcspStatusCallable(const ModifyOcspStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOcspStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyOcspStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyPortOutcome DdoscooClient::modifyPort(const ModifyPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPortOutcome(ModifyPortResult(outcome.result()));
	else
		return ModifyPortOutcome(outcome.error());
}

void DdoscooClient::modifyPortAsync(const ModifyPortRequest& request, const ModifyPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyPortOutcomeCallable DdoscooClient::modifyPortCallable(const ModifyPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPortOutcome()>>(
			[this, request]()
			{
			return this->modifyPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyPortAutoCcStatusOutcome DdoscooClient::modifyPortAutoCcStatus(const ModifyPortAutoCcStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPortAutoCcStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPortAutoCcStatusOutcome(ModifyPortAutoCcStatusResult(outcome.result()));
	else
		return ModifyPortAutoCcStatusOutcome(outcome.error());
}

void DdoscooClient::modifyPortAutoCcStatusAsync(const ModifyPortAutoCcStatusRequest& request, const ModifyPortAutoCcStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPortAutoCcStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyPortAutoCcStatusOutcomeCallable DdoscooClient::modifyPortAutoCcStatusCallable(const ModifyPortAutoCcStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPortAutoCcStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyPortAutoCcStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyQpsModeOutcome DdoscooClient::modifyQpsMode(const ModifyQpsModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyQpsModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyQpsModeOutcome(ModifyQpsModeResult(outcome.result()));
	else
		return ModifyQpsModeOutcome(outcome.error());
}

void DdoscooClient::modifyQpsModeAsync(const ModifyQpsModeRequest& request, const ModifyQpsModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyQpsMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyQpsModeOutcomeCallable DdoscooClient::modifyQpsModeCallable(const ModifyQpsModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyQpsModeOutcome()>>(
			[this, request]()
			{
			return this->modifyQpsMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifySceneDefensePolicyOutcome DdoscooClient::modifySceneDefensePolicy(const ModifySceneDefensePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySceneDefensePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySceneDefensePolicyOutcome(ModifySceneDefensePolicyResult(outcome.result()));
	else
		return ModifySceneDefensePolicyOutcome(outcome.error());
}

void DdoscooClient::modifySceneDefensePolicyAsync(const ModifySceneDefensePolicyRequest& request, const ModifySceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySceneDefensePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifySceneDefensePolicyOutcomeCallable DdoscooClient::modifySceneDefensePolicyCallable(const ModifySceneDefensePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySceneDefensePolicyOutcome()>>(
			[this, request]()
			{
			return this->modifySceneDefensePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifySchedulerRuleOutcome DdoscooClient::modifySchedulerRule(const ModifySchedulerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySchedulerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySchedulerRuleOutcome(ModifySchedulerRuleResult(outcome.result()));
	else
		return ModifySchedulerRuleOutcome(outcome.error());
}

void DdoscooClient::modifySchedulerRuleAsync(const ModifySchedulerRuleRequest& request, const ModifySchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySchedulerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifySchedulerRuleOutcomeCallable DdoscooClient::modifySchedulerRuleCallable(const ModifySchedulerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySchedulerRuleOutcome()>>(
			[this, request]()
			{
			return this->modifySchedulerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyTlsConfigOutcome DdoscooClient::modifyTlsConfig(const ModifyTlsConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTlsConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTlsConfigOutcome(ModifyTlsConfigResult(outcome.result()));
	else
		return ModifyTlsConfigOutcome(outcome.error());
}

void DdoscooClient::modifyTlsConfigAsync(const ModifyTlsConfigRequest& request, const ModifyTlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTlsConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyTlsConfigOutcomeCallable DdoscooClient::modifyTlsConfigCallable(const ModifyTlsConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTlsConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTlsConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebAIProtectModeOutcome DdoscooClient::modifyWebAIProtectMode(const ModifyWebAIProtectModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebAIProtectModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebAIProtectModeOutcome(ModifyWebAIProtectModeResult(outcome.result()));
	else
		return ModifyWebAIProtectModeOutcome(outcome.error());
}

void DdoscooClient::modifyWebAIProtectModeAsync(const ModifyWebAIProtectModeRequest& request, const ModifyWebAIProtectModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebAIProtectMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebAIProtectModeOutcomeCallable DdoscooClient::modifyWebAIProtectModeCallable(const ModifyWebAIProtectModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebAIProtectModeOutcome()>>(
			[this, request]()
			{
			return this->modifyWebAIProtectMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebAIProtectSwitchOutcome DdoscooClient::modifyWebAIProtectSwitch(const ModifyWebAIProtectSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebAIProtectSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebAIProtectSwitchOutcome(ModifyWebAIProtectSwitchResult(outcome.result()));
	else
		return ModifyWebAIProtectSwitchOutcome(outcome.error());
}

void DdoscooClient::modifyWebAIProtectSwitchAsync(const ModifyWebAIProtectSwitchRequest& request, const ModifyWebAIProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebAIProtectSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebAIProtectSwitchOutcomeCallable DdoscooClient::modifyWebAIProtectSwitchCallable(const ModifyWebAIProtectSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebAIProtectSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyWebAIProtectSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebAccessModeOutcome DdoscooClient::modifyWebAccessMode(const ModifyWebAccessModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebAccessModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebAccessModeOutcome(ModifyWebAccessModeResult(outcome.result()));
	else
		return ModifyWebAccessModeOutcome(outcome.error());
}

void DdoscooClient::modifyWebAccessModeAsync(const ModifyWebAccessModeRequest& request, const ModifyWebAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebAccessMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebAccessModeOutcomeCallable DdoscooClient::modifyWebAccessModeCallable(const ModifyWebAccessModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebAccessModeOutcome()>>(
			[this, request]()
			{
			return this->modifyWebAccessMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebAreaBlockOutcome DdoscooClient::modifyWebAreaBlock(const ModifyWebAreaBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebAreaBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebAreaBlockOutcome(ModifyWebAreaBlockResult(outcome.result()));
	else
		return ModifyWebAreaBlockOutcome(outcome.error());
}

void DdoscooClient::modifyWebAreaBlockAsync(const ModifyWebAreaBlockRequest& request, const ModifyWebAreaBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebAreaBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebAreaBlockOutcomeCallable DdoscooClient::modifyWebAreaBlockCallable(const ModifyWebAreaBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebAreaBlockOutcome()>>(
			[this, request]()
			{
			return this->modifyWebAreaBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebAreaBlockSwitchOutcome DdoscooClient::modifyWebAreaBlockSwitch(const ModifyWebAreaBlockSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebAreaBlockSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebAreaBlockSwitchOutcome(ModifyWebAreaBlockSwitchResult(outcome.result()));
	else
		return ModifyWebAreaBlockSwitchOutcome(outcome.error());
}

void DdoscooClient::modifyWebAreaBlockSwitchAsync(const ModifyWebAreaBlockSwitchRequest& request, const ModifyWebAreaBlockSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebAreaBlockSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebAreaBlockSwitchOutcomeCallable DdoscooClient::modifyWebAreaBlockSwitchCallable(const ModifyWebAreaBlockSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebAreaBlockSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyWebAreaBlockSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebCCRuleOutcome DdoscooClient::modifyWebCCRule(const ModifyWebCCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebCCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebCCRuleOutcome(ModifyWebCCRuleResult(outcome.result()));
	else
		return ModifyWebCCRuleOutcome(outcome.error());
}

void DdoscooClient::modifyWebCCRuleAsync(const ModifyWebCCRuleRequest& request, const ModifyWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebCCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebCCRuleOutcomeCallable DdoscooClient::modifyWebCCRuleCallable(const ModifyWebCCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebCCRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyWebCCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebCacheCustomRuleOutcome DdoscooClient::modifyWebCacheCustomRule(const ModifyWebCacheCustomRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebCacheCustomRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebCacheCustomRuleOutcome(ModifyWebCacheCustomRuleResult(outcome.result()));
	else
		return ModifyWebCacheCustomRuleOutcome(outcome.error());
}

void DdoscooClient::modifyWebCacheCustomRuleAsync(const ModifyWebCacheCustomRuleRequest& request, const ModifyWebCacheCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebCacheCustomRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebCacheCustomRuleOutcomeCallable DdoscooClient::modifyWebCacheCustomRuleCallable(const ModifyWebCacheCustomRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebCacheCustomRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyWebCacheCustomRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebCacheModeOutcome DdoscooClient::modifyWebCacheMode(const ModifyWebCacheModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebCacheModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebCacheModeOutcome(ModifyWebCacheModeResult(outcome.result()));
	else
		return ModifyWebCacheModeOutcome(outcome.error());
}

void DdoscooClient::modifyWebCacheModeAsync(const ModifyWebCacheModeRequest& request, const ModifyWebCacheModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebCacheMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebCacheModeOutcomeCallable DdoscooClient::modifyWebCacheModeCallable(const ModifyWebCacheModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebCacheModeOutcome()>>(
			[this, request]()
			{
			return this->modifyWebCacheMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebCacheSwitchOutcome DdoscooClient::modifyWebCacheSwitch(const ModifyWebCacheSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebCacheSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebCacheSwitchOutcome(ModifyWebCacheSwitchResult(outcome.result()));
	else
		return ModifyWebCacheSwitchOutcome(outcome.error());
}

void DdoscooClient::modifyWebCacheSwitchAsync(const ModifyWebCacheSwitchRequest& request, const ModifyWebCacheSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebCacheSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebCacheSwitchOutcomeCallable DdoscooClient::modifyWebCacheSwitchCallable(const ModifyWebCacheSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebCacheSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyWebCacheSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebIpSetSwitchOutcome DdoscooClient::modifyWebIpSetSwitch(const ModifyWebIpSetSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebIpSetSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebIpSetSwitchOutcome(ModifyWebIpSetSwitchResult(outcome.result()));
	else
		return ModifyWebIpSetSwitchOutcome(outcome.error());
}

void DdoscooClient::modifyWebIpSetSwitchAsync(const ModifyWebIpSetSwitchRequest& request, const ModifyWebIpSetSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebIpSetSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebIpSetSwitchOutcomeCallable DdoscooClient::modifyWebIpSetSwitchCallable(const ModifyWebIpSetSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebIpSetSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyWebIpSetSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebPreciseAccessRuleOutcome DdoscooClient::modifyWebPreciseAccessRule(const ModifyWebPreciseAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebPreciseAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebPreciseAccessRuleOutcome(ModifyWebPreciseAccessRuleResult(outcome.result()));
	else
		return ModifyWebPreciseAccessRuleOutcome(outcome.error());
}

void DdoscooClient::modifyWebPreciseAccessRuleAsync(const ModifyWebPreciseAccessRuleRequest& request, const ModifyWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebPreciseAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebPreciseAccessRuleOutcomeCallable DdoscooClient::modifyWebPreciseAccessRuleCallable(const ModifyWebPreciseAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebPreciseAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyWebPreciseAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebPreciseAccessSwitchOutcome DdoscooClient::modifyWebPreciseAccessSwitch(const ModifyWebPreciseAccessSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebPreciseAccessSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebPreciseAccessSwitchOutcome(ModifyWebPreciseAccessSwitchResult(outcome.result()));
	else
		return ModifyWebPreciseAccessSwitchOutcome(outcome.error());
}

void DdoscooClient::modifyWebPreciseAccessSwitchAsync(const ModifyWebPreciseAccessSwitchRequest& request, const ModifyWebPreciseAccessSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebPreciseAccessSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebPreciseAccessSwitchOutcomeCallable DdoscooClient::modifyWebPreciseAccessSwitchCallable(const ModifyWebPreciseAccessSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebPreciseAccessSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyWebPreciseAccessSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyWebRuleOutcome DdoscooClient::modifyWebRule(const ModifyWebRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebRuleOutcome(ModifyWebRuleResult(outcome.result()));
	else
		return ModifyWebRuleOutcome(outcome.error());
}

void DdoscooClient::modifyWebRuleAsync(const ModifyWebRuleRequest& request, const ModifyWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyWebRuleOutcomeCallable DdoscooClient::modifyWebRuleCallable(const ModifyWebRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyWebRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ReleaseInstanceOutcome DdoscooClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void DdoscooClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ReleaseInstanceOutcomeCallable DdoscooClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::SwitchSchedulerRuleOutcome DdoscooClient::switchSchedulerRule(const SwitchSchedulerRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchSchedulerRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchSchedulerRuleOutcome(SwitchSchedulerRuleResult(outcome.result()));
	else
		return SwitchSchedulerRuleOutcome(outcome.error());
}

void DdoscooClient::switchSchedulerRuleAsync(const SwitchSchedulerRuleRequest& request, const SwitchSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchSchedulerRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::SwitchSchedulerRuleOutcomeCallable DdoscooClient::switchSchedulerRuleCallable(const SwitchSchedulerRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchSchedulerRuleOutcome()>>(
			[this, request]()
			{
			return this->switchSchedulerRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

