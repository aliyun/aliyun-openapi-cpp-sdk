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

#include <alibabacloud/aegis/AegisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

AegisClient::AegisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vipaegis");
}

AegisClient::AegisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vipaegis");
}

AegisClient::AegisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vipaegis");
}

AegisClient::~AegisClient()
{}

CoreClient::EndpointOutcome AegisClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

AegisClient::GetEntityListOutcome AegisClient::getEntityList(const GetEntityListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetEntityListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEntityListOutcome(GetEntityListResult(outcome.result()));
	else
		return GetEntityListOutcome(outcome.error());
}

void AegisClient::getEntityListAsync(const GetEntityListRequest& request, const GetEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEntityList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetEntityListOutcomeCallable AegisClient::getEntityListCallable(const GetEntityListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEntityListOutcome()>>(
			[this, request]()
			{
			return this->getEntityList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetStatisticsByUuidOutcome AegisClient::getStatisticsByUuid(const GetStatisticsByUuidRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatisticsByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatisticsByUuidOutcome(GetStatisticsByUuidResult(outcome.result()));
	else
		return GetStatisticsByUuidOutcome(outcome.error());
}

void AegisClient::getStatisticsByUuidAsync(const GetStatisticsByUuidRequest& request, const GetStatisticsByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatisticsByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetStatisticsByUuidOutcomeCallable AegisClient::getStatisticsByUuidCallable(const GetStatisticsByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatisticsByUuidOutcome()>>(
			[this, request]()
			{
			return this->getStatisticsByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetStatisticsOutcome AegisClient::getStatistics(const GetStatisticsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatisticsOutcome(GetStatisticsResult(outcome.result()));
	else
		return GetStatisticsOutcome(outcome.error());
}

void AegisClient::getStatisticsAsync(const GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetStatisticsOutcomeCallable AegisClient::getStatisticsCallable(const GetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulDetailsOutcome AegisClient::describeVulDetails(const DescribeVulDetailsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulDetailsOutcome(DescribeVulDetailsResult(outcome.result()));
	else
		return DescribeVulDetailsOutcome(outcome.error());
}

void AegisClient::describeVulDetailsAsync(const DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulDetailsOutcomeCallable AegisClient::describeVulDetailsCallable(const DescribeVulDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeVulDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteStrategyOutcome AegisClient::deleteStrategy(const DeleteStrategyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStrategyOutcome(DeleteStrategyResult(outcome.result()));
	else
		return DeleteStrategyOutcome(outcome.error());
}

void AegisClient::deleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteStrategyOutcomeCallable AegisClient::deleteStrategyCallable(const DeleteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetCrackStatisticsOutcome AegisClient::getCrackStatistics(const GetCrackStatisticsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetCrackStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCrackStatisticsOutcome(GetCrackStatisticsResult(outcome.result()));
	else
		return GetCrackStatisticsOutcome(outcome.error());
}

void AegisClient::getCrackStatisticsAsync(const GetCrackStatisticsRequest& request, const GetCrackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCrackStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetCrackStatisticsOutcomeCallable AegisClient::getCrackStatisticsCallable(const GetCrackStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCrackStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getCrackStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWarningOutcome AegisClient::describeWarning(const DescribeWarningRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWarningOutcome(DescribeWarningResult(outcome.result()));
	else
		return DescribeWarningOutcome(outcome.error());
}

void AegisClient::describeWarningAsync(const DescribeWarningRequest& request, const DescribeWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWarningOutcomeCallable AegisClient::describeWarningCallable(const DescribeWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningOutcome()>>(
			[this, request]()
			{
			return this->describeWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ReleaseInstanceOutcome AegisClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void AegisClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ReleaseInstanceOutcomeCallable AegisClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspiciousEventsOutcome AegisClient::describeSuspiciousEvents(const DescribeSuspiciousEventsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspiciousEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspiciousEventsOutcome(DescribeSuspiciousEventsResult(outcome.result()));
	else
		return DescribeSuspiciousEventsOutcome(outcome.error());
}

void AegisClient::describeSuspiciousEventsAsync(const DescribeSuspiciousEventsRequest& request, const DescribeSuspiciousEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspiciousEventsOutcomeCallable AegisClient::describeSuspiciousEventsCallable(const DescribeSuspiciousEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateInstanceOutcome AegisClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void AegisClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateInstanceOutcomeCallable AegisClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulListOutcome AegisClient::describeVulList(const DescribeVulListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulListOutcome(DescribeVulListResult(outcome.result()));
	else
		return DescribeVulListOutcome(outcome.error());
}

void AegisClient::describeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulListOutcomeCallable AegisClient::describeVulListCallable(const DescribeVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
			[this, request]()
			{
			return this->describeVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpgradeInstanceOutcome AegisClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void AegisClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpgradeInstanceOutcomeCallable AegisClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::RenewInstanceOutcome AegisClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void AegisClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::RenewInstanceOutcomeCallable AegisClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStrategyTargetOutcome AegisClient::describeStrategyTarget(const DescribeStrategyTargetRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyTargetOutcome(DescribeStrategyTargetResult(outcome.result()));
	else
		return DescribeStrategyTargetOutcome(outcome.error());
}

void AegisClient::describeStrategyTargetAsync(const DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStrategyTargetOutcomeCallable AegisClient::describeStrategyTargetCallable(const DescribeStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::QueryLoginEventOutcome AegisClient::queryLoginEvent(const QueryLoginEventRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLoginEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLoginEventOutcome(QueryLoginEventResult(outcome.result()));
	else
		return QueryLoginEventOutcome(outcome.error());
}

void AegisClient::queryLoginEventAsync(const QueryLoginEventRequest& request, const QueryLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLoginEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::QueryLoginEventOutcomeCallable AegisClient::queryLoginEventCallable(const QueryLoginEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLoginEventOutcome()>>(
			[this, request]()
			{
			return this->queryLoginEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetAccountStatisticsOutcome AegisClient::getAccountStatistics(const GetAccountStatisticsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountStatisticsOutcome(GetAccountStatisticsResult(outcome.result()));
	else
		return GetAccountStatisticsOutcome(outcome.error());
}

void AegisClient::getAccountStatisticsAsync(const GetAccountStatisticsRequest& request, const GetAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetAccountStatisticsOutcomeCallable AegisClient::getAccountStatisticsCallable(const GetAccountStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getAccountStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyStrategyOutcome AegisClient::modifyStrategy(const ModifyStrategyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStrategyOutcome(ModifyStrategyResult(outcome.result()));
	else
		return ModifyStrategyOutcome(outcome.error());
}

void AegisClient::modifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyStrategyOutcomeCallable AegisClient::modifyStrategyCallable(const ModifyStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyStrategyTargetOutcome AegisClient::modifyStrategyTarget(const ModifyStrategyTargetRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStrategyTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStrategyTargetOutcome(ModifyStrategyTargetResult(outcome.result()));
	else
		return ModifyStrategyTargetOutcome(outcome.error());
}

void AegisClient::modifyStrategyTargetAsync(const ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyStrategyTargetOutcomeCallable AegisClient::modifyStrategyTargetCallable(const ModifyStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyBatchIgnoreVulOutcome AegisClient::modifyBatchIgnoreVul(const ModifyBatchIgnoreVulRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBatchIgnoreVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBatchIgnoreVulOutcome(ModifyBatchIgnoreVulResult(outcome.result()));
	else
		return ModifyBatchIgnoreVulOutcome(outcome.error());
}

void AegisClient::modifyBatchIgnoreVulAsync(const ModifyBatchIgnoreVulRequest& request, const ModifyBatchIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBatchIgnoreVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyBatchIgnoreVulOutcomeCallable AegisClient::modifyBatchIgnoreVulCallable(const ModifyBatchIgnoreVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBatchIgnoreVulOutcome()>>(
			[this, request]()
			{
			return this->modifyBatchIgnoreVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebshellOutcome AegisClient::describeWebshell(const DescribeWebshellRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebshellOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebshellOutcome(DescribeWebshellResult(outcome.result()));
	else
		return DescribeWebshellOutcome(outcome.error());
}

void AegisClient::describeWebshellAsync(const DescribeWebshellRequest& request, const DescribeWebshellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebshell(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebshellOutcomeCallable AegisClient::describeWebshellCallable(const DescribeWebshellRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebshellOutcome()>>(
			[this, request]()
			{
			return this->describeWebshell(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStratetyDetailOutcome AegisClient::describeStratetyDetail(const DescribeStratetyDetailRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStratetyDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStratetyDetailOutcome(DescribeStratetyDetailResult(outcome.result()));
	else
		return DescribeStratetyDetailOutcome(outcome.error());
}

void AegisClient::describeStratetyDetailAsync(const DescribeStratetyDetailRequest& request, const DescribeStratetyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStratetyDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStratetyDetailOutcomeCallable AegisClient::describeStratetyDetailCallable(const DescribeStratetyDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStratetyDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStratetyDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStratetyOutcome AegisClient::describeStratety(const DescribeStratetyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStratetyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStratetyOutcome(DescribeStratetyResult(outcome.result()));
	else
		return DescribeStratetyOutcome(outcome.error());
}

void AegisClient::describeStratetyAsync(const DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStratety(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStratetyOutcomeCallable AegisClient::describeStratetyCallable(const DescribeStratetyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStratetyOutcome()>>(
			[this, request]()
			{
			return this->describeStratety(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLoginLogsOutcome AegisClient::describeLoginLogs(const DescribeLoginLogsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoginLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoginLogsOutcome(DescribeLoginLogsResult(outcome.result()));
	else
		return DescribeLoginLogsOutcome(outcome.error());
}

void AegisClient::describeLoginLogsAsync(const DescribeLoginLogsRequest& request, const DescribeLoginLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoginLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLoginLogsOutcomeCallable AegisClient::describeLoginLogsCallable(const DescribeLoginLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoginLogsOutcome()>>(
			[this, request]()
			{
			return this->describeLoginLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::QueryCrackEventOutcome AegisClient::queryCrackEvent(const QueryCrackEventRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCrackEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCrackEventOutcome(QueryCrackEventResult(outcome.result()));
	else
		return QueryCrackEventOutcome(outcome.error());
}

void AegisClient::queryCrackEventAsync(const QueryCrackEventRequest& request, const QueryCrackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCrackEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::QueryCrackEventOutcomeCallable AegisClient::queryCrackEventCallable(const QueryCrackEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCrackEventOutcome()>>(
			[this, request]()
			{
			return this->queryCrackEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

