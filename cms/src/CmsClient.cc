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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cms");
}

CmsClient::CmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cms");
}

CmsClient::CmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cms");
}

CmsClient::~CmsClient()
{}

CmsClient::ProfileSetOutcome CmsClient::profileSet(const ProfileSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileSetOutcome(ProfileSetResult(outcome.result()));
	else
		return ProfileSetOutcome(outcome.error());
}

void CmsClient::profileSetAsync(const ProfileSetRequest& request, const ProfileSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ProfileSetOutcomeCallable CmsClient::profileSetCallable(const ProfileSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileSetOutcome()>>(
			[this, request]()
			{
			return this->profileSet(request);
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

CmsClient::DisableEventRuleOutcome CmsClient::disableEventRule(const DisableEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableEventRuleOutcome(DisableEventRuleResult(outcome.result()));
	else
		return DisableEventRuleOutcome(outcome.error());
}

void CmsClient::disableEventRuleAsync(const DisableEventRuleRequest& request, const DisableEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableEventRuleOutcomeCallable CmsClient::disableEventRuleCallable(const DisableEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableEventRuleOutcome()>>(
			[this, request]()
			{
			return this->disableEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::StartTasksOutcome CmsClient::startTasks(const StartTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTasksOutcome(StartTasksResult(outcome.result()));
	else
		return StartTasksOutcome(outcome.error());
}

void CmsClient::startTasksAsync(const StartTasksRequest& request, const StartTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::StartTasksOutcomeCallable CmsClient::startTasksCallable(const StartTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTasksOutcome()>>(
			[this, request]()
			{
			return this->startTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeEventRuleOutcome CmsClient::describeEventRule(const DescribeEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventRuleOutcome(DescribeEventRuleResult(outcome.result()));
	else
		return DescribeEventRuleOutcome(outcome.error());
}

void CmsClient::describeEventRuleAsync(const DescribeEventRuleRequest& request, const DescribeEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeEventRuleOutcomeCallable CmsClient::describeEventRuleCallable(const DescribeEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventRuleOutcome()>>(
			[this, request]()
			{
			return this->describeEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeISPAreaCityOutcome CmsClient::describeISPAreaCity(const DescribeISPAreaCityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeISPAreaCityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeISPAreaCityOutcome(DescribeISPAreaCityResult(outcome.result()));
	else
		return DescribeISPAreaCityOutcome(outcome.error());
}

void CmsClient::describeISPAreaCityAsync(const DescribeISPAreaCityRequest& request, const DescribeISPAreaCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeISPAreaCity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeISPAreaCityOutcomeCallable CmsClient::describeISPAreaCityCallable(const DescribeISPAreaCityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeISPAreaCityOutcome()>>(
			[this, request]()
			{
			return this->describeISPAreaCity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::RemoveMetricRuleTargetsOutcome CmsClient::removeMetricRuleTargets(const RemoveMetricRuleTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMetricRuleTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMetricRuleTargetsOutcome(RemoveMetricRuleTargetsResult(outcome.result()));
	else
		return RemoveMetricRuleTargetsOutcome(outcome.error());
}

void CmsClient::removeMetricRuleTargetsAsync(const RemoveMetricRuleTargetsRequest& request, const RemoveMetricRuleTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMetricRuleTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::RemoveMetricRuleTargetsOutcomeCallable CmsClient::removeMetricRuleTargetsCallable(const RemoveMetricRuleTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMetricRuleTargetsOutcome()>>(
			[this, request]()
			{
			return this->removeMetricRuleTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryCustomEventCountOutcome CmsClient::queryCustomEventCount(const QueryCustomEventCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomEventCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomEventCountOutcome(QueryCustomEventCountResult(outcome.result()));
	else
		return QueryCustomEventCountOutcome(outcome.error());
}

void CmsClient::queryCustomEventCountAsync(const QueryCustomEventCountRequest& request, const QueryCustomEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomEventCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryCustomEventCountOutcomeCallable CmsClient::queryCustomEventCountCallable(const QueryCustomEventCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomEventCountOutcome()>>(
			[this, request]()
			{
			return this->queryCustomEventCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateMyGroupInstancesOutcome CmsClient::updateMyGroupInstances(const UpdateMyGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMyGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMyGroupInstancesOutcome(UpdateMyGroupInstancesResult(outcome.result()));
	else
		return UpdateMyGroupInstancesOutcome(outcome.error());
}

void CmsClient::updateMyGroupInstancesAsync(const UpdateMyGroupInstancesRequest& request, const UpdateMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMyGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateMyGroupInstancesOutcomeCallable CmsClient::updateMyGroupInstancesCallable(const UpdateMyGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMyGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->updateMyGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListEventRulesOutcome CmsClient::listEventRules(const ListEventRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventRulesOutcome(ListEventRulesResult(outcome.result()));
	else
		return ListEventRulesOutcome(outcome.error());
}

void CmsClient::listEventRulesAsync(const ListEventRulesRequest& request, const ListEventRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListEventRulesOutcomeCallable CmsClient::listEventRulesCallable(const ListEventRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventRulesOutcome()>>(
			[this, request]()
			{
			return this->listEventRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ProfileGetOutcome CmsClient::profileGet(const ProfileGetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileGetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileGetOutcome(ProfileGetResult(outcome.result()));
	else
		return ProfileGetOutcome(outcome.error());
}

void CmsClient::profileGetAsync(const ProfileGetRequest& request, const ProfileGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileGet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ProfileGetOutcomeCallable CmsClient::profileGetCallable(const ProfileGetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileGetOutcome()>>(
			[this, request]()
			{
			return this->profileGet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutEventTargetsOutcome CmsClient::putEventTargets(const PutEventTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutEventTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutEventTargetsOutcome(PutEventTargetsResult(outcome.result()));
	else
		return PutEventTargetsOutcome(outcome.error());
}

void CmsClient::putEventTargetsAsync(const PutEventTargetsRequest& request, const PutEventTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putEventTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutEventTargetsOutcomeCallable CmsClient::putEventTargetsCallable(const PutEventTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutEventTargetsOutcome()>>(
			[this, request]()
			{
			return this->putEventTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateMonitoringTemplateOutcome CmsClient::updateMonitoringTemplate(const UpdateMonitoringTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMonitoringTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMonitoringTemplateOutcome(UpdateMonitoringTemplateResult(outcome.result()));
	else
		return UpdateMonitoringTemplateOutcome(outcome.error());
}

void CmsClient::updateMonitoringTemplateAsync(const UpdateMonitoringTemplateRequest& request, const UpdateMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMonitoringTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateMonitoringTemplateOutcomeCallable CmsClient::updateMonitoringTemplateCallable(const UpdateMonitoringTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMonitoringTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateMonitoringTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutGroupDynamicRuleOutcome CmsClient::putGroupDynamicRule(const PutGroupDynamicRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutGroupDynamicRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutGroupDynamicRuleOutcome(PutGroupDynamicRuleResult(outcome.result()));
	else
		return PutGroupDynamicRuleOutcome(outcome.error());
}

void CmsClient::putGroupDynamicRuleAsync(const PutGroupDynamicRuleRequest& request, const PutGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putGroupDynamicRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutGroupDynamicRuleOutcomeCallable CmsClient::putGroupDynamicRuleCallable(const PutGroupDynamicRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutGroupDynamicRuleOutcome()>>(
			[this, request]()
			{
			return this->putGroupDynamicRule(request);
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

CmsClient::NodeListOutcome CmsClient::nodeList(const NodeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeListOutcome(NodeListResult(outcome.result()));
	else
		return NodeListOutcome(outcome.error());
}

void CmsClient::nodeListAsync(const NodeListRequest& request, const NodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeListOutcomeCallable CmsClient::nodeListCallable(const NodeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeListOutcome()>>(
			[this, request]()
			{
			return this->nodeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryStaticsAvailabilityOutcome CmsClient::queryStaticsAvailability(const QueryStaticsAvailabilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStaticsAvailabilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStaticsAvailabilityOutcome(QueryStaticsAvailabilityResult(outcome.result()));
	else
		return QueryStaticsAvailabilityOutcome(outcome.error());
}

void CmsClient::queryStaticsAvailabilityAsync(const QueryStaticsAvailabilityRequest& request, const QueryStaticsAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStaticsAvailability(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryStaticsAvailabilityOutcomeCallable CmsClient::queryStaticsAvailabilityCallable(const QueryStaticsAvailabilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStaticsAvailabilityOutcome()>>(
			[this, request]()
			{
			return this->queryStaticsAvailability(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeProcessesOutcome CmsClient::nodeProcesses(const NodeProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeProcessesOutcome(NodeProcessesResult(outcome.result()));
	else
		return NodeProcessesOutcome(outcome.error());
}

void CmsClient::nodeProcessesAsync(const NodeProcessesRequest& request, const NodeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeProcessesOutcomeCallable CmsClient::nodeProcessesCallable(const NodeProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeProcessesOutcome()>>(
			[this, request]()
			{
			return this->nodeProcesses(request);
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

CmsClient::ListMonitoringTemplatesOutcome CmsClient::listMonitoringTemplates(const ListMonitoringTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMonitoringTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMonitoringTemplatesOutcome(ListMonitoringTemplatesResult(outcome.result()));
	else
		return ListMonitoringTemplatesOutcome(outcome.error());
}

void CmsClient::listMonitoringTemplatesAsync(const ListMonitoringTemplatesRequest& request, const ListMonitoringTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMonitoringTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListMonitoringTemplatesOutcomeCallable CmsClient::listMonitoringTemplatesCallable(const ListMonitoringTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMonitoringTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listMonitoringTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryMetricListOutcome CmsClient::queryMetricList(const QueryMetricListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricListOutcome(QueryMetricListResult(outcome.result()));
	else
		return QueryMetricListOutcome(outcome.error());
}

void CmsClient::queryMetricListAsync(const QueryMetricListRequest& request, const QueryMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMetricListOutcomeCallable CmsClient::queryMetricListCallable(const QueryMetricListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricListOutcome()>>(
			[this, request]()
			{
			return this->queryMetricList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QuerySystemEventDemoOutcome CmsClient::querySystemEventDemo(const QuerySystemEventDemoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySystemEventDemoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySystemEventDemoOutcome(QuerySystemEventDemoResult(outcome.result()));
	else
		return QuerySystemEventDemoOutcome(outcome.error());
}

void CmsClient::querySystemEventDemoAsync(const QuerySystemEventDemoRequest& request, const QuerySystemEventDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySystemEventDemo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QuerySystemEventDemoOutcomeCallable CmsClient::querySystemEventDemoCallable(const QuerySystemEventDemoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySystemEventDemoOutcome()>>(
			[this, request]()
			{
			return this->querySystemEventDemo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableAlarmOutcome CmsClient::disableAlarm(const DisableAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAlarmOutcome(DisableAlarmResult(outcome.result()));
	else
		return DisableAlarmOutcome(outcome.error());
}

void CmsClient::disableAlarmAsync(const DisableAlarmRequest& request, const DisableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableAlarmOutcomeCallable CmsClient::disableAlarmCallable(const DisableAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAlarmOutcome()>>(
			[this, request]()
			{
			return this->disableAlarm(request);
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

CmsClient::QueryMetricLastOutcome CmsClient::queryMetricLast(const QueryMetricLastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricLastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricLastOutcome(QueryMetricLastResult(outcome.result()));
	else
		return QueryMetricLastOutcome(outcome.error());
}

void CmsClient::queryMetricLastAsync(const QueryMetricLastRequest& request, const QueryMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricLast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMetricLastOutcomeCallable CmsClient::queryMetricLastCallable(const QueryMetricLastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricLastOutcome()>>(
			[this, request]()
			{
			return this->queryMetricLast(request);
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

CmsClient::QuerySystemEventHistogramOutcome CmsClient::querySystemEventHistogram(const QuerySystemEventHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySystemEventHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySystemEventHistogramOutcome(QuerySystemEventHistogramResult(outcome.result()));
	else
		return QuerySystemEventHistogramOutcome(outcome.error());
}

void CmsClient::querySystemEventHistogramAsync(const QuerySystemEventHistogramRequest& request, const QuerySystemEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySystemEventHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QuerySystemEventHistogramOutcomeCallable CmsClient::querySystemEventHistogramCallable(const QuerySystemEventHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySystemEventHistogramOutcome()>>(
			[this, request]()
			{
			return this->querySystemEventHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteEventRuleOutcome CmsClient::deleteEventRule(const DeleteEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventRuleOutcome(DeleteEventRuleResult(outcome.result()));
	else
		return DeleteEventRuleOutcome(outcome.error());
}

void CmsClient::deleteEventRuleAsync(const DeleteEventRuleRequest& request, const DeleteEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteEventRuleOutcomeCallable CmsClient::deleteEventRuleCallable(const DeleteEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteEventTargetsOutcome CmsClient::deleteEventTargets(const DeleteEventTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventTargetsOutcome(DeleteEventTargetsResult(outcome.result()));
	else
		return DeleteEventTargetsOutcome(outcome.error());
}

void CmsClient::deleteEventTargetsAsync(const DeleteEventTargetsRequest& request, const DeleteEventTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteEventTargetsOutcomeCallable CmsClient::deleteEventTargetsCallable(const DeleteEventTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventTargetsOutcome()>>(
			[this, request]()
			{
			return this->deleteEventTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigUnhealthyOutcome CmsClient::taskConfigUnhealthy(const TaskConfigUnhealthyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigUnhealthyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigUnhealthyOutcome(TaskConfigUnhealthyResult(outcome.result()));
	else
		return TaskConfigUnhealthyOutcome(outcome.error());
}

void CmsClient::taskConfigUnhealthyAsync(const TaskConfigUnhealthyRequest& request, const TaskConfigUnhealthyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigUnhealthy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigUnhealthyOutcomeCallable CmsClient::taskConfigUnhealthyCallable(const TaskConfigUnhealthyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigUnhealthyOutcome()>>(
			[this, request]()
			{
			return this->taskConfigUnhealthy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListProductOfActiveAlertOutcome CmsClient::listProductOfActiveAlert(const ListProductOfActiveAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductOfActiveAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductOfActiveAlertOutcome(ListProductOfActiveAlertResult(outcome.result()));
	else
		return ListProductOfActiveAlertOutcome(outcome.error());
}

void CmsClient::listProductOfActiveAlertAsync(const ListProductOfActiveAlertRequest& request, const ListProductOfActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductOfActiveAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListProductOfActiveAlertOutcomeCallable CmsClient::listProductOfActiveAlertCallable(const ListProductOfActiveAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductOfActiveAlertOutcome()>>(
			[this, request]()
			{
			return this->listProductOfActiveAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMonitoringTemplateOutcome CmsClient::createMonitoringTemplate(const CreateMonitoringTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitoringTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitoringTemplateOutcome(CreateMonitoringTemplateResult(outcome.result()));
	else
		return CreateMonitoringTemplateOutcome(outcome.error());
}

void CmsClient::createMonitoringTemplateAsync(const CreateMonitoringTemplateRequest& request, const CreateMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitoringTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMonitoringTemplateOutcomeCallable CmsClient::createMonitoringTemplateCallable(const CreateMonitoringTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitoringTemplateOutcome()>>(
			[this, request]()
			{
			return this->createMonitoringTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateMyGroupAlertOutcome CmsClient::updateMyGroupAlert(const UpdateMyGroupAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMyGroupAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMyGroupAlertOutcome(UpdateMyGroupAlertResult(outcome.result()));
	else
		return UpdateMyGroupAlertOutcome(outcome.error());
}

void CmsClient::updateMyGroupAlertAsync(const UpdateMyGroupAlertRequest& request, const UpdateMyGroupAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMyGroupAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateMyGroupAlertOutcomeCallable CmsClient::updateMyGroupAlertCallable(const UpdateMyGroupAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMyGroupAlertOutcome()>>(
			[this, request]()
			{
			return this->updateMyGroupAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMyGroupsOutcome CmsClient::createMyGroups(const CreateMyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMyGroupsOutcome(CreateMyGroupsResult(outcome.result()));
	else
		return CreateMyGroupsOutcome(outcome.error());
}

void CmsClient::createMyGroupsAsync(const CreateMyGroupsRequest& request, const CreateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMyGroupsOutcomeCallable CmsClient::createMyGroupsCallable(const CreateMyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMyGroupsOutcome()>>(
			[this, request]()
			{
			return this->createMyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateMyGroupAlertBatchOutcome CmsClient::createMyGroupAlertBatch(const CreateMyGroupAlertBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMyGroupAlertBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMyGroupAlertBatchOutcome(CreateMyGroupAlertBatchResult(outcome.result()));
	else
		return CreateMyGroupAlertBatchOutcome(outcome.error());
}

void CmsClient::createMyGroupAlertBatchAsync(const CreateMyGroupAlertBatchRequest& request, const CreateMyGroupAlertBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMyGroupAlertBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateMyGroupAlertBatchOutcomeCallable CmsClient::createMyGroupAlertBatchCallable(const CreateMyGroupAlertBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMyGroupAlertBatchOutcome()>>(
			[this, request]()
			{
			return this->createMyGroupAlertBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeTasksOutcome CmsClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void CmsClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeTasksOutcomeCallable CmsClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListActiveAlertRuleOutcome CmsClient::listActiveAlertRule(const ListActiveAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActiveAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActiveAlertRuleOutcome(ListActiveAlertRuleResult(outcome.result()));
	else
		return ListActiveAlertRuleOutcome(outcome.error());
}

void CmsClient::listActiveAlertRuleAsync(const ListActiveAlertRuleRequest& request, const ListActiveAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActiveAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListActiveAlertRuleOutcomeCallable CmsClient::listActiveAlertRuleCallable(const ListActiveAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActiveAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->listActiveAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteNotifyPolicyOutcome CmsClient::deleteNotifyPolicy(const DeleteNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNotifyPolicyOutcome(DeleteNotifyPolicyResult(outcome.result()));
	else
		return DeleteNotifyPolicyOutcome(outcome.error());
}

void CmsClient::deleteNotifyPolicyAsync(const DeleteNotifyPolicyRequest& request, const DeleteNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteNotifyPolicyOutcomeCallable CmsClient::deleteNotifyPolicyCallable(const DeleteNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryMetricTopOutcome CmsClient::queryMetricTop(const QueryMetricTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricTopOutcome(QueryMetricTopResult(outcome.result()));
	else
		return QueryMetricTopOutcome(outcome.error());
}

void CmsClient::queryMetricTopAsync(const QueryMetricTopRequest& request, const QueryMetricTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMetricTopOutcomeCallable CmsClient::queryMetricTopCallable(const QueryMetricTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricTopOutcome()>>(
			[this, request]()
			{
			return this->queryMetricTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::AccessKeyGetOutcome CmsClient::accessKeyGet(const AccessKeyGetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AccessKeyGetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AccessKeyGetOutcome(AccessKeyGetResult(outcome.result()));
	else
		return AccessKeyGetOutcome(outcome.error());
}

void CmsClient::accessKeyGetAsync(const AccessKeyGetRequest& request, const AccessKeyGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, accessKeyGet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::AccessKeyGetOutcomeCallable CmsClient::accessKeyGetCallable(const AccessKeyGetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AccessKeyGetOutcome()>>(
			[this, request]()
			{
			return this->accessKeyGet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryTaskConfigOutcome CmsClient::queryTaskConfig(const QueryTaskConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskConfigOutcome(QueryTaskConfigResult(outcome.result()));
	else
		return QueryTaskConfigOutcome(outcome.error());
}

void CmsClient::queryTaskConfigAsync(const QueryTaskConfigRequest& request, const QueryTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryTaskConfigOutcomeCallable CmsClient::queryTaskConfigCallable(const QueryTaskConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskConfigOutcome()>>(
			[this, request]()
			{
			return this->queryTaskConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryProjectMetaOutcome CmsClient::queryProjectMeta(const QueryProjectMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProjectMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProjectMetaOutcome(QueryProjectMetaResult(outcome.result()));
	else
		return QueryProjectMetaOutcome(outcome.error());
}

void CmsClient::queryProjectMetaAsync(const QueryProjectMetaRequest& request, const QueryProjectMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProjectMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryProjectMetaOutcomeCallable CmsClient::queryProjectMetaCallable(const QueryProjectMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProjectMetaOutcome()>>(
			[this, request]()
			{
			return this->queryProjectMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryMetricDataOutcome CmsClient::queryMetricData(const QueryMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricDataOutcome(QueryMetricDataResult(outcome.result()));
	else
		return QueryMetricDataOutcome(outcome.error());
}

void CmsClient::queryMetricDataAsync(const QueryMetricDataRequest& request, const QueryMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMetricDataOutcomeCallable CmsClient::queryMetricDataCallable(const QueryMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricDataOutcome()>>(
			[this, request]()
			{
			return this->queryMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DisableActiveAlertOutcome CmsClient::disableActiveAlert(const DisableActiveAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableActiveAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableActiveAlertOutcome(DisableActiveAlertResult(outcome.result()));
	else
		return DisableActiveAlertOutcome(outcome.error());
}

void CmsClient::disableActiveAlertAsync(const DisableActiveAlertRequest& request, const DisableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableActiveAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableActiveAlertOutcomeCallable CmsClient::disableActiveAlertCallable(const DisableActiveAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableActiveAlertOutcome()>>(
			[this, request]()
			{
			return this->disableActiveAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeSiteMonitorISPAreaCityOutcome CmsClient::describeSiteMonitorISPAreaCity(const DescribeSiteMonitorISPAreaCityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSiteMonitorISPAreaCityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSiteMonitorISPAreaCityOutcome(DescribeSiteMonitorISPAreaCityResult(outcome.result()));
	else
		return DescribeSiteMonitorISPAreaCityOutcome(outcome.error());
}

void CmsClient::describeSiteMonitorISPAreaCityAsync(const DescribeSiteMonitorISPAreaCityRequest& request, const DescribeSiteMonitorISPAreaCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSiteMonitorISPAreaCity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeSiteMonitorISPAreaCityOutcomeCallable CmsClient::describeSiteMonitorISPAreaCityCallable(const DescribeSiteMonitorISPAreaCityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSiteMonitorISPAreaCityOutcome()>>(
			[this, request]()
			{
			return this->describeSiteMonitorISPAreaCity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutEventOutcome CmsClient::putEvent(const PutEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutEventOutcome(PutEventResult(outcome.result()));
	else
		return PutEventOutcome(outcome.error());
}

void CmsClient::putEventAsync(const PutEventRequest& request, const PutEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutEventOutcomeCallable CmsClient::putEventCallable(const PutEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutEventOutcome()>>(
			[this, request]()
			{
			return this->putEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryCustomEventHistogramOutcome CmsClient::queryCustomEventHistogram(const QueryCustomEventHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomEventHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomEventHistogramOutcome(QueryCustomEventHistogramResult(outcome.result()));
	else
		return QueryCustomEventHistogramOutcome(outcome.error());
}

void CmsClient::queryCustomEventHistogramAsync(const QueryCustomEventHistogramRequest& request, const QueryCustomEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomEventHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryCustomEventHistogramOutcomeCallable CmsClient::queryCustomEventHistogramCallable(const QueryCustomEventHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomEventHistogramOutcome()>>(
			[this, request]()
			{
			return this->queryCustomEventHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListAlarmHistoryOutcome CmsClient::listAlarmHistory(const ListAlarmHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmHistoryOutcome(ListAlarmHistoryResult(outcome.result()));
	else
		return ListAlarmHistoryOutcome(outcome.error());
}

void CmsClient::listAlarmHistoryAsync(const ListAlarmHistoryRequest& request, const ListAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListAlarmHistoryOutcomeCallable CmsClient::listAlarmHistoryCallable(const ListAlarmHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmHistoryOutcome()>>(
			[this, request]()
			{
			return this->listAlarmHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteTasksOutcome CmsClient::deleteTasks(const DeleteTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTasksOutcome(DeleteTasksResult(outcome.result()));
	else
		return DeleteTasksOutcome(outcome.error());
}

void CmsClient::deleteTasksAsync(const DeleteTasksRequest& request, const DeleteTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteTasksOutcomeCallable CmsClient::deleteTasksCallable(const DeleteTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTasksOutcome()>>(
			[this, request]()
			{
			return this->deleteTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigModifyOutcome CmsClient::taskConfigModify(const TaskConfigModifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigModifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigModifyOutcome(TaskConfigModifyResult(outcome.result()));
	else
		return TaskConfigModifyOutcome(outcome.error());
}

void CmsClient::taskConfigModifyAsync(const TaskConfigModifyRequest& request, const TaskConfigModifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigModify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigModifyOutcomeCallable CmsClient::taskConfigModifyCallable(const TaskConfigModifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigModifyOutcome()>>(
			[this, request]()
			{
			return this->taskConfigModify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::GetMyGroupsOutcome CmsClient::getMyGroups(const GetMyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMyGroupsOutcome(GetMyGroupsResult(outcome.result()));
	else
		return GetMyGroupsOutcome(outcome.error());
}

void CmsClient::getMyGroupsAsync(const GetMyGroupsRequest& request, const GetMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::GetMyGroupsOutcomeCallable CmsClient::getMyGroupsCallable(const GetMyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMyGroupsOutcome()>>(
			[this, request]()
			{
			return this->getMyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryTaskMonitorDataOutcome CmsClient::queryTaskMonitorData(const QueryTaskMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskMonitorDataOutcome(QueryTaskMonitorDataResult(outcome.result()));
	else
		return QueryTaskMonitorDataOutcome(outcome.error());
}

void CmsClient::queryTaskMonitorDataAsync(const QueryTaskMonitorDataRequest& request, const QueryTaskMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryTaskMonitorDataOutcomeCallable CmsClient::queryTaskMonitorDataCallable(const QueryTaskMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->queryTaskMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::StopTasksOutcome CmsClient::stopTasks(const StopTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTasksOutcome(StopTasksResult(outcome.result()));
	else
		return StopTasksOutcome(outcome.error());
}

void CmsClient::stopTasksAsync(const StopTasksRequest& request, const StopTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::StopTasksOutcomeCallable CmsClient::stopTasksCallable(const StopTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTasksOutcome()>>(
			[this, request]()
			{
			return this->stopTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateAlarmOutcome CmsClient::updateAlarm(const UpdateAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAlarmOutcome(UpdateAlarmResult(outcome.result()));
	else
		return UpdateAlarmOutcome(outcome.error());
}

void CmsClient::updateAlarmAsync(const UpdateAlarmRequest& request, const UpdateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateAlarmOutcomeCallable CmsClient::updateAlarmCallable(const UpdateAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAlarmOutcome()>>(
			[this, request]()
			{
			return this->updateAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ModifyTaskOutcome CmsClient::modifyTask(const ModifyTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTaskOutcome(ModifyTaskResult(outcome.result()));
	else
		return ModifyTaskOutcome(outcome.error());
}

void CmsClient::modifyTaskAsync(const ModifyTaskRequest& request, const ModifyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ModifyTaskOutcomeCallable CmsClient::modifyTaskCallable(const ModifyTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigDeleteOutcome CmsClient::taskConfigDelete(const TaskConfigDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigDeleteOutcome(TaskConfigDeleteResult(outcome.result()));
	else
		return TaskConfigDeleteOutcome(outcome.error());
}

void CmsClient::taskConfigDeleteAsync(const TaskConfigDeleteRequest& request, const TaskConfigDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigDeleteOutcomeCallable CmsClient::taskConfigDeleteCallable(const TaskConfigDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigDeleteOutcome()>>(
			[this, request]()
			{
			return this->taskConfigDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeProcessCreateOutcome CmsClient::nodeProcessCreate(const NodeProcessCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeProcessCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeProcessCreateOutcome(NodeProcessCreateResult(outcome.result()));
	else
		return NodeProcessCreateOutcome(outcome.error());
}

void CmsClient::nodeProcessCreateAsync(const NodeProcessCreateRequest& request, const NodeProcessCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeProcessCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeProcessCreateOutcomeCallable CmsClient::nodeProcessCreateCallable(const NodeProcessCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeProcessCreateOutcome()>>(
			[this, request]()
			{
			return this->nodeProcessCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryCustomEventDetailOutcome CmsClient::queryCustomEventDetail(const QueryCustomEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomEventDetailOutcome(QueryCustomEventDetailResult(outcome.result()));
	else
		return QueryCustomEventDetailOutcome(outcome.error());
}

void CmsClient::queryCustomEventDetailAsync(const QueryCustomEventDetailRequest& request, const QueryCustomEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryCustomEventDetailOutcomeCallable CmsClient::queryCustomEventDetailCallable(const QueryCustomEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomEventDetailOutcome()>>(
			[this, request]()
			{
			return this->queryCustomEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigEnableOutcome CmsClient::taskConfigEnable(const TaskConfigEnableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigEnableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigEnableOutcome(TaskConfigEnableResult(outcome.result()));
	else
		return TaskConfigEnableOutcome(outcome.error());
}

void CmsClient::taskConfigEnableAsync(const TaskConfigEnableRequest& request, const TaskConfigEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigEnable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigEnableOutcomeCallable CmsClient::taskConfigEnableCallable(const TaskConfigEnableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigEnableOutcome()>>(
			[this, request]()
			{
			return this->taskConfigEnable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryMetricMetaOutcome CmsClient::queryMetricMeta(const QueryMetricMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricMetaOutcome(QueryMetricMetaResult(outcome.result()));
	else
		return QueryMetricMetaOutcome(outcome.error());
}

void CmsClient::queryMetricMetaAsync(const QueryMetricMetaRequest& request, const QueryMetricMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMetricMetaOutcomeCallable CmsClient::queryMetricMetaCallable(const QueryMetricMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricMetaOutcome()>>(
			[this, request]()
			{
			return this->queryMetricMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigCreateOutcome CmsClient::taskConfigCreate(const TaskConfigCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigCreateOutcome(TaskConfigCreateResult(outcome.result()));
	else
		return TaskConfigCreateOutcome(outcome.error());
}

void CmsClient::taskConfigCreateAsync(const TaskConfigCreateRequest& request, const TaskConfigCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigCreateOutcomeCallable CmsClient::taskConfigCreateCallable(const TaskConfigCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigCreateOutcome()>>(
			[this, request]()
			{
			return this->taskConfigCreate(request);
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

CmsClient::GetNotifyPolicyOutcome CmsClient::getNotifyPolicy(const GetNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNotifyPolicyOutcome(GetNotifyPolicyResult(outcome.result()));
	else
		return GetNotifyPolicyOutcome(outcome.error());
}

void CmsClient::getNotifyPolicyAsync(const GetNotifyPolicyRequest& request, const GetNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::GetNotifyPolicyOutcomeCallable CmsClient::getNotifyPolicyCallable(const GetNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->getNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeUninstallOutcome CmsClient::nodeUninstall(const NodeUninstallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeUninstallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeUninstallOutcome(NodeUninstallResult(outcome.result()));
	else
		return NodeUninstallOutcome(outcome.error());
}

void CmsClient::nodeUninstallAsync(const NodeUninstallRequest& request, const NodeUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeUninstall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeUninstallOutcomeCallable CmsClient::nodeUninstallCallable(const NodeUninstallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeUninstallOutcome()>>(
			[this, request]()
			{
			return this->nodeUninstall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryErrorDistributionOutcome CmsClient::queryErrorDistribution(const QueryErrorDistributionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryErrorDistributionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryErrorDistributionOutcome(QueryErrorDistributionResult(outcome.result()));
	else
		return QueryErrorDistributionOutcome(outcome.error());
}

void CmsClient::queryErrorDistributionAsync(const QueryErrorDistributionRequest& request, const QueryErrorDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryErrorDistribution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryErrorDistributionOutcomeCallable CmsClient::queryErrorDistributionCallable(const QueryErrorDistributionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryErrorDistributionOutcome()>>(
			[this, request]()
			{
			return this->queryErrorDistribution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableEventRuleOutcome CmsClient::enableEventRule(const EnableEventRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableEventRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableEventRuleOutcome(EnableEventRuleResult(outcome.result()));
	else
		return EnableEventRuleOutcome(outcome.error());
}

void CmsClient::enableEventRuleAsync(const EnableEventRuleRequest& request, const EnableEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableEventRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableEventRuleOutcomeCallable CmsClient::enableEventRuleCallable(const EnableEventRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableEventRuleOutcome()>>(
			[this, request]()
			{
			return this->enableEventRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListEventTargetsByRuleOutcome CmsClient::listEventTargetsByRule(const ListEventTargetsByRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventTargetsByRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventTargetsByRuleOutcome(ListEventTargetsByRuleResult(outcome.result()));
	else
		return ListEventTargetsByRuleOutcome(outcome.error());
}

void CmsClient::listEventTargetsByRuleAsync(const ListEventTargetsByRuleRequest& request, const ListEventTargetsByRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventTargetsByRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListEventTargetsByRuleOutcomeCallable CmsClient::listEventTargetsByRuleCallable(const ListEventTargetsByRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventTargetsByRuleOutcome()>>(
			[this, request]()
			{
			return this->listEventTargetsByRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryMonitorDataOutcome CmsClient::queryMonitorData(const QueryMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonitorDataOutcome(QueryMonitorDataResult(outcome.result()));
	else
		return QueryMonitorDataOutcome(outcome.error());
}

void CmsClient::queryMonitorDataAsync(const QueryMonitorDataRequest& request, const QueryMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryMonitorDataOutcomeCallable CmsClient::queryMonitorDataCallable(const QueryMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->queryMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeTaskDetailOutcome CmsClient::describeTaskDetail(const DescribeTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskDetailOutcome(DescribeTaskDetailResult(outcome.result()));
	else
		return DescribeTaskDetailOutcome(outcome.error());
}

void CmsClient::describeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeTaskDetailOutcomeCallable CmsClient::describeTaskDetailCallable(const DescribeTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ApplyTemplateOutcome CmsClient::applyTemplate(const ApplyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyTemplateOutcome(ApplyTemplateResult(outcome.result()));
	else
		return ApplyTemplateOutcome(outcome.error());
}

void CmsClient::applyTemplateAsync(const ApplyTemplateRequest& request, const ApplyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ApplyTemplateOutcomeCallable CmsClient::applyTemplateCallable(const ApplyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyTemplateOutcome()>>(
			[this, request]()
			{
			return this->applyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryCustomMetricListOutcome CmsClient::queryCustomMetricList(const QueryCustomMetricListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomMetricListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomMetricListOutcome(QueryCustomMetricListResult(outcome.result()));
	else
		return QueryCustomMetricListOutcome(outcome.error());
}

void CmsClient::queryCustomMetricListAsync(const QueryCustomMetricListRequest& request, const QueryCustomMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomMetricList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryCustomMetricListOutcomeCallable CmsClient::queryCustomMetricListCallable(const QueryCustomMetricListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomMetricListOutcome()>>(
			[this, request]()
			{
			return this->queryCustomMetricList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableActiveAlertOutcome CmsClient::enableActiveAlert(const EnableActiveAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableActiveAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableActiveAlertOutcome(EnableActiveAlertResult(outcome.result()));
	else
		return EnableActiveAlertOutcome(outcome.error());
}

void CmsClient::enableActiveAlertAsync(const EnableActiveAlertRequest& request, const EnableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableActiveAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableActiveAlertOutcomeCallable CmsClient::enableActiveAlertCallable(const EnableActiveAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableActiveAlertOutcome()>>(
			[this, request]()
			{
			return this->enableActiveAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QuerySystemEventDetailOutcome CmsClient::querySystemEventDetail(const QuerySystemEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySystemEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySystemEventDetailOutcome(QuerySystemEventDetailResult(outcome.result()));
	else
		return QuerySystemEventDetailOutcome(outcome.error());
}

void CmsClient::querySystemEventDetailAsync(const QuerySystemEventDetailRequest& request, const QuerySystemEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySystemEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QuerySystemEventDetailOutcomeCallable CmsClient::querySystemEventDetailCallable(const QuerySystemEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySystemEventDetailOutcome()>>(
			[this, request]()
			{
			return this->querySystemEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateNotifyPolicyOutcome CmsClient::createNotifyPolicy(const CreateNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNotifyPolicyOutcome(CreateNotifyPolicyResult(outcome.result()));
	else
		return CreateNotifyPolicyOutcome(outcome.error());
}

void CmsClient::createNotifyPolicyAsync(const CreateNotifyPolicyRequest& request, const CreateNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateNotifyPolicyOutcomeCallable CmsClient::createNotifyPolicyCallable(const CreateNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->createNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteAlarmOutcome CmsClient::deleteAlarm(const DeleteAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlarmOutcome(DeleteAlarmResult(outcome.result()));
	else
		return DeleteAlarmOutcome(outcome.error());
}

void CmsClient::deleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteAlarmOutcomeCallable CmsClient::deleteAlarmCallable(const DeleteAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlarmOutcome()>>(
			[this, request]()
			{
			return this->deleteAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::TaskConfigListOutcome CmsClient::taskConfigList(const TaskConfigListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskConfigListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskConfigListOutcome(TaskConfigListResult(outcome.result()));
	else
		return TaskConfigListOutcome(outcome.error());
}

void CmsClient::taskConfigListAsync(const TaskConfigListRequest& request, const TaskConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskConfigList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::TaskConfigListOutcomeCallable CmsClient::taskConfigListCallable(const TaskConfigListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskConfigListOutcome()>>(
			[this, request]()
			{
			return this->taskConfigList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::GetMonitoringTemplateOutcome CmsClient::getMonitoringTemplate(const GetMonitoringTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonitoringTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonitoringTemplateOutcome(GetMonitoringTemplateResult(outcome.result()));
	else
		return GetMonitoringTemplateOutcome(outcome.error());
}

void CmsClient::getMonitoringTemplateAsync(const GetMonitoringTemplateRequest& request, const GetMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonitoringTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::GetMonitoringTemplateOutcomeCallable CmsClient::getMonitoringTemplateCallable(const GetMonitoringTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonitoringTemplateOutcome()>>(
			[this, request]()
			{
			return this->getMonitoringTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListMyGroupCategoriesOutcome CmsClient::listMyGroupCategories(const ListMyGroupCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMyGroupCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMyGroupCategoriesOutcome(ListMyGroupCategoriesResult(outcome.result()));
	else
		return ListMyGroupCategoriesOutcome(outcome.error());
}

void CmsClient::listMyGroupCategoriesAsync(const ListMyGroupCategoriesRequest& request, const ListMyGroupCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMyGroupCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListMyGroupCategoriesOutcomeCallable CmsClient::listMyGroupCategoriesCallable(const ListMyGroupCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMyGroupCategoriesOutcome()>>(
			[this, request]()
			{
			return this->listMyGroupCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateTaskOutcome CmsClient::createTask(const CreateTaskRequest &request) const
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

void CmsClient::createTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateTaskOutcomeCallable CmsClient::createTaskCallable(const CreateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
			[this, request]()
			{
			return this->createTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteGroupDynamicRuleOutcome CmsClient::deleteGroupDynamicRule(const DeleteGroupDynamicRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupDynamicRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupDynamicRuleOutcome(DeleteGroupDynamicRuleResult(outcome.result()));
	else
		return DeleteGroupDynamicRuleOutcome(outcome.error());
}

void CmsClient::deleteGroupDynamicRuleAsync(const DeleteGroupDynamicRuleRequest& request, const DeleteGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupDynamicRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteGroupDynamicRuleOutcomeCallable CmsClient::deleteGroupDynamicRuleCallable(const DeleteGroupDynamicRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupDynamicRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupDynamicRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListMyGroupInstancesDetailsOutcome CmsClient::listMyGroupInstancesDetails(const ListMyGroupInstancesDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMyGroupInstancesDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMyGroupInstancesDetailsOutcome(ListMyGroupInstancesDetailsResult(outcome.result()));
	else
		return ListMyGroupInstancesDetailsOutcome(outcome.error());
}

void CmsClient::listMyGroupInstancesDetailsAsync(const ListMyGroupInstancesDetailsRequest& request, const ListMyGroupInstancesDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMyGroupInstancesDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListMyGroupInstancesDetailsOutcomeCallable CmsClient::listMyGroupInstancesDetailsCallable(const ListMyGroupInstancesDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMyGroupInstancesDetailsOutcome()>>(
			[this, request]()
			{
			return this->listMyGroupInstancesDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMyGroupsOutcome CmsClient::deleteMyGroups(const DeleteMyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMyGroupsOutcome(DeleteMyGroupsResult(outcome.result()));
	else
		return DeleteMyGroupsOutcome(outcome.error());
}

void CmsClient::deleteMyGroupsAsync(const DeleteMyGroupsRequest& request, const DeleteMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMyGroupsOutcomeCallable CmsClient::deleteMyGroupsCallable(const DeleteMyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMyGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteMyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlarmHistoryOutcome CmsClient::describeAlarmHistory(const DescribeAlarmHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmHistoryOutcome(DescribeAlarmHistoryResult(outcome.result()));
	else
		return DescribeAlarmHistoryOutcome(outcome.error());
}

void CmsClient::describeAlarmHistoryAsync(const DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlarmHistoryOutcomeCallable CmsClient::describeAlarmHistoryCallable(const DescribeAlarmHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ApplyMonitoringTemplateOutcome CmsClient::applyMonitoringTemplate(const ApplyMonitoringTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyMonitoringTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyMonitoringTemplateOutcome(ApplyMonitoringTemplateResult(outcome.result()));
	else
		return ApplyMonitoringTemplateOutcome(outcome.error());
}

void CmsClient::applyMonitoringTemplateAsync(const ApplyMonitoringTemplateRequest& request, const ApplyMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyMonitoringTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ApplyMonitoringTemplateOutcomeCallable CmsClient::applyMonitoringTemplateCallable(const ApplyMonitoringTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyMonitoringTemplateOutcome()>>(
			[this, request]()
			{
			return this->applyMonitoringTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeStatusOutcome CmsClient::nodeStatus(const NodeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeStatusOutcome(NodeStatusResult(outcome.result()));
	else
		return NodeStatusOutcome(outcome.error());
}

void CmsClient::nodeStatusAsync(const NodeStatusRequest& request, const NodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeStatusOutcomeCallable CmsClient::nodeStatusCallable(const NodeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeStatusOutcome()>>(
			[this, request]()
			{
			return this->nodeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlarmsOutcome CmsClient::describeAlarms(const DescribeAlarmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmsOutcome(DescribeAlarmsResult(outcome.result()));
	else
		return DescribeAlarmsOutcome(outcome.error());
}

void CmsClient::describeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlarmsOutcomeCallable CmsClient::describeAlarmsCallable(const DescribeAlarmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
			[this, request]()
			{
			return this->describeAlarms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMyGroupInstancesOutcome CmsClient::deleteMyGroupInstances(const DeleteMyGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMyGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMyGroupInstancesOutcome(DeleteMyGroupInstancesResult(outcome.result()));
	else
		return DeleteMyGroupInstancesOutcome(outcome.error());
}

void CmsClient::deleteMyGroupInstancesAsync(const DeleteMyGroupInstancesRequest& request, const DeleteMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMyGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMyGroupInstancesOutcomeCallable CmsClient::deleteMyGroupInstancesCallable(const DeleteMyGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMyGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteMyGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeAlarmsForResourcesOutcome CmsClient::describeAlarmsForResources(const DescribeAlarmsForResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmsForResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmsForResourcesOutcome(DescribeAlarmsForResourcesResult(outcome.result()));
	else
		return DescribeAlarmsForResourcesOutcome(outcome.error());
}

void CmsClient::describeAlarmsForResourcesAsync(const DescribeAlarmsForResourcesRequest& request, const DescribeAlarmsForResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmsForResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeAlarmsForResourcesOutcomeCallable CmsClient::describeAlarmsForResourcesCallable(const DescribeAlarmsForResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmsForResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmsForResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryStaticsResponseTimeOutcome CmsClient::queryStaticsResponseTime(const QueryStaticsResponseTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStaticsResponseTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStaticsResponseTimeOutcome(QueryStaticsResponseTimeResult(outcome.result()));
	else
		return QueryStaticsResponseTimeOutcome(outcome.error());
}

void CmsClient::queryStaticsResponseTimeAsync(const QueryStaticsResponseTimeRequest& request, const QueryStaticsResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStaticsResponseTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryStaticsResponseTimeOutcomeCallable CmsClient::queryStaticsResponseTimeCallable(const QueryStaticsResponseTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStaticsResponseTimeOutcome()>>(
			[this, request]()
			{
			return this->queryStaticsResponseTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::CreateAlarmOutcome CmsClient::createAlarm(const CreateAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlarmOutcome(CreateAlarmResult(outcome.result()));
	else
		return CreateAlarmOutcome(outcome.error());
}

void CmsClient::createAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::CreateAlarmOutcomeCallable CmsClient::createAlarmCallable(const CreateAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlarmOutcome()>>(
			[this, request]()
			{
			return this->createAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListMyGroupsOutcome CmsClient::listMyGroups(const ListMyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMyGroupsOutcome(ListMyGroupsResult(outcome.result()));
	else
		return ListMyGroupsOutcome(outcome.error());
}

void CmsClient::listMyGroupsAsync(const ListMyGroupsRequest& request, const ListMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListMyGroupsOutcomeCallable CmsClient::listMyGroupsCallable(const ListMyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMyGroupsOutcome()>>(
			[this, request]()
			{
			return this->listMyGroups(request);
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

CmsClient::AddMyGroupInstancesOutcome CmsClient::addMyGroupInstances(const AddMyGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMyGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMyGroupInstancesOutcome(AddMyGroupInstancesResult(outcome.result()));
	else
		return AddMyGroupInstancesOutcome(outcome.error());
}

void CmsClient::addMyGroupInstancesAsync(const AddMyGroupInstancesRequest& request, const AddMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMyGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::AddMyGroupInstancesOutcomeCallable CmsClient::addMyGroupInstancesCallable(const AddMyGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMyGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->addMyGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeProcessDeleteOutcome CmsClient::nodeProcessDelete(const NodeProcessDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeProcessDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeProcessDeleteOutcome(NodeProcessDeleteResult(outcome.result()));
	else
		return NodeProcessDeleteOutcome(outcome.error());
}

void CmsClient::nodeProcessDeleteAsync(const NodeProcessDeleteRequest& request, const NodeProcessDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeProcessDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeProcessDeleteOutcomeCallable CmsClient::nodeProcessDeleteCallable(const NodeProcessDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeProcessDeleteOutcome()>>(
			[this, request]()
			{
			return this->nodeProcessDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateMyGroupsOutcome CmsClient::updateMyGroups(const UpdateMyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMyGroupsOutcome(UpdateMyGroupsResult(outcome.result()));
	else
		return UpdateMyGroupsOutcome(outcome.error());
}

void CmsClient::updateMyGroupsAsync(const UpdateMyGroupsRequest& request, const UpdateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateMyGroupsOutcomeCallable CmsClient::updateMyGroupsCallable(const UpdateMyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMyGroupsOutcome()>>(
			[this, request]()
			{
			return this->updateMyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QuerySystemEventCountOutcome CmsClient::querySystemEventCount(const QuerySystemEventCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySystemEventCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySystemEventCountOutcome(QuerySystemEventCountResult(outcome.result()));
	else
		return QuerySystemEventCountOutcome(outcome.error());
}

void CmsClient::querySystemEventCountAsync(const QuerySystemEventCountRequest& request, const QuerySystemEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySystemEventCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QuerySystemEventCountOutcomeCallable CmsClient::querySystemEventCountCallable(const QuerySystemEventCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySystemEventCountOutcome()>>(
			[this, request]()
			{
			return this->querySystemEventCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListMyGroupInstancesOutcome CmsClient::listMyGroupInstances(const ListMyGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMyGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMyGroupInstancesOutcome(ListMyGroupInstancesResult(outcome.result()));
	else
		return ListMyGroupInstancesOutcome(outcome.error());
}

void CmsClient::listMyGroupInstancesAsync(const ListMyGroupInstancesRequest& request, const ListMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMyGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListMyGroupInstancesOutcomeCallable CmsClient::listMyGroupInstancesCallable(const ListMyGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMyGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->listMyGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::GetContactsOutcome CmsClient::getContacts(const GetContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContactsOutcome(GetContactsResult(outcome.result()));
	else
		return GetContactsOutcome(outcome.error());
}

void CmsClient::getContactsAsync(const GetContactsRequest& request, const GetContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::GetContactsOutcomeCallable CmsClient::getContactsCallable(const GetContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContactsOutcome()>>(
			[this, request]()
			{
			return this->getContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::UpdateMyGroupMembersOutcome CmsClient::updateMyGroupMembers(const UpdateMyGroupMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMyGroupMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMyGroupMembersOutcome(UpdateMyGroupMembersResult(outcome.result()));
	else
		return UpdateMyGroupMembersOutcome(outcome.error());
}

void CmsClient::updateMyGroupMembersAsync(const UpdateMyGroupMembersRequest& request, const UpdateMyGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMyGroupMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::UpdateMyGroupMembersOutcomeCallable CmsClient::updateMyGroupMembersCallable(const UpdateMyGroupMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMyGroupMembersOutcome()>>(
			[this, request]()
			{
			return this->updateMyGroupMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::QueryStaticsErrorRateOutcome CmsClient::queryStaticsErrorRate(const QueryStaticsErrorRateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStaticsErrorRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStaticsErrorRateOutcome(QueryStaticsErrorRateResult(outcome.result()));
	else
		return QueryStaticsErrorRateOutcome(outcome.error());
}

void CmsClient::queryStaticsErrorRateAsync(const QueryStaticsErrorRateRequest& request, const QueryStaticsErrorRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStaticsErrorRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::QueryStaticsErrorRateOutcomeCallable CmsClient::queryStaticsErrorRateCallable(const QueryStaticsErrorRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStaticsErrorRateOutcome()>>(
			[this, request]()
			{
			return this->queryStaticsErrorRate(request);
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

CmsClient::ListGroupDynamicRuleOutcome CmsClient::listGroupDynamicRule(const ListGroupDynamicRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupDynamicRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupDynamicRuleOutcome(ListGroupDynamicRuleResult(outcome.result()));
	else
		return ListGroupDynamicRuleOutcome(outcome.error());
}

void CmsClient::listGroupDynamicRuleAsync(const ListGroupDynamicRuleRequest& request, const ListGroupDynamicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupDynamicRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListGroupDynamicRuleOutcomeCallable CmsClient::listGroupDynamicRuleCallable(const ListGroupDynamicRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupDynamicRuleOutcome()>>(
			[this, request]()
			{
			return this->listGroupDynamicRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListAlarmOutcome CmsClient::listAlarm(const ListAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmOutcome(ListAlarmResult(outcome.result()));
	else
		return ListAlarmOutcome(outcome.error());
}

void CmsClient::listAlarmAsync(const ListAlarmRequest& request, const ListAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListAlarmOutcomeCallable CmsClient::listAlarmCallable(const ListAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmOutcome()>>(
			[this, request]()
			{
			return this->listAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeInstallOutcome CmsClient::nodeInstall(const NodeInstallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeInstallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeInstallOutcome(NodeInstallResult(outcome.result()));
	else
		return NodeInstallOutcome(outcome.error());
}

void CmsClient::nodeInstallAsync(const NodeInstallRequest& request, const NodeInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeInstall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeInstallOutcomeCallable CmsClient::nodeInstallCallable(const NodeInstallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeInstallOutcome()>>(
			[this, request]()
			{
			return this->nodeInstall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::GetMyGroupAlertOutcome CmsClient::getMyGroupAlert(const GetMyGroupAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMyGroupAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMyGroupAlertOutcome(GetMyGroupAlertResult(outcome.result()));
	else
		return GetMyGroupAlertOutcome(outcome.error());
}

void CmsClient::getMyGroupAlertAsync(const GetMyGroupAlertRequest& request, const GetMyGroupAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMyGroupAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::GetMyGroupAlertOutcomeCallable CmsClient::getMyGroupAlertCallable(const GetMyGroupAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMyGroupAlertOutcome()>>(
			[this, request]()
			{
			return this->getMyGroupAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DeleteMonitoringTemplateOutcome CmsClient::deleteMonitoringTemplate(const DeleteMonitoringTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitoringTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitoringTemplateOutcome(DeleteMonitoringTemplateResult(outcome.result()));
	else
		return DeleteMonitoringTemplateOutcome(outcome.error());
}

void CmsClient::deleteMonitoringTemplateAsync(const DeleteMonitoringTemplateRequest& request, const DeleteMonitoringTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitoringTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DeleteMonitoringTemplateOutcomeCallable CmsClient::deleteMonitoringTemplateCallable(const DeleteMonitoringTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitoringTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitoringTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::NodeStatusListOutcome CmsClient::nodeStatusList(const NodeStatusListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NodeStatusListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NodeStatusListOutcome(NodeStatusListResult(outcome.result()));
	else
		return NodeStatusListOutcome(outcome.error());
}

void CmsClient::nodeStatusListAsync(const NodeStatusListRequest& request, const NodeStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, nodeStatusList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::NodeStatusListOutcomeCallable CmsClient::nodeStatusListCallable(const NodeStatusListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NodeStatusListOutcome()>>(
			[this, request]()
			{
			return this->nodeStatusList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListContactGroupOutcome CmsClient::listContactGroup(const ListContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContactGroupOutcome(ListContactGroupResult(outcome.result()));
	else
		return ListContactGroupOutcome(outcome.error());
}

void CmsClient::listContactGroupAsync(const ListContactGroupRequest& request, const ListContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListContactGroupOutcomeCallable CmsClient::listContactGroupCallable(const ListContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContactGroupOutcome()>>(
			[this, request]()
			{
			return this->listContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutMetricAlarmOutcome CmsClient::putMetricAlarm(const PutMetricAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMetricAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMetricAlarmOutcome(PutMetricAlarmResult(outcome.result()));
	else
		return PutMetricAlarmOutcome(outcome.error());
}

void CmsClient::putMetricAlarmAsync(const PutMetricAlarmRequest& request, const PutMetricAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMetricAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutMetricAlarmOutcomeCallable CmsClient::putMetricAlarmCallable(const PutMetricAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMetricAlarmOutcome()>>(
			[this, request]()
			{
			return this->putMetricAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::DescribeContactOutcome CmsClient::describeContact(const DescribeContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactOutcome(DescribeContactResult(outcome.result()));
	else
		return DescribeContactOutcome(outcome.error());
}

void CmsClient::describeContactAsync(const DescribeContactRequest& request, const DescribeContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DescribeContactOutcomeCallable CmsClient::describeContactCallable(const DescribeContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactOutcome()>>(
			[this, request]()
			{
			return this->describeContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::ListNotifyPolicyOutcome CmsClient::listNotifyPolicy(const ListNotifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotifyPolicyOutcome(ListNotifyPolicyResult(outcome.result()));
	else
		return ListNotifyPolicyOutcome(outcome.error());
}

void CmsClient::listNotifyPolicyAsync(const ListNotifyPolicyRequest& request, const ListNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListNotifyPolicyOutcomeCallable CmsClient::listNotifyPolicyCallable(const ListNotifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->listNotifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::EnableAlarmOutcome CmsClient::enableAlarm(const EnableAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAlarmOutcome(EnableAlarmResult(outcome.result()));
	else
		return EnableAlarmOutcome(outcome.error());
}

void CmsClient::enableAlarmAsync(const EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableAlarmOutcomeCallable CmsClient::enableAlarmCallable(const EnableAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAlarmOutcome()>>(
			[this, request]()
			{
			return this->enableAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

