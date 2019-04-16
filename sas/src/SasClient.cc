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

SasClient::ModifyAutoDelConfigOutcome SasClient::modifyAutoDelConfig(const ModifyAutoDelConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoDelConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoDelConfigOutcome(ModifyAutoDelConfigResult(outcome.result()));
	else
		return ModifyAutoDelConfigOutcome(outcome.error());
}

void SasClient::modifyAutoDelConfigAsync(const ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAutoDelConfigOutcomeCallable SasClient::modifyAutoDelConfigCallable(const ModifyAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoDelConfig(request);
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

SasClient::ModifyDeleteVulWhitelistOutcome SasClient::modifyDeleteVulWhitelist(const ModifyDeleteVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeleteVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeleteVulWhitelistOutcome(ModifyDeleteVulWhitelistResult(outcome.result()));
	else
		return ModifyDeleteVulWhitelistOutcome(outcome.error());
}

void SasClient::modifyDeleteVulWhitelistAsync(const ModifyDeleteVulWhitelistRequest& request, const ModifyDeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeleteVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyDeleteVulWhitelistOutcomeCallable SasClient::modifyDeleteVulWhitelistCallable(const ModifyDeleteVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeleteVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyDeleteVulWhitelist(request);
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

SasClient::ModifyConcernNecessityOutcome SasClient::modifyConcernNecessity(const ModifyConcernNecessityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyConcernNecessityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyConcernNecessityOutcome(ModifyConcernNecessityResult(outcome.result()));
	else
		return ModifyConcernNecessityOutcome(outcome.error());
}

void SasClient::modifyConcernNecessityAsync(const ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyConcernNecessityOutcomeCallable SasClient::modifyConcernNecessityCallable(const ModifyConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->modifyConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

