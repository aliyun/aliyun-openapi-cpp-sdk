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

#include <alibabacloud/emr/EmrClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

namespace
{
	const std::string SERVICE_NAME = "Emr";
}

EmrClient::EmrClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::~EmrClient()
{}

EmrClient::CreateFlowOutcome EmrClient::createFlow(const CreateFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowOutcome(CreateFlowResult(outcome.result()));
	else
		return CreateFlowOutcome(outcome.error());
}

void EmrClient::createFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowOutcomeCallable EmrClient::createFlowCallable(const CreateFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowOutcome()>>(
			[this, request]()
			{
			return this->createFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobOutputStatisticInfoOutcome EmrClient::getJobOutputStatisticInfo(const GetJobOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutputStatisticInfoOutcome(GetJobOutputStatisticInfoResult(outcome.result()));
	else
		return GetJobOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobOutputStatisticInfoAsync(const GetJobOutputStatisticInfoRequest& request, const GetJobOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobOutputStatisticInfoOutcomeCallable EmrClient::getJobOutputStatisticInfoCallable(const GetJobOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveBackupPlanOutcome EmrClient::removeBackupPlan(const RemoveBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackupPlanOutcome(RemoveBackupPlanResult(outcome.result()));
	else
		return RemoveBackupPlanOutcome(outcome.error());
}

void EmrClient::removeBackupPlanAsync(const RemoveBackupPlanRequest& request, const RemoveBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveBackupPlanOutcomeCallable EmrClient::removeBackupPlanCallable(const RemoveBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->removeBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterStatisticsOutcome EmrClient::describeClusterStatistics(const DescribeClusterStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterStatisticsOutcome(DescribeClusterStatisticsResult(outcome.result()));
	else
		return DescribeClusterStatisticsOutcome(outcome.error());
}

void EmrClient::describeClusterStatisticsAsync(const DescribeClusterStatisticsRequest& request, const DescribeClusterStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterStatisticsOutcomeCallable EmrClient::describeClusterStatisticsCallable(const DescribeClusterStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CancelOrderOutcome EmrClient::cancelOrder(const CancelOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOrderOutcome(CancelOrderResult(outcome.result()));
	else
		return CancelOrderOutcome(outcome.error());
}

void EmrClient::cancelOrderAsync(const CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CancelOrderOutcomeCallable EmrClient::cancelOrderCallable(const CancelOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateAlertDingDingGroupOutcome EmrClient::createAlertDingDingGroup(const CreateAlertDingDingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertDingDingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertDingDingGroupOutcome(CreateAlertDingDingGroupResult(outcome.result()));
	else
		return CreateAlertDingDingGroupOutcome(outcome.error());
}

void EmrClient::createAlertDingDingGroupAsync(const CreateAlertDingDingGroupRequest& request, const CreateAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertDingDingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateAlertDingDingGroupOutcomeCallable EmrClient::createAlertDingDingGroupCallable(const CreateAlertDingDingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertDingDingGroupOutcome()>>(
			[this, request]()
			{
			return this->createAlertDingDingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreUpdateKafkaTopicOutcome EmrClient::metastoreUpdateKafkaTopic(const MetastoreUpdateKafkaTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreUpdateKafkaTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreUpdateKafkaTopicOutcome(MetastoreUpdateKafkaTopicResult(outcome.result()));
	else
		return MetastoreUpdateKafkaTopicOutcome(outcome.error());
}

void EmrClient::metastoreUpdateKafkaTopicAsync(const MetastoreUpdateKafkaTopicRequest& request, const MetastoreUpdateKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreUpdateKafkaTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreUpdateKafkaTopicOutcomeCallable EmrClient::metastoreUpdateKafkaTopicCallable(const MetastoreUpdateKafkaTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreUpdateKafkaTopicOutcome()>>(
			[this, request]()
			{
			return this->metastoreUpdateKafkaTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::StartFlowOutcome EmrClient::startFlow(const StartFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartFlowOutcome(StartFlowResult(outcome.result()));
	else
		return StartFlowOutcome(outcome.error());
}

void EmrClient::startFlowAsync(const StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::StartFlowOutcomeCallable EmrClient::startFlowCallable(const StartFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartFlowOutcome()>>(
			[this, request]()
			{
			return this->startFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceConfigHistoryOutcome EmrClient::listClusterServiceConfigHistory(const ListClusterServiceConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceConfigHistoryOutcome(ListClusterServiceConfigHistoryResult(outcome.result()));
	else
		return ListClusterServiceConfigHistoryOutcome(outcome.error());
}

void EmrClient::listClusterServiceConfigHistoryAsync(const ListClusterServiceConfigHistoryRequest& request, const ListClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceConfigHistoryOutcomeCallable EmrClient::listClusterServiceConfigHistoryCallable(const ListClusterServiceConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceConfigHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateWorkspaceRepoSettingOutcome EmrClient::updateWorkspaceRepoSetting(const UpdateWorkspaceRepoSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkspaceRepoSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkspaceRepoSettingOutcome(UpdateWorkspaceRepoSettingResult(outcome.result()));
	else
		return UpdateWorkspaceRepoSettingOutcome(outcome.error());
}

void EmrClient::updateWorkspaceRepoSettingAsync(const UpdateWorkspaceRepoSettingRequest& request, const UpdateWorkspaceRepoSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkspaceRepoSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateWorkspaceRepoSettingOutcomeCallable EmrClient::updateWorkspaceRepoSettingCallable(const UpdateWorkspaceRepoSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkspaceRepoSettingOutcome()>>(
			[this, request]()
			{
			return this->updateWorkspaceRepoSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceCustomActionSupportConfigForAdminOutcome EmrClient::listClusterServiceCustomActionSupportConfigForAdmin(const ListClusterServiceCustomActionSupportConfigForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceCustomActionSupportConfigForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceCustomActionSupportConfigForAdminOutcome(ListClusterServiceCustomActionSupportConfigForAdminResult(outcome.result()));
	else
		return ListClusterServiceCustomActionSupportConfigForAdminOutcome(outcome.error());
}

void EmrClient::listClusterServiceCustomActionSupportConfigForAdminAsync(const ListClusterServiceCustomActionSupportConfigForAdminRequest& request, const ListClusterServiceCustomActionSupportConfigForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceCustomActionSupportConfigForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceCustomActionSupportConfigForAdminOutcomeCallable EmrClient::listClusterServiceCustomActionSupportConfigForAdminCallable(const ListClusterServiceCustomActionSupportConfigForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceCustomActionSupportConfigForAdminOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceCustomActionSupportConfigForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryAlarmHistoryOutcome EmrClient::queryAlarmHistory(const QueryAlarmHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAlarmHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAlarmHistoryOutcome(QueryAlarmHistoryResult(outcome.result()));
	else
		return QueryAlarmHistoryOutcome(outcome.error());
}

void EmrClient::queryAlarmHistoryAsync(const QueryAlarmHistoryRequest& request, const QueryAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAlarmHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryAlarmHistoryOutcomeCallable EmrClient::queryAlarmHistoryCallable(const QueryAlarmHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAlarmHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryAlarmHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobExecutionPlanHierarchyOutcome EmrClient::listJobExecutionPlanHierarchy(const ListJobExecutionPlanHierarchyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionPlanHierarchyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionPlanHierarchyOutcome(ListJobExecutionPlanHierarchyResult(outcome.result()));
	else
		return ListJobExecutionPlanHierarchyOutcome(outcome.error());
}

void EmrClient::listJobExecutionPlanHierarchyAsync(const ListJobExecutionPlanHierarchyRequest& request, const ListJobExecutionPlanHierarchyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutionPlanHierarchy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobExecutionPlanHierarchyOutcomeCallable EmrClient::listJobExecutionPlanHierarchyCallable(const ListJobExecutionPlanHierarchyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionPlanHierarchyOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutionPlanHierarchy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDropDatabaseOutcome EmrClient::metastoreDropDatabase(const MetastoreDropDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDropDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDropDatabaseOutcome(MetastoreDropDatabaseResult(outcome.result()));
	else
		return MetastoreDropDatabaseOutcome(outcome.error());
}

void EmrClient::metastoreDropDatabaseAsync(const MetastoreDropDatabaseRequest& request, const MetastoreDropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDropDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDropDatabaseOutcomeCallable EmrClient::metastoreDropDatabaseCallable(const MetastoreDropDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDropDatabaseOutcome()>>(
			[this, request]()
			{
			return this->metastoreDropDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowInstanceOutcome EmrClient::listFlowInstance(const ListFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowInstanceOutcome(ListFlowInstanceResult(outcome.result()));
	else
		return ListFlowInstanceOutcome(outcome.error());
}

void EmrClient::listFlowInstanceAsync(const ListFlowInstanceRequest& request, const ListFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowInstanceOutcomeCallable EmrClient::listFlowInstanceCallable(const ListFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->listFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeDatabaseOutcome EmrClient::metastoreDescribeDatabase(const MetastoreDescribeDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeDatabaseOutcome(MetastoreDescribeDatabaseResult(outcome.result()));
	else
		return MetastoreDescribeDatabaseOutcome(outcome.error());
}

void EmrClient::metastoreDescribeDatabaseAsync(const MetastoreDescribeDatabaseRequest& request, const MetastoreDescribeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeDatabaseOutcomeCallable EmrClient::metastoreDescribeDatabaseCallable(const MetastoreDescribeDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeDatabaseOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::PageListUsersOutcome EmrClient::pageListUsers(const PageListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageListUsersOutcome(PageListUsersResult(outcome.result()));
	else
		return PageListUsersOutcome(outcome.error());
}

void EmrClient::pageListUsersAsync(const PageListUsersRequest& request, const PageListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageListUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::PageListUsersOutcomeCallable EmrClient::pageListUsersCallable(const PageListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageListUsersOutcome()>>(
			[this, request]()
			{
			return this->pageListUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigHistoryOutcome EmrClient::describeClusterServiceConfigHistory(const DescribeClusterServiceConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigHistoryOutcome(DescribeClusterServiceConfigHistoryResult(outcome.result()));
	else
		return DescribeClusterServiceConfigHistoryOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigHistoryAsync(const DescribeClusterServiceConfigHistoryRequest& request, const DescribeClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigHistoryOutcomeCallable EmrClient::describeClusterServiceConfigHistoryCallable(const DescribeClusterServiceConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobExecutionInstanceTrendOutcome EmrClient::listJobExecutionInstanceTrend(const ListJobExecutionInstanceTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionInstanceTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionInstanceTrendOutcome(ListJobExecutionInstanceTrendResult(outcome.result()));
	else
		return ListJobExecutionInstanceTrendOutcome(outcome.error());
}

void EmrClient::listJobExecutionInstanceTrendAsync(const ListJobExecutionInstanceTrendRequest& request, const ListJobExecutionInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutionInstanceTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobExecutionInstanceTrendOutcomeCallable EmrClient::listJobExecutionInstanceTrendCallable(const ListJobExecutionInstanceTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionInstanceTrendOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutionInstanceTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeTaskOutcome EmrClient::metastoreDescribeTask(const MetastoreDescribeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeTaskOutcome(MetastoreDescribeTaskResult(outcome.result()));
	else
		return MetastoreDescribeTaskOutcome(outcome.error());
}

void EmrClient::metastoreDescribeTaskAsync(const MetastoreDescribeTaskRequest& request, const MetastoreDescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeTaskOutcomeCallable EmrClient::metastoreDescribeTaskCallable(const MetastoreDescribeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeTaskOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryUserActionsPolicyOutcome EmrClient::queryUserActionsPolicy(const QueryUserActionsPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserActionsPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserActionsPolicyOutcome(QueryUserActionsPolicyResult(outcome.result()));
	else
		return QueryUserActionsPolicyOutcome(outcome.error());
}

void EmrClient::queryUserActionsPolicyAsync(const QueryUserActionsPolicyRequest& request, const QueryUserActionsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserActionsPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryUserActionsPolicyOutcomeCallable EmrClient::queryUserActionsPolicyCallable(const QueryUserActionsPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserActionsPolicyOutcome()>>(
			[this, request]()
			{
			return this->queryUserActionsPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobMigrateResultOutcome EmrClient::getJobMigrateResult(const GetJobMigrateResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobMigrateResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobMigrateResultOutcome(GetJobMigrateResultResult(outcome.result()));
	else
		return GetJobMigrateResultOutcome(outcome.error());
}

void EmrClient::getJobMigrateResultAsync(const GetJobMigrateResultRequest& request, const GetJobMigrateResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobMigrateResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobMigrateResultOutcomeCallable EmrClient::getJobMigrateResultCallable(const GetJobMigrateResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobMigrateResultOutcome()>>(
			[this, request]()
			{
			return this->getJobMigrateResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeDataSourceOutcome EmrClient::describeDataSource(const DescribeDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceOutcome(DescribeDataSourceResult(outcome.result()));
	else
		return DescribeDataSourceOutcome(outcome.error());
}

void EmrClient::describeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeDataSourceOutcomeCallable EmrClient::describeDataSourceCallable(const DescribeDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceOutcome()>>(
			[this, request]()
			{
			return this->describeDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeInstanceOutcome EmrClient::listFlowNodeInstance(const ListFlowNodeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeInstanceOutcome(ListFlowNodeInstanceResult(outcome.result()));
	else
		return ListFlowNodeInstanceOutcome(outcome.error());
}

void EmrClient::listFlowNodeInstanceAsync(const ListFlowNodeInstanceRequest& request, const ListFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeInstanceOutcomeCallable EmrClient::listFlowNodeInstanceCallable(const ListFlowNodeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeInstanceOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowVariableCollectionOutcome EmrClient::describeFlowVariableCollection(const DescribeFlowVariableCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowVariableCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowVariableCollectionOutcome(DescribeFlowVariableCollectionResult(outcome.result()));
	else
		return DescribeFlowVariableCollectionOutcome(outcome.error());
}

void EmrClient::describeFlowVariableCollectionAsync(const DescribeFlowVariableCollectionRequest& request, const DescribeFlowVariableCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowVariableCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowVariableCollectionOutcomeCallable EmrClient::describeFlowVariableCollectionCallable(const DescribeFlowVariableCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowVariableCollectionOutcome()>>(
			[this, request]()
			{
			return this->describeFlowVariableCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateAlertUserGroupOutcome EmrClient::createAlertUserGroup(const CreateAlertUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertUserGroupOutcome(CreateAlertUserGroupResult(outcome.result()));
	else
		return CreateAlertUserGroupOutcome(outcome.error());
}

void EmrClient::createAlertUserGroupAsync(const CreateAlertUserGroupRequest& request, const CreateAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateAlertUserGroupOutcomeCallable EmrClient::createAlertUserGroupCallable(const CreateAlertUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createAlertUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingActivityOutcome EmrClient::describeScalingActivity(const DescribeScalingActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivityOutcome(DescribeScalingActivityResult(outcome.result()));
	else
		return DescribeScalingActivityOutcome(outcome.error());
}

void EmrClient::describeScalingActivityAsync(const DescribeScalingActivityRequest& request, const DescribeScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingActivityOutcomeCallable EmrClient::describeScalingActivityCallable(const DescribeScalingActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivityOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterInstalledServiceOutcome EmrClient::listClusterInstalledService(const ListClusterInstalledServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterInstalledServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterInstalledServiceOutcome(ListClusterInstalledServiceResult(outcome.result()));
	else
		return ListClusterInstalledServiceOutcome(outcome.error());
}

void EmrClient::listClusterInstalledServiceAsync(const ListClusterInstalledServiceRequest& request, const ListClusterInstalledServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterInstalledService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterInstalledServiceOutcomeCallable EmrClient::listClusterInstalledServiceCallable(const ListClusterInstalledServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterInstalledServiceOutcome()>>(
			[this, request]()
			{
			return this->listClusterInstalledService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeEmrMainVersionOutcome EmrClient::describeEmrMainVersion(const DescribeEmrMainVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmrMainVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmrMainVersionOutcome(DescribeEmrMainVersionResult(outcome.result()));
	else
		return DescribeEmrMainVersionOutcome(outcome.error());
}

void EmrClient::describeEmrMainVersionAsync(const DescribeEmrMainVersionRequest& request, const DescribeEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmrMainVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeEmrMainVersionOutcomeCallable EmrClient::describeEmrMainVersionCallable(const DescribeEmrMainVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmrMainVersionOutcome()>>(
			[this, request]()
			{
			return this->describeEmrMainVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteETLJobOutcome EmrClient::deleteETLJob(const DeleteETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteETLJobOutcome(DeleteETLJobResult(outcome.result()));
	else
		return DeleteETLJobOutcome(outcome.error());
}

void EmrClient::deleteETLJobAsync(const DeleteETLJobRequest& request, const DeleteETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteETLJobOutcomeCallable EmrClient::deleteETLJobCallable(const DeleteETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteETLJobOutcome()>>(
			[this, request]()
			{
			return this->deleteETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDataPreviewOutcome EmrClient::metastoreDataPreview(const MetastoreDataPreviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDataPreviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDataPreviewOutcome(MetastoreDataPreviewResult(outcome.result()));
	else
		return MetastoreDataPreviewOutcome(outcome.error());
}

void EmrClient::metastoreDataPreviewAsync(const MetastoreDataPreviewRequest& request, const MetastoreDataPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDataPreview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDataPreviewOutcomeCallable EmrClient::metastoreDataPreviewCallable(const MetastoreDataPreviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDataPreviewOutcome()>>(
			[this, request]()
			{
			return this->metastoreDataPreview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AttachPubIpOutcome EmrClient::attachPubIp(const AttachPubIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPubIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPubIpOutcome(AttachPubIpResult(outcome.result()));
	else
		return AttachPubIpOutcome(outcome.error());
}

void EmrClient::attachPubIpAsync(const AttachPubIpRequest& request, const AttachPubIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPubIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AttachPubIpOutcomeCallable EmrClient::attachPubIpCallable(const AttachPubIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPubIpOutcome()>>(
			[this, request]()
			{
			return this->attachPubIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateWorkspaceResourceSettingOutcome EmrClient::updateWorkspaceResourceSetting(const UpdateWorkspaceResourceSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkspaceResourceSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkspaceResourceSettingOutcome(UpdateWorkspaceResourceSettingResult(outcome.result()));
	else
		return UpdateWorkspaceResourceSettingOutcome(outcome.error());
}

void EmrClient::updateWorkspaceResourceSettingAsync(const UpdateWorkspaceResourceSettingRequest& request, const UpdateWorkspaceResourceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkspaceResourceSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateWorkspaceResourceSettingOutcomeCallable EmrClient::updateWorkspaceResourceSettingCallable(const UpdateWorkspaceResourceSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkspaceResourceSettingOutcome()>>(
			[this, request]()
			{
			return this->updateWorkspaceResourceSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunExecutionPlanOutcome EmrClient::runExecutionPlan(const RunExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunExecutionPlanOutcome(RunExecutionPlanResult(outcome.result()));
	else
		return RunExecutionPlanOutcome(outcome.error());
}

void EmrClient::runExecutionPlanAsync(const RunExecutionPlanRequest& request, const RunExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunExecutionPlanOutcomeCallable EmrClient::runExecutionPlanCallable(const RunExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->runExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterTemplatesOutcome EmrClient::listClusterTemplates(const ListClusterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTemplatesOutcome(ListClusterTemplatesResult(outcome.result()));
	else
		return ListClusterTemplatesOutcome(outcome.error());
}

void EmrClient::listClusterTemplatesAsync(const ListClusterTemplatesRequest& request, const ListClusterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterTemplatesOutcomeCallable EmrClient::listClusterTemplatesCallable(const ListClusterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listClusterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowCategoryOutcome EmrClient::describeFlowCategory(const DescribeFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowCategoryOutcome(DescribeFlowCategoryResult(outcome.result()));
	else
		return DescribeFlowCategoryOutcome(outcome.error());
}

void EmrClient::describeFlowCategoryAsync(const DescribeFlowCategoryRequest& request, const DescribeFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowCategoryOutcomeCallable EmrClient::describeFlowCategoryCallable(const DescribeFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->describeFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::StartKafkaBrokerDiskBalancerOutcome EmrClient::startKafkaBrokerDiskBalancer(const StartKafkaBrokerDiskBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartKafkaBrokerDiskBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartKafkaBrokerDiskBalancerOutcome(StartKafkaBrokerDiskBalancerResult(outcome.result()));
	else
		return StartKafkaBrokerDiskBalancerOutcome(outcome.error());
}

void EmrClient::startKafkaBrokerDiskBalancerAsync(const StartKafkaBrokerDiskBalancerRequest& request, const StartKafkaBrokerDiskBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startKafkaBrokerDiskBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::StartKafkaBrokerDiskBalancerOutcomeCallable EmrClient::startKafkaBrokerDiskBalancerCallable(const StartKafkaBrokerDiskBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartKafkaBrokerDiskBalancerOutcome()>>(
			[this, request]()
			{
			return this->startKafkaBrokerDiskBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowJobOutcome EmrClient::modifyFlowJob(const ModifyFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowJobOutcome(ModifyFlowJobResult(outcome.result()));
	else
		return ModifyFlowJobOutcome(outcome.error());
}

void EmrClient::modifyFlowJobAsync(const ModifyFlowJobRequest& request, const ModifyFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowJobOutcomeCallable EmrClient::modifyFlowJobCallable(const ModifyFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowJobOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveBackupRuleOutcome EmrClient::removeBackupRule(const RemoveBackupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackupRuleOutcome(RemoveBackupRuleResult(outcome.result()));
	else
		return RemoveBackupRuleOutcome(outcome.error());
}

void EmrClient::removeBackupRuleAsync(const RemoveBackupRuleRequest& request, const RemoveBackupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveBackupRuleOutcomeCallable EmrClient::removeBackupRuleCallable(const RemoveBackupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackupRuleOutcome()>>(
			[this, request]()
			{
			return this->removeBackupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RetrySyncUserAccountOutcome EmrClient::retrySyncUserAccount(const RetrySyncUserAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetrySyncUserAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetrySyncUserAccountOutcome(RetrySyncUserAccountResult(outcome.result()));
	else
		return RetrySyncUserAccountOutcome(outcome.error());
}

void EmrClient::retrySyncUserAccountAsync(const RetrySyncUserAccountRequest& request, const RetrySyncUserAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retrySyncUserAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RetrySyncUserAccountOutcomeCallable EmrClient::retrySyncUserAccountCallable(const RetrySyncUserAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetrySyncUserAccountOutcome()>>(
			[this, request]()
			{
			return this->retrySyncUserAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterHostGroupOutcome EmrClient::createClusterHostGroup(const CreateClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterHostGroupOutcome(CreateClusterHostGroupResult(outcome.result()));
	else
		return CreateClusterHostGroupOutcome(outcome.error());
}

void EmrClient::createClusterHostGroupAsync(const CreateClusterHostGroupRequest& request, const CreateClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterHostGroupOutcomeCallable EmrClient::createClusterHostGroupCallable(const CreateClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->createClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterTemplateOutcome EmrClient::describeClusterTemplate(const DescribeClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterTemplateOutcome(DescribeClusterTemplateResult(outcome.result()));
	else
		return DescribeClusterTemplateOutcome(outcome.error());
}

void EmrClient::describeClusterTemplateAsync(const DescribeClusterTemplateRequest& request, const DescribeClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterTemplateOutcomeCallable EmrClient::describeClusterTemplateCallable(const DescribeClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyScalingRuleOutcome EmrClient::modifyScalingRule(const ModifyScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingRuleOutcome(ModifyScalingRuleResult(outcome.result()));
	else
		return ModifyScalingRuleOutcome(outcome.error());
}

void EmrClient::modifyScalingRuleAsync(const ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingRuleOutcomeCallable EmrClient::modifyScalingRuleCallable(const ModifyScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveClusterHostsOutcome EmrClient::removeClusterHosts(const RemoveClusterHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveClusterHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveClusterHostsOutcome(RemoveClusterHostsResult(outcome.result()));
	else
		return RemoveClusterHostsOutcome(outcome.error());
}

void EmrClient::removeClusterHostsAsync(const RemoveClusterHostsRequest& request, const RemoveClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeClusterHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveClusterHostsOutcomeCallable EmrClient::removeClusterHostsCallable(const RemoveClusterHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveClusterHostsOutcome()>>(
			[this, request]()
			{
			return this->removeClusterHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListETLJobTriggerEntityOutcome EmrClient::listETLJobTriggerEntity(const ListETLJobTriggerEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListETLJobTriggerEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListETLJobTriggerEntityOutcome(ListETLJobTriggerEntityResult(outcome.result()));
	else
		return ListETLJobTriggerEntityOutcome(outcome.error());
}

void EmrClient::listETLJobTriggerEntityAsync(const ListETLJobTriggerEntityRequest& request, const ListETLJobTriggerEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listETLJobTriggerEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListETLJobTriggerEntityOutcomeCallable EmrClient::listETLJobTriggerEntityCallable(const ListETLJobTriggerEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListETLJobTriggerEntityOutcome()>>(
			[this, request]()
			{
			return this->listETLJobTriggerEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddClusterServiceForAdminOutcome EmrClient::addClusterServiceForAdmin(const AddClusterServiceForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClusterServiceForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClusterServiceForAdminOutcome(AddClusterServiceForAdminResult(outcome.result()));
	else
		return AddClusterServiceForAdminOutcome(outcome.error());
}

void EmrClient::addClusterServiceForAdminAsync(const AddClusterServiceForAdminRequest& request, const AddClusterServiceForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClusterServiceForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddClusterServiceForAdminOutcomeCallable EmrClient::addClusterServiceForAdminCallable(const AddClusterServiceForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClusterServiceForAdminOutcome()>>(
			[this, request]()
			{
			return this->addClusterServiceForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeHostPoolOutcome EmrClient::describeHostPool(const DescribeHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostPoolOutcome(DescribeHostPoolResult(outcome.result()));
	else
		return DescribeHostPoolOutcome(outcome.error());
}

void EmrClient::describeHostPoolAsync(const DescribeHostPoolRequest& request, const DescribeHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeHostPoolOutcomeCallable EmrClient::describeHostPoolCallable(const DescribeHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostPoolOutcome()>>(
			[this, request]()
			{
			return this->describeHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SaveParagraphOutcome EmrClient::saveParagraph(const SaveParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveParagraphOutcome(SaveParagraphResult(outcome.result()));
	else
		return SaveParagraphOutcome(outcome.error());
}

void EmrClient::saveParagraphAsync(const SaveParagraphRequest& request, const SaveParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SaveParagraphOutcomeCallable EmrClient::saveParagraphCallable(const SaveParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveParagraphOutcome()>>(
			[this, request]()
			{
			return this->saveParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteParagraphOutcome EmrClient::deleteParagraph(const DeleteParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParagraphOutcome(DeleteParagraphResult(outcome.result()));
	else
		return DeleteParagraphOutcome(outcome.error());
}

void EmrClient::deleteParagraphAsync(const DeleteParagraphRequest& request, const DeleteParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteParagraphOutcomeCallable EmrClient::deleteParagraphCallable(const DeleteParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParagraphOutcome()>>(
			[this, request]()
			{
			return this->deleteParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueInputStatisticInfoOutcome EmrClient::getQueueInputStatisticInfo(const GetQueueInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueInputStatisticInfoOutcome(GetQueueInputStatisticInfoResult(outcome.result()));
	else
		return GetQueueInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueInputStatisticInfoAsync(const GetQueueInputStatisticInfoRequest& request, const GetQueueInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueInputStatisticInfoOutcomeCallable EmrClient::getQueueInputStatisticInfoCallable(const GetQueueInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreUpdateTableOutcome EmrClient::metastoreUpdateTable(const MetastoreUpdateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreUpdateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreUpdateTableOutcome(MetastoreUpdateTableResult(outcome.result()));
	else
		return MetastoreUpdateTableOutcome(outcome.error());
}

void EmrClient::metastoreUpdateTableAsync(const MetastoreUpdateTableRequest& request, const MetastoreUpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreUpdateTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreUpdateTableOutcomeCallable EmrClient::metastoreUpdateTableCallable(const MetastoreUpdateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreUpdateTableOutcome()>>(
			[this, request]()
			{
			return this->metastoreUpdateTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetBackupRuleInfoOutcome EmrClient::getBackupRuleInfo(const GetBackupRuleInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBackupRuleInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBackupRuleInfoOutcome(GetBackupRuleInfoResult(outcome.result()));
	else
		return GetBackupRuleInfoOutcome(outcome.error());
}

void EmrClient::getBackupRuleInfoAsync(const GetBackupRuleInfoRequest& request, const GetBackupRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBackupRuleInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetBackupRuleInfoOutcomeCallable EmrClient::getBackupRuleInfoCallable(const GetBackupRuleInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBackupRuleInfoOutcome()>>(
			[this, request]()
			{
			return this->getBackupRuleInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceQuickLinkOutcome EmrClient::listClusterServiceQuickLink(const ListClusterServiceQuickLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceQuickLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceQuickLinkOutcome(ListClusterServiceQuickLinkResult(outcome.result()));
	else
		return ListClusterServiceQuickLinkOutcome(outcome.error());
}

void EmrClient::listClusterServiceQuickLinkAsync(const ListClusterServiceQuickLinkRequest& request, const ListClusterServiceQuickLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceQuickLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceQuickLinkOutcomeCallable EmrClient::listClusterServiceQuickLinkCallable(const ListClusterServiceQuickLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceQuickLinkOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceQuickLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostGroupOutcome EmrClient::listClusterHostGroup(const ListClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostGroupOutcome(ListClusterHostGroupResult(outcome.result()));
	else
		return ListClusterHostGroupOutcome(outcome.error());
}

void EmrClient::listClusterHostGroupAsync(const ListClusterHostGroupRequest& request, const ListClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostGroupOutcomeCallable EmrClient::listClusterHostGroupCallable(const ListClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->listClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::StopParagraphOutcome EmrClient::stopParagraph(const StopParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopParagraphOutcome(StopParagraphResult(outcome.result()));
	else
		return StopParagraphOutcome(outcome.error());
}

void EmrClient::stopParagraphAsync(const StopParagraphRequest& request, const StopParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::StopParagraphOutcomeCallable EmrClient::stopParagraphCallable(const StopParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopParagraphOutcome()>>(
			[this, request]()
			{
			return this->stopParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDeleteKafkaTopicOutcome EmrClient::metastoreDeleteKafkaTopic(const MetastoreDeleteKafkaTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDeleteKafkaTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDeleteKafkaTopicOutcome(MetastoreDeleteKafkaTopicResult(outcome.result()));
	else
		return MetastoreDeleteKafkaTopicOutcome(outcome.error());
}

void EmrClient::metastoreDeleteKafkaTopicAsync(const MetastoreDeleteKafkaTopicRequest& request, const MetastoreDeleteKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDeleteKafkaTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDeleteKafkaTopicOutcomeCallable EmrClient::metastoreDeleteKafkaTopicCallable(const MetastoreDeleteKafkaTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDeleteKafkaTopicOutcome()>>(
			[this, request]()
			{
			return this->metastoreDeleteKafkaTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SuspendExecutionPlanInstanceOutcome EmrClient::suspendExecutionPlanInstance(const SuspendExecutionPlanInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendExecutionPlanInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendExecutionPlanInstanceOutcome(SuspendExecutionPlanInstanceResult(outcome.result()));
	else
		return SuspendExecutionPlanInstanceOutcome(outcome.error());
}

void EmrClient::suspendExecutionPlanInstanceAsync(const SuspendExecutionPlanInstanceRequest& request, const SuspendExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendExecutionPlanInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SuspendExecutionPlanInstanceOutcomeCallable EmrClient::suspendExecutionPlanInstanceCallable(const SuspendExecutionPlanInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendExecutionPlanInstanceOutcome()>>(
			[this, request]()
			{
			return this->suspendExecutionPlanInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteScalingTaskGroupOutcome EmrClient::deleteScalingTaskGroup(const DeleteScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingTaskGroupOutcome(DeleteScalingTaskGroupResult(outcome.result()));
	else
		return DeleteScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::deleteScalingTaskGroupAsync(const DeleteScalingTaskGroupRequest& request, const DeleteScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteScalingTaskGroupOutcomeCallable EmrClient::deleteScalingTaskGroupCallable(const DeleteScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserSubmissionStatisticInfoOutcome EmrClient::getUserSubmissionStatisticInfo(const GetUserSubmissionStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserSubmissionStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserSubmissionStatisticInfoOutcome(GetUserSubmissionStatisticInfoResult(outcome.result()));
	else
		return GetUserSubmissionStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserSubmissionStatisticInfoAsync(const GetUserSubmissionStatisticInfoRequest& request, const GetUserSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserSubmissionStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserSubmissionStatisticInfoOutcomeCallable EmrClient::getUserSubmissionStatisticInfoCallable(const GetUserSubmissionStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserSubmissionStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserSubmissionStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFailureJobExecutionInstancesOutcome EmrClient::listFailureJobExecutionInstances(const ListFailureJobExecutionInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFailureJobExecutionInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFailureJobExecutionInstancesOutcome(ListFailureJobExecutionInstancesResult(outcome.result()));
	else
		return ListFailureJobExecutionInstancesOutcome(outcome.error());
}

void EmrClient::listFailureJobExecutionInstancesAsync(const ListFailureJobExecutionInstancesRequest& request, const ListFailureJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFailureJobExecutionInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFailureJobExecutionInstancesOutcomeCallable EmrClient::listFailureJobExecutionInstancesCallable(const ListFailureJobExecutionInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFailureJobExecutionInstancesOutcome()>>(
			[this, request]()
			{
			return this->listFailureJobExecutionInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBackupPlanOutcome EmrClient::createBackupPlan(const CreateBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupPlanOutcome(CreateBackupPlanResult(outcome.result()));
	else
		return CreateBackupPlanOutcome(outcome.error());
}

void EmrClient::createBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBackupPlanOutcomeCallable EmrClient::createBackupPlanCallable(const CreateBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListHpHostOutcome EmrClient::listHpHost(const ListHpHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHpHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHpHostOutcome(ListHpHostResult(outcome.result()));
	else
		return ListHpHostOutcome(outcome.error());
}

void EmrClient::listHpHostAsync(const ListHpHostRequest& request, const ListHpHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHpHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListHpHostOutcomeCallable EmrClient::listHpHostCallable(const ListHpHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHpHostOutcome()>>(
			[this, request]()
			{
			return this->listHpHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreCreateDataResourceOutcome EmrClient::metastoreCreateDataResource(const MetastoreCreateDataResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreCreateDataResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreCreateDataResourceOutcome(MetastoreCreateDataResourceResult(outcome.result()));
	else
		return MetastoreCreateDataResourceOutcome(outcome.error());
}

void EmrClient::metastoreCreateDataResourceAsync(const MetastoreCreateDataResourceRequest& request, const MetastoreCreateDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreCreateDataResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreCreateDataResourceOutcomeCallable EmrClient::metastoreCreateDataResourceCallable(const MetastoreCreateDataResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreCreateDataResourceOutcome()>>(
			[this, request]()
			{
			return this->metastoreCreateDataResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostComponentForAdminOutcome EmrClient::listClusterHostComponentForAdmin(const ListClusterHostComponentForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostComponentForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostComponentForAdminOutcome(ListClusterHostComponentForAdminResult(outcome.result()));
	else
		return ListClusterHostComponentForAdminOutcome(outcome.error());
}

void EmrClient::listClusterHostComponentForAdminAsync(const ListClusterHostComponentForAdminRequest& request, const ListClusterHostComponentForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHostComponentForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostComponentForAdminOutcomeCallable EmrClient::listClusterHostComponentForAdminCallable(const ListClusterHostComponentForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostComponentForAdminOutcome()>>(
			[this, request]()
			{
			return this->listClusterHostComponentForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillETLJobInstanceOutcome EmrClient::killETLJobInstance(const KillETLJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillETLJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillETLJobInstanceOutcome(KillETLJobInstanceResult(outcome.result()));
	else
		return KillETLJobInstanceOutcome(outcome.error());
}

void EmrClient::killETLJobInstanceAsync(const KillETLJobInstanceRequest& request, const KillETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killETLJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillETLJobInstanceOutcomeCallable EmrClient::killETLJobInstanceCallable(const KillETLJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillETLJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->killETLJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RetryExecutionPlanInstanceOutcome EmrClient::retryExecutionPlanInstance(const RetryExecutionPlanInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryExecutionPlanInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryExecutionPlanInstanceOutcome(RetryExecutionPlanInstanceResult(outcome.result()));
	else
		return RetryExecutionPlanInstanceOutcome(outcome.error());
}

void EmrClient::retryExecutionPlanInstanceAsync(const RetryExecutionPlanInstanceRequest& request, const RetryExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryExecutionPlanInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RetryExecutionPlanInstanceOutcomeCallable EmrClient::retryExecutionPlanInstanceCallable(const RetryExecutionPlanInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryExecutionPlanInstanceOutcome()>>(
			[this, request]()
			{
			return this->retryExecutionPlanInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListHostPoolOutcome EmrClient::listHostPool(const ListHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHostPoolOutcome(ListHostPoolResult(outcome.result()));
	else
		return ListHostPoolOutcome(outcome.error());
}

void EmrClient::listHostPoolAsync(const ListHostPoolRequest& request, const ListHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListHostPoolOutcomeCallable EmrClient::listHostPoolCallable(const ListHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHostPoolOutcome()>>(
			[this, request]()
			{
			return this->listHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterOperationHostTaskLogOutcome EmrClient::describeClusterOperationHostTaskLog(const DescribeClusterOperationHostTaskLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOperationHostTaskLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOperationHostTaskLogOutcome(DescribeClusterOperationHostTaskLogResult(outcome.result()));
	else
		return DescribeClusterOperationHostTaskLogOutcome(outcome.error());
}

void EmrClient::describeClusterOperationHostTaskLogAsync(const DescribeClusterOperationHostTaskLogRequest& request, const DescribeClusterOperationHostTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterOperationHostTaskLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterOperationHostTaskLogOutcomeCallable EmrClient::describeClusterOperationHostTaskLogCallable(const DescribeClusterOperationHostTaskLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOperationHostTaskLogOutcome()>>(
			[this, request]()
			{
			return this->describeClusterOperationHostTaskLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateScalingTaskGroupOutcome EmrClient::createScalingTaskGroup(const CreateScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingTaskGroupOutcome(CreateScalingTaskGroupResult(outcome.result()));
	else
		return CreateScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::createScalingTaskGroupAsync(const CreateScalingTaskGroupRequest& request, const CreateScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateScalingTaskGroupOutcomeCallable EmrClient::createScalingTaskGroupCallable(const CreateScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->createScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillFlowJobOutcome EmrClient::killFlowJob(const KillFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillFlowJobOutcome(KillFlowJobResult(outcome.result()));
	else
		return KillFlowJobOutcome(outcome.error());
}

void EmrClient::killFlowJobAsync(const KillFlowJobRequest& request, const KillFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillFlowJobOutcomeCallable EmrClient::killFlowJobCallable(const KillFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillFlowJobOutcome()>>(
			[this, request]()
			{
			return this->killFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeWorkspaceRepoSettingOutcome EmrClient::describeWorkspaceRepoSetting(const DescribeWorkspaceRepoSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWorkspaceRepoSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWorkspaceRepoSettingOutcome(DescribeWorkspaceRepoSettingResult(outcome.result()));
	else
		return DescribeWorkspaceRepoSettingOutcome(outcome.error());
}

void EmrClient::describeWorkspaceRepoSettingAsync(const DescribeWorkspaceRepoSettingRequest& request, const DescribeWorkspaceRepoSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWorkspaceRepoSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeWorkspaceRepoSettingOutcomeCallable EmrClient::describeWorkspaceRepoSettingCallable(const DescribeWorkspaceRepoSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWorkspaceRepoSettingOutcome()>>(
			[this, request]()
			{
			return this->describeWorkspaceRepoSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowOutcome EmrClient::describeFlow(const DescribeFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowOutcome(DescribeFlowResult(outcome.result()));
	else
		return DescribeFlowOutcome(outcome.error());
}

void EmrClient::describeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowOutcomeCallable EmrClient::describeFlowCallable(const DescribeFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowOutcome()>>(
			[this, request]()
			{
			return this->describeFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeDataSourceSchemaDatabaseOutcome EmrClient::describeDataSourceSchemaDatabase(const DescribeDataSourceSchemaDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceSchemaDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceSchemaDatabaseOutcome(DescribeDataSourceSchemaDatabaseResult(outcome.result()));
	else
		return DescribeDataSourceSchemaDatabaseOutcome(outcome.error());
}

void EmrClient::describeDataSourceSchemaDatabaseAsync(const DescribeDataSourceSchemaDatabaseRequest& request, const DescribeDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSourceSchemaDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeDataSourceSchemaDatabaseOutcomeCallable EmrClient::describeDataSourceSchemaDatabaseCallable(const DescribeDataSourceSchemaDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceSchemaDatabaseOutcome()>>(
			[this, request]()
			{
			return this->describeDataSourceSchemaDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeETLJobStageOutputSchemaOutcome EmrClient::describeETLJobStageOutputSchema(const DescribeETLJobStageOutputSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeETLJobStageOutputSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeETLJobStageOutputSchemaOutcome(DescribeETLJobStageOutputSchemaResult(outcome.result()));
	else
		return DescribeETLJobStageOutputSchemaOutcome(outcome.error());
}

void EmrClient::describeETLJobStageOutputSchemaAsync(const DescribeETLJobStageOutputSchemaRequest& request, const DescribeETLJobStageOutputSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeETLJobStageOutputSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeETLJobStageOutputSchemaOutcomeCallable EmrClient::describeETLJobStageOutputSchemaCallable(const DescribeETLJobStageOutputSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeETLJobStageOutputSchemaOutcome()>>(
			[this, request]()
			{
			return this->describeETLJobStageOutputSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserInputStatisticInfoOutcome EmrClient::getUserInputStatisticInfo(const GetUserInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInputStatisticInfoOutcome(GetUserInputStatisticInfoResult(outcome.result()));
	else
		return GetUserInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserInputStatisticInfoAsync(const GetUserInputStatisticInfoRequest& request, const GetUserInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserInputStatisticInfoOutcomeCallable EmrClient::getUserInputStatisticInfoCallable(const GetUserInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateDataSourceOutcome EmrClient::createDataSource(const CreateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataSourceOutcome(CreateDataSourceResult(outcome.result()));
	else
		return CreateDataSourceOutcome(outcome.error());
}

void EmrClient::createDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateDataSourceOutcomeCallable EmrClient::createDataSourceCallable(const CreateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyAlertContactOutcome EmrClient::modifyAlertContact(const ModifyAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAlertContactOutcome(ModifyAlertContactResult(outcome.result()));
	else
		return ModifyAlertContactOutcome(outcome.error());
}

void EmrClient::modifyAlertContactAsync(const ModifyAlertContactRequest& request, const ModifyAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyAlertContactOutcomeCallable EmrClient::modifyAlertContactCallable(const ModifyAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAlertContactOutcome()>>(
			[this, request]()
			{
			return this->modifyAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteAlertDingDingGroupsOutcome EmrClient::deleteAlertDingDingGroups(const DeleteAlertDingDingGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertDingDingGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertDingDingGroupsOutcome(DeleteAlertDingDingGroupsResult(outcome.result()));
	else
		return DeleteAlertDingDingGroupsOutcome(outcome.error());
}

void EmrClient::deleteAlertDingDingGroupsAsync(const DeleteAlertDingDingGroupsRequest& request, const DeleteAlertDingDingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertDingDingGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteAlertDingDingGroupsOutcomeCallable EmrClient::deleteAlertDingDingGroupsCallable(const DeleteAlertDingDingGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertDingDingGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertDingDingGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeWorkspaceResourceSettingOutcome EmrClient::describeWorkspaceResourceSetting(const DescribeWorkspaceResourceSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWorkspaceResourceSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWorkspaceResourceSettingOutcome(DescribeWorkspaceResourceSettingResult(outcome.result()));
	else
		return DescribeWorkspaceResourceSettingOutcome(outcome.error());
}

void EmrClient::describeWorkspaceResourceSettingAsync(const DescribeWorkspaceResourceSettingRequest& request, const DescribeWorkspaceResourceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWorkspaceResourceSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeWorkspaceResourceSettingOutcomeCallable EmrClient::describeWorkspaceResourceSettingCallable(const DescribeWorkspaceResourceSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWorkspaceResourceSettingOutcome()>>(
			[this, request]()
			{
			return this->describeWorkspaceResourceSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateResourceQueueOutcome EmrClient::createResourceQueue(const CreateResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceQueueOutcome(CreateResourceQueueResult(outcome.result()));
	else
		return CreateResourceQueueOutcome(outcome.error());
}

void EmrClient::createResourceQueueAsync(const CreateResourceQueueRequest& request, const CreateResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateResourceQueueOutcomeCallable EmrClient::createResourceQueueCallable(const CreateResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->createResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneETLJobOutcome EmrClient::cloneETLJob(const CloneETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneETLJobOutcome(CloneETLJobResult(outcome.result()));
	else
		return CloneETLJobOutcome(outcome.error());
}

void EmrClient::cloneETLJobAsync(const CloneETLJobRequest& request, const CloneETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneETLJobOutcomeCallable EmrClient::cloneETLJobCallable(const CloneETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneETLJobOutcome()>>(
			[this, request]()
			{
			return this->cloneETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListTablePartitionOutcome EmrClient::metastoreListTablePartition(const MetastoreListTablePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListTablePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListTablePartitionOutcome(MetastoreListTablePartitionResult(outcome.result()));
	else
		return MetastoreListTablePartitionOutcome(outcome.error());
}

void EmrClient::metastoreListTablePartitionAsync(const MetastoreListTablePartitionRequest& request, const MetastoreListTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListTablePartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListTablePartitionOutcomeCallable EmrClient::metastoreListTablePartitionCallable(const MetastoreListTablePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListTablePartitionOutcome()>>(
			[this, request]()
			{
			return this->metastoreListTablePartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyExecutionPlanScheduleInfoOutcome EmrClient::modifyExecutionPlanScheduleInfo(const ModifyExecutionPlanScheduleInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanScheduleInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanScheduleInfoOutcome(ModifyExecutionPlanScheduleInfoResult(outcome.result()));
	else
		return ModifyExecutionPlanScheduleInfoOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanScheduleInfoAsync(const ModifyExecutionPlanScheduleInfoRequest& request, const ModifyExecutionPlanScheduleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlanScheduleInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanScheduleInfoOutcomeCallable EmrClient::modifyExecutionPlanScheduleInfoCallable(const ModifyExecutionPlanScheduleInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanScheduleInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlanScheduleInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueOutputStatisticInfoOutcome EmrClient::getQueueOutputStatisticInfo(const GetQueueOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueOutputStatisticInfoOutcome(GetQueueOutputStatisticInfoResult(outcome.result()));
	else
		return GetQueueOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueOutputStatisticInfoAsync(const GetQueueOutputStatisticInfoRequest& request, const GetQueueOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueOutputStatisticInfoOutcomeCallable EmrClient::getQueueOutputStatisticInfoCallable(const GetQueueOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateExecutionPlanOutcome EmrClient::createExecutionPlan(const CreateExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExecutionPlanOutcome(CreateExecutionPlanResult(outcome.result()));
	else
		return CreateExecutionPlanOutcome(outcome.error());
}

void EmrClient::createExecutionPlanAsync(const CreateExecutionPlanRequest& request, const CreateExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateExecutionPlanOutcomeCallable EmrClient::createExecutionPlanCallable(const CreateExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->createExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeForAdminOutcome EmrClient::describeClusterResourcePoolSchedulerTypeForAdmin(const DescribeClusterResourcePoolSchedulerTypeForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeForAdminOutcome(DescribeClusterResourcePoolSchedulerTypeForAdminResult(outcome.result()));
	else
		return DescribeClusterResourcePoolSchedulerTypeForAdminOutcome(outcome.error());
}

void EmrClient::describeClusterResourcePoolSchedulerTypeForAdminAsync(const DescribeClusterResourcePoolSchedulerTypeForAdminRequest& request, const DescribeClusterResourcePoolSchedulerTypeForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterResourcePoolSchedulerTypeForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeForAdminOutcomeCallable EmrClient::describeClusterResourcePoolSchedulerTypeForAdminCallable(const DescribeClusterResourcePoolSchedulerTypeForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterResourcePoolSchedulerTypeForAdminOutcome()>>(
			[this, request]()
			{
			return this->describeClusterResourcePoolSchedulerTypeForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteAlertUserGroupsOutcome EmrClient::deleteAlertUserGroups(const DeleteAlertUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertUserGroupsOutcome(DeleteAlertUserGroupsResult(outcome.result()));
	else
		return DeleteAlertUserGroupsOutcome(outcome.error());
}

void EmrClient::deleteAlertUserGroupsAsync(const DeleteAlertUserGroupsRequest& request, const DeleteAlertUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteAlertUserGroupsOutcomeCallable EmrClient::deleteAlertUserGroupsCallable(const DeleteAlertUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListKafkaConsumerGroupOutcome EmrClient::metastoreListKafkaConsumerGroup(const MetastoreListKafkaConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListKafkaConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListKafkaConsumerGroupOutcome(MetastoreListKafkaConsumerGroupResult(outcome.result()));
	else
		return MetastoreListKafkaConsumerGroupOutcome(outcome.error());
}

void EmrClient::metastoreListKafkaConsumerGroupAsync(const MetastoreListKafkaConsumerGroupRequest& request, const MetastoreListKafkaConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListKafkaConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListKafkaConsumerGroupOutcomeCallable EmrClient::metastoreListKafkaConsumerGroupCallable(const MetastoreListKafkaConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListKafkaConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->metastoreListKafkaConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddResourceToUsersOutcome EmrClient::addResourceToUsers(const AddResourceToUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddResourceToUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddResourceToUsersOutcome(AddResourceToUsersResult(outcome.result()));
	else
		return AddResourceToUsersOutcome(outcome.error());
}

void EmrClient::addResourceToUsersAsync(const AddResourceToUsersRequest& request, const AddResourceToUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addResourceToUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddResourceToUsersOutcomeCallable EmrClient::addResourceToUsersCallable(const AddResourceToUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddResourceToUsersOutcome()>>(
			[this, request]()
			{
			return this->addResourceToUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SaveUserAccountInfoOutcome EmrClient::saveUserAccountInfo(const SaveUserAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveUserAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveUserAccountInfoOutcome(SaveUserAccountInfoResult(outcome.result()));
	else
		return SaveUserAccountInfoOutcome(outcome.error());
}

void EmrClient::saveUserAccountInfoAsync(const SaveUserAccountInfoRequest& request, const SaveUserAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveUserAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SaveUserAccountInfoOutcomeCallable EmrClient::saveUserAccountInfoCallable(const SaveUserAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveUserAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->saveUserAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteScalingRuleOutcome EmrClient::deleteScalingRule(const DeleteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingRuleOutcome(DeleteScalingRuleResult(outcome.result()));
	else
		return DeleteScalingRuleOutcome(outcome.error());
}

void EmrClient::deleteScalingRuleAsync(const DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteScalingRuleOutcomeCallable EmrClient::deleteScalingRuleCallable(const DeleteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBackupRuleOutcome EmrClient::createBackupRule(const CreateBackupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupRuleOutcome(CreateBackupRuleResult(outcome.result()));
	else
		return CreateBackupRuleOutcome(outcome.error());
}

void EmrClient::createBackupRuleAsync(const CreateBackupRuleRequest& request, const CreateBackupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBackupRuleOutcomeCallable EmrClient::createBackupRuleCallable(const CreateBackupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupRuleOutcome()>>(
			[this, request]()
			{
			return this->createBackupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowJobStatisticOutcome EmrClient::describeFlowJobStatistic(const DescribeFlowJobStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowJobStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowJobStatisticOutcome(DescribeFlowJobStatisticResult(outcome.result()));
	else
		return DescribeFlowJobStatisticOutcome(outcome.error());
}

void EmrClient::describeFlowJobStatisticAsync(const DescribeFlowJobStatisticRequest& request, const DescribeFlowJobStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowJobStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowJobStatisticOutcomeCallable EmrClient::describeFlowJobStatisticCallable(const DescribeFlowJobStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowJobStatisticOutcome()>>(
			[this, request]()
			{
			return this->describeFlowJobStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListKafkaBrokerOutcome EmrClient::listKafkaBroker(const ListKafkaBrokerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKafkaBrokerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKafkaBrokerOutcome(ListKafkaBrokerResult(outcome.result()));
	else
		return ListKafkaBrokerOutcome(outcome.error());
}

void EmrClient::listKafkaBrokerAsync(const ListKafkaBrokerRequest& request, const ListKafkaBrokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKafkaBroker(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListKafkaBrokerOutcomeCallable EmrClient::listKafkaBrokerCallable(const ListKafkaBrokerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKafkaBrokerOutcome()>>(
			[this, request]()
			{
			return this->listKafkaBroker(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseClusterHostGroupOutcome EmrClient::releaseClusterHostGroup(const ReleaseClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterHostGroupOutcome(ReleaseClusterHostGroupResult(outcome.result()));
	else
		return ReleaseClusterHostGroupOutcome(outcome.error());
}

void EmrClient::releaseClusterHostGroupAsync(const ReleaseClusterHostGroupRequest& request, const ReleaseClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseClusterHostGroupOutcomeCallable EmrClient::releaseClusterHostGroupCallable(const ReleaseClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListBackupsOutcome EmrClient::listBackups(const ListBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBackupsOutcome(ListBackupsResult(outcome.result()));
	else
		return ListBackupsOutcome(outcome.error());
}

void EmrClient::listBackupsAsync(const ListBackupsRequest& request, const ListBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListBackupsOutcomeCallable EmrClient::listBackupsCallable(const ListBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBackupsOutcome()>>(
			[this, request]()
			{
			return this->listBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOpsOperationOutcome EmrClient::listOpsOperation(const ListOpsOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOpsOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOpsOperationOutcome(ListOpsOperationResult(outcome.result()));
	else
		return ListOpsOperationOutcome(outcome.error());
}

void EmrClient::listOpsOperationAsync(const ListOpsOperationRequest& request, const ListOpsOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOpsOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOpsOperationOutcomeCallable EmrClient::listOpsOperationCallable(const ListOpsOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOpsOperationOutcome()>>(
			[this, request]()
			{
			return this->listOpsOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterHostGroupOutcome EmrClient::modifyClusterHostGroup(const ModifyClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterHostGroupOutcome(ModifyClusterHostGroupResult(outcome.result()));
	else
		return ModifyClusterHostGroupOutcome(outcome.error());
}

void EmrClient::modifyClusterHostGroupAsync(const ModifyClusterHostGroupRequest& request, const ModifyClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterHostGroupOutcomeCallable EmrClient::modifyClusterHostGroupCallable(const ModifyClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceLauncherLogOutcome EmrClient::describeFlowNodeInstanceLauncherLog(const DescribeFlowNodeInstanceLauncherLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceLauncherLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceLauncherLogOutcome(DescribeFlowNodeInstanceLauncherLogResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceLauncherLogOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceLauncherLogAsync(const DescribeFlowNodeInstanceLauncherLogRequest& request, const DescribeFlowNodeInstanceLauncherLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstanceLauncherLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceLauncherLogOutcomeCallable EmrClient::describeFlowNodeInstanceLauncherLogCallable(const DescribeFlowNodeInstanceLauncherLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceLauncherLogOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstanceLauncherLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeUserStatisticsOutcome EmrClient::describeUserStatistics(const DescribeUserStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserStatisticsOutcome(DescribeUserStatisticsResult(outcome.result()));
	else
		return DescribeUserStatisticsOutcome(outcome.error());
}

void EmrClient::describeUserStatisticsAsync(const DescribeUserStatisticsRequest& request, const DescribeUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeUserStatisticsOutcomeCallable EmrClient::describeUserStatisticsCallable(const DescribeUserStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterScriptOutcome EmrClient::deleteClusterScript(const DeleteClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterScriptOutcome(DeleteClusterScriptResult(outcome.result()));
	else
		return DeleteClusterScriptOutcome(outcome.error());
}

void EmrClient::deleteClusterScriptAsync(const DeleteClusterScriptRequest& request, const DeleteClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterScriptOutcomeCallable EmrClient::deleteClusterScriptCallable(const DeleteClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationOutcome EmrClient::listClusterOperation(const ListClusterOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationOutcome(ListClusterOperationResult(outcome.result()));
	else
		return ListClusterOperationOutcome(outcome.error());
}

void EmrClient::listClusterOperationAsync(const ListClusterOperationRequest& request, const ListClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationOutcomeCallable EmrClient::listClusterOperationCallable(const ListClusterOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateNavNodeOutcome EmrClient::updateNavNode(const UpdateNavNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNavNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNavNodeOutcome(UpdateNavNodeResult(outcome.result()));
	else
		return UpdateNavNodeOutcome(outcome.error());
}

void EmrClient::updateNavNodeAsync(const UpdateNavNodeRequest& request, const UpdateNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNavNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateNavNodeOutcomeCallable EmrClient::updateNavNodeCallable(const UpdateNavNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNavNodeOutcome()>>(
			[this, request]()
			{
			return this->updateNavNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneFlowJobOutcome EmrClient::cloneFlowJob(const CloneFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneFlowJobOutcome(CloneFlowJobResult(outcome.result()));
	else
		return CloneFlowJobOutcome(outcome.error());
}

void EmrClient::cloneFlowJobAsync(const CloneFlowJobRequest& request, const CloneFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneFlowJobOutcomeCallable EmrClient::cloneFlowJobCallable(const CloneFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneFlowJobOutcome()>>(
			[this, request]()
			{
			return this->cloneFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateResourcePoolOutcome EmrClient::createResourcePool(const CreateResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourcePoolOutcome(CreateResourcePoolResult(outcome.result()));
	else
		return CreateResourcePoolOutcome(outcome.error());
}

void EmrClient::createResourcePoolAsync(const CreateResourcePoolRequest& request, const CreateResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateResourcePoolOutcomeCallable EmrClient::createResourcePoolCallable(const CreateResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->createResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowJobOutcome EmrClient::createFlowJob(const CreateFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowJobOutcome(CreateFlowJobResult(outcome.result()));
	else
		return CreateFlowJobOutcome(outcome.error());
}

void EmrClient::createFlowJobAsync(const CreateFlowJobRequest& request, const CreateFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowJobOutcomeCallable EmrClient::createFlowJobCallable(const CreateFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowJobOutcome()>>(
			[this, request]()
			{
			return this->createFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::StartKafkaPreferredReplicaElectionOutcome EmrClient::startKafkaPreferredReplicaElection(const StartKafkaPreferredReplicaElectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartKafkaPreferredReplicaElectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartKafkaPreferredReplicaElectionOutcome(StartKafkaPreferredReplicaElectionResult(outcome.result()));
	else
		return StartKafkaPreferredReplicaElectionOutcome(outcome.error());
}

void EmrClient::startKafkaPreferredReplicaElectionAsync(const StartKafkaPreferredReplicaElectionRequest& request, const StartKafkaPreferredReplicaElectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startKafkaPreferredReplicaElection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::StartKafkaPreferredReplicaElectionOutcomeCallable EmrClient::startKafkaPreferredReplicaElectionCallable(const StartKafkaPreferredReplicaElectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartKafkaPreferredReplicaElectionOutcome()>>(
			[this, request]()
			{
			return this->startKafkaPreferredReplicaElection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigForAdminOutcome EmrClient::describeClusterServiceConfigForAdmin(const DescribeClusterServiceConfigForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigForAdminOutcome(DescribeClusterServiceConfigForAdminResult(outcome.result()));
	else
		return DescribeClusterServiceConfigForAdminOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigForAdminAsync(const DescribeClusterServiceConfigForAdminRequest& request, const DescribeClusterServiceConfigForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigForAdminOutcomeCallable EmrClient::describeClusterServiceConfigForAdminCallable(const DescribeClusterServiceConfigForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigForAdminOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterWithTemplateOutcome EmrClient::createClusterWithTemplate(const CreateClusterWithTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterWithTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterWithTemplateOutcome(CreateClusterWithTemplateResult(outcome.result()));
	else
		return CreateClusterWithTemplateOutcome(outcome.error());
}

void EmrClient::createClusterWithTemplateAsync(const CreateClusterWithTemplateRequest& request, const CreateClusterWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterWithTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterWithTemplateOutcomeCallable EmrClient::createClusterWithTemplateCallable(const CreateClusterWithTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterWithTemplateOutcome()>>(
			[this, request]()
			{
			return this->createClusterWithTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterAllOutcome EmrClient::listFlowClusterAll(const ListFlowClusterAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterAllOutcome(ListFlowClusterAllResult(outcome.result()));
	else
		return ListFlowClusterAllOutcome(outcome.error());
}

void EmrClient::listFlowClusterAllAsync(const ListFlowClusterAllRequest& request, const ListFlowClusterAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterAllOutcomeCallable EmrClient::listFlowClusterAllCallable(const ListFlowClusterAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterAllOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeKafkaReassignOutcome EmrClient::describeKafkaReassign(const DescribeKafkaReassignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKafkaReassignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKafkaReassignOutcome(DescribeKafkaReassignResult(outcome.result()));
	else
		return DescribeKafkaReassignOutcome(outcome.error());
}

void EmrClient::describeKafkaReassignAsync(const DescribeKafkaReassignRequest& request, const DescribeKafkaReassignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKafkaReassign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeKafkaReassignOutcomeCallable EmrClient::describeKafkaReassignCallable(const DescribeKafkaReassignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKafkaReassignOutcome()>>(
			[this, request]()
			{
			return this->describeKafkaReassign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetAuditLogsOutcome EmrClient::getAuditLogs(const GetAuditLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuditLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuditLogsOutcome(GetAuditLogsResult(outcome.result()));
	else
		return GetAuditLogsOutcome(outcome.error());
}

void EmrClient::getAuditLogsAsync(const GetAuditLogsRequest& request, const GetAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuditLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetAuditLogsOutcomeCallable EmrClient::getAuditLogsCallable(const GetAuditLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuditLogsOutcome()>>(
			[this, request]()
			{
			return this->getAuditLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNotesOutcome EmrClient::listNotes(const ListNotesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotesOutcome(ListNotesResult(outcome.result()));
	else
		return ListNotesOutcome(outcome.error());
}

void EmrClient::listNotesAsync(const ListNotesRequest& request, const ListNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNotesOutcomeCallable EmrClient::listNotesCallable(const ListNotesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotesOutcome()>>(
			[this, request]()
			{
			return this->listNotes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeDataSourceOutcome EmrClient::metastoreDescribeDataSource(const MetastoreDescribeDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeDataSourceOutcome(MetastoreDescribeDataSourceResult(outcome.result()));
	else
		return MetastoreDescribeDataSourceOutcome(outcome.error());
}

void EmrClient::metastoreDescribeDataSourceAsync(const MetastoreDescribeDataSourceRequest& request, const MetastoreDescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeDataSourceOutcomeCallable EmrClient::metastoreDescribeDataSourceCallable(const MetastoreDescribeDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeDataSourceOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListExecutionPlanInstanceTrendOutcome EmrClient::listExecutionPlanInstanceTrend(const ListExecutionPlanInstanceTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionPlanInstanceTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionPlanInstanceTrendOutcome(ListExecutionPlanInstanceTrendResult(outcome.result()));
	else
		return ListExecutionPlanInstanceTrendOutcome(outcome.error());
}

void EmrClient::listExecutionPlanInstanceTrendAsync(const ListExecutionPlanInstanceTrendRequest& request, const ListExecutionPlanInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionPlanInstanceTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutionPlanInstanceTrendOutcomeCallable EmrClient::listExecutionPlanInstanceTrendCallable(const ListExecutionPlanInstanceTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionPlanInstanceTrendOutcome()>>(
			[this, request]()
			{
			return this->listExecutionPlanInstanceTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResolveETLJobSqlSchemaOutcome EmrClient::resolveETLJobSqlSchema(const ResolveETLJobSqlSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResolveETLJobSqlSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResolveETLJobSqlSchemaOutcome(ResolveETLJobSqlSchemaResult(outcome.result()));
	else
		return ResolveETLJobSqlSchemaOutcome(outcome.error());
}

void EmrClient::resolveETLJobSqlSchemaAsync(const ResolveETLJobSqlSchemaRequest& request, const ResolveETLJobSqlSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resolveETLJobSqlSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResolveETLJobSqlSchemaOutcomeCallable EmrClient::resolveETLJobSqlSchemaCallable(const ResolveETLJobSqlSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResolveETLJobSqlSchemaOutcome()>>(
			[this, request]()
			{
			return this->resolveETLJobSqlSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateETLJobStageOutcome EmrClient::updateETLJobStage(const UpdateETLJobStageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateETLJobStageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateETLJobStageOutcome(UpdateETLJobStageResult(outcome.result()));
	else
		return UpdateETLJobStageOutcome(outcome.error());
}

void EmrClient::updateETLJobStageAsync(const UpdateETLJobStageRequest& request, const UpdateETLJobStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateETLJobStage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateETLJobStageOutcomeCallable EmrClient::updateETLJobStageCallable(const UpdateETLJobStageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateETLJobStageOutcome()>>(
			[this, request]()
			{
			return this->updateETLJobStage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SearchLogOutcome EmrClient::searchLog(const SearchLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchLogOutcome(SearchLogResult(outcome.result()));
	else
		return SearchLogOutcome(outcome.error());
}

void EmrClient::searchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SearchLogOutcomeCallable EmrClient::searchLogCallable(const SearchLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchLogOutcome()>>(
			[this, request]()
			{
			return this->searchLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RenderResourcePoolXmlOutcome EmrClient::renderResourcePoolXml(const RenderResourcePoolXmlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenderResourcePoolXmlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenderResourcePoolXmlOutcome(RenderResourcePoolXmlResult(outcome.result()));
	else
		return RenderResourcePoolXmlOutcome(outcome.error());
}

void EmrClient::renderResourcePoolXmlAsync(const RenderResourcePoolXmlRequest& request, const RenderResourcePoolXmlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renderResourcePoolXml(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RenderResourcePoolXmlOutcomeCallable EmrClient::renderResourcePoolXmlCallable(const RenderResourcePoolXmlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenderResourcePoolXmlOutcome()>>(
			[this, request]()
			{
			return this->renderResourcePoolXml(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyScalingTaskGroupOutcome EmrClient::modifyScalingTaskGroup(const ModifyScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingTaskGroupOutcome(ModifyScalingTaskGroupResult(outcome.result()));
	else
		return ModifyScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::modifyScalingTaskGroupAsync(const ModifyScalingTaskGroupRequest& request, const ModifyScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingTaskGroupOutcomeCallable EmrClient::modifyScalingTaskGroupCallable(const ModifyScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowProjectOutcome EmrClient::describeFlowProject(const DescribeFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowProjectOutcome(DescribeFlowProjectResult(outcome.result()));
	else
		return DescribeFlowProjectOutcome(outcome.error());
}

void EmrClient::describeFlowProjectAsync(const DescribeFlowProjectRequest& request, const DescribeFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowProjectOutcomeCallable EmrClient::describeFlowProjectCallable(const DescribeFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->describeFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteResourcePoolOutcome EmrClient::deleteResourcePool(const DeleteResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourcePoolOutcome(DeleteResourcePoolResult(outcome.result()));
	else
		return DeleteResourcePoolOutcome(outcome.error());
}

void EmrClient::deleteResourcePoolAsync(const DeleteResourcePoolRequest& request, const DeleteResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteResourcePoolOutcomeCallable EmrClient::deleteResourcePoolCallable(const DeleteResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->deleteResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryUserPoliciesOutcome EmrClient::queryUserPolicies(const QueryUserPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserPoliciesOutcome(QueryUserPoliciesResult(outcome.result()));
	else
		return QueryUserPoliciesOutcome(outcome.error());
}

void EmrClient::queryUserPoliciesAsync(const QueryUserPoliciesRequest& request, const QueryUserPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryUserPoliciesOutcomeCallable EmrClient::queryUserPoliciesCallable(const QueryUserPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserPoliciesOutcome()>>(
			[this, request]()
			{
			return this->queryUserPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowJobOutcome EmrClient::listFlowJob(const ListFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowJobOutcome(ListFlowJobResult(outcome.result()));
	else
		return ListFlowJobOutcome(outcome.error());
}

void EmrClient::listFlowJobAsync(const ListFlowJobRequest& request, const ListFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowJobOutcomeCallable EmrClient::listFlowJobCallable(const ListFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowJobOutcome()>>(
			[this, request]()
			{
			return this->listFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreUpdateKafkaTopicBatchOutcome EmrClient::metastoreUpdateKafkaTopicBatch(const MetastoreUpdateKafkaTopicBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreUpdateKafkaTopicBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreUpdateKafkaTopicBatchOutcome(MetastoreUpdateKafkaTopicBatchResult(outcome.result()));
	else
		return MetastoreUpdateKafkaTopicBatchOutcome(outcome.error());
}

void EmrClient::metastoreUpdateKafkaTopicBatchAsync(const MetastoreUpdateKafkaTopicBatchRequest& request, const MetastoreUpdateKafkaTopicBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreUpdateKafkaTopicBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreUpdateKafkaTopicBatchOutcomeCallable EmrClient::metastoreUpdateKafkaTopicBatchCallable(const MetastoreUpdateKafkaTopicBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreUpdateKafkaTopicBatchOutcome()>>(
			[this, request]()
			{
			return this->metastoreUpdateKafkaTopicBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeAvailableInstanceTypeOutcome EmrClient::describeAvailableInstanceType(const DescribeAvailableInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableInstanceTypeOutcome(DescribeAvailableInstanceTypeResult(outcome.result()));
	else
		return DescribeAvailableInstanceTypeOutcome(outcome.error());
}

void EmrClient::describeAvailableInstanceTypeAsync(const DescribeAvailableInstanceTypeRequest& request, const DescribeAvailableInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeAvailableInstanceTypeOutcomeCallable EmrClient::describeAvailableInstanceTypeCallable(const DescribeAvailableInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNavSubTreeOutcome EmrClient::listNavSubTree(const ListNavSubTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNavSubTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNavSubTreeOutcome(ListNavSubTreeResult(outcome.result()));
	else
		return ListNavSubTreeOutcome(outcome.error());
}

void EmrClient::listNavSubTreeAsync(const ListNavSubTreeRequest& request, const ListNavSubTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNavSubTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNavSubTreeOutcomeCallable EmrClient::listNavSubTreeCallable(const ListNavSubTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNavSubTreeOutcome()>>(
			[this, request]()
			{
			return this->listNavSubTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectOutcome EmrClient::createFlowProject(const CreateFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectOutcome(CreateFlowProjectResult(outcome.result()));
	else
		return CreateFlowProjectOutcome(outcome.error());
}

void EmrClient::createFlowProjectAsync(const CreateFlowProjectRequest& request, const CreateFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectOutcomeCallable EmrClient::createFlowProjectCallable(const CreateFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->createFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateVerificationCodeOutcome EmrClient::createVerificationCode(const CreateVerificationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVerificationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVerificationCodeOutcome(CreateVerificationCodeResult(outcome.result()));
	else
		return CreateVerificationCodeOutcome(outcome.error());
}

void EmrClient::createVerificationCodeAsync(const CreateVerificationCodeRequest& request, const CreateVerificationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVerificationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateVerificationCodeOutcomeCallable EmrClient::createVerificationCodeCallable(const CreateVerificationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVerificationCodeOutcome()>>(
			[this, request]()
			{
			return this->createVerificationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClustersOutcome EmrClient::listClusters(const ListClustersRequest &request) const
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

void EmrClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClustersOutcomeCallable EmrClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DetachClusterForNoteOutcome EmrClient::detachClusterForNote(const DetachClusterForNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachClusterForNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachClusterForNoteOutcome(DetachClusterForNoteResult(outcome.result()));
	else
		return DetachClusterForNoteOutcome(outcome.error());
}

void EmrClient::detachClusterForNoteAsync(const DetachClusterForNoteRequest& request, const DetachClusterForNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachClusterForNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DetachClusterForNoteOutcomeCallable EmrClient::detachClusterForNoteCallable(const DetachClusterForNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachClusterForNoteOutcome()>>(
			[this, request]()
			{
			return this->detachClusterForNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListRolesOutcome EmrClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void EmrClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListRolesOutcomeCallable EmrClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteBatchResourceUsersOutcome EmrClient::deleteBatchResourceUsers(const DeleteBatchResourceUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBatchResourceUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBatchResourceUsersOutcome(DeleteBatchResourceUsersResult(outcome.result()));
	else
		return DeleteBatchResourceUsersOutcome(outcome.error());
}

void EmrClient::deleteBatchResourceUsersAsync(const DeleteBatchResourceUsersRequest& request, const DeleteBatchResourceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBatchResourceUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteBatchResourceUsersOutcomeCallable EmrClient::deleteBatchResourceUsersCallable(const DeleteBatchResourceUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBatchResourceUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteBatchResourceUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceOutcome EmrClient::describeFlowNodeInstance(const DescribeFlowNodeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceOutcome(DescribeFlowNodeInstanceResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceAsync(const DescribeFlowNodeInstanceRequest& request, const DescribeFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceOutcomeCallable EmrClient::describeFlowNodeInstanceCallable(const DescribeFlowNodeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListStreamingSqlQueryOutcome EmrClient::listStreamingSqlQuery(const ListStreamingSqlQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStreamingSqlQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStreamingSqlQueryOutcome(ListStreamingSqlQueryResult(outcome.result()));
	else
		return ListStreamingSqlQueryOutcome(outcome.error());
}

void EmrClient::listStreamingSqlQueryAsync(const ListStreamingSqlQueryRequest& request, const ListStreamingSqlQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStreamingSqlQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListStreamingSqlQueryOutcomeCallable EmrClient::listStreamingSqlQueryCallable(const ListStreamingSqlQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStreamingSqlQueryOutcome()>>(
			[this, request]()
			{
			return this->listStreamingSqlQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeKafkaTopicOutcome EmrClient::metastoreDescribeKafkaTopic(const MetastoreDescribeKafkaTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeKafkaTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeKafkaTopicOutcome(MetastoreDescribeKafkaTopicResult(outcome.result()));
	else
		return MetastoreDescribeKafkaTopicOutcome(outcome.error());
}

void EmrClient::metastoreDescribeKafkaTopicAsync(const MetastoreDescribeKafkaTopicRequest& request, const MetastoreDescribeKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeKafkaTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeKafkaTopicOutcomeCallable EmrClient::metastoreDescribeKafkaTopicCallable(const MetastoreDescribeKafkaTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeKafkaTopicOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeKafkaTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingTaskGroupOutcome EmrClient::listScalingTaskGroup(const ListScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingTaskGroupOutcome(ListScalingTaskGroupResult(outcome.result()));
	else
		return ListScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::listScalingTaskGroupAsync(const ListScalingTaskGroupRequest& request, const ListScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingTaskGroupOutcomeCallable EmrClient::listScalingTaskGroupCallable(const ListScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->listScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyUserStatisticsOutcome EmrClient::modifyUserStatistics(const ModifyUserStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserStatisticsOutcome(ModifyUserStatisticsResult(outcome.result()));
	else
		return ModifyUserStatisticsOutcome(outcome.error());
}

void EmrClient::modifyUserStatisticsAsync(const ModifyUserStatisticsRequest& request, const ModifyUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyUserStatisticsOutcomeCallable EmrClient::modifyUserStatisticsCallable(const ModifyUserStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserStatisticsOutcome()>>(
			[this, request]()
			{
			return this->modifyUserStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowVariableCollectionOutcome EmrClient::modifyFlowVariableCollection(const ModifyFlowVariableCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowVariableCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowVariableCollectionOutcome(ModifyFlowVariableCollectionResult(outcome.result()));
	else
		return ModifyFlowVariableCollectionOutcome(outcome.error());
}

void EmrClient::modifyFlowVariableCollectionAsync(const ModifyFlowVariableCollectionRequest& request, const ModifyFlowVariableCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowVariableCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowVariableCollectionOutcomeCallable EmrClient::modifyFlowVariableCollectionCallable(const ModifyFlowVariableCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowVariableCollectionOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowVariableCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeETLJobInstanceOutcome EmrClient::describeETLJobInstance(const DescribeETLJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeETLJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeETLJobInstanceOutcome(DescribeETLJobInstanceResult(outcome.result()));
	else
		return DescribeETLJobInstanceOutcome(outcome.error());
}

void EmrClient::describeETLJobInstanceAsync(const DescribeETLJobInstanceRequest& request, const DescribeETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeETLJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeETLJobInstanceOutcomeCallable EmrClient::describeETLJobInstanceCallable(const DescribeETLJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeETLJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeETLJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateUserStatusOutcome EmrClient::updateUserStatus(const UpdateUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserStatusOutcome(UpdateUserStatusResult(outcome.result()));
	else
		return UpdateUserStatusOutcome(outcome.error());
}

void EmrClient::updateUserStatusAsync(const UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateUserStatusOutcomeCallable EmrClient::updateUserStatusCallable(const UpdateUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserStatusOutcome()>>(
			[this, request]()
			{
			return this->updateUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateUserOutcome EmrClient::updateUser(const UpdateUserRequest &request) const
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

void EmrClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateUserOutcomeCallable EmrClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUserPasswordOutcome EmrClient::createUserPassword(const CreateUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserPasswordOutcome(CreateUserPasswordResult(outcome.result()));
	else
		return CreateUserPasswordOutcome(outcome.error());
}

void EmrClient::createUserPasswordAsync(const CreateUserPasswordRequest& request, const CreateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUserPasswordOutcomeCallable EmrClient::createUserPasswordCallable(const CreateUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->createUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetFlowAuditLogsOutcome EmrClient::getFlowAuditLogs(const GetFlowAuditLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFlowAuditLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFlowAuditLogsOutcome(GetFlowAuditLogsResult(outcome.result()));
	else
		return GetFlowAuditLogsOutcome(outcome.error());
}

void EmrClient::getFlowAuditLogsAsync(const GetFlowAuditLogsRequest& request, const GetFlowAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFlowAuditLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetFlowAuditLogsOutcomeCallable EmrClient::getFlowAuditLogsCallable(const GetFlowAuditLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFlowAuditLogsOutcome()>>(
			[this, request]()
			{
			return this->getFlowAuditLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RefreshClusterResourcePoolForAdminOutcome EmrClient::refreshClusterResourcePoolForAdmin(const RefreshClusterResourcePoolForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshClusterResourcePoolForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshClusterResourcePoolForAdminOutcome(RefreshClusterResourcePoolForAdminResult(outcome.result()));
	else
		return RefreshClusterResourcePoolForAdminOutcome(outcome.error());
}

void EmrClient::refreshClusterResourcePoolForAdminAsync(const RefreshClusterResourcePoolForAdminRequest& request, const RefreshClusterResourcePoolForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshClusterResourcePoolForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RefreshClusterResourcePoolForAdminOutcomeCallable EmrClient::refreshClusterResourcePoolForAdminCallable(const RefreshClusterResourcePoolForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshClusterResourcePoolForAdminOutcome()>>(
			[this, request]()
			{
			return this->refreshClusterResourcePoolForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAlertDingDingGroupOutcome EmrClient::listAlertDingDingGroup(const ListAlertDingDingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertDingDingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertDingDingGroupOutcome(ListAlertDingDingGroupResult(outcome.result()));
	else
		return ListAlertDingDingGroupOutcome(outcome.error());
}

void EmrClient::listAlertDingDingGroupAsync(const ListAlertDingDingGroupRequest& request, const ListAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertDingDingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAlertDingDingGroupOutcomeCallable EmrClient::listAlertDingDingGroupCallable(const ListAlertDingDingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertDingDingGroupOutcome()>>(
			[this, request]()
			{
			return this->listAlertDingDingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneDataSourceOutcome EmrClient::cloneDataSource(const CloneDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneDataSourceOutcome(CloneDataSourceResult(outcome.result()));
	else
		return CloneDataSourceOutcome(outcome.error());
}

void EmrClient::cloneDataSourceAsync(const CloneDataSourceRequest& request, const CloneDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneDataSourceOutcomeCallable EmrClient::cloneDataSourceCallable(const CloneDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneDataSourceOutcome()>>(
			[this, request]()
			{
			return this->cloneDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowProjectClusterSettingOutcome EmrClient::describeFlowProjectClusterSetting(const DescribeFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowProjectClusterSettingOutcome(DescribeFlowProjectClusterSettingResult(outcome.result()));
	else
		return DescribeFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::describeFlowProjectClusterSettingAsync(const DescribeFlowProjectClusterSettingRequest& request, const DescribeFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowProjectClusterSettingOutcomeCallable EmrClient::describeFlowProjectClusterSettingCallable(const DescribeFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->describeFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SyncDataSourceSchemaTableOutcome EmrClient::syncDataSourceSchemaTable(const SyncDataSourceSchemaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDataSourceSchemaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDataSourceSchemaTableOutcome(SyncDataSourceSchemaTableResult(outcome.result()));
	else
		return SyncDataSourceSchemaTableOutcome(outcome.error());
}

void EmrClient::syncDataSourceSchemaTableAsync(const SyncDataSourceSchemaTableRequest& request, const SyncDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDataSourceSchemaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SyncDataSourceSchemaTableOutcomeCallable EmrClient::syncDataSourceSchemaTableCallable(const SyncDataSourceSchemaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDataSourceSchemaTableOutcome()>>(
			[this, request]()
			{
			return this->syncDataSourceSchemaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::TerminateClusterOperationOutcome EmrClient::terminateClusterOperation(const TerminateClusterOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateClusterOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateClusterOperationOutcome(TerminateClusterOperationResult(outcome.result()));
	else
		return TerminateClusterOperationOutcome(outcome.error());
}

void EmrClient::terminateClusterOperationAsync(const TerminateClusterOperationRequest& request, const TerminateClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateClusterOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TerminateClusterOperationOutcomeCallable EmrClient::terminateClusterOperationCallable(const TerminateClusterOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateClusterOperationOutcome()>>(
			[this, request]()
			{
			return this->terminateClusterOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateNavNodeOutcome EmrClient::createNavNode(const CreateNavNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNavNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNavNodeOutcome(CreateNavNodeResult(outcome.result()));
	else
		return CreateNavNodeOutcome(outcome.error());
}

void EmrClient::createNavNodeAsync(const CreateNavNodeRequest& request, const CreateNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNavNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateNavNodeOutcomeCallable EmrClient::createNavNodeCallable(const CreateNavNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNavNodeOutcome()>>(
			[this, request]()
			{
			return this->createNavNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteResourceUserOutcome EmrClient::deleteResourceUser(const DeleteResourceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceUserOutcome(DeleteResourceUserResult(outcome.result()));
	else
		return DeleteResourceUserOutcome(outcome.error());
}

void EmrClient::deleteResourceUserAsync(const DeleteResourceUserRequest& request, const DeleteResourceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteResourceUserOutcomeCallable EmrClient::deleteResourceUserCallable(const DeleteResourceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceUserOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectOutcome EmrClient::deleteFlowProject(const DeleteFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectOutcome(DeleteFlowProjectResult(outcome.result()));
	else
		return DeleteFlowProjectOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectAsync(const DeleteFlowProjectRequest& request, const DeleteFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectOutcomeCallable EmrClient::deleteFlowProjectCallable(const DeleteFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseClusterOutcome EmrClient::releaseCluster(const ReleaseClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterOutcome(ReleaseClusterResult(outcome.result()));
	else
		return ReleaseClusterOutcome(outcome.error());
}

void EmrClient::releaseClusterAsync(const ReleaseClusterRequest& request, const ReleaseClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseClusterOutcomeCallable EmrClient::releaseClusterCallable(const ReleaseClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterOutcome()>>(
			[this, request]()
			{
			return this->releaseCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListSupportedServiceNameOutcome EmrClient::listSupportedServiceName(const ListSupportedServiceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSupportedServiceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSupportedServiceNameOutcome(ListSupportedServiceNameResult(outcome.result()));
	else
		return ListSupportedServiceNameOutcome(outcome.error());
}

void EmrClient::listSupportedServiceNameAsync(const ListSupportedServiceNameRequest& request, const ListSupportedServiceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSupportedServiceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListSupportedServiceNameOutcomeCallable EmrClient::listSupportedServiceNameCallable(const ListSupportedServiceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSupportedServiceNameOutcome()>>(
			[this, request]()
			{
			return this->listSupportedServiceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RetryCreateUserPasswordOutcome EmrClient::retryCreateUserPassword(const RetryCreateUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryCreateUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryCreateUserPasswordOutcome(RetryCreateUserPasswordResult(outcome.result()));
	else
		return RetryCreateUserPasswordOutcome(outcome.error());
}

void EmrClient::retryCreateUserPasswordAsync(const RetryCreateUserPasswordRequest& request, const RetryCreateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryCreateUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RetryCreateUserPasswordOutcomeCallable EmrClient::retryCreateUserPasswordCallable(const RetryCreateUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryCreateUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->retryCreateUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::PlanHostNameOutcome EmrClient::planHostName(const PlanHostNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PlanHostNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PlanHostNameOutcome(PlanHostNameResult(outcome.result()));
	else
		return PlanHostNameOutcome(outcome.error());
}

void EmrClient::planHostNameAsync(const PlanHostNameRequest& request, const PlanHostNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, planHostName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::PlanHostNameOutcomeCallable EmrClient::planHostNameCallable(const PlanHostNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PlanHostNameOutcome()>>(
			[this, request]()
			{
			return this->planHostName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobInstanceWorkersOutcome EmrClient::listJobInstanceWorkers(const ListJobInstanceWorkersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobInstanceWorkersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobInstanceWorkersOutcome(ListJobInstanceWorkersResult(outcome.result()));
	else
		return ListJobInstanceWorkersOutcome(outcome.error());
}

void EmrClient::listJobInstanceWorkersAsync(const ListJobInstanceWorkersRequest& request, const ListJobInstanceWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobInstanceWorkers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobInstanceWorkersOutcomeCallable EmrClient::listJobInstanceWorkersCallable(const ListJobInstanceWorkersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobInstanceWorkersOutcome()>>(
			[this, request]()
			{
			return this->listJobInstanceWorkers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyHostPoolOutcome EmrClient::modifyHostPool(const ModifyHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHostPoolOutcome(ModifyHostPoolResult(outcome.result()));
	else
		return ModifyHostPoolOutcome(outcome.error());
}

void EmrClient::modifyHostPoolAsync(const ModifyHostPoolRequest& request, const ModifyHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyHostPoolOutcomeCallable EmrClient::modifyHostPoolCallable(const ModifyHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHostPoolOutcome()>>(
			[this, request]()
			{
			return this->modifyHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MigrateClusterHostGroupHostOutcome EmrClient::migrateClusterHostGroupHost(const MigrateClusterHostGroupHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateClusterHostGroupHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateClusterHostGroupHostOutcome(MigrateClusterHostGroupHostResult(outcome.result()));
	else
		return MigrateClusterHostGroupHostOutcome(outcome.error());
}

void EmrClient::migrateClusterHostGroupHostAsync(const MigrateClusterHostGroupHostRequest& request, const MigrateClusterHostGroupHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateClusterHostGroupHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MigrateClusterHostGroupHostOutcomeCallable EmrClient::migrateClusterHostGroupHostCallable(const MigrateClusterHostGroupHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateClusterHostGroupHostOutcome()>>(
			[this, request]()
			{
			return this->migrateClusterHostGroupHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListServiceLogOutcome EmrClient::listServiceLog(const ListServiceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceLogOutcome(ListServiceLogResult(outcome.result()));
	else
		return ListServiceLogOutcome(outcome.error());
}

void EmrClient::listServiceLogAsync(const ListServiceLogRequest& request, const ListServiceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListServiceLogOutcomeCallable EmrClient::listServiceLogCallable(const ListServiceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceLogOutcome()>>(
			[this, request]()
			{
			return this->listServiceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowCategoryTreeOutcome EmrClient::describeFlowCategoryTree(const DescribeFlowCategoryTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowCategoryTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowCategoryTreeOutcome(DescribeFlowCategoryTreeResult(outcome.result()));
	else
		return DescribeFlowCategoryTreeOutcome(outcome.error());
}

void EmrClient::describeFlowCategoryTreeAsync(const DescribeFlowCategoryTreeRequest& request, const DescribeFlowCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowCategoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowCategoryTreeOutcomeCallable EmrClient::describeFlowCategoryTreeCallable(const DescribeFlowCategoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowCategoryTreeOutcome()>>(
			[this, request]()
			{
			return this->describeFlowCategoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetBackPlanInfoOutcome EmrClient::getBackPlanInfo(const GetBackPlanInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBackPlanInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBackPlanInfoOutcome(GetBackPlanInfoResult(outcome.result()));
	else
		return GetBackPlanInfoOutcome(outcome.error());
}

void EmrClient::getBackPlanInfoAsync(const GetBackPlanInfoRequest& request, const GetBackPlanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBackPlanInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetBackPlanInfoOutcomeCallable EmrClient::getBackPlanInfoCallable(const GetBackPlanInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBackPlanInfoOutcome()>>(
			[this, request]()
			{
			return this->getBackPlanInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CancelETLJobReleaseOutcome EmrClient::cancelETLJobRelease(const CancelETLJobReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelETLJobReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelETLJobReleaseOutcome(CancelETLJobReleaseResult(outcome.result()));
	else
		return CancelETLJobReleaseOutcome(outcome.error());
}

void EmrClient::cancelETLJobReleaseAsync(const CancelETLJobReleaseRequest& request, const CancelETLJobReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelETLJobRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CancelETLJobReleaseOutcomeCallable EmrClient::cancelETLJobReleaseCallable(const CancelETLJobReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelETLJobReleaseOutcome()>>(
			[this, request]()
			{
			return this->cancelETLJobRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListStackOutcome EmrClient::listStack(const ListStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStackOutcome(ListStackResult(outcome.result()));
	else
		return ListStackOutcome(outcome.error());
}

void EmrClient::listStackAsync(const ListStackRequest& request, const ListStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListStackOutcomeCallable EmrClient::listStackCallable(const ListStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStackOutcome()>>(
			[this, request]()
			{
			return this->listStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterTagOutcome EmrClient::listClusterTag(const ListClusterTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTagOutcome(ListClusterTagResult(outcome.result()));
	else
		return ListClusterTagOutcome(outcome.error());
}

void EmrClient::listClusterTagAsync(const ListClusterTagRequest& request, const ListClusterTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterTagOutcomeCallable EmrClient::listClusterTagCallable(const ListClusterTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTagOutcome()>>(
			[this, request]()
			{
			return this->listClusterTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyJobExecutionPlanFolderOutcome EmrClient::modifyJobExecutionPlanFolder(const ModifyJobExecutionPlanFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyJobExecutionPlanFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyJobExecutionPlanFolderOutcome(ModifyJobExecutionPlanFolderResult(outcome.result()));
	else
		return ModifyJobExecutionPlanFolderOutcome(outcome.error());
}

void EmrClient::modifyJobExecutionPlanFolderAsync(const ModifyJobExecutionPlanFolderRequest& request, const ModifyJobExecutionPlanFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyJobExecutionPlanFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyJobExecutionPlanFolderOutcomeCallable EmrClient::modifyJobExecutionPlanFolderCallable(const ModifyJobExecutionPlanFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyJobExecutionPlanFolderOutcome()>>(
			[this, request]()
			{
			return this->modifyJobExecutionPlanFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyAlertUserGroupOutcome EmrClient::modifyAlertUserGroup(const ModifyAlertUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAlertUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAlertUserGroupOutcome(ModifyAlertUserGroupResult(outcome.result()));
	else
		return ModifyAlertUserGroupOutcome(outcome.error());
}

void EmrClient::modifyAlertUserGroupAsync(const ModifyAlertUserGroupRequest& request, const ModifyAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAlertUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyAlertUserGroupOutcomeCallable EmrClient::modifyAlertUserGroupCallable(const ModifyAlertUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAlertUserGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAlertUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListDatabasesOutcome EmrClient::metastoreListDatabases(const MetastoreListDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListDatabasesOutcome(MetastoreListDatabasesResult(outcome.result()));
	else
		return MetastoreListDatabasesOutcome(outcome.error());
}

void EmrClient::metastoreListDatabasesAsync(const MetastoreListDatabasesRequest& request, const MetastoreListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListDatabasesOutcomeCallable EmrClient::metastoreListDatabasesCallable(const MetastoreListDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListDatabasesOutcome()>>(
			[this, request]()
			{
			return this->metastoreListDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourceQueueOutcome EmrClient::modifyResourceQueue(const ModifyResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourceQueueOutcome(ModifyResourceQueueResult(outcome.result()));
	else
		return ModifyResourceQueueOutcome(outcome.error());
}

void EmrClient::modifyResourceQueueAsync(const ModifyResourceQueueRequest& request, const ModifyResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourceQueueOutcomeCallable EmrClient::modifyResourceQueueCallable(const ModifyResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeSecurityGroupAttributeOutcome EmrClient::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(DescribeSecurityGroupAttributeResult(outcome.result()));
	else
		return DescribeSecurityGroupAttributeOutcome(outcome.error());
}

void EmrClient::describeSecurityGroupAttributeAsync(const DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeSecurityGroupAttributeOutcomeCallable EmrClient::describeSecurityGroupAttributeCallable(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowCategoryOutcome EmrClient::listFlowCategory(const ListFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowCategoryOutcome(ListFlowCategoryResult(outcome.result()));
	else
		return ListFlowCategoryOutcome(outcome.error());
}

void EmrClient::listFlowCategoryAsync(const ListFlowCategoryRequest& request, const ListFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowCategoryOutcomeCallable EmrClient::listFlowCategoryCallable(const ListFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->listFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeExecutionPlanOutcome EmrClient::describeExecutionPlan(const DescribeExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExecutionPlanOutcome(DescribeExecutionPlanResult(outcome.result()));
	else
		return DescribeExecutionPlanOutcome(outcome.error());
}

void EmrClient::describeExecutionPlanAsync(const DescribeExecutionPlanRequest& request, const DescribeExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeExecutionPlanOutcomeCallable EmrClient::describeExecutionPlanCallable(const DescribeExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->describeExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectUserOutcome EmrClient::createFlowProjectUser(const CreateFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectUserOutcome(CreateFlowProjectUserResult(outcome.result()));
	else
		return CreateFlowProjectUserOutcome(outcome.error());
}

void EmrClient::createFlowProjectUserAsync(const CreateFlowProjectUserRequest& request, const CreateFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectUserOutcomeCallable EmrClient::createFlowProjectUserCallable(const CreateFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->createFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectClusterSettingOutcome EmrClient::deleteFlowProjectClusterSetting(const DeleteFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectClusterSettingOutcome(DeleteFlowProjectClusterSettingResult(outcome.result()));
	else
		return DeleteFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectClusterSettingAsync(const DeleteFlowProjectClusterSettingRequest& request, const DeleteFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectClusterSettingOutcomeCallable EmrClient::deleteFlowProjectClusterSettingCallable(const DeleteFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeUserGroupOutcome EmrClient::describeUserGroup(const DescribeUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserGroupOutcome(DescribeUserGroupResult(outcome.result()));
	else
		return DescribeUserGroupOutcome(outcome.error());
}

void EmrClient::describeUserGroupAsync(const DescribeUserGroupRequest& request, const DescribeUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeUserGroupOutcomeCallable EmrClient::describeUserGroupCallable(const DescribeUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserGroupOutcome()>>(
			[this, request]()
			{
			return this->describeUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteExecutionPlanOutcome EmrClient::deleteExecutionPlan(const DeleteExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExecutionPlanOutcome(DeleteExecutionPlanResult(outcome.result()));
	else
		return DeleteExecutionPlanOutcome(outcome.error());
}

void EmrClient::deleteExecutionPlanAsync(const DeleteExecutionPlanRequest& request, const DeleteExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteExecutionPlanOutcomeCallable EmrClient::deleteExecutionPlanCallable(const DeleteExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateUserGroupOutcome EmrClient::updateUserGroup(const UpdateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserGroupOutcome(UpdateUserGroupResult(outcome.result()));
	else
		return UpdateUserGroupOutcome(outcome.error());
}

void EmrClient::updateUserGroupAsync(const UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateUserGroupOutcomeCallable EmrClient::updateUserGroupCallable(const UpdateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->updateUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunParagraphOutcome EmrClient::runParagraph(const RunParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunParagraphOutcome(RunParagraphResult(outcome.result()));
	else
		return RunParagraphOutcome(outcome.error());
}

void EmrClient::runParagraphAsync(const RunParagraphRequest& request, const RunParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunParagraphOutcomeCallable EmrClient::runParagraphCallable(const RunParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunParagraphOutcome()>>(
			[this, request]()
			{
			return this->runParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SyncDataSourceSchemaDatabaseOutcome EmrClient::syncDataSourceSchemaDatabase(const SyncDataSourceSchemaDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDataSourceSchemaDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDataSourceSchemaDatabaseOutcome(SyncDataSourceSchemaDatabaseResult(outcome.result()));
	else
		return SyncDataSourceSchemaDatabaseOutcome(outcome.error());
}

void EmrClient::syncDataSourceSchemaDatabaseAsync(const SyncDataSourceSchemaDatabaseRequest& request, const SyncDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDataSourceSchemaDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SyncDataSourceSchemaDatabaseOutcomeCallable EmrClient::syncDataSourceSchemaDatabaseCallable(const SyncDataSourceSchemaDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDataSourceSchemaDatabaseOutcome()>>(
			[this, request]()
			{
			return this->syncDataSourceSchemaDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigOutcome EmrClient::describeClusterServiceConfig(const DescribeClusterServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigOutcome(DescribeClusterServiceConfigResult(outcome.result()));
	else
		return DescribeClusterServiceConfigOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigAsync(const DescribeClusterServiceConfigRequest& request, const DescribeClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigOutcomeCallable EmrClient::describeClusterServiceConfigCallable(const DescribeClusterServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyExecutionPlanClusterInfoOutcome EmrClient::modifyExecutionPlanClusterInfo(const ModifyExecutionPlanClusterInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanClusterInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanClusterInfoOutcome(ModifyExecutionPlanClusterInfoResult(outcome.result()));
	else
		return ModifyExecutionPlanClusterInfoOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanClusterInfoAsync(const ModifyExecutionPlanClusterInfoRequest& request, const ModifyExecutionPlanClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlanClusterInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanClusterInfoOutcomeCallable EmrClient::modifyExecutionPlanClusterInfoCallable(const ModifyExecutionPlanClusterInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanClusterInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlanClusterInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListUsersByConditionOutcome EmrClient::listUsersByCondition(const ListUsersByConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersByConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersByConditionOutcome(ListUsersByConditionResult(outcome.result()));
	else
		return ListUsersByConditionOutcome(outcome.error());
}

void EmrClient::listUsersByConditionAsync(const ListUsersByConditionRequest& request, const ListUsersByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersByCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListUsersByConditionOutcomeCallable EmrClient::listUsersByConditionCallable(const ListUsersByConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersByConditionOutcome()>>(
			[this, request]()
			{
			return this->listUsersByCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationHostTaskOutcome EmrClient::listClusterOperationHostTask(const ListClusterOperationHostTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationHostTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationHostTaskOutcome(ListClusterOperationHostTaskResult(outcome.result()));
	else
		return ListClusterOperationHostTaskOutcome(outcome.error());
}

void EmrClient::listClusterOperationHostTaskAsync(const ListClusterOperationHostTaskRequest& request, const ListClusterOperationHostTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperationHostTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationHostTaskOutcomeCallable EmrClient::listClusterOperationHostTaskCallable(const ListClusterOperationHostTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationHostTaskOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperationHostTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourcePoolOutcome EmrClient::modifyResourcePool(const ModifyResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourcePoolOutcome(ModifyResourcePoolResult(outcome.result()));
	else
		return ModifyResourcePoolOutcome(outcome.error());
}

void EmrClient::modifyResourcePoolAsync(const ModifyResourcePoolRequest& request, const ModifyResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourcePoolOutcomeCallable EmrClient::modifyResourcePoolCallable(const ModifyResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->modifyResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterScriptOutcome EmrClient::describeClusterScript(const DescribeClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterScriptOutcome(DescribeClusterScriptResult(outcome.result()));
	else
		return DescribeClusterScriptOutcome(outcome.error());
}

void EmrClient::describeClusterScriptAsync(const DescribeClusterScriptRequest& request, const DescribeClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterScriptOutcomeCallable EmrClient::describeClusterScriptCallable(const DescribeClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->describeClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListRequiredServiceOutcome EmrClient::listRequiredService(const ListRequiredServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRequiredServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRequiredServiceOutcome(ListRequiredServiceResult(outcome.result()));
	else
		return ListRequiredServiceOutcome(outcome.error());
}

void EmrClient::listRequiredServiceAsync(const ListRequiredServiceRequest& request, const ListRequiredServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRequiredService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListRequiredServiceOutcomeCallable EmrClient::listRequiredServiceCallable(const ListRequiredServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRequiredServiceOutcome()>>(
			[this, request]()
			{
			return this->listRequiredService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListBackupPlansOutcome EmrClient::listBackupPlans(const ListBackupPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBackupPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBackupPlansOutcome(ListBackupPlansResult(outcome.result()));
	else
		return ListBackupPlansOutcome(outcome.error());
}

void EmrClient::listBackupPlansAsync(const ListBackupPlansRequest& request, const ListBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBackupPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListBackupPlansOutcomeCallable EmrClient::listBackupPlansCallable(const ListBackupPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBackupPlansOutcome()>>(
			[this, request]()
			{
			return this->listBackupPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectUserOutcome EmrClient::listFlowProjectUser(const ListFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectUserOutcome(ListFlowProjectUserResult(outcome.result()));
	else
		return ListFlowProjectUserOutcome(outcome.error());
}

void EmrClient::listFlowProjectUserAsync(const ListFlowProjectUserRequest& request, const ListFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectUserOutcomeCallable EmrClient::listFlowProjectUserCallable(const ListFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->listFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SuspendExecutionPlanSchedulerOutcome EmrClient::suspendExecutionPlanScheduler(const SuspendExecutionPlanSchedulerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendExecutionPlanSchedulerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendExecutionPlanSchedulerOutcome(SuspendExecutionPlanSchedulerResult(outcome.result()));
	else
		return SuspendExecutionPlanSchedulerOutcome(outcome.error());
}

void EmrClient::suspendExecutionPlanSchedulerAsync(const SuspendExecutionPlanSchedulerRequest& request, const SuspendExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendExecutionPlanScheduler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SuspendExecutionPlanSchedulerOutcomeCallable EmrClient::suspendExecutionPlanSchedulerCallable(const SuspendExecutionPlanSchedulerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendExecutionPlanSchedulerOutcome()>>(
			[this, request]()
			{
			return this->suspendExecutionPlanScheduler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteUserGroupOutcome EmrClient::deleteUserGroup(const DeleteUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserGroupOutcome(DeleteUserGroupResult(outcome.result()));
	else
		return DeleteUserGroupOutcome(outcome.error());
}

void EmrClient::deleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteUserGroupOutcomeCallable EmrClient::deleteUserGroupCallable(const DeleteUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterHostGroupOutcome EmrClient::deleteClusterHostGroup(const DeleteClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterHostGroupOutcome(DeleteClusterHostGroupResult(outcome.result()));
	else
		return DeleteClusterHostGroupOutcome(outcome.error());
}

void EmrClient::deleteClusterHostGroupAsync(const DeleteClusterHostGroupRequest& request, const DeleteClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterHostGroupOutcomeCallable EmrClient::deleteClusterHostGroupCallable(const DeleteClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeDataSourceSchemaTableOutcome EmrClient::describeDataSourceSchemaTable(const DescribeDataSourceSchemaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceSchemaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceSchemaTableOutcome(DescribeDataSourceSchemaTableResult(outcome.result()));
	else
		return DescribeDataSourceSchemaTableOutcome(outcome.error());
}

void EmrClient::describeDataSourceSchemaTableAsync(const DescribeDataSourceSchemaTableRequest& request, const DescribeDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSourceSchemaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeDataSourceSchemaTableOutcomeCallable EmrClient::describeDataSourceSchemaTableCallable(const DescribeDataSourceSchemaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceSchemaTableOutcome()>>(
			[this, request]()
			{
			return this->describeDataSourceSchemaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::OperateExistsNodeClusterOutcome EmrClient::operateExistsNodeCluster(const OperateExistsNodeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateExistsNodeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateExistsNodeClusterOutcome(OperateExistsNodeClusterResult(outcome.result()));
	else
		return OperateExistsNodeClusterOutcome(outcome.error());
}

void EmrClient::operateExistsNodeClusterAsync(const OperateExistsNodeClusterRequest& request, const OperateExistsNodeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateExistsNodeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::OperateExistsNodeClusterOutcomeCallable EmrClient::operateExistsNodeClusterCallable(const OperateExistsNodeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateExistsNodeClusterOutcome()>>(
			[this, request]()
			{
			return this->operateExistsNodeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeDataSourceCommandOutcome EmrClient::describeDataSourceCommand(const DescribeDataSourceCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceCommandOutcome(DescribeDataSourceCommandResult(outcome.result()));
	else
		return DescribeDataSourceCommandOutcome(outcome.error());
}

void EmrClient::describeDataSourceCommandAsync(const DescribeDataSourceCommandRequest& request, const DescribeDataSourceCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSourceCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeDataSourceCommandOutcomeCallable EmrClient::describeDataSourceCommandCallable(const DescribeDataSourceCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceCommandOutcome()>>(
			[this, request]()
			{
			return this->describeDataSourceCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListUsersOutcome EmrClient::listUsers(const ListUsersRequest &request) const
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

void EmrClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListUsersOutcomeCallable EmrClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListResourcePoolOutcome EmrClient::listResourcePool(const ListResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcePoolOutcome(ListResourcePoolResult(outcome.result()));
	else
		return ListResourcePoolOutcome(outcome.error());
}

void EmrClient::listResourcePoolAsync(const ListResourcePoolRequest& request, const ListResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListResourcePoolOutcomeCallable EmrClient::listResourcePoolCallable(const ListResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->listResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterHostOutcome EmrClient::listFlowClusterHost(const ListFlowClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterHostOutcome(ListFlowClusterHostResult(outcome.result()));
	else
		return ListFlowClusterHostOutcome(outcome.error());
}

void EmrClient::listFlowClusterHostAsync(const ListFlowClusterHostRequest& request, const ListFlowClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterHostOutcomeCallable EmrClient::listFlowClusterHostCallable(const ListFlowClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterHostOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillFlowOutcome EmrClient::killFlow(const KillFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillFlowOutcome(KillFlowResult(outcome.result()));
	else
		return KillFlowOutcome(outcome.error());
}

void EmrClient::killFlowAsync(const KillFlowRequest& request, const KillFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillFlowOutcomeCallable EmrClient::killFlowCallable(const KillFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillFlowOutcome()>>(
			[this, request]()
			{
			return this->killFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunOpsCommandOutcome EmrClient::runOpsCommand(const RunOpsCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunOpsCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunOpsCommandOutcome(RunOpsCommandResult(outcome.result()));
	else
		return RunOpsCommandOutcome(outcome.error());
}

void EmrClient::runOpsCommandAsync(const RunOpsCommandRequest& request, const RunOpsCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runOpsCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunOpsCommandOutcomeCallable EmrClient::runOpsCommandCallable(const RunOpsCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunOpsCommandOutcome()>>(
			[this, request]()
			{
			return this->runOpsCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyExecutionPlanJobInfoOutcome EmrClient::modifyExecutionPlanJobInfo(const ModifyExecutionPlanJobInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanJobInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanJobInfoOutcome(ModifyExecutionPlanJobInfoResult(outcome.result()));
	else
		return ModifyExecutionPlanJobInfoOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanJobInfoAsync(const ModifyExecutionPlanJobInfoRequest& request, const ModifyExecutionPlanJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlanJobInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanJobInfoOutcomeCallable EmrClient::modifyExecutionPlanJobInfoCallable(const ModifyExecutionPlanJobInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanJobInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlanJobInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterTemplateOutcome EmrClient::deleteClusterTemplate(const DeleteClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterTemplateOutcome(DeleteClusterTemplateResult(outcome.result()));
	else
		return DeleteClusterTemplateOutcome(outcome.error());
}

void EmrClient::deleteClusterTemplateAsync(const DeleteClusterTemplateRequest& request, const DeleteClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterTemplateOutcomeCallable EmrClient::deleteClusterTemplateCallable(const DeleteClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListKafkaTopicStatisticsOutcome EmrClient::listKafkaTopicStatistics(const ListKafkaTopicStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKafkaTopicStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKafkaTopicStatisticsOutcome(ListKafkaTopicStatisticsResult(outcome.result()));
	else
		return ListKafkaTopicStatisticsOutcome(outcome.error());
}

void EmrClient::listKafkaTopicStatisticsAsync(const ListKafkaTopicStatisticsRequest& request, const ListKafkaTopicStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKafkaTopicStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListKafkaTopicStatisticsOutcomeCallable EmrClient::listKafkaTopicStatisticsCallable(const ListKafkaTopicStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKafkaTopicStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listKafkaTopicStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryInfoByTokenOutcome EmrClient::queryInfoByToken(const QueryInfoByTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInfoByTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInfoByTokenOutcome(QueryInfoByTokenResult(outcome.result()));
	else
		return QueryInfoByTokenOutcome(outcome.error());
}

void EmrClient::queryInfoByTokenAsync(const QueryInfoByTokenRequest& request, const QueryInfoByTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInfoByToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryInfoByTokenOutcomeCallable EmrClient::queryInfoByTokenCallable(const QueryInfoByTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInfoByTokenOutcome()>>(
			[this, request]()
			{
			return this->queryInfoByToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListDataSourceSchemaTableOutcome EmrClient::listDataSourceSchemaTable(const ListDataSourceSchemaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceSchemaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceSchemaTableOutcome(ListDataSourceSchemaTableResult(outcome.result()));
	else
		return ListDataSourceSchemaTableOutcome(outcome.error());
}

void EmrClient::listDataSourceSchemaTableAsync(const ListDataSourceSchemaTableRequest& request, const ListDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSourceSchemaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListDataSourceSchemaTableOutcomeCallable EmrClient::listDataSourceSchemaTableCallable(const ListDataSourceSchemaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceSchemaTableOutcome()>>(
			[this, request]()
			{
			return this->listDataSourceSchemaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateJobOutcome EmrClient::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void EmrClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateJobOutcomeCallable EmrClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetBackInfoOutcome EmrClient::getBackInfo(const GetBackInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBackInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBackInfoOutcome(GetBackInfoResult(outcome.result()));
	else
		return GetBackInfoOutcome(outcome.error());
}

void EmrClient::getBackInfoAsync(const GetBackInfoRequest& request, const GetBackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBackInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetBackInfoOutcomeCallable EmrClient::getBackInfoCallable(const GetBackInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBackInfoOutcome()>>(
			[this, request]()
			{
			return this->getBackInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AttachClusterForNoteOutcome EmrClient::attachClusterForNote(const AttachClusterForNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachClusterForNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachClusterForNoteOutcome(AttachClusterForNoteResult(outcome.result()));
	else
		return AttachClusterForNoteOutcome(outcome.error());
}

void EmrClient::attachClusterForNoteAsync(const AttachClusterForNoteRequest& request, const AttachClusterForNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachClusterForNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AttachClusterForNoteOutcomeCallable EmrClient::attachClusterForNoteCallable(const AttachClusterForNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachClusterForNoteOutcome()>>(
			[this, request]()
			{
			return this->attachClusterForNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListExecutionPlansOutcome EmrClient::listExecutionPlans(const ListExecutionPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionPlansOutcome(ListExecutionPlansResult(outcome.result()));
	else
		return ListExecutionPlansOutcome(outcome.error());
}

void EmrClient::listExecutionPlansAsync(const ListExecutionPlansRequest& request, const ListExecutionPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutionPlansOutcomeCallable EmrClient::listExecutionPlansCallable(const ListExecutionPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionPlansOutcome()>>(
			[this, request]()
			{
			return this->listExecutionPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobMigrateInfoOutcome EmrClient::listJobMigrateInfo(const ListJobMigrateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobMigrateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobMigrateInfoOutcome(ListJobMigrateInfoResult(outcome.result()));
	else
		return ListJobMigrateInfoOutcome(outcome.error());
}

void EmrClient::listJobMigrateInfoAsync(const ListJobMigrateInfoRequest& request, const ListJobMigrateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobMigrateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobMigrateInfoOutcomeCallable EmrClient::listJobMigrateInfoCallable(const ListJobMigrateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobMigrateInfoOutcome()>>(
			[this, request]()
			{
			return this->listJobMigrateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneFlowOutcome EmrClient::cloneFlow(const CloneFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneFlowOutcome(CloneFlowResult(outcome.result()));
	else
		return CloneFlowOutcome(outcome.error());
}

void EmrClient::cloneFlowAsync(const CloneFlowRequest& request, const CloneFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneFlowOutcomeCallable EmrClient::cloneFlowCallable(const CloneFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneFlowOutcome()>>(
			[this, request]()
			{
			return this->cloneFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrMainVersionOutcome EmrClient::listEmrMainVersion(const ListEmrMainVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrMainVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrMainVersionOutcome(ListEmrMainVersionResult(outcome.result()));
	else
		return ListEmrMainVersionOutcome(outcome.error());
}

void EmrClient::listEmrMainVersionAsync(const ListEmrMainVersionRequest& request, const ListEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrMainVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrMainVersionOutcomeCallable EmrClient::listEmrMainVersionCallable(const ListEmrMainVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrMainVersionOutcome()>>(
			[this, request]()
			{
			return this->listEmrMainVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterTemplateOutcome EmrClient::createClusterTemplate(const CreateClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterTemplateOutcome(CreateClusterTemplateResult(outcome.result()));
	else
		return CreateClusterTemplateOutcome(outcome.error());
}

void EmrClient::createClusterTemplateAsync(const CreateClusterTemplateRequest& request, const CreateClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterTemplateOutcomeCallable EmrClient::createClusterTemplateCallable(const CreateClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->createClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RestoreBackupOutcome EmrClient::restoreBackup(const RestoreBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreBackupOutcome(RestoreBackupResult(outcome.result()));
	else
		return RestoreBackupOutcome(outcome.error());
}

void EmrClient::restoreBackupAsync(const RestoreBackupRequest& request, const RestoreBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RestoreBackupOutcomeCallable EmrClient::restoreBackupCallable(const RestoreBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreBackupOutcome()>>(
			[this, request]()
			{
			return this->restoreBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAlertContactsOutcome EmrClient::listAlertContacts(const ListAlertContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertContactsOutcome(ListAlertContactsResult(outcome.result()));
	else
		return ListAlertContactsOutcome(outcome.error());
}

void EmrClient::listAlertContactsAsync(const ListAlertContactsRequest& request, const ListAlertContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAlertContactsOutcomeCallable EmrClient::listAlertContactsCallable(const ListAlertContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertContactsOutcome()>>(
			[this, request]()
			{
			return this->listAlertContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListSupportedServiceNameForAdminOutcome EmrClient::listSupportedServiceNameForAdmin(const ListSupportedServiceNameForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSupportedServiceNameForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSupportedServiceNameForAdminOutcome(ListSupportedServiceNameForAdminResult(outcome.result()));
	else
		return ListSupportedServiceNameForAdminOutcome(outcome.error());
}

void EmrClient::listSupportedServiceNameForAdminAsync(const ListSupportedServiceNameForAdminRequest& request, const ListSupportedServiceNameForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSupportedServiceNameForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListSupportedServiceNameForAdminOutcomeCallable EmrClient::listSupportedServiceNameForAdminCallable(const ListSupportedServiceNameForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSupportedServiceNameForAdminOutcome()>>(
			[this, request]()
			{
			return this->listSupportedServiceNameForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReassignKafkaOutcome EmrClient::reassignKafka(const ReassignKafkaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReassignKafkaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReassignKafkaOutcome(ReassignKafkaResult(outcome.result()));
	else
		return ReassignKafkaOutcome(outcome.error());
}

void EmrClient::reassignKafkaAsync(const ReassignKafkaRequest& request, const ReassignKafkaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reassignKafka(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReassignKafkaOutcomeCallable EmrClient::reassignKafkaCallable(const ReassignKafkaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReassignKafkaOutcome()>>(
			[this, request]()
			{
			return this->reassignKafka(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetHdfsCapacityStatisticInfoOutcome EmrClient::getHdfsCapacityStatisticInfo(const GetHdfsCapacityStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHdfsCapacityStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHdfsCapacityStatisticInfoOutcome(GetHdfsCapacityStatisticInfoResult(outcome.result()));
	else
		return GetHdfsCapacityStatisticInfoOutcome(outcome.error());
}

void EmrClient::getHdfsCapacityStatisticInfoAsync(const GetHdfsCapacityStatisticInfoRequest& request, const GetHdfsCapacityStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHdfsCapacityStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetHdfsCapacityStatisticInfoOutcomeCallable EmrClient::getHdfsCapacityStatisticInfoCallable(const GetHdfsCapacityStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHdfsCapacityStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getHdfsCapacityStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigTagForAdminOutcome EmrClient::describeClusterServiceConfigTagForAdmin(const DescribeClusterServiceConfigTagForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigTagForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigTagForAdminOutcome(DescribeClusterServiceConfigTagForAdminResult(outcome.result()));
	else
		return DescribeClusterServiceConfigTagForAdminOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigTagForAdminAsync(const DescribeClusterServiceConfigTagForAdminRequest& request, const DescribeClusterServiceConfigTagForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigTagForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigTagForAdminOutcomeCallable EmrClient::describeClusterServiceConfigTagForAdminCallable(const DescribeClusterServiceConfigTagForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigTagForAdminOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigTagForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResumeExecutionPlanSchedulerOutcome EmrClient::resumeExecutionPlanScheduler(const ResumeExecutionPlanSchedulerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeExecutionPlanSchedulerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeExecutionPlanSchedulerOutcome(ResumeExecutionPlanSchedulerResult(outcome.result()));
	else
		return ResumeExecutionPlanSchedulerOutcome(outcome.error());
}

void EmrClient::resumeExecutionPlanSchedulerAsync(const ResumeExecutionPlanSchedulerRequest& request, const ResumeExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeExecutionPlanScheduler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResumeExecutionPlanSchedulerOutcomeCallable EmrClient::resumeExecutionPlanSchedulerCallable(const ResumeExecutionPlanSchedulerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeExecutionPlanSchedulerOutcome()>>(
			[this, request]()
			{
			return this->resumeExecutionPlanScheduler(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobsOutcome EmrClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void EmrClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobsOutcomeCallable EmrClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrAvailableResourceOutcome EmrClient::listEmrAvailableResource(const ListEmrAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrAvailableResourceOutcome(ListEmrAvailableResourceResult(outcome.result()));
	else
		return ListEmrAvailableResourceOutcome(outcome.error());
}

void EmrClient::listEmrAvailableResourceAsync(const ListEmrAvailableResourceRequest& request, const ListEmrAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrAvailableResourceOutcomeCallable EmrClient::listEmrAvailableResourceCallable(const ListEmrAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->listEmrAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyHpHostOutcome EmrClient::modifyHpHost(const ModifyHpHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHpHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHpHostOutcome(ModifyHpHostResult(outcome.result()));
	else
		return ModifyHpHostOutcome(outcome.error());
}

void EmrClient::modifyHpHostAsync(const ModifyHpHostRequest& request, const ModifyHpHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHpHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyHpHostOutcomeCallable EmrClient::modifyHpHostCallable(const ModifyHpHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHpHostOutcome()>>(
			[this, request]()
			{
			return this->modifyHpHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseETLJobOutcome EmrClient::releaseETLJob(const ReleaseETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseETLJobOutcome(ReleaseETLJobResult(outcome.result()));
	else
		return ReleaseETLJobOutcome(outcome.error());
}

void EmrClient::releaseETLJobAsync(const ReleaseETLJobRequest& request, const ReleaseETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseETLJobOutcomeCallable EmrClient::releaseETLJobCallable(const ReleaseETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseETLJobOutcome()>>(
			[this, request]()
			{
			return this->releaseETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigTagOutcome EmrClient::describeClusterServiceConfigTag(const DescribeClusterServiceConfigTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigTagOutcome(DescribeClusterServiceConfigTagResult(outcome.result()));
	else
		return DescribeClusterServiceConfigTagOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigTagAsync(const DescribeClusterServiceConfigTagRequest& request, const DescribeClusterServiceConfigTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigTagOutcomeCallable EmrClient::describeClusterServiceConfigTagCallable(const DescribeClusterServiceConfigTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigTagOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunClusterServiceActionOutcome EmrClient::runClusterServiceAction(const RunClusterServiceActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunClusterServiceActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunClusterServiceActionOutcome(RunClusterServiceActionResult(outcome.result()));
	else
		return RunClusterServiceActionOutcome(outcome.error());
}

void EmrClient::runClusterServiceActionAsync(const RunClusterServiceActionRequest& request, const RunClusterServiceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runClusterServiceAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunClusterServiceActionOutcomeCallable EmrClient::runClusterServiceActionCallable(const RunClusterServiceActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunClusterServiceActionOutcome()>>(
			[this, request]()
			{
			return this->runClusterServiceAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SuspendFlowOutcome EmrClient::suspendFlow(const SuspendFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendFlowOutcome(SuspendFlowResult(outcome.result()));
	else
		return SuspendFlowOutcome(outcome.error());
}

void EmrClient::suspendFlowAsync(const SuspendFlowRequest& request, const SuspendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SuspendFlowOutcomeCallable EmrClient::suspendFlowCallable(const SuspendFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendFlowOutcome()>>(
			[this, request]()
			{
			return this->suspendFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterSupportServiceOutcome EmrClient::listClusterSupportService(const ListClusterSupportServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterSupportServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterSupportServiceOutcome(ListClusterSupportServiceResult(outcome.result()));
	else
		return ListClusterSupportServiceOutcome(outcome.error());
}

void EmrClient::listClusterSupportServiceAsync(const ListClusterSupportServiceRequest& request, const ListClusterSupportServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterSupportService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterSupportServiceOutcomeCallable EmrClient::listClusterSupportServiceCallable(const ListClusterSupportServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterSupportServiceOutcome()>>(
			[this, request]()
			{
			return this->listClusterSupportService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AuthorizeSecurityGroupOutcome EmrClient::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(AuthorizeSecurityGroupResult(outcome.result()));
	else
		return AuthorizeSecurityGroupOutcome(outcome.error());
}

void EmrClient::authorizeSecurityGroupAsync(const AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AuthorizeSecurityGroupOutcomeCallable EmrClient::authorizeSecurityGroupCallable(const AuthorizeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterTemplateOutcome EmrClient::modifyClusterTemplate(const ModifyClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterTemplateOutcome(ModifyClusterTemplateResult(outcome.result()));
	else
		return ModifyClusterTemplateOutcome(outcome.error());
}

void EmrClient::modifyClusterTemplateAsync(const ModifyClusterTemplateRequest& request, const ModifyClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterTemplateOutcomeCallable EmrClient::modifyClusterTemplateCallable(const ModifyClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterWithHostPoolOutcome EmrClient::createClusterWithHostPool(const CreateClusterWithHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterWithHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterWithHostPoolOutcome(CreateClusterWithHostPoolResult(outcome.result()));
	else
		return CreateClusterWithHostPoolOutcome(outcome.error());
}

void EmrClient::createClusterWithHostPoolAsync(const CreateClusterWithHostPoolRequest& request, const CreateClusterWithHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterWithHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterWithHostPoolOutcomeCallable EmrClient::createClusterWithHostPoolCallable(const CreateClusterWithHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterWithHostPoolOutcome()>>(
			[this, request]()
			{
			return this->createClusterWithHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ContextQueryLogOutcome EmrClient::contextQueryLog(const ContextQueryLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContextQueryLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContextQueryLogOutcome(ContextQueryLogResult(outcome.result()));
	else
		return ContextQueryLogOutcome(outcome.error());
}

void EmrClient::contextQueryLogAsync(const ContextQueryLogRequest& request, const ContextQueryLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, contextQueryLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ContextQueryLogOutcomeCallable EmrClient::contextQueryLogCallable(const ContextQueryLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContextQueryLogOutcome()>>(
			[this, request]()
			{
			return this->contextQueryLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationHostOutcome EmrClient::listClusterOperationHost(const ListClusterOperationHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationHostOutcome(ListClusterOperationHostResult(outcome.result()));
	else
		return ListClusterOperationHostOutcome(outcome.error());
}

void EmrClient::listClusterOperationHostAsync(const ListClusterOperationHostRequest& request, const ListClusterOperationHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperationHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationHostOutcomeCallable EmrClient::listClusterOperationHostCallable(const ListClusterOperationHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationHostOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperationHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingRuleOutcome EmrClient::listScalingRule(const ListScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingRuleOutcome(ListScalingRuleResult(outcome.result()));
	else
		return ListScalingRuleOutcome(outcome.error());
}

void EmrClient::listScalingRuleAsync(const ListScalingRuleRequest& request, const ListScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingRuleOutcomeCallable EmrClient::listScalingRuleCallable(const ListScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->listScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowOutcome EmrClient::deleteFlow(const DeleteFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowOutcome(DeleteFlowResult(outcome.result()));
	else
		return DeleteFlowOutcome(outcome.error());
}

void EmrClient::deleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowOutcomeCallable EmrClient::deleteFlowCallable(const DeleteFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteDataSourceOutcome EmrClient::deleteDataSource(const DeleteDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.result()));
	else
		return DeleteDataSourceOutcome(outcome.error());
}

void EmrClient::deleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteDataSourceOutcomeCallable EmrClient::deleteDataSourceCallable(const DeleteDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunETLJobOutcome EmrClient::runETLJob(const RunETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunETLJobOutcome(RunETLJobResult(outcome.result()));
	else
		return RunETLJobOutcome(outcome.error());
}

void EmrClient::runETLJobAsync(const RunETLJobRequest& request, const RunETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunETLJobOutcomeCallable EmrClient::runETLJobCallable(const RunETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunETLJobOutcome()>>(
			[this, request]()
			{
			return this->runETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectOutcome EmrClient::listFlowProject(const ListFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectOutcome(ListFlowProjectResult(outcome.result()));
	else
		return ListFlowProjectOutcome(outcome.error());
}

void EmrClient::listFlowProjectAsync(const ListFlowProjectRequest& request, const ListFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectOutcomeCallable EmrClient::listFlowProjectCallable(const ListFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->listFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceComponentHealthInfoOutcome EmrClient::listClusterServiceComponentHealthInfo(const ListClusterServiceComponentHealthInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceComponentHealthInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceComponentHealthInfoOutcome(ListClusterServiceComponentHealthInfoResult(outcome.result()));
	else
		return ListClusterServiceComponentHealthInfoOutcome(outcome.error());
}

void EmrClient::listClusterServiceComponentHealthInfoAsync(const ListClusterServiceComponentHealthInfoRequest& request, const ListClusterServiceComponentHealthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceComponentHealthInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceComponentHealthInfoOutcomeCallable EmrClient::listClusterServiceComponentHealthInfoCallable(const ListClusterServiceComponentHealthInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceComponentHealthInfoOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceComponentHealthInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateHostPoolOutcome EmrClient::createHostPool(const CreateHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHostPoolOutcome(CreateHostPoolResult(outcome.result()));
	else
		return CreateHostPoolOutcome(outcome.error());
}

void EmrClient::createHostPoolAsync(const CreateHostPoolRequest& request, const CreateHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateHostPoolOutcomeCallable EmrClient::createHostPoolCallable(const CreateHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHostPoolOutcome()>>(
			[this, request]()
			{
			return this->createHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyAlertDingDingGroupOutcome EmrClient::modifyAlertDingDingGroup(const ModifyAlertDingDingGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAlertDingDingGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAlertDingDingGroupOutcome(ModifyAlertDingDingGroupResult(outcome.result()));
	else
		return ModifyAlertDingDingGroupOutcome(outcome.error());
}

void EmrClient::modifyAlertDingDingGroupAsync(const ModifyAlertDingDingGroupRequest& request, const ModifyAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAlertDingDingGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyAlertDingDingGroupOutcomeCallable EmrClient::modifyAlertDingDingGroupCallable(const ModifyAlertDingDingGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAlertDingDingGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAlertDingDingGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowJobHistoryOutcome EmrClient::listFlowJobHistory(const ListFlowJobHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowJobHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowJobHistoryOutcome(ListFlowJobHistoryResult(outcome.result()));
	else
		return ListFlowJobHistoryOutcome(outcome.error());
}

void EmrClient::listFlowJobHistoryAsync(const ListFlowJobHistoryRequest& request, const ListFlowJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowJobHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowJobHistoryOutcomeCallable EmrClient::listFlowJobHistoryCallable(const ListFlowJobHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowJobHistoryOutcome()>>(
			[this, request]()
			{
			return this->listFlowJobHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateETLJobOutcome EmrClient::createETLJob(const CreateETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateETLJobOutcome(CreateETLJobResult(outcome.result()));
	else
		return CreateETLJobOutcome(outcome.error());
}

void EmrClient::createETLJobAsync(const CreateETLJobRequest& request, const CreateETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateETLJobOutcomeCallable EmrClient::createETLJobCallable(const CreateETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateETLJobOutcome()>>(
			[this, request]()
			{
			return this->createETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterScriptOutcome EmrClient::createClusterScript(const CreateClusterScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterScriptOutcome(CreateClusterScriptResult(outcome.result()));
	else
		return CreateClusterScriptOutcome(outcome.error());
}

void EmrClient::createClusterScriptAsync(const CreateClusterScriptRequest& request, const CreateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterScriptOutcomeCallable EmrClient::createClusterScriptCallable(const CreateClusterScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterScriptOutcome()>>(
			[this, request]()
			{
			return this->createClusterScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SubmitFlowOutcome EmrClient::submitFlow(const SubmitFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFlowOutcome(SubmitFlowResult(outcome.result()));
	else
		return SubmitFlowOutcome(outcome.error());
}

void EmrClient::submitFlowAsync(const SubmitFlowRequest& request, const SubmitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SubmitFlowOutcomeCallable EmrClient::submitFlowCallable(const SubmitFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFlowOutcome()>>(
			[this, request]()
			{
			return this->submitFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResumeFlowOutcome EmrClient::resumeFlow(const ResumeFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeFlowOutcome(ResumeFlowResult(outcome.result()));
	else
		return ResumeFlowOutcome(outcome.error());
}

void EmrClient::resumeFlowAsync(const ResumeFlowRequest& request, const ResumeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResumeFlowOutcomeCallable EmrClient::resumeFlowCallable(const ResumeFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeFlowOutcome()>>(
			[this, request]()
			{
			return this->resumeFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectByIdOutcome EmrClient::deleteFlowProjectById(const DeleteFlowProjectByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectByIdOutcome(DeleteFlowProjectByIdResult(outcome.result()));
	else
		return DeleteFlowProjectByIdOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectByIdAsync(const DeleteFlowProjectByIdRequest& request, const DeleteFlowProjectByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProjectById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectByIdOutcomeCallable EmrClient::deleteFlowProjectByIdCallable(const DeleteFlowProjectByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectByIdOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProjectById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::OfflineKafkaBrokerOutcome EmrClient::offlineKafkaBroker(const OfflineKafkaBrokerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineKafkaBrokerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineKafkaBrokerOutcome(OfflineKafkaBrokerResult(outcome.result()));
	else
		return OfflineKafkaBrokerOutcome(outcome.error());
}

void EmrClient::offlineKafkaBrokerAsync(const OfflineKafkaBrokerRequest& request, const OfflineKafkaBrokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineKafkaBroker(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::OfflineKafkaBrokerOutcomeCallable EmrClient::offlineKafkaBrokerCallable(const OfflineKafkaBrokerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineKafkaBrokerOutcome()>>(
			[this, request]()
			{
			return this->offlineKafkaBroker(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeParagraphOutcome EmrClient::describeParagraph(const DescribeParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParagraphOutcome(DescribeParagraphResult(outcome.result()));
	else
		return DescribeParagraphOutcome(outcome.error());
}

void EmrClient::describeParagraphAsync(const DescribeParagraphRequest& request, const DescribeParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeParagraphOutcomeCallable EmrClient::describeParagraphCallable(const DescribeParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParagraphOutcome()>>(
			[this, request]()
			{
			return this->describeParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreCreateDatabaseOutcome EmrClient::metastoreCreateDatabase(const MetastoreCreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreCreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreCreateDatabaseOutcome(MetastoreCreateDatabaseResult(outcome.result()));
	else
		return MetastoreCreateDatabaseOutcome(outcome.error());
}

void EmrClient::metastoreCreateDatabaseAsync(const MetastoreCreateDatabaseRequest& request, const MetastoreCreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreCreateDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreCreateDatabaseOutcomeCallable EmrClient::metastoreCreateDatabaseCallable(const MetastoreCreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreCreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->metastoreCreateDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowJobOutcome EmrClient::deleteFlowJob(const DeleteFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowJobOutcome(DeleteFlowJobResult(outcome.result()));
	else
		return DeleteFlowJobOutcome(outcome.error());
}

void EmrClient::deleteFlowJobAsync(const DeleteFlowJobRequest& request, const DeleteFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowJobOutcomeCallable EmrClient::deleteFlowJobCallable(const DeleteFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowJobOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RefreshClusterResourcePoolOutcome EmrClient::refreshClusterResourcePool(const RefreshClusterResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshClusterResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshClusterResourcePoolOutcome(RefreshClusterResourcePoolResult(outcome.result()));
	else
		return RefreshClusterResourcePoolOutcome(outcome.error());
}

void EmrClient::refreshClusterResourcePoolAsync(const RefreshClusterResourcePoolRequest& request, const RefreshClusterResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshClusterResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RefreshClusterResourcePoolOutcomeCallable EmrClient::refreshClusterResourcePoolCallable(const RefreshClusterResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshClusterResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->refreshClusterResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateKafkaReassignParamOutcome EmrClient::updateKafkaReassignParam(const UpdateKafkaReassignParamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKafkaReassignParamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKafkaReassignParamOutcome(UpdateKafkaReassignParamResult(outcome.result()));
	else
		return UpdateKafkaReassignParamOutcome(outcome.error());
}

void EmrClient::updateKafkaReassignParamAsync(const UpdateKafkaReassignParamRequest& request, const UpdateKafkaReassignParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKafkaReassignParam(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateKafkaReassignParamOutcomeCallable EmrClient::updateKafkaReassignParamCallable(const UpdateKafkaReassignParamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKafkaReassignParamOutcome()>>(
			[this, request]()
			{
			return this->updateKafkaReassignParam(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyJobOutcome EmrClient::modifyJob(const ModifyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyJobOutcome(ModifyJobResult(outcome.result()));
	else
		return ModifyJobOutcome(outcome.error());
}

void EmrClient::modifyJobAsync(const ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyJobOutcomeCallable EmrClient::modifyJobCallable(const ModifyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyJobOutcome()>>(
			[this, request]()
			{
			return this->modifyJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowJobOutcome EmrClient::describeFlowJob(const DescribeFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowJobOutcome(DescribeFlowJobResult(outcome.result()));
	else
		return DescribeFlowJobOutcome(outcome.error());
}

void EmrClient::describeFlowJobAsync(const DescribeFlowJobRequest& request, const DescribeFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowJobOutcomeCallable EmrClient::describeFlowJobCallable(const DescribeFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowJobOutcome()>>(
			[this, request]()
			{
			return this->describeFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetMetadataTypeListOutcome EmrClient::getMetadataTypeList(const GetMetadataTypeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetadataTypeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetadataTypeListOutcome(GetMetadataTypeListResult(outcome.result()));
	else
		return GetMetadataTypeListOutcome(outcome.error());
}

void EmrClient::getMetadataTypeListAsync(const GetMetadataTypeListRequest& request, const GetMetadataTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetadataTypeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetMetadataTypeListOutcomeCallable EmrClient::getMetadataTypeListCallable(const GetMetadataTypeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetadataTypeListOutcome()>>(
			[this, request]()
			{
			return this->getMetadataTypeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreRetryTaskOutcome EmrClient::metastoreRetryTask(const MetastoreRetryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreRetryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreRetryTaskOutcome(MetastoreRetryTaskResult(outcome.result()));
	else
		return MetastoreRetryTaskOutcome(outcome.error());
}

void EmrClient::metastoreRetryTaskAsync(const MetastoreRetryTaskRequest& request, const MetastoreRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreRetryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreRetryTaskOutcomeCallable EmrClient::metastoreRetryTaskCallable(const MetastoreRetryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreRetryTaskOutcome()>>(
			[this, request]()
			{
			return this->metastoreRetryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RerunFlowOutcome EmrClient::rerunFlow(const RerunFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunFlowOutcome(RerunFlowResult(outcome.result()));
	else
		return RerunFlowOutcome(outcome.error());
}

void EmrClient::rerunFlowAsync(const RerunFlowRequest& request, const RerunFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RerunFlowOutcomeCallable EmrClient::rerunFlowCallable(const RerunFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunFlowOutcome()>>(
			[this, request]()
			{
			return this->rerunFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBackupOutcome EmrClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void EmrClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBackupOutcomeCallable EmrClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListKafkaReassignOutcome EmrClient::listKafkaReassign(const ListKafkaReassignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKafkaReassignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKafkaReassignOutcome(ListKafkaReassignResult(outcome.result()));
	else
		return ListKafkaReassignOutcome(outcome.error());
}

void EmrClient::listKafkaReassignAsync(const ListKafkaReassignRequest& request, const ListKafkaReassignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKafkaReassign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListKafkaReassignOutcomeCallable EmrClient::listKafkaReassignCallable(const ListKafkaReassignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKafkaReassignOutcome()>>(
			[this, request]()
			{
			return this->listKafkaReassign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterV2Outcome EmrClient::describeClusterV2(const DescribeClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterV2Outcome(DescribeClusterV2Result(outcome.result()));
	else
		return DescribeClusterV2Outcome(outcome.error());
}

void EmrClient::describeClusterV2Async(const DescribeClusterV2Request& request, const DescribeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterV2OutcomeCallable EmrClient::describeClusterV2Callable(const DescribeClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterV2Outcome()>>(
			[this, request]()
			{
			return this->describeClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResizeClusterWithHostPoolOutcome EmrClient::resizeClusterWithHostPool(const ResizeClusterWithHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeClusterWithHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeClusterWithHostPoolOutcome(ResizeClusterWithHostPoolResult(outcome.result()));
	else
		return ResizeClusterWithHostPoolOutcome(outcome.error());
}

void EmrClient::resizeClusterWithHostPoolAsync(const ResizeClusterWithHostPoolRequest& request, const ResizeClusterWithHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeClusterWithHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResizeClusterWithHostPoolOutcomeCallable EmrClient::resizeClusterWithHostPoolCallable(const ResizeClusterWithHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeClusterWithHostPoolOutcome()>>(
			[this, request]()
			{
			return this->resizeClusterWithHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectClusterSettingOutcome EmrClient::createFlowProjectClusterSetting(const CreateFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectClusterSettingOutcome(CreateFlowProjectClusterSettingResult(outcome.result()));
	else
		return CreateFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::createFlowProjectClusterSettingAsync(const CreateFlowProjectClusterSettingRequest& request, const CreateFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectClusterSettingOutcomeCallable EmrClient::createFlowProjectClusterSettingCallable(const CreateFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->createFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterScriptsOutcome EmrClient::listClusterScripts(const ListClusterScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterScriptsOutcome(ListClusterScriptsResult(outcome.result()));
	else
		return ListClusterScriptsOutcome(outcome.error());
}

void EmrClient::listClusterScriptsAsync(const ListClusterScriptsRequest& request, const ListClusterScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterScriptsOutcomeCallable EmrClient::listClusterScriptsCallable(const ListClusterScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterScriptsOutcome()>>(
			[this, request]()
			{
			return this->listClusterScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowInstanceOutcome EmrClient::describeFlowInstance(const DescribeFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowInstanceOutcome(DescribeFlowInstanceResult(outcome.result()));
	else
		return DescribeFlowInstanceOutcome(outcome.error());
}

void EmrClient::describeFlowInstanceAsync(const DescribeFlowInstanceRequest& request, const DescribeFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowInstanceOutcomeCallable EmrClient::describeFlowInstanceCallable(const DescribeFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteUserResourceRoleOutcome EmrClient::deleteUserResourceRole(const DeleteUserResourceRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserResourceRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserResourceRoleOutcome(DeleteUserResourceRoleResult(outcome.result()));
	else
		return DeleteUserResourceRoleOutcome(outcome.error());
}

void EmrClient::deleteUserResourceRoleAsync(const DeleteUserResourceRoleRequest& request, const DeleteUserResourceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserResourceRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteUserResourceRoleOutcomeCallable EmrClient::deleteUserResourceRoleCallable(const DeleteUserResourceRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserResourceRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteUserResourceRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListETLJobReleaseOutcome EmrClient::listETLJobRelease(const ListETLJobReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListETLJobReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListETLJobReleaseOutcome(ListETLJobReleaseResult(outcome.result()));
	else
		return ListETLJobReleaseOutcome(outcome.error());
}

void EmrClient::listETLJobReleaseAsync(const ListETLJobReleaseRequest& request, const ListETLJobReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listETLJobRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListETLJobReleaseOutcomeCallable EmrClient::listETLJobReleaseCallable(const ListETLJobReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListETLJobReleaseOutcome()>>(
			[this, request]()
			{
			return this->listETLJobRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateAlertContactOutcome EmrClient::createAlertContact(const CreateAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertContactOutcome(CreateAlertContactResult(outcome.result()));
	else
		return CreateAlertContactOutcome(outcome.error());
}

void EmrClient::createAlertContactAsync(const CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateAlertContactOutcomeCallable EmrClient::createAlertContactCallable(const CreateAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertContactOutcome()>>(
			[this, request]()
			{
			return this->createAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreModifyDataResourceOutcome EmrClient::metastoreModifyDataResource(const MetastoreModifyDataResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreModifyDataResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreModifyDataResourceOutcome(MetastoreModifyDataResourceResult(outcome.result()));
	else
		return MetastoreModifyDataResourceOutcome(outcome.error());
}

void EmrClient::metastoreModifyDataResourceAsync(const MetastoreModifyDataResourceRequest& request, const MetastoreModifyDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreModifyDataResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreModifyDataResourceOutcomeCallable EmrClient::metastoreModifyDataResourceCallable(const MetastoreModifyDataResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreModifyDataResourceOutcome()>>(
			[this, request]()
			{
			return this->metastoreModifyDataResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListExecutePlanMigrateInfoOutcome EmrClient::listExecutePlanMigrateInfo(const ListExecutePlanMigrateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutePlanMigrateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutePlanMigrateInfoOutcome(ListExecutePlanMigrateInfoResult(outcome.result()));
	else
		return ListExecutePlanMigrateInfoOutcome(outcome.error());
}

void EmrClient::listExecutePlanMigrateInfoAsync(const ListExecutePlanMigrateInfoRequest& request, const ListExecutePlanMigrateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutePlanMigrateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutePlanMigrateInfoOutcomeCallable EmrClient::listExecutePlanMigrateInfoCallable(const ListExecutePlanMigrateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutePlanMigrateInfoOutcome()>>(
			[this, request]()
			{
			return this->listExecutePlanMigrateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResumeExecutionPlanInstanceOutcome EmrClient::resumeExecutionPlanInstance(const ResumeExecutionPlanInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeExecutionPlanInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeExecutionPlanInstanceOutcome(ResumeExecutionPlanInstanceResult(outcome.result()));
	else
		return ResumeExecutionPlanInstanceOutcome(outcome.error());
}

void EmrClient::resumeExecutionPlanInstanceAsync(const ResumeExecutionPlanInstanceRequest& request, const ResumeExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeExecutionPlanInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResumeExecutionPlanInstanceOutcomeCallable EmrClient::resumeExecutionPlanInstanceCallable(const ResumeExecutionPlanInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeExecutionPlanInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeExecutionPlanInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateParagraphOutcome EmrClient::createParagraph(const CreateParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParagraphOutcome(CreateParagraphResult(outcome.result()));
	else
		return CreateParagraphOutcome(outcome.error());
}

void EmrClient::createParagraphAsync(const CreateParagraphRequest& request, const CreateParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateParagraphOutcomeCallable EmrClient::createParagraphCallable(const CreateParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParagraphOutcome()>>(
			[this, request]()
			{
			return this->createParagraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOpsCommandResultOnceOutcome EmrClient::getOpsCommandResultOnce(const GetOpsCommandResultOnceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpsCommandResultOnceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpsCommandResultOnceOutcome(GetOpsCommandResultOnceResult(outcome.result()));
	else
		return GetOpsCommandResultOnceOutcome(outcome.error());
}

void EmrClient::getOpsCommandResultOnceAsync(const GetOpsCommandResultOnceRequest& request, const GetOpsCommandResultOnceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpsCommandResultOnce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOpsCommandResultOnceOutcomeCallable EmrClient::getOpsCommandResultOnceCallable(const GetOpsCommandResultOnceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpsCommandResultOnceOutcome()>>(
			[this, request]()
			{
			return this->getOpsCommandResultOnce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddHpHostOutcome EmrClient::addHpHost(const AddHpHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddHpHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddHpHostOutcome(AddHpHostResult(outcome.result()));
	else
		return AddHpHostOutcome(outcome.error());
}

void EmrClient::addHpHostAsync(const AddHpHostRequest& request, const AddHpHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addHpHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddHpHostOutcomeCallable EmrClient::addHpHostCallable(const AddHpHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddHpHostOutcome()>>(
			[this, request]()
			{
			return this->addHpHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceConfigHistoryForAdminOutcome EmrClient::listClusterServiceConfigHistoryForAdmin(const ListClusterServiceConfigHistoryForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceConfigHistoryForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceConfigHistoryForAdminOutcome(ListClusterServiceConfigHistoryForAdminResult(outcome.result()));
	else
		return ListClusterServiceConfigHistoryForAdminOutcome(outcome.error());
}

void EmrClient::listClusterServiceConfigHistoryForAdminAsync(const ListClusterServiceConfigHistoryForAdminRequest& request, const ListClusterServiceConfigHistoryForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceConfigHistoryForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceConfigHistoryForAdminOutcomeCallable EmrClient::listClusterServiceConfigHistoryForAdminCallable(const ListClusterServiceConfigHistoryForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceConfigHistoryForAdminOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceConfigHistoryForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobInputStatisticInfoOutcome EmrClient::getJobInputStatisticInfo(const GetJobInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInputStatisticInfoOutcome(GetJobInputStatisticInfoResult(outcome.result()));
	else
		return GetJobInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobInputStatisticInfoAsync(const GetJobInputStatisticInfoRequest& request, const GetJobInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobInputStatisticInfoOutcomeCallable EmrClient::getJobInputStatisticInfoCallable(const GetJobInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectUserOutcome EmrClient::deleteFlowProjectUser(const DeleteFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectUserOutcome(DeleteFlowProjectUserResult(outcome.result()));
	else
		return DeleteFlowProjectUserOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectUserAsync(const DeleteFlowProjectUserRequest& request, const DeleteFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectUserOutcomeCallable EmrClient::deleteFlowProjectUserCallable(const DeleteFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListDependedServiceOutcome EmrClient::listDependedService(const ListDependedServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDependedServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDependedServiceOutcome(ListDependedServiceResult(outcome.result()));
	else
		return ListDependedServiceOutcome(outcome.error());
}

void EmrClient::listDependedServiceAsync(const ListDependedServiceRequest& request, const ListDependedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDependedService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListDependedServiceOutcomeCallable EmrClient::listDependedServiceCallable(const ListDependedServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDependedServiceOutcome()>>(
			[this, request]()
			{
			return this->listDependedService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteAlertContactsOutcome EmrClient::deleteAlertContacts(const DeleteAlertContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertContactsOutcome(DeleteAlertContactsResult(outcome.result()));
	else
		return DeleteAlertContactsOutcome(outcome.error());
}

void EmrClient::deleteAlertContactsAsync(const DeleteAlertContactsRequest& request, const DeleteAlertContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteAlertContactsOutcomeCallable EmrClient::deleteAlertContactsCallable(const DeleteAlertContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertContactsOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterV2Outcome EmrClient::createClusterV2(const CreateClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterV2Outcome(CreateClusterV2Result(outcome.result()));
	else
		return CreateClusterV2Outcome(outcome.error());
}

void EmrClient::createClusterV2Async(const CreateClusterV2Request& request, const CreateClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterV2OutcomeCallable EmrClient::createClusterV2Callable(const CreateClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterV2Outcome()>>(
			[this, request]()
			{
			return this->createClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::PlanComponentTopoOutcome EmrClient::planComponentTopo(const PlanComponentTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PlanComponentTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PlanComponentTopoOutcome(PlanComponentTopoResult(outcome.result()));
	else
		return PlanComponentTopoOutcome(outcome.error());
}

void EmrClient::planComponentTopoAsync(const PlanComponentTopoRequest& request, const PlanComponentTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, planComponentTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::PlanComponentTopoOutcomeCallable EmrClient::planComponentTopoCallable(const PlanComponentTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PlanComponentTopoOutcome()>>(
			[this, request]()
			{
			return this->planComponentTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostOutcome EmrClient::listClusterHost(const ListClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostOutcome(ListClusterHostResult(outcome.result()));
	else
		return ListClusterHostOutcome(outcome.error());
}

void EmrClient::listClusterHostAsync(const ListClusterHostRequest& request, const ListClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostOutcomeCallable EmrClient::listClusterHostCallable(const ListClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostOutcome()>>(
			[this, request]()
			{
			return this->listClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceOutcome EmrClient::describeClusterService(const DescribeClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceOutcome(DescribeClusterServiceResult(outcome.result()));
	else
		return DescribeClusterServiceOutcome(outcome.error());
}

void EmrClient::describeClusterServiceAsync(const DescribeClusterServiceRequest& request, const DescribeClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceOutcomeCallable EmrClient::describeClusterServiceCallable(const DescribeClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->describeClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RenderResourcePoolXmlForAdminOutcome EmrClient::renderResourcePoolXmlForAdmin(const RenderResourcePoolXmlForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenderResourcePoolXmlForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenderResourcePoolXmlForAdminOutcome(RenderResourcePoolXmlForAdminResult(outcome.result()));
	else
		return RenderResourcePoolXmlForAdminOutcome(outcome.error());
}

void EmrClient::renderResourcePoolXmlForAdminAsync(const RenderResourcePoolXmlForAdminRequest& request, const RenderResourcePoolXmlForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renderResourcePoolXmlForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RenderResourcePoolXmlForAdminOutcomeCallable EmrClient::renderResourcePoolXmlForAdminCallable(const RenderResourcePoolXmlForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenderResourcePoolXmlForAdminOutcome()>>(
			[this, request]()
			{
			return this->renderResourcePoolXmlForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreCreateTableOutcome EmrClient::metastoreCreateTable(const MetastoreCreateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreCreateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreCreateTableOutcome(MetastoreCreateTableResult(outcome.result()));
	else
		return MetastoreCreateTableOutcome(outcome.error());
}

void EmrClient::metastoreCreateTableAsync(const MetastoreCreateTableRequest& request, const MetastoreCreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreCreateTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreCreateTableOutcomeCallable EmrClient::metastoreCreateTableCallable(const MetastoreCreateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreCreateTableOutcome()>>(
			[this, request]()
			{
			return this->metastoreCreateTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CommonApiWhiteListOutcome EmrClient::commonApiWhiteList(const CommonApiWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommonApiWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommonApiWhiteListOutcome(CommonApiWhiteListResult(outcome.result()));
	else
		return CommonApiWhiteListOutcome(outcome.error());
}

void EmrClient::commonApiWhiteListAsync(const CommonApiWhiteListRequest& request, const CommonApiWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commonApiWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CommonApiWhiteListOutcomeCallable EmrClient::commonApiWhiteListCallable(const CommonApiWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommonApiWhiteListOutcome()>>(
			[this, request]()
			{
			return this->commonApiWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowForWebOutcome EmrClient::createFlowForWeb(const CreateFlowForWebRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowForWebOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowForWebOutcome(CreateFlowForWebResult(outcome.result()));
	else
		return CreateFlowForWebOutcome(outcome.error());
}

void EmrClient::createFlowForWebAsync(const CreateFlowForWebRequest& request, const CreateFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowForWeb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowForWebOutcomeCallable EmrClient::createFlowForWebCallable(const CreateFlowForWebRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowForWebOutcome()>>(
			[this, request]()
			{
			return this->createFlowForWeb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QuerySlsMetricDataOutcome EmrClient::querySlsMetricData(const QuerySlsMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySlsMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySlsMetricDataOutcome(QuerySlsMetricDataResult(outcome.result()));
	else
		return QuerySlsMetricDataOutcome(outcome.error());
}

void EmrClient::querySlsMetricDataAsync(const QuerySlsMetricDataRequest& request, const QuerySlsMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySlsMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QuerySlsMetricDataOutcomeCallable EmrClient::querySlsMetricDataCallable(const QuerySlsMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySlsMetricDataOutcome()>>(
			[this, request]()
			{
			return this->querySlsMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListKafkaTopicOutcome EmrClient::metastoreListKafkaTopic(const MetastoreListKafkaTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListKafkaTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListKafkaTopicOutcome(MetastoreListKafkaTopicResult(outcome.result()));
	else
		return MetastoreListKafkaTopicOutcome(outcome.error());
}

void EmrClient::metastoreListKafkaTopicAsync(const MetastoreListKafkaTopicRequest& request, const MetastoreListKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListKafkaTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListKafkaTopicOutcomeCallable EmrClient::metastoreListKafkaTopicCallable(const MetastoreListKafkaTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListKafkaTopicOutcome()>>(
			[this, request]()
			{
			return this->metastoreListKafkaTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeJobOutcome EmrClient::describeJob(const DescribeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobOutcome(DescribeJobResult(outcome.result()));
	else
		return DescribeJobOutcome(outcome.error());
}

void EmrClient::describeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeJobOutcomeCallable EmrClient::describeJobCallable(const DescribeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
			[this, request]()
			{
			return this->describeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListKafkaReassignTopicOutcome EmrClient::listKafkaReassignTopic(const ListKafkaReassignTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKafkaReassignTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKafkaReassignTopicOutcome(ListKafkaReassignTopicResult(outcome.result()));
	else
		return ListKafkaReassignTopicOutcome(outcome.error());
}

void EmrClient::listKafkaReassignTopicAsync(const ListKafkaReassignTopicRequest& request, const ListKafkaReassignTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKafkaReassignTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListKafkaReassignTopicOutcomeCallable EmrClient::listKafkaReassignTopicCallable(const ListKafkaReassignTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKafkaReassignTopicOutcome()>>(
			[this, request]()
			{
			return this->listKafkaReassignTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterServiceConfigForAdminOutcome EmrClient::modifyClusterServiceConfigForAdmin(const ModifyClusterServiceConfigForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterServiceConfigForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterServiceConfigForAdminOutcome(ModifyClusterServiceConfigForAdminResult(outcome.result()));
	else
		return ModifyClusterServiceConfigForAdminOutcome(outcome.error());
}

void EmrClient::modifyClusterServiceConfigForAdminAsync(const ModifyClusterServiceConfigForAdminRequest& request, const ModifyClusterServiceConfigForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterServiceConfigForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterServiceConfigForAdminOutcomeCallable EmrClient::modifyClusterServiceConfigForAdminCallable(const ModifyClusterServiceConfigForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterServiceConfigForAdminOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterServiceConfigForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowProjectOutcome EmrClient::modifyFlowProject(const ModifyFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowProjectOutcome(ModifyFlowProjectResult(outcome.result()));
	else
		return ModifyFlowProjectOutcome(outcome.error());
}

void EmrClient::modifyFlowProjectAsync(const ModifyFlowProjectRequest& request, const ModifyFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowProjectOutcomeCallable EmrClient::modifyFlowProjectCallable(const ModifyFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowOutcome EmrClient::listFlow(const ListFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowOutcome(ListFlowResult(outcome.result()));
	else
		return ListFlowOutcome(outcome.error());
}

void EmrClient::listFlowAsync(const ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowOutcomeCallable EmrClient::listFlowCallable(const ListFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowOutcome()>>(
			[this, request]()
			{
			return this->listFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListResourceQueueOutcome EmrClient::listResourceQueue(const ListResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceQueueOutcome(ListResourceQueueResult(outcome.result()));
	else
		return ListResourceQueueOutcome(outcome.error());
}

void EmrClient::listResourceQueueAsync(const ListResourceQueueRequest& request, const ListResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListResourceQueueOutcomeCallable EmrClient::listResourceQueueCallable(const ListResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->listResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterTagForAdminOutcome EmrClient::listClusterTagForAdmin(const ListClusterTagForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTagForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTagForAdminOutcome(ListClusterTagForAdminResult(outcome.result()));
	else
		return ListClusterTagForAdminOutcome(outcome.error());
}

void EmrClient::listClusterTagForAdminAsync(const ListClusterTagForAdminRequest& request, const ListClusterTagForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTagForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterTagForAdminOutcomeCallable EmrClient::listClusterTagForAdminCallable(const ListClusterTagForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTagForAdminOutcome()>>(
			[this, request]()
			{
			return this->listClusterTagForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillExecutionPlanInstanceOutcome EmrClient::killExecutionPlanInstance(const KillExecutionPlanInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillExecutionPlanInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillExecutionPlanInstanceOutcome(KillExecutionPlanInstanceResult(outcome.result()));
	else
		return KillExecutionPlanInstanceOutcome(outcome.error());
}

void EmrClient::killExecutionPlanInstanceAsync(const KillExecutionPlanInstanceRequest& request, const KillExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killExecutionPlanInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillExecutionPlanInstanceOutcomeCallable EmrClient::killExecutionPlanInstanceCallable(const KillExecutionPlanInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillExecutionPlanInstanceOutcome()>>(
			[this, request]()
			{
			return this->killExecutionPlanInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowCategoryOutcome EmrClient::deleteFlowCategory(const DeleteFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowCategoryOutcome(DeleteFlowCategoryResult(outcome.result()));
	else
		return DeleteFlowCategoryOutcome(outcome.error());
}

void EmrClient::deleteFlowCategoryAsync(const DeleteFlowCategoryRequest& request, const DeleteFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowCategoryOutcomeCallable EmrClient::deleteFlowCategoryCallable(const DeleteFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::PageListUserGroupsOutcome EmrClient::pageListUserGroups(const PageListUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageListUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageListUserGroupsOutcome(PageListUserGroupsResult(outcome.result()));
	else
		return PageListUserGroupsOutcome(outcome.error());
}

void EmrClient::pageListUserGroupsAsync(const PageListUserGroupsRequest& request, const PageListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageListUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::PageListUserGroupsOutcomeCallable EmrClient::pageListUserGroupsCallable(const PageListUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageListUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->pageListUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListResourcePoolForAdminOutcome EmrClient::listResourcePoolForAdmin(const ListResourcePoolForAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcePoolForAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcePoolForAdminOutcome(ListResourcePoolForAdminResult(outcome.result()));
	else
		return ListResourcePoolForAdminOutcome(outcome.error());
}

void EmrClient::listResourcePoolForAdminAsync(const ListResourcePoolForAdminRequest& request, const ListResourcePoolForAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourcePoolForAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListResourcePoolForAdminOutcomeCallable EmrClient::listResourcePoolForAdminCallable(const ListResourcePoolForAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcePoolForAdminOutcome()>>(
			[this, request]()
			{
			return this->listResourcePoolForAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MigrateJobsOutcome EmrClient::migrateJobs(const MigrateJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateJobsOutcome(MigrateJobsResult(outcome.result()));
	else
		return MigrateJobsOutcome(outcome.error());
}

void EmrClient::migrateJobsAsync(const MigrateJobsRequest& request, const MigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MigrateJobsOutcomeCallable EmrClient::migrateJobsCallable(const MigrateJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateJobsOutcome()>>(
			[this, request]()
			{
			return this->migrateJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillExecutionJobInstanceOutcome EmrClient::killExecutionJobInstance(const KillExecutionJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillExecutionJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillExecutionJobInstanceOutcome(KillExecutionJobInstanceResult(outcome.result()));
	else
		return KillExecutionJobInstanceOutcome(outcome.error());
}

void EmrClient::killExecutionJobInstanceAsync(const KillExecutionJobInstanceRequest& request, const KillExecutionJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killExecutionJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillExecutionJobInstanceOutcomeCallable EmrClient::killExecutionJobInstanceCallable(const KillExecutionJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillExecutionJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->killExecutionJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBatchUsersOutcome EmrClient::createBatchUsers(const CreateBatchUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBatchUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBatchUsersOutcome(CreateBatchUsersResult(outcome.result()));
	else
		return CreateBatchUsersOutcome(outcome.error());
}

void EmrClient::createBatchUsersAsync(const CreateBatchUsersRequest& request, const CreateBatchUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBatchUsersOutcomeCallable EmrClient::createBatchUsersCallable(const CreateBatchUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchUsersOutcome()>>(
			[this, request]()
			{
			return this->createBatchUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyExecutionPlanOutcome EmrClient::modifyExecutionPlan(const ModifyExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanOutcome(ModifyExecutionPlanResult(outcome.result()));
	else
		return ModifyExecutionPlanOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanAsync(const ModifyExecutionPlanRequest& request, const ModifyExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanOutcomeCallable EmrClient::modifyExecutionPlanCallable(const ModifyExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddClusterServiceOutcome EmrClient::addClusterService(const AddClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClusterServiceOutcome(AddClusterServiceResult(outcome.result()));
	else
		return AddClusterServiceOutcome(outcome.error());
}

void EmrClient::addClusterServiceAsync(const AddClusterServiceRequest& request, const AddClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddClusterServiceOutcomeCallable EmrClient::addClusterServiceCallable(const AddClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->addClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListUserStatisticsOutcome EmrClient::listUserStatistics(const ListUserStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserStatisticsOutcome(ListUserStatisticsResult(outcome.result()));
	else
		return ListUserStatisticsOutcome(outcome.error());
}

void EmrClient::listUserStatisticsAsync(const ListUserStatisticsRequest& request, const ListUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListUserStatisticsOutcomeCallable EmrClient::listUserStatisticsCallable(const ListUserStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listUserStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowCategoryOutcome EmrClient::modifyFlowCategory(const ModifyFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowCategoryOutcome(ModifyFlowCategoryResult(outcome.result()));
	else
		return ModifyFlowCategoryOutcome(outcome.error());
}

void EmrClient::modifyFlowCategoryAsync(const ModifyFlowCategoryRequest& request, const ModifyFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowCategoryOutcomeCallable EmrClient::modifyFlowCategoryCallable(const ModifyFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryAlarmRulesOutcome EmrClient::queryAlarmRules(const QueryAlarmRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAlarmRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAlarmRulesOutcome(QueryAlarmRulesResult(outcome.result()));
	else
		return QueryAlarmRulesOutcome(outcome.error());
}

void EmrClient::queryAlarmRulesAsync(const QueryAlarmRulesRequest& request, const QueryAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAlarmRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryAlarmRulesOutcomeCallable EmrClient::queryAlarmRulesCallable(const QueryAlarmRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAlarmRulesOutcome()>>(
			[this, request]()
			{
			return this->queryAlarmRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterServiceConfigOutcome EmrClient::modifyClusterServiceConfig(const ModifyClusterServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterServiceConfigOutcome(ModifyClusterServiceConfigResult(outcome.result()));
	else
		return ModifyClusterServiceConfigOutcome(outcome.error());
}

void EmrClient::modifyClusterServiceConfigAsync(const ModifyClusterServiceConfigRequest& request, const ModifyClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterServiceConfigOutcomeCallable EmrClient::modifyClusterServiceConfigCallable(const ModifyClusterServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListDataResourcesOutcome EmrClient::metastoreListDataResources(const MetastoreListDataResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListDataResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListDataResourcesOutcome(MetastoreListDataResourcesResult(outcome.result()));
	else
		return MetastoreListDataResourcesOutcome(outcome.error());
}

void EmrClient::metastoreListDataResourcesAsync(const MetastoreListDataResourcesRequest& request, const MetastoreListDataResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListDataResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListDataResourcesOutcomeCallable EmrClient::metastoreListDataResourcesCallable(const MetastoreListDataResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListDataResourcesOutcome()>>(
			[this, request]()
			{
			return this->metastoreListDataResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateETLJobOutcome EmrClient::updateETLJob(const UpdateETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateETLJobOutcome(UpdateETLJobResult(outcome.result()));
	else
		return UpdateETLJobOutcome(outcome.error());
}

void EmrClient::updateETLJobAsync(const UpdateETLJobRequest& request, const UpdateETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateETLJobOutcomeCallable EmrClient::updateETLJobCallable(const UpdateETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateETLJobOutcome()>>(
			[this, request]()
			{
			return this->updateETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingTaskGroupOutcome EmrClient::describeScalingTaskGroup(const DescribeScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingTaskGroupOutcome(DescribeScalingTaskGroupResult(outcome.result()));
	else
		return DescribeScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::describeScalingTaskGroupAsync(const DescribeScalingTaskGroupRequest& request, const DescribeScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingTaskGroupOutcomeCallable EmrClient::describeScalingTaskGroupCallable(const DescribeScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->describeScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteHostPoolOutcome EmrClient::deleteHostPool(const DeleteHostPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHostPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHostPoolOutcome(DeleteHostPoolResult(outcome.result()));
	else
		return DeleteHostPoolOutcome(outcome.error());
}

void EmrClient::deleteHostPoolAsync(const DeleteHostPoolRequest& request, const DeleteHostPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHostPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteHostPoolOutcomeCallable EmrClient::deleteHostPoolCallable(const DeleteHostPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHostPoolOutcome()>>(
			[this, request]()
			{
			return this->deleteHostPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RefreshBackupListOutcome EmrClient::refreshBackupList(const RefreshBackupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshBackupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshBackupListOutcome(RefreshBackupListResult(outcome.result()));
	else
		return RefreshBackupListOutcome(outcome.error());
}

void EmrClient::refreshBackupListAsync(const RefreshBackupListRequest& request, const RefreshBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshBackupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RefreshBackupListOutcomeCallable EmrClient::refreshBackupListCallable(const RefreshBackupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshBackupListOutcome()>>(
			[this, request]()
			{
			return this->refreshBackupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateDataSourceOutcome EmrClient::updateDataSource(const UpdateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataSourceOutcome(UpdateDataSourceResult(outcome.result()));
	else
		return UpdateDataSourceOutcome(outcome.error());
}

void EmrClient::updateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateDataSourceOutcomeCallable EmrClient::updateDataSourceCallable(const UpdateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->updateDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListDataSourceSchemaDatabaseOutcome EmrClient::listDataSourceSchemaDatabase(const ListDataSourceSchemaDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceSchemaDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceSchemaDatabaseOutcome(ListDataSourceSchemaDatabaseResult(outcome.result()));
	else
		return ListDataSourceSchemaDatabaseOutcome(outcome.error());
}

void EmrClient::listDataSourceSchemaDatabaseAsync(const ListDataSourceSchemaDatabaseRequest& request, const ListDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSourceSchemaDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListDataSourceSchemaDatabaseOutcomeCallable EmrClient::listDataSourceSchemaDatabaseCallable(const ListDataSourceSchemaDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceSchemaDatabaseOutcome()>>(
			[this, request]()
			{
			return this->listDataSourceSchemaDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUsersOutcome EmrClient::createUsers(const CreateUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUsersOutcome(CreateUsersResult(outcome.result()));
	else
		return CreateUsersOutcome(outcome.error());
}

void EmrClient::createUsersAsync(const CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUsersOutcomeCallable EmrClient::createUsersCallable(const CreateUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUsersOutcome()>>(
			[this, request]()
			{
			return this->createUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CheckDataSourceOutcome EmrClient::checkDataSource(const CheckDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDataSourceOutcome(CheckDataSourceResult(outcome.result()));
	else
		return CheckDataSourceOutcome(outcome.error());
}

void EmrClient::checkDataSourceAsync(const CheckDataSourceRequest& request, const CheckDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CheckDataSourceOutcomeCallable EmrClient::checkDataSourceCallable(const CheckDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDataSourceOutcome()>>(
			[this, request]()
			{
			return this->checkDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingActivityOutcome EmrClient::listScalingActivity(const ListScalingActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingActivityOutcome(ListScalingActivityResult(outcome.result()));
	else
		return ListScalingActivityOutcome(outcome.error());
}

void EmrClient::listScalingActivityAsync(const ListScalingActivityRequest& request, const ListScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingActivityOutcomeCallable EmrClient::listScalingActivityCallable(const ListScalingActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingActivityOutcome()>>(
			[this, request]()
			{
			return this->listScalingActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateNoteOutcome EmrClient::createNote(const CreateNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNoteOutcome(CreateNoteResult(outcome.result()));
	else
		return CreateNoteOutcome(outcome.error());
}

void EmrClient::createNoteAsync(const CreateNoteRequest& request, const CreateNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateNoteOutcomeCallable EmrClient::createNoteCallable(const CreateNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNoteOutcome()>>(
			[this, request]()
			{
			return this->createNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveHpHostOutcome EmrClient::removeHpHost(const RemoveHpHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveHpHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveHpHostOutcome(RemoveHpHostResult(outcome.result()));
	else
		return RemoveHpHostOutcome(outcome.error());
}

void EmrClient::removeHpHostAsync(const RemoveHpHostRequest& request, const RemoveHpHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeHpHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveHpHostOutcomeCallable EmrClient::removeHpHostCallable(const RemoveHpHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveHpHostOutcome()>>(
			[this, request]()
			{
			return this->removeHpHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetBackupInfoOutcome EmrClient::getBackupInfo(const GetBackupInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBackupInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBackupInfoOutcome(GetBackupInfoResult(outcome.result()));
	else
		return GetBackupInfoOutcome(outcome.error());
}

void EmrClient::getBackupInfoAsync(const GetBackupInfoRequest& request, const GetBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBackupInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetBackupInfoOutcomeCallable EmrClient::getBackupInfoCallable(const GetBackupInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBackupInfoOutcome()>>(
			[this, request]()
			{
			return this->getBackupInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeHpHostOutcome EmrClient::describeHpHost(const DescribeHpHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHpHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHpHostOutcome(DescribeHpHostResult(outcome.result()));
	else
		return DescribeHpHostOutcome(outcome.error());
}

void EmrClient::describeHpHostAsync(const DescribeHpHostRequest& request, const DescribeHpHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHpHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeHpHostOutcomeCallable EmrClient::describeHpHostCallable(const DescribeHpHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHpHostOutcome()>>(
			[this, request]()
			{
			return this->describeHpHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RetryExecutionPlanOutcome EmrClient::retryExecutionPlan(const RetryExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryExecutionPlanOutcome(RetryExecutionPlanResult(outcome.result()));
	else
		return RetryExecutionPlanOutcome(outcome.error());
}

void EmrClient::retryExecutionPlanAsync(const RetryExecutionPlanRequest& request, const RetryExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RetryExecutionPlanOutcomeCallable EmrClient::retryExecutionPlanCallable(const RetryExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->retryExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListBackupRulesOutcome EmrClient::listBackupRules(const ListBackupRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBackupRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBackupRulesOutcome(ListBackupRulesResult(outcome.result()));
	else
		return ListBackupRulesOutcome(outcome.error());
}

void EmrClient::listBackupRulesAsync(const ListBackupRulesRequest& request, const ListBackupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBackupRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListBackupRulesOutcomeCallable EmrClient::listBackupRulesCallable(const ListBackupRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBackupRulesOutcome()>>(
			[this, request]()
			{
			return this->listBackupRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListDataSourceOutcome EmrClient::metastoreListDataSource(const MetastoreListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListDataSourceOutcome(MetastoreListDataSourceResult(outcome.result()));
	else
		return MetastoreListDataSourceOutcome(outcome.error());
}

void EmrClient::metastoreListDataSourceAsync(const MetastoreListDataSourceRequest& request, const MetastoreListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListDataSourceOutcomeCallable EmrClient::metastoreListDataSourceCallable(const MetastoreListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->metastoreListDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeInstanceContainerStatusOutcome EmrClient::listFlowNodeInstanceContainerStatus(const ListFlowNodeInstanceContainerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeInstanceContainerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeInstanceContainerStatusOutcome(ListFlowNodeInstanceContainerStatusResult(outcome.result()));
	else
		return ListFlowNodeInstanceContainerStatusOutcome(outcome.error());
}

void EmrClient::listFlowNodeInstanceContainerStatusAsync(const ListFlowNodeInstanceContainerStatusRequest& request, const ListFlowNodeInstanceContainerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeInstanceContainerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeInstanceContainerStatusOutcomeCallable EmrClient::listFlowNodeInstanceContainerStatusCallable(const ListFlowNodeInstanceContainerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeInstanceContainerStatusOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeInstanceContainerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetSupportedOpsCommandOutcome EmrClient::getSupportedOpsCommand(const GetSupportedOpsCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSupportedOpsCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSupportedOpsCommandOutcome(GetSupportedOpsCommandResult(outcome.result()));
	else
		return GetSupportedOpsCommandOutcome(outcome.error());
}

void EmrClient::getSupportedOpsCommandAsync(const GetSupportedOpsCommandRequest& request, const GetSupportedOpsCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSupportedOpsCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetSupportedOpsCommandOutcomeCallable EmrClient::getSupportedOpsCommandCallable(const GetSupportedOpsCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSupportedOpsCommandOutcome()>>(
			[this, request]()
			{
			return this->getSupportedOpsCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeETLJobSqlSchemaOutcome EmrClient::describeETLJobSqlSchema(const DescribeETLJobSqlSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeETLJobSqlSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeETLJobSqlSchemaOutcome(DescribeETLJobSqlSchemaResult(outcome.result()));
	else
		return DescribeETLJobSqlSchemaOutcome(outcome.error());
}

void EmrClient::describeETLJobSqlSchemaAsync(const DescribeETLJobSqlSchemaRequest& request, const DescribeETLJobSqlSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeETLJobSqlSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeETLJobSqlSchemaOutcomeCallable EmrClient::describeETLJobSqlSchemaCallable(const DescribeETLJobSqlSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeETLJobSqlSchemaOutcome()>>(
			[this, request]()
			{
			return this->describeETLJobSqlSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListExecutionPlanInstancesOutcome EmrClient::listExecutionPlanInstances(const ListExecutionPlanInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionPlanInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionPlanInstancesOutcome(ListExecutionPlanInstancesResult(outcome.result()));
	else
		return ListExecutionPlanInstancesOutcome(outcome.error());
}

void EmrClient::listExecutionPlanInstancesAsync(const ListExecutionPlanInstancesRequest& request, const ListExecutionPlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionPlanInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutionPlanInstancesOutcomeCallable EmrClient::listExecutionPlanInstancesCallable(const ListExecutionPlanInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionPlanInstancesOutcome()>>(
			[this, request]()
			{
			return this->listExecutionPlanInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeKafkaConsumerGroupOutcome EmrClient::metastoreDescribeKafkaConsumerGroup(const MetastoreDescribeKafkaConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeKafkaConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeKafkaConsumerGroupOutcome(MetastoreDescribeKafkaConsumerGroupResult(outcome.result()));
	else
		return MetastoreDescribeKafkaConsumerGroupOutcome(outcome.error());
}

void EmrClient::metastoreDescribeKafkaConsumerGroupAsync(const MetastoreDescribeKafkaConsumerGroupRequest& request, const MetastoreDescribeKafkaConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeKafkaConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeKafkaConsumerGroupOutcomeCallable EmrClient::metastoreDescribeKafkaConsumerGroupCallable(const MetastoreDescribeKafkaConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeKafkaConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeKafkaConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListTaskOutcome EmrClient::metastoreListTask(const MetastoreListTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListTaskOutcome(MetastoreListTaskResult(outcome.result()));
	else
		return MetastoreListTaskOutcome(outcome.error());
}

void EmrClient::metastoreListTaskAsync(const MetastoreListTaskRequest& request, const MetastoreListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListTaskOutcomeCallable EmrClient::metastoreListTaskCallable(const MetastoreListTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListTaskOutcome()>>(
			[this, request]()
			{
			return this->metastoreListTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveBackupOutcome EmrClient::removeBackup(const RemoveBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackupOutcome(RemoveBackupResult(outcome.result()));
	else
		return RemoveBackupOutcome(outcome.error());
}

void EmrClient::removeBackupAsync(const RemoveBackupRequest& request, const RemoveBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveBackupOutcomeCallable EmrClient::removeBackupCallable(const RemoveBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackupOutcome()>>(
			[this, request]()
			{
			return this->removeBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterOpLogOutcome EmrClient::describeClusterOpLog(const DescribeClusterOpLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOpLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOpLogOutcome(DescribeClusterOpLogResult(outcome.result()));
	else
		return DescribeClusterOpLogOutcome(outcome.error());
}

void EmrClient::describeClusterOpLogAsync(const DescribeClusterOpLogRequest& request, const DescribeClusterOpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterOpLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterOpLogOutcomeCallable EmrClient::describeClusterOpLogCallable(const DescribeClusterOpLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOpLogOutcome()>>(
			[this, request]()
			{
			return this->describeClusterOpLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueSubmissionStatisticInfoOutcome EmrClient::getQueueSubmissionStatisticInfo(const GetQueueSubmissionStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueSubmissionStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueSubmissionStatisticInfoOutcome(GetQueueSubmissionStatisticInfoResult(outcome.result()));
	else
		return GetQueueSubmissionStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueSubmissionStatisticInfoAsync(const GetQueueSubmissionStatisticInfoRequest& request, const GetQueueSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueSubmissionStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueSubmissionStatisticInfoOutcomeCallable EmrClient::getQueueSubmissionStatisticInfoCallable(const GetQueueSubmissionStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueSubmissionStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueSubmissionStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUserOutcome EmrClient::createUser(const CreateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserOutcome(CreateUserResult(outcome.result()));
	else
		return CreateUserOutcome(outcome.error());
}

void EmrClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUserOutcomeCallable EmrClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListDataSourceOutcome EmrClient::listDataSource(const ListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceOutcome(ListDataSourceResult(outcome.result()));
	else
		return ListDataSourceOutcome(outcome.error());
}

void EmrClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListDataSourceOutcomeCallable EmrClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreCreateKafkaTopicOutcome EmrClient::metastoreCreateKafkaTopic(const MetastoreCreateKafkaTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreCreateKafkaTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreCreateKafkaTopicOutcome(MetastoreCreateKafkaTopicResult(outcome.result()));
	else
		return MetastoreCreateKafkaTopicOutcome(outcome.error());
}

void EmrClient::metastoreCreateKafkaTopicAsync(const MetastoreCreateKafkaTopicRequest& request, const MetastoreCreateKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreCreateKafkaTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreCreateKafkaTopicOutcomeCallable EmrClient::metastoreCreateKafkaTopicCallable(const MetastoreCreateKafkaTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreCreateKafkaTopicOutcome()>>(
			[this, request]()
			{
			return this->metastoreCreateKafkaTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListETLJobInstanceOutcome EmrClient::listETLJobInstance(const ListETLJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListETLJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListETLJobInstanceOutcome(ListETLJobInstanceResult(outcome.result()));
	else
		return ListETLJobInstanceOutcome(outcome.error());
}

void EmrClient::listETLJobInstanceAsync(const ListETLJobInstanceRequest& request, const ListETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listETLJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListETLJobInstanceOutcomeCallable EmrClient::listETLJobInstanceCallable(const ListETLJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListETLJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->listETLJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyExecutionPlanBasicInfoOutcome EmrClient::modifyExecutionPlanBasicInfo(const ModifyExecutionPlanBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanBasicInfoOutcome(ModifyExecutionPlanBasicInfoResult(outcome.result()));
	else
		return ModifyExecutionPlanBasicInfoOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanBasicInfoAsync(const ModifyExecutionPlanBasicInfoRequest& request, const ModifyExecutionPlanBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlanBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanBasicInfoOutcomeCallable EmrClient::modifyExecutionPlanBasicInfoCallable(const ModifyExecutionPlanBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlanBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SubmitFlowJobOutcome EmrClient::submitFlowJob(const SubmitFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFlowJobOutcome(SubmitFlowJobResult(outcome.result()));
	else
		return SubmitFlowJobOutcome(outcome.error());
}

void EmrClient::submitFlowJobAsync(const SubmitFlowJobRequest& request, const SubmitFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SubmitFlowJobOutcomeCallable EmrClient::submitFlowJobCallable(const SubmitFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFlowJobOutcome()>>(
			[this, request]()
			{
			return this->submitFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListStackServiceOutcome EmrClient::listStackService(const ListStackServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStackServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStackServiceOutcome(ListStackServiceResult(outcome.result()));
	else
		return ListStackServiceOutcome(outcome.error());
}

void EmrClient::listStackServiceAsync(const ListStackServiceRequest& request, const ListStackServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStackService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListStackServiceOutcomeCallable EmrClient::listStackServiceCallable(const ListStackServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStackServiceOutcome()>>(
			[this, request]()
			{
			return this->listStackService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeETLJobOutcome EmrClient::describeETLJob(const DescribeETLJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeETLJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeETLJobOutcome(DescribeETLJobResult(outcome.result()));
	else
		return DescribeETLJobOutcome(outcome.error());
}

void EmrClient::describeETLJobAsync(const DescribeETLJobRequest& request, const DescribeETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeETLJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeETLJobOutcomeCallable EmrClient::describeETLJobCallable(const DescribeETLJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeETLJobOutcome()>>(
			[this, request]()
			{
			return this->describeETLJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostComponentOutcome EmrClient::listClusterHostComponent(const ListClusterHostComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostComponentOutcome(ListClusterHostComponentResult(outcome.result()));
	else
		return ListClusterHostComponentOutcome(outcome.error());
}

void EmrClient::listClusterHostComponentAsync(const ListClusterHostComponentRequest& request, const ListClusterHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHostComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostComponentOutcomeCallable EmrClient::listClusterHostComponentCallable(const ListClusterHostComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostComponentOutcome()>>(
			[this, request]()
			{
			return this->listClusterHostComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobRunningTimeStatisticInfoOutcome EmrClient::getJobRunningTimeStatisticInfo(const GetJobRunningTimeStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobRunningTimeStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobRunningTimeStatisticInfoOutcome(GetJobRunningTimeStatisticInfoResult(outcome.result()));
	else
		return GetJobRunningTimeStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobRunningTimeStatisticInfoAsync(const GetJobRunningTimeStatisticInfoRequest& request, const GetJobRunningTimeStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobRunningTimeStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobRunningTimeStatisticInfoOutcomeCallable EmrClient::getJobRunningTimeStatisticInfoCallable(const GetJobRunningTimeStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobRunningTimeStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobRunningTimeStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectClusterSettingOutcome EmrClient::listFlowProjectClusterSetting(const ListFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectClusterSettingOutcome(ListFlowProjectClusterSettingResult(outcome.result()));
	else
		return ListFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::listFlowProjectClusterSettingAsync(const ListFlowProjectClusterSettingRequest& request, const ListFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectClusterSettingOutcomeCallable EmrClient::listFlowProjectClusterSettingCallable(const ListFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->listFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobExecutionInstancesOutcome EmrClient::listJobExecutionInstances(const ListJobExecutionInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionInstancesOutcome(ListJobExecutionInstancesResult(outcome.result()));
	else
		return ListJobExecutionInstancesOutcome(outcome.error());
}

void EmrClient::listJobExecutionInstancesAsync(const ListJobExecutionInstancesRequest& request, const ListJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutionInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobExecutionInstancesOutcomeCallable EmrClient::listJobExecutionInstancesCallable(const ListJobExecutionInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionInstancesOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutionInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListSlsLogstoreInfoOutcome EmrClient::listSlsLogstoreInfo(const ListSlsLogstoreInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSlsLogstoreInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSlsLogstoreInfoOutcome(ListSlsLogstoreInfoResult(outcome.result()));
	else
		return ListSlsLogstoreInfoOutcome(outcome.error());
}

void EmrClient::listSlsLogstoreInfoAsync(const ListSlsLogstoreInfoRequest& request, const ListSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSlsLogstoreInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListSlsLogstoreInfoOutcomeCallable EmrClient::listSlsLogstoreInfoCallable(const ListSlsLogstoreInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSlsLogstoreInfoOutcome()>>(
			[this, request]()
			{
			return this->listSlsLogstoreInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDropTableOutcome EmrClient::metastoreDropTable(const MetastoreDropTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDropTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDropTableOutcome(MetastoreDropTableResult(outcome.result()));
	else
		return MetastoreDropTableOutcome(outcome.error());
}

void EmrClient::metastoreDropTableAsync(const MetastoreDropTableRequest& request, const MetastoreDropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDropTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDropTableOutcomeCallable EmrClient::metastoreDropTableCallable(const MetastoreDropTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDropTableOutcome()>>(
			[this, request]()
			{
			return this->metastoreDropTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateScalingRuleOutcome EmrClient::createScalingRule(const CreateScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingRuleOutcome(CreateScalingRuleResult(outcome.result()));
	else
		return CreateScalingRuleOutcome(outcome.error());
}

void EmrClient::createScalingRuleAsync(const CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateScalingRuleOutcomeCallable EmrClient::createScalingRuleCallable(const CreateScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceOutcome EmrClient::listClusterService(const ListClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceOutcome(ListClusterServiceResult(outcome.result()));
	else
		return ListClusterServiceOutcome(outcome.error());
}

void EmrClient::listClusterServiceAsync(const ListClusterServiceRequest& request, const ListClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceOutcomeCallable EmrClient::listClusterServiceCallable(const ListClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->listClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOpsCommandDetailOutcome EmrClient::getOpsCommandDetail(const GetOpsCommandDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpsCommandDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpsCommandDetailOutcome(GetOpsCommandDetailResult(outcome.result()));
	else
		return GetOpsCommandDetailOutcome(outcome.error());
}

void EmrClient::getOpsCommandDetailAsync(const GetOpsCommandDetailRequest& request, const GetOpsCommandDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpsCommandDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOpsCommandDetailOutcomeCallable EmrClient::getOpsCommandDetailCallable(const GetOpsCommandDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpsCommandDetailOutcome()>>(
			[this, request]()
			{
			return this->getOpsCommandDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUserGroupOutcome EmrClient::createUserGroup(const CreateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserGroupOutcome(CreateUserGroupResult(outcome.result()));
	else
		return CreateUserGroupOutcome(outcome.error());
}

void EmrClient::createUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUserGroupOutcomeCallable EmrClient::createUserGroupCallable(const CreateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteNoteOutcome EmrClient::deleteNote(const DeleteNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNoteOutcome(DeleteNoteResult(outcome.result()));
	else
		return DeleteNoteOutcome(outcome.error());
}

void EmrClient::deleteNoteAsync(const DeleteNoteRequest& request, const DeleteNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteNoteOutcomeCallable EmrClient::deleteNoteCallable(const DeleteNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNoteOutcome()>>(
			[this, request]()
			{
			return this->deleteNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterAllHostsOutcome EmrClient::listFlowClusterAllHosts(const ListFlowClusterAllHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterAllHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterAllHostsOutcome(ListFlowClusterAllHostsResult(outcome.result()));
	else
		return ListFlowClusterAllHostsOutcome(outcome.error());
}

void EmrClient::listFlowClusterAllHostsAsync(const ListFlowClusterAllHostsRequest& request, const ListFlowClusterAllHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterAllHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterAllHostsOutcomeCallable EmrClient::listFlowClusterAllHostsCallable(const ListFlowClusterAllHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterAllHostsOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterAllHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetLogHistogramOutcome EmrClient::getLogHistogram(const GetLogHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLogHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLogHistogramOutcome(GetLogHistogramResult(outcome.result()));
	else
		return GetLogHistogramOutcome(outcome.error());
}

void EmrClient::getLogHistogramAsync(const GetLogHistogramRequest& request, const GetLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLogHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetLogHistogramOutcomeCallable EmrClient::getLogHistogramCallable(const GetLogHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogHistogramOutcome()>>(
			[this, request]()
			{
			return this->getLogHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDeleteDataResourceOutcome EmrClient::metastoreDeleteDataResource(const MetastoreDeleteDataResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDeleteDataResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDeleteDataResourceOutcome(MetastoreDeleteDataResourceResult(outcome.result()));
	else
		return MetastoreDeleteDataResourceOutcome(outcome.error());
}

void EmrClient::metastoreDeleteDataResourceAsync(const MetastoreDeleteDataResourceRequest& request, const MetastoreDeleteDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDeleteDataResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDeleteDataResourceOutcomeCallable EmrClient::metastoreDeleteDataResourceCallable(const MetastoreDeleteDataResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDeleteDataResourceOutcome()>>(
			[this, request]()
			{
			return this->metastoreDeleteDataResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteResourceQueueOutcome EmrClient::deleteResourceQueue(const DeleteResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceQueueOutcome(DeleteResourceQueueResult(outcome.result()));
	else
		return DeleteResourceQueueOutcome(outcome.error());
}

void EmrClient::deleteResourceQueueAsync(const DeleteResourceQueueRequest& request, const DeleteResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteResourceQueueOutcomeCallable EmrClient::deleteResourceQueueCallable(const DeleteResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeOutcome EmrClient::describeClusterResourcePoolSchedulerType(const DescribeClusterResourcePoolSchedulerTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeOutcome(DescribeClusterResourcePoolSchedulerTypeResult(outcome.result()));
	else
		return DescribeClusterResourcePoolSchedulerTypeOutcome(outcome.error());
}

void EmrClient::describeClusterResourcePoolSchedulerTypeAsync(const DescribeClusterResourcePoolSchedulerTypeRequest& request, const DescribeClusterResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterResourcePoolSchedulerType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeOutcomeCallable EmrClient::describeClusterResourcePoolSchedulerTypeCallable(const DescribeClusterResourcePoolSchedulerTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterResourcePoolSchedulerTypeOutcome()>>(
			[this, request]()
			{
			return this->describeClusterResourcePoolSchedulerType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::PageListResourceUsersOutcome EmrClient::pageListResourceUsers(const PageListResourceUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageListResourceUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageListResourceUsersOutcome(PageListResourceUsersResult(outcome.result()));
	else
		return PageListResourceUsersOutcome(outcome.error());
}

void EmrClient::pageListResourceUsersAsync(const PageListResourceUsersRequest& request, const PageListResourceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageListResourceUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::PageListResourceUsersOutcomeCallable EmrClient::pageListResourceUsersCallable(const PageListResourceUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageListResourceUsersOutcome()>>(
			[this, request]()
			{
			return this->pageListResourceUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeSqlResultOutcome EmrClient::listFlowNodeSqlResult(const ListFlowNodeSqlResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeSqlResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeSqlResultOutcome(ListFlowNodeSqlResultResult(outcome.result()));
	else
		return ListFlowNodeSqlResultOutcome(outcome.error());
}

void EmrClient::listFlowNodeSqlResultAsync(const ListFlowNodeSqlResultRequest& request, const ListFlowNodeSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeSqlResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeSqlResultOutcomeCallable EmrClient::listFlowNodeSqlResultCallable(const ListFlowNodeSqlResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeSqlResultOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeSqlResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowForWebOutcome EmrClient::modifyFlowForWeb(const ModifyFlowForWebRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowForWebOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowForWebOutcome(ModifyFlowForWebResult(outcome.result()));
	else
		return ModifyFlowForWebOutcome(outcome.error());
}

void EmrClient::modifyFlowForWebAsync(const ModifyFlowForWebRequest& request, const ModifyFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowForWeb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowForWebOutcomeCallable EmrClient::modifyFlowForWebCallable(const ModifyFlowForWebRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowForWebOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowForWeb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunNoteParagraphsOutcome EmrClient::runNoteParagraphs(const RunNoteParagraphsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunNoteParagraphsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunNoteParagraphsOutcome(RunNoteParagraphsResult(outcome.result()));
	else
		return RunNoteParagraphsOutcome(outcome.error());
}

void EmrClient::runNoteParagraphsAsync(const RunNoteParagraphsRequest& request, const RunNoteParagraphsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runNoteParagraphs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunNoteParagraphsOutcomeCallable EmrClient::runNoteParagraphsCallable(const RunNoteParagraphsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunNoteParagraphsOutcome()>>(
			[this, request]()
			{
			return this->runNoteParagraphs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobExecutionPlanParamsOutcome EmrClient::listJobExecutionPlanParams(const ListJobExecutionPlanParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionPlanParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionPlanParamsOutcome(ListJobExecutionPlanParamsResult(outcome.result()));
	else
		return ListJobExecutionPlanParamsOutcome(outcome.error());
}

void EmrClient::listJobExecutionPlanParamsAsync(const ListJobExecutionPlanParamsRequest& request, const ListJobExecutionPlanParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutionPlanParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobExecutionPlanParamsOutcomeCallable EmrClient::listJobExecutionPlanParamsCallable(const ListJobExecutionPlanParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionPlanParamsOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutionPlanParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeKafkaBrokerOutcome EmrClient::describeKafkaBroker(const DescribeKafkaBrokerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKafkaBrokerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKafkaBrokerOutcome(DescribeKafkaBrokerResult(outcome.result()));
	else
		return DescribeKafkaBrokerOutcome(outcome.error());
}

void EmrClient::describeKafkaBrokerAsync(const DescribeKafkaBrokerRequest& request, const DescribeKafkaBrokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKafkaBroker(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeKafkaBrokerOutcomeCallable EmrClient::describeKafkaBrokerCallable(const DescribeKafkaBrokerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKafkaBrokerOutcome()>>(
			[this, request]()
			{
			return this->describeKafkaBroker(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceContainerLogOutcome EmrClient::describeFlowNodeInstanceContainerLog(const DescribeFlowNodeInstanceContainerLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceContainerLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceContainerLogOutcome(DescribeFlowNodeInstanceContainerLogResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceContainerLogOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceContainerLogAsync(const DescribeFlowNodeInstanceContainerLogRequest& request, const DescribeFlowNodeInstanceContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstanceContainerLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceContainerLogOutcomeCallable EmrClient::describeFlowNodeInstanceContainerLogCallable(const DescribeFlowNodeInstanceContainerLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceContainerLogOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstanceContainerLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserOutputStatisticInfoOutcome EmrClient::getUserOutputStatisticInfo(const GetUserOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutputStatisticInfoOutcome(GetUserOutputStatisticInfoResult(outcome.result()));
	else
		return GetUserOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserOutputStatisticInfoAsync(const GetUserOutputStatisticInfoRequest& request, const GetUserOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserOutputStatisticInfoOutcomeCallable EmrClient::getUserOutputStatisticInfoCallable(const GetUserOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterBasicInfoOutcome EmrClient::describeClusterBasicInfo(const DescribeClusterBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(DescribeClusterBasicInfoResult(outcome.result()));
	else
		return DescribeClusterBasicInfoOutcome(outcome.error());
}

void EmrClient::describeClusterBasicInfoAsync(const DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterBasicInfoOutcomeCallable EmrClient::describeClusterBasicInfoCallable(const DescribeClusterBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SaveBatchUserAccountInfoOutcome EmrClient::saveBatchUserAccountInfo(const SaveBatchUserAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchUserAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchUserAccountInfoOutcome(SaveBatchUserAccountInfoResult(outcome.result()));
	else
		return SaveBatchUserAccountInfoOutcome(outcome.error());
}

void EmrClient::saveBatchUserAccountInfoAsync(const SaveBatchUserAccountInfoRequest& request, const SaveBatchUserAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchUserAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SaveBatchUserAccountInfoOutcomeCallable EmrClient::saveBatchUserAccountInfoCallable(const SaveBatchUserAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchUserAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->saveBatchUserAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetOpsCommandResultOutcome EmrClient::getOpsCommandResult(const GetOpsCommandResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpsCommandResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpsCommandResultOutcome(GetOpsCommandResultResult(outcome.result()));
	else
		return GetOpsCommandResultOutcome(outcome.error());
}

void EmrClient::getOpsCommandResultAsync(const GetOpsCommandResultRequest& request, const GetOpsCommandResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpsCommandResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetOpsCommandResultOutcomeCallable EmrClient::getOpsCommandResultCallable(const GetOpsCommandResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpsCommandResultOutcome()>>(
			[this, request]()
			{
			return this->getOpsCommandResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrAvailableConfigOutcome EmrClient::listEmrAvailableConfig(const ListEmrAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrAvailableConfigOutcome(ListEmrAvailableConfigResult(outcome.result()));
	else
		return ListEmrAvailableConfigOutcome(outcome.error());
}

void EmrClient::listEmrAvailableConfigAsync(const ListEmrAvailableConfigRequest& request, const ListEmrAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrAvailableConfigOutcomeCallable EmrClient::listEmrAvailableConfigCallable(const ListEmrAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->listEmrAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListAlertUserGroupOutcome EmrClient::listAlertUserGroup(const ListAlertUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertUserGroupOutcome(ListAlertUserGroupResult(outcome.result()));
	else
		return ListAlertUserGroupOutcome(outcome.error());
}

void EmrClient::listAlertUserGroupAsync(const ListAlertUserGroupRequest& request, const ListAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAlertUserGroupOutcomeCallable EmrClient::listAlertUserGroupCallable(const ListAlertUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertUserGroupOutcome()>>(
			[this, request]()
			{
			return this->listAlertUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreSearchTablesOutcome EmrClient::metastoreSearchTables(const MetastoreSearchTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreSearchTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreSearchTablesOutcome(MetastoreSearchTablesResult(outcome.result()));
	else
		return MetastoreSearchTablesOutcome(outcome.error());
}

void EmrClient::metastoreSearchTablesAsync(const MetastoreSearchTablesRequest& request, const MetastoreSearchTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreSearchTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreSearchTablesOutcomeCallable EmrClient::metastoreSearchTablesCallable(const MetastoreSearchTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreSearchTablesOutcome()>>(
			[this, request]()
			{
			return this->metastoreSearchTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterOutcome EmrClient::listFlowCluster(const ListFlowClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterOutcome(ListFlowClusterResult(outcome.result()));
	else
		return ListFlowClusterOutcome(outcome.error());
}

void EmrClient::listFlowClusterAsync(const ListFlowClusterRequest& request, const ListFlowClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterOutcomeCallable EmrClient::listFlowClusterCallable(const ListFlowClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterOutcome()>>(
			[this, request]()
			{
			return this->listFlowCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteUserOutcome EmrClient::deleteUser(const DeleteUserRequest &request) const
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

void EmrClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteUserOutcomeCallable EmrClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResizeClusterV2Outcome EmrClient::resizeClusterV2(const ResizeClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeClusterV2Outcome(ResizeClusterV2Result(outcome.result()));
	else
		return ResizeClusterV2Outcome(outcome.error());
}

void EmrClient::resizeClusterV2Async(const ResizeClusterV2Request& request, const ResizeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResizeClusterV2OutcomeCallable EmrClient::resizeClusterV2Callable(const ResizeClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeClusterV2Outcome()>>(
			[this, request]()
			{
			return this->resizeClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyJobExecutionPlanParamOutcome EmrClient::modifyJobExecutionPlanParam(const ModifyJobExecutionPlanParamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyJobExecutionPlanParamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyJobExecutionPlanParamOutcome(ModifyJobExecutionPlanParamResult(outcome.result()));
	else
		return ModifyJobExecutionPlanParamOutcome(outcome.error());
}

void EmrClient::modifyJobExecutionPlanParamAsync(const ModifyJobExecutionPlanParamRequest& request, const ModifyJobExecutionPlanParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyJobExecutionPlanParam(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyJobExecutionPlanParamOutcomeCallable EmrClient::modifyJobExecutionPlanParamCallable(const ModifyJobExecutionPlanParamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyJobExecutionPlanParamOutcome()>>(
			[this, request]()
			{
			return this->modifyJobExecutionPlanParam(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowCategoryOutcome EmrClient::createFlowCategory(const CreateFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowCategoryOutcome(CreateFlowCategoryResult(outcome.result()));
	else
		return CreateFlowCategoryOutcome(outcome.error());
}

void EmrClient::createFlowCategoryAsync(const CreateFlowCategoryRequest& request, const CreateFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowCategoryOutcomeCallable EmrClient::createFlowCategoryCallable(const CreateFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->createFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeUserOutcome EmrClient::describeUser(const DescribeUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOutcome(DescribeUserResult(outcome.result()));
	else
		return DescribeUserOutcome(outcome.error());
}

void EmrClient::describeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeUserOutcomeCallable EmrClient::describeUserCallable(const DescribeUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOutcome()>>(
			[this, request]()
			{
			return this->describeUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceCustomActionSupportConfigOutcome EmrClient::listClusterServiceCustomActionSupportConfig(const ListClusterServiceCustomActionSupportConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceCustomActionSupportConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceCustomActionSupportConfigOutcome(ListClusterServiceCustomActionSupportConfigResult(outcome.result()));
	else
		return ListClusterServiceCustomActionSupportConfigOutcome(outcome.error());
}

void EmrClient::listClusterServiceCustomActionSupportConfigAsync(const ListClusterServiceCustomActionSupportConfigRequest& request, const ListClusterServiceCustomActionSupportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceCustomActionSupportConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceCustomActionSupportConfigOutcomeCallable EmrClient::listClusterServiceCustomActionSupportConfigCallable(const ListClusterServiceCustomActionSupportConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceCustomActionSupportConfigOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceCustomActionSupportConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetLogDownloadUrlOutcome EmrClient::getLogDownloadUrl(const GetLogDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLogDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLogDownloadUrlOutcome(GetLogDownloadUrlResult(outcome.result()));
	else
		return GetLogDownloadUrlOutcome(outcome.error());
}

void EmrClient::getLogDownloadUrlAsync(const GetLogDownloadUrlRequest& request, const GetLogDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLogDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetLogDownloadUrlOutcomeCallable EmrClient::getLogDownloadUrlCallable(const GetLogDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getLogDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreDescribeTableOutcome EmrClient::metastoreDescribeTable(const MetastoreDescribeTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreDescribeTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreDescribeTableOutcome(MetastoreDescribeTableResult(outcome.result()));
	else
		return MetastoreDescribeTableOutcome(outcome.error());
}

void EmrClient::metastoreDescribeTableAsync(const MetastoreDescribeTableRequest& request, const MetastoreDescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreDescribeTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreDescribeTableOutcomeCallable EmrClient::metastoreDescribeTableCallable(const MetastoreDescribeTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreDescribeTableOutcome()>>(
			[this, request]()
			{
			return this->metastoreDescribeTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowOutcome EmrClient::modifyFlow(const ModifyFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowOutcome(ModifyFlowResult(outcome.result()));
	else
		return ModifyFlowOutcome(outcome.error());
}

void EmrClient::modifyFlowAsync(const ModifyFlowRequest& request, const ModifyFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowOutcomeCallable EmrClient::modifyFlowCallable(const ModifyFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowOutcome()>>(
			[this, request]()
			{
			return this->modifyFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingRuleOutcome EmrClient::describeScalingRule(const DescribeScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingRuleOutcome(DescribeScalingRuleResult(outcome.result()));
	else
		return DescribeScalingRuleOutcome(outcome.error());
}

void EmrClient::describeScalingRuleAsync(const DescribeScalingRuleRequest& request, const DescribeScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingRuleOutcomeCallable EmrClient::describeScalingRuleCallable(const DescribeScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->describeScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUserStatisticsOutcome EmrClient::createUserStatistics(const CreateUserStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserStatisticsOutcome(CreateUserStatisticsResult(outcome.result()));
	else
		return CreateUserStatisticsOutcome(outcome.error());
}

void EmrClient::createUserStatisticsAsync(const CreateUserStatisticsRequest& request, const CreateUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUserStatisticsOutcomeCallable EmrClient::createUserStatisticsCallable(const CreateUserStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserStatisticsOutcome()>>(
			[this, request]()
			{
			return this->createUserStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteJobOutcome EmrClient::deleteJob(const DeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobOutcome(DeleteJobResult(outcome.result()));
	else
		return DeleteJobOutcome(outcome.error());
}

void EmrClient::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteJobOutcomeCallable EmrClient::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowProjectClusterSettingOutcome EmrClient::modifyFlowProjectClusterSetting(const ModifyFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowProjectClusterSettingOutcome(ModifyFlowProjectClusterSettingResult(outcome.result()));
	else
		return ModifyFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::modifyFlowProjectClusterSettingAsync(const ModifyFlowProjectClusterSettingRequest& request, const ModifyFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowProjectClusterSettingOutcomeCallable EmrClient::modifyFlowProjectClusterSettingCallable(const ModifyFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddUserResourceRoleOutcome EmrClient::addUserResourceRole(const AddUserResourceRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserResourceRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserResourceRoleOutcome(AddUserResourceRoleResult(outcome.result()));
	else
		return AddUserResourceRoleOutcome(outcome.error());
}

void EmrClient::addUserResourceRoleAsync(const AddUserResourceRoleRequest& request, const AddUserResourceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserResourceRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddUserResourceRoleOutcomeCallable EmrClient::addUserResourceRoleCallable(const AddUserResourceRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserResourceRoleOutcome()>>(
			[this, request]()
			{
			return this->addUserResourceRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterNameOutcome EmrClient::modifyClusterName(const ModifyClusterNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterNameOutcome(ModifyClusterNameResult(outcome.result()));
	else
		return ModifyClusterNameOutcome(outcome.error());
}

void EmrClient::modifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterNameOutcomeCallable EmrClient::modifyClusterNameCallable(const ModifyClusterNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::MetastoreListTablesOutcome EmrClient::metastoreListTables(const MetastoreListTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetastoreListTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetastoreListTablesOutcome(MetastoreListTablesResult(outcome.result()));
	else
		return MetastoreListTablesOutcome(outcome.error());
}

void EmrClient::metastoreListTablesAsync(const MetastoreListTablesRequest& request, const MetastoreListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metastoreListTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::MetastoreListTablesOutcomeCallable EmrClient::metastoreListTablesCallable(const MetastoreListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetastoreListTablesOutcome()>>(
			[this, request]()
			{
			return this->metastoreListTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourcePoolSchedulerTypeOutcome EmrClient::modifyResourcePoolSchedulerType(const ModifyResourcePoolSchedulerTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourcePoolSchedulerTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourcePoolSchedulerTypeOutcome(ModifyResourcePoolSchedulerTypeResult(outcome.result()));
	else
		return ModifyResourcePoolSchedulerTypeOutcome(outcome.error());
}

void EmrClient::modifyResourcePoolSchedulerTypeAsync(const ModifyResourcePoolSchedulerTypeRequest& request, const ModifyResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourcePoolSchedulerType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourcePoolSchedulerTypeOutcomeCallable EmrClient::modifyResourcePoolSchedulerTypeCallable(const ModifyResourcePoolSchedulerTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourcePoolSchedulerTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyResourcePoolSchedulerType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListOpsOperationTaskOutcome EmrClient::listOpsOperationTask(const ListOpsOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOpsOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOpsOperationTaskOutcome(ListOpsOperationTaskResult(outcome.result()));
	else
		return ListOpsOperationTaskOutcome(outcome.error());
}

void EmrClient::listOpsOperationTaskAsync(const ListOpsOperationTaskRequest& request, const ListOpsOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOpsOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListOpsOperationTaskOutcomeCallable EmrClient::listOpsOperationTaskCallable(const ListOpsOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOpsOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->listOpsOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteNavNodeOutcome EmrClient::deleteNavNode(const DeleteNavNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNavNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNavNodeOutcome(DeleteNavNodeResult(outcome.result()));
	else
		return DeleteNavNodeOutcome(outcome.error());
}

void EmrClient::deleteNavNodeAsync(const DeleteNavNodeRequest& request, const DeleteNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNavNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteNavNodeOutcomeCallable EmrClient::deleteNavNodeCallable(const DeleteNavNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNavNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteNavNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListUserGroupsOutcome EmrClient::listUserGroups(const ListUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsOutcome(ListUserGroupsResult(outcome.result()));
	else
		return ListUserGroupsOutcome(outcome.error());
}

void EmrClient::listUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListUserGroupsOutcomeCallable EmrClient::listUserGroupsCallable(const ListUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->listUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateProjectSettingOutcome EmrClient::updateProjectSetting(const UpdateProjectSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectSettingOutcome(UpdateProjectSettingResult(outcome.result()));
	else
		return UpdateProjectSettingOutcome(outcome.error());
}

void EmrClient::updateProjectSettingAsync(const UpdateProjectSettingRequest& request, const UpdateProjectSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateProjectSettingOutcomeCallable EmrClient::updateProjectSettingCallable(const UpdateProjectSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectSettingOutcome()>>(
			[this, request]()
			{
			return this->updateProjectSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeNoteOutcome EmrClient::describeNote(const DescribeNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNoteOutcome(DescribeNoteResult(outcome.result()));
	else
		return DescribeNoteOutcome(outcome.error());
}

void EmrClient::describeNoteAsync(const DescribeNoteRequest& request, const DescribeNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeNoteOutcomeCallable EmrClient::describeNoteCallable(const DescribeNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNoteOutcome()>>(
			[this, request]()
			{
			return this->describeNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

