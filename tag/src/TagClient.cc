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

#include <alibabacloud/tag/TagClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

namespace
{
	const std::string SERVICE_NAME = "Tag";
}

TagClient::TagClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tag");
}

TagClient::TagClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tag");
}

TagClient::TagClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tag");
}

TagClient::~TagClient()
{}

TagClient::AttachPolicyOutcome TagClient::attachPolicy(const AttachPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicyOutcome(AttachPolicyResult(outcome.result()));
	else
		return AttachPolicyOutcome(outcome.error());
}

void TagClient::attachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::AttachPolicyOutcomeCallable TagClient::attachPolicyCallable(const AttachPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicyOutcome()>>(
			[this, request]()
			{
			return this->attachPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::CheckCreatedByEnabledOutcome TagClient::checkCreatedByEnabled(const CheckCreatedByEnabledRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCreatedByEnabledOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCreatedByEnabledOutcome(CheckCreatedByEnabledResult(outcome.result()));
	else
		return CheckCreatedByEnabledOutcome(outcome.error());
}

void TagClient::checkCreatedByEnabledAsync(const CheckCreatedByEnabledRequest& request, const CheckCreatedByEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCreatedByEnabled(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::CheckCreatedByEnabledOutcomeCallable TagClient::checkCreatedByEnabledCallable(const CheckCreatedByEnabledRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCreatedByEnabledOutcome()>>(
			[this, request]()
			{
			return this->checkCreatedByEnabled(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::CloseCreatedByOutcome TagClient::closeCreatedBy(const CloseCreatedByRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseCreatedByOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseCreatedByOutcome(CloseCreatedByResult(outcome.result()));
	else
		return CloseCreatedByOutcome(outcome.error());
}

void TagClient::closeCreatedByAsync(const CloseCreatedByRequest& request, const CloseCreatedByAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeCreatedBy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::CloseCreatedByOutcomeCallable TagClient::closeCreatedByCallable(const CloseCreatedByRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseCreatedByOutcome()>>(
			[this, request]()
			{
			return this->closeCreatedBy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::CreatePolicyOutcome TagClient::createPolicy(const CreatePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyOutcome(CreatePolicyResult(outcome.result()));
	else
		return CreatePolicyOutcome(outcome.error());
}

void TagClient::createPolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::CreatePolicyOutcomeCallable TagClient::createPolicyCallable(const CreatePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
			[this, request]()
			{
			return this->createPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::CreateTagsOutcome TagClient::createTags(const CreateTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagsOutcome(CreateTagsResult(outcome.result()));
	else
		return CreateTagsOutcome(outcome.error());
}

void TagClient::createTagsAsync(const CreateTagsRequest& request, const CreateTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::CreateTagsOutcomeCallable TagClient::createTagsCallable(const CreateTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagsOutcome()>>(
			[this, request]()
			{
			return this->createTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::DeletePolicyOutcome TagClient::deletePolicy(const DeletePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyOutcome(DeletePolicyResult(outcome.result()));
	else
		return DeletePolicyOutcome(outcome.error());
}

void TagClient::deletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::DeletePolicyOutcomeCallable TagClient::deletePolicyCallable(const DeletePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
			[this, request]()
			{
			return this->deletePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::DeleteTagOutcome TagClient::deleteTag(const DeleteTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagOutcome(DeleteTagResult(outcome.result()));
	else
		return DeleteTagOutcome(outcome.error());
}

void TagClient::deleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::DeleteTagOutcomeCallable TagClient::deleteTagCallable(const DeleteTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::DescribeRegionsOutcome TagClient::describeRegions(const DescribeRegionsRequest &request) const
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

void TagClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::DescribeRegionsOutcomeCallable TagClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::DetachPolicyOutcome TagClient::detachPolicy(const DetachPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicyOutcome(DetachPolicyResult(outcome.result()));
	else
		return DetachPolicyOutcome(outcome.error());
}

void TagClient::detachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::DetachPolicyOutcomeCallable TagClient::detachPolicyCallable(const DetachPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicyOutcome()>>(
			[this, request]()
			{
			return this->detachPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::DisablePolicyTypeOutcome TagClient::disablePolicyType(const DisablePolicyTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisablePolicyTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisablePolicyTypeOutcome(DisablePolicyTypeResult(outcome.result()));
	else
		return DisablePolicyTypeOutcome(outcome.error());
}

void TagClient::disablePolicyTypeAsync(const DisablePolicyTypeRequest& request, const DisablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disablePolicyType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::DisablePolicyTypeOutcomeCallable TagClient::disablePolicyTypeCallable(const DisablePolicyTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisablePolicyTypeOutcome()>>(
			[this, request]()
			{
			return this->disablePolicyType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::EnablePolicyTypeOutcome TagClient::enablePolicyType(const EnablePolicyTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnablePolicyTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnablePolicyTypeOutcome(EnablePolicyTypeResult(outcome.result()));
	else
		return EnablePolicyTypeOutcome(outcome.error());
}

void TagClient::enablePolicyTypeAsync(const EnablePolicyTypeRequest& request, const EnablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enablePolicyType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::EnablePolicyTypeOutcomeCallable TagClient::enablePolicyTypeCallable(const EnablePolicyTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnablePolicyTypeOutcome()>>(
			[this, request]()
			{
			return this->enablePolicyType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::GenerateConfigRuleReportOutcome TagClient::generateConfigRuleReport(const GenerateConfigRuleReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateConfigRuleReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateConfigRuleReportOutcome(GenerateConfigRuleReportResult(outcome.result()));
	else
		return GenerateConfigRuleReportOutcome(outcome.error());
}

void TagClient::generateConfigRuleReportAsync(const GenerateConfigRuleReportRequest& request, const GenerateConfigRuleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateConfigRuleReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::GenerateConfigRuleReportOutcomeCallable TagClient::generateConfigRuleReportCallable(const GenerateConfigRuleReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateConfigRuleReportOutcome()>>(
			[this, request]()
			{
			return this->generateConfigRuleReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::GetConfigRuleReportOutcome TagClient::getConfigRuleReport(const GetConfigRuleReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigRuleReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigRuleReportOutcome(GetConfigRuleReportResult(outcome.result()));
	else
		return GetConfigRuleReportOutcome(outcome.error());
}

void TagClient::getConfigRuleReportAsync(const GetConfigRuleReportRequest& request, const GetConfigRuleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfigRuleReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::GetConfigRuleReportOutcomeCallable TagClient::getConfigRuleReportCallable(const GetConfigRuleReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigRuleReportOutcome()>>(
			[this, request]()
			{
			return this->getConfigRuleReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::GetEffectivePolicyOutcome TagClient::getEffectivePolicy(const GetEffectivePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEffectivePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEffectivePolicyOutcome(GetEffectivePolicyResult(outcome.result()));
	else
		return GetEffectivePolicyOutcome(outcome.error());
}

void TagClient::getEffectivePolicyAsync(const GetEffectivePolicyRequest& request, const GetEffectivePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEffectivePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::GetEffectivePolicyOutcomeCallable TagClient::getEffectivePolicyCallable(const GetEffectivePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEffectivePolicyOutcome()>>(
			[this, request]()
			{
			return this->getEffectivePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::GetPolicyOutcome TagClient::getPolicy(const GetPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolicyOutcome(GetPolicyResult(outcome.result()));
	else
		return GetPolicyOutcome(outcome.error());
}

void TagClient::getPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::GetPolicyOutcomeCallable TagClient::getPolicyCallable(const GetPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::GetPolicyEnableStatusOutcome TagClient::getPolicyEnableStatus(const GetPolicyEnableStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolicyEnableStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolicyEnableStatusOutcome(GetPolicyEnableStatusResult(outcome.result()));
	else
		return GetPolicyEnableStatusOutcome(outcome.error());
}

void TagClient::getPolicyEnableStatusAsync(const GetPolicyEnableStatusRequest& request, const GetPolicyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicyEnableStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::GetPolicyEnableStatusOutcomeCallable TagClient::getPolicyEnableStatusCallable(const GetPolicyEnableStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyEnableStatusOutcome()>>(
			[this, request]()
			{
			return this->getPolicyEnableStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListConfigRulesForTargetOutcome TagClient::listConfigRulesForTarget(const ListConfigRulesForTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigRulesForTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigRulesForTargetOutcome(ListConfigRulesForTargetResult(outcome.result()));
	else
		return ListConfigRulesForTargetOutcome(outcome.error());
}

void TagClient::listConfigRulesForTargetAsync(const ListConfigRulesForTargetRequest& request, const ListConfigRulesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigRulesForTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListConfigRulesForTargetOutcomeCallable TagClient::listConfigRulesForTargetCallable(const ListConfigRulesForTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigRulesForTargetOutcome()>>(
			[this, request]()
			{
			return this->listConfigRulesForTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListPoliciesOutcome TagClient::listPolicies(const ListPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesOutcome(ListPoliciesResult(outcome.result()));
	else
		return ListPoliciesOutcome(outcome.error());
}

void TagClient::listPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListPoliciesOutcomeCallable TagClient::listPoliciesCallable(const ListPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListPoliciesForTargetOutcome TagClient::listPoliciesForTarget(const ListPoliciesForTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesForTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesForTargetOutcome(ListPoliciesForTargetResult(outcome.result()));
	else
		return ListPoliciesForTargetOutcome(outcome.error());
}

void TagClient::listPoliciesForTargetAsync(const ListPoliciesForTargetRequest& request, const ListPoliciesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPoliciesForTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListPoliciesForTargetOutcomeCallable TagClient::listPoliciesForTargetCallable(const ListPoliciesForTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesForTargetOutcome()>>(
			[this, request]()
			{
			return this->listPoliciesForTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListResourcesByTagOutcome TagClient::listResourcesByTag(const ListResourcesByTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcesByTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcesByTagOutcome(ListResourcesByTagResult(outcome.result()));
	else
		return ListResourcesByTagOutcome(outcome.error());
}

void TagClient::listResourcesByTagAsync(const ListResourcesByTagRequest& request, const ListResourcesByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourcesByTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListResourcesByTagOutcomeCallable TagClient::listResourcesByTagCallable(const ListResourcesByTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcesByTagOutcome()>>(
			[this, request]()
			{
			return this->listResourcesByTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListSupportResourceTypesOutcome TagClient::listSupportResourceTypes(const ListSupportResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSupportResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSupportResourceTypesOutcome(ListSupportResourceTypesResult(outcome.result()));
	else
		return ListSupportResourceTypesOutcome(outcome.error());
}

void TagClient::listSupportResourceTypesAsync(const ListSupportResourceTypesRequest& request, const ListSupportResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSupportResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListSupportResourceTypesOutcomeCallable TagClient::listSupportResourceTypesCallable(const ListSupportResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSupportResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listSupportResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListTagKeysOutcome TagClient::listTagKeys(const ListTagKeysRequest &request) const
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

void TagClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListTagKeysOutcomeCallable TagClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListTagResourcesOutcome TagClient::listTagResources(const ListTagResourcesRequest &request) const
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

void TagClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListTagResourcesOutcomeCallable TagClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListTagValuesOutcome TagClient::listTagValues(const ListTagValuesRequest &request) const
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

void TagClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListTagValuesOutcomeCallable TagClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ListTargetsForPolicyOutcome TagClient::listTargetsForPolicy(const ListTargetsForPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTargetsForPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTargetsForPolicyOutcome(ListTargetsForPolicyResult(outcome.result()));
	else
		return ListTargetsForPolicyOutcome(outcome.error());
}

void TagClient::listTargetsForPolicyAsync(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTargetsForPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ListTargetsForPolicyOutcomeCallable TagClient::listTargetsForPolicyCallable(const ListTargetsForPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTargetsForPolicyOutcome()>>(
			[this, request]()
			{
			return this->listTargetsForPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::ModifyPolicyOutcome TagClient::modifyPolicy(const ModifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPolicyOutcome(ModifyPolicyResult(outcome.result()));
	else
		return ModifyPolicyOutcome(outcome.error());
}

void TagClient::modifyPolicyAsync(const ModifyPolicyRequest& request, const ModifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::ModifyPolicyOutcomeCallable TagClient::modifyPolicyCallable(const ModifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::OpenCreatedByOutcome TagClient::openCreatedBy(const OpenCreatedByRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenCreatedByOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenCreatedByOutcome(OpenCreatedByResult(outcome.result()));
	else
		return OpenCreatedByOutcome(outcome.error());
}

void TagClient::openCreatedByAsync(const OpenCreatedByRequest& request, const OpenCreatedByAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openCreatedBy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::OpenCreatedByOutcomeCallable TagClient::openCreatedByCallable(const OpenCreatedByRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenCreatedByOutcome()>>(
			[this, request]()
			{
			return this->openCreatedBy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::TagResourcesOutcome TagClient::tagResources(const TagResourcesRequest &request) const
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

void TagClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::TagResourcesOutcomeCallable TagClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TagClient::UntagResourcesOutcome TagClient::untagResources(const UntagResourcesRequest &request) const
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

void TagClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TagClient::UntagResourcesOutcomeCallable TagClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

