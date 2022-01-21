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

#include <alibabacloud/cms/CmsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

namespace
{
	const std::string SERVICE_NAME = "Cms";
}

CmsClient::CmsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cms");
}

CmsClient::CmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cms");
}

CmsClient::CmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cms");
}

CmsClient::~CmsClient()
{}

CmsClient::AddTagsOutcome CmsClient::addTags(const AddTagsRequest &request) const
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

void CmsClient::addTagsAsync(const AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::AddTagsOutcomeCallable CmsClient::addTagsCallable(const AddTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsOutcome()>>(
			[this, request]()
			{
			return this->addTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ApplyMetricRuleTemplateOutcome CmsClient::applyMetricRuleTemplate(const ApplyMetricRuleTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyMetricRuleTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyMetricRuleTemplateOutcome(ApplyMetricRuleTemplateResult(outcome.result()));
	else
		return ApplyMetricRuleTemplateOutcome(outcome.error());
}

void CmsClient::applyMetricRuleTemplateAsync(const ApplyMetricRuleTemplateRequest& request, const ApplyMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyMetricRuleTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ApplyMetricRuleTemplateOutcomeCallable CmsClient::applyMetricRuleTemplateCallable(const ApplyMetricRuleTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyMetricRuleTemplateOutcome()>>(
			[this, request]()
			{
			return this->applyMetricRuleTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateCmsCallNumOrderOutcome CmsClient::createCmsCallNumOrder(const CreateCmsCallNumOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCmsCallNumOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCmsCallNumOrderOutcome(CreateCmsCallNumOrderResult(outcome.result()));
	else
		return CreateCmsCallNumOrderOutcome(outcome.error());
}

void CmsClient::createCmsCallNumOrderAsync(const CreateCmsCallNumOrderRequest& request, const CreateCmsCallNumOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCmsCallNumOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateCmsCallNumOrderOutcomeCallable CmsClient::createCmsCallNumOrderCallable(const CreateCmsCallNumOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCmsCallNumOrderOutcome()>>(
			[this, request]()
			{
			return this->createCmsCallNumOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateCmsOrderOutcome CmsClient::createCmsOrder(const CreateCmsOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCmsOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCmsOrderOutcome(CreateCmsOrderResult(outcome.result()));
	else
		return CreateCmsOrderOutcome(outcome.error());
}

void CmsClient::createCmsOrderAsync(const CreateCmsOrderRequest& request, const CreateCmsOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCmsOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateCmsOrderOutcomeCallable CmsClient::createCmsOrderCallable(const CreateCmsOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCmsOrderOutcome()>>(
			[this, request]()
			{
			return this->createCmsOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateCmsSmspackageOrderOutcome CmsClient::createCmsSmspackageOrder(const CreateCmsSmspackageOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCmsSmspackageOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCmsSmspackageOrderOutcome(CreateCmsSmspackageOrderResult(outcome.result()));
	else
		return CreateCmsSmspackageOrderOutcome(outcome.error());
}

void CmsClient::createCmsSmspackageOrderAsync(const CreateCmsSmspackageOrderRequest& request, const CreateCmsSmspackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCmsSmspackageOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateCmsSmspackageOrderOutcomeCallable CmsClient::createCmsSmspackageOrderCallable(const CreateCmsSmspackageOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCmsSmspackageOrderOutcome()>>(
			[this, request]()
			{
			return this->createCmsSmspackageOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateDynamicTagGroupOutcome CmsClient::createDynamicTagGroup(const CreateDynamicTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDynamicTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDynamicTagGroupOutcome(CreateDynamicTagGroupResult(outcome.result()));
	else
		return CreateDynamicTagGroupOutcome(outcome.error());
}

void CmsClient::createDynamicTagGroupAsync(const CreateDynamicTagGroupRequest& request, const CreateDynamicTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDynamicTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateDynamicTagGroupOutcomeCallable CmsClient::createDynamicTagGroupCallable(const CreateDynamicTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDynamicTagGroupOutcome()>>(
			[this, request]()
			{
			return this->createDynamicTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateGroupMetricRulesOutcome CmsClient::createGroupMetricRules(const CreateGroupMetricRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupMetricRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupMetricRulesOutcome(CreateGroupMetricRulesResult(outcome.result()));
	else
		return CreateGroupMetricRulesOutcome(outcome.error());
}

void CmsClient::createGroupMetricRulesAsync(const CreateGroupMetricRulesRequest& request, const CreateGroupMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupMetricRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateGroupMetricRulesOutcomeCallable CmsClient::createGroupMetricRulesCallable(const CreateGroupMetricRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupMetricRulesOutcome()>>(
			[this, request]()
			{
			return this->createGroupMetricRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateGroupMonitoringAgentProcessOutcome CmsClient::createGroupMonitoringAgentProcess(const CreateGroupMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupMonitoringAgentProcessOutcome(CreateGroupMonitoringAgentProcessResult(outcome.result()));
	else
		return CreateGroupMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::createGroupMonitoringAgentProcessAsync(const CreateGroupMonitoringAgentProcessRequest& request, const CreateGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateGroupMonitoringAgentProcessOutcomeCallable CmsClient::createGroupMonitoringAgentProcessCallable(const CreateGroupMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->createGroupMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateHostAvailabilityOutcome CmsClient::createHostAvailability(const CreateHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHostAvailabilityOutcome(CreateHostAvailabilityResult(outcome.result()));
	else
		return CreateHostAvailabilityOutcome(outcome.error());
}

void CmsClient::createHostAvailabilityAsync(const CreateHostAvailabilityRequest& request, const CreateHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateHostAvailabilityOutcomeCallable CmsClient::createHostAvailabilityCallable(const CreateHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->createHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateInstantSiteMonitorOutcome CmsClient::createInstantSiteMonitor(const CreateInstantSiteMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstantSiteMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstantSiteMonitorOutcome(CreateInstantSiteMonitorResult(outcome.result()));
	else
		return CreateInstantSiteMonitorOutcome(outcome.error());
}

void CmsClient::createInstantSiteMonitorAsync(const CreateInstantSiteMonitorRequest& request, const CreateInstantSiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstantSiteMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateInstantSiteMonitorOutcomeCallable CmsClient::createInstantSiteMonitorCallable(const CreateInstantSiteMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstantSiteMonitorOutcome()>>(
			[this, request]()
			{
			return this->createInstantSiteMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMetricRuleResourcesOutcome CmsClient::createMetricRuleResources(const CreateMetricRuleResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetricRuleResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetricRuleResourcesOutcome(CreateMetricRuleResourcesResult(outcome.result()));
	else
		return CreateMetricRuleResourcesOutcome(outcome.error());
}

void CmsClient::createMetricRuleResourcesAsync(const CreateMetricRuleResourcesRequest& request, const CreateMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetricRuleResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMetricRuleResourcesOutcomeCallable CmsClient::createMetricRuleResourcesCallable(const CreateMetricRuleResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetricRuleResourcesOutcome()>>(
			[this, request]()
			{
			return this->createMetricRuleResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMetricRuleTemplateOutcome CmsClient::createMetricRuleTemplate(const CreateMetricRuleTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetricRuleTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetricRuleTemplateOutcome(CreateMetricRuleTemplateResult(outcome.result()));
	else
		return CreateMetricRuleTemplateOutcome(outcome.error());
}

void CmsClient::createMetricRuleTemplateAsync(const CreateMetricRuleTemplateRequest& request, const CreateMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetricRuleTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMetricRuleTemplateOutcomeCallable CmsClient::createMetricRuleTemplateCallable(const CreateMetricRuleTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetricRuleTemplateOutcome()>>(
			[this, request]()
			{
			return this->createMetricRuleTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitorAgentProcessOutcome CmsClient::createMonitorAgentProcess(const CreateMonitorAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorAgentProcessOutcome(CreateMonitorAgentProcessResult(outcome.result()));
	else
		return CreateMonitorAgentProcessOutcome(outcome.error());
}

void CmsClient::createMonitorAgentProcessAsync(const CreateMonitorAgentProcessRequest& request, const CreateMonitorAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitorAgentProcessOutcomeCallable CmsClient::createMonitorAgentProcessCallable(const CreateMonitorAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->createMonitorAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitorGroupOutcome CmsClient::createMonitorGroup(const CreateMonitorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorGroupOutcome(CreateMonitorGroupResult(outcome.result()));
	else
		return CreateMonitorGroupOutcome(outcome.error());
}

void CmsClient::createMonitorGroupAsync(const CreateMonitorGroupRequest& request, const CreateMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitorGroupOutcomeCallable CmsClient::createMonitorGroupCallable(const CreateMonitorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorGroupOutcome()>>(
			[this, request]()
			{
			return this->createMonitorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitorGroupByResourceGroupIdOutcome CmsClient::createMonitorGroupByResourceGroupId(const CreateMonitorGroupByResourceGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorGroupByResourceGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorGroupByResourceGroupIdOutcome(CreateMonitorGroupByResourceGroupIdResult(outcome.result()));
	else
		return CreateMonitorGroupByResourceGroupIdOutcome(outcome.error());
}

void CmsClient::createMonitorGroupByResourceGroupIdAsync(const CreateMonitorGroupByResourceGroupIdRequest& request, const CreateMonitorGroupByResourceGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorGroupByResourceGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitorGroupByResourceGroupIdOutcomeCallable CmsClient::createMonitorGroupByResourceGroupIdCallable(const CreateMonitorGroupByResourceGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorGroupByResourceGroupIdOutcome()>>(
			[this, request]()
			{
			return this->createMonitorGroupByResourceGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitorGroupInstancesOutcome CmsClient::createMonitorGroupInstances(const CreateMonitorGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorGroupInstancesOutcome(CreateMonitorGroupInstancesResult(outcome.result()));
	else
		return CreateMonitorGroupInstancesOutcome(outcome.error());
}

void CmsClient::createMonitorGroupInstancesAsync(const CreateMonitorGroupInstancesRequest& request, const CreateMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitorGroupInstancesOutcomeCallable CmsClient::createMonitorGroupInstancesCallable(const CreateMonitorGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->createMonitorGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitorGroupNotifyPolicyOutcome CmsClient::createMonitorGroupNotifyPolicy(const CreateMonitorGroupNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorGroupNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorGroupNotifyPolicyOutcome(CreateMonitorGroupNotifyPolicyResult(outcome.result()));
	else
		return CreateMonitorGroupNotifyPolicyOutcome(outcome.error());
}

void CmsClient::createMonitorGroupNotifyPolicyAsync(const CreateMonitorGroupNotifyPolicyRequest& request, const CreateMonitorGroupNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorGroupNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitorGroupNotifyPolicyOutcomeCallable CmsClient::createMonitorGroupNotifyPolicyCallable(const CreateMonitorGroupNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorGroupNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->createMonitorGroupNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitoringAgentProcessOutcome CmsClient::createMonitoringAgentProcess(const CreateMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitoringAgentProcessOutcome(CreateMonitoringAgentProcessResult(outcome.result()));
	else
		return CreateMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::createMonitoringAgentProcessAsync(const CreateMonitoringAgentProcessRequest& request, const CreateMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitoringAgentProcessOutcomeCallable CmsClient::createMonitoringAgentProcessCallable(const CreateMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->createMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateSiteMonitorOutcome CmsClient::createSiteMonitor(const CreateSiteMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSiteMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSiteMonitorOutcome(CreateSiteMonitorResult(outcome.result()));
	else
		return CreateSiteMonitorOutcome(outcome.error());
}

void CmsClient::createSiteMonitorAsync(const CreateSiteMonitorRequest& request, const CreateSiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSiteMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateSiteMonitorOutcomeCallable CmsClient::createSiteMonitorCallable(const CreateSiteMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSiteMonitorOutcome()>>(
			[this, request]()
			{
			return this->createSiteMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteContactOutcome CmsClient::deleteContact(const DeleteContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactOutcome(DeleteContactResult(outcome.result()));
	else
		return DeleteContactOutcome(outcome.error());
}

void CmsClient::deleteContactAsync(const DeleteContactRequest& request, const DeleteContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteContactOutcomeCallable CmsClient::deleteContactCallable(const DeleteContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactOutcome()>>(
			[this, request]()
			{
			return this->deleteContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteContactGroupOutcome CmsClient::deleteContactGroup(const DeleteContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactGroupOutcome(DeleteContactGroupResult(outcome.result()));
	else
		return DeleteContactGroupOutcome(outcome.error());
}

void CmsClient::deleteContactGroupAsync(const DeleteContactGroupRequest& request, const DeleteContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteContactGroupOutcomeCallable CmsClient::deleteContactGroupCallable(const DeleteContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteCustomMetricOutcome CmsClient::deleteCustomMetric(const DeleteCustomMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomMetricOutcome(DeleteCustomMetricResult(outcome.result()));
	else
		return DeleteCustomMetricOutcome(outcome.error());
}

void CmsClient::deleteCustomMetricAsync(const DeleteCustomMetricRequest& request, const DeleteCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteCustomMetricOutcomeCallable CmsClient::deleteCustomMetricCallable(const DeleteCustomMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomMetricOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteDynamicTagGroupOutcome CmsClient::deleteDynamicTagGroup(const DeleteDynamicTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDynamicTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDynamicTagGroupOutcome(DeleteDynamicTagGroupResult(outcome.result()));
	else
		return DeleteDynamicTagGroupOutcome(outcome.error());
}

void CmsClient::deleteDynamicTagGroupAsync(const DeleteDynamicTagGroupRequest& request, const DeleteDynamicTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDynamicTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteDynamicTagGroupOutcomeCallable CmsClient::deleteDynamicTagGroupCallable(const DeleteDynamicTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDynamicTagGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDynamicTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteEventRuleTargetsOutcome CmsClient::deleteEventRuleTargets(const DeleteEventRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventRuleTargetsOutcome(DeleteEventRuleTargetsResult(outcome.result()));
	else
		return DeleteEventRuleTargetsOutcome(outcome.error());
}

void CmsClient::deleteEventRuleTargetsAsync(const DeleteEventRuleTargetsRequest& request, const DeleteEventRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteEventRuleTargetsOutcomeCallable CmsClient::deleteEventRuleTargetsCallable(const DeleteEventRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->deleteEventRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteEventRulesOutcome CmsClient::deleteEventRules(const DeleteEventRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventRulesOutcome(DeleteEventRulesResult(outcome.result()));
	else
		return DeleteEventRulesOutcome(outcome.error());
}

void CmsClient::deleteEventRulesAsync(const DeleteEventRulesRequest& request, const DeleteEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteEventRulesOutcomeCallable CmsClient::deleteEventRulesCallable(const DeleteEventRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteEventRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteExporterOutputOutcome CmsClient::deleteExporterOutput(const DeleteExporterOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExporterOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExporterOutputOutcome(DeleteExporterOutputResult(outcome.result()));
	else
		return DeleteExporterOutputOutcome(outcome.error());
}

void CmsClient::deleteExporterOutputAsync(const DeleteExporterOutputRequest& request, const DeleteExporterOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExporterOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteExporterOutputOutcomeCallable CmsClient::deleteExporterOutputCallable(const DeleteExporterOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExporterOutputOutcome()>>(
			[this, request]()
			{
			return this->deleteExporterOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteExporterRuleOutcome CmsClient::deleteExporterRule(const DeleteExporterRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExporterRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExporterRuleOutcome(DeleteExporterRuleResult(outcome.result()));
	else
		return DeleteExporterRuleOutcome(outcome.error());
}

void CmsClient::deleteExporterRuleAsync(const DeleteExporterRuleRequest& request, const DeleteExporterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExporterRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteExporterRuleOutcomeCallable CmsClient::deleteExporterRuleCallable(const DeleteExporterRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExporterRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteExporterRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteGroupMonitoringAgentProcessOutcome CmsClient::deleteGroupMonitoringAgentProcess(const DeleteGroupMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupMonitoringAgentProcessOutcome(DeleteGroupMonitoringAgentProcessResult(outcome.result()));
	else
		return DeleteGroupMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::deleteGroupMonitoringAgentProcessAsync(const DeleteGroupMonitoringAgentProcessRequest& request, const DeleteGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteGroupMonitoringAgentProcessOutcomeCallable CmsClient::deleteGroupMonitoringAgentProcessCallable(const DeleteGroupMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteHostAvailabilityOutcome CmsClient::deleteHostAvailability(const DeleteHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHostAvailabilityOutcome(DeleteHostAvailabilityResult(outcome.result()));
	else
		return DeleteHostAvailabilityOutcome(outcome.error());
}

void CmsClient::deleteHostAvailabilityAsync(const DeleteHostAvailabilityRequest& request, const DeleteHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteHostAvailabilityOutcomeCallable CmsClient::deleteHostAvailabilityCallable(const DeleteHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->deleteHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteLogMonitorOutcome CmsClient::deleteLogMonitor(const DeleteLogMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogMonitorOutcome(DeleteLogMonitorResult(outcome.result()));
	else
		return DeleteLogMonitorOutcome(outcome.error());
}

void CmsClient::deleteLogMonitorAsync(const DeleteLogMonitorRequest& request, const DeleteLogMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteLogMonitorOutcomeCallable CmsClient::deleteLogMonitorCallable(const DeleteLogMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogMonitorOutcome()>>(
			[this, request]()
			{
			return this->deleteLogMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMetricRuleResourcesOutcome CmsClient::deleteMetricRuleResources(const DeleteMetricRuleResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetricRuleResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetricRuleResourcesOutcome(DeleteMetricRuleResourcesResult(outcome.result()));
	else
		return DeleteMetricRuleResourcesOutcome(outcome.error());
}

void CmsClient::deleteMetricRuleResourcesAsync(const DeleteMetricRuleResourcesRequest& request, const DeleteMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetricRuleResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMetricRuleResourcesOutcomeCallable CmsClient::deleteMetricRuleResourcesCallable(const DeleteMetricRuleResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetricRuleResourcesOutcome()>>(
			[this, request]()
			{
			return this->deleteMetricRuleResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMetricRuleTargetsOutcome CmsClient::deleteMetricRuleTargets(const DeleteMetricRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetricRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetricRuleTargetsOutcome(DeleteMetricRuleTargetsResult(outcome.result()));
	else
		return DeleteMetricRuleTargetsOutcome(outcome.error());
}

void CmsClient::deleteMetricRuleTargetsAsync(const DeleteMetricRuleTargetsRequest& request, const DeleteMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetricRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMetricRuleTargetsOutcomeCallable CmsClient::deleteMetricRuleTargetsCallable(const DeleteMetricRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetricRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->deleteMetricRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMetricRuleTemplateOutcome CmsClient::deleteMetricRuleTemplate(const DeleteMetricRuleTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetricRuleTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetricRuleTemplateOutcome(DeleteMetricRuleTemplateResult(outcome.result()));
	else
		return DeleteMetricRuleTemplateOutcome(outcome.error());
}

void CmsClient::deleteMetricRuleTemplateAsync(const DeleteMetricRuleTemplateRequest& request, const DeleteMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetricRuleTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMetricRuleTemplateOutcomeCallable CmsClient::deleteMetricRuleTemplateCallable(const DeleteMetricRuleTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetricRuleTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteMetricRuleTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMetricRulesOutcome CmsClient::deleteMetricRules(const DeleteMetricRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetricRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetricRulesOutcome(DeleteMetricRulesResult(outcome.result()));
	else
		return DeleteMetricRulesOutcome(outcome.error());
}

void CmsClient::deleteMetricRulesAsync(const DeleteMetricRulesRequest& request, const DeleteMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetricRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMetricRulesOutcomeCallable CmsClient::deleteMetricRulesCallable(const DeleteMetricRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetricRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteMetricRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitorGroupOutcome CmsClient::deleteMonitorGroup(const DeleteMonitorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitorGroupOutcome(DeleteMonitorGroupResult(outcome.result()));
	else
		return DeleteMonitorGroupOutcome(outcome.error());
}

void CmsClient::deleteMonitorGroupAsync(const DeleteMonitorGroupRequest& request, const DeleteMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitorGroupOutcomeCallable CmsClient::deleteMonitorGroupCallable(const DeleteMonitorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitorGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitorGroupDynamicRuleOutcome CmsClient::deleteMonitorGroupDynamicRule(const DeleteMonitorGroupDynamicRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitorGroupDynamicRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitorGroupDynamicRuleOutcome(DeleteMonitorGroupDynamicRuleResult(outcome.result()));
	else
		return DeleteMonitorGroupDynamicRuleOutcome(outcome.error());
}

void CmsClient::deleteMonitorGroupDynamicRuleAsync(const DeleteMonitorGroupDynamicRuleRequest& request, const DeleteMonitorGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitorGroupDynamicRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitorGroupDynamicRuleOutcomeCallable CmsClient::deleteMonitorGroupDynamicRuleCallable(const DeleteMonitorGroupDynamicRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitorGroupDynamicRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitorGroupDynamicRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitorGroupInstancesOutcome CmsClient::deleteMonitorGroupInstances(const DeleteMonitorGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitorGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitorGroupInstancesOutcome(DeleteMonitorGroupInstancesResult(outcome.result()));
	else
		return DeleteMonitorGroupInstancesOutcome(outcome.error());
}

void CmsClient::deleteMonitorGroupInstancesAsync(const DeleteMonitorGroupInstancesRequest& request, const DeleteMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitorGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitorGroupInstancesOutcomeCallable CmsClient::deleteMonitorGroupInstancesCallable(const DeleteMonitorGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitorGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitorGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitorGroupNotifyPolicyOutcome CmsClient::deleteMonitorGroupNotifyPolicy(const DeleteMonitorGroupNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitorGroupNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitorGroupNotifyPolicyOutcome(DeleteMonitorGroupNotifyPolicyResult(outcome.result()));
	else
		return DeleteMonitorGroupNotifyPolicyOutcome(outcome.error());
}

void CmsClient::deleteMonitorGroupNotifyPolicyAsync(const DeleteMonitorGroupNotifyPolicyRequest& request, const DeleteMonitorGroupNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitorGroupNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitorGroupNotifyPolicyOutcomeCallable CmsClient::deleteMonitorGroupNotifyPolicyCallable(const DeleteMonitorGroupNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitorGroupNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitorGroupNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitoringAgentProcessOutcome CmsClient::deleteMonitoringAgentProcess(const DeleteMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitoringAgentProcessOutcome(DeleteMonitoringAgentProcessResult(outcome.result()));
	else
		return DeleteMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::deleteMonitoringAgentProcessAsync(const DeleteMonitoringAgentProcessRequest& request, const DeleteMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitoringAgentProcessOutcomeCallable CmsClient::deleteMonitoringAgentProcessCallable(const DeleteMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteSiteMonitorsOutcome CmsClient::deleteSiteMonitors(const DeleteSiteMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSiteMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSiteMonitorsOutcome(DeleteSiteMonitorsResult(outcome.result()));
	else
		return DeleteSiteMonitorsOutcome(outcome.error());
}

void CmsClient::deleteSiteMonitorsAsync(const DeleteSiteMonitorsRequest& request, const DeleteSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSiteMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteSiteMonitorsOutcomeCallable CmsClient::deleteSiteMonitorsCallable(const DeleteSiteMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSiteMonitorsOutcome()>>(
			[this, request]()
			{
			return this->deleteSiteMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeActiveMetricRuleListOutcome CmsClient::describeActiveMetricRuleList(const DescribeActiveMetricRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveMetricRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveMetricRuleListOutcome(DescribeActiveMetricRuleListResult(outcome.result()));
	else
		return DescribeActiveMetricRuleListOutcome(outcome.error());
}

void CmsClient::describeActiveMetricRuleListAsync(const DescribeActiveMetricRuleListRequest& request, const DescribeActiveMetricRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveMetricRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeActiveMetricRuleListOutcomeCallable CmsClient::describeActiveMetricRuleListCallable(const DescribeActiveMetricRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveMetricRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeActiveMetricRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlertHistoryListOutcome CmsClient::describeAlertHistoryList(const DescribeAlertHistoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertHistoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertHistoryListOutcome(DescribeAlertHistoryListResult(outcome.result()));
	else
		return DescribeAlertHistoryListOutcome(outcome.error());
}

void CmsClient::describeAlertHistoryListAsync(const DescribeAlertHistoryListRequest& request, const DescribeAlertHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertHistoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlertHistoryListOutcomeCallable CmsClient::describeAlertHistoryListCallable(const DescribeAlertHistoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertHistoryListOutcome()>>(
			[this, request]()
			{
			return this->describeAlertHistoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlertLogCountOutcome CmsClient::describeAlertLogCount(const DescribeAlertLogCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertLogCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertLogCountOutcome(DescribeAlertLogCountResult(outcome.result()));
	else
		return DescribeAlertLogCountOutcome(outcome.error());
}

void CmsClient::describeAlertLogCountAsync(const DescribeAlertLogCountRequest& request, const DescribeAlertLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertLogCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlertLogCountOutcomeCallable CmsClient::describeAlertLogCountCallable(const DescribeAlertLogCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertLogCountOutcome()>>(
			[this, request]()
			{
			return this->describeAlertLogCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlertLogHistogramOutcome CmsClient::describeAlertLogHistogram(const DescribeAlertLogHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertLogHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertLogHistogramOutcome(DescribeAlertLogHistogramResult(outcome.result()));
	else
		return DescribeAlertLogHistogramOutcome(outcome.error());
}

void CmsClient::describeAlertLogHistogramAsync(const DescribeAlertLogHistogramRequest& request, const DescribeAlertLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertLogHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlertLogHistogramOutcomeCallable CmsClient::describeAlertLogHistogramCallable(const DescribeAlertLogHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertLogHistogramOutcome()>>(
			[this, request]()
			{
			return this->describeAlertLogHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlertLogListOutcome CmsClient::describeAlertLogList(const DescribeAlertLogListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertLogListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertLogListOutcome(DescribeAlertLogListResult(outcome.result()));
	else
		return DescribeAlertLogListOutcome(outcome.error());
}

void CmsClient::describeAlertLogListAsync(const DescribeAlertLogListRequest& request, const DescribeAlertLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertLogList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlertLogListOutcomeCallable CmsClient::describeAlertLogListCallable(const DescribeAlertLogListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertLogListOutcome()>>(
			[this, request]()
			{
			return this->describeAlertLogList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlertingMetricRuleResourcesOutcome CmsClient::describeAlertingMetricRuleResources(const DescribeAlertingMetricRuleResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertingMetricRuleResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertingMetricRuleResourcesOutcome(DescribeAlertingMetricRuleResourcesResult(outcome.result()));
	else
		return DescribeAlertingMetricRuleResourcesOutcome(outcome.error());
}

void CmsClient::describeAlertingMetricRuleResourcesAsync(const DescribeAlertingMetricRuleResourcesRequest& request, const DescribeAlertingMetricRuleResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertingMetricRuleResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlertingMetricRuleResourcesOutcomeCallable CmsClient::describeAlertingMetricRuleResourcesCallable(const DescribeAlertingMetricRuleResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertingMetricRuleResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeAlertingMetricRuleResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeContactGroupListOutcome CmsClient::describeContactGroupList(const DescribeContactGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactGroupListOutcome(DescribeContactGroupListResult(outcome.result()));
	else
		return DescribeContactGroupListOutcome(outcome.error());
}

void CmsClient::describeContactGroupListAsync(const DescribeContactGroupListRequest& request, const DescribeContactGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContactGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeContactGroupListOutcomeCallable CmsClient::describeContactGroupListCallable(const DescribeContactGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactGroupListOutcome()>>(
			[this, request]()
			{
			return this->describeContactGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeContactListOutcome CmsClient::describeContactList(const DescribeContactListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactListOutcome(DescribeContactListResult(outcome.result()));
	else
		return DescribeContactListOutcome(outcome.error());
}

void CmsClient::describeContactListAsync(const DescribeContactListRequest& request, const DescribeContactListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContactList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeContactListOutcomeCallable CmsClient::describeContactListCallable(const DescribeContactListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactListOutcome()>>(
			[this, request]()
			{
			return this->describeContactList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeContactListByContactGroupOutcome CmsClient::describeContactListByContactGroup(const DescribeContactListByContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactListByContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactListByContactGroupOutcome(DescribeContactListByContactGroupResult(outcome.result()));
	else
		return DescribeContactListByContactGroupOutcome(outcome.error());
}

void CmsClient::describeContactListByContactGroupAsync(const DescribeContactListByContactGroupRequest& request, const DescribeContactListByContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContactListByContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeContactListByContactGroupOutcomeCallable CmsClient::describeContactListByContactGroupCallable(const DescribeContactListByContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactListByContactGroupOutcome()>>(
			[this, request]()
			{
			return this->describeContactListByContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeCustomEventAttributeOutcome CmsClient::describeCustomEventAttribute(const DescribeCustomEventAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomEventAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomEventAttributeOutcome(DescribeCustomEventAttributeResult(outcome.result()));
	else
		return DescribeCustomEventAttributeOutcome(outcome.error());
}

void CmsClient::describeCustomEventAttributeAsync(const DescribeCustomEventAttributeRequest& request, const DescribeCustomEventAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomEventAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeCustomEventAttributeOutcomeCallable CmsClient::describeCustomEventAttributeCallable(const DescribeCustomEventAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomEventAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeCustomEventAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeCustomEventCountOutcome CmsClient::describeCustomEventCount(const DescribeCustomEventCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomEventCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomEventCountOutcome(DescribeCustomEventCountResult(outcome.result()));
	else
		return DescribeCustomEventCountOutcome(outcome.error());
}

void CmsClient::describeCustomEventCountAsync(const DescribeCustomEventCountRequest& request, const DescribeCustomEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomEventCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeCustomEventCountOutcomeCallable CmsClient::describeCustomEventCountCallable(const DescribeCustomEventCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomEventCountOutcome()>>(
			[this, request]()
			{
			return this->describeCustomEventCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeCustomEventHistogramOutcome CmsClient::describeCustomEventHistogram(const DescribeCustomEventHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomEventHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomEventHistogramOutcome(DescribeCustomEventHistogramResult(outcome.result()));
	else
		return DescribeCustomEventHistogramOutcome(outcome.error());
}

void CmsClient::describeCustomEventHistogramAsync(const DescribeCustomEventHistogramRequest& request, const DescribeCustomEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomEventHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeCustomEventHistogramOutcomeCallable CmsClient::describeCustomEventHistogramCallable(const DescribeCustomEventHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomEventHistogramOutcome()>>(
			[this, request]()
			{
			return this->describeCustomEventHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeCustomMetricListOutcome CmsClient::describeCustomMetricList(const DescribeCustomMetricListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomMetricListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomMetricListOutcome(DescribeCustomMetricListResult(outcome.result()));
	else
		return DescribeCustomMetricListOutcome(outcome.error());
}

void CmsClient::describeCustomMetricListAsync(const DescribeCustomMetricListRequest& request, const DescribeCustomMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomMetricList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeCustomMetricListOutcomeCallable CmsClient::describeCustomMetricListCallable(const DescribeCustomMetricListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomMetricListOutcome()>>(
			[this, request]()
			{
			return this->describeCustomMetricList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeDynamicTagRuleListOutcome CmsClient::describeDynamicTagRuleList(const DescribeDynamicTagRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDynamicTagRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDynamicTagRuleListOutcome(DescribeDynamicTagRuleListResult(outcome.result()));
	else
		return DescribeDynamicTagRuleListOutcome(outcome.error());
}

void CmsClient::describeDynamicTagRuleListAsync(const DescribeDynamicTagRuleListRequest& request, const DescribeDynamicTagRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDynamicTagRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeDynamicTagRuleListOutcomeCallable CmsClient::describeDynamicTagRuleListCallable(const DescribeDynamicTagRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDynamicTagRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeDynamicTagRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeEventRuleAttributeOutcome CmsClient::describeEventRuleAttribute(const DescribeEventRuleAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventRuleAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventRuleAttributeOutcome(DescribeEventRuleAttributeResult(outcome.result()));
	else
		return DescribeEventRuleAttributeOutcome(outcome.error());
}

void CmsClient::describeEventRuleAttributeAsync(const DescribeEventRuleAttributeRequest& request, const DescribeEventRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventRuleAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeEventRuleAttributeOutcomeCallable CmsClient::describeEventRuleAttributeCallable(const DescribeEventRuleAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventRuleAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeEventRuleAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeEventRuleListOutcome CmsClient::describeEventRuleList(const DescribeEventRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventRuleListOutcome(DescribeEventRuleListResult(outcome.result()));
	else
		return DescribeEventRuleListOutcome(outcome.error());
}

void CmsClient::describeEventRuleListAsync(const DescribeEventRuleListRequest& request, const DescribeEventRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeEventRuleListOutcomeCallable CmsClient::describeEventRuleListCallable(const DescribeEventRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeEventRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeEventRuleTargetListOutcome CmsClient::describeEventRuleTargetList(const DescribeEventRuleTargetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventRuleTargetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventRuleTargetListOutcome(DescribeEventRuleTargetListResult(outcome.result()));
	else
		return DescribeEventRuleTargetListOutcome(outcome.error());
}

void CmsClient::describeEventRuleTargetListAsync(const DescribeEventRuleTargetListRequest& request, const DescribeEventRuleTargetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventRuleTargetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeEventRuleTargetListOutcomeCallable CmsClient::describeEventRuleTargetListCallable(const DescribeEventRuleTargetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventRuleTargetListOutcome()>>(
			[this, request]()
			{
			return this->describeEventRuleTargetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeExporterOutputListOutcome CmsClient::describeExporterOutputList(const DescribeExporterOutputListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExporterOutputListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExporterOutputListOutcome(DescribeExporterOutputListResult(outcome.result()));
	else
		return DescribeExporterOutputListOutcome(outcome.error());
}

void CmsClient::describeExporterOutputListAsync(const DescribeExporterOutputListRequest& request, const DescribeExporterOutputListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExporterOutputList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeExporterOutputListOutcomeCallable CmsClient::describeExporterOutputListCallable(const DescribeExporterOutputListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExporterOutputListOutcome()>>(
			[this, request]()
			{
			return this->describeExporterOutputList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeExporterRuleListOutcome CmsClient::describeExporterRuleList(const DescribeExporterRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExporterRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExporterRuleListOutcome(DescribeExporterRuleListResult(outcome.result()));
	else
		return DescribeExporterRuleListOutcome(outcome.error());
}

void CmsClient::describeExporterRuleListAsync(const DescribeExporterRuleListRequest& request, const DescribeExporterRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExporterRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeExporterRuleListOutcomeCallable CmsClient::describeExporterRuleListCallable(const DescribeExporterRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExporterRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeExporterRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeGroupMonitoringAgentProcessOutcome CmsClient::describeGroupMonitoringAgentProcess(const DescribeGroupMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupMonitoringAgentProcessOutcome(DescribeGroupMonitoringAgentProcessResult(outcome.result()));
	else
		return DescribeGroupMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::describeGroupMonitoringAgentProcessAsync(const DescribeGroupMonitoringAgentProcessRequest& request, const DescribeGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeGroupMonitoringAgentProcessOutcomeCallable CmsClient::describeGroupMonitoringAgentProcessCallable(const DescribeGroupMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->describeGroupMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeHostAvailabilityListOutcome CmsClient::describeHostAvailabilityList(const DescribeHostAvailabilityListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostAvailabilityListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostAvailabilityListOutcome(DescribeHostAvailabilityListResult(outcome.result()));
	else
		return DescribeHostAvailabilityListOutcome(outcome.error());
}

void CmsClient::describeHostAvailabilityListAsync(const DescribeHostAvailabilityListRequest& request, const DescribeHostAvailabilityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostAvailabilityList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeHostAvailabilityListOutcomeCallable CmsClient::describeHostAvailabilityListCallable(const DescribeHostAvailabilityListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostAvailabilityListOutcome()>>(
			[this, request]()
			{
			return this->describeHostAvailabilityList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeLogMonitorAttributeOutcome CmsClient::describeLogMonitorAttribute(const DescribeLogMonitorAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogMonitorAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogMonitorAttributeOutcome(DescribeLogMonitorAttributeResult(outcome.result()));
	else
		return DescribeLogMonitorAttributeOutcome(outcome.error());
}

void CmsClient::describeLogMonitorAttributeAsync(const DescribeLogMonitorAttributeRequest& request, const DescribeLogMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogMonitorAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeLogMonitorAttributeOutcomeCallable CmsClient::describeLogMonitorAttributeCallable(const DescribeLogMonitorAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogMonitorAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLogMonitorAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeLogMonitorListOutcome CmsClient::describeLogMonitorList(const DescribeLogMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogMonitorListOutcome(DescribeLogMonitorListResult(outcome.result()));
	else
		return DescribeLogMonitorListOutcome(outcome.error());
}

void CmsClient::describeLogMonitorListAsync(const DescribeLogMonitorListRequest& request, const DescribeLogMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeLogMonitorListOutcomeCallable CmsClient::describeLogMonitorListCallable(const DescribeLogMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogMonitorListOutcome()>>(
			[this, request]()
			{
			return this->describeLogMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricDataOutcome CmsClient::describeMetricData(const DescribeMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricDataOutcome(DescribeMetricDataResult(outcome.result()));
	else
		return DescribeMetricDataOutcome(outcome.error());
}

void CmsClient::describeMetricDataAsync(const DescribeMetricDataRequest& request, const DescribeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricDataOutcomeCallable CmsClient::describeMetricDataCallable(const DescribeMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricLastOutcome CmsClient::describeMetricLast(const DescribeMetricLastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricLastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricLastOutcome(DescribeMetricLastResult(outcome.result()));
	else
		return DescribeMetricLastOutcome(outcome.error());
}

void CmsClient::describeMetricLastAsync(const DescribeMetricLastRequest& request, const DescribeMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricLast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricLastOutcomeCallable CmsClient::describeMetricLastCallable(const DescribeMetricLastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricLastOutcome()>>(
			[this, request]()
			{
			return this->describeMetricLast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricListOutcome CmsClient::describeMetricList(const DescribeMetricListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricListOutcome(DescribeMetricListResult(outcome.result()));
	else
		return DescribeMetricListOutcome(outcome.error());
}

void CmsClient::describeMetricListAsync(const DescribeMetricListRequest& request, const DescribeMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricListOutcomeCallable CmsClient::describeMetricListCallable(const DescribeMetricListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricListOutcome()>>(
			[this, request]()
			{
			return this->describeMetricList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricMetaListOutcome CmsClient::describeMetricMetaList(const DescribeMetricMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricMetaListOutcome(DescribeMetricMetaListResult(outcome.result()));
	else
		return DescribeMetricMetaListOutcome(outcome.error());
}

void CmsClient::describeMetricMetaListAsync(const DescribeMetricMetaListRequest& request, const DescribeMetricMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricMetaListOutcomeCallable CmsClient::describeMetricMetaListCallable(const DescribeMetricMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeMetricMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricRuleCountOutcome CmsClient::describeMetricRuleCount(const DescribeMetricRuleCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricRuleCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricRuleCountOutcome(DescribeMetricRuleCountResult(outcome.result()));
	else
		return DescribeMetricRuleCountOutcome(outcome.error());
}

void CmsClient::describeMetricRuleCountAsync(const DescribeMetricRuleCountRequest& request, const DescribeMetricRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricRuleCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricRuleCountOutcomeCallable CmsClient::describeMetricRuleCountCallable(const DescribeMetricRuleCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricRuleCountOutcome()>>(
			[this, request]()
			{
			return this->describeMetricRuleCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricRuleListOutcome CmsClient::describeMetricRuleList(const DescribeMetricRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricRuleListOutcome(DescribeMetricRuleListResult(outcome.result()));
	else
		return DescribeMetricRuleListOutcome(outcome.error());
}

void CmsClient::describeMetricRuleListAsync(const DescribeMetricRuleListRequest& request, const DescribeMetricRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricRuleListOutcomeCallable CmsClient::describeMetricRuleListCallable(const DescribeMetricRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeMetricRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricRuleTargetsOutcome CmsClient::describeMetricRuleTargets(const DescribeMetricRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricRuleTargetsOutcome(DescribeMetricRuleTargetsResult(outcome.result()));
	else
		return DescribeMetricRuleTargetsOutcome(outcome.error());
}

void CmsClient::describeMetricRuleTargetsAsync(const DescribeMetricRuleTargetsRequest& request, const DescribeMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricRuleTargetsOutcomeCallable CmsClient::describeMetricRuleTargetsCallable(const DescribeMetricRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->describeMetricRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricRuleTemplateAttributeOutcome CmsClient::describeMetricRuleTemplateAttribute(const DescribeMetricRuleTemplateAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricRuleTemplateAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricRuleTemplateAttributeOutcome(DescribeMetricRuleTemplateAttributeResult(outcome.result()));
	else
		return DescribeMetricRuleTemplateAttributeOutcome(outcome.error());
}

void CmsClient::describeMetricRuleTemplateAttributeAsync(const DescribeMetricRuleTemplateAttributeRequest& request, const DescribeMetricRuleTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricRuleTemplateAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricRuleTemplateAttributeOutcomeCallable CmsClient::describeMetricRuleTemplateAttributeCallable(const DescribeMetricRuleTemplateAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricRuleTemplateAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeMetricRuleTemplateAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricRuleTemplateListOutcome CmsClient::describeMetricRuleTemplateList(const DescribeMetricRuleTemplateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricRuleTemplateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricRuleTemplateListOutcome(DescribeMetricRuleTemplateListResult(outcome.result()));
	else
		return DescribeMetricRuleTemplateListOutcome(outcome.error());
}

void CmsClient::describeMetricRuleTemplateListAsync(const DescribeMetricRuleTemplateListRequest& request, const DescribeMetricRuleTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricRuleTemplateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricRuleTemplateListOutcomeCallable CmsClient::describeMetricRuleTemplateListCallable(const DescribeMetricRuleTemplateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricRuleTemplateListOutcome()>>(
			[this, request]()
			{
			return this->describeMetricRuleTemplateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMetricTopOutcome CmsClient::describeMetricTop(const DescribeMetricTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricTopOutcome(DescribeMetricTopResult(outcome.result()));
	else
		return DescribeMetricTopOutcome(outcome.error());
}

void CmsClient::describeMetricTopAsync(const DescribeMetricTopRequest& request, const DescribeMetricTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMetricTopOutcomeCallable CmsClient::describeMetricTopCallable(const DescribeMetricTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricTopOutcome()>>(
			[this, request]()
			{
			return this->describeMetricTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupCategoriesOutcome CmsClient::describeMonitorGroupCategories(const DescribeMonitorGroupCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupCategoriesOutcome(DescribeMonitorGroupCategoriesResult(outcome.result()));
	else
		return DescribeMonitorGroupCategoriesOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupCategoriesAsync(const DescribeMonitorGroupCategoriesRequest& request, const DescribeMonitorGroupCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroupCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupCategoriesOutcomeCallable CmsClient::describeMonitorGroupCategoriesCallable(const DescribeMonitorGroupCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupCategoriesOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroupCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupDynamicRulesOutcome CmsClient::describeMonitorGroupDynamicRules(const DescribeMonitorGroupDynamicRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupDynamicRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupDynamicRulesOutcome(DescribeMonitorGroupDynamicRulesResult(outcome.result()));
	else
		return DescribeMonitorGroupDynamicRulesOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupDynamicRulesAsync(const DescribeMonitorGroupDynamicRulesRequest& request, const DescribeMonitorGroupDynamicRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroupDynamicRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupDynamicRulesOutcomeCallable CmsClient::describeMonitorGroupDynamicRulesCallable(const DescribeMonitorGroupDynamicRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupDynamicRulesOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroupDynamicRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupInstanceAttributeOutcome CmsClient::describeMonitorGroupInstanceAttribute(const DescribeMonitorGroupInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupInstanceAttributeOutcome(DescribeMonitorGroupInstanceAttributeResult(outcome.result()));
	else
		return DescribeMonitorGroupInstanceAttributeOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupInstanceAttributeAsync(const DescribeMonitorGroupInstanceAttributeRequest& request, const DescribeMonitorGroupInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroupInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupInstanceAttributeOutcomeCallable CmsClient::describeMonitorGroupInstanceAttributeCallable(const DescribeMonitorGroupInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroupInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupInstancesOutcome CmsClient::describeMonitorGroupInstances(const DescribeMonitorGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupInstancesOutcome(DescribeMonitorGroupInstancesResult(outcome.result()));
	else
		return DescribeMonitorGroupInstancesOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupInstancesAsync(const DescribeMonitorGroupInstancesRequest& request, const DescribeMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupInstancesOutcomeCallable CmsClient::describeMonitorGroupInstancesCallable(const DescribeMonitorGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupNotifyPolicyListOutcome CmsClient::describeMonitorGroupNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupNotifyPolicyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupNotifyPolicyListOutcome(DescribeMonitorGroupNotifyPolicyListResult(outcome.result()));
	else
		return DescribeMonitorGroupNotifyPolicyListOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupNotifyPolicyListAsync(const DescribeMonitorGroupNotifyPolicyListRequest& request, const DescribeMonitorGroupNotifyPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroupNotifyPolicyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupNotifyPolicyListOutcomeCallable CmsClient::describeMonitorGroupNotifyPolicyListCallable(const DescribeMonitorGroupNotifyPolicyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupNotifyPolicyListOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroupNotifyPolicyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorGroupsOutcome CmsClient::describeMonitorGroups(const DescribeMonitorGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorGroupsOutcome(DescribeMonitorGroupsResult(outcome.result()));
	else
		return DescribeMonitorGroupsOutcome(outcome.error());
}

void CmsClient::describeMonitorGroupsAsync(const DescribeMonitorGroupsRequest& request, const DescribeMonitorGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorGroupsOutcomeCallable CmsClient::describeMonitorGroupsCallable(const DescribeMonitorGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitorResourceQuotaAttributeOutcome CmsClient::describeMonitorResourceQuotaAttribute(const DescribeMonitorResourceQuotaAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorResourceQuotaAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorResourceQuotaAttributeOutcome(DescribeMonitorResourceQuotaAttributeResult(outcome.result()));
	else
		return DescribeMonitorResourceQuotaAttributeOutcome(outcome.error());
}

void CmsClient::describeMonitorResourceQuotaAttributeAsync(const DescribeMonitorResourceQuotaAttributeRequest& request, const DescribeMonitorResourceQuotaAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorResourceQuotaAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitorResourceQuotaAttributeOutcomeCallable CmsClient::describeMonitorResourceQuotaAttributeCallable(const DescribeMonitorResourceQuotaAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorResourceQuotaAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorResourceQuotaAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringAgentAccessKeyOutcome CmsClient::describeMonitoringAgentAccessKey(const DescribeMonitoringAgentAccessKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringAgentAccessKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringAgentAccessKeyOutcome(DescribeMonitoringAgentAccessKeyResult(outcome.result()));
	else
		return DescribeMonitoringAgentAccessKeyOutcome(outcome.error());
}

void CmsClient::describeMonitoringAgentAccessKeyAsync(const DescribeMonitoringAgentAccessKeyRequest& request, const DescribeMonitoringAgentAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringAgentAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringAgentAccessKeyOutcomeCallable CmsClient::describeMonitoringAgentAccessKeyCallable(const DescribeMonitoringAgentAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringAgentAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringAgentAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringAgentConfigOutcome CmsClient::describeMonitoringAgentConfig(const DescribeMonitoringAgentConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringAgentConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringAgentConfigOutcome(DescribeMonitoringAgentConfigResult(outcome.result()));
	else
		return DescribeMonitoringAgentConfigOutcome(outcome.error());
}

void CmsClient::describeMonitoringAgentConfigAsync(const DescribeMonitoringAgentConfigRequest& request, const DescribeMonitoringAgentConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringAgentConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringAgentConfigOutcomeCallable CmsClient::describeMonitoringAgentConfigCallable(const DescribeMonitoringAgentConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringAgentConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringAgentConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringAgentHostsOutcome CmsClient::describeMonitoringAgentHosts(const DescribeMonitoringAgentHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringAgentHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringAgentHostsOutcome(DescribeMonitoringAgentHostsResult(outcome.result()));
	else
		return DescribeMonitoringAgentHostsOutcome(outcome.error());
}

void CmsClient::describeMonitoringAgentHostsAsync(const DescribeMonitoringAgentHostsRequest& request, const DescribeMonitoringAgentHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringAgentHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringAgentHostsOutcomeCallable CmsClient::describeMonitoringAgentHostsCallable(const DescribeMonitoringAgentHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringAgentHostsOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringAgentHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringAgentProcessesOutcome CmsClient::describeMonitoringAgentProcesses(const DescribeMonitoringAgentProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringAgentProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringAgentProcessesOutcome(DescribeMonitoringAgentProcessesResult(outcome.result()));
	else
		return DescribeMonitoringAgentProcessesOutcome(outcome.error());
}

void CmsClient::describeMonitoringAgentProcessesAsync(const DescribeMonitoringAgentProcessesRequest& request, const DescribeMonitoringAgentProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringAgentProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringAgentProcessesOutcomeCallable CmsClient::describeMonitoringAgentProcessesCallable(const DescribeMonitoringAgentProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringAgentProcessesOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringAgentProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringAgentStatusesOutcome CmsClient::describeMonitoringAgentStatuses(const DescribeMonitoringAgentStatusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringAgentStatusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringAgentStatusesOutcome(DescribeMonitoringAgentStatusesResult(outcome.result()));
	else
		return DescribeMonitoringAgentStatusesOutcome(outcome.error());
}

void CmsClient::describeMonitoringAgentStatusesAsync(const DescribeMonitoringAgentStatusesRequest& request, const DescribeMonitoringAgentStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringAgentStatuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringAgentStatusesOutcomeCallable CmsClient::describeMonitoringAgentStatusesCallable(const DescribeMonitoringAgentStatusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringAgentStatusesOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringAgentStatuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeMonitoringConfigOutcome CmsClient::describeMonitoringConfig(const DescribeMonitoringConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitoringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitoringConfigOutcome(DescribeMonitoringConfigResult(outcome.result()));
	else
		return DescribeMonitoringConfigOutcome(outcome.error());
}

void CmsClient::describeMonitoringConfigAsync(const DescribeMonitoringConfigRequest& request, const DescribeMonitoringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitoringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeMonitoringConfigOutcomeCallable CmsClient::describeMonitoringConfigCallable(const DescribeMonitoringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitoringConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMonitoringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeProductResourceTagKeyListOutcome CmsClient::describeProductResourceTagKeyList(const DescribeProductResourceTagKeyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProductResourceTagKeyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProductResourceTagKeyListOutcome(DescribeProductResourceTagKeyListResult(outcome.result()));
	else
		return DescribeProductResourceTagKeyListOutcome(outcome.error());
}

void CmsClient::describeProductResourceTagKeyListAsync(const DescribeProductResourceTagKeyListRequest& request, const DescribeProductResourceTagKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProductResourceTagKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeProductResourceTagKeyListOutcomeCallable CmsClient::describeProductResourceTagKeyListCallable(const DescribeProductResourceTagKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProductResourceTagKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeProductResourceTagKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeProductsOfActiveMetricRuleOutcome CmsClient::describeProductsOfActiveMetricRule(const DescribeProductsOfActiveMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProductsOfActiveMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProductsOfActiveMetricRuleOutcome(DescribeProductsOfActiveMetricRuleResult(outcome.result()));
	else
		return DescribeProductsOfActiveMetricRuleOutcome(outcome.error());
}

void CmsClient::describeProductsOfActiveMetricRuleAsync(const DescribeProductsOfActiveMetricRuleRequest& request, const DescribeProductsOfActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProductsOfActiveMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeProductsOfActiveMetricRuleOutcomeCallable CmsClient::describeProductsOfActiveMetricRuleCallable(const DescribeProductsOfActiveMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProductsOfActiveMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->describeProductsOfActiveMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeProjectMetaOutcome CmsClient::describeProjectMeta(const DescribeProjectMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectMetaOutcome(DescribeProjectMetaResult(outcome.result()));
	else
		return DescribeProjectMetaOutcome(outcome.error());
}

void CmsClient::describeProjectMetaAsync(const DescribeProjectMetaRequest& request, const DescribeProjectMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeProjectMetaOutcomeCallable CmsClient::describeProjectMetaCallable(const DescribeProjectMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectMetaOutcome()>>(
			[this, request]()
			{
			return this->describeProjectMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorAttributeOutcome CmsClient::describeSiteMonitorAttribute(const DescribeSiteMonitorAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorAttributeOutcome(DescribeSiteMonitorAttributeResult(outcome.result()));
	else
		return DescribeSiteMonitorAttributeOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorAttributeAsync(const DescribeSiteMonitorAttributeRequest& request, const DescribeSiteMonitorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorAttributeOutcomeCallable CmsClient::describeSiteMonitorAttributeCallable(const DescribeSiteMonitorAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorDataOutcome CmsClient::describeSiteMonitorData(const DescribeSiteMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorDataOutcome(DescribeSiteMonitorDataResult(outcome.result()));
	else
		return DescribeSiteMonitorDataOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorDataAsync(const DescribeSiteMonitorDataRequest& request, const DescribeSiteMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorDataOutcomeCallable CmsClient::describeSiteMonitorDataCallable(const DescribeSiteMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorISPCityListOutcome CmsClient::describeSiteMonitorISPCityList(const DescribeSiteMonitorISPCityListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorISPCityListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorISPCityListOutcome(DescribeSiteMonitorISPCityListResult(outcome.result()));
	else
		return DescribeSiteMonitorISPCityListOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorISPCityListAsync(const DescribeSiteMonitorISPCityListRequest& request, const DescribeSiteMonitorISPCityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorISPCityList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorISPCityListOutcomeCallable CmsClient::describeSiteMonitorISPCityListCallable(const DescribeSiteMonitorISPCityListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorISPCityListOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorISPCityList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorListOutcome CmsClient::describeSiteMonitorList(const DescribeSiteMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorListOutcome(DescribeSiteMonitorListResult(outcome.result()));
	else
		return DescribeSiteMonitorListOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorListAsync(const DescribeSiteMonitorListRequest& request, const DescribeSiteMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorListOutcomeCallable CmsClient::describeSiteMonitorListCallable(const DescribeSiteMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorListOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorLogOutcome CmsClient::describeSiteMonitorLog(const DescribeSiteMonitorLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorLogOutcome(DescribeSiteMonitorLogResult(outcome.result()));
	else
		return DescribeSiteMonitorLogOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorLogAsync(const DescribeSiteMonitorLogRequest& request, const DescribeSiteMonitorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorLogOutcomeCallable CmsClient::describeSiteMonitorLogCallable(const DescribeSiteMonitorLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorLogOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorQuotaOutcome CmsClient::describeSiteMonitorQuota(const DescribeSiteMonitorQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorQuotaOutcome(DescribeSiteMonitorQuotaResult(outcome.result()));
	else
		return DescribeSiteMonitorQuotaOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorQuotaAsync(const DescribeSiteMonitorQuotaRequest& request, const DescribeSiteMonitorQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorQuotaOutcomeCallable CmsClient::describeSiteMonitorQuotaCallable(const DescribeSiteMonitorQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorStatisticsOutcome CmsClient::describeSiteMonitorStatistics(const DescribeSiteMonitorStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorStatisticsOutcome(DescribeSiteMonitorStatisticsResult(outcome.result()));
	else
		return DescribeSiteMonitorStatisticsOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorStatisticsAsync(const DescribeSiteMonitorStatisticsRequest& request, const DescribeSiteMonitorStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorStatisticsOutcomeCallable CmsClient::describeSiteMonitorStatisticsCallable(const DescribeSiteMonitorStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSystemEventAttributeOutcome CmsClient::describeSystemEventAttribute(const DescribeSystemEventAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemEventAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemEventAttributeOutcome(DescribeSystemEventAttributeResult(outcome.result()));
	else
		return DescribeSystemEventAttributeOutcome(outcome.error());
}

void CmsClient::describeSystemEventAttributeAsync(const DescribeSystemEventAttributeRequest& request, const DescribeSystemEventAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemEventAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSystemEventAttributeOutcomeCallable CmsClient::describeSystemEventAttributeCallable(const DescribeSystemEventAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemEventAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSystemEventAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSystemEventCountOutcome CmsClient::describeSystemEventCount(const DescribeSystemEventCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemEventCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemEventCountOutcome(DescribeSystemEventCountResult(outcome.result()));
	else
		return DescribeSystemEventCountOutcome(outcome.error());
}

void CmsClient::describeSystemEventCountAsync(const DescribeSystemEventCountRequest& request, const DescribeSystemEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemEventCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSystemEventCountOutcomeCallable CmsClient::describeSystemEventCountCallable(const DescribeSystemEventCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemEventCountOutcome()>>(
			[this, request]()
			{
			return this->describeSystemEventCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSystemEventHistogramOutcome CmsClient::describeSystemEventHistogram(const DescribeSystemEventHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemEventHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemEventHistogramOutcome(DescribeSystemEventHistogramResult(outcome.result()));
	else
		return DescribeSystemEventHistogramOutcome(outcome.error());
}

void CmsClient::describeSystemEventHistogramAsync(const DescribeSystemEventHistogramRequest& request, const DescribeSystemEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemEventHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSystemEventHistogramOutcomeCallable CmsClient::describeSystemEventHistogramCallable(const DescribeSystemEventHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemEventHistogramOutcome()>>(
			[this, request]()
			{
			return this->describeSystemEventHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSystemEventMetaListOutcome CmsClient::describeSystemEventMetaList(const DescribeSystemEventMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemEventMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemEventMetaListOutcome(DescribeSystemEventMetaListResult(outcome.result()));
	else
		return DescribeSystemEventMetaListOutcome(outcome.error());
}

void CmsClient::describeSystemEventMetaListAsync(const DescribeSystemEventMetaListRequest& request, const DescribeSystemEventMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemEventMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSystemEventMetaListOutcomeCallable CmsClient::describeSystemEventMetaListCallable(const DescribeSystemEventMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemEventMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeSystemEventMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeTagKeyListOutcome CmsClient::describeTagKeyList(const DescribeTagKeyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagKeyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagKeyListOutcome(DescribeTagKeyListResult(outcome.result()));
	else
		return DescribeTagKeyListOutcome(outcome.error());
}

void CmsClient::describeTagKeyListAsync(const DescribeTagKeyListRequest& request, const DescribeTagKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeTagKeyListOutcomeCallable CmsClient::describeTagKeyListCallable(const DescribeTagKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeTagKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeTagValueListOutcome CmsClient::describeTagValueList(const DescribeTagValueListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagValueListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagValueListOutcome(DescribeTagValueListResult(outcome.result()));
	else
		return DescribeTagValueListOutcome(outcome.error());
}

void CmsClient::describeTagValueListAsync(const DescribeTagValueListRequest& request, const DescribeTagValueListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagValueList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeTagValueListOutcomeCallable CmsClient::describeTagValueListCallable(const DescribeTagValueListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagValueListOutcome()>>(
			[this, request]()
			{
			return this->describeTagValueList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeUnhealthyHostAvailabilityOutcome CmsClient::describeUnhealthyHostAvailability(const DescribeUnhealthyHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUnhealthyHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUnhealthyHostAvailabilityOutcome(DescribeUnhealthyHostAvailabilityResult(outcome.result()));
	else
		return DescribeUnhealthyHostAvailabilityOutcome(outcome.error());
}

void CmsClient::describeUnhealthyHostAvailabilityAsync(const DescribeUnhealthyHostAvailabilityRequest& request, const DescribeUnhealthyHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUnhealthyHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeUnhealthyHostAvailabilityOutcomeCallable CmsClient::describeUnhealthyHostAvailabilityCallable(const DescribeUnhealthyHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUnhealthyHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->describeUnhealthyHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableActiveMetricRuleOutcome CmsClient::disableActiveMetricRule(const DisableActiveMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableActiveMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableActiveMetricRuleOutcome(DisableActiveMetricRuleResult(outcome.result()));
	else
		return DisableActiveMetricRuleOutcome(outcome.error());
}

void CmsClient::disableActiveMetricRuleAsync(const DisableActiveMetricRuleRequest& request, const DisableActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableActiveMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableActiveMetricRuleOutcomeCallable CmsClient::disableActiveMetricRuleCallable(const DisableActiveMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableActiveMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->disableActiveMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableEventRulesOutcome CmsClient::disableEventRules(const DisableEventRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableEventRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableEventRulesOutcome(DisableEventRulesResult(outcome.result()));
	else
		return DisableEventRulesOutcome(outcome.error());
}

void CmsClient::disableEventRulesAsync(const DisableEventRulesRequest& request, const DisableEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableEventRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableEventRulesOutcomeCallable CmsClient::disableEventRulesCallable(const DisableEventRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableEventRulesOutcome()>>(
			[this, request]()
			{
			return this->disableEventRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableHostAvailabilityOutcome CmsClient::disableHostAvailability(const DisableHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableHostAvailabilityOutcome(DisableHostAvailabilityResult(outcome.result()));
	else
		return DisableHostAvailabilityOutcome(outcome.error());
}

void CmsClient::disableHostAvailabilityAsync(const DisableHostAvailabilityRequest& request, const DisableHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableHostAvailabilityOutcomeCallable CmsClient::disableHostAvailabilityCallable(const DisableHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->disableHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableMetricRulesOutcome CmsClient::disableMetricRules(const DisableMetricRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMetricRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMetricRulesOutcome(DisableMetricRulesResult(outcome.result()));
	else
		return DisableMetricRulesOutcome(outcome.error());
}

void CmsClient::disableMetricRulesAsync(const DisableMetricRulesRequest& request, const DisableMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMetricRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableMetricRulesOutcomeCallable CmsClient::disableMetricRulesCallable(const DisableMetricRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMetricRulesOutcome()>>(
			[this, request]()
			{
			return this->disableMetricRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableSiteMonitorsOutcome CmsClient::disableSiteMonitors(const DisableSiteMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSiteMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSiteMonitorsOutcome(DisableSiteMonitorsResult(outcome.result()));
	else
		return DisableSiteMonitorsOutcome(outcome.error());
}

void CmsClient::disableSiteMonitorsAsync(const DisableSiteMonitorsRequest& request, const DisableSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSiteMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableSiteMonitorsOutcomeCallable CmsClient::disableSiteMonitorsCallable(const DisableSiteMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSiteMonitorsOutcome()>>(
			[this, request]()
			{
			return this->disableSiteMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableActiveMetricRuleOutcome CmsClient::enableActiveMetricRule(const EnableActiveMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableActiveMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableActiveMetricRuleOutcome(EnableActiveMetricRuleResult(outcome.result()));
	else
		return EnableActiveMetricRuleOutcome(outcome.error());
}

void CmsClient::enableActiveMetricRuleAsync(const EnableActiveMetricRuleRequest& request, const EnableActiveMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableActiveMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableActiveMetricRuleOutcomeCallable CmsClient::enableActiveMetricRuleCallable(const EnableActiveMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableActiveMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->enableActiveMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableEventRulesOutcome CmsClient::enableEventRules(const EnableEventRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableEventRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableEventRulesOutcome(EnableEventRulesResult(outcome.result()));
	else
		return EnableEventRulesOutcome(outcome.error());
}

void CmsClient::enableEventRulesAsync(const EnableEventRulesRequest& request, const EnableEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableEventRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableEventRulesOutcomeCallable CmsClient::enableEventRulesCallable(const EnableEventRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableEventRulesOutcome()>>(
			[this, request]()
			{
			return this->enableEventRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableHostAvailabilityOutcome CmsClient::enableHostAvailability(const EnableHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableHostAvailabilityOutcome(EnableHostAvailabilityResult(outcome.result()));
	else
		return EnableHostAvailabilityOutcome(outcome.error());
}

void CmsClient::enableHostAvailabilityAsync(const EnableHostAvailabilityRequest& request, const EnableHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableHostAvailabilityOutcomeCallable CmsClient::enableHostAvailabilityCallable(const EnableHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->enableHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableMetricRulesOutcome CmsClient::enableMetricRules(const EnableMetricRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMetricRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMetricRulesOutcome(EnableMetricRulesResult(outcome.result()));
	else
		return EnableMetricRulesOutcome(outcome.error());
}

void CmsClient::enableMetricRulesAsync(const EnableMetricRulesRequest& request, const EnableMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMetricRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableMetricRulesOutcomeCallable CmsClient::enableMetricRulesCallable(const EnableMetricRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMetricRulesOutcome()>>(
			[this, request]()
			{
			return this->enableMetricRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableSiteMonitorsOutcome CmsClient::enableSiteMonitors(const EnableSiteMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSiteMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSiteMonitorsOutcome(EnableSiteMonitorsResult(outcome.result()));
	else
		return EnableSiteMonitorsOutcome(outcome.error());
}

void CmsClient::enableSiteMonitorsAsync(const EnableSiteMonitorsRequest& request, const EnableSiteMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSiteMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableSiteMonitorsOutcomeCallable CmsClient::enableSiteMonitorsCallable(const EnableSiteMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSiteMonitorsOutcome()>>(
			[this, request]()
			{
			return this->enableSiteMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::InstallMonitoringAgentOutcome CmsClient::installMonitoringAgent(const InstallMonitoringAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallMonitoringAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallMonitoringAgentOutcome(InstallMonitoringAgentResult(outcome.result()));
	else
		return InstallMonitoringAgentOutcome(outcome.error());
}

void CmsClient::installMonitoringAgentAsync(const InstallMonitoringAgentRequest& request, const InstallMonitoringAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installMonitoringAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::InstallMonitoringAgentOutcomeCallable CmsClient::installMonitoringAgentCallable(const InstallMonitoringAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallMonitoringAgentOutcome()>>(
			[this, request]()
			{
			return this->installMonitoringAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyGroupMonitoringAgentProcessOutcome CmsClient::modifyGroupMonitoringAgentProcess(const ModifyGroupMonitoringAgentProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGroupMonitoringAgentProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGroupMonitoringAgentProcessOutcome(ModifyGroupMonitoringAgentProcessResult(outcome.result()));
	else
		return ModifyGroupMonitoringAgentProcessOutcome(outcome.error());
}

void CmsClient::modifyGroupMonitoringAgentProcessAsync(const ModifyGroupMonitoringAgentProcessRequest& request, const ModifyGroupMonitoringAgentProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGroupMonitoringAgentProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyGroupMonitoringAgentProcessOutcomeCallable CmsClient::modifyGroupMonitoringAgentProcessCallable(const ModifyGroupMonitoringAgentProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGroupMonitoringAgentProcessOutcome()>>(
			[this, request]()
			{
			return this->modifyGroupMonitoringAgentProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyHostAvailabilityOutcome CmsClient::modifyHostAvailability(const ModifyHostAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHostAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHostAvailabilityOutcome(ModifyHostAvailabilityResult(outcome.result()));
	else
		return ModifyHostAvailabilityOutcome(outcome.error());
}

void CmsClient::modifyHostAvailabilityAsync(const ModifyHostAvailabilityRequest& request, const ModifyHostAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHostAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyHostAvailabilityOutcomeCallable CmsClient::modifyHostAvailabilityCallable(const ModifyHostAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHostAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->modifyHostAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyHostInfoOutcome CmsClient::modifyHostInfo(const ModifyHostInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHostInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHostInfoOutcome(ModifyHostInfoResult(outcome.result()));
	else
		return ModifyHostInfoOutcome(outcome.error());
}

void CmsClient::modifyHostInfoAsync(const ModifyHostInfoRequest& request, const ModifyHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHostInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyHostInfoOutcomeCallable CmsClient::modifyHostInfoCallable(const ModifyHostInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHostInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyHostInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyMetricRuleTemplateOutcome CmsClient::modifyMetricRuleTemplate(const ModifyMetricRuleTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMetricRuleTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMetricRuleTemplateOutcome(ModifyMetricRuleTemplateResult(outcome.result()));
	else
		return ModifyMetricRuleTemplateOutcome(outcome.error());
}

void CmsClient::modifyMetricRuleTemplateAsync(const ModifyMetricRuleTemplateRequest& request, const ModifyMetricRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMetricRuleTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyMetricRuleTemplateOutcomeCallable CmsClient::modifyMetricRuleTemplateCallable(const ModifyMetricRuleTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMetricRuleTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyMetricRuleTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyMonitorGroupOutcome CmsClient::modifyMonitorGroup(const ModifyMonitorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMonitorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMonitorGroupOutcome(ModifyMonitorGroupResult(outcome.result()));
	else
		return ModifyMonitorGroupOutcome(outcome.error());
}

void CmsClient::modifyMonitorGroupAsync(const ModifyMonitorGroupRequest& request, const ModifyMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMonitorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyMonitorGroupOutcomeCallable CmsClient::modifyMonitorGroupCallable(const ModifyMonitorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMonitorGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyMonitorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyMonitorGroupInstancesOutcome CmsClient::modifyMonitorGroupInstances(const ModifyMonitorGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMonitorGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMonitorGroupInstancesOutcome(ModifyMonitorGroupInstancesResult(outcome.result()));
	else
		return ModifyMonitorGroupInstancesOutcome(outcome.error());
}

void CmsClient::modifyMonitorGroupInstancesAsync(const ModifyMonitorGroupInstancesRequest& request, const ModifyMonitorGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMonitorGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyMonitorGroupInstancesOutcomeCallable CmsClient::modifyMonitorGroupInstancesCallable(const ModifyMonitorGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMonitorGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->modifyMonitorGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifySiteMonitorOutcome CmsClient::modifySiteMonitor(const ModifySiteMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySiteMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySiteMonitorOutcome(ModifySiteMonitorResult(outcome.result()));
	else
		return ModifySiteMonitorOutcome(outcome.error());
}

void CmsClient::modifySiteMonitorAsync(const ModifySiteMonitorRequest& request, const ModifySiteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySiteMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifySiteMonitorOutcomeCallable CmsClient::modifySiteMonitorCallable(const ModifySiteMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySiteMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifySiteMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::OpenCmsServiceOutcome CmsClient::openCmsService(const OpenCmsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenCmsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenCmsServiceOutcome(OpenCmsServiceResult(outcome.result()));
	else
		return OpenCmsServiceOutcome(outcome.error());
}

void CmsClient::openCmsServiceAsync(const OpenCmsServiceRequest& request, const OpenCmsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openCmsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::OpenCmsServiceOutcomeCallable CmsClient::openCmsServiceCallable(const OpenCmsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenCmsServiceOutcome()>>(
			[this, request]()
			{
			return this->openCmsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutContactOutcome CmsClient::putContact(const PutContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutContactOutcome(PutContactResult(outcome.result()));
	else
		return PutContactOutcome(outcome.error());
}

void CmsClient::putContactAsync(const PutContactRequest& request, const PutContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutContactOutcomeCallable CmsClient::putContactCallable(const PutContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutContactOutcome()>>(
			[this, request]()
			{
			return this->putContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutContactGroupOutcome CmsClient::putContactGroup(const PutContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutContactGroupOutcome(PutContactGroupResult(outcome.result()));
	else
		return PutContactGroupOutcome(outcome.error());
}

void CmsClient::putContactGroupAsync(const PutContactGroupRequest& request, const PutContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutContactGroupOutcomeCallable CmsClient::putContactGroupCallable(const PutContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutContactGroupOutcome()>>(
			[this, request]()
			{
			return this->putContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutCustomEventOutcome CmsClient::putCustomEvent(const PutCustomEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutCustomEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutCustomEventOutcome(PutCustomEventResult(outcome.result()));
	else
		return PutCustomEventOutcome(outcome.error());
}

void CmsClient::putCustomEventAsync(const PutCustomEventRequest& request, const PutCustomEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putCustomEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutCustomEventOutcomeCallable CmsClient::putCustomEventCallable(const PutCustomEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutCustomEventOutcome()>>(
			[this, request]()
			{
			return this->putCustomEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutCustomEventRuleOutcome CmsClient::putCustomEventRule(const PutCustomEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutCustomEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutCustomEventRuleOutcome(PutCustomEventRuleResult(outcome.result()));
	else
		return PutCustomEventRuleOutcome(outcome.error());
}

void CmsClient::putCustomEventRuleAsync(const PutCustomEventRuleRequest& request, const PutCustomEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putCustomEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutCustomEventRuleOutcomeCallable CmsClient::putCustomEventRuleCallable(const PutCustomEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutCustomEventRuleOutcome()>>(
			[this, request]()
			{
			return this->putCustomEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutCustomMetricOutcome CmsClient::putCustomMetric(const PutCustomMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutCustomMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutCustomMetricOutcome(PutCustomMetricResult(outcome.result()));
	else
		return PutCustomMetricOutcome(outcome.error());
}

void CmsClient::putCustomMetricAsync(const PutCustomMetricRequest& request, const PutCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putCustomMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutCustomMetricOutcomeCallable CmsClient::putCustomMetricCallable(const PutCustomMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutCustomMetricOutcome()>>(
			[this, request]()
			{
			return this->putCustomMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutCustomMetricRuleOutcome CmsClient::putCustomMetricRule(const PutCustomMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutCustomMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutCustomMetricRuleOutcome(PutCustomMetricRuleResult(outcome.result()));
	else
		return PutCustomMetricRuleOutcome(outcome.error());
}

void CmsClient::putCustomMetricRuleAsync(const PutCustomMetricRuleRequest& request, const PutCustomMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putCustomMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutCustomMetricRuleOutcomeCallable CmsClient::putCustomMetricRuleCallable(const PutCustomMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutCustomMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->putCustomMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutEventRuleOutcome CmsClient::putEventRule(const PutEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutEventRuleOutcome(PutEventRuleResult(outcome.result()));
	else
		return PutEventRuleOutcome(outcome.error());
}

void CmsClient::putEventRuleAsync(const PutEventRuleRequest& request, const PutEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutEventRuleOutcomeCallable CmsClient::putEventRuleCallable(const PutEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutEventRuleOutcome()>>(
			[this, request]()
			{
			return this->putEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutEventRuleTargetsOutcome CmsClient::putEventRuleTargets(const PutEventRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutEventRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutEventRuleTargetsOutcome(PutEventRuleTargetsResult(outcome.result()));
	else
		return PutEventRuleTargetsOutcome(outcome.error());
}

void CmsClient::putEventRuleTargetsAsync(const PutEventRuleTargetsRequest& request, const PutEventRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putEventRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutEventRuleTargetsOutcomeCallable CmsClient::putEventRuleTargetsCallable(const PutEventRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutEventRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->putEventRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutExporterOutputOutcome CmsClient::putExporterOutput(const PutExporterOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutExporterOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutExporterOutputOutcome(PutExporterOutputResult(outcome.result()));
	else
		return PutExporterOutputOutcome(outcome.error());
}

void CmsClient::putExporterOutputAsync(const PutExporterOutputRequest& request, const PutExporterOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putExporterOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutExporterOutputOutcomeCallable CmsClient::putExporterOutputCallable(const PutExporterOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutExporterOutputOutcome()>>(
			[this, request]()
			{
			return this->putExporterOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutExporterRuleOutcome CmsClient::putExporterRule(const PutExporterRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutExporterRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutExporterRuleOutcome(PutExporterRuleResult(outcome.result()));
	else
		return PutExporterRuleOutcome(outcome.error());
}

void CmsClient::putExporterRuleAsync(const PutExporterRuleRequest& request, const PutExporterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putExporterRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutExporterRuleOutcomeCallable CmsClient::putExporterRuleCallable(const PutExporterRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutExporterRuleOutcome()>>(
			[this, request]()
			{
			return this->putExporterRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutGroupMetricRuleOutcome CmsClient::putGroupMetricRule(const PutGroupMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutGroupMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutGroupMetricRuleOutcome(PutGroupMetricRuleResult(outcome.result()));
	else
		return PutGroupMetricRuleOutcome(outcome.error());
}

void CmsClient::putGroupMetricRuleAsync(const PutGroupMetricRuleRequest& request, const PutGroupMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putGroupMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutGroupMetricRuleOutcomeCallable CmsClient::putGroupMetricRuleCallable(const PutGroupMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutGroupMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->putGroupMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutHybridMonitorMetricDataOutcome CmsClient::putHybridMonitorMetricData(const PutHybridMonitorMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutHybridMonitorMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutHybridMonitorMetricDataOutcome(PutHybridMonitorMetricDataResult(outcome.result()));
	else
		return PutHybridMonitorMetricDataOutcome(outcome.error());
}

void CmsClient::putHybridMonitorMetricDataAsync(const PutHybridMonitorMetricDataRequest& request, const PutHybridMonitorMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putHybridMonitorMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutHybridMonitorMetricDataOutcomeCallable CmsClient::putHybridMonitorMetricDataCallable(const PutHybridMonitorMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutHybridMonitorMetricDataOutcome()>>(
			[this, request]()
			{
			return this->putHybridMonitorMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutLogMonitorOutcome CmsClient::putLogMonitor(const PutLogMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutLogMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutLogMonitorOutcome(PutLogMonitorResult(outcome.result()));
	else
		return PutLogMonitorOutcome(outcome.error());
}

void CmsClient::putLogMonitorAsync(const PutLogMonitorRequest& request, const PutLogMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putLogMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutLogMonitorOutcomeCallable CmsClient::putLogMonitorCallable(const PutLogMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutLogMonitorOutcome()>>(
			[this, request]()
			{
			return this->putLogMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutMetricRuleTargetsOutcome CmsClient::putMetricRuleTargets(const PutMetricRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMetricRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMetricRuleTargetsOutcome(PutMetricRuleTargetsResult(outcome.result()));
	else
		return PutMetricRuleTargetsOutcome(outcome.error());
}

void CmsClient::putMetricRuleTargetsAsync(const PutMetricRuleTargetsRequest& request, const PutMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMetricRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutMetricRuleTargetsOutcomeCallable CmsClient::putMetricRuleTargetsCallable(const PutMetricRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMetricRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->putMetricRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutMonitorGroupDynamicRuleOutcome CmsClient::putMonitorGroupDynamicRule(const PutMonitorGroupDynamicRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMonitorGroupDynamicRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMonitorGroupDynamicRuleOutcome(PutMonitorGroupDynamicRuleResult(outcome.result()));
	else
		return PutMonitorGroupDynamicRuleOutcome(outcome.error());
}

void CmsClient::putMonitorGroupDynamicRuleAsync(const PutMonitorGroupDynamicRuleRequest& request, const PutMonitorGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMonitorGroupDynamicRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutMonitorGroupDynamicRuleOutcomeCallable CmsClient::putMonitorGroupDynamicRuleCallable(const PutMonitorGroupDynamicRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMonitorGroupDynamicRuleOutcome()>>(
			[this, request]()
			{
			return this->putMonitorGroupDynamicRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutMonitoringConfigOutcome CmsClient::putMonitoringConfig(const PutMonitoringConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMonitoringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMonitoringConfigOutcome(PutMonitoringConfigResult(outcome.result()));
	else
		return PutMonitoringConfigOutcome(outcome.error());
}

void CmsClient::putMonitoringConfigAsync(const PutMonitoringConfigRequest& request, const PutMonitoringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMonitoringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutMonitoringConfigOutcomeCallable CmsClient::putMonitoringConfigCallable(const PutMonitoringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMonitoringConfigOutcome()>>(
			[this, request]()
			{
			return this->putMonitoringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutResourceMetricRuleOutcome CmsClient::putResourceMetricRule(const PutResourceMetricRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutResourceMetricRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutResourceMetricRuleOutcome(PutResourceMetricRuleResult(outcome.result()));
	else
		return PutResourceMetricRuleOutcome(outcome.error());
}

void CmsClient::putResourceMetricRuleAsync(const PutResourceMetricRuleRequest& request, const PutResourceMetricRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putResourceMetricRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutResourceMetricRuleOutcomeCallable CmsClient::putResourceMetricRuleCallable(const PutResourceMetricRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutResourceMetricRuleOutcome()>>(
			[this, request]()
			{
			return this->putResourceMetricRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutResourceMetricRulesOutcome CmsClient::putResourceMetricRules(const PutResourceMetricRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutResourceMetricRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutResourceMetricRulesOutcome(PutResourceMetricRulesResult(outcome.result()));
	else
		return PutResourceMetricRulesOutcome(outcome.error());
}

void CmsClient::putResourceMetricRulesAsync(const PutResourceMetricRulesRequest& request, const PutResourceMetricRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putResourceMetricRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutResourceMetricRulesOutcomeCallable CmsClient::putResourceMetricRulesCallable(const PutResourceMetricRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutResourceMetricRulesOutcome()>>(
			[this, request]()
			{
			return this->putResourceMetricRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::RemoveTagsOutcome CmsClient::removeTags(const RemoveTagsRequest &request) const
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

void CmsClient::removeTagsAsync(const RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::RemoveTagsOutcomeCallable CmsClient::removeTagsCallable(const RemoveTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsOutcome()>>(
			[this, request]()
			{
			return this->removeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::SendDryRunSystemEventOutcome CmsClient::sendDryRunSystemEvent(const SendDryRunSystemEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendDryRunSystemEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendDryRunSystemEventOutcome(SendDryRunSystemEventResult(outcome.result()));
	else
		return SendDryRunSystemEventOutcome(outcome.error());
}

void CmsClient::sendDryRunSystemEventAsync(const SendDryRunSystemEventRequest& request, const SendDryRunSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendDryRunSystemEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::SendDryRunSystemEventOutcomeCallable CmsClient::sendDryRunSystemEventCallable(const SendDryRunSystemEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendDryRunSystemEventOutcome()>>(
			[this, request]()
			{
			return this->sendDryRunSystemEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UninstallMonitoringAgentOutcome CmsClient::uninstallMonitoringAgent(const UninstallMonitoringAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallMonitoringAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallMonitoringAgentOutcome(UninstallMonitoringAgentResult(outcome.result()));
	else
		return UninstallMonitoringAgentOutcome(outcome.error());
}

void CmsClient::uninstallMonitoringAgentAsync(const UninstallMonitoringAgentRequest& request, const UninstallMonitoringAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallMonitoringAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UninstallMonitoringAgentOutcomeCallable CmsClient::uninstallMonitoringAgentCallable(const UninstallMonitoringAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallMonitoringAgentOutcome()>>(
			[this, request]()
			{
			return this->uninstallMonitoringAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

