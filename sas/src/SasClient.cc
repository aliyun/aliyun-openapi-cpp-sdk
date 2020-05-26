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

#include <alibabacloud/sas/SasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

namespace
{
	const std::string SERVICE_NAME = "Sas";
}

SasClient::SasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas");
}

SasClient::SasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas");
}

SasClient::SasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas");
}

SasClient::~SasClient()
{}

SasClient::CreateAntiBruteForceRuleOutcome SasClient::createAntiBruteForceRule(const CreateAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAntiBruteForceRuleOutcome(CreateAntiBruteForceRuleResult(outcome.result()));
	else
		return CreateAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::createAntiBruteForceRuleAsync(const CreateAntiBruteForceRuleRequest& request, const CreateAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateAntiBruteForceRuleOutcomeCallable SasClient::createAntiBruteForceRuleCallable(const CreateAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->createAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateOrUpdateAssetGroupOutcome SasClient::createOrUpdateAssetGroup(const CreateOrUpdateAssetGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateAssetGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateAssetGroupOutcome(CreateOrUpdateAssetGroupResult(outcome.result()));
	else
		return CreateOrUpdateAssetGroupOutcome(outcome.error());
}

void SasClient::createOrUpdateAssetGroupAsync(const CreateOrUpdateAssetGroupRequest& request, const CreateOrUpdateAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateAssetGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateOrUpdateAssetGroupOutcomeCallable SasClient::createOrUpdateAssetGroupCallable(const CreateOrUpdateAssetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateAssetGroupOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateAssetGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateSimilarSecurityEventsQueryTaskOutcome SasClient::createSimilarSecurityEventsQueryTask(const CreateSimilarSecurityEventsQueryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSimilarSecurityEventsQueryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSimilarSecurityEventsQueryTaskOutcome(CreateSimilarSecurityEventsQueryTaskResult(outcome.result()));
	else
		return CreateSimilarSecurityEventsQueryTaskOutcome(outcome.error());
}

void SasClient::createSimilarSecurityEventsQueryTaskAsync(const CreateSimilarSecurityEventsQueryTaskRequest& request, const CreateSimilarSecurityEventsQueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSimilarSecurityEventsQueryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateSimilarSecurityEventsQueryTaskOutcomeCallable SasClient::createSimilarSecurityEventsQueryTaskCallable(const CreateSimilarSecurityEventsQueryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSimilarSecurityEventsQueryTaskOutcome()>>(
			[this, request]()
			{
			return this->createSimilarSecurityEventsQueryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteGroupOutcome SasClient::deleteGroup(const DeleteGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupOutcome(DeleteGroupResult(outcome.result()));
	else
		return DeleteGroupOutcome(outcome.error());
}

void SasClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteGroupOutcomeCallable SasClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteLoginBaseConfigOutcome SasClient::deleteLoginBaseConfig(const DeleteLoginBaseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoginBaseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoginBaseConfigOutcome(DeleteLoginBaseConfigResult(outcome.result()));
	else
		return DeleteLoginBaseConfigOutcome(outcome.error());
}

void SasClient::deleteLoginBaseConfigAsync(const DeleteLoginBaseConfigRequest& request, const DeleteLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoginBaseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteLoginBaseConfigOutcomeCallable SasClient::deleteLoginBaseConfigCallable(const DeleteLoginBaseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoginBaseConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLoginBaseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteTagWithUuidOutcome SasClient::deleteTagWithUuid(const DeleteTagWithUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagWithUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagWithUuidOutcome(DeleteTagWithUuidResult(outcome.result()));
	else
		return DeleteTagWithUuidOutcome(outcome.error());
}

void SasClient::deleteTagWithUuidAsync(const DeleteTagWithUuidRequest& request, const DeleteTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagWithUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteTagWithUuidOutcomeCallable SasClient::deleteTagWithUuidCallable(const DeleteTagWithUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagWithUuidOutcome()>>(
			[this, request]()
			{
			return this->deleteTagWithUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAlarmEventDetailOutcome SasClient::describeAlarmEventDetail(const DescribeAlarmEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventDetailOutcome(DescribeAlarmEventDetailResult(outcome.result()));
	else
		return DescribeAlarmEventDetailOutcome(outcome.error());
}

void SasClient::describeAlarmEventDetailAsync(const DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAlarmEventDetailOutcomeCallable SasClient::describeAlarmEventDetailCallable(const DescribeAlarmEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAlarmEventListOutcome SasClient::describeAlarmEventList(const DescribeAlarmEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventListOutcome(DescribeAlarmEventListResult(outcome.result()));
	else
		return DescribeAlarmEventListOutcome(outcome.error());
}

void SasClient::describeAlarmEventListAsync(const DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAlarmEventListOutcomeCallable SasClient::describeAlarmEventListCallable(const DescribeAlarmEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventListOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllEntityOutcome SasClient::describeAllEntity(const DescribeAllEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllEntityOutcome(DescribeAllEntityResult(outcome.result()));
	else
		return DescribeAllEntityOutcome(outcome.error());
}

void SasClient::describeAllEntityAsync(const DescribeAllEntityRequest& request, const DescribeAllEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllEntityOutcomeCallable SasClient::describeAllEntityCallable(const DescribeAllEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllEntityOutcome()>>(
			[this, request]()
			{
			return this->describeAllEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllGroupsOutcome SasClient::describeAllGroups(const DescribeAllGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllGroupsOutcome(DescribeAllGroupsResult(outcome.result()));
	else
		return DescribeAllGroupsOutcome(outcome.error());
}

void SasClient::describeAllGroupsAsync(const DescribeAllGroupsRequest& request, const DescribeAllGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllGroupsOutcomeCallable SasClient::describeAllGroupsCallable(const DescribeAllGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeAllGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllRegionsStatisticsOutcome SasClient::describeAllRegionsStatistics(const DescribeAllRegionsStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllRegionsStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllRegionsStatisticsOutcome(DescribeAllRegionsStatisticsResult(outcome.result()));
	else
		return DescribeAllRegionsStatisticsOutcome(outcome.error());
}

void SasClient::describeAllRegionsStatisticsAsync(const DescribeAllRegionsStatisticsRequest& request, const DescribeAllRegionsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllRegionsStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllRegionsStatisticsOutcomeCallable SasClient::describeAllRegionsStatisticsCallable(const DescribeAllRegionsStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllRegionsStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeAllRegionsStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetDetailByUuidOutcome SasClient::describeAssetDetailByUuid(const DescribeAssetDetailByUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetDetailByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetDetailByUuidOutcome(DescribeAssetDetailByUuidResult(outcome.result()));
	else
		return DescribeAssetDetailByUuidOutcome(outcome.error());
}

void SasClient::describeAssetDetailByUuidAsync(const DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetDetailByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetDetailByUuidOutcomeCallable SasClient::describeAssetDetailByUuidCallable(const DescribeAssetDetailByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetDetailByUuidOutcome()>>(
			[this, request]()
			{
			return this->describeAssetDetailByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetDetailByUuidsOutcome SasClient::describeAssetDetailByUuids(const DescribeAssetDetailByUuidsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetDetailByUuidsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetDetailByUuidsOutcome(DescribeAssetDetailByUuidsResult(outcome.result()));
	else
		return DescribeAssetDetailByUuidsOutcome(outcome.error());
}

void SasClient::describeAssetDetailByUuidsAsync(const DescribeAssetDetailByUuidsRequest& request, const DescribeAssetDetailByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetDetailByUuids(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetDetailByUuidsOutcomeCallable SasClient::describeAssetDetailByUuidsCallable(const DescribeAssetDetailByUuidsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetDetailByUuidsOutcome()>>(
			[this, request]()
			{
			return this->describeAssetDetailByUuids(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAutoDelConfigOutcome SasClient::describeAutoDelConfig(const DescribeAutoDelConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoDelConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoDelConfigOutcome(DescribeAutoDelConfigResult(outcome.result()));
	else
		return DescribeAutoDelConfigOutcome(outcome.error());
}

void SasClient::describeAutoDelConfigAsync(const DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAutoDelConfigOutcomeCallable SasClient::describeAutoDelConfigCallable(const DescribeAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAutoDelConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningDetailOutcome SasClient::describeCheckWarningDetail(const DescribeCheckWarningDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningDetailOutcome(DescribeCheckWarningDetailResult(outcome.result()));
	else
		return DescribeCheckWarningDetailOutcome(outcome.error());
}

void SasClient::describeCheckWarningDetailAsync(const DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningDetailOutcomeCallable SasClient::describeCheckWarningDetailCallable(const DescribeCheckWarningDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningSummaryOutcome SasClient::describeCheckWarningSummary(const DescribeCheckWarningSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningSummaryOutcome(DescribeCheckWarningSummaryResult(outcome.result()));
	else
		return DescribeCheckWarningSummaryOutcome(outcome.error());
}

void SasClient::describeCheckWarningSummaryAsync(const DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningSummaryOutcomeCallable SasClient::describeCheckWarningSummaryCallable(const DescribeCheckWarningSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningsOutcome SasClient::describeCheckWarnings(const DescribeCheckWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningsOutcome(DescribeCheckWarningsResult(outcome.result()));
	else
		return DescribeCheckWarningsOutcome(outcome.error());
}

void SasClient::describeCheckWarningsAsync(const DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningsOutcomeCallable SasClient::describeCheckWarningsCallable(const DescribeCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCloudCenterInstancesOutcome SasClient::describeCloudCenterInstances(const DescribeCloudCenterInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudCenterInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudCenterInstancesOutcome(DescribeCloudCenterInstancesResult(outcome.result()));
	else
		return DescribeCloudCenterInstancesOutcome(outcome.error());
}

void SasClient::describeCloudCenterInstancesAsync(const DescribeCloudCenterInstancesRequest& request, const DescribeCloudCenterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudCenterInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCloudCenterInstancesOutcomeCallable SasClient::describeCloudCenterInstancesCallable(const DescribeCloudCenterInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudCenterInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudCenterInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCloudProductFieldStatisticsOutcome SasClient::describeCloudProductFieldStatistics(const DescribeCloudProductFieldStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudProductFieldStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudProductFieldStatisticsOutcome(DescribeCloudProductFieldStatisticsResult(outcome.result()));
	else
		return DescribeCloudProductFieldStatisticsOutcome(outcome.error());
}

void SasClient::describeCloudProductFieldStatisticsAsync(const DescribeCloudProductFieldStatisticsRequest& request, const DescribeCloudProductFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudProductFieldStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCloudProductFieldStatisticsOutcomeCallable SasClient::describeCloudProductFieldStatisticsCallable(const DescribeCloudProductFieldStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudProductFieldStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudProductFieldStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeConcernNecessityOutcome SasClient::describeConcernNecessity(const DescribeConcernNecessityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConcernNecessityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConcernNecessityOutcome(DescribeConcernNecessityResult(outcome.result()));
	else
		return DescribeConcernNecessityOutcome(outcome.error());
}

void SasClient::describeConcernNecessityAsync(const DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeConcernNecessityOutcomeCallable SasClient::describeConcernNecessityCallable(const DescribeConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->describeConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCriteriaOutcome SasClient::describeCriteria(const DescribeCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCriteriaOutcome(DescribeCriteriaResult(outcome.result()));
	else
		return DescribeCriteriaOutcome(outcome.error());
}

void SasClient::describeCriteriaAsync(const DescribeCriteriaRequest& request, const DescribeCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCriteriaOutcomeCallable SasClient::describeCriteriaCallable(const DescribeCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDialogMessagesOutcome SasClient::describeDialogMessages(const DescribeDialogMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDialogMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDialogMessagesOutcome(DescribeDialogMessagesResult(outcome.result()));
	else
		return DescribeDialogMessagesOutcome(outcome.error());
}

void SasClient::describeDialogMessagesAsync(const DescribeDialogMessagesRequest& request, const DescribeDialogMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDialogMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDialogMessagesOutcomeCallable SasClient::describeDialogMessagesCallable(const DescribeDialogMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDialogMessagesOutcome()>>(
			[this, request]()
			{
			return this->describeDialogMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDingTalkOutcome SasClient::describeDingTalk(const DescribeDingTalkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDingTalkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDingTalkOutcome(DescribeDingTalkResult(outcome.result()));
	else
		return DescribeDingTalkOutcome(outcome.error());
}

void SasClient::describeDingTalkAsync(const DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDingTalkOutcomeCallable SasClient::describeDingTalkCallable(const DescribeDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDingTalkOutcome()>>(
			[this, request]()
			{
			return this->describeDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainCountOutcome SasClient::describeDomainCount(const DescribeDomainCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCountOutcome(DescribeDomainCountResult(outcome.result()));
	else
		return DescribeDomainCountOutcome(outcome.error());
}

void SasClient::describeDomainCountAsync(const DescribeDomainCountRequest& request, const DescribeDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainCountOutcomeCallable SasClient::describeDomainCountCallable(const DescribeDomainCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCountOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainDetailOutcome SasClient::describeDomainDetail(const DescribeDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainDetailOutcome(DescribeDomainDetailResult(outcome.result()));
	else
		return DescribeDomainDetailOutcome(outcome.error());
}

void SasClient::describeDomainDetailAsync(const DescribeDomainDetailRequest& request, const DescribeDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainDetailOutcomeCallable SasClient::describeDomainDetailCallable(const DescribeDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainListOutcome SasClient::describeDomainList(const DescribeDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainListOutcome(DescribeDomainListResult(outcome.result()));
	else
		return DescribeDomainListOutcome(outcome.error());
}

void SasClient::describeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainListOutcomeCallable SasClient::describeDomainListCallable(const DescribeDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeEmgVulGroupOutcome SasClient::describeEmgVulGroup(const DescribeEmgVulGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmgVulGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmgVulGroupOutcome(DescribeEmgVulGroupResult(outcome.result()));
	else
		return DescribeEmgVulGroupOutcome(outcome.error());
}

void SasClient::describeEmgVulGroupAsync(const DescribeEmgVulGroupRequest& request, const DescribeEmgVulGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgVulGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeEmgVulGroupOutcomeCallable SasClient::describeEmgVulGroupCallable(const DescribeEmgVulGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgVulGroupOutcome()>>(
			[this, request]()
			{
			return this->describeEmgVulGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExportInfoOutcome SasClient::describeExportInfo(const DescribeExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportInfoOutcome(DescribeExportInfoResult(outcome.result()));
	else
		return DescribeExportInfoOutcome(outcome.error());
}

void SasClient::describeExportInfoAsync(const DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExportInfoOutcomeCallable SasClient::describeExportInfoCallable(const DescribeExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeFieldStatisticsOutcome SasClient::describeFieldStatistics(const DescribeFieldStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFieldStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFieldStatisticsOutcome(DescribeFieldStatisticsResult(outcome.result()));
	else
		return DescribeFieldStatisticsOutcome(outcome.error());
}

void SasClient::describeFieldStatisticsAsync(const DescribeFieldStatisticsRequest& request, const DescribeFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFieldStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeFieldStatisticsOutcomeCallable SasClient::describeFieldStatisticsCallable(const DescribeFieldStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFieldStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeFieldStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGraph4InvestigationOnlineOutcome SasClient::describeGraph4InvestigationOnline(const DescribeGraph4InvestigationOnlineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGraph4InvestigationOnlineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGraph4InvestigationOnlineOutcome(DescribeGraph4InvestigationOnlineResult(outcome.result()));
	else
		return DescribeGraph4InvestigationOnlineOutcome(outcome.error());
}

void SasClient::describeGraph4InvestigationOnlineAsync(const DescribeGraph4InvestigationOnlineRequest& request, const DescribeGraph4InvestigationOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGraph4InvestigationOnline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGraph4InvestigationOnlineOutcomeCallable SasClient::describeGraph4InvestigationOnlineCallable(const DescribeGraph4InvestigationOnlineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGraph4InvestigationOnlineOutcome()>>(
			[this, request]()
			{
			return this->describeGraph4InvestigationOnline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedTagsOutcome SasClient::describeGroupedTags(const DescribeGroupedTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedTagsOutcome(DescribeGroupedTagsResult(outcome.result()));
	else
		return DescribeGroupedTagsOutcome(outcome.error());
}

void SasClient::describeGroupedTagsAsync(const DescribeGroupedTagsRequest& request, const DescribeGroupedTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedTagsOutcomeCallable SasClient::describeGroupedTagsCallable(const DescribeGroupedTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedTagsOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedVulOutcome SasClient::describeGroupedVul(const DescribeGroupedVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedVulOutcome(DescribeGroupedVulResult(outcome.result()));
	else
		return DescribeGroupedVulOutcome(outcome.error());
}

void SasClient::describeGroupedVulAsync(const DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedVulOutcomeCallable SasClient::describeGroupedVulCallable(const DescribeGroupedVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedVulOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstanceStatisticsOutcome SasClient::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) const
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

void SasClient::describeInstanceStatisticsAsync(const DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstanceStatisticsOutcomeCallable SasClient::describeInstanceStatisticsCallable(const DescribeInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeIpInfoOutcome SasClient::describeIpInfo(const DescribeIpInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpInfoOutcome(DescribeIpInfoResult(outcome.result()));
	else
		return DescribeIpInfoOutcome(outcome.error());
}

void SasClient::describeIpInfoAsync(const DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeIpInfoOutcomeCallable SasClient::describeIpInfoCallable(const DescribeIpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpInfoOutcome()>>(
			[this, request]()
			{
			return this->describeIpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeModuleConfigOutcome SasClient::describeModuleConfig(const DescribeModuleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModuleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModuleConfigOutcome(DescribeModuleConfigResult(outcome.result()));
	else
		return DescribeModuleConfigOutcome(outcome.error());
}

void SasClient::describeModuleConfigAsync(const DescribeModuleConfigRequest& request, const DescribeModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModuleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeModuleConfigOutcomeCallable SasClient::describeModuleConfigCallable(const DescribeModuleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModuleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeModuleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeNoticeConfigOutcome SasClient::describeNoticeConfig(const DescribeNoticeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNoticeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNoticeConfigOutcome(DescribeNoticeConfigResult(outcome.result()));
	else
		return DescribeNoticeConfigOutcome(outcome.error());
}

void SasClient::describeNoticeConfigAsync(const DescribeNoticeConfigRequest& request, const DescribeNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNoticeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeNoticeConfigOutcomeCallable SasClient::describeNoticeConfigCallable(const DescribeNoticeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNoticeConfigOutcome()>>(
			[this, request]()
			{
			return this->describeNoticeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyCountOutcome SasClient::describePropertyCount(const DescribePropertyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyCountOutcome(DescribePropertyCountResult(outcome.result()));
	else
		return DescribePropertyCountOutcome(outcome.error());
}

void SasClient::describePropertyCountAsync(const DescribePropertyCountRequest& request, const DescribePropertyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyCountOutcomeCallable SasClient::describePropertyCountCallable(const DescribePropertyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyCountOutcome()>>(
			[this, request]()
			{
			return this->describePropertyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyPortDetailOutcome SasClient::describePropertyPortDetail(const DescribePropertyPortDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyPortDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyPortDetailOutcome(DescribePropertyPortDetailResult(outcome.result()));
	else
		return DescribePropertyPortDetailOutcome(outcome.error());
}

void SasClient::describePropertyPortDetailAsync(const DescribePropertyPortDetailRequest& request, const DescribePropertyPortDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyPortDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyPortDetailOutcomeCallable SasClient::describePropertyPortDetailCallable(const DescribePropertyPortDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyPortDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyPortDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyPortItemOutcome SasClient::describePropertyPortItem(const DescribePropertyPortItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyPortItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyPortItemOutcome(DescribePropertyPortItemResult(outcome.result()));
	else
		return DescribePropertyPortItemOutcome(outcome.error());
}

void SasClient::describePropertyPortItemAsync(const DescribePropertyPortItemRequest& request, const DescribePropertyPortItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyPortItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyPortItemOutcomeCallable SasClient::describePropertyPortItemCallable(const DescribePropertyPortItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyPortItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyPortItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyProcDetailOutcome SasClient::describePropertyProcDetail(const DescribePropertyProcDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyProcDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyProcDetailOutcome(DescribePropertyProcDetailResult(outcome.result()));
	else
		return DescribePropertyProcDetailOutcome(outcome.error());
}

void SasClient::describePropertyProcDetailAsync(const DescribePropertyProcDetailRequest& request, const DescribePropertyProcDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyProcDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyProcDetailOutcomeCallable SasClient::describePropertyProcDetailCallable(const DescribePropertyProcDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyProcDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyProcDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyProcItemOutcome SasClient::describePropertyProcItem(const DescribePropertyProcItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyProcItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyProcItemOutcome(DescribePropertyProcItemResult(outcome.result()));
	else
		return DescribePropertyProcItemOutcome(outcome.error());
}

void SasClient::describePropertyProcItemAsync(const DescribePropertyProcItemRequest& request, const DescribePropertyProcItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyProcItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyProcItemOutcomeCallable SasClient::describePropertyProcItemCallable(const DescribePropertyProcItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyProcItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyProcItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertySoftwareDetailOutcome SasClient::describePropertySoftwareDetail(const DescribePropertySoftwareDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertySoftwareDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertySoftwareDetailOutcome(DescribePropertySoftwareDetailResult(outcome.result()));
	else
		return DescribePropertySoftwareDetailOutcome(outcome.error());
}

void SasClient::describePropertySoftwareDetailAsync(const DescribePropertySoftwareDetailRequest& request, const DescribePropertySoftwareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertySoftwareDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertySoftwareDetailOutcomeCallable SasClient::describePropertySoftwareDetailCallable(const DescribePropertySoftwareDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertySoftwareDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertySoftwareDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertySoftwareItemOutcome SasClient::describePropertySoftwareItem(const DescribePropertySoftwareItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertySoftwareItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertySoftwareItemOutcome(DescribePropertySoftwareItemResult(outcome.result()));
	else
		return DescribePropertySoftwareItemOutcome(outcome.error());
}

void SasClient::describePropertySoftwareItemAsync(const DescribePropertySoftwareItemRequest& request, const DescribePropertySoftwareItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertySoftwareItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertySoftwareItemOutcomeCallable SasClient::describePropertySoftwareItemCallable(const DescribePropertySoftwareItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertySoftwareItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertySoftwareItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUsageNewestOutcome SasClient::describePropertyUsageNewest(const DescribePropertyUsageNewestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUsageNewestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUsageNewestOutcome(DescribePropertyUsageNewestResult(outcome.result()));
	else
		return DescribePropertyUsageNewestOutcome(outcome.error());
}

void SasClient::describePropertyUsageNewestAsync(const DescribePropertyUsageNewestRequest& request, const DescribePropertyUsageNewestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUsageNewest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUsageNewestOutcomeCallable SasClient::describePropertyUsageNewestCallable(const DescribePropertyUsageNewestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUsageNewestOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUsageNewest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUserDetailOutcome SasClient::describePropertyUserDetail(const DescribePropertyUserDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUserDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUserDetailOutcome(DescribePropertyUserDetailResult(outcome.result()));
	else
		return DescribePropertyUserDetailOutcome(outcome.error());
}

void SasClient::describePropertyUserDetailAsync(const DescribePropertyUserDetailRequest& request, const DescribePropertyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUserDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUserDetailOutcomeCallable SasClient::describePropertyUserDetailCallable(const DescribePropertyUserDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUserDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUserDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUserItemOutcome SasClient::describePropertyUserItem(const DescribePropertyUserItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUserItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUserItemOutcome(DescribePropertyUserItemResult(outcome.result()));
	else
		return DescribePropertyUserItemOutcome(outcome.error());
}

void SasClient::describePropertyUserItemAsync(const DescribePropertyUserItemRequest& request, const DescribePropertyUserItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUserItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUserItemOutcomeCallable SasClient::describePropertyUserItemCallable(const DescribePropertyUserItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUserItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUserItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckItemResultOutcome SasClient::describeRiskCheckItemResult(const DescribeRiskCheckItemResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckItemResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckItemResultOutcome(DescribeRiskCheckItemResultResult(outcome.result()));
	else
		return DescribeRiskCheckItemResultOutcome(outcome.error());
}

void SasClient::describeRiskCheckItemResultAsync(const DescribeRiskCheckItemResultRequest& request, const DescribeRiskCheckItemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckItemResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckItemResultOutcomeCallable SasClient::describeRiskCheckItemResultCallable(const DescribeRiskCheckItemResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckItemResultOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckItemResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckResultOutcome SasClient::describeRiskCheckResult(const DescribeRiskCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckResultOutcome(DescribeRiskCheckResultResult(outcome.result()));
	else
		return DescribeRiskCheckResultOutcome(outcome.error());
}

void SasClient::describeRiskCheckResultAsync(const DescribeRiskCheckResultRequest& request, const DescribeRiskCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckResultOutcomeCallable SasClient::describeRiskCheckResultCallable(const DescribeRiskCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckResultOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckSummaryOutcome SasClient::describeRiskCheckSummary(const DescribeRiskCheckSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckSummaryOutcome(DescribeRiskCheckSummaryResult(outcome.result()));
	else
		return DescribeRiskCheckSummaryOutcome(outcome.error());
}

void SasClient::describeRiskCheckSummaryAsync(const DescribeRiskCheckSummaryRequest& request, const DescribeRiskCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckSummaryOutcomeCallable SasClient::describeRiskCheckSummaryCallable(const DescribeRiskCheckSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskItemTypeOutcome SasClient::describeRiskItemType(const DescribeRiskItemTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskItemTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskItemTypeOutcome(DescribeRiskItemTypeResult(outcome.result()));
	else
		return DescribeRiskItemTypeOutcome(outcome.error());
}

void SasClient::describeRiskItemTypeAsync(const DescribeRiskItemTypeRequest& request, const DescribeRiskItemTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskItemType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskItemTypeOutcomeCallable SasClient::describeRiskItemTypeCallable(const DescribeRiskItemTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskItemTypeOutcome()>>(
			[this, request]()
			{
			return this->describeRiskItemType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSasAssetStatisticsColumnOutcome SasClient::describeSasAssetStatisticsColumn(const DescribeSasAssetStatisticsColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSasAssetStatisticsColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSasAssetStatisticsColumnOutcome(DescribeSasAssetStatisticsColumnResult(outcome.result()));
	else
		return DescribeSasAssetStatisticsColumnOutcome(outcome.error());
}

void SasClient::describeSasAssetStatisticsColumnAsync(const DescribeSasAssetStatisticsColumnRequest& request, const DescribeSasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSasAssetStatisticsColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSasAssetStatisticsColumnOutcomeCallable SasClient::describeSasAssetStatisticsColumnCallable(const DescribeSasAssetStatisticsColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSasAssetStatisticsColumnOutcome()>>(
			[this, request]()
			{
			return this->describeSasAssetStatisticsColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSearchConditionOutcome SasClient::describeSearchCondition(const DescribeSearchConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSearchConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSearchConditionOutcome(DescribeSearchConditionResult(outcome.result()));
	else
		return DescribeSearchConditionOutcome(outcome.error());
}

void SasClient::describeSearchConditionAsync(const DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSearchCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSearchConditionOutcomeCallable SasClient::describeSearchConditionCallable(const DescribeSearchConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSearchConditionOutcome()>>(
			[this, request]()
			{
			return this->describeSearchCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecureSuggestionOutcome SasClient::describeSecureSuggestion(const DescribeSecureSuggestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecureSuggestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecureSuggestionOutcome(DescribeSecureSuggestionResult(outcome.result()));
	else
		return DescribeSecureSuggestionOutcome(outcome.error());
}

void SasClient::describeSecureSuggestionAsync(const DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecureSuggestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecureSuggestionOutcomeCallable SasClient::describeSecureSuggestionCallable(const DescribeSecureSuggestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecureSuggestionOutcome()>>(
			[this, request]()
			{
			return this->describeSecureSuggestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityCheckScheduleConfigOutcome SasClient::describeSecurityCheckScheduleConfig(const DescribeSecurityCheckScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityCheckScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityCheckScheduleConfigOutcome(DescribeSecurityCheckScheduleConfigResult(outcome.result()));
	else
		return DescribeSecurityCheckScheduleConfigOutcome(outcome.error());
}

void SasClient::describeSecurityCheckScheduleConfigAsync(const DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityCheckScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityCheckScheduleConfigOutcomeCallable SasClient::describeSecurityCheckScheduleConfigCallable(const DescribeSecurityCheckScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityCheckScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityCheckScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityEventOperationsOutcome SasClient::describeSecurityEventOperations(const DescribeSecurityEventOperationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(DescribeSecurityEventOperationsResult(outcome.result()));
	else
		return DescribeSecurityEventOperationsOutcome(outcome.error());
}

void SasClient::describeSecurityEventOperationsAsync(const DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventOperations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityEventOperationsOutcomeCallable SasClient::describeSecurityEventOperationsCallable(const DescribeSecurityEventOperationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventOperationsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventOperations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityStatInfoOutcome SasClient::describeSecurityStatInfo(const DescribeSecurityStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityStatInfoOutcome(DescribeSecurityStatInfoResult(outcome.result()));
	else
		return DescribeSecurityStatInfoOutcome(outcome.error());
}

void SasClient::describeSecurityStatInfoAsync(const DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityStatInfoOutcomeCallable SasClient::describeSecurityStatInfoCallable(const DescribeSecurityStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSimilarSecurityEventsOutcome SasClient::describeSimilarSecurityEvents(const DescribeSimilarSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSimilarSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSimilarSecurityEventsOutcome(DescribeSimilarSecurityEventsResult(outcome.result()));
	else
		return DescribeSimilarSecurityEventsOutcome(outcome.error());
}

void SasClient::describeSimilarSecurityEventsAsync(const DescribeSimilarSecurityEventsRequest& request, const DescribeSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSimilarSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSimilarSecurityEventsOutcomeCallable SasClient::describeSimilarSecurityEventsCallable(const DescribeSimilarSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSimilarSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSimilarSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStrategyExecDetailOutcome SasClient::describeStrategyExecDetail(const DescribeStrategyExecDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyExecDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyExecDetailOutcome(DescribeStrategyExecDetailResult(outcome.result()));
	else
		return DescribeStrategyExecDetailOutcome(outcome.error());
}

void SasClient::describeStrategyExecDetailAsync(const DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyExecDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStrategyExecDetailOutcomeCallable SasClient::describeStrategyExecDetailCallable(const DescribeStrategyExecDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyExecDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyExecDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStratetyOutcome SasClient::describeStratety(const DescribeStratetyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStratetyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStratetyOutcome(DescribeStratetyResult(outcome.result()));
	else
		return DescribeStratetyOutcome(outcome.error());
}

void SasClient::describeStratetyAsync(const DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStratety(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStratetyOutcomeCallable SasClient::describeStratetyCallable(const DescribeStratetyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStratetyOutcome()>>(
			[this, request]()
			{
			return this->describeStratety(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSummaryInfoOutcome SasClient::describeSummaryInfo(const DescribeSummaryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSummaryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSummaryInfoOutcome(DescribeSummaryInfoResult(outcome.result()));
	else
		return DescribeSummaryInfoOutcome(outcome.error());
}

void SasClient::describeSummaryInfoAsync(const DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSummaryInfoOutcomeCallable SasClient::describeSummaryInfoCallable(const DescribeSummaryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventDetailOutcome SasClient::describeSuspEventDetail(const DescribeSuspEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventDetailOutcome(DescribeSuspEventDetailResult(outcome.result()));
	else
		return DescribeSuspEventDetailOutcome(outcome.error());
}

void SasClient::describeSuspEventDetailAsync(const DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventDetailOutcomeCallable SasClient::describeSuspEventDetailCallable(const DescribeSuspEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventsOutcome SasClient::describeSuspEvents(const DescribeSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventsOutcome(DescribeSuspEventsResult(outcome.result()));
	else
		return DescribeSuspEventsOutcome(outcome.error());
}

void SasClient::describeSuspEventsAsync(const DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventsOutcomeCallable SasClient::describeSuspEventsCallable(const DescribeSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUserBaselineAuthorizationOutcome SasClient::describeUserBaselineAuthorization(const DescribeUserBaselineAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBaselineAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBaselineAuthorizationOutcome(DescribeUserBaselineAuthorizationResult(outcome.result()));
	else
		return DescribeUserBaselineAuthorizationOutcome(outcome.error());
}

void SasClient::describeUserBaselineAuthorizationAsync(const DescribeUserBaselineAuthorizationRequest& request, const DescribeUserBaselineAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBaselineAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUserBaselineAuthorizationOutcomeCallable SasClient::describeUserBaselineAuthorizationCallable(const DescribeUserBaselineAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBaselineAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->describeUserBaselineAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUserLayoutAuthorizationOutcome SasClient::describeUserLayoutAuthorization(const DescribeUserLayoutAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserLayoutAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserLayoutAuthorizationOutcome(DescribeUserLayoutAuthorizationResult(outcome.result()));
	else
		return DescribeUserLayoutAuthorizationOutcome(outcome.error());
}

void SasClient::describeUserLayoutAuthorizationAsync(const DescribeUserLayoutAuthorizationRequest& request, const DescribeUserLayoutAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserLayoutAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUserLayoutAuthorizationOutcomeCallable SasClient::describeUserLayoutAuthorizationCallable(const DescribeUserLayoutAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserLayoutAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->describeUserLayoutAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVolDingdingMessageOutcome SasClient::describeVolDingdingMessage(const DescribeVolDingdingMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVolDingdingMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVolDingdingMessageOutcome(DescribeVolDingdingMessageResult(outcome.result()));
	else
		return DescribeVolDingdingMessageOutcome(outcome.error());
}

void SasClient::describeVolDingdingMessageAsync(const DescribeVolDingdingMessageRequest& request, const DescribeVolDingdingMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVolDingdingMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVolDingdingMessageOutcomeCallable SasClient::describeVolDingdingMessageCallable(const DescribeVolDingdingMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVolDingdingMessageOutcome()>>(
			[this, request]()
			{
			return this->describeVolDingdingMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVpcListOutcome SasClient::describeVpcList(const DescribeVpcListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcListOutcome(DescribeVpcListResult(outcome.result()));
	else
		return DescribeVpcListOutcome(outcome.error());
}

void SasClient::describeVpcListAsync(const DescribeVpcListRequest& request, const DescribeVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVpcListOutcomeCallable SasClient::describeVpcListCallable(const DescribeVpcListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcListOutcome()>>(
			[this, request]()
			{
			return this->describeVpcList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulDetailsOutcome SasClient::describeVulDetails(const DescribeVulDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulDetailsOutcome(DescribeVulDetailsResult(outcome.result()));
	else
		return DescribeVulDetailsOutcome(outcome.error());
}

void SasClient::describeVulDetailsAsync(const DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulDetailsOutcomeCallable SasClient::describeVulDetailsCallable(const DescribeVulDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeVulDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulListOutcome SasClient::describeVulList(const DescribeVulListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulListOutcome(DescribeVulListResult(outcome.result()));
	else
		return DescribeVulListOutcome(outcome.error());
}

void SasClient::describeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulListOutcomeCallable SasClient::describeVulListCallable(const DescribeVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
			[this, request]()
			{
			return this->describeVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulWhitelistOutcome SasClient::describeVulWhitelist(const DescribeVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulWhitelistOutcome(DescribeVulWhitelistResult(outcome.result()));
	else
		return DescribeVulWhitelistOutcome(outcome.error());
}

void SasClient::describeVulWhitelistAsync(const DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulWhitelistOutcomeCallable SasClient::describeVulWhitelistCallable(const DescribeVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWarningMachinesOutcome SasClient::describeWarningMachines(const DescribeWarningMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWarningMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWarningMachinesOutcome(DescribeWarningMachinesResult(outcome.result()));
	else
		return DescribeWarningMachinesOutcome(outcome.error());
}

void SasClient::describeWarningMachinesAsync(const DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarningMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWarningMachinesOutcomeCallable SasClient::describeWarningMachinesCallable(const DescribeWarningMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeWarningMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExportRecordOutcome SasClient::exportRecord(const ExportRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportRecordOutcome(ExportRecordResult(outcome.result()));
	else
		return ExportRecordOutcome(outcome.error());
}

void SasClient::exportRecordAsync(const ExportRecordRequest& request, const ExportRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExportRecordOutcomeCallable SasClient::exportRecordCallable(const ExportRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportRecordOutcome()>>(
			[this, request]()
			{
			return this->exportRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::FixCheckWarningsOutcome SasClient::fixCheckWarnings(const FixCheckWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FixCheckWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FixCheckWarningsOutcome(FixCheckWarningsResult(outcome.result()));
	else
		return FixCheckWarningsOutcome(outcome.error());
}

void SasClient::fixCheckWarningsAsync(const FixCheckWarningsRequest& request, const FixCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fixCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::FixCheckWarningsOutcomeCallable SasClient::fixCheckWarningsCallable(const FixCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FixCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->fixCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetIOCsOutcome SasClient::getIOCs(const GetIOCsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIOCsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIOCsOutcome(GetIOCsResult(outcome.result()));
	else
		return GetIOCsOutcome(outcome.error());
}

void SasClient::getIOCsAsync(const GetIOCsRequest& request, const GetIOCsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIOCs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetIOCsOutcomeCallable SasClient::getIOCsCallable(const GetIOCsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIOCsOutcome()>>(
			[this, request]()
			{
			return this->getIOCs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetIncIOCsOutcome SasClient::getIncIOCs(const GetIncIOCsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIncIOCsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIncIOCsOutcome(GetIncIOCsResult(outcome.result()));
	else
		return GetIncIOCsOutcome(outcome.error());
}

void SasClient::getIncIOCsAsync(const GetIncIOCsRequest& request, const GetIncIOCsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIncIOCs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetIncIOCsOutcomeCallable SasClient::getIncIOCsCallable(const GetIncIOCsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIncIOCsOutcome()>>(
			[this, request]()
			{
			return this->getIncIOCs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::HandleSimilarSecurityEventsOutcome SasClient::handleSimilarSecurityEvents(const HandleSimilarSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandleSimilarSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandleSimilarSecurityEventsOutcome(HandleSimilarSecurityEventsResult(outcome.result()));
	else
		return HandleSimilarSecurityEventsOutcome(outcome.error());
}

void SasClient::handleSimilarSecurityEventsAsync(const HandleSimilarSecurityEventsRequest& request, const HandleSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handleSimilarSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::HandleSimilarSecurityEventsOutcomeCallable SasClient::handleSimilarSecurityEventsCallable(const HandleSimilarSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandleSimilarSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->handleSimilarSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAntiBruteForceRuleOutcome SasClient::modifyAntiBruteForceRule(const ModifyAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAntiBruteForceRuleOutcome(ModifyAntiBruteForceRuleResult(outcome.result()));
	else
		return ModifyAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::modifyAntiBruteForceRuleAsync(const ModifyAntiBruteForceRuleRequest& request, const ModifyAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAntiBruteForceRuleOutcomeCallable SasClient::modifyAntiBruteForceRuleCallable(const ModifyAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyCreateVulWhitelistOutcome SasClient::modifyCreateVulWhitelist(const ModifyCreateVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCreateVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCreateVulWhitelistOutcome(ModifyCreateVulWhitelistResult(outcome.result()));
	else
		return ModifyCreateVulWhitelistOutcome(outcome.error());
}

void SasClient::modifyCreateVulWhitelistAsync(const ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCreateVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyCreateVulWhitelistOutcomeCallable SasClient::modifyCreateVulWhitelistCallable(const ModifyCreateVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCreateVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyCreateVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyEmgVulSubmitOutcome SasClient::modifyEmgVulSubmit(const ModifyEmgVulSubmitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEmgVulSubmitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEmgVulSubmitOutcome(ModifyEmgVulSubmitResult(outcome.result()));
	else
		return ModifyEmgVulSubmitOutcome(outcome.error());
}

void SasClient::modifyEmgVulSubmitAsync(const ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEmgVulSubmit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyEmgVulSubmitOutcomeCallable SasClient::modifyEmgVulSubmitCallable(const ModifyEmgVulSubmitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEmgVulSubmitOutcome()>>(
			[this, request]()
			{
			return this->modifyEmgVulSubmit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyGroupPropertyOutcome SasClient::modifyGroupProperty(const ModifyGroupPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGroupPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGroupPropertyOutcome(ModifyGroupPropertyResult(outcome.result()));
	else
		return ModifyGroupPropertyOutcome(outcome.error());
}

void SasClient::modifyGroupPropertyAsync(const ModifyGroupPropertyRequest& request, const ModifyGroupPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGroupProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyGroupPropertyOutcomeCallable SasClient::modifyGroupPropertyCallable(const ModifyGroupPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGroupPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyGroupProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyLoginBaseConfigOutcome SasClient::modifyLoginBaseConfig(const ModifyLoginBaseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoginBaseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoginBaseConfigOutcome(ModifyLoginBaseConfigResult(outcome.result()));
	else
		return ModifyLoginBaseConfigOutcome(outcome.error());
}

void SasClient::modifyLoginBaseConfigAsync(const ModifyLoginBaseConfigRequest& request, const ModifyLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoginBaseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyLoginBaseConfigOutcomeCallable SasClient::modifyLoginBaseConfigCallable(const ModifyLoginBaseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoginBaseConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLoginBaseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyLoginSwitchConfigOutcome SasClient::modifyLoginSwitchConfig(const ModifyLoginSwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoginSwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoginSwitchConfigOutcome(ModifyLoginSwitchConfigResult(outcome.result()));
	else
		return ModifyLoginSwitchConfigOutcome(outcome.error());
}

void SasClient::modifyLoginSwitchConfigAsync(const ModifyLoginSwitchConfigRequest& request, const ModifyLoginSwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoginSwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyLoginSwitchConfigOutcomeCallable SasClient::modifyLoginSwitchConfigCallable(const ModifyLoginSwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoginSwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLoginSwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyNoticeConfigOutcome SasClient::modifyNoticeConfig(const ModifyNoticeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNoticeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNoticeConfigOutcome(ModifyNoticeConfigResult(outcome.result()));
	else
		return ModifyNoticeConfigOutcome(outcome.error());
}

void SasClient::modifyNoticeConfigAsync(const ModifyNoticeConfigRequest& request, const ModifyNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNoticeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyNoticeConfigOutcomeCallable SasClient::modifyNoticeConfigCallable(const ModifyNoticeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNoticeConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyNoticeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyOperateVulOutcome SasClient::modifyOperateVul(const ModifyOperateVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOperateVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOperateVulOutcome(ModifyOperateVulResult(outcome.result()));
	else
		return ModifyOperateVulOutcome(outcome.error());
}

void SasClient::modifyOperateVulAsync(const ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOperateVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyOperateVulOutcomeCallable SasClient::modifyOperateVulCallable(const ModifyOperateVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOperateVulOutcome()>>(
			[this, request]()
			{
			return this->modifyOperateVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyPushAllTaskOutcome SasClient::modifyPushAllTask(const ModifyPushAllTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPushAllTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPushAllTaskOutcome(ModifyPushAllTaskResult(outcome.result()));
	else
		return ModifyPushAllTaskOutcome(outcome.error());
}

void SasClient::modifyPushAllTaskAsync(const ModifyPushAllTaskRequest& request, const ModifyPushAllTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPushAllTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyPushAllTaskOutcomeCallable SasClient::modifyPushAllTaskCallable(const ModifyPushAllTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPushAllTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyPushAllTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyRiskCheckStatusOutcome SasClient::modifyRiskCheckStatus(const ModifyRiskCheckStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRiskCheckStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRiskCheckStatusOutcome(ModifyRiskCheckStatusResult(outcome.result()));
	else
		return ModifyRiskCheckStatusOutcome(outcome.error());
}

void SasClient::modifyRiskCheckStatusAsync(const ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRiskCheckStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyRiskCheckStatusOutcomeCallable SasClient::modifyRiskCheckStatusCallable(const ModifyRiskCheckStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRiskCheckStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRiskCheckStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyRiskSingleResultStatusOutcome SasClient::modifyRiskSingleResultStatus(const ModifyRiskSingleResultStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRiskSingleResultStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRiskSingleResultStatusOutcome(ModifyRiskSingleResultStatusResult(outcome.result()));
	else
		return ModifyRiskSingleResultStatusOutcome(outcome.error());
}

void SasClient::modifyRiskSingleResultStatusAsync(const ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRiskSingleResultStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyRiskSingleResultStatusOutcomeCallable SasClient::modifyRiskSingleResultStatusCallable(const ModifyRiskSingleResultStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRiskSingleResultStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRiskSingleResultStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifySecurityCheckScheduleConfigOutcome SasClient::modifySecurityCheckScheduleConfig(const ModifySecurityCheckScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityCheckScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityCheckScheduleConfigOutcome(ModifySecurityCheckScheduleConfigResult(outcome.result()));
	else
		return ModifySecurityCheckScheduleConfigOutcome(outcome.error());
}

void SasClient::modifySecurityCheckScheduleConfigAsync(const ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityCheckScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifySecurityCheckScheduleConfigOutcomeCallable SasClient::modifySecurityCheckScheduleConfigCallable(const ModifySecurityCheckScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityCheckScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityCheckScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyStartVulScanOutcome SasClient::modifyStartVulScan(const ModifyStartVulScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStartVulScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStartVulScanOutcome(ModifyStartVulScanResult(outcome.result()));
	else
		return ModifyStartVulScanOutcome(outcome.error());
}

void SasClient::modifyStartVulScanAsync(const ModifyStartVulScanRequest& request, const ModifyStartVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStartVulScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyStartVulScanOutcomeCallable SasClient::modifyStartVulScanCallable(const ModifyStartVulScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStartVulScanOutcome()>>(
			[this, request]()
			{
			return this->modifyStartVulScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyTagWithUuidOutcome SasClient::modifyTagWithUuid(const ModifyTagWithUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagWithUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagWithUuidOutcome(ModifyTagWithUuidResult(outcome.result()));
	else
		return ModifyTagWithUuidOutcome(outcome.error());
}

void SasClient::modifyTagWithUuidAsync(const ModifyTagWithUuidRequest& request, const ModifyTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagWithUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyTagWithUuidOutcomeCallable SasClient::modifyTagWithUuidCallable(const ModifyTagWithUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagWithUuidOutcome()>>(
			[this, request]()
			{
			return this->modifyTagWithUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVulTargetConfigOutcome SasClient::modifyVulTargetConfig(const ModifyVulTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulTargetConfigOutcome(ModifyVulTargetConfigResult(outcome.result()));
	else
		return ModifyVulTargetConfigOutcome(outcome.error());
}

void SasClient::modifyVulTargetConfigAsync(const ModifyVulTargetConfigRequest& request, const ModifyVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVulTargetConfigOutcomeCallable SasClient::modifyVulTargetConfigCallable(const ModifyVulTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyVulTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateSuspiciousTargetConfigOutcome SasClient::operateSuspiciousTargetConfig(const OperateSuspiciousTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateSuspiciousTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateSuspiciousTargetConfigOutcome(OperateSuspiciousTargetConfigResult(outcome.result()));
	else
		return OperateSuspiciousTargetConfigOutcome(outcome.error());
}

void SasClient::operateSuspiciousTargetConfigAsync(const OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateSuspiciousTargetConfigOutcomeCallable SasClient::operateSuspiciousTargetConfigCallable(const OperateSuspiciousTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperationSuspEventsOutcome SasClient::operationSuspEvents(const OperationSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperationSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperationSuspEventsOutcome(OperationSuspEventsResult(outcome.result()));
	else
		return OperationSuspEventsOutcome(outcome.error());
}

void SasClient::operationSuspEventsAsync(const OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operationSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperationSuspEventsOutcomeCallable SasClient::operationSuspEventsCallable(const OperationSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperationSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->operationSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PauseClientOutcome SasClient::pauseClient(const PauseClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseClientOutcome(PauseClientResult(outcome.result()));
	else
		return PauseClientOutcome(outcome.error());
}

void SasClient::pauseClientAsync(const PauseClientRequest& request, const PauseClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PauseClientOutcomeCallable SasClient::pauseClientCallable(const PauseClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseClientOutcome()>>(
			[this, request]()
			{
			return this->pauseClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SasInstallCodeOutcome SasClient::sasInstallCode(const SasInstallCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SasInstallCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SasInstallCodeOutcome(SasInstallCodeResult(outcome.result()));
	else
		return SasInstallCodeOutcome(outcome.error());
}

void SasClient::sasInstallCodeAsync(const SasInstallCodeRequest& request, const SasInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sasInstallCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SasInstallCodeOutcomeCallable SasClient::sasInstallCodeCallable(const SasInstallCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SasInstallCodeOutcome()>>(
			[this, request]()
			{
			return this->sasInstallCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::StartBaselineSecurityCheckOutcome SasClient::startBaselineSecurityCheck(const StartBaselineSecurityCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBaselineSecurityCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBaselineSecurityCheckOutcome(StartBaselineSecurityCheckResult(outcome.result()));
	else
		return StartBaselineSecurityCheckOutcome(outcome.error());
}

void SasClient::startBaselineSecurityCheckAsync(const StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBaselineSecurityCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartBaselineSecurityCheckOutcomeCallable SasClient::startBaselineSecurityCheckCallable(const StartBaselineSecurityCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBaselineSecurityCheckOutcome()>>(
			[this, request]()
			{
			return this->startBaselineSecurityCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ValidateHcWarningsOutcome SasClient::validateHcWarnings(const ValidateHcWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateHcWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateHcWarningsOutcome(ValidateHcWarningsResult(outcome.result()));
	else
		return ValidateHcWarningsOutcome(outcome.error());
}

void SasClient::validateHcWarningsAsync(const ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateHcWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ValidateHcWarningsOutcomeCallable SasClient::validateHcWarningsCallable(const ValidateHcWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateHcWarningsOutcome()>>(
			[this, request]()
			{
			return this->validateHcWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

