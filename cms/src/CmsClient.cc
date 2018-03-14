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

CmsClient::ListProductOfActiceAlertOutcome CmsClient::listProductOfActiceAlert(const ListProductOfActiceAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductOfActiceAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductOfActiceAlertOutcome(ListProductOfActiceAlertResult(outcome.result()));
	else
		return ListProductOfActiceAlertOutcome(outcome.error());
}

void CmsClient::listProductOfActiceAlertAsync(const ListProductOfActiceAlertRequest& request, const ListProductOfActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductOfActiceAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::ListProductOfActiceAlertOutcomeCallable CmsClient::listProductOfActiceAlertCallable(const ListProductOfActiceAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductOfActiceAlertOutcome()>>(
			[this, request]()
			{
			return this->listProductOfActiceAlert(request);
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

CmsClient::PutSystemEventOutcome CmsClient::putSystemEvent(const PutSystemEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutSystemEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutSystemEventOutcome(PutSystemEventResult(outcome.result()));
	else
		return PutSystemEventOutcome(outcome.error());
}

void CmsClient::putSystemEventAsync(const PutSystemEventRequest& request, const PutSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putSystemEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutSystemEventOutcomeCallable CmsClient::putSystemEventCallable(const PutSystemEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutSystemEventOutcome()>>(
			[this, request]()
			{
			return this->putSystemEvent(request);
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

CmsClient::EnableActiceAlertOutcome CmsClient::enableActiceAlert(const EnableActiceAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableActiceAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableActiceAlertOutcome(EnableActiceAlertResult(outcome.result()));
	else
		return EnableActiceAlertOutcome(outcome.error());
}

void CmsClient::enableActiceAlertAsync(const EnableActiceAlertRequest& request, const EnableActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableActiceAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::EnableActiceAlertOutcomeCallable CmsClient::enableActiceAlertCallable(const EnableActiceAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableActiceAlertOutcome()>>(
			[this, request]()
			{
			return this->enableActiceAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CmsClient::PutMetricDataOutcome CmsClient::putMetricData(const PutMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMetricDataOutcome(PutMetricDataResult(outcome.result()));
	else
		return PutMetricDataOutcome(outcome.error());
}

void CmsClient::putMetricDataAsync(const PutMetricDataRequest& request, const PutMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::PutMetricDataOutcomeCallable CmsClient::putMetricDataCallable(const PutMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMetricDataOutcome()>>(
			[this, request]()
			{
			return this->putMetricData(request);
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

CmsClient::DisableActiceAlertOutcome CmsClient::disableActiceAlert(const DisableActiceAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableActiceAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableActiceAlertOutcome(DisableActiceAlertResult(outcome.result()));
	else
		return DisableActiceAlertOutcome(outcome.error());
}

void CmsClient::disableActiceAlertAsync(const DisableActiceAlertRequest& request, const DisableActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableActiceAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CmsClient::DisableActiceAlertOutcomeCallable CmsClient::disableActiceAlertCallable(const DisableActiceAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableActiceAlertOutcome()>>(
			[this, request]()
			{
			return this->disableActiceAlert(request);
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

